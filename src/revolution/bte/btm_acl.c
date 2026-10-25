#include "types.h"

// Translation unit: src/revolution/bte/btm_acl.cpp
// Total functions: 29

// Global data symbols (@ha/@l)
extern u8 lbl_80373ED0[];
extern u8 lbl_80373F10[];
extern u8 lbl_80373F30[];
extern u8 lbl_803740B0[];
extern u8 lbl_803740EC[];
extern u8 lbl_80374154[];
extern u8 lbl_8037417C[];
extern u8 lbl_803741B0[];
extern u8 lbl_803741EC[];
extern u8 lbl_8037421C[];
extern u8 lbl_80453A50[];
extern u8 lbl_80453F78[];

// Forward declarations
extern void BTM_AclRegisterForChanges();
extern void BTM_GetHCIConnHandle();
extern void BTM_GetNumAclLinks();
extern void BTM_IsAclConnectionUp();
extern void BTM_ReadLinkQuality();
extern void BTM_ReadLocalFeatures();
extern void BTM_ReadPowerMode();
extern void BTM_ReadRSSI();
extern void BTM_SetDefaultLinkPolicy();
extern void BTM_SetDefaultLinkSuperTout();
extern void BTM_SetLinkPolicy();
extern void BTM_SetPowerMode();
extern void BTM_SwitchRole();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void LogMsg_6();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _restgpr_27();
extern void _savegpr_24();
extern void _savegpr_25();
extern void _savegpr_27();
extern void btm_acl_created();
extern void btm_acl_device_down();
extern void btm_acl_encrypt_change();
extern void btm_acl_init();
extern void btm_acl_removed();
extern void btm_acl_role_changed();
extern void btm_acl_timeout();
extern void btm_chg_all_acl_pkt_types();
extern void btm_find_dev();
extern void btm_find_dev_by_handle();
extern void btm_get_acl_disc_reason_code();
extern void btm_get_max_packet_size();
extern void btm_handle_to_acl_index();
extern void btm_is_sco_active_by_bdaddr();
extern void btm_pm_sm_alloc();
extern void btm_process_clk_off_comp_evt();
extern void btm_qos_setup_complete();
extern void btm_read_link_policy_complete();
extern void btm_read_link_quality_complete();
extern void btm_read_remote_features_complete();
extern void btm_read_remote_version_complete();
extern void btm_read_rssi_complete();
extern void btm_remove_acl();
extern void btsnd_hcic_change_conn_type();
extern void btsnd_hcic_disconnect();
extern void btsnd_hcic_get_link_quality();
extern void btsnd_hcic_read_rmt_clk_offset();
extern void btsnd_hcic_read_rssi();
extern void btsnd_hcic_rmt_features_req();
extern void btsnd_hcic_rmt_ver_req();
extern void btsnd_hcic_set_conn_encrypt();
extern void btsnd_hcic_switch_role();
extern void btsnd_hcic_write_link_super_tout();
extern void btsnd_hcic_write_policy_set();
extern void btu_start_timer();
extern void btu_stop_timer();
extern void l2c_link_hci_disc_comp();
extern void memcmp();
extern void memcpy();
extern void memset();

// ----------------------------------------------------------------------------
// btm_acl_init
// ----------------------------------------------------------------------------
asm void btm_acl_init() {
    nofralloc
    lis r3, lbl_80453F78@ha
    li r4, 0x7d00
    addi r3, r3, lbl_80453F78@l
    li r0, 0xff
    sth r4, 0x4c6(r3)
    stb r0, 0x27bf(r3)
    blr
}

// ----------------------------------------------------------------------------
// btm_handle_to_acl_index
// ----------------------------------------------------------------------------
asm void btm_handle_to_acl_index() {
    nofralloc
    lis r4, lbl_80453F78@ha
    li r5, 0x0
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x14d(r4)
    cmpwi r0, 0x0
    beq lbl_802AB8F4
    lhz r0, 0x34(r4)
    cmplw r0, r3
    beq lbl_802AB94C
lbl_802AB8F4:
    lbz r0, 0x269(r4)
    li r5, 0x1
    cmpwi r0, 0x0
    beq lbl_802AB910
    lhz r0, 0x150(r4)
    cmplw r0, r3
    beq lbl_802AB94C
lbl_802AB910:
    lbz r0, 0x385(r4)
    li r5, 0x2
    cmpwi r0, 0x0
    beq lbl_802AB92C
    lhz r0, 0x26c(r4)
    cmplw r0, r3
    beq lbl_802AB94C
lbl_802AB92C:
    lbz r0, 0x4a1(r4)
    li r5, 0x3
    cmpwi r0, 0x0
    beq lbl_802AB948
    lhz r0, 0x388(r4)
    cmplw r0, r3
    beq lbl_802AB94C
lbl_802AB948:
    li r5, 0x4
lbl_802AB94C:
    mr r3, r5
    blr
}

// ----------------------------------------------------------------------------
// btm_acl_created
// ----------------------------------------------------------------------------
asm void btm_acl_created() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r8, lbl_80453F78@ha
    mr r30, r3
    addi r8, r8, lbl_80453F78@l
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    addi r29, r8, 0x34
    li r31, 0x0
lbl_802AB98C:
    lbz r0, 0x119(r29)
    cmpwi r0, 0x0
    beq lbl_802AB9B4
    mr r4, r30
    addi r3, r29, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802AB9B4
    b lbl_802AB9C8
lbl_802AB9B4:
    addi r31, r31, 0x1
    addi r29, r29, 0x11c
    cmplwi r31, 0x4
    blt lbl_802AB98C
    li r29, 0x0
lbl_802AB9C8:
    cmpwi r29, 0x0
    beq lbl_802ABA1C
    sth r27, 0x0(r29)
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    stb r28, 0x11a(r29)
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802ABC50
    lis r3, 0xd
    lis r4, lbl_80373ED0@ha
    lbz r5, 0x0(r30)
    addi r3, r3, 0x3
    lbz r6, 0x1(r30)
    addi r4, r4, lbl_80373ED0@l
    lbz r7, 0x2(r30)
    lbz r8, 0x3(r30)
    lbz r9, 0x4(r30)
    lbz r10, 0x5(r30)
    bl LogMsg_6
    b lbl_802ABC50
lbl_802ABA1C:
    lis r3, lbl_80453F78@ha
    li r0, 0x4
    addi r3, r3, lbl_80453F78@l
    li r4, 0x0
    addi r31, r3, 0x34
    mtctr r0
lbl_802ABA34:
    lbz r0, 0x119(r31)
    cmpwi r0, 0x0
    bne lbl_802ABC44
    li r3, 0x1
    li r0, 0x0
    stb r3, 0x119(r31)
    clrlwi r3, r4, 24
    sth r27, 0x0(r31)
    stb r28, 0x11a(r31)
    sth r0, 0x4(r31)
    bl btm_pm_sm_alloc
    mr r4, r30
    addi r3, r31, 0x8
    li r5, 0x6
    bl memcpy
    cmpwi r25, 0x0
    beq lbl_802ABA88
    mr r4, r25
    addi r3, r31, 0xe
    li r5, 0x3
    bl memcpy
lbl_802ABA88:
    cmpwi r26, 0x0
    beq lbl_802ABAA0
    mr r4, r26
    addi r3, r31, 0x11
    li r5, 0xf8
    bl memcpy
lbl_802ABAA0:
    lhz r3, 0x0(r31)
    bl btsnd_hcic_read_rmt_clk_offset
    lhz r3, 0x0(r31)
    bl btsnd_hcic_rmt_ver_req
    mr r3, r27
    bl btm_find_dev_by_handle
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_802ABC38
    li r0, 0x8
    li r6, 0x0
    mtctr r0
lbl_802ABAD0:
    clrlwi r0, r6, 24
    add r4, r3, r0
    lbz r0, 0x77(r4)
    cmpwi r0, 0x0
    beq lbl_802ABC30
    addi r4, r5, 0x77
    addi r3, r31, 0x110
    li r5, 0x8
    bl memcpy
    lis r3, lbl_80453F78@ha
    li r0, -0x3307
    addi r3, r3, lbl_80453F78@l
    lhz r5, 0x654(r3)
    lbz r3, 0x636(r3)
    andi. r4, r5, 0xcc18
    cmplwi r3, 0x3
    and r30, r4, r0
    blt lbl_802ABB24
    andi. r0, r5, 0x3306
    or r0, r4, r0
    clrlwi r30, r0, 16
lbl_802ABB24:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802ABB50
    lis r3, 0xd
    lis r4, lbl_80373F10@ha
    addi r3, r3, 0x3
    clrlwi r5, r30, 16
    addi r4, r4, lbl_80373F10@l
    bl LogMsg_1
lbl_802ABB50:
    lhz r3, 0x0(r31)
    clrlwi r4, r30, 16
    bl btsnd_hcic_change_conn_type
    clrlwi. r0, r3, 24
    beq lbl_802ABB68
    sth r30, 0x2(r31)
lbl_802ABB68:
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lhz r0, 0x4c4(r4)
    cmpwi r0, 0x0
    beq lbl_802ABB88
    addi r3, r31, 0x8
    addi r4, r4, 0x4c4
    bl BTM_SetLinkPolicy
lbl_802ABB88:
    lis r3, lbl_80453F78@ha
    li r29, 0x0
    addi r3, r3, lbl_80453F78@l
    lhz r28, 0x4c6(r3)
    addi r30, r3, 0x34
lbl_802ABB9C:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_802ABBC4
    addi r3, r30, 0x8
    addi r4, r31, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802ABBC4
    b lbl_802ABBD8
lbl_802ABBC4:
    addi r29, r29, 0x1
    addi r30, r30, 0x11c
    cmplwi r29, 0x4
    blt lbl_802ABB9C
    li r30, 0x0
lbl_802ABBD8:
    cmpwi r30, 0x0
    beq lbl_802ABBFC
    sth r28, 0x10e(r30)
    lbz r0, 0x11a(r30)
    cmpwi r0, 0x0
    bne lbl_802ABBFC
    lhz r3, 0x0(r30)
    mr r4, r28
    bl btsnd_hcic_write_link_super_tout
lbl_802ABBFC:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x4c8(r3)
    cmpwi r12, 0x0
    beq lbl_802ABC50
    addi r3, r31, 0x8
    addi r4, r31, 0xe
    addi r5, r31, 0x11
    addi r6, r31, 0x110
    li r7, 0x1
    mtctr r12
    bctrl
    b lbl_802ABC50
lbl_802ABC30:
    addi r6, r6, 0x1
    bdnz lbl_802ABAD0
lbl_802ABC38:
    lhz r3, 0x0(r31)
    bl btsnd_hcic_rmt_features_req
    b lbl_802ABC50
lbl_802ABC44:
    addi r4, r4, 0x1
    addi r31, r31, 0x11c
    bdnz lbl_802ABA34
lbl_802ABC50:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btm_acl_removed
// ----------------------------------------------------------------------------
asm void btm_acl_removed() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x34
    stw r29, 0x14(r1)
    mr r29, r3
lbl_802ABC94:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_802ABCBC
    mr r4, r29
    addi r3, r30, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802ABCBC
    b lbl_802ABCD0
lbl_802ABCBC:
    addi r31, r31, 0x1
    addi r30, r30, 0x11c
    cmplwi r31, 0x4
    blt lbl_802ABC94
    li r30, 0x0
lbl_802ABCD0:
    cmpwi r30, 0x0
    beq lbl_802ABD10
    li r0, 0x0
    lis r3, lbl_80453F78@ha
    stb r0, 0x119(r30)
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x4c8(r3)
    cmpwi r12, 0x0
    beq lbl_802ABD10
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    mtctr r12
    bctrl
lbl_802ABD10:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_acl_device_down
// ----------------------------------------------------------------------------
asm void btm_acl_device_down() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80453F78@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80453F78@l
    stw r31, 0xc(r1)
    addi r31, r3, 0x34
    stw r30, 0x8(r1)
    li r30, 0x0
lbl_802ABD50:
    lbz r0, 0x119(r31)
    cmpwi r0, 0x0
    beq lbl_802ABD68
    lhz r3, 0x0(r31)
    li r4, 0x3
    bl l2c_link_hci_disc_comp
lbl_802ABD68:
    addi r30, r30, 0x1
    addi r31, r31, 0x11c
    cmplwi r30, 0x4
    blt lbl_802ABD50
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// BTM_SwitchRole
// ----------------------------------------------------------------------------
asm void BTM_SwitchRole() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r6, lbl_80453F78@ha
    mr r28, r3
    addi r6, r6, lbl_80453F78@l
    mr r29, r4
    lbz r0, 0x640(r6)
    mr r30, r5
    rlwinm. r0, r0, 0, 26, 26
    bne lbl_802ABDCC
    li r3, 0x4
    b lbl_802ABF94
lbl_802ABDCC:
    addi r31, r6, 0x34
    li r27, 0x0
lbl_802ABDD4:
    lbz r0, 0x119(r31)
    cmpwi r0, 0x0
    beq lbl_802ABDFC
    mr r4, r28
    addi r3, r31, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802ABDFC
    b lbl_802ABE10
lbl_802ABDFC:
    addi r27, r27, 0x1
    addi r31, r31, 0x11c
    cmplwi r27, 0x4
    blt lbl_802ABDD4
    li r31, 0x0
lbl_802ABE10:
    cmpwi r31, 0x0
    bne lbl_802ABE20
    li r3, 0x7
    b lbl_802ABF94
lbl_802ABE20:
    lbz r0, 0x11a(r31)
    cmplw r0, r29
    bne lbl_802ABE34
    li r3, 0x0
    b lbl_802ABF94
lbl_802ABE34:
    mr r3, r28
    bl btm_is_sco_active_by_bdaddr
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_802ABE50
    li r3, 0x3
    b lbl_802ABF94
lbl_802ABE50:
    lbz r0, 0x11b(r31)
    cmpwi r0, 0x0
    beq lbl_802ABE8C
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x5
    blt lbl_802ABE84
    lis r3, 0xd
    lis r4, lbl_80373F30@ha
    addi r3, r3, 0x4
    addi r4, r4, lbl_80373F30@l
    bl LogMsg_0
lbl_802ABE84:
    li r3, 0x2
    b lbl_802ABF94
lbl_802ABE8C:
    lis r3, lbl_80453F78@ha
    li r4, 0x0
    addi r3, r3, lbl_80453F78@l
    li r5, 0x8
    addi r3, r3, 0x624
    bl memset
    addi r3, r31, 0x8
    addi r4, r1, 0x8
    bl BTM_ReadPowerMode
    clrlwi. r0, r3, 24
    beq lbl_802ABEBC
    b lbl_802ABF94
lbl_802ABEBC:
    lbz r3, 0x8(r1)
    addi r0, r3, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_802ABF08
    li r0, 0x0
    addi r4, r31, 0x8
    stb r0, 0x14(r1)
    addi r5, r1, 0xc
    li r3, 0x80
    bl BTM_SetPowerMode
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_802ABEFC
    li r3, 0x6
    b lbl_802ABF94
lbl_802ABEFC:
    li r0, 0x1
    stb r0, 0x11b(r31)
    b lbl_802ABF70
lbl_802ABF08:
    mr r3, r28
    bl btm_find_dev
    cmpwi r3, 0x0
    beq lbl_802ABF4C
    lbz r0, 0x76(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_802ABF4C
    lhz r3, 0x0(r31)
    li r4, 0x0
    bl btsnd_hcic_set_conn_encrypt
    clrlwi. r0, r3, 24
    bne lbl_802ABF40
    li r3, 0x3
    b lbl_802ABF94
lbl_802ABF40:
    li r0, 0x2
    stb r0, 0x11b(r31)
    b lbl_802ABF70
lbl_802ABF4C:
    mr r3, r28
    mr r4, r29
    bl btsnd_hcic_switch_role
    clrlwi. r0, r3, 24
    bne lbl_802ABF68
    li r3, 0x3
    b lbl_802ABF94
lbl_802ABF68:
    li r0, 0x5
    stb r0, 0x11b(r31)
lbl_802ABF70:
    lis r31, lbl_80453F78@ha
    mr r4, r28
    addi r31, r31, lbl_80453F78@l
    li r5, 0x6
    addi r3, r31, 0x626
    bl memcpy
    stb r29, 0x625(r31)
    li r3, 0x1
    stw r30, 0x62c(r31)
lbl_802ABF94:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btm_acl_encrypt_change
// ----------------------------------------------------------------------------
asm void btm_acl_encrypt_change() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    li r6, 0x0
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r0, 0x14d(r4)
    cmpwi r0, 0x0
    beq lbl_802ABFE8
    lhz r0, 0x34(r4)
    cmplw r0, r3
    beq lbl_802AC040
lbl_802ABFE8:
    lbz r0, 0x269(r4)
    li r6, 0x1
    cmpwi r0, 0x0
    beq lbl_802AC004
    lhz r0, 0x150(r4)
    cmplw r0, r3
    beq lbl_802AC040
lbl_802AC004:
    lbz r0, 0x385(r4)
    li r6, 0x2
    cmpwi r0, 0x0
    beq lbl_802AC020
    lhz r0, 0x26c(r4)
    cmplw r0, r3
    beq lbl_802AC040
lbl_802AC020:
    lbz r0, 0x4a1(r4)
    li r6, 0x3
    cmpwi r0, 0x0
    beq lbl_802AC03C
    lhz r0, 0x388(r4)
    cmplw r0, r3
    beq lbl_802AC040
lbl_802AC03C:
    li r6, 0x4
lbl_802AC040:
    cmplwi r6, 0x4
    bge lbl_802AC100
    mulli r0, r6, 0x11c
    lis r30, lbl_80453F78@ha
    addi r30, r30, lbl_80453F78@l
    add r29, r30, r0
    b lbl_802AC060
    b lbl_802AC100
lbl_802AC060:
    lbz r0, 0x14f(r29)
    cmplwi r0, 0x2
    bne lbl_802AC0D4
    cmpwi r5, 0x0
    beq lbl_802AC080
    li r0, 0x0
    stb r0, 0x14f(r29)
    b lbl_802AC088
lbl_802AC080:
    li r0, 0x3
    stb r0, 0x14f(r29)
lbl_802AC088:
    lbz r0, 0x14e(r29)
    addi r3, r29, 0x3c
    cntlzw r0, r0
    extrwi r4, r0, 8, 19
    bl btsnd_hcic_switch_role
    clrlwi. r0, r3, 24
    bne lbl_802AC100
    li r30, 0x0
    lis r31, lbl_80453F78@ha
    stb r30, 0x14f(r29)
    addi r31, r31, lbl_80453F78@l
    lwz r12, 0x62c(r31)
    cmpwi r12, 0x0
    beq lbl_802AC100
    addi r3, r31, 0x624
    mtctr r12
    bctrl
    stw r30, 0x62c(r31)
    b lbl_802AC100
lbl_802AC0D4:
    cmplwi r0, 0x4
    bne lbl_802AC100
    li r31, 0x0
    stb r31, 0x14f(r29)
    lwz r12, 0x62c(r30)
    cmpwi r12, 0x0
    beq lbl_802AC100
    addi r3, r30, 0x624
    mtctr r12
    bctrl
    stw r31, 0x62c(r30)
lbl_802AC100:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// BTM_SetLinkPolicy
// ----------------------------------------------------------------------------
asm void BTM_SetLinkPolicy() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_80373ED0@ha
    addi r30, r30, lbl_80373ED0@l
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl BTM_ReadLocalFeatures
    lhz r4, 0x0(r29)
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_802AC274
    clrlwi. r0, r4, 31
    beq lbl_802AC19C
    lbz r0, 0x0(r3)
    rlwinm. r0, r0, 0, 26, 26
    bne lbl_802AC19C
    rlwinm r5, r4, 0, 16, 30
    lis r3, lbl_80453F78@ha
    sth r5, 0x0(r29)
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_802AC19C
    lis r3, 0xd
    addi r4, r30, 0xbc
    addi r3, r3, 0x2
    bl LogMsg_1
lbl_802AC19C:
    lhz r3, 0x0(r29)
    rlwinm. r0, r3, 0, 30, 30
    beq lbl_802AC1E4
    lbz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 25, 25
    bne lbl_802AC1E4
    rlwinm r5, r3, 0, 31, 29
    lis r3, lbl_80453F78@ha
    sth r5, 0x0(r29)
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_802AC1E4
    lis r3, 0xd
    addi r4, r30, 0xf8
    addi r3, r3, 0x2
    clrlwi r5, r5, 16
    bl LogMsg_1
lbl_802AC1E4:
    lhz r3, 0x0(r29)
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_802AC22C
    lbz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 24, 24
    bne lbl_802AC22C
    rlwinm r5, r3, 0, 30, 28
    lis r3, lbl_80453F78@ha
    sth r5, 0x0(r29)
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_802AC22C
    lis r3, 0xd
    addi r4, r30, 0x130
    addi r3, r3, 0x2
    clrlwi r5, r5, 16
    bl LogMsg_1
lbl_802AC22C:
    lhz r3, 0x0(r29)
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_802AC274
    lbz r0, 0x1(r31)
    clrlwi. r0, r0, 31
    bne lbl_802AC274
    rlwinm r5, r3, 0, 29, 27
    lis r3, lbl_80453F78@ha
    sth r5, 0x0(r29)
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_802AC274
    lis r3, 0xd
    addi r4, r30, 0x170
    addi r3, r3, 0x2
    clrlwi r5, r5, 16
    bl LogMsg_1
lbl_802AC274:
    lis r3, lbl_80453F78@ha
    li r30, 0x0
    addi r3, r3, lbl_80453F78@l
    addi r31, r3, 0x34
lbl_802AC284:
    lbz r0, 0x119(r31)
    cmpwi r0, 0x0
    beq lbl_802AC2AC
    mr r4, r28
    addi r3, r31, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802AC2AC
    b lbl_802AC2C0
lbl_802AC2AC:
    addi r30, r30, 0x1
    addi r31, r31, 0x11c
    cmplwi r30, 0x4
    blt lbl_802AC284
    li r31, 0x0
lbl_802AC2C0:
    cmpwi r31, 0x0
    beq lbl_802AC2E8
    lhz r3, 0x0(r31)
    lhz r4, 0x0(r29)
    bl btsnd_hcic_write_policy_set
    clrlwi. r0, r3, 24
    li r3, 0x3
    beq lbl_802AC2EC
    li r3, 0x1
    b lbl_802AC2EC
lbl_802AC2E8:
    li r3, 0x7
lbl_802AC2EC:
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
// BTM_SetDefaultLinkPolicy
// ----------------------------------------------------------------------------
asm void BTM_SetDefaultLinkPolicy() {
    nofralloc
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    sth r3, 0x4c4(r4)
    blr
}

// ----------------------------------------------------------------------------
// btm_read_link_policy_complete
// ----------------------------------------------------------------------------
asm void btm_read_link_policy_complete() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_80453F78@ha
    addi r31, r31, lbl_80453F78@l
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    addi r29, r31, 0x34
    stw r28, 0x20(r1)
    mr r28, r3
    addi r3, r31, 0x5ac
    lwz r30, 0x5c4(r31)
    bl btu_stop_timer
    li r3, 0x0
    cmpwi r30, 0x0
    stw r3, 0x5c4(r31)
    beq lbl_802AC400
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    stb r0, 0x9(r1)
    bne lbl_802AC3E8
    stb r3, 0x8(r1)
    li r0, 0x4
    li r7, 0x0
    lbz r4, 0x2(r28)
    lbz r3, 0x4(r28)
    slwi r5, r4, 8
    lbz r6, 0x1(r28)
    lbz r4, 0x3(r28)
    slwi r3, r3, 8
    add r5, r6, r5
    add r3, r4, r3
    sth r3, 0x10(r1)
    clrlwi r3, r5, 16
    mtctr r0
lbl_802AC3AC:
    lbz r0, 0x119(r29)
    cmpwi r0, 0x0
    beq lbl_802AC3D8
    lhz r0, 0x0(r29)
    cmplw r3, r0
    bne lbl_802AC3D8
    addi r3, r1, 0xa
    addi r4, r29, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_802AC3F0
lbl_802AC3D8:
    addi r7, r7, 0x1
    addi r29, r29, 0x11c
    bdnz lbl_802AC3AC
    b lbl_802AC3F0
lbl_802AC3E8:
    li r0, 0xa
    stb r0, 0x8(r1)
lbl_802AC3F0:
    mr r12, r30
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_802AC400:
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
// btm_read_remote_version_complete
// ----------------------------------------------------------------------------
asm void btm_read_remote_version_complete() {
    nofralloc
    lbz r0, 0x0(r3)
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    cmpwi r0, 0x0
    addi r6, r4, 0x34
    bnelr
    lbz r4, 0x2(r3)
    li r0, 0x4
    lbz r5, 0x1(r3)
    slwi r4, r4, 8
    add r4, r5, r4
    clrlwi r4, r4, 16
    mtctr r0
lbl_802AC454:
    lbz r0, 0x119(r6)
    cmpwi r0, 0x0
    beq lbl_802AC4A0
    lhz r0, 0x0(r6)
    cmplw r0, r4
    bne lbl_802AC4A0
    lbz r0, 0x3(r3)
    stb r0, 0x118(r6)
    lbz r0, 0x5(r3)
    lbz r4, 0x4(r3)
    slwi r0, r0, 8
    add r0, r4, r0
    sth r0, 0x10a(r6)
    lbz r0, 0x7(r3)
    lbz r3, 0x6(r3)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x10c(r6)
    blr
lbl_802AC4A0:
    addi r6, r6, 0x11c
    bdnz lbl_802AC454
    blr
}

// ----------------------------------------------------------------------------
// btm_read_remote_features_complete
// ----------------------------------------------------------------------------
asm void btm_read_remote_features_complete() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x1c(r1)
    addi r31, r4, 0x34
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_802AC6B8
    lbz r4, 0x2(r3)
    li r0, 0x4
    lbz r5, 0x1(r3)
    slwi r4, r4, 8
    add r4, r5, r4
    clrlwi r4, r4, 16
    mtctr r0
lbl_802AC4FC:
    lbz r0, 0x119(r31)
    cmpwi r0, 0x0
    beq lbl_802AC6B0
    lhz r0, 0x0(r31)
    cmplw r0, r4
    bne lbl_802AC6B0
    lbz r0, 0x3(r3)
    stb r0, 0x110(r31)
    lbz r0, 0x4(r3)
    stb r0, 0x111(r31)
    lbz r0, 0x5(r3)
    stb r0, 0x112(r31)
    lbz r0, 0x6(r3)
    stb r0, 0x113(r31)
    lbz r0, 0x7(r3)
    stb r0, 0x114(r31)
    lbz r0, 0x8(r3)
    stb r0, 0x115(r31)
    lbz r0, 0x9(r3)
    stb r0, 0x116(r31)
    lbz r0, 0xa(r3)
    mr r3, r4
    stb r0, 0x117(r31)
    bl btm_find_dev_by_handle
    cmpwi r3, 0x0
    beq lbl_802AC574
    addi r4, r31, 0x110
    li r5, 0x8
    addi r3, r3, 0x77
    bl memcpy
lbl_802AC574:
    lis r3, lbl_80453F78@ha
    li r0, -0x3307
    addi r3, r3, lbl_80453F78@l
    lhz r5, 0x654(r3)
    lbz r3, 0x636(r3)
    andi. r4, r5, 0xcc18
    cmplwi r3, 0x3
    and r30, r4, r0
    blt lbl_802AC5A4
    andi. r0, r5, 0x3306
    or r0, r4, r0
    clrlwi r30, r0, 16
lbl_802AC5A4:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802AC5D0
    lis r3, 0xd
    lis r4, lbl_80373F10@ha
    addi r3, r3, 0x3
    clrlwi r5, r30, 16
    addi r4, r4, lbl_80373F10@l
    bl LogMsg_1
lbl_802AC5D0:
    lhz r3, 0x0(r31)
    clrlwi r4, r30, 16
    bl btsnd_hcic_change_conn_type
    clrlwi. r0, r3, 24
    beq lbl_802AC5E8
    sth r30, 0x2(r31)
lbl_802AC5E8:
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lhz r0, 0x4c4(r4)
    cmpwi r0, 0x0
    beq lbl_802AC608
    addi r3, r31, 0x8
    addi r4, r4, 0x4c4
    bl BTM_SetLinkPolicy
lbl_802AC608:
    lis r3, lbl_80453F78@ha
    li r30, 0x0
    addi r3, r3, lbl_80453F78@l
    lhz r28, 0x4c6(r3)
    addi r29, r3, 0x34
lbl_802AC61C:
    lbz r0, 0x119(r29)
    cmpwi r0, 0x0
    beq lbl_802AC644
    addi r3, r29, 0x8
    addi r4, r31, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802AC644
    b lbl_802AC658
lbl_802AC644:
    addi r30, r30, 0x1
    addi r29, r29, 0x11c
    cmplwi r30, 0x4
    blt lbl_802AC61C
    li r29, 0x0
lbl_802AC658:
    cmpwi r29, 0x0
    beq lbl_802AC67C
    sth r28, 0x10e(r29)
    lbz r0, 0x11a(r29)
    cmpwi r0, 0x0
    bne lbl_802AC67C
    lhz r3, 0x0(r29)
    mr r4, r28
    bl btsnd_hcic_write_link_super_tout
lbl_802AC67C:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x4c8(r3)
    cmpwi r12, 0x0
    beq lbl_802AC6B8
    addi r3, r31, 0x8
    addi r4, r31, 0xe
    addi r5, r31, 0x11
    addi r6, r31, 0x110
    li r7, 0x1
    mtctr r12
    bctrl
    b lbl_802AC6B8
lbl_802AC6B0:
    addi r31, r31, 0x11c
    bdnz lbl_802AC4FC
lbl_802AC6B8:
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
// BTM_SetDefaultLinkSuperTout
// ----------------------------------------------------------------------------
asm void BTM_SetDefaultLinkSuperTout() {
    nofralloc
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    sth r3, 0x4c6(r4)
    blr
}

// ----------------------------------------------------------------------------
// BTM_IsAclConnectionUp
// ----------------------------------------------------------------------------
asm void BTM_IsAclConnectionUp() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x27c0(r4)
    cmplwi r0, 0x3
    blt lbl_802AC744
    lis r3, 0xd
    lis r4, lbl_803740B0@ha
    lbz r5, 0x0(r29)
    addi r3, r3, 0x2
    lbz r6, 0x1(r29)
    addi r4, r4, lbl_803740B0@l
    lbz r7, 0x2(r29)
    lbz r8, 0x3(r29)
    lbz r9, 0x4(r29)
    lbz r10, 0x5(r29)
    bl LogMsg_6
lbl_802AC744:
    lis r3, lbl_80453F78@ha
    li r31, 0x0
    addi r3, r3, lbl_80453F78@l
    addi r30, r3, 0x34
lbl_802AC754:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_802AC77C
    mr r4, r29
    addi r3, r30, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802AC77C
    b lbl_802AC790
lbl_802AC77C:
    addi r31, r31, 0x1
    addi r30, r30, 0x11c
    cmplwi r31, 0x4
    blt lbl_802AC754
    li r30, 0x0
lbl_802AC790:
    cmpwi r30, 0x0
    beq lbl_802AC7A0
    li r3, 0x1
    b lbl_802AC7A4
lbl_802AC7A0:
    li r3, 0x0
lbl_802AC7A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// BTM_GetNumAclLinks
// ----------------------------------------------------------------------------
asm void BTM_GetNumAclLinks() {
    nofralloc
    lis r4, lbl_80453F78@ha
    li r3, 0x0
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x14d(r4)
    cmpwi r0, 0x0
    beq lbl_802AC7DC
    li r3, 0x1
lbl_802AC7DC:
    lbz r0, 0x269(r4)
    cmpwi r0, 0x0
    beq lbl_802AC7F0
    addi r0, r3, 0x1
    clrlwi r3, r0, 16
lbl_802AC7F0:
    lbz r0, 0x385(r4)
    cmpwi r0, 0x0
    beq lbl_802AC804
    addi r0, r3, 0x1
    clrlwi r3, r0, 16
lbl_802AC804:
    lbz r0, 0x4a1(r4)
    cmpwi r0, 0x0
    beqlr
    addi r0, r3, 0x1
    clrlwi r3, r0, 16
    blr
}

// ----------------------------------------------------------------------------
// btm_get_acl_disc_reason_code
// ----------------------------------------------------------------------------
asm void btm_get_acl_disc_reason_code() {
    nofralloc
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r3, 0x27bf(r3)
    blr
}

// ----------------------------------------------------------------------------
// BTM_GetHCIConnHandle
// ----------------------------------------------------------------------------
asm void BTM_GetHCIConnHandle() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x34
    stw r29, 0x14(r1)
    mr r29, r3
lbl_802AC858:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_802AC880
    mr r4, r29
    addi r3, r30, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802AC880
    b lbl_802AC894
lbl_802AC880:
    addi r31, r31, 0x1
    addi r30, r30, 0x11c
    cmplwi r31, 0x4
    blt lbl_802AC858
    li r30, 0x0
lbl_802AC894:
    cmpwi r30, 0x0
    beq lbl_802AC8A4
    lhz r3, 0x0(r30)
    b lbl_802AC8AC
lbl_802AC8A4:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_802AC8AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_process_clk_off_comp_evt
// ----------------------------------------------------------------------------
asm void btm_process_clk_off_comp_evt() {
    nofralloc
    lis r5, lbl_80453F78@ha
    li r6, 0x0
    addi r5, r5, lbl_80453F78@l
    lbz r0, 0x14d(r5)
    cmpwi r0, 0x0
    beq lbl_802AC8EC
    lhz r0, 0x34(r5)
    cmplw r0, r3
    beq lbl_802AC944
lbl_802AC8EC:
    lbz r0, 0x269(r5)
    li r6, 0x1
    cmpwi r0, 0x0
    beq lbl_802AC908
    lhz r0, 0x150(r5)
    cmplw r0, r3
    beq lbl_802AC944
lbl_802AC908:
    lbz r0, 0x385(r5)
    li r6, 0x2
    cmpwi r0, 0x0
    beq lbl_802AC924
    lhz r0, 0x26c(r5)
    cmplw r0, r3
    beq lbl_802AC944
lbl_802AC924:
    lbz r0, 0x4a1(r5)
    li r6, 0x3
    cmpwi r0, 0x0
    beq lbl_802AC940
    lhz r0, 0x388(r5)
    cmplw r0, r3
    beq lbl_802AC944
lbl_802AC940:
    li r6, 0x4
lbl_802AC944:
    cmplwi r6, 0x4
    bgelr
    mulli r0, r6, 0x11c
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    add r3, r3, r0
    sth r4, 0x3a(r3)
    blr
}

// ----------------------------------------------------------------------------
// btm_acl_role_changed
// ----------------------------------------------------------------------------
asm void btm_acl_role_changed() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r4, 0x0
    mr r25, r3
    mr r26, r4
    mr r28, r5
    beq lbl_802AC994
    mr r27, r26
    b lbl_802AC9A0
lbl_802AC994:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    addi r27, r3, 0x27b4
lbl_802AC9A0:
    lis r3, lbl_80453F78@ha
    li r30, 0x0
    addi r3, r3, lbl_80453F78@l
    addi r29, r3, 0x34
lbl_802AC9B0:
    lbz r0, 0x119(r29)
    cmpwi r0, 0x0
    beq lbl_802AC9D8
    mr r4, r27
    addi r3, r29, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802AC9D8
    b lbl_802AC9EC
lbl_802AC9D8:
    addi r30, r30, 0x1
    addi r29, r29, 0x11c
    cmplwi r30, 0x4
    blt lbl_802AC9B0
    li r29, 0x0
lbl_802AC9EC:
    lis r3, lbl_80453F78@ha
    cmpwi r29, 0x0
    addi r3, r3, lbl_80453F78@l
    addi r31, r3, 0x624
    beq lbl_802ACB40
    cmpwi r25, 0x0
    stb r25, 0x0(r31)
    bne lbl_802ACA24
    stb r28, 0x1(r31)
    mr r4, r27
    addi r3, r31, 0x2
    li r5, 0x6
    bl memcpy
    stb r28, 0x11a(r29)
lbl_802ACA24:
    cmpwi r26, 0x0
    beq lbl_802ACAA0
    lis r3, lbl_80453F78@ha
    lhz r30, 0x10e(r29)
    addi r3, r3, lbl_80453F78@l
    li r28, 0x0
    addi r27, r3, 0x34
lbl_802ACA40:
    lbz r0, 0x119(r27)
    cmpwi r0, 0x0
    beq lbl_802ACA68
    addi r3, r27, 0x8
    addi r4, r29, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802ACA68
    b lbl_802ACA7C
lbl_802ACA68:
    addi r28, r28, 0x1
    addi r27, r27, 0x11c
    cmplwi r28, 0x4
    blt lbl_802ACA40
    li r27, 0x0
lbl_802ACA7C:
    cmpwi r27, 0x0
    beq lbl_802ACAA0
    sth r30, 0x10e(r27)
    lbz r0, 0x11a(r27)
    cmpwi r0, 0x0
    bne lbl_802ACAA0
    lhz r3, 0x0(r27)
    mr r4, r30
    bl btsnd_hcic_write_link_super_tout
lbl_802ACAA0:
    lbz r0, 0x11b(r29)
    cmplwi r0, 0x3
    bne lbl_802ACACC
    lhz r3, 0x0(r29)
    li r4, 0x1
    bl btsnd_hcic_set_conn_encrypt
    clrlwi. r0, r3, 24
    beq lbl_802ACACC
    li r0, 0x4
    stb r0, 0x11b(r29)
    b lbl_802ACB40
lbl_802ACACC:
    cmpwi r29, 0x0
    beq lbl_802ACAE8
    lbz r0, 0x11b(r29)
    cmplwi r0, 0x5
    bne lbl_802ACAE8
    li r0, 0x0
    stb r0, 0x11b(r29)
lbl_802ACAE8:
    lis r30, lbl_80453F78@ha
    addi r30, r30, lbl_80453F78@l
    lwz r12, 0x62c(r30)
    cmpwi r12, 0x0
    beq lbl_802ACB10
    mr r3, r31
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x62c(r30)
lbl_802ACB10:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802ACB40
    lis r3, 0xd
    lis r4, lbl_803740EC@ha
    lbz r5, 0x1(r31)
    addi r3, r3, 0x3
    lbz r6, 0x0(r31)
    addi r4, r4, lbl_803740EC@l
    bl LogMsg_2
lbl_802ACB40:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btm_acl_timeout
// ----------------------------------------------------------------------------
asm void btm_acl_timeout() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x10(r3)
    cmplwi r0, 0x4
    bne lbl_802ACBA4
    lis r4, lbl_80453F78@ha
    li r3, 0xa
    addi r4, r4, lbl_80453F78@l
    li r0, 0x0
    lwz r12, 0x5c4(r4)
    stb r3, 0x8(r1)
    cmpwi r12, 0x0
    sth r0, 0x10(r1)
    stw r0, 0x5c4(r4)
    beq lbl_802ACBA4
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_802ACBA4:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_get_max_packet_size
// ----------------------------------------------------------------------------
asm void btm_get_max_packet_size() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r4, lbl_80453F78@ha
    mr r27, r3
    addi r4, r4, lbl_80453F78@l
    li r30, 0x0
    addi r29, r4, 0x34
lbl_802ACBDC:
    lbz r0, 0x119(r29)
    cmpwi r0, 0x0
    beq lbl_802ACC04
    mr r4, r27
    addi r3, r29, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802ACC04
    b lbl_802ACC18
lbl_802ACC04:
    addi r30, r30, 0x1
    addi r29, r29, 0x11c
    cmplwi r30, 0x4
    blt lbl_802ACBDC
    li r29, 0x0
lbl_802ACC18:
    cmpwi r29, 0x0
    li r28, 0x0
    li r31, 0x0
    beq lbl_802ACC30
    lhz r28, 0x2(r29)
    b lbl_802ACC54
lbl_802ACC30:
    lis r30, lbl_80453F78@ha
    mr r4, r27
    addi r30, r30, lbl_80453F78@l
    li r5, 0x6
    addi r3, r30, 0x630
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802ACC54
    lhz r28, 0x654(r30)
lbl_802ACC54:
    cmpwi r28, 0x0
    beq lbl_802ACD18
    rlwinm. r0, r28, 0, 18, 18
    bne lbl_802ACC6C
    li r31, 0x3fd
    b lbl_802ACD18
lbl_802ACC6C:
    rlwinm. r0, r28, 0, 19, 19
    bne lbl_802ACC7C
    li r31, 0x2a7
    b lbl_802ACD18
lbl_802ACC7C:
    rlwinm. r0, r28, 0, 22, 22
    bne lbl_802ACC8C
    li r31, 0x228
    b lbl_802ACD18
lbl_802ACC8C:
    rlwinm. r0, r28, 0, 16, 16
    beq lbl_802ACC9C
    li r31, 0x153
    b lbl_802ACD18
lbl_802ACC9C:
    rlwinm. r0, r28, 0, 23, 23
    bne lbl_802ACCAC
    li r31, 0x16f
    b lbl_802ACD18
lbl_802ACCAC:
    rlwinm. r0, r28, 0, 17, 17
    beq lbl_802ACCBC
    li r31, 0xe0
    b lbl_802ACD18
lbl_802ACCBC:
    rlwinm. r0, r28, 0, 20, 20
    beq lbl_802ACCCC
    li r31, 0xb7
    b lbl_802ACD18
lbl_802ACCCC:
    rlwinm. r0, r28, 0, 21, 21
    beq lbl_802ACCDC
    li r31, 0x79
    b lbl_802ACD18
lbl_802ACCDC:
    rlwinm. r0, r28, 0, 29, 29
    bne lbl_802ACCEC
    li r31, 0x53
    b lbl_802ACD18
lbl_802ACCEC:
    rlwinm. r0, r28, 0, 30, 30
    bne lbl_802ACCFC
    li r31, 0x36
    b lbl_802ACD18
lbl_802ACCFC:
    rlwinm. r0, r28, 0, 27, 27
    beq lbl_802ACD0C
    li r31, 0x1b
    b lbl_802ACD18
lbl_802ACD0C:
    rlwinm. r0, r28, 0, 28, 28
    beq lbl_802ACD18
    li r31, 0x11
lbl_802ACD18:
    cmplwi r31, 0x3fd
    bne lbl_802ACD38
    lis r3, lbl_80453A50@ha
    addi r3, r3, lbl_80453A50@l
    lhz r0, 0x7c(r3)
    cmplwi r0, 0x3f9
    bne lbl_802ACD38
    li r31, 0x3f9
lbl_802ACD38:
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// BTM_AclRegisterForChanges
// ----------------------------------------------------------------------------
asm void BTM_AclRegisterForChanges() {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_802ACD70
    lis r3, lbl_80453F78@ha
    li r0, 0x0
    addi r3, r3, lbl_80453F78@l
    stw r0, 0x4c8(r3)
    b lbl_802ACD90
lbl_802ACD70:
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lwz r0, 0x4c8(r4)
    cmpwi r0, 0x0
    beq lbl_802ACD8C
    li r3, 0x2
    blr
lbl_802ACD8C:
    stw r3, 0x4c8(r4)
lbl_802ACD90:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// btm_qos_setup_complete
// ----------------------------------------------------------------------------
asm void btm_qos_setup_complete() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lis r31, lbl_80453F78@ha
    mr r27, r3
    addi r31, r31, lbl_80453F78@l
    mr r28, r4
    lwz r30, 0x618(r31)
    mr r29, r5
    addi r3, r31, 0x600
    bl btu_stop_timer
    li r0, 0x0
    cmpwi r30, 0x0
    stw r0, 0x618(r31)
    beq lbl_802ACE58
    cmpwi r29, 0x0
    stb r27, 0x22(r1)
    sth r28, 0x20(r1)
    beq lbl_802ACE1C
    lbz r0, 0x0(r29)
    stb r0, 0x8(r1)
    lbz r0, 0x1(r29)
    stb r0, 0x9(r1)
    lwz r0, 0x4(r29)
    stw r0, 0xc(r1)
    lwz r0, 0xc(r29)
    stw r0, 0x14(r1)
    lwz r0, 0x10(r29)
    stw r0, 0x18(r1)
    lwz r0, 0x14(r29)
    stw r0, 0x1c(r1)
lbl_802ACE1C:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x5
    blt lbl_802ACE48
    lis r3, 0xd
    lis r4, lbl_80374154@ha
    lwz r5, 0x14(r29)
    addi r3, r3, 0x4
    addi r4, r4, lbl_80374154@l
    bl LogMsg_1
lbl_802ACE48:
    mr r12, r30
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_802ACE58:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// BTM_ReadRSSI
// ----------------------------------------------------------------------------
asm void BTM_ReadRSSI() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80453F78@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x27c0(r5)
    cmplwi r0, 0x3
    blt lbl_802ACED4
    lis r3, 0xd
    lis r4, lbl_8037417C@ha
    lbz r5, 0x0(r28)
    addi r3, r3, 0x2
    lbz r6, 0x1(r28)
    addi r4, r4, lbl_8037417C@l
    lbz r7, 0x2(r28)
    lbz r8, 0x3(r28)
    lbz r9, 0x4(r28)
    lbz r10, 0x5(r28)
    bl LogMsg_6
lbl_802ACED4:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r0, 0x5e0(r3)
    cmpwi r0, 0x0
    beq lbl_802ACEF0
    li r3, 0x2
    b lbl_802ACF8C
lbl_802ACEF0:
    addi r30, r3, 0x34
    li r31, 0x0
lbl_802ACEF8:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_802ACF20
    mr r4, r28
    addi r3, r30, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802ACF20
    b lbl_802ACF34
lbl_802ACF20:
    addi r31, r31, 0x1
    addi r30, r30, 0x11c
    cmplwi r31, 0x4
    blt lbl_802ACEF8
    li r30, 0x0
lbl_802ACF34:
    cmpwi r30, 0x0
    beq lbl_802ACF88
    lis r31, lbl_80453F78@ha
    li r4, 0x9
    addi r31, r31, lbl_80453F78@l
    li r5, 0x3
    addi r3, r31, 0x5c8
    bl btu_start_timer
    stw r29, 0x5e0(r31)
    lhz r3, 0x0(r30)
    bl btsnd_hcic_read_rssi
    clrlwi. r0, r3, 24
    bne lbl_802ACF80
    li r0, 0x0
    addi r3, r31, 0x5c8
    stw r0, 0x5e0(r31)
    bl btu_stop_timer
    li r3, 0x3
    b lbl_802ACF8C
lbl_802ACF80:
    li r3, 0x1
    b lbl_802ACF8C
lbl_802ACF88:
    li r3, 0x7
lbl_802ACF8C:
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
// BTM_ReadLinkQuality
// ----------------------------------------------------------------------------
asm void BTM_ReadLinkQuality() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80453F78@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x27c0(r5)
    cmplwi r0, 0x3
    blt lbl_802AD010
    lis r3, 0xd
    lis r4, lbl_803741B0@ha
    lbz r5, 0x0(r28)
    addi r3, r3, 0x2
    lbz r6, 0x1(r28)
    addi r4, r4, lbl_803741B0@l
    lbz r7, 0x2(r28)
    lbz r8, 0x3(r28)
    lbz r9, 0x4(r28)
    lbz r10, 0x5(r28)
    bl LogMsg_6
lbl_802AD010:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r0, 0x5fc(r3)
    cmpwi r0, 0x0
    beq lbl_802AD02C
    li r3, 0x2
    b lbl_802AD0C8
lbl_802AD02C:
    addi r30, r3, 0x34
    li r31, 0x0
lbl_802AD034:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_802AD05C
    mr r4, r28
    addi r3, r30, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802AD05C
    b lbl_802AD070
lbl_802AD05C:
    addi r31, r31, 0x1
    addi r30, r30, 0x11c
    cmplwi r31, 0x4
    blt lbl_802AD034
    li r30, 0x0
lbl_802AD070:
    cmpwi r30, 0x0
    beq lbl_802AD0C4
    lis r31, lbl_80453F78@ha
    li r4, 0x9
    addi r31, r31, lbl_80453F78@l
    li r5, 0x3
    addi r3, r31, 0x5e4
    bl btu_start_timer
    stw r29, 0x5fc(r31)
    lhz r3, 0x0(r30)
    bl btsnd_hcic_get_link_quality
    clrlwi. r0, r3, 24
    bne lbl_802AD0BC
    addi r3, r31, 0x5e4
    bl btu_stop_timer
    li r0, 0x0
    li r3, 0x3
    stw r0, 0x5fc(r31)
    b lbl_802AD0C8
lbl_802AD0BC:
    li r3, 0x1
    b lbl_802AD0C8
lbl_802AD0C4:
    li r3, 0x7
lbl_802AD0C8:
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
// btm_read_rssi_complete
// ----------------------------------------------------------------------------
asm void btm_read_rssi_complete() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_80453F78@ha
    addi r31, r31, lbl_80453F78@l
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    addi r29, r31, 0x34
    stw r28, 0x20(r1)
    mr r28, r3
    addi r3, r31, 0x5c8
    lwz r30, 0x5e0(r31)
    bl btu_stop_timer
    li r0, 0x0
    cmpwi r30, 0x0
    stw r0, 0x5e0(r31)
    beq lbl_802AD1E4
    lbz r6, 0x0(r28)
    cmpwi r6, 0x0
    stb r6, 0x9(r1)
    bne lbl_802AD1CC
    stb r0, 0x8(r1)
    lbz r0, 0x27c0(r31)
    lbz r3, 0x2(r28)
    lbz r4, 0x1(r28)
    cmplwi r0, 0x4
    lbz r5, 0x3(r28)
    slwi r0, r3, 8
    add r0, r4, r0
    stb r5, 0xa(r1)
    clrlwi r31, r0, 16
    blt lbl_802AD184
    lis r3, 0xd
    lis r4, lbl_803741EC@ha
    addi r3, r3, 0x3
    extsb r5, r5
    addi r4, r4, lbl_803741EC@l
    bl LogMsg_2
lbl_802AD184:
    li r0, 0x4
    li r3, 0x0
    mtctr r0
lbl_802AD190:
    lbz r0, 0x119(r29)
    cmpwi r0, 0x0
    beq lbl_802AD1BC
    lhz r0, 0x0(r29)
    cmplw r31, r0
    bne lbl_802AD1BC
    addi r3, r1, 0xb
    addi r4, r29, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_802AD1D4
lbl_802AD1BC:
    addi r3, r3, 0x1
    addi r29, r29, 0x11c
    bdnz lbl_802AD190
    b lbl_802AD1D4
lbl_802AD1CC:
    li r0, 0xa
    stb r0, 0x8(r1)
lbl_802AD1D4:
    mr r12, r30
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_802AD1E4:
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
// btm_read_link_quality_complete
// ----------------------------------------------------------------------------
asm void btm_read_link_quality_complete() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_80453F78@ha
    addi r31, r31, lbl_80453F78@l
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    addi r29, r31, 0x34
    stw r28, 0x20(r1)
    mr r28, r3
    addi r3, r31, 0x5c8
    lwz r30, 0x5fc(r31)
    bl btu_stop_timer
    li r0, 0x0
    cmpwi r30, 0x0
    stw r0, 0x5fc(r31)
    beq lbl_802AD2FC
    lbz r6, 0x0(r28)
    cmpwi r6, 0x0
    stb r6, 0x9(r1)
    bne lbl_802AD2E4
    stb r0, 0x8(r1)
    lbz r0, 0x27c0(r31)
    lbz r3, 0x2(r28)
    lbz r4, 0x1(r28)
    cmplwi r0, 0x4
    lbz r5, 0x3(r28)
    slwi r0, r3, 8
    add r0, r4, r0
    stb r5, 0xa(r1)
    clrlwi r31, r0, 16
    blt lbl_802AD29C
    lis r3, 0xd
    lis r4, lbl_8037421C@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_8037421C@l
    bl LogMsg_2
lbl_802AD29C:
    li r0, 0x4
    li r3, 0x0
    mtctr r0
lbl_802AD2A8:
    lbz r0, 0x119(r29)
    cmpwi r0, 0x0
    beq lbl_802AD2D4
    lhz r0, 0x0(r29)
    cmplw r31, r0
    bne lbl_802AD2D4
    addi r3, r1, 0xb
    addi r4, r29, 0x8
    li r5, 0x6
    bl memcpy
    b lbl_802AD2EC
lbl_802AD2D4:
    addi r3, r3, 0x1
    addi r29, r29, 0x11c
    bdnz lbl_802AD2A8
    b lbl_802AD2EC
lbl_802AD2E4:
    li r0, 0xa
    stb r0, 0x8(r1)
lbl_802AD2EC:
    mr r12, r30
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_802AD2FC:
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
// btm_remove_acl
// ----------------------------------------------------------------------------
asm void btm_remove_acl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x34
    stw r29, 0x14(r1)
    mr r29, r3
lbl_802AD348:
    lbz r0, 0x119(r30)
    cmpwi r0, 0x0
    beq lbl_802AD370
    mr r4, r29
    addi r3, r30, 0x8
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802AD370
    b lbl_802AD384
lbl_802AD370:
    addi r31, r31, 0x1
    addi r30, r30, 0x11c
    cmplwi r31, 0x4
    blt lbl_802AD348
    li r30, 0x0
lbl_802AD384:
    cmpwi r30, 0x0
    beq lbl_802AD394
    lhz r3, 0x0(r30)
    b lbl_802AD39C
lbl_802AD394:
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_802AD39C:
    clrlwi r3, r3, 16
    li r4, 0x13
    bl btsnd_hcic_disconnect
    clrlwi. r0, r3, 24
    bne lbl_802AD3B8
    li r3, 0x3
    b lbl_802AD3BC
lbl_802AD3B8:
    li r3, 0x0
lbl_802AD3BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_chg_all_acl_pkt_types
// ----------------------------------------------------------------------------
asm void btm_chg_all_acl_pkt_types() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    lis r4, lbl_80453F78@ha
    cmpwi r3, 0x0
    addi r31, r4, lbl_80453F78@l
    lis r30, lbl_80373ED0@ha
    addi r30, r30, lbl_80373ED0@l
    addi r28, r31, 0x34
    beq lbl_802AD4CC
    li r29, 0x0
    lis r26, 0xd
    li r24, -0x3307
lbl_802AD414:
    lbz r0, 0x119(r28)
    cmpwi r0, 0x0
    beq lbl_802AD4B8
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x5
    blt lbl_802AD43C
    lhz r5, 0x0(r28)
    addi r3, r26, 0x4
    addi r4, r30, 0x38c
    bl LogMsg_1
lbl_802AD43C:
    lhz r0, 0x2(r28)
    li r5, 0x18
    sth r0, 0x4(r28)
    lbz r3, 0x636(r31)
    cmplwi r3, 0x3
    blt lbl_802AD45C
    ori r0, r5, 0x3300
    clrlwi r5, r0, 16
lbl_802AD45C:
    lhz r4, 0x654(r31)
    cmplwi cr1, r3, 0x3
    and r0, r5, r4
    andi. r3, r0, 0xcc18
    and r25, r3, r24
    blt cr1, lbl_802AD484
    or r0, r5, r4
    andi. r0, r0, 0x3306
    or r0, r3, r0
    clrlwi r25, r0, 16
lbl_802AD484:
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x4
    blt lbl_802AD4A0
    addi r3, r26, 0x3
    addi r4, r30, 0x40
    clrlwi r5, r25, 16
    bl LogMsg_1
lbl_802AD4A0:
    lhz r3, 0x0(r28)
    clrlwi r4, r25, 16
    bl btsnd_hcic_change_conn_type
    clrlwi. r0, r3, 24
    beq lbl_802AD4B8
    sth r25, 0x2(r28)
lbl_802AD4B8:
    addi r29, r29, 0x1
    addi r28, r28, 0x11c
    cmplwi r29, 0x4
    blt lbl_802AD414
    b lbl_802AD5E0
lbl_802AD4CC:
    li r29, 0x0
    lis r24, 0xd
    li r25, 0x0
    li r27, -0x3307
lbl_802AD4DC:
    lbz r0, 0x119(r28)
    cmpwi r0, 0x0
    beq lbl_802AD5D0
    lhz r0, 0x4(r28)
    cmpwi r0, 0x0
    beq lbl_802AD5D0
    addi r3, r28, 0x8
    addi r4, r1, 0x8
    bl BTM_ReadPowerMode
    clrlwi. r0, r3, 24
    bne lbl_802AD5D0
    lbz r0, 0x8(r1)
    cmplwi r0, 0x2
    bne lbl_802AD548
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x5
    blt lbl_802AD530
    lhz r5, 0x0(r28)
    addi r3, r24, 0x4
    addi r4, r30, 0x3bc
    bl LogMsg_1
lbl_802AD530:
    stb r25, 0x14(r1)
    addi r4, r28, 0x8
    addi r5, r1, 0xc
    li r3, 0x80
    bl BTM_SetPowerMode
    b lbl_802AD5D0
lbl_802AD548:
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x5
    blt lbl_802AD568
    lhz r5, 0x0(r28)
    addi r3, r24, 0x4
    lhz r6, 0x2(r28)
    addi r4, r30, 0x3ec
    bl LogMsg_2
lbl_802AD568:
    lhz r4, 0x4(r28)
    lhz r5, 0x654(r31)
    lbz r0, 0x636(r31)
    and r3, r4, r5
    andi. r3, r3, 0xcc18
    cmplwi r0, 0x3
    and r26, r3, r27
    blt lbl_802AD598
    or r0, r4, r5
    andi. r0, r0, 0x3306
    or r0, r3, r0
    clrlwi r26, r0, 16
lbl_802AD598:
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x4
    blt lbl_802AD5B4
    addi r3, r24, 0x3
    addi r4, r30, 0x40
    clrlwi r5, r26, 16
    bl LogMsg_1
lbl_802AD5B4:
    lhz r3, 0x0(r28)
    clrlwi r4, r26, 16
    bl btsnd_hcic_change_conn_type
    clrlwi. r0, r3, 24
    beq lbl_802AD5CC
    sth r26, 0x2(r28)
lbl_802AD5CC:
    sth r25, 0x4(r28)
lbl_802AD5D0:
    addi r29, r29, 0x1
    addi r28, r28, 0x11c
    cmplwi r29, 0x4
    blt lbl_802AD4DC
lbl_802AD5E0:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

