#include "types.h"

// Translation unit: src/revolution/bte/hcicmds.cpp
// Total functions: 59

// Global data symbols (@ha/@l)
extern u8 lbl_80341890[];

// Forward declarations
extern void GKI_getpoolbuf();
extern void _restgpr_22();
extern void _restgpr_23();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_22();
extern void _savegpr_23();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void btsnd_hcic_accept_conn();
extern void btsnd_hcic_accept_esco_conn();
extern void btsnd_hcic_add_SCO_conn();
extern void btsnd_hcic_auth_request();
extern void btsnd_hcic_change_conn_type();
extern void btsnd_hcic_change_name();
extern void btsnd_hcic_create_conn();
extern void btsnd_hcic_delete_stored_key();
extern void btsnd_hcic_disconnect();
extern void btsnd_hcic_exit_park_mode();
extern void btsnd_hcic_exit_sniff_mode();
extern void btsnd_hcic_get_link_quality();
extern void btsnd_hcic_hold_mode();
extern void btsnd_hcic_inq_cancel();
extern void btsnd_hcic_inquiry();
extern void btsnd_hcic_link_key_neg_reply();
extern void btsnd_hcic_link_key_req_reply();
extern void btsnd_hcic_park_mode();
extern void btsnd_hcic_per_inq_mode();
extern void btsnd_hcic_pin_code_neg_reply();
extern void btsnd_hcic_pin_code_req_reply();
extern void btsnd_hcic_read_bd_addr();
extern void btsnd_hcic_read_buffer_size();
extern void btsnd_hcic_read_local_features();
extern void btsnd_hcic_read_local_ver();
extern void btsnd_hcic_read_rmt_clk_offset();
extern void btsnd_hcic_read_rssi();
extern void btsnd_hcic_read_stored_key();
extern void btsnd_hcic_reject_conn();
extern void btsnd_hcic_reject_esco_conn();
extern void btsnd_hcic_reset();
extern void btsnd_hcic_rmt_features_req();
extern void btsnd_hcic_rmt_name_req();
extern void btsnd_hcic_rmt_name_req_cancel();
extern void btsnd_hcic_rmt_ver_req();
extern void btsnd_hcic_set_afh_channels();
extern void btsnd_hcic_set_conn_encrypt();
extern void btsnd_hcic_set_event_filter();
extern void btsnd_hcic_set_host_buf_size();
extern void btsnd_hcic_setup_esco_conn();
extern void btsnd_hcic_sniff_mode();
extern void btsnd_hcic_switch_role();
extern void btsnd_hcic_vendor_spec_cmd();
extern void btsnd_hcic_write_auth_enable();
extern void btsnd_hcic_write_auto_flush_tout();
extern void btsnd_hcic_write_cur_iac_lap();
extern void btsnd_hcic_write_dev_class();
extern void btsnd_hcic_write_encr_mode();
extern void btsnd_hcic_write_inqscan_cfg();
extern void btsnd_hcic_write_inqscan_type();
extern void btsnd_hcic_write_inquiry_mode();
extern void btsnd_hcic_write_link_super_tout();
extern void btsnd_hcic_write_page_tout();
extern void btsnd_hcic_write_pagescan_cfg();
extern void btsnd_hcic_write_pagescan_type();
extern void btsnd_hcic_write_pin_type();
extern void btsnd_hcic_write_policy_set();
extern void btsnd_hcic_write_scan_enable();
extern void btsnd_hcic_write_stored_key();
extern void btu_hcif_send_cmd();
extern void strlen();

// ----------------------------------------------------------------------------
// btsnd_hcic_inquiry
// ----------------------------------------------------------------------------
asm void btsnd_hcic_inquiry() {
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
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B82AC
    li r3, 0x0
    b lbl_802B82FC
lbl_802B82AC:
    li r0, 0x8
    li r5, 0x0
    sth r0, 0x2(r3)
    li r4, 0x1
    li r0, 0x4
    li r6, 0x5
    sth r5, 0x4(r3)
    lbz r5, 0x2(r29)
    stb r4, 0x8(r3)
    lbz r4, 0x1(r29)
    stb r0, 0x9(r3)
    lbz r0, 0x0(r29)
    stb r6, 0xa(r3)
    stb r5, 0xb(r3)
    stb r4, 0xc(r3)
    stb r0, 0xd(r3)
    stb r30, 0xe(r3)
    stb r31, 0xf(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B82FC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_inq_cancel
// ----------------------------------------------------------------------------
asm void btsnd_hcic_inq_cancel() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x2
    stw r0, 0x14(r1)
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B833C
    li r3, 0x0
    b lbl_802B8368
lbl_802B833C:
    li r0, 0x3
    li r5, 0x0
    sth r0, 0x2(r3)
    li r4, 0x2
    li r0, 0x4
    sth r5, 0x4(r3)
    stb r4, 0x8(r3)
    stb r0, 0x9(r3)
    stb r5, 0xa(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8368:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_per_inq_mode
// ----------------------------------------------------------------------------
asm void btsnd_hcic_per_inq_mode() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B83B8
    li r3, 0x0
    b lbl_802B8420
lbl_802B83B8:
    li r0, 0xc
    li r5, 0x0
    sth r0, 0x2(r3)
    li r4, 0x3
    li r0, 0x4
    li r8, 0x9
    sth r5, 0x4(r3)
    srawi r7, r27, 8
    extrwi r6, r28, 8, 16
    lbz r5, 0x2(r29)
    stb r4, 0x8(r3)
    lbz r4, 0x1(r29)
    stb r0, 0x9(r3)
    lbz r0, 0x0(r29)
    stb r8, 0xa(r3)
    stb r27, 0xb(r3)
    stb r7, 0xc(r3)
    stb r28, 0xd(r3)
    stb r6, 0xe(r3)
    stb r5, 0xf(r3)
    stb r4, 0x10(r3)
    stb r0, 0x11(r3)
    stb r30, 0x12(r3)
    stb r31, 0x13(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8420:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_create_conn
// ----------------------------------------------------------------------------
asm void btsnd_hcic_create_conn() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B847C
    li r3, 0x0
    b lbl_802B8500
lbl_802B847C:
    li r4, 0x10
    li r0, 0x0
    sth r4, 0x2(r3)
    li r7, 0x5
    li r6, 0x4
    li r5, 0xd
    sth r0, 0x4(r3)
    srawi r4, r27, 8
    extrwi r0, r30, 8, 16
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r5, 0xa(r3)
    lbz r5, 0x5(r26)
    stb r5, 0xb(r3)
    lbz r5, 0x4(r26)
    stb r5, 0xc(r3)
    lbz r5, 0x3(r26)
    stb r5, 0xd(r3)
    lbz r5, 0x2(r26)
    stb r5, 0xe(r3)
    lbz r5, 0x1(r26)
    stb r5, 0xf(r3)
    lbz r5, 0x0(r26)
    stb r5, 0x10(r3)
    stb r27, 0x11(r3)
    stb r4, 0x12(r3)
    stb r28, 0x13(r3)
    stb r29, 0x14(r3)
    stb r30, 0x15(r3)
    stb r0, 0x16(r3)
    stb r31, 0x17(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8500:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_disconnect
// ----------------------------------------------------------------------------
asm void btsnd_hcic_disconnect() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B854C
    li r3, 0x0
    b lbl_802B8588
lbl_802B854C:
    li r7, 0x6
    li r6, 0x0
    sth r7, 0x2(r3)
    li r5, 0x4
    li r4, 0x3
    extrwi r0, r30, 8, 16
    sth r6, 0x4(r3)
    stb r7, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r30, 0xb(r3)
    stb r0, 0xc(r3)
    stb r31, 0xd(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8588:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_add_SCO_conn
// ----------------------------------------------------------------------------
asm void btsnd_hcic_add_SCO_conn() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B85D4
    li r3, 0x0
    b lbl_802B8614
lbl_802B85D4:
    li r7, 0x7
    li r6, 0x0
    sth r7, 0x2(r3)
    li r5, 0x4
    srawi r4, r30, 8
    extrwi r0, r31, 8, 16
    sth r6, 0x4(r3)
    stb r7, 0x8(r3)
    stb r5, 0x9(r3)
    stb r5, 0xa(r3)
    stb r30, 0xb(r3)
    stb r4, 0xc(r3)
    stb r31, 0xd(r3)
    stb r0, 0xe(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8614:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_accept_conn
// ----------------------------------------------------------------------------
asm void btsnd_hcic_accept_conn() {
    nofralloc
    li r9, 0xa
    li r8, 0x0
    li r7, 0x9
    li r6, 0x4
    li r0, 0x7
    sth r9, 0x2(r3)
    sth r8, 0x4(r3)
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r4)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r4)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r4)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r4)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r4)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r4)
    stb r0, 0x10(r3)
    stb r5, 0x11(r3)
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_reject_conn
// ----------------------------------------------------------------------------
asm void btsnd_hcic_reject_conn() {
    nofralloc
    li r8, 0xa
    li r7, 0x0
    li r6, 0x4
    li r0, 0x7
    sth r8, 0x2(r3)
    sth r7, 0x4(r3)
    stb r8, 0x8(r3)
    stb r6, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r4)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r4)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r4)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r4)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r4)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r4)
    stb r0, 0x10(r3)
    stb r5, 0x11(r3)
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_link_key_req_reply
// ----------------------------------------------------------------------------
asm void btsnd_hcic_link_key_req_reply() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    mr r30, r3
    mr r31, r4
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B871C
    li r3, 0x0
    b lbl_802B8870
lbl_802B871C:
    li r0, 0x19
    li r4, 0x0
    sth r0, 0x2(r3)
    li r0, 0xb
    li r6, 0x4
    li r5, 0x16
    sth r4, 0x4(r3)
    subfic r24, r4, 0xf
    li r25, 0x1
    li r27, 0x2
    stb r0, 0x8(r3)
    subfic r26, r25, 0xf
    subfic r28, r27, 0xf
    li r4, 0x3
    stb r6, 0x9(r3)
    subfic r29, r4, 0xf
    li r9, 0x5
    subfic r10, r6, 0xf
    stb r5, 0xa(r3)
    subfic r8, r9, 0xf
    li r7, 0x6
    li r5, 0x7
    lbz r4, 0x5(r30)
    subfic r6, r7, 0xf
    li r23, 0x8
    li r25, 0x9
    stb r4, 0xb(r3)
    subfic r4, r5, 0xf
    li r27, 0xa
    li r11, 0xc
    lbz r5, 0x4(r30)
    li r9, 0xd
    li r7, 0xe
    stb r5, 0xc(r3)
    li r5, 0xf
    lbz r12, 0x3(r30)
    stb r12, 0xd(r3)
    lbz r12, 0x2(r30)
    stb r12, 0xe(r3)
    lbz r12, 0x1(r30)
    stb r12, 0xf(r3)
    lbz r12, 0x0(r30)
    stb r12, 0x10(r3)
    lbzx r12, r31, r24
    subfic r24, r23, 0xf
    stb r12, 0x11(r3)
    lbzx r12, r31, r26
    subfic r26, r25, 0xf
    stb r12, 0x12(r3)
    lbzx r12, r31, r28
    subfic r28, r27, 0xf
    stb r12, 0x13(r3)
    lbzx r12, r31, r29
    subfic r29, r0, 0xf
    stb r12, 0x14(r3)
    lbzx r0, r31, r10
    subfic r10, r11, 0xf
    stb r0, 0x15(r3)
    lbzx r0, r31, r8
    subfic r8, r9, 0xf
    stb r0, 0x16(r3)
    lbzx r0, r31, r6
    subfic r6, r7, 0xf
    stb r0, 0x17(r3)
    lbzx r0, r31, r4
    subfic r4, r5, 0xf
    stb r0, 0x18(r3)
    lbzx r12, r31, r24
    stb r12, 0x19(r3)
    lbzx r12, r31, r26
    stb r12, 0x1a(r3)
    lbzx r12, r31, r28
    stb r12, 0x1b(r3)
    lbzx r12, r31, r29
    stb r12, 0x1c(r3)
    lbzx r0, r31, r10
    stb r0, 0x1d(r3)
    lbzx r0, r31, r8
    stb r0, 0x1e(r3)
    lbzx r0, r31, r6
    stb r0, 0x1f(r3)
    lbzx r0, r31, r4
    stb r0, 0x20(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8870:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_link_key_neg_reply
// ----------------------------------------------------------------------------
asm void btsnd_hcic_link_key_neg_reply() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B88B4
    li r3, 0x0
    b lbl_802B8914
lbl_802B88B4:
    li r0, 0x9
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0xc
    li r4, 0x4
    li r0, 0x6
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r31)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r31)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r31)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r31)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r31)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r31)
    stb r0, 0x10(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8914:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_pin_code_req_reply
// ----------------------------------------------------------------------------
asm void btsnd_hcic_pin_code_req_reply() {
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
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B8964
    li r3, 0x0
    b lbl_802B8AF0
lbl_802B8964:
    li r0, 0x1a
    li r4, 0x0
    sth r0, 0x2(r3)
    li r7, 0xd
    li r6, 0x4
    li r0, 0x17
    sth r4, 0x4(r3)
    cmpwi cr1, r30, 0x0
    addi r4, r3, 0x12
    li r5, 0x0
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r29)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r29)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r29)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r29)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r29)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r29)
    stb r0, 0x10(r3)
    stb r30, 0x11(r3)
    ble cr1, lbl_802B8A8C
    cmpwi r30, 0x8
    subi r7, r30, 0x8
    ble lbl_802B8A64
    li r8, 0x0
    blt cr1, lbl_802B89F8
    lis r6, 0x8000
    subi r0, r6, 0x2
    cmpw r30, r0
    bgt lbl_802B89F8
    li r8, 0x1
lbl_802B89F8:
    cmpwi r8, 0x0
    beq lbl_802B8A64
    addi r0, r7, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r7, 0x0
    ble lbl_802B8A64
lbl_802B8A14:
    lbz r0, 0x0(r31)
    addi r5, r5, 0x8
    stb r0, 0x0(r4)
    lbz r0, 0x1(r31)
    stb r0, 0x1(r4)
    lbz r0, 0x2(r31)
    stb r0, 0x2(r4)
    lbz r0, 0x3(r31)
    stb r0, 0x3(r4)
    lbz r0, 0x4(r31)
    stb r0, 0x4(r4)
    lbz r0, 0x5(r31)
    stb r0, 0x5(r4)
    lbz r0, 0x6(r31)
    stb r0, 0x6(r4)
    lbz r0, 0x7(r31)
    addi r31, r31, 0x8
    stb r0, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_802B8A14
lbl_802B8A64:
    subf r0, r5, r30
    mtctr r0
    cmpw r5, r30
    bge lbl_802B8A8C
lbl_802B8A74:
    lbz r0, 0x0(r31)
    addi r5, r5, 0x1
    addi r31, r31, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_802B8A74
lbl_802B8A8C:
    cmpwi r5, 0x10
    subfic r5, r5, 0x10
    li r6, 0x0
    bge lbl_802B8AE8
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_802B8AD8
lbl_802B8AA8:
    stb r6, 0x0(r4)
    stb r6, 0x1(r4)
    stb r6, 0x2(r4)
    stb r6, 0x3(r4)
    stb r6, 0x4(r4)
    stb r6, 0x5(r4)
    stb r6, 0x6(r4)
    stb r6, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_802B8AA8
    andi. r5, r5, 0x7
    beq lbl_802B8AE8
lbl_802B8AD8:
    mtctr r5
lbl_802B8ADC:
    stb r6, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_802B8ADC
lbl_802B8AE8:
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8AF0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_pin_code_neg_reply
// ----------------------------------------------------------------------------
asm void btsnd_hcic_pin_code_neg_reply() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B8B38
    li r3, 0x0
    b lbl_802B8B98
lbl_802B8B38:
    li r0, 0x9
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0xe
    li r4, 0x4
    li r0, 0x6
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r31)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r31)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r31)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r31)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r31)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r31)
    stb r0, 0x10(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8B98:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_change_conn_type
// ----------------------------------------------------------------------------
asm void btsnd_hcic_change_conn_type() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B8BE0
    li r3, 0x0
    b lbl_802B8C24
lbl_802B8BE0:
    li r4, 0x7
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0xf
    li r5, 0x4
    srawi r4, r30, 8
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r5, 0xa(r3)
    stb r30, 0xb(r3)
    stb r4, 0xc(r3)
    stb r31, 0xd(r3)
    stb r0, 0xe(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8C24:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_auth_request
// ----------------------------------------------------------------------------
asm void btsnd_hcic_auth_request() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B8C68
    li r3, 0x0
    b lbl_802B8CA4
lbl_802B8C68:
    li r4, 0x5
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x11
    li r5, 0x4
    li r4, 0x2
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8CA4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_set_conn_encrypt
// ----------------------------------------------------------------------------
asm void btsnd_hcic_set_conn_encrypt() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B8CEC
    li r3, 0x0
    b lbl_802B8D2C
lbl_802B8CEC:
    li r4, 0x6
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x13
    li r5, 0x4
    li r4, 0x3
    sth r0, 0x4(r3)
    extrwi r0, r30, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r30, 0xb(r3)
    stb r0, 0xc(r3)
    stb r31, 0xd(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8D2C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_rmt_name_req
// ----------------------------------------------------------------------------
asm void btsnd_hcic_rmt_name_req() {
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
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B8D88
    li r3, 0x0
    b lbl_802B8DFC
lbl_802B8D88:
    li r4, 0xd
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x19
    li r5, 0x4
    li r4, 0xa
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    lbz r4, 0x5(r28)
    stb r4, 0xb(r3)
    lbz r4, 0x4(r28)
    stb r4, 0xc(r3)
    lbz r4, 0x3(r28)
    stb r4, 0xd(r3)
    lbz r4, 0x2(r28)
    stb r4, 0xe(r3)
    lbz r4, 0x1(r28)
    stb r4, 0xf(r3)
    lbz r4, 0x0(r28)
    stb r4, 0x10(r3)
    stb r29, 0x11(r3)
    stb r30, 0x12(r3)
    stb r31, 0x13(r3)
    stb r0, 0x14(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8DFC:
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
// btsnd_hcic_rmt_name_req_cancel
// ----------------------------------------------------------------------------
asm void btsnd_hcic_rmt_name_req_cancel() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B8E48
    li r3, 0x0
    b lbl_802B8EA8
lbl_802B8E48:
    li r0, 0x9
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0x1a
    li r4, 0x4
    li r0, 0x6
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r31)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r31)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r31)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r31)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r31)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r31)
    stb r0, 0x10(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8EA8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_rmt_features_req
// ----------------------------------------------------------------------------
asm void btsnd_hcic_rmt_features_req() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B8EE8
    li r3, 0x0
    b lbl_802B8F24
lbl_802B8EE8:
    li r4, 0x5
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x1b
    li r5, 0x4
    li r4, 0x2
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8F24:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_rmt_ver_req
// ----------------------------------------------------------------------------
asm void btsnd_hcic_rmt_ver_req() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B8F64
    li r3, 0x0
    b lbl_802B8FA0
lbl_802B8F64:
    li r4, 0x5
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x1d
    li r5, 0x4
    li r4, 0x2
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B8FA0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_read_rmt_clk_offset
// ----------------------------------------------------------------------------
asm void btsnd_hcic_read_rmt_clk_offset() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B8FE0
    li r3, 0x0
    b lbl_802B901C
lbl_802B8FE0:
    li r4, 0x5
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x1f
    li r5, 0x4
    li r4, 0x2
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B901C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_setup_esco_conn
// ----------------------------------------------------------------------------
asm void btsnd_hcic_setup_esco_conn() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    mr r31, r9
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B9078
    li r3, 0x0
    b lbl_802B9114
lbl_802B9078:
    li r0, 0x14
    srawi r12, r25, 8
    sth r0, 0x2(r3)
    li r0, 0x0
    li r6, 0x28
    li r4, 0x4
    sth r0, 0x4(r3)
    li r0, 0x11
    extrwi r11, r26, 8, 16
    extrwi r10, r26, 8, 8
    stb r6, 0x8(r3)
    srwi r9, r26, 24
    extrwi r8, r27, 8, 16
    extrwi r7, r27, 8, 8
    stb r4, 0x9(r3)
    srawi r5, r28, 8
    srwi r6, r27, 24
    srawi r4, r29, 8
    stb r0, 0xa(r3)
    extrwi r0, r31, 8, 16
    stb r25, 0xb(r3)
    stb r12, 0xc(r3)
    stb r26, 0xd(r3)
    stb r11, 0xe(r3)
    stb r10, 0xf(r3)
    stb r9, 0x10(r3)
    stb r27, 0x11(r3)
    stb r8, 0x12(r3)
    stb r7, 0x13(r3)
    stb r6, 0x14(r3)
    stb r28, 0x15(r3)
    stb r5, 0x16(r3)
    stb r29, 0x17(r3)
    stb r4, 0x18(r3)
    stb r30, 0x19(r3)
    stb r31, 0x1a(r3)
    stb r0, 0x1b(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B9114:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_accept_esco_conn
// ----------------------------------------------------------------------------
asm void btsnd_hcic_accept_esco_conn() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    li r26, 0x18
    li r12, 0x0
    li r11, 0x29
    li r0, 0x4
    li r25, 0x15
    sth r26, 0x2(r3)
    extrwi r26, r5, 8, 16
    extrwi r27, r5, 8, 8
    sth r12, 0x4(r3)
    srwi r28, r5, 24
    extrwi r29, r6, 8, 16
    extrwi r30, r6, 8, 8
    stb r11, 0x8(r3)
    srwi r31, r6, 24
    srawi r12, r7, 8
    extrwi r11, r8, 8, 16
    stb r0, 0x9(r3)
    extrwi r0, r10, 8, 16
    stb r25, 0xa(r3)
    lbz r25, 0x5(r4)
    stb r25, 0xb(r3)
    lbz r25, 0x4(r4)
    stb r25, 0xc(r3)
    lbz r25, 0x3(r4)
    stb r25, 0xd(r3)
    lbz r25, 0x2(r4)
    stb r25, 0xe(r3)
    lbz r25, 0x1(r4)
    stb r25, 0xf(r3)
    lbz r4, 0x0(r4)
    stb r4, 0x10(r3)
    stb r5, 0x11(r3)
    stb r26, 0x12(r3)
    stb r27, 0x13(r3)
    stb r28, 0x14(r3)
    stb r6, 0x15(r3)
    stb r29, 0x16(r3)
    stb r30, 0x17(r3)
    stb r31, 0x18(r3)
    stb r7, 0x19(r3)
    stb r12, 0x1a(r3)
    stb r8, 0x1b(r3)
    stb r11, 0x1c(r3)
    stb r9, 0x1d(r3)
    stb r10, 0x1e(r3)
    stb r0, 0x1f(r3)
    bl btu_hcif_send_cmd
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_reject_esco_conn
// ----------------------------------------------------------------------------
asm void btsnd_hcic_reject_esco_conn() {
    nofralloc
    li r9, 0xa
    li r8, 0x0
    li r7, 0x2a
    li r6, 0x4
    li r0, 0x7
    sth r9, 0x2(r3)
    sth r8, 0x4(r3)
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r4)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r4)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r4)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r4)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r4)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r4)
    stb r0, 0x10(r3)
    stb r5, 0x11(r3)
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_hold_mode
// ----------------------------------------------------------------------------
asm void btsnd_hcic_hold_mode() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_802B92B8
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B92B8
    li r3, 0x0
    b lbl_802B930C
lbl_802B92B8:
    li r0, 0x9
    srawi r5, r29, 8
    sth r0, 0x2(r3)
    li r0, 0x0
    li r8, 0x1
    li r7, 0x8
    sth r0, 0x4(r3)
    li r6, 0x6
    srawi r4, r30, 8
    extrwi r0, r31, 8, 16
    stb r8, 0x8(r3)
    stb r7, 0x9(r3)
    stb r6, 0xa(r3)
    stb r29, 0xb(r3)
    stb r5, 0xc(r3)
    stb r30, 0xd(r3)
    stb r4, 0xe(r3)
    stb r31, 0xf(r3)
    stb r0, 0x10(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B930C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_sniff_mode
// ----------------------------------------------------------------------------
asm void btsnd_hcic_sniff_mode() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bne lbl_802B9370
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B9370
    li r3, 0x0
    b lbl_802B93DC
lbl_802B9370:
    li r0, 0xd
    srawi r7, r27, 8
    sth r0, 0x2(r3)
    li r4, 0x0
    srawi r6, r28, 8
    li r0, 0x3
    sth r4, 0x4(r3)
    srawi r5, r29, 8
    li r9, 0x8
    li r8, 0xa
    stb r0, 0x8(r3)
    srawi r4, r30, 8
    extrwi r0, r31, 8, 16
    stb r9, 0x9(r3)
    stb r8, 0xa(r3)
    stb r27, 0xb(r3)
    stb r7, 0xc(r3)
    stb r28, 0xd(r3)
    stb r6, 0xe(r3)
    stb r29, 0xf(r3)
    stb r5, 0x10(r3)
    stb r30, 0x11(r3)
    stb r4, 0x12(r3)
    stb r31, 0x13(r3)
    stb r0, 0x14(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B93DC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_exit_sniff_mode
// ----------------------------------------------------------------------------
asm void btsnd_hcic_exit_sniff_mode() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bne lbl_802B9428
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B9428
    li r3, 0x0
    b lbl_802B9464
lbl_802B9428:
    li r4, 0x5
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x4
    li r5, 0x8
    li r4, 0x2
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B9464:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_park_mode
// ----------------------------------------------------------------------------
asm void btsnd_hcic_park_mode() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_802B94BC
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B94BC
    li r3, 0x0
    b lbl_802B9510
lbl_802B94BC:
    li r0, 0x9
    srawi r5, r29, 8
    sth r0, 0x2(r3)
    li r0, 0x0
    li r8, 0x5
    li r7, 0x8
    sth r0, 0x4(r3)
    li r6, 0x6
    srawi r4, r30, 8
    extrwi r0, r31, 8, 16
    stb r8, 0x8(r3)
    stb r7, 0x9(r3)
    stb r6, 0xa(r3)
    stb r29, 0xb(r3)
    stb r5, 0xc(r3)
    stb r30, 0xd(r3)
    stb r4, 0xe(r3)
    stb r31, 0xf(r3)
    stb r0, 0x10(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B9510:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_exit_park_mode
// ----------------------------------------------------------------------------
asm void btsnd_hcic_exit_park_mode() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bne lbl_802B9560
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B9560
    li r3, 0x0
    b lbl_802B959C
lbl_802B9560:
    li r4, 0x5
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x6
    li r5, 0x8
    li r4, 0x2
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B959C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_switch_role
// ----------------------------------------------------------------------------
asm void btsnd_hcic_switch_role() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B95E4
    li r3, 0x0
    b lbl_802B9648
lbl_802B95E4:
    li r0, 0xa
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0xb
    li r4, 0x8
    li r0, 0x7
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r30)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r30)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r30)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r30)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r30)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r30)
    stb r0, 0x10(r3)
    stb r31, 0x11(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B9648:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_policy_set
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_policy_set() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B9694
    li r3, 0x0
    b lbl_802B96DC
lbl_802B9694:
    li r4, 0x7
    li r0, 0x0
    sth r4, 0x2(r3)
    li r7, 0xd
    li r6, 0x8
    li r5, 0x4
    sth r0, 0x4(r3)
    srawi r4, r30, 8
    extrwi r0, r31, 8, 16
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r5, 0xa(r3)
    stb r30, 0xb(r3)
    stb r4, 0xc(r3)
    stb r31, 0xd(r3)
    stb r0, 0xe(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B96DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_reset
// ----------------------------------------------------------------------------
asm void btsnd_hcic_reset() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x2
    stw r0, 0x14(r1)
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B9718
    li r3, 0x0
    b lbl_802B9740
lbl_802B9718:
    li r5, 0x3
    li r4, 0x0
    sth r5, 0x2(r3)
    li r0, 0xc
    sth r4, 0x4(r3)
    stb r5, 0x8(r3)
    stb r0, 0x9(r3)
    stb r4, 0xa(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B9740:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_set_event_filter
// ----------------------------------------------------------------------------
asm void btsnd_hcic_set_event_filter() {
    nofralloc
    li r0, 0x0
    li r9, 0x5
    li r8, 0xc
    sth r0, 0x4(r3)
    cmpwi r4, 0x0
    mr r0, r6
    stb r9, 0x8(r3)
    stb r8, 0x9(r3)
    beq lbl_802B98F4
    addi r8, r7, 0x5
    addi r9, r7, 0x2
    sth r8, 0x2(r3)
    cmplwi r5, 0x1
    addi r8, r3, 0xd
    stb r9, 0xa(r3)
    stb r4, 0xb(r3)
    stb r5, 0xc(r3)
    bne lbl_802B97DC
    lbz r4, 0x2(r6)
    subi r0, r7, 0x6
    clrlwi r7, r0, 24
    stb r4, 0x0(r8)
    addi r0, r6, 0x6
    lbz r4, 0x1(r6)
    stb r4, 0x1(r8)
    lbz r4, 0x0(r6)
    stb r4, 0x2(r8)
    lbz r4, 0x5(r6)
    stb r4, 0x3(r8)
    lbz r4, 0x4(r6)
    stb r4, 0x4(r8)
    lbz r4, 0x3(r6)
    stb r4, 0x5(r8)
    addi r8, r8, 0x6
    b lbl_802B9824
lbl_802B97DC:
    cmplwi r5, 0x2
    bne lbl_802B9824
    lbz r4, 0x5(r6)
    subi r0, r7, 0x6
    clrlwi r7, r0, 24
    stb r4, 0x0(r8)
    addi r0, r6, 0x6
    lbz r4, 0x4(r6)
    stb r4, 0x1(r8)
    lbz r4, 0x3(r6)
    stb r4, 0x2(r8)
    lbz r4, 0x2(r6)
    stb r4, 0x3(r8)
    lbz r4, 0x1(r6)
    stb r4, 0x4(r8)
    lbz r4, 0x0(r6)
    stb r4, 0x5(r8)
    addi r8, r8, 0x6
lbl_802B9824:
    cmpwi cr1, r7, 0x0
    beq cr1, lbl_802B9908
    li r9, 0x0
    ble cr1, lbl_802B9908
    cmpwi r7, 0x8
    subi r5, r7, 0x8
    ble lbl_802B98C8
    li r6, 0x0
    blt cr1, lbl_802B985C
    lis r4, 0x8000
    subi r4, r4, 0x2
    cmpw r7, r4
    bgt lbl_802B985C
    li r6, 0x1
lbl_802B985C:
    cmpwi r6, 0x0
    beq lbl_802B98C8
    addi r4, r5, 0x7
    srwi r4, r4, 3
    mtctr r4
    cmpwi r5, 0x0
    ble lbl_802B98C8
lbl_802B9878:
    lbzx r4, r9, r0
    add r5, r0, r9
    addi r9, r9, 0x8
    stb r4, 0x0(r8)
    lbz r4, 0x1(r5)
    stb r4, 0x1(r8)
    lbz r4, 0x2(r5)
    stb r4, 0x2(r8)
    lbz r4, 0x3(r5)
    stb r4, 0x3(r8)
    lbz r4, 0x4(r5)
    stb r4, 0x4(r8)
    lbz r4, 0x5(r5)
    stb r4, 0x5(r8)
    lbz r4, 0x6(r5)
    stb r4, 0x6(r8)
    lbz r4, 0x7(r5)
    stb r4, 0x7(r8)
    addi r8, r8, 0x8
    bdnz lbl_802B9878
lbl_802B98C8:
    subf r4, r9, r7
    add r5, r0, r9
    mtctr r4
    cmpw r9, r7
    bge lbl_802B9908
lbl_802B98DC:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r8)
    addi r8, r8, 0x1
    bdnz lbl_802B98DC
    b lbl_802B9908
lbl_802B98F4:
    li r5, 0x4
    li r0, 0x1
    sth r5, 0x2(r3)
    stb r0, 0xa(r3)
    stb r4, 0xb(r3)
lbl_802B9908:
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_pin_type
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_pin_type() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B9938
    li r3, 0x0
    b lbl_802B996C
lbl_802B9938:
    li r0, 0x4
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0xa
    li r4, 0xc
    li r0, 0x1
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    stb r31, 0xb(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B996C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_read_stored_key
// ----------------------------------------------------------------------------
asm void btsnd_hcic_read_stored_key() {
    nofralloc
    li r9, 0xa
    li r8, 0x0
    li r7, 0xd
    li r6, 0xc
    li r0, 0x7
    sth r9, 0x2(r3)
    sth r8, 0x4(r3)
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r4)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r4)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r4)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r4)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r4)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r4)
    stb r0, 0x10(r3)
    stb r5, 0x11(r3)
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_stored_key
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_stored_key() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mulli r7, r4, 0x16
    li r0, 0x0
    li r9, 0x11
    sth r0, 0x4(r3)
    li r8, 0xc
    addi r10, r7, 0x4
    clrlwi r7, r10, 16
    cmplwi r4, 0xb
    subi r0, r7, 0x3
    sth r10, 0x2(r3)
    stb r9, 0x8(r3)
    stb r8, 0x9(r3)
    stb r0, 0xa(r3)
    ble lbl_802B9A30
    li r4, 0xb
lbl_802B9A30:
    stb r4, 0xb(r3)
    addi r7, r3, 0xc
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_802B9B84
lbl_802B9A44:
    lbz r0, 0x5(r5)
    li r22, 0x0
    subfic r23, r22, 0xf
    li r24, 0x1
    stb r0, 0x0(r7)
    subfic r25, r24, 0xf
    li r26, 0x2
    li r28, 0x3
    lbz r0, 0x4(r5)
    subfic r27, r26, 0xf
    subfic r29, r28, 0xf
    li r30, 0x4
    stb r0, 0x1(r7)
    subfic r31, r30, 0xf
    li r12, 0x5
    li r10, 0x6
    lbz r0, 0x3(r5)
    subfic r11, r12, 0xf
    subfic r9, r10, 0xf
    li r8, 0x7
    stb r0, 0x2(r7)
    subfic r4, r8, 0xf
    li r22, 0x8
    li r24, 0x9
    lbz r0, 0x2(r5)
    li r26, 0xa
    li r28, 0xb
    li r30, 0xc
    stb r0, 0x3(r7)
    li r12, 0xd
    li r10, 0xe
    li r8, 0xf
    lbz r0, 0x1(r5)
    stb r0, 0x4(r7)
    lbz r0, 0x0(r5)
    addi r5, r5, 0x6
    stb r0, 0x5(r7)
    lbzx r0, r6, r23
    subfic r23, r22, 0xf
    stb r0, 0x6(r7)
    lbzx r0, r6, r25
    subfic r25, r24, 0xf
    stb r0, 0x7(r7)
    lbzx r0, r6, r27
    subfic r27, r26, 0xf
    stb r0, 0x8(r7)
    lbzx r0, r6, r29
    subfic r29, r28, 0xf
    stb r0, 0x9(r7)
    lbzx r0, r6, r31
    subfic r31, r30, 0xf
    stb r0, 0xa(r7)
    lbzx r0, r6, r11
    subfic r11, r12, 0xf
    stb r0, 0xb(r7)
    lbzx r0, r6, r9
    subfic r9, r10, 0xf
    stb r0, 0xc(r7)
    lbzx r0, r6, r4
    subfic r4, r8, 0xf
    stb r0, 0xd(r7)
    lbzx r0, r6, r23
    stb r0, 0xe(r7)
    lbzx r0, r6, r25
    stb r0, 0xf(r7)
    lbzx r0, r6, r27
    stb r0, 0x10(r7)
    lbzx r0, r6, r29
    stb r0, 0x11(r7)
    lbzx r0, r6, r31
    stb r0, 0x12(r7)
    lbzx r0, r6, r11
    stb r0, 0x13(r7)
    lbzx r0, r6, r9
    stb r0, 0x14(r7)
    lbzx r0, r6, r4
    addi r6, r6, 0x10
    stb r0, 0x15(r7)
    addi r7, r7, 0x16
    bdnz lbl_802B9A44
lbl_802B9B84:
    bl btu_hcif_send_cmd
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_delete_stored_key
// ----------------------------------------------------------------------------
asm void btsnd_hcic_delete_stored_key() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B9BD4
    li r3, 0x0
    b lbl_802B9C38
lbl_802B9BD4:
    li r0, 0xa
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0x12
    li r4, 0xc
    li r0, 0x7
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x5(r30)
    stb r0, 0xb(r3)
    lbz r0, 0x4(r30)
    stb r0, 0xc(r3)
    lbz r0, 0x3(r30)
    stb r0, 0xd(r3)
    lbz r0, 0x2(r30)
    stb r0, 0xe(r3)
    lbz r0, 0x1(r30)
    stb r0, 0xf(r3)
    lbz r0, 0x0(r30)
    stb r0, 0x10(r3)
    stb r31, 0x11(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B9C38:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_change_name
// ----------------------------------------------------------------------------
asm void btsnd_hcic_change_name() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    mr r3, r30
    bl strlen
    addi r0, r3, 0x1
    li r6, 0xfb
    clrlwi r7, r0, 16
    li r5, 0x0
    li r4, 0x13
    li r3, 0xc
    li r0, 0xf8
    sth r6, 0x2(r31)
    cmpwi cr1, r7, 0x0
    addi r6, r31, 0xb
    sth r5, 0x4(r31)
    li r8, 0x0
    stb r4, 0x8(r31)
    stb r3, 0x9(r31)
    stb r0, 0xa(r31)
    ble cr1, lbl_802B9D70
    cmpwi r7, 0x8
    subi r4, r7, 0x8
    ble lbl_802B9D48
    li r5, 0x0
    blt cr1, lbl_802B9CDC
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r7, r0
    bgt lbl_802B9CDC
    li r5, 0x1
lbl_802B9CDC:
    cmpwi r5, 0x0
    beq lbl_802B9D48
    addi r0, r4, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_802B9D48
lbl_802B9CF8:
    lbzx r0, r30, r8
    add r3, r30, r8
    addi r8, r8, 0x8
    stb r0, 0x0(r6)
    lbz r0, 0x1(r3)
    stb r0, 0x1(r6)
    lbz r0, 0x2(r3)
    stb r0, 0x2(r6)
    lbz r0, 0x3(r3)
    stb r0, 0x3(r6)
    lbz r0, 0x4(r3)
    stb r0, 0x4(r6)
    lbz r0, 0x5(r3)
    stb r0, 0x5(r6)
    lbz r0, 0x6(r3)
    stb r0, 0x6(r6)
    lbz r0, 0x7(r3)
    stb r0, 0x7(r6)
    addi r6, r6, 0x8
    bdnz lbl_802B9CF8
lbl_802B9D48:
    subf r0, r8, r7
    add r3, r30, r8
    mtctr r0
    cmpw r8, r7
    bge lbl_802B9D70
lbl_802B9D5C:
    lbz r0, 0x0(r3)
    addi r3, r3, 0x1
    stb r0, 0x0(r6)
    addi r6, r6, 0x1
    bdnz lbl_802B9D5C
lbl_802B9D70:
    mr r3, r31
    bl btu_hcif_send_cmd
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_page_tout
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_page_tout() {
    nofralloc
    extrwi r0, r4, 8, 16
    li r9, 0x5
    li r8, 0x0
    li r7, 0x18
    li r6, 0xc
    li r5, 0x2
    sth r9, 0x2(r3)
    sth r8, 0x4(r3)
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r5, 0xa(r3)
    stb r4, 0xb(r3)
    stb r0, 0xc(r3)
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_scan_enable
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_scan_enable() {
    nofralloc
    li r8, 0x4
    li r7, 0x0
    li r6, 0x1a
    li r5, 0xc
    li r0, 0x1
    sth r8, 0x2(r3)
    sth r7, 0x4(r3)
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r0, 0xa(r3)
    stb r4, 0xb(r3)
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_pagescan_cfg
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_pagescan_cfg() {
    nofralloc
    extrwi r6, r4, 8, 16
    extrwi r0, r5, 8, 16
    li r11, 0x7
    li r10, 0x0
    li r9, 0x1c
    li r8, 0xc
    li r7, 0x4
    sth r11, 0x2(r3)
    sth r10, 0x4(r3)
    stb r9, 0x8(r3)
    stb r8, 0x9(r3)
    stb r7, 0xa(r3)
    stb r4, 0xb(r3)
    stb r6, 0xc(r3)
    stb r5, 0xd(r3)
    stb r0, 0xe(r3)
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_inqscan_cfg
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_inqscan_cfg() {
    nofralloc
    extrwi r6, r4, 8, 16
    extrwi r0, r5, 8, 16
    li r11, 0x7
    li r10, 0x0
    li r9, 0x1e
    li r8, 0xc
    li r7, 0x4
    sth r11, 0x2(r3)
    sth r10, 0x4(r3)
    stb r9, 0x8(r3)
    stb r8, 0x9(r3)
    stb r7, 0xa(r3)
    stb r4, 0xb(r3)
    stb r6, 0xc(r3)
    stb r5, 0xd(r3)
    stb r0, 0xe(r3)
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_auth_enable
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_auth_enable() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B9EAC
    li r3, 0x0
    b lbl_802B9EE0
lbl_802B9EAC:
    li r0, 0x4
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0x20
    li r4, 0xc
    li r0, 0x1
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    stb r31, 0xb(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B9EE0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_encr_mode
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_encr_mode() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802B9F20
    li r3, 0x0
    b lbl_802B9F54
lbl_802B9F20:
    li r0, 0x4
    li r6, 0x0
    sth r0, 0x2(r3)
    li r5, 0x22
    li r4, 0xc
    li r0, 0x1
    sth r6, 0x4(r3)
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    stb r31, 0xb(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802B9F54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_dev_class
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_dev_class() {
    nofralloc
    li r8, 0x6
    li r7, 0x0
    li r6, 0x24
    li r5, 0xc
    li r0, 0x3
    sth r8, 0x2(r3)
    sth r7, 0x4(r3)
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r0, 0xa(r3)
    lbz r0, 0x2(r4)
    stb r0, 0xb(r3)
    lbz r0, 0x1(r4)
    stb r0, 0xc(r3)
    lbz r0, 0x0(r4)
    stb r0, 0xd(r3)
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_auto_flush_tout
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_auto_flush_tout() {
    nofralloc
    extrwi r6, r4, 8, 16
    extrwi r0, r5, 8, 16
    li r11, 0x7
    li r10, 0x0
    li r9, 0x28
    li r8, 0xc
    li r7, 0x4
    sth r11, 0x2(r3)
    sth r10, 0x4(r3)
    stb r9, 0x8(r3)
    stb r8, 0x9(r3)
    stb r7, 0xa(r3)
    stb r4, 0xb(r3)
    stb r6, 0xc(r3)
    stb r5, 0xd(r3)
    stb r0, 0xe(r3)
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_set_host_buf_size
// ----------------------------------------------------------------------------
asm void btsnd_hcic_set_host_buf_size() {
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
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802BA034
    li r3, 0x0
    b lbl_802BA08C
lbl_802BA034:
    li r0, 0xa
    srawi r5, r28, 8
    sth r0, 0x2(r3)
    li r0, 0x0
    li r8, 0x33
    li r7, 0xc
    sth r0, 0x4(r3)
    li r6, 0x7
    srawi r4, r30, 8
    extrwi r0, r31, 8, 16
    stb r8, 0x8(r3)
    stb r7, 0x9(r3)
    stb r6, 0xa(r3)
    stb r28, 0xb(r3)
    stb r5, 0xc(r3)
    stb r29, 0xd(r3)
    stb r30, 0xe(r3)
    stb r4, 0xf(r3)
    stb r31, 0x10(r3)
    stb r0, 0x11(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802BA08C:
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
// btsnd_hcic_write_link_super_tout
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_link_super_tout() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802BA0E0
    li r3, 0x0
    b lbl_802BA128
lbl_802BA0E0:
    li r4, 0x7
    li r0, 0x0
    sth r4, 0x2(r3)
    li r7, 0x37
    li r6, 0xc
    li r5, 0x4
    sth r0, 0x4(r3)
    srawi r4, r30, 8
    extrwi r0, r31, 8, 16
    stb r7, 0x8(r3)
    stb r6, 0x9(r3)
    stb r5, 0xa(r3)
    stb r30, 0xb(r3)
    stb r4, 0xc(r3)
    stb r31, 0xd(r3)
    stb r0, 0xe(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802BA128:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_cur_iac_lap
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_cur_iac_lap() {
    nofralloc
    clrlslwi r0, r4, 24, 2
    li r9, 0x0
    subf r6, r4, r0
    li r8, 0x3a
    addi r10, r6, 0x4
    li r7, 0xc
    clrlwi r6, r10, 16
    sth r10, 0x2(r3)
    subi r0, r6, 0x3
    addi r6, r3, 0xc
    sth r9, 0x4(r3)
    stb r8, 0x8(r3)
    stb r7, 0x9(r3)
    stb r0, 0xa(r3)
    stb r4, 0xb(r3)
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_802BA1AC
lbl_802BA188:
    lbz r0, 0x2(r5)
    stb r0, 0x0(r6)
    lbz r0, 0x1(r5)
    stb r0, 0x1(r6)
    lbz r0, 0x0(r5)
    addi r5, r5, 0x3
    stb r0, 0x2(r6)
    addi r6, r6, 0x3
    bdnz lbl_802BA188
lbl_802BA1AC:
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_read_local_ver
// ----------------------------------------------------------------------------
asm void btsnd_hcic_read_local_ver() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x2
    stw r0, 0x14(r1)
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802BA1D4
    li r3, 0x0
    b lbl_802BA200
lbl_802BA1D4:
    li r0, 0x3
    li r5, 0x0
    sth r0, 0x2(r3)
    li r4, 0x1
    li r0, 0x10
    sth r5, 0x4(r3)
    stb r4, 0x8(r3)
    stb r0, 0x9(r3)
    stb r5, 0xa(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802BA200:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_read_local_features
// ----------------------------------------------------------------------------
asm void btsnd_hcic_read_local_features() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x2
    stw r0, 0x14(r1)
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802BA234
    li r3, 0x0
    b lbl_802BA25C
lbl_802BA234:
    li r5, 0x3
    li r4, 0x0
    sth r5, 0x2(r3)
    li r0, 0x10
    sth r4, 0x4(r3)
    stb r5, 0x8(r3)
    stb r0, 0x9(r3)
    stb r4, 0xa(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802BA25C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_read_buffer_size
// ----------------------------------------------------------------------------
asm void btsnd_hcic_read_buffer_size() {
    nofralloc
    li r5, 0x0
    li r6, 0x3
    li r4, 0x5
    li r0, 0x10
    sth r6, 0x2(r3)
    sth r5, 0x4(r3)
    stb r4, 0x8(r3)
    stb r0, 0x9(r3)
    stb r5, 0xa(r3)
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_read_bd_addr
// ----------------------------------------------------------------------------
asm void btsnd_hcic_read_bd_addr() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x2
    stw r0, 0x14(r1)
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802BA2B8
    li r3, 0x0
    b lbl_802BA2E4
lbl_802BA2B8:
    li r0, 0x3
    li r5, 0x0
    sth r0, 0x2(r3)
    li r4, 0x9
    li r0, 0x10
    sth r5, 0x4(r3)
    stb r4, 0x8(r3)
    stb r0, 0x9(r3)
    stb r5, 0xa(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802BA2E4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_get_link_quality
// ----------------------------------------------------------------------------
asm void btsnd_hcic_get_link_quality() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802BA320
    li r3, 0x0
    b lbl_802BA35C
lbl_802BA320:
    li r4, 0x5
    li r0, 0x0
    sth r4, 0x2(r3)
    li r6, 0x3
    li r5, 0x14
    li r4, 0x2
    sth r0, 0x4(r3)
    extrwi r0, r31, 8, 16
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802BA35C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_read_rssi
// ----------------------------------------------------------------------------
asm void btsnd_hcic_read_rssi() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802BA39C
    li r3, 0x0
    b lbl_802BA3D4
lbl_802BA39C:
    li r7, 0x5
    li r6, 0x0
    sth r7, 0x2(r3)
    li r5, 0x14
    li r4, 0x2
    extrwi r0, r31, 8, 16
    sth r6, 0x4(r3)
    stb r7, 0x8(r3)
    stb r5, 0x9(r3)
    stb r4, 0xa(r3)
    stb r31, 0xb(r3)
    stb r0, 0xc(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802BA3D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_set_afh_channels
// ----------------------------------------------------------------------------
asm void btsnd_hcic_set_afh_channels() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    li r3, 0x2
    stw r29, 0x24(r1)
    lis r29, lbl_80341890@ha
    lbzu r12, lbl_80341890@l(r29)
    lbz r11, 0x1(r29)
    lbz r10, 0x2(r29)
    lbz r9, 0x3(r29)
    lbz r8, 0x4(r29)
    lbz r7, 0x5(r29)
    lbz r6, 0x6(r29)
    lbz r5, 0x7(r29)
    lbz r4, 0x8(r29)
    lbz r0, 0x9(r29)
    stb r12, 0x8(r1)
    stb r11, 0x9(r1)
    stb r10, 0xa(r1)
    stb r9, 0xb(r1)
    stb r8, 0xc(r1)
    stb r7, 0xd(r1)
    stb r6, 0xe(r1)
    stb r5, 0xf(r1)
    stb r4, 0x10(r1)
    stb r0, 0x11(r1)
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802BA474
    li r3, 0x0
    b lbl_802BA7EC
lbl_802BA474:
    li r4, 0xd
    li r0, 0x0
    sth r4, 0x2(r3)
    li r5, 0x3f
    li r4, 0xc
    cmplw r30, r31
    sth r0, 0x4(r3)
    li r0, 0xa
    stb r5, 0x8(r3)
    stb r4, 0x9(r3)
    stb r0, 0xa(r3)
    bgt lbl_802BA794
    cmplwi r31, 0x4e
    bgt lbl_802BA794
    cmpw cr1, r30, r31
    bgt cr1, lbl_802BA794
    subf r11, r30, r31
    subi r7, r31, 0x8
    addi r12, r11, 0x1
    cmpwi r12, 0x8
    ble lbl_802BA744
    li r5, 0x0
    li r6, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bgt cr1, lbl_802BA4F4
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r31, r0
    bgt lbl_802BA4F4
    li r10, 0x1
lbl_802BA4F4:
    cmpwi r10, 0x0
    beq lbl_802BA510
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r30, r0
    bgt lbl_802BA510
    li r9, 0x1
lbl_802BA510:
    cmpwi r9, 0x0
    beq lbl_802BA528
    addis r0, r30, 0x8000
    cmplwi r0, 0x0
    beq lbl_802BA528
    li r8, 0x1
lbl_802BA528:
    cmpwi r8, 0x0
    beq lbl_802BA564
    neg r0, r30
    clrrwi r8, r31, 31
    clrrwi r0, r0, 31
    li r4, 0x1
    cmpw r8, r0
    bne lbl_802BA558
    clrrwi r0, r11, 31
    cmpw r8, r0
    beq lbl_802BA558
    li r4, 0x0
lbl_802BA558:
    cmpwi r4, 0x0
    beq lbl_802BA564
    li r6, 0x1
lbl_802BA564:
    cmpwi r6, 0x0
    beq lbl_802BA590
    clrrwi. r0, r11, 31
    li r4, 0x1
    bne lbl_802BA584
    clrrwi. r0, r12, 31
    beq lbl_802BA584
    li r4, 0x0
lbl_802BA584:
    cmpwi r4, 0x0
    beq lbl_802BA590
    li r5, 0x1
lbl_802BA590:
    cmpwi r5, 0x0
    beq lbl_802BA744
    addi r5, r7, 0x8
    srawi r0, r30, 3
    subf r5, r30, r5
    addi r4, r1, 0x8
    addze r6, r0
    li r0, 0x1
    srwi r5, r5, 3
    add r6, r4, r6
    mtctr r5
    cmpw r30, r7
    bgt lbl_802BA744
lbl_802BA5C4:
    slwi r5, r30, 29
    srwi r8, r30, 31
    subf r5, r8, r5
    lbz r10, 0x0(r6)
    rotlwi r5, r5, 3
    addi r7, r30, 0x1
    add r5, r5, r8
    addi r9, r30, 0x2
    slw r5, r0, r5
    addi r8, r30, 0x3
    andc r11, r10, r5
    srwi r10, r7, 31
    stb r11, 0x0(r6)
    slwi r5, r7, 29
    srawi r11, r7, 3
    addi r7, r30, 0x4
    subf r5, r10, r5
    addi r6, r6, 0x1
    addze r29, r11
    rotlwi r5, r5, 3
    lbzx r12, r4, r29
    add r10, r5, r10
    slw r11, r0, r10
    slwi r5, r9, 29
    srwi r10, r9, 31
    srawi r9, r9, 3
    andc r11, r12, r11
    subf r5, r10, r5
    stbx r11, r4, r29
    addze r29, r9
    addi r9, r30, 0x5
    rotlwi r5, r5, 3
    lbzx r12, r4, r29
    add r5, r5, r10
    srawi r10, r8, 3
    slw r11, r0, r5
    andc r12, r12, r11
    slwi r5, r8, 29
    srwi r8, r8, 31
    stbx r12, r4, r29
    subf r5, r8, r5
    addze r11, r10
    rotlwi r5, r5, 3
    lbzx r10, r4, r11
    add r8, r5, r8
    srawi r5, r7, 3
    slw r8, r0, r8
    andc r10, r10, r8
    addze r29, r5
    stbx r10, r4, r11
    slwi r5, r7, 29
    srwi r8, r7, 31
    srawi r7, r9, 3
    subf r5, r8, r5
    lbzx r11, r4, r29
    rotlwi r5, r5, 3
    addze r12, r7
    add r5, r5, r8
    addi r8, r30, 0x6
    slw r10, r0, r5
    slwi r5, r9, 29
    srwi r9, r9, 31
    andc r10, r11, r10
    stbx r10, r4, r29
    subf r5, r9, r5
    rotlwi r7, r5, 3
    add r9, r7, r9
    srawi r5, r8, 3
    addze r11, r5
    addi r7, r30, 0x7
    lbzx r10, r4, r12
    slw r9, r0, r9
    slwi r5, r8, 29
    addi r30, r30, 0x8
    andc r10, r10, r9
    srwi r9, r8, 31
    stbx r10, r4, r12
    subf r5, r9, r5
    rotlwi r5, r5, 3
    srawi r8, r7, 3
    add r5, r5, r9
    lbzx r10, r4, r11
    slw r9, r0, r5
    slwi r5, r7, 29
    srwi r7, r7, 31
    andc r9, r10, r9
    subf r5, r7, r5
    stbx r9, r4, r11
    addze r9, r8
    rotlwi r5, r5, 3
    lbzx r8, r4, r9
    add r5, r5, r7
    slw r5, r0, r5
    andc r5, r8, r5
    stbx r5, r4, r9
    bdnz lbl_802BA5C4
lbl_802BA744:
    addi r0, r31, 0x1
    addi r7, r1, 0x8
    subf r0, r30, r0
    li r5, 0x1
    mtctr r0
    cmpw r30, r31
    bgt lbl_802BA794
lbl_802BA760:
    slwi r0, r30, 29
    srwi r4, r30, 31
    srawi r6, r30, 3
    addi r30, r30, 0x1
    subf r0, r4, r0
    addze r8, r6
    rotlwi r0, r0, 3
    lbzx r6, r7, r8
    add r0, r0, r4
    slw r0, r5, r0
    andc r0, r6, r0
    stbx r0, r7, r8
    bdnz lbl_802BA760
lbl_802BA794:
    lbz r0, 0x8(r1)
    stb r0, 0xb(r3)
    lbz r0, 0x9(r1)
    stb r0, 0xc(r3)
    lbz r0, 0xa(r1)
    stb r0, 0xd(r3)
    lbz r0, 0xb(r1)
    stb r0, 0xe(r3)
    lbz r0, 0xc(r1)
    stb r0, 0xf(r3)
    lbz r0, 0xd(r1)
    stb r0, 0x10(r3)
    lbz r0, 0xe(r1)
    stb r0, 0x11(r3)
    lbz r0, 0xf(r1)
    stb r0, 0x12(r3)
    lbz r0, 0x10(r1)
    stb r0, 0x13(r3)
    lbz r0, 0x11(r1)
    stb r0, 0x14(r3)
    bl btu_hcif_send_cmd
    li r3, 0x1
lbl_802BA7EC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_inqscan_type
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_inqscan_type() {
    nofralloc
    li r8, 0x4
    li r7, 0x0
    li r6, 0x43
    li r5, 0xc
    li r0, 0x1
    sth r8, 0x2(r3)
    sth r7, 0x4(r3)
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r0, 0xa(r3)
    stb r4, 0xb(r3)
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_inquiry_mode
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_inquiry_mode() {
    nofralloc
    li r8, 0x4
    li r7, 0x0
    li r6, 0x45
    li r5, 0xc
    li r0, 0x1
    sth r8, 0x2(r3)
    sth r7, 0x4(r3)
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r0, 0xa(r3)
    stb r4, 0xb(r3)
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_write_pagescan_type
// ----------------------------------------------------------------------------
asm void btsnd_hcic_write_pagescan_type() {
    nofralloc
    li r8, 0x4
    li r7, 0x0
    li r6, 0x47
    li r5, 0xc
    li r0, 0x1
    sth r8, 0x2(r3)
    sth r7, 0x4(r3)
    stb r6, 0x8(r3)
    stb r5, 0x9(r3)
    stb r0, 0xa(r3)
    stb r4, 0xb(r3)
    b btu_hcif_send_cmd
}

// ----------------------------------------------------------------------------
// btsnd_hcic_vendor_spec_cmd
// ----------------------------------------------------------------------------
asm void btsnd_hcic_vendor_spec_cmd() {
    nofralloc
    ori r8, r4, 0xfc00
    addi r7, r5, 0x3
    srawi r0, r8, 8
    li r4, 0x0
    cmpwi cr1, r5, 0x0
    sth r7, 0x2(r3)
    addi r9, r3, 0xb
    li r10, 0x0
    sth r4, 0x4(r3)
    stb r8, 0x8(r3)
    stb r0, 0x9(r3)
    stb r5, 0xa(r3)
    ble cr1, lbl_802BA988
    cmpwi r5, 0x8
    subi r7, r5, 0x8
    ble lbl_802BA960
    li r8, 0x0
    blt cr1, lbl_802BA8F4
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r5, r0
    bgt lbl_802BA8F4
    li r8, 0x1
lbl_802BA8F4:
    cmpwi r8, 0x0
    beq lbl_802BA960
    addi r0, r7, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r7, 0x0
    ble lbl_802BA960
lbl_802BA910:
    lbzx r0, r6, r10
    add r4, r6, r10
    addi r10, r10, 0x8
    stb r0, 0x0(r9)
    lbz r0, 0x1(r4)
    stb r0, 0x1(r9)
    lbz r0, 0x2(r4)
    stb r0, 0x2(r9)
    lbz r0, 0x3(r4)
    stb r0, 0x3(r9)
    lbz r0, 0x4(r4)
    stb r0, 0x4(r9)
    lbz r0, 0x5(r4)
    stb r0, 0x5(r9)
    lbz r0, 0x6(r4)
    stb r0, 0x6(r9)
    lbz r0, 0x7(r4)
    stb r0, 0x7(r9)
    addi r9, r9, 0x8
    bdnz lbl_802BA910
lbl_802BA960:
    subf r0, r10, r5
    add r4, r6, r10
    mtctr r0
    cmpw r10, r5
    bge lbl_802BA988
lbl_802BA974:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r0, 0x0(r9)
    addi r9, r9, 0x1
    bdnz lbl_802BA974
lbl_802BA988:
    b btu_hcif_send_cmd
}

