#include "types.h"

// Translation unit: src/revolution/bte/ptim.cpp
// Total functions: 4

// Forward declarations
extern void GKI_getbuf();
extern void GKI_remove_from_timer_list();
extern void GKI_stop_timer();
extern void bta_sys_sendmsg();
extern void fn_802A3840();
extern void fn_802A3A18();
extern void fn_802A3A2C();
extern void fn_802A3AB8();
extern void ptim_init();
extern void ptim_start_timer();
extern void ptim_stop_timer();
extern void ptim_timer_update();

// ----------------------------------------------------------------------------
// ptim_init
// ----------------------------------------------------------------------------
asm void ptim_init() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_802A3A18
    stw r30, 0xc(r29)
    stb r31, 0x10(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ptim_timer_update
// ----------------------------------------------------------------------------
asm void ptim_timer_update() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0xc(r3)
    bl fn_802A3A2C
    b lbl_802A6014
lbl_802A5FC4:
    mr r3, r30
    mr r4, r31
    bl GKI_remove_from_timer_list
    lwz r12, 0x8(r31)
    cmpwi r12, 0x0
    beq lbl_802A5FEC
    mr r3, r31
    mtctr r12
    bctrl
    b lbl_802A6014
lbl_802A5FEC:
    lhz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_802A6014
    li r3, 0x8
    bl GKI_getbuf
    cmpwi r3, 0x0
    beq lbl_802A6014
    lhz r0, 0x14(r31)
    sth r0, 0x0(r3)
    bl bta_sys_sendmsg
lbl_802A6014:
    lwz r31, 0x0(r30)
    cmpwi r31, 0x0
    beq lbl_802A602C
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    ble lbl_802A5FC4
lbl_802A602C:
    cmpwi r31, 0x0
    bne lbl_802A603C
    lbz r3, 0x10(r30)
    bl GKI_stop_timer
lbl_802A603C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// ptim_start_timer
// ----------------------------------------------------------------------------
asm void ptim_start_timer() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_802A60B4
    lis r4, 0x6666
    lwz r0, 0xc(r28)
    addi r4, r4, 0x6667
    lbz r3, 0x10(r3)
    mulhw r0, r4, r0
    li r5, 0x1
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r4, r0, r4
    bl fn_802A3840
lbl_802A60B4:
    mr r3, r28
    mr r4, r29
    bl GKI_remove_from_timer_list
    sth r30, 0x14(r29)
    mr r3, r28
    mr r4, r29
    stw r31, 0xc(r29)
    bl fn_802A3AB8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ptim_stop_timer
// ----------------------------------------------------------------------------
asm void ptim_stop_timer() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl GKI_remove_from_timer_list
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_802A6120
    lbz r3, 0x10(r31)
    bl GKI_stop_timer
lbl_802A6120:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

