#include "types.h"

// Translation unit: src/revolution/bte/l2c_link.cpp
// Total functions: 17

// Global data symbols (@ha/@l)
extern u8 lbl_80376E18[];
extern u8 lbl_80376E38[];
extern u8 lbl_80376E60[];
extern u8 lbl_80376E88[];
extern u8 lbl_80376EBC[];
extern u8 lbl_80376EE4[];
extern u8 lbl_80376FC8[];
extern u8 lbl_80377010[];
extern u8 lbl_80377030[];
extern u8 lbl_80377050[];
extern u8 lbl_80453A50[];
extern u8 lbl_80453F78[];
extern u8 lbl_80457040[];

// Forward declarations
extern void BTM_ReadPowerMode();
extern void BTM_SetPowerMode();
extern void GKI_dequeue();
extern void GKI_enqueue();
extern void GKI_enqueue_head();
extern void GKI_freebuf();
extern void GKI_getpoolbuf();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void LogMsg_6();
extern void _restgpr_23();
extern void _restgpr_24();
extern void _restgpr_26();
extern void _savegpr_23();
extern void _savegpr_24();
extern void _savegpr_26();
extern void bte_hcisu_send();
extern void btm_acl_created();
extern void btm_find_dev();
extern void btm_sco_acl_removed();
extern void btm_sec_disconnect();
extern void btm_sec_is_bonding();
extern void btsnd_hcic_accept_conn();
extern void btsnd_hcic_reject_conn();
extern void btu_start_timer();
extern void btu_stop_timer();
extern void l2c_csm_execute();
extern void l2c_link_adjust_allocation();
extern void l2c_link_check_send_pkts();
extern void l2c_link_hci_conn_comp();
extern void l2c_link_hci_conn_req();
extern void l2c_link_hci_disc_comp();
extern void l2c_link_hci_qos_violation();
extern void l2c_link_process_num_completed_pkts();
extern void l2c_link_processs_num_bufs();
extern void l2c_link_role_change_failed();
extern void l2c_link_role_changed();
extern void l2c_link_sec_comp();
extern void l2c_link_segments_xmitted();
extern void l2c_link_send_to_lower();
extern void l2c_link_timeout();
extern void l2c_pin_code_request();
extern void l2c_process_held_packets();
extern void l2cap_link_chk_pkt_end();
extern void l2cap_link_chk_pkt_start();
extern void l2cu_allocate_lcb();
extern void l2cu_create_conn();
extern void l2cu_create_conn_after_switch();
extern void l2cu_find_lcb_by_bd_addr();
extern void l2cu_find_lcb_by_handle();
extern void l2cu_find_lcb_by_state();
extern void l2cu_get_conn_role();
extern void l2cu_lcb_disconnecting();
extern void l2cu_release_lcb();
extern void l2cu_send_peer_echo_req();
extern void memcpy();

// ----------------------------------------------------------------------------
// l2c_link_hci_conn_req
// ----------------------------------------------------------------------------
asm void l2c_link_hci_conn_req() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_802BFE98
    mr r3, r29
    bl l2cu_find_lcb_by_bd_addr
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802BFE24
    mr r3, r29
    bl l2cu_allocate_lcb
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802BFDEC
    mr r3, r30
    mr r4, r29
    li r5, 0x14
    bl btsnd_hcic_reject_conn
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x1
    blt lbl_802BFE98
    lis r4, lbl_80376E18@ha
    lis r3, 0x8
    addi r4, r4, lbl_80376E18@l
    bl LogMsg_0
    b lbl_802BFE98
lbl_802BFDEC:
    bl l2cu_get_conn_role
    mr r0, r3
    stb r3, 0x30(r31)
    mr r3, r30
    mr r4, r29
    clrlwi r5, r0, 24
    bl btsnd_hcic_accept_conn
    li r0, 0x3
    addi r3, r31, 0x10
    stw r0, 0x4(r31)
    li r4, 0x2
    li r5, 0x3c
    bl btu_start_timer
    b lbl_802BFE98
lbl_802BFE24:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x3
    beq lbl_802BFE38
    cmpwi r0, 0x1
    bne lbl_802BFE54
lbl_802BFE38:
    lbz r5, 0x30(r31)
    mr r3, r30
    mr r4, r29
    bl btsnd_hcic_accept_conn
    li r0, 0x3
    stw r0, 0x4(r31)
    b lbl_802BFE98
lbl_802BFE54:
    cmpwi r0, 0x5
    bne lbl_802BFE70
    mr r3, r30
    mr r4, r29
    li r5, 0x15
    bl btsnd_hcic_reject_conn
    b lbl_802BFE98
lbl_802BFE70:
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x1
    blt lbl_802BFE90
    lis r4, lbl_80376E38@ha
    lis r3, 0x8
    addi r4, r4, lbl_80376E38@l
    bl LogMsg_0
lbl_802BFE90:
    mr r3, r30
    bl GKI_freebuf
lbl_802BFE98:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// l2c_link_hci_conn_comp
// ----------------------------------------------------------------------------
asm void l2c_link_hci_conn_comp() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    li r5, 0x6
    stw r29, 0x24(r1)
    mr r29, r4
    mr r4, r30
    stw r28, 0x20(r1)
    mr r28, r3
    stb r3, 0xe(r1)
    addi r3, r1, 0x8
    bl memcpy
    addi r3, r1, 0x8
    bl l2cu_find_lcb_by_bd_addr
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802BFF40
    mr r3, r29
    bl btm_sec_is_bonding
    clrlwi. r0, r3, 24
    bne lbl_802BFF38
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802BFF38
    lis r3, 0x8
    lis r4, lbl_80376E60@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80376E60@l
    bl LogMsg_0
lbl_802BFF38:
    li r3, 0x0
    b lbl_802C00CC
lbl_802BFF40:
    lwz r5, 0x4(r3)
    cmpwi r5, 0x3
    beq lbl_802BFF8C
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x1
    blt lbl_802BFF70
    lis r4, lbl_80376E88@ha
    mr r6, r28
    lis r3, 0x8
    addi r4, r4, lbl_80376E88@l
    bl LogMsg_2
lbl_802BFF70:
    cmpwi r28, 0x0
    beq lbl_802BFF84
    lhz r3, 0x28(r31)
    mr r4, r28
    bl l2c_link_hci_disc_comp
lbl_802BFF84:
    li r3, 0x0
    b lbl_802C00CC
lbl_802BFF8C:
    sth r29, 0x28(r3)
    lbz r0, 0xe(r1)
    cmpwi r0, 0x0
    bne lbl_802C0070
    li r0, 0x4
    stw r0, 0x4(r3)
    mr r3, r30
    bl btm_find_dev
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_802BFFD4
    lbz r7, 0x30(r31)
    addi r4, r5, 0x22
    mr r6, r29
    addi r3, r1, 0x8
    addi r5, r5, 0x35
    bl btm_acl_created
    b lbl_802BFFEC
lbl_802BFFD4:
    lbz r7, 0x30(r31)
    mr r6, r29
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl btm_acl_created
lbl_802BFFEC:
    li r3, 0x0
    bl l2c_process_held_packets
    addi r3, r31, 0x10
    bl btu_stop_timer
    lwz r30, 0x8(r31)
    b lbl_802C0018
lbl_802C0004:
    mr r3, r30
    addi r5, r1, 0x8
    li r4, 0x0
    bl l2c_csm_execute
    lwz r30, 0x8(r30)
lbl_802C0018:
    cmpwi r30, 0x0
    bne lbl_802C0004
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    beq lbl_802C0050
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl l2cu_send_peer_echo_req
    addi r3, r31, 0x10
    li r4, 0x2
    li r5, 0x1e
    bl btu_start_timer
    b lbl_802C00C8
lbl_802C0050:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_802C00C8
    addi r3, r31, 0x10
    li r4, 0x2
    li r5, 0x3c
    bl btu_start_timer
    b lbl_802C00C8
lbl_802C0070:
    cmplwi r0, 0x9
    bne lbl_802C009C
    bl l2cu_lcb_disconnecting
    clrlwi. r0, r3, 24
    beq lbl_802C009C
    li r0, 0x1
    lis r3, 0x1
    stw r0, 0x4(r31)
    subi r0, r3, 0x1
    sth r0, 0x28(r31)
    b lbl_802C00C8
lbl_802C009C:
    lwz r3, 0x8(r31)
    b lbl_802C00B8
lbl_802C00A4:
    lwz r30, 0x8(r3)
    addi r5, r1, 0x8
    li r4, 0x1
    bl l2c_csm_execute
    mr r3, r30
lbl_802C00B8:
    cmpwi r3, 0x0
    bne lbl_802C00A4
    mr r3, r31
    bl l2cu_release_lcb
lbl_802C00C8:
    li r3, 0x1
lbl_802C00CC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// l2c_link_sec_comp
// ----------------------------------------------------------------------------
asm void l2c_link_sec_comp() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r5
    mr r4, r31
    stb r5, 0xe(r1)
    li r5, 0x6
    bl memcpy
    mr r3, r31
    bl l2cu_find_lcb_by_bd_addr
    cmpwi r3, 0x0
    bne lbl_802C0154
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C0188
    lis r3, 0x8
    lis r4, lbl_80376EBC@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80376EBC@l
    bl LogMsg_0
    b lbl_802C0188
lbl_802C0154:
    cntlzw r0, r30
    lwz r3, 0x8(r3)
    extrwi r0, r0, 1, 26
    neg r31, r0
    b lbl_802C0180
lbl_802C0168:
    addi r0, r31, 0x8
    lwz r30, 0x8(r3)
    clrlwi r4, r0, 24
    addi r5, r1, 0x8
    bl l2c_csm_execute
    mr r3, r30
lbl_802C0180:
    cmpwi r3, 0x0
    bne lbl_802C0168
lbl_802C0188:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// l2c_link_hci_disc_comp
// ----------------------------------------------------------------------------
asm void l2c_link_hci_disc_comp() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x1
    stw r29, 0x14(r1)
    stb r4, 0x8(r1)
    bl l2cu_find_lcb_by_handle
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802C01D8
    li r30, 0x0
    b lbl_802C0228
lbl_802C01D8:
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x27bf(r4)
    cmplwi r0, 0xe
    beq lbl_802C01F4
    lbz r0, 0x8(r1)
    stb r0, 0x27bf(r4)
lbl_802C01F4:
    lwz r3, 0x8(r3)
    b lbl_802C0210
lbl_802C01FC:
    lwz r29, 0x8(r3)
    addi r5, r1, 0x8
    li r4, 0x3
    bl l2c_csm_execute
    mr r3, r29
lbl_802C0210:
    cmpwi r3, 0x0
    bne lbl_802C01FC
    addi r3, r31, 0x2a
    bl btm_sco_acl_removed
    mr r3, r31
    bl l2cu_release_lcb
lbl_802C0228:
    li r3, 0x1
    bl l2cu_find_lcb_by_state
    cmpwi r3, 0x0
    beq lbl_802C023C
    bl l2cu_create_conn
lbl_802C023C:
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
// l2c_link_hci_qos_violation
// ----------------------------------------------------------------------------
asm void l2c_link_hci_qos_violation() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl l2cu_find_lcb_by_handle
    cmpwi r3, 0x0
    bne lbl_802C0280
    li r3, 0x0
    b lbl_802C02B8
lbl_802C0280:
    lwz r31, 0x8(r3)
    b lbl_802C02AC
lbl_802C0288:
    lwz r3, 0x30(r31)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_802C02A8
    mr r3, r31
    li r4, 0x6
    li r5, 0x0
    bl l2c_csm_execute
lbl_802C02A8:
    lwz r31, 0x8(r31)
lbl_802C02AC:
    cmpwi r31, 0x0
    bne lbl_802C0288
    li r3, 0x1
lbl_802C02B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// l2c_link_timeout
// ----------------------------------------------------------------------------
asm void l2c_link_timeout() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x2
    beq lbl_802C0308
    cmpwi r0, 0x3
    beq lbl_802C0308
    cmpwi r0, 0x1
    beq lbl_802C0308
    cmpwi r0, 0x5
    bne lbl_802C0334
lbl_802C0308:
    lwz r3, 0x8(r3)
    b lbl_802C0324
lbl_802C0310:
    lwz r31, 0x8(r3)
    li r4, 0x3
    li r5, 0x0
    bl l2c_csm_execute
    mr r3, r31
lbl_802C0324:
    cmpwi r3, 0x0
    bne lbl_802C0310
    mr r3, r30
    bl l2cu_release_lcb
lbl_802C0334:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x4
    bne lbl_802C0428
    lwz r12, 0x54(r30)
    cmpwi r12, 0x0
    beq lbl_802C03A8
    li r0, 0x0
    li r3, 0x2
    stw r0, 0x54(r30)
    mtctr r12
    bctrl
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C0384
    lis r3, 0x8
    lis r4, lbl_80376EE4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80376EE4@l
    bl LogMsg_0
lbl_802C0384:
    lwz r3, 0x8(r30)
    b lbl_802C03A0
lbl_802C038C:
    lwz r31, 0x8(r3)
    li r4, 0x3
    li r5, 0x0
    bl l2c_csm_execute
    mr r3, r31
lbl_802C03A0:
    cmpwi r3, 0x0
    bne lbl_802C038C
lbl_802C03A8:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_802C0418
    lhz r3, 0x28(r30)
    li r4, 0x13
    bl btm_sec_disconnect
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_802C03DC
    li r0, 0x5
    li r3, 0x1e
    stw r0, 0x4(r30)
    b lbl_802C03FC
lbl_802C03DC:
    cmpwi r0, 0x0
    bne lbl_802C03F8
    li r0, 0x5
    lis r3, 0x1
    stw r0, 0x4(r30)
    subi r3, r3, 0x1
    b lbl_802C03FC
lbl_802C03F8:
    li r3, 0x1
lbl_802C03FC:
    clrlwi r5, r3, 16
    cmplwi r5, 0xffff
    beq lbl_802C0428
    addi r3, r30, 0x10
    li r4, 0x2
    bl btu_start_timer
    b lbl_802C0428
lbl_802C0418:
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl l2c_link_check_send_pkts
lbl_802C0428:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// l2c_link_send_to_lower
// ----------------------------------------------------------------------------
asm void l2c_link_send_to_lower() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_80453A50@ha
    stw r0, 0x14(r1)
    addi r6, r6, lbl_80453A50@l
    mr r0, r4
    lhz r7, 0x2(r4)
    lhz r5, 0x7e(r6)
    cmplw r7, r5
    bgt lbl_802C04A4
    lhz r4, 0x36(r3)
    lis r6, lbl_80457040@ha
    lhz r5, 0x38(r3)
    addi r6, r6, lbl_80457040@l
    subi r7, r4, 0x1
    li r4, 0x2100
    addi r5, r5, 0x1
    sth r7, 0x36(r3)
    sth r5, 0x38(r3)
    mr r3, r0
    lhz r5, 0x4(r6)
    subi r0, r5, 0x1
    sth r0, 0x4(r6)
    bl bte_hcisu_send
    b lbl_802C0534
lbl_802C04A4:
    lhz r8, 0x7c(r6)
    lis r5, lbl_80457040@ha
    addi r5, r5, lbl_80457040@l
    add r6, r7, r8
    lhz r7, 0x4(r5)
    subi r5, r6, 0x5
    divw r5, r5, r8
    clrlwi r8, r5, 16
    cmplw r8, r7
    ble lbl_802C04DC
    sth r7, 0x6(r4)
    li r5, 0x1
    mr r8, r7
    stb r5, 0x40(r3)
lbl_802C04DC:
    lhz r6, 0x36(r3)
    clrlwi r5, r8, 16
    cmplw r5, r6
    ble lbl_802C04FC
    sth r6, 0x6(r4)
    li r4, 0x1
    mr r8, r6
    stb r4, 0x40(r3)
lbl_802C04FC:
    lis r6, lbl_80457040@ha
    li r4, 0x2100
    addi r6, r6, lbl_80457040@l
    lhz r5, 0x4(r6)
    subf r5, r8, r5
    sth r5, 0x4(r6)
    lhz r6, 0x36(r3)
    lhz r5, 0x38(r3)
    subf r6, r8, r6
    add r5, r5, r8
    sth r6, 0x36(r3)
    sth r5, 0x38(r3)
    mr r3, r0
    bl bte_hcisu_send
lbl_802C0534:
    lwz r0, 0x14(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// l2c_link_check_send_pkts
// ----------------------------------------------------------------------------
asm void l2c_link_check_send_pkts() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r5, 0x0
    lis r31, lbl_80376E18@ha
    mr r29, r3
    mr r30, r5
    addi r31, r31, lbl_80376E18@l
    beq lbl_802C0664
    lhz r4, 0x4c(r3)
    lhz r0, 0x3a(r3)
    cmplw r4, r0
    blt lbl_802C0614
    lbz r0, 0x41(r3)
    cmpwi r0, 0x0
    bne lbl_802C0614
    lwz r26, 0x8(r3)
    lis r28, 0x8
    lis r27, lbl_80457040@ha
    b lbl_802C0604
lbl_802C05A0:
    lbz r0, lbl_80457040@l(r27)
    cmplwi r0, 0x2
    blt lbl_802C05BC
    lhz r5, 0x14(r26)
    addi r3, r28, 0x1
    addi r4, r31, 0xe4
    bl LogMsg_1
lbl_802C05BC:
    lwz r3, 0x30(r26)
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_802C0600
    lbz r0, lbl_80457040@l(r27)
    cmplwi r0, 0x3
    blt lbl_802C05E8
    lhz r5, 0x14(r26)
    addi r3, r28, 0x2
    addi r4, r31, 0x110
    bl LogMsg_1
lbl_802C05E8:
    lwz r5, 0x30(r26)
    li r4, 0x1
    lhz r3, 0x14(r26)
    lwz r12, 0x28(r5)
    mtctr r12
    bctrl
lbl_802C0600:
    lwz r26, 0x8(r26)
lbl_802C0604:
    cmpwi r26, 0x0
    bne lbl_802C05A0
    li r0, 0x1
    stb r0, 0x41(r29)
lbl_802C0614:
    lhz r3, 0x4c(r29)
    lhz r0, 0x3e(r29)
    cmplw r3, r0
    bgt lbl_802C063C
    li r0, 0x0
    mr r4, r30
    sth r0, 0x6(r30)
    addi r3, r29, 0x44
    bl GKI_enqueue
    b lbl_802C0664
lbl_802C063C:
    mr r3, r30
    bl GKI_freebuf
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C0664
    lis r3, 0x8
    addi r4, r31, 0x150
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802C0664:
    lbz r0, 0x40(r29)
    cmpwi r0, 0x0
    bne lbl_802C07FC
    addi r3, r29, 0x2a
    addi r4, r1, 0x8
    bl BTM_ReadPowerMode
    clrlwi. r0, r3, 24
    bne lbl_802C06C8
    lbz r0, 0x8(r1)
    cmplwi r0, 0x3
    bne lbl_802C06C8
    lhz r0, 0x4c(r29)
    cmpwi r0, 0x0
    beq lbl_802C06C8
    li r0, 0x0
    addi r4, r29, 0x2a
    stb r0, 0x14(r1)
    addi r5, r1, 0xc
    li r3, 0x80
    bl BTM_SetPowerMode
    addi r3, r29, 0x10
    li r4, 0x2
    li r5, 0x1
    bl btu_start_timer
    b lbl_802C07FC
lbl_802C06C8:
    lis r28, lbl_80457040@ha
    addi r28, r28, lbl_80457040@l
    b lbl_802C0720
lbl_802C06D4:
    lwz r3, 0x44(r29)
    cmpwi r3, 0x0
    beq lbl_802C0738
    lhz r0, 0x6(r3)
    cmpwi r0, 0x0
    bne lbl_802C0738
    lbz r0, 0x40(r29)
    cmpwi r0, 0x0
    bne lbl_802C07FC
    addi r3, r29, 0x44
    bl GKI_dequeue
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_802C0738
    mr r3, r29
    mr r4, r30
    bl l2c_link_send_to_lower
    clrlwi. r0, r3, 24
    beq lbl_802C0738
lbl_802C0720:
    lhz r0, 0x4(r28)
    cmpwi r0, 0x0
    beq lbl_802C0738
    lhz r0, 0x36(r29)
    cmpwi r0, 0x0
    bne lbl_802C06D4
lbl_802C0738:
    lbz r0, 0x40(r29)
    cmpwi r0, 0x0
    bne lbl_802C07FC
    lhz r0, 0x4c(r29)
    cmpwi r0, 0x0
    beq lbl_802C076C
    lhz r0, 0x36(r29)
    cmpwi r0, 0x0
    beq lbl_802C076C
    addi r3, r29, 0x10
    li r4, 0x2
    li r5, 0x2
    bl btu_start_timer
lbl_802C076C:
    lbz r0, 0x41(r29)
    cmpwi r0, 0x0
    beq lbl_802C07FC
    lhz r3, 0x4c(r29)
    lhz r0, 0x3c(r29)
    cmplw r3, r0
    bgt lbl_802C07FC
    li r0, 0x0
    lwz r27, 0x8(r29)
    stb r0, 0x41(r29)
    lis r30, 0x8
    lis r28, lbl_80457040@ha
    b lbl_802C07F4
lbl_802C07A0:
    lwz r3, 0x30(r27)
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_802C07F0
    lbz r0, lbl_80457040@l(r28)
    cmplwi r0, 0x3
    blt lbl_802C07CC
    lhz r5, 0x14(r27)
    addi r3, r30, 0x2
    addi r4, r31, 0x170
    bl LogMsg_1
lbl_802C07CC:
    lwz r5, 0x30(r27)
    li r4, 0x0
    lhz r3, 0x14(r27)
    lwz r12, 0x28(r5)
    mtctr r12
    bctrl
    lbz r0, 0x41(r29)
    cmpwi r0, 0x0
    bne lbl_802C07FC
lbl_802C07F0:
    lwz r27, 0x8(r27)
lbl_802C07F4:
    cmpwi r27, 0x0
    bne lbl_802C07A0
lbl_802C07FC:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// l2c_link_adjust_allocation
// ----------------------------------------------------------------------------
asm void l2c_link_adjust_allocation() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r3, lbl_80457040@ha
    li r26, 0x0
    addi r3, r3, lbl_80457040@l
    lhz r4, 0x7b8(r3)
    cmpwi r4, 0x0
    beq lbl_802C0994
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_802C085C
    lbz r0, 0x62(r3)
    cmplwi r0, 0x1
    bne lbl_802C085C
    li r26, 0x1
lbl_802C085C:
    lbz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_802C0878
    lbz r0, 0xbe(r3)
    cmplwi r0, 0x1
    bne lbl_802C0878
    addi r26, r26, 0x1
lbl_802C0878:
    lbz r0, 0xc0(r3)
    cmpwi r0, 0x0
    beq lbl_802C0894
    lbz r0, 0x11a(r3)
    cmplwi r0, 0x1
    bne lbl_802C0894
    addi r26, r26, 0x1
lbl_802C0894:
    lbz r0, 0x11c(r3)
    cmpwi r0, 0x0
    beq lbl_802C08B0
    lbz r0, 0x176(r3)
    cmplwi r0, 0x1
    bne lbl_802C08B0
    addi r26, r26, 0x1
lbl_802C08B0:
    lis r30, lbl_80457040@ha
    li r29, 0x0
    addi r3, r30, lbl_80457040@l
    li r31, 0x3
    lhz r0, 0x2(r3)
    addi r28, r3, 0x8
    lis r24, 0x8
    lis r25, lbl_80376FC8@ha
    divw r3, r0, r4
    lis r23, 0x51ec
    addi r0, r3, 0x1
    clrlwi r27, r0, 16
lbl_802C08E0:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_802C0984
    cmpwi r26, 0x0
    beq lbl_802C0900
    lbz r0, 0x5a(r28)
    cmplwi r0, 0x1
    bne lbl_802C090C
lbl_802C0900:
    sth r27, 0x34(r28)
    sth r27, 0x36(r28)
    b lbl_802C0914
lbl_802C090C:
    sth r31, 0x34(r28)
    sth r31, 0x36(r28)
lbl_802C0914:
    lhz r0, 0x34(r28)
    subi r3, r23, 0x7ae1
    mulli r0, r0, 0x78
    mulhw r0, r3, r0
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    clrlwi r4, r0, 16
    sth r0, 0x3a(r28)
    subfc r0, r4, r31
    subfe r3, r0, r0
    subi r0, r4, 0x3
    and r3, r0, r3
    sth r3, 0x3c(r28)
    addi r0, r4, 0x2
    sth r0, 0x3e(r28)
    lbz r0, lbl_80457040@l(r30)
    cmplwi r0, 0x5
    blt lbl_802C0984
    lbz r6, 0x5a(r28)
    addi r3, r24, 0x4
    lhz r7, 0x36(r28)
    addi r4, r25, lbl_80376FC8@l
    lhz r8, 0x3a(r28)
    clrlwi r5, r29, 16
    lhz r9, 0x3c(r28)
    lhz r10, 0x3e(r28)
    bl LogMsg_6
lbl_802C0984:
    addi r29, r29, 0x1
    addi r28, r28, 0x5c
    cmplwi r29, 0x4
    blt lbl_802C08E0
lbl_802C0994:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// l2c_link_process_num_completed_pkts
// ----------------------------------------------------------------------------
asm void l2c_link_process_num_completed_pkts() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r28, lbl_80457040@ha
    lbz r31, 0x0(r3)
    addi r29, r3, 0x1
    li r30, 0x0
    addi r28, r28, lbl_80457040@l
    li r27, 0x0
    b lbl_802C0A6C
lbl_802C09DC:
    lbz r3, 0x1(r29)
    lbz r0, 0x3(r29)
    slwi r4, r3, 8
    lbz r5, 0x0(r29)
    lbz r3, 0x2(r29)
    slwi r0, r0, 8
    add r4, r5, r4
    addi r29, r29, 0x4
    add r0, r3, r0
    clrlwi r3, r4, 16
    clrlwi r26, r0, 16
    bl l2cu_find_lcb_by_handle
    cmpwi r3, 0x0
    beq lbl_802C0A68
    lhz r0, 0x36(r3)
    add r0, r0, r26
    sth r0, 0x36(r3)
    clrlwi r0, r0, 16
    lhz r4, 0x34(r3)
    cmplw r0, r4
    ble lbl_802C0A34
    sth r4, 0x36(r3)
lbl_802C0A34:
    lhz r0, 0x38(r3)
    cmplw r0, r26
    ble lbl_802C0A4C
    subf r0, r26, r0
    sth r0, 0x38(r3)
    b lbl_802C0A50
lbl_802C0A4C:
    sth r27, 0x38(r3)
lbl_802C0A50:
    lhz r0, 0x4(r28)
    li r4, 0x0
    li r5, 0x0
    add r0, r0, r26
    sth r0, 0x4(r28)
    bl l2c_link_check_send_pkts
lbl_802C0A68:
    addi r30, r30, 0x1
lbl_802C0A6C:
    clrlwi r0, r30, 24
    cmplw r0, r31
    blt lbl_802C09DC
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// l2c_link_processs_num_bufs
// ----------------------------------------------------------------------------
asm void l2c_link_processs_num_bufs() {
    nofralloc
    lis r4, lbl_80457040@ha
    addi r4, r4, lbl_80457040@l
    sth r3, 0x2(r4)
    sth r3, 0x4(r4)
    blr
}

// ----------------------------------------------------------------------------
// l2cap_link_chk_pkt_start
// ----------------------------------------------------------------------------
asm void l2cap_link_chk_pkt_start() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lhz r0, 0x4(r3)
    li r6, 0x0
    sth r6, 0x6(r3)
    lis r24, lbl_80457040@ha
    add r7, r3, r0
    mr r28, r3
    lbz r3, 0x9(r7)
    addi r25, r24, lbl_80457040@l
    lbz r0, 0xb(r7)
    slwi r4, r3, 8
    lbz r5, 0x8(r7)
    lbz r3, 0xa(r7)
    slwi r0, r0, 8
    add r4, r5, r4
    add r0, r3, r0
    stw r6, 0x7bc(r25)
    clrlwi r31, r0, 16
    extrwi r27, r4, 2, 18
    clrlwi r3, r4, 20
    bl l2cu_find_lcb_by_handle
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_802C0B1C
    mr r3, r28
    b lbl_802C0C5C
lbl_802C0B1C:
    cmplwi r27, 0x2
    bne lbl_802C0B70
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_802C0B58
    lbz r0, lbl_80457040@l(r24)
    cmplwi r0, 0x2
    blt lbl_802C0B50
    lis r3, 0x8
    lis r4, lbl_80377010@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80377010@l
    bl LogMsg_0
lbl_802C0B50:
    lwz r3, 0x50(r26)
    bl GKI_freebuf
lbl_802C0B58:
    lis r3, lbl_80457040@ha
    stw r28, 0x50(r26)
    addi r3, r3, lbl_80457040@l
    mr r30, r28
    stw r26, 0x7bc(r3)
    b lbl_802C0C48
lbl_802C0B70:
    lwz r30, 0x50(r3)
    cmpwi r30, 0x0
    beq lbl_802C0C44
    lhz r0, 0x4(r30)
    add r27, r30, r0
    lbz r0, 0xb(r27)
    lbz r4, 0xa(r27)
    slwi r0, r0, 8
    add r0, r4, r0
    clrlwi r29, r0, 16
    add r0, r29, r31
    cmpwi r0, 0x69f
    bgt lbl_802C0C0C
    stw r3, 0x7bc(r25)
    lhz r3, 0x2(r28)
    cmplwi r3, 0x4
    ble lbl_802C0BF0
    lhz r4, 0x4(r30)
    subi r5, r3, 0x4
    lhz r0, 0x4(r28)
    add r6, r30, r4
    lhz r3, 0x2(r30)
    add r4, r28, r0
    add r3, r6, r3
    addi r3, r3, 0x8
    addi r4, r4, 0xc
    bl memcpy
    lhz r3, 0x2(r30)
    lhz r0, 0x2(r28)
    add r3, r0, r3
    subi r0, r3, 0x4
    sth r0, 0x2(r30)
lbl_802C0BF0:
    mr r3, r28
    bl GKI_freebuf
    add r29, r29, r31
    stb r29, 0xa(r27)
    extrwi r0, r29, 8, 16
    stb r0, 0xb(r27)
    b lbl_802C0C48
lbl_802C0C0C:
    lbz r0, lbl_80457040@l(r24)
    cmplwi r0, 0x2
    blt lbl_802C0C2C
    lis r3, 0x8
    lis r4, lbl_80377030@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80377030@l
    bl LogMsg_0
lbl_802C0C2C:
    lwz r3, 0x50(r26)
    bl GKI_freebuf
    li r0, 0x0
    li r30, 0x0
    stw r0, 0x50(r26)
    b lbl_802C0C48
lbl_802C0C44:
    li r30, 0x0
lbl_802C0C48:
    cmpwi r30, 0x0
    bne lbl_802C0C58
    mr r3, r28
    bl GKI_freebuf
lbl_802C0C58:
    mr r3, r30
lbl_802C0C5C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// l2cap_link_chk_pkt_end
// ----------------------------------------------------------------------------
asm void l2cap_link_chk_pkt_end() {
    nofralloc
    lis r3, lbl_80457040@ha
    addi r3, r3, lbl_80457040@l
    lwz r6, 0x7bc(r3)
    cmpwi r6, 0x0
    beq lbl_802C0C94
    lwz r4, 0x50(r6)
    cmpwi r4, 0x0
    bne lbl_802C0C9C
lbl_802C0C94:
    li r3, 0x1
    blr
lbl_802C0C9C:
    lhz r0, 0x4(r4)
    lhz r3, 0x2(r4)
    add r5, r4, r0
    lbz r4, 0xd(r5)
    subi r0, r3, 0x8
    lbz r5, 0xc(r5)
    slwi r3, r4, 8
    add r3, r5, r3
    clrlwi r3, r3, 16
    cmpw r3, r0
    ble lbl_802C0CD0
    li r3, 0x0
    blr
lbl_802C0CD0:
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x50(r6)
    blr
}

// ----------------------------------------------------------------------------
// l2c_link_role_changed
// ----------------------------------------------------------------------------
asm void l2c_link_role_changed() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    bl l2cu_find_lcb_by_bd_addr
    cmpwi r3, 0x0
    beq lbl_802C0D08
    stb r30, 0x30(r3)
lbl_802C0D08:
    lis r3, lbl_80457040@ha
    li r30, 0x0
    addi r3, r3, lbl_80457040@l
    addi r31, r3, 0x8
lbl_802C0D18:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_802C0D38
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2
    bne lbl_802C0D38
    mr r3, r31
    bl l2cu_create_conn_after_switch
lbl_802C0D38:
    addi r30, r30, 0x1
    addi r31, r31, 0x5c
    cmpwi r30, 0x4
    blt lbl_802C0D18
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// l2c_link_role_change_failed
// ----------------------------------------------------------------------------
asm void l2c_link_role_change_failed() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80457040@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80457040@l
    stw r31, 0xc(r1)
    addi r31, r3, 0x8
    stw r30, 0x8(r1)
    li r30, 0x0
lbl_802C0D84:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_802C0DA4
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2
    bne lbl_802C0DA4
    mr r3, r31
    bl l2cu_create_conn_after_switch
lbl_802C0DA4:
    addi r30, r30, 0x1
    addi r31, r31, 0x5c
    cmpwi r30, 0x4
    blt lbl_802C0D84
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// l2c_link_segments_xmitted
// ----------------------------------------------------------------------------
asm void l2c_link_segments_xmitted() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lhz r0, 0x4(r3)
    add r3, r3, r0
    lbz r0, 0x9(r3)
    lbz r3, 0x8(r3)
    slwi r0, r0, 8
    add r0, r3, r0
    clrlwi r31, r0, 20
    mr r3, r31
    bl l2cu_find_lcb_by_handle
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802C0E4C
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C0E40
    lis r3, 0x8
    lis r4, lbl_80377050@ha
    mr r5, r31
    addi r3, r3, 0x1
    addi r4, r4, lbl_80377050@l
    bl LogMsg_1
lbl_802C0E40:
    mr r3, r29
    bl GKI_freebuf
    b lbl_802C0E8C
lbl_802C0E4C:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x4
    bne lbl_802C0E84
    li r31, 0x0
    mr r4, r29
    sth r31, 0x6(r29)
    addi r3, r3, 0x44
    bl GKI_enqueue_head
    stb r31, 0x40(r30)
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl l2c_link_check_send_pkts
    b lbl_802C0E8C
lbl_802C0E84:
    mr r3, r29
    bl GKI_freebuf
lbl_802C0E8C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// l2c_pin_code_request
// ----------------------------------------------------------------------------
asm void l2c_pin_code_request() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl l2cu_find_lcb_by_bd_addr
    cmpwi r3, 0x0
    beq lbl_802C0EDC
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_802C0EDC
    li r4, 0x2
    li r5, 0x78
    addi r3, r3, 0x10
    bl btu_start_timer
lbl_802C0EDC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

