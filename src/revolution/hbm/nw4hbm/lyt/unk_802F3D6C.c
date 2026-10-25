#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

s8 *fn_8030CAF0();                    /* extern */
M2C_UNK fn_8030CB00();                    /* extern */
M2C_UNK memcpy(); /* extern */
M2C_UNK memset();      /* extern */
extern f32 lbl_80341E20;
extern f32 lbl_80341E24;
extern M2C_UNK lbl_8037C7F0;
extern M2C_UNK lbl_8037C820;
extern s32 lbl_80462438;

s8 * fn_802F3D6C();
s32 fn_802F3DE8();
s8 * fn_802F3E28();
s8 * fn_802F3F34();
s8 * fn_802F3FDC();
void fn_802F40A4();
s32 fn_802F40D8();

// fn_802F3D6C: definicion C reemplazada por asm (ver abajo)


s32 fn_802F3DE8(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        dtor_80136CFC(arg0);
    }
    return arg0;
}

// fn_802F3E28: definicion C reemplazada por asm (ver abajo)


s8 *fn_802F3F34(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);

// fn_802F3FDC: definicion C reemplazada por asm (ver abajo)


void fn_802F40A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;

    sp8 = arg0 + 4;
    fn_802FF2E8((s32 *) arg0, &sp8, arg1 + 4, arg3);
}

s32 fn_802F40D8(s8 *arg0, s32 arg1);

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void _restgpr_23();
extern void _restgpr_26();
extern void _savegpr_23();
extern void _savegpr_26();
s8 *fn_802F3D6C(s8 *arg0);
s8 *fn_802F3E28(s8 *arg0, s8 *arg1, s8 **arg2, M2C_UNK arg_sp0);
s8 * fn_802F3F34();
s8 *fn_802F3FDC(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);
s32 fn_802F40D8();

// asm_to_cpp: fn_802F3D6C
asm s8 *fn_802F3D6C(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80341E20@ha
    lis r4, lbl_80341E24@ha
    stw r0, 0x14(r1)
    lfs f1, lbl_80341E20@l(r5)
    lis r5, lbl_8037C7F0@ha
    stw r31, 0xc(r1)
    addi r5, r5, lbl_8037C7F0@l
    lfs f0, lbl_80341E24@l(r4)
    mr r31, r3
    stw r5, 0x0(r3)
    li r4, 0x0
    li r5, 0x1
    stfs f1, 0x34(r3)
    stfs f1, 0x38(r3)
    stfs f1, 0x3c(r3)
    stfs f1, 0x40(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x48(r3)
    stfs f0, 0x4c(r3)
    addi r3, r3, 0x50
    bl memset
    addi r3, r31, 0x4
    bl PSMTXIdentity
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802F3E28
asm s8 *fn_802F3E28(s8 *arg0, s8 *arg1, s8 **arg2, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    li r29, 0x0
    lis r6, lbl_8037C820@ha
    stw r29, 0x10(r3)
    addi r7, r3, 0x10
    addi r6, r6, lbl_8037C820@l
    mr r24, r4
    stw r29, 0x14(r3)
    mr r25, r5
    mr r23, r3
    li r5, 0x10
    stw r6, 0x0(r3)
    addi r4, r4, 0x8
    stw r29, 0x4(r3)
    stw r29, 0x8(r3)
    stw r29, 0xc(r3)
    stw r7, 0x10(r3)
    stw r7, 0x14(r3)
    stb r29, 0x28(r3)
    addi r3, r3, 0x18
    bl memcpy
    addi r27, r24, 0x1c
    li r26, 0x0
    li r28, 0x0
    lis r31, lbl_80462438@ha
    b lbl_802F3F0C
lbl_802F3EA0:
    lwz r12, 0x0(r25)
    mr r3, r25
    add r4, r27, r28
    li r5, 0x1
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_802F3F04
    lwz r3, lbl_80462438@l(r31)
    li r4, 0xc
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_802F3F04
    mr r5, r3
    beq lbl_802F3EEC
    stw r29, 0x0(r3)
    stw r29, 0x4(r3)
lbl_802F3EEC:
    stw r30, 0x8(r3)
    addi r0, r23, 0x10
    addi r3, r23, 0xc
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_802FF2E8
lbl_802F3F04:
    addi r28, r28, 0x10
    addi r26, r26, 0x1
lbl_802F3F0C:
    lhz r0, 0x18(r24)
    cmpw r26, r0
    blt lbl_802F3EA0
    addi r11, r1, 0x40
    mr r3, r23
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_802F3F34
asm s8 * fn_802F3F34() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r26, r3
    mr r27, r4
    beq lbl_802F3FC0
    lis r4, lbl_8037C820@ha
    lwz r31, 0x10(r3)
    addi r4, r4, lbl_8037C820@l
    addi r30, r3, 0x10
    stw r4, 0x0(r3)
    lis r29, lbl_80462438@ha
    b lbl_802F3F98
lbl_802F3F74:
    mr r28, r31
    lwz r31, 0x0(r31)
    addi r3, r26, 0xc
    addi r4, r1, 0x8
    stw r28, 0x8(r1)
    bl fn_802FF2A0
    lwz r3, lbl_80462438@l(r29)
    mr r4, r28
    bl fn_8030CB00
lbl_802F3F98:
    cmplw r31, r30
    bne lbl_802F3F74
    addic. r3, r26, 0xc
    beq lbl_802F3FB0
    li r4, 0x0
    bl fn_802FF21C
lbl_802F3FB0:
    cmpwi r27, 0x0
    ble lbl_802F3FC0
    mr r3, r26
    bl dtor_80136CFC
lbl_802F3FC0:
    addi r11, r1, 0x30
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802F3FDC
asm s8 *fn_802F3FDC(s8 *arg0, s32 arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r26, r3
    mr r27, r4
    beq lbl_802F4088
    lwz r31, 0x4(r3)
    addi r30, r3, 0x4
    lis r29, lbl_80462438@ha
    b lbl_802F405C
lbl_802F4010:
    mr r28, r31
    lwz r31, 0x0(r31)
    mr r3, r26
    addi r4, r1, 0x8
    stw r28, 0x8(r1)
    bl fn_802FF2A0
    lbz r0, 0x24(r28)
    cmpwi r0, 0x0
    bne lbl_802F405C
    subi r28, r28, 0x4
    li r4, -0x1
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_80462438@l(r29)
    mr r4, r28
    bl fn_8030CB00
lbl_802F405C:
    cmplw r31, r30
    bne lbl_802F4010
    cmpwi r26, 0x0
    beq lbl_802F4078
    mr r3, r26
    li r4, 0x0
    bl fn_802FF21C
lbl_802F4078:
    cmpwi r27, 0x0
    ble lbl_802F4088
    mr r3, r26
    bl dtor_80136CFC
lbl_802F4088:
    addi r11, r1, 0x30
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_802F40D8
asm s32 fn_802F40D8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x4
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r31, 0x4(r3)
    b lbl_802F4128
lbl_802F4104:
    subi r29, r31, 0x4
    mr r4, r28
    addi r3, r29, 0x18
    bl EqualsPaneName__Q36nw4hbm3lyt6detailFPCcPCc
    cmpwi r3, 0x0
    beq lbl_802F4124
    mr r3, r29
    b lbl_802F4134
lbl_802F4124:
    lwz r31, 0x0(r31)
lbl_802F4128:
    cmplw r31, r30
    bne lbl_802F4104
    li r3, 0x0
lbl_802F4134:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
