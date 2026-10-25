#include "types.h"

// Translation unit: src/revolution/bte/bta_hh_utils.cpp
// Total functions: 5

// Small Data symbols (@sda21)
extern float lbl_8049CF78;
extern float lbl_8049E000;
extern float lbl_804A2810;

// Global data symbols (@ha/@l)
extern u8 lbl_80373C10[];
extern u8 lbl_80373C94[];
extern u8 lbl_80453D48[];

// Forward declarations
extern void GKI_getbuf();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void LogMsg_3();
extern void LogMsg_4();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_26();
extern void _savegpr_27();
extern void bta_hh_add_device_to_list();
extern void bta_hh_clean_up_kdev();
extern void bta_hh_find_cb();
extern void bta_hh_tod_spt();
extern void bta_hh_trace_dev_db();
extern void fn_802A59E8();
extern void fn_802A5A1C();
extern void fn_802A6134();
extern void memcpy();
extern void memset();

// ----------------------------------------------------------------------------
// bta_hh_find_cb
// ----------------------------------------------------------------------------
asm void bta_hh_find_cb() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_80453D48@ha
    lis r30, lbl_80373C10@ha
    mr r27, r3
    li r28, 0x0
    addi r30, r30, lbl_80373C10@l
    addi r31, r31, lbl_80453D48@l
lbl_802AB534:
    clrlslwi r29, r28, 24, 5
    mr r3, r27
    add r4, r31, r29
    addi r4, r4, 0x18
    bl fn_802A5A1C
    cmpwi r3, 0x0
    bne lbl_802AB590
    mr r3, r27
    la r4, lbl_804A2810
    bl fn_802A5A1C
    cmpwi r3, 0x0
    beq lbl_802AB590
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802AB588
    add r3, r31, r29
    addi r4, r30, 0x0
    lbz r6, 0x26(r3)
    clrlwi r5, r28, 24
    li r3, 0x504
    bl LogMsg_2
lbl_802AB588:
    mr r3, r28
    b lbl_802AB62C
lbl_802AB590:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802AB5BC
    add r8, r31, r29
    addi r4, r30, 0x24
    lbz r5, 0x28(r8)
    clrlwi r6, r28, 24
    lbz r7, 0x26(r8)
    li r3, 0x504
    lbz r8, 0x2c(r8)
    bl LogMsg_4
lbl_802AB5BC:
    addi r28, r28, 0x1
    cmplwi r28, 0x10
    blt lbl_802AB534
    lis r4, lbl_80453D48@ha
    li r0, 0x10
    addi r4, r4, lbl_80453D48@l
    li r29, 0x0
    mtctr r0
lbl_802AB5DC:
    clrlslwi r0, r29, 24, 5
    add r3, r4, r0
    lbz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_802AB600
    mr r4, r27
    addi r3, r3, 0x18
    bl fn_802A59E8
    b lbl_802AB608
lbl_802AB600:
    addi r29, r29, 0x1
    bdnz lbl_802AB5DC
lbl_802AB608:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802AB628
    addi r4, r30, 0x58
    clrlwi r5, r29, 24
    li r3, 0x504
    li r6, 0x10
    bl LogMsg_2
lbl_802AB628:
    mr r3, r29
lbl_802AB62C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// bta_hh_clean_up_kdev
// ----------------------------------------------------------------------------
asm void bta_hh_clean_up_kdev() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r5, 0x16(r3)
    cmplwi r5, 0xff
    beq lbl_802AB67C
    lis r4, lbl_80453D48@ha
    li r0, 0x10
    addi r4, r4, lbl_80453D48@l
    add r4, r4, r5
    stb r0, 0x214(r4)
lbl_802AB67C:
    lbz r31, 0x12(r3)
    addi r3, r3, 0x4
    bl fn_802A6134
    mr r3, r30
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r3, 0x1
    li r0, 0xff
    stb r31, 0x12(r30)
    stb r3, 0x1c(r30)
    stb r0, 0x16(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// bta_hh_add_device_to_list
// ----------------------------------------------------------------------------
asm void bta_hh_add_device_to_list() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lbz r0, lbl_8049E000
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmplwi r0, 0x5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    blt lbl_802AB710
    lis r4, lbl_80373C94@ha
    mr r5, r30
    addi r4, r4, lbl_80373C94@l
    li r3, 0x504
    bl LogMsg_1
lbl_802AB710:
    li r0, 0x1
    cmpwi r29, 0x0
    stb r27, 0x16(r26)
    stb r0, 0x18(r26)
    sth r28, 0xe(r26)
    stb r30, 0x13(r26)
    stb r31, 0x15(r26)
    beq lbl_802AB768
    addi r3, r26, 0x4
    bl fn_802A6134
    lhz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_802AB768
    bl GKI_getbuf
    cmpwi r3, 0x0
    stw r3, 0x4(r26)
    beq lbl_802AB768
    lhz r0, 0x0(r29)
    sth r0, 0x0(r26)
    lwz r4, 0x4(r29)
    lhz r5, 0x0(r29)
    bl memcpy
lbl_802AB768:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// bta_hh_tod_spt
// ----------------------------------------------------------------------------
asm void bta_hh_tod_spt() {
    nofralloc
    lwz r7, lbl_8049CF78
    extrwi r9, r4, 6, 24
    li r8, 0x0
    lbz r5, 0x0(r7)
    b lbl_802AB7C0
lbl_802AB794:
    lwz r4, 0x4(r7)
    clrlslwi r6, r8, 24, 1
    lbzx r0, r4, r6
    cmplw r9, r0
    bne lbl_802AB7BC
    add r4, r4, r6
    lbz r0, 0x1(r4)
    stb r0, 0x15(r3)
    li r3, 0x1
    blr
lbl_802AB7BC:
    addi r8, r8, 0x1
lbl_802AB7C0:
    clrlwi r0, r8, 24
    cmplw r0, r5
    blt lbl_802AB794
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// bta_hh_trace_dev_db
// ----------------------------------------------------------------------------
asm void bta_hh_trace_dev_db() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_80373C10@ha
    addi r30, r30, lbl_80373C10@l
    stw r29, 0x14(r1)
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802AB80C
    addi r4, r30, 0x1e4
    li r3, 0x504
    bl LogMsg_0
lbl_802AB80C:
    lis r3, lbl_80453D48@ha
    li r29, 0x0
    addi r31, r3, lbl_80453D48@l
lbl_802AB818:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802AB844
    clrlslwi r0, r29, 24, 5
    addi r4, r30, 0x220
    add r7, r31, r0
    clrlwi r5, r29, 24
    lbz r6, 0x28(r7)
    li r3, 0x504
    lbz r7, 0x26(r7)
    bl LogMsg_3
lbl_802AB844:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802AB874
    clrlslwi r0, r29, 24, 5
    addi r4, r30, 0x244
    add r8, r31, r0
    li r3, 0x504
    lhz r5, 0x1e(r8)
    lbz r6, 0x2c(r8)
    lbz r7, 0x23(r8)
    lbz r8, 0x22(r8)
    bl LogMsg_4
lbl_802AB874:
    addi r29, r29, 0x1
    cmplwi r29, 0x10
    blt lbl_802AB818
    lbz r0, lbl_8049E000
    cmplwi r0, 0x5
    blt lbl_802AB898
    addi r4, r30, 0x280
    li r3, 0x504
    bl LogMsg_0
lbl_802AB898:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

