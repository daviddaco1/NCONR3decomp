#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern M2C_UNK lbl_80348620;
extern M2C_UNK lbl_80348644;
extern M2C_UNK lbl_80348650;
extern M2C_UNK lbl_80348674;
extern M2C_UNK lbl_80348680;
extern M2C_UNK lbl_803486B8;
extern M2C_UNK lbl_803486D0;
extern M2C_UNK lbl_803486F0;
extern M2C_UNK lbl_80348700;
extern M2C_UNK lbl_80348720;
extern M2C_UNK lbl_80348730;
extern M2C_UNK lbl_80348750;
extern M2C_UNK lbl_80348760;
extern M2C_UNK lbl_80348780;
extern M2C_UNK lbl_8034878C;
extern M2C_UNK lbl_803C22B0;
extern s32 lbl_8049D4B8;
extern M2C_UNK lbl_8049E8C0;

s32 fn_800389F8();
void fn_80038AB8();
void fn_80038EB4();
s32 fn_800393B0();
s32 fn_80039424();
s32 fn_8003946C();
void fn_800394E4();
s32 fn_80039598();
void fn_8003976C();
void fn_80039898();
void fn_80039A68();
void fn_80039B48();
s32 fn_80039C24();
s32 fn_80039C64();
s32 fn_80039C9C();
s32 * fn_80039CD0();
s32 fn_80039D00();
s32 * fn_80039D40();
s32 fn_80039D70();
s32 fn_80039DC4();
s32 fn_80039DE8();
s32 * fn_80039E38();
s32 fn_80039E68();
s32 fn_80039E9C();
s32 fn_80039EA4();
s32 fn_80039EAC();
s32 fn_80039EC0();
s32 fn_80039EC8();
s8 * fn_80039ED0();
s32 fn_80039EE8();
u16 fn_80039F10();
s32 fn_80039F18();
s32 fn_80039F2C();
void fn_80039F34();
void fn_80039FB0();
void fn_8003A030();
void fn_8003A0B8();
s32 ** fn_8003A130();
void fn_8003A160();
s32 * fn_8003A16C();
s32 fn_8003A174();
u32 fn_8003A184();
void fn_8003A18C();

// fn_800389F8: definicion C reemplazada por asm (ver abajo)


void fn_80038AB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

void fn_80038EB4(M2C_UNK arg_sp0);

s32 fn_800393B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);

s32 fn_80039424(s32 arg0);

s32 fn_8003946C(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);


s32 fn_80039598(void);

void fn_8003976C(M2C_UNK arg_sp0);

void fn_80039898(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);

void fn_80039A68(M2C_UNK arg_sp0);

void fn_80039B48(M2C_UNK arg_sp0);

s32 fn_80039C24(s32 *arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    sp8 = *arg1;
    spC = *arg0;
    return fn_80039C64(&spC, &sp8) == 0;
}

s32 fn_80039C64(s32 *arg0, s32 *arg1) {
    s32 spC;
    s32 sp8;

    sp8 = *arg1;
    spC = *arg0;
    return fn_80028E40(&spC, &sp8);
}

s32 fn_80039C9C(s32 arg0) {
    s32 spC;
    s32 sp8;

    sp8 = fn_80028EC8(arg0);
    return *fn_80039CD0(&spC, (s32) &sp8);
}

s32 *fn_80039CD0(s32 *arg0, s32 arg1) {
    fn_80028EBC(arg0, (s32 *) arg1);
    return arg0;
}

s32 fn_80039D00(s32 *arg0, s32 arg1) {
    s32 sp8;

    fn_80039E38(&sp8, (s32) arg0);
    fn_80039D40(arg0);
    return sp8;
}

s32 *fn_80039D40(s32 *arg0) {
    fn_80028F70((s32 **) arg0);
    return arg0;
}

// fn_80039D70: definicion C reemplazada por asm (ver abajo)


s32 fn_80039DC4(s32 arg0) {
    return fn_80039DE8(fn_80029024((s32 *) arg0));
}

// fn_80039DE8: definicion C reemplazada por asm (ver abajo)


s32 *fn_80039E38(s32 *arg0, s32 arg1) {
    fn_80028EBC(arg0, (s32 *) arg1);
    return arg0;
}

// fn_80039E68: definicion C reemplazada por asm (ver abajo)


// fn_80039E9C: definicion C reemplazada por asm (ver abajo)


// fn_80039EA4: definicion C reemplazada por asm (ver abajo)


s32 fn_80039EAC(s8 *arg0, s32 arg1) {
    return (M2C_FIELD(arg0, s32 *, 0xF4) & arg1) != 0;
}

s32 fn_80039EC0(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 fn_80039EC8(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

s8 *fn_80039ED0(s8 *arg0) {
    return M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x1C) + (M2C_FIELD(arg0, u16 *, 0x20) * 0x10)), s8 **, 4);
}

s32 fn_80039EE8(s32 *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 4) != 0)) {
        var_r4 = 1;
    }
    return var_r4;
}

u16 fn_80039F10(u16 *arg0) {
    return *arg0;
}

// fn_80039F18: definicion C reemplazada por asm (ver abajo)


s32 fn_80039F2C(s32 arg0) {
    return arg0 + 0x2878;
}


// fn_80039FB0: definicion C reemplazada por asm (ver abajo)



// fn_8003A0B8: definicion C reemplazada por asm (ver abajo)


s32 **fn_8003A130(s32 **arg0, s32 arg1) {
    fn_8003A160((s32 *) arg0, (s32 *) arg1);
    return arg0;
}

void fn_8003A160(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

s32 *fn_8003A16C(s32 **arg0) {
    return *arg0;
}

s32 fn_8003A174(s32 **arg0) {
    return *arg0 != NULL;
}

u32 fn_8003A184(s8 *arg0) {
    return M2C_FIELD(arg0, u32 *, 0x10);
}

void fn_8003A18C(s32 arg0, s32 arg1, s32 arg2) {
    fn_8003C244((s8 *) arg0, arg1, arg2, 0);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void GetLightSet__Q34nw4r3g3d7ScnRootFi();
extern void Init__Q34nw4r3g3d3FogFv();
extern void Init__Q34nw4r3g3d6CameraFv();
extern void SetCurrentCamera__Q34nw4r3g3d7ScnRootFi();
extern void _restgpr_25();
extern void _restgpr_28();
extern void _restgpr_29();
extern void _savegpr_25();
extern void _savegpr_28();
extern void _savegpr_29();
extern void fn_8002AB78();
extern void fn_8002AF5C();
extern void fn_8002E854();
extern void fn_80030E80();
extern void fn_80031208();
extern void fn_80034AD0();
extern void fn_80036620();
extern void fn_80036774();
extern void fn_80036878();
extern void fn_800368C8();
extern void fn_80037B4C();
s32 fn_800389F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_80038AB8();
void fn_80038EB4();
s32 fn_800393B0();
s32 fn_80039424();
s32 fn_8003946C();
void fn_800394E4();
s32 fn_80039598();
void fn_8003976C();
void fn_80039898();
void fn_80039A68();
void fn_80039B48();
s32 fn_80039D70(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 fn_80039DE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 fn_80039E68(s32 arg0);
s32 fn_80039E9C(s32 arg0);
s32 fn_80039EA4(s32 arg0);
s32 fn_80039F18(s32 *arg0);
void fn_80039F34();
void fn_80039FB0(s32 **arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void fn_8003A030();
void fn_8003A0B8(s32 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern void fn_8003AC4C();
extern void fn_8003C34C();
extern void fn_8003C394();
extern void fn_801A9384();

// asm_to_cpp: fn_800389F8
asm s32 fn_800389F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, lbl_8049D4B8
    li r6, 0x0
    clrrwi r5, r31, 24
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    beq lbl_80038A74
    clrrwi r4, r31, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_80038A74
    clrrwi r3, r31, 27
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_80038A74
    addis r0, r5, 0x4000
    cmplwi r0, 0x0
    beq lbl_80038A74
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_80038A74
    addis r0, r3, 0x3000
    cmplwi r0, 0x0
    beq lbl_80038A74
    clrrwi r3, r31, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    bne lbl_80038A78
lbl_80038A74:
    li r6, 0x1
lbl_80038A78:
    cmpwi r6, 0x0
    bne lbl_80038AA0
    lis r3, lbl_803486B8@ha
    addi r3, r3, lbl_803486B8@l
    li r4, 0x35
    lis r5, lbl_80348680@ha
    addi r5, r5, lbl_80348680@l
    mr r6, r31
    opword 0x4CC63182
    bl fn_801A9384
lbl_80038AA0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80038AB8
asm void fn_80038AB8() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    addi r11, r1, 0x50
    bl _savegpr_25
    bl fn_800389F8
    mr r28, r3
    bl fn_80033A08
    mr r27, r3
    bl fn_800443B4
    mr r26, r3
    li r25, 0x1
    mr r3, r28
    bl fn_80037B4C
    mr r3, r27
    bl fn_80033370
    stw r3, 0x1c(r1)
    addi r3, r1, 0x24
    addi r4, r1, 0x1c
    bl fn_80032F9C
    lis r29, 0x80
    la r31, lbl_8049E8C0
    b lbl_80038DC0
lbl_80038B1C:
    addi r3, r1, 0x24
    bl fn_80032F28
    addi r4, r29, 0x11
    bl fn_800311BC
    cmpwi r3, 0x0
    beq lbl_80038DB4
    addi r3, r1, 0x24
    bl fn_80032F28
    li r4, 0x40
    bl fn_800311BC
    cmplwi r3, 0x1
    beq lbl_80038DB4
    addi r3, r1, 0x24
    bl fn_80032F28
    bl fn_800314AC
    mr r30, r3
    addi r3, r1, 0x24
    bl fn_80032F28
    li r4, 0x8
    bl fn_800311BC
    cmpwi r3, 0x0
    beq lbl_80038B7C
    sth r25, 0xe8(r30)
    addi r25, r25, 0x1
lbl_80038B7C:
    li r30, 0x1
    addi r3, r1, 0x24
    bl fn_80032F28
    lis r4, 0x20
    bl fn_800311BC
    cmpwi r3, 0x0
    beq lbl_80038D70
    lfs f31, lbl_8049E8C0
    bl fn_801714F0
    cmpwi r3, 0x0
    beq lbl_80038BC4
    bl fn_801719B8
    cmpwi r3, 0x0
    bne lbl_80038BB8
    li r30, 0x0
lbl_80038BB8:
    cmpwi r3, 0x0
    beq lbl_80038BC4
    lfs f31, 0x4(r31)
lbl_80038BC4:
    cmpwi r30, 0x0
    beq lbl_80038D70
    addi r3, r1, 0x24
    bl fn_80032F28
    bl fn_8002AD70
    li r4, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80038C08
    fmr f1, f31
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_80038C08:
    addi r3, r1, 0x24
    bl fn_80032F28
    bl fn_8002AD70
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80038C44
    fmr f1, f31
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_80038C44:
    addi r3, r1, 0x24
    bl fn_80032F28
    bl fn_8002AD70
    li r4, 0x2
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80038C80
    fmr f1, f31
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_80038C80:
    addi r3, r1, 0x24
    bl fn_80032F28
    bl fn_8002AD70
    li r4, 0x3
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80038CBC
    fmr f1, f31
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_80038CBC:
    addi r3, r1, 0x24
    bl fn_80032F28
    bl fn_8002AD70
    li r4, 0x4
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80038CF8
    fmr f1, f31
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_80038CF8:
    addi r3, r1, 0x24
    bl fn_80032F28
    bl fn_8002AD70
    li r4, 0x5
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80038D34
    fmr f1, f31
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_80038D34:
    addi r3, r1, 0x24
    bl fn_80032F28
    bl fn_8002AD70
    li r4, 0x6
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80038D70
    fmr f1, f31
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_80038D70:
    cmpwi r30, 0x0
    beq lbl_80038DB4
    addi r3, r1, 0x24
    bl fn_80032F28
    bl fn_8002AD70
    li r4, 0x8
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x24
    bl fn_80032F28
    bl fn_8002ED88
    mr r4, r3
    mr r3, r28
    bl fn_80037948
lbl_80038DB4:
    addi r3, r1, 0x24
    li r4, 0x0
    bl fn_80032D08
lbl_80038DC0:
    mr r3, r27
    bl fn_80033368
    stw r3, 0x14(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    addi r4, r1, 0x14
    bl fn_80032C2C
    cmpwi r3, 0x0
    bne lbl_80038B1C
    clrlwi r0, r25, 16
    cmplwi r0, 0x20
    blt lbl_80038E0C
    lis r3, lbl_8034878C@ha
    addi r3, r3, lbl_8034878C@l
    li r4, 0xb1
    addi r5, r3, 0x16
    opword 0x4CC63182
    bl fn_801A9384
lbl_80038E0C:
    mr r3, r26
    bl fn_80039EA4
    stw r3, 0x10(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x10
    bl fn_80039E38
    b lbl_80038E60
lbl_80038E28:
    addi r3, r1, 0x20
    bl fn_80039DC4
    li r4, 0x1
    bl fn_80039EAC
    cmpwi r3, 0x0
    beq lbl_80038E54
    addi r3, r1, 0x20
    bl fn_80039D70
    mr r4, r3
    mr r3, r28
    bl fn_80037948
lbl_80038E54:
    addi r3, r1, 0x20
    li r4, 0x0
    bl fn_80039D00
lbl_80038E60:
    mr r3, r26
    bl fn_80039E9C
    stw r3, 0x8(r1)
    lwz r0, 0x20(r1)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80039C24
    cmpwi r3, 0x0
    bne lbl_80038E28
    mr r3, r28
    bl fn_80036620
    li r0, 0x58
    opword 0x13E1000C
    lfd f31, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_25
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_80038EB4
asm void fn_80038EB4() {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xd0
    bl _savegpr_28
    bl fn_800389F8
    mr r30, r3
    bl fn_80033A08
    mr r29, r3
    bl fn_800443B4
    mr r28, r3
    addi r3, r1, 0x6c
    bl fn_8002AF5C
    mr r3, r30
    bl fn_80039ED0
    mr r31, r3
    mr r3, r30
    bl fn_8002ADF8
    mr r4, r31
    bl GetCamera__Q34nw4r3g3d7ScnRootFi
    stw r3, 0x50(r1)
    addi r3, r1, 0x78
    addi r4, r1, 0x50
    bl fn_80037F7C
    mr r3, r30
    bl fn_800381E0
    cmpwi r3, 0x0
    beq lbl_80039070
    mr r3, r30
    bl fn_80037B4C
    mr r3, r29
    bl fn_80033370
    stw r3, 0x4c(r1)
    addi r3, r1, 0x68
    addi r4, r1, 0x4c
    bl fn_80032F9C
    b lbl_80038FAC
lbl_80038F48:
    addi r3, r1, 0x68
    bl fn_80032F28
    li r4, 0x1
    bl fn_800311BC
    cmpwi r3, 0x0
    beq lbl_80038FA0
    addi r3, r1, 0x68
    bl fn_80032F28
    li r4, 0x2
    bl fn_800311BC
    cmpwi r3, 0x0
    beq lbl_80038FA0
    addi r3, r1, 0x68
    bl fn_80032F28
    li r4, 0x4000
    bl fn_80031208
    addi r3, r1, 0x68
    bl fn_80032F28
    bl fn_8002ED88
    mr r4, r3
    mr r3, r30
    bl fn_80037948
lbl_80038FA0:
    addi r3, r1, 0x68
    li r4, 0x0
    bl fn_80032D08
lbl_80038FAC:
    mr r3, r29
    bl fn_80033368
    stw r3, 0x44(r1)
    lwz r0, 0x68(r1)
    stw r0, 0x48(r1)
    addi r3, r1, 0x48
    addi r4, r1, 0x44
    bl fn_80032C2C
    cmpwi r3, 0x0
    bne lbl_80038F48
    mr r3, r28
    bl fn_80039EA4
    stw r3, 0x40(r1)
    addi r3, r1, 0x64
    addi r4, r1, 0x40
    bl fn_80039E38
    b lbl_80039040
lbl_80038FF0:
    addi r3, r1, 0x64
    bl fn_80039DC4
    li r4, 0x1
    bl fn_80039EAC
    cmpwi r3, 0x0
    beq lbl_80039034
    addi r3, r1, 0x64
    bl fn_80039DC4
    li r4, 0x4
    bl fn_80039EAC
    cmpwi r3, 0x0
    beq lbl_80039034
    addi r3, r1, 0x64
    bl fn_80039D70
    mr r4, r3
    mr r3, r30
    bl fn_80037948
lbl_80039034:
    addi r3, r1, 0x64
    li r4, 0x0
    bl fn_80039D00
lbl_80039040:
    mr r3, r28
    bl fn_80039E9C
    stw r3, 0x38(r1)
    lwz r0, 0x64(r1)
    stw r0, 0x3c(r1)
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    bl fn_80039C24
    cmpwi r3, 0x0
    bne lbl_80038FF0
    mr r3, r30
    bl fn_80037400
lbl_80039070:
    mr r3, r30
    bl fn_800381F0
    cmpwi r3, 0x0
    beq lbl_80039214
    mr r3, r30
    bl fn_80039EC8
    li r4, 0x1
    bl fn_800389D8
    cmpwi r3, 0x0
    beq lbl_80039214
    mr r3, r30
    bl fn_80037B4C
    mr r3, r29
    bl fn_80033370
    stw r3, 0x34(r1)
    addi r3, r1, 0x60
    addi r4, r1, 0x34
    bl fn_80032F9C
    b lbl_80039168
lbl_800390BC:
    addi r3, r1, 0x60
    bl fn_80032F28
    li r4, 0x10
    bl fn_800311BC
    cmpwi r3, 0x0
    beq lbl_8003915C
    addi r3, r1, 0x60
    bl fn_80032F28
    li r4, 0x20
    bl fn_800311BC
    cntlzw r0, r3
    srwi r3, r0, 5
    cmpwi r3, 0x0
    beq lbl_80039114
    addi r3, r1, 0x60
    bl fn_80032F28
    bl fn_800314AC
    mr r31, r3
    addi r3, r1, 0x60
    bl fn_80032F28
    addi r4, r1, 0x6c
    bl fn_8002FE04
lbl_80039114:
    cmplwi r3, 0x1
    bne lbl_80039134
    addi r3, r1, 0x78
    addi r4, r1, 0x6c
    lfs f1, 0x44(r31)
    bl fn_80037E44
    cmpwi r3, 0x0
    beq lbl_8003915C
lbl_80039134:
    addi r3, r1, 0x60
    bl fn_80032F28
    li r4, 0x4000
    bl fn_80034AD0
    addi r3, r1, 0x60
    bl fn_80032F28
    bl fn_8002ED88
    mr r4, r3
    mr r3, r30
    bl fn_80037948
lbl_8003915C:
    addi r3, r1, 0x60
    li r4, 0x0
    bl fn_80032D08
lbl_80039168:
    mr r3, r29
    bl fn_80033368
    stw r3, 0x2c(r1)
    lwz r0, 0x60(r1)
    stw r0, 0x30(r1)
    addi r3, r1, 0x30
    addi r4, r1, 0x2c
    bl fn_80032C2C
    cmpwi r3, 0x0
    bne lbl_800390BC
    mr r3, r28
    bl fn_80039EA4
    stw r3, 0x28(r1)
    addi r3, r1, 0x5c
    addi r4, r1, 0x28
    bl fn_80039E38
    b lbl_800391E4
lbl_800391AC:
    addi r3, r1, 0x5c
    bl fn_80039DC4
    li r4, 0x20
    bl fn_80039EAC
    cmpwi r3, 0x0
    beq lbl_800391D8
    addi r3, r1, 0x5c
    bl fn_80039D70
    mr r4, r3
    mr r3, r30
    bl fn_80037948
lbl_800391D8:
    addi r3, r1, 0x5c
    li r4, 0x0
    bl fn_80039D00
lbl_800391E4:
    mr r3, r28
    bl fn_80039E9C
    stw r3, 0x20(r1)
    lwz r0, 0x5c(r1)
    stw r0, 0x24(r1)
    addi r3, r1, 0x24
    addi r4, r1, 0x20
    bl fn_80039C24
    cmpwi r3, 0x0
    bne lbl_800391AC
    mr r3, r30
    bl fn_800377A8
lbl_80039214:
    mr r3, r30
    bl fn_80038160
    cmpwi r3, 0x0
    beq lbl_80039228
    bl fn_8003976C
lbl_80039228:
    mr r3, r30
    bl fn_80037B4C
    mr r3, r29
    bl fn_80033370
    stw r3, 0x1c(r1)
    addi r3, r1, 0x58
    addi r4, r1, 0x1c
    bl fn_80032F9C
    lis r31, 0x400
    b lbl_800392B4
lbl_80039250:
    addi r3, r1, 0x58
    bl fn_80032F28
    li r4, 0x1
    bl fn_800311BC
    cmpwi r3, 0x0
    beq lbl_800392A8
    addi r3, r1, 0x58
    bl fn_80032F28
    lis r4, 0x200
    bl fn_800311BC
    cmplwi r3, 0x1
    beq lbl_800392A8
    addi r3, r1, 0x58
    bl fn_80032F28
    addi r4, r31, 0x4000
    bl fn_80034AD0
    addi r3, r1, 0x58
    bl fn_80032F28
    bl fn_8002ED88
    mr r4, r3
    mr r3, r30
    bl fn_80037948
lbl_800392A8:
    addi r3, r1, 0x58
    li r4, 0x0
    bl fn_80032D08
lbl_800392B4:
    mr r3, r29
    bl fn_80033368
    stw r3, 0x14(r1)
    lwz r0, 0x58(r1)
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    addi r4, r1, 0x14
    bl fn_80032C2C
    cmpwi r3, 0x0
    bne lbl_80039250
    mr r3, r28
    bl fn_80039EA4
    stw r3, 0x10(r1)
    addi r3, r1, 0x54
    addi r4, r1, 0x10
    bl fn_80039E38
    b lbl_80039330
lbl_800392F8:
    addi r3, r1, 0x54
    bl fn_80039DC4
    li r4, 0x1
    bl fn_80039EAC
    cmpwi r3, 0x0
    beq lbl_80039324
    addi r3, r1, 0x54
    bl fn_80039D70
    mr r4, r3
    mr r3, r30
    bl fn_80037948
lbl_80039324:
    addi r3, r1, 0x54
    li r4, 0x0
    bl fn_80039D00
lbl_80039330:
    mr r3, r28
    bl fn_80039E9C
    stw r3, 0x8(r1)
    lwz r0, 0x54(r1)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80039C24
    cmpwi r3, 0x0
    bne lbl_800392F8
    mr r3, r30
    bl fn_80036774
    mr r3, r30
    bl fn_80036FD8
    mr r3, r30
    bl fn_800378E4
    mr r3, r30
    bl fn_80037520
    mr r3, r30
    bl fn_800370C4
    mr r3, r30
    bl fn_800368C8
    mr r3, r30
    bl fn_80036878
    mr r3, r30
    bl fn_8003738C
    addi r11, r1, 0xd0
    bl _restgpr_28
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// asm_to_cpp: fn_800393B0
asm s32 fn_800393B0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_800389F8
    li r0, 0x0
    stw r0, 0xc(r1)
    mr r4, r31
    bl fn_80036918
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8002AB78
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl_8003940C
    lis r3, lbl_8034878C@ha
    addi r3, r3, lbl_8034878C@l
    li r4, 0x1e6
    addi r5, r3, 0x4e
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003940C:
    lwz r3, 0xc(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80039424
asm s32 fn_80039424() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800389F8
    mr r4, r31
    lwz r12, 0x4(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    subic r0, r3, 0x1
    subfe r3, r0, r3
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003946C
asm s32 fn_8003946C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bl fn_800389F8
    bl fn_8002ADF8
    mr r4, r3
    addi r3, r1, 0x8
    mr r5, r29
    bl GetLightSet__Q34nw4r3g3d7ScnRootFi
    addi r3, r1, 0x8
    bl fn_80039EE8
    cmpwi r3, 0x0
    beq lbl_800394C8
    addi r3, r1, 0x8
    mr r4, r30
    mr r5, r31
    bl SelectLightObj__Q34nw4r3g3d8LightSetFUli
    b lbl_800394CC
lbl_800394C8:
    li r3, 0x0
lbl_800394CC:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800394E4
asm void fn_800394E4() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x38(r1)
    stfd f30, 0x30(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    fmr f30, f1
    fmr f31, f2
    mr r31, r5
    bl fn_800389F8
    bl fn_8002ADF8
    mr r4, r29
    bl GetFog__Q34nw4r3g3d7ScnRootFi
    stw r3, 0xc(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    bl fn_8003A130
    addi r3, r1, 0x10
    bl Init__Q34nw4r3g3d3FogFv
    addi r3, r1, 0x10
    mr r4, r30
    bl fn_8003A0B8
    addi r3, r1, 0x10
    fmr f1, f30
    fmr f2, f31
    bl fn_8003A030
    lwz r0, 0x0(r31)
    stw r0, 0x8(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x8
    bl fn_80039FB0
    addi r3, r1, 0x10
    li r4, 0x1
    bl fn_80039F34
    lfd f31, 0x38(r1)
    lfd f30, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80039598
asm s32 fn_80039598() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r0, lbl_8049D4B8
    cmpwi r0, 0x0
    bne lbl_80039754
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    addi r31, r3, 0x60
    mr r3, r31
    addi r4, r1, 0x10
    li r5, 0x18
    li r6, 0x200
    li r7, 0xc00
    li r8, 0x8
    li r9, 0x8
    bl fn_8003625C
    stw r3, lbl_8049D4B8
    cmpwi r31, 0x0
    beq lbl_8003974C
    li r5, 0x1
    li r7, 0x1
    li r8, 0x1
    li r9, 0x1
    li r10, 0x1
    li r11, 0x1
    mr r6, r3
    clrrwi r12, r3, 24
    addis r0, r12, 0x8000
    cmplwi r0, 0x0
    beq lbl_8003962C
    clrrwi r4, r3, 23
    addis r0, r4, 0x7f00
    cmplwi r0, 0x0
    beq lbl_8003962C
    li r11, 0x0
lbl_8003962C:
    cmpwi r11, 0x0
    bne lbl_80039648
    clrrwi r4, r3, 27
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_80039648
    li r10, 0x0
lbl_80039648:
    cmpwi r10, 0x0
    bne lbl_80039660
    addis r0, r12, 0x4000
    cmplwi r0, 0x0
    beq lbl_80039660
    li r9, 0x0
lbl_80039660:
    cmpwi r9, 0x0
    bne lbl_8003967C
    clrrwi r4, r3, 23
    addis r0, r4, 0x3f00
    cmplwi r0, 0x0
    beq lbl_8003967C
    li r8, 0x0
lbl_8003967C:
    cmpwi r8, 0x0
    bne lbl_80039698
    clrrwi r4, r3, 27
    addis r0, r4, 0x3000
    cmplwi r0, 0x0
    beq lbl_80039698
    li r7, 0x0
lbl_80039698:
    cmpwi r7, 0x0
    bne lbl_800396B4
    clrrwi r3, r3, 14
    addis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_800396B4
    li r5, 0x0
lbl_800396B4:
    cmpwi r5, 0x0
    bne lbl_800396D4
    lis r3, lbl_8034878C@ha
    addi r3, r3, lbl_8034878C@l
    li r4, 0x31f
    addi r5, r3, 0x73
    opword 0x4CC63182
    bl fn_801A9384
lbl_800396D4:
    lwz r3, lbl_8049D4B8
    bl fn_8002ADF8
    mr r31, r3
    li r4, 0x0
    bl SetCurrentCamera__Q34nw4r3g3d7ScnRootFi
    mr r3, r31
    bl GetCurrentCamera__Q34nw4r3g3d7ScnRootFv
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_8002AFB4
    addi r3, r1, 0xc
    bl Init__Q34nw4r3g3d6CameraFv
    bl GetRenderModeObj__Q34nw4r3g3d8G3DStateFv
    mr r6, r3
    li r3, 0x8
    li r4, 0x1
    lhz r5, 0x4(r6)
    lhz r6, 0x6(r6)
    li r7, 0x6
    li r8, 0x0
    li r9, 0x3
    bl fn_80035DD8
    li r3, 0x1
    li r4, 0x280
    li r5, 0x1e0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_8003D1B0
lbl_8003974C:
    li r3, 0x1
    b lbl_80039758
lbl_80039754:
    li r3, 0x0
lbl_80039758:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8003976C
asm void fn_8003976C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    bl fn_800389F8
    mr r31, r3
    bl fn_80033A08
    mr r3, r31
    bl fn_80034AC8
    mr r30, r3
    li r4, 0x1
    bl fn_80038068
    cmpwi r3, 0x0
    bne lbl_800397D0
    mr r3, r30
    li r4, 0x4
    bl fn_80038068
    cmpwi r3, 0x0
    beq lbl_80039880
    mr r3, r30
    li r4, 0x4
    bl fn_8003C394
    bl fn_80039B48
    b lbl_80039880
lbl_800397D0:
    li r29, 0x1
    li r28, 0x0
    b lbl_80039870
lbl_800397DC:
    mr r3, r30
    mr r4, r28
    li r5, 0x1
    bl fn_80038124
    cmpwi r3, 0x0
    beq lbl_8003986C
    mr r3, r30
    li r4, 0x4
    bl fn_80038068
    cmpwi r3, 0x0
    bne lbl_80039818
    mr r3, r30
    li r4, 0x4
    bl fn_8003C34C
    bl fn_80039A68
lbl_80039818:
    mr r3, r31
    bl fn_80037B4C
    mr r3, r30
    mr r4, r28
    li r5, 0x10
    bl fn_80038124
    cmpwi r3, 0x0
    beq lbl_8003984C
    mr r3, r29
    li r4, 0x1
    mr r5, r28
    bl fn_80039898
    b lbl_8003985C
lbl_8003984C:
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl fn_80039898
lbl_8003985C:
    mr r3, r31
    mr r4, r28
    bl fn_80037584
    li r29, 0x0
lbl_8003986C:
    addi r28, r28, 0x1
lbl_80039870:
    mr r3, r30
    bl fn_8003A184
    cmplw r28, r3
    blt lbl_800397DC
lbl_80039880:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80039898
asm void fn_80039898() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    bl fn_800389F8
    mr r29, r3
    bl fn_80033A08
    mr r28, r3
    bl fn_80033370
    stw r3, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_80032F9C
    b lbl_80039A28
lbl_800398E0:
    addi r3, r1, 0x14
    bl fn_80032F28
    li r4, 0x1
    bl fn_800311BC
    cmpwi r3, 0x0
    beq lbl_80039A1C
    addi r3, r1, 0x14
    bl fn_80032F28
    li r4, 0x8
    bl fn_800311BC
    cmpwi r3, 0x0
    beq lbl_80039A1C
    cmpwi r25, 0x0
    beq lbl_80039928
    addi r3, r1, 0x14
    bl fn_80032F28
    li r4, 0x4000
    bl fn_80034AD0
lbl_80039928:
    cmpwi r26, 0x0
    beq lbl_80039948
    addi r3, r1, 0x14
    bl fn_80032F28
    bl fn_800314AC
    lhz r0, 0xe6(r3)
    cmpw r27, r0
    bne lbl_80039A1C
lbl_80039948:
    addi r3, r1, 0x14
    bl fn_80032F28
    lis r4, 0x400
    bl fn_80031208
    addi r3, r1, 0x14
    bl fn_80032F28
    bl fn_800311D0
    cmpwi r3, 0x0
    beq lbl_800399D0
    addi r3, r1, 0x14
    bl fn_80032F28
    lis r4, 0x2000
    bl fn_800311BC
    mr r30, r3
    addi r3, r1, 0x14
    bl fn_80032F28
    bl fn_800314AC
    mr r31, r3
    addi r3, r1, 0x14
    bl fn_80032F28
    bl fn_80039EC0
    lhz r4, 0xe8(r31)
    mr r5, r30
    bl fn_8003AC4C
    addi r3, r1, 0x14
    bl fn_80032F28
    bl fn_8002E854
    addi r3, r1, 0x14
    bl fn_80032F28
    bl fn_80039EC0
    mr r4, r3
    mr r3, r29
    bl fn_80037A60
    b lbl_80039A1C
lbl_800399D0:
    addi r3, r1, 0x14
    bl fn_80032F28
    lis r4, 0x200
    bl fn_800311BC
    cmpwi r3, 0x0
    beq lbl_80039A04
    addi r3, r1, 0x14
    bl fn_80032F28
    bl fn_8002ED88
    mr r4, r3
    mr r3, r29
    bl fn_80037A60
    b lbl_80039A1C
lbl_80039A04:
    addi r3, r1, 0x14
    bl fn_80032F28
    bl fn_8002ED88
    mr r4, r3
    mr r3, r29
    bl fn_80037948
lbl_80039A1C:
    addi r3, r1, 0x14
    li r4, 0x0
    bl fn_80032D08
lbl_80039A28:
    mr r3, r28
    bl fn_80033368
    stw r3, 0x8(r1)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80032C2C
    cmpwi r3, 0x0
    bne lbl_800398E0
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80039A68
asm void fn_80039A68() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    bl fn_800389F8
    mr r31, r3
    bl fn_80033A08
    mr r30, r3
    mr r3, r31
    bl fn_80034AC8
    mr r29, r3
    mr r3, r30
    bl fn_80033370
    stw r3, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_80032F9C
    b lbl_80039B08
lbl_80039AB4:
    addi r3, r1, 0x14
    bl fn_80032F28
    lis r4, 0x100
    bl fn_800311BC
    cmpwi r3, 0x0
    beq lbl_80039AFC
    addi r3, r1, 0x14
    bl fn_80032F28
    bl fn_8002AD70
    mr r31, r3
    addi r3, r1, 0x14
    bl fn_80032F28
    bl fn_800314AC
    lhz r4, 0xe6(r3)
    mr r3, r29
    mr r5, r31
    li r6, 0x1
    bl fn_8003C244
lbl_80039AFC:
    addi r3, r1, 0x14
    li r4, 0x0
    bl fn_80032D08
lbl_80039B08:
    mr r3, r30
    bl fn_80033368
    stw r3, 0x8(r1)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80032C2C
    cmpwi r3, 0x0
    bne lbl_80039AB4
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80039B48
asm void fn_80039B48() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    bl fn_800389F8
    mr r31, r3
    bl fn_80033A08
    mr r30, r3
    mr r3, r31
    bl fn_80034AC8
    mr r29, r3
    mr r3, r30
    bl fn_80033370
    stw r3, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_80032F9C
    b lbl_80039BE4
lbl_80039B94:
    addi r3, r1, 0x14
    bl fn_80032F28
    lis r4, 0x100
    bl fn_800311BC
    cmpwi r3, 0x0
    beq lbl_80039BD8
    addi r3, r1, 0x14
    bl fn_80032F28
    bl fn_8002AD70
    mr r31, r3
    addi r3, r1, 0x14
    bl fn_80032F28
    bl fn_800314AC
    lhz r4, 0xe6(r3)
    mr r3, r29
    mr r5, r31
    bl fn_8003A18C
lbl_80039BD8:
    addi r3, r1, 0x14
    li r4, 0x0
    bl fn_80032D08
lbl_80039BE4:
    mr r3, r30
    bl fn_80033368
    stw r3, 0x8(r1)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80032C2C
    cmpwi r3, 0x0
    bne lbl_80039B94
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80039D70
asm s32 fn_80039D70(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_80039DC4
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80039DAC
    lis r3, lbl_80348644@ha
    addi r3, r3, lbl_80348644@l
    li r4, 0x193
    lis r5, lbl_80348620@ha
    addi r5, r5, lbl_80348620@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80039DAC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80039DE8
asm s32 fn_80039DE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80039E20
    lis r3, lbl_80348674@ha
    addi r3, r3, lbl_80348674@l
    li r4, 0x23d
    lis r5, lbl_80348650@ha
    addi r5, r5, lbl_80348650@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80039E20:
    subi r3, r31, 0xfc
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80039E68
asm s32 fn_80039E68(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80029090
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_80039CD0
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80039E9C
asm s32 fn_80039E9C(s32 arg0) {
    nofralloc
    addi r3, r3, 0x14
    b fn_80039C9C
}

// asm_to_cpp: fn_80039EA4
asm s32 fn_80039EA4(s32 arg0) {
    nofralloc
    addi r3, r3, 0x14
    b fn_80039E68
}

// asm_to_cpp: fn_80039F18
asm s32 fn_80039F18(s32 *arg0) {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r3, r0, 0, 30, 30
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
}

// asm_to_cpp: fn_80039F34
asm void fn_80039F34() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8003A174
    cmpwi r3, 0x0
    bne lbl_80039F78
    lis r3, lbl_80348780@ha
    addi r3, r3, lbl_80348780@l
    li r4, 0x75
    lis r5, lbl_80348760@ha
    addi r5, r5, lbl_80348760@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80039F78:
    mr r3, r30
    bl fn_8003A174
    cmpwi r3, 0x0
    beq lbl_80039F98
    clrlwi r31, r31, 24
    mr r3, r30
    bl fn_8003A16C
    stb r31, 0x18(r3)
lbl_80039F98:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80039FB0
asm void fn_80039FB0(s32 **arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8003A174
    cmpwi r3, 0x0
    bne lbl_80039FF4
    lis r3, lbl_80348750@ha
    addi r3, r3, lbl_80348750@l
    li r4, 0x63
    lis r5, lbl_80348730@ha
    addi r5, r5, lbl_80348730@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_80039FF4:
    mr r3, r30
    bl fn_8003A174
    cmpwi r3, 0x0
    beq lbl_8003A018
    mr r3, r30
    bl fn_8003A16C
    addi r3, r3, 0x14
    mr r4, r31
    bl fn_80030E80
lbl_8003A018:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8003A030
asm void fn_8003A030() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stfd f30, 0x10(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    fmr f30, f1
    fmr f31, f2
    bl fn_8003A174
    cmpwi r3, 0x0
    bne lbl_8003A07C
    lis r3, lbl_80348720@ha
    addi r3, r3, lbl_80348720@l
    li r4, 0x4b
    lis r5, lbl_80348700@ha
    addi r5, r5, lbl_80348700@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003A07C:
    mr r3, r31
    bl fn_8003A174
    cmpwi r3, 0x0
    beq lbl_8003A09C
    mr r3, r31
    bl fn_8003A16C
    stfs f30, 0x4(r3)
    stfs f31, 0x8(r3)
lbl_8003A09C:
    lfd f31, 0x18(r1)
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8003A0B8
asm void fn_8003A0B8(s32 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    bl fn_8003A174
    cmpwi r3, 0x0
    bne lbl_8003A0FC
    lis r3, lbl_803486F0@ha
    addi r3, r3, lbl_803486F0@l
    li r4, 0x41
    lis r5, lbl_803486D0@ha
    addi r5, r5, lbl_803486D0@l
    opword 0x4CC63182
    bl fn_801A9384
lbl_8003A0FC:
    mr r3, r30
    bl fn_8003A174
    cmpwi r3, 0x0
    beq lbl_8003A118
    mr r3, r30
    bl fn_8003A16C
    stw r31, 0x0(r3)
lbl_8003A118:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
