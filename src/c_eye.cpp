#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 jumptable_8034DBC8[];
extern u8 jumptable_8034DC70[];
extern u8 jumptable_8034DD38[];
extern u8 lbl_8034D8C0[];
extern u8 lbl_8034D8E8[];
extern u8 lbl_8034D910[];
extern u8 lbl_8034D948[];
extern u8 lbl_8034D980[];
extern u8 lbl_8034D998[];
extern u8 lbl_8034D9B0[];
extern u8 lbl_8034D9C8[];
extern u8 lbl_8034D9E0[];
extern u8 lbl_8034D9F8[];
extern u8 lbl_8034DA10[];
extern u8 lbl_8034DA28[];
extern u8 lbl_8034DA40[];
extern u8 lbl_8034DA60[];
extern u8 lbl_8034DA80[];
extern u8 lbl_8034DA98[];
extern u8 lbl_8034DAB0[];
extern u8 lbl_8034DAE8[];
extern u8 lbl_8034DB20[];
extern u8 lbl_8034DB38[];
extern u8 lbl_8034DB50[];
extern u8 lbl_8034DB60[];
extern u8 lbl_8034DB70[];
extern u8 lbl_8034DB80[];
extern u8 lbl_80395728[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern float lbl_804A0478;

s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_28();
s32 _savegpr_29();
void fn_80018AF8(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B04(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
void fn_80050548(void);
s32 fn_80050550(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800515E0(void);
s32 fn_800515E8(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800543C4(void);
s32 fn_800543CC(s8 *arg0, s32 arg1, s8 *arg2);
void fn_80054EF0(void);
s32 fn_80054EF8(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800AE5B0(void);
s32 fn_800AE5B8(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800AF334(void);
s32 fn_800AF33C(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800B5A0C(void);
s32 fn_800B5A14(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800B5FF0(void);
s32 fn_800B5FF8(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800B75F8(void);
s32 fn_800B7600(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800B7FA4(void);
s32 fn_800B7FAC(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800BCC98(void);
s32 fn_800BCCA0(s8 *arg0, s32 arg1, s8 *arg2);
s32 fn_800CA1BC(u64 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_800CA290(void);
void fn_800CA5B4(void);
s32 fn_800CA5BC(s8 *arg0, s32 arg1, s32 arg2);
void fn_800CA66C(void);
s32 fn_800CA674(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800CE610(void);
s32 fn_800CE618(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800D2184(void);
void fn_800D2B98(void);
s32 fn_800D2BA0(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800D5598(void);
void fn_800D84E0(void);
s32 fn_800D84E8(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800DCDD4(void);
s32 fn_800DCDDC(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800DF880(void);
void fn_800DF938(void);
s32 fn_800DF940(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800E222C(void);
s32 fn_800E2234(s8 *arg0, s32 arg1, s32 arg2);
void fn_800E22E4(void);
s32 fn_800E22EC(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800E2ACC(void);
s32 fn_800E2AD4(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800E7180(void);
s32 fn_800E7188(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800E8D4C(void);
s32 fn_800E8D54(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800EA154(void);
s32 fn_800EA15C(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800EEFD8(void);
s32 fn_800EEFE0(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800F37F8(void);
s32 fn_800F3800(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800F52B4(s32 arg0, s32 arg1);
s32 fn_800F52BC();
void fn_800F55B8(s8 *arg0);
s32 fn_800F5628();
s32 fn_800F59E0();
void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3);
s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2);
void fn_800F5BC8(s8 *arg0);
void fn_800F5BE0(s8 *arg0);
void fn_800F5C60(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800F5DA4(void);
s32 fn_800F5DAC(s8 *arg0, s32 arg1, s8 *arg2);
void fn_800FAA78(void);
s32 fn_80100BCC(s8 *arg0, s32 arg1, s8 *arg2);
void fn_801011BC(void);
s32 fn_801011C4(s8 *arg0, s32 arg1, s8 *arg2);
void fn_801035D4(void);
s32 fn_801035DC(s8 *arg0, s32 arg1, s8 *arg2);
void fn_80106514(void);
s32 fn_8010651C(s8 *arg0, s32 arg1, s32 arg2);
void fn_801065CC(void);
s32 fn_801065D4(s8 *arg0, s32 arg1, s8 *arg2);
void fn_8010A3BC(void);
s32 fn_8010A3C4(s8 *arg0, s32 arg1, s8 *arg2);
void fn_8010C34C(void);
s32 fn_8010C354(s8 *arg0, s32 arg1, s8 *arg2);
M2C_UNK fn_80170E2C(s32 arg0, s32 arg1, s32 arg2);
void fn_80170E84(s32 arg0, s8 *arg1);
s32 fn_801714F0(void);
void fn_801734E4(s32 arg0, s32 arg1);
void fn_80173754(s32 arg0, s32 arg1);
void fn_8017375C(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80181438(s8 *arg0);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_800F52B4
asm void fn_800F52B4(s32 arg0, s32 arg1) {
    nofralloc
    li r5, 0x0
    b fn_800F52BC
}

// asm_to_cpp: fn_800F52BC
asm s32 fn_800F52BC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r31, r3
    mr r29, r4
    cmpwi r3, 0x0
    beq lbl_800F55A0
    cmpwi r4, 0x0
    beq lbl_800F55A0
    cmpwi r5, 0x0
    beq lbl_800F52F8
    mr r30, r5
    b lbl_800F530C
lbl_800F52F8:
    lwz r3, 0x110(r3)
    li r4, 0x18
    li r5, 0x0
    bl fn_80170E2C
    mr r30, r3
lbl_800F530C:
    cmpwi r30, 0x0
    beq lbl_800F55A0
    mr r3, r30
    li r4, 0x0
    li r5, 0x18
    bl memset
    lwz r0, 0x18(r29)
    stw r0, 0x0(r30)
    lwz r0, 0x1c(r29)
    stw r0, 0x4(r30)
    li r0, 0x1
    stw r0, 0x10(r30)
    stw r30, 0x104(r31)
    mr r3, r31
    lis r5, lbl_8034D8E8@ha
    lwz r4, lbl_8034D8E8@l(r5)
    addi r5, r5, lbl_8034D8E8@l
    addi r5, r5, 0x8
    lis r7, lbl_8034D8C0@ha
    lwz r6, lbl_8034D8C0@l(r7)
    addi r7, r7, lbl_8034D8C0@l
    addi r7, r7, 0x8
    bl fn_800CA1BC
    lwz r3, 0x18(r29)
    subi r0, r3, 0x3
    cmplwi r0, 0x29
    bgt lbl_800F55A0
    lis r3, jumptable_8034DBC8@ha
    addi r3, r3, jumptable_8034DBC8@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r31
    lis r5, lbl_8034D948@ha
    lwz r4, lbl_8034D948@l(r5)
    addi r5, r5, lbl_8034D948@l
    addi r5, r5, 0x8
    lis r7, lbl_8034D910@ha
    lwz r6, lbl_8034D910@l(r7)
    addi r7, r7, lbl_8034D910@l
    addi r7, r7, 0x8
    bl fn_800CA1BC
    b lbl_800F55A0
    mr r3, r31
    lis r5, lbl_8034D998@ha
    lwz r4, lbl_8034D998@l(r5)
    addi r5, r5, lbl_8034D998@l
    addi r5, r5, 0x8
    lis r7, lbl_8034D980@ha
    lwz r6, lbl_8034D980@l(r7)
    addi r7, r7, lbl_8034D980@l
    addi r7, r7, 0x8
    bl fn_800CA1BC
    b lbl_800F55A0
    mr r3, r31
    lis r5, lbl_8034D9C8@ha
    lwz r4, lbl_8034D9C8@l(r5)
    addi r5, r5, lbl_8034D9C8@l
    addi r5, r5, 0x8
    lis r7, lbl_8034D9B0@ha
    lwz r6, lbl_8034D9B0@l(r7)
    addi r7, r7, lbl_8034D9B0@l
    addi r7, r7, 0x8
    bl fn_800CA1BC
    b lbl_800F55A0
    mr r3, r31
    lis r5, lbl_8034D9F8@ha
    lwz r4, lbl_8034D9F8@l(r5)
    addi r5, r5, lbl_8034D9F8@l
    addi r5, r5, 0x8
    lis r7, lbl_8034D9E0@ha
    lwz r6, lbl_8034D9E0@l(r7)
    addi r7, r7, lbl_8034D9E0@l
    addi r7, r7, 0x8
    bl fn_800CA1BC
    b lbl_800F55A0
    mr r3, r31
    lis r5, lbl_8034DA28@ha
    lwz r4, lbl_8034DA28@l(r5)
    addi r5, r5, lbl_8034DA28@l
    addi r5, r5, 0x8
    lis r7, lbl_8034DA10@ha
    lwz r6, lbl_8034DA10@l(r7)
    addi r7, r7, lbl_8034DA10@l
    addi r7, r7, 0x8
    bl fn_800CA1BC
    b lbl_800F55A0
    mr r3, r31
    lis r5, lbl_8034DA60@ha
    lwz r4, lbl_8034DA60@l(r5)
    addi r5, r5, lbl_8034DA60@l
    addi r5, r5, 0x8
    lis r7, lbl_8034DA40@ha
    lwz r6, lbl_8034DA40@l(r7)
    addi r7, r7, lbl_8034DA40@l
    addi r7, r7, 0x8
    bl fn_800CA1BC
    b lbl_800F55A0
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x0
    bne lbl_800F55A0
    mr r3, r31
    lis r5, lbl_8034DA98@ha
    lwz r4, lbl_8034DA98@l(r5)
    addi r5, r5, lbl_8034DA98@l
    addi r5, r5, 0x8
    lis r7, lbl_8034DA80@ha
    lwz r6, lbl_8034DA80@l(r7)
    addi r7, r7, lbl_8034DA80@l
    addi r7, r7, 0x8
    bl fn_800CA1BC
    b lbl_800F55A0
    mr r3, r31
    lis r5, lbl_8034DAE8@ha
    lwz r4, lbl_8034DAE8@l(r5)
    addi r5, r5, lbl_8034DAE8@l
    addi r5, r5, 0x8
    lis r7, lbl_8034DAB0@ha
    lwz r6, lbl_8034DAB0@l(r7)
    addi r7, r7, lbl_8034DAB0@l
    addi r7, r7, 0x8
    bl fn_800CA1BC
    b lbl_800F55A0
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x0
    bne lbl_800F55A0
    mr r3, r31
    lis r5, lbl_8034DB38@ha
    lwz r4, lbl_8034DB38@l(r5)
    addi r5, r5, lbl_8034DB38@l
    addi r5, r5, 0x8
    lis r7, lbl_8034DB20@ha
    lwz r6, lbl_8034DB20@l(r7)
    addi r7, r7, lbl_8034DB20@l
    addi r7, r7, 0x8
    bl fn_800CA1BC
    b lbl_800F55A0
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x0
    bne lbl_800F55A0
    mr r3, r31
    lis r5, lbl_8034DB60@ha
    lwz r4, lbl_8034DB60@l(r5)
    addi r5, r5, lbl_8034DB60@l
    addi r5, r5, 0x8
    lis r7, lbl_8034DB50@ha
    lwz r6, lbl_8034DB50@l(r7)
    addi r7, r7, lbl_8034DB50@l
    addi r7, r7, 0x8
    bl fn_800CA1BC
    b lbl_800F55A0
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x0
    bne lbl_800F55A0
    mr r3, r31
    lis r5, lbl_8034DB80@ha
    lwz r4, lbl_8034DB80@l(r5)
    addi r5, r5, lbl_8034DB80@l
    addi r5, r5, 0x8
    lis r7, lbl_8034DB70@ha
    lwz r6, lbl_8034DB70@l(r7)
    addi r7, r7, lbl_8034DB70@l
    addi r7, r7, 0x8
    bl fn_800CA1BC
lbl_800F55A0:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800F55B8
asm void fn_800F55B8(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    cmpwi r3, 0x0
    beq lbl_800F5610
    lwz r31, 0x104(r3)
    cmpwi r31, 0x0
    beq lbl_800F5610
    lwz r4, 0x14(r31)
    b lbl_800F55FC
lbl_800F55EC:
    lwz r30, 0xc(r4)
    lwz r3, 0x110(r29)
    bl fn_80170E84
    mr r4, r30
lbl_800F55FC:
    cmpwi r4, 0x0
    bne lbl_800F55EC
    lwz r3, 0x110(r29)
    mr r4, r31
    bl fn_80170E84
lbl_800F5610:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800F5628
asm s32 fn_800F5628() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_800F59C8
    cmpwi r4, 0x0
    beq lbl_800F59C8
    lwz r5, 0x104(r3)
    cmpwi r5, 0x0
    beq lbl_800F59C8
    lwz r0, 0x10(r5)
    cmpwi r0, 0x0
    bne lbl_800F56E8
    lwz r0, 0x18(r4)
    cmplwi r0, 0xc
    beq lbl_800F5684
    cmplwi r0, 0x1c
    beq lbl_800F568C
    b lbl_800F59C8
lbl_800F5684:
    bl fn_800EA154
    b lbl_800F59C8
lbl_800F568C:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x7
    beq lbl_800F59C8
    cmpwi r0, 0x1
    bne lbl_800F56BC
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    beq lbl_800F59C8
lbl_800F56BC:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x2
    beq lbl_800F59C8
    cmplwi r0, 0x1b
    beq lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800D2184
    b lbl_800F59C8
lbl_800F56E8:
    lwz r4, 0x18(r4)
    bl fn_800CA290
    bl fn_801714F0
    cmpwi r3, 0x0
    beq lbl_800F5710
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lbz r0, 0x40(r3)
    cmplwi r0, 0x1
    beq lbl_800F59C8
lbl_800F5710:
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x7
    beq lbl_800F5768
    cmpwi r0, 0x1
    bne lbl_800F5740
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    beq lbl_800F5768
lbl_800F5740:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x2
    beq lbl_800F5768
    cmplwi r0, 0x1b
    beq lbl_800F5768
    mr r3, r30
    mr r4, r31
    bl fn_800D2184
lbl_800F5768:
    lwz r0, 0x18(r31)
    cmplwi r0, 0x31
    bgt lbl_800F59C8
    lis r3, jumptable_8034DC70@ha
    addi r3, r3, jumptable_8034DC70@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r30
    mr r4, r31
    bl fn_801011BC
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800F5DA4
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800D84E0
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800EEFD8
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800CA66C
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_801065CC
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800BCC98
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_80106514
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800E7180
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800515E0
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800E22E4
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800CA5B4
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800B5A0C
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800D5598
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_801035D4
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800E222C
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800EA154
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800FAA78
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_8010A3BC
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800DCDD4
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800B5FF0
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800DF880
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800B7FA4
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800AF334
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800AE5B0
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800E8D4C
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_8010C34C
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800B75F8
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800F37F8
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800DF938
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800D2B98
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800CE610
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800E2ACC
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_80050548
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_800543C4
    b lbl_800F59C8
    mr r3, r30
    mr r4, r31
    bl fn_80054EF0
lbl_800F59C8:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800F59E0
asm s32 fn_800F59E0() {
    nofralloc
    cmplwi r5, 0x31
    bgtlr
    lis r7, jumptable_8034DD38@ha
    addi r7, r7, jumptable_8034DD38@l
    slwi r0, r5, 2
    lwzx r7, r7, r0
    mtctr r7
    bctr
    mr r5, r6
    b fn_801011C4
    mr r5, r6
    b fn_80100BCC
    mr r5, r6
    b fn_800F5DAC
    mr r5, r6
    b fn_800D84E8
    mr r5, r6
    b fn_800EEFE0
    mr r5, r6
    b fn_800CA674
    mr r5, r6
    b fn_801065D4
    mr r5, r6
    b fn_800BCCA0
    mr r5, r6
    b fn_8010651C
    mr r5, r6
    b fn_800E7188
    mr r5, r6
    b fn_800515E8
    mr r5, r6
    b fn_800E22EC
    mr r5, r6
    b fn_800CA5BC
    mr r5, r6
    b fn_800B5A14
    mr r5, r6
    b fn_801035DC
    mr r5, r6
    b fn_800E2234
    mr r5, r6
    b fn_800EA15C
    mr r5, r6
    b fn_8010A3C4
    mr r5, r6
    b fn_800DCDDC
    mr r5, r6
    b fn_800B5FF8
    mr r5, r6
    b fn_800B7FAC
    mr r5, r6
    b fn_800AF33C
    mr r5, r6
    b fn_800AE5B8
    mr r5, r6
    b fn_800E8D54
    mr r5, r6
    b fn_8010C354
    mr r5, r6
    b fn_800B7600
    mr r5, r6
    b fn_800F3800
    mr r5, r6
    b fn_800DF940
    mr r5, r6
    b fn_800D2BA0
    mr r5, r6
    b fn_800CE618
    mr r5, r6
    b fn_800E2AD4
    mr r5, r6
    b fn_80050550
    mr r5, r6
    b fn_800543CC
    mr r5, r6
    b fn_80054EF8
    blr
}

// asm_to_cpp: fn_800F5B14
asm void fn_800F5B14(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3) {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    lwz r3, 0x104(r3)
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x0
    bne lbl_800F5B34
    blr
lbl_800F5B34:
    lwz r7, 0x14(r3)
    stw r5, 0x4(r4)
    stw r6, 0x0(r4)
    li r0, 0x1
    stw r0, 0x8(r4)
    cmpwi r7, 0x0
    bne lbl_800F5B60
    stw r4, 0x14(r3)
    blr
    b lbl_800F5B60
lbl_800F5B5C:
    mr r7, r0
lbl_800F5B60:
    lwz r0, 0xc(r7)
    cmpwi r0, 0x0
    bne lbl_800F5B5C
    stw r4, 0xc(r7)
    stw r7, 0x10(r4)
    blr
}

// asm_to_cpp: fn_800F5B78
asm s8 * fn_800F5B78(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    cmpwi r3, 0x0
    beq lbl_800F5B8C
    lwz r3, 0x104(r3)
    cmpwi r3, 0x0
    bne lbl_800F5B94
lbl_800F5B8C:
    li r3, 0x0
    blr
lbl_800F5B94:
    lwz r3, 0x14(r3)
    b lbl_800F5BB8
lbl_800F5B9C:
    lwz r0, 0x4(r3)
    cmpw r0, r4
    bne lbl_800F5BB4
    lwz r0, 0x0(r3)
    cmpw r0, r5
    beqlr
lbl_800F5BB4:
    lwz r3, 0xc(r3)
lbl_800F5BB8:
    cmpwi r3, 0x0
    bne lbl_800F5B9C
    li r3, 0x0
    blr
}

void fn_800F5BC8(s8 *arg0) {
    s8 *temp_r3;

    temp_r3 = (s8 *) (M2C_FIELD(arg0, s8 **, 0x104));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (1);
    }
}

// asm_to_cpp: fn_800F5BE0
asm void fn_800F5BE0(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    lwz r30, 0x104(r3)
    cmpwi r30, 0x0
    beq lbl_800F5C48
    bl fn_80181438
    mr r31, r3
    li r29, 0x0
    b lbl_800F5C38
lbl_800F5C14:
    mr r3, r28
    mr r4, r29
    bl fn_8018149C
    cmpwi r3, 0x0
    beq lbl_800F5C34
    lwz r0, 0x0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x0(r3)
lbl_800F5C34:
    addi r29, r29, 0x1
lbl_800F5C38:
    cmpw r29, r31
    blt lbl_800F5C14
    li r0, 0x0
    stw r0, 0x10(r30)
lbl_800F5C48:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800F5C60
asm void fn_800F5C60(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x100
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stfd f31, -0x10(r12)
    opword 0xF3EC0FF8
    subi r11, r12, 0x10
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    fmr f31, f1
    lfs f1, lbl_804A0478
    stfs f1, 0x30(r1)
    la r3, lbl_804A0478
    lfs f0, 0x4(r3)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f1, 0x3c(r1)
    addi r3, r4, 0x40
    addi r4, r4, 0x10
    bl fn_801734E4
    addi r3, r1, 0x80
    lwz r4, 0x4(r30)
    addi r4, r4, 0x224
    lwz r5, 0x8(r30)
    addi r5, r5, 0x50
    bl fn_8017375C
    addi r3, r30, 0x10
    addi r4, r1, 0x80
    bl fn_801734E4
    addi r3, r1, 0x50
    addi r4, r30, 0x10
    addi r5, r1, 0x30
    bl fn_80018AF8
    addi r3, r1, 0x40
    addi r4, r30, 0x40
    addi r5, r1, 0x30
    bl fn_80018AF8
    addi r3, r1, 0x20
    addi r4, r1, 0x40
    addi r5, r1, 0x50
    bl fn_8001B8B8
    addi r3, r1, 0x10
    addi r4, r1, 0x20
    fmr f1, f31
    bl fn_80018B08
    addi r3, r1, 0x10
    mr r4, r3
    mr r5, r31
    bl fn_80018B00
    addi r3, r1, 0xb0
    addi r4, r1, 0x80
    bl fn_80173754
    addi r3, r1, 0x70
    addi r4, r1, 0xb0
    addi r5, r1, 0x10
    bl fn_80018B04
    addi r3, r1, 0x60
    addi r4, r1, 0x70
    bl fn_8001B8B0
    lwz r3, 0x60(r1)
    lwz r0, 0x64(r1)
    stw r3, 0x0(r29)
    stw r0, 0x4(r29)
    lwz r3, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r3, 0x8(r29)
    stw r0, 0xc(r29)
    lwz r10, 0x0(r1)
    li r0, -0x8
    opword 0x13EA000C
    lfd f31, -0x10(r10)
    subi r11, r10, 0x10
    bl _restgpr_29
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

} // extern "C"
