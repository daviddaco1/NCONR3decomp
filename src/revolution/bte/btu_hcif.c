#include "types.h"

// Translation unit: src/revolution/bte/btu_hcif.cpp
// Total functions: 12

// Global data symbols (@ha/@l)
extern u8 lbl_803754B0[];
extern u8 lbl_803754C8[];
extern u8 lbl_803754F0[];
extern u8 lbl_80375510[];
extern u8 lbl_80453A50[];
extern u8 lbl_80453F78[];

// Forward declarations
extern void BTM_DeviceReset();
extern void BTM_IsDeviceUp();
extern void GKI_dequeue();
extern void GKI_enqueue();
extern void GKI_enqueue_head();
extern void GKI_freebuf();
extern void GKI_getpoolbuf();
extern void GKI_queue_is_empty();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void _restgpr_27();
extern void _savegpr_27();
extern void bte_hcisu_send();
extern void btm_acl_encrypt_change();
extern void btm_acl_role_changed();
extern void btm_delete_stored_link_key_complete();
extern void btm_esco_proc_conn_chg();
extern void btm_event_filter_complete();
extern void btm_is_sco_active();
extern void btm_pm_proc_cmd_status();
extern void btm_pm_proc_mode_change();
extern void btm_process_clk_off_comp_evt();
extern void btm_process_inq_complete();
extern void btm_process_inq_results();
extern void btm_process_remote_name();
extern void btm_qos_setup_complete();
extern void btm_read_hci_buf_size_complete();
extern void btm_read_link_policy_complete();
extern void btm_read_link_quality_complete();
extern void btm_read_local_addr_complete();
extern void btm_read_local_features_complete();
extern void btm_read_local_name_complete();
extern void btm_read_local_version_complete();
extern void btm_read_remote_features_complete();
extern void btm_read_remote_version_complete();
extern void btm_read_rssi_complete();
extern void btm_read_stored_link_key_complete();
extern void btm_report_device_status();
extern void btm_reset_complete();
extern void btm_return_link_keys_evt();
extern void btm_sco_chk_pend_unpark();
extern void btm_sco_conn_req();
extern void btm_sco_connected();
extern void btm_sco_removed();
extern void btm_sec_auth_complete();
extern void btm_sec_conn_req();
extern void btm_sec_connected();
extern void btm_sec_disconnected();
extern void btm_sec_encrypt_change();
extern void btm_sec_link_key_notification();
extern void btm_sec_link_key_request();
extern void btm_sec_mkey_comp_event();
extern void btm_sec_pin_code_request();
extern void btm_sec_rmt_name_request_complete();
extern void btm_sec_update_clock_offset();
extern void btm_vendor_specific_evt();
extern void btm_vsc_complete();
extern void btm_write_stored_link_key_complete();
extern void btu_hcif_cmd_timeout();
extern void btu_hcif_command_complete_evt();
extern void btu_hcif_command_status_evt();
extern void btu_hcif_connection_comp_evt();
extern void btu_hcif_connection_request_evt();
extern void btu_hcif_esco_connection_comp_evt();
extern void btu_hcif_hdl_command_complete();
extern void btu_hcif_hdl_command_status();
extern void btu_hcif_link_key_notification_evt();
extern void btu_hcif_process_event();
extern void btu_hcif_qos_setup_comp_evt();
extern void btu_hcif_send_cmd();
extern void btu_start_timer();
extern void btu_stop_timer();
extern void hidd_pm_proc_mode_change();
extern void l2c_link_hci_conn_comp();
extern void l2c_link_hci_disc_comp();
extern void l2c_link_hci_qos_violation();
extern void l2c_link_process_num_completed_pkts();
extern void l2c_link_role_change_failed();
extern void l2c_link_role_changed();
extern void l2c_pin_code_request();
extern void memcpy();
extern void memset();

// ----------------------------------------------------------------------------
// btu_hcif_process_event
// ----------------------------------------------------------------------------
asm void btu_hcif_process_event() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x44(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    lhz r5, 0x4(r3)
    lbz r0, 0x64e(r4)
    add r7, r3, r5
    cmpwi r0, 0x0
    lbz r3, 0x8(r7)
    lbz r4, 0x9(r7)
    bne lbl_802B5D54
    cmplwi r3, 0xe
    beq lbl_802B5D54
    cmplwi r3, 0xf
    bne lbl_802B629C
lbl_802B5D54:
    cmpwi r3, 0x14
    beq lbl_802B60B8
    bge lbl_802B5DF0
    cmpwi r3, 0xa
    beq lbl_802B5FC4
    bge lbl_802B5DB4
    cmpwi r3, 0x5
    beq lbl_802B5EB8
    bge lbl_802B5D9C
    cmpwi r3, 0x2
    beq lbl_802B5E80
    bge lbl_802B5D90
    cmpwi r3, 0x1
    bge lbl_802B5E74
    b lbl_802B629C
lbl_802B5D90:
    cmpwi r3, 0x4
    bge lbl_802B5EAC
    b lbl_802B5EA0
lbl_802B5D9C:
    cmpwi r3, 0x8
    beq lbl_802B5F84
    bge lbl_802B629C
    cmpwi r3, 0x7
    bge lbl_802B5F20
    b lbl_802B5F00
lbl_802B5DB4:
    cmpwi r3, 0xf
    beq lbl_802B6018
    bge lbl_802B5DD8
    cmpwi r3, 0xd
    beq lbl_802B6000
    bge lbl_802B600C
    cmpwi r3, 0xc
    bge lbl_802B5FF4
    b lbl_802B5FE8
lbl_802B5DD8:
    cmpwi r3, 0x12
    beq lbl_802B604C
    bge lbl_802B60AC
    cmpwi r3, 0x11
    bge lbl_802B629C
    b lbl_802B6024
lbl_802B5DF0:
    cmpwi r3, 0x21
    beq lbl_802B629C
    bge lbl_802B5E38
    cmpwi r3, 0x1c
    beq lbl_802B61CC
    bge lbl_802B5E2C
    cmpwi r3, 0x17
    beq lbl_802B6184
    bge lbl_802B5E20
    cmpwi r3, 0x16
    bge lbl_802B6140
    b lbl_802B6120
lbl_802B5E20:
    cmpwi r3, 0x19
    bge lbl_802B629C
    b lbl_802B61C0
lbl_802B5E2C:
    cmpwi r3, 0x1e
    beq lbl_802B621C
    b lbl_802B629C
lbl_802B5E38:
    cmpwi r3, 0xef
    beq lbl_802B6294
    bge lbl_802B5E68
    cmpwi r3, 0x2c
    beq lbl_802B6238
    bge lbl_802B5E5C
    cmpwi r3, 0x23
    bge lbl_802B629C
    b lbl_802B5E90
lbl_802B5E5C:
    cmpwi r3, 0x2e
    bge lbl_802B629C
    b lbl_802B6244
lbl_802B5E68:
    cmpwi r3, 0xff
    beq lbl_802B6294
    b lbl_802B629C
lbl_802B5E74:
    lbz r3, 0xa(r7)
    bl btm_process_inq_complete
    b lbl_802B629C
lbl_802B5E80:
    addi r3, r7, 0xa
    li r4, 0x0
    bl btm_process_inq_results
    b lbl_802B629C
lbl_802B5E90:
    addi r3, r7, 0xa
    li r4, 0x1
    bl btm_process_inq_results
    b lbl_802B629C
lbl_802B5EA0:
    addi r3, r7, 0xa
    bl btu_hcif_connection_comp_evt
    b lbl_802B629C
lbl_802B5EAC:
    addi r3, r7, 0xa
    bl btu_hcif_connection_request_evt
    b lbl_802B629C
lbl_802B5EB8:
    lbz r0, 0xc(r7)
    lbz r3, 0xb(r7)
    slwi r0, r0, 8
    lbz r31, 0xd(r7)
    add r0, r3, r0
    clrlwi r28, r0, 20
    mr r4, r31
    mr r3, r28
    bl l2c_link_hci_disc_comp
    clrlwi. r0, r3, 24
    bne lbl_802B5EF0
    mr r3, r28
    mr r4, r31
    bl btm_sco_removed
lbl_802B5EF0:
    mr r3, r28
    mr r4, r31
    bl btm_sec_disconnected
    b lbl_802B629C
lbl_802B5F00:
    lbz r0, 0xc(r7)
    lbz r3, 0xb(r7)
    slwi r0, r0, 8
    lbz r4, 0xa(r7)
    add r0, r3, r0
    clrlwi r3, r0, 16
    bl btm_sec_auth_complete
    b lbl_802B629C
lbl_802B5F20:
    lbz r30, 0xa(r7)
    subi r0, r4, 0x7
    lbz r3, 0xb(r7)
    addi r31, r7, 0x11
    clrlwi r5, r0, 16
    mr r6, r30
    stb r3, 0x25(r1)
    mr r4, r31
    addi r3, r1, 0x20
    lbz r0, 0xc(r7)
    stb r0, 0x24(r1)
    lbz r0, 0xd(r7)
    stb r0, 0x23(r1)
    lbz r0, 0xe(r7)
    stb r0, 0x22(r1)
    lbz r0, 0xf(r7)
    stb r0, 0x21(r1)
    lbz r0, 0x10(r7)
    stb r0, 0x20(r1)
    bl btm_process_remote_name
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x20
    bl btm_sec_rmt_name_request_complete
    b lbl_802B629C
lbl_802B5F84:
    lbz r0, 0xc(r7)
    lbz r3, 0xb(r7)
    slwi r0, r0, 8
    lbz r29, 0xa(r7)
    add r0, r3, r0
    lbz r30, 0xd(r7)
    clrlwi r31, r0, 16
    mr r4, r29
    mr r3, r31
    mr r5, r30
    bl btm_acl_encrypt_change
    mr r3, r31
    mr r4, r29
    mr r5, r30
    bl btm_sec_encrypt_change
    b lbl_802B629C
lbl_802B5FC4:
    lbz r0, 0xc(r7)
    lbz r3, 0xb(r7)
    slwi r0, r0, 8
    lbz r4, 0xa(r7)
    add r0, r3, r0
    lbz r5, 0xd(r7)
    clrlwi r3, r0, 16
    bl btm_sec_mkey_comp_event
    b lbl_802B629C
lbl_802B5FE8:
    addi r3, r7, 0xa
    bl btm_read_remote_features_complete
    b lbl_802B629C
lbl_802B5FF4:
    addi r3, r7, 0xa
    bl btm_read_remote_version_complete
    b lbl_802B629C
lbl_802B6000:
    addi r3, r7, 0xa
    bl btu_hcif_qos_setup_comp_evt
    b lbl_802B629C
lbl_802B600C:
    addi r3, r7, 0xa
    bl btu_hcif_command_complete_evt
    b lbl_802B629C
lbl_802B6018:
    addi r3, r7, 0xa
    bl btu_hcif_command_status_evt
    b lbl_802B629C
lbl_802B6024:
    lis r4, lbl_803754B0@ha
    lis r3, 0x7
    addi r4, r4, lbl_803754B0@l
    bl LogMsg_0
    bl BTM_IsDeviceUp
    clrlwi. r0, r3, 24
    beq lbl_802B629C
    li r3, 0x0
    bl BTM_DeviceReset
    b lbl_802B629C
lbl_802B604C:
    lbz r29, 0xa(r7)
    lbz r0, 0xb(r7)
    cmpwi r29, 0x0
    stb r0, 0x1d(r1)
    lbz r0, 0xc(r7)
    stb r0, 0x1c(r1)
    lbz r0, 0xd(r7)
    stb r0, 0x1b(r1)
    lbz r0, 0xe(r7)
    stb r0, 0x1a(r1)
    lbz r0, 0xf(r7)
    stb r0, 0x19(r1)
    lbz r0, 0x10(r7)
    stb r0, 0x18(r1)
    lbz r31, 0x11(r7)
    bne lbl_802B6098
    mr r4, r31
    addi r3, r1, 0x18
    bl l2c_link_role_changed
lbl_802B6098:
    mr r3, r29
    mr r5, r31
    addi r4, r1, 0x18
    bl btm_acl_role_changed
    b lbl_802B629C
lbl_802B60AC:
    addi r3, r7, 0xa
    bl l2c_link_process_num_completed_pkts
    b lbl_802B629C
lbl_802B60B8:
    lbz r3, 0xc(r7)
    lbz r0, 0xf(r7)
    slwi r4, r3, 8
    lbz r5, 0xb(r7)
    lbz r3, 0xe(r7)
    slwi r0, r0, 8
    add r4, r5, r4
    lbz r30, 0xd(r7)
    clrlwi r31, r4, 16
    add r0, r3, r0
    lbz r28, 0xa(r7)
    mr r4, r31
    mr r5, r30
    clrlwi r29, r0, 16
    mr r3, r28
    bl btm_sco_chk_pend_unpark
    mr r3, r28
    mr r4, r31
    mr r5, r30
    mr r6, r29
    bl btm_pm_proc_mode_change
    mr r3, r28
    mr r4, r30
    mr r5, r29
    bl hidd_pm_proc_mode_change
    b lbl_802B629C
lbl_802B6120:
    lbz r0, 0xa(r7)
    cmpwi r0, 0x0
    beq lbl_802B629C
    li r0, 0x1
    addi r3, r7, 0x9
    stb r0, 0x9(r7)
    bl btm_return_link_keys_evt
    b lbl_802B629C
lbl_802B6140:
    lbz r0, 0xa(r7)
    addi r3, r1, 0x10
    stb r0, 0x15(r1)
    lbz r0, 0xb(r7)
    stb r0, 0x14(r1)
    lbz r0, 0xc(r7)
    stb r0, 0x13(r1)
    lbz r0, 0xd(r7)
    stb r0, 0x12(r1)
    lbz r0, 0xe(r7)
    stb r0, 0x11(r1)
    lbz r0, 0xf(r7)
    stb r0, 0x10(r1)
    bl l2c_pin_code_request
    addi r3, r1, 0x10
    bl btm_sec_pin_code_request
    b lbl_802B629C
lbl_802B6184:
    lbz r0, 0xa(r7)
    addi r3, r1, 0x8
    stb r0, 0xd(r1)
    lbz r0, 0xb(r7)
    stb r0, 0xc(r1)
    lbz r0, 0xc(r7)
    stb r0, 0xb(r1)
    lbz r0, 0xd(r7)
    stb r0, 0xa(r1)
    lbz r0, 0xe(r7)
    stb r0, 0x9(r1)
    lbz r0, 0xf(r7)
    stb r0, 0x8(r1)
    bl btm_sec_link_key_request
    b lbl_802B629C
lbl_802B61C0:
    addi r3, r7, 0xa
    bl btu_hcif_link_key_notification_evt
    b lbl_802B629C
lbl_802B61CC:
    lbz r0, 0xa(r7)
    cmpwi r0, 0x0
    bne lbl_802B629C
    lbz r3, 0xc(r7)
    lbz r0, 0xe(r7)
    slwi r4, r3, 8
    lbz r5, 0xb(r7)
    lbz r3, 0xd(r7)
    slwi r0, r0, 8
    add r4, r5, r4
    add r0, r3, r0
    clrlwi r29, r4, 20
    clrlwi r28, r0, 16
    mr r3, r29
    mr r4, r28
    bl btm_process_clk_off_comp_evt
    mr r3, r29
    mr r4, r28
    bl btm_sec_update_clock_offset
    b lbl_802B629C
lbl_802B621C:
    lbz r0, 0xb(r7)
    lbz r3, 0xa(r7)
    slwi r0, r0, 8
    add r0, r3, r0
    clrlwi r3, r0, 20
    bl l2c_link_hci_qos_violation
    b lbl_802B629C
lbl_802B6238:
    addi r3, r7, 0xa
    bl btu_hcif_esco_connection_comp_evt
    b lbl_802B629C
lbl_802B6244:
    lbz r4, 0xc(r7)
    lbz r3, 0x10(r7)
    lbz r0, 0x12(r7)
    slwi r6, r4, 8
    lbz r8, 0xb(r7)
    slwi r3, r3, 8
    lbz r5, 0xf(r7)
    slwi r0, r0, 8
    add r9, r8, r6
    lbz r4, 0x11(r7)
    add r8, r5, r3
    lbz r3, 0xa(r7)
    add r0, r4, r0
    lbz r5, 0xd(r7)
    lbz r6, 0xe(r7)
    clrlwi r7, r8, 16
    clrlwi r4, r9, 16
    clrlwi r8, r0, 16
    bl btm_esco_proc_conn_chg
    b lbl_802B629C
lbl_802B6294:
    addi r3, r7, 0xa
    bl btm_vendor_specific_evt
lbl_802B629C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// btu_hcif_send_cmd
// ----------------------------------------------------------------------------
asm void btu_hcif_send_cmd() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    beq lbl_802B6304
    lis r3, lbl_80453A50@ha
    addi r3, r3, lbl_80453A50@l
    lhz r0, 0x6c(r3)
    cmpwi r0, 0x0
    beq lbl_802B6304
    mr r4, r31
    addi r3, r3, 0x64
    bl GKI_enqueue
    li r31, 0x0
lbl_802B6304:
    lis r4, lbl_80453A50@ha
    addi r4, r4, lbl_80453A50@l
    lhz r0, 0x80(r4)
    cmpwi r0, 0x0
    bne lbl_802B6338
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x64e(r3)
    cmpwi r0, 0x0
    bne lbl_802B6338
    lhz r3, 0x6c(r4)
    addi r0, r3, 0x1
    sth r0, 0x80(r4)
lbl_802B6338:
    lis r3, lbl_80453A50@ha
    addi r30, r3, lbl_80453A50@l
    b lbl_802B6404
lbl_802B6344:
    cmpwi r31, 0x0
    bne lbl_802B6358
    addi r3, r30, 0x64
    bl GKI_dequeue
    mr r31, r3
lbl_802B6358:
    cmpwi r31, 0x0
    beq lbl_802B6410
    lhz r0, 0x4(r31)
    add r3, r31, r0
    lbz r0, 0x9(r3)
    lbz r3, 0x8(r3)
    slwi r0, r0, 8
    add r0, r3, r0
    clrlwi r0, r0, 16
    cmplwi r0, 0xc03
    beq lbl_802B63E8
    cmplwi r0, 0xc35
    beq lbl_802B63E8
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_802B63E8
    mr r4, r31
    li r5, 0x8
    bl memcpy
    lhz r3, 0x4(r29)
    lhz r0, 0x4(r31)
    add r3, r29, r3
    lhz r5, 0x2(r31)
    add r4, r31, r0
    addi r3, r3, 0x8
    addi r4, r4, 0x8
    bl memcpy
    mr r4, r29
    addi r3, r30, 0x70
    bl GKI_enqueue
    addi r3, r30, 0x4c
    li r4, 0x3c
    li r5, 0x8
    bl btu_start_timer
lbl_802B63E8:
    lhz r5, 0x80(r30)
    mr r3, r31
    li r4, 0x2000
    subi r0, r5, 0x1
    sth r0, 0x80(r30)
    bl bte_hcisu_send
    li r31, 0x0
lbl_802B6404:
    lhz r0, 0x80(r30)
    cmpwi r0, 0x0
    bne lbl_802B6344
lbl_802B6410:
    cmpwi r31, 0x0
    beq lbl_802B642C
    lis r3, lbl_80453A50@ha
    mr r4, r31
    addi r3, r3, lbl_80453A50@l
    addi r3, r3, 0x64
    bl GKI_enqueue
lbl_802B642C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btu_hcif_connection_comp_evt
// ----------------------------------------------------------------------------
asm void btu_hcif_connection_comp_evt() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lbz r0, 0x2(r3)
    lbz r31, 0x0(r3)
    slwi r4, r0, 8
    lbz r5, 0x1(r3)
    lbz r0, 0x3(r3)
    add r4, r5, r4
    stb r0, 0xd(r1)
    clrlwi r30, r4, 20
    lbz r0, 0x4(r3)
    stb r0, 0xc(r1)
    lbz r0, 0x5(r3)
    stb r0, 0xb(r1)
    lbz r0, 0x6(r3)
    stb r0, 0xa(r1)
    lbz r0, 0x7(r3)
    stb r0, 0x9(r1)
    lbz r0, 0x8(r3)
    stb r0, 0x8(r1)
    lbz r0, 0x9(r3)
    lbz r6, 0xa(r3)
    cmplwi r0, 0x1
    bne lbl_802B64D8
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x8
    bl btm_sec_connected
    mr r3, r31
    mr r4, r30
    addi r5, r1, 0x8
    bl l2c_link_hci_conn_comp
    b lbl_802B650C
lbl_802B64D8:
    addi r3, r1, 0x10
    li r4, 0x0
    li r5, 0xe
    bl memset
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    li r5, 0x6
    bl memcpy
    mr r3, r31
    mr r5, r30
    addi r4, r1, 0x8
    addi r6, r1, 0x10
    bl btm_sco_connected
lbl_802B650C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btu_hcif_connection_request_evt
// ----------------------------------------------------------------------------
asm void btu_hcif_connection_request_evt() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lbz r0, 0x0(r3)
    stb r0, 0x11(r1)
    lbz r0, 0x1(r3)
    stb r0, 0x10(r1)
    lbz r0, 0x2(r3)
    stb r0, 0xf(r1)
    lbz r0, 0x3(r3)
    stb r0, 0xe(r1)
    lbz r0, 0x4(r3)
    stb r0, 0xd(r1)
    lbz r0, 0x5(r3)
    stb r0, 0xc(r1)
    lbz r0, 0x6(r3)
    stb r0, 0xa(r1)
    lbz r0, 0x7(r3)
    stb r0, 0x9(r1)
    lbz r0, 0x8(r3)
    stb r0, 0x8(r1)
    lbz r5, 0x9(r3)
    cmplwi r5, 0x1
    bne lbl_802B6594
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl btm_sec_conn_req
    b lbl_802B65A0
lbl_802B6594:
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl btm_sco_conn_req
lbl_802B65A0:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btu_hcif_qos_setup_comp_evt
// ----------------------------------------------------------------------------
asm void btu_hcif_qos_setup_comp_evt() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r6, r3
    stw r0, 0x24(r1)
    addi r5, r1, 0x8
    lbz r4, 0x2(r6)
    lbz r3, 0x0(r3)
    lbz r7, 0x1(r6)
    slwi r4, r4, 8
    lbz r0, 0x3(r6)
    add r4, r7, r4
    stb r0, 0x8(r1)
    clrlwi r4, r4, 16
    lbz r0, 0x4(r6)
    stb r0, 0x9(r1)
    lbz r7, 0x8(r6)
    lbz r8, 0x7(r6)
    lbz r0, 0x6(r6)
    slwi r9, r7, 24
    lbz r7, 0x5(r6)
    slwi r8, r8, 16
    slwi r0, r0, 8
    add r7, r8, r7
    add r0, r9, r0
    add r0, r7, r0
    stw r0, 0xc(r1)
    lbz r7, 0xc(r6)
    lbz r8, 0xb(r6)
    lbz r0, 0xa(r6)
    slwi r9, r7, 24
    lbz r7, 0x9(r6)
    slwi r8, r8, 16
    slwi r0, r0, 8
    add r7, r8, r7
    add r0, r9, r0
    add r0, r7, r0
    stw r0, 0x14(r1)
    lbz r7, 0x10(r6)
    lbz r8, 0xf(r6)
    lbz r0, 0xe(r6)
    slwi r9, r7, 24
    lbz r7, 0xd(r6)
    slwi r8, r8, 16
    slwi r0, r0, 8
    add r7, r8, r7
    add r0, r9, r0
    add r0, r7, r0
    stw r0, 0x18(r1)
    lbz r8, 0x14(r6)
    lbz r7, 0x13(r6)
    lbz r0, 0x12(r6)
    slwi r8, r8, 24
    lbz r6, 0x11(r6)
    slwi r7, r7, 16
    slwi r0, r0, 8
    add r6, r7, r6
    add r0, r8, r0
    add r0, r6, r0
    stw r0, 0x1c(r1)
    bl btm_qos_setup_complete
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btu_hcif_esco_connection_comp_evt
// ----------------------------------------------------------------------------
asm void btu_hcif_esco_connection_comp_evt() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x6
    stw r0, 0x34(r1)
    addi r4, r1, 0x8
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lbz r0, 0x2(r3)
    lbz r31, 0x0(r3)
    slwi r6, r0, 8
    lbz r7, 0x1(r3)
    lbz r0, 0x3(r3)
    add r6, r7, r6
    stb r0, 0xd(r1)
    clrlwi r30, r6, 16
    lbz r0, 0x4(r3)
    stb r0, 0xc(r1)
    lbz r0, 0x5(r3)
    stb r0, 0xb(r1)
    lbz r0, 0x6(r3)
    stb r0, 0xa(r1)
    lbz r0, 0x7(r3)
    stb r0, 0x9(r1)
    lbz r0, 0x8(r3)
    stb r0, 0x8(r1)
    lbz r0, 0x9(r3)
    stb r0, 0x1a(r1)
    lbz r0, 0xa(r3)
    stb r0, 0x1b(r1)
    lbz r0, 0xb(r3)
    stb r0, 0x1c(r1)
    lbz r0, 0xd(r3)
    lbz r6, 0xc(r3)
    slwi r0, r0, 8
    add r0, r6, r0
    sth r0, 0x10(r1)
    lbz r0, 0xf(r3)
    lbz r6, 0xe(r3)
    slwi r0, r0, 8
    add r0, r6, r0
    sth r0, 0x12(r1)
    lbz r0, 0x10(r3)
    addi r3, r1, 0x14
    stb r0, 0x1d(r1)
    bl memcpy
    mr r3, r31
    mr r5, r30
    addi r4, r1, 0x8
    addi r6, r1, 0x10
    bl btm_sco_connected
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btu_hcif_hdl_command_complete
// ----------------------------------------------------------------------------
asm void btu_hcif_hdl_command_complete() {
    nofralloc
    cmpwi r3, 0xc14
    mr r6, r3
    beq lbl_802B68A0
    bge lbl_802B67F4
    cmpwi r3, 0xc05
    beq lbl_802B6854
    bge lbl_802B67D0
    cmpwi r3, 0x80c
    beq lbl_802B6880
    bge lbl_802B67C4
    cmpwi r3, 0x402
    beq lbl_802B684C
    b lbl_802B68C8
lbl_802B67C4:
    cmpwi r3, 0xc03
    beq lbl_802B6848
    b lbl_802B68C8
lbl_802B67D0:
    cmpwi r3, 0xc11
    beq lbl_802B6864
    bge lbl_802B67E8
    cmpwi r3, 0xc0d
    beq lbl_802B685C
    b lbl_802B68C8
lbl_802B67E8:
    cmpwi r3, 0xc13
    bge lbl_802B68C8
    b lbl_802B686C
lbl_802B67F4:
    cmpwi r3, 0x1009
    beq lbl_802B68AC
    bge lbl_802B6824
    cmpwi r3, 0x1003
    beq lbl_802B6894
    bge lbl_802B6818
    cmpwi r3, 0x1001
    beq lbl_802B6874
    b lbl_802B68C8
lbl_802B6818:
    cmpwi r3, 0x1005
    beq lbl_802B6888
    b lbl_802B68C8
lbl_802B6824:
    cmpwi r3, 0x1404
    beq lbl_802B68C8
    bge lbl_802B683C
    cmpwi r3, 0x1403
    bge lbl_802B68B8
    b lbl_802B68C8
lbl_802B683C:
    cmpwi r3, 0x1406
    bge lbl_802B68C8
    b lbl_802B68C0
lbl_802B6848:
    b btm_reset_complete
lbl_802B684C:
    li r3, 0x0
    b btm_process_inq_complete
lbl_802B6854:
    mr r3, r4
    b btm_event_filter_complete
lbl_802B685C:
    mr r3, r4
    b btm_read_stored_link_key_complete
lbl_802B6864:
    mr r3, r4
    b btm_write_stored_link_key_complete
lbl_802B686C:
    mr r3, r4
    b btm_delete_stored_link_key_complete
lbl_802B6874:
    mr r3, r4
    mr r4, r5
    b btm_read_local_version_complete
lbl_802B6880:
    mr r3, r4
    b btm_read_link_policy_complete
lbl_802B6888:
    mr r3, r4
    mr r4, r5
    b btm_read_hci_buf_size_complete
lbl_802B6894:
    mr r3, r4
    mr r4, r5
    b btm_read_local_features_complete
lbl_802B68A0:
    mr r3, r4
    mr r4, r5
    b btm_read_local_name_complete
lbl_802B68AC:
    mr r3, r4
    mr r4, r5
    b btm_read_local_addr_complete
lbl_802B68B8:
    mr r3, r4
    b btm_read_link_quality_complete
lbl_802B68C0:
    mr r3, r4
    b btm_read_rssi_complete
lbl_802B68C8:
    rlwinm r3, r3, 0, 16, 21
    addis r0, r3, 0x0
    cmplwi r0, 0xfc00
    bnelr
    mr r3, r4
    mr r4, r6
    b btm_vsc_complete
    blr
}

// ----------------------------------------------------------------------------
// btu_hcif_command_complete_evt
// ----------------------------------------------------------------------------
asm void btu_hcif_command_complete_evt() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80453A50@ha
    addi r31, r31, lbl_80453A50@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x0(r3)
    sth r0, 0x80(r31)
    lbz r0, 0x2(r3)
    lbz r3, 0x1(r3)
    slwi r0, r0, 8
    add r0, r3, r0
    clrlwi r30, r0, 16
    cmplwi r30, 0xc03
    beq lbl_802B69C4
    cmplwi r30, 0xc35
    beq lbl_802B69C4
    cmpwi r30, 0x0
    beq lbl_802B69C4
    addi r3, r31, 0x70
    bl GKI_dequeue
    cmpwi r3, 0x0
    beq lbl_802B6990
    lbz r0, 0x9(r3)
    cmplwi r30, 0xfc4c
    lbz r4, 0x8(r3)
    slwi r0, r0, 8
    add r0, r4, r0
    clrlwi r0, r0, 16
    bne lbl_802B698C
    cmplw r0, r30
    beq lbl_802B698C
    mr r4, r3
    addi r3, r31, 0x70
    bl GKI_enqueue_head
    b lbl_802B69E0
lbl_802B698C:
    bl GKI_freebuf
lbl_802B6990:
    lis r31, lbl_80453A50@ha
    addi r31, r31, lbl_80453A50@l
    addi r3, r31, 0x70
    bl GKI_queue_is_empty
    clrlwi. r0, r3, 24
    bne lbl_802B69BC
    addi r3, r31, 0x4c
    li r4, 0x3c
    li r5, 0x8
    bl btu_start_timer
    b lbl_802B69C4
lbl_802B69BC:
    addi r3, r31, 0x4c
    bl btu_stop_timer
lbl_802B69C4:
    subi r0, r29, 0x3
    mr r3, r30
    addi r4, r28, 0x3
    clrlwi r5, r0, 16
    bl btu_hcif_hdl_command_complete
    li r3, 0x0
    bl btu_hcif_send_cmd
lbl_802B69E0:
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
// btu_hcif_hdl_command_status
// ----------------------------------------------------------------------------
asm void btu_hcif_hdl_command_status() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x802
    mr r6, r3
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    beq lbl_802B6A48
    bge lbl_802B6A34
    cmpwi r3, 0x801
    bge lbl_802B6A3C
    b lbl_802B6A48
lbl_802B6A34:
    cmpwi r3, 0x807
    bge lbl_802B6A48
lbl_802B6A3C:
    mr r3, r30
    bl btm_pm_proc_cmd_status
    b lbl_802B6BE8
lbl_802B6A48:
    cmpwi r4, 0x0
    beq lbl_802B6BE8
    cmpwi r3, 0x419
    beq lbl_802B6AA4
    bge lbl_802B6A80
    cmpwi r3, 0x401
    beq lbl_802B6A98
    bge lbl_802B6A74
    cmpwi r3, 0xd
    beq lbl_802B6ACC
    b lbl_802B6BC8
lbl_802B6A74:
    cmpwi r3, 0x405
    beq lbl_802B6AF8
    b lbl_802B6BC8
lbl_802B6A80:
    cmpwi r3, 0x80b
    beq lbl_802B6AE0
    bge lbl_802B6BC8
    cmpwi r3, 0x428
    beq lbl_802B6B64
    b lbl_802B6BC8
lbl_802B6A98:
    mr r3, r30
    bl btm_process_inq_complete
    b lbl_802B6BE8
lbl_802B6AA4:
    mr r6, r30
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl btm_process_remote_name
    mr r5, r30
    li r3, 0x0
    li r4, 0x0
    bl btm_sec_rmt_name_request_complete
    b lbl_802B6BE8
lbl_802B6ACC:
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl btm_qos_setup_complete
    b lbl_802B6BE8
lbl_802B6AE0:
    mr r3, r30
    li r4, 0x0
    li r5, 0xff
    bl btm_acl_role_changed
    bl l2c_link_role_change_failed
    b lbl_802B6BE8
lbl_802B6AF8:
    cmpwi r5, 0x0
    beq lbl_802B6BE8
    lbz r4, 0x1(r5)
    lis r31, 0x1
    subi r0, r31, 0x1
    addi r3, r1, 0x8
    stb r4, 0xd(r1)
    clrlwi r4, r0, 16
    li r6, 0x0
    lbz r0, 0x2(r5)
    stb r0, 0xc(r1)
    lbz r0, 0x3(r5)
    stb r0, 0xb(r1)
    lbz r0, 0x4(r5)
    stb r0, 0xa(r1)
    lbz r0, 0x5(r5)
    stb r0, 0x9(r1)
    lbz r0, 0x6(r5)
    mr r5, r30
    stb r0, 0x8(r1)
    bl btm_sec_connected
    subi r0, r31, 0x1
    mr r3, r30
    addi r5, r1, 0x8
    clrlwi r4, r0, 16
    bl l2c_link_hci_conn_comp
    b lbl_802B6BE8
lbl_802B6B64:
    cmpwi r5, 0x0
    beq lbl_802B6BE8
    lbz r0, 0x2(r5)
    lbz r3, 0x1(r5)
    slwi r0, r0, 8
    add r0, r3, r0
    clrlwi r31, r0, 16
    mr r3, r31
    bl btm_is_sco_active
    clrlwi. r0, r3, 24
    beq lbl_802B6BB0
    mr r3, r30
    mr r4, r31
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl btm_esco_proc_conn_chg
    b lbl_802B6BE8
lbl_802B6BB0:
    mr r3, r30
    mr r5, r31
    addi r6, r1, 0x10
    li r4, 0x0
    bl btm_sco_connected
    b lbl_802B6BE8
lbl_802B6BC8:
    rlwinm r3, r3, 0, 16, 21
    addis r0, r3, 0x0
    cmplwi r0, 0xfc00
    bne lbl_802B6BE8
    mr r3, r5
    mr r4, r6
    li r5, 0x1
    bl btm_vsc_complete
lbl_802B6BE8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btu_hcif_command_status_evt
// ----------------------------------------------------------------------------
asm void btu_hcif_command_status_evt() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r4, lbl_80453A50@ha
    lbz r29, 0x0(r3)
    lbz r0, 0x1(r3)
    addi r4, r4, lbl_80453A50@l
    li r31, 0x0
    li r27, 0x0
    sth r0, 0x80(r4)
    lbz r0, 0x3(r3)
    lbz r3, 0x2(r3)
    slwi r0, r0, 8
    add r0, r3, r0
    clrlwi r28, r0, 16
    cmplwi r28, 0xc03
    beq lbl_802B6CE8
    cmplwi r28, 0xc35
    beq lbl_802B6CE8
    cmpwi r28, 0x0
    beq lbl_802B6CE8
    addi r3, r4, 0x70
    bl GKI_dequeue
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802B6CB4
    lhz r0, 0x4(r3)
    add r3, r3, r0
    lbz r0, 0x9(r3)
    addi r27, r3, 0xa
    lbz r3, 0x8(r3)
    slwi r0, r0, 8
    add r0, r3, r0
    clrlwi r6, r0, 16
    cmplw r6, r28
    beq lbl_802B6CB4
    lis r3, 0x7
    lis r4, lbl_803754C8@ha
    mr r5, r28
    li r27, 0x0
    addi r3, r3, 0x1
    addi r4, r4, lbl_803754C8@l
    bl LogMsg_2
lbl_802B6CB4:
    lis r30, lbl_80453A50@ha
    addi r30, r30, lbl_80453A50@l
    addi r3, r30, 0x70
    bl GKI_queue_is_empty
    clrlwi. r0, r3, 24
    bne lbl_802B6CE0
    addi r3, r30, 0x4c
    li r4, 0x3c
    li r5, 0x8
    bl btu_start_timer
    b lbl_802B6CE8
lbl_802B6CE0:
    addi r3, r30, 0x4c
    bl btu_stop_timer
lbl_802B6CE8:
    mr r3, r28
    mr r4, r29
    mr r5, r27
    bl btu_hcif_hdl_command_status
    cmpwi r31, 0x0
    beq lbl_802B6D08
    mr r3, r31
    bl GKI_freebuf
lbl_802B6D08:
    li r3, 0x0
    bl btu_hcif_send_cmd
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btu_hcif_cmd_timeout
// ----------------------------------------------------------------------------
asm void btu_hcif_cmd_timeout() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    lis r31, lbl_80453A50@ha
    addi r31, r31, lbl_80453A50@l
    stw r30, 0x18(r1)
    addi r3, r31, 0x70
    stw r29, 0x14(r1)
    sth r0, 0x80(r31)
    bl GKI_dequeue
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802B6D7C
    lis r3, 0x7
    lis r4, lbl_803754F0@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803754F0@l
    bl LogMsg_0
    b lbl_802B6E64
lbl_802B6D7C:
    addi r3, r31, 0x70
    bl GKI_queue_is_empty
    clrlwi. r0, r3, 24
    bne lbl_802B6D9C
    addi r3, r31, 0x4c
    li r4, 0x3c
    li r5, 0x8
    bl btu_start_timer
lbl_802B6D9C:
    lhz r0, 0x4(r30)
    lis r3, 0x7
    lis r4, lbl_80375510@ha
    add r31, r30, r0
    addi r3, r3, 0x1
    lbz r0, 0x9(r31)
    addi r4, r4, lbl_80375510@l
    lbz r5, 0x8(r31)
    slwi r0, r0, 8
    add r0, r5, r0
    clrlwi r29, r0, 16
    mr r5, r29
    bl LogMsg_1
    cmpwi r29, 0x419
    beq lbl_802B6E20
    bge lbl_802B6E00
    cmpwi r29, 0x401
    beq lbl_802B6E20
    bge lbl_802B6DF4
    cmpwi r29, 0xd
    beq lbl_802B6E20
    b lbl_802B6E34
lbl_802B6DF4:
    cmpwi r29, 0x405
    beq lbl_802B6E20
    b lbl_802B6E34
lbl_802B6E00:
    cmpwi r29, 0x802
    beq lbl_802B6E34
    bge lbl_802B6E18
    cmpwi r29, 0x801
    bge lbl_802B6E20
    b lbl_802B6E34
lbl_802B6E18:
    cmpwi r29, 0x807
    bge lbl_802B6E34
lbl_802B6E20:
    mr r3, r29
    addi r5, r31, 0xa
    li r4, 0x1f
    bl btu_hcif_hdl_command_status
    b lbl_802B6E4C
lbl_802B6E34:
    li r0, 0x1f
    mr r3, r29
    stb r0, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x1
    bl btu_hcif_hdl_command_complete
lbl_802B6E4C:
    mr r3, r30
    bl GKI_freebuf
    li r3, 0x2
    bl btm_report_device_status
    li r3, 0x0
    bl btu_hcif_send_cmd
lbl_802B6E64:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btu_hcif_link_key_notification_evt
// ----------------------------------------------------------------------------
asm void btu_hcif_link_key_notification_evt() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addi r5, r3, 0x16
    stw r0, 0x24(r1)
    addi r4, r1, 0x10
    lbz r0, 0x0(r3)
    stb r0, 0xd(r1)
    lbz r0, 0x1(r3)
    stb r0, 0xc(r1)
    lbz r0, 0x2(r3)
    stb r0, 0xb(r1)
    lbz r0, 0x3(r3)
    stb r0, 0xa(r1)
    lbz r0, 0x4(r3)
    stb r0, 0x9(r1)
    lbz r0, 0x5(r3)
    stb r0, 0x8(r1)
    lbz r0, 0x6(r3)
    stb r0, 0x1f(r1)
    lbz r0, 0x7(r3)
    stb r0, 0x1e(r1)
    lbz r0, 0x8(r3)
    stb r0, 0x1d(r1)
    lbz r0, 0x9(r3)
    stb r0, 0x1c(r1)
    lbz r0, 0xa(r3)
    stb r0, 0x1b(r1)
    lbz r0, 0xb(r3)
    stb r0, 0x1a(r1)
    lbz r0, 0xc(r3)
    stb r0, 0x19(r1)
    lbz r0, 0xd(r3)
    stb r0, 0x18(r1)
    lbz r0, 0xe(r3)
    stb r0, 0x17(r1)
    lbz r0, 0xf(r3)
    stb r0, 0x16(r1)
    lbz r0, 0x10(r3)
    stb r0, 0x15(r1)
    lbz r0, 0x11(r3)
    stb r0, 0x14(r1)
    lbz r0, 0x12(r3)
    stb r0, 0x13(r1)
    lbz r0, 0x13(r3)
    stb r0, 0x12(r1)
    lbz r0, 0x14(r3)
    stb r0, 0x11(r1)
    lbz r0, 0x15(r3)
    addi r3, r1, 0x8
    stb r0, 0x10(r1)
    lbz r5, 0x0(r5)
    bl btm_sec_link_key_notification
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

