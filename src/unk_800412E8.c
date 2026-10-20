#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK GXSetVtxAttrFmt(); /* extern */
M2C_UNK GXSetVtxDesc();             /* extern */
M2C_UNK fn_800169F4();                       /* extern */
M2C_UNK fn_80016A44();                       /* extern */
s8 *fn_80016CAC();                         /* extern */
M2C_UNK fn_80173580();     /* extern */
M2C_UNK memset();                   /* extern */
extern M2C_UNK lbl_803C1A40;
extern s32 **lbl_8049D664;
extern f32 lbl_8049E9E0;

s8 * fn_800412E8();
void fn_800414C0();
s32 fn_8004151C();
void fn_80041930();
void fn_80041B54();
void fn_80041CC4();
void fn_80041DF0();
void fn_80042050();
void fn_80042140();
void fn_8004238C();
void fn_80042390();
void fn_800423A0();
void fn_800423C8();


void fn_800414C0(s8 *arg0) {
    s8 *temp_r31;

    temp_r31 = M2C_FIELD(arg0, s8 **, 0x14);
    if (temp_r31 != NULL) {
        fn_80170E84(fn_8010E6AC(0), temp_r31);
        M2C_FIELD(arg0, s8 **, 0x14) = NULL;
    }
    fn_8017776C((s32) arg0);
}

// fn_8004151C: definicion C reemplazada por asm (ver abajo)


void fn_80041930(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);

void fn_80041B54(s8 *arg0, s32 arg1, s32 arg2, s32 arg3);

void fn_80041CC4(s8 *arg0, s32 arg1, s32 arg2);

void fn_80041DF0(s8 *arg0);

void fn_80042050(s8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 8) != 0) && (fn_80016C30(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 4)) == 0)) {
        fn_800169F4(0);
        fn_800163E4(M2C_FIELD(arg0, s32 *, 4), 6);
        GXLoadTexObj(M2C_FIELD(arg0, s8 **, 0x58), 0);
        GXClearVtxDesc();
        GXSetVtxDesc(9, 1);
        GXSetVtxDesc(0xB, 1);
        GXSetVtxDesc(0xD, 1);
        GXSetVtxAttrFmt(0, 9, 1, 4, 0);
        GXSetVtxAttrFmt(0, 0xB, 1, 5, 0);
        GXSetVtxAttrFmt(0, 0xD, 1, 4, 0);
        fn_80042140(arg0);
        fn_80016A44(0);
        fn_80016A94(0);
    }
}

void fn_80042140(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

void fn_8004238C(void) {

}




// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049E9D0;
extern float lbl_8049E9D8;
extern void _restgpr_25();
extern void _restgpr_27();
extern void _restgpr_28();
extern void _restgpr_29();
extern void _savegpr_25();
extern void _savegpr_27();
extern void _savegpr_28();
extern void _savegpr_29();
extern void fn_80018AF8();
extern void fn_80018B00();
extern void fn_80018B08();
extern void fn_8001B8B0();
extern void fn_8001B8B8();
extern void fn_8001B978();
extern void fn_8001D9D0();
extern void fn_8001F9C8();
s8 * fn_800412E8();
s32 fn_8004151C(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);
void fn_80041930();
void fn_80041B54();
void fn_80041CC4();
void fn_80041DF0();
void fn_80042140();
void fn_80042390();
void fn_800423A0();
void fn_800423C8();
extern void fn_8010E9A4();
extern void fn_8017742C();
extern void fn_8017B074();

// asm_to_cpp: fn_800412E8
asm s8 * fn_800412E8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r31, r7
    mr r29, r8
    li r3, 0x12
    lis r4, fn_8004151C@ha
    addi r4, r4, fn_8004151C@l
    lwz r5, lbl_8049D664
    bl fn_80177280
    mr r30, r3
    cmpwi r3, 0x0
    bne lbl_8004133C
    li r3, 0x0
    b lbl_800414A8
lbl_8004133C:
    li r4, 0x0
    li r5, 0x90
    bl memset
    cmpwi r25, 0x0
    beq lbl_80041354
    stw r25, 0x18(r30)
lbl_80041354:
    li r0, 0x0
    stw r0, 0x10(r30)
    lwz r0, 0x4(r29)
    stw r0, 0xc(r30)
    mullw r0, r28, r31
    extsh r0, r0
    sth r0, 0x5c(r30)
    extsh r0, r28
    sth r0, 0x5e(r30)
    extsh r0, r31
    sth r0, 0x60(r30)
    lfs f0, lbl_8049E9E0
    stfs f0, 0x88(r30)
    lha r0, 0x5c(r30)
    stw r0, 0x6c(r30)
    mr r3, r26
    lwz r4, 0x38(r29)
    bl fn_80019E14
    stw r3, 0x28(r30)
    mr r3, r27
    lwz r4, 0x48(r29)
    bl fn_80019E14
    stw r3, 0x2c(r30)
    addi r3, r30, 0x38
    la r31, lbl_8049E9E0
    lfs f0, 0x3c(r29)
    lfs f3, 0x4(r31)
    fmuls f1, f3, f0
    lfs f0, 0x40(r29)
    fmuls f2, f3, f0
    lfs f0, 0x44(r29)
    fmuls f3, f3, f0
    bl fn_80018B0C
    addi r3, r30, 0x44
    lfs f0, 0x4c(r29)
    lfs f3, 0x4(r31)
    fmuls f1, f3, f0
    lfs f0, 0x50(r29)
    fmuls f2, f3, f0
    lfs f0, 0x54(r29)
    fmuls f3, f3, f0
    bl fn_80018B0C
    li r3, 0x0
    bl fn_8010E6AC
    slwi r4, r28, 4
    lha r0, 0x5c(r30)
    mulli r0, r0, 0xc
    add r4, r4, r0
    li r5, 0x4
    bl fn_80170E2C
    stw r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_8004149C
    stw r3, 0x14(r30)
    addi r3, r1, 0x8
    lha r0, 0x5e(r30)
    mulli r4, r0, 0xc
    bl fn_8001B9D4
    stw r3, 0x30(r30)
    addi r3, r1, 0x8
    lha r0, 0x5e(r30)
    slwi r4, r0, 2
    bl fn_8001B9D4
    stw r3, 0x50(r30)
    addi r3, r1, 0x8
    lha r0, 0x5c(r30)
    mulli r4, r0, 0xc
    bl fn_8001B9D4
    stw r3, 0x34(r30)
    li r3, 0x10
    lwz r4, 0xc(r30)
    mr r5, r30
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    beq lbl_80041494
    cmpwi r30, 0x0
    beq lbl_80041494
    mr r3, r30
    bl fn_800414C0
lbl_80041494:
    mr r3, r30
    b lbl_800414A8
lbl_8004149C:
    mr r3, r30
    bl fn_800414C0
    li r3, 0x0
lbl_800414A8:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8004151C
asm s32 fn_8004151C(s8 *arg0, s32 arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_80041644
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_80041558
    li r0, 0xf1
    stw r0, 0x8(r3)
    li r3, 0x1
    b lbl_80041918
lbl_80041558:
    rlwinm r0, r4, 0, 23, 27
    cmpwi r0, 0x0
    beq lbl_8004156C
    li r3, 0x1
    b lbl_80041918
lbl_8004156C:
    rlwinm r0, r4, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8004163C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x28(r4)
    cmpwi cr1, r0, 0x3e9
    bne cr1, lbl_800415D0
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_800415A4
    cmpwi r0, 0xff
    beq lbl_800415BC
    b lbl_800415D0
lbl_800415A4:
    bne cr1, lbl_800415D0
    li r0, 0xf1
    stw r0, 0x8(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_80041918
lbl_800415BC:
    li r0, 0xf1
    stw r0, 0x8(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_80041918
lbl_800415D0:
    lwz r3, 0x18(r3)
    cmpwi r3, 0x0
    beq lbl_8004163C
    bl fn_80019D1C
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r0, 0x24(r4)
    cmpw r0, r3
    bne lbl_8004163C
    lwz r3, 0x28(r4)
    lwz r0, 0x20(r31)
    cmplw r3, r0
    bne lbl_8004163C
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_8004161C
    cmpwi r0, 0x1
    beq lbl_80041628
    b lbl_80041630
lbl_8004161C:
    li r0, 0xf1
    stw r0, 0x8(r31)
    b lbl_80041630
lbl_80041628:
    li r0, 0xef
    stw r0, 0x8(r31)
lbl_80041630:
    bl fn_8017742C
    li r3, 0x1
    b lbl_80041918
lbl_8004163C:
    li r3, 0x0
    b lbl_80041918
lbl_80041644:
    lwz r3, 0x18(r3)
    addi r4, r31, 0x4
    lwz r5, 0x8(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_80041668
    cmpwi r3, 0x2
    beq lbl_80041674
    b lbl_8004167C
lbl_80041668:
    li r0, 0xef
    stw r0, 0x8(r31)
    b lbl_8004167C
lbl_80041674:
    li r0, 0xf1
    stw r0, 0x8(r31)
lbl_8004167C:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x1
    beq lbl_80041690
    cmpwi r0, 0xf0
    bne lbl_800416AC
lbl_80041690:
    lwz r3, 0x18(r31)
    lwz r4, 0x4(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_800416AC
    li r3, 0x0
    b lbl_80041918
lbl_800416AC:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_800416DC
    cmpwi r0, 0x1
    beq lbl_80041754
    cmpwi r0, 0xef
    beq lbl_800417FC
    cmpwi r0, 0xf0
    beq lbl_80041828
    cmpwi r0, 0xf1
    beq lbl_80041900
    b lbl_80041914
lbl_800416DC:
    li r29, 0x0
    li r30, 0x0
    b lbl_80041704
lbl_800416E8:
    lwz r0, 0x30(r31)
    add r3, r0, r30
    lwz r4, 0x28(r31)
    addi r5, r31, 0x38
    bl fn_80018AF8
    addi r29, r29, 0x1
    addi r30, r30, 0xc
lbl_80041704:
    lha r0, 0x5e(r31)
    cmpw r29, r0
    blt lbl_800416E8
    li r29, 0x0
    li r30, 0x0
    b lbl_80041738
lbl_8004171C:
    lwz r0, 0x34(r31)
    add r3, r0, r30
    lwz r4, 0x28(r31)
    addi r5, r31, 0x38
    bl fn_80018AF8
    addi r29, r29, 0x1
    addi r30, r30, 0xc
lbl_80041738:
    lha r0, 0x5c(r31)
    cmpw r29, r0
    blt lbl_8004171C
    li r0, 0x1
    stw r0, 0x8(r31)
    cmpwi r0, 0x1
    bne lbl_80041914
lbl_80041754:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_80041774
    cmpwi r0, 0x1
    beq lbl_800417A0
    cmpwi r0, 0x2
    beq lbl_800417C8
    b lbl_800417D0
lbl_80041774:
    mr r3, r31
    bl fn_80041930
    lwz r3, 0x78(r31)
    addi r3, r3, 0x1
    stw r3, 0x78(r31)
    lwz r0, 0x74(r31)
    cmpw r3, r0
    ble lbl_800417D0
    li r0, 0x1
    stw r0, 0x10(r31)
    b lbl_800417D0
lbl_800417A0:
    mr r3, r31
    bl fn_80041B54
    lwz r3, 0x7c(r31)
    subi r0, r3, 0x1
    stw r0, 0x7c(r31)
    cmpwi r0, 0x0
    bgt lbl_800417D0
    li r0, 0x2
    stw r0, 0x10(r31)
    b lbl_800417D0
lbl_800417C8:
    mr r3, r31
    bl fn_80041CC4
lbl_800417D0:
    lwz r3, 0x68(r31)
    cmpwi r3, -0x1
    ble lbl_800417E4
    subi r0, r3, 0x1
    stw r0, 0x68(r31)
lbl_800417E4:
    lwz r0, 0x68(r31)
    cmpwi r0, 0x0
    bne lbl_80041914
    li r0, 0xef
    stw r0, 0x8(r31)
    b lbl_80041914
lbl_800417FC:
    li r0, 0xf0
    stw r0, 0x8(r31)
    lwz r3, 0x6c(r31)
    stw r3, 0x68(r31)
    li r0, 0x0
    stw r0, 0x20(r31)
    cmpwi r3, 0x0
    bne lbl_80041828
    li r0, 0xf1
    stw r0, 0x8(r31)
    b lbl_80041914
lbl_80041828:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_80041848
    cmpwi r0, 0x1
    beq lbl_80041874
    cmpwi r0, 0x2
    beq lbl_8004189C
    b lbl_800418A4
lbl_80041848:
    mr r3, r31
    bl fn_80041930
    lwz r3, 0x78(r31)
    addi r3, r3, 0x1
    stw r3, 0x78(r31)
    lwz r0, 0x74(r31)
    cmpw r3, r0
    ble lbl_800418A4
    li r0, 0x1
    stw r0, 0x10(r31)
    b lbl_800418A4
lbl_80041874:
    mr r3, r31
    bl fn_80041B54
    lwz r3, 0x7c(r31)
    subi r0, r3, 0x1
    stw r0, 0x7c(r31)
    cmpwi r0, 0x0
    bgt lbl_800418A4
    li r0, 0x2
    stw r0, 0x10(r31)
    b lbl_800418A4
lbl_8004189C:
    mr r3, r31
    bl fn_80041CC4
lbl_800418A4:
    lwz r4, 0x68(r31)
    lfd f2, lbl_8049E9D0
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lwz r0, 0x6c(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x88(r31)
    subi r0, r4, 0x1
    stw r0, 0x68(r31)
    cmpwi r0, 0x0
    bge lbl_80041914
    li r0, 0xf1
    stw r0, 0x8(r31)
    b lbl_80041914
lbl_80041900:
    lwz r3, 0xc(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r31
    bl fn_800414C0
lbl_80041914:
    li r3, 0x0
lbl_80041918:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80041930
asm void fn_80041930() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    addi r11, r1, 0x70
    bl _savegpr_28
    mr r31, r3
    lis r0, 0x4330
    stw r0, 0x50(r1)
    lis r0, 0x4330
    stw r0, 0x58(r1)
    addi r3, r1, 0x38
    lwz r4, 0x28(r31)
    addi r5, r31, 0x38
    bl fn_80018AF8
    addi r3, r1, 0x44
    lwz r4, 0x2c(r31)
    addi r5, r31, 0x44
    bl fn_80018AF8
    addi r3, r1, 0x2c
    addi r4, r1, 0x38
    addi r5, r1, 0x44
    la r29, lbl_8049E9E0
    lfs f1, 0x8(r29)
    bl fn_8001D9D0
    lwz r0, 0x78(r31)
    lfd f2, lbl_8049E9D0
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f1, f0, f2
    lwz r0, 0x74(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f2
    fdivs f30, f1, f0
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    lfs f0, lbl_8049E9E0
    fsubs f0, f0, f30
    fmuls f1, f0, f0
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r1, 0x2c
    lfs f0, lbl_8049E9E0
    fsubs f1, f0, f30
    lfs f0, 0xc(r29)
    fmuls f0, f0, f1
    fmuls f1, f0, f30
    bl fn_80018B08
    addi r3, r1, 0x8
    addi r4, r1, 0x44
    fmuls f1, f30, f30
    bl fn_80018B08
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r1, 0x14
    bl fn_80018B00
    addi r3, r1, 0x44
    addi r4, r1, 0x20
    addi r5, r1, 0x8
    bl fn_80018B00
    lha r3, 0x5e(r31)
    subi r0, r3, 0x1
    lfd f31, lbl_8049E9D0
    xoris r0, r0, 0x8000
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f1, f0, f31
    lfs f0, lbl_8049E9E0
    fdivs f30, f0, f1
    li r28, 0x0
    li r29, 0x0
    b lbl_80041A98
lbl_80041A68:
    lwz r0, 0x30(r31)
    add r3, r0, r29
    addi r4, r1, 0x38
    addi r5, r1, 0x44
    xoris r0, r28, 0x8000
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f31
    fmuls f1, f0, f30
    bl fn_8001D9D0
    addi r28, r28, 0x1
    addi r29, r29, 0xc
lbl_80041A98:
    lha r0, 0x5e(r31)
    cmpw r28, r0
    blt lbl_80041A68
    li r28, 0x0
    li r30, 0x0
    li r29, 0x0
    b lbl_80041B10
lbl_80041AB4:
    subi r0, r3, 0x1
    cmpw r28, r0
    bge lbl_80041AE4
    lwz r4, 0x30(r31)
    add r3, r4, r30
    addi r0, r28, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_8001D9AC
    lwz r3, 0x50(r31)
    stfsx f1, r3, r29
    b lbl_80041B04
lbl_80041AE4:
    lwz r4, 0x30(r31)
    add r3, r4, r30
    subi r0, r28, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_8001D9AC
    lwz r3, 0x50(r31)
    stfsx f1, r3, r29
lbl_80041B04:
    addi r28, r28, 0x1
    addi r30, r30, 0xc
    addi r29, r29, 0x4
lbl_80041B10:
    lha r3, 0x5e(r31)
    cmpw r28, r3
    blt lbl_80041AB4
    mr r3, r31
    bl fn_80041DF0
    li r0, 0x88
    opword 0x13E1000C
    lfd f31, 0x80(r1)
    li r0, 0x78
    opword 0x13C1000C
    lfd f30, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_28
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_80041B54
asm void fn_80041B54() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    addi r11, r1, 0x40
    bl _savegpr_28
    mr r31, r3
    addi r3, r1, 0x8
    lwz r4, 0x28(r31)
    addi r5, r31, 0x38
    bl fn_80018AF8
    addi r3, r1, 0x14
    lwz r4, 0x2c(r31)
    addi r5, r31, 0x44
    bl fn_80018AF8
    lha r3, 0x5e(r31)
    subi r0, r3, 0x1
    lfd f31, lbl_8049E9D0
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lis r30, 0x4330
    stw r30, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f31
    lfs f0, lbl_8049E9E0
    fdivs f30, f0, f1
    li r28, 0x0
    li r29, 0x0
    b lbl_80041C08
lbl_80041BD4:
    lwz r0, 0x30(r31)
    add r3, r0, r29
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    xoris r0, r28, 0x8000
    stw r0, 0x24(r1)
    stw r30, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f31
    fmuls f1, f0, f30
    bl fn_8001D9D0
    addi r28, r28, 0x1
    addi r29, r29, 0xc
lbl_80041C08:
    lha r0, 0x5e(r31)
    cmpw r28, r0
    blt lbl_80041BD4
    li r28, 0x0
    li r30, 0x0
    li r29, 0x0
    b lbl_80041C80
lbl_80041C24:
    subi r0, r3, 0x1
    cmpw r28, r0
    bge lbl_80041C54
    lwz r4, 0x30(r31)
    add r3, r4, r30
    addi r0, r28, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_8001D9AC
    lwz r3, 0x50(r31)
    stfsx f1, r3, r29
    b lbl_80041C74
lbl_80041C54:
    lwz r4, 0x30(r31)
    add r3, r4, r30
    subi r0, r28, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_8001D9AC
    lwz r3, 0x50(r31)
    stfsx f1, r3, r29
lbl_80041C74:
    addi r28, r28, 0x1
    addi r30, r30, 0xc
    addi r29, r29, 0x4
lbl_80041C80:
    lha r3, 0x5e(r31)
    cmpw r28, r3
    blt lbl_80041C24
    mr r3, r31
    bl fn_80041DF0
    li r0, 0x58
    opword 0x13E1000C
    lfd f31, 0x50(r1)
    li r0, 0x48
    opword 0x13C1000C
    lfd f30, 0x40(r1)
    addi r11, r1, 0x40
    bl _restgpr_28
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_80041CC4
asm void fn_80041CC4() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    lwz r3, 0x30(r3)
    lwz r4, 0x28(r27)
    addi r5, r27, 0x38
    bl fn_80018AF8
    li r28, 0x1
    li r31, 0xc
    li r30, 0x4
    la r3, lbl_8049E9E0
    lfs f31, 0x14(r3)
    b lbl_80041DAC
lbl_80041D14:
    lwz r0, 0x30(r27)
    add r3, r0, r31
    lfs f0, 0x80(r27)
    fmuls f1, f31, f0
    lfs f0, 0x4(r3)
    fsubs f0, f0, f1
    stfs f0, 0x4(r3)
    subi r0, r28, 0x1
    mulli r29, r0, 0xc
    lwz r0, 0x30(r27)
    addi r3, r1, 0x8
    add r4, r0, r31
    add r5, r0, r29
    bl fn_8001B8B8
    addi r3, r1, 0x8
    bl fn_8001B8BC
    fmr f30, f1
    lwz r3, 0x50(r27)
    lfsx f0, r3, r30
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80041D70
    fmr f30, f0
lbl_80041D70:
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    addi r3, r1, 0x8
    mr r4, r3
    fmr f1, f30
    bl fn_80018B08
    lwz r0, 0x30(r27)
    add r3, r0, r31
    addi r4, r1, 0x8
    add r5, r0, r29
    bl fn_80018B00
    addi r28, r28, 0x1
    addi r31, r31, 0xc
    addi r30, r30, 0x4
lbl_80041DAC:
    lha r0, 0x5e(r27)
    cmpw r28, r0
    blt lbl_80041D14
    mr r3, r27
    bl fn_80041DF0
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    li r0, 0x38
    opword 0x13C1000C
    lfd f30, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80041DF0
asm void fn_80041DF0() {
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
    addi r11, r1, 0x60
    bl _savegpr_27
    mr r29, r3
    li r30, 0x0
    li r31, 0x0
    li r28, 0x0
    lfd f29, lbl_8049E9D0
    lis r27, 0x4330
    lfs f30, lbl_8049E9E0
    la r3, lbl_8049E9E0
    lfs f31, 0x8(r3)
    b lbl_80042008
lbl_80041E44:
    cmpwi r31, 0x0
    bne lbl_80041E88
    addi r3, r1, 0x8
    lwz r0, 0x30(r29)
    add r4, r0, r28
    bl fn_80019DAC
    addi r3, r1, 0x14
    lwz r0, 0x30(r29)
    add r4, r0, r28
    bl fn_80019DAC
    addi r3, r1, 0x20
    lwz r4, 0x30(r29)
    addi r0, r31, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_80019DAC
    b lbl_80041F10
lbl_80041E88:
    subi r0, r3, 0x1
    cmpw r31, r0
    bne lbl_80041ED0
    addi r3, r1, 0x8
    lwz r4, 0x30(r29)
    subi r0, r31, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_80019DAC
    addi r3, r1, 0x14
    lwz r0, 0x30(r29)
    add r4, r0, r28
    bl fn_80019DAC
    addi r3, r1, 0x20
    lwz r0, 0x30(r29)
    add r4, r0, r28
    bl fn_80019DAC
    b lbl_80041F10
lbl_80041ED0:
    addi r3, r1, 0x8
    lwz r4, 0x30(r29)
    subi r0, r31, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_80019DAC
    addi r3, r1, 0x14
    lwz r0, 0x30(r29)
    add r4, r0, r28
    bl fn_80019DAC
    addi r3, r1, 0x20
    lwz r4, 0x30(r29)
    addi r0, r31, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_80019DAC
lbl_80041F10:
    li r5, 0x0
    mulli r3, r30, 0xc
    b lbl_80041FF4
lbl_80041F1C:
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    stw r27, 0x30(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f29
    fdivs f1, f30, f0
    xoris r0, r5, 0x8000
    stw r0, 0x3c(r1)
    stw r27, 0x38(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f29
    fmuls f2, f1, f0
    fsubs f1, f30, f2
    fmuls f0, f31, f1
    fmuls f3, f0, f1
    fmuls f0, f1, f2
    fadds f4, f31, f0
    fmuls f0, f31, f2
    fmuls f5, f0, f2
    lfs f0, 0x20(r1)
    fmuls f2, f0, f5
    lfs f0, 0x8(r1)
    fmuls f1, f0, f3
    lfs f0, 0x14(r1)
    fmuls f0, f0, f4
    fadds f0, f1, f0
    fadds f0, f2, f0
    lwz r4, 0x34(r29)
    stfsx f0, r4, r3
    lfs f0, 0x24(r1)
    fmuls f2, f0, f5
    lfs f0, 0xc(r1)
    fmuls f1, f0, f3
    lfs f0, 0x18(r1)
    fmuls f0, f0, f4
    fadds f0, f1, f0
    fadds f0, f2, f0
    lwz r0, 0x34(r29)
    add r4, r0, r3
    stfs f0, 0x4(r4)
    lfs f0, 0x28(r1)
    fmuls f2, f0, f5
    lfs f0, 0x10(r1)
    fmuls f1, f0, f3
    lfs f0, 0x1c(r1)
    fmuls f0, f0, f4
    fadds f0, f1, f0
    fadds f0, f2, f0
    lwz r0, 0x34(r29)
    add r4, r0, r3
    stfs f0, 0x8(r4)
    addi r5, r5, 0x1
    addi r30, r30, 0x1
    addi r3, r3, 0xc
lbl_80041FF4:
    lha r0, 0x60(r29)
    cmpw r5, r0
    blt lbl_80041F1C
    addi r31, r31, 0x1
    addi r28, r28, 0xc
lbl_80042008:
    lha r3, 0x5e(r29)
    cmpw r31, r3
    blt lbl_80041E44
    li r0, 0x88
    opword 0x13E1000C
    lfd f31, 0x80(r1)
    li r0, 0x78
    opword 0x13C1000C
    lfd f30, 0x70(r1)
    li r0, 0x68
    opword 0x13A1000C
    lfd f29, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_80042140
asm void fn_80042140() {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stfd f30, 0xa0(r1)
    opword 0xF3C100A8
    addi r11, r1, 0xa0
    bl _savegpr_27
    mr r29, r3
    li r3, 0x0
    bl fn_80016CAC
    mr r4, r3
    addi r3, r1, 0x30
    bl fn_8017B074
    addi r3, r1, 0x14
    li r4, 0x2
    addi r5, r1, 0x30
    bl fn_80173580
    la r31, lbl_8049E9E0
    lfs f30, 0x10(r31)
    li r3, 0x98
    li r4, 0x0
    lha r0, 0x5c(r29)
    slwi r0, r0, 1
    clrlwi r5, r0, 16
    bl GXBegin
    li r30, 0x0
    lfd f31, lbl_8049E9D8
    lis r28, 0x4330
    b lbl_8004234C
lbl_800421BC:
    cmpwi r30, 0x0
    bne lbl_800421E8
    mulli r27, r30, 0xc
    lwz r5, 0x34(r29)
    addi r3, r1, 0x20
    addi r0, r30, 0x1
    mulli r0, r0, 0xc
    add r4, r5, r0
    add r5, r5, r27
    bl fn_8001B8B8
    b lbl_80042208
lbl_800421E8:
    lwz r5, 0x34(r29)
    mulli r27, r30, 0xc
    addi r3, r1, 0x20
    add r4, r5, r27
    subi r0, r30, 0x1
    mulli r0, r0, 0xc
    add r5, r5, r0
    bl fn_8001B8B8
lbl_80042208:
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8001B978
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r1, 0x14
    bl fn_8001F9C8
    addi r3, r1, 0x20
    mr r4, r3
    lfs f1, 0x84(r29)
    bl fn_80018B08
    addi r3, r1, 0x8
    lwz r0, 0x34(r29)
    add r4, r0, r27
    addi r5, r1, 0x20
    bl fn_80018B00
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lfs f3, 0x10(r1)
    bl fn_800423C8
    lbz r3, 0x54(r29)
    lbz r4, 0x55(r29)
    lbz r5, 0x56(r29)
    lbz r0, 0x57(r29)
    stw r0, 0x64(r1)
    stw r28, 0x60(r1)
    lfd f0, 0x60(r1)
    fsubs f1, f0, f31
    lfs f0, 0x88(r29)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x68(r1)
    lwz r6, 0x6c(r1)
    clrlwi r6, r6, 24
    bl fn_800423A0
    fmr f1, f30
    lfs f2, 0x10(r31)
    bl fn_80042390
    addi r3, r1, 0x8
    lwz r0, 0x34(r29)
    add r4, r0, r27
    addi r5, r1, 0x20
    bl fn_8001B8B8
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lfs f3, 0x10(r1)
    bl fn_800423C8
    lbz r3, 0x54(r29)
    lbz r4, 0x55(r29)
    lbz r5, 0x56(r29)
    lbz r0, 0x57(r29)
    stw r0, 0x74(r1)
    stw r28, 0x70(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f31
    lfs f0, 0x88(r29)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x78(r1)
    lwz r6, 0x7c(r1)
    clrlwi r6, r6, 24
    bl fn_800423A0
    fmr f1, f30
    lfs f2, lbl_8049E9E0
    bl fn_80042390
    cmpwi r30, 0x0
    bne lbl_80042330
    lwz r4, 0x34(r29)
    add r3, r4, r27
    addi r0, r30, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_8001D9AC
    b lbl_80042348
lbl_80042330:
    lwz r4, 0x34(r29)
    add r3, r4, r27
    subi r0, r30, 0x1
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_8001D9AC
lbl_80042348:
    addi r30, r30, 0x1
lbl_8004234C:
    lha r0, 0x5c(r29)
    cmpw r30, r0
    blt lbl_800421BC
    bl fn_8004238C
    li r0, 0xb8
    opword 0x13E1000C
    lfd f31, 0xb0(r1)
    li r0, 0xa8
    opword 0x13C1000C
    lfd f30, 0xa0(r1)
    addi r11, r1, 0xa0
    bl _restgpr_27
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_80042390
asm void fn_80042390() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    blr
}

// asm_to_cpp: fn_800423A0
asm void fn_800423A0() {
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

// asm_to_cpp: fn_800423C8
asm void fn_800423C8() {
    nofralloc
    lis r3, 0xcc01
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    stfs f3, -0x8000(r3)
    blr
}
