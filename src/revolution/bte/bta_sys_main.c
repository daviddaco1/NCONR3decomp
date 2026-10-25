#include "types.h"

// Translation unit: src/revolution/bte/bta_sys_main.cpp
// Total functions: 9

// Small Data symbols (@sda21)
extern float lbl_8049CF80;
extern float lbl_8049E000;

// Global data symbols (@ha/@l)
extern u8 lbl_80373240[];
extern u8 lbl_80373254[];
extern u8 lbl_80453AD8[];

// Forward declarations
extern void GKI_freebuf();
extern void GKI_get_taskid();
extern void GKI_send_msg();
extern void LogMsg_1();
extern void bta_dm_immediate_disable();
extern void bta_sys_disable();
extern void bta_sys_event();
extern void bta_sys_init();
extern void bta_sys_register();
extern void bta_sys_sendmsg();
extern void bta_sys_set_trace_level();
extern void bta_sys_start_timer();
extern void bta_sys_stop_timer();
extern void bta_sys_timer_update();
extern void memset();
extern void ptim_init();
extern void ptim_start_timer();
extern void ptim_stop_timer();
extern void ptim_timer_update();

// ----------------------------------------------------------------------------
// bta_sys_init
// ----------------------------------------------------------------------------
asm void bta_sys_init() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x8c
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80453AD8@ha
    addi r3, r31, lbl_80453AD8@l
    bl memset
    lwz r5, lbl_8049CF80
    addi r31, r31, lbl_80453AD8@l
    addi r3, r31, 0x68
    li r4, 0x3e8
    lbz r5, 0x3(r5)
    bl ptim_init
    bl GKI_get_taskid
    stb r3, 0x7d(r31)
    lwz r3, lbl_8049CF80
    lbz r0, 0x4(r3)
    stb r0, lbl_8049E000
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// bta_sys_event
// ----------------------------------------------------------------------------
asm void bta_sys_event() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, lbl_8049E000
    cmplwi r0, 0x4
    blt lbl_802A5DB0
    lis r4, lbl_80373240@ha
    lhz r5, 0x0(r30)
    addi r4, r4, lbl_80373240@l
    li r3, 0x503
    bl LogMsg_1
lbl_802A5DB0:
    lis r3, lbl_80453AD8@ha
    lhz r4, 0x0(r30)
    addi r3, r3, lbl_80453AD8@l
    lbz r0, 0x7e(r3)
    srawi r5, r4, 8
    cmpwi r0, 0x0
    beq lbl_802A5DE4
    cmplwi r4, 0x101
    bne lbl_802A5DD8
    bl bta_dm_immediate_disable
lbl_802A5DD8:
    mr r3, r30
    bl GKI_freebuf
    b lbl_802A5E48
lbl_802A5DE4:
    clrlwi r0, r5, 24
    cmplwi r0, 0x1a
    bge lbl_802A5E18
    clrlslwi r0, r5, 24, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    beq lbl_802A5E18
    lwz r12, 0x0(r3)
    mr r3, r30
    mtctr r12
    bctrl
    mr r31, r3
    b lbl_802A5E38
lbl_802A5E18:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x2
    blt lbl_802A5E38
    lis r4, lbl_80373254@ha
    clrlwi r5, r5, 24
    addi r4, r4, lbl_80373254@l
    li r3, 0x501
    bl LogMsg_1
lbl_802A5E38:
    clrlwi. r0, r31, 24
    beq lbl_802A5E48
    mr r3, r30
    bl GKI_freebuf
lbl_802A5E48:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// bta_sys_timer_update
// ----------------------------------------------------------------------------
asm void bta_sys_timer_update() {
    nofralloc
    lis r3, lbl_80453AD8@ha
    addi r3, r3, lbl_80453AD8@l
    lbz r0, 0x7c(r3)
    cmpwi r0, 0x0
    bnelr
    addi r3, r3, 0x68
    b ptim_timer_update
    blr
}

// ----------------------------------------------------------------------------
// bta_sys_register
// ----------------------------------------------------------------------------
asm void bta_sys_register() {
    nofralloc
    lis r5, lbl_80453AD8@ha
    clrlslwi r0, r3, 24, 2
    addi r5, r5, lbl_80453AD8@l
    stwx r4, r5, r0
    blr
}

// ----------------------------------------------------------------------------
// bta_sys_sendmsg
// ----------------------------------------------------------------------------
asm void bta_sys_sendmsg() {
    nofralloc
    lwz r4, lbl_8049CF80
    lis r6, lbl_80453AD8@ha
    addi r6, r6, lbl_80453AD8@l
    mr r5, r3
    lbz r3, 0x7d(r6)
    lbz r4, 0x2(r4)
    b GKI_send_msg
}

// ----------------------------------------------------------------------------
// bta_sys_start_timer
// ----------------------------------------------------------------------------
asm void bta_sys_start_timer() {
    nofralloc
    lis r7, lbl_80453AD8@ha
    mr r0, r4
    addi r7, r7, lbl_80453AD8@l
    mr r6, r5
    mr r4, r3
    mr r5, r0
    addi r3, r7, 0x68
    b ptim_start_timer
}

// ----------------------------------------------------------------------------
// bta_sys_stop_timer
// ----------------------------------------------------------------------------
asm void bta_sys_stop_timer() {
    nofralloc
    lis r5, lbl_80453AD8@ha
    mr r4, r3
    addi r5, r5, lbl_80453AD8@l
    addi r3, r5, 0x68
    b ptim_stop_timer
}

// ----------------------------------------------------------------------------
// bta_sys_disable
// ----------------------------------------------------------------------------
asm void bta_sys_disable() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80453AD8@ha
    addi r31, r31, lbl_80453AD8@l
    stw r30, 0x8(r1)
    li r30, 0x0
lbl_802A5F04:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_802A5F24
    lwz r12, 0x4(r3)
    cmpwi r12, 0x0
    beq lbl_802A5F24
    mtctr r12
    bctrl
lbl_802A5F24:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0x1a
    blt lbl_802A5F04
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// bta_sys_set_trace_level
// ----------------------------------------------------------------------------
asm void bta_sys_set_trace_level() {
    nofralloc
    stb r3, lbl_8049E000
    blr
}

