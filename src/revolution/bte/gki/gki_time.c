#include "types.h"

// Translation unit: src/revolution/bte/gki/gki_time.cpp
// Total functions: 5

// Small Data symbols (@sda21)
extern float lbl_8049DE28;
extern float lbl_8049DE4D;

// Global data symbols (@ha/@l)
extern u8 lbl_8036E698[];
extern u8 lbl_8036E6B0[];
extern u8 lbl_8040FC00[];

// Forward declarations
extern void BTA_DmSearchCancel();
extern void BTM_SetAfhChannels();
extern void GKI_add_to_timer_list();
extern void GKI_init_timer_list();
extern void GKI_start_timer();
extern void GKI_update_timer_list();
extern void OSCreateAlarm();
extern void OSDisableInterrupts();
extern void OSGetTime();
extern void OSRestoreInterrupts();
extern void OSSetPeriodicAlarm();
extern void _restgpr_25();
extern void _savegpr_25();
extern void fn_80295A6C();
extern void fn_80297C80();
extern void fn_8029ABCC();

// ----------------------------------------------------------------------------
// GKI_start_timer
// ----------------------------------------------------------------------------
asm void GKI_start_timer() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r31, lbl_8040FC00@ha
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r25, r6
    addi r31, r31, lbl_8040FC00@l
    li r27, 0x0
    bl OSDisableInterrupts
    lbz r26, 0x708(r31)
    extsb r26, r26
    bl OSRestoreInterrupts
    cmplwi r26, 0x3
    bne lbl_80297BC0
    bl OSDisableInterrupts
    lbz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_80297B18
    lbz r0, 0xd(r31)
    cmpwi r0, 0x0
    bne lbl_80297B18
    lbz r0, 0xf(r31)
    cmplwi r0, 0x4
    bne lbl_80297B18
    lbz r0, 0x10(r31)
    cmplwi r0, 0x6
    bne lbl_80297B18
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_80297B20
lbl_80297B18:
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_80297B20:
    cmpwi r0, 0x0
    bne lbl_80297BC0
    bl OSDisableInterrupts
    neg r0, r25
    li r7, 0x1
    or r0, r0, r25
    li r5, 0x0
    srwi r6, r0, 31
    li r4, 0x32
    li r0, 0xc8
    stb r30, lbl_8049DE4D
    mr r30, r3
    addi r3, r31, 0x710
    stb r7, 0xc(r31)
    stb r29, 0x6e8(r31)
    stb r28, 0x6e9(r31)
    stb r6, 0x6e7(r31)
    stb r5, 0x6e6(r31)
    sth r4, 0x748(r31)
    sth r0, 0x74a(r31)
    bl OSCreateAlarm
    bl OSGetTime
    lis r5, 0x8000
    lis r9, fn_80295A6C@ha
    lwz r0, 0xf8(r5)
    lis r6, 0x1062
    mr r5, r3
    addi r9, r9, fn_80295A6C@l
    addi r3, r6, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    mr r6, r4
    addi r3, r31, 0x710
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x14
    bl OSSetPeriodicAlarm
    mr r3, r30
    bl OSRestoreInterrupts
    li r27, 0x1
lbl_80297BC0:
    addi r11, r1, 0x30
    mr r3, r27
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// GKI_init_timer_list
// ----------------------------------------------------------------------------
asm void GKI_init_timer_list() {
    nofralloc
    li r3, 0x1
    li r4, -0x1
    li r5, 0x0
    li r6, 0x1
    b GKI_start_timer
}

// ----------------------------------------------------------------------------
// GKI_update_timer_list
// ----------------------------------------------------------------------------
asm void GKI_update_timer_list() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    lis r29, lbl_8040FC00@ha
    addi r29, r29, lbl_8040FC00@l
    stw r0, lbl_8049DE28
    bl OSDisableInterrupts
    lbz r0, 0x708(r29)
    mr r31, r3
    cmpwi r0, 0x3
    bne lbl_80297C58
    lbz r0, 0x6e8(r29)
    extsb. r0, r0
    beq lbl_80297C54
    lbz r0, 0xc(r29)
    cmplwi r0, 0x3
    bne lbl_80297C4C
    bl BTA_DmSearchCancel
lbl_80297C4C:
    li r0, 0x0
    stb r0, 0x6e8(r29)
lbl_80297C54:
    li r30, 0x1
lbl_80297C58:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80297C80
// ----------------------------------------------------------------------------
asm void fn_80297C80() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    lis r29, lbl_8040FC00@ha
    addi r29, r29, lbl_8040FC00@l
    bl OSDisableInterrupts
    lbz r0, 0x708(r29)
    mr r31, r3
    cmpwi r0, 0x3
    bne lbl_80297CE0
    lbz r0, 0x6e8(r29)
    extsb. r0, r0
    beq lbl_80297CDC
    lbz r0, 0xc(r29)
    cmplwi r0, 0x3
    bne lbl_80297CD4
    bl BTA_DmSearchCancel
lbl_80297CD4:
    li r0, 0x0
    stb r0, 0x6e8(r29)
lbl_80297CDC:
    li r30, 0x1
lbl_80297CE0:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GKI_add_to_timer_list
// ----------------------------------------------------------------------------
asm void GKI_add_to_timer_list() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_8036E698@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    lis r30, lbl_8040FC00@ha
    addi r30, r30, lbl_8040FC00@l
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r4, lbl_8036E698@l
    opword 0x4CC63182
    bl fn_8029ABCC
    extsb. r0, r29
    blt lbl_80297D50
    cmpwi r0, 0xd
    ble lbl_80297D58
lbl_80297D50:
    li r3, 0x0
    b lbl_80297DD8
lbl_80297D58:
    bl OSDisableInterrupts
    lbz r30, 0x708(r30)
    extsb r30, r30
    bl OSRestoreInterrupts
    cmplwi r30, 0x3
    bne lbl_80297DD4
    extsb. r3, r29
    bne lbl_80297D84
    li r0, 0xff
    li r4, 0xff
    b lbl_80297DAC
lbl_80297D84:
    addi r3, r3, 0x1
    slwi r0, r3, 2
    add r3, r0, r3
    subic. r0, r3, 0xe
    addi r4, r3, 0xe
    bge lbl_80297DA0
    li r0, 0x0
lbl_80297DA0:
    cmpwi r4, 0x4e
    ble lbl_80297DAC
    li r4, 0x4e
lbl_80297DAC:
    clrlwi r3, r0, 24
    clrlwi r4, r4, 24
    bl BTM_SetAfhChannels
    mr r0, r3
    lis r3, lbl_8036E6B0@ha
    addi r3, r3, lbl_8036E6B0@l
    clrlwi r4, r0, 24
    opword 0x4CC63182
    bl fn_8029ABCC
    li r31, 0x1
lbl_80297DD4:
    mr r3, r31
lbl_80297DD8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

