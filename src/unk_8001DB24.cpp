#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern float lbl_8049D688;
extern float lbl_8049D6B0;
extern float lbl_8049E6C8;
extern float lbl_8049E6D0;
extern float lbl_8049E6D8;

M2C_UNK GXBegin(s32 arg0, s32 arg1, s32 arg2);
void GXClearVtxDesc(void);
void GXGetProjectionv(s32 arg0);
void GXGetViewportv(s32 arg0);
void GXLoadTexObj(s32 arg0, s32 arg1);
void GXProject(s8 *arg0, s8 *arg1, s8 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK GXSetVtxAttrFmt(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK GXSetVtxDesc(s32 arg0, s32 arg1);
s32 _restgpr_21();
s32 _restgpr_22();
s32 _restgpr_25();
s32 _restgpr_26();
s32 _restgpr_27();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_21();
s32 _savegpr_22();
s32 _savegpr_25();
s32 _savegpr_26();
s32 _savegpr_27();
s32 _savegpr_28();
s32 _savegpr_29();
void fn_800163E4(s32 arg0, s32 arg1);
s32 fn_800169F4();
s32 fn_80016A44();
void fn_80016A94(s32 arg0);
s32 fn_80016A98(s8 *arg0, s32 *arg1, s32 arg2);
s32 fn_80016B5C(s8 *arg0, s32 arg1);
s32 fn_80016CAC();
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
s8 * fn_80018B1C(s32 arg0);
M2C_UNK fn_80018B88(void);
M2C_UNK fn_80018B8C(s32 arg0);
M2C_UNK fn_80018C2C(f32 farg0);
M2C_UNK fn_80018C3C(f32 farg0);
s32 fn_80019D1C(s8 *arg0);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
void fn_8001B978(f32 *arg0, f32 *arg1);
s32 fn_8001B9D4(s32 *arg0, s32 arg1);
s8 * fn_8001DB24(s32 arg0, s8 *arg1, s32 arg2, s16 arg3, s32 arg4);
void fn_8001DCA8(s32 arg0);
s32 fn_8001DD00(s32 arg0, s32 arg1);
void fn_8001E054(s8 *arg0);
void fn_8001E264(s8 *arg0);
void fn_8001E460(s8 *arg0, f32 *arg1);
void fn_8001EA44(s8 *arg0, f32 *arg1);
void fn_8001F284(s8 *arg0, f32 *arg1, u8 arg2, u8 arg3);
void fn_8001F49C(s8 *arg0, s32 arg1, u8 arg2, u8 arg3);
void fn_8001F63C(s8 *arg0, s32 arg1, u8 arg2, u8 arg3);
void fn_8001F9C8(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8001F9CC(s32 arg0, s32 arg1, s32 arg2);
void fn_8001FA30(void);
void fn_8001FA34(u8 arg0, u8 arg1, u8 arg2, u8 arg3);
void fn_8001FA5C(f32 farg0, f32 farg1, f32 farg2);
void fn_8001FA70(f32 farg0, f32 farg1, s32 arg2, s32 arg3);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_800609D8(s8 *arg0);
s32 fn_8010E6AC(s32 arg0);
s32 fn_8010E90C(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_8010E9A4(s32 arg0, u32 arg1);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
void fn_801735E8(s8 *arg0, s32 arg1, f32 *arg2);
s32 fn_80177280(s32 arg0, M2C_UNK *arg1, M2C_UNK **arg2);
void fn_8017742C(void);
void fn_8017776C(s32 arg0);
void fn_8017B004(M2C_UNK *arg0, s8 *arg1);
void fn_8017B074(M2C_UNK *arg0, s8 *arg1);
void fn_8017B144(s32 arg0, s8 *arg1, s32 arg2);
f32 fn_8030DEEC(s8 *arg0, s8 *arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_8001DB24
asm s8 * fn_8001DB24(s32 arg0, s8 *arg1, s32 arg2, s16 arg3, s32 arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r29, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    li r31, 0x0
    stw r31, 0x8(r1)
    li r3, 0x0
    bl fn_8010E6AC
    mr r3, r29
    lis r4, fn_8001DD00@ha
    addi r4, r4, fn_8001DD00@l
    lwz r5, lbl_8049D688
    bl fn_80177280
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_8001DC60
    li r4, 0x0
    li r5, 0x98
    bl memset
    mr r3, r29
    bl fn_80018B1C
    mr r30, r3
    stw r28, 0x10(r3)
    stw r31, 0xc(r3)
    lfs f0, lbl_8049E6D8
    stfs f0, 0x64(r3)
    mullw r0, r26, r27
    extsh r0, r0
    sth r0, 0x70(r3)
    extsh r0, r27
    sth r0, 0x76(r3)
    stfs f0, 0x8c(r3)
    lha r0, 0x70(r3)
    stw r0, 0x80(r3)
    stfs f0, 0x90(r3)
    li r0, 0x1
    stw r0, 0x94(r3)
    cmpwi r25, 0x0
    beq lbl_8001DBF0
    stw r25, 0x68(r3)
    mr r3, r25
    bl fn_80019D1C
    stw r3, 0x6c(r30)
    lwz r0, 0x377c(r25)
    stw r0, 0x44(r30)
lbl_8001DBF0:
    li r3, 0x0
    bl fn_8010E6AC
    lha r0, 0x70(r30)
    slwi r4, r0, 4
    li r5, 0x4
    bl fn_80170E2C
    stw r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_8001DC60
    addi r3, r1, 0x8
    lha r0, 0x70(r30)
    mulli r4, r0, 0xc
    bl fn_8001B9D4
    stw r3, 0x4c(r30)
    addi r3, r1, 0x8
    lha r0, 0x70(r30)
    slwi r4, r0, 2
    bl fn_8001B9D4
    stw r3, 0x50(r30)
    li r3, 0x5
    lwz r4, 0x10(r30)
    mr r5, r30
    li r6, 0x0
    bl fn_8010E90C
    cmpwi r3, 0x0
    bne lbl_8001DC60
    mr r3, r30
    b lbl_8001DC90
lbl_8001DC60:
    cmpwi r29, 0x0
    beq lbl_8001DC70
    mr r3, r29
    bl fn_8017776C
lbl_8001DC70:
    lwz r31, 0x8(r1)
    cmpwi r31, 0x0
    beq lbl_8001DC8C
    li r3, 0x0
    bl fn_8010E6AC
    mr r4, r31
    bl fn_80170E84
lbl_8001DC8C:
    li r3, 0x0
lbl_8001DC90:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

void fn_8001DCA8(s32 arg0) {
    s8 *temp_r31;

    temp_r31 = (s8 *) (M2C_FIELD(fn_80018B1C((s32) (arg0)), s8 **, 0x4C));
    if (temp_r31 != NULL) {
        fn_80170E84((s32) (fn_8010E6AC((s32) (0))), (s8 *) (temp_r31));
    }
    fn_8017776C((s32) (arg0));
}

// asm_to_cpp: fn_8001DD00
asm s32 fn_8001DD00(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r30, r3
    mr r29, r4
    bl fn_80018B1C
    mr r31, r3
    cmpwi r29, 0x0
    beq lbl_8001DE0C
    clrlwi r0, r29, 31
    cmpwi r0, 0x0
    beq lbl_8001DD48
    mr r3, r30
    bl fn_8001DCA8
    li r3, 0x1
    b lbl_8001E03C
lbl_8001DD48:
    rlwinm r0, r29, 0, 23, 27
    cmpwi r0, 0x0
    beq lbl_8001DD5C
    li r3, 0x1
    b lbl_8001E03C
lbl_8001DD5C:
    rlwinm r0, r29, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8001DE04
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r5, 0x28(r4)
    cmpwi cr1, r5, 0x3e9
    bne cr1, lbl_8001DDD0
    lwz r0, 0x7b4(r4)
    cmplwi r0, 0x2
    ble lbl_8001DD94
    cmpwi r0, 0xff
    beq lbl_8001DDBC
    b lbl_8001DDD0
lbl_8001DD94:
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 9, 9
    cmpwi r0, 0x0
    bne lbl_8001DDD0
    bne cr1, lbl_8001DDD0
    li r0, 0xf1
    stw r0, 0xc(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001E03C
lbl_8001DDBC:
    li r0, 0xf1
    stw r0, 0xc(r3)
    bl fn_8017742C
    li r3, 0x1
    b lbl_8001E03C
lbl_8001DDD0:
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    lwz r4, 0x24(r4)
    lwz r0, 0x6c(r3)
    cmpw r4, r0
    bne lbl_8001DE04
    lwz r0, 0x84(r3)
    cmpw r5, r0
    bne lbl_8001DE04
    li r0, 0xef
    stw r0, 0xc(r3)
    li r3, 0x1
    b lbl_8001E03C
lbl_8001DE04:
    li r3, 0x0
    b lbl_8001E03C
lbl_8001DE0C:
    lwz r3, 0x68(r3)
    addi r4, r31, 0x4
    lwz r5, 0xc(r31)
    bl fn_80016A98
    cmpwi r3, 0x1
    beq lbl_8001DE30
    cmpwi r3, 0x2
    beq lbl_8001DE3C
    b lbl_8001DE44
lbl_8001DE30:
    li r0, 0xef
    stw r0, 0xc(r31)
    b lbl_8001DE44
lbl_8001DE3C:
    li r0, 0xf1
    stw r0, 0xc(r31)
lbl_8001DE44:
    lwz r0, 0xc(r31)
    cmplwi r0, 0x1
    ble lbl_8001DE58
    cmpwi r0, 0xf0
    bne lbl_8001DE74
lbl_8001DE58:
    lwz r3, 0x68(r31)
    lwz r4, 0x4(r31)
    bl fn_80016B5C
    cmpwi r3, 0x0
    beq lbl_8001DE74
    li r3, 0x0
    b lbl_8001E03C
lbl_8001DE74:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    beq lbl_8001DE9C
    cmpwi r0, 0x1
    beq lbl_8001DF2C
    cmpwi r0, 0xef
    beq lbl_8001DF60
    cmpwi r0, 0xf0
    beq lbl_8001DF8C
    b lbl_8001E018
lbl_8001DE9C:
    lha r0, 0x74(r31)
    cmpwi r0, 0x0
    bne lbl_8001DED4
    addi r3, r31, 0x14
    lwz r4, 0x48(r31)
    addi r5, r31, 0x2c
    bl fn_80018AF8
    addi r3, r31, 0x20
    lwz r4, 0x48(r31)
    addi r5, r31, 0x2c
    bl fn_80018AF8
    lha r3, 0x74(r31)
    addi r0, r3, 0x1
    sth r0, 0x74(r31)
lbl_8001DED4:
    addi r3, r31, 0x20
    addi r4, r31, 0x14
    bl fn_80019DAC
    addi r3, r31, 0x14
    lwz r4, 0x48(r31)
    addi r5, r31, 0x2c
    bl fn_80018AF8
    lwz r3, 0x78(r31)
    subi r0, r3, 0x1
    stw r0, 0x78(r31)
    cmpwi r0, 0x0
    bgt lbl_8001E018
    la r3, lbl_8049E6D8
    lfs f1, 0x88(r31)
    lfs f0, 0x4(r3)
    fmuls f0, f1, f0
    stfs f0, 0x88(r31)
    li r0, 0x0
    sth r0, 0x74(r31)
    li r0, 0x1
    stw r0, 0xc(r31)
    b lbl_8001E018
lbl_8001DF2C:
    mr r3, r31
    bl fn_8001E054
    lwz r3, 0x7c(r31)
    cmpwi r3, 0x0
    ble lbl_8001DF48
    subi r0, r3, 0x1
    stw r0, 0x7c(r31)
lbl_8001DF48:
    lwz r0, 0x7c(r31)
    cmpwi r0, 0x0
    bne lbl_8001E018
    li r0, 0xef
    stw r0, 0xc(r31)
    b lbl_8001E018
lbl_8001DF60:
    lwz r0, 0x80(r31)
    stw r0, 0x7c(r31)
    lwz r0, 0x7c(r31)
    cmpwi r0, 0x0
    ble lbl_8001DF80
    li r0, 0xf0
    stw r0, 0xc(r31)
    b lbl_8001DF8C
lbl_8001DF80:
    li r0, 0xf1
    stw r0, 0xc(r31)
    b lbl_8001E018
lbl_8001DF8C:
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 12, 12
    cmpwi r0, 0x0
    bne lbl_8001DFA4
    mr r3, r31
    bl fn_8001E054
lbl_8001DFA4:
    lwz r4, 0x80(r31)
    cmpwi r4, 0x0
    ble lbl_8001DFF0
    lwz r0, 0x7c(r31)
    lfd f2, lbl_8049E6C8
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x90(r31)
    b lbl_8001DFFC
lbl_8001DFF0:
    la r3, lbl_8049E6D8
    lfs f0, 0x8(r3)
    stfs f0, 0x90(r31)
lbl_8001DFFC:
    lwz r3, 0x7c(r31)
    subi r0, r3, 0x1
    stw r0, 0x7c(r31)
    cmpwi r0, 0x0
    bge lbl_8001E018
    li r0, 0xf1
    stw r0, 0xc(r31)
lbl_8001E018:
    lwz r0, 0xc(r31)
    cmpwi r0, 0xf1
    bne lbl_8001E038
    lwz r3, 0x10(r31)
    mr r4, r31
    bl fn_8010E9A4
    mr r3, r30
    bl fn_8001DCA8
lbl_8001E038:
    li r3, 0x0
lbl_8001E03C:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8001E054
asm void fn_8001E054(s8 *arg0) {
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
    bl _savegpr_29
    mr r30, r3
    lha r0, 0x76(r3)
    lfd f1, lbl_8049E6C8
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049E6D8
    fdivs f29, f0, f1
    fmr f28, f29
    lha r31, 0x74(r3)
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_8001E0EC
    lwz r3, 0xc(r3)
    subi r0, r3, 0xef
    cmplwi r0, 0x2
    bgt lbl_8001E0EC
    addi r3, r1, 0x2c
    addi r4, r30, 0x14
    bl fn_80019DAC
    b lbl_8001E0FC
lbl_8001E0EC:
    addi r3, r1, 0x2c
    lwz r4, 0x48(r30)
    addi r5, r30, 0x2c
    bl fn_80018AF8
lbl_8001E0FC:
    li r29, 0x0
    lfs f30, lbl_8049E6D8
    la r3, lbl_8049E6D8
    lfs f31, 0x4(r3)
    b lbl_8001E1C0
lbl_8001E110:
    addi r3, r1, 0x20
    addi r4, r30, 0x20
    fsubs f0, f30, f28
    fmuls f0, f0, f0
    fmuls f1, f0, f31
    bl fn_80018B08
    addi r3, r1, 0x14
    addi r4, r30, 0x14
    fsubs f0, f30, f28
    fmuls f0, f0, f28
    fadds f1, f31, f0
    bl fn_80018B08
    addi r3, r1, 0x8
    addi r4, r1, 0x2c
    fmuls f0, f28, f28
    fmuls f1, f0, f31
    bl fn_80018B08
    addi r3, r1, 0x20
    mr r4, r3
    addi r5, r1, 0x14
    bl fn_80018B00
    lwz r3, 0x4c(r30)
    mulli r0, r31, 0xc
    add r3, r3, r0
    addi r4, r1, 0x20
    addi r5, r1, 0x8
    bl fn_80018B00
    lwz r4, 0x54(r30)
    lwz r3, 0x50(r30)
    slwi r0, r31, 2
    stwx r4, r3, r0
    lha r3, 0x72(r30)
    lha r0, 0x70(r30)
    cmpw r3, r0
    bge lbl_8001E1A4
    addi r0, r3, 0x1
    sth r0, 0x72(r30)
lbl_8001E1A4:
    addi r4, r31, 0x1
    lha r3, 0x70(r30)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r31, r0, r4
    fadds f28, f28, f29
    addi r29, r29, 0x1
lbl_8001E1C0:
    lha r0, 0x76(r30)
    cmpw r29, r0
    blt lbl_8001E110
    lwz r3, 0x4c(r30)
    mulli r0, r31, 0xc
    add r3, r3, r0
    addi r4, r1, 0x2c
    bl fn_80019DAC
    li r29, 0x0
    lwz r3, 0x50(r30)
    slwi r0, r31, 2
    stwx r29, r3, r0
    extsh r0, r31
    sth r0, 0x74(r30)
    addi r3, r30, 0x20
    addi r4, r30, 0x14
    bl fn_80019DAC
    addi r3, r30, 0x14
    addi r4, r1, 0x2c
    bl fn_80019DAC
    lwz r0, 0x54(r30)
    stw r0, 0x58(r30)
    stw r29, 0x54(r30)
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
    bl _restgpr_29
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_8001E264
asm void fn_8001E264(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r3, 0x0
    bl fn_80016CAC
    mr r31, r3
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    beq lbl_8001E448
    lha r0, 0x72(r30)
    cmpwi r0, 0x1
    blt lbl_8001E448
    lwz r3, 0x4(r30)
    rlwinm r0, r3, 0, 15, 15
    cmpwi r0, 0x0
    bne lbl_8001E448
    rlwinm r0, r3, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8001E2C8
    lwz r0, lbl_8049D6B0
    cmpwi r0, 0x0
    beq lbl_8001E448
lbl_8001E2C8:
    rlwinm r0, r3, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_8001E2EC
    lwz r3, 0x68(r30)
    cmpwi r3, 0x0
    beq lbl_8001E2EC
    bl fn_800609D8
    cmpwi r3, 0x0
    beq lbl_8001E448
lbl_8001E2EC:
    lwz r0, 0x4(r30)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_8001E310
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_8001E448
lbl_8001E310:
    li r3, 0x0
    bl fn_800169F4
    lwz r3, 0x4(r30)
    li r4, 0x5
    bl fn_800163E4
    addi r3, r1, 0x8
    addi r4, r31, 0x1c
    addi r5, r31, 0x4
    bl fn_8001B8B8
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8001B8B0
    lwz r0, 0x4(r30)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8001E3E0
    lwz r3, lbl_8049D6B0
    addi r3, r3, 0x4
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
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8001EA44
    b lbl_8001E438
lbl_8001E3E0:
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
    mr r3, r30
    addi r4, r1, 0x8
    bl fn_8001E460
lbl_8001E438:
    li r3, 0x0
    bl fn_80016A44
    li r3, 0x0
    bl fn_80016A94
lbl_8001E448:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8001E460
asm void fn_8001E460(s8 *arg0, f32 *arg1) {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    opword 0xF3E100C8
    stfd f30, 0xb0(r1)
    opword 0xF3C100B8
    stfd f29, 0xa0(r1)
    opword 0xF3A100A8
    stfd f28, 0x90(r1)
    opword 0xF3810098
    stfd f27, 0x80(r1)
    opword 0xF3610088
    addi r11, r1, 0x80
    bl _savegpr_22
    mr r22, r3
    mr r23, r4
    lis r0, 0x4330
    stw r0, 0x30(r1)
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lha r5, 0x70(r3)
    lha r26, 0x72(r3)
    cmpw r26, r5
    bne lbl_8001E4E0
    lha r4, 0x74(r3)
    addi r4, r4, 0x1
    divw r0, r4, r5
    mullw r0, r0, r5
    subf r28, r0, r4
    subi r26, r26, 0x1
    b lbl_8001E4E4
lbl_8001E4E0:
    li r28, 0x0
lbl_8001E4E4:
    lwz r5, 0x4c(r3)
    addi r3, r1, 0x14
    mulli r0, r28, 0xc
    add r4, r5, r0
    lha r0, 0x74(r22)
    mulli r0, r0, 0xc
    add r5, r5, r0
    bl fn_8001B8B8
    addi r3, r1, 0x14
    bl fn_8001B8BC
    lfs f0, 0x88(r22)
    fcmpo cr0, f1, f0
    bge lbl_8001E590
    lbz r0, 0x5f(r22)
    lfd f2, lbl_8049E6D0
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f2
    lfs f1, 0x90(r22)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r29, 0x44(r1)
    lbz r0, 0x63(r22)
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r30, 0x4c(r1)
    lwz r3, 0x50(r22)
    lha r0, 0x74(r22)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_8001E9F0
    mr r3, r22
    mr r4, r23
    clrlwi r5, r29, 24
    clrlwi r6, r30, 24
    bl fn_8001F49C
    b lbl_8001E9F0
lbl_8001E590:
    li r24, 0x0
    slwi r3, r26, 1
    addi r31, r3, 0x2
    lfd f29, lbl_8049E6C8
    lfs f30, lbl_8049E6D8
    lfd f31, lbl_8049E6D0
lbl_8001E5A8:
    cmpwi r24, 0x0
    bne lbl_8001E5B8
    lfs f28, 0x88(r22)
    b lbl_8001E5C0
lbl_8001E5B8:
    lfs f0, 0x88(r22)
    fneg f28, f0
lbl_8001E5C0:
    li r3, 0x98
    li r4, 0x0
    clrlwi r5, r31, 16
    bl GXBegin
    li r25, 0x0
    b lbl_8001E8B4
lbl_8001E5D8:
    xoris r0, r25, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f29
    lha r3, 0x72(r22)
    subi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f29
    fdivs f27, f1, f0
    addi r4, r28, 0x1
    lha r3, 0x70(r22)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r27, r0, r4
    lwz r5, 0x4c(r22)
    mulli r30, r28, 0xc
    addi r3, r1, 0x14
    add r4, r5, r30
    mulli r0, r27, 0xc
    add r5, r5, r0
    bl fn_8001B8B8
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_8001B978
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    mr r5, r23
    bl fn_8001F9C8
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_8001B978
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    lfs f1, 0x8c(r22)
    fsubs f0, f30, f1
    fmuls f0, f0, f27
    fadds f0, f1, f0
    fmuls f1, f28, f0
    bl fn_80018B08
    addi r3, r1, 0x14
    mr r4, r3
    lwz r0, 0x4c(r22)
    add r5, r0, r30
    bl fn_80018B00
    lwz r3, 0x4(r22)
    rlwinm r0, r3, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_8001E6E8
    lbz r0, 0x5f(r22)
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f31
    lfs f1, 0x90(r22)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r29, 0x4c(r1)
    lbz r0, 0x63(r22)
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f31
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r28, 0x44(r1)
    b lbl_8001E840
lbl_8001E6E8:
    rlwinm r0, r3, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_8001E7AC
    lha r3, 0x72(r22)
    subi r4, r3, 0x1
    lbz r0, 0x5f(r22)
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f3, f0, f31
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f2, f0, f31
    xoris r3, r25, 0x8000
    stw r3, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f29
    xoris r0, r4, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f29
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    fsubs f0, f3, f0
    lfs f4, 0x90(r22)
    fmuls f0, f4, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r29, 0x4c(r1)
    lbz r4, 0x63(r22)
    stw r4, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f3, f0, f31
    stw r4, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f2, f0, f31
    stw r3, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f29
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f29
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    fsubs f0, f3, f0
    fmuls f0, f4, f0
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r28, 0x44(r1)
    b lbl_8001E840
lbl_8001E7AC:
    lha r3, 0x72(r22)
    subi r3, r3, 0x1
    lbz r0, 0x5f(r22)
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f2, f0, f31
    xoris r4, r25, 0x8000
    stw r4, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f29
    xoris r3, r3, 0x8000
    stw r3, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f29
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    lfs f3, 0x90(r22)
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r29, 0x4c(r1)
    lbz r0, 0x63(r22)
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f2, f0, f31
    stw r4, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f29
    stw r3, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f29
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r28, 0x44(r1)
lbl_8001E840:
    lwz r3, 0x50(r22)
    slwi r0, r27, 2
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_8001E85C
    li r28, 0x0
    li r29, 0x0
lbl_8001E85C:
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_8001FA5C
    lbz r3, 0x60(r22)
    lbz r4, 0x61(r22)
    lbz r5, 0x62(r22)
    clrlwi r6, r28, 24
    bl fn_8001FA34
    lwz r0, 0x4c(r22)
    add r3, r0, r30
    lfs f1, 0x0(r3)
    lfs f2, 0x4(r3)
    lfs f3, 0x8(r3)
    bl fn_8001FA5C
    lbz r3, 0x5c(r22)
    lbz r4, 0x5d(r22)
    lbz r5, 0x5e(r22)
    clrlwi r6, r29, 24
    bl fn_8001FA34
    mr r28, r27
    addi r25, r25, 0x1
lbl_8001E8B4:
    cmpw r25, r26
    blt lbl_8001E5D8
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    fmr f1, f28
    bl fn_80018B08
    mulli r25, r28, 0xc
    addi r3, r1, 0x14
    mr r4, r3
    lwz r0, 0x4c(r22)
    add r5, r0, r25
    bl fn_80018B00
    lbz r0, 0x5f(r22)
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f31
    lfs f1, 0x90(r22)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r29, 0x4c(r1)
    lbz r0, 0x63(r22)
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f31
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r30, 0x44(r1)
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_8001FA5C
    lbz r3, 0x60(r22)
    lbz r4, 0x61(r22)
    lbz r5, 0x62(r22)
    clrlwi r6, r30, 24
    bl fn_8001FA34
    lwz r0, 0x4c(r22)
    add r3, r0, r25
    lfs f1, 0x0(r3)
    lfs f2, 0x4(r3)
    lfs f3, 0x8(r3)
    bl fn_8001FA5C
    lbz r3, 0x5c(r22)
    lbz r4, 0x5d(r22)
    lbz r5, 0x5e(r22)
    clrlwi r6, r29, 24
    bl fn_8001FA34
    bl fn_8001FA30
    lha r4, 0x70(r22)
    lha r0, 0x72(r22)
    cmpw r0, r4
    bne lbl_8001E9A4
    lha r3, 0x74(r22)
    addi r3, r3, 0x1
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r28, r0, r3
    b lbl_8001E9A8
lbl_8001E9A4:
    li r28, 0x0
lbl_8001E9A8:
    addi r24, r24, 0x1
    cmpwi r24, 0x2
    blt lbl_8001E5A8
    lwz r3, 0x50(r22)
    lha r0, 0x74(r22)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_8001E9F0
    lwz r0, 0x4(r22)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    bne lbl_8001E9F0
    mr r3, r22
    mr r4, r23
    clrlwi r5, r29, 24
    clrlwi r6, r30, 24
    bl fn_8001F284
lbl_8001E9F0:
    li r0, 0xc8
    opword 0x13E1000C
    lfd f31, 0xc0(r1)
    li r0, 0xb8
    opword 0x13C1000C
    lfd f30, 0xb0(r1)
    li r0, 0xa8
    opword 0x13A1000C
    lfd f29, 0xa0(r1)
    li r0, 0x98
    opword 0x1381000C
    lfd f28, 0x90(r1)
    li r0, 0x88
    opword 0x1361000C
    lfd f27, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_22
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// asm_to_cpp: fn_8001EA44
asm void fn_8001EA44(s8 *arg0, f32 *arg1) {
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    stfd f31, 0x190(r1)
    opword 0xF3E10198
    stfd f30, 0x180(r1)
    opword 0xF3C10188
    stfd f29, 0x170(r1)
    opword 0xF3A10178
    stfd f28, 0x160(r1)
    opword 0xF3810168
    stfd f27, 0x150(r1)
    opword 0xF3610158
    stfd f26, 0x140(r1)
    opword 0xF3410148
    stfd f25, 0x130(r1)
    opword 0xF3210138
    addi r11, r1, 0x130
    bl _savegpr_21
    mr r21, r3
    mr r22, r4
    lis r0, 0x4330
    stw r0, 0xe0(r1)
    lis r0, 0x4330
    stw r0, 0xe8(r1)
    li r3, 0x0
    bl fn_80016CAC
    mr r4, r3
    addi r3, r1, 0xb0
    bl fn_8017B004
    addi r3, r1, 0x70
    bl GXGetProjectionv
    addi r3, r1, 0x30
    bl GXGetViewportv
    lha r4, 0x70(r21)
    lha r25, 0x72(r21)
    cmpw r25, r4
    bne lbl_8001EAF8
    lha r3, 0x74(r21)
    addi r3, r3, 0x1
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r27, r0, r3
    subi r25, r25, 0x1
    b lbl_8001EAFC
lbl_8001EAF8:
    li r27, 0x0
lbl_8001EAFC:
    lwz r5, 0x4c(r21)
    addi r3, r1, 0x14
    mulli r0, r27, 0xc
    add r4, r5, r0
    lha r0, 0x74(r21)
    mulli r0, r0, 0xc
    add r5, r5, r0
    bl fn_8001B8B8
    addi r3, r1, 0x14
    bl fn_8001B8BC
    lfs f0, 0x88(r21)
    fcmpo cr0, f1, f0
    bge lbl_8001EBA8
    lbz r0, 0x5f(r21)
    lfd f2, lbl_8049E6D0
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f2
    lfs f1, 0x90(r21)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r28, 0xf4(r1)
    lbz r0, 0x63(r21)
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xf8(r1)
    lwz r29, 0xfc(r1)
    lwz r3, 0x50(r21)
    lha r0, 0x74(r21)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_8001F218
    mr r3, r21
    mr r4, r22
    clrlwi r5, r28, 24
    clrlwi r6, r29, 24
    bl fn_8001F63C
    b lbl_8001F218
lbl_8001EBA8:
    addi r3, r1, 0x8
    lwz r4, 0x4c(r21)
    lha r0, 0x74(r21)
    mulli r0, r0, 0xc
    add r4, r4, r0
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lis r3, lbl_803C22B0@ha
    addi r31, r3, lbl_803C22B0@l
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    lfd f29, lbl_8049E6D0
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f29
    fdivs f28, f1, f0
    lhz r0, 0x10(r3)
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f29
    fdivs f27, f2, f0
    li r23, 0x0
    slwi r3, r25, 1
    addi r30, r3, 0x2
    lfd f30, lbl_8049E6C8
    lfs f31, lbl_8049E6D8
lbl_8001EC18:
    cmpwi r23, 0x0
    bne lbl_8001EC28
    lfs f26, 0x88(r21)
    b lbl_8001EC30
lbl_8001EC28:
    lfs f0, 0x88(r21)
    fneg f26, f0
lbl_8001EC30:
    li r3, 0x98
    li r4, 0x0
    clrlwi r5, r30, 16
    bl GXBegin
    li r24, 0x0
    b lbl_8001F000
lbl_8001EC48:
    xoris r0, r24, 0x8000
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f30
    lha r3, 0x72(r21)
    subi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f30
    fdivs f25, f1, f0
    addi r4, r27, 0x1
    lha r3, 0x70(r21)
    divw r0, r4, r3
    mullw r0, r0, r3
    subf r26, r0, r4
    lwz r5, 0x4c(r21)
    mulli r29, r27, 0xc
    addi r3, r1, 0x14
    add r4, r5, r29
    mulli r0, r26, 0xc
    add r5, r5, r0
    bl fn_8001B8B8
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_8001B978
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    mr r5, r22
    bl fn_8001F9C8
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_8001B978
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    lfs f1, 0x8c(r21)
    fsubs f0, f31, f1
    fmuls f0, f0, f25
    fadds f0, f1, f0
    fmuls f1, f26, f0
    bl fn_80018B08
    addi r3, r1, 0x14
    mr r4, r3
    lwz r0, 0x4c(r21)
    add r5, r0, r29
    bl fn_80018B00
    lwz r3, 0x4(r21)
    rlwinm r0, r3, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_8001ED58
    lbz r0, 0x5f(r21)
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f29
    lfs f1, 0x90(r21)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xf8(r1)
    lwz r28, 0xfc(r1)
    lbz r0, 0x63(r21)
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f29
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r27, 0xf4(r1)
    b lbl_8001EEB0
lbl_8001ED58:
    rlwinm r0, r3, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_8001EE1C
    lha r3, 0x72(r21)
    subi r4, r3, 0x1
    lbz r0, 0x5f(r21)
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f3, f0, f29
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f2, f0, f29
    xoris r3, r24, 0x8000
    stw r3, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f30
    xoris r0, r4, 0x8000
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    fsubs f0, f3, f0
    lfs f4, 0x90(r21)
    fmuls f0, f4, f0
    fctiwz f0, f0
    stfd f0, 0xf8(r1)
    lwz r28, 0xfc(r1)
    lbz r4, 0x63(r21)
    stw r4, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f3, f0, f29
    stw r4, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f2, f0, f29
    stw r3, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f30
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    fsubs f0, f3, f0
    fmuls f0, f4, f0
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r27, 0xf4(r1)
    b lbl_8001EEB0
lbl_8001EE1C:
    lha r3, 0x72(r21)
    subi r3, r3, 0x1
    lbz r0, 0x5f(r21)
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f2, f0, f29
    xoris r4, r24, 0x8000
    stw r4, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f1, f0, f30
    xoris r3, r3, 0x8000
    stw r3, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    lfs f3, 0x90(r21)
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0xf8(r1)
    lwz r28, 0xfc(r1)
    lbz r0, 0x63(r21)
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f2, f0, f29
    stw r4, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f1, f0, f30
    stw r3, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f30
    fdivs f0, f1, f0
    fmuls f0, f2, f0
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r27, 0xf4(r1)
lbl_8001EEB0:
    lwz r3, 0x50(r21)
    slwi r0, r26, 2
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_8001EECC
    li r27, 0x0
    li r28, 0x0
lbl_8001EECC:
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_8001FA5C
    lbz r3, 0x60(r21)
    lbz r4, 0x61(r21)
    lbz r5, 0x62(r21)
    clrlwi r6, r27, 24
    bl fn_8001FA34
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f29
    fdivs f1, f1, f0
    stfs f1, 0x14(r1)
    lhz r0, 0x10(r3)
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f29
    fdivs f3, f2, f0
    stfs f3, 0x18(r1)
    fsubs f0, f1, f28
    lfs f2, 0x64(r21)
    fmuls f0, f2, f0
    fadds f1, f28, f0
    fsubs f0, f3, f27
    fmuls f0, f2, f0
    fadds f2, f27, f0
    bl fn_8001FA70
    lwz r0, 0x4c(r21)
    add r3, r0, r29
    lfs f1, 0x0(r3)
    lfs f2, 0x4(r3)
    lfs f3, 0x8(r3)
    bl fn_8001FA5C
    lbz r3, 0x5c(r21)
    lbz r4, 0x5d(r21)
    lbz r5, 0x5e(r21)
    clrlwi r6, r28, 24
    bl fn_8001FA34
    addi r3, r1, 0x8
    lwz r0, 0x4c(r21)
    add r4, r0, r29
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f29
    fdivs f1, f1, f0
    stfs f1, 0x14(r1)
    lhz r0, 0x10(r3)
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f29
    fdivs f3, f2, f0
    stfs f3, 0x18(r1)
    fsubs f0, f1, f28
    lfs f2, 0x64(r21)
    fmuls f0, f2, f0
    fadds f1, f28, f0
    fsubs f0, f3, f27
    fmuls f0, f2, f0
    fadds f2, f27, f0
    bl fn_8001FA70
    mr r27, r26
    addi r24, r24, 0x1
lbl_8001F000:
    cmpw r24, r25
    blt lbl_8001EC48
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    fmr f1, f26
    bl fn_80018B08
    mulli r24, r27, 0xc
    addi r3, r1, 0x14
    mr r4, r3
    lwz r0, 0x4c(r21)
    add r5, r0, r24
    bl fn_80018B00
    lbz r0, 0x5f(r21)
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f29
    lfs f1, 0x90(r21)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xf8(r1)
    lwz r28, 0xfc(r1)
    lbz r0, 0x63(r21)
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f29
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0xf0(r1)
    lwz r29, 0xf4(r1)
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_8001FA5C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8001FA34
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f29
    fdivs f1, f1, f0
    stfs f1, 0x14(r1)
    lhz r0, 0x10(r3)
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f29
    fdivs f3, f2, f0
    stfs f3, 0x18(r1)
    fsubs f0, f1, f28
    lfs f2, 0x64(r21)
    fmuls f0, f2, f0
    fadds f1, f28, f0
    fsubs f0, f3, f27
    fmuls f0, f2, f0
    fadds f2, f27, f0
    bl fn_8001FA70
    lwz r0, 0x4c(r21)
    add r3, r0, r24
    lfs f1, 0x0(r3)
    lfs f2, 0x4(r3)
    lfs f3, 0x8(r3)
    bl fn_8001FA5C
    lbz r3, 0x5c(r21)
    lbz r4, 0x5d(r21)
    lbz r5, 0x5e(r21)
    clrlwi r6, r28, 24
    bl fn_8001FA34
    addi r3, r1, 0x8
    lwz r0, 0x4c(r21)
    add r4, r0, r24
    li r5, 0x0
    bl fn_8017B144
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    lwz r3, 0x54(r31)
    lhz r0, 0xe(r3)
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f29
    fdivs f1, f1, f0
    stfs f1, 0x14(r1)
    lhz r0, 0x10(r3)
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f29
    fdivs f3, f2, f0
    stfs f3, 0x18(r1)
    fsubs f0, f1, f28
    lfs f2, 0x64(r21)
    fmuls f0, f2, f0
    fadds f1, f28, f0
    fsubs f0, f3, f27
    fmuls f0, f2, f0
    fadds f2, f27, f0
    bl fn_8001FA70
    bl fn_8001FA30
    lha r4, 0x70(r21)
    lha r0, 0x72(r21)
    cmpw r0, r4
    bne lbl_8001F1CC
    lha r3, 0x74(r21)
    addi r3, r3, 0x1
    divw r0, r3, r4
    mullw r0, r0, r4
    subf r27, r0, r3
    b lbl_8001F1D0
lbl_8001F1CC:
    li r27, 0x0
lbl_8001F1D0:
    addi r23, r23, 0x1
    cmpwi r23, 0x2
    blt lbl_8001EC18
    lwz r3, 0x50(r21)
    lha r0, 0x74(r21)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_8001F218
    lwz r0, 0x4(r21)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    bne lbl_8001F218
    mr r3, r21
    mr r4, r22
    clrlwi r5, r28, 24
    clrlwi r6, r29, 24
    bl fn_8001F63C
lbl_8001F218:
    li r0, 0x198
    opword 0x13E1000C
    lfd f31, 0x190(r1)
    li r0, 0x188
    opword 0x13C1000C
    lfd f30, 0x180(r1)
    li r0, 0x178
    opword 0x13A1000C
    lfd f29, 0x170(r1)
    li r0, 0x168
    opword 0x1381000C
    lfd f28, 0x160(r1)
    li r0, 0x158
    opword 0x1361000C
    lfd f27, 0x150(r1)
    li r0, 0x148
    opword 0x1341000C
    lfd f26, 0x140(r1)
    li r0, 0x138
    opword 0x1321000C
    lfd f25, 0x130(r1)
    addi r11, r1, 0x130
    bl _restgpr_21
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

// asm_to_cpp: fn_8001F284
asm void fn_8001F284(s8 *arg0, f32 *arg1, u8 arg2, u8 arg3) {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    opword 0xF3E100A8
    stfd f30, 0x90(r1)
    opword 0xF3C10098
    stfd f29, 0x80(r1)
    opword 0xF3A10088
    addi r11, r1, 0x80
    bl _savegpr_26
    mr r31, r3
    mr r26, r4
    mr r29, r5
    mr r27, r6
    lha r4, 0x76(r3)
    addi r0, r4, 0x2
    slwi r28, r0, 1
    lha r5, 0x74(r3)
    cmpwi r5, 0x0
    beq lbl_8001F2E0
    subi r30, r5, 0x1
    b lbl_8001F2E8
lbl_8001F2E0:
    lha r3, 0x70(r3)
    subi r30, r3, 0x1
lbl_8001F2E8:
    addi r3, r1, 0x20
    lwz r4, 0x4c(r31)
    mulli r0, r5, 0xc
    add r4, r4, r0
    bl fn_80019DAC
    addi r3, r1, 0x14
    addi r4, r1, 0x20
    lwz r5, 0x4c(r31)
    mulli r0, r30, 0xc
    add r5, r5, r0
    bl fn_8001B8B8
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    bl fn_8001B978
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    mr r5, r26
    bl fn_8001F9C8
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8001B978
    addi r3, r1, 0x30
    li r4, 0x0
    addi r5, r1, 0x8
    bl fn_801735E8
    addi r3, r1, 0x30
    li r4, 0x1
    addi r5, r1, 0x14
    bl fn_801735E8
    addi r3, r1, 0x30
    li r4, 0x2
    mr r5, r26
    bl fn_801735E8
    la r30, lbl_8049E6D8
    lfd f1, lbl_8049E6C8
    xoris r0, r28, 0x8000
    stw r0, 0x64(r1)
    lis r0, 0x4330
    stw r0, 0x60(r1)
    lfd f0, 0x60(r1)
    fsubs f1, f0, f1
    lfs f0, 0x10(r30)
    fdivs f30, f0, f1
    lfs f29, 0x14(r30)
    li r3, 0xa0
    li r4, 0x0
    addi r0, r28, 0x2
    clrlwi r5, r0, 16
    bl GXBegin
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl fn_8001FA5C
    lbz r3, 0x5c(r31)
    lbz r4, 0x5d(r31)
    lbz r5, 0x5e(r31)
    clrlwi r6, r29, 24
    bl fn_8001FA34
    li r29, 0x0
    b lbl_8001F454
lbl_8001F3D8:
    fmr f1, f29
    bl fn_80018C2C
    lfs f0, 0x88(r31)
    fmuls f31, f0, f1
    fmr f1, f29
    bl fn_80018C3C
    lfs f0, 0x88(r31)
    fmuls f1, f0, f1
    addi r3, r1, 0x14
    fmr f2, f31
    lfs f3, 0x8(r30)
    bl fn_80018B0C
    fadds f29, f29, f30
    addi r3, r1, 0x8
    addi r4, r1, 0x30
    addi r5, r1, 0x14
    bl fn_80018B04
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    bl fn_80018B00
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_8001FA5C
    lbz r3, 0x60(r31)
    lbz r4, 0x61(r31)
    lbz r5, 0x62(r31)
    clrlwi r6, r27, 24
    bl fn_8001FA34
    addi r29, r29, 0x1
lbl_8001F454:
    cmpw r29, r28
    ble lbl_8001F3D8
    bl fn_8001FA30
    li r0, 0xa8
    opword 0x13E1000C
    lfd f31, 0xa0(r1)
    li r0, 0x98
    opword 0x13C1000C
    lfd f30, 0x90(r1)
    li r0, 0x88
    opword 0x13A1000C
    lfd f29, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_26
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// asm_to_cpp: fn_8001F49C
asm void fn_8001F49C(s8 *arg0, s32 arg1, u8 arg2, u8 arg3) {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    opword 0xF3E100A8
    stfd f30, 0x90(r1)
    opword 0xF3C10098
    stfd f29, 0x80(r1)
    opword 0xF3A10088
    addi r11, r1, 0x80
    bl _savegpr_27
    mr r27, r3
    mr r30, r5
    mr r28, r6
    li r3, 0x0
    bl fn_80016CAC
    mr r4, r3
    addi r3, r1, 0x30
    bl fn_8017B074
    addi r3, r1, 0x20
    lwz r4, 0x4c(r27)
    lha r0, 0x74(r27)
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_80019DAC
    lha r3, 0x76(r27)
    addi r0, r3, 0x2
    slwi r29, r0, 1
    la r31, lbl_8049E6D8
    lfd f1, lbl_8049E6C8
    xoris r0, r29, 0x8000
    stw r0, 0x64(r1)
    lis r0, 0x4330
    stw r0, 0x60(r1)
    lfd f0, 0x60(r1)
    fsubs f1, f0, f1
    lfs f0, 0x1c(r31)
    fdivs f29, f0, f1
    lfs f30, 0x8(r31)
    li r3, 0xa0
    li r4, 0x0
    addi r0, r29, 0x2
    clrlwi r5, r0, 16
    bl GXBegin
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl fn_8001FA5C
    lbz r3, 0x5c(r27)
    lbz r4, 0x5d(r27)
    lbz r5, 0x5e(r27)
    clrlwi r6, r30, 24
    bl fn_8001FA34
    li r30, 0x0
    b lbl_8001F5F4
lbl_8001F578:
    fmr f1, f30
    bl fn_80018C2C
    lfs f0, 0x88(r27)
    fmuls f31, f0, f1
    fmr f1, f30
    bl fn_80018C3C
    lfs f0, 0x88(r27)
    fmuls f1, f0, f1
    addi r3, r1, 0x14
    fmr f2, f31
    lfs f3, 0x8(r31)
    bl fn_80018B0C
    fadds f30, f30, f29
    addi r3, r1, 0x8
    addi r4, r1, 0x30
    addi r5, r1, 0x14
    bl fn_80018B04
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    bl fn_80018B00
    lfs f1, 0x14(r1)
    lfs f2, 0x18(r1)
    lfs f3, 0x1c(r1)
    bl fn_8001FA5C
    lbz r3, 0x60(r27)
    lbz r4, 0x61(r27)
    lbz r5, 0x62(r27)
    clrlwi r6, r28, 24
    bl fn_8001FA34
    addi r30, r30, 0x1
lbl_8001F5F4:
    cmpw r30, r29
    ble lbl_8001F578
    bl fn_8001FA30
    li r0, 0xa8
    opword 0x13E1000C
    lfd f31, 0xa0(r1)
    li r0, 0x98
    opword 0x13C1000C
    lfd f30, 0x90(r1)
    li r0, 0x88
    opword 0x13A1000C
    lfd f29, 0x80(r1)
    addi r11, r1, 0x80
    bl _restgpr_27
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// asm_to_cpp: fn_8001F63C
asm void fn_8001F63C(s8 *arg0, s32 arg1, u8 arg2, u8 arg3) {
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    stfd f31, 0x190(r1)
    opword 0xF3E10198
    stfd f30, 0x180(r1)
    opword 0xF3C10188
    stfd f29, 0x170(r1)
    opword 0xF3A10178
    stfd f28, 0x160(r1)
    opword 0xF3810168
    stfd f27, 0x150(r1)
    opword 0xF3610158
    stfd f26, 0x140(r1)
    opword 0xF3410148
    addi r11, r1, 0x140
    bl _savegpr_26
    mr r29, r3
    mr r30, r5
    mr r31, r6
    lis r0, 0x4330
    stw r0, 0x118(r1)
    lis r0, 0x4330
    stw r0, 0x120(r1)
    li r3, 0x0
    bl fn_80016CAC
    mr r26, r3
    addi r3, r1, 0xe8
    mr r4, r26
    bl fn_8017B004
    addi r3, r1, 0xa8
    bl GXGetProjectionv
    addi r3, r1, 0x68
    bl GXGetViewportv
    addi r3, r1, 0x38
    mr r4, r26
    bl fn_8017B074
    addi r3, r1, 0x2c
    lwz r4, 0x4c(r29)
    lha r0, 0x74(r29)
    mulli r0, r0, 0xc
    add r4, r4, r0
    bl fn_80019DAC
    lha r0, 0x74(r29)
    mulli r0, r0, 0xc
    lwz r3, 0x4c(r29)
    lfsx f1, r3, r0
    add r3, r3, r0
    lfs f2, 0x4(r3)
    lfs f3, 0x8(r3)
    addi r3, r1, 0xe8
    addi r4, r1, 0xa8
    addi r5, r1, 0x68
    addi r6, r1, 0x10
    addi r7, r1, 0xc
    addi r8, r1, 0x8
    bl GXProject
    lis r3, lbl_803C22B0@ha
    addi r27, r3, lbl_803C22B0@l
    lwz r3, 0x54(r27)
    lhz r0, 0xe(r3)
    lfd f2, lbl_8049E6D0
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f1, f0, f2
    lfs f0, 0x10(r1)
    fdivs f29, f0, f1
    lhz r0, 0x10(r3)
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f1, f0, f2
    lfs f0, 0xc(r1)
    fdivs f28, f0, f1
    lha r3, 0x76(r29)
    addi r0, r3, 0x2
    slwi r26, r0, 1
    la r28, lbl_8049E6D8
    lfd f1, lbl_8049E6C8
    xoris r0, r26, 0x8000
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f1, f0, f1
    lfs f0, 0x1c(r28)
    fdivs f30, f0, f1
    lfs f31, 0x8(r28)
    li r3, 0xa0
    li r4, 0x0
    addi r0, r26, 0x2
    clrlwi r5, r0, 16
    bl GXBegin
    lfs f1, 0x2c(r1)
    lfs f2, 0x30(r1)
    lfs f3, 0x34(r1)
    bl fn_8001FA5C
    lbz r3, 0x5c(r29)
    lbz r4, 0x5d(r29)
    lbz r5, 0x5e(r29)
    clrlwi r6, r30, 24
    bl fn_8001FA34
    lfs f1, 0x2c(r1)
    lfs f2, 0x30(r1)
    lfs f3, 0x34(r1)
    addi r3, r1, 0xe8
    addi r4, r1, 0xa8
    addi r5, r1, 0x68
    addi r6, r1, 0x10
    addi r7, r1, 0xc
    addi r8, r1, 0x8
    bl GXProject
    lwz r3, 0x54(r27)
    lhz r0, 0xe(r3)
    lfd f3, lbl_8049E6D0
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f1, f0, f3
    lfs f0, 0x10(r1)
    fdivs f2, f0, f1
    stfs f2, 0x20(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f1, f0, f3
    lfs f0, 0xc(r1)
    fdivs f3, f0, f1
    stfs f3, 0x24(r1)
    fsubs f0, f2, f29
    lfs f2, 0x64(r29)
    fmuls f0, f2, f0
    fadds f1, f29, f0
    fsubs f0, f3, f28
    fmuls f0, f2, f0
    fadds f2, f28, f0
    bl fn_8001FA70
    li r30, 0x0
    lfd f27, lbl_8049E6D0
    b lbl_8001F95C
lbl_8001F85C:
    fmr f1, f31
    bl fn_80018C2C
    lfs f0, 0x88(r29)
    fmuls f26, f0, f1
    fmr f1, f31
    bl fn_80018C3C
    lfs f0, 0x88(r29)
    fmuls f1, f0, f1
    addi r3, r1, 0x20
    fmr f2, f26
    lfs f3, 0x8(r28)
    bl fn_80018B0C
    fadds f31, f31, f30
    addi r3, r1, 0x14
    addi r4, r1, 0x38
    addi r5, r1, 0x20
    bl fn_80018B04
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x2c
    bl fn_80018B00
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    bl fn_8001FA5C
    lbz r3, 0x60(r29)
    lbz r4, 0x61(r29)
    lbz r5, 0x62(r29)
    clrlwi r6, r31, 24
    bl fn_8001FA34
    lfs f1, 0x20(r1)
    lfs f2, 0x24(r1)
    lfs f3, 0x28(r1)
    addi r3, r1, 0xe8
    addi r4, r1, 0xa8
    addi r5, r1, 0x68
    addi r6, r1, 0x10
    addi r7, r1, 0xc
    addi r8, r1, 0x8
    bl GXProject
    lwz r3, 0x54(r27)
    lhz r0, 0xe(r3)
    stw r0, 0x124(r1)
    lfd f0, 0x120(r1)
    fsubs f1, f0, f27
    lfs f0, 0x10(r1)
    fdivs f2, f0, f1
    stfs f2, 0x20(r1)
    lhz r0, 0x10(r3)
    stw r0, 0x11c(r1)
    lfd f0, 0x118(r1)
    fsubs f1, f0, f27
    lfs f0, 0xc(r1)
    fdivs f3, f0, f1
    stfs f3, 0x24(r1)
    fsubs f0, f2, f29
    lfs f2, 0x64(r29)
    fmuls f0, f2, f0
    fadds f1, f29, f0
    fsubs f0, f3, f28
    fmuls f0, f2, f0
    fadds f2, f28, f0
    bl fn_8001FA70
    addi r30, r30, 0x1
lbl_8001F95C:
    cmpw r30, r26
    ble lbl_8001F85C
    bl fn_8001FA30
    li r0, 0x198
    opword 0x13E1000C
    lfd f31, 0x190(r1)
    li r0, 0x188
    opword 0x13C1000C
    lfd f30, 0x180(r1)
    li r0, 0x178
    opword 0x13A1000C
    lfd f29, 0x170(r1)
    li r0, 0x168
    opword 0x1381000C
    lfd f28, 0x160(r1)
    li r0, 0x158
    opword 0x1361000C
    lfd f27, 0x150(r1)
    li r0, 0x148
    opword 0x1341000C
    lfd f26, 0x140(r1)
    addi r11, r1, 0x140
    bl _restgpr_26
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

void fn_8001F9C8(s32 arg0, s32 arg1, s32 arg2) {
    fn_8001F9CC((s32) (arg0), (s32) (arg1), (s32) (arg2));
}

// asm_to_cpp: fn_8001F9CC
asm s32 fn_8001F9CC(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r31, r5
    bl fn_80018B88
    mr r30, r3
    mr r3, r31
    bl fn_80018B8C
    mr r31, r3
    mr r3, r29
    bl fn_80018B8C
    mr r4, r31
    mr r5, r30
    bl fn_8030DEEC
    mr r3, r28
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_8001FA30(void) {
}

void fn_8001FA34(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    *(volatile u8 *)0xCC008000 = arg0;
    *(volatile u8 *)0xCC008000 = arg1;
    *(volatile u8 *)0xCC008000 = arg2;
    *(volatile u8 *)0xCC008000 = arg3;
}

void fn_8001FA5C(f32 farg0, f32 farg1, f32 farg2) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
    *(f32 *)0xCC008000 = farg2;
}

void fn_8001FA70(f32 farg0, f32 farg1, s32 arg2, s32 arg3) {
    *(f32 *)0xCC008000 = farg0;
    *(f32 *)0xCC008000 = farg1;
}

} // extern "C"
