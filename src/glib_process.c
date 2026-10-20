#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK (*fn_80043C3C(s8 *arg0))(s32);            /* static */
extern M2C_UNK lbl_8033C748;
extern M2C_UNK lbl_8033C7A0;
extern M2C_UNK lbl_80348E00;
extern M2C_UNK lbl_80348E48;
extern M2C_UNK lbl_80348E8C;
extern M2C_UNK lbl_80348F50;
extern M2C_UNK lbl_80348F68;
extern M2C_UNK lbl_80348F7C;
extern M2C_UNK lbl_80348FC8;
extern M2C_UNK lbl_80348FDC;
extern M2C_UNK lbl_80349018;
extern M2C_UNK lbl_8034902C;
extern M2C_UNK lbl_80349064;
extern M2C_UNK lbl_80349078;
extern M2C_UNK lbl_8034909C;
extern M2C_UNK lbl_803490A8;
extern s32 lbl_80361330;
extern M2C_UNK lbl_80361508;
extern f32 lbl_8049EA50;

s32 fn_800430A4();
s32 * fn_800432D0();
s32 fn_80043334();
s32 fn_8004352C();
s8 * fn_800436F4();
s32 fn_80043730();
s8 * fn_8004378C();
s32 fn_80043814();
s32 fn_8004381C();
void fn_8004384C();
s32 fn_80043884();
s32 fn_800438F0();
s32 fn_80043920();
s32 ** fn_8004397C();
s32 fn_800439CC();
s32 fn_80043A38();
void fn_80043A68();
s32 fn_80043AB4();
s32 fn_80043B10();
s8 * fn_80043B60();
s32 fn_80043B90();
void fn_80043BE0();
s32 fn_80043C44();
s32 fn_80043CB0();
s32 fn_80043CB8();
s8 * fn_80043CCC();
s8 * dtor_80043D28();
s32 fn_80043D84();
void fn_80043EE4();
s32 fn_80043EEC();
s8 * fn_80043F9C();
s8 * fn_80044064();
s32 fn_800441E8();
s32 fn_800443B4();

s32 fn_800430A4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, M2C_UNK arg_sp0);

// fn_800432D0: definicion C reemplazada por asm (ver abajo)


s32 fn_80043334(s8 *arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);

s32 fn_8004352C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0);

// fn_800436F4: definicion C reemplazada por asm (ver abajo)



// fn_8004378C: definicion C reemplazada por asm (ver abajo)


s32 fn_80043814(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xF0);
}

s32 fn_8004381C(void);

// fn_8004384C: definicion C reemplazada por asm (ver abajo)


s32 fn_80043884(s32 arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    spC = fn_800438F0();
    if (fn_80028264(arg1, &spC) != 0) {
        return 1;
    }
    sp8 = *arg1;
    return fn_800439CC(arg0, &sp8);
}

s32 fn_800438F0(void);


// fn_8004397C: definicion C reemplazada por asm (ver abajo)


s32 fn_800439CC(s32 arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    spC = fn_80043A38();
    if (fn_80028264(arg1, &spC) != 0) {
        return 1;
    }
    sp8 = *arg1;
    return fn_80032B60(arg0, &sp8);
}

s32 fn_80043A38(void);

void fn_80043A68(s32 arg0, s32 arg1) {
    s32 sp8;

    sp8 = fn_80039C9C(arg0);
    fn_80043AB4(arg0, &sp8, arg1);
}

// fn_80043AB4: definicion C reemplazada por asm (ver abajo)


// fn_80043B10: definicion C reemplazada por asm (ver abajo)


s8 *fn_80043B60(s8 *arg0) {
    fn_800291EC(arg0);
    return arg0;
}

s32 fn_80043B90(s8 *arg0, s32 arg1);

void fn_80043BE0(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);

M2C_UNK (*fn_80043C3C(s8 *arg0))(s32) {
    return M2C_FIELD(arg0, M2C_UNK (**)(s32), 0xF8);
}


s32 fn_80043CB0(void) {
    return 7;
}




s32 fn_80043D84(s8 *arg0, s32 *arg1, s32 arg2, M2C_UNK arg_sp0);

void fn_80043EE4(s8 *arg0, s32 arg1);

s32 fn_80043EEC(s8 *arg0);


s8 *fn_80044064(s8 *arg0, s32 arg1, s32 arg2, u32 arg3, M2C_UNK arg_sp0);

s32 fn_800441E8(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

s32 fn_800443B4(void) {
    return fn_800443B8();
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void Clear__Q44nw4r2ut6detail12LinkListImplFv();
extern void Destroy__Q34nw4r3g3d6G3dObjFv();
extern void __throw();
extern void _restgpr_21();
extern void _restgpr_25();
extern void _restgpr_27();
extern void _restgpr_29();
extern void _savegpr_21();
extern void _savegpr_25();
extern void _savegpr_27();
extern void _savegpr_29();
s8 * dtor_80043D28();
extern void dtor_80136CFC();
extern void fn_80027AF8();
extern void fn_80027B74();
extern void fn_800310D8();
s32 fn_800430A4();
s32 *fn_800432D0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 fn_80043334();
s32 fn_8004352C();
s8 *fn_800436F4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80043730();
s8 *fn_8004378C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0);
s32 fn_8004381C();
void fn_8004384C(s8 **arg0);
s32 fn_800438F0();
s32 fn_80043920();
s32 **fn_8004397C(s32 **arg0, s32 arg1);
s32 fn_80043A38();
s32 fn_80043AB4(s32 arg0, s32 *arg1, s32 arg2, s32 arg3);
s32 fn_80043B10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 fn_80043B90();
void fn_80043BE0();
s32 fn_80043C44();
s32 fn_80043CB8();
s8 * fn_80043CCC();
s32 fn_80043D84();
void fn_80043EE4();
s32 fn_80043EEC();
s8 * fn_80043F9C();
s8 * fn_80044064();
s32 fn_800441E8();
extern void fn_801A9384();

// asm_to_cpp: fn_800430A4
asm s32 fn_800430A4() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_21
    mr r31, r1
    mr r21, r3
    mr r22, r4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    mr r26, r8
    li r28, 0x0
    cmpwi r6, 0x0
    beq lbl_800430E8
    li r29, 0x0
    b lbl_800430F4
lbl_800430E8:
    mr r3, r9
    bl fn_80027CCC
    mr r29, r3
lbl_800430F4:
    li r3, 0x104
    bl fn_80027CCC
    mr r30, r3
    add r3, r3, r29
    bl fn_80027CCC
    mr r27, r3
    cmpwi r22, 0x0
    beq lbl_80043200
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r22, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_80043150
    clrrwi r3, r22, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80043150
    li r9, 0x0
lbl_80043150:
    cmpwi r9, 0x0
    bne lbl_8004316C
    clrrwi r3, r22, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_8004316C
    li r8, 0x0
lbl_8004316C:
    cmpwi r8, 0x0
    bne lbl_80043184
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_80043184
    li r7, 0x0
lbl_80043184:
    cmpwi r7, 0x0
    bne lbl_800431A0
    clrrwi r3, r22, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800431A0
    li r6, 0x0
lbl_800431A0:
    cmpwi r6, 0x0
    bne lbl_800431BC
    clrrwi r3, r22, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_800431BC
    li r5, 0x0
lbl_800431BC:
    cmpwi r5, 0x0
    bne lbl_800431D8
    clrrwi r3, r22, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800431D8
    li r4, 0x0
lbl_800431D8:
    cmpwi r4, 0x0
    bne lbl_800431FC
    lis r3, lbl_803490A8@ha
    addi r3, r3, lbl_803490A8@l
    li r4, 0x3a
    addi r5, r3, 0x11
    mr r6, r22
    opword 0x4CC63182
    bl fn_801A9384
lbl_800431FC:
    stw r27, 0x0(r22)
lbl_80043200:
    cmpwi r21, 0x0
    beq lbl_800432AC
    mr r3, r21
    mr r4, r27
    bl fn_800310CC
    mr r22, r3
    clrlwi r0, r22, 30
    cmpwi r0, 0x0
    beq lbl_8004323C
    lis r3, lbl_803490A8@ha
    addi r3, r3, lbl_803490A8@l
    li r4, 0x45
    addi r5, r3, 0x45
    opword 0x4CC63182
    bl fn_801A9384
lbl_8004323C:
    cmpwi r22, 0x0
    bne lbl_8004324C
    li r3, 0x0
    b lbl_800432B0
lbl_8004324C:
    cmpwi r29, 0x0
    beq lbl_80043258
    add r24, r22, r30
lbl_80043258:
    li r3, 0x104
    mr r4, r22
    bl fn_800310C4
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_800432AC
    stw r1, 0x1c(r31)
    mr r4, r21
    mr r5, r23
    mr r6, r24
    mr r7, r25
    mr r8, r26
    bl fn_800432D0
    b lbl_800432AC
    mr r3, r28
    mr r4, r22
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl __throw
lbl_800432AC:
    mr r3, r28
lbl_800432B0:
    mr r10, r31
    addi r11, r10, 0x50
    bl _restgpr_21
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// asm_to_cpp: fn_800432D0
asm s32 *fn_800432D0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r5
    lis r5, fn_80043BE0@ha
    addi r5, r5, fn_80043BE0@l
    bl fn_8004378C
    lis r3, lbl_80348E8C@ha
    addi r0, r3, lbl_80348E8C@l
    stw r0, 0x0(r30)
    li r0, 0x1
    stw r0, 0xf4(r30)
    stw r31, 0xf8(r30)
    addi r3, r30, 0xfc
    bl fn_80028D8C
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80043334
asm s32 fn_80043334() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r31, r1
    mr r25, r3
    mr r26, r4
    mr r27, r5
    li r29, 0x0
    li r3, 0x20
    bl fn_80027CCC
    mr r30, r3
    slwi r0, r27, 2
    add r3, r3, r0
    bl fn_80027CCC
    mr r28, r3
    cmpwi r26, 0x0
    beq lbl_8004346C
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    clrrwi r10, r26, 24
    addis r0, r10, 0x8000
    cmplwi r0, 0x0
    beq lbl_800433BC
    clrrwi r3, r26, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800433BC
    li r9, 0x0
lbl_800433BC:
    cmpwi r9, 0x0
    bne lbl_800433D8
    clrrwi r3, r26, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_800433D8
    li r8, 0x0
lbl_800433D8:
    cmpwi r8, 0x0
    bne lbl_800433F0
    addis r0, r10, 0x4000
    cmplwi r0, 0x0
    beq lbl_800433F0
    li r7, 0x0
lbl_800433F0:
    cmpwi r7, 0x0
    bne lbl_8004340C
    clrrwi r3, r26, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8004340C
    li r6, 0x0
lbl_8004340C:
    cmpwi r6, 0x0
    bne lbl_80043428
    clrrwi r3, r26, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80043428
    li r5, 0x0
lbl_80043428:
    cmpwi r5, 0x0
    bne lbl_80043444
    clrrwi r3, r26, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80043444
    li r4, 0x0
lbl_80043444:
    cmpwi r4, 0x0
    bne lbl_80043468
    lis r3, lbl_803490A8@ha
    addi r3, r3, lbl_803490A8@l
    li r4, 0x88
    addi r5, r3, 0x11
    mr r6, r26
    opword 0x4CC63182
    bl fn_801A9384
lbl_80043468:
    stw r28, 0x0(r26)
lbl_8004346C:
    cmpwi r25, 0x0
    beq lbl_80043508
    mr r3, r25
    mr r4, r28
    bl fn_80027B04
    mr r26, r3
    clrlwi r0, r26, 30
    cmpwi r0, 0x0
    beq lbl_800434A8
    lis r3, lbl_803490A8@ha
    addi r3, r3, lbl_803490A8@l
    li r4, 0x93
    addi r5, r3, 0x45
    opword 0x4CC63182
    bl fn_801A9384
lbl_800434A8:
    cmpwi r26, 0x0
    bne lbl_800434B8
    li r3, 0x0
    b lbl_8004350C
lbl_800434B8:
    add r28, r26, r30
    li r3, 0x20
    mr r4, r26
    bl fn_80027AFC
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_80043508
    stw r1, 0x1c(r31)
    mr r4, r25
    mr r5, r28
    mr r6, r27
    bl fn_800436F4
    b lbl_80043508
    mr r3, r29
    mr r4, r26
    bl fn_80027AF8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl __throw
lbl_80043508:
    mr r3, r29
lbl_8004350C:
    mr r10, r31
    addi r11, r10, 0x40
    bl _restgpr_25
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// asm_to_cpp: fn_8004352C
asm s32 fn_8004352C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r30, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r31, r8
    bl fn_80043EEC
    mr r29, r3
    cmpwi r3, 0x0
    bne lbl_80043580
    lis r3, lbl_803490A8@ha
    addi r3, r3, lbl_803490A8@l
    li r4, 0xb1
    addi r5, r3, 0x73
    opword 0x4CC63182
    bl fn_801A9384
lbl_80043580:
    mr r3, r30
    bl fn_80027B7C
    addi r4, r1, 0xc
    mr r5, r25
    mr r6, r26
    mr r7, r27
    mr r8, r28
    mr r9, r31
    bl fn_800430A4
    mr r31, r3
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r3, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_800435E4
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800435E4
    li r10, 0x0
lbl_800435E4:
    cmpwi r10, 0x0
    bne lbl_80043600
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_80043600
    li r9, 0x0
lbl_80043600:
    cmpwi r9, 0x0
    bne lbl_80043618
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80043618
    li r8, 0x0
lbl_80043618:
    cmpwi r8, 0x0
    bne lbl_80043634
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80043634
    li r7, 0x0
lbl_80043634:
    cmpwi r7, 0x0
    bne lbl_80043650
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80043650
    li r6, 0x0
lbl_80043650:
    cmpwi r6, 0x0
    bne lbl_8004366C
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_8004366C
    li r5, 0x0
lbl_8004366C:
    cmpwi r5, 0x0
    bne lbl_80043690
    lis r3, lbl_803490A8@ha
    addi r3, r3, lbl_803490A8@l
    li r4, 0xb4
    addi r5, r3, 0x98
    mr r6, r31
    opword 0x4CC63182
    bl fn_801A9384
lbl_80043690:
    mr r3, r30
    mr r4, r31
    bl fn_80043EE4
    stw r29, 0x8(r1)
    mr r3, r30
    addi r4, r1, 0x8
    mr r5, r31
    bl fn_80043D84
    cmpwi r3, 0x0
    beq lbl_800436C0
    mr r3, r29
    b lbl_800436DC
lbl_800436C0:
    lis r3, lbl_803490A8@ha
    addi r3, r3, lbl_803490A8@l
    li r4, 0xba
    addi r5, r3, 0xcf
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_800436DC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800436F4
asm s8 *fn_800436F4(s8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80044064
    lis r3, lbl_80348E00@ha
    addi r0, r3, lbl_80348E00@l
    stw r0, 0x4(r31)
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80043730
asm s32 fn_80043730() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80043770
    li r4, 0x0
    bl fn_80043920
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80043770
    mr r3, r30
    bl fn_800310D8
lbl_80043770:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8004378C
asm s8 *fn_8004378C(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bl fn_8004397C
    lis r3, lbl_80361508@ha
    addi r0, r3, lbl_80361508@l
    stw r0, 0x0(r27)
    li r0, 0x0
    stw r0, 0xe8(r27)
    stw r28, 0xec(r27)
    stw r29, 0xf0(r27)
    cmpwi r30, 0x0
    beq lbl_800437E4
    ori r0, r0, 0x1
    stw r0, 0xe8(r27)
lbl_800437E4:
    cmpwi r31, 0x0
    beq lbl_800437F8
    lwz r0, 0xe8(r27)
    ori r0, r0, 0x2
    stw r0, 0xe8(r27)
lbl_800437F8:
    mr r3, r27
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8004381C
asm s32 fn_8004381C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    lis r4, lbl_8033C7A0@ha
    addi r4, r4, lbl_8033C7A0@l
    bl fn_800310D0
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8004384C
asm void fn_8004384C(s8 **arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_800310DC
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800438F0
asm s32 fn_800438F0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    lis r4, lbl_8033C7A0@ha
    addi r4, r4, lbl_8033C7A0@l
    bl fn_800310D0
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80043920
asm s32 fn_80043920() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80043960
    li r4, 0x0
    bl __dt__Q34nw4r3g3d6ScnObjFv
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80043960
    mr r3, r30
    bl fn_800310D8
lbl_80043960:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8004397C
asm s32 **fn_8004397C(s32 **arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl __ct__Q34nw4r3g3d6ScnObjFP12MEMAllocator
    lis r3, lbl_80361330@ha
    addi r0, r3, lbl_80361330@l
    stw r0, 0x0(r31)
    addi r3, r31, 0xdc
    lfs f1, lbl_8049EA50
    fmr f2, f1
    fmr f3, f1
    bl fn_8002AF60
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80043A38
asm s32 fn_80043A38() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r1, 0x8
    lis r4, lbl_8033C748@ha
    addi r4, r4, lbl_8033C748@l
    bl fn_800310D0
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80043AB4
asm s32 fn_80043AB4(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r0, 0x0(r4)
    stw r0, 0x8(r1)
    mr r3, r5
    bl fn_80043B10
    mr r5, r3
    mr r3, r31
    addi r4, r1, 0x8
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    stw r3, 0xc(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    bl fn_80039CD0
    lwz r3, 0x0(r3)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80043B10
asm s32 fn_80043B10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80043B48
    lis r3, lbl_8034909C@ha
    addi r3, r3, lbl_8034909C@l
    li r4, 0x233
    lis r5, lbl_80349078@ha
    addi r5, r5, lbl_80349078@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80043B48:
    addi r3, r31, 0xfc
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80043B90
asm s32 fn_80043B90() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    mr r3, r4
    bl fn_80043B10
    mr r4, r3
    mr r3, r31
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80039CD0
    lwz r3, 0x0(r3)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80043BE0
asm void fn_80043BE0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_80043C3C
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80043C24
    mr r3, r29
    bl fn_80043814
    mr r4, r30
    mr r12, r31
    mtctr r12
    bctrl
lbl_80043C24:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80043C44
asm s32 fn_80043C44() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80043C94
    addi r3, r3, 0xfc
    li r4, -0x1
    bl dtor_80026A40
    mr r3, r30
    li r4, 0x0
    bl fn_80043730
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80043C94
    mr r3, r30
    bl fn_800310D8
lbl_80043C94:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80043CB8
asm s32 fn_80043CB8() {
    nofralloc
    clrlwi r3, r4, 16
    subi r0, r3, 0x7
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// asm_to_cpp: fn_80043CCC
asm s8 * fn_80043CCC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80043D0C
    li r4, 0x0
    bl fn_80043F9C
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80043D0C
    mr r3, r30
    bl fn_80027B74
lbl_80043D0C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: dtor_80043D28
asm s8 * dtor_80043D28() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_80043D68
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
    extsh r0, r31
    cmpwi r0, 0x0
    ble lbl_80043D68
    mr r3, r30
    bl dtor_80136CFC
lbl_80043D68:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80043D84
asm s32 fn_80043D84() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    li r4, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    clrrwi r11, r5, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80043DE0
    clrrwi r3, r5, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80043DE0
    li r10, 0x0
lbl_80043DE0:
    cmpwi r10, 0x0
    bne lbl_80043DFC
    clrrwi r3, r5, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80043DFC
    li r9, 0x0
lbl_80043DFC:
    cmpwi r9, 0x0
    bne lbl_80043E14
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80043E14
    li r8, 0x0
lbl_80043E14:
    cmpwi r8, 0x0
    bne lbl_80043E30
    clrrwi r3, r5, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80043E30
    li r7, 0x0
lbl_80043E30:
    cmpwi r7, 0x0
    bne lbl_80043E4C
    clrrwi r3, r5, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80043E4C
    li r6, 0x0
lbl_80043E4C:
    cmpwi r6, 0x0
    bne lbl_80043E68
    clrrwi r3, r5, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80043E68
    li r4, 0x0
lbl_80043E68:
    cmpwi r4, 0x0
    bne lbl_80043E90
    lis r3, lbl_80349064@ha
    addi r3, r3, lbl_80349064@l
    li r4, 0x105
    lis r5, lbl_8034902C@ha
    addi r5, r5, lbl_8034902C@l
    mr r6, r31
    opword 0x4CC63182
    bl fn_801A9384
lbl_80043E90:
    mr r3, r29
    lhz r4, 0x2(r30)
    lwz r12, 0x4(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80043EC8
    lwz r3, 0xc(r29)
    lhz r0, 0x0(r30)
    slwi r0, r0, 2
    stwx r31, r3, r0
    li r3, 0x1
    b lbl_80043ECC
lbl_80043EC8:
    li r3, 0x0
lbl_80043ECC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80043EE4
asm void fn_80043EE4() {
    nofralloc
    addi r3, r3, 0x14
    b fn_80043A68
}

// asm_to_cpp: fn_80043EEC
asm s32 fn_80043EEC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r0, 0x0
    stw r0, 0x8(r1)
    lwz r5, 0x10(r3)
    lwz r0, 0x8(r3)
    cmplw r0, r5
    bge lbl_80043F80
    li r31, 0x0
    li r4, 0x0
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_80043F80
lbl_80043F30:
    lwz r5, 0xc(r3)
    lwzx r0, r5, r4
    cmpwi r0, 0x0
    bne lbl_80043F74
    mr r3, r30
    lwz r12, 0x4(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    sth r3, 0xa(r1)
    clrlwi r0, r31, 16
    sth r0, 0x8(r1)
    lwz r3, 0x8(r30)
    addi r0, r3, 0x1
    stw r0, 0x8(r30)
    lwz r3, 0x8(r1)
    b lbl_80043F84
lbl_80043F74:
    addi r31, r31, 0x1
    addi r4, r4, 0x4
    bdnz lbl_80043F30
lbl_80043F80:
    li r3, 0x0
lbl_80043F84:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80043F9C
asm s8 * fn_80043F9C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    cmpwi r3, 0x0
    beq lbl_80044048
    lis r4, lbl_80348E48@ha
    addi r0, r4, lbl_80348E48@l
    stw r0, 0x4(r3)
    addi r3, r3, 0x14
    bl Clear__Q44nw4r2ut6detail12LinkListImplFv
    li r29, 0x0
    li r31, 0x0
    mr r30, r31
    b lbl_80044008
lbl_80043FE4:
    lwz r3, 0xc(r27)
    lwzx r3, r3, r31
    cmpwi r3, 0x0
    beq lbl_80044000
    bl Destroy__Q34nw4r3g3d6G3dObjFv
    lwz r3, 0xc(r27)
    stwx r30, r3, r31
lbl_80044000:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
lbl_80044008:
    lwz r0, 0x10(r27)
    cmplw r29, r0
    blt lbl_80043FE4
    li r0, 0x0
    stw r0, 0x8(r27)
    addi r3, r27, 0x14
    li r4, -0x1
    bl dtor_80043D28
    mr r3, r27
    li r4, 0x0
    bl dtor_80027B08
    extsh r0, r28
    cmpwi r0, 0x0
    ble lbl_80044048
    mr r3, r27
    bl fn_80027B74
lbl_80044048:
    mr r3, r27
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80044064
asm s8 * fn_80044064() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r31, r3
    mr r29, r5
    mr r30, r6
    bl fn_80027B84
    lis r3, lbl_80348E48@ha
    addi r0, r3, lbl_80348E48@l
    stw r0, 0x4(r31)
    li r0, 0x0
    stw r0, 0x8(r31)
    stw r29, 0xc(r31)
    stw r30, 0x10(r31)
    addi r3, r31, 0x14
    bl fn_80043B60
    li r4, 0x1
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    lwz r6, 0xc(r31)
    clrrwi r11, r6, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_800440EC
    clrrwi r3, r6, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_800440EC
    li r10, 0x0
lbl_800440EC:
    cmpwi r10, 0x0
    bne lbl_80044108
    clrrwi r3, r6, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80044108
    li r9, 0x0
lbl_80044108:
    cmpwi r9, 0x0
    bne lbl_80044120
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_80044120
    li r8, 0x0
lbl_80044120:
    cmpwi r8, 0x0
    bne lbl_8004413C
    clrrwi r3, r6, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8004413C
    li r7, 0x0
lbl_8004413C:
    cmpwi r7, 0x0
    bne lbl_80044158
    clrrwi r3, r6, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80044158
    li r5, 0x0
lbl_80044158:
    cmpwi r5, 0x0
    bne lbl_80044174
    clrrwi r3, r6, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80044174
    li r4, 0x0
lbl_80044174:
    cmpwi r4, 0x0
    bne lbl_80044198
    lis r3, lbl_80349018@ha
    addi r3, r3, lbl_80349018@l
    li r4, 0x148
    lis r5, lbl_80348FDC@ha
    addi r5, r5, lbl_80348FDC@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80044198:
    li r6, 0x0
    li r3, 0x0
    mr r5, r3
    b lbl_800441B8
lbl_800441A8:
    lwz r4, 0xc(r31)
    stwx r5, r4, r3
    addi r6, r6, 0x1
    addi r3, r3, 0x4
lbl_800441B8:
    lwz r0, 0x10(r31)
    cmplw r6, r0
    blt lbl_800441A8
    addi r3, r31, 0x14
    bl Clear__Q44nw4r2ut6detail12LinkListImplFv
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800441E8
asm s32 fn_800441E8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_8004437C
    lhz r4, 0x2(r4)
    lwz r12, 0x4(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_8004437C
    li r4, 0x1
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    lwz r3, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r6, r3, r0
    clrrwi r11, r6, 24
    addis r0, r11, 0x8000
    cmplwi r0, 0x0
    beq lbl_80044278
    clrrwi r3, r6, 23
    addis r0, r3, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80044278
    li r10, 0x0
lbl_80044278:
    cmpwi r10, 0x0
    bne lbl_80044294
    clrrwi r3, r6, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80044294
    li r9, 0x0
lbl_80044294:
    cmpwi r9, 0x0
    bne lbl_800442AC
    addis r0, r11, 0x4000
    cmplwi r0, 0x0
    beq lbl_800442AC
    li r8, 0x0
lbl_800442AC:
    cmpwi r8, 0x0
    bne lbl_800442C8
    clrrwi r3, r6, 23
    addis r0, r3, 0x3f00
    cmplwi r0, 0x0
    beq lbl_800442C8
    li r7, 0x0
lbl_800442C8:
    cmpwi r7, 0x0
    bne lbl_800442E4
    clrrwi r3, r6, 27
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_800442E4
    li r5, 0x0
lbl_800442E4:
    cmpwi r5, 0x0
    bne lbl_80044300
    clrrwi r3, r6, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_80044300
    li r4, 0x0
lbl_80044300:
    cmpwi r4, 0x0
    bne lbl_80044324
    lis r3, lbl_80348FC8@ha
    addi r3, r3, lbl_80348FC8@l
    li r4, 0x114
    lis r5, lbl_80348F7C@ha
    addi r5, r5, lbl_80348F7C@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80044324:
    addi r3, r30, 0x14
    lwz r4, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    bl fn_80043B90
    lwz r3, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    bl Destroy__Q34nw4r3g3d6G3dObjFv
    li r4, 0x0
    lwz r3, 0xc(r30)
    lhz r0, 0x0(r31)
    slwi r0, r0, 2
    stwx r4, r3, r0
    stw r4, 0x0(r31)
    lwz r3, 0x8(r30)
    subi r0, r3, 0x1
    stw r0, 0x8(r30)
    li r3, 0x1
    b lbl_8004439C
lbl_8004437C:
    lis r3, lbl_80348F68@ha
    addi r3, r3, lbl_80348F68@l
    li r4, 0x11c
    lis r5, lbl_80348F50@ha
    addi r5, r5, lbl_80348F50@l
    opword 0x4CC63182
    bl fn_801A9384
    li r3, 0x0
lbl_8004439C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
