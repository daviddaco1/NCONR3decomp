#include "types.h"

// Translation unit: src/revolution/bte/bte_main.cpp
// Total functions: 4

// Small Data symbols (@sda21)
extern float lbl_8049CF48;
extern float lbl_8049CF90;
extern float lbl_8049DFE8;
extern float lbl_8049DFEC;
extern float lbl_8049DFF4;

// Global data symbols (@ha/@l)
extern u8 btu_task_msg_handler[];
extern u8 lbl_80341560[];
extern u8 lbl_80452A20[];
extern u8 lbl_80453A20[];

// Forward declarations
extern void BTA_CleanUp();
extern void BTA_DmIsDeviceUp();
extern void BTA_Init();
extern void BTUInterruptHandler();
extern void GKI_delay();
extern void GKI_enable();
extern void GKI_init();
extern void GKI_run();
extern void GKI_shutdown();
extern void OSCancelAlarm();
extern void OSCreateAlarm();
extern void OSGetTime();
extern void OSSetPeriodicAlarm();
extern void OSSwitchFiber();
extern void bta_usb_close_evt();
extern void bte_hcisu_close();
extern void bte_hcisu_task();
extern void btu_task_init();
extern void fn_802B6F8C();

// ----------------------------------------------------------------------------
// BTUInterruptHandler
// ----------------------------------------------------------------------------
asm void BTUInterruptHandler() {
    nofralloc
    lis r4, lbl_80452A20@ha
    lis r3, btu_task_msg_handler@ha
    addi r4, r4, lbl_80452A20@l
    addi r3, r3, btu_task_msg_handler@l
    addi r4, r4, 0x1000
    b OSSwitchFiber
}

// ----------------------------------------------------------------------------
// BTA_Init
// ----------------------------------------------------------------------------
asm void BTA_Init() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    stw r0, lbl_8049DFF4
    bl GKI_init
    bl GKI_enable
    bl fn_802B6F8C
    lis r4, lbl_80341560@ha
    la r0, lbl_8049CF90
    addi r4, r4, lbl_80341560@l
    stw r0, lbl_8049DFEC
    li r3, 0x0
    stw r4, lbl_8049DFE8
    bl bte_hcisu_task
    b lbl_802A54A4
lbl_802A549C:
    li r3, 0x64
    bl GKI_delay
lbl_802A54A4:
    lwz r0, lbl_8049CF48
    cmpwi r0, 0x0
    bne lbl_802A549C
    bl btu_task_init
    lis r31, lbl_80453A20@ha
    addi r3, r31, lbl_80453A20@l
    bl OSCreateAlarm
    bl OSGetTime
    lis r5, 0x8000
    lis r9, BTUInterruptHandler@ha
    lwz r0, 0xf8(r5)
    lis r6, 0x1062
    mr r5, r3
    addi r9, r9, BTUInterruptHandler@l
    addi r3, r6, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r3, r0
    mr r6, r4
    addi r3, r31, lbl_80453A20@l
    li r7, 0x0
    rlwinm r8, r0, 27, 5, 30
    bl OSSetPeriodicAlarm
    li r3, 0x0
    bl GKI_run
    b lbl_802A5510
lbl_802A5508:
    li r3, 0x7d0
    bl GKI_delay
lbl_802A5510:
    bl BTA_DmIsDeviceUp
    clrlwi. r0, r3, 24
    beq lbl_802A5508
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// BTA_CleanUp
// ----------------------------------------------------------------------------
asm void BTA_CleanUp() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r3, lbl_8049DFF4
    lis r3, lbl_80453A20@ha
    addi r3, r3, lbl_80453A20@l
    bl OSCancelAlarm
    bl bte_hcisu_close
    bl GKI_shutdown
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// bta_usb_close_evt
// ----------------------------------------------------------------------------
asm void bta_usb_close_evt() {
    nofralloc
    lwz r12, lbl_8049DFF4
    cmpwi r12, 0x0
    beqlr
    extsb. r0, r3
    blt lbl_802A5588
    li r3, 0x0
    mtctr r12
    bctr
lbl_802A5588:
    li r3, 0x1
    mtctr r12
    bctr
    blr
}

