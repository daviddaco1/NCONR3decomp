#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK fn_801F484C();                 /* extern */
extern f32 lbl_8049E978;

s32 fn_8003F5C8();
s32 fn_8003F638();
s32 fn_8003F794();
s32 fn_8003F82C();
s32 fn_8003F8A0();
s32 fn_8003F934();
s32 fn_8003FA5C();
s32 fn_8003FADC();
s32 fn_8003FB78();
s32 fn_8003FBDC();
s32 fn_8003FC9C();
s32 fn_8003FD48();
s32 fn_8003FDC0();
void fn_8003FDF0();
void fn_8003FE00();
void fn_8003FE10();
void fn_8003FE20();
void fn_8003FE30();
void fn_8003FE40();
s32 fn_8003FE50();
s32 fn_8003FE58();
s32 fn_8003FE6C();
s32 fn_8003FE80();
u32 fn_8003FE94();
u32 fn_8003FEEC();

// fn_8003F5C8: definicion C reemplazada por asm (ver abajo)


// fn_8003F638: definicion C reemplazada por asm (ver abajo)


s32 fn_8003F794(u32 arg0, s8 *arg1, M2C_UNK arg_sp0);

s32 fn_8003F82C(s32 arg0, s32 arg1, s32 *arg2, M2C_UNK arg_sp0);

s32 fn_8003F8A0(s32 arg0, s8 *arg1) {
    M2C_UNK sp8;
    s32 temp_r3;

    GetLightSet__Q34nw4r3g3d7ScnRootFi((s32) &sp8, fn_8002ADF8(fn_800389F4()), arg0);
    temp_r3 = GetAmbLightObj__Q34nw4r3g3d8LightSetFv(&sp8);
    if ((temp_r3 != 0) && ((u32) M2C_FIELD(arg1, u32 *, 0) == 3U)) {
        M2C_FIELD(temp_r3, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0x28);
        M2C_FIELD(temp_r3, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 0x29);
        M2C_FIELD(temp_r3, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 0x2A);
        M2C_FIELD(temp_r3, u8 *, 3) = (u8) M2C_FIELD(arg1, u8 *, 0x2B);
        return 1;
    }
    return 0;
}

// fn_8003F934: definicion C reemplazada por asm (ver abajo)


s32 fn_8003FA5C(s32 arg0, s32 arg1, s32 *arg2, M2C_UNK arg_sp0) {
    M2C_UNK sp8;
    s32 temp_r3;

    GetLightSet__Q34nw4r3g3d7ScnRootFi((s32) &sp8, fn_8002ADF8(fn_800389F4()), arg0);
    temp_r3 = GetLightObj__Q34nw4r3g3d8LightSetFUl(&sp8, (u32) arg1);
    if (temp_r3 != 0) {
        return fn_8003F934((s32 *) temp_r3, arg2);
    }
    *arg2 = 0xFFFF;
    return 0;
}

s32 fn_8003FADC(s32 arg0, s8 *arg1) {
    M2C_UNK sp8;
    s32 temp_r3;

    GetLightSet__Q34nw4r3g3d7ScnRootFi((s32) &sp8, fn_8002ADF8(fn_800389F4()), arg0);
    temp_r3 = GetAmbLightObj__Q34nw4r3g3d8LightSetFv(&sp8);
    if (temp_r3 != 0) {
        M2C_FIELD(arg1, s32 *, 0) = 3;
        M2C_FIELD(arg1, u8 *, 0x28) = (u8) M2C_FIELD(temp_r3, u8 *, 0);
        M2C_FIELD(arg1, u8 *, 0x29) = (u8) M2C_FIELD(temp_r3, u8 *, 1);
        M2C_FIELD(arg1, u8 *, 0x2A) = (u8) M2C_FIELD(temp_r3, u8 *, 2);
        M2C_FIELD(arg1, u8 *, 0x2B) = (u8) M2C_FIELD(temp_r3, u8 *, 3);
        return 1;
    }
    M2C_FIELD(arg1, s32 *, 0) = 0xFFFF;
    return 0;
}

s32 fn_8003FB78(s8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 1;
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    fn_80030E80(arg0 + 0x28, (s32 *) arg1);
    fn_8002B044(arg0 + 0x10, (s8 *) arg2);
    return 1;
}




// fn_8003FDC0: definicion C reemplazada por asm (ver abajo)


void fn_8003FDF0(s32 *arg0) {
    *arg0 |= 0x20;
}

void fn_8003FE00(s32 *arg0) {
    *arg0 &= 0xFFFFFFDF;
}

void fn_8003FE10(s32 *arg0) {
    *arg0 |= 0x10;
}

void fn_8003FE20(s32 *arg0) {
    *arg0 &= 0xFFFFFFEF;
}

void fn_8003FE30(s32 *arg0) {
    *arg0 &= 0xFFFFFFFB;
}

void fn_8003FE40(s32 *arg0) {
    *arg0 |= 4;
}

s32 fn_8003FE50(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

// fn_8003FE58: definicion C reemplazada por asm (ver abajo)


// fn_8003FE6C: definicion C reemplazada por asm (ver abajo)


// fn_8003FE80: definicion C reemplazada por asm (ver abajo)


u32 fn_8003FE94(s32 *arg0) {
    u32 var_r31;

    var_r31 = 0;
    if ((fn_8003FEEC(arg0) == 0) && (fn_80039F18(arg0) == 0)) {
        var_r31 = 1;
    }
    return var_r31;
}

// fn_8003FEEC: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern void InitLightColor__Q34nw4r3g3d8LightObjF8_GXColor();
extern void InitLightDir__Q34nw4r3g3d8LightObjFfff();
extern void InitLightDistAttn__Q34nw4r3g3d8LightObjFff13_GXDistAttnFn();
extern void InitLightPos__Q34nw4r3g3d8LightObjFfff();
extern void InitLightShininess__Q34nw4r3g3d8LightObjFf();
extern void InitLightSpot__Q34nw4r3g3d8LightObjFf9_GXSpotFn();
extern void InitSpecularDir__Q34nw4r3g3d8LightObjFfff();
extern void _restfpr_29();
extern void _restgpr_27();
extern void _restgpr_29();
extern void _savefpr_29();
extern void _savegpr_27();
extern void _savegpr_29();
s32 fn_8003F5C8(s32 arg0, s32 arg1);
s32 fn_8003F638(s32 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4);
s32 fn_8003F794();
s32 fn_8003F82C();
s32 fn_8003F934(s32 *arg0, s8 *arg1);
s32 fn_8003FBDC();
s32 fn_8003FC9C();
s32 fn_8003FD48();
s32 fn_8003FDC0(s32 *arg0, s32 arg1);
s32 fn_8003FE58(s32 *arg0);
s32 fn_8003FE6C(s32 *arg0);
s32 fn_8003FE80(s32 *arg0);
u32 fn_8003FEEC(s32 *arg0);
extern void fn_801F476C();
extern void fn_801F47DC();

// asm_to_cpp: fn_8003F5C8
asm s32 fn_8003F5C8(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    bl fn_800389F4
    bl fn_8002ADF8
    mr r4, r3
    addi r3, r1, 0x8
    mr r5, r30
    bl GetLightSet__Q34nw4r3g3d7ScnRootFi
    addi r3, r1, 0x8
    bl fn_80039EE8
    cmpwi r3, 0x0
    beq lbl_8003F61C
    addi r3, r1, 0x8
    mr r4, r31
    bl SelectAmbLightObj__Q34nw4r3g3d8LightSetFi
    b lbl_8003F620
lbl_8003F61C:
    li r3, 0x0
lbl_8003F620:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8003F638
asm s32 fn_8003F638(s32 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x0(r4)
    cmplwi r0, 0xffff
    beq lbl_8003F778
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_8003F674
    bl fn_8003FE40
    b lbl_8003F678
lbl_8003F674:
    bl fn_8003FE30
lbl_8003F678:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_8003F690
    mr r3, r30
    bl fn_8003FE20
    b lbl_8003F698
lbl_8003F690:
    mr r3, r30
    bl fn_8003FE10
lbl_8003F698:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_8003F6B0
    mr r3, r30
    bl fn_8003FE00
    b lbl_8003F6B8
lbl_8003F6B0:
    mr r3, r30
    bl fn_8003FDF0
lbl_8003F6B8:
    lwz r0, 0x28(r31)
    stw r0, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    bl InitLightColor__Q34nw4r3g3d8LightObjF8_GXColor
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_8003F6F0
    mr r3, r30
    lfs f1, 0x10(r31)
    lfs f2, 0x14(r31)
    lfs f3, 0x18(r31)
    bl InitLightPos__Q34nw4r3g3d8LightObjFfff
    b lbl_8003F770
lbl_8003F6F0:
    cmplwi r0, 0x1
    bne lbl_8003F748
    mr r3, r30
    lfs f1, 0x10(r31)
    lfs f2, 0x14(r31)
    lfs f3, 0x18(r31)
    bl InitLightPos__Q34nw4r3g3d8LightObjFfff
    mr r3, r30
    lfs f1, 0x1c(r31)
    lfs f2, 0x20(r31)
    lfs f3, 0x24(r31)
    bl InitLightDir__Q34nw4r3g3d8LightObjFfff
    mr r3, r30
    lfs f1, 0x30(r31)
    lwz r4, 0x2c(r31)
    bl InitLightSpot__Q34nw4r3g3d8LightObjFf9_GXSpotFn
    mr r3, r30
    lfs f1, 0x38(r31)
    lfs f2, 0x3c(r31)
    lwz r4, 0x34(r31)
    bl InitLightDistAttn__Q34nw4r3g3d8LightObjFff13_GXDistAttnFn
    b lbl_8003F770
lbl_8003F748:
    cmplwi r0, 0x2
    bne lbl_8003F770
    mr r3, r30
    lfs f1, 0x1c(r31)
    lfs f2, 0x20(r31)
    lfs f3, 0x24(r31)
    bl InitSpecularDir__Q34nw4r3g3d8LightObjFfff
    mr r3, r30
    lfs f1, 0x40(r31)
    bl InitLightShininess__Q34nw4r3g3d8LightObjFf
lbl_8003F770:
    li r3, 0x1
    b lbl_8003F77C
lbl_8003F778:
    li r3, 0x0
lbl_8003F77C:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8003F794
asm s32 fn_8003F794() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_800389F4
    bl fn_8002ADF8
    bl fn_80039F2C
    mr r31, r3
    bl fn_80039F10
    cmplw r29, r3
    bge lbl_8003F810
    mr r3, r31
    bl fn_8003FE50
    slwi r0, r29, 2
    add r3, r3, r0
    lwz r0, 0x0(r30)
    cmplwi r0, 0x3
    bne lbl_8003F810
    lbz r0, 0x28(r30)
    stb r0, 0x0(r3)
    lbz r0, 0x29(r30)
    stb r0, 0x1(r3)
    lbz r0, 0x2a(r30)
    stb r0, 0x2(r3)
    lbz r0, 0x2b(r30)
    stb r0, 0x3(r3)
    li r3, 0x1
    b lbl_8003F814
lbl_8003F810:
    li r3, 0x0
lbl_8003F814:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8003F82C
asm s32 fn_8003F82C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl fn_800389F4
    bl fn_8002ADF8
    mr r4, r3
    addi r3, r1, 0x8
    mr r5, r29
    bl GetLightSet__Q34nw4r3g3d7ScnRootFi
    addi r3, r1, 0x8
    mr r4, r30
    bl GetLightObj__Q34nw4r3g3d8LightSetFUl
    cmpwi r3, 0x0
    beq lbl_8003F884
    mr r4, r31
    bl fn_8003F638
    b lbl_8003F888
lbl_8003F884:
    li r3, 0x0
lbl_8003F888:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8003F934
asm s32 fn_8003F934(s32 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8003FEEC
    cmplwi r3, 0x1
    bne lbl_8003F968
    li r0, 0x1
    stw r0, 0x0(r31)
    b lbl_8003F9AC
lbl_8003F968:
    mr r3, r30
    bl fn_80039F18
    cmplwi r3, 0x1
    bne lbl_8003F984
    li r0, 0x2
    stw r0, 0x0(r31)
    b lbl_8003F9AC
lbl_8003F984:
    mr r3, r30
    bl fn_8003FE94
    cmplwi r3, 0x1
    bne lbl_8003F9A0
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_8003F9AC
lbl_8003F9A0:
    lis r3, 0x1
    subi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_8003F9AC:
    lwz r0, 0x0(r31)
    cmplwi r0, 0xffff
    beq lbl_8003FA40
    mr r3, r30
    bl fn_8003FE80
    stw r3, 0x4(r31)
    mr r3, r30
    bl fn_8003FE6C
    stw r3, 0x8(r31)
    mr r3, r30
    bl fn_8003FE58
    stw r3, 0xc(r31)
    li r0, 0x0
    stw r0, 0x2c(r31)
    lfs f0, lbl_8049E978
    stfs f0, 0x30(r31)
    stw r0, 0x34(r31)
    stfs f0, 0x38(r31)
    stfs f0, 0x3c(r31)
    la r3, lbl_8049E978
    lfs f0, 0x4(r3)
    stfs f0, 0x40(r31)
    mr r3, r30
    addi r4, r31, 0x10
    addi r5, r31, 0x14
    addi r6, r31, 0x18
    bl fn_801F476C
    mr r3, r30
    addi r4, r31, 0x1c
    addi r5, r31, 0x20
    addi r6, r31, 0x24
    bl fn_801F47DC
    mr r3, r30
    addi r4, r31, 0x28
    bl fn_801F484C
    li r3, 0x1
    b lbl_8003FA44
lbl_8003FA40:
    li r3, 0x0
lbl_8003FA44:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003FBDC
asm s32 fn_8003FBDC() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f30, f1
    fmr f31, f2
    li r0, 0x1
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    li r31, 0x0
    stw r31, 0xc(r3)
    addi r3, r3, 0x28
    bl fn_80030E80
    addi r3, r27, 0x10
    mr r4, r28
    bl fn_8002B044
    addi r3, r27, 0x1c
    mr r4, r29
    bl fn_8002B044
    stw r30, 0x34(r27)
    stfs f30, 0x38(r27)
    stfs f31, 0x3c(r27)
    stw r31, 0x2c(r27)
    lfs f0, lbl_8049E978
    stfs f0, 0x30(r27)
    li r3, 0x1
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    li r0, 0x28
    opword 0x13C1000C
    lfd f30, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8003FC9C
asm s32 fn_8003FC9C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savefpr_29
    addi r11, r1, 0x28
    bl _savegpr_27
    mr r27, r3
    mr r28, r5
    mr r29, r6
    mr r30, r7
    fmr f29, f1
    mr r31, r8
    fmr f30, f2
    fmr f31, f3
    li r0, 0x1
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    li r0, 0x0
    stw r0, 0xc(r3)
    addi r3, r3, 0x28
    bl fn_80030E80
    addi r3, r27, 0x10
    mr r4, r28
    bl fn_8002B044
    addi r3, r27, 0x1c
    mr r4, r29
    bl fn_8002B044
    stw r30, 0x2c(r27)
    stfs f29, 0x30(r27)
    stw r31, 0x34(r27)
    stfs f30, 0x38(r27)
    stfs f31, 0x3c(r27)
    li r3, 0x1
    addi r11, r1, 0x40
    bl _restfpr_29
    addi r11, r1, 0x28
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8003FD48
asm s32 fn_8003FD48() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stw r31, 0x14(r1)
    stw r30, 0x10(r1)
    mr r30, r3
    mr r31, r5
    fmr f31, f1
    li r0, 0x2
    stw r0, 0x0(r3)
    li r0, 0x1
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    li r0, 0x0
    stw r0, 0xc(r3)
    addi r3, r3, 0x28
    bl fn_80030E80
    addi r3, r30, 0x1c
    mr r4, r31
    bl fn_8002B044
    stfs f31, 0x40(r30)
    li r3, 0x1
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    lwz r30, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8003FDC0
asm s32 fn_8003FDC0(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x3
    stw r0, 0x0(r3)
    addi r3, r3, 0x28
    bl fn_80030E80
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003FE58
asm s32 fn_8003FE58(s32 *arg0) {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 26, 26
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// asm_to_cpp: fn_8003FE6C
asm s32 fn_8003FE6C(s32 *arg0) {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// asm_to_cpp: fn_8003FE80
asm s32 fn_8003FE80(s32 *arg0) {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r3, r0, 0, 29, 29
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// asm_to_cpp: fn_8003FEEC
asm u32 fn_8003FEEC(s32 *arg0) {
    nofralloc
    lwz r0, 0x0(r3)
    clrlwi r3, r0, 31
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}
