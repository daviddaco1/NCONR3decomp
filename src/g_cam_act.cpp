#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 jumptable_8034C600[];
extern u8 jumptable_8034C6A4[];
extern u8 jumptable_8034C748[];
extern u8 jumptable_8034C898[];
extern u8 lbl_8034C350[];
extern u8 lbl_8034C3F8[];
extern u8 lbl_8034C420[];
extern u8 lbl_8034C448[];
extern u8 lbl_8034C470[];
extern u8 lbl_8034C498[];
extern u8 lbl_8034C4C0[];
extern u8 lbl_8034C4E8[];
extern u8 lbl_8034C510[];
extern u8 lbl_8034C538[];
extern u8 lbl_8034C560[];
extern u8 lbl_8034C588[];
extern u8 lbl_8034C5B0[];
extern u8 lbl_8034C5D8[];
extern u8 lbl_8034C818[];
extern u8 lbl_8034C828[];
extern u8 lbl_8034C838[];
extern u8 lbl_8034C848[];
extern u8 lbl_8034C858[];
extern u8 lbl_8034C868[];
extern u8 lbl_8034C878[];
extern u8 lbl_8034C888[];
extern u8 lbl_8034C900[];
extern u8 lbl_80390580[];
extern u8 lbl_80395728[];
extern u8 lbl_8039A0D0[];
extern u8 lbl_8039DD5C[];
extern u8 lbl_803A19E8[];
extern u8 lbl_803BD100[];
extern s8 *lbl_8049C300;
extern float lbl_8049C30C;
extern float lbl_8049F508;
extern float lbl_8049F510;

s32 _restgpr_16();
s32 _restgpr_19();
s32 _restgpr_24();
s32 _restgpr_25();
s32 _restgpr_26();
s32 _restgpr_27();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_16();
s32 _savegpr_19();
s32 _savegpr_24();
s32 _savegpr_25();
s32 _savegpr_26();
s32 _savegpr_27();
s32 _savegpr_28();
s32 _savegpr_29();
f32 fn_80018BD4(f32 farg0);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
s8 * fn_80037F7C(s8 *arg0, s8 **arg1);
M2C_UNK fn_8005CEFC(void);
s32 fn_8005CF00(s32 arg0, s32 arg1);
s32 * fn_8005E4A4(s8 *arg0);
f32 fn_8006AFA0(s32 *arg0);
f32 fn_8008A4FC(s8 *arg0, f32 *arg1, f32 *arg2);
s32 fn_8008AE14(void);
s32 fn_8008B160();
s32 fn_8008CA70(s8 *arg0, s32 arg1);
void fn_80091260(void);
void fn_80091698(void);
void fn_80091708(void);
void fn_80091778(void);
s32 fn_8009199C(s32 arg0);
void fn_80094AB4(s32 *arg0, s32 *arg1, s32 arg2);
s32 fn_80094B84();
s32 fn_800951AC();
s32 fn_80095D30();
s32 fn_800960D8(void);
void fn_80096138(void);
void fn_8009614C(void);
s32 fn_80096178(void);
s32 fn_80096180(void);
s32 fn_80096188(void);
void fn_80096190(void);
s32 fn_80096194(void);
s32 fn_8009619C(void);
s32 fn_800961A4(void);
void fn_800961AC(void);
s32 fn_800961B0(void);
s32 fn_800961B8(void);
s32 fn_800961C0(void);
void fn_800961C8(void);
void fn_800961CC(s32 arg0);
s32 fn_800961EC(void);
s32 fn_80096228();
void fn_80096240(void);
void fn_80096268(void);
void fn_800962A0(void);
void fn_800962A4(void);
s32 fn_800962A8(void);
void fn_80096310(void);
void fn_80096328(s32 arg0);
void fn_80096350(s32 arg0);
void fn_80096378(s32 arg0, s32 arg1);
s32 fn_8009638C(s8 *arg0);
s8 * fn_800963C0(s8 *arg0, s16 arg1);
void fn_800964C4(s8 *arg0, s16 arg1);
s32 fn_80096630(s8 *arg0, s32 arg1);
void fn_80096744(void);
s32 fn_80096748();
s32 fn_8009676C(s8 *arg0);
s32 fn_800967A4(s8 *arg0, s32 arg1, s32 arg2);
void fn_800967EC(s32 *arg0, s32 arg1);
s32 fn_80096804(s32 arg0_pad, s32 arg1_pad, s32 arg2_pad);
s32 fn_80096888(s8 *arg0, s32 arg1);
s32 fn_800968A4(s8 *arg0, s32 arg1);
s32 fn_800968C8(s8 *arg0, s32 arg1);
s32 fn_800968EC(s8 *arg0, s32 arg1);
s32 fn_80096908(s8 *arg0, s32 arg1);
s32 fn_8009692C(s8 *arg0, s32 arg1, s32 arg2);
s32 fn_80096A80(s8 *arg0, s32 arg1, s32 arg2);
void fn_80096BAC(s32 *arg0, s32 *arg1, s32 arg2);
u16 fn_80096C20(u16 arg0, s8 *arg1, s32 arg2, s32 arg3);
void fn_80096D18(s8 *arg0);
void fn_80096D38(s32 arg0);
u16 * fn_80096D3C(s8 *arg0, s8 *arg1);
void fn_80096E4C(s8 *arg0, s8 *arg1);
void fn_80096E68(s8 *arg0, s8 *arg1);
void fn_80096F10(s32 *arg0);
s32 fn_80096F68(s8 *arg0);
void fn_80097060(s8 *arg0, s8 *arg1, s32 arg2);
void fn_800970C4(s8 *arg0, s8 *arg1);
void fn_80097200(s32 arg0, s32 arg1, s32 *arg2, s32 arg3);
s32 fn_80097274();
u8 fn_80097298(s8 *arg0, u8 arg1, s32 arg2);
s16 fn_800972A8(s8 *arg0, s16 arg1, s32 arg2);
void fn_80097328(s32 arg0, s32 arg1, s32 arg2);
s32 fn_8009732C(s8 *arg0, s8 *arg1);
s32 fn_80097460(s8 *arg0, s8 *arg1, s8 *arg2, s8 *arg3);
s32 fn_80097850(s8 *arg0);
s32 fn_80097910();
s32 fn_80097EFC(s8 *arg0, s8 *arg1, s32 arg2);
s32 fn_80098078(s8 *arg0, s8 *arg1, s32 arg2);
void fn_8009817C(s8 *arg0, s8 *arg1);
void fn_80098278(s8 *arg0);
s32 fn_8009831C(s8 *arg0);
void fn_80098450(s8 *arg0, s32 arg1);
void fn_80098764(void);
s32 fn_80098768(s8 *arg0, s32 arg1);
s32 fn_8009878C(s8 *arg0);
s32 fn_80098800(s8 *arg0);
s32 fn_80098868(s8 *arg0);
s32 fn_80098A18(s8 *arg0, s32 arg1);
s32 fn_80098BE0(s8 *arg0, s32 arg1);
s32 fn_80098DE0(s8 *arg0, s32 arg1);
void fn_80098F00(s8 *arg0);
void fn_80099170(s8 *arg0);
s32 fn_8009927C(s8 *arg0);
void fn_800993B4(s8 *arg0);
s32 fn_80099830(s8 *arg0);
void fn_80099988(s8 *arg0);
f32 fn_80099AEC(s8 *arg0);
s32 fn_80099BDC(s8 *arg0);
void fn_80099C8C(void);
void fn_80099CF8(s32 arg0);
s32 * fn_800A0BF0(void);
s8 * fn_801648C4(s32 arg0, s32 arg1, s32 arg2);
s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 fn_80173580();
s32 fn_80181504(s8 *arg0, s32 arg1);
void fn_8018D408(void);
void fn_8018D6C4(s32 arg0);
void fn_8018D8A4(s32 arg0);
s32 fn_8018D95C(void);
void fn_8018D9B8(s32 arg0);
s32 fn_8018E100();
s32 fn_8018F96C(s32 arg0, M2C_UNK *arg1);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_80094AB4
asm void fn_80094AB4(s32 *arg0, s32 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r31, r4
    mr r30, r5
    cmpwi r3, 0x0
    beq lbl_80094B14
    bl fn_8005E4A4
    cmpwi r3, 0x0
    beq lbl_80094AEC
    mr r29, r3
lbl_80094AEC:
    lwz r0, 0x0(r29)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80094B6C
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x10(r3)
    cmpwi r0, 0xa
    bge lbl_80094B6C
lbl_80094B14:
    cmpwi r31, 0x0
    beq lbl_80094B2C
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80094B6C
lbl_80094B2C:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x9
    bne lbl_80094B48
    srawi r0, r30, 1
    addze r30, r0
lbl_80094B48:
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    lwz r3, 0xc10(r31)
    mr r4, r30
    li r5, 0x0
    lis r6, 0x99
    subi r6, r6, 0x6981
    bl fn_801728DC
    stw r3, 0xc10(r31)
lbl_80094B6C:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80094B84
asm s32 fn_80094B84() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_19
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    addi r31, r4, 0x1ed4
    addi r30, r4, 0x1f58
    addi r29, r4, 0x1fdc
    addi r28, r4, 0x2060
    addi r27, r4, 0x20e4
    addi r26, r4, 0x2194
    addi r25, r4, 0x2244
    addi r24, r4, 0x22f4
    addi r23, r4, 0x23a4
    addi r22, r4, 0x2454
    addi r21, r4, 0x2504
    addi r20, r4, 0x25b4
    addi r19, r4, 0x2664
    addi r8, r4, 0x11c8
    subi r0, r3, 0x3
    cmplwi r0, 0x28
    bgt lbl_80095194
    lis r3, jumptable_8034C600@ha
    addi r3, r3, jumptable_8034C600@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r31
    li r4, 0x0
    li r5, 0x4
    bl memset
    li r0, -0x1
    stw r0, 0x78(r31)
    li r23, 0x0
    li r19, 0x0
    li r20, 0x0
    lis r3, lbl_8034C3F8@ha
    addi r21, r3, lbl_8034C3F8@l
lbl_80094C28:
    add r22, r31, r19
    stw r23, 0x0(r22)
    bl fn_800960D8
    stw r3, 0x4(r22)
    lwzx r0, r21, r20
    stw r0, 0x8(r22)
    addi r23, r23, 0x1
    addi r19, r19, 0xc
    addi r20, r20, 0x4
    cmpwi r23, 0xa
    blt lbl_80094C28
    b lbl_80095194
    mr r3, r30
    li r4, 0x0
    li r5, 0x4
    bl memset
    li r0, -0x1
    stw r0, 0x78(r30)
    li r23, 0x0
    li r19, 0x0
    li r20, 0x0
    lis r3, lbl_8034C420@ha
    addi r21, r3, lbl_8034C420@l
lbl_80094C84:
    add r22, r30, r19
    stw r23, 0x0(r22)
    bl fn_800960D8
    stw r3, 0x4(r22)
    lwzx r0, r21, r20
    stw r0, 0x8(r22)
    addi r23, r23, 0x1
    addi r19, r19, 0xc
    addi r20, r20, 0x4
    cmpwi r23, 0xa
    blt lbl_80094C84
    b lbl_80095194
    mr r3, r29
    li r4, 0x0
    li r5, 0x4
    bl memset
    li r0, -0x1
    stw r0, 0x78(r29)
    li r23, 0x0
    li r19, 0x0
    li r20, 0x0
    lis r3, lbl_8034C448@ha
    addi r21, r3, lbl_8034C448@l
lbl_80094CE0:
    add r22, r29, r19
    stw r23, 0x0(r22)
    bl fn_800960D8
    stw r3, 0x4(r22)
    lwzx r0, r21, r20
    stw r0, 0x8(r22)
    addi r23, r23, 0x1
    addi r19, r19, 0xc
    addi r20, r20, 0x4
    cmpwi r23, 0xa
    blt lbl_80094CE0
    b lbl_80095194
    mr r3, r28
    li r4, 0x0
    li r5, 0x4
    bl memset
    li r0, -0x1
    stw r0, 0x78(r28)
    li r23, 0x0
    li r19, 0x0
    li r20, 0x0
    lis r3, lbl_8034C470@ha
    addi r21, r3, lbl_8034C470@l
lbl_80094D3C:
    add r22, r28, r19
    stw r23, 0x0(r22)
    bl fn_800960D8
    stw r3, 0x4(r22)
    lwzx r0, r21, r20
    stw r0, 0x8(r22)
    addi r23, r23, 0x1
    addi r19, r19, 0xc
    addi r20, r20, 0x4
    cmpwi r23, 0xa
    blt lbl_80094D3C
    b lbl_80095194
    mr r3, r27
    li r4, 0x0
    li r5, 0x4
    bl memset
    li r0, -0x1
    stw r0, 0xa0(r27)
    li r23, 0x0
    li r19, 0x0
    li r20, 0x0
    lis r3, lbl_8034C498@ha
    addi r21, r3, lbl_8034C498@l
lbl_80094D98:
    add r22, r27, r19
    stw r23, 0x0(r22)
    bl fn_800960D8
    stw r3, 0x4(r22)
lbl_80094DA8:
    bl fn_800960D8
    lwz r0, 0x4(r22)
    cmpw r3, r0
    beq lbl_80094DA8
    stw r3, 0x8(r22)
    lwzx r0, r21, r20
    stw r0, 0xc(r22)
    addi r23, r23, 0x1
    addi r19, r19, 0x10
    addi r20, r20, 0x4
    cmpwi r23, 0xa
    blt lbl_80094D98
    b lbl_80095194
    mr r3, r26
    li r4, 0x0
    li r5, 0x4
    bl memset
    li r0, -0x1
    stw r0, 0xa0(r26)
    li r23, 0x0
    li r19, 0x0
    li r20, 0x0
    lis r3, lbl_8034C4C0@ha
    addi r21, r3, lbl_8034C4C0@l
lbl_80094E08:
    add r22, r26, r19
    stw r23, 0x0(r22)
    bl fn_800960D8
    stw r3, 0x4(r22)
lbl_80094E18:
    bl fn_800960D8
    lwz r0, 0x4(r22)
    cmpw r3, r0
    beq lbl_80094E18
    stw r3, 0x8(r22)
    lwzx r0, r21, r20
    stw r0, 0xc(r22)
    addi r23, r23, 0x1
    addi r19, r19, 0x10
    addi r20, r20, 0x4
    cmpwi r23, 0xa
    blt lbl_80094E08
    b lbl_80095194
    mr r3, r25
    li r4, 0x0
    li r5, 0x4
    bl memset
    li r0, -0x1
    stw r0, 0xa0(r25)
    li r23, 0x0
    li r19, 0x0
    li r20, 0x0
    lis r3, lbl_8034C4E8@ha
    addi r21, r3, lbl_8034C4E8@l
lbl_80094E78:
    add r22, r25, r19
    stw r23, 0x0(r22)
    bl fn_800960D8
    stw r3, 0x4(r22)
lbl_80094E88:
    bl fn_800960D8
    lwz r0, 0x4(r22)
    cmpw r3, r0
    beq lbl_80094E88
    stw r3, 0x8(r22)
    lwzx r0, r21, r20
    stw r0, 0xc(r22)
    addi r23, r23, 0x1
    addi r19, r19, 0x10
    addi r20, r20, 0x4
    cmpwi r23, 0xa
    blt lbl_80094E78
    b lbl_80095194
    mr r3, r24
    li r4, 0x0
    li r5, 0x4
    bl memset
    li r0, -0x1
    stw r0, 0xa0(r21)
    li r23, 0x0
    li r19, 0x0
    li r20, 0x0
    lis r3, lbl_8034C510@ha
    addi r21, r3, lbl_8034C510@l
lbl_80094EE8:
    add r22, r24, r19
    stw r23, 0x0(r22)
    bl fn_800960D8
    stw r3, 0x4(r22)
lbl_80094EF8:
    bl fn_800960D8
    lwz r0, 0x4(r22)
    cmpw r3, r0
    beq lbl_80094EF8
    stw r3, 0x8(r22)
    lwzx r0, r21, r20
    stw r0, 0xc(r22)
    addi r23, r23, 0x1
    addi r19, r19, 0x10
    addi r20, r20, 0x4
    cmpwi r23, 0xa
    blt lbl_80094EE8
    b lbl_80095194
    mr r3, r23
    li r4, 0x0
    li r5, 0x4
    bl memset
    li r0, -0x1
    stw r0, 0xa0(r23)
    li r24, 0x0
    li r19, 0x0
    li r20, 0x0
    lis r3, lbl_8034C538@ha
    addi r21, r3, lbl_8034C538@l
lbl_80094F58:
    add r22, r23, r19
    stw r24, 0x0(r22)
    bl fn_800960D8
    stw r3, 0x4(r22)
lbl_80094F68:
    bl fn_800960D8
    lwz r0, 0x4(r22)
    cmpw r3, r0
    beq lbl_80094F68
    stw r3, 0x8(r22)
    lwzx r0, r21, r20
    stw r0, 0xc(r22)
    addi r24, r24, 0x1
    addi r19, r19, 0x10
    addi r20, r20, 0x4
    cmpwi r24, 0xa
    blt lbl_80094F58
    b lbl_80095194
    mr r3, r22
    li r4, 0x0
    li r5, 0x4
    bl memset
    li r0, -0x1
    stw r0, 0xa0(r22)
    li r24, 0x0
    li r19, 0x0
    li r20, 0x0
    lis r3, lbl_8034C560@ha
    addi r21, r3, lbl_8034C560@l
lbl_80094FC8:
    add r23, r22, r19
    stw r24, 0x0(r23)
    bl fn_800960D8
    stw r3, 0x4(r23)
lbl_80094FD8:
    bl fn_800960D8
    lwz r0, 0x4(r23)
    cmpw r3, r0
    beq lbl_80094FD8
    stw r3, 0x8(r23)
    lwzx r0, r21, r20
    stw r0, 0xc(r23)
    addi r24, r24, 0x1
    addi r19, r19, 0x10
    addi r20, r20, 0x4
    cmpwi r24, 0xa
    blt lbl_80094FC8
    b lbl_80095194
    mr r3, r21
    li r4, 0x0
    li r5, 0x4
    bl memset
    li r0, -0x1
    stw r0, 0xa0(r21)
    li r24, 0x0
    li r19, 0x0
    li r20, 0x0
    lis r3, lbl_8034C588@ha
    addi r22, r3, lbl_8034C588@l
lbl_80095038:
    add r23, r21, r19
    stw r24, 0x0(r23)
    bl fn_800960D8
    stw r3, 0x4(r23)
lbl_80095048:
    bl fn_800960D8
    lwz r0, 0x4(r23)
    cmpw r3, r0
    beq lbl_80095048
    stw r3, 0x8(r23)
    lwzx r0, r22, r20
    stw r0, 0xc(r23)
    addi r24, r24, 0x1
    addi r19, r19, 0x10
    addi r20, r20, 0x4
    cmpwi r24, 0xa
    blt lbl_80095038
    b lbl_80095194
    mr r3, r20
    li r4, 0x0
    li r5, 0x4
    bl memset
    li r0, -0x1
    stw r0, 0xa0(r20)
    li r24, 0x0
    li r19, 0x0
    li r21, 0x0
    lis r3, lbl_8034C5B0@ha
    addi r22, r3, lbl_8034C5B0@l
lbl_800950A8:
    add r23, r20, r19
    stw r24, 0x0(r23)
    bl fn_800960D8
    stw r3, 0x4(r23)
lbl_800950B8:
    bl fn_800960D8
    lwz r0, 0x4(r23)
    cmpw r3, r0
    beq lbl_800950B8
    stw r3, 0x8(r23)
    lwzx r0, r22, r21
    stw r0, 0xc(r23)
    addi r24, r24, 0x1
    addi r19, r19, 0x10
    addi r21, r21, 0x4
    cmpwi r24, 0xa
    blt lbl_800950A8
    b lbl_80095194
    mr r3, r19
    li r4, 0x0
    li r5, 0x4
    bl memset
    li r0, -0x1
    stw r0, 0xa0(r19)
    li r24, 0x0
    li r20, 0x0
    li r21, 0x0
    lis r3, lbl_8034C5D8@ha
    addi r22, r3, lbl_8034C5D8@l
lbl_80095118:
    add r23, r19, r20
    stw r24, 0x0(r23)
    bl fn_800960D8
    stw r3, 0x4(r23)
lbl_80095128:
    bl fn_800960D8
    lwz r0, 0x4(r23)
    cmpw r3, r0
    beq lbl_80095128
    stw r3, 0x8(r23)
    lwzx r0, r22, r21
    stw r0, 0xc(r23)
    addi r24, r24, 0x1
    addi r20, r20, 0x10
    addi r21, r21, 0x4
    cmpwi r24, 0xa
    blt lbl_80095118
    b lbl_80095194
    li r7, 0x0
    li r3, 0x0
    li r5, -0x1
    li r0, 0xa
lbl_8009516C:
    li r4, 0x0
    add r6, r8, r3
    mtctr r0
lbl_80095178:
    stwx r5, r6, r4
    addi r4, r4, 0x4
    bdnz lbl_80095178
    addi r7, r7, 0x1
    addi r3, r3, 0x40
    cmpwi r7, 0x34
    blt lbl_8009516C
lbl_80095194:
    addi r11, r1, 0x40
    bl _restgpr_19
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_800951AC
asm s32 fn_800951AC() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_16
    mr r16, r3
    lis r3, lbl_80395728@ha
    addi r30, r3, lbl_80395728@l
    addi r29, r30, 0x1ed4
    addi r28, r30, 0x1f58
    addi r27, r30, 0x1fdc
    addi r26, r30, 0x2060
    addi r25, r30, 0x20e4
    addi r24, r30, 0x2194
    addi r23, r30, 0x2244
    addi r22, r30, 0x22f4
    addi r21, r30, 0x23a4
    addi r20, r30, 0x2454
    addi r19, r30, 0x2504
    addi r18, r30, 0x25b4
    addi r17, r30, 0x2664
    bl fn_800A0BF0
    mr r31, r3
    li r0, 0x0
    subi r5, r16, 0x3
    cmplwi r5, 0x28
    bgt lbl_80095D18
    lis r4, jumptable_8034C6A4@ha
    addi r4, r4, jumptable_8034C6A4@l
    slwi r5, r5, 2
    lwzx r4, r4, r5
    mtctr r4
    bctr
    li r6, 0x0
    li r4, 0x0
    li r19, -0x1
    lwz r5, 0xc10(r30)
    li r3, 0xa
    mtctr r3
lbl_80095248:
    add r3, r29, r4
    lwz r3, 0x8(r3)
    cmpw r5, r3
    blt lbl_80095264
    mr r19, r6
    li r0, 0x1
    b lbl_80095270
lbl_80095264:
    addi r6, r6, 0x1
    addi r4, r4, 0xc
    bdnz lbl_80095248
lbl_80095270:
    cmpwi r0, 0x0
    beq lbl_800952E0
    li r18, 0x9
    li r16, 0x6c
    b lbl_800952AC
lbl_80095284:
    add r17, r29, r16
    mr r3, r17
    subi r0, r18, 0x1
    mulli r0, r0, 0xc
    add r4, r29, r0
    li r5, 0xc
    bl memcpy
    stw r18, 0x0(r17)
    subi r18, r18, 0x1
    subi r16, r16, 0xc
lbl_800952AC:
    cmpw r18, r19
    bgt lbl_80095284
    mulli r3, r19, 0xc
    lwz r0, 0xc1c(r30)
    add r4, r29, r3
    stw r0, 0x4(r4)
    lwz r0, 0xc10(r30)
    stw r0, 0x8(r4)
    addi r3, r29, 0x78
    li r5, 0xc
    bl memcpy
    stw r19, 0x78(r29)
    b lbl_80095D18
lbl_800952E0:
    lwz r0, 0xc1c(r30)
    stw r0, 0x7c(r29)
    lwz r0, 0xc10(r30)
    stw r0, 0x80(r29)
    li r0, -0x1
    stw r0, 0x78(r29)
    b lbl_80095D18
    li r6, 0x0
    li r4, 0x0
    li r29, -0x1
    lwz r5, 0xc14(r30)
    li r3, 0xa
    mtctr r3
lbl_80095314:
    add r3, r28, r4
    lwz r3, 0x8(r3)
    cmpw r5, r3
    bgt lbl_80095330
    mr r29, r6
    li r0, 0x1
    b lbl_8009533C
lbl_80095330:
    addi r6, r6, 0x1
    addi r4, r4, 0xc
    bdnz lbl_80095314
lbl_8009533C:
    cmpwi r0, 0x0
    beq lbl_800953AC
    li r18, 0x9
    li r16, 0x6c
    b lbl_80095378
lbl_80095350:
    add r17, r28, r16
    mr r3, r17
    subi r0, r18, 0x1
    mulli r0, r0, 0xc
    add r4, r28, r0
    li r5, 0xc
    bl memcpy
    stw r18, 0x0(r17)
    subi r18, r18, 0x1
    subi r16, r16, 0xc
lbl_80095378:
    cmpw r18, r29
    bgt lbl_80095350
    mulli r3, r29, 0xc
    lwz r0, 0xc1c(r30)
    add r4, r28, r3
    stw r0, 0x4(r4)
    lwz r0, 0xc14(r30)
    stw r0, 0x8(r4)
    addi r3, r28, 0x78
    li r5, 0xc
    bl memcpy
    stw r29, 0x78(r28)
    b lbl_80095D18
lbl_800953AC:
    lwz r0, 0xc1c(r30)
    stw r0, 0x7c(r28)
    lwz r0, 0xc14(r30)
    stw r0, 0x80(r28)
    li r0, -0x1
    stw r0, 0x78(r28)
    b lbl_80095D18
    li r6, 0x0
    li r4, 0x0
    li r29, -0x1
    lwz r5, 0xc18(r30)
    li r3, 0xa
    mtctr r3
lbl_800953E0:
    add r3, r27, r4
    lwz r3, 0x8(r3)
    cmpw r5, r3
    blt lbl_800953FC
    mr r29, r6
    li r0, 0x1
    b lbl_80095408
lbl_800953FC:
    addi r6, r6, 0x1
    addi r4, r4, 0xc
    bdnz lbl_800953E0
lbl_80095408:
    cmpwi r0, 0x0
    beq lbl_80095478
    li r18, 0x9
    li r16, 0x6c
    b lbl_80095444
lbl_8009541C:
    add r17, r27, r16
    mr r3, r17
    subi r0, r18, 0x1
    mulli r0, r0, 0xc
    add r4, r27, r0
    li r5, 0xc
    bl memcpy
    stw r18, 0x0(r17)
    subi r18, r18, 0x1
    subi r16, r16, 0xc
lbl_80095444:
    cmpw r18, r29
    bgt lbl_8009541C
    mulli r3, r29, 0xc
    lwz r0, 0xc1c(r30)
    add r4, r27, r3
    stw r0, 0x4(r4)
    lwz r0, 0xc18(r30)
    stw r0, 0x8(r4)
    addi r3, r27, 0x78
    li r5, 0xc
    bl memcpy
    stw r29, 0x78(r27)
    b lbl_80095D18
lbl_80095478:
    lwz r0, 0xc1c(r30)
    stw r0, 0x7c(r27)
    lwz r0, 0xc18(r30)
    stw r0, 0x80(r27)
    li r0, -0x1
    stw r0, 0x78(r27)
    b lbl_80095D18
    li r7, 0x0
    li r5, 0x0
    li r29, -0x1
    li r4, 0xa
    mtctr r4
lbl_800954A8:
    lwz r6, 0x24(r3)
    add r4, r26, r5
    lwz r4, 0x8(r4)
    cmpw r6, r4
    blt lbl_800954C8
    mr r29, r7
    li r0, 0x1
    b lbl_800954D4
lbl_800954C8:
    addi r7, r7, 0x1
    addi r5, r5, 0xc
    bdnz lbl_800954A8
lbl_800954D4:
    cmpwi r0, 0x0
    beq lbl_80095544
    li r18, 0x9
    li r16, 0x6c
    b lbl_80095510
lbl_800954E8:
    add r17, r26, r16
    mr r3, r17
    subi r0, r18, 0x1
    mulli r0, r0, 0xc
    add r4, r26, r0
    li r5, 0xc
    bl memcpy
    stw r18, 0x0(r17)
    subi r18, r18, 0x1
    subi r16, r16, 0xc
lbl_80095510:
    cmpw r18, r29
    bgt lbl_800954E8
    mulli r3, r29, 0xc
    lwz r0, 0xc1c(r30)
    add r4, r26, r3
    stw r0, 0x4(r4)
    lwz r0, 0x24(r31)
    stw r0, 0x8(r4)
    addi r3, r26, 0x78
    li r5, 0xc
    bl memcpy
    stw r29, 0x78(r26)
    b lbl_80095D18
lbl_80095544:
    lwz r0, 0xc1c(r30)
    stw r0, 0x7c(r26)
    lwz r0, 0x24(r3)
    stw r0, 0x80(r26)
    li r0, -0x1
    stw r0, 0x78(r26)
    b lbl_80095D18
    li r6, 0x0
    li r4, 0x0
    li r31, -0x1
    lwz r5, 0xc10(r30)
    li r3, 0xa
    mtctr r3
lbl_80095578:
    add r3, r25, r4
    lwz r3, 0xc(r3)
    cmpw r5, r3
    blt lbl_80095594
    mr r31, r6
    li r0, 0x1
    b lbl_800955A0
lbl_80095594:
    addi r6, r6, 0x1
    addi r4, r4, 0x10
    bdnz lbl_80095578
lbl_800955A0:
    cmpwi r0, 0x0
    beq lbl_80095618
    li r18, 0x9
    li r16, 0x90
    b lbl_800955DC
lbl_800955B4:
    add r17, r25, r16
    mr r3, r17
    subi r0, r18, 0x1
    slwi r0, r0, 4
    add r4, r25, r0
    li r5, 0x10
    bl memcpy
    stw r18, 0x0(r17)
    subi r18, r18, 0x1
    subi r16, r16, 0x10
lbl_800955DC:
    cmpw r18, r31
    bgt lbl_800955B4
    slwi r3, r31, 4
    lwz r0, 0xc1c(r30)
    add r4, r25, r3
    stw r0, 0x4(r4)
    lwz r0, 0xc24(r30)
    stw r0, 0x8(r4)
    lwz r0, 0xc10(r30)
    stw r0, 0xc(r4)
    addi r3, r25, 0xa0
    li r5, 0x10
    bl memcpy
    stw r31, 0xa0(r25)
    b lbl_80095D18
lbl_80095618:
    lwz r0, 0xc1c(r30)
    stw r0, 0xa4(r25)
    lwz r0, 0xc24(r30)
    stw r0, 0xa8(r25)
    lwz r0, 0xc10(r30)
    stw r0, 0xac(r25)
    li r0, -0x1
    stw r0, 0xa0(r25)
    b lbl_80095D18
    li r6, 0x0
    li r4, 0x0
    li r31, -0x1
    lwz r5, 0xc14(r30)
    li r3, 0xa
    mtctr r3
lbl_80095654:
    add r3, r24, r4
    lwz r3, 0xc(r3)
    cmpw r5, r3
    bgt lbl_80095670
    mr r31, r6
    li r0, 0x1
    b lbl_8009567C
lbl_80095670:
    addi r6, r6, 0x1
    addi r4, r4, 0x10
    bdnz lbl_80095654
lbl_8009567C:
    cmpwi r0, 0x0
    beq lbl_800956F4
    li r18, 0x9
    li r16, 0x90
    b lbl_800956B8
lbl_80095690:
    add r17, r24, r16
    mr r3, r17
    subi r0, r18, 0x1
    slwi r0, r0, 4
    add r4, r24, r0
    li r5, 0x10
    bl memcpy
    stw r18, 0x0(r17)
    subi r18, r18, 0x1
    subi r16, r16, 0x10
lbl_800956B8:
    cmpw r18, r31
    bgt lbl_80095690
    slwi r3, r31, 4
    lwz r0, 0xc1c(r30)
    add r4, r24, r3
    stw r0, 0x4(r4)
    lwz r0, 0xc24(r30)
    stw r0, 0x8(r4)
    lwz r0, 0xc14(r30)
    stw r0, 0xc(r4)
    addi r3, r24, 0xa0
    li r5, 0x10
    bl memcpy
    stw r31, 0xa0(r24)
    b lbl_80095D18
lbl_800956F4:
    lwz r0, 0xc1c(r30)
    stw r0, 0xa4(r24)
    lwz r0, 0xc24(r30)
    stw r0, 0xa8(r24)
    lwz r0, 0xc14(r30)
    stw r0, 0xac(r24)
    li r0, -0x1
    stw r0, 0xa0(r24)
    b lbl_80095D18
    li r6, 0x0
    li r4, 0x0
    li r31, -0x1
    lwz r5, 0xc18(r30)
    li r3, 0xa
    mtctr r3
lbl_80095730:
    add r3, r23, r4
    lwz r3, 0xc(r3)
    cmpw r5, r3
    blt lbl_8009574C
    mr r31, r6
    li r0, 0x1
    b lbl_80095758
lbl_8009574C:
    addi r6, r6, 0x1
    addi r4, r4, 0x10
    bdnz lbl_80095730
lbl_80095758:
    cmpwi r0, 0x0
    beq lbl_800957D0
    li r18, 0x9
    li r16, 0x90
    b lbl_80095794
lbl_8009576C:
    add r17, r23, r16
    mr r3, r17
    subi r0, r18, 0x1
    slwi r0, r0, 4
    add r4, r23, r0
    li r5, 0x10
    bl memcpy
    stw r18, 0x0(r17)
    subi r18, r18, 0x1
    subi r16, r16, 0x10
lbl_80095794:
    cmpw r18, r31
    bgt lbl_8009576C
    slwi r3, r31, 4
    lwz r0, 0xc1c(r30)
    add r4, r23, r3
    stw r0, 0x4(r4)
    lwz r0, 0xc24(r30)
    stw r0, 0x8(r4)
    lwz r0, 0xc18(r30)
    stw r0, 0xc(r4)
    addi r3, r23, 0xa0
    li r5, 0x10
    bl memcpy
    stw r31, 0xa0(r23)
    b lbl_80095D18
lbl_800957D0:
    lwz r0, 0xc1c(r30)
    stw r0, 0xa4(r23)
    lwz r0, 0xc24(r30)
    stw r0, 0xa8(r23)
    lwz r0, 0xc18(r30)
    stw r0, 0xac(r23)
    li r0, -0x1
    stw r0, 0xa0(r23)
    b lbl_80095D18
    li r6, 0x0
    li r4, 0x0
    li r31, -0x1
    lwz r5, 0xc10(r30)
    li r3, 0xa
    mtctr r3
lbl_8009580C:
    add r3, r22, r4
    lwz r3, 0xc(r3)
    cmpw r5, r3
    blt lbl_80095828
    mr r31, r6
    li r0, 0x1
    b lbl_80095834
lbl_80095828:
    addi r6, r6, 0x1
    addi r4, r4, 0x10
    bdnz lbl_8009580C
lbl_80095834:
    cmpwi r0, 0x0
    beq lbl_800958AC
    li r18, 0x9
    li r16, 0x90
    b lbl_80095870
lbl_80095848:
    add r17, r22, r16
    mr r3, r17
    subi r0, r18, 0x1
    slwi r0, r0, 4
    add r4, r22, r0
    li r5, 0x10
    bl memcpy
    stw r18, 0x0(r17)
    subi r18, r18, 0x1
    subi r16, r16, 0x10
lbl_80095870:
    cmpw r18, r31
    bgt lbl_80095848
    slwi r3, r31, 4
    lwz r0, 0xc1c(r30)
    add r4, r22, r3
    stw r0, 0x4(r4)
    lwz r0, 0xc20(r30)
    stw r0, 0x8(r4)
    lwz r0, 0xc10(r30)
    stw r0, 0xc(r4)
    addi r3, r22, 0xa0
    li r5, 0x10
    bl memcpy
    stw r31, 0xa0(r22)
    b lbl_80095D18
lbl_800958AC:
    lwz r0, 0xc1c(r30)
    stw r0, 0xa4(r22)
    lwz r0, 0xc20(r30)
    stw r0, 0xa8(r22)
    lwz r0, 0xc10(r30)
    stw r0, 0xac(r22)
    li r0, -0x1
    stw r0, 0xa0(r22)
    b lbl_80095D18
    li r6, 0x0
    li r4, 0x0
    li r31, -0x1
    lwz r5, 0xc14(r30)
    li r3, 0xa
    mtctr r3
lbl_800958E8:
    add r3, r21, r4
    lwz r3, 0xc(r3)
    cmpw r5, r3
    bgt lbl_80095904
    mr r31, r6
    li r0, 0x1
    b lbl_80095910
lbl_80095904:
    addi r6, r6, 0x1
    addi r4, r4, 0x10
    bdnz lbl_800958E8
lbl_80095910:
    cmpwi r0, 0x0
    beq lbl_80095988
    li r18, 0x9
    li r16, 0x90
    b lbl_8009594C
lbl_80095924:
    add r17, r21, r16
    mr r3, r17
    subi r0, r18, 0x1
    slwi r0, r0, 4
    add r4, r21, r0
    li r5, 0x10
    bl memcpy
    stw r18, 0x0(r17)
    subi r18, r18, 0x1
    subi r16, r16, 0x10
lbl_8009594C:
    cmpw r18, r31
    bgt lbl_80095924
    slwi r3, r31, 4
    lwz r0, 0xc1c(r30)
    add r4, r21, r3
    stw r0, 0x4(r4)
    lwz r0, 0xc20(r30)
    stw r0, 0x8(r4)
    lwz r0, 0xc14(r30)
    stw r0, 0xc(r4)
    addi r3, r21, 0xa0
    li r5, 0x10
    bl memcpy
    stw r31, 0xa0(r21)
    b lbl_80095D18
lbl_80095988:
    lwz r0, 0xc1c(r30)
    stw r0, 0xa4(r21)
    lwz r0, 0xc20(r30)
    stw r0, 0xa8(r21)
    lwz r0, 0xc14(r30)
    stw r0, 0xac(r21)
    li r0, -0x1
    stw r0, 0xa0(r21)
    b lbl_80095D18
    li r6, 0x0
    li r4, 0x0
    li r31, -0x1
    lwz r5, 0xc18(r30)
    li r3, 0xa
    mtctr r3
lbl_800959C4:
    add r3, r20, r4
    lwz r3, 0xc(r3)
    cmpw r5, r3
    blt lbl_800959E0
    mr r31, r6
    li r0, 0x1
    b lbl_800959EC
lbl_800959E0:
    addi r6, r6, 0x1
    addi r4, r4, 0x10
    bdnz lbl_800959C4
lbl_800959EC:
    cmpwi r0, 0x0
    beq lbl_80095A64
    li r18, 0x9
    li r16, 0x90
    b lbl_80095A28
lbl_80095A00:
    add r17, r20, r16
    mr r3, r17
    subi r0, r18, 0x1
    slwi r0, r0, 4
    add r4, r20, r0
    li r5, 0x10
    bl memcpy
    stw r18, 0x0(r17)
    subi r18, r18, 0x1
    subi r16, r16, 0x10
lbl_80095A28:
    cmpw r18, r31
    bgt lbl_80095A00
    slwi r3, r31, 4
    lwz r0, 0xc1c(r30)
    add r4, r20, r3
    stw r0, 0x4(r4)
    lwz r0, 0xc20(r30)
    stw r0, 0x8(r4)
    lwz r0, 0xc18(r30)
    stw r0, 0xc(r4)
    addi r3, r20, 0xa0
    li r5, 0x10
    bl memcpy
    stw r31, 0xa0(r20)
    b lbl_80095D18
lbl_80095A64:
    lwz r0, 0xc1c(r30)
    stw r0, 0xa4(r20)
    lwz r0, 0xc20(r30)
    stw r0, 0xa8(r20)
    lwz r0, 0xc18(r30)
    stw r0, 0xac(r20)
    li r0, -0x1
    stw r0, 0xa0(r20)
    b lbl_80095D18
    li r6, 0x0
    li r4, 0x0
    li r31, -0x1
    lwz r5, 0xc10(r30)
    li r3, 0xa
    mtctr r3
lbl_80095AA0:
    add r3, r19, r4
    lwz r3, 0xc(r3)
    cmpw r5, r3
    blt lbl_80095ABC
    mr r31, r6
    li r0, 0x1
    b lbl_80095AC8
lbl_80095ABC:
    addi r6, r6, 0x1
    addi r4, r4, 0x10
    bdnz lbl_80095AA0
lbl_80095AC8:
    cmpwi r0, 0x0
    beq lbl_80095B40
    li r18, 0x9
    li r16, 0x90
    b lbl_80095B04
lbl_80095ADC:
    add r17, r19, r16
    mr r3, r17
    subi r0, r18, 0x1
    slwi r0, r0, 4
    add r4, r19, r0
    li r5, 0x10
    bl memcpy
    stw r18, 0x0(r17)
    subi r18, r18, 0x1
    subi r16, r16, 0x10
lbl_80095B04:
    cmpw r18, r31
    bgt lbl_80095ADC
    slwi r3, r31, 4
    lwz r0, 0xc1c(r30)
    add r4, r19, r3
    stw r0, 0x4(r4)
    lwz r0, 0xc20(r30)
    stw r0, 0x8(r4)
    lwz r0, 0xc10(r30)
    stw r0, 0xc(r4)
    addi r3, r19, 0xa0
    li r5, 0x10
    bl memcpy
    stw r31, 0xa0(r19)
    b lbl_80095D18
lbl_80095B40:
    lwz r0, 0xc1c(r30)
    stw r0, 0xa4(r19)
    lwz r0, 0xc20(r30)
    stw r0, 0xa8(r19)
    lwz r0, 0xc10(r30)
    stw r0, 0xac(r19)
    li r0, -0x1
    stw r0, 0xa0(r19)
    b lbl_80095D18
    li r6, 0x0
    li r4, 0x0
    li r31, -0x1
    lwz r5, 0xc14(r30)
    li r3, 0xa
    mtctr r3
lbl_80095B7C:
    add r3, r18, r4
    lwz r3, 0xc(r3)
    cmpw r5, r3
    bgt lbl_80095B98
    mr r31, r6
    li r0, 0x1
    b lbl_80095BA4
lbl_80095B98:
    addi r6, r6, 0x1
    addi r4, r4, 0x10
    bdnz lbl_80095B7C
lbl_80095BA4:
    cmpwi r0, 0x0
    beq lbl_80095C1C
    li r19, 0x9
    li r16, 0x90
    b lbl_80095BE0
lbl_80095BB8:
    add r17, r18, r16
    mr r3, r17
    subi r0, r19, 0x1
    slwi r0, r0, 4
    add r4, r18, r0
    li r5, 0x10
    bl memcpy
    stw r19, 0x0(r17)
    subi r19, r19, 0x1
    subi r16, r16, 0x10
lbl_80095BE0:
    cmpw r19, r31
    bgt lbl_80095BB8
    slwi r3, r31, 4
    lwz r0, 0xc1c(r30)
    add r4, r18, r3
    stw r0, 0x4(r4)
    lwz r0, 0xc20(r30)
    stw r0, 0x8(r4)
    lwz r0, 0xc14(r30)
    stw r0, 0xc(r4)
    addi r3, r18, 0xa0
    li r5, 0x10
    bl memcpy
    stw r31, 0xa0(r18)
    b lbl_80095D18
lbl_80095C1C:
    lwz r0, 0xc1c(r30)
    stw r0, 0xa4(r18)
    lwz r0, 0xc20(r30)
    stw r0, 0xa8(r18)
    lwz r0, 0xc14(r30)
    stw r0, 0xac(r18)
    li r0, -0x1
    stw r0, 0xa0(r18)
    b lbl_80095D18
    li r6, 0x0
    li r4, 0x0
    li r31, -0x1
    lwz r5, 0xc18(r30)
    li r3, 0xa
    mtctr r3
lbl_80095C58:
    add r3, r17, r4
    lwz r3, 0xc(r3)
    cmpw r5, r3
    blt lbl_80095C74
    mr r31, r6
    li r0, 0x1
    b lbl_80095C80
lbl_80095C74:
    addi r6, r6, 0x1
    addi r4, r4, 0x10
    bdnz lbl_80095C58
lbl_80095C80:
    cmpwi r0, 0x0
    beq lbl_80095CF8
    li r19, 0x9
    li r16, 0x90
    b lbl_80095CBC
lbl_80095C94:
    add r18, r17, r16
    mr r3, r18
    subi r0, r19, 0x1
    slwi r0, r0, 4
    add r4, r17, r0
    li r5, 0x10
    bl memcpy
    stw r19, 0x0(r18)
    subi r19, r19, 0x1
    subi r16, r16, 0x10
lbl_80095CBC:
    cmpw r19, r31
    bgt lbl_80095C94
    slwi r3, r31, 4
    lwz r0, 0xc1c(r30)
    add r4, r17, r3
    stw r0, 0x4(r4)
    lwz r0, 0xc20(r30)
    stw r0, 0x8(r4)
    lwz r0, 0xc18(r30)
    stw r0, 0xc(r4)
    addi r3, r17, 0xa0
    li r5, 0x10
    bl memcpy
    stw r31, 0xa0(r17)
    b lbl_80095D18
lbl_80095CF8:
    lwz r0, 0xc1c(r30)
    stw r0, 0xa4(r17)
    lwz r0, 0xc20(r30)
    stw r0, 0xa8(r17)
    lwz r0, 0xc18(r30)
    stw r0, 0xac(r17)
    li r0, -0x1
    stw r0, 0xa0(r17)
lbl_80095D18:
    addi r11, r1, 0x50
    bl _restgpr_16
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_80095D30
asm s32 fn_80095D30() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    cmplwi r3, 0x32
    bgt lbl_800960C4
    lis r4, jumptable_8034C748@ha
    addi r4, r4, jumptable_8034C748@l
    slwi r0, r3, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r3, 0x37
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x38
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x39
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x3a
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x3b
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x3c
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x3d
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x3e
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x3f
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x41
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x44
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x45
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x47
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x48
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x49
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x4b
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x4c
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x4d
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x4e
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x4f
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x50
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x51
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x52
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x53
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x55
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x56
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x57
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x58
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x59
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x5a
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x5b
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x5c
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x5d
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x5e
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x5f
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x60
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x62
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x65
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x66
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x67
    bl fn_8009199C
    subic r0, r3, 0x1
    subfe r3, r0, r3
    b lbl_800960C8
    li r3, 0x0
    b lbl_800960C8
    li r3, 0x0
    b lbl_800960C8
    li r3, 0x0
    b lbl_800960C8
    li r3, 0x0
    b lbl_800960C8
    li r3, 0x0
    b lbl_800960C8
    li r3, 0x0
    b lbl_800960C8
    li r3, 0x0
    b lbl_800960C8
    li r3, 0x0
    b lbl_800960C8
    li r3, 0x0
    b lbl_800960C8
lbl_800960C4:
    li r3, 0x1
lbl_800960C8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800960D8
asm s32 fn_800960D8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r3, lbl_8034C350@ha
    addi r31, r3, lbl_8034C350@l
lbl_800960F4:
    li r3, 0x1
    li r4, 0x33
    bl fn_8005CF00
    mr r30, r3
    lbzx r0, r31, r3
    cmpwi r0, 0x0
    beq lbl_800960F4
    bl fn_80095D30
    cmpwi r3, 0x0
    beq lbl_800960F4
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80096138(void) {
    M2C_FIELD(&lbl_80395728, s32 *, 0xFF4) = (s32) (0);
}

// asm_to_cpp: fn_8009614C
asm void fn_8009614C(void) {
    nofralloc
    lis r3, lbl_80395728@ha
    addi r5, r3, lbl_80395728@l
    lwz r3, 0xff4(r5)
    addi r4, r3, 0x1
    stw r4, 0xff4(r5)
    lis r3, 0x2
    subi r0, r3, 0x7961
    cmpw r4, r0
    blelr
    stw r0, 0xff4(r5)
    blr
}

s32 fn_80096178(void) {
    return (s32) (-1);
}

s32 fn_80096180(void) {
    return (s32) (-1);
}

s32 fn_80096188(void) {
    return (s32) (-1);
}

void fn_80096190(void) {
}

s32 fn_80096194(void) {
    return (s32) (-1);
}

s32 fn_8009619C(void) {
    return (s32) (-1);
}

s32 fn_800961A4(void) {
    return (s32) (-1);
}

void fn_800961AC(void) {
}

s32 fn_800961B0(void) {
    return (s32) (-1);
}

s32 fn_800961B8(void) {
    return (s32) (-1);
}

s32 fn_800961C0(void) {
    return (s32) (-1);
}

void fn_800961C8(void) {
}

void fn_800961CC(s32 arg0) {
    if (arg0 == 0) {
        M2C_FIELD(lbl_8049C300, s8 **, 0x2714) = (s8 *) ((s8 *) (lbl_8049C300 + (arg0 * 0x21BC) + 0x2718));
    }
}

s32 fn_800961EC(void) {
    if ((s32) M2C_FIELD(lbl_8049C300, s32 *, 0x2714) == 0) {
        fn_800961CC((s32) (0));
    }
    return (s32) (M2C_FIELD(lbl_8049C300, s32 *, 0x2714));
}

// asm_to_cpp: fn_80096228
asm s32 fn_80096228() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    lwz r4, lbl_8049C300
    stw r3, 0x2714(r4)
    b fn_80091778
    blr
}

void fn_80096240(void) {
    s32 temp_r0;

    temp_r0 = (s32) (M2C_FIELD(&lbl_80395728, s32 *, 0x11C4) + 1);
    M2C_FIELD(&lbl_80395728, s32 *, 0x11C4) = (s32) (temp_r0);
    if (temp_r0 > 0x3E7) {
        M2C_FIELD(&lbl_80395728, s32 *, 0x11C4) = (s32) (0x3E7);
    }
}

void fn_80096268(void) {
    memset((s32) ((s32) &lbl_8039A0D0), (s32) (0), (s32) (0x3C8C));
    fn_80091260();
    fn_800962A0();
}

void fn_800962A0(void) {
    fn_80091698();
}

void fn_800962A4(void) {
    fn_80091708();
}

// asm_to_cpp: fn_800962A8
asm s32 fn_800962A8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800962A0
    lis r3, lbl_8039A0D0@ha
    addi r4, r3, lbl_8039A0D0@l
    lis r3, lbl_8039DD5C@ha
    addi r5, r3, lbl_8039DD5C@l
    li r0, 0x3c8c
    mtctr r0
lbl_800962D0:
    lbz r0, 0x0(r4)
    extsb r3, r0
    lbz r0, 0x0(r5)
    extsb r0, r0
    cmpw r3, r0
    beq lbl_800962F0
    li r3, 0x1
    b lbl_80096300
lbl_800962F0:
    addi r5, r5, 0x1
    addi r4, r4, 0x1
    bdnz lbl_800962D0
    li r3, 0x0
lbl_80096300:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80096310(void) {
    memcpy((s32) ((s32) &lbl_8039DD5C), (s32) ((s32) &lbl_8039A0D0), (s32) (0x3C8C));
}

// asm_to_cpp: fn_80096328
asm void fn_80096328(s32 arg0) {
    nofralloc
    mulli r4, r3, 0x21bc
    lis r3, lbl_8039A0D0@ha
    addi r0, r3, lbl_8039A0D0@l
    add r3, r0, r4
    addi r3, r3, 0x1ad0
    lwz r0, lbl_8049C300
    add r4, r0, r4
    addi r4, r4, 0x2718
    li r5, 0x21bc
    b memcpy
}

// asm_to_cpp: fn_80096350
asm void fn_80096350(s32 arg0) {
    nofralloc
    mulli r5, r3, 0x21bc
    lwz r0, lbl_8049C300
    add r3, r0, r5
    addi r3, r3, 0x2718
    lis r4, lbl_8039A0D0@ha
    addi r0, r4, lbl_8039A0D0@l
    add r4, r0, r5
    addi r4, r4, 0x1ad0
    li r5, 0x21bc
    b memcpy
}

void fn_80096378(s32 arg0, s32 arg1) {
    M2C_FIELD(&lbl_8039A0D0, s32 *, 0x1AC8) = (s32) (arg0);
    M2C_FIELD(&lbl_8039A0D0, s32 *, 0x1ACC) = (s32) (arg1);
}

// asm_to_cpp: fn_8009638C
asm s32 fn_8009638C(s8 *arg0) {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_8009639C
    li r3, 0x0
    blr
lbl_8009639C:
    lwz r3, 0x108(r3)
    cmpwi r3, 0x0
    bge lbl_800963B0
    li r3, 0x0
    blr
lbl_800963B0:
    cmpwi r3, 0xff
    blelr
    li r3, 0xff
    blr
}

// asm_to_cpp: fn_800963C0
asm s8 * fn_800963C0(s8 *arg0, s16 arg1) {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    bne lbl_800963EC
    li r3, 0x0
    b lbl_800964AC
lbl_800963EC:
    cmpwi r4, 0x0
    beq lbl_800963FC
    li r3, 0x0
    b lbl_800964AC
lbl_800963FC:
    lwz r0, 0x3778(r3)
    cmpwi r0, 0x0
    bne lbl_80096410
    li r3, 0x0
    b lbl_800964AC
lbl_80096410:
    lwz r0, 0x3774(r3)
    cmpwi r0, 0x0
    beq lbl_80096424
    li r3, 0x0
    b lbl_800964AC
lbl_80096424:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_80096490
    li r0, 0x0
    stw r0, 0x3774(r3)
    addi r3, r1, 0x8
    li r4, 0x7
    lwz r5, 0x18(r30)
    li r6, 0x0
    li r7, 0xa
    bl fn_8008B160
    addi r3, r1, 0x8
    li r4, 0x15
    li r5, 0x0
    bl fn_801648C4
    cmpwi r3, 0x0
    bne lbl_80096470
    b lbl_800964AC
lbl_80096470:
    lwz r4, 0x14(r3)
    stw r30, 0x68(r4)
    lwz r3, 0x14(r3)
    lwz r0, 0x50(r3)
    stw r0, 0x3774(r30)
    mr r3, r30
    mr r4, r31
    bl fn_800964C4
lbl_80096490:
    lwz r0, 0x3778(r30)
    cmpwi r0, 0x0
    beq lbl_800964A8
    lwz r0, 0x0(r30)
    ori r0, r0, 0x40
    stw r0, 0x0(r30)
lbl_800964A8:
    lwz r3, 0x3774(r30)
lbl_800964AC:
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// asm_to_cpp: fn_800964C4
asm void fn_800964C4(s8 *arg0, s16 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r28, r3
    cmpwi r3, 0x0
    beq lbl_80096618
    lwz r31, 0x3774(r3)
    cmpwi r31, 0x0
    beq lbl_80096618
    li r30, 0x0
    stw r30, 0x0(r31)
    extsh r0, r4
    sth r0, 0x4(r31)
    sth r30, 0x6(r31)
    bl fn_8005CEFC
    srawi r0, r3, 8
    stw r0, 0x8(r31)
    stw r30, 0xc(r31)
    stw r30, 0x10(r31)
    sth r30, 0x14(r31)
    sth r30, 0x16(r31)
    sth r30, 0x18(r31)
    sth r30, 0x1a(r31)
    stb r30, 0x1c(r31)
    stb r30, 0x1d(r31)
    sth r30, 0x1e(r31)
    addi r3, r31, 0x20
    bl fn_80096D18
    addi r3, r31, 0x26
    bl fn_80096D18
    li r29, 0x0
lbl_80096548:
    add r3, r31, r30
    addi r3, r3, 0x2c
    bl fn_80096D18
    addi r29, r29, 0x1
    addi r30, r30, 0x6
    cmpwi r29, 0x10
    blt lbl_80096548
    stw r28, 0x90(r31)
    li r0, 0x0
    sth r0, 0x8c(r31)
    sth r0, 0x8e(r31)
    stw r0, 0x104(r31)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r3, 0x4(r3)
    subi r0, r3, 0x14
    cmplwi r0, 0x9
    ble lbl_800965DC
    cmplwi r3, 0xe
    beq lbl_800965A0
    cmplwi r3, 0x12
    bne lbl_800965C4
lbl_800965A0:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x8(r28)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r0, 0x44(r3)
    stw r0, 0x108(r31)
    b lbl_800965F0
lbl_800965C4:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x44(r3)
    stw r0, 0x108(r31)
    b lbl_800965F0
lbl_800965DC:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x44(r3)
    stw r0, 0x108(r31)
lbl_800965F0:
    lwz r0, 0x108(r31)
    cmpwi r0, 0x0
    bgt lbl_80096608
    li r0, 0x0
    stw r0, 0x108(r31)
    b lbl_80096618
lbl_80096608:
    cmpwi r0, 0xff
    blt lbl_80096618
    li r0, 0xff
    stw r0, 0x108(r31)
lbl_80096618:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80096630
asm s32 fn_80096630(s8 *arg0, s32 arg1) {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_80096640
    li r3, 0x0
    blr
lbl_80096640:
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r5, 0x4(r4)
    cmplwi r5, 0xc
    beq lbl_80096664
    cmplwi r5, 0x1e
    beq lbl_80096664
    cmplwi r5, 0x1a
    bne lbl_800966D4
lbl_80096664:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_800966D4
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    lwz r0, 0x70(r4)
    cmpwi r0, 0x2
    bne lbl_800966B4
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_800966D4
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    lwz r0, 0xc(r3)
    mulli r0, r0, 0x3cc
    add r3, r4, r0
    lwz r3, 0x4c(r3)
    blr
lbl_800966B4:
    cmplwi r5, 0x1a
    bne lbl_800966D4
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_800966D4
    li r3, 0x0
    blr
lbl_800966D4:
    lwz r4, 0x3774(r3)
    cmpwi r4, 0x0
    bne lbl_80096710
    lwz r0, 0x8(r3)
    cmpwi r0, -0x1
    bne lbl_800966F4
    li r3, 0x0
    blr
lbl_800966F4:
    lis r4, lbl_803BD100@ha
    addi r4, r4, lbl_803BD100@l
    lwz r0, 0xc(r3)
    mulli r0, r0, 0x3cc
    add r3, r4, r0
    lwz r3, 0x4c(r3)
    blr
lbl_80096710:
    lwz r0, 0x3778(r3)
    cmpwi r0, 0x0
    bne lbl_80096724
    lwz r3, 0xc(r4)
    blr
lbl_80096724:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8009673C
    li r3, 0x0
    blr
lbl_8009673C:
    lwz r3, 0xc(r4)
    blr
}

void fn_80096744(void) {
}

// asm_to_cpp: fn_80096748
asm s32 fn_80096748() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x0
    beqlr
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_80096F10
    blr
}

s32 fn_8009676C(s8 *arg0) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    temp_r0 = (s32) ((M2C_FIELD(arg0, s32 *, 8) * 0x41C64E6D) + 0x3039);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r0);
    return (s32) ((temp_r0 / 65536) & 0x7FFF);
}

s32 fn_800967A4(s8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    temp_r0 = (s32) ((M2C_FIELD(arg0, s32 *, 8) * 0x41C64E6D) + 0x3039);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r0);
    return (s32) (arg1 + ((u32) (((temp_r0 / 65536) & 0x7FFF) * (arg2 - arg1)) >> 0xFU));
}

void fn_800967EC(s32 *arg0, s32 arg1) {
    if ((arg0 != NULL) && (arg1 != 0)) {
        *arg0 = arg1;
    }
}

// asm_to_cpp: fn_80096804
asm s32 fn_80096804(s32 arg0_pad, s32 arg1_pad, s32 arg2_pad) {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi cr1, r4, 0x0
    beqlr cr1
    li r0, 0x200
    stw r0, 0x0(r3)
    li r6, 0x0
    stw r6, 0x4(r3)
    sth r6, 0x8(r3)
    sth r6, 0xa(r3)
    stb r6, 0xc(r3)
    stb r6, 0xd(r3)
    stb r6, 0xe(r3)
    stb r6, 0xf(r3)
    sth r6, 0x10(r3)
    sth r6, 0x12(r3)
    sth r6, 0x14(r3)
    sth r6, 0x16(r3)
    stw r6, 0x28(r3)
    li r0, -0x1
    stw r0, 0x2c(r3)
    stw r6, 0x30(r3)
    stw r6, 0x18(r3)
    lfs f0, lbl_8049F510
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f0, 0x24(r3)
    cmpwi r5, 0x0
    bnelr
    beqlr cr1
    addi r3, r3, 0x34
    b fn_800967EC
    blr
}

s32 fn_80096888(s8 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return (s32) (0);
    }
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (arg1);
    return (s32) (arg1);
}

s32 fn_800968A4(s8 *arg0, s32 arg1) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) | arg1);
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (temp_r0);
    return (s32) (temp_r0);
}

s32 fn_800968C8(s8 *arg0, s32 arg1) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) & arg1);
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (temp_r0);
    return (s32) (temp_r0);
}

s32 fn_800968EC(s8 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return (s32) (0);
    }
    return (s32) (M2C_FIELD(arg0, s32 *, 0xCC) & arg1);
}

s32 fn_80096908(s8 *arg0, s32 arg1) {
    s32 temp_r0;

    if (arg0 == NULL) {
        return (s32) (0);
    }
    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) ^ arg1);
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (temp_r0);
    return (s32) (temp_r0);
}

// asm_to_cpp: fn_8009692C
asm s32 fn_8009692C(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80096950
    li r3, 0x0
    b lbl_80096A6C
lbl_80096950:
    cmpwi r4, 0x0
    beq lbl_8009697C
    cmpwi r4, 0x1
    beq lbl_80096994
    cmpwi r4, 0x2
    beq lbl_80096A24
    cmpwi r4, 0x3
    beq lbl_80096A3C
    cmpwi r4, 0x4
    beq lbl_80096A54
    b lbl_80096A68
lbl_8009697C:
    lbz r0, 0xd8(r3)
    add r0, r0, r5
    clrlwi r0, r0, 24
    stb r0, 0xd8(r3)
    mr r3, r0
    b lbl_80096A6C
lbl_80096994:
    lbz r0, 0xd9(r3)
    add r0, r0, r5
    clrlwi r0, r0, 24
    stb r0, 0xd9(r3)
    bl fn_8009638C
    srawi r3, r3, 6
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_800969E8
    cmpwi r3, 0x0
    beq lbl_800969CC
    cmpwi r3, 0x3
    beq lbl_80096A04
    b lbl_80096A1C
lbl_800969CC:
    lbz r0, 0xd9(r31)
    cmplwi r0, 0x8
    ble lbl_80096A1C
    mr r3, r31
    lis r4, 0x8
    bl fn_800968A4
    b lbl_80096A1C
lbl_800969E8:
    lbz r0, 0xd9(r31)
    cmplwi r0, 0x5
    ble lbl_80096A1C
    mr r3, r31
    lis r4, 0x8
    bl fn_800968A4
    b lbl_80096A1C
lbl_80096A04:
    lbz r0, 0xd9(r31)
    cmplwi r0, 0x3
    ble lbl_80096A1C
    mr r3, r31
    lis r4, 0x8
    bl fn_800968A4
lbl_80096A1C:
    lbz r3, 0xd9(r31)
    b lbl_80096A6C
lbl_80096A24:
    lbz r0, 0xda(r3)
    add r0, r0, r5
    clrlwi r0, r0, 24
    stb r0, 0xda(r3)
    mr r3, r0
    b lbl_80096A6C
lbl_80096A3C:
    lbz r0, 0xdb(r3)
    add r0, r0, r5
    clrlwi r0, r0, 24
    stb r0, 0xdb(r3)
    mr r3, r0
    b lbl_80096A6C
lbl_80096A54:
    lwz r0, 0xf4(r3)
    add r0, r0, r5
    stw r0, 0xf4(r3)
    mr r3, r0
    b lbl_80096A6C
lbl_80096A68:
    li r3, 0x0
lbl_80096A6C:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80096A80
asm s32 fn_80096A80(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80096AA4
    li r3, 0x0
    b lbl_80096B98
lbl_80096AA4:
    cmpwi r4, 0x0
    beq lbl_80096AD0
    cmpwi r4, 0x1
    beq lbl_80096AE0
    cmpwi r4, 0x2
    beq lbl_80096B68
    cmpwi r4, 0x3
    beq lbl_80096B78
    cmpwi r4, 0x4
    beq lbl_80096B88
    b lbl_80096B94
lbl_80096AD0:
    clrlwi r0, r5, 24
    stb r0, 0xd8(r3)
    mr r3, r0
    b lbl_80096B98
lbl_80096AE0:
    clrlwi r0, r5, 24
    stb r0, 0xd9(r3)
    bl fn_8009638C
    srawi r3, r3, 6
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_80096B2C
    cmpwi r3, 0x0
    beq lbl_80096B10
    cmpwi r3, 0x3
    beq lbl_80096B48
    b lbl_80096B60
lbl_80096B10:
    lbz r0, 0xd9(r31)
    cmplwi r0, 0x8
    ble lbl_80096B60
    mr r3, r31
    lis r4, 0x8
    bl fn_800968A4
    b lbl_80096B60
lbl_80096B2C:
    lbz r0, 0xd9(r31)
    cmplwi r0, 0x5
    ble lbl_80096B60
    mr r3, r31
    lis r4, 0x8
    bl fn_800968A4
    b lbl_80096B60
lbl_80096B48:
    lbz r0, 0xd9(r31)
    cmplwi r0, 0x3
    ble lbl_80096B60
    mr r3, r31
    lis r4, 0x8
    bl fn_800968A4
lbl_80096B60:
    lbz r3, 0xd9(r31)
    b lbl_80096B98
lbl_80096B68:
    clrlwi r0, r5, 24
    stb r0, 0xda(r3)
    mr r3, r0
    b lbl_80096B98
lbl_80096B78:
    clrlwi r0, r5, 24
    stb r0, 0xdb(r3)
    mr r3, r0
    b lbl_80096B98
lbl_80096B88:
    stw r5, 0xf4(r3)
    mr r3, r5
    b lbl_80096B98
lbl_80096B94:
    li r3, 0x0
lbl_80096B98:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80096BAC
asm void fn_80096BAC(s32 *arg0, s32 *arg1, s32 arg2) {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x0
    beqlr
    b lbl_80096BC4
    blr
lbl_80096BC4:
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    mr r7, r3
    mr r6, r4
    li r0, 0x3
    mtctr r0
lbl_80096BDC:
    lwz r5, 0x4(r6)
    lwzu r0, 0x8(r6)
    stw r5, 0x4(r7)
    stwu r0, 0x8(r7)
    bdnz lbl_80096BDC
    lwz r0, 0x4(r6)
    stw r0, 0x4(r7)
    addi r6, r3, 0x1c
    addi r5, r4, 0x1c
    li r0, 0x3
    mtctr r0
lbl_80096C08:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_80096C08
    blr
}

// asm_to_cpp: fn_80096C20
asm u16 fn_80096C20(u16 arg0, s8 *arg1, s32 arg2, s32 arg3) {
    nofralloc
    li r10, 0x0
    li r11, 0x0
    cmpwi r4, 0x0
    bne lbl_80096C38
    li r3, 0x0
    blr
lbl_80096C38:
    cmpwi r5, 0x1
    beq lbl_80096CA0
    li r9, 0x0
    clrlwi r7, r3, 16
    li r6, 0x1
    li r0, 0x7
lbl_80096C50:
    slw r3, r6, r9
    and r3, r7, r3
    cmpwi r3, 0x0
    beq lbl_80096C90
    li r3, 0x0
    mtctr r0
lbl_80096C68:
    add r8, r4, r3
    lha r5, 0x4(r8)
    cmpw r9, r5
    bne lbl_80096C88
    lha r3, 0x6(r8)
    add r11, r11, r3
    addi r10, r10, 0x1
    b lbl_80096C90
lbl_80096C88:
    addi r3, r3, 0x4
    bdnz lbl_80096C68
lbl_80096C90:
    addi r9, r9, 0x1
    cmpwi r9, 0x7
    blt lbl_80096C50
    b lbl_80096CFC
lbl_80096CA0:
    li r9, 0x0
    clrlwi r7, r3, 16
    li r6, 0x1
    li r0, 0x6
lbl_80096CB0:
    slw r3, r6, r9
    and r3, r7, r3
    cmpwi r3, 0x0
    beq lbl_80096CF0
    li r3, 0x0
    mtctr r0
lbl_80096CC8:
    add r8, r4, r3
    lha r5, 0x20(r8)
    cmpw r9, r5
    bne lbl_80096CE8
    lha r3, 0x22(r8)
    add r11, r11, r3
    addi r10, r10, 0x1
    b lbl_80096CF0
lbl_80096CE8:
    addi r3, r3, 0x4
    bdnz lbl_80096CC8
lbl_80096CF0:
    addi r9, r9, 0x1
    cmpwi r9, 0x6
    blt lbl_80096CB0
lbl_80096CFC:
    cmpwi r10, 0x0
    beq lbl_80096D10
    divw r0, r11, r10
    clrlwi r3, r0, 16
    blr
lbl_80096D10:
    li r3, 0x64
    blr
}

void fn_80096D18(s8 *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (0);
        M2C_FIELD(arg0, s16 *, 2) = (s16) (0);
        M2C_FIELD(arg0, s16 *, 4) = (s16) (0xFF);
    }
}

void fn_80096D38(s32 arg0) {
    fn_80096F10((s32 *) ((s32 *) arg0));
}

// asm_to_cpp: fn_80096D3C
asm u16 * fn_80096D3C(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80096D60
    li r3, 0x0
    b lbl_80096E38
lbl_80096D60:
    cmpwi r4, 0x0
    bne lbl_80096D70
    li r3, 0x0
    b lbl_80096E38
lbl_80096D70:
    lbz r8, 0x1c(r3)
    cmplwi r8, 0x10
    blt lbl_80096D84
    li r3, 0x0
    b lbl_80096E38
lbl_80096D84:
    li r5, 0x0
    mtctr r8
    cmpwi r8, 0x0
    ble lbl_80096E08
lbl_80096D94:
    lhz r7, 0x4(r4)
    add r6, r3, r5
    lhz r0, 0x30(r6)
    cmplw r7, r0
    bne lbl_80096E00
    lhz r3, 0x0(r4)
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80096DC8
    lhz r0, 0x2c(r6)
    ori r0, r0, 0x8
    sth r0, 0x2c(r6)
    b lbl_80096DF8
lbl_80096DC8:
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80096DE4
    lhz r0, 0x2c(r6)
    ori r0, r0, 0x10
    sth r0, 0x2c(r6)
    b lbl_80096DF8
lbl_80096DE4:
    lhz r3, 0x2(r4)
    lhz r0, 0x2e(r6)
    cmplw r0, r3
    bge lbl_80096DF8
    sth r3, 0x2e(r6)
lbl_80096DF8:
    li r3, 0x0
    b lbl_80096E38
lbl_80096E00:
    addi r5, r5, 0x6
    bdnz lbl_80096D94
lbl_80096E08:
    mulli r0, r8, 0x6
    add r3, r3, r0
    addi r3, r3, 0x2c
    bl fn_80096E4C
    lbz r3, 0x1c(r31)
    addi r0, r3, 0x1
    stb r0, 0x1c(r31)
    clrlwi r3, r0, 24
    subi r0, r3, 0x1
    mulli r0, r0, 0x6
    add r3, r31, r0
    addi r3, r3, 0x2c
lbl_80096E38:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80096E4C(s8 *arg0, s8 *arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) ((u16) M2C_FIELD(arg1, u16 *, 0));
    M2C_FIELD(arg0, u16 *, 2) = (u16) ((u16) M2C_FIELD(arg1, u16 *, 2));
    M2C_FIELD(arg0, u16 *, 4) = (u16) ((u16) M2C_FIELD(arg1, u16 *, 4));
}

void fn_80096E68(s8 *arg0, s8 *arg1) {
    s32 temp_r4;
    u16 temp_r3;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        fn_80096E4C((s8 *) (arg0 + 0x26), (s8 *) (arg0 + 0x20));
        fn_80096E4C((s8 *) (arg0 + 0x20), (s8 *) (arg1));
        temp_r4 = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0x66) | 5);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_r4);
        temp_r3 = (u16) (M2C_FIELD(arg0, u16 *, 0x20) | 1);
        M2C_FIELD(arg0, u16 *, 0x20) = (u16) (temp_r3);
        if ((s32) (temp_r3 & 4) != 0) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (temp_r4 | 0x40));
            return;
        }
        if ((s32) (temp_r3 & 2) != 0) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (temp_r4 | 0x20));
        }
    }
}

// asm_to_cpp: fn_80096F10
asm void fn_80096F10(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80096F54
    lwz r4, 0x0(r3)
    li r0, -0x65
    and r0, r4, r0
    ori r0, r0, 0x8
    stw r0, 0x0(r3)
    addi r3, r3, 0x26
    addi r4, r31, 0x20
    bl fn_80096E4C
    addi r3, r31, 0x20
    bl fn_80096D18
lbl_80096F54:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80096F68
asm s32 fn_80096F68(s8 *arg0) {
    nofralloc
    li r8, -0x1
    li r9, -0x1
    cmpwi r3, 0x0
    bne lbl_80096F80
    li r3, -0x1
    blr
lbl_80096F80:
    lhz r5, 0x20(r3)
    clrlwi r0, r5, 31
    cmpwi r0, 0x0
    beq lbl_80096FA4
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80096FA4
    lhz r9, 0x22(r3)
lbl_80096FA4:
    li r10, 0x0
    li r4, 0x0
    lbz r0, 0x1c(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_80097058
lbl_80096FBC:
    li r7, 0x0
    andi. r0, r5, 0x101
    cmpwi r0, 0x101
    bne lbl_80096FE8
    add r6, r3, r4
    lhz r0, 0x2c(r6)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80097014
    li r7, 0x1
    b lbl_80097014
lbl_80096FE8:
    add r6, r3, r4
    lhz r0, 0x2c(r6)
    rlwinm r0, r0, 0, 27, 28
    cmpwi r0, 0x0
    beq lbl_80097004
    li r7, 0x1
    b lbl_80097014
lbl_80097004:
    lhz r0, 0x2e(r6)
    cmpw r9, r0
    bge lbl_80097014
    li r7, 0x1
lbl_80097014:
    cmpwi r7, 0x0
    beq lbl_8009704C
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_80097044
    lhz r7, 0x30(r6)
    lhz r0, 0x24(r3)
    cmplw r0, r7
    beq lbl_8009704C
    cmplwi r7, 0xff
    beq lbl_8009704C
lbl_80097044:
    lhz r9, 0x2e(r6)
    mr r8, r10
lbl_8009704C:
    addi r10, r10, 0x1
    addi r4, r4, 0x6
    bdnz lbl_80096FBC
lbl_80097058:
    mr r3, r8
    blr
}

// asm_to_cpp: fn_80097060
asm void fn_80097060(s8 *arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    beq lbl_800970AC
    mulli r0, r5, 0x6
    lhz r5, 0x24(r3)
    add r4, r3, r0
    lhz r0, 0x30(r4)
    cmplw r5, r0
    beq lbl_800970AC
    addi r4, r4, 0x2c
    bl fn_80096E68
    lhz r0, 0x24(r30)
    stw r0, 0x8(r31)
lbl_800970AC:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800970C4
asm void fn_800970C4(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    cmpwi r3, 0x0
    beq lbl_800971E8
    cmpwi r4, 0x0
    beq lbl_800971E8
    lwz r31, 0x14(r3)
    cmpwi r31, 0x0
    beq lbl_800971E8
    lwz r3, 0x90(r31)
    cmpwi r3, 0x0
    beq lbl_800971E8
    lwz r0, 0x3854(r3)
    cmpwi r0, 0x0
    beq lbl_800971E8
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_800971E8
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80097138
    rlwinm r0, r3, 0, 29, 27
    stw r0, 0x0(r31)
lbl_80097138:
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_800971E8
    rlwinm r0, r3, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80097198
    lha r3, 0x1e(r31)
    cmpwi r3, 0x0
    beq lbl_80097184
    subi r0, r3, 0x1
    sth r0, 0x1e(r31)
    lha r0, 0x1e(r31)
    cmpwi r0, 0x0
    bgt lbl_800971E8
    li r0, 0x0
    sth r0, 0x1e(r31)
    b lbl_80097198
    b lbl_800971E8
lbl_80097184:
    li r0, 0x0
    stb r0, 0x1d(r31)
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x0(r31)
lbl_80097198:
    lbz r0, 0x1c(r31)
    cmpwi r0, 0x0
    beq lbl_800971DC
    lwz r0, 0x0(r31)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    bne lbl_800971D4
    mr r3, r31
    bl fn_80096F68
    mr r5, r3
    cmpwi r3, 0x0
    blt lbl_800971D4
    mr r3, r31
    mr r4, r30
    bl fn_80097060
lbl_800971D4:
    li r0, 0x0
    stb r0, 0x1c(r31)
lbl_800971DC:
    lwz r3, 0x10(r31)
    addi r0, r3, 0x1
    stw r0, 0x10(r31)
lbl_800971E8:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80097200(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    if ((arg0 != 0) && (arg1 != 0) && (arg2 != NULL) && (arg3 != 0)) {
        fn_80096BAC((s32 *) (arg1 + 0x94), (s32 *) (arg2), (s32) (0));
        fn_80096804((s32) (arg1 + 0xCC), (s32) (arg3), (s32) (0));
    }
}

// asm_to_cpp: fn_80097274
asm s32 fn_80097274() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x0
    beqlr
    addi r3, r4, 0xcc
    li r4, 0x0
    li r5, 0x1
    b fn_80096804
    blr
}

// asm_to_cpp: fn_80097298
asm u8 fn_80097298(s8 *arg0, u8 arg1, s32 arg2) {
    nofralloc
    subic r0, r3, 0x1
    subfe r0, r0, r0
    andc r3, r4, r0
    blr
}

// asm_to_cpp: fn_800972A8
asm s16 fn_800972A8(s8 *arg0, s16 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    mr r31, r4
    cmpwi r3, 0x0
    bne lbl_800972D4
    li r3, 0x0
    b lbl_80097310
lbl_800972D4:
    cmpwi r4, 0x1
    ble lbl_8009730C
    bl fn_8009638C
    srawi r0, r3, 4
    mulli r0, r0, 0x3
    subf r31, r0, r31
    mr r3, r30
    li r4, 0x0
    li r5, 0x10
    bl fn_800967A4
    subf r31, r3, r31
    cmpwi r31, 0x1
    bge lbl_8009730C
    li r31, 0x1
lbl_8009730C:
    mr r3, r31
lbl_80097310:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80097328(s32 arg0, s32 arg1, s32 arg2) {
}

// asm_to_cpp: fn_8009732C
asm s32 fn_8009732C(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r29, r3
    mr r28, r4
    cmpwi r3, 0x0
    bne lbl_80097358
    li r3, 0x0
    b lbl_80097448
lbl_80097358:
    cmpwi r4, 0x0
    bne lbl_80097368
    li r3, 0x0
    b lbl_80097448
lbl_80097368:
    bl fn_8009676C
    mr r31, r3
    mr r3, r29
    bl fn_8009638C
    srawi r0, r3, 4
    lis r3, lbl_8034C818@ha
    addi r3, r3, lbl_8034C818@l
    lbzx r0, r3, r0
    slwi r30, r0, 7
    lhz r3, 0xa(r28)
    addi r4, r29, 0x94
    li r5, 0x1
    li r6, 0x0
    bl fn_80096C20
    clrlwi r0, r3, 16
    mulli r3, r0, 0xc00
    li r0, 0x64
    divw r0, r3, r0
    add r3, r30, r0
    subi r30, r3, 0xc00
    lhz r0, 0xa(r28)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80097418
    mr r3, r29
    li r4, 0x800
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_800973F0
    lbz r3, 0xd8(r29)
    subi r0, r3, 0xc
    slwi r0, r0, 3
    slwi r0, r0, 7
    add r30, r30, r0
lbl_800973F0:
    mr r3, r29
    lis r4, 0x10
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_80097418
    lbz r3, 0xdb(r29)
    subi r0, r3, 0x5
    slwi r0, r0, 3
    slwi r0, r0, 7
    add r30, r30, r0
lbl_80097418:
    cmpwi r30, 0x0
    bge lbl_80097428
    li r30, 0x0
    b lbl_80097434
lbl_80097428:
    cmpwi r30, 0x7fff
    ble lbl_80097434
    li r30, 0x7fff
lbl_80097434:
    xor r0, r30, r31
    srawi r3, r0, 1
    and r0, r0, r30
    subf r0, r0, r3
    srwi r3, r0, 31
lbl_80097448:
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80097460
asm s32 fn_80097460(s8 *arg0, s8 *arg1, s8 *arg2, s8 *arg3) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    cmpwi r3, 0x0
    bne lbl_8009749C
    li r3, 0x0
    b lbl_8009782C
lbl_8009749C:
    cmpwi r4, 0x0
    bne lbl_800974AC
    li r3, 0x0
    b lbl_8009782C
lbl_800974AC:
    cmpwi r5, 0x0
    bne lbl_800974BC
    li r3, 0x0
    b lbl_8009782C
lbl_800974BC:
    cmpwi r6, 0x0
    bne lbl_800974CC
    li r3, 0x0
    b lbl_8009782C
lbl_800974CC:
    addi r30, r3, 0xcc
    cmpwi r30, 0x0
    bne lbl_800974E0
    li r3, 0x0
    b lbl_8009782C
lbl_800974E0:
    lwz r9, 0x3854(r5)
    cmpwi r9, 0x0
    bne lbl_800974F4
    li r3, 0x0
    b lbl_8009782C
lbl_800974F4:
    lwz r7, 0x50(r4)
    lis r6, fn_80037F7C+0x84@ha
    addi r0, r6, fn_80037F7C+0x84@l
    and r0, r7, r0
    cmpwi r0, 0x0
    beq lbl_8009751C
    li r4, -0x801
    bl fn_800968C8
    li r3, 0x0
    b lbl_8009782C
lbl_8009751C:
    lwz r6, 0x54(r4)
    rlwinm r0, r6, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_80097534
    li r3, 0x0
    b lbl_8009782C
lbl_80097534:
    lwz r8, 0x50(r5)
    rlwinm r0, r8, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_8009754C
    li r3, 0x0
    b lbl_8009782C
lbl_8009754C:
    lwz r3, 0x54(r5)
    rlwinm r0, r3, 0, 21, 21
    rlwimi r0, r3, 0, 9, 9
    cmpwi r0, 0x0
    beq lbl_80097568
    li r3, 0x0
    b lbl_8009782C
lbl_80097568:
    rlwinm r0, r7, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80097588
    rlwinm r0, r6, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80097588
    li r3, 0x0
    b lbl_8009782C
lbl_80097588:
    clrrwi r0, r8, 31
    cmpwi r0, 0x0
    beq lbl_800975A4
    lwz r3, 0x4(r9)
    lwz r0, 0x4(r4)
    cmpw r3, r0
    beq lbl_800975DC
lbl_800975A4:
    mr r3, r25
    lis r4, 0x4
    bl fn_800968EC
    cmpwi r3, 0x0
    bne lbl_80097828
    lfs f0, lbl_8049F510
    lfs f1, 0x1c(r30)
    fcmpu cr0, f0, f1
    beq lbl_80097828
    la r3, lbl_8049F510
    lfs f0, 0x4(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80097828
lbl_800975DC:
    li r29, 0x1
    mr r3, r25
    lis r4, 0x40
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_8009760C
    mr r3, r25
    lis r4, 0xffc0
    subi r4, r4, 0x1
    bl fn_800968C8
    li r3, 0x0
    b lbl_8009782C
lbl_8009760C:
    lhz r0, 0x24(r25)
    cmplwi r0, 0x2
    bne lbl_80097620
    li r3, 0x1
    b lbl_8009782C
lbl_80097620:
    lwz r0, 0x50(r26)
    rlwinm r0, r0, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_80097638
    li r3, 0x1
    b lbl_8009782C
lbl_80097638:
    mr r3, r25
    li r4, 0x800
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_80097654
    li r3, 0x0
    b lbl_8009782C
lbl_80097654:
    mr r3, r25
    bl fn_8009676C
    mr r31, r3
    mr r3, r25
    bl fn_8009638C
    srawi r0, r3, 4
    lis r3, lbl_8034C828@ha
    addi r3, r3, lbl_8034C828@l
    lbzx r0, r3, r0
    slwi r24, r0, 7
    mr r3, r25
    lis r4, 0x20
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_80097698
    li r24, 0x7fff
    b lbl_800976C0
lbl_80097698:
    mr r3, r25
    lis r4, 0x10
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_800976C0
    lbz r3, 0xf(r30)
    subi r0, r3, 0x5
    slwi r0, r0, 3
    slwi r0, r0, 7
    add r24, r24, r0
lbl_800976C0:
    li r3, 0x3
    addi r4, r25, 0x94
    li r5, 0x1
    li r6, 0x0
    bl fn_80096C20
    clrlwi r0, r3, 16
    mulli r3, r0, 0xc00
    li r0, 0x64
    divw r0, r3, r0
    add r3, r24, r0
    subi r24, r3, 0xc00
    cmpwi r24, 0x0
    bge lbl_800976FC
    li r24, 0x0
    b lbl_80097708
lbl_800976FC:
    cmpwi r24, 0x7fff
    ble lbl_80097708
    li r24, 0x7fff
lbl_80097708:
    mr r3, r27
    bl fn_8006AFA0
    fmr f31, f1
    mr r3, r26
    bl fn_8006AFA0
    fsubs f1, f1, f31
    la r3, lbl_8049F510
    lfs f0, 0x8(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80097744
    lwz r0, 0x108(r25)
    cmpwi r0, 0xb0
    bgt lbl_80097744
    li r29, 0x0
lbl_80097744:
    mr r3, r25
    mr r4, r28
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_800977E4
    cmpwi r29, 0x0
    beq lbl_800977E4
    mr r3, r25
    lis r4, 0x2
    bl fn_800968A4
    cmpw r31, r24
    bgt lbl_80097828
    mr r3, r25
    li r4, 0x200
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_800977DC
    lbz r0, 0xc(r30)
    cmplwi r0, 0xc
    ble lbl_800977DC
    lwz r0, 0x50(r26)
    rlwinm r0, r0, 0, 3, 3
    cmpwi r0, 0x0
    bne lbl_800977DC
    mr r3, r25
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    lbz r4, 0xc(r30)
    subi r0, r4, 0xc
    slwi r0, r0, 3
    cmpw r0, r3
    ble lbl_800977DC
    mr r3, r25
    li r4, 0x800
    bl fn_800968A4
    li r3, 0x0
    b lbl_8009782C
lbl_800977DC:
    li r3, 0x1
    b lbl_8009782C
lbl_800977E4:
    srawi r0, r24, 1
    addze r0, r0
    cmpw r31, r0
    ble lbl_80097808
    mr r3, r25
    lis r4, 0x20
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_80097810
lbl_80097808:
    cmpwi r29, 0x0
    bne lbl_80097828
lbl_80097810:
    mr r3, r25
    lis r4, 0xfffe
    subi r4, r4, 0x101
    bl fn_800968C8
    li r3, 0x1
    b lbl_8009782C
lbl_80097828:
    li r3, 0x0
lbl_8009782C:
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80097850
asm s32 fn_80097850(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    cmpwi r3, 0x0
    bne lbl_80097878
    li r3, 0x0
    b lbl_800978F8
lbl_80097878:
    bl fn_8009676C
    mr r31, r3
    mr r3, r29
    bl fn_8009638C
    srawi r0, r3, 4
    lis r3, lbl_8034C848@ha
    addi r3, r3, lbl_8034C848@l
    lbzx r0, r3, r0
    slwi r30, r0, 7
    li r3, 0x4
    addi r4, r29, 0x94
    li r5, 0x1
    li r6, 0x0
    bl fn_80096C20
    clrlwi r0, r3, 16
    mulli r3, r0, 0xc00
    li r0, 0x64
    divw r0, r3, r0
    add r3, r30, r0
    subi r30, r3, 0xc00
    cmpwi r30, 0x0
    bge lbl_800978D8
    li r30, 0x0
    b lbl_800978E4
lbl_800978D8:
    cmpwi r30, 0x7fff
    ble lbl_800978E4
    li r30, 0x7fff
lbl_800978E4:
    xor r0, r30, r31
    srawi r3, r0, 1
    and r0, r0, r30
    subf r0, r0, r3
    srwi r3, r0, 31
lbl_800978F8:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80097910
asm s32 fn_80097910() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r6, r4
    li r31, 0x0
    cmpwi r3, 0x0
    bne lbl_80097938
    li r3, 0x0
    b lbl_80097EE8
lbl_80097938:
    lwz r7, 0x90(r3)
    cmpwi r7, 0x0
    bne lbl_8009794C
    li r3, 0x0
    b lbl_80097EE8
lbl_8009794C:
    lwz r5, 0x3854(r7)
    cmpwi r5, 0x0
    bne lbl_80097960
    li r3, 0x0
    b lbl_80097EE8
lbl_80097960:
    addi r9, r3, 0xcc
    cmpwi r9, 0x0
    bne lbl_80097974
    li r3, 0x0
    b lbl_80097EE8
lbl_80097974:
    addi r0, r3, 0x100
    cmpwi r0, 0x0
    bne lbl_80097988
    li r3, 0x0
    b lbl_80097EE8
lbl_80097988:
    cmpwi r4, 0x0
    bne lbl_80097998
    li r3, 0x0
    b lbl_80097EE8
lbl_80097998:
    lhz r0, 0x4(r4)
    cmplwi r0, 0x18
    bgt lbl_80097EE4
    lis r8, jumptable_8034C898@ha
    addi r8, r8, jumptable_8034C898@l
    slwi r0, r0, 2
    lwzx r8, r8, r0
    mtctr r8
    bctr
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r3, 0x10(r3)
    cmpwi r3, 0x1
    bne lbl_800979E4
    lwz r0, 0x18(r9)
    cmpwi r0, 0x1
    beq lbl_800979E4
    li r31, 0x1
lbl_800979E4:
    stw r3, 0x18(r9)
    b lbl_80097EE4
    lwz r4, 0x50(r7)
    lis r3, 0xc004
    addi r0, r3, 0x40
    and r0, r4, r0
    cmpwi r0, 0x0
    bne lbl_80097EE4
    lwz r4, 0x50(r5)
    lis r3, 0x9001
    addi r0, r3, -0x8000
    and r0, r4, r0
    cmpwi r0, 0x0
    bne lbl_80097EE4
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x4
    beq lbl_80097A3C
    cmpwi r0, 0x9
    bne lbl_80097EE4
lbl_80097A3C:
    li r31, 0x1
    b lbl_80097EE4
    mr r4, r7
    bl fn_80097460
    cmpwi r3, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r3, 0x50(r7)
    rlwinm r0, r3, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_80097EE4
    rlwinm r0, r3, 0, 14, 15
    cmpwi r0, 0x0
    beq lbl_80097A84
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80097EE4
lbl_80097A84:
    li r31, 0x1
    b lbl_80097EE4
    lwz r3, 0x50(r7)
    rlwinm r0, r3, 0, 14, 15
    cmpwi r0, 0x0
    beq lbl_80097EE4
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r3, 0x50(r7)
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80097EE4
    rlwinm r0, r3, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_80097EE4
    lwz r0, 0x54(r7)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r5, 0x54(r7)
    lwz r0, 0x0(r4)
    and r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_80097EE4
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r5, 0x0(r4)
    lwz r0, 0x54(r7)
    and r0, r5, r0
    cmplw r5, r0
    bne lbl_80097EE4
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r5, 0x50(r7)
    lwz r0, 0x0(r4)
    and r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_80097EE4
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r5, 0x0(r4)
    lwz r0, 0x50(r7)
    and r0, r5, r0
    cmplw r5, r0
    bne lbl_80097EE4
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r0, 0x50(r7)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80097EE4
    lwz r0, 0x54(r7)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r3, 0x10(r3)
    lwz r0, 0x0(r4)
    cmplw r3, r0
    bne lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r3, 0x58(r3)
    lwz r0, 0x0(r4)
    cmplw r3, r0
    bne lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r4)
    cmplw r3, r0
    bne lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r0, 0x50(r5)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80097EE4
    lfs f1, 0x1d0(r5)
    lfs f0, lbl_8049F510
    fcmpo cr0, f1, f0
    ble lbl_80097EE4
    lwz r0, 0x68(r5)
    rlwinm r0, r0, 0, 6, 7
    cmpwi r0, 0x0
    bne lbl_80097EE4
    lwz r0, 0x50(r7)
    rlwinm r0, r0, 0, 14, 16
    cmpwi r0, 0x0
    bne lbl_80097EE4
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r5, 0x50(r5)
    andi. r0, r5, 0x401
    cmplwi r0, 0x401
    bne lbl_80097EE4
    rlwinm r0, r5, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80097EE4
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r3, 0x50(r5)
    rlwinm r0, r3, 0, 14, 15
    cmpwi r0, 0x0
    beq lbl_80097EE4
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r5, 0x54(r5)
    lwz r0, 0x0(r4)
    and r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_80097EE4
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r6, 0x0(r4)
    lwz r0, 0x54(r5)
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_80097EE4
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r5, 0x50(r5)
    lwz r0, 0x0(r4)
    and r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_80097EE4
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r6, 0x0(r4)
    lwz r0, 0x50(r5)
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_80097EE4
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r5, 0x178(r5)
    lwz r0, 0x0(r4)
    and r0, r5, r0
    cmpwi r0, 0x0
    beq lbl_80097EE4
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r6, 0x0(r4)
    lwz r0, 0x178(r5)
    and r0, r6, r0
    cmplw r6, r0
    bne lbl_80097EE4
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lwz r0, 0x50(r5)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80097EE4
    lwz r0, 0x54(r5)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r4, 0x4(r3)
    cmplwi r4, 0xc
    beq lbl_80097DFC
    cmplwi r4, 0x1e
    beq lbl_80097DFC
    cmplwi r4, 0x1a
    bne lbl_80097E80
lbl_80097DFC:
    lwz r0, 0x10(r7)
    cmpwi r0, 0x0
    beq lbl_80097EE4
    cmplwi r4, 0x1a
    bne lbl_80097E24
    li r0, 0x0
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    stw r0, 0x70(r3)
lbl_80097E24:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r3, 0x70(r3)
    subi r0, r3, 0x3
    cmplwi r0, 0x3
    ble lbl_80097E60
    subi r0, r3, 0x13
    cmplwi r0, 0x2
    ble lbl_80097E60
    cmplwi r3, 0x1
    ble lbl_80097E60
    cmpwi r3, 0x2
    beq lbl_80097E68
    b lbl_80097EE4
lbl_80097E60:
    li r31, 0x1
    b lbl_80097EE4
lbl_80097E68:
    lwz r0, 0x0(r7)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80097EE4
    li r31, 0x1
    b lbl_80097EE4
lbl_80097E80:
    cmplwi r4, 0x13
    bne lbl_80097EE4
    lwz r0, 0x10(r7)
    cmpwi r0, 0x0
    bne lbl_80097EA0
    lwz r0, 0x10(r3)
    cmplwi r0, 0x56
    bne lbl_80097EE4
lbl_80097EA0:
    lwz r0, 0x18(r7)
    cmplwi r0, 0x1
    bne lbl_80097EBC
    lwz r0, 0x0(r7)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80097EE4
lbl_80097EBC:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r3, 0x70(r3)
    subi r0, r3, 0x13
    cmplwi r0, 0x13
    ble lbl_80097EE0
    cmpwi r3, 0x0
    bne lbl_80097EE4
lbl_80097EE0:
    li r31, 0x1
lbl_80097EE4:
    mr r3, r31
lbl_80097EE8:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80097EFC
asm s32 fn_80097EFC(s8 *arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r3
    mr r30, r4
    mr r31, r5
    cmpwi r3, 0x0
    bne lbl_80097F2C
    li r3, 0x0
    b lbl_80098060
lbl_80097F2C:
    lwz r4, 0x90(r3)
    cmpwi r4, 0x0
    bne lbl_80097F40
    li r3, 0x0
    b lbl_80098060
lbl_80097F40:
    lwz r0, 0x3854(r4)
    cmpwi r0, 0x0
    bne lbl_80097F54
    li r3, 0x0
    b lbl_80098060
lbl_80097F54:
    addi r0, r3, 0xcc
    cmpwi r0, 0x0
    bne lbl_80097F68
    li r3, 0x0
    b lbl_80098060
lbl_80097F68:
    addi r0, r3, 0x100
    cmpwi r0, 0x0
    bne lbl_80097F7C
    li r3, 0x0
    b lbl_80098060
lbl_80097F7C:
    li r4, 0x1
    bl fn_800968EC
    cmpwi r3, 0x0
    bne lbl_8009805C
    mr r3, r29
    addi r4, r30, 0x14
    bl fn_80096D3C
    mr r27, r3
    cmpwi r3, 0x0
    beq lbl_8009805C
    lhz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 28
    cmpwi r0, 0x0
    beq lbl_80097FD4
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x0(r29)
    li r0, 0x0
    stb r0, 0x1d(r29)
    sth r0, 0x1e(r29)
    addi r31, r31, 0x1
    b lbl_8009804C
lbl_80097FD4:
    cmpwi r31, 0x0
    bne lbl_8009804C
    mr r3, r29
    lhz r0, 0x10(r30)
    clrlwi r4, r0, 24
    lhz r5, 0x4(r30)
    bl fn_80097298
    mr r28, r3
    mr r3, r29
    lha r4, 0x12(r30)
    lhz r5, 0x4(r30)
    bl fn_800972A8
    extsh r4, r3
    cmpwi r4, 0x0
    beq lbl_8009804C
    lwz r0, 0x0(r29)
    ori r0, r0, 0x10
    stw r0, 0x0(r29)
    lha r0, 0x1e(r29)
    cmpwi r0, 0x0
    beq lbl_80098044
    clrlwi r3, r28, 24
    lbz r0, 0x1d(r29)
    cmplw r3, r0
    ble lbl_8009804C
    stb r28, 0x1d(r29)
    sth r4, 0x1e(r29)
    b lbl_8009804C
lbl_80098044:
    stb r28, 0x1d(r29)
    sth r4, 0x1e(r29)
lbl_8009804C:
    mr r3, r29
    mr r4, r27
    lhz r5, 0x4(r30)
    bl fn_80097328
lbl_8009805C:
    mr r3, r31
lbl_80098060:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80098078
asm s32 fn_80098078(s8 *arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r5
    cmpwi r3, 0x0
    bne lbl_800980A4
    li r3, 0x0
    b lbl_80098164
lbl_800980A4:
    cmpwi r4, 0x0
    bne lbl_800980B4
    li r3, 0x0
    b lbl_80098164
lbl_800980B4:
    lis r6, lbl_80395728@ha
    addi r6, r6, lbl_80395728@l
    lwz r0, 0x4(r6)
    cmplwi r0, 0xc
    beq lbl_800980D0
    cmplwi r0, 0x1e
    bne lbl_8009811C
lbl_800980D0:
    lwz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_80098100
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80098160
    ori r30, r5, 0x800
    b lbl_80098160
lbl_80098100:
    mr r3, r29
    li r4, 0x100
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_80098160
    ori r30, r30, 0x800
    b lbl_80098160
lbl_8009811C:
    li r4, 0x100
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_80098160
    mr r3, r29
    bl fn_8009676C
    mr r31, r3
    mr r3, r29
    bl fn_8009638C
    srawi r0, r3, 4
    lis r3, lbl_8034C838@ha
    addi r3, r3, lbl_8034C838@l
    lbzx r0, r3, r0
    slwi r0, r0, 7
    cmpw r31, r0
    bgt lbl_80098160
    ori r30, r30, 0x800
lbl_80098160:
    mr r3, r30
lbl_80098164:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009817C
asm void fn_8009817C(s8 *arg0, s8 *arg1) {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x0
    beqlr
    lis r5, lbl_80395728@ha
    addi r5, r5, lbl_80395728@l
    lwz r0, 0x4(r5)
    cmplwi r0, 0xc
    beq lbl_800981A8
    cmplwi r0, 0x1e
    bne lbl_8009824C
lbl_800981A8:
    lwz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_80098238
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    lwz r0, 0x70(r4)
    cmpwi r0, 0x7
    beq lbl_800981F0
    cmpwi r0, 0x8
    beq lbl_800981FC
    cmpwi r0, 0x9
    beq lbl_80098208
    cmpwi r0, 0xa
    beq lbl_80098214
    cmpwi r0, 0x2
    beq lbl_80098220
    b lbl_8009822C
lbl_800981F0:
    li r0, 0x40
    stw r0, 0x108(r3)
    b lbl_8009824C
lbl_800981FC:
    li r0, 0x80
    stw r0, 0x108(r3)
    b lbl_8009824C
lbl_80098208:
    li r0, 0xc0
    stw r0, 0x108(r3)
    b lbl_8009824C
lbl_80098214:
    li r0, 0xff
    stw r0, 0x108(r3)
    b lbl_8009824C
lbl_80098220:
    li r0, 0x80
    stw r0, 0x108(r3)
    b lbl_8009824C
lbl_8009822C:
    lwz r0, 0x44(r4)
    stw r0, 0x108(r3)
    b lbl_8009824C
lbl_80098238:
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    lwz r0, 0x44(r4)
    stw r0, 0x108(r3)
lbl_8009824C:
    lwz r0, 0x108(r3)
    cmpwi r0, 0x0
    bgt lbl_80098260
    li r0, 0x0
    stw r0, 0x108(r3)
lbl_80098260:
    lwz r0, 0x108(r3)
    cmpwi r0, 0xff
    bltlr
    li r0, 0xff
    stw r0, 0x108(r3)
    blr
}

void fn_80098278(s8 *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0xA) <= 0) {
        M2C_FIELD(arg0, s16 *, 0xA) = (s16) (0);
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0xA) >= 0x270F) {
        M2C_FIELD(arg0, s16 *, 0xA) = (s16) (0x270F);
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0xF) == 0) {
        M2C_FIELD(arg0, u8 *, 0xF) = (u8) (0U);
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0xF) >= 0x270F) {
        M2C_FIELD(arg0, u8 *, 0xF) = (u8) (0xFU);
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0xD) == 0) {
        M2C_FIELD(arg0, u8 *, 0xD) = (u8) (0U);
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0xD) >= 0x270F) {
        M2C_FIELD(arg0, u8 *, 0xD) = (u8) (0xFU);
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0xC) == 0) {
        M2C_FIELD(arg0, u8 *, 0xC) = (u8) (0U);
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0xC) >= 0x270F) {
        M2C_FIELD(arg0, u8 *, 0xC) = (u8) (0xFU);
    }
}

// asm_to_cpp: fn_8009831C
asm s32 fn_8009831C(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    cmpwi r3, 0x0
    bne lbl_80098338
    li r3, 0x0
    b lbl_80098440
lbl_80098338:
    lwz r5, 0x90(r3)
    cmpwi r5, 0x0
    bne lbl_8009834C
    li r3, 0x0
    b lbl_80098440
lbl_8009834C:
    lwz r0, 0x3854(r5)
    cmpwi r0, 0x0
    bne lbl_80098360
    li r3, 0x0
    b lbl_80098440
lbl_80098360:
    addi r6, r3, 0xcc
    cmpwi r6, 0x0
    bne lbl_80098374
    li r3, 0x0
    b lbl_80098440
lbl_80098374:
    addi r4, r3, 0x100
    cmpwi r4, 0x0
    bne lbl_80098388
    li r3, 0x0
    b lbl_80098440
lbl_80098388:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_8009839C
    li r3, 0x0
    b lbl_80098440
lbl_8009839C:
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    lwz r4, 0x10(r4)
    subi r0, r4, 0x1
    cmplwi r0, 0x2
    ble lbl_800983D4
    cmpwi r4, 0x0
    beq lbl_800983CC
    cmpwi r4, 0x9
    beq lbl_800983D4
    b lbl_800983DC
lbl_800983CC:
    li r3, 0x0
    b lbl_80098440
lbl_800983D4:
    li r3, 0x1
    b lbl_80098440
lbl_800983DC:
    lwz r0, 0x58(r5)
    andis. r0, r0, 0x8004
    cmpwi r0, 0x0
    bne lbl_800983FC
    cmpwi r4, 0xd
    beq lbl_800983FC
    cmpwi r4, 0xa
    bne lbl_8009843C
lbl_800983FC:
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80098414
    ori r0, r4, 0x1
    stw r0, 0x0(r3)
lbl_80098414:
    li r0, 0x0
    stw r0, 0xc(r3)
    sth r0, 0xa(r6)
    stb r0, 0xc(r6)
    stb r0, 0xd(r6)
    lis r4, 0xf8f0
    addi r4, r4, 0x33ff
    bl fn_800968C8
    li r3, 0x0
    b lbl_80098440
lbl_8009843C:
    li r3, 0x1
lbl_80098440:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80098450
asm void fn_80098450(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    beq lbl_80098740
    cmpwi r4, 0x0
    beq lbl_80098740
    lwz r31, 0x14(r3)
    cmpwi r31, 0x0
    beq lbl_80098740
    lwz r30, 0x90(r31)
    cmpwi r30, 0x0
    beq lbl_80098740
    lwz r29, 0x3854(r30)
    cmpwi r29, 0x0
    beq lbl_80098740
    addi r28, r31, 0xcc
    cmpwi r28, 0x0
    beq lbl_80098740
    addi r3, r31, 0x100
    cmpwi r3, 0x0
    beq lbl_80098740
    lwz r27, 0x0(r3)
    cmpwi r27, 0x0
    beq lbl_80098740
    lwz r0, 0x0(r30)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80098740
    mr r3, r31
    lis r4, 0x8000
    bl fn_800968EC
    cmpwi r3, 0x0
    bne lbl_80098510
    mr r3, r31
    lis r4, 0x8000
    bl fn_800968A4
    mr r3, r31
    lis r4, 0xf8f8
    addi r4, r4, 0x3ffc
    bl fn_800968C8
    mr r3, r31
    li r4, 0x100
    bl fn_800968A4
lbl_80098510:
    bl fn_8008AE14
    cmpwi r3, 0x0
    bne lbl_80098740
    mr r3, r31
    bl fn_8009831C
    cmpwi r3, 0x0
    beq lbl_80098740
    mr r3, r31
    mr r4, r30
    bl fn_8009817C
    mr r3, r30
    addi r4, r28, 0x20
    addi r5, r28, 0x24
    bl fn_8008A4FC
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_80098580
    rlwinm r0, r3, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_80098580
    mr r3, r31
    lis r4, 0xf8f8
    addi r4, r4, 0x7fff
    bl fn_800968C8
    mr r3, r31
    li r4, 0x100
    bl fn_800968A4
lbl_80098580:
    lwz r0, 0x54(r30)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    beq lbl_80098600
    lbz r3, 0xf(r28)
    addi r0, r3, 0x1
    stb r0, 0xf(r28)
    li r0, 0x0
    stb r0, 0xc(r28)
    mr r3, r31
    li r4, -0xc01
    bl fn_800968C8
    mr r3, r31
    li r4, 0x0
    bl fn_80098768
    lbz r0, 0xf(r28)
    cmplwi r0, 0x5
    ble lbl_80098600
    mr r3, r31
    lis r4, 0x10
    bl fn_800968A4
    lbz r0, 0xf(r28)
    cmplwi r0, 0x8
    ble lbl_80098600
    mr r3, r31
    mr r4, r27
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80098600
    mr r3, r31
    lis r4, 0x20
    bl fn_800968A4
lbl_80098600:
    lwz r0, 0x54(r29)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_80098620
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8009863C
lbl_80098620:
    li r0, 0x0
    stb r0, 0xf(r28)
    stb r0, 0xd(r28)
    mr r3, r31
    lis r4, 0xffc8
    subi r4, r4, 0x1
    bl fn_800968C8
lbl_8009863C:
    mr r3, r31
    lis r4, 0xfffc
    subi r4, r4, 0x1
    bl fn_800968C8
    mr r3, r30
    bl fn_80099AEC
    fmr f31, f1
    lfs f2, lbl_8049F510
    lfs f0, 0x1c(r28)
    fcmpu cr0, f2, f0
    beq lbl_80098674
    fcmpo cr0, f0, f1
    opword 0x4C401382
    beq lbl_8009868C
lbl_80098674:
    lfs f2, lbl_8049F510
    lfs f0, 0x1c(r28)
    fcmpu cr0, f2, f0
    bne lbl_80098698
    fcmpu cr0, f2, f1
    bne lbl_80098698
lbl_8009868C:
    mr r3, r31
    lis r4, 0x4
    bl fn_800968A4
lbl_80098698:
    stfs f31, 0x1c(r28)
    li r29, 0x0
    b lbl_800986D0
lbl_800986A4:
    mr r3, r31
    mr r4, r27
    bl fn_80097910
    cmpwi r3, 0x0
    beq lbl_800986CC
    mr r3, r31
    mr r4, r27
    mr r5, r29
    bl fn_80097EFC
    mr r29, r3
lbl_800986CC:
    addi r27, r27, 0x1c
lbl_800986D0:
    lhz r0, 0x4(r27)
    cmplwi r0, 0x19
    bne lbl_800986A4
    mr r3, r31
    li r4, 0x4000
    bl fn_800968EC
    cmpwi r3, 0x0
    bne lbl_800986FC
    lha r0, 0xa(r28)
    cmpwi r0, 0x3c
    bgt lbl_8009870C
lbl_800986FC:
    mr r3, r31
    bl fn_8009638C
    cmpwi r3, 0xa0
    bge lbl_80098718
lbl_8009870C:
    mr r3, r31
    li r4, 0x4000
    bl fn_800968A4
lbl_80098718:
    mr r3, r31
    mr r4, r30
    li r5, 0x0
    bl fn_80098078
    stw r3, 0xc(r31)
    lha r3, 0xa(r28)
    addi r0, r3, 0x1
    sth r0, 0xa(r28)
    mr r3, r28
    bl fn_80098278
lbl_80098740:
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

void fn_80098764(void) {
}

s32 fn_80098768(s8 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return (s32) (0);
    }
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) (0);
    M2C_FIELD(arg0, s16 *, 0x8C) = (s16) (0);
    return (s32) (0);
}

// asm_to_cpp: fn_8009878C
asm s32 fn_8009878C(s8 *arg0) {
    nofralloc
    li r5, 0x0
    cmpwi r3, 0x0
    bne lbl_800987A0
    li r3, 0x0
    blr
lbl_800987A0:
    lwz r0, 0xb94(r3)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_800987D8
    la r4, lbl_8049F510
    lfs f1, 0xa4(r3)
    lfs f0, 0xc(r4)
    fmuls f1, f0, f1
    lfs f0, lbl_8049F510
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_800987F8
    li r5, -0x1
    b lbl_800987F8
lbl_800987D8:
    la r4, lbl_8049F510
    lfs f1, 0xa4(r3)
    lfs f0, 0xc(r4)
    fmuls f1, f0, f1
    lfs f0, lbl_8049F510
    fcmpo cr0, f1, f0
    bge lbl_800987F8
    li r5, -0x1
lbl_800987F8:
    mr r3, r5
    blr
}

// asm_to_cpp: fn_80098800
asm s32 fn_80098800(s8 *arg0) {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_80098810
    li r3, 0x0
    blr
lbl_80098810:
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r0, 0x4(r4)
    cmplwi r0, 0xc
    beq lbl_8009882C
    cmplwi r0, 0x1e
    bne lbl_80098860
lbl_8009882C:
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_80098858
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r3, r0, 0, 28, 28
    subic r0, r3, 0x1
    subfe r3, r0, r3
    blr
lbl_80098858:
    li r3, 0x1
    blr
lbl_80098860:
    li r3, 0x1
    blr
}

// asm_to_cpp: fn_80098868
asm s32 fn_80098868(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    li r31, 0x0
    cmpwi r3, 0x0
    bne lbl_80098894
    li r3, 0x0
    b lbl_80098A00
lbl_80098894:
    addi r0, r3, 0xcc
    cmpwi r0, 0x0
    bne lbl_800988A8
    li r3, 0x0
    b lbl_80098A00
lbl_800988A8:
    lwz r6, 0x90(r3)
    cmpwi r6, 0x0
    bne lbl_800988BC
    li r3, 0x0
    b lbl_80098A00
lbl_800988BC:
    lwz r7, 0x3854(r6)
    cmpwi r7, 0x0
    bne lbl_800988D0
    li r3, 0x0
    b lbl_80098A00
lbl_800988D0:
    addi r4, r3, 0x100
    cmpwi r4, 0x0
    bne lbl_800988E4
    li r3, 0x0
    b lbl_80098A00
lbl_800988E4:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_800988F8
    li r3, 0x0
    b lbl_80098A00
lbl_800988F8:
    lwz r5, 0x50(r7)
    clrrwi r0, r5, 31
    cmpwi r0, 0x0
    beq lbl_800989B4
    lwz r4, 0x3854(r7)
    cmpwi r4, 0x0
    beq lbl_800989B4
    lwz r4, 0x4(r4)
    lwz r0, 0x4(r6)
    cmpw r4, r0
    bne lbl_800989B4
    lfs f1, 0x1d0(r7)
    la r4, lbl_8049F510
    lfs f0, 0x10(r4)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_800989B4
    rlwinm r0, r5, 0, 3, 3
    cmpwi r0, 0x0
    bne lbl_800989B4
    lwz r4, 0x54(r7)
    rlwinm r0, r4, 0, 21, 21
    rlwimi r0, r4, 0, 9, 9
    cmpwi r0, 0x0
    bne lbl_800989B4
    lwz r4, 0x54(r6)
    rlwinm r0, r4, 0, 21, 21
    rlwimi r0, r4, 0, 9, 9
    cmpwi r0, 0x0
    bne lbl_800989B4
    li r4, 0x1
    bl fn_80098A18
    mr r4, r3
    mr r3, r30
    bl fn_80098BE0
    mr r4, r3
    mr r3, r30
    bl fn_80098DE0
    mr r31, r3
    lha r3, 0x8c(r30)
    addi r0, r3, 0x1
    sth r0, 0x8c(r30)
    extsh r0, r0
    cmpwi r0, 0x270f
    blt lbl_800989B4
    li r0, 0x270f
    sth r0, 0x8c(r30)
lbl_800989B4:
    cmpwi r31, 0x0
    beq lbl_800989FC
    mr r3, r30
    lis r4, 0x2
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_800989DC
    mr r3, r30
    bl fn_80098F00
    b lbl_800989FC
lbl_800989DC:
    lwz r0, 0x108(r30)
    cmpwi r0, 0xb0
    bgt lbl_800989F4
    mr r3, r30
    bl fn_80099170
    b lbl_800989FC
lbl_800989F4:
    mr r3, r30
    bl fn_80098F00
lbl_800989FC:
    mr r3, r31
lbl_80098A00:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80098A18
asm s32 fn_80098A18(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r28, r3
    li r29, 0x0
    cmpwi r3, 0x0
    bne lbl_80098A44
    li r3, 0x0
    b lbl_80098BC8
lbl_80098A44:
    addi r0, r3, 0xcc
    cmpwi r0, 0x0
    bne lbl_80098A58
    li r3, 0x0
    b lbl_80098BC8
lbl_80098A58:
    lwz r5, 0x90(r3)
    cmpwi r5, 0x0
    bne lbl_80098A6C
    li r3, 0x0
    b lbl_80098BC8
lbl_80098A6C:
    lwz r6, 0x3854(r5)
    cmpwi r6, 0x0
    bne lbl_80098A80
    li r3, 0x0
    b lbl_80098BC8
lbl_80098A80:
    addi r7, r3, 0x100
    cmpwi r7, 0x0
    bne lbl_80098A94
    li r3, 0x0
    b lbl_80098BC8
lbl_80098A94:
    lwz r31, 0x0(r7)
    cmpwi r31, 0x0
    bne lbl_80098AA8
    li r3, 0x0
    b lbl_80098BC8
lbl_80098AA8:
    mr r30, r4
    lwz r0, 0x50(r6)
    rlwinm r0, r0, 0, 1, 1
    cmpwi r0, 0x0
    beq lbl_80098BB8
    lwz r0, 0x50(r5)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_80098BB8
    lwz r0, 0x9f0(r6)
    cmpwi r0, 0x0
    bne lbl_80098BB8
    bl fn_8009676C
    mr r27, r3
    mr r3, r28
    bl fn_8009638C
    srawi r0, r3, 4
    lis r3, lbl_8034C878@ha
    addi r3, r3, lbl_8034C878@l
    lbzx r0, r3, r0
    slwi r26, r0, 7
    li r3, 0x4
    addi r4, r28, 0x94
    li r5, 0x1
    li r6, 0x0
    bl fn_80096C20
    clrlwi r0, r3, 16
    mullw r3, r26, r0
    li r0, 0x64
    divw r26, r3, r0
    cmpwi r26, 0x0
    bge lbl_80098B30
    li r26, 0x0
    b lbl_80098B3C
lbl_80098B30:
    cmpwi r26, 0x7fff
    ble lbl_80098B3C
    li r26, 0x7fff
lbl_80098B3C:
    mr r3, r28
    li r4, 0x4000
    bl fn_800968EC
    cmpwi r3, 0x0
    bne lbl_80098B54
    li r26, 0x7fff
lbl_80098B54:
    cmpw r27, r26
    bge lbl_80098BB8
    mr r3, r28
    mr r4, r31
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80098BB8
    mr r3, r28
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    cmpwi r3, 0x40
    bge lbl_80098B90
    ori r29, r29, 0x10
    b lbl_80098BB4
lbl_80098B90:
    cmpwi r3, 0x80
    bge lbl_80098BA0
    ori r29, r29, 0x11
    b lbl_80098BB4
lbl_80098BA0:
    cmpwi r3, 0xc0
    ori r0, r29, 0x18
    bge lbl_80098BB0
    ori r0, r29, 0x14
lbl_80098BB0:
    mr r29, r0
lbl_80098BB4:
    li r30, 0x0
lbl_80098BB8:
    lwz r0, 0xc(r28)
    or r0, r0, r29
    stw r0, 0xc(r28)
    mr r3, r30
lbl_80098BC8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80098BE0
asm s32 fn_80098BE0(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    li r27, 0x0
    cmpwi r3, 0x0
    bne lbl_80098C0C
    li r3, 0x0
    b lbl_80098DC8
lbl_80098C0C:
    addi r0, r3, 0xcc
    cmpwi r0, 0x0
    bne lbl_80098C20
    li r3, 0x0
    b lbl_80098DC8
lbl_80098C20:
    lwz r31, 0x90(r3)
    cmpwi r31, 0x0
    bne lbl_80098C34
    li r3, 0x0
    b lbl_80098DC8
lbl_80098C34:
    lwz r30, 0x3854(r31)
    cmpwi r30, 0x0
    bne lbl_80098C48
    li r3, 0x0
    b lbl_80098DC8
lbl_80098C48:
    addi r5, r3, 0x100
    cmpwi r5, 0x0
    bne lbl_80098C5C
    li r3, 0x0
    b lbl_80098DC8
lbl_80098C5C:
    lwz r29, 0x0(r5)
    cmpwi r29, 0x0
    bne lbl_80098C70
    li r3, 0x0
    b lbl_80098DC8
lbl_80098C70:
    mr r28, r4
    lwz r5, 0x54(r31)
    rlwinm r0, r5, 0, 21, 21
    rlwimi r0, r5, 0, 9, 9
    cmpwi r0, 0x0
    beq lbl_80098C90
    mr r3, r4
    b lbl_80098DC8
lbl_80098C90:
    lwz r0, 0x50(r31)
    rlwinm r0, r0, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_80098CA8
    mr r3, r4
    b lbl_80098DC8
lbl_80098CA8:
    lwz r0, 0x50(r30)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80098DB8
    lwz r0, 0x54(r30)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    bne lbl_80098DB8
    lis r4, 0x4
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_80098DB8
    lwz r3, 0x3854(r30)
    lwz r3, 0x4(r3)
    lwz r0, 0x4(r31)
    cmpw r3, r0
    bne lbl_80098DB8
    lfs f1, 0x164(r30)
    la r3, lbl_8049F510
    lfs f0, 0x14(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_80098D14
    lwz r0, 0x180(r30)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_80098DB8
lbl_80098D14:
    lfs f1, 0xb8(r31)
    la r3, lbl_8049F510
    lfs f0, 0x18(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80098DB8
    mr r3, r26
    bl fn_8009676C
    mr r30, r3
    mr r3, r26
    bl fn_8009638C
    srawi r0, r3, 4
    lis r3, lbl_8034C888@ha
    addi r3, r3, lbl_8034C888@l
    lbzx r0, r3, r0
    slwi r31, r0, 7
    li r3, 0x4
    addi r4, r26, 0x94
    li r5, 0x1
    li r6, 0x0
    bl fn_80096C20
    clrlwi r0, r3, 16
    mullw r3, r31, r0
    li r0, 0x64
    divw r0, r3, r0
    cmpwi r0, 0x0
    bge lbl_80098D88
    li r0, 0x0
    b lbl_80098D94
lbl_80098D88:
    cmpwi r0, 0x7fff
    ble lbl_80098D94
    li r0, 0x7fff
lbl_80098D94:
    cmpw r30, r0
    bge lbl_80098DB8
    mr r3, r26
    mr r4, r29
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80098DB8
    ori r27, r27, 0x10
    li r28, 0x0
lbl_80098DB8:
    lwz r0, 0xc(r26)
    or r0, r0, r27
    stw r0, 0xc(r26)
    mr r3, r28
lbl_80098DC8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80098DE0
asm s32 fn_80098DE0(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    cmpwi r3, 0x0
    bne lbl_80098E08
    li r3, 0x0
    b lbl_80098EE8
lbl_80098E08:
    addi r0, r3, 0xcc
    cmpwi r0, 0x0
    bne lbl_80098E1C
    li r3, 0x0
    b lbl_80098EE8
lbl_80098E1C:
    lwz r5, 0x90(r3)
    cmpwi r5, 0x0
    bne lbl_80098E30
    li r3, 0x0
    b lbl_80098EE8
lbl_80098E30:
    lwz r31, 0x3854(r5)
    cmpwi r31, 0x0
    bne lbl_80098E44
    li r3, 0x0
    b lbl_80098EE8
lbl_80098E44:
    addi r3, r3, 0x100
    cmpwi r3, 0x0
    bne lbl_80098E58
    li r3, 0x0
    b lbl_80098EE8
lbl_80098E58:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_80098E6C
    li r3, 0x0
    b lbl_80098EE8
lbl_80098E6C:
    mr r30, r4
    mr r3, r31
    li r4, 0x10
    bl fn_8008CA70
    cmpwi r3, 0x0
    bne lbl_80098E98
    mr r3, r31
    li r4, 0x20
    bl fn_8008CA70
    cmpwi r3, 0x0
    beq lbl_80098EE4
lbl_80098E98:
    lha r3, 0x8c(r29)
    cmpwi r3, 0x78
    blt lbl_80098EE4
    srawi r0, r3, 3
    addze r0, r0
    slwi r0, r0, 3
    subf r0, r0, r3
    cmpwi r0, 0x6
    bne lbl_80098EE4
    mr r3, r29
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    cmpwi r3, 0x50
    bge lbl_80098EE4
    mr r3, r29
    lis r4, 0x40
    bl fn_800968A4
    li r30, 0x0
lbl_80098EE4:
    mr r3, r30
lbl_80098EE8:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80098F00
asm void fn_80098F00(s8 *arg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r26, r3
    li r27, 0x0
    cmpwi r3, 0x0
    beq lbl_80099158
    addi r30, r3, 0xcc
    cmpwi r30, 0x0
    beq lbl_80099158
    lwz r29, 0x90(r3)
    cmpwi r29, 0x0
    beq lbl_80099158
    lwz r28, 0x3854(r29)
    cmpwi r28, 0x0
    beq lbl_80099158
    addi r4, r3, 0x100
    cmpwi r4, 0x0
    beq lbl_80099158
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_80099158
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    mr r31, r3
    lwz r0, 0x50(r29)
    rlwinm r0, r0, 0, 3, 3
    cmpwi r0, 0x0
    bne lbl_80098F9C
    lwz r0, 0x54(r29)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80098F9C
    lbz r3, 0xc(r30)
    addi r0, r3, 0x1
    stb r0, 0xc(r30)
lbl_80098F9C:
    mr r3, r26
    li r4, 0x200
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_80099060
    mr r3, r26
    li r4, 0x400
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_80099048
    mr r3, r26
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    mr r25, r3
    mr r3, r26
    bl fn_8009638C
    srawi r0, r3, 4
    lfd f1, lbl_8049F508
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    la r3, lbl_8049F510
    lfs f0, 0x20(r3)
    fmuls f1, f1, f0
    lfs f0, 0x1c(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    lbz r0, 0xc(r30)
    subf r0, r3, r0
    slwi r0, r0, 4
    cmpw r0, r25
    ble lbl_80099060
    mr r3, r26
    lis r4, 0xfffe
    subi r4, r4, 0x1
    bl fn_800968C8
    b lbl_80099060
lbl_80099048:
    lbz r0, 0xc(r30)
    cmplwi r0, 0x10
    ble lbl_80099060
    mr r3, r26
    li r4, 0x400
    bl fn_800968A4
lbl_80099060:
    lwz r0, 0x180(r28)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_800990E8
    lwz r0, 0x17c(r28)
    rlwinm r0, r0, 0, 29, 30
    cmpwi r0, 0x0
    bne lbl_800990E8
    lfs f1, 0xb0(r28)
    bl fn_80018BD4
    la r3, lbl_8049F510
    lfs f0, 0x24(r3)
    fcmpo cr0, f1, f0
    bge lbl_800990E8
    mr r3, r26
    bl fn_8009638C
    srawi r3, r3, 4
    addi r0, r3, 0x10
    cmpw r31, r0
    bge lbl_800990D0
    mr r3, r29
    bl fn_8009878C
    cmpwi r3, 0x0
    beq lbl_800990C8
    ori r27, r27, 0x200
    b lbl_8009914C
lbl_800990C8:
    ori r27, r27, 0x100
    b lbl_8009914C
lbl_800990D0:
    mr r3, r29
    bl fn_80098800
    cmpwi r3, 0x0
    beq lbl_8009914C
    ori r27, r27, 0x800
    b lbl_8009914C
lbl_800990E8:
    lwz r0, 0x54(r29)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_80099138
    mr r3, r26
    bl fn_8009638C
    srawi r0, r3, 4
    lis r3, lbl_8034C868@ha
    addi r3, r3, lbl_8034C868@l
    lbzx r0, r3, r0
    cmpw r31, r0
    bge lbl_80099120
    ori r27, r27, 0x4000
    b lbl_8009914C
lbl_80099120:
    mr r3, r29
    bl fn_80098800
    cmpwi r3, 0x0
    beq lbl_8009914C
    ori r27, r27, 0x800
    b lbl_8009914C
lbl_80099138:
    mr r3, r29
    bl fn_80098800
    cmpwi r3, 0x0
    beq lbl_8009914C
    ori r27, r27, 0x800
lbl_8009914C:
    lwz r0, 0xc(r26)
    or r0, r0, r27
    stw r0, 0xc(r26)
lbl_80099158:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80099170
asm void fn_80099170(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r31, r3
    li r27, 0x0
    cmpwi r3, 0x0
    beq lbl_80099264
    addi r0, r3, 0xcc
    cmpwi r0, 0x0
    beq lbl_80099264
    lwz r4, 0x90(r3)
    cmpwi r4, 0x0
    beq lbl_80099264
    lwz r29, 0x3854(r4)
    cmpwi r29, 0x0
    beq lbl_80099264
    addi r4, r3, 0x100
    cmpwi r4, 0x0
    beq lbl_80099264
    lwz r28, 0x0(r4)
    cmpwi r28, 0x0
    beq lbl_80099264
    li r4, -0x101
    bl fn_800968C8
    lha r3, 0x8c(r31)
    srawi r0, r3, 4
    addze r0, r0
    slwi r0, r0, 4
    subf r0, r0, r3
    cmpwi r0, 0x4
    bne lbl_80099258
    mr r3, r31
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    mr r30, r3
    mr r3, r31
    mr r4, r28
    bl fn_8009732C
    cmpwi r3, 0x0
    beq lbl_80099258
    cmpwi r30, 0x20
    bge lbl_80099258
    lwz r0, 0x17c(r29)
    andi. r0, r0, 0x5
    cmpwi r0, 0x0
    bne lbl_80099258
    mr r3, r31
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    cmpwi r3, 0x80
    ori r0, r27, 0x100
    bge lbl_80099254
    ori r0, r27, 0x200
lbl_80099254:
    mr r27, r0
lbl_80099258:
    lwz r0, 0xc(r31)
    or r0, r0, r27
    stw r0, 0xc(r31)
lbl_80099264:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009927C
asm s32 fn_8009927C(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    li r29, 0x0
    li r31, 0x0
    cmpwi r3, 0x0
    bne lbl_800992AC
    li r3, 0x0
    b lbl_8009939C
lbl_800992AC:
    addi r0, r3, 0xcc
    cmpwi r0, 0x0
    bne lbl_800992C0
    li r3, 0x0
    b lbl_8009939C
lbl_800992C0:
    lwz r3, 0x90(r3)
    cmpwi r3, 0x0
    bne lbl_800992D4
    li r3, 0x0
    b lbl_8009939C
lbl_800992D4:
    lwz r0, 0x3854(r3)
    cmpwi r0, 0x0
    bne lbl_800992E8
    li r3, 0x0
    b lbl_8009939C
lbl_800992E8:
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_800992FC
    li r31, 0x1
lbl_800992FC:
    lwz r0, 0x54(r3)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80099318
    mr r3, r30
    bl fn_800993B4
    b lbl_8009938C
lbl_80099318:
    lwz r0, 0x60(r3)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8009937C
    lwz r0, 0x9ec(r3)
    cmpwi r0, 0x0
    beq lbl_8009938C
    mr r3, r30
    bl fn_80097850
    cmpwi r3, 0x0
    beq lbl_8009938C
    mr r3, r30
    lis r4, 0x1
    addi r4, r4, -0x8000
    bl fn_800968EC
    cmpwi r3, 0x0
    ori r0, r29, 0x808
    beq lbl_80099364
    ori r0, r29, 0x802
lbl_80099364:
    mr r29, r0
    mr r3, r30
    lis r4, 0x1
    addi r4, r4, -0x8000
    bl fn_80096908
    b lbl_8009938C
lbl_8009937C:
    mr r3, r30
    mr r4, r31
    bl fn_80098A18
    mr r31, r3
lbl_8009938C:
    lwz r0, 0xc(r30)
    or r0, r0, r29
    stw r0, 0xc(r30)
    mr r3, r31
lbl_8009939C:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800993B4
asm void fn_800993B4(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r3
    li r30, 0x0
    cmpwi r3, 0x0
    beq lbl_80099818
    addi r28, r3, 0xcc
    cmpwi r28, 0x0
    beq lbl_80099818
    lwz r31, 0x90(r3)
    cmpwi r31, 0x0
    beq lbl_80099818
    lwz r0, 0x3854(r31)
    cmpwi r0, 0x0
    beq lbl_80099818
    bl fn_8009638C
    srawi r0, r3, 4
    lis r3, lbl_8034C858@ha
    addi r3, r3, lbl_8034C858@l
    lbzx r0, r3, r0
    slwi r27, r0, 7
    li r3, 0x2
    addi r4, r29, 0x94
    li r5, 0x1
    li r6, 0x0
    bl fn_80096C20
    clrlwi r0, r3, 16
    mulli r3, r0, 0xc00
    li r0, 0x64
    divw r0, r3, r0
    add r3, r27, r0
    subi r27, r3, 0xc00
    mr r3, r29
    lis r4, 0x20
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_8009945C
    li r27, 0x7fff
    b lbl_80099484
lbl_8009945C:
    mr r3, r29
    lis r4, 0x10
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_80099484
    lbz r3, 0xf(r28)
    subi r0, r3, 0x5
    slwi r0, r0, 3
    slwi r0, r0, 7
    add r27, r27, r0
lbl_80099484:
    cmpwi r27, 0x0
    bge lbl_80099494
    li r27, 0x0
    b lbl_800994A0
lbl_80099494:
    cmpwi r27, 0x7fff
    ble lbl_800994A0
    li r27, 0x7fff
lbl_800994A0:
    lha r0, 0x8c(r29)
    cmpwi r0, 0x0
    beq lbl_800994D8
    cmpwi r0, 0x1
    beq lbl_80099608
    cmpwi r0, 0x2
    beq lbl_800996B4
    cmpwi r0, 0x3
    beq lbl_80099710
    cmpwi r0, 0x4
    beq lbl_80099770
    cmpwi r0, 0x5
    beq lbl_800997A8
    b lbl_8009980C
lbl_800994D8:
    lwz r0, 0x9e0(r31)
    cmpwi r0, 0x0
    bgt lbl_8009980C
    clrlwi r28, r27, 16
    mr r3, r29
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    lwz r4, 0x60(r31)
    rlwinm r0, r4, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_80099528
    cmpw r3, r28
    bge lbl_8009951C
    li r0, 0x1
    sth r0, 0x8c(r29)
    b lbl_800995BC
lbl_8009951C:
    li r0, 0x3
    sth r0, 0x8c(r29)
    b lbl_800995BC
lbl_80099528:
    rlwinm r0, r4, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_80099594
    mr r0, r28
    cmpw r3, r0
    bge lbl_8009954C
    li r0, 0x2
    sth r0, 0x8c(r29)
    b lbl_80099570
lbl_8009954C:
    li r4, 0x3
    divwu r0, r28, r4
    clrlwi r0, r0, 16
    cmpw r3, r0
    bge lbl_8009956C
    li r0, 0x1
    sth r0, 0x8c(r29)
    b lbl_80099570
lbl_8009956C:
    sth r4, 0x8c(r29)
lbl_80099570:
    lha r0, 0x8c(r29)
    cmpwi r0, 0x2
    bne lbl_800995BC
    lwz r0, 0x108(r29)
    cmpwi r0, 0xff
    blt lbl_800995BC
    li r0, 0x4
    sth r0, 0x8c(r29)
    b lbl_800995BC
lbl_80099594:
    mulli r0, r28, 0x3
    srawi r0, r0, 1
    addze r0, r0
    cmpw r3, r0
    bge lbl_800995B4
    li r0, 0x4
    sth r0, 0x8c(r29)
    b lbl_800995BC
lbl_800995B4:
    li r0, 0x3
    sth r0, 0x8c(r29)
lbl_800995BC:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0xc
    beq lbl_800995D8
    cmplwi r0, 0x1e
    bne lbl_8009980C
lbl_800995D8:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_8009980C
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x70(r3)
    cmpwi r0, 0x4
    bne lbl_8009980C
    li r0, 0x5
    sth r0, 0x8c(r29)
    b lbl_8009980C
lbl_80099608:
    lfs f2, 0xbc(r31)
    la r3, lbl_8049F510
    lfs f1, 0x28(r3)
    lfs f0, 0xa20(r31)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    bge lbl_8009980C
    mr r3, r29
    bl fn_8009638C
    srawi r0, r3, 4
    lis r3, lbl_8034C858@ha
    addi r3, r3, lbl_8034C858@l
    lbzx r28, r3, r0
    mr r3, r29
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    cmpw r3, r28
    bge lbl_800996AC
    lwz r0, 0x9ec(r31)
    cmpwi r0, 0x0
    beq lbl_800996A4
    mr r3, r29
    bl fn_80097850
    cmpwi r3, 0x0
    beq lbl_800996A4
    mr r3, r29
    lis r4, 0x1
    addi r4, r4, -0x8000
    bl fn_800968EC
    cmpwi r3, 0x0
    ori r0, r30, 0x8
    beq lbl_80099690
    ori r0, r30, 0x2
lbl_80099690:
    mr r30, r0
    mr r3, r29
    lis r4, 0x1
    addi r4, r4, -0x8000
    bl fn_80096908
lbl_800996A4:
    ori r30, r30, 0x300
    b lbl_8009980C
lbl_800996AC:
    ori r30, r30, 0x4
    b lbl_8009980C
lbl_800996B4:
    lfs f2, 0xbc(r31)
    la r3, lbl_8049F510
    lfs f1, 0x2c(r3)
    lfs f0, 0xa20(r31)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    ble lbl_8009980C
    mr r3, r29
    bl fn_8009638C
    srawi r0, r3, 4
    lis r3, lbl_8034C858@ha
    addi r3, r3, lbl_8034C858@l
    lbzx r31, r3, r0
    mr r3, r29
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    cmpw r3, r31
    bge lbl_80099708
    ori r30, r30, 0x304
    b lbl_8009980C
lbl_80099708:
    ori r30, r30, 0x4
    b lbl_8009980C
lbl_80099710:
    mr r3, r29
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    cmpwi r3, 0x40
    bge lbl_80099730
    ori r30, r30, 0x4
    b lbl_8009980C
lbl_80099730:
    mr r3, r29
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    cmpwi r3, 0x80
    bge lbl_80099750
    ori r30, r30, 0x2
    b lbl_8009980C
lbl_80099750:
    mr r3, r29
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    cmpwi r3, 0xc0
    bge lbl_8009980C
    ori r30, r30, 0x1
    b lbl_8009980C
lbl_80099770:
    mr r3, r29
    bl fn_8009638C
    srawi r0, r3, 4
    lis r3, lbl_8034C858@ha
    addi r3, r3, lbl_8034C858@l
    lbzx r31, r3, r0
    mr r3, r29
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    cmpw r3, r31
    bge lbl_8009980C
    ori r30, r30, 0x304
    b lbl_8009980C
lbl_800997A8:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0xc
    beq lbl_800997C4
    cmplwi r0, 0x1e
    bne lbl_8009980C
lbl_800997C4:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_8009980C
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x70(r3)
    cmpwi r0, 0x4
    bne lbl_8009980C
    mr r3, r29
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    cmpwi r3, 0x80
    ori r0, r30, 0x100
    bge lbl_80099808
    ori r0, r30, 0x200
lbl_80099808:
    mr r30, r0
lbl_8009980C:
    lwz r0, 0xc(r29)
    or r0, r0, r30
    stw r0, 0xc(r29)
lbl_80099818:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80099830
asm s32 fn_80099830(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80099858
    li r3, 0x0
    b lbl_80099970
lbl_80099858:
    lwz r30, 0x90(r3)
    cmpwi r30, 0x0
    bne lbl_8009986C
    li r3, 0x0
    b lbl_80099970
lbl_8009986C:
    lwz r6, 0x3854(r30)
    cmpwi r6, 0x0
    bne lbl_80099880
    li r3, 0x0
    b lbl_80099970
lbl_80099880:
    lwz r5, 0x50(r30)
    rlwinm r0, r5, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_80099898
    li r3, 0x1
    b lbl_80099970
lbl_80099898:
    andi. r0, r5, 0x8800
    cmpwi r0, 0x0
    beq lbl_8009996C
    lwz r0, 0x54(r30)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_8009996C
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r0, 0x4(r4)
    cmplwi r0, 0xc
    beq lbl_800998D0
    cmplwi r0, 0x1e
    bne lbl_80099900
lbl_800998D0:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_80099964
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x70(r3)
    cmpwi r0, 0x5
    bne lbl_80099964
    mr r3, r31
    bl fn_80099988
    b lbl_80099964
lbl_80099900:
    lwz r0, 0x50(r6)
    rlwinm r0, r0, 0, 1, 1
    cmpwi r0, 0x0
    beq lbl_80099928
    rlwinm r0, r5, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_80099928
    li r4, 0x1
    bl fn_80098A18
    b lbl_80099950
lbl_80099928:
    mr r3, r31
    bl fn_80097850
    cmpwi r3, 0x0
    beq lbl_80099950
    lwz r0, 0x50(r30)
    rlwinm r0, r0, 0, 14, 15
    cmpwi r0, 0x0
    beq lbl_80099950
    mr r3, r31
    bl fn_80099988
lbl_80099950:
    lwz r0, 0x108(r31)
    cmpwi r0, 0xb0
    blt lbl_80099964
    mr r3, r31
    bl fn_80099988
lbl_80099964:
    li r3, 0x1
    b lbl_80099970
lbl_8009996C:
    li r3, 0x0
lbl_80099970:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80099988
asm void fn_80099988(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80099AD4
    li r4, 0x0
    li r5, 0x100
    bl fn_800967A4
    clrlwi r30, r3, 24
    mr r3, r31
    lis r4, 0x1
    addi r4, r4, -0x8000
    bl fn_800968EC
    cmpwi r3, 0x0
    beq lbl_80099AA0
    cmplwi r30, 0xa0
    bge lbl_80099A00
    cmplwi r30, 0x60
    bge lbl_800999F4
    cmplwi r30, 0x40
    bge lbl_80099A40
    cmplwi r30, 0x20
    bge lbl_80099A30
    b lbl_80099A20
lbl_800999F4:
    cmplwi r30, 0x80
    bge lbl_80099A60
    b lbl_80099A50
lbl_80099A00:
    cmplwi r30, 0xe0
    bge lbl_80099A14
    cmplwi r30, 0xc0
    bge lbl_80099A80
    b lbl_80099A70
lbl_80099A14:
    cmplwi r30, 0x100
    bge lbl_80099A20
    b lbl_80099A90
lbl_80099A20:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x11
    stw r0, 0xc(r31)
    b lbl_80099AC4
lbl_80099A30:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x21
    stw r0, 0xc(r31)
    b lbl_80099AC4
lbl_80099A40:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x12
    stw r0, 0xc(r31)
    b lbl_80099AC4
lbl_80099A50:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x22
    stw r0, 0xc(r31)
    b lbl_80099AC4
lbl_80099A60:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x14
    stw r0, 0xc(r31)
    b lbl_80099AC4
lbl_80099A70:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x24
    stw r0, 0xc(r31)
    b lbl_80099AC4
lbl_80099A80:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x18
    stw r0, 0xc(r31)
    b lbl_80099AC4
lbl_80099A90:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x28
    stw r0, 0xc(r31)
    b lbl_80099AC4
lbl_80099AA0:
    cmplwi r30, 0x80
    bge lbl_80099AB8
    lwz r0, 0xc(r31)
    ori r0, r0, 0x10
    stw r0, 0xc(r31)
    b lbl_80099AC4
lbl_80099AB8:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x20
    stw r0, 0xc(r31)
lbl_80099AC4:
    mr r3, r31
    lis r4, 0x1
    addi r4, r4, -0x8000
    bl fn_80096908
lbl_80099AD4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80099AEC
asm f32 fn_80099AEC(s8 *arg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_29
    cmpwi r3, 0x0
    bne lbl_80099B1C
    la r3, lbl_8049F510
    lfs f1, 0x30(r3)
    b lbl_80099BB8
lbl_80099B1C:
    lwz r30, 0x3854(r3)
    cmpwi r30, 0x0
    bne lbl_80099B34
    la r3, lbl_8049F510
    lfs f1, 0x30(r3)
    b lbl_80099BB8
lbl_80099B34:
    lwz r3, 0x377c(r3)
    li r4, 0x3
    bl fn_80181504
    addi r29, r3, 0x224
    la r3, lbl_8049F510
    lfs f31, 0x34(r3)
    lfs f0, lbl_8049F510
    lwz r30, 0x37c4(r30)
    b lbl_80099B9C
lbl_80099B58:
    cmpwi r31, 0x0
    beq lbl_80099B98
    addi r3, r1, 0x8
    li r4, 0x3
    mr r5, r29
    bl fn_80173580
    addi r3, r1, 0x8
    mr r4, r3
    addi r5, r31, 0x314
    bl fn_8001B8B8
    addi r3, r1, 0x8
    bl fn_8001B8BC
    fmr f0, f1
    fcmpo cr0, f1, f31
    bge lbl_80099B98
    fmr f31, f0
lbl_80099B98:
    lwz r30, 0x8(r30)
lbl_80099B9C:
    lwz r31, 0x0(r30)
    cmplwi r31, 0x1
    bne lbl_80099B58
    lfs f1, lbl_8049F510
    fcmpu cr0, f1, f0
    beq lbl_80099BB8
    fmr f1, f31
lbl_80099BB8:
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80099BDC
asm s32 fn_80099BDC(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    cmpwi r3, 0x0
    bne lbl_80099C00
    li r3, -0x1
    b lbl_80099C78
lbl_80099C00:
    lwz r3, 0x3854(r3)
    cmpwi r3, 0x0
    bne lbl_80099C14
    li r3, -0x1
    b lbl_80099C78
lbl_80099C14:
    lwz r4, 0x3878(r3)
    cmpwi r4, 0x0
    bne lbl_80099C28
    li r3, -0x1
    b lbl_80099C78
lbl_80099C28:
    addi r3, r1, 0x8
    addi r4, r4, 0x5e0
    bl fn_80019DAC
    addi r3, r1, 0x8
    mr r4, r3
    addi r5, r31, 0x84
    bl fn_8001B8B8
    addi r3, r1, 0x8
    bl fn_8001B8BC
    lfs f0, lbl_8049F510
    fcmpu cr0, f0, f1
    bne lbl_80099C60
    li r3, -0x1
    b lbl_80099C78
lbl_80099C60:
    lfs f0, 0xb8(r31)
    fcmpo cr0, f0, f1
    mfcr r0
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_80099C78:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80099C8C
asm void fn_80099C8C(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_8018D408
    lwz r3, lbl_8049C30C
    bl fn_8018D6C4
    li r3, 0x0
    bl fn_8018D9B8
    li r3, 0x0
    bl fn_8018D8A4
    bl fn_8018D95C
    li r3, 0x1
    lis r4, lbl_8034C900@ha
    addi r4, r4, lbl_8034C900@l
    bl fn_8018F96C
    lis r3, fn_80099CF8@ha
    addi r3, r3, fn_80099CF8@l
    bl fn_8018E100
    lis r3, lbl_803A19E8@ha
    addi r3, r3, lbl_803A19E8@l
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

} // extern "C"
