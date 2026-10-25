#include "types.h"

// Translation unit: src/revolution/bte/btm_sec.cpp
// Total functions: 31

// Small Data symbols (@sda21)
extern float lbl_804A2550;
extern float lbl_804A2551;
extern float lbl_804A2552;
extern float lbl_804A2553;
extern float lbl_804A2554;
extern float lbl_804A2555;

// Global data symbols (@ha/@l)
extern u8 lbl_80374AA0[];
extern u8 lbl_80374B38[];
extern u8 lbl_80374C40[];
extern u8 lbl_80374CA0[];
extern u8 lbl_80374D9C[];
extern u8 lbl_80374FF8[];
extern u8 lbl_80375038[];
extern u8 lbl_80375074[];
extern u8 lbl_803750AC[];
extern u8 lbl_803750E0[];
extern u8 lbl_80375110[];
extern u8 lbl_80375144[];
extern u8 lbl_80375188[];
extern u8 lbl_803751CC[];
extern u8 lbl_803751F8[];
extern u8 lbl_80375238[];
extern u8 lbl_80375494[];
extern u8 lbl_80453F78[];
extern u8 lbl_80457040[];

// Forward declarations
extern void BTM_DeleteStoredLinkKey();
extern void BTM_DeviceAuthorized();
extern void BTM_InqDbRead();
extern void BTM_PINCodeReply();
extern void BTM_ReadLocalFeatures();
extern void BTM_SecAddRmtNameNotifyCallback();
extern void BTM_SecBond();
extern void BTM_SecDeleteRmtNameNotifyCallback();
extern void BTM_SecRegister();
extern void BTM_SetPinType();
extern void BTM_SetSecurityLevel();
extern void GKI_getpoolbuf();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void LogMsg_3();
extern void LogMsg_5();
extern void LogMsg_6();
extern void _restgpr_20();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_20();
extern void _savegpr_24();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void btm_find_dev();
extern void btm_find_dev_by_handle();
extern void btm_initiate_rem_name();
extern void btm_read_trusted_mask();
extern void btm_sec_abort_access_req();
extern void btm_sec_alloc_dev();
extern void btm_sec_auth_complete();
extern void btm_sec_collision_timeout();
extern void btm_sec_conn_req();
extern void btm_sec_connected();
extern void btm_sec_dev_reset();
extern void btm_sec_disconnect();
extern void btm_sec_disconnected();
extern void btm_sec_encrypt_change();
extern void btm_sec_execute_procedure();
extern void btm_sec_init();
extern void btm_sec_is_bonding();
extern void btm_sec_l2cap_access_req();
extern void btm_sec_link_key_notification();
extern void btm_sec_link_key_request();
extern void btm_sec_mkey_comp_event();
extern void btm_sec_mx_access_request();
extern void btm_sec_pin_code_request();
extern void btm_sec_pin_code_request_timeout();
extern void btm_sec_rmt_name_request_complete();
extern void btm_sec_start_authorization();
extern void btm_sec_update_clock_offset();
extern void btsnd_hcic_auth_request();
extern void btsnd_hcic_create_conn();
extern void btsnd_hcic_disconnect();
extern void btsnd_hcic_link_key_neg_reply();
extern void btsnd_hcic_link_key_req_reply();
extern void btsnd_hcic_pin_code_neg_reply();
extern void btsnd_hcic_pin_code_req_reply();
extern void btsnd_hcic_reject_conn();
extern void btsnd_hcic_set_conn_encrypt();
extern void btsnd_hcic_write_auth_enable();
extern void btsnd_hcic_write_encr_mode();
extern void btsnd_hcic_write_pin_type();
extern void btu_start_timer();
extern void btu_stop_timer();
extern void l2c_link_hci_conn_req();
extern void l2cu_allocate_lcb();
extern void l2cu_create_conn();
extern void memcmp();
extern void memcpy();
extern void memset();
extern void strncmp();
extern void strncpy();

// ----------------------------------------------------------------------------
// BTM_SecRegister
// ----------------------------------------------------------------------------
asm void BTM_SecRegister() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_80453F78@ha
    stw r0, 0x14(r1)
    addi r6, r6, lbl_80453F78@l
    lwz r5, 0x0(r3)
    lwz r4, 0x4(r3)
    lbz r0, 0x27c0(r6)
    stw r5, 0x190c(r6)
    cmplwi r0, 0x4
    stw r4, 0x1910(r6)
    lwz r4, 0x8(r3)
    lwz r0, 0xc(r3)
    stw r4, 0x1914(r6)
    stw r0, 0x1918(r6)
    lwz r4, 0x10(r3)
    lwz r0, 0x14(r3)
    stw r4, 0x191c(r6)
    stw r0, 0x1920(r6)
    blt lbl_802B2DA4
    lis r3, 0xd
    lis r4, lbl_80374AA0@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80374AA0@l
    bl LogMsg_0
lbl_802B2DA4:
    lwz r0, 0x14(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// BTM_SecAddRmtNameNotifyCallback
// ----------------------------------------------------------------------------
asm void BTM_SecAddRmtNameNotifyCallback() {
    nofralloc
    lis r4, lbl_80453F78@ha
    li r0, 0x2
    addi r4, r4, lbl_80453F78@l
    li r5, 0x0
    mtctr r0
lbl_802B2DCC:
    lwz r0, 0x192c(r4)
    cmpwi r0, 0x0
    bne lbl_802B2DF4
    lis r4, lbl_80453F78@ha
    slwi r0, r5, 2
    addi r4, r4, lbl_80453F78@l
    add r4, r4, r0
    stw r3, 0x192c(r4)
    li r3, 0x1
    blr
lbl_802B2DF4:
    addi r4, r4, 0x4
    addi r5, r5, 0x1
    bdnz lbl_802B2DCC
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// BTM_SecDeleteRmtNameNotifyCallback
// ----------------------------------------------------------------------------
asm void BTM_SecDeleteRmtNameNotifyCallback() {
    nofralloc
    lis r4, lbl_80453F78@ha
    li r0, 0x2
    addi r4, r4, lbl_80453F78@l
    li r5, 0x0
    mtctr r0
lbl_802B2E1C:
    lwz r0, 0x192c(r4)
    cmplw r0, r3
    bne lbl_802B2E48
    lis r3, lbl_80453F78@ha
    slwi r0, r5, 2
    addi r3, r3, lbl_80453F78@l
    li r5, 0x0
    add r4, r3, r0
    stw r5, 0x192c(r4)
    li r3, 0x1
    blr
lbl_802B2E48:
    addi r4, r4, 0x4
    addi r5, r5, 0x1
    bdnz lbl_802B2E1C
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// BTM_SetPinType
// ----------------------------------------------------------------------------
asm void BTM_SetPinType() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_80453F78@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x27c0(r6)
    cmplwi r0, 0x3
    blt lbl_802B2EB4
    lis r3, 0xd
    lis r4, lbl_80374B38@ha
    mr r5, r29
    mr r6, r30
    mr r7, r31
    addi r3, r3, 0x2
    addi r4, r4, lbl_80374B38@l
    bl LogMsg_3
lbl_802B2EB4:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x64e(r3)
    cmplwi r0, 0x1
    ble lbl_802B2ED0
    mr r3, r29
    bl btsnd_hcic_write_pin_type
lbl_802B2ED0:
    lis r6, lbl_80453F78@ha
    mr r4, r30
    addi r6, r6, lbl_80453F78@l
    mr r5, r31
    stb r29, 0x20(r6)
    addi r3, r6, 0x22
    stb r31, 0x21(r6)
    bl memcpy
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// BTM_SetSecurityLevel
// ----------------------------------------------------------------------------
asm void BTM_SetSecurityLevel() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lis r10, lbl_80453F78@ha
    lis r31, lbl_80374AA0@ha
    addi r10, r10, lbl_80453F78@l
    lis r11, 0x1
    mr r20, r3
    mr r21, r4
    mr r22, r5
    mr r23, r6
    mr r24, r7
    mr r25, r8
    mr r26, r9
    addi r31, r31, lbl_80374AA0@l
    subi r28, r11, 0x1
    addi r30, r10, 0x1990
    li r27, 0x0
    li r29, 0x0
lbl_802B2F60:
    lbz r0, 0xe(r30)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B2FC8
    lhz r0, 0xc(r30)
    cmplw r0, r24
    bne lbl_802B2FD8
    lwz r0, 0x0(r30)
    cmplw r0, r25
    bne lbl_802B2FD8
    lbz r0, 0xf(r30)
    cmplw r22, r0
    bne lbl_802B2FD8
    mr r3, r21
    addi r4, r30, 0x10
    li r5, 0x15
    bl strncmp
    cmpwi r3, 0x0
    beq lbl_802B2FC0
    mr r3, r21
    addi r4, r30, 0x26
    li r5, 0x15
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_802B2FD8
lbl_802B2FC0:
    li r27, 0x1
    b lbl_802B2FE8
lbl_802B2FC8:
    cmpwi r27, 0x0
    bne lbl_802B2FD8
    li r27, 0x1
    mr r28, r29
lbl_802B2FD8:
    addi r29, r29, 0x1
    addi r30, r30, 0x3c
    cmplwi r29, 0x18
    blt lbl_802B2F60
lbl_802B2FE8:
    cmpwi r27, 0x0
    beq lbl_802B30F0
    clrlwi r0, r29, 16
    cmplwi r0, 0x18
    blt lbl_802B3018
    clrlwi r0, r28, 16
    lis r3, lbl_80453F78@ha
    mulli r0, r0, 0x3c
    mr r29, r28
    addi r3, r3, lbl_80453F78@l
    add r3, r3, r0
    addi r30, r3, 0x1990
lbl_802B3018:
    sth r24, 0xc(r30)
    cmpwi r20, 0x0
    stb r22, 0xf(r30)
    stw r25, 0x0(r30)
    beq lbl_802B3050
    stw r26, 0x4(r30)
    mr r4, r21
    addi r3, r30, 0x10
    li r5, 0x15
    lbz r0, 0xe(r30)
    rlwinm r0, r0, 0, 29, 25
    stb r0, 0xe(r30)
    bl strncpy
    b lbl_802B3070
lbl_802B3050:
    stw r26, 0x8(r30)
    mr r4, r21
    addi r3, r30, 0x26
    li r5, 0x15
    lbz r0, 0xe(r30)
    rlwinm r0, r0, 0, 24, 28
    stb r0, 0xe(r30)
    bl strncpy
lbl_802B3070:
    lbz r4, 0xe(r30)
    ori r0, r23, 0x80
    lis r3, lbl_80453F78@ha
    or r0, r4, r0
    stb r0, 0xe(r30)
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_802B30BC
    lis r3, 0xd
    mr r6, r22
    mr r7, r20
    mr r8, r24
    mr r9, r25
    mr r10, r26
    addi r3, r3, 0x2
    addi r4, r31, 0xe0
    clrlwi r5, r29, 16
    bl LogMsg_6
lbl_802B30BC:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_802B3118
    lis r3, 0xd
    lbz r5, 0xe(r30)
    mr r6, r21
    addi r4, r31, 0x128
    addi r3, r3, 0x2
    li r7, 0x15
    bl LogMsg_3
    b lbl_802B3118
lbl_802B30F0:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x2
    blt lbl_802B3118
    lis r3, 0xd
    addi r4, r31, 0x170
    addi r3, r3, 0x1
    li r5, 0x18
    bl LogMsg_1
lbl_802B3118:
    addi r11, r1, 0x40
    mr r3, r27
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// BTM_PINCodeReply
// ----------------------------------------------------------------------------
asm void BTM_PINCodeReply() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r30, lbl_80453F78@ha
    mr r25, r3
    addi r30, r30, lbl_80453F78@l
    mr r26, r4
    lwz r0, 0x194c(r30)
    mr r27, r5
    mr r28, r6
    mr r29, r7
    cmpwi r0, 0x0
    beq lbl_802B31E0
    addi r3, r30, 0x193c
    bl btu_stop_timer
    li r31, 0x0
    addi r3, r30, 0x1954
    stw r31, 0x194c(r30)
    li r4, 0xff
    li r5, 0x6
    bl memset
    cmpwi r26, 0x0
    beq lbl_802B31AC
    li r0, 0xe
    mr r3, r25
    stb r0, 0x27bf(r30)
    bl btsnd_hcic_pin_code_neg_reply
    b lbl_802B31E0
lbl_802B31AC:
    stb r31, 0x27bf(r30)
    mr r3, r25
    mr r4, r27
    mr r5, r28
    bl btsnd_hcic_pin_code_req_reply
    mr r3, r25
    bl btm_find_dev
    cmpwi r3, 0x0
    beq lbl_802B31E0
    lwz r0, 0x0(r29)
    stw r0, 0x10(r3)
    lwz r0, 0x4(r29)
    stw r0, 0x14(r3)
lbl_802B31E0:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// BTM_DeviceAuthorized
// ----------------------------------------------------------------------------
asm void BTM_DeviceAuthorized() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    bl btm_find_dev
    cmpwi cr1, r3, 0x0
    mr r31, r3
    bne cr1, lbl_802B3274
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x2
    blt lbl_802B33B4
    lis r3, 0xd
    lis r4, lbl_80374C40@ha
    lbz r5, 0x0(r30)
    addi r3, r3, 0x1
    lbz r6, 0x1(r30)
    addi r4, r4, lbl_80374C40@l
    lbz r7, 0x2(r30)
    lbz r8, 0x3(r30)
    lbz r9, 0x4(r30)
    lbz r10, 0x5(r30)
    bl LogMsg_6
    b lbl_802B33B4
lbl_802B3274:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B32B0
    lis r3, 0xd
    lis r4, lbl_80374CA0@ha
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r4, lbl_80374CA0@l
    beq cr1, lbl_802B32A8
    lbz r6, 0x7f(r31)
    b lbl_802B32AC
lbl_802B32A8:
    li r6, 0x0
lbl_802B32AC:
    bl LogMsg_2
lbl_802B32B0:
    cmpwi r28, 0x0
    bne lbl_802B32D4
    lbz r0, 0x76(r31)
    ori r0, r0, 0x1
    stb r0, 0x76(r31)
    lwz r0, 0x0(r29)
    stw r0, 0x10(r31)
    lwz r0, 0x4(r29)
    stw r0, 0x14(r31)
lbl_802B32D4:
    lbz r0, 0x7f(r31)
    cmplwi r0, 0x4
    bne lbl_802B33B4
    li r29, 0x0
    cmpwi r28, 0x0
    stb r29, 0x7f(r31)
    beq lbl_802B3348
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_802B33B4
    lbz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_802B3324
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_802B3324
    lwz r0, 0x0(r3)
    cmplwi r0, 0x3
    bne lbl_802B3324
    stw r29, 0x4(r3)
lbl_802B3324:
    lwz r12, 0x4(r31)
    mr r3, r30
    mr r5, r28
    lwz r4, 0x8(r31)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r31)
    b lbl_802B33B4
lbl_802B3348:
    mr r3, r31
    bl btm_sec_execute_procedure
    clrlwi r0, r3, 24
    mr r4, r3
    cmplwi r0, 0x1
    beq lbl_802B33B4
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_802B33B4
    lbz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_802B3394
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_802B3394
    lwz r0, 0x0(r3)
    cmplwi r0, 0x3
    bne lbl_802B3394
    stw r29, 0x4(r3)
lbl_802B3394:
    lwz r12, 0x4(r31)
    clrlwi r5, r4, 24
    mr r3, r30
    lwz r4, 0x8(r31)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_802B33B4:
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
// BTM_SecBond
// ----------------------------------------------------------------------------
asm void BTM_SecBond() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r7, lbl_80453F78@ha
    lis r31, lbl_80374AA0@ha
    addi r7, r7, lbl_80453F78@l
    mr r28, r3
    lbz r0, 0x27c0(r7)
    mr r29, r4
    mr r26, r5
    mr r27, r6
    cmplwi r0, 0x3
    addi r31, r31, lbl_80374AA0@l
    blt lbl_802B343C
    lis r3, 0xd
    lbz r5, 0x0(r28)
    lbz r6, 0x1(r28)
    addi r3, r3, 0x2
    lbz r7, 0x2(r28)
    addi r4, r31, 0x230
    lbz r8, 0x3(r28)
    lbz r9, 0x4(r28)
    lbz r10, 0x5(r28)
    bl LogMsg_6
lbl_802B343C:
    cmplwi r29, 0x10
    ble lbl_802B3470
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x1
    blt lbl_802B3468
    mr r5, r29
    addi r4, r31, 0x260
    lis r3, 0xd
    bl LogMsg_1
lbl_802B3468:
    li r3, 0x5
    b lbl_802B3788
lbl_802B3470:
    mr r3, r28
    bl btm_find_dev
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802B34C0
    mr r3, r28
    bl btm_sec_alloc_dev
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802B34C0
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x1
    blt lbl_802B34B8
    addi r4, r31, 0x280
    lis r3, 0xd
    bl LogMsg_0
lbl_802B34B8:
    li r3, 0x3
    b lbl_802B3788
lbl_802B34C0:
    lhz r0, 0x18(r30)
    cmplwi r0, 0xffff
    beq lbl_802B3504
    lbz r0, 0x76(r30)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_802B3504
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x2
    blt lbl_802B34FC
    lis r3, 0xd
    addi r4, r31, 0x2a0
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802B34FC:
    li r3, 0x0
    b lbl_802B3788
lbl_802B3504:
    mr r3, r28
    li r4, 0x0
    bl BTM_DeleteStoredLinkKey
    clrlwi. r0, r3, 24
    beq lbl_802B3520
    li r3, 0x3
    b lbl_802B3788
lbl_802B3520:
    li r0, 0x50
    lis r3, lbl_80453F78@ha
    stb r0, 0x81(r30)
    li r0, 0x1
    cmpwi r29, 0x0
    addi r3, r3, lbl_80453F78@l
    stb r0, 0x80(r30)
    lwz r0, 0x0(r27)
    stw r0, 0x10(r30)
    lwz r0, 0x4(r27)
    stw r0, 0x14(r30)
    stb r29, 0x197f(r3)
    beq lbl_802B3564
    mr r4, r26
    mr r5, r29
    addi r3, r3, 0x1980
    bl memcpy
lbl_802B3564:
    lbz r3, 0x76(r30)
    li r0, -0x17
    and r0, r3, r0
    stb r0, 0x76(r30)
    lbz r0, 0x23(r30)
    clrlwi r0, r0, 27
    cmpwi r0, 0x5
    bne lbl_802B35B4
    lbz r0, 0x24(r30)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_802B35B4
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x20(r4)
    cmplwi r0, 0x1
    beq lbl_802B35B4
    li r0, 0x1
    li r3, 0x1
    stb r0, 0x197c(r4)
    bl btsnd_hcic_write_pin_type
lbl_802B35B4:
    lis r29, lbl_80453F78@ha
    li r27, 0x0
    addi r29, r29, lbl_80453F78@l
    stb r27, 0x197e(r29)
    lhz r0, 0x18(r30)
    cmplwi r0, 0xffff
    beq lbl_802B3608
    lbz r3, 0x76(r30)
    li r0, 0x1
    rlwinm r3, r3, 0, 28, 26
    stb r3, 0x76(r30)
    stb r0, 0x7f(r30)
    lhz r3, 0x18(r30)
    bl btsnd_hcic_auth_request
    clrlwi. r0, r3, 24
    bne lbl_802B35FC
    li r3, 0x3
    b lbl_802B3788
lbl_802B35FC:
    stb r27, 0x197d(r29)
    li r3, 0x1
    b lbl_802B3788
lbl_802B3608:
    lbz r0, 0x1978(r29)
    cmplwi r0, 0x3
    beq lbl_802B3678
    lbz r0, 0x27c0(r29)
    cmplwi r0, 0x5
    blt lbl_802B3630
    lis r3, 0xd
    addi r4, r31, 0x2c0
    addi r3, r3, 0x4
    bl LogMsg_0
lbl_802B3630:
    li r3, 0x1
    bl btsnd_hcic_write_auth_enable
    clrlwi. r0, r3, 24
    bne lbl_802B3668
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x1
    blt lbl_802B3660
    addi r4, r31, 0x2e4
    lis r3, 0xd
    bl LogMsg_0
lbl_802B3660:
    li r3, 0x3
    b lbl_802B3788
lbl_802B3668:
    lis r3, lbl_80453F78@ha
    li r0, 0x1
    addi r3, r3, lbl_80453F78@l
    stb r0, 0x197b(r3)
lbl_802B3678:
    lis r3, lbl_80453F78@ha
    li r0, 0x1
    addi r3, r3, lbl_80453F78@l
    stb r0, 0x197d(r3)
    bl BTM_ReadLocalFeatures
    lbz r4, 0x0(r3)
    li r0, 0x0
    mr r3, r28
    stb r0, 0x85(r30)
    extrwi r27, r4, 1, 26
    bl BTM_InqDbRead
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_802B36D4
    lhz r0, 0x0(r4)
    mr r3, r28
    lbz r5, 0xb(r4)
    mr r8, r27
    lbz r6, 0xd(r4)
    ori r7, r0, 0x8000
    li r4, 0x18
    bl btsnd_hcic_create_conn
    b lbl_802B36F0
lbl_802B36D4:
    lhz r7, 0x1a(r30)
    mr r3, r28
    mr r8, r27
    li r4, 0x18
    li r5, 0x1
    li r6, 0x0
    bl btsnd_hcic_create_conn
lbl_802B36F0:
    clrlwi. r0, r3, 24
    beq lbl_802B3700
    li r3, 0x1
    b lbl_802B3788
lbl_802B3700:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x1
    blt lbl_802B3720
    addi r4, r31, 0x2e4
    lis r3, 0xd
    bl LogMsg_0
lbl_802B3720:
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x197b(r4)
    cmpwi r0, 0x0
    beq lbl_802B3784
    lbz r0, 0x27c0(r4)
    li r3, 0x0
    stb r3, 0x197b(r4)
    cmplwi r0, 0x5
    blt lbl_802B3768
    lbz r5, 0x1978(r4)
    lis r3, 0xd
    addi r3, r3, 0x4
    addi r4, r31, 0x2fc
    subi r0, r5, 0x3
    cntlzw r0, r0
    srwi r5, r0, 5
    bl LogMsg_1
lbl_802B3768:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r3, 0x1978(r3)
    subi r0, r3, 0x3
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    bl btsnd_hcic_write_auth_enable
lbl_802B3784:
    li r3, 0x3
lbl_802B3788:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_l2cap_access_req
// ----------------------------------------------------------------------------
asm void btm_sec_l2cap_access_req() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r31, lbl_80374AA0@ha
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    addi r31, r31, lbl_80374AA0@l
    bl btm_find_dev
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802B3844
    mr r3, r24
    bl btm_sec_alloc_dev
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802B3844
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x2
    blt lbl_802B381C
    lis r3, 0xd
    mr r5, r25
    addi r3, r3, 0x1
    addi r4, r31, 0x410
    bl LogMsg_1
lbl_802B381C:
    cmpwi r28, 0x0
    beq lbl_802B383C
    mr r12, r28
    mr r3, r24
    li r4, 0x0
    li r5, 0x3
    mtctr r12
    bctrl
lbl_802B383C:
    li r3, 0x3
    b lbl_802B3BEC
lbl_802B3844:
    lis r3, lbl_80453F78@ha
    li r0, 0x4
    addi r3, r3, lbl_80453F78@l
    sth r26, 0x18(r30)
    addi r4, r3, 0x1990
    li r3, 0x0
    mtctr r0
lbl_802B3860:
    lbz r0, 0xe(r4)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B387C
    lhz r0, 0xc(r4)
    cmplw r0, r25
    bne lbl_802B387C
    b lbl_802B392C
lbl_802B387C:
    lbz r0, 0x4a(r4)
    addi r4, r4, 0x3c
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B389C
    lhz r0, 0xc(r4)
    cmplw r0, r25
    bne lbl_802B389C
    b lbl_802B392C
lbl_802B389C:
    lbz r0, 0x4a(r4)
    addi r4, r4, 0x3c
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B38BC
    lhz r0, 0xc(r4)
    cmplw r0, r25
    bne lbl_802B38BC
    b lbl_802B392C
lbl_802B38BC:
    lbz r0, 0x4a(r4)
    addi r4, r4, 0x3c
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B38DC
    lhz r0, 0xc(r4)
    cmplw r0, r25
    bne lbl_802B38DC
    b lbl_802B392C
lbl_802B38DC:
    lbz r0, 0x4a(r4)
    addi r4, r4, 0x3c
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B38FC
    lhz r0, 0xc(r4)
    cmplw r0, r25
    bne lbl_802B38FC
    b lbl_802B392C
lbl_802B38FC:
    lbz r0, 0x4a(r4)
    addi r4, r4, 0x3c
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B391C
    lhz r0, 0xc(r4)
    cmplw r0, r25
    bne lbl_802B391C
    b lbl_802B392C
lbl_802B391C:
    addi r3, r3, 0x5
    addi r4, r4, 0x3c
    bdnz lbl_802B3860
    li r4, 0x0
lbl_802B392C:
    cmpwi r4, 0x0
    bne lbl_802B3984
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x2
    blt lbl_802B395C
    lis r3, 0xd
    mr r5, r25
    addi r3, r3, 0x1
    addi r4, r31, 0x448
    bl LogMsg_1
lbl_802B395C:
    cmpwi r28, 0x0
    beq lbl_802B397C
    mr r12, r28
    mr r3, r24
    li r4, 0x0
    li r5, 0x4
    mtctr r12
    bctrl
lbl_802B397C:
    li r3, 0x4
    b lbl_802B3BEC
lbl_802B3984:
    cmpwi r27, 0x0
    beq lbl_802B399C
    beq lbl_802B39A0
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_802B39A0
lbl_802B399C:
    stw r4, 0x0(r30)
lbl_802B39A0:
    lis r3, lbl_80453F78@ha
    li r0, 0x6
    addi r3, r3, lbl_80453F78@l
    lbz r29, 0xe(r4)
    addi r7, r3, 0x1990
    li r6, 0x0
    li r5, 0x0
    mtctr r0
lbl_802B39C0:
    lbz r0, 0xe(r7)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B39F8
    lhz r3, 0xc(r7)
    lhz r0, 0xc(r4)
    cmplw r3, r0
    bne lbl_802B39F8
    cmpwi r6, 0x0
    bne lbl_802B3ABC
    cmplw r4, r7
    bne lbl_802B39F8
    li r6, 0x1
    b lbl_802B39F8
    b lbl_802B3ABC
lbl_802B39F8:
    lbz r0, 0x4a(r7)
    addi r7, r7, 0x3c
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B3A34
    lhz r3, 0xc(r7)
    lhz r0, 0xc(r4)
    cmplw r3, r0
    bne lbl_802B3A34
    cmpwi r6, 0x0
    bne lbl_802B3ABC
    cmplw r4, r7
    bne lbl_802B3A34
    li r6, 0x1
    b lbl_802B3A34
    b lbl_802B3ABC
lbl_802B3A34:
    lbz r0, 0x4a(r7)
    addi r7, r7, 0x3c
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B3A70
    lhz r3, 0xc(r7)
    lhz r0, 0xc(r4)
    cmplw r3, r0
    bne lbl_802B3A70
    cmpwi r6, 0x0
    bne lbl_802B3ABC
    cmplw r4, r7
    bne lbl_802B3A70
    li r6, 0x1
    b lbl_802B3A70
    b lbl_802B3ABC
lbl_802B3A70:
    lbz r0, 0x4a(r7)
    addi r7, r7, 0x3c
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B3AAC
    lhz r3, 0xc(r7)
    lhz r0, 0xc(r4)
    cmplw r3, r0
    bne lbl_802B3AAC
    cmpwi r6, 0x0
    bne lbl_802B3ABC
    cmplw r4, r7
    bne lbl_802B3AAC
    li r6, 0x1
    b lbl_802B3AAC
    b lbl_802B3ABC
lbl_802B3AAC:
    addi r5, r5, 0x3
    addi r7, r7, 0x3c
    bdnz lbl_802B39C0
    li r7, 0x0
lbl_802B3ABC:
    cmpwi r7, 0x0
    beq lbl_802B3B14
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B3AEC
    lis r3, 0xd
    mr r5, r25
    addi r3, r3, 0x3
    addi r4, r31, 0x48c
    bl LogMsg_1
lbl_802B3AEC:
    cmpwi r28, 0x0
    beq lbl_802B3B0C
    mr r12, r28
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
lbl_802B3B0C:
    li r3, 0x0
    b lbl_802B3BEC
lbl_802B3B14:
    stw r28, 0x4(r30)
    li r0, 0x0
    lis r3, lbl_80453F78@ha
    stw r0, 0x8(r30)
    addi r3, r3, lbl_80453F78@l
    stb r29, 0x81(r30)
    stb r27, 0x80(r30)
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B3B60
    lis r3, 0xd
    lbz r7, 0x7f(r30)
    lbz r8, 0x76(r30)
    mr r5, r25
    mr r6, r26
    mr r9, r29
    addi r3, r3, 0x3
    addi r4, r31, 0x4d0
    bl LogMsg_5
lbl_802B3B60:
    cmpwi r27, 0x0
    bne lbl_802B3BAC
    clrlwi. r0, r29, 31
    beq lbl_802B3BAC
    lbz r0, 0x76(r30)
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0x76(r30)
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B3BAC
    lis r3, 0xd
    lwz r5, 0x14(r30)
    lwz r6, 0x10(r30)
    addi r3, r3, 0x3
    lbz r7, 0x76(r30)
    addi r4, r31, 0x528
    bl LogMsg_3
lbl_802B3BAC:
    mr r3, r30
    bl btm_sec_execute_procedure
    clrlwi r5, r3, 24
    mr r25, r3
    cmplwi r5, 0x1
    beq lbl_802B3BE8
    cmpwi r28, 0x0
    beq lbl_802B3BE8
    mr r12, r28
    mr r3, r24
    lwz r4, 0x8(r30)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_802B3BE8:
    mr r3, r25
lbl_802B3BEC:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_mx_access_request
// ----------------------------------------------------------------------------
asm void btm_sec_mx_access_request() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r30, r9
    bl btm_find_dev
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802B3C7C
    mr r3, r24
    bl btm_sec_alloc_dev
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802B3C7C
    cmpwi r29, 0x0
    beq lbl_802B3E88
    mr r12, r29
    mr r3, r24
    mr r4, r30
    li r5, 0x3
    mtctr r12
    bctrl
    b lbl_802B3E88
lbl_802B3C7C:
    lis r3, lbl_80453F78@ha
    li r0, 0x8
    addi r3, r3, lbl_80453F78@l
    li r4, 0x0
    addi r5, r3, 0x1990
    mtctr r0
lbl_802B3C94:
    lbz r0, 0xe(r5)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B3CE4
    lhz r0, 0xc(r5)
    cmplw r0, r25
    bne lbl_802B3CE4
    lwz r0, 0x0(r5)
    cmplw r0, r27
    bne lbl_802B3CE4
    cmpwi r26, 0x0
    beq lbl_802B3CCC
    lwz r0, 0x4(r5)
    cmplw r0, r28
    beq lbl_802B3D9C
lbl_802B3CCC:
    cmpwi r26, 0x0
    bne lbl_802B3CE4
    lwz r0, 0x8(r5)
    cmplw r0, r28
    bne lbl_802B3CE4
    b lbl_802B3D9C
lbl_802B3CE4:
    lbz r0, 0x4a(r5)
    addi r5, r5, 0x3c
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B3D38
    lhz r0, 0xc(r5)
    cmplw r0, r25
    bne lbl_802B3D38
    lwz r0, 0x0(r5)
    cmplw r0, r27
    bne lbl_802B3D38
    cmpwi r26, 0x0
    beq lbl_802B3D20
    lwz r0, 0x4(r5)
    cmplw r0, r28
    beq lbl_802B3D9C
lbl_802B3D20:
    cmpwi r26, 0x0
    bne lbl_802B3D38
    lwz r0, 0x8(r5)
    cmplw r0, r28
    bne lbl_802B3D38
    b lbl_802B3D9C
lbl_802B3D38:
    lbz r0, 0x4a(r5)
    addi r5, r5, 0x3c
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B3D8C
    lhz r0, 0xc(r5)
    cmplw r0, r25
    bne lbl_802B3D8C
    lwz r0, 0x0(r5)
    cmplw r0, r27
    bne lbl_802B3D8C
    cmpwi r26, 0x0
    beq lbl_802B3D74
    lwz r0, 0x4(r5)
    cmplw r0, r28
    beq lbl_802B3D9C
lbl_802B3D74:
    cmpwi r26, 0x0
    bne lbl_802B3D8C
    lwz r0, 0x8(r5)
    cmplw r0, r28
    bne lbl_802B3D8C
    b lbl_802B3D9C
lbl_802B3D8C:
    addi r4, r4, 0x2
    addi r5, r5, 0x3c
    bdnz lbl_802B3C94
    li r5, 0x0
lbl_802B3D9C:
    cmpwi r5, 0x0
    bne lbl_802B3DF8
    cmpwi r29, 0x0
    beq lbl_802B3DC4
    mr r12, r29
    mr r3, r24
    mr r4, r30
    li r5, 0x4
    mtctr r12
    bctrl
lbl_802B3DC4:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x1
    blt lbl_802B3E88
    lis r4, lbl_80374FF8@ha
    mr r5, r25
    mr r6, r27
    mr r7, r28
    addi r4, r4, lbl_80374FF8@l
    lis r3, 0xd
    bl LogMsg_3
    b lbl_802B3E88
lbl_802B3DF8:
    stw r5, 0x0(r31)
    mr r3, r31
    lbz r0, 0xe(r5)
    stb r0, 0x81(r31)
    stb r26, 0x80(r31)
    stw r29, 0x4(r31)
    stw r30, 0x8(r31)
    lbz r0, 0x76(r31)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0x76(r31)
    bl btm_sec_execute_procedure
    clrlwi r0, r3, 24
    mr r5, r3
    cmplwi r0, 0x1
    beq lbl_802B3E88
    cmpwi r29, 0x0
    beq lbl_802B3E88
    lbz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_802B3E68
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_802B3E68
    lwz r0, 0x0(r3)
    cmplwi r0, 0x3
    bne lbl_802B3E68
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_802B3E68:
    mr r12, r29
    mr r3, r24
    mr r4, r30
    clrlwi r5, r5, 24
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_802B3E88:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_conn_req
// ----------------------------------------------------------------------------
asm void btm_sec_conn_req() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80453F78@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x197a(r5)
    cmpwi r0, 0x0
    beq lbl_802B3F34
    bl btm_find_dev
    cmpwi r3, 0x0
    beq lbl_802B3EEC
    lbz r0, 0x76(r3)
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_802B3F34
lbl_802B3EEC:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B3F14
    lis r3, 0xd
    lis r4, lbl_80375038@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375038@l
    bl LogMsg_0
lbl_802B3F14:
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802B3FB0
    mr r4, r29
    li r5, 0xf
    bl btsnd_hcic_reject_conn
    b lbl_802B3FB0
lbl_802B3F34:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x1934(r3)
    cmpwi r12, 0x0
    beq lbl_802B3F80
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
    clrlwi. r0, r3, 24
    bne lbl_802B3F80
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802B3FB0
    mr r4, r29
    li r5, 0xf
    bl btsnd_hcic_reject_conn
    b lbl_802B3FB0
lbl_802B3F80:
    lis r31, lbl_80453F78@ha
    mr r4, r29
    addi r31, r31, lbl_80453F78@l
    li r5, 0x6
    addi r3, r31, 0x27b4
    bl memcpy
    mr r4, r30
    addi r3, r31, 0x27ba
    li r5, 0x3
    bl memcpy
    mr r3, r29
    bl l2c_link_hci_conn_req
lbl_802B3FB0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_init
// ----------------------------------------------------------------------------
asm void btm_sec_init() {
    nofralloc
    lis r6, lbl_80453F78@ha
    li r4, 0xff
    addi r6, r6, lbl_80453F78@l
    li r5, 0x6
    stb r3, 0x1978(r6)
    addi r3, r6, 0x1954
    b memset
}

// ----------------------------------------------------------------------------
// btm_sec_dev_reset
// ----------------------------------------------------------------------------
asm void btm_sec_dev_reset() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80453F78@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x1978(r3)
    cmplwi r0, 0x3
    bne lbl_802B4018
    li r3, 0x1
    bl btsnd_hcic_write_auth_enable
    li r3, 0x1
    bl btsnd_hcic_write_encr_mode
lbl_802B4018:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_abort_access_req
// ----------------------------------------------------------------------------
asm void btm_sec_abort_access_req() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl btm_find_dev
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802B40C4
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x1920(r3)
    cmpwi r12, 0x0
    beq lbl_802B4078
    mr r3, r30
    addi r4, r31, 0x22
    addi r5, r31, 0x35
    mtctr r12
    bctrl
lbl_802B4078:
    lbz r0, 0x7f(r31)
    cmplwi r0, 0x4
    beq lbl_802B408C
    cmplwi r0, 0x1
    bne lbl_802B40C4
lbl_802B408C:
    li r3, 0x0
    stb r3, 0x7f(r31)
    lbz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_802B40BC
    lwz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_802B40BC
    lwz r0, 0x0(r4)
    cmplwi r0, 0x3
    bne lbl_802B40BC
    stw r3, 0x4(r4)
lbl_802B40BC:
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_802B40C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_rmt_name_request_complete
// ----------------------------------------------------------------------------
asm void btm_sec_rmt_name_request_complete() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    mr r30, r5
    beq lbl_802B4110
    bl btm_find_dev
    mr r31, r3
    b lbl_802B41B8
lbl_802B4110:
    lis r3, lbl_80453F78@ha
    li r0, 0x4
    addi r3, r3, lbl_80453F78@l
    li r4, 0x0
    addi r31, r3, 0x1f30
    mtctr r0
lbl_802B4128:
    lbz r0, 0x76(r31)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B4140
    lbz r0, 0x7f(r31)
    cmplwi r0, 0x3
    beq lbl_802B41AC
lbl_802B4140:
    lbz r0, 0xfe(r31)
    addi r4, r4, 0x1
    addi r31, r31, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B4160
    lbz r0, 0x7f(r31)
    cmplwi r0, 0x3
    beq lbl_802B41AC
lbl_802B4160:
    lbz r0, 0xfe(r31)
    addi r4, r4, 0x1
    addi r31, r31, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B4180
    lbz r0, 0x7f(r31)
    cmplwi r0, 0x3
    beq lbl_802B41AC
lbl_802B4180:
    lbz r0, 0xfe(r31)
    addi r4, r4, 0x1
    addi r31, r31, 0x88
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B41A0
    lbz r0, 0x7f(r31)
    cmplwi r0, 0x3
    beq lbl_802B41AC
lbl_802B41A0:
    addi r4, r4, 0x1
    addi r31, r31, 0x88
    bdnz lbl_802B4128
lbl_802B41AC:
    cmpwi r4, 0x10
    bne lbl_802B41B8
    li r31, 0x0
lbl_802B41B8:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B41F8
    cmpwi r31, 0x0
    lis r3, 0xd
    lis r4, lbl_80375074@ha
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375074@l
    beq lbl_802B41F0
    lbz r6, 0x7f(r31)
    b lbl_802B41F4
lbl_802B41F0:
    li r6, 0x0
lbl_802B41F4:
    bl LogMsg_2
lbl_802B41F8:
    cmpwi r31, 0x0
    beq lbl_802B43AC
    cmpwi r30, 0x0
    bne lbl_802B4260
    mr r4, r28
    addi r3, r31, 0x35
    li r5, 0x40
    bl memcpy
    lbz r0, 0x76(r31)
    lis r29, lbl_80453F78@ha
    addi r29, r29, lbl_80453F78@l
    li r28, 0x0
    ori r0, r0, 0x8
    stb r0, 0x76(r31)
lbl_802B4230:
    lwz r12, 0x192c(r29)
    cmpwi r12, 0x0
    beq lbl_802B4250
    mr r3, r27
    addi r4, r31, 0x22
    addi r5, r31, 0x35
    mtctr r12
    bctrl
lbl_802B4250:
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0x2
    blt lbl_802B4230
lbl_802B4260:
    lbz r0, 0x82(r31)
    cmpwi r0, 0x0
    beq lbl_802B4300
    lbz r0, 0x81(r31)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_802B4284
    lbz r0, 0x85(r31)
    cmpwi r0, 0x0
    beq lbl_802B43AC
lbl_802B4284:
    li r0, 0x0
    lis r3, lbl_80453F78@ha
    stb r0, 0x82(r31)
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x1914(r3)
    cmpwi r12, 0x0
    beq lbl_802B42BC
    addi r3, r31, 0x1c
    addi r4, r31, 0x22
    addi r5, r31, 0x35
    addi r6, r31, 0x25
    lbz r7, 0x83(r31)
    mtctr r12
    bctrl
lbl_802B42BC:
    lis r29, lbl_80453F78@ha
    li r28, 0x0
    addi r29, r29, lbl_80453F78@l
lbl_802B42C8:
    lwz r12, 0x1924(r29)
    cmpwi r12, 0x0
    beq lbl_802B42F0
    addi r3, r31, 0x1c
    addi r4, r31, 0x22
    addi r5, r31, 0x35
    addi r6, r31, 0x25
    lbz r7, 0x83(r31)
    mtctr r12
    bctrl
lbl_802B42F0:
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0x2
    blt lbl_802B42C8
lbl_802B4300:
    lbz r3, 0x81(r31)
    rlwinm. r0, r3, 0, 25, 25
    beq lbl_802B4334
    lbz r0, 0x76(r31)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_802B4334
    li r0, -0x51
    li r4, 0x13
    and r0, r3, r0
    stb r0, 0x81(r31)
    lhz r3, 0x18(r31)
    bl btsnd_hcic_disconnect
    b lbl_802B43AC
lbl_802B4334:
    lbz r0, 0x7f(r31)
    cmplwi r0, 0x3
    bne lbl_802B43AC
    li r29, 0x0
    cmpwi r30, 0x0
    stb r29, 0x7f(r31)
    beq lbl_802B4378
    lwz r12, 0x4(r31)
    cmpwi r12, 0x0
    beq lbl_802B43AC
    addi r3, r31, 0x1c
    lwz r4, 0x8(r31)
    li r5, 0xa
    mtctr r12
    bctrl
    stw r29, 0x4(r31)
    b lbl_802B43AC
lbl_802B4378:
    mr r3, r31
    bl btm_sec_execute_procedure
    clrlwi r5, r3, 24
    cmplwi r5, 0x1
    beq lbl_802B43AC
    lwz r12, 0x4(r31)
    cmpwi r12, 0x0
    beq lbl_802B43AC
    addi r3, r31, 0x1c
    lwz r4, 0x8(r31)
    mtctr r12
    bctrl
    stw r29, 0x4(r31)
lbl_802B43AC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_auth_complete
// ----------------------------------------------------------------------------
asm void btm_sec_auth_complete() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r29, r3
    mr r30, r4
    bl btm_find_dev_by_handle
    lis r4, lbl_80453F78@ha
    mr r31, r3
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x27c0(r4)
    cmplwi r0, 0x4
    blt lbl_802B4428
    cmpwi r31, 0x0
    lis r3, 0xd
    lis r4, lbl_803750AC@ha
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_803750AC@l
    beq lbl_802B4420
    lbz r6, 0x7f(r31)
    b lbl_802B4424
lbl_802B4420:
    li r6, 0x0
lbl_802B4424:
    bl LogMsg_2
lbl_802B4428:
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x197b(r4)
    cmpwi r0, 0x0
    beq lbl_802B4490
    lbz r0, 0x27c0(r4)
    li r3, 0x0
    stb r3, 0x197b(r4)
    cmplwi r0, 0x5
    blt lbl_802B4474
    lbz r3, 0x1978(r4)
    lis r4, lbl_80374D9C@ha
    lis r5, 0xd
    subi r0, r3, 0x3
    addi r4, r4, lbl_80374D9C@l
    cntlzw r0, r0
    addi r3, r5, 0x4
    srwi r5, r0, 5
    bl LogMsg_1
lbl_802B4474:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r3, 0x1978(r3)
    subi r0, r3, 0x3
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    bl btsnd_hcic_write_auth_enable
lbl_802B4490:
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x197c(r4)
    cmpwi r0, 0x0
    beq lbl_802B44B4
    li r0, 0x0
    lbz r3, 0x20(r4)
    stb r0, 0x197c(r4)
    bl btsnd_hcic_write_pin_type
lbl_802B44B4:
    cmpwi r31, 0x0
    beq lbl_802B4548
    lbz r3, 0x81(r31)
    rlwinm. r0, r3, 0, 25, 25
    beq lbl_802B4548
    lis r27, lbl_80453F78@ha
    addi r27, r27, lbl_80453F78@l
    lbz r0, 0x197d(r27)
    cmpwi r0, 0x0
    bne lbl_802B4548
    li r0, -0x51
    and r0, r3, r0
    stb r0, 0x81(r31)
    lbz r26, 0x197e(r27)
    cmpwi r26, 0x0
    beq lbl_802B4548
    mr r3, r29
    bl btm_find_dev_by_handle
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_802B4548
    lbz r0, 0x81(r3)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_802B451C
    stb r26, 0x197e(r27)
    b lbl_802B4548
lbl_802B451C:
    lbz r27, 0x7f(r3)
    cmplwi r27, 0x5
    beq lbl_802B4548
    li r0, 0x5
    mr r4, r26
    stb r0, 0x7f(r3)
    mr r3, r29
    bl btsnd_hcic_disconnect
    clrlwi. r0, r3, 24
    bne lbl_802B4548
    stb r27, 0x7f(r28)
lbl_802B4548:
    cmpwi r31, 0x0
    beq lbl_802B46F0
    lbz r0, 0x7f(r31)
    cmplwi r0, 0x1
    beq lbl_802B4594
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x191c(r3)
    cmpwi r12, 0x0
    beq lbl_802B46F0
    cmpwi r30, 0x0
    beq lbl_802B46F0
    mr r6, r30
    addi r3, r31, 0x1c
    addi r4, r31, 0x22
    addi r5, r31, 0x35
    mtctr r12
    bctrl
    b lbl_802B46F0
lbl_802B4594:
    cmplwi r30, 0xc
    bne lbl_802B45B0
    lbz r0, 0x76(r31)
    rlwinm r0, r0, 0, 29, 30
    cmpwi r0, 0x6
    bne lbl_802B45B0
    li r30, 0x0
lbl_802B45B0:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x191c(r3)
    cmpwi r12, 0x0
    beq lbl_802B45DC
    mr r6, r30
    addi r3, r31, 0x1c
    addi r4, r31, 0x22
    addi r5, r31, 0x35
    mtctr r12
    bctrl
lbl_802B45DC:
    li r29, 0x0
    stb r29, 0x7f(r31)
    lbz r3, 0x81(r31)
    rlwinm. r0, r3, 0, 25, 25
    beq lbl_802B460C
    li r0, -0x51
    li r4, 0x13
    and r0, r3, r0
    stb r0, 0x81(r31)
    lhz r3, 0x18(r31)
    bl btsnd_hcic_disconnect
    b lbl_802B46F0
lbl_802B460C:
    cmpwi r30, 0x0
    beq lbl_802B4678
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_802B4668
    lbz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_802B4648
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_802B4648
    lwz r0, 0x0(r3)
    cmplwi r0, 0x3
    bne lbl_802B4648
    stw r29, 0x4(r3)
lbl_802B4648:
    lwz r12, 0x4(r31)
    addi r3, r31, 0x1c
    lwz r4, 0x8(r31)
    li r5, 0xa
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_802B4668:
    lhz r3, 0x18(r31)
    li r4, 0x5
    bl btsnd_hcic_disconnect
    b lbl_802B46F0
lbl_802B4678:
    lbz r0, 0x76(r31)
    mr r3, r31
    ori r0, r0, 0x2
    stb r0, 0x76(r31)
    bl btm_sec_execute_procedure
    clrlwi r0, r3, 24
    mr r4, r3
    cmplwi r0, 0x1
    beq lbl_802B46F0
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_802B46F0
    lbz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_802B46D0
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_802B46D0
    lwz r0, 0x0(r3)
    cmplwi r0, 0x3
    bne lbl_802B46D0
    stw r29, 0x4(r3)
lbl_802B46D0:
    lwz r12, 0x4(r31)
    clrlwi r5, r4, 24
    addi r3, r31, 0x1c
    lwz r4, 0x8(r31)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_802B46F0:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_mkey_comp_event
// ----------------------------------------------------------------------------
asm void btm_sec_mkey_comp_event() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    bl btm_find_dev_by_handle
    lis r4, lbl_80453F78@ha
    lbz r7, lbl_804A2550
    addi r4, r4, lbl_80453F78@l
    lbz r6, lbl_804A2551
    lbz r0, 0x27c0(r4)
    mr r31, r3
    lbz r5, lbl_804A2552
    lbz r4, lbl_804A2553
    cmplwi r0, 0x4
    lbz r3, lbl_804A2554
    lbz r0, lbl_804A2555
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r4, 0xb(r1)
    stb r3, 0xc(r1)
    stb r0, 0xd(r1)
    blt lbl_802B47A0
    cmpwi r31, 0x0
    lis r3, 0xd
    lis r4, lbl_803750E0@ha
    mr r5, r29
    addi r3, r3, 0x3
    addi r4, r4, lbl_803750E0@l
    beq lbl_802B4798
    lbz r6, 0x7f(r31)
    b lbl_802B479C
lbl_802B4798:
    li r6, 0x0
lbl_802B479C:
    bl LogMsg_2
lbl_802B47A0:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x27b0(r3)
    cmpwi r12, 0x0
    beq lbl_802B47E8
    cmpwi r31, 0x0
    bne lbl_802B47D4
    mr r4, r29
    mr r5, r30
    addi r3, r1, 0x8
    mtctr r12
    bctrl
    b lbl_802B47E8
lbl_802B47D4:
    mr r4, r29
    mr r5, r30
    addi r3, r31, 0x1c
    mtctr r12
    bctrl
lbl_802B47E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_encrypt_change
// ----------------------------------------------------------------------------
asm void btm_sec_encrypt_change() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    bl btm_find_dev_by_handle
    lis r4, lbl_80453F78@ha
    mr r30, r3
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x27c0(r4)
    cmplwi r0, 0x4
    blt lbl_802B4864
    cmpwi r30, 0x0
    lis r3, 0xd
    lis r4, lbl_80375110@ha
    mr r5, r31
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375110@l
    beq lbl_802B485C
    lbz r6, 0x7f(r30)
    b lbl_802B4860
lbl_802B485C:
    li r6, 0x0
lbl_802B4860:
    bl LogMsg_2
lbl_802B4864:
    cmpwi r30, 0x0
    beq lbl_802B4928
    cmplwi r31, 0x23
    bne lbl_802B48A0
    lis r7, lbl_80453F78@ha
    lis r6, btm_sec_collision_timeout@ha
    addi r7, r7, lbl_80453F78@l
    li r4, 0x16
    addi r6, r6, btm_sec_collision_timeout@l
    stw r30, 0x1938(r7)
    addi r3, r7, 0x195c
    li r5, 0x1
    stw r6, 0x196c(r7)
    bl btu_start_timer
    b lbl_802B4928
lbl_802B48A0:
    cmpwi r31, 0x0
    beq lbl_802B48D4
    lwz r12, 0x4(r30)
    cmpwi r12, 0x0
    beq lbl_802B4928
    addi r3, r30, 0x1c
    lwz r4, 0x8(r30)
    li r5, 0xa
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r30)
    b lbl_802B4928
lbl_802B48D4:
    lbz r0, 0x76(r30)
    ori r0, r0, 0x6
    stb r0, 0x76(r30)
    lbz r0, 0x7f(r30)
    cmplwi r0, 0x2
    bne lbl_802B4928
    li r31, 0x0
    mr r3, r30
    stb r31, 0x7f(r30)
    bl btm_sec_execute_procedure
    clrlwi r5, r3, 24
    cmplwi r5, 0x1
    beq lbl_802B4928
    lwz r12, 0x4(r30)
    cmpwi r12, 0x0
    beq lbl_802B4928
    addi r3, r30, 0x1c
    lwz r4, 0x8(r30)
    mtctr r12
    bctrl
    stw r31, 0x4(r30)
lbl_802B4928:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_is_bonding
// ----------------------------------------------------------------------------
asm void btm_sec_is_bonding() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl btm_find_dev_by_handle
    cmpwi r3, 0x0
    beq lbl_802B496C
    lbz r0, 0x81(r3)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_802B496C
    li r3, 0x1
    b lbl_802B4970
lbl_802B496C:
    li r3, 0x0
lbl_802B4970:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_connected
// ----------------------------------------------------------------------------
asm void btm_sec_connected() {
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
    bl btm_find_dev
    lis r4, lbl_80453F78@ha
    mr r31, r3
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x27c0(r4)
    cmplwi r0, 0x4
    blt lbl_802B49E0
    lis r3, 0xd
    lis r4, lbl_80375144@ha
    mr r5, r28
    mr r6, r29
    mr r7, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375144@l
    bl LogMsg_3
lbl_802B49E0:
    cmpwi r31, 0x0
    bne lbl_802B4A0C
    cmpwi r29, 0x0
    bne lbl_802B4DE8
    mr r3, r27
    bl btm_sec_alloc_dev
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802B4A2C
    b lbl_802B4DE8
    b lbl_802B4DE8
lbl_802B4A0C:
    lis r4, lbl_80453F78@ha
    li r0, 0x1
    addi r4, r4, lbl_80453F78@l
    lwz r3, 0x1974(r4)
    stw r3, 0xc(r31)
    addi r3, r3, 0x1
    stw r3, 0x1974(r4)
    stb r0, 0x85(r31)
lbl_802B4A2C:
    lbz r0, 0x81(r31)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_802B4AC4
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x197b(r4)
    cmpwi r0, 0x0
    beq lbl_802B4AA0
    lbz r0, 0x27c0(r4)
    li r3, 0x0
    stb r3, 0x197b(r4)
    cmplwi r0, 0x5
    blt lbl_802B4A84
    lbz r3, 0x1978(r4)
    lis r4, lbl_80374D9C@ha
    lis r5, 0xd
    subi r0, r3, 0x3
    addi r4, r4, lbl_80374D9C@l
    cntlzw r0, r0
    addi r3, r5, 0x4
    srwi r5, r0, 5
    bl LogMsg_1
lbl_802B4A84:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r3, 0x1978(r3)
    subi r0, r3, 0x3
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    bl btsnd_hcic_write_auth_enable
lbl_802B4AA0:
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x197c(r4)
    cmpwi r0, 0x0
    beq lbl_802B4AC4
    li r0, 0x0
    lbz r3, 0x20(r4)
    stb r0, 0x197c(r4)
    bl btsnd_hcic_write_pin_type
lbl_802B4AC4:
    cmpwi r29, 0x0
    beq lbl_802B4C34
    cmplwi r29, 0x5
    beq lbl_802B4B20
    cmplwi r29, 0x6
    beq lbl_802B4B20
    cmplwi r29, 0xe
    beq lbl_802B4B20
    cmplwi r29, 0x18
    beq lbl_802B4B20
    cmplwi r29, 0x26
    beq lbl_802B4B20
    cmplwi r29, 0x29
    beq lbl_802B4B20
    cmplwi r29, 0x25
    beq lbl_802B4B20
    cmplwi r29, 0x17
    beq lbl_802B4B20
    cmplwi r29, 0x22
    beq lbl_802B4B20
    lbz r0, 0x81(r31)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_802B4BAC
lbl_802B4B20:
    lbz r3, 0x81(r31)
    li r0, -0x51
    lis r28, lbl_80453F78@ha
    and r0, r3, r0
    stb r0, 0x81(r31)
    addi r28, r28, lbl_80453F78@l
    lbz r0, 0x76(r31)
    rlwinm r0, r0, 0, 28, 26
    stb r0, 0x76(r31)
    lwz r0, 0x194c(r28)
    cmpwi r0, 0x0
    beq lbl_802B4B64
    addi r3, r28, 0x193c
    bl btu_stop_timer
    li r0, 0x0
    li r29, 0xe
    stw r0, 0x194c(r28)
lbl_802B4B64:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27bf(r3)
    cmplwi r0, 0xe
    bne lbl_802B4B7C
    li r29, 0xe
lbl_802B4B7C:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x191c(r3)
    cmpwi r12, 0x0
    beq lbl_802B4DE8
    mr r6, r29
    addi r3, r31, 0x1c
    addi r4, r31, 0x22
    addi r5, r31, 0x35
    mtctr r12
    bctrl
    b lbl_802B4DE8
lbl_802B4BAC:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_802B4DE8
    lbz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_802B4BE4
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_802B4BE4
    lwz r0, 0x0(r3)
    cmplwi r0, 0x3
    bne lbl_802B4BE4
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_802B4BE4:
    cmplwi r29, 0x8
    beq lbl_802B4BFC
    cmplwi r29, 0x1f
    beq lbl_802B4BFC
    cmplwi r29, 0x4
    bne lbl_802B4C18
lbl_802B4BFC:
    lwz r12, 0x4(r31)
    addi r3, r31, 0x1c
    lwz r4, 0x8(r31)
    li r5, 0x8
    mtctr r12
    bctrl
    b lbl_802B4DE8
lbl_802B4C18:
    lwz r12, 0x4(r31)
    addi r3, r31, 0x1c
    lwz r4, 0x8(r31)
    li r5, 0xa
    mtctr r12
    bctrl
    b lbl_802B4DE8
lbl_802B4C34:
    lbz r0, 0x81(r31)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_802B4D14
    lbz r0, 0x82(r31)
    cmpwi r0, 0x0
    beq lbl_802B4D14
    li r0, 0x0
    lis r3, lbl_80453F78@ha
    stb r0, 0x82(r31)
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x1914(r3)
    cmpwi r12, 0x0
    beq lbl_802B4C84
    addi r3, r31, 0x1c
    addi r4, r31, 0x22
    addi r5, r31, 0x35
    addi r6, r31, 0x25
    lbz r7, 0x83(r31)
    mtctr r12
    bctrl
lbl_802B4C84:
    lis r29, lbl_80453F78@ha
    li r30, 0x0
    addi r29, r29, lbl_80453F78@l
lbl_802B4C90:
    lwz r12, 0x1924(r29)
    cmpwi r12, 0x0
    beq lbl_802B4CB8
    addi r3, r31, 0x1c
    addi r4, r31, 0x22
    addi r5, r31, 0x35
    addi r6, r31, 0x25
    lbz r7, 0x83(r31)
    mtctr r12
    bctrl
lbl_802B4CB8:
    addi r30, r30, 0x1
    addi r29, r29, 0x4
    cmpwi r30, 0x2
    blt lbl_802B4C90
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x191c(r3)
    cmpwi r12, 0x0
    beq lbl_802B4CF4
    addi r3, r31, 0x1c
    addi r4, r31, 0x22
    addi r5, r31, 0x35
    li r6, 0x0
    mtctr r12
    bctrl
lbl_802B4CF4:
    lbz r5, 0x81(r31)
    li r0, -0x51
    mr r3, r28
    li r4, 0x13
    and r0, r5, r0
    stb r0, 0x81(r31)
    bl btsnd_hcic_disconnect
    b lbl_802B4DE8
lbl_802B4D14:
    sth r28, 0x18(r31)
    cmpwi r30, 0x0
    lbz r0, 0x76(r31)
    rlwinm r0, r0, 0, 24, 28
    stb r0, 0x76(r31)
    beq lbl_802B4D38
    lbz r0, 0x76(r31)
    ori r0, r0, 0x6
    stb r0, 0x76(r31)
lbl_802B4D38:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x1978(r3)
    cmplwi r0, 0x3
    bne lbl_802B4D58
    lbz r0, 0x76(r31)
    ori r0, r0, 0x2
    stb r0, 0x76(r31)
lbl_802B4D58:
    li r0, 0x0
    stb r0, 0x84(r31)
    lbz r0, 0x76(r31)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_802B4D78
    lbz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_802B4DE8
lbl_802B4D78:
    mr r3, r31
    bl btm_sec_execute_procedure
    clrlwi r0, r3, 24
    mr r4, r3
    cmplwi r0, 0x1
    beq lbl_802B4DE8
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_802B4DE8
    lbz r0, 0x80(r31)
    cmpwi r0, 0x0
    beq lbl_802B4DC8
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_802B4DC8
    lwz r0, 0x0(r3)
    cmplwi r0, 0x3
    bne lbl_802B4DC8
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_802B4DC8:
    lwz r12, 0x4(r31)
    clrlwi r5, r4, 24
    addi r3, r31, 0x1c
    lwz r4, 0x8(r31)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_802B4DE8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_disconnect
// ----------------------------------------------------------------------------
asm void btm_sec_disconnect() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl btm_find_dev_by_handle
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802B4E3C
    li r3, 0x5
    b lbl_802B4E9C
lbl_802B4E3C:
    lbz r0, 0x81(r3)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_802B4E5C
    lis r4, lbl_80453F78@ha
    li r3, 0x0
    addi r4, r4, lbl_80453F78@l
    stb r29, 0x197e(r4)
    b lbl_802B4E9C
lbl_802B4E5C:
    lbz r30, 0x7f(r3)
    cmplwi r30, 0x5
    bne lbl_802B4E70
    li r3, 0x1
    b lbl_802B4E9C
lbl_802B4E70:
    li r0, 0x5
    mr r4, r29
    stb r0, 0x7f(r3)
    mr r3, r28
    bl btsnd_hcic_disconnect
    clrlwi. r0, r3, 24
    beq lbl_802B4E94
    li r3, 0x1
    b lbl_802B4E9C
lbl_802B4E94:
    stb r30, 0x7f(r31)
    li r3, 0x3
lbl_802B4E9C:
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
// btm_sec_disconnected
// ----------------------------------------------------------------------------
asm void btm_sec_disconnected() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    bl btm_find_dev_by_handle
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_802B4FE0
    lbz r0, 0x81(r3)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_802B4F40
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lwz r12, 0x191c(r4)
    cmpwi r12, 0x0
    beq lbl_802B4F40
    cmplwi r31, 0x17
    bne lbl_802B4F28
    addi r4, r3, 0x22
    addi r5, r3, 0x35
    li r6, 0x17
    mtctr r12
    addi r3, r3, 0x1c
    bctrl
    b lbl_802B4F40
lbl_802B4F28:
    addi r4, r3, 0x22
    addi r5, r3, 0x35
    li r6, 0x5
    mtctr r12
    addi r3, r3, 0x1c
    bctrl
lbl_802B4F40:
    lis r31, lbl_80453F78@ha
    addi r31, r31, lbl_80453F78@l
    lwz r0, 0x194c(r31)
    cmpwi r0, 0x0
    beq lbl_802B4FB0
    addi r3, r31, 0x1954
    addi r4, r30, 0x1c
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802B4FB0
    addi r3, r31, 0x193c
    bl btu_stop_timer
    li r0, 0x0
    addi r3, r31, 0x1954
    stw r0, 0x194c(r31)
    li r4, 0xff
    li r5, 0x6
    bl memset
    lwz r12, 0x191c(r31)
    cmpwi r12, 0x0
    beq lbl_802B4FB0
    addi r3, r30, 0x1c
    addi r4, r30, 0x22
    addi r5, r30, 0x35
    li r6, 0xe
    mtctr r12
    bctrl
lbl_802B4FB0:
    lis r4, 0x1
    li r3, 0x0
    subi r0, r4, 0x1
    sth r0, 0x18(r30)
    stb r3, 0x7f(r30)
    lbz r0, 0x76(r30)
    rlwinm r0, r0, 0, 24, 28
    stb r0, 0x76(r30)
    lbz r0, 0x81(r30)
    rlwinm r0, r0, 0, 24, 24
    stb r0, 0x81(r30)
    stw r3, 0x4(r30)
lbl_802B4FE0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_link_key_notification
// ----------------------------------------------------------------------------
asm void btm_sec_link_key_notification() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r3
    mr r30, r4
    mr r27, r5
    bl btm_find_dev
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802B503C
    mr r3, r29
    bl btm_sec_alloc_dev
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802B518C
lbl_802B503C:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B507C
    lis r3, 0xd
    lis r4, lbl_80375188@ha
    lbz r5, 0x0(r29)
    addi r3, r3, 0x3
    lbz r6, 0x1(r29)
    addi r4, r4, lbl_80375188@l
    lbz r7, 0x2(r29)
    lbz r8, 0x3(r29)
    lbz r9, 0x4(r29)
    lbz r10, 0x5(r29)
    bl LogMsg_6
lbl_802B507C:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B50A8
    lis r3, 0xd
    lis r4, lbl_803751CC@ha
    mr r5, r27
    addi r3, r3, 0x3
    addi r4, r4, lbl_803751CC@l
    bl LogMsg_1
lbl_802B50A8:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x636(r3)
    cmplwi r0, 0x1
    bge lbl_802B50C8
    li r0, 0xff
    stb r0, 0x83(r31)
    b lbl_802B50CC
lbl_802B50C8:
    stb r27, 0x83(r31)
lbl_802B50CC:
    lbz r0, 0x76(r31)
    mr r4, r30
    addi r3, r31, 0x25
    li r5, 0x10
    ori r0, r0, 0x10
    stb r0, 0x76(r31)
    bl memcpy
    lbz r0, 0x76(r31)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_802B510C
    lbz r0, 0x81(r31)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_802B5118
    lbz r0, 0x85(r31)
    cmpwi r0, 0x0
    bne lbl_802B5118
lbl_802B510C:
    li r0, 0x1
    stb r0, 0x82(r31)
    b lbl_802B518C
lbl_802B5118:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x1914(r3)
    cmpwi r12, 0x0
    beq lbl_802B5148
    mr r3, r29
    mr r6, r30
    addi r4, r31, 0x22
    addi r5, r31, 0x35
    lbz r7, 0x83(r31)
    mtctr r12
    bctrl
lbl_802B5148:
    lis r28, lbl_80453F78@ha
    li r27, 0x0
    addi r28, r28, lbl_80453F78@l
lbl_802B5154:
    lwz r12, 0x1924(r28)
    cmpwi r12, 0x0
    beq lbl_802B517C
    mr r3, r29
    mr r6, r30
    addi r4, r31, 0x22
    addi r5, r31, 0x35
    lbz r7, 0x83(r31)
    mtctr r12
    bctrl
lbl_802B517C:
    addi r27, r27, 0x1
    addi r28, r28, 0x4
    cmpwi r27, 0x2
    blt lbl_802B5154
lbl_802B518C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_link_key_request
// ----------------------------------------------------------------------------
asm void btm_sec_link_key_request() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl btm_find_dev
    lis r4, lbl_80453F78@ha
    mr r31, r3
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x27c0(r4)
    cmplwi r0, 0x4
    blt lbl_802B5204
    lis r3, 0xd
    lis r4, lbl_803751F8@ha
    lbz r5, 0x0(r30)
    addi r3, r3, 0x3
    lbz r6, 0x1(r30)
    addi r4, r4, lbl_803751F8@l
    lbz r7, 0x2(r30)
    lbz r8, 0x3(r30)
    lbz r9, 0x4(r30)
    lbz r10, 0x5(r30)
    bl LogMsg_6
lbl_802B5204:
    cmpwi r31, 0x0
    beq lbl_802B5228
    lbz r0, 0x76(r31)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_802B5228
    mr r3, r30
    addi r4, r31, 0x25
    bl btsnd_hcic_link_key_req_reply
    b lbl_802B52BC
lbl_802B5228:
    cmpwi r31, 0x0
    bne lbl_802B523C
    mr r3, r30
    bl btm_sec_alloc_dev
    mr r31, r3
lbl_802B523C:
    lbz r0, 0x81(r31)
    rlwinm. r0, r0, 0, 25, 25
    bne lbl_802B52B4
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r12, 0x1918(r3)
    cmpwi r12, 0x0
    beq lbl_802B52B4
    cmpwi r31, 0x0
    beq lbl_802B528C
    mr r3, r30
    addi r4, r31, 0x25
    mtctr r12
    bctrl
    clrlwi. r0, r3, 24
    bne lbl_802B52B4
    mr r3, r30
    addi r4, r31, 0x25
    bl btsnd_hcic_link_key_req_reply
    b lbl_802B52BC
lbl_802B528C:
    mr r3, r30
    addi r4, r1, 0x8
    mtctr r12
    bctrl
    clrlwi. r0, r3, 24
    bne lbl_802B52B4
    mr r3, r30
    addi r4, r1, 0x8
    bl btsnd_hcic_link_key_req_reply
    b lbl_802B52BC
lbl_802B52B4:
    mr r3, r30
    bl btsnd_hcic_link_key_neg_reply
lbl_802B52BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_pin_code_request_timeout
// ----------------------------------------------------------------------------
asm void btm_sec_pin_code_request_timeout() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80453F78@ha
    addi r31, r31, lbl_80453F78@l
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x4
    blt lbl_802B530C
    lis r3, 0xd
    lis r4, lbl_80375238@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375238@l
    bl LogMsg_0
lbl_802B530C:
    li r0, 0x0
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    stw r0, 0x194c(r31)
    addi r3, r3, 0x1954
    li r4, 0xff
    li r5, 0x6
    bl memset
    addi r3, r31, 0x27b4
    bl btsnd_hcic_pin_code_neg_reply
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_pin_code_request
// ----------------------------------------------------------------------------
asm void btm_sec_pin_code_request() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r29, lbl_80453F78@ha
    lis r31, lbl_80374AA0@ha
    addi r29, r29, lbl_80453F78@l
    mr r27, r3
    lbz r0, 0x27c0(r29)
    addi r31, r31, lbl_80374AA0@l
    li r28, 0x0
    li r30, 0x0
    cmplwi r0, 0x4
    blt lbl_802B53AC
    lis r3, 0xd
    lbz r5, 0x0(r27)
    lbz r6, 0x1(r27)
    addi r3, r3, 0x3
    lbz r7, 0x2(r27)
    addi r4, r31, 0x7bc
    lbz r8, 0x3(r27)
    lbz r9, 0x4(r27)
    lbz r10, 0x5(r27)
    bl LogMsg_6
lbl_802B53AC:
    lbz r0, 0x1979(r29)
    cmpwi r0, 0x0
    bne lbl_802B5498
    lbz r0, 0x20(r29)
    cmplwi r0, 0x1
    bne lbl_802B5498
    mr r3, r27
    bl btm_find_dev
    cmpwi r3, 0x0
    bne lbl_802B5470
    lis r3, lbl_80453F78@ha
    li r0, 0x2
    addi r3, r3, lbl_80453F78@l
    addi r3, r3, 0x1f30
    mtctr r0
lbl_802B53E8:
    lbz r0, 0x76(r3)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B5470
    lbz r0, 0xfe(r3)
    addi r30, r30, 0x1
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B5470
    lbz r0, 0x186(r3)
    addi r30, r30, 0x1
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B5470
    lbz r0, 0x20e(r3)
    addi r30, r30, 0x1
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B5470
    lbz r0, 0x296(r3)
    addi r30, r30, 0x1
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B5470
    lbz r0, 0x31e(r3)
    addi r30, r30, 0x1
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B5470
    lbz r0, 0x3a6(r3)
    addi r30, r30, 0x1
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B5470
    lbz r0, 0x42e(r3)
    addi r30, r30, 0x1
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_802B5470
    addi r30, r30, 0x1
    addi r3, r3, 0x440
    bdnz lbl_802B53E8
lbl_802B5470:
    cmpwi r30, 0x10
    blt lbl_802B5484
    mr r3, r27
    bl btsnd_hcic_pin_code_neg_reply
    b lbl_802B568C
lbl_802B5484:
    lbz r4, 0x21(r29)
    mr r3, r27
    addi r5, r29, 0x22
    bl btsnd_hcic_pin_code_req_reply
    b lbl_802B568C
lbl_802B5498:
    mr r3, r27
    bl btm_find_dev
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802B54B8
    mr r3, r27
    bl btm_sec_alloc_dev
    mr r30, r3
lbl_802B54B8:
    lis r3, lbl_80453F78@ha
    mr r4, r27
    addi r3, r3, lbl_80453F78@l
    li r5, 0x6
    addi r3, r3, 0x1954
    bl memcpy
    cmpwi r30, 0x0
    beq lbl_802B5648
    mr r3, r27
    addi r4, r29, 0x27b4
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802B5500
    addi r3, r30, 0x22
    addi r4, r29, 0x27ba
    li r5, 0x3
    bl memcpy
lbl_802B5500:
    lbz r0, 0x81(r30)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_802B55A8
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B5530
    lis r3, 0xd
    addi r4, r31, 0x7fc
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802B5530:
    lbz r4, 0x197f(r29)
    mr r3, r27
    addi r5, r29, 0x1980
    bl btsnd_hcic_pin_code_req_reply
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lbz r0, 0x197b(r4)
    cmpwi r0, 0x0
    beq lbl_802B564C
    lbz r0, 0x27c0(r4)
    li r3, 0x0
    stb r3, 0x197b(r4)
    cmplwi r0, 0x5
    blt lbl_802B5588
    lbz r5, 0x1978(r4)
    lis r3, 0xd
    addi r3, r3, 0x4
    addi r4, r31, 0x82c
    subi r0, r5, 0x3
    cntlzw r0, r0
    srwi r5, r0, 5
    bl LogMsg_1
lbl_802B5588:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r3, 0x1978(r3)
    subi r0, r3, 0x3
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    bl btsnd_hcic_write_auth_enable
    b lbl_802B564C
lbl_802B55A8:
    lbz r0, 0x1979(r29)
    cmpwi r0, 0x0
    bne lbl_802B55E8
    lwz r0, 0x1910(r29)
    cmpwi r0, 0x0
    beq lbl_802B55E8
    lbz r0, 0x80(r30)
    cmpwi r0, 0x0
    bne lbl_802B55F0
    lbz r0, 0x23(r30)
    clrlwi r0, r0, 27
    cmpwi r0, 0x5
    bne lbl_802B55F0
    lbz r0, 0x24(r30)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_802B55F0
lbl_802B55E8:
    li r28, 0x1
    b lbl_802B564C
lbl_802B55F0:
    mr r4, r27
    addi r3, r29, 0x27b4
    li r5, 0x6
    bl memcpy
    addi r3, r29, 0x27ba
    addi r4, r30, 0x22
    li r5, 0x3
    bl memcpy
    lis r5, btm_sec_pin_code_request_timeout@ha
    addi r3, r29, 0x193c
    addi r5, r5, btm_sec_pin_code_request_timeout@l
    li r4, 0x16
    stw r5, 0x194c(r29)
    li r5, 0x3c
    bl btu_start_timer
    lwz r12, 0x1910(r29)
    mr r3, r27
    addi r4, r30, 0x22
    addi r5, r30, 0x35
    mtctr r12
    bctrl
    b lbl_802B564C
lbl_802B5648:
    li r28, 0x1
lbl_802B564C:
    cmpwi r28, 0x0
    beq lbl_802B568C
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x2
    blt lbl_802B5684
    lis r3, 0xd
    lbz r5, 0x1979(r29)
    lwz r6, 0x1910(r29)
    mr r7, r30
    addi r3, r3, 0x1
    addi r4, r31, 0x85c
    bl LogMsg_3
lbl_802B5684:
    mr r3, r27
    bl btsnd_hcic_pin_code_neg_reply
lbl_802B568C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_update_clock_offset
// ----------------------------------------------------------------------------
asm void btm_sec_update_clock_offset() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl btm_find_dev_by_handle
    cmpwi r3, 0x0
    beq lbl_802B56E0
    ori r31, r31, 0x8000
    sth r31, 0x1a(r3)
    addi r3, r3, 0x1c
    bl BTM_InqDbRead
    cmpwi r3, 0x0
    beq lbl_802B56E0
    sth r31, 0x0(r3)
lbl_802B56E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_execute_procedure
// ----------------------------------------------------------------------------
asm void btm_sec_execute_procedure() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x1c(r1)
    lis r31, lbl_80374AA0@ha
    addi r31, r31, lbl_80374AA0@l
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lbz r0, 0x27c0(r4)
    cmplwi r0, 0x4
    blt lbl_802B5748
    lis r3, 0xd
    lbz r5, 0x81(r30)
    lbz r6, 0x76(r30)
    addi r3, r3, 0x3
    lbz r7, 0x7f(r30)
    addi r4, r31, 0x8ac
    bl LogMsg_3
lbl_802B5748:
    lbz r0, 0x7f(r30)
    cmpwi r0, 0x0
    beq lbl_802B575C
    li r3, 0x1
    b lbl_802B5AB8
lbl_802B575C:
    lhz r0, 0x18(r30)
    cmplwi cr1, r0, 0xffff
    bne cr1, lbl_802B57C4
    addi r3, r30, 0x1c
    bl l2cu_allocate_lcb
    cmpwi r3, 0x0
    bne lbl_802B57A0
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802B5798
    lis r3, 0x8
    addi r4, r31, 0x8ec
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802B5798:
    li r3, 0x3
    b lbl_802B5AB8
lbl_802B57A0:
    bl l2cu_create_conn
    clrlwi. r0, r3, 24
    bne lbl_802B57B4
    li r3, 0x3
    b lbl_802B5AB8
lbl_802B57B4:
    li r0, 0x1
    li r3, 0x1
    stb r0, 0x80(r30)
    b lbl_802B5AB8
lbl_802B57C4:
    lbz r0, 0x76(r30)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_802B5854
    beq cr1, lbl_802B5854
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B57F8
    lis r3, 0xd
    addi r4, r31, 0x910
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802B57F8:
    lbz r29, 0x7f(r30)
    li r0, 0x3
    addi r3, r30, 0x1c
    li r4, 0x0
    stb r0, 0x7f(r30)
    li r5, 0x2
    li r6, 0x1e
    li r7, 0x0
    bl btm_initiate_rem_name
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_802B5834
    stb r29, 0x7f(r30)
    li r0, 0x0
    b lbl_802B5838
lbl_802B5834:
    li r0, 0x1
lbl_802B5838:
    cmpwi r0, 0x0
    beq lbl_802B5848
    li r3, 0x1
    b lbl_802B5AB8
lbl_802B5848:
    lbz r0, 0x76(r30)
    ori r0, r0, 0x8
    stb r0, 0x76(r30)
lbl_802B5854:
    lbz r4, 0x76(r30)
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_802B58E4
    lbz r3, 0x80(r30)
    cmpwi r3, 0x0
    beq lbl_802B5878
    lbz r0, 0x81(r30)
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_802B588C
lbl_802B5878:
    cmpwi r3, 0x0
    bne lbl_802B58E4
    lbz r0, 0x81(r30)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_802B58E4
lbl_802B588C:
    lhz r0, 0x18(r30)
    cmplwi r0, 0xffff
    beq lbl_802B58E4
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B58BC
    lis r3, 0xd
    addi r4, r31, 0x934
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802B58BC:
    li r0, 0x1
    lhz r3, 0x18(r30)
    stb r0, 0x7f(r30)
    bl btsnd_hcic_auth_request
    clrlwi. r0, r3, 24
    bne lbl_802B58DC
    li r3, 0x3
    b lbl_802B5AB8
lbl_802B58DC:
    li r3, 0x1
    b lbl_802B5AB8
lbl_802B58E4:
    rlwinm. r0, r4, 0, 29, 29
    bne lbl_802B5988
    lbz r3, 0x80(r30)
    cmpwi r3, 0x0
    beq lbl_802B5904
    lbz r0, 0x81(r30)
    rlwinm. r0, r0, 0, 26, 26
    bne lbl_802B5918
lbl_802B5904:
    cmpwi r3, 0x0
    bne lbl_802B5988
    lbz r0, 0x81(r30)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_802B5988
lbl_802B5918:
    lhz r0, 0x18(r30)
    cmplwi r0, 0xffff
    beq lbl_802B5988
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B5948
    lis r3, 0xd
    addi r4, r31, 0x95c
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802B5948:
    lhz r3, 0x18(r30)
    li r4, 0x1
    bl btsnd_hcic_set_conn_encrypt
    clrlwi. r0, r3, 24
    bne lbl_802B5964
    li r3, 0x0
    b lbl_802B5970
lbl_802B5964:
    li r0, 0x2
    li r3, 0x1
    stb r0, 0x7f(r30)
lbl_802B5970:
    cmpwi r3, 0x0
    bne lbl_802B5980
    li r3, 0x3
    b lbl_802B5AB8
lbl_802B5980:
    li r3, 0x1
    b lbl_802B5AB8
lbl_802B5988:
    clrlwi. r0, r4, 31
    bne lbl_802B5A58
    lbz r3, 0x80(r30)
    cmpwi r3, 0x0
    beq lbl_802B59A8
    lbz r0, 0x81(r30)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_802B59BC
lbl_802B59A8:
    cmpwi r3, 0x0
    bne lbl_802B5A58
    lbz r0, 0x81(r30)
    clrlwi. r0, r0, 31
    beq lbl_802B5A58
lbl_802B59BC:
    lwz r3, 0x10(r30)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_802B59D4
    li r0, 0x0
    b lbl_802B59F0
lbl_802B59D4:
    lwz r3, 0x14(r30)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_802B59EC
    li r0, 0x0
    b lbl_802B59F0
lbl_802B59EC:
    li r0, 0x1
lbl_802B59F0:
    cmpwi r0, 0x0
    bne lbl_802B5A58
    lwz r3, 0x0(r30)
    lbz r3, 0xf(r3)
    cmplwi r3, 0x2e
    bge lbl_802B5A58
    rlwinm r0, r3, 29, 27, 29
    clrlwi r4, r3, 27
    add r3, r30, r0
    li r5, 0x1
    lwz r0, 0x10(r3)
    slw r3, r5, r4
    and. r0, r3, r0
    bne lbl_802B5A58
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B5A4C
    lis r3, 0xd
    addi r4, r31, 0x980
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802B5A4C:
    mr r3, r30
    bl btm_sec_start_authorization
    b lbl_802B5AB8
lbl_802B5A58:
    lbz r0, 0x81(r30)
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    rlwinm r0, r0, 0, 24, 25
    stb r0, 0x81(r30)
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B5A90
    lis r3, 0xd
    lwz r5, 0x14(r30)
    lwz r6, 0x10(r30)
    addi r3, r3, 0x3
    addi r4, r31, 0x9a8
    bl LogMsg_2
lbl_802B5A90:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B5AB4
    lis r3, 0xd
    addi r4, r31, 0x9d0
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802B5AB4:
    li r3, 0x0
lbl_802B5AB8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_start_authorization
// ----------------------------------------------------------------------------
asm void btm_sec_start_authorization() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x76(r3)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_802B5B08
    lhz r0, 0x18(r3)
    cmplwi r0, 0xffff
    bne lbl_802B5BA0
lbl_802B5B08:
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lwz r0, 0x190c(r4)
    cmpwi r0, 0x0
    bne lbl_802B5B24
    li r3, 0x4
    b lbl_802B5BD8
lbl_802B5B24:
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_802B5B50
    lbz r0, 0x80(r3)
    cmpwi r0, 0x0
    beq lbl_802B5B44
    addi r6, r4, 0x10
    b lbl_802B5B48
lbl_802B5B44:
    addi r6, r4, 0x26
lbl_802B5B48:
    lbz r7, 0xf(r4)
    b lbl_802B5B54
lbl_802B5B50:
    li r7, 0x0
lbl_802B5B54:
    li r0, 0x4
    lis r4, lbl_80453F78@ha
    stb r0, 0x7f(r3)
    addi r4, r4, lbl_80453F78@l
    addi r5, r3, 0x35
    lbz r8, 0x80(r3)
    lwz r12, 0x190c(r4)
    addi r4, r3, 0x22
    mtctr r12
    addi r3, r3, 0x1c
    bctrl
    clrlwi. r0, r3, 24
    bne lbl_802B5BD8
    lbz r4, 0x76(r30)
    li r0, 0x0
    stb r0, 0x7f(r30)
    ori r0, r4, 0x1
    stb r0, 0x76(r30)
    b lbl_802B5BD8
lbl_802B5BA0:
    lbz r31, 0x7f(r3)
    li r0, 0x3
    li r4, 0x0
    li r5, 0x2
    stb r0, 0x7f(r3)
    li r6, 0x1e
    li r7, 0x0
    addi r3, r3, 0x1c
    bl btm_initiate_rem_name
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_802B5BD4
    stb r31, 0x7f(r30)
lbl_802B5BD4:
    li r3, 0x1
lbl_802B5BD8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btm_sec_collision_timeout
// ----------------------------------------------------------------------------
asm void btm_sec_collision_timeout() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80453F78@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80453F78@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_802B5C2C
    lis r3, 0xd
    lis r4, lbl_80375494@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375494@l
    bl LogMsg_0
lbl_802B5C2C:
    lis r31, lbl_80453F78@ha
    li r30, 0x0
    addi r31, r31, lbl_80453F78@l
    stw r30, 0x196c(r31)
    lwz r3, 0x1938(r31)
    bl btm_sec_execute_procedure
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_802B5CB8
    lwz r4, 0x1938(r31)
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_802B5CB8
    lbz r0, 0x80(r4)
    cmpwi r0, 0x0
    beq lbl_802B5C88
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_802B5C88
    lwz r0, 0x0(r4)
    cmplwi r0, 0x3
    bne lbl_802B5C88
    stw r30, 0x4(r4)
lbl_802B5C88:
    lis r31, lbl_80453F78@ha
    clrlwi r5, r3, 24
    addi r31, r31, lbl_80453F78@l
    lwz r4, 0x1938(r31)
    lwz r12, 0x4(r4)
    addi r3, r4, 0x1c
    lwz r4, 0x8(r4)
    mtctr r12
    bctrl
    lwz r3, 0x1938(r31)
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_802B5CB8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btm_read_trusted_mask
// ----------------------------------------------------------------------------
asm void btm_read_trusted_mask() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl btm_find_dev
    cmpwi r3, 0x0
    beq lbl_802B5CF0
    addi r3, r3, 0x10
    b lbl_802B5CF4
lbl_802B5CF0:
    li r3, 0x0
lbl_802B5CF4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

