#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/dolphin_trk_glue.cpp
// Total functions: 13

// Small Data symbols (@sda21)
float TRK_Use_BBA;
float lbl_804A16E8;

// Global data symbols (@ha/@l)
u8 PPCHalt[];
u8 at_stringBase0_80360170[];
u8 gDBCommTable[];
u8 gdev_cc_close[];
u8 gdev_cc_initialize[];
u8 gdev_cc_initinterrupts[];
u8 gdev_cc_open[];
u8 gdev_cc_peek[];
u8 gdev_cc_post_stop[];
u8 gdev_cc_pre_continue[];
u8 gdev_cc_read[];
u8 gdev_cc_shutdown[];
u8 gdev_cc_write[];

// Forward declarations
void DCFlushRange();
void ICInvalidateRange();
void InitMetroTRKCommTable();
void InitializeProgramEndTrap();
void OSEnableScheduler();
void OSReport();
void ReserveEXI2Port();
void TRKEXICallBack();
void TRKInitializeIntDrivenUART();
void TRKInterruptHandler();
void TRKLoadContext();
void TRKUARTInterruptHandler();
void TRK_board_display();
void UnreserveEXI2Port();
void fn_801A3B2C();
void fn_801A4424();
void fn_801A4450();
void fn_801A4464();
void fn_801A44A0();

// ----------------------------------------------------------------------------
// TRKLoadContext
// ----------------------------------------------------------------------------
asm void TRKLoadContext() {
    nofralloc
    lwz r0, 0x0(r3)
    lwz r1, 0x4(r3)
    lwz r2, 0x8(r3)
    lhz r5, 0x1a2(r3)
    rlwinm. r6, r5, 0, 30, 30
    beq lbl_801A41FC
    rlwinm r5, r5, 0, 31, 29
    sth r5, 0x1a2(r3)
    lmw r5, 0x14(r3)
    b lbl_801A4200
lbl_801A41FC:
    lmw r13, 0x34(r3)
lbl_801A4200:
    mr r31, r3
    mr r3, r4
    lwz r4, 0x80(r31)
    mtcrf 255, r4
    lwz r4, 0x84(r31)
    mtlr r4
    lwz r4, 0x88(r31)
    mtctr r4
    lwz r4, 0x8c(r31)
    mtxer r4
    mfmsr r4
    rlwinm r4, r4, 0, 17, 15
    rlwinm r4, r4, 0, 31, 29
    mtmsr r4
    mtsprg 1, r2
    lwz r4, 0xc(r31)
    mtsprg 2, r4
    lwz r4, 0x10(r31)
    mtsprg 3, r4
    lwz r2, 0x198(r31)
    lwz r4, 0x19c(r31)
    lwz r31, 0x7c(r31)
    b TRKInterruptHandler
}

// ----------------------------------------------------------------------------
// TRKEXICallBack
// ----------------------------------------------------------------------------
asm void TRKEXICallBack() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl OSEnableScheduler
    mr r3, r31
    li r4, 0x500
    bl TRKLoadContext
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// InitMetroTRKCommTable
// ----------------------------------------------------------------------------
asm void InitMetroTRKCommTable() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r4, r31
    stw r30, 0x8(r1)
    lis r30, at_stringBase0_80360170@ha
    addi r3, r30, at_stringBase0_80360170@l
    opword 0x4CC63182
    bl OSReport
    addi r30, r30, at_stringBase0_80360170@l
    li r4, 0x40
    addi r3, r30, 0x15
    opword 0x4CC63182
    bl OSReport
    cmpwi r31, 0x2
    li r0, 0x0
    stb r0, TRK_Use_BBA
    bne lbl_801A42EC
    li r3, 0x0
    b lbl_801A43B4
lbl_801A42EC:
    cmpwi r31, 0x1
    bne lbl_801A4388
    addi r3, r30, 0x3a
    opword 0x4CC63182
    bl OSReport
    lis r3, gDBCommTable@ha
    lis r30, gdev_cc_initialize@ha
    lis r31, gdev_cc_open@ha
    lis r11, gdev_cc_close@ha
    lis r10, gdev_cc_read@ha
    lis r9, gdev_cc_write@ha
    lis r8, gdev_cc_shutdown@ha
    lis r7, gdev_cc_peek@ha
    lis r6, gdev_cc_pre_continue@ha
    lis r5, gdev_cc_post_stop@ha
    lis r4, gdev_cc_initinterrupts@ha
    addi r30, r30, gdev_cc_initialize@l
    addi r12, r3, gDBCommTable@l
    addi r31, r31, gdev_cc_open@l
    addi r11, r11, gdev_cc_close@l
    addi r10, r10, gdev_cc_read@l
    addi r9, r9, gdev_cc_write@l
    addi r8, r8, gdev_cc_shutdown@l
    addi r7, r7, gdev_cc_peek@l
    addi r6, r6, gdev_cc_pre_continue@l
    addi r5, r5, gdev_cc_post_stop@l
    addi r4, r4, gdev_cc_initinterrupts@l
    stw r30, gDBCommTable@l(r3)
    li r3, 0x0
    stw r31, 0x18(r12)
    stw r11, 0x1c(r12)
    stw r10, 0x10(r12)
    stw r9, 0x14(r12)
    stw r8, 0x8(r12)
    stw r7, 0xc(r12)
    stw r6, 0x20(r12)
    stw r5, 0x24(r12)
    stw r4, 0x4(r12)
    b lbl_801A43B4
lbl_801A4388:
    mr r4, r31
    addi r3, r30, 0x5b
    opword 0x4CC63182
    bl OSReport
    addi r3, r30, 0x86
    opword 0x4CC63182
    bl OSReport
    addi r3, r30, 0xb5
    opword 0x4CC63182
    bl OSReport
    li r3, 0x1
lbl_801A43B4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// TRKUARTInterruptHandler
// ----------------------------------------------------------------------------
asm void TRKUARTInterruptHandler() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// TRKInitializeIntDrivenUART
// ----------------------------------------------------------------------------
asm void TRKInitializeIntDrivenUART() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, TRKEXICallBack@ha
    mr r3, r5
    stw r0, 0x14(r1)
    addi r4, r4, TRKEXICallBack@l
    stw r31, 0xc(r1)
    lis r31, gDBCommTable@ha
    lwz r12, gDBCommTable@l(r31)
    mtctr r12
    bctrl
    addi r3, r31, gDBCommTable@l
    lwz r12, 0x18(r3)
    mtctr r12
    bctrl
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A4424
// ----------------------------------------------------------------------------
asm void fn_801A4424() {
    nofralloc
    lbz r0, TRK_Use_BBA
    cmpwi r0, 0x0
    bnelr
    lis r3, gDBCommTable@ha
    addi r3, r3, gDBCommTable@l
    lwz r12, 0x4(r3)
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// fn_801A4450
// ----------------------------------------------------------------------------
asm void fn_801A4450() {
    nofralloc
    lis r3, gDBCommTable@ha
    addi r3, r3, gDBCommTable@l
    lwz r12, 0xc(r3)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_801A4464
// ----------------------------------------------------------------------------
asm void fn_801A4464() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, gDBCommTable@ha
    stw r0, 0x14(r1)
    addi r5, r5, gDBCommTable@l
    lwz r12, 0x10(r5)
    mtctr r12
    bctrl
    neg r0, r3
    or r0, r0, r3
    srawi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A44A0
// ----------------------------------------------------------------------------
asm void fn_801A44A0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, gDBCommTable@ha
    stw r0, 0x14(r1)
    addi r5, r5, gDBCommTable@l
    lwz r12, 0x14(r5)
    mtctr r12
    bctrl
    neg r0, r3
    or r0, r0, r3
    srawi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// ReserveEXI2Port
// ----------------------------------------------------------------------------
asm void ReserveEXI2Port() {
    nofralloc
    lis r3, gDBCommTable@ha
    addi r3, r3, gDBCommTable@l
    lwz r12, 0x24(r3)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// UnreserveEXI2Port
// ----------------------------------------------------------------------------
asm void UnreserveEXI2Port() {
    nofralloc
    lis r3, gDBCommTable@ha
    addi r3, r3, gDBCommTable@l
    lwz r12, 0x20(r3)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// TRK_board_display
// ----------------------------------------------------------------------------
asm void TRK_board_display() {
    nofralloc
    lis r5, at_stringBase0_80360170@ha
    mr r4, r3
    addi r5, r5, at_stringBase0_80360170@l
    addi r3, r5, 0xdd
    opword 0x4CC63182
    b OSReport
}

// ----------------------------------------------------------------------------
// InitializeProgramEndTrap
// ----------------------------------------------------------------------------
asm void InitializeProgramEndTrap() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r4, lbl_804A16E8
    li r5, 0x4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, PPCHalt@ha
    addi r31, r31, PPCHalt@l
    addi r3, r31, 0x4
    bl fn_801A3B2C
    addi r3, r31, 0x4
    li r4, 0x4
    bl ICInvalidateRange
    addi r3, r31, 0x4
    li r4, 0x4
    bl DCFlushRange
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

