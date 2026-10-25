#include "types.h"

// Translation unit: src/revolution/bte/bte_logmsg.cpp
// Total functions: 8

// Small Data symbols (@sda21)
extern float lbl_8049CF88;
extern float lbl_8049DFF0;

// Global data symbols (@ha/@l)
extern u8 lbl_80452240[];

// Forward declarations
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void LogMsg_3();
extern void LogMsg_4();
extern void LogMsg_5();
extern void LogMsg_6();
extern void OSReport();
extern void fn_802A52DC();
extern void sprintf();
extern void vsprintf();

// ----------------------------------------------------------------------------
// fn_802A52DC
// ----------------------------------------------------------------------------
asm void fn_802A52DC() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    bne cr1, lbl_802A5314
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_802A5314:
    addi r11, r1, 0x88
    addi r0, r1, 0x8
    lis r12, 0x200
    stw r4, 0xc(r1)
    addi r30, r1, 0x68
    lis r31, lbl_80452240@ha
    stw r3, 0x8(r1)
    addi r3, r31, lbl_80452240@l
    stw r5, 0x10(r1)
    mr r5, r30
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    bl vsprintf
    addi r3, r31, lbl_80452240@l
    la r4, lbl_8049CF88
    mr r5, r3
    opword 0x4CC63182
    bl sprintf
    addi r3, r31, lbl_80452240@l
    opword 0x4CC63182
    bl OSReport
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// LogMsg_0
// ----------------------------------------------------------------------------
asm void LogMsg_0() {
    nofralloc
    lbz r0, lbl_8049DFF0
    cmpwi r0, 0x0
    bnelr
    opword 0x4CC63182
    b fn_802A52DC
    blr
}

// ----------------------------------------------------------------------------
// LogMsg_1
// ----------------------------------------------------------------------------
asm void LogMsg_1() {
    nofralloc
    lbz r0, lbl_8049DFF0
    cmpwi r0, 0x0
    bnelr
    opword 0x4CC63182
    b fn_802A52DC
    blr
}

// ----------------------------------------------------------------------------
// LogMsg_2
// ----------------------------------------------------------------------------
asm void LogMsg_2() {
    nofralloc
    lbz r0, lbl_8049DFF0
    cmpwi r0, 0x0
    bnelr
    opword 0x4CC63182
    b fn_802A52DC
    blr
}

// ----------------------------------------------------------------------------
// LogMsg_3
// ----------------------------------------------------------------------------
asm void LogMsg_3() {
    nofralloc
    lbz r0, lbl_8049DFF0
    cmpwi r0, 0x0
    bnelr
    opword 0x4CC63182
    b fn_802A52DC
    blr
}

// ----------------------------------------------------------------------------
// LogMsg_4
// ----------------------------------------------------------------------------
asm void LogMsg_4() {
    nofralloc
    lbz r0, lbl_8049DFF0
    cmpwi r0, 0x0
    bnelr
    opword 0x4CC63182
    b fn_802A52DC
    blr
}

// ----------------------------------------------------------------------------
// LogMsg_5
// ----------------------------------------------------------------------------
asm void LogMsg_5() {
    nofralloc
    lbz r0, lbl_8049DFF0
    cmpwi r0, 0x0
    bnelr
    opword 0x4CC63182
    b fn_802A52DC
    blr
}

// ----------------------------------------------------------------------------
// LogMsg_6
// ----------------------------------------------------------------------------
asm void LogMsg_6() {
    nofralloc
    lbz r0, lbl_8049DFF0
    cmpwi r0, 0x0
    bnelr
    opword 0x4CC63182
    b fn_802A52DC
    blr
}

