#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK GXSetTexCoordGen2(); /* extern */
M2C_UNK __construct_array(s8 *, void (*)(s32 *), s32 (*)(s32, s32), M2C_UNK, M2C_UNK, M2C_UNK *, s8 *); /* extern */
M2C_UNK __destroy_arr(s8 *, s32 (*)(s32, s32), M2C_UNK, M2C_UNK); /* extern */
s32 **fn_8030CAF0();       /* extern */
M2C_UNK fn_8030CB00();                           /* extern */
M2C_UNK memset();              /* extern */
extern M2C_UNK lbl_80341E30;
extern f32 lbl_80341E44;
extern f32 lbl_80341E48;
extern f32 lbl_80341E4C;
extern f32 lbl_80341E60;
extern s32 lbl_8037C898;
extern s32 lbl_8037C8B8;
extern M2C_UNK lbl_8037C8D8;
extern M2C_UNK lbl_8037C920;
extern s32 lbl_80462438;
extern M2C_UNK lbl_80462450;

void fn_802F4A3C();
s8 * fn_802F4BE0();
void fn_802F4E00();
void fn_802F4F18();
void fn_802F511C();
s8 * fn_802F5128();
s8 * fn_802F6374();
void fn_802F6424();
s32 fn_802F6B9C();
s32 fn_802F6BB0();
s32 fn_802F6BD0();
void fn_802F6C28();
void fn_802F6CB8();
void fn_802F6E0C();
void fn_802F6E90();
void fn_802F6EE4();
s32 fn_802F70C0();
void fn_802F7F90();
void fn_802F8024();
void fn_802F809C();
void fn_802F80D0();
void fn_802F80D8();
void fn_802F8124();
s8 * fn_802F8234();

void fn_802F4A3C(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);

// fn_802F4BE0: definicion C reemplazada por asm (ver abajo)


// fn_802F4E00: definicion C reemplazada por asm (ver abajo)


// fn_802F4F18: definicion C reemplazada por asm (ver abajo)


void fn_802F511C(s32 *arg0) {
    *arg0 = -1;
}

s8 *fn_802F5128(s8 *arg0, s8 *arg1, s8 *arg2, M2C_UNK arg_sp0);

// fn_802F6374: definicion C reemplazada por asm (ver abajo)



s32 fn_802F6B9C(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x58) + (((u32) M2C_FIELD(arg0, u32 *, 0x4C) >> 0x17U) & 0x1E0);
}

// fn_802F6BB0: definicion C reemplazada por asm (ver abajo)


// fn_802F6BD0: definicion C reemplazada por asm (ver abajo)


// fn_802F6C28: definicion C reemplazada por asm (ver abajo)


void fn_802F6CB8(s8 *arg0, s32 arg1);

void fn_802F6E0C(s8 *arg0, s32 arg1, s32 arg2);

void fn_802F6E90(s8 *arg0, s32 arg1, s8 *arg2);


s32 fn_802F70C0(s8 *arg0, s32 arg1, s32 arg2);

/*
Decompilation failure in function fn_802F7F74:

Unable to determine jump table for bctr instruction at unk_802F4A3C.s line 3688.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

// fn_802F7F90: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function fn_802F8010:

Unable to determine jump table for bctr instruction at unk_802F4A3C.s line 3736.

There must be a read of a variable before the instruction
which has a name starting with with "jtbl"/"jpt_"/"lbl_"/"jumptable_".
*/

// fn_802F8024: definicion C reemplazada por asm (ver abajo)


void fn_802F809C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;

    sp8 = arg0 + 0x1C;
    fn_802FF2E8(arg0 + 0x18, &sp8, arg1, arg3);
}

void fn_802F80D0(s32 arg0, s32 arg1) {
    fn_802F2A34(arg0 + 0x18, arg1);
}

// fn_802F80D8: definicion C reemplazada por asm (ver abajo)


void fn_802F8124(s8 *arg0, s8 *arg1, u32 arg2, s32 arg3, s32 arg4);

// fn_802F8234: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 lbl_80341E58[];
extern void GXInitTexObjTlut();
extern void GXInitTexObjUserData();
extern void GXInitTexObjWrapMode();
extern void GXInitTlutObj();
extern void GXLoadTexObj();
extern void GXLoadTlut();
extern void GXSetBlendMode();
extern void GXSetChanCtrl();
extern void GXSetChanMatColor();
extern void GXSetNumChans();
extern void GXSetNumTexGens();
extern void GXSetTexCoordCylWrap();
extern void GXSetTexCoordScaleManually();
extern void InitGXTexObjFromTPL__Q36nw4hbm3lyt6detailFP9_GXTexObjP10TPLPaletteUl();
extern void _restgpr_14();
extern void _restgpr_20();
extern void _restgpr_22();
extern void _restgpr_24();
extern void _restgpr_26();
extern void _savegpr_14();
extern void _savegpr_20();
extern void _savegpr_22();
extern void _savegpr_24();
extern void _savegpr_26();
extern void dtor_80136CFC();
extern void fn_802E3F80();
extern void fn_802E3FE8();
extern void fn_802E413C();
extern void fn_802E4240();
extern void fn_802E430C();
extern void fn_802E432C();
extern void fn_802E4460();
extern void fn_802E44A0();
extern void fn_802E44E0();
extern void fn_802E4538();
extern void fn_802E4654();
extern void fn_802E46B0();
extern void fn_802E4700();
extern void fn_802E4750();
extern void fn_802E4808();
extern void fn_802E48CC();
extern void fn_802E4A28();
extern void fn_802F32EC();
extern void fn_802F4154();
void fn_802F4A3C();
s8 *fn_802F4BE0(s32 arg0, s8 *arg1, s8 *arg2);
void fn_802F4E00(s32 *arg0, s8 *arg1);
void fn_802F4F18(s32 arg0, s8 *arg1, s32 arg2);
s8 * fn_802F5128();
s8 *fn_802F6374(s8 *arg0, s32 arg1);
void fn_802F6424();
s32 fn_802F6BB0(s8 *arg0, s32 arg1);
s32 fn_802F6BD0(s8 *arg0);
void fn_802F6C28(s8 *arg0, s32 arg1);
void fn_802F6CB8();
void fn_802F6E0C();
void fn_802F6E90();
void fn_802F6EE4();
s32 fn_802F70C0();
extern int fn_802F7F74();
void fn_802F7F90(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);
extern int fn_802F8010();
void fn_802F8024(s8 *arg0);
void fn_802F80D8(s8 **arg0, s32 arg1, s32 arg2);
void fn_802F8124();
s8 *fn_802F8234(s8 *arg0, s8 *arg1);
extern void strncpy();

// asm_to_cpp: fn_802F4A3C
asm void fn_802F4A3C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r25, 0x10(r3)
    lis r24, lbl_80462450@ha
    mr r31, r4
    lwz r12, 0x0(r25)
    mr r3, r25
    addi r24, r24, lbl_80462450@l
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_802F4A8C
lbl_802F4A78:
    cmplw r3, r24
    bne lbl_802F4A88
    li r0, 0x1
    b lbl_802F4A98
lbl_802F4A88:
    lwz r3, 0x0(r3)
lbl_802F4A8C:
    cmpwi r3, 0x0
    bne lbl_802F4A78
    li r0, 0x0
lbl_802F4A98:
    cmpwi r0, 0x0
    beq lbl_802F4AA8
    mr r3, r25
    b lbl_802F4AAC
lbl_802F4AA8:
    li r3, 0x0
lbl_802F4AAC:
    cmpwi r3, 0x0
    beq lbl_802F4AB8
    stw r31, 0xf4(r3)
lbl_802F4AB8:
    lis r24, lbl_80462450@ha
    lwz r30, 0x14(r25)
    addi r27, r25, 0x14
    addi r24, r24, lbl_80462450@l
    b lbl_802F4BC0
lbl_802F4ACC:
    subi r25, r30, 0x4
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_802F4AFC
lbl_802F4AE8:
    cmplw r3, r24
    bne lbl_802F4AF8
    li r0, 0x1
    b lbl_802F4B08
lbl_802F4AF8:
    lwz r3, 0x0(r3)
lbl_802F4AFC:
    cmpwi r3, 0x0
    bne lbl_802F4AE8
    li r0, 0x0
lbl_802F4B08:
    cmpwi r0, 0x0
    beq lbl_802F4B18
    mr r3, r25
    b lbl_802F4B1C
lbl_802F4B18:
    li r3, 0x0
lbl_802F4B1C:
    cmpwi r3, 0x0
    beq lbl_802F4B28
    stw r31, 0xf4(r3)
lbl_802F4B28:
    lwz r29, 0x14(r25)
    addi r26, r25, 0x14
    b lbl_802F4BB4
lbl_802F4B34:
    subi r25, r29, 0x4
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_802F4B64
lbl_802F4B50:
    cmplw r3, r24
    bne lbl_802F4B60
    li r0, 0x1
    b lbl_802F4B70
lbl_802F4B60:
    lwz r3, 0x0(r3)
lbl_802F4B64:
    cmpwi r3, 0x0
    bne lbl_802F4B50
    li r0, 0x0
lbl_802F4B70:
    cmpwi r0, 0x0
    beq lbl_802F4B80
    mr r3, r25
    b lbl_802F4B84
lbl_802F4B80:
    li r3, 0x0
lbl_802F4B84:
    cmpwi r3, 0x0
    beq lbl_802F4B90
    stw r31, 0xf4(r3)
lbl_802F4B90:
    lwzu r28, 0x14(r25)
    b lbl_802F4BA8
lbl_802F4B98:
    mr r4, r31
    subi r3, r28, 0x4
    bl fn_802F4154
    lwz r28, 0x0(r28)
lbl_802F4BA8:
    cmplw r28, r25
    bne lbl_802F4B98
    lwz r29, 0x0(r29)
lbl_802F4BB4:
    cmplw r29, r26
    bne lbl_802F4B34
    lwz r30, 0x0(r30)
lbl_802F4BC0:
    cmplw r30, r27
    bne lbl_802F4ACC
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802F4BE0
asm s8 *fn_802F4BE0(s32 arg0, s8 *arg1, s8 *arg2) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r6, 0x7069
    stw r0, 0x54(r1)
    addi r0, r6, 0x6331
    cmpw r3, r0
    stw r31, 0x4c(r1)
    beq lbl_802F4C88
    bge lbl_802F4C2C
    lis r6, 0x7061
    addi r0, r6, 0x6e31
    cmpw r3, r0
    beq lbl_802F4C54
    bge lbl_802F4DE8
    lis r6, 0x626e
    addi r0, r6, 0x6431
    cmpw r3, r0
    beq lbl_802F4D90
    b lbl_802F4DE8
lbl_802F4C2C:
    lis r6, 0x776e
    addi r0, r6, 0x6431
    cmpw r3, r0
    beq lbl_802F4D38
    bge lbl_802F4DE8
    lis r6, 0x7478
    addi r0, r6, 0x7431
    cmpw r3, r0
    beq lbl_802F4CE0
    b lbl_802F4DE8
lbl_802F4C54:
    lis r3, lbl_80462438@ha
    mr r31, r4
    lwz r3, lbl_80462438@l(r3)
    li r4, 0xd4
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802F4C80
    beq lbl_802F4DEC
    mr r4, r31
    bl fn_802F8234
    b lbl_802F4DEC
lbl_802F4C80:
    li r3, 0x0
    b lbl_802F4DEC
lbl_802F4C88:
    lwz r8, 0x0(r5)
    lis r3, lbl_80462438@ha
    lwz r7, 0x4(r5)
    mr r31, r4
    lwz r6, 0x8(r5)
    li r4, 0xec
    lwz r0, 0xc(r5)
    stw r8, 0x38(r1)
    lwz r3, lbl_80462438@l(r3)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802F4CD8
    beq lbl_802F4DEC
    mr r4, r31
    addi r5, r1, 0x38
    bl __ct__Q36nw4hbm3lyt7PictureFPCQ46nw4hbm3lyt3res7PictureRCQ36nw4hbm3lyt11ResBlockSet
    b lbl_802F4DEC
lbl_802F4CD8:
    li r3, 0x0
    b lbl_802F4DEC
lbl_802F4CE0:
    lwz r8, 0x0(r5)
    lis r3, lbl_80462438@ha
    lwz r7, 0x4(r5)
    mr r31, r4
    lwz r6, 0x8(r5)
    li r4, 0x100
    lwz r0, 0xc(r5)
    stw r8, 0x28(r1)
    lwz r3, lbl_80462438@l(r3)
    stw r7, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802F4D30
    beq lbl_802F4DEC
    mr r4, r31
    addi r5, r1, 0x28
    bl fn_802F97EC
    b lbl_802F4DEC
lbl_802F4D30:
    li r3, 0x0
    b lbl_802F4DEC
lbl_802F4D38:
    lwz r8, 0x0(r5)
    lis r3, lbl_80462438@ha
    lwz r7, 0x4(r5)
    mr r31, r4
    lwz r6, 0x8(r5)
    li r4, 0x104
    lwz r0, 0xc(r5)
    stw r8, 0x18(r1)
    lwz r3, lbl_80462438@l(r3)
    stw r7, 0x1c(r1)
    stw r6, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802F4D88
    beq lbl_802F4DEC
    mr r4, r31
    addi r5, r1, 0x18
    bl fn_802FADCC
    b lbl_802F4DEC
lbl_802F4D88:
    li r3, 0x0
    b lbl_802F4DEC
lbl_802F4D90:
    lwz r8, 0x0(r5)
    lis r3, lbl_80462438@ha
    lwz r7, 0x4(r5)
    mr r31, r4
    lwz r6, 0x8(r5)
    li r4, 0xd4
    lwz r0, 0xc(r5)
    stw r8, 0x8(r1)
    lwz r3, lbl_80462438@l(r3)
    stw r7, 0xc(r1)
    stw r6, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802F4DE0
    beq lbl_802F4DEC
    mr r4, r31
    addi r5, r1, 0x8
    bl __ct__Q36nw4hbm3lyt8BoundingFPCQ46nw4hbm3lyt3res8BoundingRCQ36nw4hbm3lyt11ResBlockSet
    b lbl_802F4DEC
lbl_802F4DE0:
    li r3, 0x0
    b lbl_802F4DEC
lbl_802F4DE8:
    li r3, 0x0
lbl_802F4DEC:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_802F4E00
asm void fn_802F4E00(s32 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lfs f1, 0x8(r4)
    stw r31, 0x1c(r1)
    lis r31, lbl_80341E30@ha
    addi r31, r31, lbl_80341E30@l
    lfs f0, 0x14(r31)
    stw r30, 0x18(r1)
    mr r30, r4
    lfs f2, 0x10(r31)
    fmuls f1, f0, f1
    stw r29, 0x14(r1)
    mr r29, r3
    stfs f2, 0x8(r1)
    stfs f2, 0xc(r1)
    bl fn_802FD2F0
    lfs f2, 0x8(r30)
    fmr f31, f1
    lfs f0, 0x14(r31)
    fmuls f1, f0, f2
    bl fn_802FD27C
    lfs f3, 0xc(r30)
    fneg f5, f1
    lfs f2, 0x8(r1)
    fmuls f9, f1, f3
    lfs f8, 0x18(r31)
    fmuls f11, f31, f3
    lfs f0, 0x10(r30)
    lfs f6, 0xc(r1)
    fneg f4, f2
    fmuls f12, f5, f0
    lfs f3, 0x0(r30)
    fmuls f10, f31, f0
    lfs f1, 0x4(r30)
    fadds f5, f3, f2
    lfs f0, 0x1c(r31)
    fadds f2, f1, f6
    stfs f11, 0x0(r29)
    fneg f7, f6
    fmuls f1, f9, f4
    stfs f12, 0x4(r29)
    fmuls f3, f11, f4
    fmuls f6, f12, f7
    stfs f8, 0x8(r29)
    fadds f1, f2, f1
    fadds f4, f5, f3
    stfs f9, 0x10(r29)
    fmuls f3, f10, f7
    stfs f10, 0x14(r29)
    fadds f2, f6, f4
    fadds f1, f3, f1
    stfs f8, 0x18(r29)
    stfs f2, 0xc(r29)
    stfs f1, 0x1c(r29)
    stfs f8, 0x20(r29)
    stfs f8, 0x24(r29)
    stfs f0, 0x28(r29)
    stfs f8, 0x2c(r29)
    opword 0xE3E10028
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802F4F18
asm void fn_802F4F18(s32 arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f2, 0x0(r4)
    lis r5, lbl_80341E30@ha
    addi r5, r5, lbl_80341E30@l
    lfs f3, 0x4(r4)
    fabs f8, f2
    lfs f0, 0x1c(r5)
    lfs f4, 0x8(r4)
    fabs f9, f3
    lfs f5, 0xc(r4)
    li r6, 0x0
    lfs f6, 0x10(r4)
    fcmpo cr0, f8, f0
    lfs f7, 0x14(r4)
    fabs f10, f4
    fabs f11, f5
    stw r0, 0x24(r1)
    fabs f12, f6
    fabs f13, f7
    opword 0x4C411382
    beq lbl_802F4FAC
    fcmpo cr0, f9, f0
    opword 0x4C411382
    beq lbl_802F4FAC
    fcmpo cr0, f10, f0
    opword 0x4C411382
    beq lbl_802F4FAC
    fcmpo cr0, f11, f0
    opword 0x4C411382
    beq lbl_802F4FAC
    fcmpo cr0, f12, f0
    opword 0x4C411382
    beq lbl_802F4FAC
    fcmpo cr0, f13, f0
    opword 0x4C411382
    bne lbl_802F5040
lbl_802F4FAC:
    lfs f1, 0x10(r5)
    lfs f0, 0x1c(r5)
lbl_802F4FB4:
    extsb r0, r6
    cmpwi r0, 0x2e
    bge lbl_802F50E8
    fmuls f8, f8, f1
    fmuls f2, f2, f1
    fmuls f3, f3, f1
    fcmpo cr0, f8, f0
    fmuls f4, f4, f1
    fmuls f5, f5, f1
    fmuls f6, f6, f1
    fmuls f7, f7, f1
    fmuls f9, f9, f1
    fmuls f10, f10, f1
    fmuls f11, f11, f1
    fmuls f12, f12, f1
    fmuls f13, f13, f1
    opword 0x4C411382
    addi r6, r6, 0x1
    beq lbl_802F4FB4
    fcmpo cr0, f9, f0
    opword 0x4C411382
    beq lbl_802F4FB4
    fcmpo cr0, f10, f0
    opword 0x4C411382
    beq lbl_802F4FB4
    fcmpo cr0, f11, f0
    opword 0x4C411382
    beq lbl_802F4FB4
    fcmpo cr0, f12, f0
    opword 0x4C411382
    beq lbl_802F4FB4
    fcmpo cr0, f13, f0
    opword 0x4C411382
    beq lbl_802F4FB4
    b lbl_802F50E8
lbl_802F5040:
    lfs f1, 0x10(r5)
    fcmpo cr0, f8, f1
    bge lbl_802F50E8
    fcmpo cr0, f9, f1
    bge lbl_802F50E8
    fcmpo cr0, f10, f1
    bge lbl_802F50E8
    fcmpo cr0, f11, f1
    bge lbl_802F50E8
    fcmpo cr0, f12, f1
    bge lbl_802F50E8
    fcmpo cr0, f13, f1
    bge lbl_802F50E8
    lfs f0, 0x20(r5)
lbl_802F5078:
    fmuls f8, f8, f0
    subi r6, r6, 0x1
    fmuls f2, f2, f0
    fmuls f3, f3, f0
    fcmpo cr0, f8, f1
    fmuls f4, f4, f0
    fmuls f5, f5, f0
    fmuls f6, f6, f0
    fmuls f7, f7, f0
    fmuls f9, f9, f0
    fmuls f10, f10, f0
    fmuls f11, f11, f0
    fmuls f12, f12, f0
    fmuls f13, f13, f0
    bge lbl_802F50E8
    fcmpo cr0, f9, f1
    bge lbl_802F50E8
    fcmpo cr0, f10, f1
    bge lbl_802F50E8
    fcmpo cr0, f11, f1
    bge lbl_802F50E8
    fcmpo cr0, f12, f1
    bge lbl_802F50E8
    fcmpo cr0, f13, f1
    bge lbl_802F50E8
    extsb r0, r6
    cmpwi r0, -0x11
    bgt lbl_802F5078
lbl_802F50E8:
    stfs f2, 0x8(r1)
    addi r4, r1, 0x8
    extsb r5, r6
    stfs f3, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f5, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f7, 0x1c(r1)
    bl fn_802E3FE8
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802F5128
asm s8 * fn_802F5128() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_14
    li r14, 0x0
    lis r8, lbl_8037C8D8@ha
    stw r14, 0x1c(r3)
    addi r9, r3, 0x1c
    addi r8, r8, lbl_8037C8D8@l
    lis r7, fn_802F511C@ha
    stw r14, 0x20(r3)
    lis r6, __dt__Q36nw4hbm2ut5ColorFv@ha
    mr r16, r4
    mr r17, r5
    addi r4, r7, fn_802F511C@l
    addi r5, r6, __dt__Q36nw4hbm2ut5ColorFv@l
    stw r8, 0x0(r3)
    mr r15, r3
    li r6, 0x4
    li r7, 0x4
    stw r14, 0x18(r3)
    stw r9, 0x1c(r3)
    stw r9, 0x20(r3)
    addi r3, r3, 0x3c
    bl __construct_array
    lis r4, lbl_80341E30@ha
    li r7, 0xff
    addi r5, r4, lbl_80341E30@l
    lwz r0, 0x50(r15)
    lha r11, lbl_80341E30@l(r4)
    mr r4, r16
    lwz r3, 0x4c(r15)
    clrlwi r0, r0, 27
    lha r10, 0x2(r5)
    clrlwi r6, r3, 27
    lha r9, 0x4(r5)
    lha r8, 0x6(r5)
    addi r3, r15, 0x4
    sth r11, 0x24(r15)
    li r5, 0x14
    sth r10, 0x26(r15)
    sth r9, 0x28(r15)
    sth r8, 0x2a(r15)
    sth r7, 0x2c(r15)
    sth r7, 0x2e(r15)
    sth r7, 0x30(r15)
    sth r7, 0x32(r15)
    sth r7, 0x34(r15)
    sth r7, 0x36(r15)
    sth r7, 0x38(r15)
    sth r7, 0x3a(r15)
    stw r6, 0x4c(r15)
    stw r0, 0x50(r15)
    stb r14, 0x54(r15)
    stw r14, 0x58(r15)
    bl strncpy
    lwz r20, 0x3c(r16)
    addi r23, r16, 0x40
    lha r10, 0x14(r16)
    li r18, 0x8
    extrwi r12, r20, 4, 24
    clrlslwi r3, r20, 28, 2
    mulli r0, r12, 0x14
    clrlwi r11, r20, 28
    addi r24, r3, 0x40
    lha r9, 0x16(r16)
    lha r8, 0x18(r16)
    rlwinm r14, r20, 26, 26, 29
    add r22, r16, r24
    add r24, r24, r0
    lha r7, 0x1a(r16)
    add r21, r16, r24
    lha r6, 0x1c(r16)
    add r24, r24, r14
    lha r5, 0x1e(r16)
    cmplwi r11, 0x8
    lha r4, 0x20(r16)
    extrwi r19, r20, 4, 20
    lha r3, 0x22(r16)
    lha r0, 0x24(r16)
    lha r30, 0x26(r16)
    lha r29, 0x28(r16)
    lha r28, 0x2a(r16)
    lwz r27, 0x2c(r16)
    lwz r26, 0x30(r16)
    lwz r25, 0x34(r16)
    lwz r14, 0x38(r16)
    sth r10, 0x24(r15)
    sth r9, 0x26(r15)
    sth r8, 0x28(r15)
    sth r7, 0x2a(r15)
    sth r6, 0x2c(r15)
    sth r5, 0x2e(r15)
    sth r4, 0x30(r15)
    sth r3, 0x32(r15)
    sth r0, 0x34(r15)
    sth r30, 0x36(r15)
    sth r29, 0x38(r15)
    sth r28, 0x3a(r15)
    stw r27, 0x3c(r15)
    stw r26, 0x40(r15)
    stw r25, 0x44(r15)
    stw r14, 0x48(r15)
    bgt lbl_802F52D0
    mr r18, r11
lbl_802F52D0:
    cmplwi r12, 0xa
    li r14, 0xa
    bgt lbl_802F52E0
    mr r14, r12
lbl_802F52E0:
    cmplwi r19, 0x8
    li r27, 0x8
    bgt lbl_802F52F0
    mr r27, r19
lbl_802F52F0:
    extrwi r5, r20, 1, 6
    extrwi r0, r20, 1, 19
    neg r4, r5
    extrwi r3, r20, 1, 4
    stb r0, 0x34(r1)
    neg r0, r3
    or r3, r0, r3
    or r4, r4, r5
    extrwi r0, r20, 1, 8
    extrwi r6, r20, 2, 17
    stb r0, 0x33(r1)
    srwi r0, r4, 31
    cmplwi r6, 0x3
    li r28, 0x3
    stb r0, 0x31(r1)
    extrwi r0, r20, 1, 7
    stb r0, 0x32(r1)
    srwi r0, r3, 31
    stb r0, 0x30(r1)
    bgt lbl_802F5344
    mr r28, r6
lbl_802F5344:
    extrwi r0, r20, 3, 14
    li r29, 0x4
    cmplwi r0, 0x4
    bgt lbl_802F5358
    mr r29, r0
lbl_802F5358:
    extrwi r0, r20, 5, 9
    li r30, 0x10
    cmplwi r0, 0x10
    bgt lbl_802F536C
    mr r30, r0
lbl_802F536C:
    lbz r0, 0x31(r1)
    mr r3, r15
    lbz r8, 0x34(r1)
    clrlwi r4, r18, 24
    stw r0, 0x8(r1)
    clrlwi r5, r14, 24
    lbz r0, 0x30(r1)
    clrlwi r6, r27, 24
    clrlwi r7, r30, 24
    clrlwi r9, r29, 24
    stw r0, 0xc(r1)
    clrlwi r10, r28, 24
    lbz r0, 0x33(r1)
    stw r0, 0x10(r1)
    lbz r0, 0x32(r1)
    stw r0, 0x14(r1)
    bl fn_802F6424
    lwz r4, 0x58(r15)
    cmpwi r4, 0x0
    beq lbl_802F6358
    clrlwi. r19, r18, 24
    beq lbl_802F5404
    lwz r3, 0x50(r15)
    rlwinm r0, r3, 9, 23, 26
    srwi r20, r3, 28
    add r25, r4, r0
    b lbl_802F53F0
lbl_802F53D8:
    mr r3, r25
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r25, r25, 0x20
    addi r20, r20, 0x1
lbl_802F53F0:
    cmplw r20, r19
    blt lbl_802F53D8
    lwz r0, 0x50(r15)
    rlwimi r0, r18, 28, 0, 3
    stw r0, 0x50(r15)
lbl_802F5404:
    clrlwi. r0, r18, 24
    beq lbl_802F5498
    lwz r3, 0x0(r17)
    li r18, 0x0
    lwz r19, 0x58(r15)
    lis r31, 0x7469
    addi r20, r3, 0xc
    b lbl_802F5484
lbl_802F5424:
    clrlslwi r0, r18, 24, 2
    lwz r3, 0xc(r17)
    add r26, r23, r0
    lhzx r0, r23, r0
    lwz r12, 0x0(r3)
    addi r4, r31, 0x6d67
    slwi r0, r0, 3
    li r6, 0x0
    lwzx r0, r20, r0
    lwz r12, 0xc(r12)
    add r5, r20, r0
    mtctr r12
    bctrl
    lwz r0, 0x58(r15)
    clrlslwi r25, r18, 24, 5
    mr r4, r3
    li r5, 0x0
    add r3, r0, r25
    bl InitGXTexObjFromTPL__Q36nw4hbm3lyt6detailFP9_GXTexObjP10TPLPaletteUl
    lbz r4, 0x2(r26)
    add r3, r19, r25
    lbz r5, 0x3(r26)
    bl GXInitTexObjWrapMode
    addi r18, r18, 0x1
lbl_802F5484:
    lwz r0, 0x50(r15)
    clrlwi r3, r18, 24
    srwi r0, r0, 28
    cmplw r3, r0
    blt lbl_802F5424
lbl_802F5498:
    lwz r0, 0x4c(r15)
    clrlwi. r3, r14, 24
    lwz r4, 0x58(r15)
    rlwinm r0, r0, 9, 23, 26
    add r4, r4, r0
    ble lbl_802F55A8
    srwi. r0, r3, 2
    mtctr r0
    beq lbl_802F5570
lbl_802F54BC:
    lfs f2, 0x0(r22)
    lfs f1, 0x4(r22)
    stfs f2, 0x0(r4)
    lfs f0, 0x8(r22)
    stfs f1, 0x4(r4)
    lfs f1, 0xc(r22)
    stfs f0, 0x8(r4)
    lfs f0, 0x10(r22)
    stfs f1, 0xc(r4)
    lfs f2, 0x14(r22)
    stfs f0, 0x10(r4)
    lfs f1, 0x18(r22)
    stfs f2, 0x14(r4)
    lfs f0, 0x1c(r22)
    stfs f1, 0x18(r4)
    lfs f1, 0x20(r22)
    stfs f0, 0x1c(r4)
    lfs f0, 0x24(r22)
    stfs f1, 0x20(r4)
    lfs f2, 0x28(r22)
    stfs f0, 0x24(r4)
    lfs f1, 0x2c(r22)
    stfs f2, 0x28(r4)
    lfs f0, 0x30(r22)
    stfs f1, 0x2c(r4)
    lfs f1, 0x34(r22)
    stfs f0, 0x30(r4)
    lfs f0, 0x38(r22)
    stfs f1, 0x34(r4)
    lfs f2, 0x3c(r22)
    stfs f0, 0x38(r4)
    lfs f1, 0x40(r22)
    stfs f2, 0x3c(r4)
    lfs f0, 0x44(r22)
    stfs f1, 0x40(r4)
    lfs f1, 0x48(r22)
    stfs f0, 0x44(r4)
    lfs f0, 0x4c(r22)
    addi r22, r22, 0x50
    stfs f1, 0x48(r4)
    stfs f0, 0x4c(r4)
    addi r4, r4, 0x50
    bdnz lbl_802F54BC
    andi. r3, r3, 0x3
    beq lbl_802F55A8
lbl_802F5570:
    mtctr r3
lbl_802F5574:
    lfs f2, 0x0(r22)
    lfs f1, 0x4(r22)
    stfs f2, 0x0(r4)
    lfs f0, 0x8(r22)
    stfs f1, 0x4(r4)
    lfs f1, 0xc(r22)
    stfs f0, 0x8(r4)
    lfs f0, 0x10(r22)
    addi r22, r22, 0x14
    stfs f1, 0xc(r4)
    stfs f0, 0x10(r4)
    addi r4, r4, 0x14
    bdnz lbl_802F5574
lbl_802F55A8:
    lwz r3, 0x4c(r15)
    clrlwi. r5, r27, 24
    lwz r4, 0x58(r15)
    extrwi r0, r3, 4, 4
    rlwinm r3, r3, 9, 23, 26
    mulli r0, r0, 0x14
    add r0, r4, r0
    add r3, r3, r0
    beq lbl_802F56FC
    lwz r0, 0x50(r15)
    extrwi r4, r0, 4, 8
    cmplw cr1, r4, r5
    bge cr1, lbl_802F56F0
    subf r0, r4, r5
    subi r9, r5, 0x8
    cmplwi r0, 0x8
    ble lbl_802F56AC
    bgt cr1, lbl_802F56AC
    addi r0, r9, 0x7
    slwi r5, r4, 2
    subf r0, r4, r0
    li r8, 0x1
    srwi r0, r0, 3
    add r10, r3, r5
    li r7, 0x4
    li r6, 0x3c
    li r5, 0x0
    mtctr r0
    cmplw r4, r9
    bge lbl_802F56AC
lbl_802F5620:
    stb r8, 0x0(r10)
    addi r4, r4, 0x8
    stb r7, 0x1(r10)
    stb r6, 0x2(r10)
    stb r5, 0x3(r10)
    stb r8, 0x4(r10)
    stb r7, 0x5(r10)
    stb r6, 0x6(r10)
    stb r5, 0x7(r10)
    stb r8, 0x8(r10)
    stb r7, 0x9(r10)
    stb r6, 0xa(r10)
    stb r5, 0xb(r10)
    stb r8, 0xc(r10)
    stb r7, 0xd(r10)
    stb r6, 0xe(r10)
    stb r5, 0xf(r10)
    stb r8, 0x10(r10)
    stb r7, 0x11(r10)
    stb r6, 0x12(r10)
    stb r5, 0x13(r10)
    stb r8, 0x14(r10)
    stb r7, 0x15(r10)
    stb r6, 0x16(r10)
    stb r5, 0x17(r10)
    stb r8, 0x18(r10)
    stb r7, 0x19(r10)
    stb r6, 0x1a(r10)
    stb r5, 0x1b(r10)
    stb r8, 0x1c(r10)
    stb r7, 0x1d(r10)
    stb r6, 0x1e(r10)
    stb r5, 0x1f(r10)
    addi r10, r10, 0x20
    bdnz lbl_802F5620
lbl_802F56AC:
    clrlwi r5, r27, 24
    slwi r6, r4, 2
    subf r0, r4, r5
    li r9, 0x1
    add r10, r3, r6
    li r8, 0x4
    li r7, 0x3c
    li r6, 0x0
    mtctr r0
    cmplw r4, r5
    bge lbl_802F56F0
lbl_802F56D8:
    stb r9, 0x0(r10)
    stb r8, 0x1(r10)
    stb r7, 0x2(r10)
    stb r6, 0x3(r10)
    addi r10, r10, 0x4
    bdnz lbl_802F56D8
lbl_802F56F0:
    lwz r0, 0x50(r15)
    rlwimi r0, r27, 20, 8, 11
    stw r0, 0x50(r15)
lbl_802F56FC:
    li r5, 0x0
    b lbl_802F5730
lbl_802F5704:
    lbz r4, 0x0(r21)
    addi r5, r5, 0x1
    lbz r0, 0x1(r21)
    stb r4, 0x0(r3)
    lbz r4, 0x2(r21)
    stb r0, 0x1(r3)
    lbz r0, 0x3(r21)
    addi r21, r21, 0x4
    stb r4, 0x2(r3)
    stb r0, 0x3(r3)
    addi r3, r3, 0x4
lbl_802F5730:
    lwz r0, 0x50(r15)
    extrwi r0, r0, 4, 8
    cmplw r5, r0
    blt lbl_802F5704
    lbz r0, 0x31(r1)
    cmpwi r0, 0x0
    beq lbl_802F5798
    lwz r4, 0x4c(r15)
    add r7, r16, r24
    lwz r6, 0x58(r15)
    extrwi r0, r4, 4, 4
    rlwinm r5, r4, 14, 26, 29
    mulli r3, r0, 0x14
    rlwinm r4, r4, 9, 23, 26
    lbzx r0, r16, r24
    addi r24, r24, 0x4
    add r5, r5, r4
    lbz r4, 0x1(r7)
    add r3, r6, r3
    add r5, r5, r3
    lbz r3, 0x2(r7)
    stb r0, 0x0(r5)
    lbz r0, 0x3(r7)
    stb r4, 0x1(r5)
    stb r3, 0x2(r5)
    stb r0, 0x3(r5)
lbl_802F5798:
    lbz r0, 0x30(r1)
    cmpwi r0, 0x0
    beq lbl_802F57F8
    lwz r6, 0x4c(r15)
    add r8, r16, r24
    lwz r7, 0x58(r15)
    extrwi r0, r6, 4, 4
    rlwinm r4, r6, 14, 26, 29
    mulli r5, r0, 0x14
    rlwinm r3, r6, 9, 23, 26
    rlwinm r6, r6, 26, 29, 29
    lbzx r0, r16, r24
    add r3, r4, r3
    lbz r4, 0x1(r8)
    add r5, r6, r5
    add r3, r7, r3
    add r5, r5, r3
    lbz r3, 0x2(r8)
    stb r0, 0x0(r5)
    addi r24, r24, 0x4
    lbz r0, 0x3(r8)
    stb r4, 0x1(r5)
    stb r3, 0x2(r5)
    stb r0, 0x3(r5)
lbl_802F57F8:
    lbz r0, 0x34(r1)
    cmpwi r0, 0x0
    beq lbl_802F585C
    lwz r4, 0x4c(r15)
    add r10, r16, r24
    lbzx r5, r16, r24
    addi r24, r24, 0x4
    extrwi r0, r4, 4, 4
    rlwinm r3, r4, 14, 26, 29
    mulli r6, r0, 0x14
    lwz r9, 0x58(r15)
    rlwinm r0, r4, 9, 23, 26
    rlwinm r8, r4, 27, 29, 29
    rlwinm r7, r4, 26, 29, 29
    add r3, r3, r0
    add r0, r8, r7
    lbz r4, 0x1(r10)
    add r7, r6, r3
    lbz r3, 0x2(r10)
    add r6, r9, r0
    stbux r5, r6, r7
    lbz r0, 0x3(r10)
    stb r4, 0x1(r6)
    stb r3, 0x2(r6)
    stb r0, 0x3(r6)
lbl_802F585C:
    clrlwi r3, r28, 24
    cmpwi cr1, r3, 0x0
    beq cr1, lbl_802F5AB8
    lwz r12, 0x4c(r15)
    add r5, r16, r24
    lwz r17, 0x58(r15)
    li r6, 0x0
    extrwi r0, r12, 4, 4
    rlwinm r11, r12, 28, 29, 29
    mulli r4, r0, 0x14
    rlwinm r9, r12, 26, 29, 29
    rlwinm r10, r12, 20, 29, 29
    rlwinm r8, r12, 27, 29, 29
    rlwinm r7, r12, 14, 26, 29
    rlwinm r0, r12, 9, 23, 26
    add r0, r7, r0
    rlwinm r14, r12, 19, 27, 29
    rlwinm r12, r12, 29, 29, 29
    add r8, r10, r8
    add r7, r11, r9
    add r4, r4, r0
    add r7, r8, r7
    add r0, r14, r12
    add r4, r7, r4
    add r0, r17, r0
    add r0, r4, r0
    ble cr1, lbl_802F5AB8
    cmpwi r3, 0x8
    subi r8, r3, 0x8
    ble lbl_802F5A64
    li r7, 0x0
    blt cr1, lbl_802F58F0
    lis r4, 0x8000
    subi r4, r4, 0x2
    cmpw r3, r4
    bgt lbl_802F58F0
    li r7, 0x1
lbl_802F58F0:
    cmpwi r7, 0x0
    beq lbl_802F5A64
    addi r7, r8, 0x7
    mr r3, r5
    srwi r7, r7, 3
    mr r4, r0
    mtctr r7
    cmpwi r8, 0x0
    ble lbl_802F5A64
lbl_802F5914:
    lwz r8, 0x0(r3)
    addi r6, r6, 0x8
    lwz r7, 0x4(r3)
    stw r8, 0x0(r4)
    lfs f0, 0x8(r3)
    stw r7, 0x4(r4)
    lwz r8, 0xc(r3)
    stfs f0, 0x8(r4)
    lwz r7, 0x10(r3)
    stw r8, 0xc(r4)
    lwz r8, 0x14(r3)
    stw r7, 0x10(r4)
    lwz r7, 0x18(r3)
    stw r8, 0x14(r4)
    lfs f0, 0x1c(r3)
    stw r7, 0x18(r4)
    lwz r8, 0x20(r3)
    stfs f0, 0x1c(r4)
    lwz r7, 0x24(r3)
    stw r8, 0x20(r4)
    lwz r8, 0x28(r3)
    stw r7, 0x24(r4)
    lwz r7, 0x2c(r3)
    stw r8, 0x28(r4)
    lfs f0, 0x30(r3)
    stw r7, 0x2c(r4)
    lwz r8, 0x34(r3)
    stfs f0, 0x30(r4)
    lwz r7, 0x38(r3)
    stw r8, 0x34(r4)
    lwz r8, 0x3c(r3)
    stw r7, 0x38(r4)
    lwz r7, 0x40(r3)
    stw r8, 0x3c(r4)
    lfs f0, 0x44(r3)
    stw r7, 0x40(r4)
    lwz r8, 0x48(r3)
    stfs f0, 0x44(r4)
    lwz r7, 0x4c(r3)
    stw r8, 0x48(r4)
    lwz r8, 0x50(r3)
    stw r7, 0x4c(r4)
    lwz r7, 0x54(r3)
    stw r8, 0x50(r4)
    lfs f0, 0x58(r3)
    stw r7, 0x54(r4)
    lwz r8, 0x5c(r3)
    stfs f0, 0x58(r4)
    lwz r7, 0x60(r3)
    stw r8, 0x5c(r4)
    lwz r8, 0x64(r3)
    stw r7, 0x60(r4)
    lwz r7, 0x68(r3)
    stw r8, 0x64(r4)
    lfs f0, 0x6c(r3)
    stw r7, 0x68(r4)
    lwz r8, 0x70(r3)
    stfs f0, 0x6c(r4)
    lwz r7, 0x74(r3)
    stw r8, 0x70(r4)
    lwz r8, 0x78(r3)
    stw r7, 0x74(r4)
    lwz r7, 0x7c(r3)
    stw r8, 0x78(r4)
    lfs f0, 0x80(r3)
    stw r7, 0x7c(r4)
    lwz r8, 0x84(r3)
    stfs f0, 0x80(r4)
    lwz r7, 0x88(r3)
    stw r8, 0x84(r4)
    lwz r8, 0x8c(r3)
    stw r7, 0x88(r4)
    lwz r7, 0x90(r3)
    stw r8, 0x8c(r4)
    lfs f0, 0x94(r3)
    stw r7, 0x90(r4)
    lwz r8, 0x98(r3)
    stfs f0, 0x94(r4)
    lwz r7, 0x9c(r3)
    addi r3, r3, 0xa0
    stw r8, 0x98(r4)
    stw r7, 0x9c(r4)
    addi r4, r4, 0xa0
    bdnz lbl_802F5914
lbl_802F5A64:
    mulli r7, r6, 0x14
    clrlwi r4, r28, 24
    subf r3, r6, r4
    add r5, r5, r7
    add r7, r0, r7
    mtctr r3
    cmpw r6, r4
    bge lbl_802F5AB8
lbl_802F5A84:
    lwz r3, 0x0(r5)
    lwz r0, 0x4(r5)
    stw r3, 0x0(r7)
    lfs f0, 0x8(r5)
    stw r0, 0x4(r7)
    lwz r3, 0xc(r5)
    stfs f0, 0x8(r7)
    lwz r0, 0x10(r5)
    addi r5, r5, 0x14
    stw r3, 0xc(r7)
    stw r0, 0x10(r7)
    addi r7, r7, 0x14
    bdnz lbl_802F5A84
lbl_802F5AB8:
    lwz r0, 0x3c(r16)
    clrlwi. r12, r29, 24
    extrwi r0, r0, 2, 17
    mulli r0, r0, 0x14
    add r24, r24, r0
    beq lbl_802F5E40
    beq lbl_802F5C38
    lwz r10, 0x4c(r15)
    lwz r0, 0x50(r15)
    extrwi r3, r10, 4, 4
    rlwinm r9, r10, 28, 29, 29
    mulli r4, r3, 0x14
    rlwinm r7, r10, 26, 29, 29
    extrwi r3, r0, 3, 14
    lwz r11, 0x58(r15)
    rlwinm r8, r10, 20, 29, 29
    rlwinm r6, r10, 27, 29, 29
    rlwinm r5, r10, 14, 26, 29
    rlwinm r0, r10, 9, 23, 26
    add r0, r5, r0
    add r6, r8, r6
    add r5, r9, r7
    cmplw cr1, r3, r12
    add r0, r4, r0
    rlwinm r7, r10, 29, 29, 29
    add r4, r6, r5
    add r4, r7, r4
    add r0, r11, r0
    add r7, r4, r0
    bge cr1, lbl_802F5C2C
    subf r0, r3, r12
    subi r6, r12, 0x8
    cmplwi r0, 0x8
    ble lbl_802F5BF4
    bgt cr1, lbl_802F5BF4
    addi r0, r6, 0x7
    slwi r5, r3, 2
    subf r0, r3, r0
    li r4, 0x0
    srwi r0, r0, 3
    add r5, r7, r5
    mtctr r0
    cmplw r3, r6
    bge lbl_802F5BF4
lbl_802F5B68:
    stb r4, 0x0(r5)
    addi r3, r3, 0x8
    stb r4, 0x1(r5)
    stb r4, 0x2(r5)
    stb r4, 0x3(r5)
    stb r4, 0x4(r5)
    stb r4, 0x5(r5)
    stb r4, 0x6(r5)
    stb r4, 0x7(r5)
    stb r4, 0x8(r5)
    stb r4, 0x9(r5)
    stb r4, 0xa(r5)
    stb r4, 0xb(r5)
    stb r4, 0xc(r5)
    stb r4, 0xd(r5)
    stb r4, 0xe(r5)
    stb r4, 0xf(r5)
    stb r4, 0x10(r5)
    stb r4, 0x11(r5)
    stb r4, 0x12(r5)
    stb r4, 0x13(r5)
    stb r4, 0x14(r5)
    stb r4, 0x15(r5)
    stb r4, 0x16(r5)
    stb r4, 0x17(r5)
    stb r4, 0x18(r5)
    stb r4, 0x19(r5)
    stb r4, 0x1a(r5)
    stb r4, 0x1b(r5)
    stb r4, 0x1c(r5)
    stb r4, 0x1d(r5)
    stb r4, 0x1e(r5)
    stb r4, 0x1f(r5)
    addi r5, r5, 0x20
    bdnz lbl_802F5B68
lbl_802F5BF4:
    clrlwi r4, r29, 24
    slwi r6, r3, 2
    subf r0, r3, r4
    li r5, 0x0
    add r6, r7, r6
    mtctr r0
    cmplw r3, r4
    bge lbl_802F5C2C
lbl_802F5C14:
    stb r5, 0x0(r6)
    stb r5, 0x1(r6)
    stb r5, 0x2(r6)
    stb r5, 0x3(r6)
    addi r6, r6, 0x4
    bdnz lbl_802F5C14
lbl_802F5C2C:
    lwz r0, 0x50(r15)
    rlwimi r0, r29, 15, 14, 16
    stw r0, 0x50(r15)
lbl_802F5C38:
    lwz r10, 0x4c(r15)
    clrlwi r4, r29, 24
    lwz r11, 0x58(r15)
    cmpwi cr1, r4, 0x0
    extrwi r0, r10, 4, 4
    rlwinm r9, r10, 28, 29, 29
    mulli r5, r0, 0x14
    rlwinm r7, r10, 26, 29, 29
    rlwinm r8, r10, 20, 29, 29
    rlwinm r6, r10, 27, 29, 29
    rlwinm r3, r10, 14, 26, 29
    rlwinm r0, r10, 9, 23, 26
    add r0, r3, r0
    add r6, r8, r6
    add r3, r9, r7
    rlwinm r7, r10, 29, 29, 29
    add r3, r6, r3
    add r0, r5, r0
    add r3, r7, r3
    add r5, r16, r24
    add r0, r11, r0
    li r6, 0x0
    add r0, r3, r0
    ble cr1, lbl_802F5E40
    cmpwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_802F5DF4
    li r7, 0x0
    blt cr1, lbl_802F5CC0
    lis r3, 0x8000
    subi r3, r3, 0x2
    cmpw r4, r3
    bgt lbl_802F5CC0
    li r7, 0x1
lbl_802F5CC0:
    cmpwi r7, 0x0
    beq lbl_802F5DF4
    addi r7, r8, 0x7
    mr r3, r5
    srwi r7, r7, 3
    mr r4, r0
    mtctr r7
    cmpwi r8, 0x0
    ble lbl_802F5DF4
lbl_802F5CE4:
    lbz r8, 0x0(r3)
    addi r6, r6, 0x8
    lbz r7, 0x1(r3)
    stb r8, 0x0(r4)
    lbz r8, 0x2(r3)
    stb r7, 0x1(r4)
    lbz r7, 0x3(r3)
    stb r8, 0x2(r4)
    lbz r8, 0x4(r3)
    stb r7, 0x3(r4)
    lbz r7, 0x5(r3)
    stb r8, 0x4(r4)
    lbz r8, 0x6(r3)
    stb r7, 0x5(r4)
    lbz r7, 0x7(r3)
    stb r8, 0x6(r4)
    lbz r8, 0x8(r3)
    stb r7, 0x7(r4)
    lbz r7, 0x9(r3)
    stb r8, 0x8(r4)
    lbz r8, 0xa(r3)
    stb r7, 0x9(r4)
    lbz r7, 0xb(r3)
    stb r8, 0xa(r4)
    lbz r8, 0xc(r3)
    stb r7, 0xb(r4)
    lbz r7, 0xd(r3)
    stb r8, 0xc(r4)
    lbz r8, 0xe(r3)
    stb r7, 0xd(r4)
    lbz r7, 0xf(r3)
    stb r8, 0xe(r4)
    lbz r8, 0x10(r3)
    stb r7, 0xf(r4)
    lbz r7, 0x11(r3)
    stb r8, 0x10(r4)
    lbz r8, 0x12(r3)
    stb r7, 0x11(r4)
    lbz r7, 0x13(r3)
    stb r8, 0x12(r4)
    lbz r8, 0x14(r3)
    stb r7, 0x13(r4)
    lbz r7, 0x15(r3)
    stb r8, 0x14(r4)
    lbz r8, 0x16(r3)
    stb r7, 0x15(r4)
    lbz r7, 0x17(r3)
    stb r8, 0x16(r4)
    lbz r8, 0x18(r3)
    stb r7, 0x17(r4)
    lbz r7, 0x19(r3)
    stb r8, 0x18(r4)
    lbz r8, 0x1a(r3)
    stb r7, 0x19(r4)
    lbz r7, 0x1b(r3)
    stb r8, 0x1a(r4)
    lbz r8, 0x1c(r3)
    stb r7, 0x1b(r4)
    lbz r7, 0x1d(r3)
    stb r8, 0x1c(r4)
    lbz r8, 0x1e(r3)
    stb r7, 0x1d(r4)
    lbz r7, 0x1f(r3)
    addi r3, r3, 0x20
    stb r8, 0x1e(r4)
    stb r7, 0x1f(r4)
    addi r4, r4, 0x20
    bdnz lbl_802F5CE4
lbl_802F5DF4:
    clrlwi r4, r29, 24
    slwi r7, r6, 2
    subf r3, r6, r4
    add r5, r5, r7
    add r7, r0, r7
    mtctr r3
    cmpw r6, r4
    bge lbl_802F5E40
lbl_802F5E14:
    lbz r3, 0x0(r5)
    lbz r0, 0x1(r5)
    stb r3, 0x0(r7)
    lbz r3, 0x2(r5)
    stb r0, 0x1(r7)
    lbz r0, 0x3(r5)
    addi r5, r5, 0x4
    stb r3, 0x2(r7)
    stb r0, 0x3(r7)
    addi r7, r7, 0x4
    bdnz lbl_802F5E14
lbl_802F5E40:
    lwz r3, 0x3c(r16)
    clrlwi. r0, r30, 24
    rlwinm r3, r3, 19, 27, 29
    add r24, r24, r3
    beq lbl_802F6270
    beq lbl_802F6058
    lwz r11, 0x4c(r15)
    lwz r3, 0x50(r15)
    extrwi r5, r11, 2, 12
    extrwi r4, r11, 4, 4
    add r4, r5, r4
    extrwi r3, r3, 5, 18
    mulli r10, r4, 0x14
    rlwinm r6, r11, 27, 29, 29
    rlwinm r4, r11, 20, 29, 29
    lwz r12, 0x58(r15)
    rlwinm r7, r11, 26, 29, 29
    add r4, r6, r4
    rlwinm r5, r11, 28, 29, 29
    add r6, r10, r7
    rlwinm r9, r11, 9, 23, 26
    rlwinm r8, r11, 14, 26, 29
    add r8, r9, r8
    add r5, r5, r4
    add r4, r8, r6
    rlwinm r7, r11, 29, 29, 29
    cmplw r3, r0
    rlwinm r6, r11, 19, 27, 29
    add r5, r7, r5
    add r4, r12, r4
    add r5, r6, r5
    add r10, r5, r4
    bge lbl_802F604C
    li r12, 0x0
    li r17, 0xff
    li r9, 0xaf
    li r6, 0x61
    li r8, 0x77
    li r7, 0x57
    slwi r4, r3, 4
    li r5, 0x81
    stb r17, 0x24(r1)
    subf r3, r3, r0
    li r14, 0x4
    add r18, r10, r4
    stb r9, 0x25(r1)
    stb r12, 0x26(r1)
    stb r6, 0x27(r1)
    lwz r0, 0x24(r1)
    stb r8, 0x28(r1)
    stw r0, 0x1c(r1)
    stb r7, 0x29(r1)
    lbz r11, 0x1c(r1)
    stb r12, 0x2a(r1)
    lbz r10, 0x1d(r1)
    stb r5, 0x2b(r1)
    lbz r9, 0x1e(r1)
    lwz r0, 0x28(r1)
    stb r17, 0x20(r1)
    lbz r8, 0x1f(r1)
    stw r0, 0x18(r1)
    stb r14, 0x21(r1)
    lbz r7, 0x18(r1)
    stb r17, 0x22(r1)
    lbz r6, 0x19(r1)
    stb r12, 0x23(r1)
    lbz r5, 0x1a(r1)
    stb r12, 0x2c(r1)
    lbz r4, 0x1b(r1)
    stb r12, 0x2d(r1)
    stb r12, 0x2e(r1)
    stb r12, 0x2f(r1)
    bge lbl_802F604C
    srwi. r0, r3, 1
    mtctr r0
    beq lbl_802F6000
lbl_802F5F70:
    stb r17, 0x0(r18)
    stb r14, 0x1(r18)
    stb r17, 0x2(r18)
    stb r12, 0x3(r18)
    stb r11, 0x4(r18)
    stb r10, 0x5(r18)
    stb r9, 0x6(r18)
    stb r8, 0x7(r18)
    stb r7, 0x8(r18)
    stb r6, 0x9(r18)
    stb r5, 0xa(r18)
    stb r4, 0xb(r18)
    stb r12, 0xc(r18)
    stb r12, 0xd(r18)
    stb r12, 0xe(r18)
    stb r12, 0xf(r18)
    stb r17, 0x10(r18)
    stb r14, 0x11(r18)
    stb r17, 0x12(r18)
    stb r12, 0x13(r18)
    stb r11, 0x14(r18)
    stb r10, 0x15(r18)
    stb r9, 0x16(r18)
    stb r8, 0x17(r18)
    stb r7, 0x18(r18)
    stb r6, 0x19(r18)
    stb r5, 0x1a(r18)
    stb r4, 0x1b(r18)
    stb r12, 0x1c(r18)
    stb r12, 0x1d(r18)
    stb r12, 0x1e(r18)
    stb r12, 0x1f(r18)
    addi r18, r18, 0x20
    bdnz lbl_802F5F70
    andi. r3, r3, 0x1
    beq lbl_802F604C
lbl_802F6000:
    mtctr r3
lbl_802F6004:
    stb r17, 0x0(r18)
    stb r14, 0x1(r18)
    stb r17, 0x2(r18)
    stb r12, 0x3(r18)
    stb r11, 0x4(r18)
    stb r10, 0x5(r18)
    stb r9, 0x6(r18)
    stb r8, 0x7(r18)
    stb r7, 0x8(r18)
    stb r6, 0x9(r18)
    stb r5, 0xa(r18)
    stb r4, 0xb(r18)
    stb r12, 0xc(r18)
    stb r12, 0xd(r18)
    stb r12, 0xe(r18)
    stb r12, 0xf(r18)
    addi r18, r18, 0x10
    bdnz lbl_802F6004
lbl_802F604C:
    lwz r0, 0x50(r15)
    rlwimi r0, r30, 9, 18, 22
    stw r0, 0x50(r15)
lbl_802F6058:
    lwz r10, 0x4c(r15)
    clrlwi. r3, r30, 24
    lwz r11, 0x58(r15)
    extrwi r4, r10, 2, 12
    extrwi r0, r10, 4, 4
    add r0, r4, r0
    rlwinm r6, r10, 26, 29, 29
    mulli r9, r0, 0x14
    rlwinm r4, r10, 27, 29, 29
    rlwinm r0, r10, 20, 29, 29
    rlwinm r8, r10, 9, 23, 26
    rlwinm r7, r10, 14, 26, 29
    add r0, r4, r0
    rlwinm r5, r10, 28, 29, 29
    add r6, r9, r6
    add r0, r5, r0
    rlwinm r4, r10, 29, 29, 29
    add r7, r8, r7
    rlwinm r5, r10, 19, 27, 29
    add r4, r4, r0
    add r0, r7, r6
    add r4, r5, r4
    add r5, r16, r24
    add r0, r11, r0
    add r6, r4, r0
    ble lbl_802F6270
    srwi. r0, r3, 1
    mtctr r0
    beq lbl_802F61E0
lbl_802F60CC:
    lbz r4, 0x0(r5)
    lbz r0, 0x1(r5)
    stb r4, 0x0(r6)
    lbz r4, 0x2(r5)
    stb r0, 0x1(r6)
    lbz r0, 0x3(r5)
    stb r4, 0x2(r6)
    lbz r4, 0x4(r5)
    stb r0, 0x3(r6)
    lbz r0, 0x5(r5)
    stb r4, 0x4(r6)
    lbz r4, 0x6(r5)
    stb r0, 0x5(r6)
    lbz r0, 0x7(r5)
    stb r4, 0x6(r6)
    lbz r4, 0x8(r5)
    stb r0, 0x7(r6)
    lbz r0, 0x9(r5)
    stb r4, 0x8(r6)
    lbz r4, 0xa(r5)
    stb r0, 0x9(r6)
    lbz r0, 0xb(r5)
    stb r4, 0xa(r6)
    lbz r4, 0xc(r5)
    stb r0, 0xb(r6)
    lbz r0, 0xd(r5)
    stb r4, 0xc(r6)
    lbz r4, 0xe(r5)
    stb r0, 0xd(r6)
    lbz r0, 0xf(r5)
    stb r4, 0xe(r6)
    lbz r4, 0x10(r5)
    stb r0, 0xf(r6)
    lbz r0, 0x11(r5)
    stb r4, 0x10(r6)
    lbz r4, 0x12(r5)
    stb r0, 0x11(r6)
    lbz r0, 0x13(r5)
    stb r4, 0x12(r6)
    lbz r4, 0x14(r5)
    stb r0, 0x13(r6)
    lbz r0, 0x15(r5)
    stb r4, 0x14(r6)
    lbz r4, 0x16(r5)
    stb r0, 0x15(r6)
    lbz r0, 0x17(r5)
    stb r4, 0x16(r6)
    lbz r4, 0x18(r5)
    stb r0, 0x17(r6)
    lbz r0, 0x19(r5)
    stb r4, 0x18(r6)
    lbz r4, 0x1a(r5)
    stb r0, 0x19(r6)
    lbz r0, 0x1b(r5)
    stb r4, 0x1a(r6)
    lbz r4, 0x1c(r5)
    stb r0, 0x1b(r6)
    lbz r0, 0x1d(r5)
    stb r4, 0x1c(r6)
    lbz r4, 0x1e(r5)
    stb r0, 0x1d(r6)
    lbz r0, 0x1f(r5)
    addi r5, r5, 0x20
    stb r4, 0x1e(r6)
    stb r0, 0x1f(r6)
    addi r6, r6, 0x20
    bdnz lbl_802F60CC
    andi. r3, r3, 0x1
    beq lbl_802F6270
lbl_802F61E0:
    mtctr r3
lbl_802F61E4:
    lbz r4, 0x0(r5)
    lbz r0, 0x1(r5)
    stb r4, 0x0(r6)
    lbz r4, 0x2(r5)
    stb r0, 0x1(r6)
    lbz r0, 0x3(r5)
    stb r4, 0x2(r6)
    lbz r4, 0x4(r5)
    stb r0, 0x3(r6)
    lbz r0, 0x5(r5)
    stb r4, 0x4(r6)
    lbz r4, 0x6(r5)
    stb r0, 0x5(r6)
    lbz r0, 0x7(r5)
    stb r4, 0x6(r6)
    lbz r4, 0x8(r5)
    stb r0, 0x7(r6)
    lbz r0, 0x9(r5)
    stb r4, 0x8(r6)
    lbz r4, 0xa(r5)
    stb r0, 0x9(r6)
    lbz r0, 0xb(r5)
    stb r4, 0xa(r6)
    lbz r4, 0xc(r5)
    stb r0, 0xb(r6)
    lbz r0, 0xd(r5)
    stb r4, 0xc(r6)
    lbz r4, 0xe(r5)
    stb r0, 0xd(r6)
    lbz r0, 0xf(r5)
    addi r5, r5, 0x10
    stb r4, 0xe(r6)
    stb r0, 0xf(r6)
    addi r6, r6, 0x10
    bdnz lbl_802F61E4
lbl_802F6270:
    lbz r0, 0x33(r1)
    lwz r3, 0x3c(r16)
    cmpwi r0, 0x0
    rlwinm r0, r3, 18, 23, 27
    add r24, r24, r0
    beq lbl_802F62E8
    lwz r6, 0x4c(r15)
    add r10, r16, r24
    lwz r9, 0x58(r15)
    extrwi r3, r6, 4, 4
    rlwinm r5, r6, 20, 29, 29
    mulli r8, r3, 0x14
    rlwinm r0, r6, 27, 29, 29
    rlwinm r4, r6, 26, 29, 29
    lbz r3, 0x2(r10)
    add r0, r5, r0
    lbzx r5, r16, r24
    rlwinm r7, r6, 14, 26, 29
    rlwinm r6, r6, 9, 23, 26
    add r7, r7, r6
    add r0, r4, r0
    add r6, r9, r0
    lbz r4, 0x1(r10)
    add r7, r8, r7
    lbz r0, 0x3(r10)
    stbux r5, r6, r7
    addi r24, r24, 0x4
    stb r4, 0x1(r6)
    stb r3, 0x2(r6)
    stb r0, 0x3(r6)
lbl_802F62E8:
    lbz r0, 0x32(r1)
    cmpwi r0, 0x0
    beq lbl_802F6358
    lwz r4, 0x4c(r15)
    add r10, r16, r24
    lwz r9, 0x58(r15)
    extrwi r3, r4, 4, 4
    rlwinm r8, r4, 28, 29, 29
    rlwinm r0, r4, 26, 29, 29
    rlwinm r7, r4, 20, 29, 29
    rlwinm r5, r4, 27, 29, 29
    rlwinm r6, r4, 14, 26, 29
    add r0, r8, r0
    rlwinm r4, r4, 9, 23, 26
    add r7, r7, r5
    lbzx r5, r16, r24
    mulli r8, r3, 0x14
    lbz r3, 0x2(r10)
    add r0, r7, r0
    add r7, r6, r4
    lbz r4, 0x1(r10)
    add r6, r9, r0
    add r7, r8, r7
    lbz r0, 0x3(r10)
    stbux r5, r6, r7
    stb r4, 0x1(r6)
    stb r3, 0x2(r6)
    stb r0, 0x3(r6)
lbl_802F6358:
    addi r11, r1, 0x80
    mr r3, r15
    bl _restgpr_14
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_802F6374
asm s8 *fn_802F6374(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802F6408
    lis r12, lbl_8037C8D8@ha
    addi r12, r12, lbl_8037C8D8@l
    stw r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r4, 0x58(r30)
    cmpwi r4, 0x0
    beq lbl_802F63D0
    lis r3, lbl_80462438@ha
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
    li r0, 0x0
    stw r0, 0x58(r30)
lbl_802F63D0:
    lis r4, __dt__Q36nw4hbm2ut5ColorFv@ha
    addi r3, r30, 0x3c
    addi r4, r4, __dt__Q36nw4hbm2ut5ColorFv@l
    li r5, 0x4
    li r6, 0x4
    bl __destroy_arr
    addic. r3, r30, 0x18
    beq lbl_802F63F8
    li r4, 0x0
    bl fn_802FF21C
lbl_802F63F8:
    cmpwi r31, 0x0
    ble lbl_802F6408
    mr r3, r30
    bl dtor_80136CFC
lbl_802F6408:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802F6424
asm void fn_802F6424() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_20
    lwz r0, 0x4c(r3)
    mr r20, r3
    lbz r28, 0x6b(r1)
    mr r21, r4
    srwi r11, r0, 28
    lbz r29, 0x6f(r1)
    cmplw r11, r4
    lbz r30, 0x73(r1)
    lbz r31, 0x77(r1)
    mr r22, r5
    mr r23, r6
    mr r24, r7
    mr r25, r8
    mr r26, r9
    mr r27, r10
    blt lbl_802F64F0
    extrwi r4, r0, 4, 4
    cmplw r4, r5
    blt lbl_802F64F0
    extrwi r4, r0, 4, 8
    cmplw r4, r6
    blt lbl_802F64F0
    extrwi r4, r0, 5, 18
    cmplw r4, r7
    blt lbl_802F64F0
    extrwi r4, r0, 1, 17
    cmplw r4, r8
    blt lbl_802F64F0
    extrwi r4, r0, 3, 14
    cmplw r4, r9
    blt lbl_802F64F0
    extrwi r4, r0, 2, 12
    cmplw r4, r10
    blt lbl_802F64F0
    extrwi r4, r0, 1, 23
    cmplw r4, r28
    blt lbl_802F64F0
    extrwi r4, r0, 1, 24
    cmplw r4, r29
    blt lbl_802F64F0
    extrwi r4, r0, 1, 25
    cmplw r4, r30
    blt lbl_802F64F0
    extrwi r0, r0, 1, 26
    cmplw r0, r31
    bge lbl_802F6B84
lbl_802F64F0:
    lwz r4, 0x58(r3)
    cmpwi r4, 0x0
    beq lbl_802F6528
    lis r3, lbl_80462438@ha
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
    lwz r3, 0x4c(r20)
    li r4, 0x0
    lwz r0, 0x50(r20)
    clrlwi r3, r3, 27
    stw r4, 0x58(r20)
    clrlwi r0, r0, 27
    stw r3, 0x4c(r20)
    stw r0, 0x50(r20)
lbl_802F6528:
    add r5, r27, r22
    add r0, r25, r28
    mulli r6, r5, 0x14
    add r4, r31, r29
    add r3, r26, r23
    add r0, r30, r0
    add r3, r4, r3
    lis r7, lbl_80462438@ha
    add r0, r3, r0
    clrlslwi r5, r21, 24, 5
    slwi r0, r0, 2
    clrlslwi r4, r24, 24, 4
    add r0, r6, r0
    lwz r3, lbl_80462438@l(r7)
    add r0, r5, r0
    add r4, r4, r0
    bl fn_8030CAF0
    cmpwi r3, 0x0
    stw r3, 0x58(r20)
    beq lbl_802F6B84
    lwz r0, 0x4c(r20)
    rlwimi r0, r21, 28, 0, 3
    rlwimi r0, r22, 24, 4, 7
    lwz r4, 0x50(r20)
    rlwimi r0, r23, 20, 8, 11
    li r7, 0x0
    rlwimi r0, r27, 18, 12, 13
    rlwimi r0, r26, 15, 14, 16
    rlwimi r0, r25, 14, 17, 17
    rlwimi r0, r24, 9, 18, 22
    rlwimi r0, r28, 8, 23, 23
    rlwimi r0, r29, 7, 24, 24
    rlwimi r0, r30, 6, 25, 25
    rlwimi r0, r31, 5, 26, 26
    rlwimi r4, r0, 0, 4, 7
    stw r0, 0x4c(r20)
    rlwinm r0, r0, 9, 23, 26
    extrwi. r6, r4, 4, 4
    stw r4, 0x50(r20)
    add r8, r3, r0
    beq lbl_802F6780
    cmplwi r6, 0x8
    subi r5, r6, 0x8
    ble lbl_802F672C
    addi r0, r5, 0x7
    lis r4, lbl_80341E48@ha
    lis r3, lbl_80341E4C@ha
    mr r9, r8
    srwi r0, r0, 3
    lfs f1, lbl_80341E48@l(r4)
    lfs f0, lbl_80341E4C@l(r3)
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_802F672C
lbl_802F6600:
    stfs f1, 0x0(r9)
    addi r7, r7, 0x8
    stfs f1, 0x4(r9)
    stfs f1, 0x8(r9)
    stfs f0, 0xc(r9)
    stfs f0, 0x10(r9)
    stfs f1, 0x14(r9)
    stfs f1, 0x18(r9)
    stfs f1, 0x1c(r9)
    stfs f0, 0x20(r9)
    stfs f0, 0x24(r9)
    stfs f1, 0x28(r9)
    stfs f1, 0x2c(r9)
    stfs f1, 0x30(r9)
    stfs f0, 0x34(r9)
    stfs f0, 0x38(r9)
    stfs f1, 0x3c(r9)
    stfs f1, 0x40(r9)
    stfs f1, 0x44(r9)
    stfs f0, 0x48(r9)
    stfs f0, 0x4c(r9)
    stfs f1, 0x50(r9)
    stfs f1, 0x54(r9)
    stfs f1, 0x58(r9)
    stfs f0, 0x5c(r9)
    stfs f0, 0x60(r9)
    stfs f1, 0x64(r9)
    stfs f1, 0x68(r9)
    stfs f1, 0x6c(r9)
    stfs f0, 0x70(r9)
    stfs f0, 0x74(r9)
    stfs f1, 0x78(r9)
    stfs f1, 0x7c(r9)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x80(r9)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x84(r9)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x88(r9)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x8c(r9)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x90(r9)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x94(r9)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x98(r9)
    stfs f0, 0x9c(r9)
    addi r9, r9, 0xa0
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    bdnz lbl_802F6600
lbl_802F672C:
    mulli r5, r7, 0x14
    lis r4, lbl_80341E48@ha
    lis r3, lbl_80341E4C@ha
    lfs f1, lbl_80341E48@l(r4)
    subf r0, r7, r6
    lfs f0, lbl_80341E4C@l(r3)
    add r3, r8, r5
    mtctr r0
    cmplw r7, r6
    bge lbl_802F6780
lbl_802F6754:
    stfs f1, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    addi r3, r3, 0x14
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    bdnz lbl_802F6754
lbl_802F6780:
    lwz r11, 0x4c(r20)
    li r4, 0x0
    lwz r5, 0x4c(r20)
    extrwi r0, r11, 4, 4
    lwz r3, 0x50(r20)
    mulli r7, r0, 0x14
    rlwimi r3, r5, 0, 12, 13
    rlwinm r10, r11, 28, 29, 29
    stw r3, 0x50(r20)
    rlwinm r6, r11, 26, 29, 29
    lwz r21, 0x58(r20)
    rlwinm r9, r11, 20, 29, 29
    rlwinm r8, r11, 27, 29, 29
    rlwinm r5, r11, 14, 26, 29
    rlwinm r0, r11, 9, 23, 26
    rlwinm r12, r11, 19, 27, 29
    rlwinm r11, r11, 29, 29, 29
    add r5, r5, r0
    add r8, r9, r8
    add r6, r10, r6
    add r0, r12, r11
    extrwi. r3, r3, 2, 12
    add r5, r7, r5
    add r6, r8, r6
    add r0, r21, r0
    add r5, r6, r5
    add r8, r5, r0
    beq lbl_802F69A4
    cmplwi r3, 0x8
    subi r7, r3, 0x8
    ble lbl_802F6950
    addi r0, r7, 0x7
    lis r6, lbl_80341E48@ha
    lis r5, lbl_80341E4C@ha
    mr r9, r8
    srwi r0, r0, 3
    lfs f1, lbl_80341E48@l(r6)
    lfs f0, lbl_80341E4C@l(r5)
    mtctr r0
    cmplwi r7, 0x0
    ble lbl_802F6950
lbl_802F6824:
    stfs f1, 0x0(r9)
    addi r4, r4, 0x8
    stfs f1, 0x4(r9)
    stfs f1, 0x8(r9)
    stfs f0, 0xc(r9)
    stfs f0, 0x10(r9)
    stfs f1, 0x14(r9)
    stfs f1, 0x18(r9)
    stfs f1, 0x1c(r9)
    stfs f0, 0x20(r9)
    stfs f0, 0x24(r9)
    stfs f1, 0x28(r9)
    stfs f1, 0x2c(r9)
    stfs f1, 0x30(r9)
    stfs f0, 0x34(r9)
    stfs f0, 0x38(r9)
    stfs f1, 0x3c(r9)
    stfs f1, 0x40(r9)
    stfs f1, 0x44(r9)
    stfs f0, 0x48(r9)
    stfs f0, 0x4c(r9)
    stfs f1, 0x50(r9)
    stfs f1, 0x54(r9)
    stfs f1, 0x58(r9)
    stfs f0, 0x5c(r9)
    stfs f0, 0x60(r9)
    stfs f1, 0x64(r9)
    stfs f1, 0x68(r9)
    stfs f1, 0x6c(r9)
    stfs f0, 0x70(r9)
    stfs f0, 0x74(r9)
    stfs f1, 0x78(r9)
    stfs f1, 0x7c(r9)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x80(r9)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x84(r9)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x88(r9)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x8c(r9)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x90(r9)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x94(r9)
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x98(r9)
    stfs f0, 0x9c(r9)
    addi r9, r9, 0xa0
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    bdnz lbl_802F6824
lbl_802F6950:
    mulli r7, r4, 0x14
    lis r6, lbl_80341E48@ha
    lis r5, lbl_80341E4C@ha
    lfs f1, lbl_80341E48@l(r6)
    subf r0, r4, r3
    lfs f0, lbl_80341E4C@l(r5)
    add r5, r8, r7
    mtctr r0
    cmplw r4, r3
    bge lbl_802F69A4
lbl_802F6978:
    stfs f1, 0x0(r5)
    stfs f1, 0x4(r5)
    stfs f1, 0x8(r5)
    stfs f0, 0xc(r5)
    stfs f0, 0x10(r5)
    addi r5, r5, 0x14
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    bdnz lbl_802F6978
lbl_802F69A4:
    lwz r0, 0x4c(r20)
    lwz r3, 0x50(r20)
    rlwimi r3, r0, 0, 23, 23
    extrwi. r0, r3, 1, 23
    stw r3, 0x50(r20)
    beq lbl_802F69F4
    lwz r5, 0x4c(r20)
    li r3, 0x1
    lwz r7, 0x58(r20)
    li r0, 0x0
    extrwi r4, r5, 4, 4
    rlwinm r6, r5, 14, 26, 29
    mulli r4, r4, 0x14
    rlwinm r5, r5, 9, 23, 26
    add r5, r6, r5
    add r4, r7, r4
    stbux r3, r4, r5
    stb r3, 0x1(r4)
    stb r0, 0x2(r4)
    stb r0, 0x3(r4)
lbl_802F69F4:
    lwz r0, 0x4c(r20)
    lwz r3, 0x50(r20)
    rlwimi r3, r0, 0, 24, 24
    extrwi. r0, r3, 1, 24
    stw r3, 0x50(r20)
    beq lbl_802F6A3C
    lwz r5, 0x4c(r20)
    li r7, -0x1
    lwz r6, 0x58(r20)
    extrwi r0, r5, 4, 4
    rlwinm r4, r5, 14, 26, 29
    mulli r3, r0, 0x14
    rlwinm r0, r5, 9, 23, 26
    rlwinm r5, r5, 26, 29, 29
    add r0, r4, r0
    add r3, r5, r3
    add r0, r6, r0
    stwx r7, r3, r0
lbl_802F6A3C:
    lwz r0, 0x4c(r20)
    lwz r3, 0x50(r20)
    rlwimi r3, r0, 0, 17, 17
    extrwi. r0, r3, 1, 17
    stw r3, 0x50(r20)
    beq lbl_802F6AA4
    lwz r9, 0x4c(r20)
    li r5, 0xe4
    lwz r10, 0x58(r20)
    li r4, 0xc0
    extrwi r0, r9, 4, 4
    rlwinm r3, r9, 14, 26, 29
    mulli r6, r0, 0x14
    rlwinm r8, r9, 27, 29, 29
    rlwinm r0, r9, 9, 23, 26
    rlwinm r7, r9, 26, 29, 29
    add r3, r3, r0
    add r0, r8, r7
    add r7, r6, r3
    li r3, 0xd5
    add r6, r10, r0
    stbux r5, r6, r7
    li r0, 0xea
    stb r4, 0x1(r6)
    stb r3, 0x2(r6)
    stb r0, 0x3(r6)
lbl_802F6AA4:
    lwz r0, 0x4c(r20)
    lwz r3, 0x50(r20)
    rlwimi r3, r0, 0, 25, 25
    extrwi. r0, r3, 1, 25
    stw r3, 0x50(r20)
    beq lbl_802F6B0C
    lwz r9, 0x4c(r20)
    li r3, 0x77
    lwz r10, 0x58(r20)
    li r0, 0x0
    rlwinm r7, r9, 20, 29, 29
    rlwinm r4, r9, 27, 29, 29
    add r4, r7, r4
    rlwinm r6, r9, 26, 29, 29
    add r4, r6, r4
    extrwi r5, r9, 4, 4
    mulli r6, r5, 0x14
    rlwinm r8, r9, 14, 26, 29
    rlwinm r7, r9, 9, 23, 26
    add r4, r10, r4
    add r5, r8, r7
    add r5, r6, r5
    stbux r3, r4, r5
    stb r0, 0x1(r4)
    stb r0, 0x2(r4)
    stb r0, 0x3(r4)
lbl_802F6B0C:
    lwz r0, 0x4c(r20)
    lwz r3, 0x50(r20)
    rlwimi r3, r0, 0, 26, 26
    extrwi. r0, r3, 1, 26
    stw r3, 0x50(r20)
    beq lbl_802F6B84
    lwz r7, 0x4c(r20)
    li r5, 0x1
    lwz r11, 0x58(r20)
    li r4, 0x4
    extrwi r0, r7, 4, 4
    rlwinm r6, r7, 28, 29, 29
    rlwinm r3, r7, 26, 29, 29
    rlwinm r10, r7, 20, 29, 29
    rlwinm r9, r7, 27, 29, 29
    rlwinm r8, r7, 14, 26, 29
    rlwinm r7, r7, 9, 23, 26
    add r6, r6, r3
    add r7, r8, r7
    add r9, r10, r9
    mulli r8, r0, 0x14
    li r3, 0x5
    add r6, r9, r6
    li r0, 0xf
    add r7, r8, r7
    add r6, r11, r6
    stbux r5, r6, r7
    stb r4, 0x1(r6)
    stb r3, 0x2(r6)
    stb r0, 0x3(r6)
lbl_802F6B84:
    addi r11, r1, 0x60
    bl _restgpr_20
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_802F6BB0
asm s32 fn_802F6BB0(s8 *arg0, s32 arg1) {
    nofralloc
    lwz r4, 0x4c(r3)
    lwz r5, 0x58(r3)
    extrwi r0, r4, 4, 4
    rlwinm r3, r4, 9, 23, 26
    mulli r0, r0, 0x14
    add r0, r5, r0
    add r3, r3, r0
    blr
}

// asm_to_cpp: fn_802F6BD0
asm s32 fn_802F6BD0(s8 *arg0) {
    nofralloc
    lwz r9, 0x4c(r3)
    lwz r11, 0x58(r3)
    extrwi r0, r9, 4, 4
    rlwinm r8, r9, 28, 29, 29
    mulli r3, r0, 0x14
    rlwinm r6, r9, 26, 29, 29
    rlwinm r7, r9, 20, 29, 29
    rlwinm r5, r9, 27, 29, 29
    rlwinm r4, r9, 14, 26, 29
    rlwinm r0, r9, 9, 23, 26
    add r0, r4, r0
    rlwinm r10, r9, 19, 27, 29
    rlwinm r9, r9, 29, 29, 29
    add r5, r7, r5
    add r4, r8, r6
    add r3, r3, r0
    add r4, r5, r4
    add r0, r10, r9
    add r3, r4, r3
    add r0, r11, r0
    add r3, r3, r0
    blr
}

// asm_to_cpp: fn_802F6C28
asm void fn_802F6C28(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_802F6C98
    lwz r4, 0x50(r3)
    lwz r3, 0x58(r3)
    rlwinm r0, r4, 9, 23, 26
    srwi r30, r4, 28
    add r31, r3, r0
    b lbl_802F6C84
lbl_802F6C6C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x20
    bl memset
    addi r31, r31, 0x20
    addi r30, r30, 0x1
lbl_802F6C84:
    cmplw r30, r29
    blt lbl_802F6C6C
    lwz r0, 0x50(r28)
    rlwimi r0, r29, 28, 0, 3
    stw r0, 0x50(r28)
lbl_802F6C98:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802F6CB8
asm void fn_802F6CB8() {
    nofralloc
    cmpwi r4, 0x0
    beqlr
    lwz r7, 0x4c(r3)
    lwz r0, 0x50(r3)
    extrwi r5, r7, 4, 4
    lwz r8, 0x58(r3)
    mulli r6, r5, 0x14
    extrwi r12, r0, 4, 8
    rlwinm r5, r7, 9, 23, 26
    cmplw cr1, r12, r4
    add r0, r8, r6
    add r11, r5, r0
    bge cr1, lbl_802F6DFC
    subf r0, r12, r4
    subi r9, r4, 0x8
    cmplwi r0, 0x8
    ble lbl_802F6DBC
    bgt cr1, lbl_802F6DBC
    addi r0, r9, 0x7
    slwi r5, r12, 2
    subf r0, r12, r0
    li r8, 0x1
    srwi r0, r0, 3
    add r10, r11, r5
    li r7, 0x4
    li r6, 0x3c
    li r5, 0x0
    mtctr r0
    cmplw r12, r9
    bge lbl_802F6DBC
lbl_802F6D30:
    stb r8, 0x0(r10)
    addi r12, r12, 0x8
    stb r7, 0x1(r10)
    stb r6, 0x2(r10)
    stb r5, 0x3(r10)
    stb r8, 0x4(r10)
    stb r7, 0x5(r10)
    stb r6, 0x6(r10)
    stb r5, 0x7(r10)
    stb r8, 0x8(r10)
    stb r7, 0x9(r10)
    stb r6, 0xa(r10)
    stb r5, 0xb(r10)
    stb r8, 0xc(r10)
    stb r7, 0xd(r10)
    stb r6, 0xe(r10)
    stb r5, 0xf(r10)
    stb r8, 0x10(r10)
    stb r7, 0x11(r10)
    stb r6, 0x12(r10)
    stb r5, 0x13(r10)
    stb r8, 0x14(r10)
    stb r7, 0x15(r10)
    stb r6, 0x16(r10)
    stb r5, 0x17(r10)
    stb r8, 0x18(r10)
    stb r7, 0x19(r10)
    stb r6, 0x1a(r10)
    stb r5, 0x1b(r10)
    stb r8, 0x1c(r10)
    stb r7, 0x1d(r10)
    stb r6, 0x1e(r10)
    stb r5, 0x1f(r10)
    addi r10, r10, 0x20
    bdnz lbl_802F6D30
lbl_802F6DBC:
    slwi r5, r12, 2
    subf r0, r12, r4
    add r9, r11, r5
    li r8, 0x1
    li r7, 0x4
    li r6, 0x3c
    li r5, 0x0
    mtctr r0
    cmplw r12, r4
    bge lbl_802F6DFC
lbl_802F6DE4:
    stb r8, 0x0(r9)
    stb r7, 0x1(r9)
    stb r6, 0x2(r9)
    stb r5, 0x3(r9)
    addi r9, r9, 0x4
    bdnz lbl_802F6DE4
lbl_802F6DFC:
    lwz r0, 0x50(r3)
    rlwimi r0, r4, 20, 8, 11
    stw r0, 0x50(r3)
    blr
}

// asm_to_cpp: fn_802F6E0C
asm void fn_802F6E0C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    clrlslwi r0, r4, 24, 5
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r5
    lwz r3, 0x58(r3)
    add r31, r3, r0
    mr r3, r31
    bl GXGetTexObjWrapS
    mr r30, r3
    mr r3, r31
    bl GXGetTexObjWrapT
    mr r29, r3
    mr r3, r31
    mr r4, r28
    li r5, 0x0
    bl InitGXTexObjFromTPL__Q36nw4hbm3lyt6detailFP9_GXTexObjP10TPLPaletteUl
    mr r3, r31
    mr r4, r30
    mr r5, r29
    bl GXInitTexObjWrapMode
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802F6E90
asm void fn_802F6E90() {
    nofralloc
    lwz r3, 0x58(r3)
    clrlslwi r0, r4, 24, 5
    lwz r6, 0x0(r5)
    li r4, 0x0
    add r3, r3, r0
    lwz r0, 0x4(r5)
    stw r6, 0x0(r3)
    lwz r6, 0x8(r5)
    stw r0, 0x4(r3)
    lwz r0, 0xc(r5)
    stw r6, 0x8(r3)
    lwz r6, 0x10(r5)
    stw r0, 0xc(r3)
    lwz r0, 0x14(r5)
    stw r6, 0x10(r3)
    lwz r6, 0x18(r5)
    stw r0, 0x14(r3)
    lwz r0, 0x1c(r5)
    stw r6, 0x18(r3)
    stw r0, 0x1c(r3)
    b GXInitTexObjUserData
}

// asm_to_cpp: fn_802F6EE4
asm void fn_802F6EE4() {
    nofralloc
    cmpwi r4, 0x10
    bge lbl_802F6F00
    cmpwi r4, 0x4
    bge lbl_802F6FB4
    cmpwi r4, 0x0
    bge lbl_802F6F0C
    blr
lbl_802F6F00:
    cmpwi r4, 0x20
    bgelr
    b lbl_802F7028
lbl_802F6F0C:
    lwz r0, 0x50(r3)
    extrwi r0, r0, 1, 24
    cmplwi r0, 0x1
    bltlr
    lwz r7, 0x4c(r3)
    srawi r0, r5, 31
    andc r9, r5, r0
    lwz r8, 0x58(r3)
    extrwi r0, r7, 4, 4
    rlwinm r6, r7, 14, 26, 29
    mulli r3, r0, 0x14
    rlwinm r5, r7, 9, 23, 26
    extsh r0, r9
    rlwinm r7, r7, 26, 29, 29
    add r6, r6, r5
    cmpwi r0, 0xff
    add r5, r7, r3
    li r3, 0xff
    add r0, r8, r6
    add r5, r5, r0
    bgt lbl_802F6F64
    mr r3, r9
lbl_802F6F64:
    clrlwi r0, r4, 30
    clrlwi r3, r3, 24
    cmpwi r0, 0x2
    beq lbl_802F6FA4
    bge lbl_802F6F88
    cmpwi r0, 0x0
    beq lbl_802F6F94
    bge lbl_802F6F9C
    blr
lbl_802F6F88:
    cmpwi r0, 0x4
    bgelr
    b lbl_802F6FAC
lbl_802F6F94:
    stb r3, 0x0(r5)
    blr
lbl_802F6F9C:
    stb r3, 0x1(r5)
    blr
lbl_802F6FA4:
    stb r3, 0x2(r5)
    blr
lbl_802F6FAC:
    stb r3, 0x3(r5)
    blr
lbl_802F6FB4:
    subi r4, r4, 0x4
    clrlwi r0, r4, 30
    cmpwi r0, 0x2
    srwi r4, r4, 2
    beq lbl_802F7008
    bge lbl_802F6FDC
    cmpwi r0, 0x0
    beq lbl_802F6FE8
    bge lbl_802F6FF8
    blr
lbl_802F6FDC:
    cmpwi r0, 0x4
    bgelr
    b lbl_802F7018
lbl_802F6FE8:
    slwi r0, r4, 3
    add r3, r3, r0
    sth r5, 0x24(r3)
    blr
lbl_802F6FF8:
    slwi r0, r4, 3
    add r3, r3, r0
    sth r5, 0x26(r3)
    blr
lbl_802F7008:
    slwi r0, r4, 3
    add r3, r3, r0
    sth r5, 0x28(r3)
    blr
lbl_802F7018:
    slwi r0, r4, 3
    add r3, r3, r0
    sth r5, 0x2a(r3)
    blr
lbl_802F7028:
    srawi r0, r5, 31
    subi r6, r4, 0x10
    andc r7, r5, r0
    li r5, 0xff
    extsh r0, r7
    srwi r6, r6, 2
    cmpwi r0, 0xff
    bgt lbl_802F704C
    mr r5, r7
lbl_802F704C:
    subi r0, r4, 0x10
    clrlwi r4, r5, 24
    clrlwi r0, r0, 30
    cmpwi r0, 0x2
    beq lbl_802F70A0
    bge lbl_802F7074
    cmpwi r0, 0x0
    beq lbl_802F7080
    bge lbl_802F7090
    blr
lbl_802F7074:
    cmpwi r0, 0x4
    bgelr
    b lbl_802F70B0
lbl_802F7080:
    slwi r0, r6, 2
    add r3, r3, r0
    stb r4, 0x3c(r3)
    blr
lbl_802F7090:
    slwi r0, r6, 2
    add r3, r3, r0
    stb r4, 0x3d(r3)
    blr
lbl_802F70A0:
    slwi r0, r6, 2
    add r3, r3, r0
    stb r4, 0x3e(r3)
    blr
lbl_802F70B0:
    slwi r0, r6, 2
    add r3, r3, r0
    stb r4, 0x3f(r3)
    blr
}

// asm_to_cpp: fn_802F70C0
asm s32 fn_802F70C0() {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    opword 0xF3E10118
    stfd f30, 0x100(r1)
    opword 0xF3C10108
    addi r11, r1, 0x100
    bl _savegpr_22
    mr r26, r3
    mr r28, r4
    mr r27, r5
    li r30, 0x1
    li r23, 0x0
    li r3, 0x1
    bl GXSetNumChans
    lwz r3, 0x4c(r26)
    extrwi. r0, r3, 1, 23
    beq lbl_802F71AC
    extrwi r0, r3, 4, 4
    lwz r7, 0x58(r26)
    mulli r0, r0, 0x14
    rlwinm r5, r3, 14, 26, 29
    rlwinm r4, r3, 9, 23, 26
    li r3, 0x0
    add r6, r5, r4
    li r4, 0x0
    add r0, r7, r0
    li r5, 0x0
    add r24, r6, r0
    lbzx r6, r6, r0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    lbz r6, 0x1(r24)
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    lbz r3, 0x0(r24)
    li r30, 0x1
    cmpwi r3, 0x1
    beq lbl_802F718C
    lbz r0, 0x1(r24)
    cmpwi r0, 0x1
    beq lbl_802F718C
    li r30, 0x0
lbl_802F718C:
    cmpwi r3, 0x0
    li r23, 0x0
    beq lbl_802F71A4
    lbz r0, 0x1(r24)
    cmpwi r0, 0x0
    bne lbl_802F71CC
lbl_802F71A4:
    li r23, 0x1
    b lbl_802F71CC
lbl_802F71AC:
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
lbl_802F71CC:
    cmpwi r30, 0x0
    li r29, 0x0
    beq lbl_802F71E8
    cmpwi r28, 0x0
    li r29, 0x1
    bne lbl_802F71E8
    li r29, 0x0
lbl_802F71E8:
    cmpwi r23, 0x0
    beq lbl_802F72C0
    lwz r5, 0x4c(r26)
    li r0, -0x1
    stw r0, 0x30(r1)
    extrwi. r0, r5, 1, 24
    beq lbl_802F724C
    extrwi r0, r5, 4, 4
    rlwinm r4, r5, 14, 26, 29
    mulli r3, r0, 0x14
    lwz r6, 0x58(r26)
    rlwinm r0, r5, 9, 23, 26
    rlwinm r5, r5, 26, 29, 29
    add r0, r4, r0
    add r3, r5, r3
    add r0, r6, r0
    add r6, r3, r0
    lbzx r5, r3, r0
    lbz r4, 0x1(r6)
    lbz r3, 0x2(r6)
    lbz r0, 0x3(r6)
    stb r5, 0x30(r1)
    stb r4, 0x31(r1)
    stb r3, 0x32(r1)
    stb r0, 0x33(r1)
lbl_802F724C:
    lwz r0, 0x30(r1)
    mr r5, r27
    addi r3, r1, 0x24
    addi r4, r1, 0x28
    stw r0, 0x28(r1)
    bl fn_802F32EC
    lbz r7, 0x24(r1)
    addi r4, r1, 0x20
    lbz r6, 0x25(r1)
    li r3, 0x4
    lbz r5, 0x26(r1)
    lbz r0, 0x27(r1)
    stb r7, 0x30(r1)
    stb r6, 0x31(r1)
    stb r5, 0x32(r1)
    stb r0, 0x33(r1)
    stb r7, 0x20(r1)
    stb r6, 0x21(r1)
    stb r5, 0x22(r1)
    stb r0, 0x23(r1)
    bl GXSetChanMatColor
    cmpwi r29, 0x0
    li r29, 0x0
    bne lbl_802F72BC
    lwz r3, 0x30(r1)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_802F72C0
lbl_802F72BC:
    li r29, 0x1
lbl_802F72C0:
    li r31, 0x0
    stb r31, 0x5c(r1)
    stb r31, 0x5d(r1)
    stb r31, 0x5e(r1)
    stb r31, 0x5f(r1)
    stb r31, 0x60(r1)
    stb r31, 0x61(r1)
    stb r31, 0x62(r1)
    stb r31, 0x63(r1)
    stb r31, 0x64(r1)
    stb r31, 0x65(r1)
    lwz r0, 0x50(r26)
    extrwi r3, r0, 4, 8
    bl GXSetNumTexGens
    lwz r0, 0x50(r26)
    extrwi. r0, r0, 4, 8
    beq lbl_802F7394
    lwz r4, 0x4c(r26)
    lis r3, 0xaaab
    lwz r5, 0x58(r26)
    addi r27, r1, 0x5c
    extrwi r0, r4, 4, 4
    rlwinm r4, r4, 9, 23, 26
    mulli r0, r0, 0x14
    subi r25, r3, 0x5555
    li r28, 0x0
    li r24, 0x1
    add r0, r5, r0
    add r23, r4, r0
    b lbl_802F7384
lbl_802F7338:
    lbz r0, 0x0(r23)
    lbz r6, 0x2(r23)
    cmpwi r0, 0x1
    bne lbl_802F7364
    cmplwi r6, 0x3c
    beq lbl_802F7364
    subi r0, r6, 0x1e
    li r31, 0x1
    mulhwu r0, r25, r0
    srwi r0, r0, 1
    stbx r24, r27, r0
lbl_802F7364:
    lbz r4, 0x0(r23)
    mr r3, r28
    lbz r5, 0x1(r23)
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    addi r23, r23, 0x4
    addi r28, r28, 0x1
lbl_802F7384:
    lwz r0, 0x50(r26)
    extrwi r0, r0, 4, 8
    cmplw r28, r0
    blt lbl_802F7338
lbl_802F7394:
    cmpwi r31, 0x0
    beq lbl_802F740C
    lwz r0, 0x4c(r26)
    addi r27, r1, 0x5c
    lwz r3, 0x58(r26)
    li r28, 0x0
    rlwinm r0, r0, 9, 23, 26
    add r23, r3, r0
    b lbl_802F73F8
lbl_802F73B8:
    clrlwi r3, r28, 24
    lbzx r0, r27, r3
    cmpwi r0, 0x0
    beq lbl_802F73F4
    mulli r0, r3, 0x14
    addi r3, r1, 0xa0
    add r4, r23, r0
    bl fn_802F4E00
    clrlwi r3, r28, 24
    clrlslwi r0, r28, 24, 2
    subf r4, r3, r0
    li r5, 0x1
    addi r3, r1, 0xa0
    addi r4, r4, 0x1e
    bl GXLoadTexMtxImm
lbl_802F73F4:
    addi r28, r28, 0x1
lbl_802F73F8:
    lwz r0, 0x50(r26)
    clrlwi r3, r28, 24
    extrwi r0, r0, 4, 4
    cmplw r3, r0
    blt lbl_802F73B8
lbl_802F740C:
    lwz r0, 0x50(r26)
    srwi. r0, r0, 28
    beq lbl_802F74E4
    lwz r31, 0x58(r26)
    li r28, 0x0
    li r27, 0x0
    b lbl_802F74D4
lbl_802F7428:
    lwz r4, 0x0(r31)
    addi r3, r1, 0x80
    lwz r0, 0x4(r31)
    stw r4, 0x80(r1)
    stw r0, 0x84(r1)
    lwz r4, 0x8(r31)
    lwz r0, 0xc(r31)
    stw r4, 0x88(r1)
    stw r0, 0x8c(r1)
    lwz r4, 0x10(r31)
    lwz r0, 0x14(r31)
    stw r4, 0x90(r1)
    stw r0, 0x94(r1)
    lwz r4, 0x18(r31)
    lwz r0, 0x1c(r31)
    stw r4, 0x98(r1)
    stw r0, 0x9c(r1)
    bl GXGetTexObjFmt
    subi r0, r3, 0x8
    cmplwi r0, 0x1
    bgt lbl_802F74C0
    addi r3, r1, 0x80
    bl GXGetTexObjUserData
    cmpwi r3, 0x0
    mr r6, r3
    beq lbl_802F74C0
    lwz r4, 0x8(r6)
    addi r3, r1, 0x50
    lwz r5, 0x4(r6)
    lhz r6, 0x0(r6)
    bl GXInitTlutObj
    mr r4, r28
    addi r3, r1, 0x50
    bl GXLoadTlut
    mr r4, r28
    addi r3, r1, 0x80
    bl GXInitTexObjTlut
    addi r28, r28, 0x1
lbl_802F74C0:
    mr r4, r27
    addi r3, r1, 0x80
    bl GXLoadTexObj
    addi r31, r31, 0x20
    addi r27, r27, 0x1
lbl_802F74D4:
    lwz r0, 0x50(r26)
    srwi r0, r0, 28
    cmplw r27, r0
    blt lbl_802F7428
lbl_802F74E4:
    lhz r5, 0x24(r26)
    addi r4, r1, 0x48
    lhz r0, 0x26(r26)
    li r3, 0x1
    sth r5, 0x48(r1)
    sth r0, 0x4a(r1)
    lhz r5, 0x28(r26)
    lhz r0, 0x2a(r26)
    sth r5, 0x4c(r1)
    sth r0, 0x4e(r1)
    bl GXSetTexCoordCylWrap
    lhz r5, 0x2c(r26)
    addi r4, r1, 0x40
    lhz r0, 0x2e(r26)
    li r3, 0x2
    sth r5, 0x40(r1)
    sth r0, 0x42(r1)
    lhz r5, 0x30(r26)
    lhz r0, 0x32(r26)
    sth r5, 0x44(r1)
    sth r0, 0x46(r1)
    bl GXSetTexCoordCylWrap
    lhz r5, 0x34(r26)
    addi r4, r1, 0x38
    lhz r0, 0x36(r26)
    li r3, 0x3
    sth r5, 0x38(r1)
    sth r0, 0x3a(r1)
    lhz r5, 0x38(r26)
    lhz r0, 0x3a(r26)
    sth r5, 0x3c(r1)
    sth r0, 0x3e(r1)
    bl GXSetTexCoordCylWrap
    lbz r0, 0x3c(r26)
    addi r4, r1, 0x1c
    li r3, 0x0
    stb r0, 0x1c(r1)
    lbz r0, 0x3d(r26)
    stb r0, 0x1d(r1)
    lbz r0, 0x3e(r26)
    stb r0, 0x1e(r1)
    lbz r0, 0x3f(r26)
    stb r0, 0x1f(r1)
    bl fn_802E4654
    lbz r0, 0x40(r26)
    addi r4, r1, 0x18
    li r3, 0x1
    stb r0, 0x18(r1)
    lbz r0, 0x41(r26)
    stb r0, 0x19(r1)
    lbz r0, 0x42(r26)
    stb r0, 0x1a(r1)
    lbz r0, 0x43(r26)
    stb r0, 0x1b(r1)
    bl fn_802E4654
    lbz r0, 0x44(r26)
    addi r4, r1, 0x14
    li r3, 0x2
    stb r0, 0x14(r1)
    lbz r0, 0x45(r26)
    stb r0, 0x15(r1)
    lbz r0, 0x46(r26)
    stb r0, 0x16(r1)
    lbz r0, 0x47(r26)
    stb r0, 0x17(r1)
    bl fn_802E4654
    lbz r0, 0x48(r26)
    addi r4, r1, 0x10
    li r3, 0x3
    stb r0, 0x10(r1)
    lbz r0, 0x49(r26)
    stb r0, 0x11(r1)
    lbz r0, 0x4a(r26)
    stb r0, 0x12(r1)
    lbz r0, 0x4b(r26)
    stb r0, 0x13(r1)
    bl fn_802E4654
    lwz r8, 0x4c(r26)
    extrwi. r0, r8, 1, 17
    beq lbl_802F7688
    extrwi r0, r8, 4, 4
    rlwinm r6, r8, 27, 29, 29
    mulli r4, r0, 0x14
    rlwinm r5, r8, 26, 29, 29
    rlwinm r3, r8, 14, 26, 29
    lwz r7, 0x58(r26)
    rlwinm r0, r8, 9, 23, 26
    add r3, r3, r0
    add r0, r6, r5
    li r23, 0x0
    add r3, r4, r3
    add r0, r7, r0
    add r27, r3, r0
lbl_802F7658:
    lbz r0, 0x0(r27)
    mr r3, r23
    clrlwi r4, r0, 30
    extrwi r5, r0, 2, 28
    extrwi r6, r0, 2, 26
    extrwi r7, r0, 2, 24
    bl GXSetTexCoordScaleManually
    addi r23, r23, 0x1
    addi r27, r27, 0x1
    cmpwi r23, 0x4
    blt lbl_802F7658
    b lbl_802F76E8
lbl_802F7688:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x2
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x3
    li r4, 0x2
    li r5, 0x2
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
lbl_802F76E8:
    lwz r0, 0x50(r26)
    li r27, 0x0
    stb r27, 0x2c(r1)
    extrwi. r3, r0, 5, 18
    stb r27, 0x2d(r1)
    stb r27, 0x2e(r1)
    beq lbl_802F78CC
    bl fn_802E4A28
    lwz r9, 0x4c(r26)
    addi r29, r1, 0x2c
    lwz r10, 0x58(r26)
    li r28, 0x0
    extrwi r3, r9, 2, 12
    extrwi r0, r9, 4, 4
    add r0, r3, r0
    rlwinm r5, r9, 26, 29, 29
    mulli r8, r0, 0x14
    rlwinm r3, r9, 27, 29, 29
    rlwinm r0, r9, 20, 29, 29
    rlwinm r7, r9, 9, 23, 26
    rlwinm r6, r9, 14, 26, 29
    add r0, r3, r0
    rlwinm r4, r9, 28, 29, 29
    add r5, r8, r5
    add r0, r4, r0
    rlwinm r3, r9, 29, 29, 29
    add r6, r7, r6
    rlwinm r4, r9, 19, 27, 29
    add r3, r3, r0
    li r31, 0x1
    add r0, r6, r5
    add r3, r4, r3
    add r0, r10, r0
    add r25, r3, r0
    b lbl_802F78B4
lbl_802F7774:
    lbz r0, 0x3(r25)
    mr r3, r28
    lbz r5, 0x2(r25)
    lbz r4, 0x0(r25)
    rlwimi r5, r0, 8, 23, 23
    lbz r6, 0x1(r25)
    bl fn_802E48CC
    lbz r0, 0x3(r25)
    mr r3, r28
    extrwi r4, r0, 2, 29
    extrwi r5, r0, 2, 27
    bl fn_802E4750
    lbz r0, 0x5(r25)
    mr r3, r28
    lbz r5, 0x4(r25)
    clrlwi r6, r0, 28
    extrwi r7, r0, 4, 24
    clrlwi r4, r5, 28
    extrwi r5, r5, 4, 24
    bl fn_802E4460
    lbz r6, 0x6(r25)
    mr r3, r28
    lbz r0, 0x7(r25)
    clrlwi r4, r6, 28
    extrwi r5, r6, 2, 26
    extrwi r6, r6, 2, 24
    clrlwi r7, r0, 31
    extrwi r8, r0, 2, 29
    bl fn_802E44E0
    lbz r0, 0x7(r25)
    mr r3, r28
    extrwi r4, r0, 5, 24
    bl fn_802E46B0
    lbz r0, 0x9(r25)
    mr r3, r28
    lbz r5, 0x8(r25)
    clrlwi r6, r0, 28
    extrwi r7, r0, 4, 24
    clrlwi r4, r5, 28
    extrwi r5, r5, 4, 24
    bl fn_802E44A0
    lbz r6, 0xa(r25)
    mr r3, r28
    lbz r0, 0xb(r25)
    clrlwi r4, r6, 28
    extrwi r5, r6, 2, 26
    extrwi r6, r6, 2, 24
    clrlwi r7, r0, 31
    extrwi r8, r0, 2, 29
    bl fn_802E4538
    lbz r0, 0xb(r25)
    mr r3, r28
    extrwi r4, r0, 5, 24
    bl fn_802E4700
    lbz r10, 0xf(r25)
    mr r3, r28
    lbz r6, 0xd(r25)
    lbz r9, 0xe(r25)
    extrwi r4, r10, 1, 28
    extrwi r24, r6, 4, 25
    extrwi r0, r10, 2, 26
    stw r4, 0x8(r1)
    clrlwi r5, r10, 30
    clrlwi r8, r9, 29
    mr r7, r24
    stw r0, 0xc(r1)
    clrlwi r6, r6, 29
    extrwi r9, r9, 3, 26
    extrwi r10, r10, 1, 29
    lbz r4, 0xc(r25)
    bl fn_802E3F80
    cmpwi r24, 0x1
    blt lbl_802F78AC
    cmpwi r24, 0x3
    bgt lbl_802F78AC
    add r3, r29, r24
    li r27, 0x1
    stb r31, -0x1(r3)
lbl_802F78AC:
    addi r25, r25, 0x10
    addi r28, r28, 0x1
lbl_802F78B4:
    lwz r0, 0x50(r26)
    extrwi r0, r0, 5, 18
    cmplw r28, r0
    blt lbl_802F7774
    li r29, 0x1
    b lbl_802F7C98
lbl_802F78CC:
    srwi. r0, r0, 28
    li r28, 0x0
    bne lbl_802F7928
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0x4
    li r6, 0xa
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x2
    li r6, 0x5
    li r7, 0x7
    bl fn_802E44A0
    li r29, 0x1
    li r28, 0x1
    b lbl_802F7C20
lbl_802F7928:
    cmplwi r0, 0x1
    bne lbl_802F797C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x2
    li r5, 0x4
    li r6, 0x8
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x1
    li r5, 0x2
    li r6, 0x4
    li r7, 0x7
    bl fn_802E44A0
    li r28, 0x1
    b lbl_802F7BCC
lbl_802F797C:
    cmplwi r0, 0x2
    bne lbl_802F7A34
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0xf
    li r5, 0xf
    li r6, 0xf
    li r7, 0x8
    bl fn_802E4460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x4
    bl fn_802E44A0
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x1
    li r4, 0x8
    li r5, 0x0
    li r6, 0xe
    li r7, 0xf
    bl fn_802E4460
    li r3, 0x1
    li r4, 0x4
    li r5, 0x0
    li r6, 0x6
    li r7, 0x7
    bl fn_802E44A0
    lis r4, lbl_8037C898@ha
    li r3, 0x1
    lwz r4, lbl_8037C898@l(r4)
    bl fn_802E46B0
    lis r4, lbl_8037C8B8@ha
    li r3, 0x1
    lwz r4, lbl_8037C8B8@l(r4)
    bl fn_802E4700
    li r28, 0x2
    b lbl_802F7AE8
lbl_802F7A34:
    lis r24, lbl_8037C898@ha
    lis r25, lbl_8037C8B8@ha
    addi r24, r24, lbl_8037C898@l
    li r23, 0x0
    addi r25, r25, lbl_8037C8B8@l
    b lbl_802F7AD8
lbl_802F7A4C:
    clrlwi r22, r28, 24
    mr r4, r23
    mr r3, r22
    mr r5, r23
    li r6, 0xff
    bl fn_802E48CC
    cmpwi r23, 0x0
    li r7, 0x0
    bne lbl_802F7A74
    li r7, 0xf
lbl_802F7A74:
    cmpwi r23, 0x0
    li r31, 0x0
    bne lbl_802F7A84
    li r31, 0x7
lbl_802F7A84:
    mr r3, r22
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    bl fn_802E4460
    mr r3, r22
    mr r7, r31
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    bl fn_802E44A0
    lwz r4, 0x0(r24)
    mr r3, r22
    bl fn_802E46B0
    lwz r4, 0x0(r25)
    mr r3, r22
    bl fn_802E4700
    addi r28, r28, 0x1
    addi r24, r24, 0x4
    addi r25, r25, 0x4
    addi r23, r23, 0x1
lbl_802F7AD8:
    lwz r0, 0x50(r26)
    srwi r0, r0, 28
    cmplw r23, r0
    blt lbl_802F7A4C
lbl_802F7AE8:
    lis r3, lbl_80341E30@ha
    lha r4, 0x24(r26)
    lha r0, lbl_80341E30@l(r3)
    li r5, 0x0
    cmpw r4, r0
    bne lbl_802F7B38
    addi r4, r3, lbl_80341E30@l
    lha r3, 0x26(r26)
    lha r0, 0x2(r4)
    cmpw r3, r0
    bne lbl_802F7B38
    lha r3, 0x28(r26)
    lha r0, 0x4(r4)
    cmpw r3, r0
    bne lbl_802F7B38
    lha r3, 0x2a(r26)
    lha r0, 0x6(r4)
    cmpw r3, r0
    bne lbl_802F7B38
    li r5, 0x1
lbl_802F7B38:
    cmpwi r5, 0x0
    beq lbl_802F7B80
    lha r0, 0x2c(r26)
    li r3, 0x0
    cmpwi r0, 0xff
    bne lbl_802F7B78
    lha r0, 0x2e(r26)
    cmpwi r0, 0xff
    bne lbl_802F7B78
    lha r0, 0x30(r26)
    cmpwi r0, 0xff
    bne lbl_802F7B78
    lha r0, 0x32(r26)
    cmpwi r0, 0xff
    bne lbl_802F7B78
    li r3, 0x1
lbl_802F7B78:
    cmpwi r3, 0x0
    bne lbl_802F7BCC
lbl_802F7B80:
    clrlwi r22, r28, 24
    li r4, 0xff
    mr r3, r22
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    mr r3, r22
    li r4, 0x2
    li r5, 0x4
    li r6, 0x0
    li r7, 0xf
    bl fn_802E4460
    mr r3, r22
    li r4, 0x1
    li r5, 0x2
    li r6, 0x0
    li r7, 0x7
    bl fn_802E44A0
    addi r28, r28, 0x1
lbl_802F7BCC:
    cmpwi r29, 0x0
    beq lbl_802F7C20
    clrlwi r22, r28, 24
    li r4, 0xff
    mr r3, r22
    li r5, 0xff
    li r6, 0x4
    bl fn_802E48CC
    mr r3, r22
    li r4, 0xf
    li r5, 0x0
    li r6, 0xa
    li r7, 0xf
    bl fn_802E4460
    mr r3, r22
    li r4, 0x7
    li r5, 0x0
    li r6, 0x5
    li r7, 0x7
    bl fn_802E44A0
    addi r28, r28, 0x1
lbl_802F7C20:
    clrlwi r22, r28, 24
    li r23, 0x0
    b lbl_802F7C84
lbl_802F7C2C:
    clrlwi r24, r23, 24
    li r4, 0x0
    mr r3, r24
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E44E0
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_802E4538
    mr r3, r24
    bl fn_802E432C
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    addi r23, r23, 0x1
lbl_802F7C84:
    clrlwi r0, r23, 24
    cmplw r0, r22
    blt lbl_802F7C2C
    mr r3, r22
    bl fn_802E4A28
lbl_802F7C98:
    cmpwi r27, 0x0
    beq lbl_802F7D9C
    lwz r9, 0x4c(r26)
    lis r3, lbl_80341E44@ha
    lfs f30, lbl_80341E44@l(r3)
    addi r31, r1, 0x2c
    extrwi r0, r9, 4, 4
    rlwinm r8, r9, 28, 29, 29
    mulli r5, r0, 0x14
    rlwinm r4, r9, 26, 29, 29
    rlwinm r7, r9, 20, 29, 29
    lwz r11, 0x58(r26)
    rlwinm r6, r9, 27, 29, 29
    rlwinm r3, r9, 14, 26, 29
    rlwinm r0, r9, 9, 23, 26
    rlwinm r10, r9, 19, 27, 29
    add r3, r3, r0
    rlwinm r9, r9, 29, 29, 29
    add r0, r10, r9
    add r6, r7, r6
    add r4, r8, r4
    add r3, r5, r3
    add r4, r6, r4
    add r0, r11, r0
    add r3, r4, r3
    li r27, 0x0
    add r24, r3, r0
    b lbl_802F7D8C
lbl_802F7D08:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_802F7D80
    lfs f0, 0x8(r24)
    fmuls f1, f30, f0
    bl fn_802FD2F0
    lfs f0, 0x8(r24)
    fmr f31, f1
    fmuls f1, f30, f0
    bl fn_802FD27C
    lfs f0, 0xc(r24)
    fneg f2, f1
    addi r3, r27, 0x1
    addi r4, r1, 0x68
    fmuls f0, f31, f0
    stfs f0, 0x68(r1)
    lfs f0, 0x10(r24)
    fmuls f0, f2, f0
    stfs f0, 0x6c(r1)
    lfs f0, 0x0(r24)
    stfs f0, 0x70(r1)
    lfs f0, 0xc(r24)
    fmuls f0, f1, f0
    stfs f0, 0x74(r1)
    lfs f0, 0x10(r24)
    fmuls f0, f31, f0
    stfs f0, 0x78(r1)
    lfs f0, 0x4(r24)
    stfs f0, 0x7c(r1)
    bl fn_802F4F18
lbl_802F7D80:
    addi r31, r31, 0x1
    addi r24, r24, 0x14
    addi r27, r27, 0x1
lbl_802F7D8C:
    lwz r0, 0x50(r26)
    extrwi r0, r0, 2, 12
    cmplw r27, r0
    blt lbl_802F7D08
lbl_802F7D9C:
    lwz r0, 0x50(r26)
    extrwi r3, r0, 3, 14
    bl fn_802E430C
    lwz r0, 0x50(r26)
    extrwi. r0, r0, 3, 14
    beq lbl_802F7E40
    lwz r9, 0x4c(r26)
    li r27, 0x0
    lwz r10, 0x58(r26)
    extrwi r0, r9, 4, 4
    rlwinm r8, r9, 28, 29, 29
    mulli r4, r0, 0x14
    rlwinm r6, r9, 26, 29, 29
    rlwinm r7, r9, 20, 29, 29
    rlwinm r5, r9, 27, 29, 29
    rlwinm r3, r9, 14, 26, 29
    rlwinm r0, r9, 9, 23, 26
    add r0, r3, r0
    add r5, r7, r5
    add r3, r8, r6
    rlwinm r6, r9, 29, 29, 29
    add r3, r5, r3
    add r0, r4, r0
    add r3, r6, r3
    add r0, r10, r0
    add r24, r3, r0
    b lbl_802F7E30
lbl_802F7E08:
    lbz r4, 0x0(r24)
    mr r3, r27
    lbz r5, 0x1(r24)
    bl fn_802E4240
    lbz r4, 0x2(r24)
    mr r3, r27
    lbz r5, 0x3(r24)
    bl fn_802E413C
    addi r24, r24, 0x4
    addi r27, r27, 0x1
lbl_802F7E30:
    lwz r0, 0x50(r26)
    extrwi r0, r0, 3, 14
    cmplw r27, r0
    blt lbl_802F7E08
lbl_802F7E40:
    lwz r7, 0x4c(r26)
    extrwi. r0, r7, 1, 25
    beq lbl_802F7EA4
    rlwinm r5, r7, 20, 29, 29
    rlwinm r0, r7, 27, 29, 29
    add r0, r5, r0
    rlwinm r4, r7, 26, 29, 29
    extrwi r3, r7, 4, 4
    rlwinm r6, r7, 14, 26, 29
    add r0, r4, r0
    rlwinm r5, r7, 9, 23, 26
    mulli r4, r3, 0x14
    lwz r7, 0x58(r26)
    add r3, r6, r5
    add r0, r7, r0
    add r3, r4, r3
    add r6, r3, r0
    lbzx r0, r3, r0
    lbz r4, 0x2(r6)
    lbz r5, 0x1(r6)
    clrlwi r3, r0, 28
    lbz r7, 0x3(r6)
    extrwi r6, r0, 4, 24
    bl fn_802E4808
    b lbl_802F7EBC
lbl_802F7EA4:
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
lbl_802F7EBC:
    lwz r3, 0x4c(r26)
    extrwi. r0, r3, 1, 26
    beq lbl_802F7F20
    extrwi r4, r3, 4, 4
    rlwinm r8, r3, 28, 29, 29
    rlwinm r0, r3, 26, 29, 29
    rlwinm r7, r3, 20, 29, 29
    rlwinm r6, r3, 27, 29, 29
    rlwinm r5, r3, 14, 26, 29
    rlwinm r3, r3, 9, 23, 26
    add r0, r8, r0
    add r6, r7, r6
    lwz r7, 0x58(r26)
    add r0, r6, r0
    add r3, r5, r3
    mulli r4, r4, 0x14
    add r0, r7, r0
    add r3, r4, r3
    add r6, r3, r0
    lbzx r3, r3, r0
    lbz r4, 0x1(r6)
    lbz r5, 0x2(r6)
    lbz r6, 0x3(r6)
    bl GXSetBlendMode
    b lbl_802F7F34
lbl_802F7F20:
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl GXSetBlendMode
lbl_802F7F34:
    cmpwi r29, 0x0
    li r3, 0x0
    beq lbl_802F7F4C
    cmpwi r30, 0x0
    beq lbl_802F7F4C
    li r3, 0x1
lbl_802F7F4C:
    opword 0xE3E10118
    lfd f31, 0x110(r1)
    opword 0xE3C10108
    addi r11, r1, 0x100
    lfd f30, 0x100(r1)
    bl _restgpr_22
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// asm_to_cpp: fn_802F7F74
asm int fn_802F7F74() {
    nofralloc
    lwz r12, 0x0(r4)
    mr r0, r3
    mr r3, r4
    lwz r12, 0x14(r12)
    mr r4, r0
    mtctr r12
    bctr
}

// asm_to_cpp: fn_802F7F90
asm void fn_802F7F90(s8 *arg0, s32 arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r31, 0x1c(r3)
    mr r26, r3
    mr r27, r4
    addi r30, r3, 0x1c
    li r29, 0x0
    b lbl_802F7FF0
lbl_802F7FBC:
    cmpwi r27, 0x0
    mr r28, r31
    lwz r31, 0x0(r31)
    beq lbl_802F7FD8
    lwz r0, 0x8(r28)
    cmplw r0, r27
    bne lbl_802F7FF0
lbl_802F7FD8:
    stw r28, 0x8(r1)
    addi r3, r26, 0x18
    addi r4, r1, 0x8
    bl fn_802FF2A0
    stw r29, 0x8(r28)
    sth r29, 0xc(r28)
lbl_802F7FF0:
    cmplw r31, r30
    bne lbl_802F7FBC
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802F8010
asm int fn_802F8010() {
    nofralloc
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x14(r12)
    mtctr r12
    bctr
}

// asm_to_cpp: fn_802F8024
asm void fn_802F8024(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x1c
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r31, 0x1c(r3)
    b lbl_802F8078
lbl_802F804C:
    lbz r0, 0xe(r31)
    cmpwi r0, 0x0
    bne lbl_802F8074
    lwz r3, 0x8(r31)
    mr r5, r29
    lhz r4, 0xc(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_802F8074:
    lwz r31, 0x0(r31)
lbl_802F8078:
    cmplw r31, r30
    bne lbl_802F804C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802F80D8
asm void fn_802F80D8(s8 **arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802F8110
    cntlzw r0, r31
    srwi r0, r0, 5
    stb r0, 0xe(r3)
lbl_802F8110:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802F8124
asm void fn_802F8124() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lwz r0, 0x50(r4)
    srwi r0, r0, 28
    cmplw r5, r0
    blt lbl_802F816C
    lis r4, lbl_80341E48@ha
    lfs f0, lbl_80341E48@l(r4)
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    b lbl_802F8210
lbl_802F816C:
    clrlslwi r0, r5, 24, 5
    lwz r6, 0x58(r4)
    lwzux r5, r6, r0
    addi r3, r1, 0x8
    li r4, 0x0
    lwz r0, 0x4(r6)
    stw r5, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r5, 0x8(r6)
    lwz r0, 0xc(r6)
    stw r5, 0x10(r1)
    stw r0, 0x14(r1)
    lwz r5, 0x10(r6)
    lwz r0, 0x14(r6)
    stw r5, 0x18(r1)
    stw r0, 0x1c(r1)
    lwz r5, 0x18(r6)
    lwz r0, 0x1c(r6)
    stw r5, 0x20(r1)
    stw r0, 0x24(r1)
    bl GXInitTexObjUserData
    addi r3, r1, 0x8
    bl GXGetTexObjHeight
    clrlwi r0, r3, 16
    lis r30, 0x4330
    stw r0, 0x2c(r1)
    lis r29, lbl_80341E58@ha
    lfd f1, lbl_80341E58@l(r29)
    addi r3, r1, 0x8
    stw r30, 0x28(r1)
    lfd f0, 0x28(r1)
    fsubs f31, f0, f1
    bl GXGetTexObjWidth
    clrlwi r0, r3, 16
    stw r30, 0x30(r1)
    lfd f1, lbl_80341E58@l(r29)
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    stfs f31, 0x4(r31)
    fsubs f0, f0, f1
    stfs f0, 0x0(r31)
lbl_802F8210:
    opword 0xE3E10058
    lwz r0, 0x64(r1)
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_802F8234
asm s8 *fn_802F8234(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80341E60@ha
    lis r6, lbl_8037C920@ha
    stw r0, 0x14(r1)
    li r7, 0x0
    lfs f0, lbl_80341E60@l(r5)
    addi r8, r3, 0x14
    stw r31, 0xc(r1)
    addi r9, r3, 0x20
    lbz r0, 0x9(r4)
    mr r31, r4
    stw r30, 0x8(r1)
    addi r6, r6, lbl_8037C920@l
    mr r30, r3
    li r5, 0x10
    stw r7, 0x14(r3)
    addi r4, r4, 0xc
    stw r7, 0x18(r3)
    stw r7, 0x20(r3)
    stw r7, 0x24(r3)
    stw r7, 0x4(r3)
    stw r7, 0x8(r3)
    stw r6, 0x0(r3)
    stw r7, 0x10(r3)
    stw r8, 0x14(r3)
    stw r8, 0x18(r3)
    stw r7, 0x1c(r3)
    stw r9, 0x20(r3)
    stw r9, 0x24(r3)
    stfs f0, 0x4c(r3)
    stfs f0, 0x50(r3)
    stw r7, 0xc(r3)
    stw r7, 0x28(r3)
    stb r7, 0xd0(r3)
    stb r0, 0xcc(r3)
    addi r3, r3, 0xb4
    bl strncpy
    addi r3, r30, 0xc4
    addi r4, r31, 0x1c
    li r5, 0x8
    bl strncpy
    lbz r4, 0xa(r31)
    mr r3, r30
    lfs f9, 0x24(r31)
    lfs f8, 0x28(r31)
    lfs f7, 0x2c(r31)
    lfs f6, 0x30(r31)
    lfs f5, 0x34(r31)
    lfs f4, 0x38(r31)
    lfs f3, 0x3c(r31)
    lfs f2, 0x40(r31)
    lfs f1, 0x44(r31)
    lfs f0, 0x48(r31)
    lbz r0, 0x8(r31)
    stfs f9, 0x2c(r30)
    stfs f8, 0x30(r30)
    stfs f7, 0x34(r30)
    stfs f6, 0x38(r30)
    stfs f5, 0x3c(r30)
    stfs f4, 0x40(r30)
    stfs f3, 0x44(r30)
    stfs f2, 0x48(r30)
    stfs f1, 0x4c(r30)
    stfs f0, 0x50(r30)
    stb r4, 0xcd(r30)
    stb r4, 0xce(r30)
    stb r0, 0xcf(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
