#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

s32 fn_8016D2BC();                               /* extern */
M2C_UNK fn_8032CB2C();         /* extern */
M2C_UNK memcpy();               /* extern */
M2C_UNK memset();           /* extern */
extern s8 lbl_8034D100;
extern u8 lbl_8034D3C8;
extern u8 lbl_8034D3D8;
extern u8 lbl_8034D3E8;
extern M2C_UNK lbl_8034D4D0;
extern M2C_UNK lbl_80390580;
extern M2C_UNK lbl_803A2560;
extern u8 lbl_803A2680;
extern M2C_UNK lbl_803A2C94;
extern M2C_UNK lbl_803A2CB8;
extern M2C_UNK lbl_803A2CCC;
extern s8 *lbl_8049C300;
extern u32 lbl_8049C310;
extern s32 lbl_8049C314;
extern s32 lbl_8049C318;
extern s32 lbl_8049C31C;
extern s32 lbl_8049C320;
extern s32 lbl_8049D5E0;
extern s32 lbl_8049D5F8;
extern s32 lbl_8049D5FC;
extern s32 lbl_8049D600;
extern s32 lbl_8049D61C;
extern s32 lbl_8049D620;

s32 fn_800AB20C();
void fn_800ABA3C();
void fn_800ABFAC();
void fn_800AC080();
void fn_800AC178();
s32 fn_800AC218();
s32 fn_800AC268();
s32 fn_800AC2AC();
s32 fn_800AC314();
s32 fn_800AC43C();
s32 fn_800AC488();
s32 fn_800AC4D0();
s32 fn_800AC55C();
s32 fn_800AC59C();
s32 fn_800AC624();
s32 fn_800AC6AC();
s32 fn_800AC6E4();
s32 fn_800AC728();
void fn_800AC7D0();
s32 * fn_800AC810();
s32 fn_800AC870();
s32 fn_800AC960();
s32 * fn_800ACAE0();
s32 * fn_800ACB48();
s32 * fn_800ACBD8();
s32 * fn_800ACCE0();
void fn_800ACD48();
s32 fn_800ACDAC();
s32 fn_800ACE20();
void fn_800AD14C();
void fn_800AD1A0();
void fn_800AD254();
s32 fn_800AD3EC();
s16 fn_800AD4F8();
s8 fn_800AD50C();
s8 fn_800AD524();
s32 fn_800AD53C();
s32 fn_800AD58C();
s32 fn_800AD6DC();
s32 fn_800AD750();
s32 fn_800AD7DC();
s32 fn_800ADCCC();
void fn_800ADDB8();
void fn_800ADDF0();
void fn_800ADE80();
void fn_800ADF1C();
s32 fn_800ADF7C();
void fn_800AE084();
u32 fn_800AE08C();
s32 fn_800AE094();
s32 fn_800AE124();
void fn_800AE1A4();
s8 * fn_800AE1AC();
s32 fn_800AE2F0();
void fn_800AE304();
u32 fn_800AE428();
s32 fn_800AE478();
s32 fn_800AE4CC();
void fn_800AE504();
void fn_800AE534();
void fn_800AE53C();

s32 fn_800AB20C(void);

/*
Decompilation failure in function fn_800AB83C:

Found bctr instruction at g_net_ctrl.s line 1663, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void fn_800ABA3C(s32 arg0, s32 arg1, M2C_UNK arg_sp0);

void fn_800ABFAC(s32 arg0, M2C_UNK arg_sp0);

void fn_800AC080(s32 arg0, M2C_UNK arg_sp0);

void fn_800AC178(s32 arg0);

s32 fn_800AC218(void);

s32 fn_800AC268(void);

// fn_800AC2AC: definicion C reemplazada por asm (ver abajo)


s32 fn_800AC314(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

// fn_800AC43C: definicion C reemplazada por asm (ver abajo)


s32 fn_800AC488(s32 arg0, s8 *arg1) {
    s32 temp_r3;

    temp_r3 = fn_800AC43C((s32) arg1);
    if (temp_r3 < 0) {
        return 0;
    }
    return fn_800AC728(temp_r3, arg0);
}

s32 fn_800AC4D0(s32 arg0, u8 *arg1);

s32 fn_800AC55C(s32 arg0);

// fn_800AC59C: definicion C reemplazada por asm (ver abajo)


s32 fn_800AC624(s32 arg0);

// fn_800AC6AC: definicion C reemplazada por asm (ver abajo)


// fn_800AC6E4: definicion C reemplazada por asm (ver abajo)


// fn_800AC728: definicion C reemplazada por asm (ver abajo)


void fn_800AC7D0(s32 arg0);

// fn_800AC810: definicion C reemplazada por asm (ver abajo)


s32 fn_800AC870(s32 arg0, s8 *arg1, M2C_UNK arg_sp0);

s32 fn_800AC960(void);

// fn_800ACAE0: definicion C reemplazada por asm (ver abajo)


// fn_800ACB48: definicion C reemplazada por asm (ver abajo)


// fn_800ACBD8: definicion C reemplazada por asm (ver abajo)


// fn_800ACCE0: definicion C reemplazada por asm (ver abajo)


void fn_800ACD48(s32 *arg0, s32 arg1);

s32 fn_800ACDAC(void);

s32 fn_800ACE20(void);

void fn_800AD14C(void);

void fn_800AD1A0(void) {
    M2C_FIELD(fn_800914D8(), s32 *, 0xA4) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0x9C) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0x94) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0x8C) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0x198) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0xAC) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0x120) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0xA8) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0xA0) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0x98) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0x90) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0x19C) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0xB0) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0x124) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0xB4) = 0;
    M2C_FIELD(fn_800914D8(), s32 *, 0x128) = 1;
    M2C_FIELD(fn_800914D8(), s32 *, 0x12C) = 1;
}

void fn_800AD254(M2C_UNK arg_sp0);

// fn_800AD3EC: definicion C reemplazada por asm (ver abajo)


s16 fn_800AD4F8(s32 arg0);

s8 fn_800AD50C(s32 arg0);

// fn_800AD524: definicion C reemplazada por asm (ver abajo)



s32 fn_800AD58C(void);

// fn_800AD6DC: definicion C reemplazada por asm (ver abajo)


// fn_800AD750: definicion C reemplazada por asm (ver abajo)


s32 fn_800AD7DC(M2C_UNK arg_sp0);

// fn_800ADCCC: definicion C reemplazada por asm (ver abajo)


// fn_800ADDB8: definicion C reemplazada por asm (ver abajo)


// fn_800ADDF0: definicion C reemplazada por asm (ver abajo)


// fn_800ADE80: definicion C reemplazada por asm (ver abajo)


// fn_800ADF1C: definicion C reemplazada por asm (ver abajo)


s32 fn_800ADF7C(s32 arg0, s32 *arg1, s32 arg2, M2C_UNK arg_sp0);

void fn_800AE084(u32 arg0) {
    lbl_8049C310 = arg0;
}

u32 fn_800AE08C(void) {
    return lbl_8049C310;
}

// fn_800AE094: definicion C reemplazada por asm (ver abajo)


s32 fn_800AE124(void);

void fn_800AE1A4(s32 arg0) {
    lbl_8049D61C = arg0;
}

s8 *fn_800AE1AC(u32 arg0);

/*
Decompilation failure in function fn_800AE1D4:

Found bctr instruction at g_net_ctrl.s line 4739, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// fn_800AE2F0: definicion C reemplazada por asm (ver abajo)


// fn_800AE304: definicion C reemplazada por asm (ver abajo)


// fn_800AE428: definicion C reemplazada por asm (ver abajo)


// fn_800AE478: definicion C reemplazada por asm (ver abajo)


s32 fn_800AE4CC(void) {
    return (u32) (M2C_FIELD(fn_800914D8(), s32 *, 0x194) - 4) <= 3U;
}

// fn_800AE504: definicion C reemplazada por asm (ver abajo)


void fn_800AE534(s32 arg0) {
    fn_80169034((s8 *) arg0, 0);
}

// fn_800AE53C: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049F640;
extern float lbl_8049F648;
extern u8 jumptable_8034D3A8[];
extern u8 jumptable_8034D4A0[];
extern u8 lbl_8034D3F8[];
extern void _restgpr_22();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _restgpr_28();
extern void _restgpr_29();
extern void _savegpr_22();
extern void _savegpr_26();
extern void _savegpr_27();
extern void _savegpr_28();
extern void _savegpr_29();
s32 fn_800AB20C();
extern int fn_800AB83C();
void fn_800ABA3C();
void fn_800ABFAC();
void fn_800AC080();
void fn_800AC178();
s32 fn_800AC218();
s32 fn_800AC268();
s32 fn_800AC2AC(u8 *arg0, s32 *arg1);
s32 fn_800AC314();
s32 fn_800AC43C(s32 arg0);
s32 fn_800AC4D0();
s32 fn_800AC55C();
s32 fn_800AC59C(s32 arg0, M2C_UNK arg_sp0);
s32 fn_800AC624();
s32 fn_800AC6AC(s32 arg0);
s32 fn_800AC6E4(s32 arg0);
s32 fn_800AC728(s32 arg0, s32 arg1);
void fn_800AC7D0();
s32 *fn_800AC810(s32 arg0, s32 *arg1, s32 arg2, M2C_UNK arg_sp0);
s32 fn_800AC870();
s32 fn_800AC960();
s32 *fn_800ACAE0(s32 *arg0);
s32 *fn_800ACB48(s32 *arg0, s32 arg1, M2C_UNK arg_sp0);
s32 *fn_800ACBD8(s32 *arg0, s32 arg1);
s32 *fn_800ACCE0(s32 *arg0, s32 arg1);
void fn_800ACD48();
s32 fn_800ACDAC();
s32 fn_800ACE20();
void fn_800AD14C();
void fn_800AD254();
s32 fn_800AD3EC(void);
s16 fn_800AD4F8();
s8 fn_800AD50C();
s8 fn_800AD524(s32 arg0);
s32 fn_800AD53C();
s32 fn_800AD58C();
s32 fn_800AD6DC(void);
s32 fn_800AD750(s32 arg0);
s32 fn_800AD7DC();
s32 fn_800ADCCC(u8 *arg0);
void fn_800ADDB8(void);
void fn_800ADDF0(void);
void fn_800ADE80(s32 *arg0, s32 *arg1, s32 arg2, M2C_UNK arg_sp0);
void fn_800ADF1C(s32 *arg0, s32 arg1, M2C_UNK arg_sp0);
s32 fn_800ADF7C();
s32 fn_800AE094(void);
s32 fn_800AE124();
s8 * fn_800AE1AC();
extern int fn_800AE1D4();
s32 fn_800AE2F0(s32 arg0);
void fn_800AE304(s32 arg0, s32 arg1, M2C_UNK arg_sp0);
u32 fn_800AE428(void);
s32 fn_800AE478(void);
void fn_800AE504(void);
void fn_800AE53C(s32 *arg0, s32 *arg1, s32 arg2, u8 *arg3, s32 arg4, M2C_UNK arg_sp0);
extern void fn_8016EEA4();
extern void fn_8016EF64();
extern void fn_8016EF70();
extern void fn_8032C8F0();
extern void fn_8032CB3C();

// asm_to_cpp: fn_800AB20C
asm s32 fn_800AB20C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    addi r11, r1, 0x40
    bl _savegpr_27
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r27, 0x84(r3)
    li r28, 0x0
    cmplwi r27, 0x1
    bgt lbl_800AB264
    bl fn_80169518
    cmpw r27, r3
    li r28, -0x1
    bne lbl_800AB264
    li r28, 0x1
lbl_800AB264:
    bl fn_800914D8
    lwz r3, 0x194(r3)
    mr r4, r28
    bl fn_800ABA3C
    lis r3, lbl_803A2560@ha
    addi r29, r3, lbl_803A2560@l
    lwz r3, 0x1c(r29)
    addi r0, r3, 0x1
    stw r0, 0x1c(r29)
    lwz r3, 0x74(r29)
    addi r0, r3, 0x1
    stw r0, 0x74(r29)
    cmpwi r28, 0x1
    beq lbl_800AB2B0
    cmpwi r28, 0x0
    beq lbl_800AB2CC
    cmpwi r28, -0x1
    beq lbl_800AB2E8
    b lbl_800AB300
lbl_800AB2B0:
    lwz r3, 0x10(r29)
    addi r0, r3, 0x1
    stw r0, 0x10(r29)
    lwz r3, 0x70(r29)
    addi r0, r3, 0x1
    stw r0, 0x70(r29)
    b lbl_800AB300
lbl_800AB2CC:
    lwz r3, 0x14(r29)
    addi r0, r3, 0x1
    stw r0, 0x14(r29)
    lwz r3, 0x6c(r29)
    addi r0, r3, 0x1
    stw r0, 0x6c(r29)
    b lbl_800AB300
lbl_800AB2E8:
    lwz r3, 0x18(r29)
    addi r0, r3, 0x1
    stw r0, 0x18(r29)
    lwz r3, 0x68(r29)
    addi r0, r3, 0x1
    stw r0, 0x68(r29)
lbl_800AB300:
    cmpwi r28, 0x1
    beq lbl_800AB31C
    cmpwi r28, 0x0
    beq lbl_800AB330
    cmpwi r28, -0x1
    beq lbl_800AB340
    b lbl_800AB350
lbl_800AB31C:
    li r0, 0x1
    stw r0, 0x28(r29)
    li r0, -0x1
    stw r0, 0x80(r29)
    b lbl_800AB350
lbl_800AB330:
    li r0, 0x0
    stw r0, 0x28(r29)
    stw r0, 0x80(r29)
    b lbl_800AB350
lbl_800AB340:
    li r0, -0x1
    stw r0, 0x28(r29)
    li r0, 0x1
    stw r0, 0x80(r29)
lbl_800AB350:
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_800AB370
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x4
    bne lbl_800AB7C0
lbl_800AB370:
    bl fn_80169518
    mr r30, r3
    cmpwi r28, -0x1
    bne lbl_800AB444
    lwz r5, 0x24(r29)
    li r0, 0xfa
    divw r4, r5, r0
    addi r4, r4, 0x1
    li r0, 0x64
    divw r5, r5, r0
    addi r5, r5, 0x1
    slwi r0, r3, 2
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    add r6, r3, r0
    lwz r3, 0xcc(r6)
    cmpwi r3, 0x1
    bne lbl_800AB3D4
    la r3, lbl_8049F648
    lfs f1, 0xb4(r6)
    lfs f0, 0x4(r3)
    fmuls f1, f1, f0
    lfs f0, lbl_8049F648
    fsubs f0, f0, f1
    stfs f0, 0xb4(r6)
lbl_800AB3D4:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    add r6, r3, r0
    lwz r3, 0xd4(r6)
    cmpwi r3, 0x1
    bne lbl_800AB408
    la r3, lbl_8049F648
    lfs f1, 0xbc(r6)
    lfs f0, 0x4(r3)
    fmuls f1, f1, f0
    lfs f0, lbl_8049F648
    fsubs f0, f0, f1
    stfs f0, 0xbc(r6)
lbl_800AB408:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    add r6, r3, r0
    lwz r3, 0xdc(r6)
    cmpwi r3, 0x1
    bne lbl_800AB43C
    la r3, lbl_8049F648
    lfs f1, 0xc4(r6)
    lfs f0, 0x4(r3)
    fmuls f1, f1, f0
    lfs f0, lbl_8049F648
    fsubs f0, f0, f1
    stfs f0, 0xc4(r6)
lbl_800AB43C:
    li r6, -0x1
    b lbl_800AB514
lbl_800AB444:
    lwz r7, 0x24(r29)
    lis r4, 0x1f
    subi r4, r4, 0x7b80
    addi r0, r7, 0x1388
    divw r4, r4, r0
    lis r5, 0xf
    addi r6, r5, 0x4240
    mulli r5, r7, 0x3
    addi r0, r5, 0x2710
    divw r5, r6, r0
    addi r5, r5, 0x32
    slwi r0, r3, 2
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    add r6, r3, r0
    lwz r3, 0xcc(r6)
    cmpwi r3, 0x0
    bne lbl_800AB4A8
    la r3, lbl_8049F648
    lfs f1, 0xb4(r6)
    lfs f0, 0x8(r3)
    fmuls f1, f1, f0
    lfs f0, lbl_8049F648
    fsubs f0, f0, f1
    stfs f0, 0xb4(r6)
lbl_800AB4A8:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    add r6, r3, r0
    lwz r3, 0xd4(r6)
    cmpwi r3, 0x0
    bne lbl_800AB4DC
    la r3, lbl_8049F648
    lfs f1, 0xbc(r6)
    lfs f0, 0x8(r3)
    fmuls f1, f1, f0
    lfs f0, lbl_8049F648
    fsubs f0, f0, f1
    stfs f0, 0xbc(r6)
lbl_800AB4DC:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    add r6, r3, r0
    lwz r3, 0xdc(r6)
    cmpwi r3, 0x0
    bne lbl_800AB510
    la r3, lbl_8049F648
    lfs f1, 0xc4(r6)
    lfs f0, 0x8(r3)
    fmuls f1, f1, f0
    lfs f0, lbl_8049F648
    fsubs f0, f0, f1
    stfs f0, 0xc4(r6)
lbl_800AB510:
    li r6, 0x1
lbl_800AB514:
    lis r3, lbl_80390580@ha
    addi r31, r3, lbl_80390580@l
    add r3, r31, r0
    lfs f1, 0xb4(r3)
    lfs f0, 0xbc(r3)
    fmuls f1, f1, f0
    lfs f0, 0xc4(r3)
    fmuls f3, f0, f1
    lfd f2, lbl_8049F640
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r5, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f3
    fadds f31, f1, f0
    xoris r0, r6, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f31, f31, f0
    lwz r3, 0x24(r29)
    fctiwz f0, f31
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    li r5, 0x0
    lis r27, 0xf
    addi r6, r27, 0x423f
    bl fn_801728DC
    stw r3, 0x24(r29)
    addi r0, r30, 0x1
    clrlwi r6, r0, 31
    addi r0, r28, 0x1
    cmplwi r0, 0x1
    bgt lbl_800AB674
    lwz r4, 0x7c(r29)
    lis r3, 0x1f
    subi r3, r3, 0x7b80
    addi r0, r4, 0x1388
    divw r3, r3, r0
    addi r5, r27, 0x4240
    mulli r4, r4, 0x3
    addi r0, r4, 0x2710
    divw r4, r5, r0
    addi r4, r4, 0x32
    slwi r0, r6, 2
    add r6, r31, r0
    lwz r5, 0xcc(r6)
    cmpwi r5, 0x0
    bne lbl_800AB604
    la r5, lbl_8049F648
    lfs f1, 0xb4(r6)
    lfs f0, 0x8(r5)
    fmuls f1, f1, f0
    lfs f0, lbl_8049F648
    fsubs f0, f0, f1
    stfs f0, 0xb4(r6)
lbl_800AB604:
    lis r5, lbl_80390580@ha
    addi r5, r5, lbl_80390580@l
    add r6, r5, r0
    lwz r5, 0xd4(r6)
    cmpwi r5, 0x0
    bne lbl_800AB638
    la r5, lbl_8049F648
    lfs f1, 0xbc(r6)
    lfs f0, 0x8(r5)
    fmuls f1, f1, f0
    lfs f0, lbl_8049F648
    fsubs f0, f0, f1
    stfs f0, 0xbc(r6)
lbl_800AB638:
    lis r5, lbl_80390580@ha
    addi r5, r5, lbl_80390580@l
    add r6, r5, r0
    lwz r5, 0xdc(r6)
    cmpwi r5, 0x0
    bne lbl_800AB66C
    la r5, lbl_8049F648
    lfs f1, 0xc4(r6)
    lfs f0, 0x8(r5)
    fmuls f1, f1, f0
    lfs f0, lbl_8049F648
    fsubs f0, f0, f1
    stfs f0, 0xc4(r6)
lbl_800AB66C:
    li r6, 0x1
    b lbl_800AB72C
lbl_800AB674:
    lwz r4, 0x7c(r29)
    li r0, 0xfa
    divw r3, r4, r0
    addi r3, r3, 0x1
    li r0, 0x64
    divw r4, r4, r0
    addi r4, r4, 0x1
    slwi r0, r6, 2
    add r6, r31, r0
    lwz r5, 0xcc(r6)
    cmpwi r5, 0x1
    bne lbl_800AB6C0
    la r5, lbl_8049F648
    lfs f1, 0xb4(r6)
    lfs f0, 0x4(r5)
    fmuls f1, f1, f0
    lfs f0, lbl_8049F648
    fsubs f0, f0, f1
    stfs f0, 0xb4(r6)
lbl_800AB6C0:
    lis r5, lbl_80390580@ha
    addi r5, r5, lbl_80390580@l
    add r6, r5, r0
    lwz r5, 0xd4(r6)
    cmpwi r5, 0x1
    bne lbl_800AB6F4
    la r5, lbl_8049F648
    lfs f1, 0xbc(r6)
    lfs f0, 0x4(r5)
    fmuls f1, f1, f0
    lfs f0, lbl_8049F648
    fsubs f0, f0, f1
    stfs f0, 0xbc(r6)
lbl_800AB6F4:
    lis r5, lbl_80390580@ha
    addi r5, r5, lbl_80390580@l
    add r6, r5, r0
    lwz r5, 0xdc(r6)
    cmpwi r5, 0x1
    bne lbl_800AB728
    la r5, lbl_8049F648
    lfs f1, 0xc4(r6)
    lfs f0, 0x4(r5)
    fmuls f1, f1, f0
    lfs f0, lbl_8049F648
    fsubs f0, f0, f1
    stfs f0, 0xc4(r6)
lbl_800AB728:
    li r6, -0x1
lbl_800AB72C:
    lis r5, lbl_80390580@ha
    addi r5, r5, lbl_80390580@l
    add r5, r5, r0
    lfs f1, 0xb4(r5)
    lfs f0, 0xbc(r5)
    fmuls f1, f1, f0
    lfs f0, 0xc4(r5)
    fmuls f3, f0, f1
    lfd f2, lbl_8049F640
    xoris r0, r3, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f2
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f3
    fadds f1, f1, f0
    xoris r0, r6, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fmuls f1, f1, f0
    lwz r3, 0x7c(r29)
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r4, 0x1c(r1)
    li r5, 0x0
    lis r6, 0xf
    addi r6, r6, 0x423f
    bl fn_801728DC
    stw r3, 0x7c(r29)
    fctiwz f0, f31
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    bl fn_800ABFAC
lbl_800AB7C0:
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x2
    beq lbl_800AB808
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x6
    beq lbl_800AB808
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x3
    beq lbl_800AB808
    bl fn_800914D8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x7
    beq lbl_800AB808
    li r3, 0x3
    bl fn_800AC080
lbl_800AB808:
    bl fn_800914D8
    lwz r3, 0x194(r3)
    bl fn_800AC178
    li r3, 0x1
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_800AB83C
asm int fn_800AB83C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    cmplwi r3, 0x7
    bgt lbl_800ABA28
    lis r4, jumptable_8034D3A8@ha
    addi r4, r4, jumptable_8034D3A8@l
    slwi r0, r3, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    bl fn_800AD3EC
    cmpwi r3, 0x0
    bne lbl_800AB87C
    bl fn_800AD1A0
lbl_800AB87C:
    bl fn_800914D8
    lwz r3, 0xa4(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r31, r3
    bl fn_800914D8
    stw r31, 0xa4(r3)
    bl fn_800AD254
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x4
    stw r0, 0xc(r3)
    b lbl_800ABA18
    bl fn_800AD3EC
    cmpwi r3, 0x0
    bne lbl_800AB8CC
    bl fn_800AD1A0
lbl_800AB8CC:
    bl fn_800914D8
    lwz r3, 0xa8(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r31, r3
    bl fn_800914D8
    stw r31, 0xa8(r3)
    bl fn_800AD254
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x4
    stw r0, 0xc(r3)
    b lbl_800ABA18
    bl fn_800914D8
    lwz r3, 0x188(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r31, r3
    bl fn_800914D8
    stw r31, 0x188(r3)
    b lbl_800ABA18
    bl fn_800914D8
    lwz r3, 0x18c(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r31, r3
    bl fn_800914D8
    stw r31, 0x18c(r3)
    b lbl_800ABA18
    bl fn_800914D8
    lwz r3, 0x148(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r31, r3
    bl fn_800914D8
    stw r31, 0x148(r3)
    b lbl_800ABA18
    bl fn_800914D8
    lwz r3, 0x14c(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r31, r3
    bl fn_800914D8
    stw r31, 0x14c(r3)
    b lbl_800ABA18
    bl fn_800914D8
    lwz r3, 0x168(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r31, r3
    bl fn_800914D8
    stw r31, 0x168(r3)
    b lbl_800ABA18
    bl fn_800914D8
    lwz r3, 0x16c(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r31, r3
    bl fn_800914D8
    stw r31, 0x16c(r3)
    b lbl_800ABA18
    b lbl_800ABA28
lbl_800ABA18:
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800ABA28:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800ABA3C
asm void fn_800ABA3C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r31, r4
    bl fn_800AE4CC
    mr r30, r3
    cmpwi r29, 0x4
    beq lbl_800ABB80
    bge lbl_800ABA84
    cmpwi r29, 0x1
    beq lbl_800ABC68
    bge lbl_800ABD2C
    cmpwi r29, 0x0
    bge lbl_800ABA98
    b lbl_800ABF94
lbl_800ABA84:
    cmpwi r29, 0x8
    bge lbl_800ABF94
    cmpwi r29, 0x6
    bge lbl_800ABD2C
    b lbl_800ABC68
lbl_800ABA98:
    bl fn_800AD3EC
    cmpwi r3, 0x0
    bne lbl_800ABAA8
    bl fn_800AD1A0
lbl_800ABAA8:
    cmpwi r31, 0x1
    beq lbl_800ABAC4
    cmpwi r31, 0x0
    beq lbl_800ABAFC
    cmpwi r31, -0x1
    beq lbl_800ABB34
    b lbl_800ABB68
lbl_800ABAC4:
    slwi r31, r30, 2
    bl fn_800914D8
    add r3, r3, r31
    lwz r3, 0x8c(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r31
    stw r30, 0x8c(r3)
    b lbl_800ABB68
lbl_800ABAFC:
    slwi r31, r30, 2
    bl fn_800914D8
    add r3, r3, r31
    lwz r3, 0x94(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r31
    stw r30, 0x94(r3)
    b lbl_800ABB68
lbl_800ABB34:
    slwi r31, r30, 2
    bl fn_800914D8
    add r3, r3, r31
    lwz r3, 0x9c(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r31
    stw r30, 0x9c(r3)
lbl_800ABB68:
    bl fn_800AD254
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x4
    stw r0, 0xc(r3)
    b lbl_800ABF84
lbl_800ABB80:
    bl fn_800AD3EC
    cmpwi r3, 0x0
    bne lbl_800ABB90
    bl fn_800AD1A0
lbl_800ABB90:
    cmpwi r31, 0x1
    beq lbl_800ABBAC
    cmpwi r31, 0x0
    beq lbl_800ABBE4
    cmpwi r31, -0x1
    beq lbl_800ABC1C
    b lbl_800ABC50
lbl_800ABBAC:
    slwi r31, r30, 2
    bl fn_800914D8
    add r3, r3, r31
    lwz r3, 0x8c(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r31
    stw r30, 0x8c(r3)
    b lbl_800ABC50
lbl_800ABBE4:
    slwi r31, r30, 2
    bl fn_800914D8
    add r3, r3, r31
    lwz r3, 0x94(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r31
    stw r30, 0x94(r3)
    b lbl_800ABC50
lbl_800ABC1C:
    slwi r31, r30, 2
    bl fn_800914D8
    add r3, r3, r31
    lwz r3, 0x9c(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r31
    stw r30, 0x9c(r3)
lbl_800ABC50:
    bl fn_800AD254
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x4
    stw r0, 0xc(r3)
    b lbl_800ABF84
lbl_800ABC68:
    cmpwi r31, 0x1
    beq lbl_800ABC84
    cmpwi r31, 0x0
    beq lbl_800ABCBC
    cmpwi r31, -0x1
    beq lbl_800ABCF4
    b lbl_800ABF84
lbl_800ABC84:
    slwi r31, r3, 2
    bl fn_800914D8
    add r3, r3, r31
    lwz r3, 0x170(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r31
    stw r30, 0x170(r3)
    b lbl_800ABF84
lbl_800ABCBC:
    slwi r31, r3, 2
    bl fn_800914D8
    add r3, r3, r31
    lwz r3, 0x178(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r31
    stw r30, 0x178(r3)
    b lbl_800ABF84
lbl_800ABCF4:
    slwi r31, r3, 2
    bl fn_800914D8
    add r3, r3, r31
    lwz r3, 0x180(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r31
    stw r30, 0x180(r3)
    b lbl_800ABF84
lbl_800ABD2C:
    cmpwi r29, 0x2
    beq lbl_800ABD3C
    cmpwi r29, 0x6
    bne lbl_800ABE00
lbl_800ABD3C:
    cmpwi r31, 0x1
    beq lbl_800ABD58
    cmpwi r31, 0x0
    beq lbl_800ABD90
    cmpwi r31, -0x1
    beq lbl_800ABDC8
    b lbl_800ABEC0
lbl_800ABD58:
    slwi r29, r3, 2
    bl fn_800914D8
    add r3, r3, r29
    lwz r3, 0x130(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r29
    stw r30, 0x130(r3)
    b lbl_800ABEC0
lbl_800ABD90:
    slwi r29, r3, 2
    bl fn_800914D8
    add r3, r3, r29
    lwz r3, 0x138(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r29
    stw r30, 0x138(r3)
    b lbl_800ABEC0
lbl_800ABDC8:
    slwi r29, r3, 2
    bl fn_800914D8
    add r3, r3, r29
    lwz r3, 0x140(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r29
    stw r30, 0x140(r3)
    b lbl_800ABEC0
lbl_800ABE00:
    cmpwi r31, 0x1
    beq lbl_800ABE1C
    cmpwi r31, 0x0
    beq lbl_800ABE54
    cmpwi r31, -0x1
    beq lbl_800ABE8C
    b lbl_800ABEC0
lbl_800ABE1C:
    slwi r29, r3, 2
    bl fn_800914D8
    add r3, r3, r29
    lwz r3, 0x150(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r29
    stw r30, 0x150(r3)
    b lbl_800ABEC0
lbl_800ABE54:
    slwi r29, r3, 2
    bl fn_800914D8
    add r3, r3, r29
    lwz r3, 0x158(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r29
    stw r30, 0x158(r3)
    b lbl_800ABEC0
lbl_800ABE8C:
    slwi r29, r3, 2
    bl fn_800914D8
    add r3, r3, r29
    lwz r3, 0x160(r3)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r29
    stw r30, 0x160(r3)
lbl_800ABEC0:
    lis r3, lbl_803A2560@ha
    addi r3, r3, lbl_803A2560@l
    addi r3, r3, 0x94
    bl fn_800AC43C
    mr r30, r3
    cmpwi r3, 0x0
    blt lbl_800ABF84
    bl fn_800914D8
    mulli r0, r30, 0x5c
    add r30, r3, r0
    cmpwi r31, 0x1
    beq lbl_800ABF04
    cmpwi r31, 0x0
    beq lbl_800ABF24
    cmpwi r31, -0x1
    beq lbl_800ABF44
    b lbl_800ABF60
lbl_800ABF04:
    lwz r3, 0x724(r30)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    stw r3, 0x724(r30)
    b lbl_800ABF60
lbl_800ABF24:
    lwz r3, 0x728(r30)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    stw r3, 0x728(r30)
    b lbl_800ABF60
lbl_800ABF44:
    lwz r3, 0x72c(r30)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    stw r3, 0x72c(r30)
lbl_800ABF60:
    lwz r3, 0x730(r30)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0x2
    subi r6, r6, 0x7961
    bl fn_801728DC
    stw r3, 0x730(r30)
    b lbl_800ABF84
    b lbl_800ABF94
lbl_800ABF84:
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800ABF94:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800ABFAC
asm void fn_800ABFAC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    bl fn_800AE4CC
    mr r31, r3
    bl fn_800AD3EC
    cmpwi r3, 0x0
    bne lbl_800ABFDC
    bl fn_800AD1A0
lbl_800ABFDC:
    cmpwi r29, 0x2710
    ble lbl_800ABFE8
    li r29, 0x2710
lbl_800ABFE8:
    slwi r30, r31, 2
    bl fn_800914D8
    add r3, r3, r30
    lwz r3, 0xac(r3)
    mr r4, r29
    li r5, 0x0
    lis r6, 0xf
    addi r6, r6, 0x423f
    bl fn_801728DC
    mr r31, r3
    bl fn_800914D8
    add r3, r3, r30
    stw r31, 0xac(r3)
    bl fn_800914D8
    add r3, r3, r30
    lwz r31, 0xac(r3)
    bl fn_800914D8
    add r3, r3, r30
    lwz r0, 0x198(r3)
    cmpw r0, r31
    bge lbl_800AC054
    bl fn_800914D8
    add r3, r3, r30
    lwz r31, 0xac(r3)
    bl fn_800914D8
    add r3, r3, r30
    stw r31, 0x198(r3)
lbl_800AC054:
    bl fn_800AD254
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x5
    stw r0, 0xc(r3)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800AC080
asm void fn_800AC080() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    bl fn_800AD3EC
    cmpwi r3, 0x0
    bne lbl_800AC0A8
    bl fn_800AD1A0
lbl_800AC0A8:
    bl fn_800914D8
    lwz r3, 0xb4(r3)
    bl fn_800AD4F8
    mr r31, r3
    bl fn_800914D8
    lwz r3, 0xb4(r3)
    bl fn_800AD50C
    mr r30, r3
    bl fn_800914D8
    lwz r3, 0xb4(r3)
    bl fn_800AD524
    cmpwi r29, 0x0
    bgt lbl_800AC118
    cmpwi r3, 0x0
    beq lbl_800AC0E8
    li r30, 0x3
lbl_800AC0E8:
    li r5, 0x0
    cmpwi r31, 0x0
    bge lbl_800AC100
    neg r0, r31
    srawi r0, r0, 4
    addze r5, r0
lbl_800AC100:
    addi r5, r5, 0x2
    cmpwi r5, 0x3f
    ble lbl_800AC110
    li r5, 0x3f
lbl_800AC110:
    subf r3, r5, r31
    b lbl_800AC138
lbl_800AC118:
    add r3, r31, r3
    cmpwi r30, 0x0
    bne lbl_800AC128
    addi r3, r3, 0x2
lbl_800AC128:
    cmpwi r30, 0x0
    beq lbl_800AC134
    subi r30, r30, 0x1
lbl_800AC134:
    li r5, 0x0
lbl_800AC138:
    mr r4, r30
    bl fn_800AD53C
    mr r31, r3
    bl fn_800914D8
    stw r31, 0xb4(r3)
    bl fn_800AD254
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x5
    stw r0, 0xc(r3)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800AC178
asm void fn_800AC178() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    lwz r30, lbl_8049C300
    bl fn_80169518
    cmpwi r31, 0x0
    beq lbl_800AC1A8
    cmpwi r31, 0x4
    bne lbl_800AC200
lbl_800AC1A8:
    cmpwi r3, 0x0
    beq lbl_800AC1BC
    cmpwi r3, 0x1
    beq lbl_800AC1D8
    b lbl_800AC1F0
lbl_800AC1BC:
    lwz r31, 0x28(r30)
    bl fn_800914D8
    stw r31, 0x128(r3)
    lwz r31, 0x118(r30)
    bl fn_800914D8
    stw r31, 0x12c(r3)
    b lbl_800AC1F0
lbl_800AC1D8:
    lwz r31, 0xa0(r30)
    bl fn_800914D8
    stw r31, 0x128(r3)
    lwz r31, 0x190(r30)
    bl fn_800914D8
    stw r31, 0x12c(r3)
lbl_800AC1F0:
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800AC200:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AC218
asm s32 fn_800AC218() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80168FA0
    cmpwi r3, 0x0
    beq lbl_800AC240
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800AC240:
    bl fn_800AC268
    bl fn_800914D8
    lwz r0, 0xc(r3)
    clrlwi r3, r0, 31
    subic r0, r3, 0x1
    subfe r3, r0, r3
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AC268
asm s32 fn_800AC268() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8016CD94
    cmpwi r3, 0x0
    beq lbl_800AC298
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
    li r3, 0x1
    b lbl_800AC29C
lbl_800AC298:
    li r3, 0x0
lbl_800AC29C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AC2AC
asm s32 fn_800AC2AC(u8 *arg0, s32 *arg1) {
    nofralloc
    li r9, 0x0
    li r6, 0x0
    li r7, 0xa
    li r0, 0xc
    mtctr r0
lbl_800AC2C0:
    lbz r5, 0x0(r3)
    subi r0, r5, 0x30
    extsb r10, r0
    clrlwi r0, r10, 24
    cmplwi r0, 0xa
    ble lbl_800AC2E0
    li r3, 0x0
    blr
lbl_800AC2E0:
    srawi r8, r10, 31
    mulhwu r0, r9, r7
    mullw r5, r6, r7
    mulli r6, r9, 0xa
    add r0, r0, r5
    addc r9, r10, r6
    adde r6, r8, r0
    addi r3, r3, 0x1
    bdnz lbl_800AC2C0
    stw r9, 0x4(r4)
    stw r6, 0x0(r4)
    li r3, 0x1
    blr
}

// asm_to_cpp: fn_800AC314
asm s32 fn_800AC314() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r31, r3
    li r0, 0x0
    stw r0, 0x14(r1)
    stw r0, 0x10(r1)
    mr r3, r4
    addi r4, r1, 0x10
    bl fn_800AC2AC
    cmpwi r3, 0x0
    bne lbl_800AC354
    li r3, -0x2
    b lbl_800AC424
lbl_800AC354:
    cmpwi r31, 0x0
    bge lbl_800AC374
    bl fn_8016CF08
    mr r31, r3
    cmpwi r3, 0x0
    bge lbl_800AC374
    li r3, -0x4
    b lbl_800AC424
lbl_800AC374:
    mr r3, r31
    lwz r5, 0x10(r1)
    lwz r6, 0x14(r1)
    bl fn_8016D0B8
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_800AC420
    bl fn_800914D8
    mulli r0, r31, 0x5c
    add r31, r3, r0
    li r0, 0x10
    stw r0, 0x8(r1)
    addi r3, r1, 0x18
    lis r4, lbl_8034D4D0@ha
    addi r4, r4, lbl_8034D4D0@l
    addi r4, r4, 0xfc
    lwz r5, 0x10(r1)
    lwz r6, 0x14(r1)
    opword 0x4CC63182
    bl sprintf
    lwz r0, 0x6dc(r31)
    rlwinm r0, r0, 0, 31, 28
    stw r0, 0x6dc(r31)
    addi r3, r31, 0x6e4
    addi r4, r1, 0x8
    addi r5, r1, 0x18
    li r6, 0x0
    bl fn_8016F85C
    addi r3, r31, 0x704
    addi r4, r1, 0x8
    addi r5, r1, 0x18
    li r6, 0x0
    bl fn_8016F85C
    li r0, 0x0
    stw r0, 0x734(r31)
    stw r0, 0x730(r31)
    stw r0, 0x72c(r31)
    stw r0, 0x728(r31)
    stw r0, 0x724(r31)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x9
    stw r0, 0xc(r3)
lbl_800AC420:
    mr r3, r30
lbl_800AC424:
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800AC43C
asm s32 fn_800AC43C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl fn_800AC2AC
    cmpwi r3, 0x0
    beq lbl_800AC474
    lwz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    bl fn_8016D030
    b lbl_800AC478
lbl_800AC474:
    li r3, -0x2
lbl_800AC478:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AC4D0
asm s32 fn_800AC4D0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    bge lbl_800AC4FC
    li r3, -0x1
    b lbl_800AC544
lbl_800AC4FC:
    bl fn_800914D8
    mulli r0, r30, 0x5c
    add r3, r3, r0
    li r0, 0x10
    stw r0, 0x8(r1)
    lwz r0, 0x6dc(r3)
    ori r0, r0, 0x2
    stw r0, 0x6dc(r3)
    addi r3, r3, 0x6e4
    addi r4, r1, 0x8
    mr r5, r31
    li r6, 0x0
    bl fn_8016F85C
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x9
    stw r0, 0xc(r3)
    li r3, 0x0
lbl_800AC544:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800AC55C
asm s32 fn_800AC55C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8016D1C0
    cmpwi r3, 0x0
    beq lbl_800AC578
    b lbl_800AC58C
lbl_800AC578:
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x9
    stw r0, 0xc(r3)
    li r3, 0x0
lbl_800AC58C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AC59C
asm s32 fn_800AC59C(s32 arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    li r30, 0x0
    li r29, 0x0
    li r31, 0x0
    b lbl_800AC5F8
lbl_800AC5C4:
    bl fn_800914D8
    add r3, r3, r31
    lwz r0, 0x4dc(r3)
    cmpwi r0, 0x0
    beq lbl_800AC5F0
    mr r3, r29
    mr r4, r28
    bl fn_800AC728
    cmpwi r3, 0x0
    beq lbl_800AC5F0
    addi r30, r30, 0x1
lbl_800AC5F0:
    addi r29, r29, 0x1
    addi r31, r31, 0x8
lbl_800AC5F8:
    bl fn_800914D8
    lwz r0, 0x1d8(r3)
    cmpw r29, r0
    blt lbl_800AC5C4
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800AC624
asm s32 fn_800AC624() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800914D8
    slwi r0, r30, 3
    add r31, r3, r0
    bl fn_800914D8
    mulli r0, r30, 0x5c
    add r4, r3, r0
    lwz r3, 0x4dc(r31)
    cmpwi r3, 0x1
    ble lbl_800AC678
    lwz r0, 0x6dc(r4)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800AC678
    li r3, 0x1
    b lbl_800AC694
lbl_800AC678:
    cmpwi r3, 0x3
    ble lbl_800AC694
    lwz r0, 0x6dc(r4)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800AC694
    li r3, 0x2
lbl_800AC694:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AC6AC
asm s32 fn_800AC6AC(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800914D8
    slwi r0, r31, 3
    add r3, r3, r0
    lwz r3, 0x4e0(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AC6E4
asm s32 fn_800AC6E4(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800914D8
    mulli r0, r31, 0x5c
    add r3, r3, r0
    lwz r0, 0x6dc(r3)
    rlwinm r3, r0, 0, 28, 28
    subic r0, r3, 0x1
    subfe r3, r0, r3
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AC728
asm s32 fn_800AC728(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_800914D8
    slwi r0, r30, 3
    add r3, r3, r0
    lwz r0, 0x4dc(r3)
    cmpwi r0, 0x0
    bne lbl_800AC764
    li r3, 0x0
    b lbl_800AC7B8
lbl_800AC764:
    cmpwi r31, 0x0
    bne lbl_800AC774
    li r3, 0x1
    b lbl_800AC7B8
lbl_800AC774:
    cmpwi r31, 0x1
    bne lbl_800AC794
    mr r3, r30
    bl fn_800AC6E4
    cmpwi r3, 0x0
    bne lbl_800AC794
    li r3, 0x1
    b lbl_800AC7B8
lbl_800AC794:
    cmpwi r31, 0x2
    bne lbl_800AC7B4
    mr r3, r30
    bl fn_800AC6E4
    cmpwi r3, 0x0
    beq lbl_800AC7B4
    li r3, 0x1
    b lbl_800AC7B8
lbl_800AC7B4:
    li r3, 0x0
lbl_800AC7B8:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AC7D0
asm void fn_800AC7D0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800914D8
    mulli r0, r31, 0x5c
    add r3, r3, r0
    lwz r0, 0x6dc(r3)
    ori r0, r0, 0x8
    stw r0, 0x6dc(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AC810
asm s32 *fn_800AC810(s32 arg0, s32 *arg1, s32 arg2, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl fn_800914D8
    mulli r0, r29, 0x5c
    add r5, r3, r0
    stw r31, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    addi r5, r5, 0x6e4
    li r6, 0x0
    bl fn_8016F948
    mr r3, r30
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800AC870
asm s32 fn_800AC870() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r3, r29
    li r4, 0x0
    li r5, 0x40
    bl memset
    mr r3, r28
    bl fn_800AC624
    stw r3, 0x0(r29)
    cmpwi r3, 0x0
    bne lbl_800AC8B4
    b lbl_800AC948
lbl_800AC8B4:
    bl fn_800914D8
    slwi r0, r28, 3
    add r30, r3, r0
    bl fn_800914D8
    mulli r0, r28, 0x5c
    add r31, r3, r0
    lwz r0, 0x724(r31)
    stw r0, 0x4(r29)
    lwz r0, 0x728(r31)
    stw r0, 0x8(r29)
    lwz r0, 0x72c(r31)
    stw r0, 0xc(r29)
    lwz r0, 0x730(r31)
    stw r0, 0x10(r29)
    lwz r0, 0x734(r31)
    stw r0, 0x14(r29)
    lwz r0, 0x6dc(r31)
    stw r0, 0x38(r29)
    lwz r0, 0x4e0(r30)
    stw r0, 0x3c(r29)
    li r0, 0x10
    stw r0, 0x8(r1)
    addi r3, r29, 0x18
    addi r4, r1, 0x8
    addi r5, r31, 0x6e4
    li r6, 0x0
    bl fn_8016F948
    mr r3, r28
    bl fn_800AC6E4
    cmpwi r3, 0x0
    bne lbl_800AC944
    addi r3, r29, 0x28
    addi r4, r1, 0x8
    addi r5, r31, 0x704
    li r6, 0x0
    bl fn_8016F948
lbl_800AC944:
    lwz r3, 0x0(r29)
lbl_800AC948:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800AC960
asm s32 fn_800AC960() {
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    stw r31, 0x24c(r1)
    stw r30, 0x248(r1)
    li r31, 0x0
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800AC9AC
    lwz r0, lbl_8049C314
    lis r30, lbl_803A2C94@ha
    stw r0, lbl_803A2C94@l(r30)
    addi r3, r1, 0x2c
    bl fn_800ACAE0
    addi r4, r30, lbl_803A2C94@l
    stw r3, 0x4(r4)
    li r31, 0x2
lbl_800AC9AC:
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_800AC9EC
    lwz r4, lbl_8049C318
    slwi r0, r31, 2
    lis r3, lbl_803A2C94@ha
    addi r30, r3, lbl_803A2C94@l
    stwx r4, r30, r0
    addi r3, r1, 0xcc
    bl fn_800ACB48
    addi r0, r31, 0x1
    slwi r0, r0, 2
    stwx r3, r30, r0
    addi r31, r31, 0x2
lbl_800AC9EC:
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800ACA2C
    lwz r4, lbl_8049C31C
    slwi r0, r31, 2
    lis r3, lbl_803A2C94@ha
    addi r30, r3, lbl_803A2C94@l
    stwx r4, r30, r0
    addi r3, r1, 0x68
    bl fn_800ACBD8
    addi r0, r31, 0x1
    slwi r0, r0, 2
    stwx r3, r30, r0
    addi r31, r31, 0x2
lbl_800ACA2C:
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_800ACA7C
    lwz r4, lbl_8049C320
    slwi r0, r31, 2
    lis r3, lbl_803A2C94@ha
    addi r30, r3, lbl_803A2C94@l
    stwx r4, r30, r0
    addi r3, r1, 0x8
    bl fn_800ACCE0
    addi r0, r31, 0x1
    slwi r0, r0, 2
    stwx r3, r30, r0
    addi r31, r31, 0x2
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0xc(r3)
lbl_800ACA7C:
    cmpwi r31, 0x0
    bne lbl_800ACA94
    li r0, 0x1
    stw r0, lbl_8049D5E0
    li r3, 0x0
    b lbl_800ACAC8
lbl_800ACA94:
    li r4, 0x0
    slwi r0, r31, 2
    lis r3, lbl_803A2C94@ha
    addi r31, r3, lbl_803A2C94@l
    stwx r4, r31, r0
    bl fn_8016ECD8
    mr r3, r31
    bl fn_8016EEA4
    li r3, 0x0
    bl fn_8016ED48
    li r0, 0xf
    stw r0, lbl_8049D5E0
    li r3, 0x1
lbl_800ACAC8:
    lwz r31, 0x24c(r1)
    lwz r30, 0x248(r1)
    lwz r0, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

// asm_to_cpp: fn_800ACAE0
asm s32 *fn_800ACAE0(s32 *arg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    li r0, 0x10
    stw r0, 0x8(r1)
    bl fn_8016D31C
    stw r3, 0x24(r1)
    bl fn_800914D8
    mr r5, r3
    addi r3, r1, 0x28
    addi r4, r1, 0x8
    addi r5, r5, 0x2c
    li r6, 0x0
    bl fn_8016F948
    mr r3, r31
    addi r4, r1, 0x10
    li r5, 0x28
    bl fn_800ADE80
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_800ACB48
asm s32 *fn_800ACB48(s32 *arg0, s32 arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_27
    mr r27, r3
    li r28, 0x0
    li r31, 0x0
    addi r30, r1, 0x8
lbl_800ACB6C:
    mr r3, r28
    bl fn_8016D2BC
    cmpwi r3, 0x0
    bgt lbl_800ACB94
    bl rand
    mr r29, r3
    bl rand
    slwi r0, r3, 16
    or r0, r0, r29
    oris r3, r0, 0x8000
lbl_800ACB94:
    add r4, r30, r31
    stw r3, 0x14(r4)
    addi r28, r28, 0x1
    addi r31, r31, 0x4
    cmpwi r28, 0x40
    blt lbl_800ACB6C
    mr r3, r27
    addi r4, r1, 0x8
    li r5, 0x114
    bl fn_800ADE80
    mr r3, r27
    addi r11, r1, 0x140
    bl _restgpr_27
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// asm_to_cpp: fn_800ACBD8
asm s32 *fn_800ACBD8(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    bl fn_800AD3EC
    cmpwi r3, 0x0
    bne lbl_800ACC00
    bl fn_800AD1A0
    bl fn_800AD254
lbl_800ACC00:
    addi r4, r1, 0x4
    li r3, 0x0
    li r0, 0x9
    mtctr r0
lbl_800ACC10:
    stw r3, 0x4(r4)
    stwu r3, 0x8(r4)
    bdnz lbl_800ACC10
    bl fn_800914D8
    lwz r0, 0x8c(r3)
    stw r0, 0x1c(r1)
    bl fn_800914D8
    lwz r0, 0x94(r3)
    stw r0, 0x20(r1)
    bl fn_800914D8
    lwz r0, 0x9c(r3)
    stw r0, 0x24(r1)
    bl fn_800914D8
    lwz r0, 0xa4(r3)
    stw r0, 0x28(r1)
    bl fn_800914D8
    lwz r0, 0xac(r3)
    stw r0, 0x2c(r1)
    bl fn_800914D8
    lwz r0, 0xb4(r3)
    stw r0, 0x30(r1)
    bl fn_800914D8
    lwz r0, 0x90(r3)
    stw r0, 0x34(r1)
    bl fn_800914D8
    lwz r0, 0x98(r3)
    stw r0, 0x38(r1)
    bl fn_800914D8
    lwz r0, 0xa0(r3)
    stw r0, 0x3c(r1)
    bl fn_800914D8
    lwz r0, 0xa8(r3)
    stw r0, 0x40(r1)
    bl fn_800914D8
    lwz r0, 0xb0(r3)
    stw r0, 0x44(r1)
    bl fn_800914D8
    lwz r0, 0x128(r3)
    stw r0, 0x48(r1)
    bl fn_800914D8
    lwz r0, 0x12c(r3)
    stw r0, 0x4c(r1)
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x48
    bl fn_800ADE80
    mr r3, r31
    lwz r31, 0x5c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_800ACCE0
asm s32 *fn_800ACCE0(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    addi r4, r1, 0x4
    li r3, 0x0
    li r0, 0x3
    mtctr r0
lbl_800ACD04:
    stw r3, 0x4(r4)
    stwu r3, 0x8(r4)
    bdnz lbl_800ACD04
    addi r3, r1, 0x1c
    la r4, lbl_8049D600
    li r5, 0x4
    bl memcpy
    mr r3, r31
    addi r4, r1, 0x8
    li r5, 0x18
    bl fn_800ADE80
    mr r3, r31
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800ACD48
asm void fn_800ACD48() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r31, lbl_8049D600
    li r30, 0x0
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    blt lbl_800ACD78
    bl fn_8016D2BC
    mr r30, r3
lbl_800ACD78:
    cmpw r30, r31
    beq lbl_800ACD94
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x20
    stw r0, 0xc(r3)
    stw r30, lbl_8049D600
lbl_800ACD94:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800ACDAC
asm s32 fn_800ACDAC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0xc(r3)
    li r0, 0x0
    lis r3, lbl_803A2680@ha
    stb r0, lbl_803A2680@l(r3)
    bl fn_800AD3EC
    cmpwi r3, 0x0
    bne lbl_800ACDE4
    bl fn_800AD1A0
lbl_800ACDE4:
    bl fn_8016ECD8
    la r3, lbl_8049D620
    lis r4, lbl_803A2680@ha
    addi r4, r4, lbl_803A2680@l
    li r5, 0x400
    bl fn_8016EF64
    li r3, 0x0
    bl fn_8016ED48
    li r0, 0x10
    stw r0, lbl_8049D5E0
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800ACE20
asm s32 fn_800ACE20() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    lis r4, lbl_803A2680@ha
    lbz r0, lbl_803A2680@l(r4)
    extsb r0, r0
    cmpwi r0, 0x0
    bne lbl_800ACE4C
    li r3, 0x0
    b lbl_800AD138
lbl_800ACE4C:
    addi r3, r1, 0x8
    addi r4, r4, lbl_803A2680@l
    la r5, lbl_8049D620
    bl fn_8016F04C
    cmpwi r3, 0x1
    beq lbl_800ACE6C
    li r3, 0x0
    b lbl_800AD138
lbl_800ACE6C:
    lwz r31, 0x8(r1)
    mr r3, r31
    bl strlen
    cmplwi r3, 0x60
    beq lbl_800ACE88
    li r3, 0x0
    b lbl_800AD138
lbl_800ACE88:
    mr r3, r31
    addi r4, r1, 0x10
    li r5, 0x48
    bl fn_800ADF7C
    cmpwi r3, 0x0
    bne lbl_800ACEA8
    li r3, 0x0
    b lbl_800AD138
lbl_800ACEA8:
    lwz r31, 0x24(r1)
    bl fn_800914D8
    lwz r0, 0x8c(r3)
    cmpw r31, r0
    beq lbl_800ACED4
    bl fn_800914D8
    stw r31, 0x8c(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800ACED4:
    lwz r31, 0x28(r1)
    bl fn_800914D8
    lwz r0, 0x94(r3)
    cmpw r31, r0
    beq lbl_800ACF00
    bl fn_800914D8
    stw r31, 0x94(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800ACF00:
    lwz r31, 0x2c(r1)
    bl fn_800914D8
    lwz r0, 0x9c(r3)
    cmpw r31, r0
    beq lbl_800ACF2C
    bl fn_800914D8
    stw r31, 0x9c(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800ACF2C:
    lwz r31, 0x30(r1)
    bl fn_800914D8
    lwz r0, 0xa4(r3)
    cmpw r31, r0
    beq lbl_800ACF58
    bl fn_800914D8
    stw r31, 0xa4(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800ACF58:
    lwz r31, 0x34(r1)
    bl fn_800914D8
    lwz r0, 0xac(r3)
    cmpw r31, r0
    beq lbl_800ACF84
    bl fn_800914D8
    stw r31, 0xac(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800ACF84:
    lwz r31, 0x38(r1)
    bl fn_800914D8
    lwz r0, 0xb4(r3)
    cmpw r31, r0
    beq lbl_800ACFB0
    bl fn_800914D8
    stw r31, 0xb4(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800ACFB0:
    lwz r31, 0x3c(r1)
    bl fn_800914D8
    lwz r0, 0x90(r3)
    cmpw r31, r0
    beq lbl_800ACFDC
    bl fn_800914D8
    stw r31, 0x90(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800ACFDC:
    lwz r31, 0x40(r1)
    bl fn_800914D8
    lwz r0, 0x98(r3)
    cmpw r31, r0
    beq lbl_800AD008
    bl fn_800914D8
    stw r31, 0x98(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800AD008:
    lwz r31, 0x44(r1)
    bl fn_800914D8
    lwz r0, 0xa0(r3)
    cmpw r31, r0
    beq lbl_800AD034
    bl fn_800914D8
    stw r31, 0xa0(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800AD034:
    lwz r31, 0x48(r1)
    bl fn_800914D8
    lwz r0, 0xa8(r3)
    cmpw r31, r0
    beq lbl_800AD060
    bl fn_800914D8
    stw r31, 0xa8(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800AD060:
    lwz r31, 0x4c(r1)
    bl fn_800914D8
    lwz r0, 0xb0(r3)
    cmpw r31, r0
    beq lbl_800AD08C
    bl fn_800914D8
    stw r31, 0xb0(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800AD08C:
    lwz r31, 0x50(r1)
    bl fn_800914D8
    lwz r0, 0x128(r3)
    cmpw r31, r0
    beq lbl_800AD0B8
    bl fn_800914D8
    stw r31, 0x128(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800AD0B8:
    lwz r31, 0x54(r1)
    bl fn_800914D8
    lwz r0, 0x12c(r3)
    cmpw r31, r0
    beq lbl_800AD0E4
    bl fn_800914D8
    stw r31, 0x12c(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800AD0E4:
    bl fn_800914D8
    lwz r31, 0xac(r3)
    bl fn_800914D8
    lwz r0, 0x198(r3)
    cmpw r0, r31
    bge lbl_800AD10C
    bl fn_800914D8
    lwz r31, 0xac(r3)
    bl fn_800914D8
    stw r31, 0x198(r3)
lbl_800AD10C:
    bl fn_800914D8
    lwz r31, 0xb0(r3)
    bl fn_800914D8
    lwz r0, 0x19c(r3)
    cmpw r0, r31
    bge lbl_800AD134
    bl fn_800914D8
    lwz r31, 0xb0(r3)
    bl fn_800914D8
    stw r31, 0x19c(r3)
lbl_800AD134:
    li r3, 0x1
lbl_800AD138:
    lwz r31, 0x5c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_800AD14C
asm void fn_800AD14C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800ACE20
    cmpwi r3, 0x0
    bne lbl_800AD178
    bl fn_800AD1A0
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x5
    stw r0, 0xc(r3)
lbl_800AD178:
    bl fn_800914D8
    lwz r0, 0xc(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800AD190
    bl fn_800AD254
lbl_800AD190:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AD254
asm void fn_800AD254() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_29
    bl fn_801725B0
    mr r30, r3
    bl fn_801725B0
    slwi r0, r3, 16
    xor r30, r0, r30
    bl fn_800914D8
    lwz r0, 0x14(r3)
    xor r0, r0, r30
    stw r0, 0x14(r3)
    bl fn_800AE478
    mr r30, r3
    bl fn_800914D8
    lwz r0, 0x18(r3)
    xor r0, r0, r30
    stw r0, 0x18(r3)
    bl fn_800914D8
    lwz r30, 0x18(r3)
    bl fn_800914D8
    lwz r0, 0xac(r3)
    srawi r0, r0, 1
    addze r0, r0
    xor r30, r0, r30
    bl fn_800914D8
    stw r30, 0x1c(r3)
    bl fn_800914D8
    lwz r30, 0x4(r3)
    bl fn_800AE478
    xor r30, r3, r30
    bl fn_800914D8
    lwz r0, 0x20(r3)
    xor r0, r0, r30
    stw r0, 0x20(r3)
    li r29, 0x0
    li r31, 0x0
lbl_800AD2F0:
    bl fn_800AE478
    mr r30, r3
    bl fn_800914D8
    add r3, r3, r31
    lwz r0, 0x1a0(r3)
    xor r0, r0, r30
    stw r0, 0x1a0(r3)
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmplwi r29, 0xd
    blt lbl_800AD2F0
    bl fn_800914D8
    lwz r0, 0x8c(r3)
    stw r0, 0x8(r1)
    bl fn_800914D8
    lwz r0, 0x90(r3)
    stw r0, 0xc(r1)
    bl fn_800914D8
    lwz r0, 0x94(r3)
    stw r0, 0x10(r1)
    bl fn_800914D8
    lwz r0, 0x98(r3)
    stw r0, 0x14(r1)
    bl fn_800914D8
    lwz r0, 0x9c(r3)
    stw r0, 0x18(r1)
    bl fn_800914D8
    lwz r0, 0xa0(r3)
    stw r0, 0x1c(r1)
    bl fn_800914D8
    lwz r0, 0xa4(r3)
    stw r0, 0x20(r1)
    bl fn_800914D8
    lwz r0, 0xa8(r3)
    stw r0, 0x24(r1)
    bl fn_800914D8
    lwz r0, 0xac(r3)
    stw r0, 0x28(r1)
    bl fn_800914D8
    lwz r0, 0xb0(r3)
    stw r0, 0x2c(r1)
    bl fn_800914D8
    lwz r0, 0xb4(r3)
    stw r0, 0x30(r1)
    addi r3, r1, 0x8
    li r4, 0x2c
    bl fn_8017982C
    mr r31, r3
    bl fn_800914D8
    lwz r0, 0x14(r3)
    xor r31, r31, r0
    bl fn_800914D8
    stw r31, 0x4(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
    addi r11, r1, 0x50
    bl _restgpr_29
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_800AD3EC
asm s32 fn_800AD3EC(void) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    bl fn_800914D8
    lwz r0, 0x8c(r3)
    stw r0, 0x8(r1)
    bl fn_800914D8
    lwz r0, 0x90(r3)
    stw r0, 0xc(r1)
    bl fn_800914D8
    lwz r0, 0x94(r3)
    stw r0, 0x10(r1)
    bl fn_800914D8
    lwz r0, 0x98(r3)
    stw r0, 0x14(r1)
    bl fn_800914D8
    lwz r0, 0x9c(r3)
    stw r0, 0x18(r1)
    bl fn_800914D8
    lwz r0, 0xa0(r3)
    stw r0, 0x1c(r1)
    bl fn_800914D8
    lwz r0, 0xa4(r3)
    stw r0, 0x20(r1)
    bl fn_800914D8
    lwz r0, 0xa8(r3)
    stw r0, 0x24(r1)
    bl fn_800914D8
    lwz r0, 0xac(r3)
    stw r0, 0x28(r1)
    bl fn_800914D8
    lwz r0, 0xb0(r3)
    stw r0, 0x2c(r1)
    bl fn_800914D8
    lwz r0, 0xb4(r3)
    stw r0, 0x30(r1)
    addi r3, r1, 0x8
    li r4, 0x2c
    bl fn_8017982C
    mr r31, r3
    bl fn_800914D8
    lwz r0, 0x14(r3)
    xor r31, r31, r0
    bl fn_800914D8
    lwz r0, 0x4(r3)
    cmplw r31, r0
    beq lbl_800AD4B4
    li r3, 0x0
    b lbl_800AD4E4
lbl_800AD4B4:
    bl fn_800914D8
    lwz r31, 0x18(r3)
    bl fn_800914D8
    lwz r0, 0xac(r3)
    srawi r0, r0, 1
    addze r0, r0
    xor r31, r0, r31
    bl fn_800914D8
    lwz r0, 0x1c(r3)
    subf r0, r31, r0
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_800AD4E4:
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_800AD4F8
asm s16 fn_800AD4F8() {
    nofralloc
    stwu r1, -0x10(r1)
    stw r3, 0x8(r1)
    lha r3, 0xa(r1)
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AD50C
asm s8 fn_800AD50C() {
    nofralloc
    stwu r1, -0x10(r1)
    stw r3, 0x8(r1)
    lbz r3, 0x9(r1)
    extsb r3, r3
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AD524
asm s8 fn_800AD524(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    stw r3, 0x8(r1)
    lbz r3, 0x8(r1)
    extsb r3, r3
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AD53C
asm s32 fn_800AD53C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r0, 0x8(r1)
    extsb r0, r5
    stb r0, 0x8(r1)
    extsb r0, r4
    stb r0, 0x9(r1)
    li r4, 0x0
    li r5, -0xc8
    li r6, 0xc8
    bl fn_801728DC
    extsh r0, r3
    sth r0, 0xa(r1)
    lwz r3, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AD58C
asm s32 fn_800AD58C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8016EF88
    cmpwi r3, 0x0
    bne lbl_800AD624
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800AD5D8
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0xc(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800AD5D8:
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_800AD60C
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 29, 27
    stw r0, 0xc(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800AD60C:
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0xc(r3)
    li r3, 0x1
    b lbl_800AD6CC
lbl_800AD624:
    bl fn_8016EF88
    cmpwi r3, 0x0
    bge lbl_800AD66C
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800AD664
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0xc(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800AD664:
    li r3, 0x11
    b lbl_800AD6CC
lbl_800AD66C:
    bl fn_8016EFF0
    lis r4, 0x1
    subi r0, r4, 0x15a0
    cmpw r3, r0
    ble lbl_800AD6C8
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800AD6B4
    bl fn_800914D8
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0xc(r3)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x1
    stw r0, 0xc(r3)
lbl_800AD6B4:
    li r3, 0x2714
    li r4, 0x6
    bl fn_80168C30
    li r3, 0x11
    b lbl_800AD6CC
lbl_800AD6C8:
    li r3, 0xf
lbl_800AD6CC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AD6DC
asm s32 fn_800AD6DC(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8016EF88
    cmpwi r3, 0x0
    bne lbl_800AD700
    bl fn_800AD14C
    li r3, 0x1
    b lbl_800AD740
lbl_800AD700:
    bl fn_8016EF88
    cmpwi r3, 0x0
    bge lbl_800AD714
    li r3, 0x11
    b lbl_800AD740
lbl_800AD714:
    bl fn_8016EFF0
    lis r4, 0x1
    subi r0, r4, 0x15a0
    cmpw r3, r0
    ble lbl_800AD73C
    li r3, 0x2714
    li r4, 0x6
    bl fn_80168C30
    li r3, 0x11
    b lbl_800AD740
lbl_800AD73C:
    li r3, 0x10
lbl_800AD740:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AD750
asm s32 fn_800AD750(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8049D5F8
    cmpwi r0, 0x0
    ble lbl_800AD778
    li r3, -0x1
    b lbl_800AD7C8
lbl_800AD778:
    stw r3, lbl_8049D5F8
    bl fn_8016D2BC
    stw r3, lbl_8049D5FC
    cmpwi r3, 0x0
    bgt lbl_800AD79C
    li r0, -0x1
    stw r0, lbl_8049D5F8
    li r3, 0x0
    b lbl_800AD7C8
lbl_800AD79C:
    bl fn_8016ECD8
    lis r3, lbl_803A2CB8@ha
    addi r3, r3, lbl_803A2CB8@l
    mr r4, r31
    lis r5, lbl_803A2680@ha
    addi r5, r5, lbl_803A2680@l
    li r6, 0x400
    bl fn_8016EF70
    li r3, 0x0
    bl fn_8016ED48
    li r3, 0x0
lbl_800AD7C8:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AD7DC
asm s32 fn_800AD7DC() {
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    addi r11, r1, 0x220
    bl _savegpr_26
    bl fn_8016EF88
    mr r27, r3
    cmpwi r3, 0x0
    beq lbl_800AD844
    blt lbl_800AD818
    bl fn_8016EFF0
    lis r4, 0x1
    subi r0, r4, 0x15a0
    cmpw r3, r0
    ble lbl_800AD83C
lbl_800AD818:
    lwz r0, lbl_8049D5F8
    cmpwi r0, 0x0
    blt lbl_800AD834
    li r0, -0x1
    stw r0, lbl_8049D5F8
    li r3, 0x1
    bl fn_8016ED48
lbl_800AD834:
    li r3, 0x1
    b lbl_800ADCB4
lbl_800AD83C:
    mr r3, r27
    b lbl_800ADCB4
lbl_800AD844:
    lwz r29, lbl_8049D5F8
    cmpwi r29, 0x0
    bge lbl_800AD858
    li r3, 0x0
    b lbl_800ADCB4
lbl_800AD858:
    li r0, -0x1
    stw r0, lbl_8049D5F8
    addi r3, r1, 0x38
    lis r4, lbl_803A2680@ha
    addi r4, r4, lbl_803A2680@l
    lis r5, lbl_803A2CB8@ha
    addi r5, r5, lbl_803A2CB8@l
    bl fn_8016F04C
    cmpwi r3, 0x4
    bge lbl_800AD89C
    cmpwi r3, 0x3
    bne lbl_800AD894
    lwz r0, 0x44(r1)
    cmpwi r0, 0x0
    beq lbl_800AD89C
lbl_800AD894:
    li r3, 0x0
    b lbl_800ADCB4
lbl_800AD89C:
    lwz r27, 0x38(r1)
    mr r3, r27
    bl strlen
    mr r28, r3
    cmplwi r3, 0x36
    beq lbl_800AD8BC
    cmplwi r3, 0x46
    bne lbl_800AD8DC
lbl_800AD8BC:
    lwz r3, 0x3c(r1)
    bl strlen
    cmplwi r3, 0x170
    bne lbl_800AD8DC
    lwz r3, 0x40(r1)
    bl strlen
    cmplwi r3, 0x60
    beq lbl_800AD8E4
lbl_800AD8DC:
    li r3, 0x0
    b lbl_800ADCB4
lbl_800AD8E4:
    cmplwi r28, 0x36
    bne lbl_800AD90C
    mr r3, r27
    addi r4, r1, 0x80
    li r5, 0x28
    bl fn_800ADF7C
    cmpwi r3, 0x0
    bne lbl_800AD95C
    li r3, 0x0
    b lbl_800ADCB4
lbl_800AD90C:
    mr r3, r27
    addi r4, r1, 0x4c
    li r5, 0x34
    bl fn_800ADF7C
    cmpwi r3, 0x0
    bne lbl_800AD92C
    li r3, 0x0
    b lbl_800ADCB4
lbl_800AD92C:
    lwz r0, 0x60(r1)
    rlwinm r0, r0, 0, 16, 23
    cmpwi r0, 0x100
    beq lbl_800AD944
    li r3, 0x0
    b lbl_800ADCB4
lbl_800AD944:
    lwz r0, 0x64(r1)
    stw r0, 0x94(r1)
    addi r3, r1, 0x98
    addi r4, r1, 0x70
    li r5, 0x10
    bl memcpy
lbl_800AD95C:
    lwz r3, 0x3c(r1)
    addi r4, r1, 0xf0
    li r5, 0x114
    bl fn_800ADF7C
    cmpwi r3, 0x0
    bne lbl_800AD97C
    li r3, 0x0
    b lbl_800ADCB4
lbl_800AD97C:
    lwz r3, 0x40(r1)
    addi r4, r1, 0xa8
    li r5, 0x48
    bl fn_800ADF7C
    cmpwi r3, 0x0
    bne lbl_800AD99C
    li r3, 0x0
    b lbl_800ADCB4
lbl_800AD99C:
    mr r3, r29
    bl fn_8016D2BC
    lwz r0, 0x94(r1)
    cmpw r0, r3
    beq lbl_800AD9B8
    li r3, 0x0
    b lbl_800ADCB4
lbl_800AD9B8:
    bl fn_8016D31C
    mr r30, r3
    bl fn_800914D8
    mulli r0, r29, 0x5c
    add r31, r3, r0
    li r28, -0x1
    li r27, 0x0
    li r3, 0x0
    addi r5, r1, 0xf0
    li r0, 0x40
    mtctr r0
lbl_800AD9E4:
    add r4, r5, r3
    lwz r0, 0x14(r4)
    cmpw r30, r0
    bne lbl_800ADAC8
    mr r28, r27
    li r26, 0x0
    mr r3, r29
    bl fn_800AC6E4
    cmpwi r3, 0x0
    beq lbl_800ADA48
    cmpwi r27, 0x20
    bge lbl_800ADAB8
    lwz r3, 0x6dc(r31)
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800ADA40
    li r0, -0x15
    and r0, r3, r0
    stw r0, 0x6dc(r31)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x9
    stw r0, 0xc(r3)
lbl_800ADA40:
    li r26, 0x1
    b lbl_800ADAB8
lbl_800ADA48:
    cmpwi r27, 0x20
    blt lbl_800ADAB8
    lwz r3, 0x6dc(r31)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_800ADA6C
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_800ADA8C
lbl_800ADA6C:
    lwz r3, 0x6dc(r31)
    li r0, -0x17
    and r0, r3, r0
    stw r0, 0x6dc(r31)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x9
    stw r0, 0xc(r3)
lbl_800ADA8C:
    lwz r3, 0x6dc(r31)
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_800ADAB4
    ori r0, r3, 0x20
    stw r0, 0x6dc(r31)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x9
    stw r0, 0xc(r3)
lbl_800ADAB4:
    li r26, 0x1
lbl_800ADAB8:
    cmpwi r26, 0x0
    beq lbl_800ADAD4
    li r3, 0x0
    b lbl_800ADCB4
lbl_800ADAC8:
    addi r27, r27, 0x1
    addi r3, r3, 0x4
    bdnz lbl_800AD9E4
lbl_800ADAD4:
    lwz r0, 0x44(r1)
    cmpwi r0, 0x0
    beq lbl_800ADB5C
    lwz r0, 0x6dc(r31)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x6dc(r31)
    lwz r27, 0x44(r1)
    mr r3, r27
    bl strlen
    cmplwi r3, 0x20
    beq lbl_800ADB08
    li r3, 0x0
    b lbl_800ADCB4
lbl_800ADB08:
    mr r3, r27
    addi r4, r1, 0x20
    li r5, 0x18
    bl fn_800ADF7C
    cmpwi r3, 0x0
    bne lbl_800ADB28
    li r3, 0x0
    b lbl_800ADCB4
lbl_800ADB28:
    lwz r0, 0x34(r1)
    cmpw r0, r30
    bne lbl_800ADB68
    bl fn_800914D8
    slwi r0, r29, 3
    add r3, r3, r0
    lwz r0, 0x4dc(r3)
    cmpwi r0, 0x5
    blt lbl_800ADB68
    lwz r0, 0x6dc(r31)
    ori r0, r0, 0x10
    stw r0, 0x6dc(r31)
    b lbl_800ADB68
lbl_800ADB5C:
    lwz r0, 0x6dc(r31)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x6dc(r31)
lbl_800ADB68:
    cmpwi r28, 0x0
    blt lbl_800ADC74
    addi r3, r1, 0x98
    bl fn_800ADCCC
    cmpwi r3, 0x0
    bne lbl_800ADB88
    li r3, 0x0
    b lbl_800ADCB4
lbl_800ADB88:
    li r26, 0x0
    li r3, 0x10
    stw r3, 0xc(r1)
    lwz r4, 0x6dc(r31)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800ADBB0
    rlwinm r0, r4, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_800ADBF0
lbl_800ADBB0:
    lwz r0, 0x6dc(r31)
    ori r0, r0, 0x6
    stw r0, 0x6dc(r31)
    lwz r0, 0x6dc(r31)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x6dc(r31)
    li r26, 0x1
    bl fn_800914D8
    slwi r0, r29, 3
    add r3, r3, r0
    lwz r0, 0x4dc(r3)
    cmpwi r0, 0x3
    bge lbl_800ADC20
    li r0, 0x3
    stw r0, 0x4dc(r3)
    b lbl_800ADC20
lbl_800ADBF0:
    stw r3, 0x8(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    addi r5, r31, 0x6e4
    li r6, 0x0
    bl fn_8016F948
    addi r3, r1, 0x98
    addi r4, r1, 0x10
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_800ADC20
    li r26, 0x1
lbl_800ADC20:
    cmpwi r26, 0x0
    beq lbl_800ADC3C
    addi r3, r31, 0x6e4
    addi r4, r1, 0xc
    addi r5, r1, 0x98
    li r6, 0x0
    bl fn_8016F85C
lbl_800ADC3C:
    lwz r3, 0xcc(r1)
    lwz r0, 0x734(r31)
    cmpw r0, r3
    beq lbl_800ADC54
    stw r3, 0x734(r31)
    li r26, 0x1
lbl_800ADC54:
    cmpwi r26, 0x0
    beq lbl_800ADC6C
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x9
    stw r0, 0xc(r3)
lbl_800ADC6C:
    li r3, 0x0
    b lbl_800ADCB4
lbl_800ADC74:
    bl fn_800914D8
    slwi r0, r29, 3
    add r3, r3, r0
    lwz r0, 0x4dc(r3)
    cmpwi r0, 0x3
    blt lbl_800ADC94
    li r0, 0x2
    stw r0, 0x4dc(r3)
lbl_800ADC94:
    lwz r0, 0x6dc(r31)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x6dc(r31)
    bl fn_800914D8
    lwz r0, 0xc(r3)
    ori r0, r0, 0x9
    stw r0, 0xc(r3)
    li r3, 0x0
lbl_800ADCB4:
    addi r11, r1, 0x220
    bl _restgpr_26
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

// asm_to_cpp: fn_800ADCCC
asm s32 fn_800ADCCC(u8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl strlen
    cmpwi r3, 0x0
    beq lbl_800ADCF4
    cmpwi r3, 0x10
    blt lbl_800ADCFC
lbl_800ADCF4:
    li r3, 0x0
    b lbl_800ADDA4
lbl_800ADCFC:
    li r8, 0x0
    lis r4, lbl_8034D3C8@ha
    addi r7, r4, lbl_8034D3C8@l
    li r0, 0xe
    b lbl_800ADD98
lbl_800ADD10:
    lbz r5, 0x0(r31)
    extsb r4, r5
    cmpwi r4, 0x61
    blt lbl_800ADD28
    cmpwi r4, 0x7a
    ble lbl_800ADD90
lbl_800ADD28:
    extsb r4, r5
    cmpwi r4, 0x41
    blt lbl_800ADD3C
    cmpwi r4, 0x5a
    ble lbl_800ADD90
lbl_800ADD3C:
    extsb r4, r5
    cmpwi r4, 0x30
    blt lbl_800ADD50
    cmpwi r4, 0x39
    ble lbl_800ADD90
lbl_800ADD50:
    li r9, 0x0
    mr r4, r7
    mtctr r0
lbl_800ADD5C:
    lbz r5, 0x0(r4)
    extsb r6, r5
    lbz r5, 0x0(r31)
    extsb r5, r5
    cmpw r6, r5
    beq lbl_800ADD80
    addi r9, r9, 0x1
    addi r4, r4, 0x1
    bdnz lbl_800ADD5C
lbl_800ADD80:
    cmplwi r9, 0xe
    bne lbl_800ADD90
    li r3, 0x0
    b lbl_800ADDA4
lbl_800ADD90:
    addi r8, r8, 0x1
    addi r31, r31, 0x1
lbl_800ADD98:
    cmpw r8, r3
    blt lbl_800ADD10
    li r3, 0x1
lbl_800ADDA4:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800ADDB8
asm void fn_800ADDB8(void) {
    nofralloc
    lis r3, lbl_8034D3D8@ha
    addi r5, r3, lbl_8034D3D8@l
    lis r3, lbl_8034D3E8@ha
    addi r3, r3, lbl_8034D3E8@l
    li r0, 0x10
    mtctr r0
lbl_800ADDD0:
    lbz r4, 0x0(r5)
    lbz r0, 0x0(r3)
    xor r0, r4, r0
    stb r0, 0x0(r5)
    addi r3, r3, 0x1
    addi r5, r5, 0x1
    bdnz lbl_800ADDD0
    blr
}

// asm_to_cpp: fn_800ADDF0
asm void fn_800ADDF0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    li r30, 0x0
    lis r3, lbl_8034D3E8@ha
    addi r31, r3, lbl_8034D3E8@l
lbl_800ADE10:
    bl fn_800AE428
    lbz r0, 0x0(r31)
    xor r0, r0, r3
    clrlwi r0, r0, 24
    stb r0, 0x0(r31)
    addi r30, r30, 0x1
    addi r31, r31, 0x1
    cmplwi r30, 0x10
    blt lbl_800ADE10
    lis r3, lbl_8034D3D8@ha
    addi r5, r3, lbl_8034D3D8@l
    lis r3, lbl_8034D3E8@ha
    addi r3, r3, lbl_8034D3E8@l
    li r0, 0x10
    mtctr r0
lbl_800ADE4C:
    lbz r4, 0x0(r5)
    lbz r0, 0x0(r3)
    xor r0, r4, r0
    stb r0, 0x0(r5)
    addi r3, r3, 0x1
    addi r5, r5, 0x1
    bdnz lbl_800ADE4C
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800ADE80
asm void fn_800ADE80(s32 *arg0, s32 *arg1, s32 arg2, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl fn_800ADDB8
    bl fn_800AE478
    xoris r0, r3, 0xa5b
    xori r0, r0, 0x5114
    stw r0, 0x0(r30)
    li r0, 0x0
    stw r0, 0x10(r30)
    stw r0, 0xc(r30)
    stw r0, 0x8(r30)
    stw r0, 0x4(r30)
    addi r3, r30, 0x4
    mr r4, r30
    mr r5, r31
    lis r6, lbl_8034D3D8@ha
    addi r6, r6, lbl_8034D3D8@l
    li r7, 0x10
    bl fn_800AE53C
    mr r3, r30
    mr r4, r31
    bl fn_800ADF1C
    bl fn_800ADDF0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_8016FA34
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800ADF1C
asm void fn_800ADF1C(s32 *arg0, s32 arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r4
    li r30, 0x4
    addi r31, r3, 0x4
    b lbl_800ADF5C
lbl_800ADF40:
    bl fn_800AE428
    lbz r0, 0x0(r31)
    xor r0, r0, r3
    extsb r0, r0
    stb r0, 0x0(r31)
    addi r30, r30, 0x1
    addi r31, r31, 0x1
lbl_800ADF5C:
    cmpw r30, r29
    blt lbl_800ADF40
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800ADF7C
asm s32 fn_800ADF7C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r28, r3
    mr r31, r4
    mr r29, r5
    bl fn_800AE08C
    mr r30, r3
    bl fn_800ADDB8
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r3, r31
    mr r4, r28
    bl fn_8016FAD4
    lwz r0, 0x0(r31)
    xoris r0, r0, 0xa5b
    xori r0, r0, 0x5114
    stw r0, lbl_8049C310
    mr r3, r31
    mr r4, r29
    bl fn_800ADF1C
    li r3, 0x0
    addi r5, r1, 0x8
    mr r4, r3
    li r0, 0x4
    mtctr r0
lbl_800ADFF0:
    add r6, r31, r3
    lwz r0, 0x4(r6)
    stwx r0, r5, r3
    stw r4, 0x4(r6)
    addi r3, r3, 0x4
    bdnz lbl_800ADFF0
    addi r3, r31, 0x4
    mr r4, r31
    mr r5, r29
    lis r6, lbl_8034D3D8@ha
    addi r6, r6, lbl_8034D3D8@l
    li r7, 0x10
    bl fn_800AE53C
    bl fn_800AE08C
    xor r3, r30, r3
    bl fn_800AE084
    bl fn_800ADDF0
    li r3, 0x0
    addi r6, r1, 0x8
    li r0, 0x4
    mtctr r0
lbl_800AE044:
    lwzx r5, r6, r3
    add r4, r31, r3
    lwz r0, 0x4(r4)
    cmpw r5, r0
    beq lbl_800AE060
    li r3, 0x0
    b lbl_800AE06C
lbl_800AE060:
    addi r3, r3, 0x4
    bdnz lbl_800AE044
    li r3, 0x1
lbl_800AE06C:
    addi r11, r1, 0x30
    bl _restgpr_28
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800AE094
asm s32 fn_800AE094(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r0, 0x10
    stw r0, 0x8(r1)
    bl fn_800914D8
    mr r5, r3
    lis r3, lbl_8034D100@ha
    addi r3, r3, lbl_8034D100@l
    addi r4, r1, 0x8
    addi r5, r5, 0x2c
    li r6, 0x0
    bl fn_8016F948
    bl fn_800914D8
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_800AE10C
    bl fn_800914D8
    lwz r0, 0x8(r3)
    cmpwi r0, 0x109
    beq lbl_800AE0F8
    li r31, 0x0
    bl fn_800914D8
    stw r31, 0x10(r3)
lbl_800AE0F8:
    bl fn_800914D8
    lwz r3, 0x10(r3)
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800AE110
lbl_800AE10C:
    li r3, 0x0
lbl_800AE110:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800AE124
asm s32 fn_800AE124() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl fn_800AC218
    mr r30, r3
    bl fn_800914D8
    lwz r0, 0xc(r3)
    clrrwi r0, r0, 1
    stw r0, 0xc(r3)
    li r31, 0x109
    bl fn_800914D8
    stw r31, 0x8(r3)
    bl fn_800AD3EC
    cmpwi r30, 0x0
    beq lbl_800AE178
    bl fn_8016D31C
    mr r31, r3
    bl fn_800914D8
    stw r31, 0x1ddc(r3)
lbl_800AE178:
    cmpwi r30, 0x0
    beq lbl_800AE188
    li r3, 0x1
    b lbl_800AE18C
lbl_800AE188:
    li r3, 0x0
lbl_800AE18C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AE1AC
asm s8 * fn_800AE1AC() {
    nofralloc
    cmplwi r3, 0x19
    bgt lbl_800AE1C4
    lwz r4, lbl_8049D61C
    slwi r0, r3, 2
    lwzx r3, r4, r0
    blr
lbl_800AE1C4:
    lis r3, lbl_8034D4D0@ha
    addi r3, r3, lbl_8034D4D0@l
    addi r3, r3, 0x15f
    blr
}

// asm_to_cpp: fn_800AE1D4
asm int fn_800AE1D4() {
    nofralloc
    li r6, -0x1
    subi r0, r3, 0x2711
    cmplwi r0, 0xb
    bgt lbl_800AE258
    lis r5, jumptable_8034D4A0@ha
    addi r5, r5, jumptable_8034D4A0@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
    li r6, 0x1
    b lbl_800AE258
    li r6, 0x2
    b lbl_800AE258
    li r6, 0x3
    b lbl_800AE258
    li r6, 0x4
    b lbl_800AE258
    li r6, 0x5
    b lbl_800AE258
    li r6, 0x6
    b lbl_800AE258
    li r6, 0x7
    b lbl_800AE258
    li r6, 0x8
    b lbl_800AE258
    li r6, 0x9
    b lbl_800AE258
    li r6, 0x16
    b lbl_800AE258
    li r6, 0x17
    b lbl_800AE258
    li r6, 0x19
lbl_800AE258:
    cmpwi r6, 0x0
    blt lbl_800AE270
    lwz r3, lbl_8049D61C
    slwi r0, r6, 2
    lwzx r3, r3, r0
    blr
lbl_800AE270:
    neg r7, r3
    li r3, 0x0
    lis r5, lbl_8034D3F8@ha
    addi r0, r5, lbl_8034D3F8@l
    b lbl_800AE29C
lbl_800AE284:
    cmpw r6, r7
    bgt lbl_800AE298
    lwz r5, 0x4(r5)
    cmpw r7, r5
    ble lbl_800AE2AC
lbl_800AE298:
    addi r3, r3, 0xc
lbl_800AE29C:
    add r5, r0, r3
    lwz r6, 0x0(r5)
    cmpwi r6, 0x0
    bge lbl_800AE284
lbl_800AE2AC:
    lis r5, lbl_8034D3F8@ha
    addi r0, r5, lbl_8034D3F8@l
    add r3, r0, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x15
    bne lbl_800AE2E0
    cmpwi r4, 0x8
    bne lbl_800AE2D4
    li r0, 0x18
    b lbl_800AE2E0
lbl_800AE2D4:
    cmpwi r4, 0x6
    blt lbl_800AE2E0
    li r0, 0x13
lbl_800AE2E0:
    lwz r3, lbl_8049D61C
    slwi r0, r0, 2
    lwzx r3, r3, r0
    blr
}

// asm_to_cpp: fn_800AE2F0
asm s32 fn_800AE2F0(s32 arg0) {
    nofralloc
    slwi r0, r3, 2
    lis r3, lbl_803A2CCC@ha
    addi r3, r3, lbl_803A2CCC@l
    lwzx r3, r3, r0
    blr
}

// asm_to_cpp: fn_800AE304
asm void fn_800AE304(s32 arg0, s32 arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mr r22, r3
    li r24, 0x0
    li r27, 0x0
    li r31, 0x0
    li r3, 0x0
    li r6, -0x1
    lis r5, lbl_803A2CCC@ha
    addi r5, r5, lbl_803A2CCC@l
    li r0, 0x5
    mtctr r0
lbl_800AE340:
    stwx r6, r5, r3
    addi r3, r3, 0x4
    bdnz lbl_800AE340
    cmpwi r4, 0x0
    bne lbl_800AE360
    li r26, 0x0
    li r25, 0x1f
    b lbl_800AE368
lbl_800AE360:
    li r26, 0x20
    li r25, 0x3f
lbl_800AE368:
    mr r23, r26
    mr r28, r26
    lis r3, lbl_803A2CCC@ha
    addi r30, r3, lbl_803A2CCC@l
    b lbl_800AE408
lbl_800AE37C:
    cmpwi r27, 0x5
    beq lbl_800AE410
    mr r3, r28
    bl fn_800AC624
    cmpwi r3, 0x4
    ble lbl_800AE3E4
    mr r3, r28
    bl fn_800AC6AC
    mr r29, r3
    bl fn_8016CCB8
    cmpw r29, r3
    bne lbl_800AE3C4
    cmpw r22, r23
    bgt lbl_800AE3C0
    stwx r28, r30, r31
    addi r27, r27, 0x1
    addi r31, r31, 0x4
lbl_800AE3C0:
    addi r23, r23, 0x1
lbl_800AE3C4:
    addi r24, r24, 0x1
    mr r3, r28
    li r4, 0x1
    mr r5, r26
    mr r6, r25
    bl fn_8017291C
    mr r28, r3
    b lbl_800AE400
lbl_800AE3E4:
    addi r24, r24, 0x1
    mr r3, r28
    li r4, 0x1
    mr r5, r26
    mr r6, r25
    bl fn_8017291C
    mr r28, r3
lbl_800AE400:
    cmpw r28, r26
    beq lbl_800AE410
lbl_800AE408:
    cmpwi r24, 0x20
    blt lbl_800AE37C
lbl_800AE410:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800AE428
asm u32 fn_800AE428(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r5, lbl_8049C310
    lis r3, 0x10a8
    addi r4, r3, 0x60c1
    li r3, 0x0
    mulhwu r0, r4, r5
    mullw r3, r3, r5
    mullw r4, r4, r5
    add r3, r0, r3
    li r5, 0x0
    li r6, -0x5
    bl __mod2u
    stw r4, lbl_8049C310
    mr r3, r4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AE478
asm s32 fn_800AE478(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl OSGetTick
    clrlwi r3, r3, 26
    addi r31, r3, 0x3
    li r30, 0x0
    b lbl_800AE4A8
lbl_800AE4A0:
    bl fn_800AE428
    addi r30, r30, 0x1
lbl_800AE4A8:
    cmplw r30, r31
    blt lbl_800AE4A0
    bl fn_800AE428
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800AE504
asm void fn_800AE504(void) {
    nofralloc
    lwz r4, lbl_8049C31C
    stw r4, lbl_8049D620
    lwz r0, lbl_8049C314
    lis r3, lbl_803A2CB8@ha
    stw r0, lbl_803A2CB8@l(r3)
    lwz r0, lbl_8049C318
    addi r3, r3, lbl_803A2CB8@l
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    lwz r0, lbl_8049C320
    stw r0, 0xc(r3)
    blr
}

// asm_to_cpp: fn_800AE53C
asm void fn_800AE53C(s32 *arg0, s32 *arg1, s32 arg2, u8 *arg3, s32 arg4, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0x100
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl fn_8032C41C
    mr r4, r3
    addi r3, r1, 0x8
    mr r5, r30
    mr r6, r31
    bl fn_8032C8F0
    addi r3, r1, 0x8
    mr r4, r28
    mr r5, r29
    bl fn_8032CB2C
    addi r3, r1, 0x8
    mr r4, r27
    bl fn_8032CB3C
    addi r11, r1, 0x100
    bl _restgpr_27
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}
