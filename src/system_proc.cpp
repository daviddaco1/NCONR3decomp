#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 jumptable_8034AD48[];
extern u8 jumptable_8034ADE8[];
extern u8 jumptable_8034AE1C[];
extern u8 jumptable_8034AE50[];
extern u8 jumptable_8034AE80[];
extern u8 lbl_803396E8[];
extern u8 lbl_803396F0[];
extern u8 lbl_80390580[];
extern u8 lbl_803906D0[];
extern u8 lbl_80395728[];
extern float lbl_8049EED0;
extern float lbl_8049EED8;
extern float lbl_8049EF10;
extern float lbl_8049EF18;

s32 _restgpr_14();
s32 _restgpr_23();
s32 _restgpr_26();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_14();
s32 _savegpr_23();
s32 _savegpr_26();
s32 _savegpr_28();
s32 _savegpr_29();
void fn_80018B00(s32 arg0, s32 arg1, s32 arg2);
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
f32 fn_80018BD4(f32 farg0);
M2C_UNK fn_80019DAC(s8 *arg0, f32 *arg1);
void fn_8001B8B0(s32 arg0, s32 arg1);
void fn_8001B8B8(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_8001B8BC(s32 arg0);
f32 fn_8001DA9C(f32 farg0);
s32 fn_8005CF00(s32 arg0, s32 arg1);
s32 * fn_8005E4A4(s8 *arg0);
s32 fn_8005E4D4(s8 *arg0, s32 arg1);
s32 fn_8005E7D4(s32 arg0, s32 arg1);
s32 * fn_8005ECCC(s32 arg0);
void fn_80061FA0(M2C_UNK *arg0);
f32 fn_800674B8(s32 arg0, s32 arg1);
M2C_UNK fn_800687C0(s8 *arg0, f32 farg0);
M2C_UNK fn_80069248(s8 *arg0, s32 *arg1);
M2C_UNK fn_800694F0(u16 arg0);
M2C_UNK fn_80069524(u16 arg0, s32 arg1);
s32 fn_80069590();
void fn_80069840(s32 *arg0);
void fn_8006A020(s32 *arg0, s32 arg1);
void fn_8006A3D8(s32 *arg0, f32 farg0);
void fn_8006A7F8(s8 *arg0, s32 arg1);
M2C_UNK fn_8006A858(s32 *arg0, s32 arg1);
void fn_8006AA78(s32 *arg0, f32 farg0);
void fn_8006AC64(s32 *arg0, s32 arg1, s32 arg2);
s32 fn_8006AE10(s8 *arg0, s32 arg1);
s32 fn_8006AEA0(s32 *arg0, f64 farg0, s32 arg2);
f32 fn_8006AFA0(s32 *arg0);
f32 fn_8006AFE8(s8 *arg0);
f32 fn_8006B030(s8 *arg0);
s32 fn_8006B078(s32 *arg0);
void fn_8006B0B8(s8 *arg0, s8 *arg1);
void fn_8006B1D0(s8 *arg0);
void fn_8006B2E4(s8 *arg0);
void fn_8006B380(s8 *arg0);
void fn_8006B40C(s8 *arg0);
void fn_8006B498(s8 *arg0);
void fn_8006B564(s32 *arg0, s8 *arg1);
s32 fn_8006B79C();
void fn_8006E26C(s32 *arg0);
void fn_8006EA1C(s32 *arg0, s32 arg1, s32 arg2);
void fn_8006EAFC(s8 *arg0);
s16 fn_8006EB7C(s32 arg0);
s16 fn_8006EBB4(s8 *arg0);
void fn_8006EBF0(s8 *arg0, s32 *arg1, s32 *arg2);
void fn_8006ECB8(s8 *arg0, s32 arg1);
s32 fn_8006ED64(s8 *arg0);
s32 fn_8006EDD4(s8 *arg0, s8 *arg1);
void fn_8006F07C(s8 *arg0, s8 *arg1);
s32 fn_8006F0E8(s32 **arg0, s8 *arg1);
void fn_8006F56C(s8 *arg0);
void fn_8006FC74(s8 *arg0);
void fn_8007600C(s8 *arg0);
s32 fn_800763B4(s32 arg0, s8 *arg1, s32 arg2, s8 *arg3);
s32 fn_80076C14(s32 arg0, s8 *arg1, s8 *arg2);
void fn_80078104(s8 *arg0, s8 *arg1);
s32 fn_80078314();
void fn_80078DE0(s32 *arg0);
s32 fn_80078E18();
void fn_800879C0(s8 *arg0, s8 *arg1);
void fn_80088248(s8 *arg0, s8 *arg1);
s32 fn_8008CFD8(u32 arg0);
s32 fn_8008D030(s32 arg0);
void fn_80094AB4(s32 *arg0, s32 *arg1, s32 arg2);
s32 fn_8009692C(s8 *arg0, s32 arg1, s32 arg2);
s32 * fn_80099FD8(s32 arg0, s32 arg1, s32 arg2);
void fn_800A6D10(s8 *arg0, s32 arg1);
s32 fn_800A6EA8(s8 *arg0);
s32 fn_8011FE90();
f32 fn_80172688(f32 farg0);
s32 fn_801728DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
f32 fn_801728FC(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 fn_801729B4(s32 arg0, s32 arg1, f32 farg0);
void fn_80175E48(s32 arg0, s32 arg1, s32 arg2);
void fn_8017BF58(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
s32 labs(s32 arg0);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_80069590
asm s32 fn_80069590() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lis r5, lbl_80395728@ha
    addi r5, r5, lbl_80395728@l
    lwz r5, 0x4(r5)
    subi r0, r5, 0x5
    cmplwi r0, 0x26
    bgt lbl_800695E4
    lis r5, jumptable_8034AD48@ha
    addi r5, r5, jumptable_8034AD48@l
    slwi r0, r0, 2
    lwzx r5, r5, r0
    mtctr r5
    bctr
lbl_800695E4:
    lwz r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x30(r3)
    li r0, 0x0
    stw r0, 0x2c(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x48(r3)
    stw r0, 0x4c(r3)
    cmpwi r4, 0x0
    bne lbl_8006982C
    lwz r0, 0x40(r3)
    srawi r0, r0, 1
    addze r0, r0
    stw r0, 0x44(r3)
    b lbl_8006982C
    li r0, 0x0
    stw r0, 0x2c(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r4, 0x48(r3)
    stw r4, 0x4c(r3)
    lwz r5, 0x0(r3)
    clrlwi r0, r5, 31
    cmpwi r0, 0x0
    beq lbl_800696E8
    rlwinm r0, r5, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80069664
    bl fn_8005E4A4
    lwz r3, 0x8(r3)
    b lbl_80069668
lbl_80069664:
    lwz r3, 0x8(r3)
lbl_80069668:
    cmplwi r3, 0x3
    ble lbl_80069678
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_80069678:
    slwi r4, r3, 2
    lwz r0, 0x24(r31)
    lfd f2, lbl_8049EED0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lis r3, lbl_80395728@ha
    addi r0, r3, lbl_80395728@l
    add r3, r0, r4
    lfs f0, 0xc2c(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x28(r31)
    lwz r0, 0x40(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f2
    lfs f0, 0xc3c(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x44(r31)
    b lbl_8006982C
lbl_800696E8:
    lwz r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r4, 0x4c(r3)
    lwz r0, 0x40(r3)
    srawi r0, r0, 1
    addze r0, r0
    stw r0, 0x44(r3)
    b lbl_8006982C
    lwz r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x30(r3)
    li r0, 0x0
    stw r0, 0x2c(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x48(r3)
    stw r0, 0x4c(r3)
    cmpwi r4, 0x0
    bne lbl_8006982C
    lwz r0, 0x40(r3)
    srawi r0, r0, 1
    addze r0, r0
    stw r0, 0x44(r3)
    b lbl_8006982C
    li r0, 0x0
    stw r0, 0x2c(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r4, 0x48(r3)
    stw r4, 0x4c(r3)
    lwz r5, 0x0(r3)
    clrlwi r0, r5, 31
    cmpwi r0, 0x0
    beq lbl_80069810
    rlwinm r0, r5, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80069788
    bl fn_8005E4A4
    lwz r3, 0x8(r3)
    b lbl_8006978C
lbl_80069788:
    lwz r3, 0x8(r3)
lbl_8006978C:
    cmplwi r3, 0x3
    ble lbl_8006979C
    li r0, 0x0
    stw r0, 0x1(r0)
lbl_8006979C:
    slwi r4, r3, 2
    lwz r0, 0x24(r31)
    lfd f2, lbl_8049EED0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lis r3, lbl_80395728@ha
    addi r0, r3, lbl_80395728@l
    add r4, r0, r4
    lfs f0, 0xc2c(r4)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x28(r31)
    lwz r0, 0x40(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f2
    lfs f0, 0xc3c(r4)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x44(r31)
    b lbl_8006982C
lbl_80069810:
    lwz r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r4, 0x4c(r3)
    lwz r0, 0x40(r3)
    srawi r0, r0, 1
    addze r0, r0
    stw r0, 0x44(r3)
lbl_8006982C:
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80069840
asm void fn_80069840(s32 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r28, r3
    li r31, 0x1
    li r30, 0x0
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r5, 0xc(r4)
    lwz r0, 0x10(r5)
    cmpwi r0, 0x1
    bge lbl_8006987C
    li r31, 0x0
lbl_8006987C:
    cmpwi r0, 0x9
    blt lbl_80069888
    li r31, 0x0
lbl_80069888:
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8006989C
    li r31, 0x0
lbl_8006989C:
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_800698AC
    li r31, 0x0
lbl_800698AC:
    lwz r0, 0x1640(r3)
    cmpwi r0, 0x0
    bne lbl_800698C4
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    beq lbl_800698C8
lbl_800698C4:
    li r31, 0x0
lbl_800698C8:
    lwz r4, 0x50(r3)
    rlwinm r0, r4, 0, 16, 16
    rlwimi r0, r4, 0, 0, 1
    cmpwi r0, 0x0
    beq lbl_800698E0
    li r31, 0x0
lbl_800698E0:
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_800698F4
    li r31, 0x0
lbl_800698F4:
    lwz r0, 0x70(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80069908
    li r31, 0x0
lbl_80069908:
    cmpwi r31, 0x0
    beq lbl_80069930
    lwz r0, 0x6c(r5)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80069930
    li r29, 0x1
    mr r3, r28
    lfs f1, lbl_8049EED8
    bl fn_8006A3D8
lbl_80069930:
    lwz r4, 0x0(r28)
    rlwinm r0, r4, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80069960
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x118(r3)
    cmpwi r0, 0x1
    beq lbl_80069978
    cmpwi r0, 0x2
    beq lbl_80069978
lbl_80069960:
    lwz r5, 0x18(r28)
    cmplwi r5, 0x21
    bne lbl_80069A48
    clrrwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_80069A48
lbl_80069978:
    li r30, 0x1
    rlwinm r0, r4, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006998C
    li r30, 0x0
lbl_8006998C:
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_800699A4
    li r30, 0x0
lbl_800699A4:
    lwz r4, 0x0(r28)
    rlwinm r0, r4, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_800699B8
    li r30, 0x0
lbl_800699B8:
    lwz r5, 0x18(r28)
    cmplwi r5, 0x21
    bne lbl_800699EC
    clrrwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_800699EC
    lwz r3, 0x50(r28)
    rlwinm r0, r3, 0, 16, 16
    rlwimi r0, r3, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_80069A00
    li r30, 0x0
    b lbl_80069A00
lbl_800699EC:
    lwz r0, 0x58(r28)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_80069A00
    li r30, 0x0
lbl_80069A00:
    lwz r0, 0x10(r28)
    slwi r0, r0, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r6, 0xc(r3)
    b lbl_80069A38
lbl_80069A1C:
    lwz r3, 0x0(r6)
    lwz r0, 0x38c8(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80069A34
    li r30, 0x0
lbl_80069A34:
    lwz r6, 0xc(r6)
lbl_80069A38:
    cmpwi r6, 0x0
    beq lbl_80069A48
    cmpwi r29, 0x0
    bne lbl_80069A1C
lbl_80069A48:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x118(r3)
    cmpwi r0, 0x1
    beq lbl_80069A7C
    cmpwi r0, 0x2
    beq lbl_80069A7C
    cmplwi r5, 0x21
    bne lbl_80069BC0
    clrrwi r0, r4, 31
    cmpwi r0, 0x0
    beq lbl_80069BC0
lbl_80069A7C:
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80069A94
    li r0, 0x0
    stw r0, 0x30(r28)
    b lbl_80069B84
lbl_80069A94:
    li r29, 0x1
    cmplwi r5, 0x4
    bne lbl_80069AD4
    lwz r0, 0x164c(r28)
    cmpwi r0, 0x2
    bne lbl_80069AD4
    cmpwi r30, 0x0
    beq lbl_80069AD4
    lwz r3, 0x28(r28)
    li r4, -0x6
    li r5, 0x1
    mr r6, r3
    bl fn_801728DC
    stw r3, 0x28(r28)
    stw r3, 0x30(r28)
    li r29, 0x0
lbl_80069AD4:
    cmpwi r29, 0x0
    beq lbl_80069B84
    lwz r3, 0x30(r28)
    lwz r4, 0x34(r28)
    li r5, 0x0
    lwz r6, 0x24(r28)
    bl fn_801728DC
    stw r3, 0x30(r28)
    lwz r0, 0x28(r28)
    cmpw r0, r3
    ble lbl_80069B04
    stw r0, 0x30(r28)
lbl_80069B04:
    cmpwi r30, 0x0
    beq lbl_80069B4C
    lwz r0, 0x18(r28)
    cmplwi r0, 0x21
    bne lbl_80069B4C
    lwz r0, 0x0(r28)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80069B4C
    lwz r6, 0x30(r28)
    lwz r3, 0x28(r28)
    cmpw r3, r6
    bge lbl_80069B4C
    li r4, 0x7
    li r5, 0x0
    bl fn_801728DC
    stw r3, 0x28(r28)
    b lbl_80069B84
lbl_80069B4C:
    cmpwi r30, 0x0
    beq lbl_80069B84
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80069B84
    lwz r6, 0x30(r28)
    lwz r3, 0x28(r28)
    cmpw r3, r6
    bge lbl_80069B84
    li r4, 0x3
    li r5, 0x0
    bl fn_801728DC
    stw r3, 0x28(r28)
lbl_80069B84:
    li r0, 0x0
    stw r0, 0x34(r28)
    lwz r0, 0xa14(r28)
    cmpwi r0, -0x1
    bne lbl_80069BC0
    lwz r4, 0x30(r28)
    lwz r3, 0x28(r28)
    cmpw r3, r4
    bge lbl_80069BC0
    la r5, lbl_8049EED8
    lfs f1, 0x4(r5)
    bl fn_801729B4
    stw r3, 0x30(r28)
    li r0, -0x2
    stw r0, 0xa14(r28)
lbl_80069BC0:
    lwz r3, 0x28(r28)
    lwz r4, 0x2c(r28)
    li r5, 0x0
    lwz r6, 0x24(r28)
    bl fn_801728DC
    stw r3, 0x28(r28)
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_80069C50
    mr r3, r28
    bl fn_8006AFA0
    la r3, lbl_8049EED8
    lfs f2, 0x8(r3)
    fcmpo cr0, f1, f2
    ble lbl_80069C50
    lwz r0, 0x24(r28)
    lfd f1, lbl_8049EED0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmuls f0, f2, f0
    lwz r3, 0x28(r28)
    lwz r4, 0x2c(r28)
    li r5, 0x0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r6, 0x14(r1)
    bl fn_801728DC
    stw r3, 0x28(r28)
lbl_80069C50:
    lwz r0, 0x28(r28)
    cmpwi r0, 0x0
    bgt lbl_80069D24
    lwz r0, 0x74(r28)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_80069C84
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x0(r28)
    lwz r0, 0x24(r28)
    stw r0, 0x28(r28)
    b lbl_80069D24
lbl_80069C84:
    lwz r0, 0x0(r28)
    ori r0, r0, 0x1000
    stw r0, 0x0(r28)
    li r27, -0x1
    stw r27, 0x9d4(r28)
    li r26, 0x0
    li r29, 0x0
lbl_80069CA0:
    mr r3, r28
    mr r4, r26
    bl fn_8005E4D4
    cmpwi r3, 0x0
    beq lbl_80069D24
    lwz r0, 0x74(r3)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_80069CE0
    lwz r0, 0x18(r3)
    cmplwi r0, 0x10
    beq lbl_80069CE0
    cmplwi r0, 0x2d
    beq lbl_80069CE0
    cmplwi r0, 0x2e
    bne lbl_80069D1C
lbl_80069CE0:
    lwz r0, 0x50(r3)
    rlwinm r0, r0, 0, 1, 1
    cmpwi r0, 0x0
    bne lbl_80069D1C
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_80069D1C
    ori r0, r4, 0x1400
    stw r0, 0x0(r3)
    lwz r0, 0x54(r3)
    oris r0, r0, 0x400
    stw r0, 0x54(r3)
    stw r29, 0x28(r28)
    stw r27, 0x9d4(r3)
lbl_80069D1C:
    addi r26, r26, 0x1
    b lbl_80069CA0
lbl_80069D24:
    lwz r4, 0x2c(r28)
    cmpwi r4, 0x0
    bge lbl_80069D68
    lwz r0, 0x5c(r28)
    rlwinm r0, r0, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_80069D50
    lwz r3, 0x38(r28)
    neg r0, r4
    cmpw r3, r0
    bge lbl_80069D58
lbl_80069D50:
    neg r0, r4
    stw r0, 0x38(r28)
lbl_80069D58:
    lwz r3, 0x2c(r28)
    lwz r0, 0x3c(r28)
    subf r0, r3, r0
    stw r0, 0x3c(r28)
lbl_80069D68:
    lwz r0, 0x5c(r28)
    rlwinm r0, r0, 0, 22, 20
    stw r0, 0x5c(r28)
    li r0, 0x0
    stw r0, 0x2c(r28)
    cmpwi r31, 0x0
    beq lbl_80069E18
    lwz r4, 0x74(r28)
    andi. r0, r4, 0x12
    cmpwi r0, 0x0
    bne lbl_80069DB0
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80069E18
lbl_80069DB0:
    li r5, 0x1
    lwz r3, 0x50(r28)
    rlwinm r0, r3, 0, 16, 16
    rlwimi r0, r3, 0, 0, 0
    cmpwi r0, 0x0
    beq lbl_80069DCC
    li r5, 0x0
lbl_80069DCC:
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_80069DDC
    li r5, 0x0
lbl_80069DDC:
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 22, 23
    cmpwi r0, 0x0
    beq lbl_80069DF0
    li r5, 0x0
lbl_80069DF0:
    lwz r3, 0x18(r28)
    subi r0, r3, 0x2d
    cmplwi r0, 0x1
    bgt lbl_80069E04
    li r5, 0x0
lbl_80069E04:
    cmpwi r5, 0x0
    beq lbl_80069E18
    mr r3, r28
    lfs f1, lbl_8049EED8
    bl fn_8006AA78
lbl_80069E18:
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_80069ED4
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r4, 0xc(r3)
    lwz r3, 0x118(r4)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_80069ED4
    lwz r0, 0x10(r4)
    cmpwi r0, 0x4
    bne lbl_80069ED4
    li r3, 0x1
    lwz r0, 0x18(r28)
    cmplwi r0, 0x4
    bne lbl_80069E80
    lwz r0, 0x164c(r28)
    cmpwi r0, 0x2
    bne lbl_80069E80
    mr r3, r28
    la r4, lbl_8049EED8
    lfs f1, 0xc(r4)
    bl fn_8006AA78
    li r3, 0x0
lbl_80069E80:
    cmpwi r30, 0x0
    beq lbl_80069ED4
    cmpwi r3, 0x0
    beq lbl_80069ED4
    mr r3, r28
    li r4, 0xa
    bl fn_8006A858
    lwz r0, 0x74(r28)
    andi. r0, r0, 0x12
    cmpwi r0, 0x0
    bne lbl_80069EC8
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_80069ED4
lbl_80069EC8:
    mr r3, r28
    lfs f1, lbl_8049EED8
    bl fn_8006AA78
lbl_80069ED4:
    li r27, 0x1
    lwz r0, 0x0(r28)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_80069EEC
    li r27, 0x0
lbl_80069EEC:
    li r3, 0x0
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    beq lbl_80069F04
    li r27, 0x0
lbl_80069F04:
    lwz r0, 0x5c(r28)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_80069F18
    li r27, 0x0
lbl_80069F18:
    cmpwi r27, 0x0
    beq lbl_80069F50
    lwz r0, 0x0(r28)
    oris r0, r0, 0x20
    stw r0, 0x0(r28)
    li r4, 0x14
    lwz r0, 0x18(r28)
    cmplwi r0, 0x9
    bne lbl_80069F44
    srawi r0, r4, 1
    addze r4, r0
lbl_80069F44:
    mr r3, r28
    neg r4, r4
    bl fn_8006A858
lbl_80069F50:
    lwz r3, 0x6c(r28)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_80069FA0
    lwz r0, 0x54(r28)
    rlwinm r0, r0, 0, 2, 2
    cmpwi r0, 0x0
    bne lbl_8006A008
    lwz r0, 0x50(r28)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_8006A008
    rlwinm r0, r3, 0, 31, 29
    stw r0, 0x6c(r28)
    la r3, lbl_8049EED8
    lfs f0, 0x10(r3)
    stfs f0, 0xa0c(r28)
    lwz r0, 0x48(r28)
    stw r0, 0x4c(r28)
    b lbl_8006A008
lbl_80069FA0:
    lfs f1, 0xa0c(r28)
    lfs f0, 0x12c(r28)
    fneg f2, f0
    la r29, lbl_8049EED8
    lfs f3, 0x10(r29)
    lwz r0, 0x48(r28)
    lfd f4, lbl_8049EED0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f4, f0, f4
    bl fn_801728FC
    stfs f1, 0xa0c(r28)
    lwz r0, 0x50(r28)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_8006A008
    frsp f1, f1
    lfs f0, 0x14(r29)
    fcmpo cr0, f1, f0
    bge lbl_8006A008
    mr r3, r28
    lfs f1, 0x18(r29)
    bl fn_8006AEA0
lbl_8006A008:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8006A020
asm void fn_8006A020(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    lwz r31, 0x3864(r3)
    li r30, 0x0
    lwz r5, 0x0(r3)
    rlwinm r0, r5, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006A3C0
    rlwinm r0, r5, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_8006A3C0
    rlwinm r0, r5, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8006A3C0
    lis r5, lbl_80390580@ha
    addi r5, r5, lbl_80390580@l
    lwz r5, 0xc(r5)
    lwz r0, 0x10(r5)
    cmpwi r0, 0xa
    bge lbl_8006A3C0
    lwz r0, 0x38c0(r3)
    cmpwi r0, 0x0
    beq lbl_8006A0D8
    cmpwi r4, 0x0
    blt lbl_8006A0D8
    lwz r6, 0x2c(r3)
    la r5, lbl_8049EED8
    lfd f1, lbl_8049EED0
    xoris r0, r4, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x1c(r5)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    add r0, r6, r0
    stw r0, 0x2c(r3)
    b lbl_8006A14C
lbl_8006A0D8:
    lwz r0, 0x2c(r3)
    add r0, r0, r4
    stw r0, 0x2c(r3)
    lwz r0, 0xa14(r3)
    cmpwi r0, 0x0
    ble lbl_8006A0FC
    la r5, lbl_8049EED8
    lfs f2, 0x20(r5)
    b lbl_8006A104
lbl_8006A0FC:
    la r5, lbl_8049EED8
    lfs f2, 0x24(r5)
lbl_8006A104:
    li r0, 0xa
    stw r0, 0xa14(r3)
    cmpwi r4, 0x0
    bge lbl_8006A14C
    lwz r5, 0x34(r3)
    lfd f1, lbl_8049EED0
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    add r0, r5, r0
    stw r0, 0x34(r3)
lbl_8006A14C:
    mr r3, r29
    bl fn_8006B078
    cmpwi r3, 0x0
    beq lbl_8006A3C0
    lwz r0, 0x74(r29)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006A3C0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    bne lbl_8006A3A0
    lwz r0, 0x8(r3)
    cmplwi r0, 0x3
    beq lbl_8006A1B8
    cmplwi r0, 0x4
    beq lbl_8006A1EC
    cmplwi r0, 0x9
    beq lbl_8006A220
    cmplwi r0, 0xa
    beq lbl_8006A27C
    cmplwi r0, 0xb
    beq lbl_8006A2BC
    cmplwi r0, 0xe
    beq lbl_8006A318
    b lbl_8006A370
lbl_8006A1B8:
    lwz r0, 0x18(r29)
    cmplwi r0, 0x3
    bne lbl_8006A370
    lwz r0, 0x64(r29)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_8006A1E4
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
lbl_8006A1E4:
    li r30, 0x1
    b lbl_8006A370
lbl_8006A1EC:
    lwz r0, 0x18(r29)
    cmplwi r0, 0x3
    bne lbl_8006A370
    lwz r0, 0x140(r29)
    clrlwi r0, r0, 20
    cmpwi r0, 0x200
    beq lbl_8006A218
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
lbl_8006A218:
    li r30, 0x1
    b lbl_8006A370
lbl_8006A220:
    lwz r0, 0x18(r29)
    cmplwi r0, 0x18
    bne lbl_8006A370
    cmpwi r31, 0x0
    beq lbl_8006A264
    lwz r0, 0x18(r31)
    cmplwi r0, 0x1
    bne lbl_8006A250
    lwz r0, 0x140(r29)
    clrlwi r0, r0, 20
    cmpwi r0, 0x1e4
    beq lbl_8006A274
lbl_8006A250:
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
    b lbl_8006A274
lbl_8006A264:
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
lbl_8006A274:
    li r30, 0x1
    b lbl_8006A370
lbl_8006A27C:
    lwz r0, 0x18(r29)
    cmplwi r0, 0x19
    bne lbl_8006A370
    lwz r0, 0xc(r3)
    cmpwi r0, 0x2
    bne lbl_8006A370
    lwz r0, 0x140(r29)
    clrlwi r0, r0, 20
    cmpwi r0, 0x1e3
    beq lbl_8006A2B4
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
lbl_8006A2B4:
    li r30, 0x1
    b lbl_8006A370
lbl_8006A2BC:
    lwz r0, 0x18(r29)
    cmplwi r0, 0x1b
    bne lbl_8006A370
    cmpwi r31, 0x0
    beq lbl_8006A300
    lwz r0, 0x18(r31)
    cmplwi r0, 0x2
    bne lbl_8006A2EC
    lwz r0, 0x140(r29)
    clrlwi r0, r0, 20
    cmpwi r0, 0x1e3
    beq lbl_8006A310
lbl_8006A2EC:
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
    b lbl_8006A310
lbl_8006A300:
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
lbl_8006A310:
    li r30, 0x1
    b lbl_8006A370
lbl_8006A318:
    lwz r0, 0x18(r29)
    cmplwi r0, 0x1a
    bne lbl_8006A370
    cmpwi r31, 0x0
    beq lbl_8006A35C
    lwz r0, 0x18(r31)
    cmplwi r0, 0x3
    bne lbl_8006A348
    lwz r0, 0x140(r29)
    clrlwi r0, r0, 20
    cmpwi r0, 0x1e8
    beq lbl_8006A36C
lbl_8006A348:
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
    b lbl_8006A36C
lbl_8006A35C:
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
lbl_8006A36C:
    li r30, 0x1
lbl_8006A370:
    cmpwi r30, 0x0
    bne lbl_8006A3C0
    mr r3, r29
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_8006A3C0
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
    b lbl_8006A3C0
lbl_8006A3A0:
    lwz r0, 0x64(r29)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_8006A3C0
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
lbl_8006A3C0:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8006A3D8
asm void fn_8006A3D8(s32 *arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    mr r29, r3
    lwz r31, 0x3864(r3)
    li r30, 0x0
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006A7E0
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_8006A7E0
    rlwinm r0, r4, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8006A7E0
    lis r4, lbl_80390580@ha
    addi r4, r4, lbl_80390580@l
    lwz r4, 0xc(r4)
    lwz r0, 0x10(r4)
    cmpwi r0, 0xa
    bge lbl_8006A7E0
    lwz r0, 0x38c0(r3)
    cmpwi r0, 0x0
    beq lbl_8006A4A0
    la r5, lbl_8049EED8
    lfs f0, 0x14(r5)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8006A4A0
    lwz r4, 0x2c(r3)
    lwz r0, 0x24(r3)
    lfd f2, lbl_8049EED0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f2
    lfs f0, 0x1c(r5)
    fmuls f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    add r0, r4, r0
    stw r0, 0x2c(r3)
    b lbl_8006A554
lbl_8006A4A0:
    lwz r4, 0x2c(r3)
    lwz r0, 0x24(r3)
    lfd f2, lbl_8049EED0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    add r0, r4, r0
    stw r0, 0x2c(r3)
    lwz r0, 0xa14(r3)
    cmpwi r0, 0x0
    ble lbl_8006A4F4
    la r4, lbl_8049EED8
    lfs f3, 0x20(r4)
    b lbl_8006A4FC
lbl_8006A4F4:
    la r4, lbl_8049EED8
    lfs f3, 0x24(r4)
lbl_8006A4FC:
    li r0, 0xa
    stw r0, 0xa14(r3)
    la r4, lbl_8049EED8
    lfs f0, 0x14(r4)
    fcmpo cr0, f1, f0
    bge lbl_8006A554
    lwz r4, 0x34(r3)
    lwz r0, 0x24(r3)
    lfd f2, lbl_8049EED0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    add r0, r4, r0
    stw r0, 0x34(r3)
lbl_8006A554:
    mr r3, r29
    bl fn_8006B078
    cmpwi r3, 0x0
    beq lbl_8006A7E0
    lwz r0, 0x74(r29)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006A7E0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x4(r3)
    cmplwi r0, 0x12
    bne lbl_8006A7BC
    lwz r0, 0x8(r3)
    cmplwi r0, 0x3
    beq lbl_8006A5C0
    cmplwi r0, 0x4
    beq lbl_8006A5F4
    cmplwi r0, 0x9
    beq lbl_8006A628
    cmplwi r0, 0xa
    beq lbl_8006A698
    cmplwi r0, 0xb
    beq lbl_8006A6D8
    cmplwi r0, 0xe
    beq lbl_8006A734
    b lbl_8006A78C
lbl_8006A5C0:
    lwz r0, 0x18(r29)
    cmplwi r0, 0x3
    bne lbl_8006A78C
    lwz r0, 0x64(r29)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_8006A5EC
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
lbl_8006A5EC:
    li r30, 0x1
    b lbl_8006A78C
lbl_8006A5F4:
    lwz r0, 0x18(r29)
    cmplwi r0, 0x3
    bne lbl_8006A78C
    lwz r0, 0x140(r29)
    clrlwi r0, r0, 20
    cmpwi r0, 0x200
    beq lbl_8006A620
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
lbl_8006A620:
    li r30, 0x1
    b lbl_8006A78C
lbl_8006A628:
    lwz r0, 0x18(r29)
    cmplwi r0, 0x18
    bne lbl_8006A78C
    lwz r0, 0x140(r29)
    clrlwi r0, r0, 20
    cmpwi r0, 0x1e3
    bne lbl_8006A680
    cmpwi r31, 0x0
    beq lbl_8006A66C
    lwz r0, 0x18(r31)
    cmplwi r0, 0x1
    beq lbl_8006A690
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
    b lbl_8006A690
lbl_8006A66C:
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
    b lbl_8006A690
lbl_8006A680:
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
lbl_8006A690:
    li r30, 0x1
    b lbl_8006A78C
lbl_8006A698:
    lwz r0, 0x18(r29)
    cmplwi r0, 0x19
    bne lbl_8006A78C
    lwz r0, 0xc(r3)
    cmpwi r0, 0x2
    bne lbl_8006A78C
    lwz r0, 0x140(r29)
    clrlwi r0, r0, 20
    cmpwi r0, 0x1e3
    beq lbl_8006A6D0
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
lbl_8006A6D0:
    li r30, 0x1
    b lbl_8006A78C
lbl_8006A6D8:
    lwz r0, 0x18(r29)
    cmplwi r0, 0x1b
    bne lbl_8006A78C
    cmpwi r31, 0x0
    beq lbl_8006A71C
    lwz r0, 0x18(r31)
    cmplwi r0, 0x2
    bne lbl_8006A708
    lwz r0, 0x140(r29)
    clrlwi r0, r0, 20
    cmpwi r0, 0x1e3
    beq lbl_8006A72C
lbl_8006A708:
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
    b lbl_8006A72C
lbl_8006A71C:
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
lbl_8006A72C:
    li r30, 0x1
    b lbl_8006A78C
lbl_8006A734:
    lwz r0, 0x18(r29)
    cmplwi r0, 0x1a
    bne lbl_8006A78C
    cmpwi r31, 0x0
    beq lbl_8006A778
    lwz r0, 0x18(r31)
    cmplwi r0, 0x3
    bne lbl_8006A764
    lwz r0, 0x140(r29)
    clrlwi r0, r0, 20
    cmpwi r0, 0x1e8
    beq lbl_8006A788
lbl_8006A764:
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
    b lbl_8006A788
lbl_8006A778:
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
lbl_8006A788:
    li r30, 0x1
lbl_8006A78C:
    cmpwi r30, 0x0
    bne lbl_8006A7E0
    mr r3, r29
    li r4, 0x1
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_8006A7E0
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
    b lbl_8006A7E0
lbl_8006A7BC:
    mr r3, r29
    li r4, 0x0
    bl fn_8005E7D4
    cmpwi r3, 0x0
    bne lbl_8006A7E0
    lwz r3, 0x28(r29)
    subi r0, r3, 0x1
    neg r0, r0
    stw r0, 0x2c(r29)
lbl_8006A7E0:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8006A7F8
asm void fn_8006A7F8(s8 *arg0, s32 arg1) {
    nofralloc
    lwz r5, 0x0(r3)
    rlwinm r0, r5, 0, 30, 30
    cmpwi r0, 0x0
    beqlr
    rlwinm r0, r5, 0, 19, 19
    cmpwi r0, 0x0
    bnelr
    lis r5, lbl_80390580@ha
    addi r5, r5, lbl_80390580@l
    lwz r5, 0xc(r5)
    lwz r0, 0x10(r5)
    cmpwi r0, 0xa
    bgelr
    lwz r0, 0x2c(r3)
    add r0, r0, r4
    stw r0, 0x2c(r3)
    cmpwi r4, 0x0
    bgelr
    lwz r5, 0x30(r3)
    srawi r0, r4, 1
    addze r0, r0
    add r0, r5, r0
    stw r0, 0x30(r3)
    blr
}

// asm_to_cpp: fn_8006A858
asm M2C_UNK fn_8006A858(s32 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_29
    mr r30, r3
    mr r31, r4
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006A88C
    bl fn_8005E4A4
    mr r30, r3
lbl_8006A88C:
    lwz r4, 0x0(r30)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006AA60
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_8006AA60
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x10(r3)
    cmpwi r0, 0xa
    bge lbl_8006AA60
    cmpwi r31, 0x0
    ble lbl_8006A998
    lwz r0, 0x58(r30)
    rlwinm r0, r0, 0, 12, 12
    cmpwi r0, 0x0
    bne lbl_8006AA60
    lwz r6, 0x74(r30)
    rlwinm r0, r6, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_8006A8F4
    rlwinm r0, r4, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8006AA60
lbl_8006A8F4:
    lwz r5, 0x78(r30)
    rlwinm r0, r5, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_8006AA60
    rlwinm r0, r4, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_8006AA60
    lfd f1, lbl_8049EED0
    xoris r0, r31, 0x8000
    stw r0, 0x1c(r1)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f1, f0, f1
    lwz r0, 0x164c(r30)
    mulli r0, r0, 0x350
    add r3, r30, r0
    lfs f0, 0x197c(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r31, 0x24(r1)
    rlwinm r0, r5, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_8006A964
    rlwinm r0, r6, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_8006A998
lbl_8006A964:
    lfd f1, lbl_8049EED0
    xoris r0, r31, 0x8000
    stw r0, 0x24(r1)
    lis r0, 0x4330
    stw r0, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f1, f0, f1
    la r3, lbl_8049EED8
    lfs f0, 0x28(r3)
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r31, 0x1c(r1)
lbl_8006A998:
    lwz r29, 0x44(r30)
    mr r3, r29
    mr r4, r31
    li r5, 0x0
    lwz r6, 0x40(r30)
    bl fn_801728DC
    stw r3, 0x44(r30)
    li r4, 0x1
    lwz r3, 0x40(r30)
    lwz r0, 0x44(r30)
    cmpw r0, r3
    beq lbl_8006A9CC
    li r4, 0x0
lbl_8006A9CC:
    cmpw r3, r29
    bgt lbl_8006A9D8
    li r4, 0x0
lbl_8006A9D8:
    lwz r3, 0x0(r30)
    rlwinm r0, r3, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_8006A9F8
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8006A9F8
    li r4, 0x0
lbl_8006A9F8:
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8006AA08
    li r4, 0x0
lbl_8006AA08:
    cmpwi r4, 0x0
    beq lbl_8006AA60
    li r3, 0x7cd
    addi r4, r30, 0x84
    li r5, 0x0
    bl fn_80099FD8
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x8
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
lbl_8006AA60:
    addi r11, r1, 0x40
    bl _restgpr_29
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8006AA78
asm void fn_8006AA78(s32 *arg0, f32 farg0) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r31, r3
    fmr f31, f1
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006AAB4
    bl fn_8005E4A4
    mr r31, r3
lbl_8006AAB4:
    lwz r4, 0x0(r31)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006AC40
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_8006AC40
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x10(r3)
    cmpwi r0, 0xa
    bge lbl_8006AC40
    la r3, lbl_8049EED8
    lfs f0, 0x14(r3)
    fcmpo cr0, f31, f0
    ble lbl_8006AB5C
    lwz r6, 0x74(r31)
    rlwinm r0, r6, 0, 12, 12
    cmpwi r0, 0x0
    bne lbl_8006AC40
    lwz r5, 0x78(r31)
    rlwinm r0, r5, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_8006AC40
    rlwinm r0, r4, 0, 22, 22
    cmpwi r0, 0x0
    bne lbl_8006AC40
    lwz r0, 0x164c(r31)
    mulli r0, r0, 0x350
    add r3, r31, r0
    lfs f0, 0x197c(r3)
    fmuls f31, f31, f0
    rlwinm r0, r5, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_8006AB50
    rlwinm r0, r6, 0, 3, 3
    cmpwi r0, 0x0
    beq lbl_8006AB5C
lbl_8006AB50:
    la r3, lbl_8049EED8
    lfs f0, 0x28(r3)
    fdivs f31, f31, f0
lbl_8006AB5C:
    lwz r30, 0x44(r31)
    lwz r6, 0x40(r31)
    mr r3, r30
    lfd f1, lbl_8049EED0
    xoris r0, r6, 0x8000
    stw r0, 0x1c(r1)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f31
    fctiwz f0, f0
    stfd f0, 0x20(r1)
    lwz r4, 0x24(r1)
    li r5, 0x0
    bl fn_801728DC
    stw r3, 0x44(r31)
    li r4, 0x1
    lwz r3, 0x40(r31)
    lwz r0, 0x44(r31)
    cmpw r0, r3
    beq lbl_8006ABB8
    li r4, 0x0
lbl_8006ABB8:
    cmpw r3, r30
    bgt lbl_8006ABC4
    li r4, 0x0
lbl_8006ABC4:
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_8006ABD8
    li r4, 0x0
lbl_8006ABD8:
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8006ABE8
    li r4, 0x0
lbl_8006ABE8:
    cmpwi r4, 0x0
    beq lbl_8006AC40
    li r3, 0x7cd
    addi r4, r31, 0x84
    li r5, 0x0
    bl fn_80099FD8
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x8
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
lbl_8006AC40:
    li r0, 0x38
    opword 0x13E1000C
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8006AC64
asm void fn_8006AC64(s32 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_28
    mr r31, r3
    mr r28, r4
    mr r29, r5
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006AC9C
    bl fn_8005E4A4
    mr r31, r3
lbl_8006AC9C:
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006ADF8
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_8006ADF8
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x10(r3)
    cmpwi r0, 0xa
    bge lbl_8006ADF8
    lwz r30, 0x44(r31)
    cmpwi r29, 0x1
    beq lbl_8006ACF8
    mr r3, r30
    mr r4, r28
    li r5, 0x0
    lwz r6, 0x40(r31)
    bl fn_801728DC
    stw r3, 0x44(r31)
    b lbl_8006AD58
lbl_8006ACF8:
    lfd f1, lbl_8049EED0
    xoris r0, r28, 0x8000
    stw r0, 0x1c(r1)
    lis r4, 0x4330
    stw r4, 0x18(r1)
    lfd f0, 0x18(r1)
    fsubs f2, f0, f1
    la r3, lbl_8049EED8
    lfs f0, 0x2c(r3)
    fdivs f2, f2, f0
    lwz r6, 0x40(r31)
    mr r3, r30
    xoris r0, r6, 0x8000
    stw r0, 0x24(r1)
    stw r4, 0x20(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r4, 0x2c(r1)
    li r5, 0x0
    bl fn_801728DC
    stw r3, 0x44(r31)
lbl_8006AD58:
    li r4, 0x1
    lwz r3, 0x40(r31)
    lwz r0, 0x44(r31)
    cmpw r0, r3
    beq lbl_8006AD70
    li r4, 0x0
lbl_8006AD70:
    cmpw r3, r30
    bgt lbl_8006AD7C
    li r4, 0x0
lbl_8006AD7C:
    lwz r3, 0x0(r31)
    rlwinm r0, r3, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_8006AD90
    li r4, 0x0
lbl_8006AD90:
    rlwinm r0, r3, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8006ADA0
    li r4, 0x0
lbl_8006ADA0:
    cmpwi r4, 0x0
    beq lbl_8006ADF8
    li r3, 0x7cd
    addi r4, r31, 0x84
    li r5, 0x0
    bl fn_80099FD8
    li r3, 0x0
    stw r3, 0x8(r1)
    li r0, 0x8
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    stw r3, 0x14(r1)
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_8011FE90
lbl_8006ADF8:
    addi r11, r1, 0x40
    bl _restgpr_28
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

s32 fn_8006AE10(s8 *arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r5;

    temp_r5 = (s32) (M2C_FIELD(arg0, s32 *, 0));
    if ((s32) (temp_r5 & 2) == 0) {
        return (s32) (0);
    }
    if ((s32) (temp_r5 & 0x1000) != 0) {
        return (s32) (0);
    }
    temp_r31 = (s32) (M2C_FIELD(arg0, s32 *, 0x4C));
    temp_r3 = (s32) (fn_801728DC((s32) (temp_r31), (s32) (arg1), (s32) (0), (s32) (M2C_FIELD(arg0, s32 *, 0x48))));
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_r3);
    if ((temp_r3 == 0) && (temp_r31 != temp_r3)) {
        return (s32) (1);
    }
    return (s32) (0);
}

// asm_to_cpp: fn_8006AEA0
asm s32 fn_8006AEA0(s32 *arg0, f64 farg0, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r4, 0x0(r3)
    rlwinm r0, r4, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8006AED0
    li r3, 0x0
    b lbl_8006AF88
lbl_8006AED0:
    rlwinm r0, r4, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_8006AEE4
    li r3, 0x0
    b lbl_8006AF88
lbl_8006AEE4:
    lwz r31, 0x4c(r3)
    lwz r0, 0x78(r3)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8006AF28
    mr r3, r31
    lis r4, lbl_803396E8@ha
    lfd f0, lbl_803396E8@l(r4)
    fmul f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
    li r5, 0x0
    li r6, 0x3e8
    bl fn_801728DC
    stw r3, 0x4c(r30)
    b lbl_8006AF68
lbl_8006AF28:
    lwz r6, 0x48(r3)
    mr r3, r31
    lfd f2, lbl_8049EED0
    xoris r0, r6, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r4, 0x14(r1)
    li r5, 0x0
    bl fn_801728DC
    stw r3, 0x4c(r30)
lbl_8006AF68:
    lwz r0, 0x4c(r30)
    cmpwi r0, 0x0
    bne lbl_8006AF84
    cmpw r31, r0
    beq lbl_8006AF84
    li r3, 0x1
    b lbl_8006AF88
lbl_8006AF84:
    li r3, 0x0
lbl_8006AF88:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

f32 fn_8006AFA0(s32 *arg0) {
    return (f32) M2C_FIELD(arg0, s32 *, 0x28) / (f32) M2C_FIELD(arg0, s32 *, 0x24);
}

f32 fn_8006AFE8(s8 *arg0) {
    return (f32) M2C_FIELD(arg0, s32 *, 0x44) / (f32) M2C_FIELD(arg0, s32 *, 0x40);
}

f32 fn_8006B030(s8 *arg0) {
    return (f32) M2C_FIELD(arg0, s32 *, 0x4C) / (f32) M2C_FIELD(arg0, s32 *, 0x48);
}

s32 fn_8006B078(s32 *arg0) {
    return (s32) (fn_801728DC((s32) (M2C_FIELD(arg0, s32 *, 0x28)), (s32) (M2C_FIELD(arg0, s32 *, 0x2C)), (s32) (0), (s32) (M2C_FIELD(arg0, s32 *, 0x24))) <= 0);
}

// asm_to_cpp: fn_8006B0B8
asm void fn_8006B0B8(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_28
    mr r31, r3
    mr r28, r4
    lwz r3, 0x9b8(r4)
    bl labs
    clrlwi r0, r3, 16
    mulli r0, r0, 0x6
    srawi r0, r0, 3
    addze r3, r0
    addi r3, r3, 0x2000
    lwz r0, 0x9c0(r28)
    subfic r0, r0, 0x41
    mullw r0, r3, r0
    srawi r0, r0, 6
    addze r29, r0
    stw r29, 0x9b8(r28)
    lfs f0, lbl_8049EF18
    stfs f0, 0x110(r28)
    lfs f1, 0x10c(r28)
    lis r3, lbl_803396F0@ha
    lfd f0, lbl_803396F0@l(r3)
    fcmpo cr0, f1, f0
    bge lbl_8006B130
    la r3, lbl_8049EF18
    lfs f0, 0x4(r3)
    stfs f0, 0x10c(r28)
lbl_8006B130:
    la r30, lbl_8049EF18
    lfs f0, 0x8(r30)
    stfs f0, 0xf8(r28)
    clrlwi r3, r29, 16
    bl fn_800694F0
    fneg f1, f1
    lfs f0, 0xc(r30)
    fmuls f0, f0, f1
    stfs f0, 0xf4(r28)
    clrlwi r3, r29, 16
    bl fn_80069524
    fneg f1, f1
    lfs f0, 0x10(r30)
    fmuls f0, f0, f1
    stfs f0, 0x100(r28)
    lwz r0, 0x60(r28)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8006B18C
    lfs f1, 0xf4(r28)
    lfs f0, 0x14(r30)
    fmuls f0, f1, f0
    stfs f0, 0xf4(r28)
lbl_8006B18C:
    la r3, lbl_8049EF18
    lfs f2, 0x18(r3)
    lfs f0, 0xf4(r31)
    fmuls f0, f2, f0
    lfs f1, 0x1c(r3)
    fdivs f0, f0, f1
    stfs f0, 0xf4(r31)
    lfs f0, 0x100(r31)
    fmuls f0, f2, f0
    fdivs f0, f0, f1
    stfs f0, 0x100(r31)
    addi r11, r1, 0x20
    bl _restgpr_28
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8006B1D0
asm void fn_8006B1D0(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lwz r3, 0x9b8(r3)
    bl labs
    clrlwi r0, r3, 16
    mulli r0, r0, 0x6
    srawi r0, r0, 3
    addze r3, r0
    addi r3, r3, 0x2000
    lwz r0, 0x9c0(r29)
    subfic r0, r0, 0x41
    mullw r0, r3, r0
    srawi r0, r0, 6
    addze r30, r0
    stw r30, 0x9b8(r29)
    lfs f0, lbl_8049EF18
    stfs f0, 0x110(r29)
    lfs f1, 0x10c(r29)
    lis r3, lbl_803396F0@ha
    lfd f0, lbl_803396F0@l(r3)
    fcmpo cr0, f1, f0
    bge lbl_8006B244
    la r3, lbl_8049EF18
    lfs f0, 0x4(r3)
    stfs f0, 0x10c(r29)
lbl_8006B244:
    la r31, lbl_8049EF18
    lfs f0, 0x8(r31)
    stfs f0, 0xf8(r29)
    clrlwi r3, r30, 16
    bl fn_800694F0
    fneg f1, f1
    lfs f0, 0xc(r31)
    fmuls f0, f0, f1
    stfs f0, 0xf4(r29)
    clrlwi r3, r30, 16
    bl fn_80069524
    fneg f1, f1
    lfs f0, 0x10(r31)
    fmuls f0, f0, f1
    stfs f0, 0x100(r29)
    lwz r0, 0x60(r29)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8006B2A0
    lfs f1, 0xf4(r29)
    lfs f0, 0x14(r31)
    fmuls f0, f1, f0
    stfs f0, 0xf4(r29)
lbl_8006B2A0:
    la r3, lbl_8049EF18
    lfs f2, 0x18(r3)
    lfs f0, 0xf4(r29)
    fmuls f0, f2, f0
    lfs f1, 0x1c(r3)
    fdivs f0, f0, f1
    stfs f0, 0xf4(r29)
    lfs f0, 0x100(r29)
    fmuls f0, f2, f0
    fdivs f0, f0, f1
    stfs f0, 0x100(r29)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8006B2E4
asm void fn_8006B2E4(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, 0x9b8(r3)
    bl labs
    clrlwi r0, r3, 16
    srawi r0, r0, 1
    addze r3, r0
    addi r3, r3, 0x4000
    lwz r0, 0x9c0(r30)
    subfic r0, r0, 0x41
    mullw r0, r3, r0
    srawi r0, r0, 6
    addze r0, r0
    stw r0, 0x9b8(r30)
    lfs f0, lbl_8049EF18
    stfs f0, 0x110(r30)
    la r31, lbl_8049EF18
    lfs f0, 0x4(r31)
    stfs f0, 0x10c(r30)
    lfs f0, 0x24(r31)
    stfs f0, 0xf8(r30)
    clrlwi r3, r0, 16
    bl fn_800694F0
    fneg f1, f1
    lfs f0, 0x28(r31)
    fmuls f0, f0, f1
    stfs f0, 0xf4(r30)
    lfs f0, 0x4(r31)
    stfs f0, 0x100(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8006B380
asm void fn_8006B380(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lwz r3, 0x9b8(r3)
    bl labs
    clrlwi r30, r3, 16
    stw r30, 0x9b8(r29)
    lfs f0, lbl_8049EF18
    stfs f0, 0x110(r29)
    la r31, lbl_8049EF18
    lfs f0, 0x4(r31)
    stfs f0, 0x10c(r29)
    lfs f0, 0x24(r31)
    stfs f0, 0xf8(r29)
    mr r3, r30
    bl fn_800694F0
    fneg f1, f1
    lfs f0, 0x2c(r31)
    fmuls f0, f0, f1
    stfs f0, 0xf4(r29)
    mr r3, r30
    bl fn_80069524
    fneg f1, f1
    lfs f0, 0x2c(r31)
    fmuls f0, f0, f1
    stfs f0, 0x100(r29)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8006B40C
asm void fn_8006B40C(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lwz r3, 0x9b8(r3)
    bl labs
    clrlwi r30, r3, 16
    stw r30, 0x9b8(r29)
    lfs f0, lbl_8049EF18
    stfs f0, 0x110(r29)
    la r31, lbl_8049EF18
    lfs f0, 0x4(r31)
    stfs f0, 0x10c(r29)
    lfs f0, 0x24(r31)
    stfs f0, 0xf8(r29)
    mr r3, r30
    bl fn_800694F0
    fneg f1, f1
    lfs f0, 0x2c(r31)
    fmuls f0, f0, f1
    stfs f0, 0xf4(r29)
    mr r3, r30
    bl fn_80069524
    fneg f1, f1
    lfs f0, 0x2c(r31)
    fmuls f0, f0, f1
    stfs f0, 0x100(r29)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8006B498
asm void fn_8006B498(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    lwz r3, 0x9b8(r3)
    bl labs
    clrlwi r0, r3, 16
    mulli r0, r0, 0x6
    srawi r0, r0, 3
    addze r3, r0
    addi r3, r3, 0x2000
    lwz r0, 0x9c0(r29)
    subfic r0, r0, 0x41
    mullw r0, r3, r0
    srawi r0, r0, 6
    addze r30, r0
    lfs f0, lbl_8049EF18
    stfs f0, 0x110(r29)
    la r31, lbl_8049EF18
    lfs f0, 0x4(r31)
    stfs f0, 0x10c(r29)
    lfs f0, 0x24(r31)
    stfs f0, 0xf8(r29)
    clrlwi r3, r30, 16
    bl fn_800694F0
    fneg f1, f1
    lfs f0, 0x38(r31)
    fmuls f0, f0, f1
    stfs f0, 0xf4(r29)
    clrlwi r3, r30, 16
    bl fn_80069524
    fneg f1, f1
    lfs f0, 0x10(r31)
    fmuls f3, f0, f1
    lfs f2, 0x18(r31)
    lfs f0, 0xf4(r29)
    fmuls f0, f2, f0
    lfs f1, 0x1c(r31)
    fdivs f0, f0, f1
    stfs f0, 0xf4(r29)
    fmuls f0, f2, f3
    fdivs f0, f0, f1
    stfs f0, 0x100(r29)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8006B564
asm void fn_8006B564(s32 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r25, r3
    mr r26, r4
    addi r23, r3, 0x160
    li r28, 0x0
    bl fn_80069248
    la r3, lbl_8049EF18
    lfs f0, 0x30(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r30, 0xc(r1)
    lwz r3, 0x50(r26)
    rlwinm r0, r3, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8006B5E0
    rlwinm r0, r3, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8006B5CC
    lwz r0, 0x60(r26)
    andis. r29, r0, 0x8100
    b lbl_8006B5D4
lbl_8006B5CC:
    lwz r0, 0x60(r26)
    clrrwi r29, r0, 31
lbl_8006B5D4:
    lwz r0, 0x64(r26)
    andi. r27, r0, 0xa
    b lbl_8006B5EC
lbl_8006B5E0:
    lwz r0, 0x60(r26)
    clrrwi r29, r0, 31
    li r27, 0x0
lbl_8006B5EC:
    la r24, lbl_8049EF18
    lfs f0, 0xa0(r26)
    lfs f2, 0x30(r24)
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r31, 0xc(r1)
    lfs f1, 0x3c(r23)
    lfs f0, 0x3c(r24)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_8006B638
    lfs f0, 0xa0(r25)
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    add r23, r0, r30
    b lbl_8006B738
lbl_8006B638:
    mr r3, r23
    bl fn_8006EBB4
    lfs f1, 0xa0(r25)
    lfs f0, 0x30(r24)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    add r23, r0, r3
    mr r3, r26
    mr r4, r25
    bl fn_80069248
    lfs f0, 0x30(r24)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    bl labs
    cmpwi r3, 0x4000
    ble lbl_8006B68C
    oris r28, r28, 0x40
lbl_8006B68C:
    rlwinm r0, r28, 0, 9, 9
    cmpwi r0, 0x0
    beq lbl_8006B6EC
    subf r3, r23, r31
    addi r0, r3, -0x8000
    slwi r0, r0, 16
    srawi r3, r0, 16
    bl labs
    cmpwi r3, 0x4000
    bge lbl_8006B738
    mr r3, r30
    bl labs
    cmpwi r3, 0x4000
    ble lbl_8006B738
    la r3, lbl_8049EF18
    lfs f1, 0xa0(r25)
    lfs f0, 0x30(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    add r23, r0, r30
    oris r29, r29, 0x80
    b lbl_8006B738
lbl_8006B6EC:
    subf r3, r23, r31
    addi r0, r3, -0x8000
    slwi r0, r0, 16
    srawi r3, r0, 16
    bl labs
    cmpwi r3, 0x4000
    ble lbl_8006B738
    mr r3, r30
    bl labs
    cmpwi r3, 0x4000
    ble lbl_8006B738
    la r3, lbl_8049EF18
    lfs f1, 0xa0(r25)
    lfs f0, 0x30(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    add r23, r0, r30
lbl_8006B738:
    subf r3, r23, r31
    addi r0, r3, -0x8000
    slwi r0, r0, 16
    srawi r3, r0, 16
    cmpwi r3, 0x0
    ori r25, r29, 0x8
    bge lbl_8006B758
    ori r25, r29, 0x4
lbl_8006B758:
    mr r29, r25
    bl labs
    cmpwi r3, 0x1555
    bge lbl_8006B770
    ori r29, r25, 0x1
    b lbl_8006B77C
lbl_8006B770:
    cmpwi r3, 0x4e38
    ble lbl_8006B77C
    ori r29, r25, 0x2
lbl_8006B77C:
    stw r29, 0x60(r26)
    stw r27, 0x64(r26)
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8006B79C
asm s32 fn_8006B79C() {
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    opword 0xF3E100F8
    stfd f30, 0xe0(r1)
    opword 0xF3C100E8
    stfd f29, 0xd0(r1)
    opword 0xF3A100D8
    addi r11, r1, 0xd0
    bl _savegpr_14
    mr r17, r3
    mr r18, r4
    mr r19, r5
    stw r6, 0x18(r1)
    stw r7, 0x1c(r1)
    mr r20, r8
    lis r0, 0x4330
    stw r0, 0x30(r1)
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lwz r14, 0x54(r3)
    li r29, 0x0
    lwz r31, 0x18(r4)
    lwz r30, 0x1c(r4)
    lwz r16, 0x20(r4)
    lwz r28, 0x60(r5)
    lwz r27, 0x64(r5)
    lwz r26, 0x24(r4)
    rlwinm r0, r16, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_8006B854
    clrlwi r0, r30, 31
    cmpwi r0, 0x0
    bne lbl_8006B854
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f1
    lfs f0, 0x9a4(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r26, 0x44(r1)
    b lbl_8006B954
lbl_8006B854:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006B8FC
    mr r3, r17
    bl fn_8005E4A4
    cmpwi r3, 0x0
    beq lbl_8006B8D0
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f2, f0, f1
    la r5, lbl_8049EF18
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r0, 0x8(r3)
    mulli r0, r0, 0x78
    add r3, r4, r0
    lwz r0, 0x4c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f1
    lfs f0, 0x40(r5)
    fmuls f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r26, 0x44(r1)
    b lbl_8006B954
lbl_8006B8D0:
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfs f0, 0x9a4(r17)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r26, 0x44(r1)
    b lbl_8006B954
lbl_8006B8FC:
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f2, f0, f1
    la r5, lbl_8049EF18
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    lwz r0, 0x8(r3)
    mulli r0, r0, 0x78
    add r3, r4, r0
    lwz r0, 0x4c(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfs f0, 0x40(r5)
    fmuls f0, f0, f1
    fmuls f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r26, 0x44(r1)
lbl_8006B954:
    lfd f2, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f2
    lfs f0, 0x9a8(r19)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r26, 0x44(r1)
    la r3, lbl_8049EF18
    xoris r0, r26, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f2
    lfs f0, 0x44(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r25, 0x4c(r1)
    stw r26, 0x70(r1)
    lfs f31, 0x2c(r18)
    li r0, 0x0
    stw r0, 0x68(r1)
    li r0, 0x0
    stb r0, 0x6d(r1)
    lwz r24, 0x4c(r18)
    lwz r23, 0x58(r18)
    lwz r22, 0x278(r18)
    lwz r15, 0x27c(r18)
    lwz r0, 0x280(r18)
    stw r0, 0x60(r1)
    lwz r21, 0x284(r18)
    lfs f30, 0x288(r18)
    lwz r3, 0x140(r17)
    subi r0, r3, 0x24c
    cmplwi r0, 0x2
    bgt lbl_8006B9F0
    ori r30, r30, 0x400
lbl_8006B9F0:
    rlwinm r0, r16, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006BA0C
    lwz r28, 0x60(r19)
    lwz r27, 0x64(r19)
    lwz r29, 0x54(r19)
    b lbl_8006D9E0
lbl_8006BA0C:
    subi r0, r15, 0x2
    cmplwi r0, 0x1
    ble lbl_8006BA2C
    cmpwi r15, 0x1
    beq lbl_8006BA34
    cmpwi r15, 0x0
    beq lbl_8006BA3C
    b lbl_8006BA44
lbl_8006BA2C:
    oris r28, r28, 0x1
    b lbl_8006BA48
lbl_8006BA34:
    oris r28, r28, 0x2
    b lbl_8006BA48
lbl_8006BA3C:
    oris r28, r28, 0x4
    b lbl_8006BA48
lbl_8006BA44:
    oris r28, r28, 0x2
lbl_8006BA48:
    cmpwi r22, 0x0
    beq lbl_8006BA64
    cmpwi r22, 0x1
    beq lbl_8006BA6C
    cmpwi r22, 0x2
    beq lbl_8006BA74
    b lbl_8006BA7C
lbl_8006BA64:
    ori r28, r28, 0x10
    b lbl_8006BA80
lbl_8006BA6C:
    ori r28, r28, 0x20
    b lbl_8006BA80
lbl_8006BA74:
    ori r28, r28, 0x40
    b lbl_8006BA80
lbl_8006BA7C:
    ori r28, r28, 0x20
lbl_8006BA80:
    cmpwi r20, 0x0
    bne lbl_8006BB3C
    mr r3, r17
    mr r4, r19
    bl fn_80069248
    fmr f29, f1
    mr r3, r18
    bl fn_8006EB7C
    addi r0, r3, 0x4000
    stw r0, 0x9b8(r19)
    mr r3, r18
    bl fn_8006EBB4
    la r4, lbl_8049EF18
    lfs f0, 0xa0(r17)
    lfs f1, 0x30(r4)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    add r0, r0, r3
    slwi r0, r0, 16
    srawi r5, r0, 16
    stw r5, 0x9bc(r19)
    lfs f0, 0xa0(r17)
    fadds f0, f0, f29
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r0, 0x44(r1)
    slwi r0, r0, 16
    srawi r0, r0, 16
    stw r0, 0x108(r19)
    rlwinm r3, r28, 0, 24, 24
    rlwimi r3, r28, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x80
    bne lbl_8006BC88
    lfs f1, 0x3c(r18)
    lfs f0, 0x3c(r4)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_8006BB34
    lfs f0, 0x4(r4)
    stfs f0, 0x3c(r18)
    b lbl_8006BC88
lbl_8006BB34:
    stw r5, 0x108(r19)
    b lbl_8006BC88
lbl_8006BB3C:
    lwz r0, 0x1c(r18)
    rlwinm r0, r0, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_8006BBCC
    addi r3, r1, 0x20
    addi r4, r20, 0x320
    addi r5, r19, 0x84
    bl fn_8001B8B8
    lfs f1, 0x20(r1)
    lfs f0, 0x28(r1)
    fneg f2, f0
    bl fn_800674B8
    bl fn_80172688
    fmr f29, f1
    mr r3, r18
    bl fn_8006EB7C
    addi r0, r3, 0x4000
    stw r0, 0x9b8(r19)
    mr r3, r18
    bl fn_8006EBB4
    la r4, lbl_8049EF18
    lfs f0, 0x30(r4)
    fmuls f0, f0, f29
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    add r0, r0, r3
    slwi r0, r0, 16
    srawi r0, r0, 16
    stw r0, 0x9bc(r19)
    stfd f0, 0x40(r1)
    lwz r0, 0x44(r1)
    slwi r0, r0, 16
    srawi r0, r0, 16
    stw r0, 0x108(r19)
    b lbl_8006BC44
lbl_8006BBCC:
    mr r3, r17
    mr r4, r19
    bl fn_80069248
    fmr f29, f1
    mr r3, r18
    bl fn_8006EB7C
    addi r0, r3, 0x4000
    stw r0, 0x9b8(r19)
    mr r3, r18
    bl fn_8006EBB4
    la r4, lbl_8049EF18
    lfs f0, 0xa0(r17)
    lfs f1, 0x30(r4)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    add r0, r0, r3
    slwi r0, r0, 16
    srawi r0, r0, 16
    stw r0, 0x9bc(r19)
    lfs f0, 0xa0(r17)
    fadds f0, f0, f29
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r0, 0x44(r1)
    slwi r0, r0, 16
    srawi r0, r0, 16
    stw r0, 0x108(r19)
lbl_8006BC44:
    rlwinm r3, r28, 0, 24, 24
    rlwimi r3, r28, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x80
    bne lbl_8006BC84
    lfs f1, 0x3c(r18)
    la r3, lbl_8049EF18
    lfs f0, 0x3c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_8006BC7C
    lfs f0, 0x4(r3)
    stfs f0, 0x3c(r18)
    b lbl_8006BC84
lbl_8006BC7C:
    lwz r0, 0x9bc(r19)
    stw r0, 0x108(r19)
lbl_8006BC84:
    oris r28, r28, 0x400
lbl_8006BC88:
    li r0, 0x0
    stb r0, 0x6c(r1)
    cmpwi r20, 0x0
    bne lbl_8006BCE4
    mr r3, r19
    mr r4, r17
    bl fn_80069248
    mr r3, r19
    bl fn_800687C0
    lwz r0, 0x6c(r19)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006BCC8
    li r0, 0x0
    stb r0, 0x6c(r1)
    b lbl_8006BCE4
lbl_8006BCC8:
    bl fn_80018BD4
    la r3, lbl_8049EF18
    lfs f0, 0x48(r3)
    fcmpo cr0, f1, f0
    ble lbl_8006BCE4
    li r0, 0x1
    stb r0, 0x6c(r1)
lbl_8006BCE4:
    li r5, 0x0
    lwz r3, 0x18(r17)
    cmplwi r3, 0x2d
    beq lbl_8006BD0C
    cmpwi r20, 0x0
    beq lbl_8006BD0C
    lwz r0, 0x58(r19)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_8006BD28
lbl_8006BD0C:
    rlwinm r0, r30, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006BD2C
    lwz r0, 0x58(r19)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8006BD2C
lbl_8006BD28:
    li r5, 0x1
lbl_8006BD2C:
    clrlwi r0, r16, 31
    stw r0, 0x74(r1)
    cmpwi r0, 0x0
    beq lbl_8006BD60
    lwz r0, 0x50(r19)
    rlwinm r0, r0, 0, 7, 7
    cmpwi r0, 0x0
    bne lbl_8006BD60
    lwz r0, 0x74(r19)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    bne lbl_8006BD60
    li r5, 0x1
lbl_8006BD60:
    lwz r0, 0x78(r19)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    beq lbl_8006BD74
    li r5, 0x1
lbl_8006BD74:
    lwz r0, 0x74(r19)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8006BD88
    li r5, 0x1
lbl_8006BD88:
    lwz r0, 0x50(r19)
    andis. r4, r0, 0x9000
    addis r6, r4, 0x7000
    cmplwi r6, 0x0
    bne lbl_8006BDAC
    rlwinm r6, r16, 0, 29, 29
    cmpwi r6, 0x0
    beq lbl_8006BDAC
    li r5, 0x1
lbl_8006BDAC:
    addis r6, r4, 0x7000
    cmplwi r6, 0x0
    bne lbl_8006BDF0
    lwz r6, 0x180(r19)
    rlwinm r6, r6, 0, 17, 17
    cmpwi r6, 0x0
    beq lbl_8006BDF0
    cmplwi r3, 0x10
    beq lbl_8006BDEC
    cmplwi r3, 0xd
    beq lbl_8006BDEC
    cmplwi r3, 0xc
    beq lbl_8006BDEC
    subi r3, r3, 0x2d
    cmplwi r3, 0x1
    bgt lbl_8006BDF0
lbl_8006BDEC:
    li r5, 0x1
lbl_8006BDF0:
    addis r3, r4, 0x7000
    cmplwi r3, 0x0
    bne lbl_8006BE10
    lwz r3, 0x140(r17)
    subi r3, r3, 0x24c
    cmplwi r3, 0x2
    bgt lbl_8006BE10
    li r5, 0x1
lbl_8006BE10:
    cmpwi r20, 0x0
    beq lbl_8006BE3C
    lwz r3, 0x74(r20)
    rlwinm r3, r3, 0, 18, 18
    cmpwi r3, 0x0
    beq lbl_8006BE3C
    lwz r3, 0xb94(r19)
    rlwinm r3, r3, 0, 30, 30
    cmpwi r3, 0x0
    bne lbl_8006BE3C
    li r5, 0x1
lbl_8006BE3C:
    cmpwi r5, 0x0
    bne lbl_8006C274
    lbz r3, 0x6c(r1)
    cmpwi r3, 0x0
    bne lbl_8006BE8C
    lwz r3, 0x54(r19)
    clrlwi r5, r3, 31
    cmpwi r5, 0x0
    beq lbl_8006BE8C
    lwz r5, 0x60(r19)
    rlwinm r5, r5, 0, 30, 30
    cmpwi r5, 0x0
    beq lbl_8006BEE0
    lwz r5, 0x6c(r19)
    rlwinm r5, r5, 0, 27, 27
    cmpwi r5, 0x0
    bne lbl_8006BEE0
    rlwinm r5, r30, 0, 11, 11
    cmpwi r5, 0x0
    bne lbl_8006BEE0
lbl_8006BE8C:
    lwz r3, 0x54(r19)
    andis. r5, r3, 0x4200
    cmpwi r5, 0x0
    bne lbl_8006BEA8
    andis. r5, r0, 0x1080
    cmpwi r5, 0x0
    beq lbl_8006BEBC
lbl_8006BEA8:
    lwz r5, 0x3864(r19)
    cmpwi r5, 0x0
    beq lbl_8006BEBC
    cmplw r17, r5
    bne lbl_8006BEE0
lbl_8006BEBC:
    cmpwi r20, 0x0
    beq lbl_8006C274
    lwz r6, 0x50(r19)
    addis r5, r4, 0x7000
    cmplwi r5, 0x0
    beq lbl_8006C274
    rlwinm r5, r6, 0, 3, 3
    cmpwi r5, 0x0
    beq lbl_8006C274
lbl_8006BEE0:
    rlwinm r5, r3, 0, 5, 5
    cmpwi r5, 0x0
    bne lbl_8006C23C
    subi r5, r15, 0x2
    cmplwi r5, 0x1
    ble lbl_8006BF0C
    cmpwi r15, 0x1
    beq lbl_8006BF14
    cmpwi r15, 0x0
    beq lbl_8006BF1C
    b lbl_8006BF20
lbl_8006BF0C:
    lis r29, 0x4200
    b lbl_8006BF20
lbl_8006BF14:
    lis r29, 0x4200
    b lbl_8006BF20
lbl_8006BF1C:
    lis r29, 0x4200
lbl_8006BF20:
    rlwinm r3, r3, 0, 24, 24
    or r29, r29, r3
    clrlwi r3, r31, 31
    cmpwi r3, 0x0
    beq lbl_8006BF44
    rlwinm r0, r0, 0, 3, 3
    cmpwi r0, 0x0
    bne lbl_8006BF44
    ori r29, r29, 0x4
lbl_8006BF44:
    addis r0, r4, 0x7000
    cmplwi r0, 0x0
    beq lbl_8006C218
    la r4, lbl_8049EF18
    lfs f0, 0x4c(r4)
    stfs f0, 0xa0c(r19)
    lwz r5, 0x30(r18)
    cmpwi r5, 0x0
    blt lbl_8006BFB8
    lwz r0, 0x50(r19)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_8006BFB0
    lis r4, lbl_803396F0@ha
    addi r4, r4, lbl_803396F0@l
    lfd f1, lbl_8049EF10
    xoris r0, r5, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsub f1, f0, f1
    lfd f0, 0x8(r4)
    fmul f0, f0, f1
    fneg f0, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r4, 0x4c(r1)
    b lbl_8006C074
lbl_8006BFB0:
    neg r4, r5
    b lbl_8006C074
lbl_8006BFB8:
    lwz r0, 0x74(r17)
    rlwinm r0, r0, 0, 1, 1
    cmpwi r0, 0x0
    beq lbl_8006C000
    lis r4, lbl_803396F0@ha
    addi r4, r4, lbl_803396F0@l
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfd f0, 0x10(r4)
    fmul f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    neg r4, r0
    b lbl_8006C074
lbl_8006C000:
    lwz r0, 0x50(r19)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_8006C048
    lis r4, lbl_803396F0@ha
    addi r4, r4, lbl_803396F0@l
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f1
    lfd f0, 0x18(r4)
    fmul f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    neg r4, r0
    b lbl_8006C074
lbl_8006C048:
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfs f0, 0x50(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r0, 0x44(r1)
    neg r4, r0
lbl_8006C074:
    lwz r0, 0x74(r19)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_8006C150
    cmpwi r3, 0x0
    bne lbl_8006C150
    lwz r0, 0x54(r19)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_8006C150
    cmpwi r22, 0x0
    beq lbl_8006C0B8
    cmpwi r22, 0x1
    beq lbl_8006C0EC
    cmpwi r22, 0x2
    beq lbl_8006C120
    b lbl_8006C150
lbl_8006C0B8:
    lfd f1, lbl_8049EF10
    xoris r0, r4, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsub f1, f0, f1
    lis r3, lbl_803396F0@ha
    addi r3, r3, lbl_803396F0@l
    lfd f0, 0x20(r3)
    fmul f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r4, 0x4c(r1)
    b lbl_8006C150
lbl_8006C0EC:
    lfd f1, lbl_8049EF10
    xoris r0, r4, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsub f1, f0, f1
    lis r3, lbl_803396F0@ha
    addi r3, r3, lbl_803396F0@l
    lfd f0, 0x8(r3)
    fdiv f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r4, 0x4c(r1)
    b lbl_8006C150
lbl_8006C120:
    lfd f1, lbl_8049EF10
    xoris r0, r4, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsub f1, f0, f1
    lis r3, lbl_803396F0@ha
    addi r3, r3, lbl_803396F0@l
    lfd f0, 0x28(r3)
    fdiv f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r4, 0x4c(r1)
lbl_8006C150:
    mr r3, r19
    bl fn_8006AE10
    cmpwi r3, 0x0
    beq lbl_8006C23C
    lis r3, 0xbe00
    subi r0, r3, 0x85
    and r29, r29, r0
    oris r28, r28, 0x10
    lwz r0, 0x6c(r19)
    ori r0, r0, 0x2
    stw r0, 0x6c(r19)
    mr r3, r19
    la r15, lbl_8049EF18
    lfs f1, 0x54(r15)
    bl fn_8006AA78
    li r24, 0x6
    li r23, 0x7b9
    li r0, 0x5
    stw r0, 0x34(r18)
    li r3, 0x0
    li r4, 0x64
    lfs f1, 0x4(r15)
    lfs f2, 0x58(r15)
    li r5, 0x6
    bl fn_8017BF58
    mr r3, r17
    mr r4, r19
    li r5, 0x5dc
    bl fn_80094AB4
    cmpwi r20, 0x0
    beq lbl_8006C1DC
    lwz r0, 0x74(r20)
    rlwinm r0, r0, 0, 12, 12
    cmpwi r0, 0x0
    bne lbl_8006C23C
lbl_8006C1DC:
    rlwinm r0, r30, 0, 12, 12
    cmpwi r0, 0x0
    bne lbl_8006C23C
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    la r3, lbl_8049EF18
    lfs f0, 0x5c(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r26, 0x4c(r1)
    b lbl_8006C23C
lbl_8006C218:
    lwz r0, 0x58(r19)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    bne lbl_8006C23C
    lwz r0, 0x1648(r19)
    cmpwi r0, 0x0
    bne lbl_8006C23C
    li r0, 0xa
    stw r0, 0x34(r18)
lbl_8006C23C:
    lis r3, 0x4200
    addi r0, r3, 0x4
    and r0, r29, r0
    cmpwi r0, 0x0
    beq lbl_8006C274
    li r0, 0x1
    stw r0, 0x68(r1)
    lwz r24, 0x50(r18)
    lwz r23, 0x5c(r18)
    cmpwi r20, 0x0
    beq lbl_8006C274
    lwz r0, 0x14(r20)
    oris r0, r0, 0x8
    stw r0, 0x14(r20)
lbl_8006C274:
    cmpwi r29, 0x0
    bne lbl_8006D260
    clrlwi r0, r30, 31
    stw r0, 0x78(r1)
    cmpwi r0, 0x0
    bne lbl_8006C308
    lwz r0, 0x18(r17)
    cmplwi r0, 0x1b
    beq lbl_8006C2A4
    cmplwi r0, 0x1c
    beq lbl_8006C2EC
    b lbl_8006C308
lbl_8006C2A4:
    lwz r0, 0x0(r17)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006C308
    lwz r0, 0x68(r19)
    rlwinm r0, r0, 0, 18, 18
    cmpwi r0, 0x0
    bne lbl_8006C308
    lwz r0, 0x68(r1)
    slwi r0, r0, 2
    add r3, r18, r0
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x3ec
    beq lbl_8006C308
    li r24, 0x3eb
    mr r3, r17
    bl fn_800A6EA8
    b lbl_8006C308
lbl_8006C2EC:
    lwz r0, 0x0(r17)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006C308
    li r24, 0x3e9
    mr r3, r17
    bl fn_800A6EA8
lbl_8006C308:
    lis r29, 0x2400
    ori r14, r14, 0x8
    ori r29, r29, 0x8
    la r3, lbl_8049EF18
    lfs f29, 0x60(r3)
    lwz r0, 0x6c(r17)
    rlwinm r0, r0, 0, 2, 2
    cmpwi r0, 0x0
    beq lbl_8006C334
    lfs f0, 0x64(r3)
    fmuls f29, f29, f0
lbl_8006C334:
    mr r3, r17
    bl fn_8005E4A4
    cmpwi r3, 0x0
    beq lbl_8006C36C
    mr r3, r17
    bl fn_8005E4A4
    lwz r0, 0x9ac(r3)
    lfd f1, lbl_8049EF10
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f1
    fmuls f29, f29, f0
    b lbl_8006C388
lbl_8006C36C:
    lwz r0, 0x9ac(r17)
    lfd f1, lbl_8049EF10
    xoris r0, r0, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fmuls f29, f29, f0
lbl_8006C388:
    mr r3, r17
    mr r4, r19
    fctiwz f0, f29
    stfd f0, 0x48(r1)
    lwz r5, 0x4c(r1)
    bl fn_80094AB4
    lwz r0, 0x34(r18)
    cmpwi r0, 0x0
    blt lbl_8006C3DC
    rlwinm r3, r30, 0, 30, 30
    cmpwi r3, 0x0
    bne lbl_8006C3BC
    stw r0, 0x1644(r17)
lbl_8006C3BC:
    lwz r0, 0x34(r18)
    stw r0, 0x1644(r19)
    cmpwi r3, 0x0
    bne lbl_8006C3D4
    mr r3, r17
    bl fn_8006EAFC
lbl_8006C3D4:
    mr r3, r19
    bl fn_8006EAFC
lbl_8006C3DC:
    rlwinm r0, r28, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006C408
    li r3, 0x0
    li r4, 0x50
    la r5, lbl_8049EF18
    lfs f1, 0x4(r5)
    lfs f2, 0x68(r5)
    li r5, 0x6
    bl fn_8017BF58
    b lbl_8006C45C
lbl_8006C408:
    rlwinm r0, r28, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_8006C434
    li r3, 0x0
    li r4, 0x50
    la r5, lbl_8049EF18
    lfs f1, 0x4(r5)
    lfs f2, 0x6c(r5)
    li r5, 0x6
    bl fn_8017BF58
    b lbl_8006C45C
lbl_8006C434:
    rlwinm r0, r28, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8006C45C
    li r3, 0x0
    li r4, 0x64
    la r5, lbl_8049EF18
    lfs f1, 0x4(r5)
    lfs f2, 0x58(r5)
    li r5, 0x6
    bl fn_8017BF58
lbl_8006C45C:
    lwz r0, 0x0(r17)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006C474
    mr r3, r17
    bl fn_8005E4A4
lbl_8006C474:
    rlwinm r0, r30, 0, 21, 21
    cmpwi r0, 0x0
    beq lbl_8006C488
    li r0, 0x0
    stw r0, 0x9c0(r19)
lbl_8006C488:
    lwz r0, 0x9ac(r17)
    cmpwi r0, 0x1
    ble lbl_8006C644
    lwz r3, 0x6c(r17)
    rlwinm r3, r3, 0, 2, 2
    cmpwi r3, 0x0
    beq lbl_8006C548
    cmplwi r0, 0xb
    bgt lbl_8006C53C
    lis r3, jumptable_8034AE80@ha
    addi r4, r3, jumptable_8034AE80@l
    slwi r3, r0, 2
    lwzx r4, r4, r3
    mtctr r4
    bctr
    la r3, lbl_8049EF18
    lfs f2, 0x70(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x74(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x78(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x7c(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x80(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x84(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x88(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x5c(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x8c(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x5c(r3)
    b lbl_8006C5E8
lbl_8006C53C:
    la r3, lbl_8049EF18
    lfs f2, 0x90(r3)
    b lbl_8006C5E8
lbl_8006C548:
    cmplwi r0, 0xb
    bgt lbl_8006C5E0
    lis r3, jumptable_8034AE50@ha
    addi r4, r3, jumptable_8034AE50@l
    slwi r3, r0, 2
    lwzx r4, r4, r3
    mtctr r4
    bctr
    la r3, lbl_8049EF18
    lfs f2, 0x94(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x70(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x98(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x74(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x9c(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x78(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0xa0(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x7c(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0xa4(r3)
    b lbl_8006C5E8
    la r3, lbl_8049EF18
    lfs f2, 0x80(r3)
    b lbl_8006C5E8
lbl_8006C5E0:
    la r3, lbl_8049EF18
    lfs f2, 0x80(r3)
lbl_8006C5E8:
    lfd f1, lbl_8049EF10
    xoris r3, r26, 0x8000
    stw r3, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r26, 0x4c(r1)
    xoris r3, r25, 0x8000
    stw r3, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r25, 0x44(r1)
    cmpwi r26, 0x1
    bge lbl_8006C638
    li r26, 0x1
lbl_8006C638:
    cmpwi r25, 0x1
    bge lbl_8006C644
    li r25, 0x1
lbl_8006C644:
    cmpwi r24, -0x1
    beq lbl_8006C748
    lwz r3, 0x50(r19)
    clrrwi r3, r3, 31
    cmpwi r3, 0x0
    bne lbl_8006C678
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r3, 0x6c(r3)
    clrlwi r3, r3, 31
    cmpwi r3, 0x0
    beq lbl_8006C748
lbl_8006C678:
    rlwinm r3, r16, 0, 25, 25
    cmpwi r3, 0x0
    bne lbl_8006C68C
    li r3, 0x1
    stb r3, 0x6d(r1)
lbl_8006C68C:
    cmpwi r0, 0x1
    bgt lbl_8006C6A0
    la r3, lbl_8049EF18
    lfs f2, 0xa8(r3)
    b lbl_8006C6A8
lbl_8006C6A0:
    la r3, lbl_8049EF18
    lfs f2, 0xac(r3)
lbl_8006C6A8:
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r26, 0x4c(r1)
    xoris r0, r25, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r25, 0x44(r1)
    cmpwi r26, 0x1
    bge lbl_8006C6F8
    li r26, 0x1
lbl_8006C6F8:
    cmpwi r25, 0x1
    bge lbl_8006C704
    li r25, 0x1
lbl_8006C704:
    lwz r0, 0x20(r18)
    stw r0, 0x8(r1)
    li r0, 0x18
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    li r0, 0x0
    stw r0, 0x14(r1)
    mr r3, r19
    mr r4, r19
    lwz r5, 0x18(r1)
    lwz r6, 0x1c(r1)
    lwz r7, 0x24(r18)
    addi r8, r18, 0x278
    lwz r9, 0x18(r18)
    lwz r10, 0x1c(r18)
    bl fn_8011FE90
lbl_8006C748:
    lwz r0, 0x54(r19)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_8006C794
    lwz r0, 0x50(r19)
    andis. r0, r0, 0x803
    cmpwi r0, 0x0
    beq lbl_8006C794
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f1
    la r3, lbl_8049EF18
    lfs f0, 0x80(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r26, 0x4c(r1)
lbl_8006C794:
    lwz r0, 0x78(r19)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8006C7E0
    lwz r3, 0x18(r19)
    cmplwi r3, 0x1c
    bne lbl_8006C7C4
    srawi r0, r26, 1
    addze r26, r0
    cmpwi r26, 0x1
    bge lbl_8006C7C4
    li r26, 0x1
lbl_8006C7C4:
    cmplwi r3, 0x12
    bne lbl_8006C7E0
    srawi r0, r26, 1
    addze r26, r0
    cmpwi r26, 0x1
    bge lbl_8006C7E0
    li r26, 0x1
lbl_8006C7E0:
    la r3, lbl_8049EF18
    lfs f0, 0x4(r3)
    fcmpo cr0, f31, f0
    bge lbl_8006C894
    clrlwi r0, r31, 31
    cmpwi r0, 0x0
    beq lbl_8006C848
    cmpwi r22, 0x0
    beq lbl_8006C818
    cmpwi r22, 0x1
    beq lbl_8006C824
    cmpwi r22, 0x2
    beq lbl_8006C830
    b lbl_8006C83C
lbl_8006C818:
    li r0, 0x13
    stw r0, 0x9dc(r19)
    b lbl_8006C8B4
lbl_8006C824:
    li r0, 0x17
    stw r0, 0x9dc(r19)
    b lbl_8006C8B4
lbl_8006C830:
    li r0, 0x1c
    stw r0, 0x9dc(r19)
    b lbl_8006C8B4
lbl_8006C83C:
    li r0, 0x17
    stw r0, 0x9dc(r19)
    b lbl_8006C8B4
lbl_8006C848:
    cmpwi r22, 0x0
    beq lbl_8006C864
    cmpwi r22, 0x1
    beq lbl_8006C870
    cmpwi r22, 0x2
    beq lbl_8006C87C
    b lbl_8006C888
lbl_8006C864:
    li r0, 0x10
    stw r0, 0x9dc(r19)
    b lbl_8006C8B4
lbl_8006C870:
    li r0, 0x13
    stw r0, 0x9dc(r19)
    b lbl_8006C8B4
lbl_8006C87C:
    li r0, 0x17
    stw r0, 0x9dc(r19)
    b lbl_8006C8B4
lbl_8006C888:
    li r0, 0x13
    stw r0, 0x9dc(r19)
    b lbl_8006C8B4
lbl_8006C894:
    fctiwz f0, f31
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    stw r0, 0x9dc(r19)
    cmpwi r0, 0x10
    bge lbl_8006C8B4
    li r0, 0x10
    stw r0, 0x9dc(r17)
lbl_8006C8B4:
    clrlwi r0, r31, 31
    cmpwi r0, 0x0
    beq lbl_8006C9D0
    rlwinm r0, r30, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_8006C954
    andis. r0, r29, 0x4200
    cmpwi r0, 0x0
    bne lbl_8006C954
    cmpwi r22, 0x0
    beq lbl_8006C8F4
    cmpwi r22, 0x1
    beq lbl_8006C90C
    cmpwi r22, 0x2
    beq lbl_8006C924
    b lbl_8006C93C
lbl_8006C8F4:
    la r3, lbl_8049EF18
    lfs f0, 0xb0(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xb4(r3)
    stfs f0, 0x110(r19)
    b lbl_8006CA48
lbl_8006C90C:
    la r3, lbl_8049EF18
    lfs f0, 0xb8(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xbc(r3)
    stfs f0, 0x110(r19)
    b lbl_8006CA48
lbl_8006C924:
    la r3, lbl_8049EF18
    lfs f0, 0xc0(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xc4(r3)
    stfs f0, 0x110(r19)
    b lbl_8006CA48
lbl_8006C93C:
    la r3, lbl_8049EF18
    lfs f0, 0xb0(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xb4(r3)
    stfs f0, 0x110(r19)
    b lbl_8006CA48
lbl_8006C954:
    cmpwi r22, 0x0
    beq lbl_8006C970
    cmpwi r22, 0x1
    beq lbl_8006C988
    cmpwi r22, 0x2
    beq lbl_8006C9A0
    b lbl_8006C9B8
lbl_8006C970:
    la r3, lbl_8049EF18
    lfs f0, 0xb0(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xc8(r3)
    stfs f0, 0x110(r19)
    b lbl_8006CA48
lbl_8006C988:
    la r3, lbl_8049EF18
    lfs f0, 0xb8(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xc8(r3)
    stfs f0, 0x110(r19)
    b lbl_8006CA48
lbl_8006C9A0:
    la r3, lbl_8049EF18
    lfs f0, 0xc0(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xc8(r3)
    stfs f0, 0x110(r19)
    b lbl_8006CA48
lbl_8006C9B8:
    la r3, lbl_8049EF18
    lfs f0, 0xb0(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xc8(r3)
    stfs f0, 0x110(r19)
    b lbl_8006CA48
lbl_8006C9D0:
    cmpwi r22, 0x0
    beq lbl_8006C9EC
    cmpwi r22, 0x1
    beq lbl_8006CA04
    cmpwi r22, 0x2
    beq lbl_8006CA1C
    b lbl_8006CA34
lbl_8006C9EC:
    la r3, lbl_8049EF18
    lfs f0, 0xb0(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xb4(r3)
    stfs f0, 0x110(r19)
    b lbl_8006CA48
lbl_8006CA04:
    la r3, lbl_8049EF18
    lfs f0, 0xb8(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xbc(r3)
    stfs f0, 0x110(r19)
    b lbl_8006CA48
lbl_8006CA1C:
    la r3, lbl_8049EF18
    lfs f0, 0xc0(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xc4(r3)
    stfs f0, 0x110(r19)
    b lbl_8006CA48
lbl_8006CA34:
    la r3, lbl_8049EF18
    lfs f0, 0xb0(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xb4(r3)
    stfs f0, 0x110(r19)
lbl_8006CA48:
    la r3, lbl_8049EF18
    lfs f0, 0x4(r3)
    fcmpo cr0, f30, f0
    ble lbl_8006CA64
    lfs f0, 0x10c(r19)
    fmuls f0, f0, f30
    stfs f0, 0x10c(r19)
lbl_8006CA64:
    clrlwi r0, r27, 31
    cmpwi r0, 0x0
    beq lbl_8006CA74
    clrrwi r27, r27, 1
lbl_8006CA74:
    rlwinm r0, r27, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8006CA84
    rlwinm r27, r27, 0, 24, 22
lbl_8006CA84:
    rlwinm r0, r27, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_8006CA94
    rlwinm r27, r27, 0, 23, 21
lbl_8006CA94:
    rlwinm r0, r31, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8006CAA4
    ori r28, r28, 0x8000
lbl_8006CAA4:
    rlwinm r0, r16, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006CAB4
    ori r27, r27, 0x1
lbl_8006CAB4:
    rlwinm r0, r31, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8006CAD0
    lbz r0, 0x6d(r1)
    cmpwi r0, 0x0
    beq lbl_8006CAD0
    ori r28, r28, 0x280
lbl_8006CAD0:
    rlwinm r0, r27, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8006CAE0
    ori r28, r28, 0x800
lbl_8006CAE0:
    rlwinm r0, r30, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_8006CAF0
    ori r27, r27, 0x40
lbl_8006CAF0:
    lwz r0, 0x78(r1)
    cmpwi r0, 0x0
    beq lbl_8006CB0C
    lwz r0, 0x64(r19)
    ori r0, r0, 0x100
    stw r0, 0x64(r19)
    ori r27, r27, 0x100
lbl_8006CB0C:
    rlwinm r0, r31, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_8006CB28
    lwz r0, 0x64(r19)
    ori r0, r0, 0x200
    stw r0, 0x64(r19)
    ori r27, r27, 0x200
lbl_8006CB28:
    lwz r3, 0x50(r19)
    rlwinm r4, r3, 0, 20, 20
    cmpwi r4, 0x0
    bne lbl_8006CB60
    andis. r0, r3, 0x803
    cmpwi r0, 0x0
    beq lbl_8006CB60
    oris r28, r28, 0x20
    ori r28, r28, 0x80
    rlwinm r0, r30, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_8006CE48
    ori r27, r27, 0x80
    b lbl_8006CE48
lbl_8006CB60:
    cmpwi r4, 0x0
    bne lbl_8006CB78
    lwz r4, 0x54(r19)
    rlwinm r0, r4, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_8006CC58
lbl_8006CB78:
    rlwinm r0, r28, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8006CBA0
    subi r0, r21, 0x6
    cmplwi r0, 0x1
    ble lbl_8006CB98
    cmpwi r21, 0x3
    bne lbl_8006CE48
lbl_8006CB98:
    ori r28, r28, 0x80
    b lbl_8006CE48
lbl_8006CBA0:
    rlwinm r28, r28, 0, 12, 10
    cmpwi r21, 0x1
    beq lbl_8006CBE0
    cmpwi r21, 0x2
    beq lbl_8006CC04
    cmpwi r21, 0x3
    beq lbl_8006CC10
    cmpwi r21, 0x4
    beq lbl_8006CC1C
    cmpwi r21, 0x5
    beq lbl_8006CC28
    cmpwi r21, 0x6
    beq lbl_8006CC34
    cmpwi r21, 0x7
    beq lbl_8006CC40
    b lbl_8006CC4C
lbl_8006CBE0:
    rlwinm r0, r3, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8006CBF8
    oris r28, r28, 0x8
    ori r28, r28, 0x880
    b lbl_8006CE48
lbl_8006CBF8:
    oris r28, r28, 0x8
    ori r28, r28, 0x180
    b lbl_8006CE48
lbl_8006CC04:
    oris r28, r28, 0x8
    ori r28, r28, 0x880
    b lbl_8006CE48
lbl_8006CC10:
    oris r28, r28, 0x8
    ori r28, r28, 0x480
    b lbl_8006CE48
lbl_8006CC1C:
    oris r28, r28, 0x8
    ori r28, r28, 0x2080
    b lbl_8006CE48
lbl_8006CC28:
    oris r28, r28, 0x8
    ori r28, r28, 0x880
    b lbl_8006CE48
lbl_8006CC34:
    oris r28, r28, 0x8
    ori r28, r28, 0x4080
    b lbl_8006CE48
lbl_8006CC40:
    oris r28, r28, 0x808
    ori r28, r28, 0x80
    b lbl_8006CE48
lbl_8006CC4C:
    oris r28, r28, 0x8
    ori r28, r28, 0x880
    b lbl_8006CE48
lbl_8006CC58:
    rlwinm r0, r3, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_8006CC7C
    clrrwi r0, r28, 31
    cmpwi r0, 0x0
    bne lbl_8006CC7C
    lbz r0, 0x6d(r1)
    cmpwi r0, 0x0
    beq lbl_8006CD5C
lbl_8006CC7C:
    la r3, lbl_8049EF18
    lfs f0, 0x4(r3)
    stfs f0, 0xf4(r19)
    stfs f0, 0xf8(r19)
    cmplwi r21, 0xc
    bgt lbl_8006CD34
    lis r3, jumptable_8034AE1C@ha
    addi r3, r3, jumptable_8034AE1C@l
    slwi r0, r21, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    oris r28, r28, 0x8
    ori r28, r28, 0x180
    b lbl_8006CE48
    oris r28, r28, 0x8
    ori r28, r28, 0x880
    b lbl_8006CE48
    oris r28, r28, 0x8
    ori r28, r28, 0x480
    b lbl_8006CE48
    oris r28, r28, 0x8
    ori r28, r28, 0x2080
    b lbl_8006CE48
    ori r28, r28, 0x280
    b lbl_8006CE48
    oris r28, r28, 0x8
    ori r28, r28, 0x4080
    b lbl_8006CE48
    oris r28, r28, 0x808
    ori r28, r28, 0x80
    b lbl_8006CE48
    lbz r0, 0x6d(r1)
    cmpwi r0, 0x0
    beq lbl_8006CD14
    oris r28, r28, 0x2000
    ori r28, r28, 0x80
    b lbl_8006CE48
lbl_8006CD14:
    ori r28, r28, 0x880
    b lbl_8006CE48
    lwz r0, 0x78(r1)
    cmpwi r0, 0x0
    beq lbl_8006CD2C
    ori r28, r28, 0x80
lbl_8006CD2C:
    ori r27, r27, 0x8
    b lbl_8006CE48
lbl_8006CD34:
    lbz r0, 0x6d(r1)
    cmpwi r0, 0x0
    beq lbl_8006CD50
    li r0, 0x19
    stw r0, 0x9dc(r19)
    ori r28, r28, 0x80
    b lbl_8006CE48
lbl_8006CD50:
    oris r28, r28, 0x8
    ori r28, r28, 0x880
    b lbl_8006CE48
lbl_8006CD5C:
    la r3, lbl_8049EF18
    lfs f0, 0x4(r3)
    stfs f0, 0xf4(r19)
    stfs f0, 0xf8(r19)
    cmplwi r21, 0xc
    bgt lbl_8006CE48
    lis r3, jumptable_8034ADE8@ha
    addi r3, r3, jumptable_8034ADE8@l
    slwi r0, r21, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    ori r28, r28, 0x180
    b lbl_8006CE48
    oris r28, r28, 0x8
    ori r28, r28, 0x480
    b lbl_8006CE48
    oris r28, r28, 0x8
    ori r28, r28, 0x2080
    b lbl_8006CE48
    ori r28, r28, 0x280
    b lbl_8006CE48
    oris r28, r28, 0x8
    ori r28, r28, 0x4080
    b lbl_8006CE48
    oris r28, r28, 0x808
    ori r28, r28, 0x80
    b lbl_8006CE48
    ori r28, r28, 0x1080
    b lbl_8006CE48
    ori r28, r28, 0x180
    b lbl_8006CE48
    oris r28, r28, 0x2000
    ori r28, r28, 0x80
    b lbl_8006CE48
    rlwinm r0, r28, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_8006CE00
    oris r28, r28, 0x8
    ori r28, r28, 0x180
    b lbl_8006CE48
lbl_8006CE00:
    oris r28, r28, 0x8
    ori r28, r28, 0x880
    b lbl_8006CE48
    lwz r0, 0x50(r19)
    rlwinm r0, r0, 0, 14, 15
    cmpwi r0, 0x0
    beq lbl_8006CE48
    rlwinm r0, r4, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_8006CE48
    oris r28, r28, 0x20
    ori r28, r28, 0x80
    b lbl_8006CE48
    lwz r0, 0x78(r1)
    cmpwi r0, 0x0
    beq lbl_8006CE44
    ori r28, r28, 0x80
lbl_8006CE44:
    ori r27, r27, 0x8
lbl_8006CE48:
    rlwinm r0, r28, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8006CE60
    lis r3, 0xf800
    subi r0, r3, 0x6401
    and r28, r28, r0
lbl_8006CE60:
    rlwinm r0, r27, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006CE70
    ori r28, r28, 0x880
lbl_8006CE70:
    rlwinm r0, r30, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_8006CEBC
    lwz r0, 0x74(r1)
    cmpwi r0, 0x0
    beq lbl_8006CEB4
    ori r27, r27, 0x10
    lwz r0, 0x54(r19)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006CEAC
    lwz r0, 0x60(r19)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006CEBC
lbl_8006CEAC:
    ori r27, r27, 0x20
    b lbl_8006CEBC
lbl_8006CEB4:
    oris r28, r28, 0x8
    ori r28, r28, 0x800
lbl_8006CEBC:
    rlwinm r0, r30, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8006D1D8
    li r15, 0x1
    mr r3, r17
    bl fn_8006B078
    cmpwi r3, 0x0
    beq lbl_8006CEE0
    li r15, 0x0
lbl_8006CEE0:
    lwz r0, 0x74(r19)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8006CEF4
    li r15, 0x0
lbl_8006CEF4:
    lwz r0, 0x78(r1)
    cmpwi r0, 0x0
    bne lbl_8006CF20
    lwz r0, 0x50(r19)
    rlwinm r0, r0, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8006CF20
    rlwinm r0, r30, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_8006CF20
    li r15, 0x0
lbl_8006CF20:
    lwz r0, 0x50(r19)
    rlwinm r3, r0, 0, 20, 20
    cmpwi r3, 0x0
    bne lbl_8006CF4C
    andis. r0, r0, 0x803
    cmpwi r0, 0x0
    beq lbl_8006CF4C
    rlwinm r0, r30, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_8006CF4C
    li r15, 0x0
lbl_8006CF4C:
    lwz r0, 0x54(r17)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_8006CF6C
    lwz r0, 0x50(r17)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8006CF7C
lbl_8006CF6C:
    rlwinm r0, r30, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_8006CF7C
    li r15, 0x0
lbl_8006CF7C:
    cmpwi r3, 0x0
    beq lbl_8006CF94
    rlwinm r0, r16, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8006CF94
    li r15, 0x0
lbl_8006CF94:
    lwz r0, 0x0(r19)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8006CFA8
    li r15, 0x0
lbl_8006CFA8:
    lwz r0, 0x38cc(r19)
    cmpwi r0, 0x0
    ble lbl_8006CFC0
    cmpwi r0, 0x32
    bge lbl_8006CFC0
    li r15, 0x0
lbl_8006CFC0:
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r3, 0xc(r3)
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    blt lbl_8006CFE8
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x1
    bgt lbl_8006CFE8
    li r15, 0x0
lbl_8006CFE8:
    cmpwi r15, 0x0
    beq lbl_8006D1D4
    li r15, 0x0
    lwz r0, 0x6c(r17)
    rlwinm r0, r0, 0, 13, 14
    cmpwi r0, 0x0
    beq lbl_8006D058
    lwz r0, 0x10(r17)
    slwi r0, r0, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r4, 0xc(r3)
    b lbl_8006D050
lbl_8006D020:
    lwz r3, 0x0(r4)
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8006D04C
    lwz r0, 0x6c(r3)
    rlwinm r0, r0, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_8006D04C
    mr r15, r3
    b lbl_8006D058
lbl_8006D04C:
    lwz r4, 0xc(r4)
lbl_8006D050:
    cmpwi r4, 0x0
    bne lbl_8006D020
lbl_8006D058:
    cmpwi r15, 0x0
    bne lbl_8006D064
    mr r15, r17
lbl_8006D064:
    cmpwi r20, 0x0
    bne lbl_8006D0B8
    lwz r3, 0x44(r18)
    cmpwi r3, 0x0
    blt lbl_8006D084
    addi r0, r3, 0xf0
    stw r0, 0x1600(r15)
    b lbl_8006D08C
lbl_8006D084:
    li r0, -0x1
    stw r0, 0x1600(r15)
lbl_8006D08C:
    lwz r3, 0x48(r18)
    cmpwi r3, 0x0
    blt lbl_8006D0A4
    addi r0, r3, 0xf0
    stw r0, 0x1604(r15)
    b lbl_8006D0AC
lbl_8006D0A4:
    li r0, -0x1
    stw r0, 0x1604(r15)
lbl_8006D0AC:
    mr r3, r18
    bl fn_8007600C
    b lbl_8006D0F8
lbl_8006D0B8:
    lwz r3, 0x300(r20)
    cmpwi r3, 0x0
    blt lbl_8006D0D0
    addi r0, r3, 0xf0
    stw r0, 0x1600(r15)
    b lbl_8006D0D8
lbl_8006D0D0:
    li r0, -0x1
    stw r0, 0x1600(r15)
lbl_8006D0D8:
    lwz r3, 0x304(r20)
    cmpwi r3, 0x0
    blt lbl_8006D0F0
    addi r0, r3, 0xf0
    stw r0, 0x1604(r15)
    b lbl_8006D0F8
lbl_8006D0F0:
    li r0, -0x1
    stw r0, 0x1604(r15)
lbl_8006D0F8:
    li r0, 0xfff
    stw r0, 0x1610(r15)
    lis r3, 0x1
    addi r0, r3, -0x8000
    stw r0, 0x15fc(r15)
    lwz r0, 0x68(r15)
    oris r0, r0, 0x800
    stw r0, 0x68(r15)
    lwz r0, 0x68(r19)
    oris r3, r0, 0x800
    stw r3, 0x68(r19)
    lwz r0, 0x78(r1)
    cmpwi r0, 0x0
    beq lbl_8006D138
    ori r0, r3, 0x200
    stw r0, 0x68(r19)
lbl_8006D138:
    lwz r0, 0x58(r19)
    oris r0, r0, 0x4000
    ori r0, r0, 0x8
    stw r0, 0x58(r19)
    oris r28, r28, 0x100
    li r0, -0x1
    stw r0, 0x150(r19)
    stw r19, 0x3868(r15)
    stw r15, 0x386c(r19)
    lwz r0, 0x0(r15)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006D194
    lwz r0, 0x70(r15)
    rlwinm r0, r0, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_8006D194
    mr r3, r15
    bl fn_8005E4A4
    cmpwi r3, 0x0
    beq lbl_8006D194
    stw r19, 0x3868(r3)
    stw r3, 0x386c(r19)
lbl_8006D194:
    lwz r0, 0x0(r15)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8006D1D8
    li r0, 0x0
    stw r0, 0x64(r1)
lbl_8006D1AC:
    mr r3, r15
    lwz r4, 0x64(r1)
    bl fn_8005E4D4
    cmpwi r3, 0x0
    beq lbl_8006D1D8
    stw r19, 0x3868(r3)
    lwz r3, 0x64(r1)
    addi r3, r3, 0x1
    stw r3, 0x64(r1)
    b lbl_8006D1AC
lbl_8006D1D4:
    ori r14, r14, 0x20
lbl_8006D1D8:
    rlwinm r0, r28, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8006D1F0
    lis r3, 0xf800
    subi r0, r3, 0x6401
    and r28, r28, r0
lbl_8006D1F0:
    rlwinm r0, r30, 0, 14, 14
    cmpwi r0, 0x0
    beq lbl_8006D24C
    lwz r4, 0x78(r19)
    lis r3, 0xf801
    subi r0, r3, 0x5
    and r0, r4, r0
    stw r0, 0x78(r19)
    li r3, 0x0
    li r4, 0x2
    bl fn_8005CF00
    cmpwi r3, 0x0
    beq lbl_8006D234
    lwz r0, 0x78(r19)
    oris r0, r0, 0x1
    stw r0, 0x78(r19)
    b lbl_8006D240
lbl_8006D234:
    lwz r0, 0x78(r19)
    oris r0, r0, 0x2
    stw r0, 0x78(r19)
lbl_8006D240:
    lis r3, 0x1
    addi r0, r3, 0x2c00
    stw r0, 0xa04(r19)
lbl_8006D24C:
    lwz r3, 0x3774(r17)
    li r4, 0x3
    li r5, 0x1
    bl fn_8009692C
    b lbl_8006D9E0
lbl_8006D260:
    ori r14, r14, 0x20
    ori r29, r29, 0x20
    lwz r3, 0x3774(r17)
    li r4, 0x1
    li r5, 0x1
    bl fn_8009692C
    la r3, lbl_8049EF18
    lfs f0, 0xcc(r3)
    mr r3, r17
    mr r4, r19
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r5, 0x4c(r1)
    bl fn_80094AB4
    lwz r0, 0x34(r18)
    cmpwi r0, 0x0
    blt lbl_8006D2D4
    rlwinm r3, r30, 0, 30, 30
    cmpwi r3, 0x0
    bne lbl_8006D2B4
    stw r0, 0x1644(r17)
lbl_8006D2B4:
    lwz r0, 0x34(r18)
    stw r0, 0x1644(r19)
    cmpwi r3, 0x0
    bne lbl_8006D2CC
    mr r3, r17
    bl fn_8006EAFC
lbl_8006D2CC:
    mr r3, r19
    bl fn_8006EAFC
lbl_8006D2D4:
    cmpwi r22, 0x0
    beq lbl_8006D2F0
    cmpwi r22, 0x1
    beq lbl_8006D310
    cmpwi r22, 0x2
    beq lbl_8006D330
    b lbl_8006D350
lbl_8006D2F0:
    li r3, 0x0
    li r4, 0x3c
    la r5, lbl_8049EF18
    lfs f1, 0x4(r5)
    lfs f2, 0xd0(r5)
    li r5, 0x6
    bl fn_8017BF58
    b lbl_8006D36C
lbl_8006D310:
    li r3, 0x0
    li r4, 0x3c
    la r5, lbl_8049EF18
    lfs f1, 0x4(r5)
    lfs f2, 0xd4(r5)
    li r5, 0x6
    bl fn_8017BF58
    b lbl_8006D36C
lbl_8006D330:
    li r3, 0x0
    li r4, 0x3c
    la r5, lbl_8049EF18
    lfs f1, 0x4(r5)
    lfs f2, 0xd8(r5)
    li r5, 0x6
    bl fn_8017BF58
    b lbl_8006D36C
lbl_8006D350:
    li r3, 0x0
    li r4, 0x3c
    la r5, lbl_8049EF18
    lfs f1, 0x4(r5)
    lfs f2, 0xd0(r5)
    li r5, 0x6
    bl fn_8017BF58
lbl_8006D36C:
    rlwinm r0, r30, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_8006D388
    lwz r3, 0x60(r1)
    subi r0, r3, 0x1
    cmplwi r0, 0x6
    bgt lbl_8006D3F4
lbl_8006D388:
    cmpwi r22, 0x0
    beq lbl_8006D3A4
    cmpwi r22, 0x1
    beq lbl_8006D3B0
    cmpwi r22, 0x2
    beq lbl_8006D3BC
    b lbl_8006D3C8
lbl_8006D3A4:
    li r0, 0x18
    divw r26, r26, r0
    b lbl_8006D3D0
lbl_8006D3B0:
    srawi r0, r26, 4
    addze r26, r0
    b lbl_8006D3D0
lbl_8006D3BC:
    li r0, 0xc
    divw r26, r26, r0
    b lbl_8006D3D0
lbl_8006D3C8:
    li r0, 0x18
    divw r26, r26, r0
lbl_8006D3D0:
    lwz r0, 0x18(r19)
    cmplwi r0, 0x8
    bne lbl_8006D474
    lwz r0, 0x0(r19)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006D474
    li r26, 0x0
    b lbl_8006D474
lbl_8006D3F4:
    lwz r0, 0x74(r17)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_8006D470
    cmpwi r22, 0x0
    beq lbl_8006D420
    cmpwi r22, 0x1
    beq lbl_8006D42C
    cmpwi r22, 0x2
    beq lbl_8006D438
    b lbl_8006D444
lbl_8006D420:
    li r0, 0x18
    divw r26, r26, r0
    b lbl_8006D44C
lbl_8006D42C:
    srawi r0, r26, 4
    addze r26, r0
    b lbl_8006D44C
lbl_8006D438:
    li r0, 0xc
    divw r26, r26, r0
    b lbl_8006D44C
lbl_8006D444:
    li r0, 0x18
    divw r26, r26, r0
lbl_8006D44C:
    lwz r0, 0x18(r19)
    cmplwi r0, 0x8
    bne lbl_8006D474
    lwz r0, 0x0(r19)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006D474
    li r26, 0x0
    b lbl_8006D474
lbl_8006D470:
    li r26, 0x0
lbl_8006D474:
    lwz r0, 0x50(r19)
    andis. r3, r0, 0x9000
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    bne lbl_8006D48C
    li r26, 0x0
lbl_8006D48C:
    lwz r0, 0x18(r17)
    cmplwi r0, 0x10
    bne lbl_8006D4D4
    lwz r0, 0x0(r17)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006D4D4
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    la r3, lbl_8049EF18
    lfs f0, 0x50(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r26, 0x4c(r1)
lbl_8006D4D4:
    srawi r0, r25, 2
    addze r25, r0
    la r3, lbl_8049EF18
    lfs f0, 0x4(r3)
    fcmpo cr0, f31, f0
    bge lbl_8006D5C8
    rlwinm r0, r29, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8006D560
    cmpwi r22, 0x0
    beq lbl_8006D514
    cmpwi r22, 0x1
    beq lbl_8006D520
    cmpwi r22, 0x2
    beq lbl_8006D52C
    b lbl_8006D538
lbl_8006D514:
    li r0, 0x12
    stw r0, 0x9d0(r19)
    b lbl_8006D540
lbl_8006D520:
    li r0, 0x16
    stw r0, 0x9d0(r19)
    b lbl_8006D540
lbl_8006D52C:
    li r0, 0x1b
    stw r0, 0x9d0(r19)
    b lbl_8006D540
lbl_8006D538:
    li r0, 0x16
    stw r0, 0x9d0(r19)
lbl_8006D540:
    lwz r3, 0x9d0(r19)
    li r4, 0x0
    li r5, 0x10
    li r6, 0x78
    bl fn_801728DC
    subi r0, r3, 0x10
    stw r0, 0x9d0(r19)
    b lbl_8006D5F0
lbl_8006D560:
    cmpwi r22, 0x0
    beq lbl_8006D57C
    cmpwi r22, 0x1
    beq lbl_8006D588
    cmpwi r22, 0x2
    beq lbl_8006D594
    b lbl_8006D5A0
lbl_8006D57C:
    li r0, 0xf
    stw r0, 0x9d0(r19)
    b lbl_8006D5A8
lbl_8006D588:
    li r0, 0x13
    stw r0, 0x9d0(r19)
    b lbl_8006D5A8
lbl_8006D594:
    li r0, 0x18
    stw r0, 0x9d0(r19)
    b lbl_8006D5A8
lbl_8006D5A0:
    li r0, 0x13
    stw r0, 0x9d0(r19)
lbl_8006D5A8:
    lwz r3, 0x9d0(r19)
    li r4, 0x0
    li r5, 0x6
    li r6, 0x18
    bl fn_801728DC
    subi r0, r3, 0x2
    stw r0, 0x9d0(r19)
    b lbl_8006D5F0
lbl_8006D5C8:
    fctiwz f0, f31
    stfd f0, 0x48(r1)
    lwz r3, 0x4c(r1)
    stw r3, 0x9d0(r19)
    li r4, 0x0
    li r5, 0x6
    li r6, 0x18
    bl fn_801728DC
    subi r0, r3, 0x2
    stw r0, 0x9d0(r19)
lbl_8006D5F0:
    rlwinm r0, r29, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8006D678
    cmpwi r22, 0x0
    beq lbl_8006D618
    cmpwi r22, 0x1
    beq lbl_8006D630
    cmpwi r22, 0x2
    beq lbl_8006D648
    b lbl_8006D660
lbl_8006D618:
    la r3, lbl_8049EF18
    lfs f0, 0x90(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xc8(r3)
    stfs f0, 0x110(r19)
    b lbl_8006D6F0
lbl_8006D630:
    la r3, lbl_8049EF18
    lfs f0, 0x90(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xc8(r3)
    stfs f0, 0x110(r19)
    b lbl_8006D6F0
lbl_8006D648:
    la r3, lbl_8049EF18
    lfs f0, 0x90(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xc8(r3)
    stfs f0, 0x110(r19)
    b lbl_8006D6F0
lbl_8006D660:
    la r3, lbl_8049EF18
    lfs f0, 0x90(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xc8(r3)
    stfs f0, 0x110(r19)
    b lbl_8006D6F0
lbl_8006D678:
    cmpwi r22, 0x0
    beq lbl_8006D694
    cmpwi r22, 0x1
    beq lbl_8006D6AC
    cmpwi r22, 0x2
    beq lbl_8006D6C4
    b lbl_8006D6DC
lbl_8006D694:
    la r3, lbl_8049EF18
    lfs f0, 0xb0(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xb4(r3)
    stfs f0, 0x110(r19)
    b lbl_8006D6F0
lbl_8006D6AC:
    la r3, lbl_8049EF18
    lfs f0, 0xb8(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xbc(r3)
    stfs f0, 0x110(r19)
    b lbl_8006D6F0
lbl_8006D6C4:
    la r3, lbl_8049EF18
    lfs f0, 0xc0(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xc4(r3)
    stfs f0, 0x110(r19)
    b lbl_8006D6F0
lbl_8006D6DC:
    la r3, lbl_8049EF18
    lfs f0, 0xb8(r3)
    stfs f0, 0x10c(r19)
    lfs f0, 0xbc(r3)
    stfs f0, 0x110(r19)
lbl_8006D6F0:
    lwz r3, 0x50(r19)
    clrrwi r0, r3, 31
    cmpwi r0, 0x0
    bne lbl_8006D720
    rlwinm r0, r3, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_8006D720
    la r3, lbl_8049EF18
    lfs f0, 0xdc(r3)
    stfs f0, 0xf4(r19)
    lfs f0, 0xe0(r3)
    stfs f0, 0xf8(r19)
lbl_8006D720:
    lwz r3, 0xc(r19)
    cmplwi r3, 0x3
    bgt lbl_8006D7E4
    lwz r0, 0x0(r19)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    bne lbl_8006D7E4
    lwz r0, 0x0(r17)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8006D7E4
    lwz r4, 0x74(r19)
    rlwinm r0, r4, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_8006D76C
    li r4, 0x0
    li r5, 0x8
    bl fn_80175E48
    b lbl_8006D7E4
lbl_8006D76C:
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8006D7D8
    clrlwi r0, r31, 31
    cmpwi r0, 0x0
    bne lbl_8006D7C8
    lwz r0, 0x54(r19)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_8006D7C8
    lwz r0, 0x68(r19)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8006D7C8
    rlwinm r0, r28, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_8006D7C8
    lwz r4, 0x4c(r19)
    lwz r0, 0x48(r19)
    srawi r0, r0, 1
    addze r0, r0
    cmpw r4, r0
    bgt lbl_8006D7E4
lbl_8006D7C8:
    li r4, 0x0
    li r5, 0x8
    bl fn_80175E48
    b lbl_8006D7E4
lbl_8006D7D8:
    li r4, 0x0
    li r5, 0x8
    bl fn_80175E48
lbl_8006D7E4:
    clrlwi r0, r27, 31
    cmpwi r0, 0x0
    beq lbl_8006D7F4
    clrrwi r27, r27, 1
lbl_8006D7F4:
    rlwinm r0, r27, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8006D804
    rlwinm r27, r27, 0, 24, 22
lbl_8006D804:
    rlwinm r0, r31, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8006D814
    ori r28, r28, 0x8000
lbl_8006D814:
    rlwinm r0, r16, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006D824
    ori r27, r27, 0x1
lbl_8006D824:
    clrlwi r0, r30, 31
    cmpwi r0, 0x0
    beq lbl_8006D834
    ori r27, r27, 0x100
lbl_8006D834:
    lwz r4, 0x50(r19)
    clrrwi r0, r4, 31
    cmpwi r0, 0x0
    bne lbl_8006D8A4
    clrlwi r0, r31, 31
    cmpwi r0, 0x0
    beq lbl_8006D8A4
    subi r0, r21, 0x1
    cmplwi r0, 0x1
    bgt lbl_8006D868
    oris r28, r28, 0x8
    ori r28, r28, 0x800
    b lbl_8006D8A4
lbl_8006D868:
    rlwinm r0, r4, 0, 20, 20
    cmpwi r0, 0x0
    bne lbl_8006D884
    lwz r0, 0x54(r19)
    rlwinm r0, r0, 0, 13, 13
    cmpwi r0, 0x0
    beq lbl_8006D8A4
lbl_8006D884:
    cmpwi r21, 0x6
    bne lbl_8006D898
    oris r28, r28, 0x8
    ori r28, r28, 0x4000
    b lbl_8006D8A4
lbl_8006D898:
    cmpwi r21, 0x7
    bne lbl_8006D8A4
    oris r28, r28, 0x808
lbl_8006D8A4:
    rlwinm r0, r28, 0, 11, 11
    cmpwi r0, 0x0
    beq lbl_8006D8BC
    lis r3, 0xf800
    subi r0, r3, 0x6401
    and r28, r28, r0
lbl_8006D8BC:
    andis. r3, r4, 0x9000
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    bne lbl_8006D9E0
    lwz r0, 0x17c(r19)
    rlwinm r0, r0, 0, 29, 29
    cmpwi r0, 0x0
    beq lbl_8006D9E0
    li r3, 0x1
    lwz r0, 0x54(r17)
    rlwinm r0, r0, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_8006D900
    lwz r0, 0x50(r17)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8006D904
lbl_8006D900:
    li r3, 0x0
lbl_8006D904:
    cmpwi r20, 0x0
    beq lbl_8006D910
    li r3, 0x0
lbl_8006D910:
    cmpwi r3, 0x0
    beq lbl_8006D9E0
    stw r17, 0x3868(r19)
    stw r19, 0x386c(r17)
    lwz r0, 0x68(r17)
    oris r3, r0, 0x800
    stw r3, 0x68(r17)
    lwz r0, 0x17c(r19)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006D954
    lwz r0, 0x0(r17)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8006D954
    ori r0, r3, 0x200
    stw r0, 0x68(r17)
lbl_8006D954:
    lwz r0, 0x68(r19)
    oris r0, r0, 0x800
    stw r0, 0x68(r19)
    lwz r0, 0x58(r17)
    oris r0, r0, 0x4000
    ori r0, r0, 0x8
    stw r0, 0x58(r17)
    lwz r0, 0x0(r17)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006D9A8
    lwz r0, 0x70(r17)
    rlwinm r0, r0, 0, 17, 17
    cmpwi r0, 0x0
    beq lbl_8006D9A8
    mr r3, r17
    bl fn_8005E4A4
    cmpwi r3, 0x0
    beq lbl_8006D9A8
    stw r19, 0x3868(r3)
    stw r3, 0x386c(r19)
lbl_8006D9A8:
    lwz r0, 0x0(r17)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beq lbl_8006D9DC
    li r15, 0x0
lbl_8006D9BC:
    mr r3, r17
    mr r4, r15
    bl fn_8005E4D4
    cmpwi r3, 0x0
    beq lbl_8006D9DC
    stw r19, 0x3868(r3)
    addi r15, r15, 0x1
    b lbl_8006D9BC
lbl_8006D9DC:
    li r26, 0x0
lbl_8006D9E0:
    cmpwi r25, 0x0
    bge lbl_8006D9EC
    li r25, 0x0
lbl_8006D9EC:
    lwz r0, 0x0(r19)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_8006DBE0
    lwz r0, 0x70(r19)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_8006DA20
    mr r3, r19
    bl fn_8005E4A4
    neg r4, r25
    bl fn_8006A858
    b lbl_8006DBD4
lbl_8006DA20:
    lwz r0, 0x0(r17)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8006DAE4
    lwz r0, 0xc(r19)
    cmplwi r0, 0x3
    bgt lbl_8006DAE4
    lwz r3, 0xc(r17)
    bl fn_8008D030
    bl fn_8008CFD8
    cmpwi r3, 0x2
    bne lbl_8006DAE4
    lwz r0, 0x38c0(r17)
    cmpwi r0, 0x0
    beq lbl_8006DAC8
    mr r3, r19
    la r15, lbl_8049EF18
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f1
    lfs f0, 0x44(r15)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    neg r4, r0
    bl fn_8006A020
    mr r3, r17
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfs f0, 0x44(r15)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r4, 0x44(r1)
    bl fn_800A6D10
    b lbl_8006DBD4
lbl_8006DAC8:
    mr r3, r19
    neg r4, r26
    bl fn_8006A020
    mr r3, r17
    mr r4, r26
    bl fn_800A6D10
    b lbl_8006DBD4
lbl_8006DAE4:
    lwz r0, 0x38c0(r17)
    cmpwi r0, 0x0
    beq lbl_8006DB6C
    mr r3, r19
    la r15, lbl_8049EF18
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f1
    lfs f0, 0xe4(r15)
    fmuls f1, f0, f1
    lfs f0, 0x44(r15)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    neg r4, r0
    bl fn_8006A020
    mr r3, r17
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfs f0, 0xe4(r15)
    fmuls f1, f0, f1
    lfs f0, 0x44(r15)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r4, 0x44(r1)
    bl fn_800A6D10
    b lbl_8006DBD4
lbl_8006DB6C:
    mr r3, r19
    la r15, lbl_8049EF18
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f1
    lfs f0, 0xe4(r15)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r0, 0x4c(r1)
    neg r4, r0
    bl fn_8006A020
    mr r3, r17
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfs f0, 0xe4(r15)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r4, 0x44(r1)
    bl fn_800A6D10
lbl_8006DBD4:
    lwz r0, 0x9b4(r17)
    add r0, r0, r26
    stw r0, 0x9b4(r17)
lbl_8006DBE0:
    lwz r0, 0x0(r19)
    rlwinm r0, r0, 0, 19, 19
    cmpwi r0, 0x0
    bne lbl_8006DFA8
    li r15, 0x1
    rlwinm r0, r16, 0, 23, 23
    cmpwi r0, 0x0
    beq lbl_8006DC04
    li r15, 0x0
lbl_8006DC04:
    clrlwi r0, r30, 31
    cmpwi r0, 0x0
    beq lbl_8006DC14
    li r15, 0x0
lbl_8006DC14:
    lwz r0, 0x0(r17)
    rlwinm r0, r0, 0, 22, 23
    cmpwi r0, 0x0
    beq lbl_8006DC28
    li r15, 0x0
lbl_8006DC28:
    mr r3, r17
    bl fn_8005E4A4
    cmpwi r3, 0x0
    beq lbl_8006DC4C
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 12, 12
    cmpwi r0, 0x0
    beq lbl_8006DC4C
    li r15, 0x0
lbl_8006DC4C:
    cmpwi r15, 0x0
    beq lbl_8006DD54
    mr r3, r17
    bl fn_8006AFA0
    la r15, lbl_8049EF18
    lfs f0, 0x5c(r15)
    fcmpo cr0, f1, f0
    bge lbl_8006DCB0
    mr r3, r17
    bl fn_8006AFA0
    lfs f0, 0xac(r15)
    fsubs f0, f0, f1
    lfs f3, 0x7c(r15)
    fadds f2, f3, f0
    lfd f1, lbl_8049EF10
    xoris r0, r25, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f1
    fmuls f0, f3, f0
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r4, 0x4c(r1)
    b lbl_8006DCD8
lbl_8006DCB0:
    lfd f1, lbl_8049EF10
    xoris r0, r25, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfs f0, 0x7c(r15)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r4, 0x44(r1)
lbl_8006DCD8:
    lwz r0, 0x68(r17)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8006DD14
    la r3, lbl_8049EF18
    lfd f1, lbl_8049EF10
    xoris r0, r4, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f1
    lfs f0, 0x14(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x50(r1)
    lwz r4, 0x54(r1)
lbl_8006DD14:
    rlwinm r0, r16, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006DD4C
    la r3, lbl_8049EF18
    lfd f1, lbl_8049EF10
    xoris r0, r4, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfs f0, 0x7c(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r4, 0x5c(r1)
lbl_8006DD4C:
    mr r3, r17
    bl fn_8006A858
lbl_8006DD54:
    lwz r0, 0x0(r19)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    bne lbl_8006DFA8
    lwz r0, 0x18(r19)
    cmplwi r0, 0x27
    bne lbl_8006DD84
    lwz r0, 0x74(r19)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    beq lbl_8006DD84
    neg r25, r25
lbl_8006DD84:
    rlwinm r0, r30, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8006DEA4
    lwz r0, 0x68(r1)
    cmpwi r0, 0x1
    beq lbl_8006DE40
    lwz r0, 0x18(r17)
    cmplwi r0, 0xe
    beq lbl_8006DDB0
    cmplwi r0, 0x19
    bne lbl_8006DE04
lbl_8006DDB0:
    lwz r0, 0x0(r17)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006DE04
    mr r3, r19
    la r4, lbl_8049EF18
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f1
    lfs f0, 0xe8(r4)
    fmuls f1, f0, f1
    lfs f0, 0x14(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    neg r4, r0
    bl fn_8006A858
    b lbl_8006DFA8
lbl_8006DE04:
    mr r3, r19
    la r4, lbl_8049EF18
    lfd f1, lbl_8049EF10
    xoris r0, r26, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfs f0, 0xe8(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    neg r4, r0
    bl fn_8006A858
    b lbl_8006DFA8
lbl_8006DE40:
    lwz r0, 0x18(r17)
    cmplwi r0, 0x5
    beq lbl_8006DE54
    cmplwi r0, 0xe
    bne lbl_8006DFA8
lbl_8006DE54:
    lwz r0, 0x0(r17)
    clrrwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006DFA8
    mr r3, r19
    la r4, lbl_8049EF18
    lfd f1, lbl_8049EF10
    lwz r0, 0x70(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f1
    lfs f0, 0xe8(r4)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r0, 0x5c(r1)
    neg r4, r0
    bl fn_8006A858
    b lbl_8006DFA8
lbl_8006DEA4:
    mr r3, r19
    bl fn_8006AFA0
    la r15, lbl_8049EF18
    lfs f0, 0x5c(r15)
    fcmpo cr0, f1, f0
    bge lbl_8006DF04
    mr r3, r17
    bl fn_8006AFA0
    lfs f0, 0xac(r15)
    fsubs f1, f0, f1
    lfs f0, 0x7c(r15)
    fadds f2, f0, f1
    lfd f1, lbl_8049EF10
    xoris r0, r25, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfs f0, 0x14(r15)
    fmuls f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x58(r1)
    lwz r4, 0x5c(r1)
    b lbl_8006DF2C
lbl_8006DF04:
    lfd f1, lbl_8049EF10
    xoris r0, r25, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f1
    lfs f0, 0x14(r15)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x50(r1)
    lwz r4, 0x54(r1)
lbl_8006DF2C:
    lwz r0, 0x68(r19)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8006DF68
    la r3, lbl_8049EF18
    lfd f1, lbl_8049EF10
    xoris r0, r4, 0x8000
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f1, f0, f1
    lfs f0, 0x14(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x48(r1)
    lwz r4, 0x4c(r1)
lbl_8006DF68:
    rlwinm r0, r16, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006DFA0
    la r3, lbl_8049EF18
    lfd f1, lbl_8049EF10
    xoris r0, r4, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f0, f1
    lfs f0, 0x7c(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r4, 0x44(r1)
lbl_8006DFA0:
    mr r3, r19
    bl fn_8006A858
lbl_8006DFA8:
    stw r19, 0x3860(r17)
    stw r14, 0x54(r17)
    cmpwi r20, 0x0
    bne lbl_8006DFCC
    rlwinm r0, r30, 0, 28, 28
    cmpwi r0, 0x0
    bne lbl_8006DFCC
    li r0, 0x0
    stw r0, 0x3864(r17)
lbl_8006DFCC:
    stw r17, 0x3864(r19)
    lwz r0, 0x140(r17)
    stw r0, 0x9c4(r19)
    stw r28, 0x60(r19)
    stw r27, 0x64(r19)
    stw r29, 0x54(r19)
    lwz r3, 0xc(r17)
    cmplwi r3, 0x3
    bgt lbl_8006E04C
    lwz r4, 0x0(r17)
    rlwinm r0, r4, 0, 25, 25
    cmpwi r0, 0x0
    bne lbl_8006E04C
    rlwinm r0, r4, 0, 4, 4
    cmpwi r0, 0x0
    bne lbl_8006E04C
    lwz r0, 0x34(r18)
    cmpwi r0, 0x0
    blt lbl_8006E028
    li r4, 0x0
    li r5, 0x10
    bl fn_80175E48
    b lbl_8006E04C
lbl_8006E028:
    lwz r0, 0x18(r18)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006E04C
    cmpwi r21, 0x2
    beq lbl_8006E04C
    li r4, 0x0
    li r5, 0x10
    bl fn_80175E48
lbl_8006E04C:
    lwz r0, 0x6c(r17)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_8006E0B4
    cmpwi r23, 0x7a8
    beq lbl_8006E070
    cmpwi r23, 0x7ac
    beq lbl_8006E094
    b lbl_8006E0B4
lbl_8006E070:
    cmpwi r22, 0x1
    beq lbl_8006E084
    cmpwi r22, 0x2
    beq lbl_8006E08C
    b lbl_8006E0B4
lbl_8006E084:
    li r23, 0x7a9
    b lbl_8006E0B4
lbl_8006E08C:
    li r23, 0x7aa
    b lbl_8006E0B4
lbl_8006E094:
    cmpwi r22, 0x1
    beq lbl_8006E0A8
    cmpwi r22, 0x2
    beq lbl_8006E0B0
    b lbl_8006E0B4
lbl_8006E0A8:
    li r23, 0x7ad
    b lbl_8006E0B4
lbl_8006E0B0:
    li r23, 0x7ae
lbl_8006E0B4:
    lwz r0, 0x6c(r19)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    bne lbl_8006E1D0
    cmpwi r24, 0x5
    bne lbl_8006E120
    lwz r0, 0x74(r19)
    rlwinm r0, r0, 0, 25, 25
    cmpwi r0, 0x0
    beq lbl_8006E120
    lwz r0, 0x50(r19)
    andis. r3, r0, 0x9000
    addis r0, r3, 0x7000
    cmplwi r0, 0x0
    beq lbl_8006E120
    clrlwi r0, r31, 31
    cmpwi r0, 0x0
    bne lbl_8006E120
    rlwinm r0, r28, 0, 5, 5
    cmpwi r0, 0x0
    bne lbl_8006E120
    lwz r3, 0x4c(r19)
    lwz r0, 0x48(r19)
    srawi r0, r0, 1
    addze r0, r0
    cmpw r3, r0
    bgt lbl_8006E15C
lbl_8006E120:
    lwz r0, 0x20(r18)
    stw r0, 0x8(r1)
    stw r24, 0xc(r1)
    stw r23, 0x10(r1)
    li r0, 0x0
    stw r0, 0x14(r1)
    mr r3, r17
    mr r4, r19
    lwz r5, 0x18(r1)
    lwz r6, 0x1c(r1)
    lwz r7, 0x24(r18)
    addi r8, r18, 0x278
    lwz r9, 0x18(r18)
    lwz r10, 0x1c(r18)
    bl fn_8011FE90
lbl_8006E15C:
    subi r0, r24, 0x5
    cmplwi r0, 0x1
    bgt lbl_8006E1D0
    rlwinm r0, r30, 0, 29, 29
    cmpwi r0, 0x0
    bne lbl_8006E1D0
    lwz r0, 0x74(r19)
    rlwinm r0, r0, 0, 26, 26
    cmpwi r0, 0x0
    beq lbl_8006E1D0
    cmpwi r24, 0x6
    beq lbl_8006E1D0
    lwz r0, 0x20(r18)
    stw r0, 0x8(r1)
    li r0, 0x3e9
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    li r0, 0x0
    stw r0, 0x14(r1)
    mr r3, r19
    mr r4, r19
    lwz r5, 0x18(r1)
    lwz r6, 0x1c(r1)
    lwz r7, 0x24(r18)
    addi r8, r18, 0x278
    lwz r9, 0x18(r18)
    lwz r10, 0x1c(r18)
    bl fn_8011FE90
lbl_8006E1D0:
    lwz r0, 0x34(r18)
    cmpwi r0, 0x0
    blt lbl_8006E230
    lwz r0, 0x54(r19)
    rlwinm r0, r0, 0, 6, 6
    cmpwi r0, 0x0
    bne lbl_8006E230
    lwz r0, 0x20(r18)
    stw r0, 0x8(r1)
    li r0, 0xd
    stw r0, 0xc(r1)
    li r0, -0x1
    stw r0, 0x10(r1)
    li r0, 0x0
    stw r0, 0x14(r1)
    mr r3, r17
    mr r4, r19
    lwz r5, 0x18(r1)
    lwz r6, 0x1c(r1)
    lwz r7, 0x24(r18)
    addi r8, r18, 0x278
    lwz r9, 0x18(r18)
    lwz r10, 0x1c(r18)
    bl fn_8011FE90
lbl_8006E230:
    li r0, 0xf8
    opword 0x13E1000C
    lfd f31, 0xf0(r1)
    li r0, 0xe8
    opword 0x13C1000C
    lfd f30, 0xe0(r1)
    li r0, 0xd8
    opword 0x13A1000C
    lfd f29, 0xd0(r1)
    addi r11, r1, 0xd0
    bl _restgpr_14
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

// asm_to_cpp: fn_8006E26C
asm void fn_8006E26C(s32 *arg0) {
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    stw r0, 0x344(r1)
    stfd f31, 0x330(r1)
    opword 0xF3E10338
    stfd f30, 0x320(r1)
    opword 0xF3C10328
    stfd f29, 0x310(r1)
    opword 0xF3A10318
    addi r11, r1, 0x310
    bl _savegpr_14
    mr r15, r3
    addi r18, r3, 0x160
    lwz r0, 0x0(r18)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006E9E0
    lwz r0, 0x163c(r3)
    cmpwi r0, 0x0
    bne lbl_8006E9E0
    lwz r0, 0x1640(r3)
    cmpwi r0, 0x0
    beq lbl_8006E2CC
    b lbl_8006E9E0
lbl_8006E2CC:
    lwz r0, 0x58(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    bne lbl_8006E9E0
    lwz r0, 0x70(r3)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8006E9E0
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x0
    beq lbl_8006E9E0
    lwz r0, 0x20(r18)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_8006E354
    lfs f2, 0x6c(r18)
    la r5, lbl_8049EF18
    lwz r4, 0x294(r18)
    lfs f1, 0xec(r5)
    lfs f0, 0x0(r4)
    fadds f0, f1, f0
    fcmpo cr0, f2, f0
    opword 0x4C401382
    bne lbl_8006E354
    lwz r0, 0x68(r3)
    ori r0, r0, 0x800
    stw r0, 0x68(r3)
    lwz r0, 0x24(r18)
    cmpwi r0, 0x0
    ble lbl_8006E354
    srawi r0, r0, 2
    addze r4, r0
    bl fn_8006A858
lbl_8006E354:
    li r16, 0x0
    li r31, 0x0
    addi r26, r1, 0xb8
    addi r22, r1, 0x50
    li r24, 0x0
    li r25, 0x1
    la r3, lbl_8049EF18
    lfd f29, lbl_8049EF10
    lis r27, 0x4330
    lfs f30, 0xac(r3)
    lfs f31, 0xec(r3)
    lis r3, lbl_803906D0@ha
    addi r23, r3, lbl_803906D0@l
    li r14, 0x19
lbl_8006E38C:
    lwz r0, 0x1c(r18)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x0
    bne lbl_8006E3AC
    lwz r3, 0x390c(r15)
    lwzx r0, r23, r31
    cmplw r3, r0
    beq lbl_8006E9B8
lbl_8006E3AC:
    lwzx r3, r23, r31
    lwz r20, 0xc(r3)
    b lbl_8006E9B0
lbl_8006E3B8:
    lwz r19, 0x0(r20)
    stb r25, 0x40(r1)
    cmplw r15, r19
    bne lbl_8006E3CC
    stb r24, 0x40(r1)
lbl_8006E3CC:
    lwz r0, 0x163c(r19)
    cmpwi r0, 0x0
    beq lbl_8006E3DC
    stb r24, 0x40(r1)
lbl_8006E3DC:
    lwz r0, 0x0(r19)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8006E3F0
    stb r24, 0x40(r1)
lbl_8006E3F0:
    lwz r3, 0x1c(r18)
    rlwinm r0, r3, 0, 13, 13
    cmpwi r0, 0x0
    bne lbl_8006E544
    lwz r0, 0x9e8(r19)
    cmpwi r0, 0x0
    ble lbl_8006E410
    stb r24, 0x40(r1)
lbl_8006E410:
    lwz r0, 0x50(r19)
    rlwinm r4, r0, 0, 13, 13
    cmpwi r4, 0x0
    beq lbl_8006E424
    stb r24, 0x40(r1)
lbl_8006E424:
    rlwinm r4, r0, 0, 14, 15
    cmpwi r4, 0x0
    beq lbl_8006E440
    rlwinm r4, r0, 0, 4, 4
    cmpwi r4, 0x0
    bne lbl_8006E440
    stb r24, 0x40(r1)
lbl_8006E440:
    lwz r5, 0x58(r19)
    rlwinm r4, r5, 0, 28, 28
    cmpwi r4, 0x0
    beq lbl_8006E454
    stb r24, 0x40(r1)
lbl_8006E454:
    rlwinm r4, r5, 0, 8, 8
    cmpwi r4, 0x0
    beq lbl_8006E464
    stb r24, 0x40(r1)
lbl_8006E464:
    lwz r4, 0x74(r19)
    rlwinm r4, r4, 0, 24, 24
    cmpwi r4, 0x0
    beq lbl_8006E478
    stb r24, 0x40(r1)
lbl_8006E478:
    rlwinm r4, r5, 0, 30, 30
    cmpwi r4, 0x0
    beq lbl_8006E488
    stb r24, 0x40(r1)
lbl_8006E488:
    lwz r4, 0x70(r19)
    clrlwi r4, r4, 31
    cmpwi r4, 0x0
    beq lbl_8006E49C
    stb r24, 0x40(r1)
lbl_8006E49C:
    rlwinm r4, r3, 0, 22, 22
    cmpwi r4, 0x0
    beq lbl_8006E4AC
    stb r24, 0x40(r1)
lbl_8006E4AC:
    lwz r4, 0x27c(r18)
    cmpwi r4, 0x3
    bne lbl_8006E4D8
    rlwinm r4, r0, 0, 20, 20
    cmpwi r4, 0x0
    bne lbl_8006E4D4
    lwz r4, 0x54(r19)
    rlwinm r4, r4, 0, 24, 24
    cmpwi r4, 0x0
    beq lbl_8006E4D8
lbl_8006E4D4:
    stb r24, 0x40(r1)
lbl_8006E4D8:
    lwz r5, 0x20(r18)
    rlwinm r4, r5, 0, 19, 19
    cmpwi r4, 0x0
    beq lbl_8006E508
    lwz r4, 0x54(r19)
    rlwinm r4, r4, 0, 24, 24
    cmpwi r4, 0x0
    bne lbl_8006E508
    andis. r4, r0, 0x803
    cmpwi r4, 0x0
    beq lbl_8006E508
    stb r24, 0x40(r1)
lbl_8006E508:
    rlwinm r4, r5, 0, 18, 18
    cmpwi r4, 0x0
    beq lbl_8006E524
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8006E524
    stb r24, 0x40(r1)
lbl_8006E524:
    rlwinm r0, r3, 0, 9, 9
    cmpwi r0, 0x0
    beq lbl_8006E544
    lwz r0, 0x17c(r19)
    rlwinm r0, r0, 0, 10, 10
    cmpwi r0, 0x0
    beq lbl_8006E544
    stb r25, 0x40(r1)
lbl_8006E544:
    lwz r0, 0x20(r18)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_8006E5D8
    lwz r17, 0x3864(r15)
    addi r3, r1, 0x50
    li r4, 0x0
    li r5, 0x64
    bl memset
    stw r17, 0x50(r1)
    b lbl_8006E5D0
lbl_8006E570:
    lwz r3, 0x10(r19)
    lwz r0, 0x10(r17)
    cmpw r3, r0
    bne lbl_8006E588
    stb r24, 0x40(r1)
    b lbl_8006E5D8
lbl_8006E588:
    lwz r17, 0x3864(r17)
    stb r24, 0x41(r1)
    li r3, 0x0
    mtctr r14
lbl_8006E598:
    lwzx r0, r22, r3
    cmpwi r0, 0x0
    bne lbl_8006E5AC
    stwx r17, r22, r3
    b lbl_8006E5C4
lbl_8006E5AC:
    cmplw r17, r0
    bne lbl_8006E5BC
    stb r25, 0x41(r1)
    b lbl_8006E5C4
lbl_8006E5BC:
    addi r3, r3, 0x4
    bdnz lbl_8006E598
lbl_8006E5C4:
    lbz r0, 0x41(r1)
    cmpwi r0, 0x0
    bne lbl_8006E5D8
lbl_8006E5D0:
    cmpwi r17, 0x0
    bne lbl_8006E570
lbl_8006E5D8:
    lbz r0, 0x40(r1)
    cmpwi r0, 0x0
    beq lbl_8006E9AC
    addi r17, r19, 0x160
    addi r3, r1, 0xb8
    li r4, 0x0
    li r5, 0x200
    bl memset
    stb r25, 0x40(r1)
    lwz r0, 0x0(r17)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    bne lbl_8006E610
    stb r24, 0x40(r1)
lbl_8006E610:
    lwz r0, 0x1c(r17)
    rlwinm r0, r0, 0, 22, 22
    cmpwi r0, 0x0
    beq lbl_8006E624
    stb r24, 0x40(r1)
lbl_8006E624:
    lwz r0, 0x27c(r18)
    cmpwi r0, 0x3
    bne lbl_8006E654
    lwz r0, 0x50(r15)
    rlwinm r0, r0, 0, 20, 20
    cmpwi r0, 0x0
    bne lbl_8006E650
    lwz r0, 0x54(r15)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    beq lbl_8006E654
lbl_8006E650:
    stb r24, 0x40(r1)
lbl_8006E654:
    lwz r3, 0x20(r17)
    rlwinm r0, r3, 0, 19, 19
    cmpwi r0, 0x0
    beq lbl_8006E688
    lwz r0, 0x54(r15)
    rlwinm r0, r0, 0, 24, 24
    cmpwi r0, 0x0
    bne lbl_8006E688
    lwz r0, 0x50(r15)
    andis. r0, r0, 0x803
    cmpwi r0, 0x0
    beq lbl_8006E688
    stb r24, 0x40(r1)
lbl_8006E688:
    rlwinm r0, r3, 0, 18, 18
    cmpwi r0, 0x0
    beq lbl_8006E6A8
    lwz r0, 0x50(r15)
    rlwinm r0, r0, 0, 16, 16
    cmpwi r0, 0x0
    beq lbl_8006E6A8
    stb r24, 0x40(r1)
lbl_8006E6A8:
    lbz r0, 0x40(r1)
    cmpwi r0, 0x0
    beq lbl_8006E798
    mr r3, r18
    mr r4, r17
    bl fn_80078314
    mr r21, r3
    cmpwi r3, 0x0
    beq lbl_8006E798
    addi r3, r1, 0xb8
    mr r4, r18
    mr r5, r17
    bl fn_80076C14
    cmpwi r3, 0x0
    beq lbl_8006E798
    cmpwi r21, 0x1
    beq lbl_8006E700
    cmpwi r21, 0x2
    beq lbl_8006E70C
    cmpwi r21, 0x3
    beq lbl_8006E718
    b lbl_8006E798
lbl_8006E700:
    mr r3, r17
    bl fn_8007600C
    b lbl_8006E798
lbl_8006E70C:
    mr r3, r18
    bl fn_8007600C
    b lbl_8006E9E0
lbl_8006E718:
    lwz r0, 0x20(r18)
    stw r0, 0x8(r1)
    li r0, 0x15
    stw r0, 0xc(r1)
    li r0, 0x7b2
    stw r0, 0x10(r1)
    li r0, 0x0
    stw r0, 0x14(r1)
    mr r3, r15
    mr r4, r19
    addi r5, r1, 0xbc
    addi r6, r1, 0xc8
    lwz r7, 0x24(r18)
    addi r8, r18, 0x278
    lwz r9, 0x18(r18)
    lwz r10, 0x1c(r18)
    bl fn_8011FE90
    li r0, 0x19
    stw r0, 0x1644(r15)
    stw r0, 0x1644(r19)
    li r3, 0x0
    li r4, 0x5a
    la r5, lbl_8049EF18
    lfs f1, 0x4(r5)
    lfs f2, 0xf0(r5)
    li r5, 0x6
    bl fn_8017BF58
    mr r3, r18
    bl fn_80078DE0
    mr r3, r17
    bl fn_80078DE0
    b lbl_8006E9E0
lbl_8006E798:
    addi r3, r1, 0xb8
    li r4, 0x0
    li r5, 0x200
    bl memset
    li r17, 0x0
    li r21, 0x0
    li r30, 0x0
    li r29, 0x0
    addi r28, r1, 0x40
lbl_8006E7BC:
    addi r3, r1, 0xb8
    add r3, r3, r30
    mr r4, r18
    add r5, r19, r29
    addi r5, r5, 0x648
    mr r6, r19
    bl fn_800763B4
    stb r3, 0x0(r28)
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_8006E7EC
    addi r17, r17, 0x1
lbl_8006E7EC:
    addi r21, r21, 0x1
    addi r30, r30, 0x20
    addi r29, r29, 0x18
    addi r28, r28, 0x1
    cmpwi r21, 0x10
    blt lbl_8006E7BC
    cmpwi r17, 0x0
    ble lbl_8006E9AC
    addi r3, r1, 0x18
    bl fn_80061FA0
    li r21, 0x0
    li r28, 0x0
    addi r29, r1, 0x40
lbl_8006E820:
    lbz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_8006E840
    addi r3, r1, 0x18
    mr r4, r3
    add r5, r26, r28
    addi r5, r5, 0x4
    bl fn_80018B00
lbl_8006E840:
    addi r21, r21, 0x1
    addi r28, r28, 0x20
    addi r29, r29, 0x1
    cmpwi r21, 0x10
    blt lbl_8006E820
    addi r3, r1, 0x30
    addi r4, r1, 0x18
    xoris r0, r17, 0x8000
    stw r0, 0x2bc(r1)
    stw r27, 0x2b8(r1)
    lfd f0, 0x2b8(r1)
    fsubs f0, f0, f29
    fdivs f1, f30, f0
    bl fn_80018B08
    addi r3, r1, 0x18
    mr r4, r18
    li r5, 0x0
    bl fn_80078E18
    addi r3, r1, 0x18
    mr r4, r3
    addi r5, r15, 0x588
    bl fn_8001B8B8
    addi r3, r1, 0x18
    bl fn_8001B8BC
    fcmpo cr0, f1, f31
    ble lbl_8006E8B8
    addi r3, r1, 0x24
    addi r4, r1, 0x18
    bl fn_8001B8B0
    b lbl_8006E8F8
lbl_8006E8B8:
    li r4, 0x0
    addi r3, r1, 0x40
    li r0, 0x10
    mtctr r0
lbl_8006E8C8:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8006E8EC
    addi r3, r1, 0x24
    slwi r0, r4, 5
    add r4, r26, r0
    addi r4, r4, 0x10
    bl fn_80019DAC
    b lbl_8006E8F8
lbl_8006E8EC:
    addi r4, r4, 0x1
    addi r3, r3, 0x1
    bdnz lbl_8006E8C8
lbl_8006E8F8:
    mr r3, r18
    mr r4, r19
    bl fn_80078104
    mr r3, r15
    li r4, 0x1
    li r5, 0x0
    bl fn_8006EA1C
    mr r3, r15
    mr r4, r19
    bl fn_8006B564
    mr r3, r15
    mr r4, r18
    mr r5, r19
    addi r6, r1, 0x30
    addi r7, r1, 0x24
    li r8, 0x0
    bl fn_8006B79C
    lwz r3, 0x9c0(r19)
    addi r0, r3, 0x1
    stw r0, 0x9c0(r19)
    stb r25, 0x40(r1)
    lwz r0, 0x24(r18)
    cmpwi r0, 0x0
    bge lbl_8006E95C
    stb r24, 0x40(r1)
lbl_8006E95C:
    lwz r0, 0x54(r19)
    rlwinm r0, r0, 0, 1, 1
    cmpwi r0, 0x0
    beq lbl_8006E970
    stb r24, 0x40(r1)
lbl_8006E970:
    lbz r0, 0x40(r1)
    cmpwi r0, 0x0
    bne lbl_8006E9AC
    mr r3, r15
    li r4, -0x270f
    li r5, 0x0
    bl fn_8006EA1C
    lwz r3, 0x3864(r19)
    cmpwi r3, 0x0
    beq lbl_8006E9AC
    lwz r3, 0x8(r3)
    lwz r0, 0x8(r15)
    cmpw r3, r0
    bne lbl_8006E9AC
    stw r24, 0x9c0(r19)
lbl_8006E9AC:
    lwz r20, 0xc(r20)
lbl_8006E9B0:
    cmpwi r20, 0x0
    bne lbl_8006E3B8
lbl_8006E9B8:
    addi r16, r16, 0x1
    addi r31, r31, 0x4
    cmpwi r16, 0x4
    blt lbl_8006E38C
    mr r3, r15
    mr r4, r18
    bl fn_800879C0
    mr r3, r15
    mr r4, r18
    bl fn_80088248
lbl_8006E9E0:
    li r0, 0x338
    opword 0x13E1000C
    lfd f31, 0x330(r1)
    li r0, 0x328
    opword 0x13C1000C
    lfd f30, 0x320(r1)
    li r0, 0x318
    opword 0x13A1000C
    lfd f29, 0x310(r1)
    addi r11, r1, 0x310
    bl _restgpr_14
    lwz r0, 0x344(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}

// asm_to_cpp: fn_8006EA1C
asm void fn_8006EA1C(s32 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beq lbl_8006EA50
    bl fn_8005E4A4
    mr r29, r3
lbl_8006EA50:
    lwz r3, 0x10(r29)
    bl fn_8005ECCC
    mr r31, r3
    lwz r0, 0x0(r29)
    rlwinm r0, r0, 0, 4, 4
    cmpwi r0, 0x0
    beq lbl_8006EA98
    cmpwi r3, 0x0
    beq lbl_8006EA98
    lwz r3, 0x9ac(r3)
    mr r4, r30
    li r5, 0x0
    li r6, 0x63
    bl fn_801728DC
    stw r3, 0x9ac(r31)
    li r0, 0x1e
    stw r0, 0x9b0(r31)
    b lbl_8006EAB8
lbl_8006EA98:
    lwz r3, 0x9ac(r29)
    mr r4, r30
    li r5, 0x0
    li r6, 0x63
    bl fn_801728DC
    stw r3, 0x9ac(r29)
    li r0, 0x1e
    stw r0, 0x9b0(r29)
lbl_8006EAB8:
    lwz r0, 0x0(r29)
    clrlwi r0, r0, 31
    cmpwi r0, 0x0
    beq lbl_8006EAE4
    lwz r4, 0x9ac(r29)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x1190(r3)
    cmpw r0, r4
    bge lbl_8006EAE4
    stw r4, 0x1190(r3)
lbl_8006EAE4:
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8006EAFC
asm void fn_8006EAFC(s8 *arg0) {
    nofralloc
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x0
    beqlr
    lwz r4, 0x3908(r3)
    lwz r5, 0xc(r4)
    b lbl_8006EB70
lbl_8006EB18:
    lwz r6, 0x0(r5)
    lwz r0, 0x0(r6)
    rlwinm r0, r0, 0, 27, 27
    cmpwi r0, 0x0
    beqlr
    lwz r4, 0x70(r6)
    clrlwi r0, r4, 31
    cmpwi r0, 0x0
    bnelr
    rlwinm r0, r4, 0, 9, 9
    cmpwi r0, 0x0
    beq lbl_8006EB6C
    lwz r0, 0x1644(r6)
    lwz r4, 0x1644(r3)
    cmpw r4, r0
    bge lbl_8006EB60
    stw r0, 0x1644(r3)
    b lbl_8006EB6C
lbl_8006EB60:
    cmpw r0, r4
    bge lbl_8006EB6C
    stw r4, 0x1644(r6)
lbl_8006EB6C:
    lwz r5, 0xc(r5)
lbl_8006EB70:
    cmpwi r5, 0x0
    bne lbl_8006EB18
    blr
}

// asm_to_cpp: fn_8006EB7C
asm s16 fn_8006EB7C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r3, 0x38
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_8006EBF0
    lwz r0, 0x8(r1)
    slwi r0, r0, 16
    srawi r3, r0, 16
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8006EBB4
asm s16 fn_8006EBB4(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r3, 0x38
    li r4, 0x0
    addi r5, r1, 0x8
    bl fn_8006EBF0
    lwz r3, 0x8(r1)
    subi r0, r3, 0x4000
    slwi r0, r0, 16
    srawi r3, r0, 16
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8006EBF0
asm void fn_8006EBF0(s8 *arg0, s32 *arg1, s32 *arg2) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    mr r31, r5
    lfs f0, 0x0(r3)
    fmuls f1, f0, f0
    lfs f0, 0x8(r3)
    fmuls f0, f0, f0
    fadds f1, f1, f0
    bl fn_8001DA9C
    fmr f31, f1
    cmpwi r31, 0x0
    beq lbl_8006EC64
    lfs f1, 0x8(r29)
    lfs f2, 0x0(r29)
    bl fn_800674B8
    la r3, lbl_8049EF18
    lfs f0, 0x30(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x0(r31)
lbl_8006EC64:
    cmpwi r30, 0x0
    beq lbl_8006EC94
    lfs f1, 0x4(r29)
    fmr f2, f31
    bl fn_800674B8
    la r3, lbl_8049EF18
    lfs f0, 0x30(r3)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x0(r30)
lbl_8006EC94:
    li r0, 0x28
    opword 0x13E1000C
    lfd f31, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8006ECB8
asm void fn_8006ECB8(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x280(r1)
    mflr r0
    stw r0, 0x284(r1)
    addi r11, r1, 0x280
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    bl fn_8006ED64
    cmpwi r3, 0x0
    beq lbl_8006ED4C
    addi r3, r1, 0x8
    mr r4, r29
    bl fn_8006F07C
    slwi r0, r30, 2
    lis r3, lbl_803906D0@ha
    addi r3, r3, lbl_803906D0@l
    lwzx r3, r3, r0
    lwz r31, 0xc(r3)
    b lbl_8006ED3C
lbl_8006ED04:
    lwz r30, 0x0(r31)
    mr r3, r29
    mr r4, r30
    bl fn_8006EDD4
    cmpwi r3, 0x0
    beq lbl_8006ED38
    addi r3, r1, 0x8
    mr r4, r30
    bl fn_8006F0E8
    cmpwi r3, 0x0
    beq lbl_8006ED38
    addi r3, r1, 0x8
    bl fn_8006F56C
lbl_8006ED38:
    lwz r31, 0xc(r31)
lbl_8006ED3C:
    cmpwi r31, 0x0
    bne lbl_8006ED04
    mr r3, r29
    bl fn_8006FC74
lbl_8006ED4C:
    addi r11, r1, 0x280
    bl _restgpr_29
    lwz r0, 0x284(r1)
    mtlr r0
    addi r1, r1, 0x280
    blr
}

s32 fn_8006ED64(s8 *arg0) {
    s32 temp_r4;

    if ((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 1) != 0) {
        return (s32) (0);
    }
    temp_r4 = (s32) (M2C_FIELD(arg0, s32 *, 0x58));
    if ((s32) ((temp_r4 & 2 & ~0x200000) | (temp_r4 & 0x200000)) != 0) {
        return (s32) (0);
    }
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x74) & 0x8000) != 0) {
        return (s32) (0);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1640) != 0) {
        return (s32) (0);
    }
    return (s32) (M2C_FIELD(arg0, s32 *, 0x163C) == 0);
}

s32 fn_8006EDD4(s8 *arg0, s8 *arg1) {
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = (s32) (M2C_FIELD(arg1, s32 *, 0x70));
    if ((s32) (temp_r6 & 1) != 0) {
        return (s32) (0);
    }
    temp_r5 = (s32) (M2C_FIELD(arg1, s32 *, 0x58));
    if ((s32) ((temp_r5 & 2 & ~0x200000) | (temp_r5 & 0x200000)) != 0) {
        return (s32) (0);
    }
    if ((s32) (M2C_FIELD(arg1, s32 *, 0x74) & 0x8000) != 0) {
        return (s32) (0);
    }
    if (arg0 == arg1) {
        return (s32) (0);
    }
    if ((s32) M2C_FIELD(arg1, s32 *, 0x163C) != 0) {
        return (s32) (0);
    }
    if ((((s32) (M2C_FIELD(arg0, s32 *, 0) & 0x10) != 0) || ((s32) (M2C_FIELD(arg1, s32 *, 0) & 0x10) != 0)) && ((s32) M2C_FIELD(arg0, s32 *, 0x10) == (s32) M2C_FIELD(arg1, s32 *, 0x10))) {
        return (s32) (0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x70) & 0x800000) != 0) || ((s32) (temp_r6 & 0x800000) != 0)) {
        return (s32) (0);
    }
    return (s32) (1);
}

} // extern "C"
