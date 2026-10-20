#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 jumptable_8034A3A8[];
extern u8 jumptable_8034A5D0[];
extern u8 jumptable_8034A680[];
extern u8 jumptable_8034A73C[];
extern u8 jumptable_8034A7F8[];
extern u8 lbl_8034A458[];
extern u8 lbl_8034A460[];
extern u8 lbl_8034A530[];
extern u8 lbl_8034C914[];
extern u8 lbl_8034C9E0[];
extern u8 lbl_80390580[];
extern u8 lbl_80390668[];
extern u8 lbl_803906D0[];
extern u8 lbl_80395728[];
extern u8 lbl_803A1C88[];
extern u8 lbl_803BD100[];
extern u8 lbl_803BE030[];
extern u8 lbl_803C1A40[];
extern u8 lbl_803C22B0[];
extern float lbl_8049C2E0;
extern float lbl_8049D4E0;
extern float lbl_8049ED48;
extern float lbl_8049ED50;

s32 OSGetTick(void);
void _restgpr_19();
void _restgpr_24();
void _restgpr_26();
void _restgpr_27();
void _restgpr_28();
void _restgpr_29();
void _savegpr_19();
void _savegpr_24();
void _savegpr_26();
void _savegpr_27();
void _savegpr_28();
void _savegpr_29();
void fn_800576D0(void);
void fn_800576F8(void);
void fn_8005772C(void);
void fn_80057780(void);
s32 * fn_80057794(void);
s32 fn_800577F8(s32 *arg0, s32 arg1);
void fn_800578EC(void);
void fn_8005791C(s32 arg0, s32 arg1, s32 arg2, s8 arg3);
void fn_8005793C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_80057994(void);
void fn_80057A50(void);
void fn_80057A9C(void);
void fn_80057AB0(void);
s32 fn_80057BF4(s32 arg0, s32 arg1);
void fn_80057D54(s32 arg0, s32 arg1);
s32 fn_80057E98(s32 arg0, s32 arg1);
void fn_80057FFC();
s32 fn_80058178(void);
void fn_80058220(void);
void fn_8005833C(void);
void fn_8005843C(s32 arg0);
void fn_8005846C(void);
void fn_80058524(void);
void fn_80058580(void);
void fn_8005860C(void);
void fn_800586E8();
void fn_80058A48();
s32 fn_80058D0C(s8 *arg0);
s32 fn_80058E2C(s8 *arg0);
f32 fn_80059AA8(s8 *arg0, s8 *arg1, s32 arg2);
s32 fn_80059CB8(s32 arg0);
s32 fn_80059CBC(s32 arg0);
void fn_80059D70(s8 *arg0);
void fn_80059F6C(s8 *arg0);
s32 fn_80059F8C(s8 *arg0);
s32 fn_80059FF8(s8 *arg0);
s32 fn_8005A050(s8 *arg0);
s32 fn_8005A0A8(s8 *arg0);
void fn_8005A284(s8 *arg0);
void fn_8005A3AC(void);
void fn_8005A434();
s32 fn_8005AD04(s8 *arg0);
void fn_8005BC40(s32 arg0, s32 arg1, s32 arg2);
void fn_8005C748(void);
void fn_8005C808(s8 *arg0, s32 arg1);
s32 fn_8005CFCC(void);
s32 fn_8005D018(void);
void fn_8005D320(void);
s32 fn_8005E0BC(void);
M2C_UNK fn_8005E16C(s32 arg0);
s8 * fn_8005E2CC(u32 arg0);
s8 * fn_8005E2F4(s32 arg0);
s8 * fn_8005E680(u32 arg0, s32 arg1);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 fn_8005E8F0(u32 arg0);
s32 fn_8005EAA8(s32 arg0);
void fn_8006A7F8(s8 *arg0, s32 arg1);
f32 fn_8006AFA0(s32 *arg0);
f32 fn_8006AFE8(s8 *arg0);
void fn_80079448(void);
void fn_80086668(void);
void fn_8008A668(s32 arg0, M2C_UNK *arg1, s32 arg2);
s32 fn_8008A764(void);
s32 fn_8008AAA4(s32 arg0);
s32 fn_8008AE14(void);
void fn_8008AED0(s32 arg0);
void fn_8008B160();
void fn_80094228();
void fn_80094AB4(s32 *arg0, s32 *arg1, s32 arg2);
void fn_800951AC();
s32 * fn_80099F64(s32 arg0);
s32 * fn_8009A09C(s32 arg0, s32 arg1);
void fn_8009D038();
void fn_800A033C(s8 *arg0);
void fn_800A0360();
s32 fn_800A0768(s8 *arg0);
s8 * fn_801648C4(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80166A90(s32 arg0, s32 arg1, s32 arg2);
s32 fn_80166B54(s32 arg0);
s32 fn_80167820(void);
s32 fn_80167D7C(void);
s32 fn_80167F00(u8 *arg0, s32 arg1);
void fn_80171454(s32 arg0);
s32 fn_801714F0(void);
void fn_80171B8C(void);
void fn_80171C6C(void);
void fn_80171D64(void);
void fn_801722E8(void);
s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
f32 fn_801728FC(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
f32 fn_80172A18(f32 farg0, f32 farg1, f32 farg2);
void fn_80174418(void);
s32 fn_801771D4(s32 arg0, s8 *arg1, s32 arg2);
void fn_8017736C(void);
void fn_801773E0(s32 arg0);
void fn_8017776C(s32 arg0);
void fn_80177820(void);
void fn_80177848(void);
void fn_8017999C(void);
s32 fn_8017A018(void);
void fn_8018D0B0(s32 arg0);
s32 fn_8018DB5C(s32 arg0);
void fn_8018E2FC(void);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK sprintf(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f64 farg0, f64 farg1, f64 farg2, f64 farg3, f64 farg4, f64 farg5, f64 farg6, f64 farg7);

void fn_800576D0(void) {
    fn_8005D320();
    fn_80086668();
    fn_80079448();
}

// asm_to_cpp: fn_800576F8
asm void fn_800576F8(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    b lbl_80057710
lbl_80057708:
    bl fn_80167820
    bl fn_801722E8
lbl_80057710:
    bl fn_80167D7C
    cmpwi r3, 0x0
    bgt lbl_80057708
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8005772C
asm void fn_8005772C(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    b lbl_80057764
lbl_8005773C:
    bl fn_80171B8C
    bl fn_80174418
    bl fn_8017A018
    cmpwi r3, 0x0
    bne lbl_80057754
    bl fn_80167820
lbl_80057754:
    bl fn_8017999C
    bl fn_80171C6C
    bl fn_80171D64
    bl fn_801722E8
lbl_80057764:
    bl fn_80167D7C
    cmpwi r3, 0x0
    bgt lbl_8005773C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80057780
asm void fn_80057780(void) {
    nofralloc
    lis r3, lbl_80390580@ha
    lwz r0, lbl_80390580@l(r3)
    rlwinm r0, r0, 0, 31, 28
    stw r0, lbl_80390580@l(r3)
    blr
}

// asm_to_cpp: fn_80057794
asm s32 * fn_80057794(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r3, 0x2
    lis r4, fn_800577F8@ha
    addi r4, r4, fn_800577F8@l
    li r5, 0x8
    bl fn_801771D4
    mr r31, r3
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x0
    stw r0, 0x0(r31)
    mr r3, r31
    bl fn_801773E0
    li r0, -0x1
    stw r0, lbl_8049C2E0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800577F8
asm s32 fn_800577F8(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lis r5, lbl_80390580@ha
    addi r31, r5, lbl_80390580@l
    cmpwi r4, 0x0
    beq lbl_80057828
    li r3, 0x0
    b lbl_800578D4
lbl_80057828:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80057850
    cmpwi r0, 0x1
    beq lbl_800578AC
    cmpwi r0, 0xf0
    beq lbl_800578B8
    cmpwi r0, 0xf1
    beq lbl_800578C0
    b lbl_800578D0
lbl_80057850:
    mr r3, r31
    li r4, 0x0
    li r5, 0xe4
    bl memset
    addi r3, r31, 0x40
    li r4, -0x1
    li r5, 0x20
    bl memset
    addi r3, r31, 0x60
    li r4, -0x1
    li r5, 0x20
    bl memset
    lis r3, lbl_80390668@ha
    addi r3, r3, lbl_80390668@l
    li r4, 0x0
    li r5, 0x68
    bl memset
    li r0, -0x1
    stw r0, 0x1c(r31)
    stw r0, lbl_8049C2E0
    lwz r3, 0x0(r30)
    addi r0, r3, 0x1
    stw r0, 0x0(r30)
lbl_800578AC:
    bl fn_800578EC
    bl fn_80057AB0
    b lbl_800578D0
lbl_800578B8:
    li r0, 0xf1
    stw r0, 0x0(r3)
lbl_800578C0:
    mr r3, r30
    bl fn_8017776C
    li r3, 0x0
    b lbl_800578D4
lbl_800578D0:
    li r3, 0x0
lbl_800578D4:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800578EC
asm void fn_800578EC(void) {
    nofralloc
    lis r4, lbl_80390580@ha
    lwz r3, lbl_80390580@l(r4)
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beqlr
    clrrwi r0, r3, 1
    stw r0, lbl_80390580@l(r4)
    li r0, -0x1
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r0, 0x1c(r3)
    blr
}

// asm_to_cpp: fn_8005791C
asm void fn_8005791C(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    nofralloc
    lis r7, lbl_80390580@ha
    addi r7, r7, lbl_80390580@l
    stw r3, 0x1c(r7)
    stw r4, 0x20(r7)
    stb r6, 0x38(r7)
    ori r0, r5, 0xff
    stw r0, 0x3c(r7)
    blr
}

// asm_to_cpp: fn_8005793C
asm void fn_8005793C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    mr r31, r5
    mr r5, r6
    mr r6, r7
    bl fn_8005791C
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    stw r30, 0x2c(r3)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r31, 0x4(r3)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80057994
asm void fn_80057994(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    lis r3, lbl_80390580@ha
    addi r29, r3, lbl_80390580@l
    bl OSGetTick
    stw r3, lbl_8049D4E0
    li r30, 0x0
    lis r31, 0x8000
    b lbl_800579F0
lbl_800579C4:
    bl OSGetTick
    lwz r0, lbl_8049D4E0
    subf r3, r0, r3
    lwz r0, 0xf8(r31)
    srwi r0, r0, 2
    divwu r0, r3, r0
    cmplwi r0, 0x1
    ble lbl_800579EC
    bl fn_80177848
    stw r30, 0x1(r0)
lbl_800579EC:
    bl fn_8017736C
lbl_800579F0:
    bl fn_80177820
    cmpwi r3, 0x2
    bgt lbl_800579C4
    lwz r0, 0x1c(r29)
    lis r3, lbl_803C1A40@ha
    addi r30, r3, lbl_803C1A40@l
    stw r0, 0x14(r30)
    lwz r0, 0x20(r29)
    stw r0, 0x18(r30)
    bl fn_8008AED0
    li r31, -0x1
    stw r31, 0x1c(r30)
    bl fn_80057A50
    stw r31, 0x1c(r29)
    li r0, 0x1
    stb r0, 0x38(r29)
    li r0, 0x0
    stw r0, 0xc(r29)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80057A50
asm void fn_80057A50(void) {
    nofralloc
    lis r3, lbl_80390580@ha
    addi r5, r3, lbl_80390580@l
    li r3, 0x1c
    li r0, 0x7
    mtctr r0
lbl_80057A64:
    add r4, r5, r3
    lwz r0, 0x3c(r4)
    stw r0, 0x40(r4)
    lwz r0, 0x5c(r4)
    stw r0, 0x60(r4)
    subi r3, r3, 0x4
    bdnz lbl_80057A64
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    stw r0, 0x40(r5)
    lwz r0, 0x18(r3)
    stw r0, 0x60(r5)
    blr
}

// asm_to_cpp: fn_80057A9C
asm void fn_80057A9C(void) {
    nofralloc
    lis r3, lbl_80390580@ha
    lwz r0, lbl_80390580@l(r3)
    ori r0, r0, 0x1
    stw r0, lbl_80390580@l(r3)
    blr
}

// asm_to_cpp: fn_80057AB0
asm void fn_80057AB0(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    li r29, 0x0
    li r28, 0x0
    bl fn_8005CFCC
    cntlzw r0, r3
    srwi r27, r0, 5
    cmpwi r27, 0x0
    beq lbl_80057B84
    bl fn_8008AE14
    cmpwi r3, 0x0
    bne lbl_80057B84
    lis r31, lbl_80390580@ha
    lwz r0, lbl_80390580@l(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80057B84
    li r30, 0x0
lbl_80057B04:
    lwz r0, lbl_80390580@l(r31)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80057B1C
    cmpwi r30, 0x0
    bgt lbl_80057B40
lbl_80057B1C:
    mr r3, r30
    bl fn_8008AAA4
    cmpwi r3, 0x0
    beq lbl_80057B34
    li r28, 0x1
    mr r29, r30
lbl_80057B34:
    addi r30, r30, 0x1
    cmpwi r30, 0x4
    blt lbl_80057B04
lbl_80057B40:
    lis r3, lbl_803C22B0@ha
    addi r3, r3, lbl_803C22B0@l
    lbz r0, 0x40(r3)
    cmplwi r0, 0x1
    bne lbl_80057B68
    cmpwi r28, 0x0
    beq lbl_80057B84
    stw r29, lbl_8049C2E0
    li r27, 0x0
    b lbl_80057B84
lbl_80057B68:
    lwz r0, lbl_8049C2E0
    cmpwi r0, 0x0
    blt lbl_80057B84
    li r28, 0x1
    mr r29, r0
    li r0, -0x1
    stw r0, lbl_8049C2E0
lbl_80057B84:
    cmpwi r27, 0x0
    beq lbl_80057BCC
    lis r3, lbl_80390580@ha
    lwz r0, lbl_80390580@l(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80057BCC
    bl fn_8008AE14
    cmpwi r3, 0x0
    bne lbl_80057BCC
    cmpwi r28, 0x0
    beq lbl_80057BCC
    li r3, 0x1
    mulli r5, r29, 0x3cc
    lis r4, lbl_803BD100@ha
    addi r0, r4, lbl_803BD100@l
    add r4, r0, r5
    bl fn_8008A668
lbl_80057BCC:
    bl fn_8008A764
    cmpwi r3, 0x0
    beq lbl_80057BDC
    bl fn_80057A9C
lbl_80057BDC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80057BF4
asm s32 fn_80057BF4(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    cmpwi r3, 0x2
    bne lbl_80057D3C
    cmpwi r4, 0x0
    bne lbl_80057C5C
    addi r3, r1, 0x8
    li r4, 0x3
    li r5, 0x0
    li r6, 0xa
    li r7, 0x0
    bl fn_8008B160
    addi r3, r1, 0x8
    li r4, 0x12
    li r5, 0x0
    bl fn_801648C4
    cmpwi r3, 0x0
    beq lbl_80057D3C
    li r0, 0x0
    lis r4, lbl_803C1A40@ha
    addi r4, r4, lbl_803C1A40@l
    stw r0, 0x330(r4)
    bl fn_801773E0
    b lbl_80057D3C
lbl_80057C5C:
    cmpwi r4, 0x1
    bne lbl_80057CA4
    addi r3, r1, 0x8
    li r4, 0x5
    lis r5, lbl_80395728@ha
    addi r5, r5, lbl_80395728@l
    lwz r5, 0xbe4(r5)
    li r6, 0xa
    li r7, 0x0
    bl fn_8008B160
    addi r3, r1, 0x8
    li r4, 0x12
    li r5, 0x0
    bl fn_801648C4
    cmpwi r3, 0x0
    beq lbl_80057D3C
    bl fn_801773E0
    b lbl_80057D3C
lbl_80057CA4:
    cmpwi r4, 0x2
    bne lbl_80057CE0
    addi r3, r1, 0x8
    li r4, 0x6
    li r6, 0xa
    li r7, 0x0
    bl fn_8008B160
    addi r3, r1, 0x8
    li r4, 0x12
    li r5, 0x0
    bl fn_801648C4
    cmpwi r3, 0x0
    beq lbl_80057D3C
    bl fn_801773E0
    b lbl_80057D3C
lbl_80057CE0:
    subi r3, r4, 0xa
    cmplwi r3, 0x59
    bgt lbl_80057D3C
    bl fn_8005E2CC
    mr r31, r3
    cmpwi r3, 0x0
    beq lbl_80057D3C
    addi r3, r1, 0x8
    li r4, 0x4
    lwz r5, 0x18(r31)
    li r6, 0xa
    li r7, 0x0
    bl fn_8008B160
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    stw r31, 0x330(r3)
    addi r3, r1, 0x8
    li r4, 0x12
    li r5, 0x0
    bl fn_801648C4
    cmpwi r3, 0x0
    beq lbl_80057D3C
    bl fn_801773E0
lbl_80057D3C:
    li r3, 0x0
    lwz r31, 0x10c(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// asm_to_cpp: fn_80057D54
asm void fn_80057D54(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    cmpwi r3, 0x1
    beq lbl_80057D74
    cmpwi r3, 0x2
    beq lbl_80057DB8
    b lbl_80057E88
lbl_80057D74:
    addi r3, r1, 0x8
    li r4, 0xb
    lis r5, lbl_80395728@ha
    addi r5, r5, lbl_80395728@l
    lwz r5, 0xbe4(r5)
    li r6, 0x0
    li r7, 0x0
    bl fn_8008B160
    addi r3, r1, 0x1a
    lis r4, lbl_8034A458@ha
    addi r4, r4, lbl_8034A458@l
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x8
    li r4, 0x4
    bl fn_80167F00
    b lbl_80057E88
lbl_80057DB8:
    cmpwi r4, 0x0
    bne lbl_80057E48
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x7
    beq lbl_80057DF0
    cmpwi r0, 0x1
    bne lbl_80057E0C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    bne lbl_80057E0C
lbl_80057DF0:
    addi r3, r1, 0x8
    li r4, 0xc
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    bl fn_8008B160
    b lbl_80057E24
lbl_80057E0C:
    addi r3, r1, 0x8
    li r4, 0xc
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008B160
lbl_80057E24:
    addi r3, r1, 0x1a
    lis r4, lbl_8034A458@ha
    addi r4, r4, lbl_8034A458@l
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x8
    li r4, 0x4
    bl fn_80167F00
    b lbl_80057E88
lbl_80057E48:
    cmpwi r4, 0x2
    bne lbl_80057E88
    addi r3, r1, 0x8
    li r4, 0xc
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008B160
    addi r3, r1, 0x1a
    lis r4, lbl_8034A458@ha
    addi r4, r4, lbl_8034A458@l
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x8
    li r4, 0x4
    bl fn_80167F00
lbl_80057E88:
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// asm_to_cpp: fn_80057E98
asm s32 fn_80057E98(s32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    li r0, -0x1
    cmpwi r3, 0x1
    beq lbl_80057EBC
    cmpwi r3, 0x2
    beq lbl_80057F08
    b lbl_80057FE8
lbl_80057EBC:
    addi r3, r1, 0x8
    li r4, 0xb
    lis r5, lbl_80395728@ha
    addi r5, r5, lbl_80395728@l
    lwz r5, 0xbe4(r5)
    li r6, 0x0
    li r7, 0x0
    bl fn_8008B160
    addi r3, r1, 0x1a
    lis r4, lbl_8034A458@ha
    addi r4, r4, lbl_8034A458@l
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80166A90
    mr r0, r3
    b lbl_80057FE8
lbl_80057F08:
    cmpwi r4, 0x0
    bne lbl_80057FA0
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r0, 0x14(r3)
    cmpwi r0, 0x7
    beq lbl_80057F40
    cmpwi r0, 0x1
    bne lbl_80057F5C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    bne lbl_80057F5C
lbl_80057F40:
    addi r3, r1, 0x8
    li r4, 0xc
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    bl fn_8008B160
    b lbl_80057F74
lbl_80057F5C:
    addi r3, r1, 0x8
    li r4, 0xc
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008B160
lbl_80057F74:
    addi r3, r1, 0x1a
    lis r4, lbl_8034A458@ha
    addi r4, r4, lbl_8034A458@l
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80166A90
    mr r0, r3
    b lbl_80057FE8
lbl_80057FA0:
    cmpwi r4, 0x2
    bne lbl_80057FE8
    addi r3, r1, 0x8
    li r4, 0xc
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_8008B160
    addi r3, r1, 0x1a
    lis r4, lbl_8034A458@ha
    addi r4, r4, lbl_8034A458@l
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80166A90
    mr r0, r3
lbl_80057FE8:
    mr r3, r0
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// asm_to_cpp: fn_80057FFC
asm void fn_80057FFC() {
    nofralloc
    lwz r0, 0x18(r3)
    cmplwi r0, 0x2b
    bgt lbl_8005812C
    lis r4, jumptable_8034A3A8@ha
    addi r4, r4, jumptable_8034A3A8@l
    slwi r0, r0, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80058048
    lis r3, lbl_80390580@ha
    addi r4, r3, lbl_80390580@l
    lwz r3, 0x10(r4)
    addi r0, r3, 0x3
    stw r0, 0x10(r4)
    b lbl_80058168
lbl_80058048:
    lis r3, lbl_80390580@ha
    addi r4, r3, lbl_80390580@l
    lwz r3, 0x10(r4)
    addi r0, r3, 0x5
    stw r0, 0x10(r4)
    b lbl_80058168
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80058168
    lis r3, lbl_80390580@ha
    addi r4, r3, lbl_80390580@l
    lwz r3, 0x10(r4)
    addi r0, r3, 0x5
    stw r0, 0x10(r4)
    b lbl_80058168
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800580B0
    lis r3, lbl_80390580@ha
    addi r4, r3, lbl_80390580@l
    lwz r3, 0x10(r4)
    addi r0, r3, 0x1
    stw r0, 0x10(r4)
    b lbl_80058168
lbl_800580B0:
    lis r3, lbl_80390580@ha
    addi r4, r3, lbl_80390580@l
    lwz r3, 0x10(r4)
    addi r0, r3, 0x5
    stw r0, 0x10(r4)
    b lbl_80058168
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_800580FC
    lwz r0, 0x3778(r3)
    cmpwi r0, 0x0
    beq lbl_80058168
    lis r3, lbl_80390580@ha
    addi r4, r3, lbl_80390580@l
    lwz r3, 0x10(r4)
    addi r0, r3, 0x2
    stw r0, 0x10(r4)
    b lbl_80058168
lbl_800580FC:
    lis r3, lbl_80390580@ha
    addi r4, r3, lbl_80390580@l
    lwz r3, 0x10(r4)
    addi r0, r3, 0x5
    stw r0, 0x10(r4)
    b lbl_80058168
    lis r3, lbl_80390580@ha
    addi r4, r3, lbl_80390580@l
    lwz r3, 0x10(r4)
    addi r0, r3, 0x4
    stw r0, 0x10(r4)
    b lbl_80058168
lbl_8005812C:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80058154
    lis r3, lbl_80390580@ha
    addi r4, r3, lbl_80390580@l
    lwz r3, 0x10(r4)
    addi r0, r3, 0x2
    stw r0, 0x10(r4)
    b lbl_80058168
lbl_80058154:
    lis r3, lbl_80390580@ha
    addi r4, r3, lbl_80390580@l
    lwz r3, 0x10(r4)
    addi r0, r3, 0x5
    stw r0, 0x10(r4)
lbl_80058168:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0x10(r3)
    blr
}

// asm_to_cpp: fn_80058178
asm s32 fn_80058178(void) {
    nofralloc
    lis r3, lbl_803C1A40@ha
    addi r3, r3, lbl_803C1A40@l
    lwz r4, 0x14(r3)
    cmpwi r4, 0x7
    bne lbl_80058194
    li r3, 0x3
    blr
lbl_80058194:
    cmpwi r4, 0x2
    beq lbl_800581A4
    li r3, 0x0
    blr
lbl_800581A4:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r3, 0x4(r3)
    subi r0, r3, 0x23
    cmplwi r0, 0x2
    ble lbl_800581C8
    subi r0, r3, 0x2c
    cmplwi r0, 0x2
    bgt lbl_800581D8
lbl_800581C8:
    cmpwi r4, 0x2
    bne lbl_800581D8
    li r3, 0x3
    blr
lbl_800581D8:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r4, 0x10(r3)
    cmpwi r4, 0xe
    bge lbl_800581F4
    li r3, 0x0
    blr
lbl_800581F4:
    cmpwi r4, 0x10
    bge lbl_80058204
    li r3, 0x1
    blr
lbl_80058204:
    li r0, 0x12
    subfc r0, r0, r4
    li r3, 0x0
    srwi r0, r4, 31
    subfe r3, r0, r3
    addi r3, r3, 0x3
    blr
}

// asm_to_cpp: fn_80058220
asm void fn_80058220(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    bl fn_8018E2FC
    li r3, 0x4
    bl fn_8018DB5C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xbe4(r3)
    slwi r0, r0, 2
    lis r3, lbl_8034C9E0@ha
    addi r3, r3, lbl_8034C9E0@l
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    blt lbl_80058268
    bl fn_8018DB5C
lbl_80058268:
    li r27, 0x0
    li r31, 0x0
    lis r3, lbl_80395728@ha
    addi r28, r3, lbl_80395728@l
    lis r3, lbl_8034C914@ha
    addi r30, r3, lbl_8034C914@l
lbl_80058280:
    add r29, r28, r31
    lwz r0, 0x28(r29)
    slwi r0, r0, 2
    lwzx r3, r30, r0
    cmpwi r3, 0x0
    blt lbl_80058314
    bl fn_8018DB5C
    lwz r0, 0x28(r29)
    cmpwi r0, 0xb
    beq lbl_800582CC
    cmpwi r0, 0x9
    beq lbl_800582E0
    cmpwi r0, 0x1d
    beq lbl_800582EC
    cmpwi r0, 0xf
    beq lbl_800582F8
    cmpwi r0, 0x2c
    beq lbl_80058304
    b lbl_80058314
lbl_800582CC:
    lwz r3, 0x30(r30)
    bl fn_8018DB5C
    lwz r3, 0x34(r30)
    bl fn_8018DB5C
    b lbl_80058314
lbl_800582E0:
    lwz r3, 0x28(r30)
    bl fn_8018DB5C
    b lbl_80058314
lbl_800582EC:
    lwz r3, 0x78(r30)
    bl fn_8018DB5C
    b lbl_80058314
lbl_800582F8:
    lwz r3, 0x40(r30)
    bl fn_8018DB5C
    b lbl_80058314
lbl_80058304:
    lwz r3, 0xb4(r30)
    bl fn_8018DB5C
    lwz r3, 0xb8(r30)
    bl fn_8018DB5C
lbl_80058314:
    addi r27, r27, 0x1
    addi r31, r31, 0x78
    cmpwi r27, 0x19
    blt lbl_80058280
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8005833C
asm void fn_8005833C(void) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_28
    addi r3, r1, 0x8
    li r4, 0xa
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    bl fn_8008B160
    addi r3, r1, 0x8
    li r4, 0x20
    bl fn_80167F00
    li r28, 0x0
    li r31, 0x0
    lis r3, lbl_80395728@ha
    addi r30, r3, lbl_80395728@l
lbl_80058384:
    add r6, r30, r31
    lwz r5, 0x28(r6)
    cmpwi r5, 0x0
    beq lbl_80058414
    cmpwi r28, 0x0
    beq lbl_800583C8
    cmpwi r28, 0x1
    beq lbl_800583D0
    cmpwi r28, 0x2
    beq lbl_800583D8
    cmpwi r28, 0x3
    beq lbl_800583E0
    cmpwi r28, 0x4
    beq lbl_800583E8
    cmpwi r28, 0x5
    beq lbl_800583F0
    b lbl_800583F4
lbl_800583C8:
    li r29, 0x20
    b lbl_800583F4
lbl_800583D0:
    li r29, 0x40
    b lbl_800583F4
lbl_800583D8:
    li r29, 0x80
    b lbl_800583F4
lbl_800583E0:
    li r29, 0x100
    b lbl_800583F4
lbl_800583E8:
    li r29, 0x200
    b lbl_800583F4
lbl_800583F0:
    li r29, 0x400
lbl_800583F4:
    addi r3, r1, 0x8
    li r4, 0xa
    lwz r6, 0x2c(r6)
    li r7, 0x1
    bl fn_8008B160
    addi r3, r1, 0x8
    mr r4, r29
    bl fn_80167F00
lbl_80058414:
    addi r28, r28, 0x1
    addi r31, r31, 0x78
    cmpwi r28, 0x19
    blt lbl_80058384
    addi r11, r1, 0x60
    bl _restgpr_28
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_8005843C
asm void fn_8005843C(s32 arg0) {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    lis r5, lbl_80390668@ha
    addi r4, r5, lbl_80390668@l
    lwz r0, lbl_80390668@l(r5)
    slwi r0, r0, 2
    add r4, r4, r0
    stw r3, 0x4(r4)
    lwz r3, lbl_80390668@l(r5)
    addi r0, r3, 0x1
    stw r0, lbl_80390668@l(r5)
    blr
}

// asm_to_cpp: fn_8005846C
asm void fn_8005846C(void) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_29
    li r30, 0x0
    lis r3, lbl_80390668@ha
    stw r30, lbl_80390668@l(r3)
    addi r3, r1, 0x8
    li r4, 0xa
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    bl fn_8008B160
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80166A90
    bl fn_8005843C
    li r29, 0x0
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
lbl_800584C4:
    add r6, r31, r30
    lwz r5, 0x28(r6)
    cmpwi r5, 0x0
    beq lbl_800584FC
    addi r3, r1, 0x8
    li r4, 0xa
    lwz r6, 0x2c(r6)
    li r7, 0x1
    bl fn_8008B160
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80166A90
    bl fn_8005843C
lbl_800584FC:
    addi r29, r29, 0x1
    addi r30, r30, 0x78
    cmpwi r29, 0x19
    blt lbl_800584C4
    addi r11, r1, 0x60
    bl _restgpr_29
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_80058524
asm void fn_80058524(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_80390668@ha
    addi r31, r30, lbl_80390668@l
    b lbl_8005855C
lbl_80058544:
    slwi r0, r0, 2
    lwzx r3, r31, r0
    bl fn_80166B54
    lwz r3, lbl_80390668@l(r30)
    subi r0, r3, 0x1
    stw r0, lbl_80390668@l(r30)
lbl_8005855C:
    lwz r0, lbl_80390668@l(r30)
    cmpwi r0, 0x0
    bgt lbl_80058544
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80058580
asm void fn_80058580(void) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_29
    li r30, 0x0
    lis r3, lbl_80390668@ha
    stw r30, lbl_80390668@l(r3)
    li r29, 0x0
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
lbl_800585AC:
    add r3, r31, r30
    lwz r5, 0x28(r3)
    cmpwi r5, 0x0
    beq lbl_800585E4
    addi r3, r1, 0x8
    li r4, 0x14
    li r6, 0x0
    li r7, 0x1
    bl fn_8008B160
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80166A90
    bl fn_8005843C
lbl_800585E4:
    addi r29, r29, 0x1
    addi r30, r30, 0x78
    cmpwi r29, 0x9
    blt lbl_800585AC
    addi r11, r1, 0x60
    bl _restgpr_29
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_8005860C
asm void fn_8005860C(void) {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_28
    li r28, 0x0
    li r31, 0x0
    lis r3, lbl_80395728@ha
    addi r30, r3, lbl_80395728@l
lbl_80058630:
    add r3, r30, r31
    lwz r5, 0x28(r3)
    cmpwi r5, 0x0
    beq lbl_800586C0
    cmpwi r28, 0x0
    beq lbl_80058674
    cmpwi r28, 0x1
    beq lbl_8005867C
    cmpwi r28, 0x2
    beq lbl_80058684
    cmpwi r28, 0x3
    beq lbl_8005868C
    cmpwi r28, 0x4
    beq lbl_80058694
    cmpwi r28, 0x5
    beq lbl_8005869C
    b lbl_800586A0
lbl_80058674:
    li r29, 0x20
    b lbl_800586A0
lbl_8005867C:
    li r29, 0x40
    b lbl_800586A0
lbl_80058684:
    li r29, 0x80
    b lbl_800586A0
lbl_8005868C:
    li r29, 0x100
    b lbl_800586A0
lbl_80058694:
    li r29, 0x200
    b lbl_800586A0
lbl_8005869C:
    li r29, 0x400
lbl_800586A0:
    addi r3, r1, 0x8
    li r4, 0x14
    li r6, 0x0
    li r7, 0x1
    bl fn_8008B160
    addi r3, r1, 0x8
    mr r4, r29
    bl fn_80167F00
lbl_800586C0:
    addi r28, r28, 0x1
    addi r31, r31, 0x78
    cmpwi r28, 0x9
    blt lbl_80058630
    addi r11, r1, 0x60
    bl _restgpr_28
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_800586E8
asm void fn_800586E8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x0
    li r4, 0x0
    lis r5, lbl_80395728@ha
    addi r7, r5, lbl_80395728@l
    mr r6, r4
    li r0, 0x4
    mtctr r0
lbl_80058718:
    add r5, r7, r3
    lwz r8, 0x28(r5)
    cmpwi r8, 0x0
    beq lbl_80058740
    lwz r0, 0x34(r5)
    cmpwi r0, 0x0
    bne lbl_80058740
    add r5, r7, r4
    stw r8, 0xc1c(r5)
    b lbl_80058748
lbl_80058740:
    add r5, r7, r4
    stw r6, 0xc1c(r5)
lbl_80058748:
    addi r3, r3, 0x78
    addi r4, r4, 0x4
    bdnz lbl_80058718
    bl fn_8005C748
    mr r3, r31
    li r4, 0x0
    li r5, 0x12c
    bl memset
    li r4, -0x1
    stw r4, 0x10(r31)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xbe4(r3)
    stw r0, 0x28(r31)
    lwz r0, 0xbe8(r3)
    stw r0, 0x2c(r31)
    lwz r0, 0xc04(r3)
    stw r0, 0x118(r31)
    lwz r0, 0x14(r3)
    stw r0, 0xc(r31)
    stw r4, 0x58(r31)
    stw r31, 0x74(r31)
    stw r4, 0x7c(r31)
    lwz r0, 0x4(r3)
    cmplwi r0, 0xc
    beq lbl_800587B8
    cmplwi r0, 0x1e
    bne lbl_800587C8
lbl_800587B8:
    li r0, 0x0
    stw r0, 0x70(r31)
    li r0, 0x4
    stw r0, 0x6c(r31)
lbl_800587C8:
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x4(r4)
    subi r0, r3, 0x3
    cmplwi r0, 0x2b
    bgt lbl_800587F8
    lis r3, jumptable_8034A5D0@ha
    addi r3, r3, jumptable_8034A5D0@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
lbl_800587F8:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc9c(r3)
    stw r0, 0x30(r31)
    lwz r0, 0xca0(r3)
    stw r0, 0x38(r31)
    b lbl_800589D4
    lwz r0, 0xca4(r4)
    stw r0, 0x30(r31)
    lwz r0, 0xca8(r4)
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x2
    stw r0, 0x30(r31)
    li r0, 0xe10
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, 0x1c20
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, 0xe10
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, -0x78
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    lwz r0, 0xc00(r4)
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x2
    stw r0, 0x30(r31)
    li r0, -0x78
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r3, 0x1
    stw r3, 0x30(r31)
    li r0, -0x78
    stw r0, 0x38(r31)
    stw r3, 0x48(r31)
    stw r3, 0x4c(r31)
    stw r3, 0x50(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, -0x78
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, 0xe10
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, 0x1c20
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, 0xe10
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, 0xe10
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, 0xe10
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, 0xe10
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, 0x1734
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, -0x78
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, -0x78
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, -0x78
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, 0xe10
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x2
    stw r0, 0x30(r31)
    li r0, 0xe10
    stw r0, 0x38(r31)
    b lbl_800589D4
    li r0, 0x1
    stw r0, 0x30(r31)
    li r0, 0x1c20
    stw r0, 0x38(r31)
lbl_800589D4:
    mr r3, r31
    li r4, -0x100
    bl fn_8005C808
    mr r3, r31
    bl fn_80058A48
    mr r3, r31
    bl fn_800A033C
    bl fn_8005D018
    cmpwi r3, 0x0
    beq lbl_80058A34
    li r3, 0x0
    lis r4, lbl_80390580@ha
    addi r5, r4, lbl_80390580@l
    lfs f0, lbl_8049ED50
    li r4, -0x1
    li r0, 0x3
    mtctr r0
lbl_80058A18:
    add r6, r5, r3
    stfs f0, 0xb8(r6)
    stfs f0, 0xb4(r6)
    stw r4, 0xd0(r6)
    stw r4, 0xcc(r6)
    addi r3, r3, 0x8
    bdnz lbl_80058A18
lbl_80058A34:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80058A48
asm void fn_80058A48() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r30, r3
    lwz r0, 0x0(r3)
    ori r4, r0, 0xf0
    li r0, -0x510
    and r0, r4, r0
    stw r0, 0x0(r3)
    addi r3, r3, 0x24
    li r4, 0x0
    li r5, 0x4
    bl memset
    lwz r0, 0x38(r30)
    stw r0, 0x3c(r30)
    li r0, 0x0
    stw r0, 0x40(r30)
    li r0, -0x1
    stw r0, 0x5c(r30)
    stw r0, 0x60(r30)
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    lwz r0, 0x4(r31)
    cmplwi r0, 0x2e
    bgt lbl_80058C6C
    lis r3, jumptable_8034A680@ha
    addi r3, r3, jumptable_8034A680@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0xbf0(r31)
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    stw r3, 0x44(r30)
    b lbl_80058CEC
    lwz r0, 0xcac(r31)
    cmpwi r0, 0x1
    beq lbl_80058B0C
    cmpwi r0, 0x2
    beq lbl_80058B14
    cmpwi r0, 0x3
    beq lbl_80058B1C
    li r28, 0x40
    b lbl_80058B20
lbl_80058B0C:
    li r28, 0x80
    b lbl_80058B20
lbl_80058B14:
    li r28, 0xc0
    b lbl_80058B20
lbl_80058B1C:
    li r28, 0xff
lbl_80058B20:
    li r27, 0x0
    li r31, 0x0
    lis r3, lbl_80395728@ha
    addi r29, r3, lbl_80395728@l
lbl_80058B30:
    add r3, r29, r31
    lwz r3, 0xbf0(r3)
    mr r4, r28
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    add r4, r30, r31
    stw r3, 0x44(r4)
    addi r27, r27, 0x1
    addi r31, r31, 0x4
    cmpwi r27, 0x4
    blt lbl_80058B30
    b lbl_80058CEC
    lwz r3, 0xbf0(r31)
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    stw r3, 0x44(r30)
    b lbl_80058CEC
    lwz r3, 0xc18(r31)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x9
    bl fn_801728DC
    lwz r5, 0xc18(r31)
    li r0, 0xa
    xoris r4, r0, 0x8000
    subi r0, r5, 0xa
    addc r0, r0, r4
    subfe r4, r0, r0
    subi r0, r5, 0x9
    slwi r0, r0, 4
    and r4, r0, r4
    lwz r0, 0xbf0(r31)
    add r4, r4, r0
    lis r5, lbl_8034A530@ha
    addi r5, r5, lbl_8034A530@l
    slwi r0, r3, 2
    add r3, r5, r0
    lwz r3, 0x28(r3)
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    stw r3, 0x44(r30)
    b lbl_80058CEC
    lwz r3, 0xc18(r31)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x9
    bl fn_801728DC
    lwz r5, 0xc18(r31)
    li r0, 0xa
    xoris r4, r0, 0x8000
    subi r0, r5, 0xa
    addc r0, r0, r4
    subfe r4, r0, r0
    subi r0, r5, 0x9
    slwi r0, r0, 4
    and r4, r0, r4
    lwz r0, 0xbf0(r31)
    add r4, r4, r0
    lis r5, lbl_8034A530@ha
    addi r5, r5, lbl_8034A530@l
    slwi r0, r3, 2
    add r3, r5, r0
    lwz r3, 0x50(r3)
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    stw r3, 0x44(r30)
    b lbl_80058CEC
    lwz r3, 0xbf0(r31)
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    stw r3, 0x44(r30)
    b lbl_80058CEC
lbl_80058C6C:
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    lwz r29, 0xcac(r31)
    lwz r3, 0xc18(r31)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x9
    bl fn_801728DC
    lwz r5, 0xc18(r31)
    li r0, 0xa
    xoris r4, r0, 0x8000
    subi r0, r5, 0xa
    addc r0, r0, r4
    subfe r4, r0, r0
    subi r0, r5, 0x9
    slwi r0, r0, 4
    and r4, r0, r4
    lwz r0, 0xbf0(r31)
    add r4, r4, r0
    mulli r6, r29, 0x28
    lis r5, lbl_8034A530@ha
    addi r0, r5, lbl_8034A530@l
    slwi r3, r3, 2
    add r0, r0, r6
    lwzx r3, r3, r0
    li r5, 0x0
    li r6, 0xff
    bl fn_801728DC
    stw r3, 0x44(r30)
    b lbl_80058CEC
    li r0, 0xff
    stw r0, 0x44(r30)
lbl_80058CEC:
    li r3, 0x0
    bl fn_8018D0B0
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80058D0C
asm s32 fn_80058D0C(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r30, r3
    li r31, -0x1
    lis r3, lbl_80395728@ha
    addi r29, r3, lbl_80395728@l
    lwz r0, 0x4(r29)
    cmplwi r0, 0xf
    beq lbl_80058D58
    lwz r3, 0xfd8(r29)
    li r4, 0x1
    li r5, 0x0
    lis r6, 0xce0
    subi r6, r6, 0x1a3c
    bl fn_801728DC
    stw r3, 0xfd8(r29)
lbl_80058D58:
    lis r3, lbl_803A1C88@ha
    addi r4, r3, lbl_803A1C88@l
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x14(r3)
    cmplwi r0, 0x1
    bne lbl_80058DA0
    lwz r0, 0x0(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80058DA0
    lwz r0, 0x10(r30)
    cmpwi r0, 0x4
    bne lbl_80058DD4
    mr r3, r30
    bl fn_80059CB8
    mr r31, r3
    b lbl_80058DD4
lbl_80058DA0:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x4
    beq lbl_80058DB8
    cmpwi r0, 0x9
    beq lbl_80058DC8
    b lbl_80058DD4
lbl_80058DB8:
    mr r3, r30
    bl fn_80058E2C
    mr r31, r3
    b lbl_80058DD4
lbl_80058DC8:
    mr r3, r30
    bl fn_80059F8C
    mr r31, r3
lbl_80058DD4:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r3, 0x118(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_80058E10
    lwz r3, 0x10(r30)
    subi r0, r3, 0x6
    cmplwi r0, 0x1
    ble lbl_80058E08
    cmpwi r3, 0x4
    bne lbl_80058E10
lbl_80058E08:
    mr r3, r30
    bl fn_80059CBC
lbl_80058E10:
    mr r3, r31
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80058E2C
asm s32 fn_80058E2C(s8 *arg0) {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    stfd f30, 0xa0(r1)
    opword 0xF3C100A8
    stfd f29, 0x90(r1)
    opword 0xF3A10098
    stfd f28, 0x80(r1)
    opword 0xF3810088
    stfd f27, 0x70(r1)
    opword 0xF3610078
    addi r11, r1, 0x70
    bl _savegpr_19
    mr r23, r3
    li r24, -0x1
    bl fn_80059D70
    mr r3, r23
    bl fn_800A0360
    cmpwi r3, 0x0
    blt lbl_80058E88
    mr r24, r3
lbl_80058E88:
    cmpwi r24, 0x0
    bgt lbl_80059464
    lwz r0, 0x38(r23)
    cmpwi r0, 0x0
    blt lbl_80059064
    lwz r0, 0x3c(r23)
    cmpwi r0, 0x0
    bgt lbl_80059064
    li r24, 0x0
    li r26, 0x0
    li r20, 0x0
    addi r22, r1, 0x10
    la r3, lbl_8049ED50
    lfs f29, 0x4(r3)
    lis r3, lbl_803906D0@ha
    addi r21, r3, lbl_803906D0@l
    lfd f28, lbl_8049ED48
    lis r19, 0x4330
lbl_80058ED0:
    stfsx f29, r22, r20
    li r27, 0x0
    lwzx r3, r21, r20
    lwz r25, 0xc(r3)
    cmpwi r25, 0x0
    beq lbl_80058F28
    addi r24, r24, 0x1
    b lbl_80058F28
lbl_80058EF0:
    lwz r3, 0x0(r25)
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80058F24
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80058F24
    bl fn_8006AFA0
    lfsx f0, r22, r20
    fadds f0, f0, f1
    stfsx f0, r22, r20
    addi r27, r27, 0x1
lbl_80058F24:
    lwz r25, 0xc(r25)
lbl_80058F28:
    cmpwi r25, 0x0
    bne lbl_80058EF0
    cmpwi r27, 0x0
    beq lbl_80058F58
    xoris r0, r27, 0x8000
    stw r0, 0x24(r1)
    stw r19, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f28
    lfsx f0, r22, r20
    fdivs f0, f0, f1
    stfsx f0, r22, r20
lbl_80058F58:
    addi r26, r26, 0x1
    addi r20, r20, 0x4
    cmpwi r26, 0x4
    blt lbl_80058ED0
    lfs f2, 0x10(r1)
    li r3, 0x4
    addi r4, r1, 0x10
    li r0, 0x3
    mtctr r0
lbl_80058F7C:
    lfsx f0, r4, r3
    fcmpo cr0, f2, f0
    bge lbl_80058F8C
    fmr f2, f0
lbl_80058F8C:
    addi r3, r3, 0x4
    bdnz lbl_80058F7C
    li r19, 0x0
    li r8, 0x0
    li r3, 0x0
    li r6, 0x1
    addi r7, r1, 0x10
    la r4, lbl_8049ED50
    lfs f0, 0x8(r4)
    li r0, 0x4
    mtctr r0
lbl_80058FB8:
    lfsx f1, r7, r3
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_80058FE8
    add r4, r23, r8
    stb r6, 0x24(r4)
    add r5, r23, r3
    lwz r4, 0x14(r5)
    addi r0, r4, 0x1
    stw r0, 0x14(r5)
    addi r19, r19, 0x1
lbl_80058FE8:
    addi r8, r8, 0x1
    addi r3, r3, 0x4
    bdnz lbl_80058FB8
    cmpwi r19, 0x1
    bne lbl_80059038
    li r20, 0x0
lbl_80059000:
    add r3, r23, r20
    lbz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_8005902C
    li r3, 0x0
    bl fn_8005EAA8
    cmpwi r3, 0x0
    bgt lbl_8005902C
    lwz r0, 0x0(r23)
    ori r0, r0, 0x400
    stw r0, 0x0(r23)
lbl_8005902C:
    addi r20, r20, 0x1
    cmpwi r20, 0x4
    blt lbl_80059000
lbl_80059038:
    cmpw r19, r24
    bne lbl_80059050
    lwz r0, 0x0(r23)
    ori r0, r0, 0x1
    stw r0, 0x0(r23)
    b lbl_8005905C
lbl_80059050:
    lwz r0, 0x0(r23)
    ori r0, r0, 0x4
    stw r0, 0x0(r23)
lbl_8005905C:
    li r24, 0xa
    b lbl_80059464
lbl_80059064:
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_80059080
    mr r3, r23
    bl fn_80059F6C
    li r24, 0x9
lbl_80059080:
    li r29, 0x0
    lis r3, lbl_80390580@ha
    addi r30, r3, lbl_80390580@l
    stw r29, 0x10(r30)
    li r28, 0x0
    li r22, 0x0
    lis r3, lbl_803906D0@ha
    addi r31, r3, lbl_803906D0@l
    li r19, 0x1
    addi r20, r1, 0x8
    mr r21, r20
lbl_800590AC:
    lwzx r3, r31, r22
    lwz r27, 0xc(r3)
    li r25, 0x0
    li r26, 0x0
    b lbl_80059168
lbl_800590C0:
    lwz r3, 0x0(r27)
    lwz r5, 0x0(r3)
    rlwinm r0, r5, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80059148
    addi r25, r25, 0x1
    lwz r4, 0xc(r30)
    lwz r4, 0x118(r4)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_80059120
    rlwinm r0, r5, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80059104
    rlwinm r0, r5, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8005910C
lbl_80059104:
    addi r26, r26, 0x1
    b lbl_80059164
lbl_8005910C:
    rlwinm r0, r5, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_80059164
    bl fn_80057FFC
    b lbl_80059164
lbl_80059120:
    rlwinm r0, r5, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80059138
    rlwinm r0, r5, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80059140
lbl_80059138:
    addi r26, r26, 0x1
    b lbl_80059164
lbl_80059140:
    bl fn_80057FFC
    b lbl_80059164
lbl_80059148:
    rlwinm r0, r5, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80059164
    rlwinm r0, r5, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80059164
    bl fn_80057FFC
lbl_80059164:
    lwz r27, 0xc(r27)
lbl_80059168:
    cmpwi r27, 0x0
    bne lbl_800590C0
    cmpw r26, r25
    bne lbl_80059180
    stb r19, 0x0(r20)
    b lbl_80059184
lbl_80059180:
    stb r29, 0x0(r21)
lbl_80059184:
    addi r28, r28, 0x1
    addi r22, r22, 0x4
    addi r21, r21, 0x1
    addi r20, r20, 0x1
    cmpwi r28, 0x4
    blt lbl_800590AC
    bl fn_80058178
    cmpwi r3, 0x3
    bne lbl_800591C0
    bl fn_801714F0
    cmpwi r3, 0x0
    bne lbl_800591D4
    li r3, 0x1
    bl fn_80171454
    b lbl_800591D4
lbl_800591C0:
    bl fn_801714F0
    cmpwi r3, 0x0
    beq lbl_800591D4
    li r3, 0x0
    bl fn_80171454
lbl_800591D4:
    addi r3, r23, 0x24
    li r4, 0x0
    li r5, 0x4
    bl memset
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_80059288
    lbz r0, 0x9(r1)
    cmpwi r0, 0x0
    beq lbl_80059288
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    beq lbl_80059288
    lbz r0, 0xb(r1)
    cmpwi r0, 0x0
    beq lbl_80059288
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 29, 27
    ori r0, r0, 0x2
    stw r0, 0x0(r23)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80059238
    li r0, 0x1
    stb r0, 0x24(r23)
lbl_80059238:
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80059250
    li r0, 0x1
    stb r0, 0x25(r23)
lbl_80059250:
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_80059268
    li r0, 0x1
    stb r0, 0x26(r23)
lbl_80059268:
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_80059280
    li r0, 0x1
    stb r0, 0x27(r23)
lbl_80059280:
    li r24, 0xa
    b lbl_80059428
lbl_80059288:
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_800592F4
    lbz r0, 0x9(r1)
    cmpwi r0, 0x0
    beq lbl_800592F4
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    beq lbl_800592F4
    lbz r0, 0xb(r1)
    cmpwi r0, 0x0
    beq lbl_800592F4
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 29, 27
    ori r0, r0, 0x4
    stw r0, 0x0(r23)
    li r0, 0x1
    stb r0, 0x24(r23)
    li r24, 0xa
    li r3, 0x0
    bl fn_8005EAA8
    cmpwi r3, 0x0
    bgt lbl_80059428
    lwz r0, 0x0(r23)
    ori r0, r0, 0x400
    stw r0, 0x0(r23)
    b lbl_80059428
lbl_800592F4:
    lbz r3, 0x9(r1)
    cmpwi r3, 0x0
    bne lbl_80059360
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_80059360
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    beq lbl_80059360
    lbz r0, 0xb(r1)
    cmpwi r0, 0x0
    beq lbl_80059360
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 29, 27
    ori r0, r0, 0x4
    stw r0, 0x0(r23)
    li r0, 0x1
    stb r0, 0x25(r23)
    li r24, 0xa
    li r3, 0x1
    bl fn_8005EAA8
    cmpwi r3, 0x0
    bgt lbl_80059428
    lwz r0, 0x0(r23)
    ori r0, r0, 0x400
    stw r0, 0x0(r23)
    b lbl_80059428
lbl_80059360:
    lbz r4, 0xa(r1)
    cmpwi r4, 0x0
    bne lbl_800593C8
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_800593C8
    cmpwi r3, 0x0
    beq lbl_800593C8
    lbz r0, 0xb(r1)
    cmpwi r0, 0x0
    beq lbl_800593C8
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 29, 27
    ori r0, r0, 0x4
    stw r0, 0x0(r23)
    li r0, 0x1
    stb r0, 0x26(r23)
    li r24, 0xa
    li r3, 0x2
    bl fn_8005EAA8
    cmpwi r3, 0x0
    bgt lbl_80059428
    lwz r0, 0x0(r23)
    ori r0, r0, 0x400
    stw r0, 0x0(r23)
    b lbl_80059428
lbl_800593C8:
    lbz r0, 0xb(r1)
    cmpwi r0, 0x0
    bne lbl_80059428
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_80059428
    cmpwi r3, 0x0
    beq lbl_80059428
    cmpwi r4, 0x0
    beq lbl_80059428
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 29, 27
    ori r0, r0, 0x4
    stw r0, 0x0(r23)
    li r0, 0x1
    stb r0, 0x27(r23)
    li r24, 0xa
    li r3, 0x3
    bl fn_8005EAA8
    cmpwi r3, 0x0
    bgt lbl_80059428
    lwz r0, 0x0(r23)
    ori r0, r0, 0x400
    stw r0, 0x0(r23)
lbl_80059428:
    li r6, 0x0
    li r3, 0x0
    li r0, 0x4
    mtctr r0
lbl_80059438:
    add r4, r23, r6
    lbz r0, 0x24(r4)
    cmpwi r0, 0x0
    beq lbl_80059458
    add r5, r23, r3
    lwz r4, 0x14(r5)
    addi r0, r4, 0x1
    stw r0, 0x14(r5)
lbl_80059458:
    addi r6, r6, 0x1
    addi r3, r3, 0x4
    bdnz lbl_80059438
lbl_80059464:
    li r3, 0x0
    li r6, 0x0
    lwz r5, 0x30(r23)
    li r0, 0x4
    mtctr r0
lbl_80059478:
    add r4, r23, r3
    lwz r0, 0x14(r4)
    cmpw r0, r5
    blt lbl_8005948C
    addi r6, r6, 0x1
lbl_8005948C:
    addi r3, r3, 0x4
    bdnz lbl_80059478
    cmpwi r6, 0x1
    bne lbl_800594E4
    li r7, 0x0
    li r3, 0x0
    li r5, 0x0
    li r0, 0x4
    mtctr r0
lbl_800594B0:
    add r4, r23, r3
    lwz r4, 0x14(r4)
    lwz r0, 0x30(r23)
    cmpw r4, r0
    bge lbl_800594CC
    add r4, r23, r7
    stb r5, 0x24(r4)
lbl_800594CC:
    addi r7, r7, 0x1
    addi r3, r3, 0x4
    bdnz lbl_800594B0
    lwz r0, 0x0(r23)
    clrrwi r0, r0, 1
    stw r0, 0x0(r23)
lbl_800594E4:
    cmpwi r6, 0x2
    blt lbl_80059534
    li r6, 0x0
    li r3, 0x0
    li r5, 0x1
    li r0, 0x4
    mtctr r0
lbl_80059500:
    add r4, r23, r3
    lwz r4, 0x14(r4)
    lwz r0, 0x30(r23)
    cmpw r4, r0
    blt lbl_8005951C
    add r4, r23, r6
    stb r5, 0x24(r4)
lbl_8005951C:
    addi r6, r6, 0x1
    addi r3, r3, 0x4
    bdnz lbl_80059500
    lwz r0, 0x0(r23)
    ori r0, r0, 0x1
    stw r0, 0x0(r23)
lbl_80059534:
    li r3, 0x0
    lis r4, lbl_803906D0@ha
    addi r9, r4, lbl_803906D0@l
    li r6, 0x0
    li r7, 0x1
    addi r5, r1, 0x8
    mr r4, r5
    li r0, 0x4
    mtctr r0
lbl_80059558:
    lwzx r8, r9, r3
    lwz r10, 0xc(r8)
    li r11, 0x0
    li r12, 0x0
    b lbl_80059598
lbl_8005956C:
    lwz r8, 0x0(r10)
    lwz r8, 0x0(r8)
    rlwinm r0, r8, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80059594
    addi r11, r11, 0x1
    rlwinm r0, r8, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80059594
    addi r12, r12, 0x1
lbl_80059594:
    lwz r10, 0xc(r10)
lbl_80059598:
    cmpwi r10, 0x0
    bne lbl_8005956C
    cmpw r12, r11
    bne lbl_800595B0
    stb r7, 0x0(r5)
    b lbl_800595B4
lbl_800595B0:
    stb r6, 0x0(r4)
lbl_800595B4:
    addi r3, r3, 0x4
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    bdnz lbl_80059558
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_800595DC
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x0(r23)
lbl_800595DC:
    lbz r0, 0x9(r1)
    cmpwi r0, 0x0
    beq lbl_800595F4
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x0(r23)
lbl_800595F4:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    beq lbl_8005960C
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 26, 24
    stw r0, 0x0(r23)
lbl_8005960C:
    lbz r0, 0xb(r1)
    cmpwi r0, 0x0
    beq lbl_80059624
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 25, 23
    stw r0, 0x0(r23)
lbl_80059624:
    cmpwi r24, 0xa
    bne lbl_800599D0
    lwz r4, 0x0(r23)
    lis r3, 0xc000
    addi r0, r3, 0x20b
    and r0, r4, r0
    cmpwi r0, 0x0
    bne lbl_800596C0
    li r3, 0x0
    lis r4, lbl_803906D0@ha
    addi r7, r4, lbl_803906D0@l
    lis r4, lbl_80395728@ha
    addi r6, r4, lbl_80395728@l
    addi r4, r1, 0x8
    li r0, 0x4
    mtctr r0
lbl_80059664:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_800596B4
    lwzx r5, r7, r3
    lwz r9, 0xc(r5)
    lwz r8, 0x1194(r6)
    b lbl_800596AC
lbl_80059680:
    lwz r5, 0x0(r9)
    lwz r0, 0x0(r5)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_800596A8
    lwz r0, 0x40(r23)
    cmplw r8, r0
    ble lbl_800596A8
    stw r0, 0x1194(r6)
    b lbl_800596B4
lbl_800596A8:
    lwz r9, 0xc(r9)
lbl_800596AC:
    cmpwi r9, 0x0
    bne lbl_80059680
lbl_800596B4:
    addi r3, r3, 0x4
    addi r4, r4, 0x1
    bdnz lbl_80059664
lbl_800596C0:
    li r19, 0x0
    li r25, 0x0
lbl_800596C8:
    add r3, r23, r25
    lwz r3, 0x14(r3)
    lwz r0, 0x30(r23)
    cmpw r3, r0
    blt lbl_80059704
    lwz r0, 0x0(r23)
    ori r0, r0, 0x100
    stw r0, 0x0(r23)
    mr r3, r19
    bl fn_8005EAA8
    cmpwi r3, 0x0
    bgt lbl_80059704
    lwz r0, 0x0(r23)
    ori r0, r0, 0x400
    stw r0, 0x0(r23)
lbl_80059704:
    addi r19, r19, 0x1
    addi r25, r25, 0x4
    cmpwi r19, 0x4
    blt lbl_800596C8
    li r6, 0x0
    li r7, 0x0
    li r3, 0x0
    lis r4, lbl_803906D0@ha
    addi r5, r4, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_80059730:
    add r4, r23, r7
    lbz r0, 0x24(r4)
    cmpwi r0, 0x0
    beq lbl_80059860
    lwzx r4, r5, r3
    lwz r8, 0xc(r4)
    b lbl_8005976C
lbl_8005974C:
    lwz r4, 0x0(r8)
    lwz r0, 0x0(r4)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80059768
    li r6, 0x1
    b lbl_80059774
lbl_80059768:
    lwz r8, 0xc(r8)
lbl_8005976C:
    cmpwi r8, 0x0
    bne lbl_8005974C
lbl_80059774:
    cmpwi r6, 0x0
    beq lbl_80059860
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r3, 0x118(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_800597EC
    li r3, 0x0
    li r4, 0x0
    la r5, lbl_8049ED50
    lwz r0, 0x40(r23)
    lfd f1, lbl_8049ED48
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    lfs f0, 0x10(r5)
    fdivs f0, f1, f0
    lfs f1, 0xc(r5)
    fmuls f0, f1, f0
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r5, 0x2c(r1)
    bl fn_80094AB4
    b lbl_8005983C
lbl_800597EC:
    li r3, 0x0
    li r4, 0x0
    la r5, lbl_8049ED50
    lwz r0, 0x40(r23)
    lfd f1, lbl_8049ED48
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lfd f0, 0x28(r1)
    fsubs f1, f0, f1
    lfs f0, 0x14(r5)
    fdivs f0, f1, f0
    lfs f1, 0xc(r5)
    fmuls f0, f1, f0
    fsubs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r5, 0x24(r1)
    bl fn_80094AB4
lbl_8005983C:
    lwz r0, 0x0(r23)
    rlwinm r0, r0, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_8005986C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x2710
    bl fn_80094AB4
    b lbl_8005986C
lbl_80059860:
    addi r7, r7, 0x1
    addi r3, r3, 0x4
    bdnz lbl_80059730
lbl_8005986C:
    bl fn_8005D018
    cmpwi r3, 0x0
    beq lbl_800599D0
    li r31, 0x0
    li r25, 0x0
    lwz r0, 0x34(r23)
    slwi r4, r0, 3
    lis r3, lbl_80390580@ha
    addi r0, r3, lbl_80390580@l
    add r29, r0, r4
    lis r3, lbl_803906D0@ha
    addi r20, r3, lbl_803906D0@l
    la r21, lbl_8049ED50
    lfs f30, 0x1c(r21)
    lfs f31, lbl_8049ED50
lbl_800598A8:
    lwzx r3, r20, r25
    lwz r22, 0xc(r3)
    add r19, r23, r31
    add r30, r29, r25
    lbz r0, 0x24(r19)
    stw r0, 0xcc(r30)
    lfs f27, lbl_8049ED50
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_800598F4
    bl fn_8005E0BC
    cmpwi r3, 0x1
    bgt lbl_800598F4
    lbz r0, 0x24(r19)
    cmpwi r0, 0x0
    beq lbl_800598F4
    lfs f27, 0x18(r21)
lbl_800598F4:
    lbz r0, 0x24(r19)
    cmpwi r0, 0x0
    beq lbl_80059960
    mr r3, r22
    mr r4, r23
    li r5, 0x0
    bl fn_80059AA8
    fmr f29, f1
    cntlzw r0, r31
    srwi r0, r0, 5
    slwi r0, r0, 2
    lwzx r3, r20, r0
    lwz r19, 0xc(r3)
    mr r3, r19
    mr r4, r23
    li r5, 0x1
    bl fn_80059AA8
    fmr f28, f1
    mr r3, r19
    mr r4, r23
    li r5, 0x4
    bl fn_80059AA8
    fmuls f0, f27, f29
    fmuls f0, f28, f0
    fmuls f0, f1, f0
    stfs f0, 0xb4(r30)
    b lbl_800599C0
lbl_80059960:
    mr r3, r22
    mr r4, r23
    li r5, 0x2
    bl fn_80059AA8
    fmr f28, f1
    cntlzw r0, r31
    srwi r0, r0, 5
    slwi r0, r0, 2
    lwzx r3, r20, r0
    lwz r19, 0xc(r3)
    mr r3, r19
    mr r4, r23
    li r5, 0x3
    bl fn_80059AA8
    fmr f29, f1
    mr r3, r19
    mr r4, r23
    li r5, 0x5
    bl fn_80059AA8
    fmuls f0, f28, f29
    fmuls f0, f1, f0
    fmuls f0, f0, f30
    fsubs f0, f31, f0
    stfs f0, 0xb4(r30)
lbl_800599C0:
    addi r31, r31, 0x1
    addi r25, r25, 0x4
    cmpwi r31, 0x2
    blt lbl_800598A8
lbl_800599D0:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0xf
    bne lbl_80059A3C
    lis r3, lbl_803BE030@ha
    addi r3, r3, lbl_803BE030@l
    lwz r0, 0x50(r3)
    andi. r0, r0, 0x110
    cmpwi r0, 0x0
    beq lbl_80059A18
    li r3, 0x3
    li r4, 0x0
    li r5, -0x100
    li r6, 0x1
    bl fn_8005791C
    li r24, 0x5
    b lbl_80059A3C
lbl_80059A18:
    lwz r0, 0x40(r23)
    cmpwi r0, 0x708
    blt lbl_80059A3C
    li r3, 0x3
    li r4, 0x10
    li r5, -0x100
    li r6, 0x1
    bl fn_8005791C
    li r24, 0x5
lbl_80059A3C:
    addi r3, r23, 0x74
    bl fn_8009D038
    cmpwi r3, 0x0
    blt lbl_80059A50
    mr r24, r3
lbl_80059A50:
    mr r3, r24
    li r0, 0xb8
    opword 0x13E1000C
    lfd f31, 0xb0(r1)
    li r0, 0xa8
    opword 0x13C1000C
    lfd f30, 0xa0(r1)
    li r0, 0x98
    opword 0x13A1000C
    lfd f29, 0x90(r1)
    li r0, 0x88
    opword 0x1381000C
    lfd f28, 0x80(r1)
    li r0, 0x78
    opword 0x1361000C
    lfd f27, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_19
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// asm_to_cpp: fn_80059AA8
asm f32 fn_80059AA8(s8 *arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    la r7, lbl_8049ED50
    lfs f1, 0x4(r7)
    li r6, 0x0
    lfd f5, lbl_8049ED48
    lfs f4, 0x20(r7)
    lfs f3, 0x30(r7)
    lfs f10, 0x24(r7)
    lfs f8, 0x28(r7)
    lfs f7, 0x34(r7)
    lfs f6, lbl_8049ED50
    lfs f0, 0x2c(r7)
    b lbl_80059C90
lbl_80059AEC:
    lwz r8, 0x0(r3)
    lwz r3, 0xc(r3)
    lwz r0, 0x0(r8)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_80059C90
    addi r6, r6, 0x1
    cmpwi r5, 0x0
    beq lbl_80059B3C
    cmpwi r5, 0x1
    beq lbl_80059B90
    cmpwi r5, 0x2
    beq lbl_80059BBC
    cmpwi r5, 0x3
    beq lbl_80059BE8
    cmpwi r5, 0x4
    beq lbl_80059C14
    cmpwi r5, 0x5
    beq lbl_80059C68
    b lbl_80059C90
lbl_80059B3C:
    lwz r7, 0x24(r8)
    lwz r0, 0x28(r8)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f9, f2, f5
    xoris r0, r7, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f5
    fmuls f2, f10, f2
    fsubs f9, f9, f2
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f5
    fmuls f2, f8, f2
    fdivs f2, f9, f2
    fmuls f2, f4, f2
    fadds f2, f6, f2
    fadds f1, f1, f2
    b lbl_80059C90
lbl_80059B90:
    lwz r7, 0x28(r8)
    lwz r0, 0x24(r8)
    divw r0, r7, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f5
    fmuls f2, f2, f0
    fsubs f2, f6, f2
    fadds f1, f1, f2
    b lbl_80059C90
lbl_80059BBC:
    lwz r7, 0x28(r8)
    lwz r0, 0x24(r8)
    divw r0, r7, r0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f5
    fmuls f2, f4, f2
    fsubs f2, f6, f2
    fadds f1, f1, f2
    b lbl_80059C90
lbl_80059BE8:
    lwz r7, 0x28(r8)
    lwz r0, 0x24(r8)
    divw r0, r7, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f5
    fdivs f2, f2, f7
    fadds f2, f3, f2
    fadds f1, f1, f2
    b lbl_80059C90
lbl_80059C14:
    lwz r7, 0x38(r4)
    lwz r0, 0x3c(r4)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f9, f2, f5
    xoris r0, r7, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f5
    fmuls f2, f10, f2
    fsubs f9, f9, f2
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f2, f2, f5
    fmuls f2, f8, f2
    fdivs f2, f9, f2
    fdivs f2, f2, f7
    fadds f2, f6, f2
    fadds f1, f1, f2
    b lbl_80059C90
lbl_80059C68:
    lwz r7, 0x3c(r4)
    lwz r0, 0x38(r4)
    divw r0, r7, r0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f5
    fmuls f2, f4, f2
    fadds f2, f3, f2
    fadds f1, f1, f2
lbl_80059C90:
    cmpwi r3, 0x0
    bne lbl_80059AEC
    lfd f2, lbl_8049ED48
    xoris r0, r6, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    addi r1, r1, 0x20
    blr
}

s32 fn_80059CB8(s32 arg0) {
    return (s32) (fn_800A0768((s8 *) ((s8 *) arg0)));
}

// asm_to_cpp: fn_80059CBC
asm s32 fn_80059CBC(s32 arg0) {
    nofralloc
    li r3, 0x0
    li r5, 0x2
    lis r4, lbl_803906D0@ha
    addi r6, r4, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_80059CD4:
    lwzx r4, r6, r3
    lwz r9, 0xc(r4)
    b lbl_80059D58
lbl_80059CE0:
    lwz r4, 0x0(r9)
    lwz r7, 0x0(r4)
    rlwinm r0, r7, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80059D54
    rlwinm r0, r7, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80059D28
    lwz r8, 0x18(r4)
    cmplwi r8, 0x10
    beq lbl_80059D28
    cmplwi r8, 0xd
    beq lbl_80059D28
    cmplwi r8, 0xc
    beq lbl_80059D28
    subi r0, r8, 0x2d
    cmplwi r0, 0x1
    bgt lbl_80059D54
lbl_80059D28:
    lwz r0, 0x38cc(r4)
    cmpwi r0, 0x1
    bne lbl_80059D54
    rlwinm r0, r7, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80059D4C
    lwz r0, 0x50(r4)
    clrlwi r0, r0, 1
    stw r0, 0x50(r4)
lbl_80059D4C:
    lwz r4, 0x0(r9)
    stw r5, 0x38cc(r4)
lbl_80059D54:
    lwz r9, 0xc(r9)
lbl_80059D58:
    cmpwi r9, 0x0
    bne lbl_80059CE0
    addi r3, r3, 0x4
    bdnz lbl_80059CD4
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_80059D70
asm void fn_80059D70(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r28, r3
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_80059F54
    li r3, 0x0
    bl fn_8005E8F0
    cmpwi r3, 0x0
    bne lbl_80059F54
    li r7, 0x0
    li r3, 0x0
    lis r4, lbl_803906D0@ha
    addi r5, r4, lbl_803906D0@l
    li r0, 0x4
    mtctr r0
lbl_80059DC4:
    lwzx r4, r5, r3
    lwz r6, 0xc(r4)
    b lbl_80059DF0
lbl_80059DD0:
    lwz r4, 0x0(r6)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80059DEC
    addi r7, r7, 0x1
    b lbl_80059DF8
lbl_80059DEC:
    lwz r6, 0xc(r6)
lbl_80059DF0:
    cmpwi r6, 0x0
    bne lbl_80059DD0
lbl_80059DF8:
    addi r3, r3, 0x4
    bdnz lbl_80059DC4
    cmpwi r7, 0x2
    blt lbl_80059F54
    lwz r3, 0x40(r28)
    addi r0, r3, 0x1
    stw r0, 0x40(r28)
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0xc14(r4)
    addi r0, r3, 0x1
    stw r0, 0xc14(r4)
    lwz r0, 0x38(r28)
    cmpwi r0, 0x1
    blt lbl_80059ED8
    lwz r0, 0x3c(r28)
    cmpwi r0, 0x2
    bgt lbl_80059ED8
    li r30, 0x0
    li r27, 0x0
    lis r26, 0x1
    lis r3, lbl_803906D0@ha
    addi r31, r3, lbl_803906D0@l
lbl_80059E54:
    lwzx r3, r31, r27
    lwz r29, 0xc(r3)
    b lbl_80059EC0
lbl_80059E60:
    lwz r3, 0x0(r29)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80059EBC
    lwz r0, 0x68(r3)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_80059EBC
    li r4, -0x2710
    li r5, 0x0
    bl fn_8006A7F8
    lwz r3, 0x0(r29)
    lwz r0, 0x54(r3)
    oris r0, r0, 0x400
    stw r0, 0x54(r3)
    subi r0, r26, 0x7f80
    lwz r3, 0x0(r29)
    stw r0, 0x60(r3)
    lwz r3, 0x0(r29)
    lwz r0, 0x64(r3)
    ori r0, r0, 0x8
    stw r0, 0x64(r3)
lbl_80059EBC:
    lwz r29, 0xc(r29)
lbl_80059EC0:
    cmpwi r29, 0x0
    bne lbl_80059E60
    addi r30, r30, 0x1
    addi r27, r27, 0x4
    cmpwi r30, 0x4
    blt lbl_80059E54
lbl_80059ED8:
    lwz r0, 0x38(r28)
    cmpwi r0, 0x0
    blt lbl_80059F54
    lwz r3, 0x3c(r28)
    cmpwi r3, 0x0
    ble lbl_80059F54
    subi r4, r3, 0x1
    stw r4, 0x3c(r28)
    cmpwi r4, 0x0
    bne lbl_80059F18
    lwz r0, 0x0(r28)
    ori r0, r0, 0x8
    stw r0, 0x0(r28)
    li r3, 0x718
    bl fn_80099F64
    b lbl_80059F40
lbl_80059F18:
    li r3, 0x3c
    divw r0, r4, r3
    cmpwi r0, 0xa
    bgt lbl_80059F40
    mullw r0, r0, r3
    subf r0, r0, r4
    cmpwi r0, 0x0
    bne lbl_80059F40
    li r3, 0x71d
    bl fn_80099F64
lbl_80059F40:
    lwz r0, 0x3c(r28)
    cmpwi r0, -0x1
    bge lbl_80059F54
    li r0, -0x1
    stw r0, 0x3c(r28)
lbl_80059F54:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

void fn_80059F6C(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFF7FFFFF));
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (0);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (0);
}

// asm_to_cpp: fn_80059F8C
asm s32 fn_80059F8C(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 7, 7
    cmpwi r0, 0x0
    beq lbl_80059FC0
    li r0, -0x1
    stw r0, 0x58(r3)
    rlwinm r0, r4, 0, 8, 6
    stw r0, 0x0(r3)
    li r3, 0x4
    b lbl_80059FE8
lbl_80059FC0:
    lwz r0, 0x78(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80059FE4
    addi r3, r3, 0x74
    bl fn_8009D038
    cmpwi r3, 0x0
    blt lbl_80059FE4
    b lbl_80059FE8
lbl_80059FE4:
    li r3, -0x1
lbl_80059FE8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_80059FF8(s8 *arg0) {
    s32 temp_r0;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x64));
    switch (temp_r0) {                              /* irregular */
    case 0:
        return (s32) (0);
    case 1:
        return (s32) ((M2C_FIELD(arg0, s32 *, 0x68) - 1) != 0);
    case 2:
        return (s32) ((M2C_FIELD(arg0, s32 *, 0x68) - 2) != 0);
    default:
        return (s32) (0);
    }
}

s32 fn_8005A050(s8 *arg0) {
    s32 temp_r0;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x68));
    switch (temp_r0) {                              /* irregular */
    case 0:
        return (s32) (0);
    case 1:
        return (s32) ((M2C_FIELD(arg0, s32 *, 0x64) - 1) == 0);
    case 2:
        return (s32) ((M2C_FIELD(arg0, s32 *, 0x64) - 2) == 0);
    default:
        return (s32) (0);
    }
}

// asm_to_cpp: fn_8005A0A8
asm s32 fn_8005A0A8(s8 *arg0) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    stfd f29, 0x40(r1)
    opword 0xF3A10048
    stfd f28, 0x30(r1)
    opword 0xF3810038
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r31, r3
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8005A238
    li r24, 0x0
    li r30, 0x0
    lis r3, lbl_80395728@ha
    addi r27, r3, lbl_80395728@l
    lfd f28, lbl_8049ED48
    lis r28, 0x4330
    la r29, lbl_8049ED50
    lfs f29, 0x38(r29)
    lfs f30, lbl_8049ED50
    lfs f31, 0x1c(r29)
lbl_8005A118:
    mr r3, r24
    bl fn_8005E2F4
    mr r25, r3
    cmpwi r3, 0x0
    beq lbl_8005A1A4
    add r26, r27, r30
    bl fn_8006AFA0
    stfs f1, 0xc2c(r26)
    mr r3, r25
    bl fn_8006AFE8
    stfs f1, 0xc3c(r26)
    lwz r0, 0x4(r27)
    cmplwi r0, 0x19
    beq lbl_8005A1B0
    lwz r3, 0x40(r31)
    li r4, -0x258
    li r5, 0x0
    li r6, 0xbb8
    bl fn_801728DC
    xoris r0, r3, 0x8000
    stw r0, 0xc(r1)
    stw r28, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f28
    fdivs f3, f0, f29
    lfs f1, 0x1c(r29)
    lfs f2, 0x20(r29)
    bl fn_80172A18
    fmr f2, f1
    lfs f1, 0xc2c(r26)
    lfs f3, 0x4(r29)
    lfs f4, lbl_8049ED50
    bl fn_801728FC
    stfs f1, 0xc2c(r26)
    b lbl_8005A1B0
lbl_8005A1A4:
    add r3, r27, r30
    stfs f30, 0xc2c(r3)
    stfs f31, 0xc3c(r3)
lbl_8005A1B0:
    addi r24, r24, 0x1
    addi r30, r30, 0x4
    cmpwi r24, 0x4
    blt lbl_8005A118
    mr r3, r31
    bl fn_8005AD04
    li r7, 0x1
    li r6, 0x0
    li r4, 0x0
    li r0, 0x4
    mtctr r0
lbl_8005A1DC:
    cmpw r6, r3
    beq lbl_8005A1F8
    add r5, r31, r4
    lwz r0, 0x14(r5)
    cmpwi r0, 0x0
    ble lbl_8005A1F8
    li r7, 0x0
lbl_8005A1F8:
    addi r6, r6, 0x1
    addi r4, r4, 0x4
    bdnz lbl_8005A1DC
    cmpwi r7, 0x0
    beq lbl_8005A230
    slwi r0, r3, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r3, 0xc(r3)
    lwz r3, 0x0(r3)
    li r4, 0x0
    li r5, 0x1388
    bl fn_80094AB4
lbl_8005A230:
    li r3, 0x1
    b lbl_8005A23C
lbl_8005A238:
    li r3, 0x0
lbl_8005A23C:
    li r0, 0x68
    opword 0x13E1000C
    lfd f31, 0x60(r1)
    li r0, 0x58
    opword 0x13C1000C
    lfd f30, 0x50(r1)
    li r0, 0x48
    opword 0x13A1000C
    lfd f29, 0x40(r1)
    li r0, 0x38
    opword 0x1381000C
    lfd f28, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_8005A284
asm void fn_8005A284(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r31, r3
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x0(r3)
    lwz r0, 0x4(r4)
    cmplwi r0, 0x3
    beq lbl_8005A2D8
    lwz r0, 0xc9c(r4)
    cmpwi r0, 0x0
    blt lbl_8005A2F0
    lwz r4, 0x34(r3)
    addi r0, r4, 0x1
    stw r0, 0x34(r3)
    b lbl_8005A2F0
lbl_8005A2D8:
    lwz r0, 0xca4(r4)
    cmpwi r0, 0x0
    blt lbl_8005A2F0
    lwz r4, 0x34(r3)
    addi r0, r4, 0x1
    stw r0, 0x34(r3)
lbl_8005A2F0:
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E680
    mr r30, r3
    cmpwi r3, 0x0
    beq lbl_8005A38C
    lwz r4, 0x3858(r3)
    cmpwi r4, 0x0
    beq lbl_8005A38C
    lfs f1, 0x161c(r4)
    lfs f0, lbl_8049ED50
    fcmpo cr0, f1, f0
    bge lbl_8005A38C
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8005A348
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r3, 0x1198(r4)
    addi r0, r3, 0x1
    stw r0, 0x1198(r4)
lbl_8005A348:
    mr r3, r30
    li r4, 0x0
    li r5, 0x1388
    bl fn_80094AB4
    mr r3, r30
    li r4, 0x0
    la r6, lbl_8049ED50
    lwz r5, 0x3858(r30)
    lfs f1, lbl_8049ED50
    lfs f0, 0x161c(r5)
    fsubs f1, f1, f0
    lfs f0, 0xc(r6)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r5, 0xc(r1)
    bl fn_80094AB4
lbl_8005A38C:
    li r0, 0x1
    stw r0, 0x10(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8005A3AC
asm void fn_8005A3AC(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl fn_8005AD04
    cmpwi r3, 0x0
    blt lbl_8005A41C
    slwi r30, r3, 2
    lis r4, lbl_803906D0@ha
    addi r31, r4, lbl_803906D0@l
    lwzx r4, r31, r30
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    beq lbl_8005A41C
    bl fn_8005E16C
    cmpwi r3, 0x1
    bgt lbl_8005A41C
    lwzx r3, r31, r30
    lwz r3, 0xc(r3)
    lwz r3, 0x0(r3)
    lwz r0, 0x18(r3)
    slwi r0, r0, 2
    lis r3, lbl_8034A460@ha
    addi r3, r3, lbl_8034A460@l
    lwzx r3, r3, r0
    li r4, 0xff
    bl fn_8009A09C
lbl_8005A41C:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8005A434
asm void fn_8005A434() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r28, r3
    li r30, 0xa
    li r0, 0x0
    stw r0, 0x8(r3)
    bl fn_8005AD04
    mr r26, r3
    slwi r0, r3, 2
    lis r4, lbl_803906D0@ha
    addi r27, r4, lbl_803906D0@l
    lwzx r4, r27, r0
    lwz r4, 0xc(r4)
    lwz r29, 0x0(r4)
    lwz r0, 0x0(r29)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8005A938
    lis r30, lbl_80395728@ha
    addi r31, r30, lbl_80395728@l
    lwz r3, 0xc18(r31)
    li r4, 0x1
    li r5, 0x0
    li r6, 0x3e7
    bl fn_801728DC
    stw r3, 0xc18(r31)
    lwz r3, 0x4(r31)
    bl fn_80094228
    lwz r3, 0x4(r31)
    cmplwi r3, 0x2e
    bgt lbl_8005A920
    lis r4, jumptable_8034A7F8@ha
    addi r4, r4, jumptable_8034A7F8@l
    slwi r0, r3, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r3, 0x3
    li r4, 0x1
    li r5, -0x100
    li r6, 0x1
    bl fn_8005791C
    b lbl_8005ACEC
    li r3, 0x3
    li r4, 0x1
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    li r3, 0x3
    li r4, 0x2
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    li r3, 0x3
    li r4, 0x3
    li r5, -0x100
    li r6, 0x1
    bl fn_8005791C
    b lbl_8005ACEC
    li r3, 0x3
    li r4, 0x4
    li r5, -0x100
    li r6, 0x1
    bl fn_8005791C
    b lbl_8005ACEC
    li r3, 0x3
    li r4, 0x3
    li r5, -0x100
    li r6, 0x1
    bl fn_8005791C
    b lbl_8005ACEC
    lwz r0, 0xc18(r31)
    cmpwi r0, 0xa
    blt lbl_8005A58C
    bl fn_800951AC
    li r3, 0x3
    li r4, 0x9
    li r5, 0x0
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
lbl_8005A58C:
    mr r3, r28
    li r4, 0x1
    li r5, 0x1
    bl fn_8005BC40
    li r3, 0x2
    li r4, 0x1
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    mr r3, r28
    li r4, 0x1
    li r5, 0x1
    bl fn_8005BC40
    li r3, 0x2
    li r4, 0x1
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    lwz r0, 0xc18(r31)
    cmpwi r0, 0xa
    blt lbl_8005A604
    bl fn_800951AC
    li r3, 0x3
    li r4, 0x9
    li r5, 0x0
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
lbl_8005A604:
    mr r3, r28
    li r4, 0x2
    li r5, 0x2
    bl fn_8005BC40
    li r3, 0x2
    li r4, 0x1
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    mr r3, r28
    li r4, 0x2
    li r5, 0x2
    bl fn_8005BC40
    li r3, 0x2
    li r4, 0x1
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    li r3, 0x5
    lwz r4, 0x8(r31)
    li r5, 0x3
    li r6, -0x100
    li r7, 0x0
    bl fn_8005793C
    b lbl_8005ACEC
    li r3, 0x7
    lwz r4, 0x8(r31)
    lwz r5, 0xc(r31)
    addi r5, r5, 0x1
    li r6, -0x100
    li r7, 0x0
    bl fn_8005793C
    b lbl_8005ACEC
    lwz r0, 0x0(r28)
    oris r0, r0, 0x2000
    stw r0, 0x0(r28)
    li r3, 0x3
    li r4, 0x9
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    li r3, 0x3
    li r4, 0x0
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    lwz r0, 0xc18(r31)
    cmpwi r0, 0xa
    blt lbl_8005A738
    lwz r3, 0x11f8(r31)
    lwz r0, 0x28(r29)
    add r0, r3, r0
    stw r0, 0x11f8(r31)
    lwz r3, 0x1200(r31)
    lwz r0, 0x24(r29)
    add r0, r3, r0
    stw r0, 0x1200(r31)
    lwz r3, 0x11fc(r31)
    lwz r0, 0x3c(r28)
    add r0, r3, r0
    stw r0, 0x11fc(r31)
    lwz r3, 0x1204(r31)
    lwz r0, 0x38(r28)
    add r0, r3, r0
    stw r0, 0x1204(r31)
    lwz r0, 0x18(r29)
    stw r0, 0x11f0(r31)
    li r3, 0x3
    li r4, 0x9
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
lbl_8005A738:
    lwz r3, 0x11f8(r31)
    lwz r0, 0x28(r29)
    add r0, r3, r0
    stw r0, 0x11f8(r31)
    lwz r3, 0x1200(r31)
    lwz r0, 0x24(r29)
    add r0, r3, r0
    stw r0, 0x1200(r31)
    lwz r3, 0x11fc(r31)
    lwz r0, 0x3c(r28)
    add r0, r3, r0
    stw r0, 0x11fc(r31)
    lwz r3, 0x1204(r31)
    lwz r0, 0x38(r28)
    add r0, r3, r0
    stw r0, 0x1204(r31)
    mr r3, r28
    li r4, 0x1
    li r5, 0x1
    bl fn_8005BC40
    li r3, 0x2
    li r4, 0x1
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    lwz r0, 0x0(r28)
    oris r0, r0, 0x2000
    stw r0, 0x0(r28)
    lwz r0, 0x28(r29)
    stw r0, 0x11f8(r31)
    lwz r0, 0x24(r29)
    stw r0, 0x1200(r31)
    lwz r0, 0x3c(r28)
    stw r0, 0x11fc(r31)
    lwz r0, 0x38(r28)
    stw r0, 0x1204(r31)
    lwz r0, 0x18(r29)
    stw r0, 0x11f0(r31)
    li r3, 0x3
    li r4, 0x9
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    lwz r0, 0x0(r28)
    oris r0, r0, 0x2000
    stw r0, 0x0(r28)
    lwz r0, 0x10(r29)
    slwi r0, r0, 2
    lwzx r3, r27, r0
    lwz r4, 0xc(r3)
    b lbl_8005A864
lbl_8005A80C:
    lwz r3, 0x0(r4)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8005A860
    cmplw r29, r3
    beq lbl_8005A860
    lwz r0, 0x18(r3)
    stw r0, 0x11f4(r31)
    lwz r3, 0x0(r4)
    mr r5, r3
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_8005A860
    lwz r0, lbl_80395728@l(r30)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8005A860
    mr r5, r29
    mr r29, r3
lbl_8005A860:
    lwz r4, 0xc(r4)
lbl_8005A864:
    cmpwi r4, 0x0
    bne lbl_8005A80C
    lwz r3, 0x28(r29)
    lwz r0, 0x28(r5)
    add r0, r3, r0
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    stw r0, 0x11f8(r4)
    lwz r3, 0x24(r29)
    lwz r0, 0x24(r5)
    add r0, r3, r0
    stw r0, 0x1200(r4)
    lwz r0, 0x3c(r28)
    stw r0, 0x11fc(r4)
    lwz r0, 0x38(r28)
    stw r0, 0x1204(r4)
    lwz r0, 0x18(r29)
    stw r0, 0x11f0(r4)
    lwz r0, 0x18(r5)
    stw r0, 0x11f4(r4)
    li r3, 0x3
    li r4, 0x9
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    lwz r3, 0x0(r28)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8005A8E8
    clrlwi r0, r3, 31
    cmpwi r0, 0x0
    beq lbl_8005A8FC
lbl_8005A8E8:
    li r0, -0x1
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    stw r0, 0x84(r3)
    b lbl_8005A908
lbl_8005A8FC:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    stw r26, 0x84(r3)
lbl_8005A908:
    li r3, 0x3
    li r4, 0x1d
    li r5, 0x0
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
lbl_8005A920:
    li r3, 0x3
    li r4, 0x0
    li r5, -0x100
    li r6, 0x1
    bl fn_8005791C
    b lbl_8005ACEC
lbl_8005A938:
    lis r4, lbl_80395728@ha
    addi r31, r4, lbl_80395728@l
    lwz r5, 0x4(r31)
    cmplwi r5, 0x2e
    bgt lbl_8005ACD8
    lis r4, jumptable_8034A73C@ha
    addi r4, r4, jumptable_8034A73C@l
    slwi r0, r5, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r3, 0x3
    li r4, 0x1
    li r5, -0x1
    li r6, 0x1
    bl fn_8005791C
    b lbl_8005ACEC
    li r3, 0x3
    li r4, 0x1
    li r5, -0x100
    li r6, 0x1
    bl fn_8005791C
    b lbl_8005ACEC
    li r3, 0x3
    li r4, 0x2
    li r5, -0x100
    li r6, 0x1
    bl fn_8005791C
    b lbl_8005ACEC
    li r3, 0x3
    li r4, 0x3
    li r5, -0x100
    li r6, 0x1
    bl fn_8005791C
    b lbl_8005ACEC
    li r3, 0x3
    li r4, 0x4
    li r5, -0x100
    li r6, 0x1
    bl fn_8005791C
    b lbl_8005ACEC
    li r3, 0x3
    li r4, 0x3
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    lwz r0, 0x0(r28)
    oris r0, r0, 0x2000
    stw r0, 0x0(r28)
    li r3, 0x3
    li r4, 0x9
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    li r0, 0x1
    stw r0, 0x8(r28)
    b lbl_8005ACEC
    li r3, 0x3
    li r4, 0x0
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    li r0, 0x1
    stw r0, 0x8(r28)
    b lbl_8005ACEC
    mr r3, r5
    bl fn_800951AC
    li r3, 0x3
    li r4, 0x9
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    mr r3, r5
    bl fn_800951AC
    li r3, 0x3
    li r4, 0x9
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    lwz r0, 0x10(r28)
    cmpwi r0, 0xf
    beq lbl_8005AA98
    cmpwi r0, 0xd
    beq lbl_8005AAB4
    b lbl_8005ACEC
lbl_8005AA98:
    li r3, 0x5
    lwz r4, 0x8(r31)
    li r5, 0x2
    li r6, -0x100
    li r7, 0x0
    bl fn_8005793C
    b lbl_8005ACEC
lbl_8005AAB4:
    li r3, 0x3
    li r4, 0x0
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    li r0, 0x2
    stw r0, 0x10(r31)
    li r0, 0x1
    stw r0, 0x8(r28)
    b lbl_8005ACEC
    li r3, 0x3
    li r4, 0x0
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    lwz r3, 0x10(r31)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_8005AB08
    li r0, 0x2
    stw r0, 0x10(r31)
lbl_8005AB08:
    li r0, 0x1
    stw r0, 0x8(r28)
    b lbl_8005ACEC
    lwz r0, 0x0(r28)
    oris r0, r0, 0x2000
    stw r0, 0x0(r28)
    li r3, 0x3
    li r4, 0x9
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    lwz r3, 0x4(r31)
    bl fn_80094228
    b lbl_8005ACEC
    li r3, 0x3
    li r4, 0x0
    li r5, -0x100
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
    li r30, 0x9
    subi r30, r30, 0x1
    subi r30, r30, 0x1
    subi r30, r30, 0x1
    subi r30, r30, 0x1
    subi r30, r30, 0x1
    subi r30, r30, 0x1
    subi r30, r30, 0x1
    subi r30, r30, 0x1
    li r0, 0x0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    stw r0, 0x11f8(r3)
    stw r0, 0x1200(r3)
    stw r0, 0x11fc(r3)
    stw r0, 0x1204(r3)
    stw r0, 0x11f0(r3)
    stw r0, 0x11f4(r3)
    subi r0, r30, 0x1
    cmplwi r0, 0x9
    bgt lbl_8005AC38
    lis r3, lbl_803906D0@ha
    lwz r3, lbl_803906D0@l(r3)
    lwz r3, 0xc(r3)
    lwz r29, 0x0(r3)
    cmpwi r0, 0x1
    beq lbl_8005ABCC
    cmpwi r0, 0x8
    bne lbl_8005AC38
lbl_8005ABCC:
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_8005AC38
    lwz r0, 0x10(r29)
    slwi r0, r0, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r5, 0xc(r3)
    lis r3, lbl_80395728@ha
    lwz r0, lbl_80395728@l(r3)
    clrlwi r3, r0, 31
    b lbl_8005AC30
lbl_8005AC04:
    lwz r4, 0x0(r5)
    lwz r0, 0x0(r4)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8005AC2C
    cmplw r29, r4
    beq lbl_8005AC2C
    cmpwi r3, 0x0
    beq lbl_8005AC2C
    mr r29, r4
lbl_8005AC2C:
    lwz r5, 0xc(r5)
lbl_8005AC30:
    cmpwi r5, 0x0
    bne lbl_8005AC04
lbl_8005AC38:
    subi r0, r30, 0x1
    slwi r4, r0, 2
    lwz r0, 0x18(r29)
    slwi r5, r0, 6
    lis r3, lbl_80395728@ha
    addi r0, r3, lbl_80395728@l
    add r3, r0, r5
    addi r3, r3, 0x11c8
    lwzx r0, r3, r4
    cmpwi r0, -0x1
    bne lbl_8005AC6C
    li r0, 0x6
    stwx r0, r3, r4
lbl_8005AC6C:
    li r3, 0x3
    li r4, 0x11
    li r5, -0x100
    li r6, 0x1
    bl fn_8005791C
    b lbl_8005ACEC
    lwz r4, 0x0(r28)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8005ACA0
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_8005ACB4
lbl_8005ACA0:
    li r0, -0x1
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    stw r0, 0x84(r3)
    b lbl_8005ACC0
lbl_8005ACB4:
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    stw r3, 0x84(r4)
lbl_8005ACC0:
    li r3, 0x3
    li r4, 0x1d
    li r5, 0x0
    li r6, 0x0
    bl fn_8005791C
    b lbl_8005ACEC
lbl_8005ACD8:
    li r3, 0x3
    li r4, 0x0
    li r5, -0x100
    li r6, 0x1
    bl fn_8005791C
lbl_8005ACEC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8005AD04
asm s32 fn_8005AD04(s8 *arg0) {
    nofralloc
    li r6, 0x0
    li r7, -0x1
    li r8, 0x0
    li r4, 0x0
    li r0, 0x4
    mtctr r0
lbl_8005AD1C:
    add r5, r3, r4
    lwz r0, 0x14(r5)
    cmpw r6, r0
    bge lbl_8005AD34
    mr r6, r0
    mr r7, r8
lbl_8005AD34:
    addi r8, r8, 0x1
    addi r4, r4, 0x4
    bdnz lbl_8005AD1C
    mr r3, r7
    blr
}

} // extern "C"
