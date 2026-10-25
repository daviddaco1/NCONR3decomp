#include "types.h"

// Translation unit: src/revolution/bte/btu_task1.cpp
// Total functions: 4

// Small Data symbols (@sda21)
extern float lbl_8049CF98;
extern float lbl_8049CF9C;
extern float lbl_8049DFF8;
extern float lbl_8049DFFC;

// Global data symbols (@ha/@l)
extern u8 lbl_80453A50[];

// Forward declarations
extern void GKI_disable();
extern void GKI_enable();
extern void GKI_freebuf();
extern void GKI_read_mbox();
extern void GKI_remove_from_timer_list();
extern void OSGetTime();
extern void _restgpr_26();
extern void _savegpr_26();
extern void bta_sys_event();
extern void bta_sys_init();
extern void bta_sys_timer_update();
extern void btm_acl_timeout();
extern void btm_dev_timeout();
extern void btm_discovery_timeout();
extern void btm_inq_rmt_name_failed();
extern void btm_route_sco_data();
extern void btu_hcif_cmd_timeout();
extern void btu_hcif_process_event();
extern void btu_hcif_send_cmd();
extern void btu_start_timer();
extern void btu_stop_timer();
extern void btu_task_init();
extern void btu_task_msg_handler();
extern void fn_802A3A2C();
extern void fn_802A3AB8();
extern void fn_802A52B0();
extern void fn_802B6F60();
extern void hidh_proc_repage_timeout();
extern void l2c_link_segments_xmitted();
extern void l2c_process_timeout();
extern void l2c_rcv_acl_data();
extern void rfcomm_process_timeout();
extern void sdp_conn_timeout();

// ----------------------------------------------------------------------------
// btu_task_init
// ----------------------------------------------------------------------------
asm void btu_task_init() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0x14(r1)
    li r0, 0x0
    stb r3, lbl_8049CF98
    stw r3, lbl_8049CF9C
    stw r0, lbl_8049DFF8
    stw r0, lbl_8049DFFC
    bl fn_802B6F60
    bl fn_802A52B0
    bl bta_sys_init
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btu_task_msg_handler
// ----------------------------------------------------------------------------
asm void btu_task_msg_handler() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    li r30, 0x0
    bl OSGetTime
    lwz r3, lbl_8049DFF8
    addi r0, r3, 0x1
    stw r0, lbl_8049DFF8
    bl GKI_disable
    lwz r0, lbl_8049CF9C
    cmpwi r0, 0x0
    beq lbl_802A5624
    li r3, 0x0
    li r0, 0x1
    stw r3, lbl_8049CF9C
    stb r0, lbl_8049CF98
    b lbl_802A5638
lbl_802A5624:
    lbz r3, lbl_8049CF98
    addi r0, r3, 0x1
    stb r0, lbl_8049CF98
    bl GKI_enable
    b lbl_802A594C
lbl_802A5638:
    bl GKI_enable
    lwz r3, lbl_8049DFFC
    li r31, 0x5
    lwz r4, lbl_8049DFF8
    addi r0, r3, 0x1f4
    cmplw r4, r0
    ble lbl_802A565C
    stw r4, lbl_8049DFFC
    ori r31, r31, 0x30
lbl_802A565C:
    lis r3, lbl_80453A50@ha
    addi r29, r3, lbl_80453A50@l
    b lbl_802A593C
lbl_802A5668:
    clrlwi. r0, r31, 31
    li r30, 0x1
    beq lbl_802A5780
    b lbl_802A576C
lbl_802A5678:
    lhz r0, 0x0(r3)
    li r30, 0x0
    rlwinm r28, r0, 0, 16, 23
    cmpwi r28, 0x1200
    beq lbl_802A56D8
    bge lbl_802A56A8
    cmpwi r28, 0x1100
    beq lbl_802A56C0
    bge lbl_802A5704
    cmpwi r28, 0x1000
    beq lbl_802A56E4
    b lbl_802A5704
lbl_802A56A8:
    cmpwi r28, 0x1900
    beq lbl_802A56CC
    bge lbl_802A5704
    cmpwi r28, 0x1600
    beq lbl_802A56F8
    b lbl_802A5704
lbl_802A56C0:
    mr r3, r27
    bl l2c_rcv_acl_data
    b lbl_802A576C
lbl_802A56CC:
    mr r3, r27
    bl l2c_link_segments_xmitted
    b lbl_802A576C
lbl_802A56D8:
    mr r3, r27
    bl btm_route_sco_data
    b lbl_802A576C
lbl_802A56E4:
    mr r3, r27
    bl btu_hcif_process_event
    mr r3, r27
    bl GKI_freebuf
    b lbl_802A576C
lbl_802A56F8:
    mr r3, r27
    bl btu_hcif_send_cmd
    b lbl_802A576C
lbl_802A5704:
    li r26, 0x0
    li r4, 0x0
    b lbl_802A5748
lbl_802A5710:
    clrlslwi r0, r26, 24, 3
    add r3, r29, r0
    lwz r12, 0x14(r3)
    cmpwi cr1, r12, 0x0
    beq cr1, lbl_802A5744
    lhz r0, 0x10(r3)
    cmplw r28, r0
    bne lbl_802A5744
    beq cr1, lbl_802A5744
    mr r3, r27
    mtctr r12
    bctrl
    li r4, 0x1
lbl_802A5744:
    addi r26, r26, 0x1
lbl_802A5748:
    cmpwi r4, 0x0
    bne lbl_802A575C
    clrlwi r0, r26, 24
    cmplwi r0, 0x6
    blt lbl_802A5710
lbl_802A575C:
    cmpwi r4, 0x0
    bne lbl_802A576C
    mr r3, r27
    bl GKI_freebuf
lbl_802A576C:
    li r3, 0x0
    bl GKI_read_mbox
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_802A5678
lbl_802A5780:
    rlwinm. r0, r31, 0, 27, 27
    beq lbl_802A58FC
    addi r3, r29, 0x40
    li r4, 0x1
    bl fn_802A3A2C
    rlwinm r0, r31, 0, 28, 26
    clrlwi r31, r0, 16
    b lbl_802A58E4
lbl_802A57A0:
    mr r4, r28
    addi r3, r29, 0x40
    li r30, 0x0
    bl GKI_remove_from_timer_list
    lhz r0, 0x14(r28)
    cmpwi r0, 0xa
    beq lbl_802A584C
    bge lbl_802A57EC
    cmpwi r0, 0x5
    beq lbl_802A5840
    bge lbl_802A57DC
    cmpwi r0, 0x1
    beq lbl_802A581C
    bge lbl_802A5834
    b lbl_802A5890
lbl_802A57DC:
    cmpwi r0, 0x8
    beq lbl_802A5854
    bge lbl_802A5828
    b lbl_802A5890
lbl_802A57EC:
    cmpwi r0, 0x3c
    beq lbl_802A5868
    bge lbl_802A5810
    cmpwi r0, 0x16
    beq lbl_802A587C
    bge lbl_802A5890
    cmpwi r0, 0xd
    bge lbl_802A5890
    b lbl_802A585C
lbl_802A5810:
    cmpwi r0, 0x42
    beq lbl_802A5870
    b lbl_802A5890
lbl_802A581C:
    mr r3, r28
    bl btm_dev_timeout
    b lbl_802A58E4
lbl_802A5828:
    mr r3, r28
    bl btm_acl_timeout
    b lbl_802A58E4
lbl_802A5834:
    mr r3, r28
    bl l2c_process_timeout
    b lbl_802A58E4
lbl_802A5840:
    lwz r3, 0x10(r28)
    bl sdp_conn_timeout
    b lbl_802A58E4
lbl_802A584C:
    bl btm_inq_rmt_name_failed
    b lbl_802A58E4
lbl_802A5854:
    bl btm_discovery_timeout
    b lbl_802A58E4
lbl_802A585C:
    mr r3, r28
    bl rfcomm_process_timeout
    b lbl_802A58E4
lbl_802A5868:
    bl btu_hcif_cmd_timeout
    b lbl_802A58E4
lbl_802A5870:
    mr r3, r28
    bl hidh_proc_repage_timeout
    b lbl_802A58E4
lbl_802A587C:
    lwz r12, 0x10(r28)
    mr r3, r28
    mtctr r12
    bctrl
    b lbl_802A58E4
lbl_802A5890:
    li r27, 0x0
    li r4, 0x0
    b lbl_802A58D0
lbl_802A589C:
    clrlslwi r0, r27, 24, 3
    add r3, r29, r0
    lwz r12, 0x4(r3)
    cmpwi r12, 0x0
    beq lbl_802A58CC
    lwz r0, 0x0(r3)
    cmplw r0, r28
    bne lbl_802A58CC
    mr r3, r28
    mtctr r12
    bctrl
    li r4, 0x1
lbl_802A58CC:
    addi r27, r27, 0x1
lbl_802A58D0:
    cmpwi r4, 0x0
    bne lbl_802A58E4
    clrlwi r0, r27, 24
    cmplwi r0, 0x2
    blt lbl_802A589C
lbl_802A58E4:
    lwz r28, 0x40(r29)
    cmpwi r28, 0x0
    beq lbl_802A58FC
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    beq lbl_802A57A0
lbl_802A58FC:
    rlwinm. r0, r31, 0, 29, 29
    beq lbl_802A5920
    b lbl_802A5910
lbl_802A5908:
    li r30, 0x0
    bl bta_sys_event
lbl_802A5910:
    li r3, 0x2
    bl GKI_read_mbox
    cmpwi r3, 0x0
    bne lbl_802A5908
lbl_802A5920:
    rlwinm. r0, r31, 0, 26, 26
    beq lbl_802A5934
    rlwinm r0, r31, 0, 27, 25
    clrlwi r31, r0, 16
    bl bta_sys_timer_update
lbl_802A5934:
    rlwinm. r0, r31, 0, 16, 16
    bne lbl_802A5944
lbl_802A593C:
    cmpwi r30, 0x0
    beq lbl_802A5668
lbl_802A5944:
    li r0, 0x1
    stw r0, lbl_8049CF9C
lbl_802A594C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btu_start_timer
// ----------------------------------------------------------------------------
asm void btu_start_timer() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80453A50@ha
    addi r31, r31, lbl_80453A50@l
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    mr r4, r28
    addi r3, r31, 0x40
    bl GKI_remove_from_timer_list
    sth r29, 0x14(r28)
    mr r4, r28
    addi r3, r31, 0x40
    stw r30, 0xc(r28)
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
// btu_stop_timer
// ----------------------------------------------------------------------------
asm void btu_stop_timer() {
    nofralloc
    lis r5, lbl_80453A50@ha
    mr r4, r3
    addi r5, r5, lbl_80453A50@l
    addi r3, r5, 0x40
    b GKI_remove_from_timer_list
}

