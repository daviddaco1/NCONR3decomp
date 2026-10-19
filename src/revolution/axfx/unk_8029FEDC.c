#include "types.h"

// Translation unit: src/revolution/axfx/unk_8029FEDC.cpp
// Total functions: 7

// Small Data symbols (@sda21)
extern float lbl_8049CF40;
extern float lbl_8049CF44;
extern float lbl_804A2480;
extern float lbl_804A2484;
extern float lbl_804A2488;
extern float lbl_804A248C;
extern float lbl_804A2490;

// Forward declarations
extern void OSDisableInterrupts();
extern void OSRestoreInterrupts();
extern void __cvt_fp2unsigned();
extern void _restgpr_20();
extern void _savegpr_20();
extern void fn_8029FEDC();
extern void fn_8029FF04();
extern void fn_802A01C8();
extern void fn_802A0348();
extern void fn_802A044C();
extern void fn_802A04F8();
extern void fn_802A0770();
extern void memset();

// ----------------------------------------------------------------------------
// fn_8029FEDC
// ----------------------------------------------------------------------------
asm void fn_8029FEDC() {
    nofralloc
    stwu r1, -0x10(r1)
    lfs f1, lbl_804A2480
    lfs f0, 0x38(r3)
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    mulli r3, r0, 0xc
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8029FF04
// ----------------------------------------------------------------------------
asm void fn_8029FF04() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lfs f1, 0x38(r30)
    li r29, 0x1
    lfs f0, lbl_804A2484
    mr r31, r3
    stw r29, 0x34(r30)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_8029FFD0
    bl OSDisableInterrupts
    lwz r0, 0x34(r30)
    mr r29, r3
    lwz r3, 0x0(r30)
    ori r0, r0, 0x1
    cmpwi r3, 0x0
    stw r0, 0x34(r30)
    beq lbl_8029FF78
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_8029FF78:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_8029FF98
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_8029FF98:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_8029FFB8
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_8029FFB8:
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A01AC
lbl_8029FFD0:
    lfs f0, lbl_804A2480
    fmuls f1, f0, f1
    bl __cvt_fp2unsigned
    cmpwi r3, 0x0
    stw r3, 0x14(r30)
    bne lbl_8029FFEC
    stw r29, 0x14(r30)
lbl_8029FFEC:
    lwz r0, 0x14(r30)
    lwz r12, lbl_8049CF40
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x0(r30)
    bne lbl_802A0014
    li r0, 0x0
    b lbl_802A0060
lbl_802A0014:
    lwz r0, 0x14(r30)
    lwz r12, lbl_8049CF40
    slwi r3, r0, 2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    stw r3, 0x4(r30)
    bne lbl_802A003C
    li r0, 0x0
    b lbl_802A0060
lbl_802A003C:
    lwz r0, 0x14(r30)
    lwz r12, lbl_8049CF40
    slwi r3, r0, 2
    mtctr r12
    bctrl
    neg r0, r3
    stw r3, 0x8(r30)
    or r0, r0, r3
    srwi r0, r0, 31
lbl_802A0060:
    cmpwi r0, 0x0
    bne lbl_802A00F4
    bl OSDisableInterrupts
    lwz r0, 0x34(r30)
    mr r29, r3
    lwz r3, 0x0(r30)
    ori r0, r0, 0x1
    cmpwi r3, 0x0
    stw r0, 0x34(r30)
    beq lbl_802A009C
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_802A009C:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_802A00BC
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_802A00BC:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_802A00DC
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_802A00DC:
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A01AC
lbl_802A00F4:
    mr r3, r30
    bl fn_802A0770
    cmpwi r3, 0x0
    bne lbl_802A0190
    bl OSDisableInterrupts
    lwz r0, 0x34(r30)
    mr r29, r3
    lwz r3, 0x0(r30)
    ori r0, r0, 0x1
    cmpwi r3, 0x0
    stw r0, 0x34(r30)
    beq lbl_802A0138
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_802A0138:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_802A0158
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_802A0158:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_802A0178
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_802A0178:
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A01AC
lbl_802A0190:
    lwz r0, 0x34(r30)
    mr r3, r31
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0x34(r30)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802A01AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802A01C8
// ----------------------------------------------------------------------------
asm void fn_802A01C8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lwz r0, 0x34(r31)
    mr r29, r3
    ori r0, r0, 0x1
    stw r0, 0x34(r31)
    bl OSDisableInterrupts
    lwz r0, 0x34(r31)
    mr r30, r3
    lwz r3, 0x0(r31)
    ori r0, r0, 0x1
    cmpwi r3, 0x0
    stw r0, 0x34(r31)
    beq lbl_802A022C
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_802A022C:
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_802A024C
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_802A024C:
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_802A026C
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8(r31)
lbl_802A026C:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
    bl fn_8029FF04
    cmpwi r3, 0x0
    bne lbl_802A0310
    bl OSDisableInterrupts
    lwz r0, 0x34(r31)
    mr r30, r3
    lwz r3, 0x0(r31)
    ori r0, r0, 0x1
    cmpwi r3, 0x0
    stw r0, 0x34(r31)
    beq lbl_802A02B8
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_802A02B8:
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_802A02D8
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_802A02D8:
    lwz r3, 0x8(r31)
    cmpwi r3, 0x0
    beq lbl_802A02F8
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8(r31)
lbl_802A02F8:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r29
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A032C
lbl_802A0310:
    lwz r0, 0x34(r31)
    mr r3, r29
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0x34(r31)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802A032C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802A0348
// ----------------------------------------------------------------------------
asm void fn_802A0348() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0x34(r29)
    mr r30, r3
    mr r3, r29
    ori r0, r0, 0x1
    stw r0, 0x34(r29)
    bl fn_802A0770
    cmpwi r3, 0x0
    bne lbl_802A0414
    bl OSDisableInterrupts
    lwz r0, 0x34(r29)
    mr r31, r3
    lwz r3, 0x0(r29)
    ori r0, r0, 0x1
    cmpwi r3, 0x0
    stw r0, 0x34(r29)
    beq lbl_802A03BC
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_802A03BC:
    lwz r3, 0x4(r29)
    cmpwi r3, 0x0
    beq lbl_802A03DC
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_802A03DC:
    lwz r3, 0x8(r29)
    cmpwi r3, 0x0
    beq lbl_802A03FC
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8(r29)
lbl_802A03FC:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_802A0430
lbl_802A0414:
    lwz r0, 0x34(r29)
    mr r3, r30
    ori r0, r0, 0x2
    clrrwi r0, r0, 1
    stw r0, 0x34(r29)
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_802A0430:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802A044C
// ----------------------------------------------------------------------------
asm void fn_802A044C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, 0x34(r30)
    mr r31, r3
    lwz r3, 0x0(r30)
    ori r0, r0, 0x1
    cmpwi r3, 0x0
    stw r0, 0x34(r30)
    beq lbl_802A0498
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_802A0498:
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_802A04B8
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_802A04B8:
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_802A04D8
    lwz r12, lbl_8049CF44
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_802A04D8:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802A04F8
// ----------------------------------------------------------------------------
asm void fn_802A04F8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lwz r0, 0x34(r4)
    cmpwi r0, 0x0
    beq lbl_802A0524
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x34(r4)
    b lbl_802A0758
lbl_802A0524:
    lwz r6, 0x48(r4)
    lwz r10, 0x28(r4)
    cmpwi r6, 0x0
    lwz r11, 0x0(r3)
    lwz r12, 0x4(r3)
    subfic r24, r10, 0x80
    lwz r31, 0x8(r3)
    beq lbl_802A0550
    lwz r3, 0x0(r6)
    lwz r5, 0x4(r6)
    lwz r6, 0x8(r6)
lbl_802A0550:
    lwz r20, 0x4c(r4)
    cmpwi r20, 0x0
    beq lbl_802A0568
    lwz r7, 0x0(r20)
    lwz r8, 0x4(r20)
    lwz r9, 0x8(r20)
lbl_802A0568:
    li r25, 0x60
    li r0, 0x0
    mtctr r25
lbl_802A0574:
    lwz r21, 0xc(r4)
    lwz r20, 0x48(r4)
    slwi r23, r21, 2
    lwz r22, 0x0(r4)
    lwz r21, 0x4(r4)
    cmpwi r20, 0x0
    lwz r20, 0x8(r4)
    lwzx r30, r22, r23
    lwzx r29, r21, r23
    lwzx r28, r20, r23
    beq lbl_802A0604
    lwz r20, 0x0(r3)
    addi r3, r3, 0x4
    lwz r22, 0x0(r11)
    lwz r23, 0x0(r31)
    add r20, r22, r20
    lwz r22, 0x0(r6)
    lwz r27, 0x1c(r4)
    mullw r20, r24, r20
    add r22, r23, r22
    lwz r21, 0x0(r5)
    lwz r25, 0x0(r12)
    addi r5, r5, 0x4
    addi r6, r6, 0x4
    add r26, r25, r21
    lwz r21, 0x24(r4)
    mullw r23, r10, r27
    lwz r25, 0x20(r4)
    add r27, r20, r23
    mullw r26, r24, r26
    mullw r23, r10, r25
    mullw r22, r24, r22
    add r26, r26, r23
    mullw r21, r10, r21
    add r25, r22, r21
    b lbl_802A0640
lbl_802A0604:
    lwz r21, 0x0(r11)
    lwz r26, 0x1c(r4)
    lwz r25, 0x0(r12)
    mullw r27, r24, r21
    lwz r23, 0x20(r4)
    lwz r22, 0x0(r31)
    lwz r21, 0x24(r4)
    mullw r26, r10, r26
    mullw r25, r24, r25
    add r27, r27, r26
    mullw r23, r10, r23
    mullw r22, r24, r22
    add r26, r25, r23
    mullw r21, r10, r21
    add r25, r22, r21
lbl_802A0640:
    lwz r21, 0x18(r4)
    srawi r27, r27, 7
    srawi r26, r26, 7
    lwz r22, 0xc(r4)
    mullw r21, r30, r21
    srawi r25, r25, 7
    stw r27, 0x1c(r4)
    slwi r22, r22, 2
    lwz r23, 0x0(r4)
    stw r26, 0x20(r4)
    srawi r21, r21, 7
    stw r25, 0x24(r4)
    add r27, r27, r21
    stwx r27, r23, r22
    lwz r23, 0x18(r4)
    lwz r22, 0xc(r4)
    mullw r27, r29, r23
    lwz r23, 0x4(r4)
    slwi r22, r22, 2
    srawi r27, r27, 7
    add r26, r26, r27
    stwx r26, r23, r22
    lwz r22, 0x18(r4)
    lwz r27, 0xc(r4)
    mullw r22, r28, r22
    lwz r23, 0x8(r4)
    slwi r26, r27, 2
    addi r27, r27, 0x1
    srawi r22, r22, 7
    add r25, r25, r22
    stwx r25, r23, r26
    lwz r25, 0x10(r4)
    stw r27, 0xc(r4)
    cmplw r27, r25
    blt lbl_802A06D0
    stw r0, 0xc(r4)
lbl_802A06D0:
    lwz r25, 0x2c(r4)
    mullw r25, r30, r25
    srawi r25, r25, 7
    stw r25, 0x0(r11)
    addi r11, r11, 0x4
    lwz r25, 0x2c(r4)
    mullw r25, r29, r25
    srawi r25, r25, 7
    stw r25, 0x0(r12)
    addi r12, r12, 0x4
    lwz r25, 0x2c(r4)
    mullw r25, r28, r25
    srawi r25, r25, 7
    stw r25, 0x0(r31)
    addi r31, r31, 0x4
    lwz r25, 0x4c(r4)
    cmpwi r25, 0x0
    beq lbl_802A0754
    lwz r25, 0x30(r4)
    mullw r25, r30, r25
    srawi r25, r25, 7
    stw r25, 0x0(r7)
    addi r7, r7, 0x4
    lwz r25, 0x30(r4)
    mullw r25, r29, r25
    srawi r25, r25, 7
    stw r25, 0x0(r8)
    addi r8, r8, 0x4
    lwz r25, 0x30(r4)
    mullw r25, r28, r25
    srawi r25, r25, 7
    stw r25, 0x0(r9)
    addi r9, r9, 0x4
lbl_802A0754:
    bdnz lbl_802A0574
lbl_802A0758:
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_802A0770
// ----------------------------------------------------------------------------
asm void fn_802A0770() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lfs f1, 0x3c(r3)
    lfs f0, 0x38(r3)
    fcmpo cr0, f1, f0
    ble lbl_802A079C
    li r3, 0x0
    b lbl_802A0950
lbl_802A079C:
    lfs f0, 0x40(r3)
    lfs f2, lbl_804A2484
    fcmpo cr0, f0, f2
    blt lbl_802A07BC
    lfs f1, lbl_804A2488
    fcmpo cr0, f0, f1
    opword 0x4C411382
    bne lbl_802A07C4
lbl_802A07BC:
    li r3, 0x0
    b lbl_802A0950
lbl_802A07C4:
    lfs f0, 0x44(r3)
    fcmpo cr0, f0, f2
    blt lbl_802A07D8
    fcmpo cr0, f0, f1
    ble lbl_802A07E0
lbl_802A07D8:
    li r3, 0x0
    b lbl_802A0950
lbl_802A07E0:
    lfs f0, 0x50(r3)
    fcmpo cr0, f0, f2
    blt lbl_802A07F4
    fcmpo cr0, f0, f1
    ble lbl_802A07FC
lbl_802A07F4:
    li r3, 0x0
    b lbl_802A0950
lbl_802A07FC:
    lfs f0, 0x54(r3)
    fcmpo cr0, f0, f2
    blt lbl_802A0810
    fcmpo cr0, f0, f1
    ble lbl_802A0818
lbl_802A0810:
    li r3, 0x0
    b lbl_802A0950
lbl_802A0818:
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    bne lbl_802A082C
    li r3, 0x0
    b lbl_802A0950
lbl_802A082C:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_802A0840
    li r3, 0x0
    b lbl_802A0950
lbl_802A0840:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_802A0854
    li r3, 0x0
    b lbl_802A0950
lbl_802A0854:
    lwz r0, 0x14(r31)
    mr r3, r4
    li r4, 0x0
    slwi r5, r0, 2
    bl memset
    lwz r0, 0x14(r31)
    li r4, 0x0
    lwz r3, 0x4(r31)
    slwi r5, r0, 2
    bl memset
    lwz r0, 0x14(r31)
    li r4, 0x0
    lwz r3, 0x8(r31)
    slwi r5, r0, 2
    bl memset
    lfs f1, lbl_804A2480
    lfs f0, 0x3c(r31)
    fmuls f1, f1, f0
    bl __cvt_fp2unsigned
    cmpwi r3, 0x0
    stw r3, 0x10(r31)
    bne lbl_802A08B4
    li r0, 0x1
    stw r0, 0x10(r31)
lbl_802A08B4:
    lfs f1, lbl_804A248C
    li r0, 0x0
    lfs f0, 0x40(r31)
    lfs f2, lbl_804A2488
    fmuls f3, f1, f0
    lfs f1, 0x44(r31)
    lfs f0, lbl_804A2490
    fsubs f2, f2, f1
    stw r0, 0xc(r31)
    fctiwz f1, f3
    fcmpo cr0, f2, f0
    stfd f1, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x18(r31)
    ble lbl_802A08F4
    fmr f2, f0
lbl_802A08F4:
    lfs f3, lbl_804A248C
    li r0, 0x0
    lfs f1, 0x50(r31)
    li r3, 0x1
    lfs f0, 0x54(r31)
    fmuls f2, f3, f2
    fmuls f1, f3, f1
    stw r0, 0x1c(r31)
    fmuls f0, f3, f0
    fctiwz f2, f2
    stw r0, 0x20(r31)
    fctiwz f1, f1
    fctiwz f0, f0
    stw r0, 0x24(r31)
    stfd f2, 0x10(r1)
    stfd f1, 0x18(r1)
    lwz r5, 0x14(r1)
    stfd f0, 0x20(r1)
    lwz r4, 0x1c(r1)
    lwz r0, 0x24(r1)
    stw r5, 0x28(r31)
    stw r4, 0x2c(r31)
    stw r0, 0x30(r31)
lbl_802A0950:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

