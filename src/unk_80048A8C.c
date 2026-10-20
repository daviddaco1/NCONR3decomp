#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

s32 fn_8030CAF0();                   /* extern */
M2C_UNK fn_8030CB00();               /* extern */
extern M2C_UNK lbl_80349718;
extern M2C_UNK lbl_803C22B0;
extern s8 *lbl_8049D9D8;
extern f32 lbl_8049EB18;

s32 fn_80048A8C();
void fn_80048BC4();
s32 fn_80048C7C();
s32 dtor_80048CE8();
void fn_80048D44();
void fn_80048E30();
void fn_80048EE8();
void fn_80048EF0();

s32 fn_80048A8C(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);

// fn_80048BC4: definicion C reemplazada por asm (ver abajo)




void fn_80048D44(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);

// fn_80048E30: definicion C reemplazada por asm (ver abajo)


void fn_80048EE8(s8 *arg0) {
    lbl_8049D9D8 = arg0;
}


// ---- Funciones aun sin C que matchee (asm generado) ----
extern void __ct__Q34nw4r3lyt6LayoutFv();
extern void __throw();
extern void _restgpr_28();
extern void _restgpr_29();
extern void _savegpr_28();
extern void _savegpr_29();
s32 dtor_80048CE8();
extern void dtor_80136CFC();
extern void fn_80027AF8();
s32 fn_80048A8C();
void fn_80048BC4(s8 *arg0, M2C_UNK arg_sp0);
s32 fn_80048C7C();
void fn_80048D44();
void fn_80048E30(s8 *arg0);
void fn_80048EF0();
extern void fn_80170E84();

// asm_to_cpp: fn_80048A8C
asm s32 fn_80048A8C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r31, r1
    mr r28, r4
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_80048ABC
    li r3, 0x0
    b lbl_80048BA4
lbl_80048ABC:
    cmpwi r5, 0x0
    beq lbl_80048AD0
    ori r4, r6, 0x800
    bl fn_80186C78
    stw r3, 0x4(r28)
lbl_80048AD0:
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_80048AEC
    li r0, 0x0
    stw r0, 0x8(r28)
    li r3, 0x0
    b lbl_80048BA4
lbl_80048AEC:
    li r0, 0x0
    sth r0, 0x0(r28)
    lis r3, lbl_803C22B0@ha
    addi r30, r3, lbl_803C22B0@l
    lwz r3, 0x70(r30)
    li r4, 0xb
    clrlwi r4, r4, 16
    bl fn_8030C61C
    addi r3, r30, 0x60
    li r4, 0xb0
    bl fn_8030CAF0
    mr r29, r3
    li r3, 0xb0
    mr r4, r29
    bl fn_8003D59C
    mr r30, r3
    cmpwi r30, 0x0
    beq lbl_80048B5C
    stw r1, 0x1c(r31)
    bl __ct__Q34nw4r3lyt19ArcResourceAccessorFv
    b lbl_80048B5C
    mr r3, r30
    mr r4, r29
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl __throw
lbl_80048B5C:
    stw r30, 0x8(r28)
    mr r3, r30
    lwz r4, 0x4(r28)
    lwz r4, 0x5c(r4)
    lis r5, lbl_80349718@ha
    addi r5, r5, lbl_80349718@l
    bl Attach__Q34nw4r3lyt19ArcResourceAccessorFPvPCc
    cmpwi r3, 0x0
    bne lbl_80048B88
    li r3, 0x0
    b lbl_80048BA4
lbl_80048B88:
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r3, 0x70(r3)
    li r4, 0x0
    clrlwi r4, r4, 16
    bl fn_8030C61C
    li r3, 0x1
lbl_80048BA4:
    mr r10, r31
    addi r11, r10, 0x30
    bl _restgpr_28
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// asm_to_cpp: fn_80048BC4
asm void fn_80048BC4(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_80048C64
    lhz r0, 0x0(r3)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_80048C64
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_80048C30
    li r4, -0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    addi r3, r3, 0x60
    lwz r4, 0x8(r29)
    bl fn_8030CB00
    li r0, 0x0
    stw r0, 0x8(r29)
lbl_80048C30:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_80048C5C
    li r31, 0x0
    stw r31, 0x4(r29)
    lwz r3, 0x8(r30)
    lwz r4, 0x5c(r30)
    bl fn_80170E84
    stw r31, 0x5c(r30)
    mr r3, r30
    bl fn_80186808
lbl_80048C5C:
    li r0, 0x0
    sth r0, 0x0(r29)
lbl_80048C64:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80048C7C
asm s32 fn_80048C7C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80048CCC
    addi r3, r3, 0x24
    li r4, -0x1
    bl dtor_80048CE8
    mr r3, r30
    li r4, 0x0
    bl __dt__Q34nw4r3lyt16ResourceAccessorFv
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80048CCC
    mr r3, r30
    bl dtor_80136CFC
lbl_80048CCC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: dtor_80048CE8
asm s32 dtor_80048CE8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80048D28
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80048D28
    mr r3, r30
    bl dtor_80136CFC
lbl_80048D28:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80048D44
asm void fn_80048D44() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r31, r1
    mr r28, r3
    mr r29, r4
    cmpwi r4, 0x0
    beq lbl_80048E10
    cmpwi r3, 0x0
    beq lbl_80048E10
    bl fn_80048E30
    li r0, 0x0
    sth r0, 0x0(r28)
    stw r29, 0x4(r28)
    lis r3, lbl_803C22B0@ha
    addi r30, r3, lbl_803C22B0@l
    lwz r3, 0x70(r30)
    li r4, 0xb
    clrlwi r4, r4, 16
    bl fn_8030C61C
    addi r3, r30, 0x60
    bl fn_80048EE8
    addi r3, r30, 0x60
    li r4, 0x20
    bl fn_8030CAF0
    mr r29, r3
    li r3, 0x20
    mr r4, r29
    bl fn_8003D59C
    mr r30, r3
    cmpwi r30, 0x0
    beq lbl_80048DF4
    stw r1, 0x1c(r31)
    bl __ct__Q34nw4r3lyt6LayoutFv
    b lbl_80048DF4
    mr r3, r30
    mr r4, r29
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl __throw
lbl_80048DF4:
    stw r30, 0x8(r28)
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lwz r3, 0x70(r3)
    li r4, 0x0
    clrlwi r4, r4, 16
    bl fn_8030C61C
lbl_80048E10:
    mr r10, r31
    addi r11, r10, 0x30
    bl _restgpr_28
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// asm_to_cpp: fn_80048E30
asm void fn_80048E30(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_80048ED0
    lwz r4, 0x8(r3)
    cmpwi r4, 0x0
    bne lbl_80048E60
    b lbl_80048ED0
lbl_80048E60:
    lhz r0, 0x0(r3)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_80048ED0
    li r31, 0x0
    stw r31, 0x4(r3)
    mr r3, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r3, 0x8(r30)
    li r4, -0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    addi r3, r3, 0x60
    lwz r4, 0x8(r30)
    bl fn_8030CB00
    stw r31, 0x8(r30)
    lfs f0, lbl_8049EB18
    stfs f0, 0xc(r30)
    sth r31, 0x10(r30)
    sth r31, 0x12(r30)
    sth r31, 0x0(r30)
lbl_80048ED0:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80048EF0
asm void fn_80048EF0() {
    nofralloc
    stb r4, 0x0(r3)
    stb r5, 0x1(r3)
    stb r6, 0x2(r3)
    stb r7, 0x3(r3)
    blr
}
