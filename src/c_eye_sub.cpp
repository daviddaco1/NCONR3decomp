#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_8034D648[];
extern float lbl_8049F998;

s32 _restgpr_23();
s32 _restgpr_24();
s32 _restgpr_28();
s32 _restgpr_29();
s32 _savegpr_23();
s32 _savegpr_24();
s32 _savegpr_28();
s32 _savegpr_29();
void fn_80018B08(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK fn_80018B0C(M2C_UNK *arg0, f32 farg0, f32 farg1, f32 farg2);
f32 fn_8001DA9C(f32 farg0);
s32 fn_8002AE00(s8 *arg0);
s32 * fn_8002E628(s32 *arg0, s32 arg1);
s32 * fn_80031A74(s32 *arg0, s32 arg1);
M2C_UNK fn_8003452C(s32 *arg0);
void fn_800CA050(s8 *arg0, s8 *arg1);
void fn_800CA0DC(s8 *arg0, s8 *arg1);
s32 fn_800CA1BC(u64 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_800CA290(void);
s32 fn_800CA45C(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3);
s32 fn_800CA4D4(s32 *arg0, u32 *arg1, s32 arg2, s32 arg3, s8 *arg4);
void fn_801734E4(s32 arg0, s32 arg1);
s32 fn_80173580();
s32 fn_80181454(s8 *arg0, s32 arg1);
s32 * fn_8018149C(s8 *arg0, s32 arg1);
s32 fn_80181504(s8 *arg0, s32 arg1);
f32 fn_801A32A0(f64 farg0, f64 farg1);
f32 fn_801A32CC(f64 farg0);
f32 fn_801A32F4(f64 farg0);
s8 * fn_801D0CD0(s8 **arg0, s32 arg1);
void fn_801D4A9C(s8 **arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_800CA050
asm void fn_800CA050(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    lfs f1, 0x4(r4)
    lfs f2, 0x0(r4)
    bl fn_801A32A0
    la r31, lbl_8049F998
    lfs f0, 0x2fc(r31)
    fmuls f0, f0, f1
    stfs f0, 0x8(r29)
    lfs f0, 0x4(r30)
    fmuls f1, f0, f0
    lfs f0, 0x0(r30)
    fmuls f0, f0, f0
    fadds f1, f1, f0
    bl fn_8001DA9C
    fmr f2, f1
    lfs f0, 0x8(r30)
    fneg f1, f0
    bl fn_801A32A0
    lfs f0, 0x2fc(r31)
    fmuls f0, f0, f1
    stfs f0, 0x4(r29)
    lfs f0, 0xc(r30)
    stfs f0, 0x0(r29)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800CA0DC
asm void fn_800CA0DC(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    stfd f29, 0x20(r1)
    opword 0xF3A10028
    addi r11, r1, 0x20
    bl _savegpr_29
    mr r29, r3
    mr r30, r4
    la r31, lbl_8049F998
    lfs f1, 0x8(r4)
    lfs f0, 0x300(r31)
    fmuls f1, f0, f1
    bl fn_801A32CC
    fmr f29, f1
    lfs f1, 0x8(r30)
    lfs f0, 0x300(r31)
    fmuls f1, f0, f1
    bl fn_801A32F4
    fmr f30, f1
    lfs f1, 0x4(r30)
    lfs f0, 0x300(r31)
    fmuls f1, f0, f1
    bl fn_801A32CC
    fmr f31, f1
    lfs f1, 0x4(r30)
    lfs f0, 0x300(r31)
    fmuls f1, f0, f1
    bl fn_801A32F4
    fmuls f0, f29, f31
    stfs f0, 0x0(r29)
    fmuls f0, f30, f31
    stfs f0, 0x4(r29)
    fneg f0, f1
    stfs f0, 0x8(r29)
    lfs f0, 0x0(r30)
    stfs f0, 0xc(r29)
    li r0, 0x48
    opword 0x13E1000C
    lfd f31, 0x40(r1)
    li r0, 0x38
    opword 0x13C1000C
    lfd f30, 0x30(r1)
    li r0, 0x28
    opword 0x13A1000C
    lfd f29, 0x20(r1)
    addi r11, r1, 0x20
    bl _restgpr_29
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_800CA1BC
asm s32 fn_800CA1BC(u64 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r31, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    li r28, 0x0
    li r30, 0x0
    b lbl_800CA224
lbl_800CA1F0:
    add r29, r25, r30
    mr r3, r31
    lwz r4, 0x0(r29)
    bl fn_8018149C
    cmpwi r3, 0x0
    beq lbl_800CA21C
    lwz r4, 0x0(r3)
    lwz r0, 0x4(r29)
    oris r0, r0, 0x80
    or r0, r4, r0
    stw r0, 0x0(r3)
lbl_800CA21C:
    addi r28, r28, 0x1
    addi r30, r30, 0x8
lbl_800CA224:
    cmpw r28, r24
    blt lbl_800CA1F0
    li r28, 0x0
    li r30, 0x0
    b lbl_800CA26C
lbl_800CA238:
    add r29, r27, r30
    mr r3, r31
    lwz r4, 0x0(r29)
    bl fn_8018149C
    cmpwi r3, 0x0
    beq lbl_800CA264
    lwz r4, 0x0(r3)
    lwz r0, 0x4(r29)
    oris r0, r0, 0x40
    or r0, r4, r0
    stw r0, 0x0(r3)
lbl_800CA264:
    addi r28, r28, 0x1
    addi r30, r30, 0x8
lbl_800CA26C:
    cmpw r28, r26
    blt lbl_800CA238
    li r3, 0x1
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_800CA290
asm void fn_800CA290(void) {
    nofralloc
    clrlwi r11, r1, 28
    subfic r11, r11, -0x40
    mr r12, r1
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    mr r11, r12
    bl _savegpr_23
    mr r31, r1
    lwz r0, 0x0(r1)
    lis r11, 0xffff
    addi r11, r11, 0x13b0
    stwux r0, r1, r11
    mr r29, r3
    mr r30, r4
    subis r26, r31, 0x1
    addi r3, r26, 0x13d0
    li r4, 0x0
    lis r5, 0x1
    subi r5, r5, 0x13c0
    bl memset
    li r23, 0x0
    li r28, 0x0
    addi r26, r26, 0x13d0
    la r27, lbl_8049F998
lbl_800CA2F4:
    mr r3, r29
    mr r4, r23
    bl fn_8018149C
    mr r24, r3
    mr r3, r29
    mr r4, r23
    bl fn_80181504
    mr r6, r3
    cmpwi r24, 0x0
    beq lbl_800CA36C
    lwz r0, 0x0(r24)
    rlwinm r0, r0, 0, 8, 9
    cmpwi r0, 0x0
    beq lbl_800CA350
    add r25, r26, r28
    mr r3, r25
    mr r4, r24
    mr r5, r23
    bl fn_800CA45C
    addi r3, r25, 0x10
    mr r4, r3
    lfs f1, 0x304(r27)
    bl fn_80018B08
lbl_800CA350:
    lwz r0, 0x0(r24)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_800CA36C
    lwzx r3, r26, r28
    addi r0, r3, 0x1
    stwx r0, r26, r28
lbl_800CA36C:
    addi r23, r23, 0x1
    addi r28, r28, 0x120
    cmpwi r23, 0xd2
    blt lbl_800CA2F4
    lis r3, lbl_8034D648@ha
    addi r3, r3, lbl_8034D648@l
    slwi r0, r30, 3
    add r3, r3, r0
    lwz r12, 0x4(r3)
    cmpwi r12, 0x0
    beq lbl_800CA3A8
    subis r3, r31, 0x1
    addi r3, r3, 0x13d0
    mtctr r12
    bctrl
lbl_800CA3A8:
    li r26, 0x0
    li r30, 0x0
    la r28, lbl_8049F998
    subis r3, r31, 0x1
    addi r27, r3, 0x13d0
lbl_800CA3BC:
    mr r3, r29
    mr r4, r26
    bl fn_8018149C
    mr r24, r3
    mr r3, r29
    mr r4, r26
    bl fn_80181504
    mr r23, r3
    cmpwi r24, 0x0
    beq lbl_800CA42C
    lwz r0, 0x0(r24)
    rlwinm r0, r0, 0, 8, 8
    cmpwi r0, 0x0
    beq lbl_800CA42C
    add r25, r27, r30
    lwz r0, 0x0(r25)
    cmplwi r0, 0x2
    blt lbl_800CA42C
    addi r3, r25, 0x10
    mr r4, r3
    lfs f1, 0x308(r28)
    bl fn_80018B08
    mr r3, r24
    mr r4, r25
    mr r5, r26
    mr r6, r23
    mr r7, r29
    bl fn_800CA4D4
lbl_800CA42C:
    addi r26, r26, 0x1
    addi r30, r30, 0x120
    cmpwi r26, 0xd2
    blt lbl_800CA3BC
    li r3, 0x1
    lwz r10, 0x0(r1)
    mr r11, r10
    bl _restgpr_23
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

// asm_to_cpp: fn_800CA45C
asm s32 fn_800CA45C(s8 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    mr r31, r4
    addi r3, r1, 0x8
    addi r4, r4, 0x80
    bl fn_801734E4
    addi r3, r30, 0x40
    addi r4, r31, 0x30
    bl fn_800CA050
    addi r3, r30, 0x10
    li r4, 0x3
    addi r5, r1, 0x8
    bl fn_80173580
    la r3, lbl_8049F998
    lfs f0, 0x2dc(r3)
    stfs f0, 0x20(r30)
    stfs f0, 0x24(r30)
    stfs f0, 0x28(r30)
    stfs f0, 0x2c(r30)
    li r3, 0x1
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_800CA4D4
asm s32 fn_800CA4D4(s32 *arg0, u32 *arg1, s32 arg2, s32 arg3, s8 *arg4) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_28
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r31, r7
    lwz r0, 0x114(r7)
    stw r0, 0x10(r1)
    addi r3, r1, 0x10
    bl fn_8003452C
    bl fn_8002AE00
    stw r3, 0xc(r1)
    addi r4, r1, 0xc
    addi r3, r1, 0x18
    bl fn_8002E628
    mr r3, r31
    mr r4, r30
    bl fn_80181454
    mr r4, r3
    addi r3, r1, 0x18
    bl fn_801D0CD0
    stw r3, 0x8(r1)
    addi r4, r1, 0x8
    addi r3, r1, 0x14
    bl fn_80031A74
    lwz r3, 0x0(r28)
    li r0, -0xe06
    and r0, r3, r0
    stw r0, 0x0(r28)
    addi r3, r28, 0x30
    addi r4, r29, 0x40
    bl fn_800CA0DC
    addi r3, r28, 0x20
    la r4, lbl_8049F998
    lfs f1, 0x2dc(r4)
    fmr f2, f1
    fmr f3, f1
    bl fn_80018B0C
    lwz r0, 0x0(r28)
    ori r0, r0, 0xe00
    stw r0, 0x0(r28)
    addi r3, r1, 0x14
    lfs f1, 0x10(r29)
    lfs f2, 0x14(r29)
    lfs f3, 0x18(r29)
    bl fn_801D4A9C
    li r3, 0x1
    addi r11, r1, 0x30
    bl _restgpr_28
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

} // extern "C"
