#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK SOiFree();                 /* extern */
s32 SOiPrepareTempRm();        /* extern */
s32 _restgpr_24();                               /* extern */
s32 _restgpr_25();                               /* extern */
s32 _restgpr_26();                               /* extern */
u64 _savegpr_24();                                  /* extern */
u64 _savegpr_25();                                  /* extern */
u64 _savegpr_26();                                  /* extern */
M2C_UNK memcpy();                    /* extern */
M2C_UNK memset();             /* extern */
extern M2C_UNK VFiPFCODE_CP932_OEM2Unicode;
extern M2C_UNK VFiPFCODE_CP932_Unicode2OEM;
extern s32 lbl_8038F084;
extern u8 lbl_8038F0D8;
extern s32 lbl_80470378;
extern M2C_UNK lbl_804703A0;
extern M2C_UNK lbl_804733C0;
extern M2C_UNK lbl_80473F90;
extern s32 lbl_8049D478;
extern s32 lbl_8049D480;
extern s32 lbl_8049E5C0;
extern s32 lbl_8049E5C8;
extern s32 lbl_8049E5CC;

s32 fn_803360B0();
s32 fn_80336184();
s32 fn_80336274();
s32 fn_80336318();
s32 fn_80336400();
s32 fn_803364E8();
s32 fn_803365E4();
s32 fn_8033660C();
s32 fn_80336630();
s32 fn_80336658();
s32 fn_8033667C();
s32 fn_803367AC();
s32 fn_80336860();
s32 fn_803369BC();
s32 * fn_80336AC8();
s32 fn_80336B1C();
u16 fn_80336B20();
s32 fn_80336B28();
u16 fn_80336B2C();
void fn_80336B34();
void fn_80336DEC();
s32 fn_80337018();
s32 * fn_80337090();
s32 fn_803371D0();
void fn_803374B4();
s32 fn_80337518();
s32 fn_8033761C();
s32 fn_803377F8();
s32 fn_80337950();
s32 fn_80337A18();
s32 fn_80337AC4();
s32 fn_80337D94();
s32 fn_80338054();
s32 fn_80338100();
s32 fn_8033826C();
s32 fn_803383B4();
s32 fn_8033847C();
void fn_80338544();
void fn_80338548();
void fn_8033854C();
void fn_80338550();
s32 fn_80338648();
void fn_80338654(u32 arg0, u16 *arg1, u16 *arg2);
s32 fn_80338664();
s32 fn_8033878C();
s32 fn_80338790();

// fn_803360B0: definicion C reemplazada por asm (ver abajo)


s32 fn_80336184(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8;
    s32 temp_r3;
    s32 var_r30;
    s32 var_r3;

    if ((s32) lbl_8049E5C0 == 0) {
        OSRegisterVersion(lbl_8049D478);
        lbl_8049E5C0 = 1;
    }
    var_r3 = SOiPrepare(0, &sp8);
    if (var_r3 == 0) {
        if (arg0 == 0x17) {
            var_r30 = -5;
        } else {
            temp_r3 = SOiAlloc(0xC, 0x20);
            if (temp_r3 == 0) {
                var_r30 = -0x31;
            } else {
                M2C_FIELD(temp_r3, s32 *, 0) = arg0;
                M2C_FIELD(temp_r3, s32 *, 4) = arg1;
                M2C_FIELD(temp_r3, s32 *, 8) = arg2;
                var_r30 = IOS_Ioctl(sp8, 0xF, (u8 *) temp_r3, 0xC, NULL, 0);
                SOiFree(0xC, temp_r3, 0x20);
            }
        }
        var_r3 = SOiConclude(0, var_r30);
    }
    return var_r3;
}

s32 fn_80336274(s32 arg0);

// fn_80336318: definicion C reemplazada por asm (ver abajo)


// fn_80336400: definicion C reemplazada por asm (ver abajo)


// fn_803364E8: definicion C reemplazada por asm (ver abajo)


s32 fn_803365E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4);

s32 fn_8033660C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

s32 fn_80336630(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4);

s32 fn_80336658(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

s32 fn_8033667C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7, M2C_UNK arg_sp8);

// fn_803367AC: definicion C reemplazada por asm (ver abajo)


// fn_80336860: definicion C reemplazada por asm (ver abajo)


// fn_803369BC: definicion C reemplazada por asm (ver abajo)


// fn_80336AC8: definicion C reemplazada por asm (ver abajo)


s32 fn_80336B1C(s32 arg0) {
    return arg0;
}


s32 fn_80336B28(s32 arg0) {
    return arg0;
}


void fn_80336B34(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0);

void fn_80336DEC(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0);

s32 fn_80337018(void) {
    s32 sp8;
    s32 temp_r3;
    s32 var_r30;

    var_r30 = 0;
    temp_r3 = SOiPrepare(0, &sp8);
    if (temp_r3 == 0) {
        var_r30 = IOS_Ioctl(sp8, 0x10, NULL, 0, NULL, 0);
        SOiConclude(0, temp_r3);
    }
    return var_r30;
}

s32 *fn_80337090(s32 arg0, M2C_UNK arg_sp0);

// fn_803371D0: definicion C reemplazada por asm (ver abajo)


void fn_803374B4(s32 *arg0) {
    s32 temp_r31;

    temp_r31 = OSDisableInterrupts();
    if ((SOiIsInitialized() == 1) && (arg0 != NULL)) {
        SOiFree(0xA, (s32) arg0, 0x840);
    }
    OSRestoreInterrupts(temp_r31);
}

// fn_80337518: definicion C reemplazada por asm (ver abajo)


s32 fn_8033761C(s32 arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4, M2C_UNK arg_sp0);


s32 fn_80337950(s32 arg0, s32 arg1, s8 *arg_sp0, s32 arg_sp20, s32 arg_sp40, s32 arg_sp60, s32 *arg_sp80);

s32 fn_80337A18(s32 arg0, s8 *arg_sp0, s32 arg_sp20, s32 arg_sp40, s32 *arg_sp60);



s32 fn_80338054(s32 arg0, s8 *arg_sp0, s32 arg_sp20, s32 arg_sp40, s32 *arg_sp60);

s32 fn_80338100(s32 arg0, s32 arg1, s32 arg2, s8 *arg_sp0, s32 arg_sp20, s32 arg_sp24, s32 arg_sp28, s32 arg_sp2C, s32 arg_sp30, s32 arg_sp34, s32 arg_sp38, s32 arg_sp3C, s32 arg_sp40, s32 *arg_sp60);

s32 fn_8033826C(s32 arg0, s32 arg1, s32 arg_sp0, s32 arg_sp20, s32 arg_sp40, s32 *arg_sp60);

s32 fn_803383B4(s32 arg0, s32 arg1, s8 *arg_sp0, s32 arg_sp20, s32 arg_sp40, s32 arg_sp60, s32 *arg_sp80);

s32 fn_8033847C(s32 arg0, s32 arg1, s8 *arg_sp0, s32 arg_sp20, s32 arg_sp40, s32 arg_sp60, s32 *arg_sp80);

void fn_80338544(s32 arg0) {
    OSInitMutex((s8 *) arg0);
}

void fn_80338548(s32 arg0) {
    OSLockMutex((s8 *) arg0);
}

void fn_8033854C(s32 arg0) {
    OSUnlockMutex((s8 *) arg0);
}


s32 fn_80338648(s32 arg0, s32 arg1) {
    return (arg0 << 0x10) + arg1;
}


// fn_80338664: definicion C reemplazada por asm (ver abajo)


s32 fn_8033878C(s32 arg0, s32 arg1) {
    return fn_80338790(arg0, arg1);
}

// fn_80338790: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern void _restgpr_21();
extern void _restgpr_22();
extern void _restgpr_27();
extern void _savegpr_21();
extern void _savegpr_22();
extern void _savegpr_27();
extern void fn_8032BD1C();
extern void fn_8032C0C4();
s32 fn_803360B0(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80336274();
s32 fn_80336318(s32 arg0, u8 *arg1);
s32 fn_80336400(s32 arg0, u8 *arg1);
s32 fn_803364E8(s32 arg0, u8 *arg1, M2C_UNK arg_sp0);
s32 fn_803365E4();
s32 fn_8033660C();
s32 fn_80336630();
s32 fn_80336658();
s32 fn_8033667C();
s32 fn_803367AC(s32 arg0, s32 arg1);
s32 fn_80336860(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
s32 fn_803369BC(s32 arg0, s32 *arg1, M2C_UNK arg_sp0);
s32 *fn_80336AC8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
u16 fn_80336B20();
u16 fn_80336B2C();
void fn_80336B34();
void fn_80336DEC();
s32 * fn_80337090();
s32 fn_803371D0(s32 arg0, s32 arg1, u8 *arg2, s32 **arg3, M2C_UNK arg_sp0);
s32 fn_80337518(s32 arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4, M2C_UNK arg_sp0);
s32 fn_8033761C();
s32 fn_803377F8();
s32 fn_80337950();
s32 fn_80337A18();
s32 fn_80337AC4();
s32 fn_80337D94();
s32 fn_80338054();
s32 fn_80338100();
s32 fn_8033826C();
s32 fn_803383B4();
s32 fn_8033847C();
void fn_80338550();
void fn_80338654(u32 arg0, u16 *arg1, u16 *arg2);
s32 fn_80338664(s32 arg0, s32 arg1);
s32 fn_80338790(s32 arg0, s32 arg1);
extern void fn_80338E50();
extern void strcpy();

// asm_to_cpp: fn_803360B0
asm s32 fn_803360B0(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    addi r4, r1, 0x8
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x0
    bl SOiPrepare
    cmpwi r3, 0x0
    bne lbl_80336164
    cmpwi r28, 0x17
    bne lbl_803360FC
    li r31, -0x5
    b lbl_80336158
lbl_803360FC:
    li r3, 0xc
    li r4, 0x20
    bl SOiAlloc
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8033611C
    li r31, -0x31
    b lbl_80336158
lbl_8033611C:
    stw r28, 0x0(r3)
    mr r5, r30
    li r4, 0xf
    li r6, 0xc
    stw r29, 0x4(r3)
    li r7, 0x0
    li r8, 0x0
    stw r31, 0x8(r3)
    lwz r3, 0x8(r1)
    bl IOS_Ioctl
    mr r31, r3
    mr r4, r30
    li r3, 0xc
    li r5, 0x20
    bl SOiFree
lbl_80336158:
    mr r4, r31
    li r3, 0x0
    bl SOiConclude
lbl_80336164:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80336274
asm s32 fn_80336274() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r3
    li r3, 0x0
    stw r30, 0x18(r1)
    bl SOiPrepare
    cmpwi r3, 0x0
    bne lbl_80336300
    li r3, 0xc
    li r4, 0x20
    bl SOiAlloc
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_803362C0
    li r31, -0x31
    b lbl_803362F4
lbl_803362C0:
    stw r31, 0x0(r3)
    mr r5, r30
    li r4, 0x3
    li r6, 0x4
    lwz r3, 0x8(r1)
    li r7, 0x0
    li r8, 0x0
    bl IOS_Ioctl
    mr r31, r3
    mr r4, r30
    li r3, 0xc
    li r5, 0x20
    bl SOiFree
lbl_803362F4:
    mr r4, r31
    li r3, 0x0
    bl SOiConclude
lbl_80336300:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80336318
asm s32 fn_80336318(s32 arg0, u8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x0
    bl SOiPrepare
    cmpwi r3, 0x0
    bne lbl_803363E4
    cmpwi r31, 0x0
    beq lbl_80336364
    lbz r0, 0x0(r31)
    cmplwi r0, 0x8
    bgt lbl_80336364
    bge lbl_8033636C
lbl_80336364:
    li r31, -0x1c
    b lbl_803363D8
lbl_8033636C:
    li r3, 0xc
    li r4, 0x40
    bl SOiAlloc
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8033638C
    li r31, -0x31
    b lbl_803363D8
lbl_8033638C:
    stw r29, 0x0(r3)
    li r0, 0x1
    mr r4, r31
    stw r0, 0x4(r3)
    addi r3, r3, 0x8
    lbz r5, 0x0(r31)
    bl fn_8032BD1C
    lwz r3, 0x8(r1)
    mr r5, r30
    li r4, 0x2
    li r6, 0x24
    li r7, 0x0
    li r8, 0x0
    bl IOS_Ioctl
    mr r31, r3
    mr r4, r30
    li r3, 0xc
    li r5, 0x40
    bl SOiFree
lbl_803363D8:
    mr r4, r31
    li r3, 0x0
    bl SOiConclude
lbl_803363E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80336400
asm s32 fn_80336400(s32 arg0, u8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x0
    bl SOiPrepare
    cmpwi r3, 0x0
    bne lbl_803364CC
    cmpwi r31, 0x0
    beq lbl_8033644C
    lbz r0, 0x0(r31)
    cmplwi r0, 0x8
    bgt lbl_8033644C
    bge lbl_80336454
lbl_8033644C:
    li r31, -0x1c
    b lbl_803364C0
lbl_80336454:
    li r3, 0xc
    li r4, 0x40
    bl SOiAlloc
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_80336474
    li r31, -0x31
    b lbl_803364C0
lbl_80336474:
    stw r29, 0x0(r3)
    li r0, 0x1
    mr r4, r31
    stw r0, 0x4(r3)
    addi r3, r3, 0x8
    lbz r5, 0x0(r31)
    bl fn_8032BD1C
    lwz r3, 0x8(r1)
    mr r5, r30
    li r4, 0x4
    li r6, 0x24
    li r7, 0x0
    li r8, 0x0
    bl IOS_Ioctl
    mr r31, r3
    mr r4, r30
    li r3, 0xc
    li r5, 0x40
    bl SOiFree
lbl_803364C0:
    mr r4, r31
    li r3, 0x0
    bl SOiConclude
lbl_803364CC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_803364E8
asm s32 fn_803364E8(s32 arg0, u8 *arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r28, r3
    mr r27, r4
    addi r4, r1, 0x8
    li r3, 0x0
    bl SOiPrepare
    cmpwi r3, 0x0
    bne lbl_803365CC
    cmpwi r27, 0x0
    beq lbl_80336530
    lbz r3, 0x0(r27)
    cmplwi r3, 0x8
    bgt lbl_80336530
    bge lbl_80336538
lbl_80336530:
    li r30, -0x1c
    b lbl_803365C0
lbl_80336538:
    addi r0, r3, 0x3f
    li r3, 0xc
    clrrwi r31, r0, 5
    mr r4, r31
    bl SOiAlloc
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_80336560
    li r30, -0x31
    b lbl_803365C0
lbl_80336560:
    stw r28, 0x0(r3)
    addi r28, r3, 0x20
    mr r4, r27
    lbz r5, 0x0(r27)
    mr r3, r28
    bl fn_8032BD1C
    lwz r3, 0x8(r1)
    mr r5, r29
    lbz r8, 0x0(r27)
    mr r7, r28
    li r4, 0x7
    li r6, 0x4
    bl IOS_Ioctl
    cmpwi r3, 0x0
    mr r30, r3
    blt lbl_803365B0
    lbz r5, 0x0(r28)
    mr r3, r27
    mr r4, r28
    bl fn_8032BD1C
lbl_803365B0:
    mr r4, r29
    mr r5, r31
    li r3, 0xc
    bl SOiFree
lbl_803365C0:
    mr r4, r30
    li r3, 0x0
    bl SOiConclude
lbl_803365CC:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_803365E4
asm s32 fn_803365E4() {
    nofralloc
    mr r10, r4
    mr r9, r5
    mr r0, r6
    mr r8, r7
    mr r4, r3
    mr r5, r10
    mr r6, r9
    mr r7, r0
    li r3, 0x0
    b fn_80336B34
}

// asm_to_cpp: fn_8033660C
asm s32 fn_8033660C() {
    nofralloc
    mr r8, r4
    mr r0, r5
    mr r7, r6
    mr r4, r3
    mr r5, r8
    mr r6, r0
    li r3, 0x0
    li r8, 0x0
    b fn_80336B34
}

// asm_to_cpp: fn_80336630
asm s32 fn_80336630() {
    nofralloc
    mr r10, r4
    mr r9, r5
    mr r0, r6
    mr r8, r7
    mr r4, r3
    mr r5, r10
    mr r6, r9
    mr r7, r0
    li r3, 0x0
    b fn_80336DEC
}

// asm_to_cpp: fn_80336658
asm s32 fn_80336658() {
    nofralloc
    mr r8, r4
    mr r0, r5
    mr r7, r6
    mr r4, r3
    mr r5, r8
    mr r6, r0
    li r3, 0x0
    li r8, 0x0
    b fn_80336DEC
}

// asm_to_cpp: fn_8033667C
asm s32 fn_8033667C() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    mr r29, r4
    stw r28, 0x80(r1)
    mr r28, r3
    bne cr1, lbl_803366C4
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_803366C4:
    addi r11, r1, 0x98
    addi r0, r1, 0x8
    lis r12, 0x200
    stw r4, 0xc(r1)
    addi r31, r1, 0x6c
    li r4, 0x1
    stw r3, 0x8(r1)
    mr r3, r31
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x6c(r1)
    stw r11, 0x70(r1)
    stw r0, 0x74(r1)
    bl __va_arg
    lwz r31, 0x0(r3)
    addi r4, r1, 0x68
    li r3, 0x0
    bl SOiPrepare
    cmpwi r3, 0x0
    bne lbl_8033678C
    li r3, 0xc
    li r4, 0x20
    bl SOiAlloc
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_80336744
    li r31, -0x31
    b lbl_80336780
lbl_80336744:
    stw r28, 0x0(r3)
    mr r5, r30
    li r4, 0x5
    li r6, 0xc
    stw r29, 0x4(r3)
    li r7, 0x0
    li r8, 0x0
    stw r31, 0x8(r3)
    lwz r3, 0x68(r1)
    bl IOS_Ioctl
    mr r31, r3
    mr r4, r30
    li r3, 0xc
    li r5, 0x20
    bl SOiFree
lbl_80336780:
    mr r4, r31
    li r3, 0x0
    bl SOiConclude
lbl_8033678C:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_803367AC
asm s32 fn_803367AC(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x0
    bl SOiPrepare
    cmpwi r3, 0x0
    bne lbl_80336844
    li r3, 0xc
    li r4, 0x20
    bl SOiAlloc
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_80336800
    li r31, -0x31
    b lbl_80336838
lbl_80336800:
    stw r29, 0x0(r3)
    mr r5, r30
    li r4, 0xe
    li r6, 0x8
    stw r31, 0x4(r3)
    li r7, 0x0
    li r8, 0x0
    lwz r3, 0x8(r1)
    bl IOS_Ioctl
    mr r31, r3
    mr r4, r30
    li r3, 0xc
    li r5, 0x20
    bl SOiFree
lbl_80336838:
    mr r4, r31
    li r3, 0x0
    bl SOiConclude
lbl_80336844:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80336860
asm s32 fn_80336860(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    stw r5, 0x8(r1)
    mr r31, r3
    mr r26, r4
    addi r4, r1, 0x10
    stw r6, 0xc(r1)
    li r3, 0x0
    bl SOiPrepare
    cmpwi r3, 0x0
    bne lbl_803369A4
    cmpwi r31, 0x0
    bne lbl_803368A8
    li r28, -0x1c
    b lbl_80336998
lbl_803368A8:
    mulli r29, r26, 0xc
    li r3, 0xc
    addi r0, r29, 0x3f
    clrrwi r30, r0, 5
    mr r4, r30
    bl SOiAlloc
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_803368D4
    li r28, -0x31
    b lbl_80336998
lbl_803368D4:
    lwz r7, 0x8(r1)
    li r5, -0x1
    lwz r4, 0xc(r1)
    xoris r0, r5, 0x8000
    xoris r6, r7, 0x8000
    addi r26, r3, 0x20
    subfc r5, r4, r5
    subfe r6, r6, r0
    subfe r6, r0, r0
    neg. r6, r6
    bne lbl_80336910
    addi r4, r1, 0x8
    li r5, 0x8
    bl fn_8032BD1C
    b lbl_80336940
lbl_80336910:
    lis r5, 0x8000
    lis r3, 0x1062
    lwz r0, 0xf8(r5)
    addi r6, r3, 0x4dd3
    mr r3, r7
    li r5, 0x0
    srwi r0, r0, 2
    mulhwu r0, r6, r0
    srwi r6, r0, 6
    bl __div2i
    stw r4, 0x4(r27)
    stw r3, 0x0(r27)
lbl_80336940:
    mr r3, r26
    mr r4, r31
    mr r5, r29
    bl fn_8032BD1C
    lwz r3, 0x10(r1)
    mr r5, r27
    mr r7, r26
    mr r8, r29
    li r4, 0xb
    li r6, 0x8
    bl IOS_Ioctl
    cmpwi r3, 0x0
    mr r28, r3
    blt lbl_80336988
    mr r3, r31
    mr r4, r26
    mr r5, r29
    bl fn_8032BD1C
lbl_80336988:
    mr r4, r27
    mr r5, r30
    li r3, 0xc
    bl SOiFree
lbl_80336998:
    mr r4, r28
    li r3, 0x0
    bl SOiConclude
lbl_803369A4:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_803369BC
asm s32 fn_803369BC(s32 arg0, s32 *arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    li r3, 0x0
    bl SOiPrepareTempRm
    cmpwi r3, 0x0
    bne lbl_80336AB0
    cmpwi r27, 0x0
    bne lbl_80336A00
    li r30, -0x1c
    b lbl_80336AA0
lbl_80336A00:
    mr r3, r27
    bl strlen
    addi r0, r3, 0x40
    li r3, 0xc
    clrrwi r31, r0, 5
    mr r4, r31
    bl SOiAlloc
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_80336A30
    li r30, -0x31
    b lbl_80336AA0
lbl_80336A30:
    cmpwi r27, 0x0
    addi r30, r3, 0x20
    beq lbl_80336A48
    mr r3, r30
    mr r4, r27
    bl strcpy
lbl_80336A48:
    mr r3, r27
    bl strlen
    mr r6, r3
    lwz r3, 0xc(r1)
    mr r5, r30
    mr r7, r29
    li r4, 0x15
    li r8, 0x4
    bl IOS_Ioctl
    cmpwi r3, 0x0
    mr r30, r3
    blt lbl_80336A90
    cmpwi r28, 0x0
    beq lbl_80336A90
    mr r3, r28
    mr r4, r29
    li r5, 0x4
    bl fn_8032BD1C
lbl_80336A90:
    mr r4, r29
    mr r5, r31
    li r3, 0xc
    bl SOiFree
lbl_80336AA0:
    lwz r5, 0x8(r1)
    mr r4, r30
    li r3, 0x0
    bl SOiConcludeTempRm
lbl_80336AB0:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80336AC8
asm s32 *fn_80336AC8(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r8, r3
    lis r4, lbl_8038F084@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_8038F084@l
    lbz r7, 0x2(r8)
    stw r31, 0xc(r1)
    lis r31, lbl_80470378@ha
    lbz r5, 0x0(r3)
    lbz r6, 0x1(r3)
    addi r3, r31, lbl_80470378@l
    lbz r8, 0x3(r8)
    opword 0x4CC63182
    bl sprintf
    addi r3, r31, lbl_80470378@l
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

#pragma dont_inline on
u16 fn_80336B20(u32 arg0) {
    return (u16)arg0;
}
#pragma dont_inline reset

#pragma dont_inline on
u16 fn_80336B2C(u32 arg0) {
    return (u16)arg0;
}
#pragma dont_inline reset

// asm_to_cpp: fn_80336B34
asm void fn_80336B34() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lis r9, 0x1
    mr r25, r3
    addi r0, r9, -0x8000
    mr r26, r4
    cmpw r6, r0
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    ble lbl_80336B74
    mr r28, r0
lbl_80336B74:
    mr r3, r25
    addi r4, r1, 0x8
    bl SOiPrepare
    cmpwi r3, 0x0
    bne lbl_80336DD4
    cmpwi r30, 0x0
    beq lbl_80336BA8
    lbz r0, 0x0(r30)
    cmplwi r0, 0x8
    bgt lbl_80336BA0
    bge lbl_80336BA8
lbl_80336BA0:
    li r26, -0x1c
    b lbl_80336DC8
lbl_80336BA8:
    cmpwi r28, 0x0
    blt lbl_80336BBC
    ble lbl_80336BC4
    cmpwi r27, 0x0
    bne lbl_80336BC4
lbl_80336BBC:
    li r26, -0x1c
    b lbl_80336DC8
lbl_80336BC4:
    cmpwi r28, 0x0
    li r31, 0x1
    beq lbl_80336C5C
    clrlwi. r0, r27, 27
    li r24, 0x0
    li r4, 0x0
    bne lbl_80336BFC
    slwi r0, r28, 27
    srwi r3, r28, 31
    subf r0, r3, r0
    rotlwi r0, r0, 5
    add. r0, r0, r3
    bne lbl_80336BFC
    li r4, 0x1
lbl_80336BFC:
    cmpwi r4, 0x0
    beq lbl_80336C50
    li r23, 0x1
    bl SOiIsBufferAddrCheck
    cmpwi r3, 0x0
    beq lbl_80336C44
    clrlwi r4, r27, 3
    lis r0, 0x1000
    cmplw r4, r0
    li r3, 0x0
    blt lbl_80336C38
    lis r0, 0x1800
    cmplw r4, r0
    bge lbl_80336C38
    li r3, 0x1
lbl_80336C38:
    cmpwi r3, 0x0
    bne lbl_80336C44
    li r23, 0x0
lbl_80336C44:
    cmpwi r23, 0x0
    beq lbl_80336C50
    li r24, 0x1
lbl_80336C50:
    cmpwi r24, 0x0
    bne lbl_80336C5C
    li r31, 0x0
lbl_80336C5C:
    cmpwi r30, 0x0
    bne lbl_80336C6C
    li r3, 0x0
    b lbl_80336C70
lbl_80336C6C:
    lbz r3, 0x0(r30)
lbl_80336C70:
    addi r0, r3, 0x5f
    li r3, 0xc
    clrrwi r24, r0, 5
    mr r4, r24
    bl SOiAlloc
    cmpwi r31, 0x0
    mr r22, r3
    bne lbl_80336CA4
    addi r0, r28, 0x1f
    li r3, 0xd
    clrrwi r4, r0, 5
    bl SOiAlloc
    b lbl_80336CA8
lbl_80336CA4:
    mr r3, r27
lbl_80336CA8:
    cmpwi r22, 0x0
    mr r23, r3
    beq lbl_80336CBC
    cmpwi r3, 0x0
    bne lbl_80336CC4
lbl_80336CBC:
    li r26, -0x31
    b lbl_80336D9C
lbl_80336CC4:
    stw r26, 0x20(r22)
    addi r4, r22, 0x20
    li r0, 0x8
    cmpwi r30, 0x0
    stw r29, 0x24(r22)
    addi r21, r4, 0x20
    stw r4, 0x0(r22)
    stw r0, 0x4(r22)
    stw r3, 0x8(r22)
    stw r28, 0xc(r22)
    bne lbl_80336D1C
    li r0, 0x0
    mr r7, r22
    stw r0, 0x10(r22)
    li r4, 0xc
    li r5, 0x1
    li r6, 0x2
    stw r0, 0x14(r22)
    lwz r3, 0x8(r1)
    bl IOS_Ioctlv
    mr r26, r3
    b lbl_80336D7C
lbl_80336D1C:
    lbz r5, 0x0(r30)
    mr r3, r21
    mr r4, r30
    bl fn_8032BD1C
    stw r21, 0x10(r22)
    mr r7, r22
    li r4, 0xc
    li r5, 0x1
    lbz r0, 0x0(r30)
    li r6, 0x2
    stw r0, 0x14(r22)
    lwz r3, 0x8(r1)
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    mr r26, r3
    blt lbl_80336D7C
    lbz r5, 0x0(r30)
    mr r3, r30
    lbz r0, 0x0(r21)
    mr r4, r21
    cmplw r5, r0
    ble lbl_80336D78
    mr r5, r0
lbl_80336D78:
    bl fn_8032BD1C
lbl_80336D7C:
    cmpwi r26, 0x0
    blt lbl_80336D9C
    cmpwi r31, 0x0
    bne lbl_80336D9C
    mr r3, r27
    mr r4, r23
    mr r5, r28
    bl fn_8032BD1C
lbl_80336D9C:
    cmpwi r31, 0x0
    bne lbl_80336DB8
    addi r0, r28, 0x1f
    mr r4, r23
    clrrwi r5, r0, 5
    li r3, 0xd
    bl SOiFree
lbl_80336DB8:
    mr r4, r22
    mr r5, r24
    li r3, 0xc
    bl SOiFree
lbl_80336DC8:
    mr r3, r25
    mr r4, r26
    bl SOiConclude
lbl_80336DD4:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80336DEC
asm void fn_80336DEC() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    mr r26, r4
    mr r25, r3
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    addi r4, r1, 0x8
    bl SOiPrepare
    cmpwi r3, 0x0
    bne lbl_80337000
    cmpwi r30, 0x0
    beq lbl_80336E48
    lbz r0, 0x0(r30)
    cmplwi r0, 0x8
    bgt lbl_80336E40
    bge lbl_80336E48
lbl_80336E40:
    li r24, -0x1c
    b lbl_80336FF4
lbl_80336E48:
    cmpwi r28, 0x0
    blt lbl_80336E5C
    ble lbl_80336E64
    cmpwi r27, 0x0
    bne lbl_80336E64
lbl_80336E5C:
    li r24, -0x1c
    b lbl_80336FF4
lbl_80336E64:
    cmpwi r28, 0x0
    li r31, 0x1
    beq lbl_80336EFC
    clrlwi. r0, r27, 27
    li r24, 0x0
    li r4, 0x0
    bne lbl_80336E9C
    slwi r0, r28, 27
    srwi r3, r28, 31
    subf r0, r3, r0
    rotlwi r0, r0, 5
    add. r0, r0, r3
    bne lbl_80336E9C
    li r4, 0x1
lbl_80336E9C:
    cmpwi r4, 0x0
    beq lbl_80336EF0
    li r23, 0x1
    bl SOiIsBufferAddrCheck
    cmpwi r3, 0x0
    beq lbl_80336EE4
    clrlwi r4, r27, 3
    lis r0, 0x1000
    cmplw r4, r0
    li r3, 0x0
    blt lbl_80336ED8
    lis r0, 0x1800
    cmplw r4, r0
    bge lbl_80336ED8
    li r3, 0x1
lbl_80336ED8:
    cmpwi r3, 0x0
    bne lbl_80336EE4
    li r23, 0x0
lbl_80336EE4:
    cmpwi r23, 0x0
    beq lbl_80336EF0
    li r24, 0x1
lbl_80336EF0:
    cmpwi r24, 0x0
    bne lbl_80336EFC
    li r31, 0x0
lbl_80336EFC:
    li r3, 0xc
    li r4, 0x60
    bl SOiAlloc
    cmpwi r31, 0x0
    mr r22, r3
    bne lbl_80336F2C
    addi r0, r28, 0x1f
    li r3, 0xe
    clrrwi r4, r0, 5
    bl SOiAlloc
    mr r23, r3
    b lbl_80336F30
lbl_80336F2C:
    mr r23, r27
lbl_80336F30:
    cmpwi r22, 0x0
    beq lbl_80336F40
    cmpwi r23, 0x0
    bne lbl_80336F48
lbl_80336F40:
    li r24, -0x31
    b lbl_80336FC8
lbl_80336F48:
    stw r26, 0x20(r22)
    cmpwi r30, 0x0
    addi r24, r22, 0x20
    stw r29, 0x24(r22)
    bne lbl_80336F68
    li r0, 0x0
    stw r0, 0x8(r24)
    b lbl_80336F80
lbl_80336F68:
    li r0, 0x1
    mr r4, r30
    stw r0, 0x8(r24)
    addi r3, r24, 0xc
    lbz r5, 0x0(r30)
    bl fn_8032BD1C
lbl_80336F80:
    cmpwi r31, 0x0
    bne lbl_80336F98
    mr r3, r23
    mr r4, r27
    mr r5, r28
    bl fn_8032BD1C
lbl_80336F98:
    stw r23, 0x0(r22)
    li r0, 0x28
    mr r7, r22
    li r4, 0xd
    stw r28, 0x4(r22)
    li r5, 0x2
    li r6, 0x0
    stw r24, 0x8(r22)
    stw r0, 0xc(r22)
    lwz r3, 0x8(r1)
    bl IOS_Ioctlv
    mr r24, r3
lbl_80336FC8:
    cmpwi r31, 0x0
    bne lbl_80336FE4
    addi r0, r28, 0x1f
    mr r4, r23
    clrrwi r5, r0, 5
    li r3, 0xe
    bl SOiFree
lbl_80336FE4:
    mr r4, r22
    li r3, 0xc
    li r5, 0x60
    bl SOiFree
lbl_80336FF4:
    mr r3, r25
    mr r4, r24
    bl SOiConclude
lbl_80337000:
    addi r11, r1, 0x40
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80337090
asm s32 * fn_80337090() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    addi r4, r1, 0x8
    li r27, 0x0
    li r3, 0x0
    bl SOiPrepare
    cmpwi r3, 0x0
    bne lbl_803371B4
    cmpwi r26, 0x0
    bne lbl_803370D0
    li r29, -0x1c
    b lbl_803371A8
lbl_803370D0:
    mr r3, r26
    bl strlen
    addi r0, r3, 0x20
    mr r29, r3
    clrrwi r28, r0, 5
    li r3, 0xc
    mr r4, r28
    bl SOiAlloc
    mr r31, r3
    bl SOiGetSysWork
    cmpwi r31, 0x0
    lwz r30, 0x10(r3)
    bne lbl_8033710C
    li r29, -0x31
    b lbl_803371A8
lbl_8033710C:
    mr r3, r31
    mr r4, r26
    bl strcpy
    lwz r3, 0x8(r1)
    mr r5, r31
    mr r7, r30
    addi r6, r29, 0x1
    li r4, 0x11
    li r8, 0x460
    bl IOS_Ioctl
    cmpwi r3, 0x0
    mr r29, r3
    blt lbl_80337198
    lwz r3, 0x0(r30)
    addi r0, r30, 0x10
    addi r4, r30, 0x340
    subf r3, r3, r0
    b lbl_80337164
lbl_80337154:
    lwz r0, 0x0(r4)
    add r0, r0, r3
    stw r0, 0x0(r4)
    addi r4, r4, 0x4
lbl_80337164:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_80337154
    lwz r0, 0x4(r30)
    mr r27, r30
    add r0, r0, r3
    stw r0, 0x4(r30)
    lwz r0, 0x0(r30)
    add r0, r0, r3
    stw r0, 0x0(r30)
    lwz r0, 0xc(r30)
    add r0, r0, r3
    stw r0, 0xc(r30)
lbl_80337198:
    mr r4, r31
    mr r5, r28
    li r3, 0xc
    bl SOiFree
lbl_803371A8:
    mr r4, r29
    li r3, 0x0
    bl SOiConclude
lbl_803371B4:
    addi r11, r1, 0x30
    mr r3, r27
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_803371D0
asm s32 fn_803371D0(s32 arg0, s32 arg1, u8 *arg2, s32 **arg3, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    addi r4, r1, 0x8
    li r3, 0x0
    bl SOiPrepare
    cmpwi r3, 0x0
    bne lbl_8033749C
    cmpwi r26, 0x0
    bne lbl_80337218
    li r29, 0x0
    b lbl_80337224
lbl_80337218:
    mr r3, r25
    bl strlen
    addi r29, r3, 0x1
lbl_80337224:
    cmpwi r25, 0x0
    bne lbl_80337234
    li r3, 0x0
    b lbl_80337240
lbl_80337234:
    mr r3, r25
    bl strlen
    addi r3, r3, 0x1
lbl_80337240:
    addi r3, r3, 0x1f
    addi r0, r29, 0x1f
    clrrwi r4, r3, 5
    clrrwi r0, r0, 5
    li r3, 0xc
    add r4, r4, r0
    addi r0, r4, 0x5f
    clrrwi r31, r0, 5
    mr r4, r31
    bl SOiAlloc
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_8033727C
    li r25, -0x31
    b lbl_80337490
lbl_8033727C:
    li r3, 0xa
    li r4, 0x840
    bl SOiAlloc
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_803372AC
    mr r4, r29
    mr r5, r31
    li r3, 0xc
    bl SOiFree
    li r25, -0x31
    b lbl_80337490
lbl_803372AC:
    cmpwi r25, 0x0
    addi r24, r29, 0x20
    bne lbl_803372C0
    li r3, 0x0
    b lbl_803372CC
lbl_803372C0:
    mr r3, r25
    bl strlen
    addi r3, r3, 0x1
lbl_803372CC:
    addi r0, r3, 0x1f
    cmpwi r26, 0x0
    clrrwi r0, r0, 5
    add r23, r24, r0
    bne lbl_803372E8
    li r3, 0x0
    b lbl_803372F4
lbl_803372E8:
    mr r3, r25
    bl strlen
    addi r3, r3, 0x1
lbl_803372F4:
    addi r0, r3, 0x1f
    cmpwi r25, 0x0
    clrrwi r0, r0, 5
    add r22, r23, r0
    beq lbl_80337314
    mr r3, r24
    mr r4, r25
    bl strcpy
lbl_80337314:
    cmpwi r25, 0x0
    beq lbl_80337320
    b lbl_80337324
lbl_80337320:
    li r24, 0x0
lbl_80337324:
    cmpwi r25, 0x0
    stw r24, 0x0(r29)
    bne lbl_80337338
    li r3, 0x0
    b lbl_80337340
lbl_80337338:
    mr r3, r25
    bl strlen
lbl_80337340:
    cmpwi r26, 0x0
    stw r3, 0x4(r29)
    beq lbl_80337358
    mr r3, r23
    mr r4, r26
    bl strcpy
lbl_80337358:
    cmpwi r26, 0x0
    beq lbl_80337364
    b lbl_80337368
lbl_80337364:
    li r23, 0x0
lbl_80337368:
    cmpwi r26, 0x0
    stw r23, 0x8(r29)
    bne lbl_8033737C
    li r3, 0x0
    b lbl_80337384
lbl_8033737C:
    mr r3, r26
    bl strlen
lbl_80337384:
    cmpwi r27, 0x0
    stw r3, 0xc(r29)
    beq lbl_803373A4
    mr r3, r22
    mr r4, r27
    li r5, 0x20
    bl fn_8032BD1C
    b lbl_803373B4
lbl_803373A4:
    mr r3, r22
    li r4, 0x0
    li r5, 0x20
    bl fn_8032C0C4
lbl_803373B4:
    lwz r0, 0x4(r22)
    cmpwi r0, 0x0
    bne lbl_803373C8
    li r0, 0x2
    stw r0, 0x4(r22)
lbl_803373C8:
    lwz r0, 0x4(r22)
    cmpwi r0, 0x17
    bne lbl_803373F4
    li r0, 0x0
    mr r4, r30
    stw r0, 0x0(r28)
    li r25, -0x44
    li r3, 0xa
    li r5, 0x840
    bl SOiFree
    b lbl_80337480
lbl_803373F4:
    stw r22, 0x10(r29)
    li r3, 0x20
    li r0, 0x834
    mr r7, r29
    stw r3, 0x14(r29)
    li r4, 0x18
    li r5, 0x3
    li r6, 0x1
    stw r30, 0x18(r29)
    stw r0, 0x1c(r29)
    lwz r3, 0x8(r1)
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    mr r25, r3
    blt lbl_80337468
    stw r30, 0x0(r28)
    addi r3, r30, 0x460
    b lbl_8033745C
lbl_8033743C:
    stw r3, 0x18(r30)
    lwz r0, 0x1c(r30)
    cmpwi r0, 0x0
    beq lbl_80337454
    addi r0, r30, 0x20
    stw r0, 0x1c(r30)
lbl_80337454:
    lwz r30, 0x1c(r30)
    addi r3, r3, 0x1c
lbl_8033745C:
    cmpwi r30, 0x0
    bne lbl_8033743C
    b lbl_80337480
lbl_80337468:
    li r0, 0x0
    mr r4, r30
    stw r0, 0x0(r28)
    li r3, 0xa
    li r5, 0x840
    bl SOiFree
lbl_80337480:
    mr r4, r29
    mr r5, r31
    li r3, 0xc
    bl SOiFree
lbl_80337490:
    mr r4, r25
    li r3, 0x0
    bl SOiConclude
lbl_8033749C:
    addi r11, r1, 0x40
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80337518
asm s32 fn_80337518(s32 arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r31, r7
    addi r4, r1, 0x8
    li r3, 0x0
    bl SOiPrepare
    cmpwi r3, 0x0
    bne lbl_80337604
    cmpwi r31, 0x0
    blt lbl_80337564
    cmpwi r31, 0x14
    ble lbl_8033756C
lbl_80337564:
    li r31, -0x1c
    b lbl_803375F8
lbl_8033756C:
    li r3, 0xc
    li r4, 0x40
    bl SOiAlloc
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8033758C
    li r31, -0x31
    b lbl_803375F8
lbl_8033758C:
    stw r26, 0x0(r3)
    cmpwi r29, 0x0
    stw r27, 0x4(r3)
    stw r28, 0x8(r3)
    stw r31, 0xc(r3)
    beq lbl_803375B8
    mr r4, r29
    mr r5, r31
    addi r3, r3, 0x10
    bl fn_8032BD1C
    b lbl_803375C8
lbl_803375B8:
    mr r5, r31
    li r4, 0x0
    addi r3, r3, 0x10
    bl fn_8032C0C4
lbl_803375C8:
    lwz r3, 0x8(r1)
    mr r5, r30
    li r4, 0x9
    li r6, 0x24
    li r7, 0x0
    li r8, 0x0
    bl IOS_Ioctl
    mr r31, r3
    mr r4, r30
    li r3, 0xc
    li r5, 0x40
    bl SOiFree
lbl_803375F8:
    mr r4, r31
    li r3, 0x0
    bl SOiConclude
lbl_80337604:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8033761C
asm s32 fn_8033761C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r26, r4
    mr r25, r5
    mr r30, r6
    mr r31, r7
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    li r3, 0x0
    bl SOiPrepareTempRm
    cmpwi r3, 0x0
    bne lbl_803377E0
    subi r0, r25, 0x1001
    cmplwi r0, 0x1
    bgt lbl_8033766C
    li r28, -0x1c
    b lbl_803377D0
lbl_8033766C:
    cmpwi r31, 0x0
    li r3, 0x0
    beq lbl_80337684
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bge lbl_80337688
lbl_80337684:
    li r3, 0x1
lbl_80337688:
    cmpwi r3, 0x0
    beq lbl_80337698
    li r3, 0x0
    b lbl_8033769C
lbl_80337698:
    lwz r3, 0x0(r31)
lbl_8033769C:
    addi r0, r3, 0x7f
    li r3, 0xc
    clrrwi r29, r0, 5
    mr r4, r29
    bl SOiAlloc
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_803376C4
    li r28, -0x31
    b lbl_803377D0
lbl_803376C4:
    stw r26, 0x20(r3)
    addi r5, r3, 0x20
    cmpwi r31, 0x0
    li r4, 0x0
    addi r26, r5, 0x20
    stw r25, 0x24(r3)
    addi r25, r26, 0x20
    beq lbl_803376F0
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bge lbl_803376F4
lbl_803376F0:
    li r4, 0x1
lbl_803376F4:
    cmpwi r4, 0x0
    beq lbl_80337704
    li r0, 0x0
    b lbl_80337708
lbl_80337704:
    lwz r0, 0x0(r31)
lbl_80337708:
    stw r0, 0x0(r26)
    li r0, 0x8
    cmpwi r31, 0x0
    li r4, 0x0
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    stw r25, 0x8(r3)
    beq lbl_80337734
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bge lbl_80337738
lbl_80337734:
    li r4, 0x1
lbl_80337738:
    cmpwi r4, 0x0
    beq lbl_80337748
    li r0, 0x0
    b lbl_8033774C
lbl_80337748:
    lwz r0, 0x0(r31)
lbl_8033774C:
    stw r0, 0xc(r3)
    li r0, 0x4
    mr r7, r27
    li r4, 0x1c
    stw r26, 0x10(r3)
    li r5, 0x1
    li r6, 0x2
    stw r0, 0x14(r3)
    lwz r3, 0xc(r1)
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    mr r28, r3
    blt lbl_803377C0
    cmpwi r31, 0x0
    beq lbl_803377C0
    lwz r5, 0x0(r26)
    lwz r0, 0x0(r31)
    cmpw r0, r5
    blt lbl_803377B8
    cmpwi r30, 0x0
    beq lbl_803377AC
    mr r3, r30
    mr r4, r25
    bl fn_8032BD1C
lbl_803377AC:
    lwz r0, 0x0(r26)
    stw r0, 0x0(r31)
    b lbl_803377C0
lbl_803377B8:
    stw r5, 0x0(r31)
    li r28, -0x1c
lbl_803377C0:
    mr r4, r27
    mr r5, r29
    li r3, 0xc
    bl SOiFree
lbl_803377D0:
    lwz r5, 0x8(r1)
    mr r4, r28
    li r3, 0x0
    bl SOiConcludeTempRm
lbl_803377E0:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_803377F8
asm s32 fn_803377F8() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x1a0
    stwux r1, r1, r11
    mflr r0
    lis r5, lbl_8038F0D8@ha
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    stw r29, -0xc(r12)
    mr r29, r4
    li r4, 0x0
    stw r28, -0x10(r12)
    mr r28, r3
    addi r3, r5, lbl_8038F0D8@l
    bl IOS_Open
    lwz r0, lbl_8049E5C8
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_80337858
    lwz r3, lbl_8049D480
    bl OSRegisterVersion
    li r0, 0x1
    stw r0, lbl_8049E5C8
lbl_80337858:
    cmpwi r31, 0x0
    bge lbl_80337868
    li r3, -0x1
    b lbl_8033792C
lbl_80337868:
    mr r3, r29
    li r4, 0x0
    b lbl_8033787C
lbl_80337874:
    addi r4, r4, 0x1
    addi r3, r3, 0x1
lbl_8033787C:
    cmplwi r4, 0x100
    bge lbl_80337890
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_80337874
lbl_80337890:
    subf. r30, r29, r3
    bne lbl_803378A0
    li r3, -0x1
    b lbl_8033792C
lbl_803378A0:
    addi r3, r1, 0x80
    li r4, 0x0
    li r5, 0x100
    bl memset
    cmplwi r30, 0x100
    ble lbl_803378BC
    li r30, 0x100
lbl_803378BC:
    mr r4, r29
    mr r5, r30
    addi r3, r1, 0x80
    bl memcpy
    li r10, 0x20
    addi r11, r1, 0x40
    addi r9, r1, 0x20
    addi r8, r1, 0x80
    li r3, -0x1
    li r0, 0x100
    stw r3, 0x40(r1)
    mr r3, r31
    addi r7, r1, 0x60
    li r4, 0x1
    stw r28, 0x20(r1)
    li r5, 0x1
    li r6, 0x2
    stw r11, 0x60(r1)
    stw r10, 0x64(r1)
    stw r9, 0x68(r1)
    stw r10, 0x6c(r1)
    stw r8, 0x70(r1)
    stw r0, 0x74(r1)
    bl IOS_Ioctlv
    mr r3, r31
    bl IOS_Close
    lwz r3, 0x60(r1)
    lwz r3, 0x0(r3)
lbl_8033792C:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    lwz r28, -0x10(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80337950
asm s32 fn_80337950() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xc0
    stwux r1, r1, r11
    mflr r0
    lis r5, lbl_8038F0D8@ha
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    mr r30, r4
    li r4, 0x0
    stw r29, -0xc(r12)
    mr r29, r3
    addi r3, r5, lbl_8038F0D8@l
    bl IOS_Open
    cmpwi r3, 0x0
    mr r31, r3
    bge lbl_803379A0
    li r3, -0x1
    b lbl_803379F8
lbl_803379A0:
    li r9, 0x20
    addi r10, r1, 0x20
    addi r8, r1, 0x60
    addi r0, r1, 0x40
    li r11, -0x1
    stw r29, 0x60(r1)
    addi r7, r1, 0x80
    li r4, 0x2
    stw r30, 0x40(r1)
    li r5, 0x1
    li r6, 0x2
    stw r11, 0x20(r1)
    stw r10, 0x80(r1)
    stw r9, 0x84(r1)
    stw r8, 0x88(r1)
    stw r9, 0x8c(r1)
    stw r0, 0x90(r1)
    stw r9, 0x94(r1)
    bl IOS_Ioctlv
    mr r3, r31
    bl IOS_Close
    lwz r3, 0x20(r1)
lbl_803379F8:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80337A18
asm s32 fn_80337A18() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xa0
    stwux r1, r1, r11
    mflr r0
    lis r4, lbl_8038F0D8@ha
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    mr r30, r3
    addi r3, r4, lbl_8038F0D8@l
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    mr r31, r3
    bge lbl_80337A60
    li r3, -0x1
    b lbl_80337AA8
lbl_80337A60:
    li r8, 0x20
    addi r9, r1, 0x20
    addi r0, r1, 0x40
    li r6, -0x1
    stw r6, 0x20(r1)
    addi r7, r1, 0x60
    li r4, 0x3
    li r5, 0x1
    stw r30, 0x40(r1)
    li r6, 0x1
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r0, 0x68(r1)
    stw r8, 0x6c(r1)
    bl IOS_Ioctlv
    mr r3, r31
    bl IOS_Close
    lwz r3, 0x20(r1)
lbl_80337AA8:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80337AC4
asm s32 fn_80337AC4() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x180
    stwux r1, r1, r11
    mflr r0
    mr r11, r12
    stw r0, 0x4(r12)
    bl _savegpr_24
    lis r6, lbl_8038F0D8@ha
    mr r28, r3
    mr r29, r4
    mr r30, r5
    addi r3, r6, lbl_8038F0D8@l
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    mr r31, r3
    li r26, -0x1
    bge lbl_80337B18
    li r3, -0x1
    b lbl_80337D78
lbl_80337B18:
    cmplwi r30, 0x8000
    ble lbl_80337B28
    lis r3, 0x1
    addi r30, r3, -0x8000
lbl_80337B28:
    clrlwi. r0, r29, 27
    beq lbl_80337B38
    subfic r25, r0, 0x20
    b lbl_80337B3C
lbl_80337B38:
    li r25, 0x0
lbl_80337B3C:
    addi r3, r1, 0x140
    li r24, 0x0
    li r4, 0x0
    li r5, 0x20
    bl memset
    cmpwi r25, 0x0
    beq lbl_80337C04
    cmplw r25, r30
    ble lbl_80337B64
    mr r25, r30
lbl_80337B64:
    li r8, 0x20
    addi r9, r1, 0x120
    addi r27, r1, 0x140
    addi r0, r1, 0x100
    li r4, -0x1
    stw r28, 0x100(r1)
    mr r3, r31
    addi r7, r1, 0xe0
    stw r4, 0x120(r1)
    li r4, 0x4
    li r5, 0x2
    li r6, 0x1
    stw r9, 0xe0(r1)
    stw r8, 0xe4(r1)
    stw r27, 0xe8(r1)
    stw r25, 0xec(r1)
    stw r0, 0xf0(r1)
    stw r8, 0xf4(r1)
    bl IOS_Ioctlv
    lwz r26, 0x120(r1)
    cmpwi r26, 0x0
    ble lbl_80337BF4
    mr r24, r26
    mr r3, r29
    mr r4, r27
    mr r5, r26
    bl memcpy
    cmplw r26, r25
    bge lbl_80337BE8
    mr r3, r31
    bl IOS_Close
    mr r3, r24
    b lbl_80337D78
lbl_80337BE8:
    add r29, r29, r26
    subf r30, r26, r30
    b lbl_80337C04
lbl_80337BF4:
    mr r3, r31
    bl IOS_Close
    mr r3, r26
    b lbl_80337D78
lbl_80337C04:
    cmpwi r30, 0x0
    beq lbl_80337CB0
    clrrwi. r25, r30, 5
    beq lbl_80337CB0
    li r8, 0x20
    addi r9, r1, 0xc0
    addi r0, r1, 0xa0
    li r5, -0x1
    stw r5, 0xc0(r1)
    mr r3, r31
    addi r7, r1, 0x80
    li r4, 0x4
    stw r28, 0xa0(r1)
    li r5, 0x2
    li r6, 0x1
    stw r9, 0x80(r1)
    stw r8, 0x84(r1)
    stw r29, 0x88(r1)
    stw r25, 0x8c(r1)
    stw r0, 0x90(r1)
    stw r8, 0x94(r1)
    bl IOS_Ioctlv
    lwz r26, 0xc0(r1)
    cmpwi r26, 0x0
    ble lbl_80337C90
    cmplw r26, r25
    add r24, r24, r26
    bge lbl_80337C84
    mr r3, r31
    bl IOS_Close
    mr r3, r24
    b lbl_80337D78
lbl_80337C84:
    add r29, r29, r26
    subf r30, r26, r30
    b lbl_80337CB0
lbl_80337C90:
    mr r3, r31
    bl IOS_Close
    cmpwi r24, 0x0
    ble lbl_80337CA8
    mr r3, r24
    b lbl_80337D78
lbl_80337CA8:
    mr r3, r26
    b lbl_80337D78
lbl_80337CB0:
    cmpwi r30, 0x0
    beq lbl_80337D60
    clrlwi. r25, r30, 27
    beq lbl_80337D60
    addi r3, r1, 0x140
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r8, 0x20
    addi r9, r1, 0x60
    addi r30, r1, 0x140
    addi r0, r1, 0x40
    li r4, -0x1
    stw r28, 0x40(r1)
    mr r3, r31
    addi r7, r1, 0x20
    stw r4, 0x60(r1)
    li r4, 0x4
    li r5, 0x2
    li r6, 0x1
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    stw r30, 0x28(r1)
    stw r25, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r8, 0x34(r1)
    bl IOS_Ioctlv
    lwz r26, 0x60(r1)
    cmpwi r26, 0x0
    ble lbl_80337D40
    mr r3, r29
    mr r4, r30
    mr r5, r26
    add r24, r24, r26
    bl memcpy
    b lbl_80337D60
lbl_80337D40:
    mr r3, r31
    bl IOS_Close
    cmpwi r24, 0x0
    ble lbl_80337D58
    mr r3, r24
    b lbl_80337D78
lbl_80337D58:
    mr r3, r26
    b lbl_80337D78
lbl_80337D60:
    cmpwi r24, 0x0
    ble lbl_80337D6C
    mr r26, r24
lbl_80337D6C:
    mr r3, r31
    bl IOS_Close
    mr r3, r26
lbl_80337D78:
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80337D94
asm s32 fn_80337D94() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x180
    stwux r1, r1, r11
    mflr r0
    mr r11, r12
    stw r0, 0x4(r12)
    bl _savegpr_25
    lis r6, lbl_8038F0D8@ha
    mr r28, r3
    mr r29, r4
    mr r30, r5
    addi r3, r6, lbl_8038F0D8@l
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    mr r31, r3
    li r27, -0x1
    bge lbl_80337DE8
    li r3, -0x1
    b lbl_80338038
lbl_80337DE8:
    clrlwi. r0, r29, 27
    beq lbl_80337DF8
    subfic r26, r0, 0x20
    b lbl_80337DFC
lbl_80337DF8:
    li r26, 0x0
lbl_80337DFC:
    addi r3, r1, 0x140
    li r25, 0x0
    li r4, 0x0
    li r5, 0x20
    bl memset
    cmpwi r26, 0x0
    beq lbl_80337EC4
    cmplw r26, r30
    ble lbl_80337E24
    mr r26, r30
lbl_80337E24:
    mr r4, r29
    mr r5, r26
    addi r3, r1, 0x140
    bl memcpy
    li r9, 0x20
    addi r10, r1, 0x120
    addi r8, r1, 0x100
    addi r0, r1, 0x140
    li r4, -0x1
    stw r28, 0x100(r1)
    mr r3, r31
    addi r7, r1, 0xe0
    stw r4, 0x120(r1)
    li r4, 0x5
    li r5, 0x1
    li r6, 0x2
    stw r10, 0xe0(r1)
    stw r9, 0xe4(r1)
    stw r8, 0xe8(r1)
    stw r9, 0xec(r1)
    stw r0, 0xf0(r1)
    stw r26, 0xf4(r1)
    bl IOS_Ioctlv
    lwz r27, 0x120(r1)
    cmpwi r27, 0x0
    ble lbl_80337EB4
    cmplw r27, r26
    mr r25, r27
    bge lbl_80337EA8
    mr r3, r31
    bl IOS_Close
    mr r3, r27
    b lbl_80338038
lbl_80337EA8:
    add r29, r29, r27
    subf r30, r27, r30
    b lbl_80337EC4
lbl_80337EB4:
    mr r3, r31
    bl IOS_Close
    mr r3, r27
    b lbl_80338038
lbl_80337EC4:
    cmpwi r30, 0x0
    beq lbl_80337F70
    clrrwi. r26, r30, 5
    beq lbl_80337F70
    li r8, 0x20
    addi r9, r1, 0xc0
    addi r0, r1, 0xa0
    li r5, -0x1
    stw r5, 0xc0(r1)
    mr r3, r31
    addi r7, r1, 0x80
    li r4, 0x5
    stw r28, 0xa0(r1)
    li r5, 0x1
    li r6, 0x2
    stw r9, 0x80(r1)
    stw r8, 0x84(r1)
    stw r0, 0x88(r1)
    stw r8, 0x8c(r1)
    stw r29, 0x90(r1)
    stw r26, 0x94(r1)
    bl IOS_Ioctlv
    lwz r27, 0xc0(r1)
    cmpwi r27, 0x0
    ble lbl_80337F50
    cmplw r27, r26
    add r25, r25, r27
    bge lbl_80337F44
    mr r3, r31
    bl IOS_Close
    mr r3, r25
    b lbl_80338038
lbl_80337F44:
    add r29, r29, r27
    subf r30, r27, r30
    b lbl_80337F70
lbl_80337F50:
    mr r3, r31
    bl IOS_Close
    cmpwi r25, 0x0
    ble lbl_80337F68
    mr r3, r25
    b lbl_80338038
lbl_80337F68:
    mr r3, r27
    b lbl_80338038
lbl_80337F70:
    cmpwi r30, 0x0
    beq lbl_80338020
    clrlwi. r26, r30, 27
    beq lbl_80338020
    addi r3, r1, 0x140
    li r4, 0x0
    li r5, 0x20
    bl memset
    mr r4, r29
    mr r5, r26
    addi r3, r1, 0x140
    bl memcpy
    li r9, 0x20
    addi r10, r1, 0x60
    addi r8, r1, 0x40
    addi r0, r1, 0x140
    li r4, -0x1
    stw r28, 0x40(r1)
    mr r3, r31
    addi r7, r1, 0x20
    stw r4, 0x60(r1)
    li r4, 0x5
    li r5, 0x1
    li r6, 0x2
    stw r10, 0x20(r1)
    stw r9, 0x24(r1)
    stw r8, 0x28(r1)
    stw r9, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r26, 0x34(r1)
    bl IOS_Ioctlv
    lwz r27, 0x60(r1)
    cmpwi r27, 0x0
    ble lbl_80338000
    add r25, r25, r27
    b lbl_80338020
lbl_80338000:
    mr r3, r31
    bl IOS_Close
    cmpwi r25, 0x0
    ble lbl_80338018
    mr r3, r25
    b lbl_80338038
lbl_80338018:
    mr r3, r27
    b lbl_80338038
lbl_80338020:
    cmpwi r25, 0x0
    ble lbl_8033802C
    mr r27, r25
lbl_8033802C:
    mr r3, r31
    bl IOS_Close
    mr r3, r27
lbl_80338038:
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_25
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80338054
asm s32 fn_80338054() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xa0
    stwux r1, r1, r11
    mflr r0
    lis r4, lbl_8038F0D8@ha
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    mr r30, r3
    addi r3, r4, lbl_8038F0D8@l
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    mr r31, r3
    bge lbl_8033809C
    li r3, -0x1
    b lbl_803380E4
lbl_8033809C:
    li r8, 0x20
    addi r9, r1, 0x20
    addi r0, r1, 0x40
    li r6, -0x1
    stw r6, 0x20(r1)
    addi r7, r1, 0x60
    li r4, 0x6
    li r5, 0x1
    stw r30, 0x40(r1)
    li r6, 0x1
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r0, 0x68(r1)
    stw r8, 0x6c(r1)
    bl IOS_Ioctlv
    mr r3, r31
    bl IOS_Close
    lwz r3, 0x20(r1)
lbl_803380E4:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80338100
asm s32 fn_80338100() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xa0
    stwux r1, r1, r11
    mflr r0
    mr r11, r12
    stw r0, 0x4(r12)
    bl _savegpr_24
    lis r31, lbl_804703A0@ha
    lis r8, lbl_8038F0D8@ha
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    addi r31, r31, lbl_804703A0@l
    addi r3, r8, lbl_8038F0D8@l
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    mr r29, r3
    bge lbl_80338160
    li r3, -0x1
    b lbl_80338250
lbl_80338160:
    bl OSDisableInterrupts
    lwz r0, lbl_8049E5CC
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_803381B4
    addi r3, r31, 0x0
    bl fn_80338544
    addi r3, r31, 0x20
    li r4, 0x0
    li r5, 0x1000
    bl memset
    addi r3, r31, 0x1020
    li r4, 0x0
    li r5, 0x1000
    bl memset
    addi r3, r31, 0x2020
    li r4, 0x0
    li r5, 0x1000
    bl memset
    li r0, 0x1
    stw r0, lbl_8049E5CC
lbl_803381B4:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r3, r31, 0x0
    bl fn_80338548
    mr r4, r25
    mr r5, r26
    addi r3, r31, 0x20
    bl memcpy
    mr r4, r27
    mr r5, r28
    addi r3, r31, 0x1020
    bl memcpy
    li r10, 0x20
    addi r11, r1, 0x40
    addi r9, r1, 0x20
    addi r8, r31, 0x20
    addi r0, r31, 0x1020
    li r3, -0x1
    stw r3, 0x40(r1)
    mr r3, r29
    addi r7, r1, 0x60
    li r4, 0x7
    stw r24, 0x20(r1)
    li r5, 0x1
    li r6, 0x3
    stw r11, 0x60(r1)
    stw r10, 0x64(r1)
    stw r9, 0x68(r1)
    stw r10, 0x6c(r1)
    stw r8, 0x70(r1)
    stw r26, 0x74(r1)
    stw r0, 0x78(r1)
    stw r28, 0x7c(r1)
    bl IOS_Ioctlv
    addi r3, r31, 0x0
    bl fn_8033854C
    mr r3, r29
    bl IOS_Close
    lwz r3, 0x40(r1)
lbl_80338250:
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_24
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_8033826C
asm s32 fn_8033826C() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xa0
    stwux r1, r1, r11
    mflr r0
    mr r11, r12
    stw r0, 0x4(r12)
    bl _savegpr_26
    lis r31, lbl_804703A0@ha
    lis r6, lbl_8038F0D8@ha
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r31, r31, lbl_804703A0@l
    addi r3, r6, lbl_8038F0D8@l
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    mr r29, r3
    bge lbl_803382C4
    li r3, -0x1
    b lbl_80338398
lbl_803382C4:
    bl OSDisableInterrupts
    lwz r0, lbl_8049E5CC
    mr r30, r3
    cmpwi r0, 0x0
    bne lbl_80338318
    addi r3, r31, 0x0
    bl fn_80338544
    addi r3, r31, 0x20
    li r4, 0x0
    li r5, 0x1000
    bl memset
    addi r3, r31, 0x1020
    li r4, 0x0
    li r5, 0x1000
    bl memset
    addi r3, r31, 0x2020
    li r4, 0x0
    li r5, 0x1000
    bl memset
    li r0, 0x1
    stw r0, lbl_8049E5CC
lbl_80338318:
    mr r3, r30
    bl OSRestoreInterrupts
    addi r3, r31, 0x0
    bl fn_80338548
    mr r4, r27
    mr r5, r28
    addi r3, r31, 0x2020
    bl memcpy
    li r9, 0x20
    addi r10, r1, 0x40
    addi r8, r1, 0x20
    addi r0, r31, 0x2020
    li r4, -0x1
    stw r26, 0x20(r1)
    mr r3, r29
    addi r7, r1, 0x60
    stw r4, 0x40(r1)
    li r4, 0xa
    li r5, 0x1
    li r6, 0x2
    stw r10, 0x60(r1)
    stw r9, 0x64(r1)
    stw r8, 0x68(r1)
    stw r9, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r28, 0x74(r1)
    bl IOS_Ioctlv
    addi r3, r31, 0x0
    bl fn_8033854C
    mr r3, r29
    bl IOS_Close
    lwz r3, 0x40(r1)
lbl_80338398:
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_26
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_803383B4
asm s32 fn_803383B4() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xc0
    stwux r1, r1, r11
    mflr r0
    lis r5, lbl_8038F0D8@ha
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    mr r30, r4
    li r4, 0x0
    stw r29, -0xc(r12)
    mr r29, r3
    addi r3, r5, lbl_8038F0D8@l
    bl IOS_Open
    cmpwi r3, 0x0
    mr r31, r3
    bge lbl_80338404
    li r3, -0x1
    b lbl_8033845C
lbl_80338404:
    li r9, 0x20
    addi r10, r1, 0x60
    addi r8, r1, 0x40
    addi r0, r1, 0x20
    li r5, -0x1
    stw r29, 0x40(r1)
    addi r7, r1, 0x80
    li r4, 0xd
    stw r5, 0x60(r1)
    li r5, 0x1
    li r6, 0x2
    stw r30, 0x20(r1)
    stw r10, 0x80(r1)
    stw r9, 0x84(r1)
    stw r8, 0x88(r1)
    stw r9, 0x8c(r1)
    stw r0, 0x90(r1)
    stw r9, 0x94(r1)
    bl IOS_Ioctlv
    mr r3, r31
    bl IOS_Close
    lwz r3, 0x60(r1)
lbl_8033845C:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_8033847C
asm s32 fn_8033847C() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xc0
    stwux r1, r1, r11
    mflr r0
    lis r5, lbl_8038F0D8@ha
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    mr r30, r4
    li r4, 0x0
    stw r29, -0xc(r12)
    mr r29, r3
    addi r3, r5, lbl_8038F0D8@l
    bl IOS_Open
    cmpwi r3, 0x0
    mr r31, r3
    bge lbl_803384CC
    li r3, -0x1
    b lbl_80338524
lbl_803384CC:
    li r9, 0x20
    addi r10, r1, 0x60
    addi r8, r1, 0x40
    addi r0, r1, 0x20
    li r5, -0x1
    stw r29, 0x40(r1)
    addi r7, r1, 0x80
    li r4, 0xe
    stw r5, 0x60(r1)
    li r5, 0x1
    li r6, 0x2
    stw r30, 0x20(r1)
    stw r10, 0x80(r1)
    stw r9, 0x84(r1)
    stw r8, 0x88(r1)
    stw r9, 0x8c(r1)
    stw r0, 0x90(r1)
    stw r9, 0x94(r1)
    bl IOS_Ioctlv
    mr r3, r31
    bl IOS_Close
    lwz r3, 0x60(r1)
lbl_80338524:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_80338550
asm void fn_80338550() {
    nofralloc
    mr r9, r3
    b lbl_80338564
lbl_80338558:
    stb r4, 0x0(r9)
    addi r9, r9, 0x1
    subi r5, r5, 0x1
lbl_80338564:
    clrlwi. r0, r9, 30
    beq lbl_80338574
    cmpwi r5, 0x0
    bne lbl_80338558
lbl_80338574:
    slwi r7, r4, 8
    cmplwi r5, 0x3
    or r8, r4, r7
    slwi r6, r4, 24
    slwi r0, r4, 16
    srwi r7, r5, 2
    or r0, r6, r0
    or r8, r8, r0
    ble lbl_803385F0
    srwi. r6, r7, 3
    slwi r0, r7, 2
    neg r0, r0
    mtctr r6
    beq lbl_803385DC
lbl_803385AC:
    stw r8, 0x0(r9)
    stw r8, 0x4(r9)
    stw r8, 0x8(r9)
    stw r8, 0xc(r9)
    stw r8, 0x10(r9)
    stw r8, 0x14(r9)
    stw r8, 0x18(r9)
    stw r8, 0x1c(r9)
    addi r9, r9, 0x20
    bdnz lbl_803385AC
    andi. r7, r7, 0x7
    beq lbl_803385EC
lbl_803385DC:
    mtctr r7
lbl_803385E0:
    stw r8, 0x0(r9)
    addi r9, r9, 0x4
    bdnz lbl_803385E0
lbl_803385EC:
    add r5, r5, r0
lbl_803385F0:
    cmpwi r5, 0x0
    beqlr
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_80338634
lbl_80338604:
    stb r4, 0x0(r9)
    stb r4, 0x1(r9)
    stb r4, 0x2(r9)
    stb r4, 0x3(r9)
    stb r4, 0x4(r9)
    stb r4, 0x5(r9)
    stb r4, 0x6(r9)
    stb r4, 0x7(r9)
    addi r9, r9, 0x8
    bdnz lbl_80338604
    andi. r5, r5, 0x7
    beqlr
lbl_80338634:
    mtctr r5
lbl_80338638:
    stb r4, 0x0(r9)
    addi r9, r9, 0x1
    bdnz lbl_80338638
    blr
}

void fn_80338654(u32 arg0, u16 *arg1, u16 *arg2) {
    *arg1 = arg0 >> 16;
    *arg2 = arg0;
}

// asm_to_cpp: fn_80338664
asm s32 fn_80338664(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0xbcc
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_804733C0@ha
    addi r3, r31, lbl_804733C0@l
    bl fn_80338550
    addi r7, r31, lbl_804733C0@l
    li r6, 0x0
    stw r6, 0x1b8(r7)
    li r0, 0x18
    mulli r3, r0, 0x38
    stw r6, 0x1f0(r7)
    stw r6, 0x228(r7)
    add r5, r7, r3
    mulli r0, r0, 0x2c
    li r3, 0x0
    stw r6, 0x260(r7)
    stw r6, 0x298(r7)
    add r4, r7, r0
    stw r6, 0x2d0(r7)
    stw r6, 0x308(r7)
    stw r6, 0x340(r7)
    stw r6, 0x378(r7)
    stw r6, 0x3b0(r7)
    stw r6, 0x3e8(r7)
    stw r6, 0x420(r7)
    stw r6, 0x458(r7)
    stw r6, 0x490(r7)
    stw r6, 0x4c8(r7)
    stw r6, 0x500(r7)
    stw r6, 0x538(r7)
    stw r6, 0x570(r7)
    stw r6, 0x5a8(r7)
    stw r6, 0x5e0(r7)
    stw r6, 0x618(r7)
    stw r6, 0x650(r7)
    stw r6, 0x688(r7)
    stw r6, 0x6c0(r7)
    stw r6, 0x1b8(r5)
    stw r6, 0x1f0(r5)
    stw r6, 0x764(r7)
    stw r6, 0x790(r7)
    stw r6, 0x7bc(r7)
    stw r6, 0x7e8(r7)
    stw r6, 0x814(r7)
    stw r6, 0x840(r7)
    stw r6, 0x86c(r7)
    stw r6, 0x898(r7)
    stw r6, 0x8c4(r7)
    stw r6, 0x8f0(r7)
    stw r6, 0x91c(r7)
    stw r6, 0x948(r7)
    stw r6, 0x974(r7)
    stw r6, 0x9a0(r7)
    stw r6, 0x9cc(r7)
    stw r6, 0x9f8(r7)
    stw r6, 0xa24(r7)
    stw r6, 0xa50(r7)
    stw r6, 0xa7c(r7)
    stw r6, 0xaa8(r7)
    stw r6, 0xad4(r7)
    stw r6, 0xb00(r7)
    stw r6, 0xb2c(r7)
    stw r6, 0xb58(r7)
    stw r6, 0x764(r4)
    stw r6, 0x790(r4)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80338790
asm s32 fn_80338790(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    rlwinm. r0, r3, 0, 16, 13
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    beq lbl_803387C4
    lis r4, lbl_80473F90@ha
    li r0, 0xa
    addi r4, r4, lbl_80473F90@l
    li r3, 0xa
    stw r0, 0x1c(r4)
    b lbl_80338904
lbl_803387C4:
    rlwinm r5, r3, 0, 14, 15
    subis r0, r5, 0x3
    cmplwi r0, 0x0
    bne lbl_803387EC
    lis r4, lbl_80473F90@ha
    li r0, 0xa
    addi r4, r4, lbl_80473F90@l
    li r3, 0xa
    stw r0, 0x1c(r4)
    b lbl_80338904
lbl_803387EC:
    rlwinm. r5, r3, 0, 15, 15
    beq lbl_8033880C
    lis r3, lbl_80473F90@ha
    addi r3, r3, lbl_80473F90@l
    lwz r0, 0x14(r3)
    oris r0, r0, 0x1
    stw r0, 0x14(r3)
    b lbl_80338820
lbl_8033880C:
    lis r3, lbl_80473F90@ha
    addi r3, r3, lbl_80473F90@l
    lwz r0, 0x14(r3)
    rlwinm r0, r0, 0, 16, 14
    stw r0, 0x14(r3)
lbl_80338820:
    lis r7, lbl_80473F90@ha
    cmpwi r5, 0x0
    lwz r3, lbl_80473F90@l(r7)
    addi r6, r7, lbl_80473F90@l
    li r0, 0x0
    addi r5, r6, 0x48
    ori r3, r3, 0x1
    stw r5, 0x8(r6)
    stw r3, lbl_80473F90@l(r7)
    stw r0, 0xc(r6)
    stw r0, 0x10(r6)
    beq lbl_80338860
    lwz r0, 0x14(r6)
    oris r0, r0, 0x1
    stw r0, 0x14(r6)
    b lbl_8033886C
lbl_80338860:
    lwz r0, 0x14(r6)
    rlwinm r0, r0, 0, 16, 14
    stw r0, 0x14(r6)
lbl_8033886C:
    lis r11, lbl_80473F90@ha
    lis r9, VFiPFCODE_CP932_OEM2Unicode@ha
    addi r11, r11, lbl_80473F90@l
    li r10, 0x0
    lis r8, VFiPFCODE_CP932_Unicode2OEM@ha
    lis r7, VFiPFCODE_CP932_OEMCharWidth@ha
    lis r6, VFiPFCODE_CP932_isOEMMBchar@ha
    lis r5, VFiPFCODE_CP932_isUnicodeMBchar@ha
    lis r3, fn_80338DF8@ha
    addi r9, r9, VFiPFCODE_CP932_OEM2Unicode@l
    addi r8, r8, VFiPFCODE_CP932_Unicode2OEM@l
    addi r7, r7, VFiPFCODE_CP932_OEMCharWidth@l
    addi r6, r6, VFiPFCODE_CP932_isOEMMBchar@l
    addi r5, r5, VFiPFCODE_CP932_isUnicodeMBchar@l
    addi r3, r3, fn_80338DF8@l
    li r0, 0x1
    stw r4, 0x18(r11)
    addi r31, r11, 0x48
    li r30, 0x0
    stw r10, 0x1c(r11)
    stw r10, 0x20(r11)
    stw r0, 0x3c(r11)
    stw r9, 0x24(r11)
    stw r8, 0x28(r11)
    stw r7, 0x2c(r11)
    stw r6, 0x30(r11)
    stw r5, 0x34(r11)
    stw r3, 0x38(r11)
lbl_803388DC:
    mr r3, r31
    li r4, 0x0
    li r5, 0x1880
    bl fn_80338550
    addi r30, r30, 0x1
    addi r31, r31, 0x1880
    cmpwi r30, 0x1a
    blt lbl_803388DC
    bl fn_80338E50
    li r3, 0x0
lbl_80338904:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
