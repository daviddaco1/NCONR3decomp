#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK BTM_ReadLocalDeviceAddr(M2C_UNK (*)());     /* extern */
M2C_UNK LogMsg_0();               /* extern */
M2C_UNK LogMsg_1();           /* extern */
M2C_UNK LogMsg_3();   /* extern */
M2C_UNK memcpy();                /* extern */
M2C_UNK memset();            /* extern */
void bta_dm_disable_conn_down_timer_cback();        /* static */
M2C_UNK bta_dm_local_addr_cback();                  /* static */
void bta_dm_service_search_remname_cback(); /* static */
extern s32 lbl_80341578;
extern M2C_UNK lbl_80341618;
extern M2C_UNK lbl_80341648;
extern M2C_UNK lbl_803416A8;
extern M2C_UNK lbl_80373278;
extern M2C_UNK lbl_80373298;
extern M2C_UNK lbl_803732B8;
extern M2C_UNK lbl_803732F8;
extern M2C_UNK lbl_8037330C;
extern M2C_UNK lbl_8037333C;
extern M2C_UNK lbl_80373378;
extern M2C_UNK lbl_80453AD8;
extern s32 lbl_80453B68;
struct tBTA_DM_SEARCH_CB {
    void (*p_search_cback)(int, void *);
    char pad[0x78];
};
extern struct tBTA_DM_SEARCH_CB lbl_80453B98;
extern M2C_UNK lbl_80453C14;
extern s32 lbl_80453D18;
extern M2C_UNK lbl_80453F78;
extern s8 *lbl_8049CF58;
extern s8 *lbl_8049CF5C;
extern u8 lbl_8049E000;
extern u16 lbl_804A2520;
extern u16 lbl_804A2522;
extern M2C_UNK lbl_804A2558;

void bta_dm_enable();
void bta_dm_disable();
void bta_dm_disable_timer_cback();
void bta_dm_set_dev_name();
void bta_dm_set_visibility();
void bta_dm_bond();
void bta_dm_pin_reply();
void bta_dm_auth_reply();
void bta_dm_search_start();
void bta_dm_search_cancel();
void bta_dm_discover();
void bta_dm_inq_cmpl();
void bta_dm_rmt_name();
void bta_dm_disc_rmt_name();
void bta_dm_sdp_result();
void bta_dm_disc_result();
void bta_dm_search_result();
void bta_dm_search_timer_cback();
void bta_dm_free_sdp_db();
void bta_dm_queue_search();
void bta_dm_queue_disc();
void bta_dm_search_clear_queue();
void bta_dm_search_cancel_cmpl();
void bta_dm_search_cancel_transac_cmpl();
void bta_dm_find_services();
void bta_dm_discover_next_device();
void bta_dm_sdp_callback();
void bta_dm_inq_results_cb();
void bta_dm_inq_cmpl_cb();
void bta_dm_service_search_remname_cback();
void bta_dm_remname_cback();
void bta_dm_disc_remname_cback();
void bta_dm_cancel_rmt_name();
s32 bta_dm_authorize_cback();
void bta_dm_pinname_cback();
s32 bta_dm_pin_cback();
s32 bta_dm_link_key_request_cback();
s32 bta_dm_new_link_key_cback();
s32 bta_dm_authentication_complete_cback();
void bta_dm_signal_strength_timer_cback();
void bta_dm_acl_change_cback();
void bta_dm_acl_change();
void bta_dm_rssi_cback();
void bta_dm_link_quality_cback();
s32 bta_dm_l2cap_server_compress_cback();
void bta_dm_compress_cback();
void bta_dm_rm_cback();
void bta_dm_keep_acl();
void bta_dm_reset_complete();
void bta_dm_send_hci_reset();

// bta_dm_enable: definicion C reemplazada por asm (ver abajo)


// bta_dm_disable: definicion C reemplazada por asm (ver abajo)


// bta_dm_disable_timer_cback: definicion C reemplazada por asm (ver abajo)


void bta_dm_set_dev_name(s32 arg0) {
    BTM_SetLocalDeviceName(arg0 + 8);
}

void bta_dm_set_visibility(s8 *arg0) {
    BTM_SetDiscoverability((s16) M2C_FIELD(arg0, u8 *, 8), 0, 0);
    BTM_SetConnectability((s16) M2C_FIELD(arg0, u8 *, 9), 0, 0);
}

void bta_dm_bond(s8 *arg0) {
    s32 sp8;
    s32 *temp_r3;

    temp_r3 = btm_read_trusted_mask((s32) (arg0 + 8));
    if (temp_r3 != NULL) {
        memcpy(&sp8, temp_r3, (s32 *)8);
    } else {
        memset(&sp8, 0, 8);
    }
    BTM_SecBond(arg0 + 8, M2C_FIELD(arg0, u8 *, 0xE), arg0 + 0xF, &sp8);
}

void bta_dm_pin_reply(s8 *arg0) {
    s32 sp8;
    s32 *temp_r3;

    temp_r3 = btm_read_trusted_mask((s32) (arg0 + 8));
    if (temp_r3 != NULL) {
        memcpy(&sp8, temp_r3, (s32 *)8);
    } else {
        memset(&sp8, 0, 8);
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0xE) != 0) {
        BTM_PINCodeReply(arg0 + 8, 0, M2C_FIELD(arg0, u8 *, 0xF), arg0 + 0x10, &sp8);
        return;
    }
    BTM_PINCodeReply(arg0 + 8, 0xB, 0U, NULL, &sp8);
}

// bta_dm_auth_reply: definicion C reemplazada por asm (ver abajo)


// bta_dm_search_start: definicion C reemplazada por asm (ver abajo)


// bta_dm_search_cancel: definicion C reemplazada por asm (ver abajo)


// bta_dm_discover: definicion C reemplazada por asm (ver abajo)


// bta_dm_inq_cmpl: definicion C reemplazada por asm (ver abajo)


void bta_dm_rmt_name(s32 arg0, M2C_UNK arg_sp0);

// bta_dm_disc_rmt_name: definicion C reemplazada por asm (ver abajo)


// bta_dm_sdp_result: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function bta_dm_search_cmpl:

Found bctr instruction at bta_dm_act.s line 961, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// bta_dm_disc_result: definicion C reemplazada por asm (ver abajo)


// bta_dm_search_result: definicion C reemplazada por asm (ver abajo)


// bta_dm_search_timer_cback: definicion C reemplazada por asm (ver abajo)


// bta_dm_free_sdp_db: definicion C reemplazada por asm (ver abajo)


// bta_dm_queue_search: definicion C reemplazada por asm (ver abajo)


// bta_dm_queue_disc: definicion C reemplazada por asm (ver abajo)


// bta_dm_search_clear_queue: definicion C reemplazada por asm (ver abajo)


// bta_dm_search_cancel_cmpl: definicion C reemplazada por asm (ver abajo)


// bta_dm_search_cancel_transac_cmpl: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function bta_dm_search_cancel_notify:

Found bctr instruction at bta_dm_act.s line 1199, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// bta_dm_find_services: definicion C reemplazada por asm (ver abajo)


void bta_dm_discover_next_device(void);


void bta_dm_inq_results_cb(s8 *arg0);

void bta_dm_inq_cmpl_cb(s8 *arg0) {
    s8 *temp_r3;

    temp_r3 = GKI_getbuf(0x110);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0) = 0x203;
        M2C_FIELD(temp_r3, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 1);
        bta_sys_sendmsg((s32) temp_r3);
    }
}

// bta_dm_service_search_remname_cback: definicion C reemplazada por asm (ver abajo)


// bta_dm_remname_cback: definicion C reemplazada por asm (ver abajo)


// bta_dm_disc_remname_cback: definicion C reemplazada por asm (ver abajo)


void bta_dm_cancel_rmt_name(void) {
    BTM_CancelRemoteDeviceName();
}

// bta_dm_authorize_cback: definicion C reemplazada por asm (ver abajo)


// bta_dm_pinname_cback: definicion C reemplazada por asm (ver abajo)


// bta_dm_pin_cback: definicion C reemplazada por asm (ver abajo)


s32 bta_dm_link_key_request_cback(void) {
    return 0xB;
}

// bta_dm_new_link_key_cback: definicion C reemplazada por asm (ver abajo)


// bta_dm_authentication_complete_cback: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function bta_dm_local_addr_cback:

Found bctr instruction at bta_dm_act.s line 1870, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function bta_dm_signal_strength:

Cannot find branch target bta_dm_signal_strength_timer_cback
*/

// bta_dm_signal_strength_timer_cback: definicion C reemplazada por asm (ver abajo)



void bta_dm_acl_change(s8 *arg0);

/*
Decompilation failure in function bta_dm_disable_conn_down_timer_cback:

Found bctr instruction at bta_dm_act.s line 2186, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// bta_dm_rssi_cback: definicion C reemplazada por asm (ver abajo)


// bta_dm_link_quality_cback: definicion C reemplazada por asm (ver abajo)


// bta_dm_l2cap_server_compress_cback: definicion C reemplazada por asm (ver abajo)



// bta_dm_rm_cback: definicion C reemplazada por asm (ver abajo)


// bta_dm_keep_acl: definicion C reemplazada por asm (ver abajo)


/*
Decompilation failure in function bta_dm_immediate_disable:

Found bctr instruction at bta_dm_act.s line 2605, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void bta_dm_reset_complete(void) {

}

// bta_dm_send_hci_reset: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern void BTM_DeviceAuthorized();
extern void BTM_SendHciReset();
extern void BTM_SetDefaultLinkPolicy();
extern void BTM_SetDefaultLinkSuperTout();
extern void GKI_freebuf();
extern void L2CA_RegisterCompression();
extern void _restgpr_23();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_23();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
void bta_dm_acl_change();
void bta_dm_acl_change_cback();
void bta_dm_auth_reply(s8 *arg0);
s32 bta_dm_authentication_complete_cback(s8 *arg0, s32 arg1, s32 *arg2, s32 arg3);
s32 bta_dm_authorize_cback(s8 *arg0, s32 arg2, u32 arg4);
void bta_dm_compress_cback();
void bta_dm_disable(void);
void bta_dm_disable_conn_down_timer_cback();
extern void bta_dm_disable_pm();
void bta_dm_disable_timer_cback(void);
void bta_dm_disc_remname_cback(s8 *arg0);
void bta_dm_disc_result(s32 arg0);
void bta_dm_disc_rmt_name(s8 *arg0);
void bta_dm_discover(s8 *arg0);
void bta_dm_discover_next_device();
void bta_dm_enable(s8 *arg0);
void bta_dm_find_services(s8 *arg0, M2C_UNK arg_sp0);
void bta_dm_free_sdp_db(void);
extern int bta_dm_immediate_disable();
extern void bta_dm_init_pm();
void bta_dm_inq_cmpl(s8 *arg0, M2C_UNK arg_sp0);
void bta_dm_inq_results_cb();
void bta_dm_keep_acl(s8 *arg0);
s32 bta_dm_l2cap_server_compress_cback(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0, s32 arg_sp8);
void bta_dm_link_quality_cback(s8 *arg0);
M2C_UNK bta_dm_local_addr_cback();
s32 bta_dm_new_link_key_cback(s8 *arg0, s32 arg1, s32 *arg2, s32 *arg3);
s32 bta_dm_pin_cback(u8 *arg0, s8 *arg1, u8 *arg2);
void bta_dm_pinname_cback(s8 *arg0);
void bta_dm_queue_disc(s32 *arg0);
void bta_dm_queue_search(s32 *arg0);
void bta_dm_remname_cback(s8 *arg0);
void bta_dm_rm_cback(s32 arg0, u32 arg1, u32 arg2, s8 *arg3, M2C_UNK arg_sp0);
void bta_dm_rmt_name();
void bta_dm_rssi_cback(s8 *arg0);
void bta_dm_sdp_callback();
void bta_dm_sdp_result(s8 *arg0);
void bta_dm_search_cancel(void);
void bta_dm_search_cancel_cmpl(void);
extern int bta_dm_search_cancel_notify();
void bta_dm_search_cancel_transac_cmpl(void);
void bta_dm_search_clear_queue(void);
extern int bta_dm_search_cmpl();
void bta_dm_search_result(s8 *arg0);
void bta_dm_search_start(s8 *arg0);
void bta_dm_search_timer_cback(void);
void bta_dm_send_hci_reset(void);
void bta_dm_service_search_remname_cback(s32 arg2);
extern int bta_dm_signal_strength();
void bta_dm_signal_strength_timer_cback(void);
extern void bta_sys_compress_register();
extern void bta_sys_disable();
extern void bta_sys_rm_register();
extern void bta_sys_start_timer();
extern void bta_sys_stop_timer();
extern void btsnd_hcic_write_scan_enable();
extern void fn_802A59E8();
extern void strncpy();

// asm_to_cpp: bta_dm_enable
asm void bta_dm_enable(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453B98@ha
    li r5, 0x7c
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r4, lbl_80453B98@l
    li r4, 0x0
    bl memset
    lis r3, lbl_80453D18@ha
    li r4, 0x0
    addi r3, r3, lbl_80453D18@l
    li r5, 0x2e
    bl memset
    lis r31, lbl_80341578@ha
    addi r3, r1, 0x8
    addi r4, r31, lbl_80341578@l
    li r5, 0x3
    bl memcpy
    addi r3, r1, 0x8
    bl BTM_SetDeviceClass
    lis r4, lbl_80453C14@ha
    lwz r0, 0x8(r30)
    addi r4, r4, lbl_80453C14@l
    lis r3, lbl_803416A8@ha
    stw r0, 0x50(r4)
    addi r3, r3, lbl_803416A8@l
    bl BTM_SecRegister
    addi r31, r31, lbl_80341578@l
    lhz r3, 0x8(r31)
    bl BTM_SetDefaultLinkSuperTout
    lhz r3, 0x6(r31)
    bl BTM_WritePageTimeout
    lhz r3, 0x4(r31)
    bl BTM_SetDefaultLinkPolicy
    lis r3, bta_dm_acl_change_cback@ha
    addi r3, r3, bta_dm_acl_change_cback@l
    bl BTM_AclRegisterForChanges
    lis r3, bta_dm_local_addr_cback@ha
    addi r3, r3, bta_dm_local_addr_cback@l
    bl BTM_ReadLocalDeviceAddr
    lis r3, bta_dm_rm_cback@ha
    addi r3, r3, bta_dm_rm_cback@l
    bl bta_sys_rm_register
    lis r31, bta_dm_compress_cback@ha
    addi r3, r31, bta_dm_compress_cback@l
    bl bta_sys_compress_register
    bl bta_dm_init_pm
    lis r3, lbl_80453B68@ha
    li r4, 0x0
    addi r3, r3, lbl_80453B68@l
    li r5, 0x2d
    bl memset
    addi r3, r31, bta_dm_compress_cback@l
    bl bta_sys_compress_register
    lis r3, bta_dm_l2cap_server_compress_cback@ha
    li r4, 0x0
    addi r3, r3, bta_dm_l2cap_server_compress_cback@l
    bl L2CA_RegisterCompression
    bl fn_802B6FD8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_dm_disable
asm void bta_dm_disable(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_804A2558
    li r4, 0x0
    stw r0, 0x14(r1)
    bl L2CA_SetIdleTimeoutByBdAddr
    bl bta_sys_disable
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl BTM_SetDiscoverability
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl BTM_SetConnectability
    bl bta_dm_disable_pm
    bl BTM_GetNumAclLinks
    clrlwi. r0, r3, 16
    bne lbl_802A62FC
    lis r6, bta_dm_disable_conn_down_timer_cback@ha
    lis r3, lbl_80453C14@ha
    addi r3, r3, lbl_80453C14@l
    li r4, 0x0
    addi r6, r6, bta_dm_disable_conn_down_timer_cback@l
    li r5, 0x3e8
    stw r6, 0x7c(r3)
    addi r3, r3, 0x74
    bl bta_sys_start_timer
    b lbl_802A6328
lbl_802A62FC:
    lis r6, lbl_80453C14@ha
    lis r5, bta_dm_disable_timer_cback@ha
    addi r6, r6, lbl_80453C14@l
    li r0, 0x1
    addi r5, r5, bta_dm_disable_timer_cback@l
    stb r0, 0x72(r6)
    addi r3, r6, 0x74
    li r4, 0x0
    stw r5, 0x7c(r6)
    li r5, 0x1388
    bl bta_sys_start_timer
lbl_802A6328:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_disable_timer_cback
asm void bta_dm_disable_timer_cback(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lbz r0, lbl_8049E000
    cmplwi r0, 0x4
    blt lbl_802A6368
    lis r4, lbl_80373278@ha
    li r3, 0x503
    addi r4, r4, lbl_80373278@l
    bl LogMsg_0
lbl_802A6368:
    bl BTM_GetNumAclLinks
    clrlwi. r0, r3, 16
    beq lbl_802A63B8
    lis r3, lbl_80453C14@ha
    addi r31, r3, lbl_80453C14@l
    lbz r0, 0x101(r31)
    cmpwi r0, 0x0
    bne lbl_802A63B8
    li r30, 0x0
    b lbl_802A63A4
lbl_802A6390:
    clrlwi r0, r30, 24
    mulli r0, r0, 0xb
    add r3, r31, r0
    bl btm_remove_acl
    addi r30, r30, 0x1
lbl_802A63A4:
    lbz r0, 0x4d(r31)
    clrlwi r3, r30, 24
    cmplw r3, r0
    blt lbl_802A6390
    b lbl_802A63DC
lbl_802A63B8:
    lis r5, lbl_80453C14@ha
    li r0, 0x0
    addi r5, r5, lbl_80453C14@l
    li r3, 0x1
    lwz r12, 0x50(r5)
    li r4, 0x0
    stb r0, 0x72(r5)
    mtctr r12
    bctrl
lbl_802A63DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_auth_reply
asm void bta_dm_auth_reply(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r3, 0x8
    bl btm_read_trusted_mask
    cmpwi r3, 0x0
    beq lbl_802A6588
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x8
    bl memcpy
    b lbl_802A6598
lbl_802A6588:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    bl memset
lbl_802A6598:
    lbz r0, 0xf(r31)
    cmplwi r0, 0x2
    beq lbl_802A6600
    cmpwi r0, 0x0
    bne lbl_802A65EC
    lbz r0, 0xe(r31)
    cmplwi r0, 0x17
    bgt lbl_802A65EC
    lis r3, lbl_80341648@ha
    clrlslwi r0, r0, 24, 2
    addi r3, r3, lbl_80341648@l
    addi r5, r1, 0x8
    lwzx r4, r3, r0
    li r3, 0x1
    rlwinm r0, r4, 0, 19, 26
    rlwinm r6, r4, 29, 22, 29
    subf r0, r0, r4
    lwzx r4, r5, r6
    slw r0, r3, r0
    or r0, r4, r0
    stwx r0, r5, r6
lbl_802A65EC:
    addi r3, r31, 0x8
    addi r5, r1, 0x8
    li r4, 0x0
    bl BTM_DeviceAuthorized
    b lbl_802A6610
lbl_802A6600:
    addi r3, r31, 0x8
    addi r5, r1, 0x8
    li r4, 0xb
    bl BTM_DeviceAuthorized
lbl_802A6610:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_dm_search_start
asm void bta_dm_search_start(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x0
    bl BTM_ClearInqDb
    lwz r0, 0x18(r31)
    lis r3, lbl_80453B98@ha
    lis r4, bta_dm_inq_results_cb@ha
    lis r5, bta_dm_inq_cmpl_cb@ha
    stw r0, lbl_80453B98@l(r3)
    addi r6, r3, lbl_80453B98@l
    addi r3, r31, 0x8
    addi r4, r4, bta_dm_inq_results_cb@l
    lwz r0, 0x14(r31)
    addi r5, r5, bta_dm_inq_cmpl_cb@l
    stw r0, 0x8(r6)
    bl BTM_StartInquiry
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_search_cancel
asm void bta_dm_search_cancel(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x14(r1)
    bl BTM_ClearInqDb
    bl BTM_IsInquiryActive
    clrlwi. r0, r3, 16
    beq lbl_802A66E0
    bl BTM_CancelInquiry
    lis r4, lbl_80453B98@ha
    li r3, 0x4
    lwz r12, lbl_80453B98@l(r4)
    li r4, 0x0
    mtctr r12
    bctrl
    li r3, 0x110
    bl GKI_getbuf
    cmpwi r3, 0x0
    beq lbl_802A66F8
    li r0, 0x207
    sth r0, 0x0(r3)
    bl bta_sys_sendmsg
    b lbl_802A66F8
lbl_802A66E0:
    lis r3, lbl_80453B98@ha
    addi r3, r3, lbl_80453B98@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_802A66F8
    bl BTM_CancelRemoteDeviceName
lbl_802A66F8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_discover
asm void bta_dm_discover(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80453B98@ha
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    addi r31, r4, lbl_80453B98@l
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x14(r3)
    stw r5, lbl_80453B98@l(r4)
    lis r4, bta_dm_service_search_remname_cback@ha
    lwz r5, 0x10(r3)
    addi r3, r4, bta_dm_service_search_remname_cback@l
    stw r5, 0x8(r31)
    stw r5, 0xc(r31)
    stb r0, 0x70(r31)
    stw r0, 0x10(r31)
    stb r0, 0x20(r31)
    bl BTM_SecAddRmtNameNotifyCallback
    addi r3, r31, 0x1a
    addi r4, r30, 0x8
    bl fn_802A59E8
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_802A677C
    addi r3, r31, 0x1a
    bl bta_dm_find_services
    b lbl_802A6804
lbl_802A677C:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lhz r4, 0x64c(r3)
    cmplwi r4, 0x7530
    bge lbl_802A67A0
    addi r5, r4, 0x64
    addi r3, r31, 0x58
    li r4, 0x205
    bl bta_sys_start_timer
lbl_802A67A0:
    lis r31, lbl_80453B98@ha
    lis r4, bta_dm_disc_remname_cback@ha
    addi r31, r31, lbl_80453B98@l
    addi r3, r31, 0x1a
    addi r4, r4, bta_dm_disc_remname_cback@l
    bl BTM_ReadRemoteDeviceName
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_802A6804
    addi r3, r31, 0x58
    bl bta_sys_stop_timer
    li r3, 0x110
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_802A6804
    addi r3, r3, 0x8
    addi r4, r31, 0x1a
    bl fn_802A59E8
    li r3, 0x0
    li r0, 0x204
    stb r3, 0xe(r30)
    mr r3, r30
    sth r0, 0x0(r30)
    bl bta_sys_sendmsg
lbl_802A6804:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_inq_cmpl
asm void bta_dm_inq_cmpl(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    addi r11, r1, 0x230
    bl _savegpr_27
    mr r31, r3
    li r27, 0x1
    bl BTM_InqDbFirst
    lis r28, lbl_80453B98@ha
    cmpwi r3, 0x0
    addi r29, r28, lbl_80453B98@l
    stw r3, 0x4(r29)
    beq lbl_802A69D4
    lwz r0, 0x8(r29)
    li r27, 0x0
    cmpwi r0, 0x0
    beq lbl_802A68D4
    addi r3, r3, 0x2
    bl BTM_IsAclConnectionUp
    clrlwi. r0, r3, 24
    beq lbl_802A687C
    li r0, 0x0
    stb r0, 0x78(r29)
    b lbl_802A6884
lbl_802A687C:
    li r0, 0x1
    stb r0, 0x78(r29)
lbl_802A6884:
    lis r30, lbl_80453B98@ha
    lis r3, bta_dm_service_search_remname_cback@ha
    addi r30, r30, lbl_80453B98@l
    li r29, 0x0
    stb r29, 0x79(r30)
    addi r3, r3, bta_dm_service_search_remname_cback@l
    bl BTM_SecAddRmtNameNotifyCallback
    lwz r0, 0x8(r30)
    addi r3, r30, 0x1a
    lwz r4, 0x4(r30)
    stb r29, 0x70(r30)
    addi r4, r4, 0x2
    stw r29, 0x10(r30)
    stw r0, 0xc(r30)
    stb r29, 0x20(r30)
    bl fn_802A59E8
    lwz r3, 0x4(r30)
    addi r3, r3, 0x2
    bl bta_dm_find_services
    b lbl_802A69D4
lbl_802A68D4:
    li r27, 0x1
    li r30, 0x0
    b lbl_802A69C8
lbl_802A68E0:
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_802A6918
    addi r3, r1, 0x8
    addi r4, r4, 0x2
    bl fn_802A59E8
    lwz r12, lbl_80453B98@l(r28)
    addi r4, r1, 0x8
    stb r30, 0xe(r1)
    li r3, 0x2
    stw r30, 0x108(r1)
    mtctr r12
    bctrl
    b lbl_802A69BC
lbl_802A6918:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lhz r4, 0x64c(r3)
    cmplwi r4, 0x7530
    bge lbl_802A6944
    lis r3, lbl_80453B98@ha
    addi r5, r4, 0x64
    addi r3, r3, lbl_80453B98@l
    li r4, 0x205
    addi r3, r3, 0x58
    bl bta_sys_start_timer
lbl_802A6944:
    lis r30, lbl_80453B98@ha
    lis r4, bta_dm_remname_cback@ha
    addi r30, r30, lbl_80453B98@l
    lwz r3, 0x4(r30)
    addi r4, r4, bta_dm_remname_cback@l
    addi r3, r3, 0x2
    bl BTM_ReadRemoteDeviceName
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_802A69B4
    addi r3, r30, 0x58
    bl bta_sys_stop_timer
    lwz r4, 0x4(r30)
    li r3, 0x110
    addi r28, r4, 0x2
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_802A69B4
    mr r4, r28
    addi r3, r3, 0x8
    bl fn_802A59E8
    li r3, 0x0
    li r0, 0x204
    stb r3, 0xe(r29)
    mr r3, r29
    sth r0, 0x0(r29)
    bl bta_sys_sendmsg
lbl_802A69B4:
    li r27, 0x0
    b lbl_802A69D4
lbl_802A69BC:
    lwz r3, 0x4(r29)
    bl BTM_InqDbNext
    stw r3, 0x4(r29)
lbl_802A69C8:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    bne lbl_802A68E0
lbl_802A69D4:
    cmpwi r27, 0x0
    beq lbl_802A6A08
    lis r4, lbl_80453B98@ha
    li r0, 0x0
    addi r4, r4, lbl_80453B98@l
    li r3, 0x110
    stw r0, 0x8(r4)
    bl GKI_getbuf
    cmpwi r3, 0x0
    beq lbl_802A6A08
    li r0, 0x207
    sth r0, 0x0(r3)
    bl bta_sys_sendmsg
lbl_802A6A08:
    lis r3, lbl_80453B98@ha
    lbz r0, 0x8(r31)
    lwz r12, lbl_80453B98@l(r3)
    addi r4, r1, 0x110
    stb r0, 0x110(r1)
    li r3, 0x1
    mtctr r12
    bctrl
    addi r11, r1, 0x230
    bl _restgpr_27
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

// asm_to_cpp: bta_dm_rmt_name
asm void bta_dm_rmt_name() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_27
    lis r28, lbl_80453B98@ha
    mr r31, r3
    li r27, 0x1
    li r30, 0x0
    addi r29, r28, lbl_80453B98@l
    b lbl_802A6B44
lbl_802A6A6C:
    lwz r4, 0x4(r29)
    lbz r0, 0x10(r4)
    cmpwi r0, 0x0
    beq lbl_802A6AA8
    addi r3, r1, 0x8
    addi r4, r4, 0x2
    bl fn_802A59E8
    lwz r12, lbl_80453B98@l(r28)
    addi r4, r1, 0x8
    stb r30, 0xe(r1)
    li r3, 0x2
    stw r30, 0x108(r1)
    mtctr r12
    bctrl
    b lbl_802A6B44
lbl_802A6AA8:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lhz r4, 0x64c(r3)
    cmplwi r4, 0x7530
    bge lbl_802A6ACC
    addi r5, r4, 0x64
    addi r3, r29, 0x58
    li r4, 0x205
    bl bta_sys_start_timer
lbl_802A6ACC:
    lis r30, lbl_80453B98@ha
    lis r4, bta_dm_remname_cback@ha
    addi r30, r30, lbl_80453B98@l
    lwz r3, 0x4(r30)
    addi r4, r4, bta_dm_remname_cback@l
    addi r3, r3, 0x2
    bl BTM_ReadRemoteDeviceName
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_802A6B3C
    addi r3, r30, 0x58
    bl bta_sys_stop_timer
    lwz r4, 0x4(r30)
    li r3, 0x110
    addi r28, r4, 0x2
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_802A6B3C
    mr r4, r28
    addi r3, r3, 0x8
    bl fn_802A59E8
    li r3, 0x0
    li r0, 0x204
    stb r3, 0xe(r29)
    mr r3, r29
    sth r0, 0x0(r29)
    bl bta_sys_sendmsg
lbl_802A6B3C:
    li r27, 0x0
    b lbl_802A6B58
lbl_802A6B44:
    lwz r3, 0x4(r29)
    bl BTM_InqDbNext
    cmpwi r3, 0x0
    stw r3, 0x4(r29)
    bne lbl_802A6A6C
lbl_802A6B58:
    cmpwi r27, 0x0
    beq lbl_802A6B7C
    li r3, 0x110
    bl GKI_getbuf
    cmpwi r3, 0x0
    beq lbl_802A6B7C
    li r0, 0x207
    sth r0, 0x0(r3)
    bl bta_sys_sendmsg
lbl_802A6B7C:
    lis r3, lbl_80453B98@ha
    addi r4, r31, 0x8
    lwz r12, lbl_80453B98@l(r3)
    li r3, 0x2
    mtctr r12
    bctrl
    addi r11, r1, 0x130
    bl _restgpr_27
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// asm_to_cpp: bta_dm_disc_rmt_name
asm void bta_dm_disc_rmt_name(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x110
    bl GKI_getbuf
    cmpwi r3, 0x0
    beq lbl_802A6BDC
    li r0, 0x207
    sth r0, 0x0(r3)
    bl bta_sys_sendmsg
lbl_802A6BDC:
    li r0, 0x0
    lis r5, lbl_80453B98@ha
    stw r0, 0x108(r31)
    addi r4, r31, 0x8
    li r3, 0x2
    lwz r12, lbl_80453B98@l(r5)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_sdp_result
asm void bta_dm_sdp_result(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    li r29, 0x0
    lhz r5, 0x8(r3)
    li r3, 0x0
    cmpwi r5, 0x0
    beq lbl_802A6C4C
    cmplwi r5, 0xfff0
    beq lbl_802A6C4C
    cmplwi r5, 0xfff4
    bne lbl_802A6D9C
lbl_802A6C4C:
    lis r6, lbl_80453B98@ha
    lis r4, lbl_80341618@ha
    addi r6, r6, lbl_80453B98@l
    cmplwi r5, 0xfff4
    lbz r5, 0x70(r6)
    addi r4, r4, lbl_80341618@l
    subi r0, r5, 0x1
    slwi r0, r0, 1
    lhzx r30, r4, r0
    beq lbl_802A6C8C
    lwz r3, 0x14(r6)
    mr r4, r30
    li r5, 0x0
    bl SDP_FindServiceInDb
    cmpwi r3, 0x0
    beq lbl_802A6CEC
lbl_802A6C8C:
    cmplwi r30, 0x1200
    bne lbl_802A6CBC
    cmpwi r3, 0x0
    beq lbl_802A6CC0
    lis r4, 0x1
    subi r0, r4, 0x7fff
    clrlwi r4, r0, 16
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    beq lbl_802A6CC0
    li r29, 0x1
    b lbl_802A6CC0
lbl_802A6CBC:
    li r29, 0x1
lbl_802A6CC0:
    cmpwi r29, 0x0
    beq lbl_802A6CEC
    lis r6, lbl_80453B98@ha
    li r4, 0x1
    addi r6, r6, lbl_80453B98@l
    lbz r3, 0x70(r6)
    lwz r5, 0x10(r6)
    subi r0, r3, 0x1
    slw r0, r4, r0
    or r0, r5, r0
    stw r0, 0x10(r6)
lbl_802A6CEC:
    lis r30, lbl_80453B98@ha
    addi r30, r30, lbl_80453B98@l
    lwz r3, 0x14(r30)
    bl GKI_freebuf
    lwz r0, 0xc(r30)
    li r31, 0x0
    stw r31, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_802A6D1C
    addi r3, r30, 0x1a
    bl bta_dm_find_services
    b lbl_802A6E5C
lbl_802A6D1C:
    lis r3, bta_dm_service_search_remname_cback@ha
    addi r3, r3, bta_dm_service_search_remname_cback@l
    bl BTM_SecDeleteRmtNameNotifyCallback
    li r3, 0x110
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_802A6E5C
    li r0, 0x208
    addi r4, r30, 0x1a
    sth r0, 0x0(r3)
    stb r31, 0x10c(r3)
    lwz r0, 0x10(r30)
    stw r0, 0x108(r3)
    addi r3, r3, 0x8
    bl fn_802A59E8
    lbz r0, 0x20(r30)
    addi r31, r30, 0x20
    extsb. r0, r0
    bne lbl_802A6D80
    addi r3, r30, 0x1a
    bl BTM_SecReadDevName
    cmpwi r3, 0x0
    beq lbl_802A6D80
    mr r31, r3
lbl_802A6D80:
    mr r4, r31
    addi r3, r29, 0xe
    li r5, 0x20
    bl strncpy
    mr r3, r29
    bl bta_sys_sendmsg
    b lbl_802A6E5C
lbl_802A6D9C:
    cmplwi r5, 0xfff1
    beq lbl_802A6DB4
    addi r0, r5, 0xa
    clrlwi r0, r0, 16
    cmplwi r0, 0x1
    bgt lbl_802A6DC4
lbl_802A6DB4:
    lis r3, lbl_80453B98@ha
    li r0, 0x0
    addi r3, r3, lbl_80453B98@l
    stb r0, 0x78(r3)
lbl_802A6DC4:
    lis r31, lbl_80453B98@ha
    addi r31, r31, lbl_80453B98@l
    lwz r3, 0x14(r31)
    bl GKI_freebuf
    li r0, 0x0
    lis r3, bta_dm_service_search_remname_cback@ha
    stw r0, 0x14(r31)
    addi r3, r3, bta_dm_service_search_remname_cback@l
    bl BTM_SecDeleteRmtNameNotifyCallback
    li r3, 0x110
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_802A6E5C
    li r4, 0x208
    li r0, 0x1
    sth r4, 0x0(r3)
    addi r4, r31, 0x1a
    stb r0, 0x10c(r3)
    lwz r0, 0x10(r31)
    stw r0, 0x108(r3)
    addi r3, r3, 0x8
    bl fn_802A59E8
    lbz r0, 0x20(r31)
    addi r30, r31, 0x20
    extsb. r0, r0
    bne lbl_802A6E44
    addi r3, r31, 0x1a
    bl BTM_SecReadDevName
    cmpwi r3, 0x0
    beq lbl_802A6E44
    mr r30, r3
lbl_802A6E44:
    mr r4, r30
    addi r3, r29, 0xe
    li r5, 0x20
    bl strncpy
    mr r3, r29
    bl bta_sys_sendmsg
lbl_802A6E5C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

int bta_dm_search_cmpl(void) {
    lbl_80453B98.p_search_cback(3, (void *)0);
}

// asm_to_cpp: bta_dm_disc_result
asm void bta_dm_disc_result(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80453B98@ha
    stw r0, 0x14(r1)
    lwz r12, lbl_80453B98@l(r4)
    addi r4, r3, 0x8
    li r3, 0x2
    mtctr r12
    bctrl
    li r3, 0x110
    bl GKI_getbuf
    cmpwi r3, 0x0
    beq lbl_802A6ED0
    li r0, 0x207
    sth r0, 0x0(r3)
    bl bta_sys_sendmsg
lbl_802A6ED0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_search_result
asm void bta_dm_search_result(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x108(r3)
    cmpwi r0, 0x0
    beq lbl_802A6F10
    lis r5, lbl_80453B98@ha
    addi r4, r3, 0x8
    lwz r12, lbl_80453B98@l(r5)
    li r3, 0x2
    mtctr r12
    bctrl
lbl_802A6F10:
    lis r6, lbl_80453B98@ha
    addi r6, r6, lbl_80453B98@l
    lbz r0, 0x78(r6)
    cmpwi r0, 0x0
    bne lbl_802A6F34
    li r0, 0x0
    stb r0, 0x78(r6)
    bl bta_dm_discover_next_device
    b lbl_802A6F58
lbl_802A6F34:
    lis r5, bta_dm_search_timer_cback@ha
    li r0, 0x1
    addi r5, r5, bta_dm_search_timer_cback@l
    stb r0, 0x79(r6)
    addi r3, r6, 0x40
    li r4, 0x0
    stw r5, 0x48(r6)
    li r5, 0xbb8
    bl bta_sys_start_timer
lbl_802A6F58:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_search_timer_cback
asm void bta_dm_search_timer_cback(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, lbl_8049E000
    cmplwi r0, 0x4
    blt lbl_802A6F90
    lis r4, lbl_80373298@ha
    li r3, 0x503
    addi r4, r4, lbl_80373298@l
    bl LogMsg_0
lbl_802A6F90:
    lis r3, lbl_80453B98@ha
    li r0, 0x0
    addi r3, r3, lbl_80453B98@l
    stb r0, 0x78(r3)
    bl bta_dm_discover_next_device
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_free_sdp_db
asm void bta_dm_free_sdp_db(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80453B98@ha
    addi r31, r31, lbl_80453B98@l
    lwz r3, 0x14(r31)
    cmpwi r3, 0x0
    beq lbl_802A6FE4
    bl GKI_freebuf
    li r0, 0x0
    stw r0, 0x14(r31)
lbl_802A6FE4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_queue_search
asm void bta_dm_queue_search(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x1c
    bl GKI_getbuf
    lis r6, lbl_80453B98@ha
    mr r4, r31
    addi r6, r6, lbl_80453B98@l
    li r5, 0x1c
    stw r3, 0x74(r6)
    bl memcpy
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_queue_disc
asm void bta_dm_queue_disc(s32 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x18
    bl GKI_getbuf
    lis r6, lbl_80453B98@ha
    mr r4, r31
    addi r6, r6, lbl_80453B98@l
    li r5, 0x18
    stw r3, 0x74(r6)
    bl memcpy
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_search_clear_queue
asm void bta_dm_search_clear_queue(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80453B98@ha
    addi r31, r31, lbl_80453B98@l
    lwz r3, 0x74(r31)
    cmpwi r3, 0x0
    beq lbl_802A70B8
    bl GKI_freebuf
    li r0, 0x0
    stw r0, 0x74(r31)
lbl_802A70B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_search_cancel_cmpl
asm void bta_dm_search_cancel_cmpl(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80453B98@ha
    addi r31, r31, lbl_80453B98@l
    lwz r3, 0x74(r31)
    cmpwi r3, 0x0
    beq lbl_802A70FC
    bl bta_sys_sendmsg
    li r0, 0x0
    stw r0, 0x74(r31)
lbl_802A70FC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_search_cancel_transac_cmpl
asm void bta_dm_search_cancel_transac_cmpl(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80453B98@ha
    addi r31, r31, lbl_80453B98@l
    lwz r3, 0x14(r31)
    cmpwi r3, 0x0
    beq lbl_802A7140
    bl GKI_freebuf
    li r0, 0x0
    stw r0, 0x14(r31)
lbl_802A7140:
    lis r4, lbl_80453B98@ha
    li r3, 0x4
    lwz r12, lbl_80453B98@l(r4)
    li r4, 0x0
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

int bta_dm_search_cancel_notify(void) {
    lbl_80453B98.p_search_cback(4, (void *)0);
}

// asm_to_cpp: bta_dm_find_services
asm void bta_dm_find_services(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_23
    lhz r4, lbl_804A2520
    lis r26, lbl_80453B98@ha
    lhz r0, lbl_804A2522
    lis r25, lbl_80341618@ha
    sth r4, 0x8(r1)
    mr r30, r3
    addi r25, r25, lbl_80341618@l
    addi r26, r26, lbl_80453B98@l
    sth r0, 0xa(r1)
    li r31, 0x1
    li r23, 0x1
    li r24, 0x2
    lis r27, bta_dm_sdp_callback@ha
    li r28, 0x0
    li r29, 0x17
    b lbl_802A7290
lbl_802A71D8:
    lwz r3, 0xc(r26)
    slw r0, r23, r0
    and. r0, r3, r0
    beq lbl_802A7284
    li r3, 0xfa
    bl GKI_getbuf
    cmpwi r3, 0x0
    stw r3, 0x14(r26)
    beq lbl_802A7284
    lbz r3, 0x70(r26)
    lwz r4, 0xc(r26)
    slwi r0, r3, 1
    slw r3, r23, r3
    lhzx r0, r25, r0
    andc r3, r4, r3
    stw r3, 0xc(r26)
    cmplwi r0, 0x1200
    sth r24, 0xc(r1)
    sth r0, 0x10(r1)
    bne lbl_802A722C
    li r31, 0x2
lbl_802A722C:
    lwz r3, 0x14(r26)
    mr r7, r31
    addi r6, r1, 0xc
    addi r8, r1, 0x8
    li r4, 0xfa
    li r5, 0x1
    bl SDP_InitDiscoveryDb
    lwz r4, 0x14(r26)
    mr r3, r30
    addi r5, r27, bta_dm_sdp_callback@l
    bl SDP_ServiceSearchAttributeRequest
    clrlwi. r0, r3, 24
    bne lbl_802A7274
    lwz r3, 0x14(r26)
    bl GKI_freebuf
    stw r28, 0x14(r26)
    stb r29, 0x70(r26)
    b lbl_802A7284
lbl_802A7274:
    lbz r3, 0x70(r26)
    addi r0, r3, 0x1
    stb r0, 0x70(r26)
    b lbl_802A730C
lbl_802A7284:
    lbz r3, 0x70(r26)
    addi r0, r3, 0x1
    stb r0, 0x70(r26)
lbl_802A7290:
    lbz r0, 0x70(r26)
    cmplwi r0, 0x17
    blt lbl_802A71D8
    blt lbl_802A730C
    li r3, 0x110
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_802A730C
    li r0, 0x208
    addi r4, r26, 0x1a
    sth r0, 0x0(r3)
    lwz r0, 0x10(r26)
    stw r0, 0x108(r3)
    addi r3, r3, 0x8
    bl fn_802A59E8
    lbz r0, 0x20(r26)
    addi r23, r26, 0x20
    extsb. r0, r0
    bne lbl_802A72F4
    addi r3, r26, 0x1a
    bl BTM_SecReadDevName
    cmpwi r3, 0x0
    beq lbl_802A72F4
    mr r23, r3
lbl_802A72F4:
    mr r4, r23
    addi r3, r24, 0xe
    li r5, 0x20
    bl strncpy
    mr r3, r24
    bl bta_sys_sendmsg
lbl_802A730C:
    addi r11, r1, 0x50
    bl _restgpr_23
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: bta_dm_discover_next_device
asm void bta_dm_discover_next_device() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_80453B98@ha
    addi r30, r30, lbl_80453B98@l
    lwz r3, 0x4(r30)
    bl BTM_InqDbNext
    cmpwi r3, 0x0
    stw r3, 0x4(r30)
    beq lbl_802A73C8
    addi r3, r3, 0x2
    bl BTM_IsAclConnectionUp
    clrlwi. r0, r3, 24
    beq lbl_802A7370
    li r0, 0x0
    stb r0, 0x78(r30)
    b lbl_802A7378
lbl_802A7370:
    li r0, 0x1
    stb r0, 0x78(r30)
lbl_802A7378:
    lis r31, lbl_80453B98@ha
    lis r3, bta_dm_service_search_remname_cback@ha
    addi r31, r31, lbl_80453B98@l
    li r30, 0x0
    stb r30, 0x79(r31)
    addi r3, r3, bta_dm_service_search_remname_cback@l
    bl BTM_SecAddRmtNameNotifyCallback
    lwz r0, 0x8(r31)
    addi r3, r31, 0x1a
    lwz r4, 0x4(r31)
    stb r30, 0x70(r31)
    addi r4, r4, 0x2
    stw r30, 0x10(r31)
    stb r30, 0x20(r31)
    stw r0, 0xc(r31)
    bl fn_802A59E8
    lwz r3, 0x4(r31)
    addi r3, r3, 0x2
    bl bta_dm_find_services
    b lbl_802A73EC
lbl_802A73C8:
    li r0, 0x0
    li r3, 0x110
    stw r0, 0x8(r30)
    bl GKI_getbuf
    cmpwi r3, 0x0
    beq lbl_802A73EC
    li r0, 0x207
    sth r0, 0x0(r3)
    bl bta_sys_sendmsg
lbl_802A73EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_sdp_callback
asm void bta_dm_sdp_callback() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0xa
    bl GKI_getbuf
    cmpwi r3, 0x0
    beq lbl_802A7438
    li r0, 0x206
    sth r0, 0x0(r3)
    sth r31, 0x8(r3)
    bl bta_sys_sendmsg
lbl_802A7438:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_inq_results_cb
asm void bta_dm_inq_results_cb() {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    addi r4, r31, 0x2
    bl fn_802A59E8
    addi r3, r1, 0xe
    addi r4, r31, 0x8
    li r5, 0x3
    bl memcpy
    lbz r0, 0xe(r31)
    addi r3, r31, 0x2
    stb r0, 0x11(r1)
    bl BTM_InqDbRead
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802A74A0
    li r0, 0x0
    stb r0, 0x12(r1)
lbl_802A74A0:
    lis r3, lbl_80453B98@ha
    addi r4, r1, 0x8
    lwz r12, lbl_80453B98@l(r3)
    li r3, 0x0
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    beq lbl_802A74C8
    lbz r0, 0x12(r1)
    stb r0, 0x10(r31)
lbl_802A74C8:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// asm_to_cpp: bta_dm_service_search_remname_cback
asm void bta_dm_service_search_remname_cback(s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80453B98@ha
    mr r4, r5
    addi r3, r3, lbl_80453B98@l
    stw r0, 0x14(r1)
    li r5, 0x1f
    addi r3, r3, 0x20
    bl strncpy
    lis r3, bta_dm_service_search_remname_cback@ha
    addi r3, r3, bta_dm_service_search_remname_cback@l
    bl BTM_SecDeleteRmtNameNotifyCallback
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_remname_cback
asm void bta_dm_remname_cback(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80453B98@ha
    addi r31, r31, lbl_80453B98@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r31, 0x58
    bl bta_sys_stop_timer
    li r3, 0x110
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_802A75D8
    lwz r4, 0x4(r31)
    addi r3, r3, 0x8
    addi r4, r4, 0x2
    bl fn_802A59E8
    addi r3, r30, 0xe
    addi r4, r29, 0x4
    li r5, 0x20
    bl strncpy
    li r0, 0x204
    mr r3, r30
    sth r0, 0x0(r30)
    bl bta_sys_sendmsg
lbl_802A75D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_dm_disc_remname_cback
asm void bta_dm_disc_remname_cback(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80453B98@ha
    addi r31, r31, lbl_80453B98@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r31, 0x58
    bl bta_sys_stop_timer
    li r3, 0x110
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_802A7660
    addi r3, r3, 0x8
    addi r4, r31, 0x1a
    bl fn_802A59E8
    addi r3, r30, 0xe
    addi r4, r29, 0x4
    li r5, 0x20
    bl strncpy
    li r0, 0x204
    mr r3, r30
    sth r0, 0x0(r30)
    bl bta_sys_sendmsg
lbl_802A7660:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_dm_authorize_cback
asm s32 bta_dm_authorize_cback(s8 *arg0, s32 arg2, u32 arg4) {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    mr r4, r3
    stw r0, 0x134(r1)
    addi r3, r1, 0x8
    stw r31, 0x12c(r1)
    li r31, 0x1
    stw r30, 0x128(r1)
    mr r30, r7
    stw r29, 0x124(r1)
    mr r29, r5
    bl fn_802A59E8
    mr r4, r29
    addi r3, r1, 0xe
    li r5, 0x20
    bl strncpy
    lis r3, lbl_80341648@ha
    li r0, 0x17
    addi r3, r3, lbl_80341648@l
    mtctr r0
lbl_802A76D0:
    clrlslwi r0, r31, 24, 2
    lwzx r0, r3, r0
    cmplw r30, r0
    bne lbl_802A76E8
    stb r31, 0x106(r1)
    b lbl_802A76F0
lbl_802A76E8:
    addi r31, r31, 0x1
    bdnz lbl_802A76D0
lbl_802A76F0:
    lis r3, lbl_80453C14@ha
    addi r3, r3, lbl_80453C14@l
    lwz r12, 0x50(r3)
    cmpwi r12, 0x0
    beq lbl_802A7728
    clrlwi r0, r31, 24
    cmplwi r0, 0x17
    bgt lbl_802A7728
    addi r4, r1, 0x8
    li r3, 0x4
    mtctr r12
    bctrl
    li r3, 0x1
    b lbl_802A772C
lbl_802A7728:
    li r3, 0xb
lbl_802A772C:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// asm_to_cpp: bta_dm_pinname_cback
asm void bta_dm_pinname_cback(s8 *arg0) {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    lis r31, lbl_80453C14@ha
    addi r31, r31, lbl_80453C14@l
    stw r30, 0x118(r1)
    mr r30, r3
    addi r3, r1, 0x8
    addi r4, r31, 0xf8
    bl fn_802A59E8
    lbz r4, 0xfe(r31)
    cmpwi r30, 0x0
    lbz r3, 0xff(r31)
    lbz r0, 0x100(r31)
    stb r4, 0x106(r1)
    stb r3, 0x107(r1)
    stb r0, 0x108(r1)
    beq lbl_802A77CC
    lhz r0, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_802A77CC
    lhz r0, 0x2(r30)
    addi r3, r1, 0xe
    addi r4, r30, 0x4
    li r5, 0x20
    cmplwi r0, 0x20
    bge lbl_802A77BC
    mr r5, r0
lbl_802A77BC:
    bl memcpy
    li r0, 0x0
    stb r0, 0x2e(r1)
    b lbl_802A77D4
lbl_802A77CC:
    li r0, 0x0
    stb r0, 0xe(r1)
lbl_802A77D4:
    lis r5, lbl_80453C14@ha
    addi r4, r1, 0x8
    addi r5, r5, lbl_80453C14@l
    li r3, 0x2
    lwz r12, 0x50(r5)
    mtctr r12
    bctrl
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// asm_to_cpp: bta_dm_pin_cback
asm s32 bta_dm_pin_cback(u8 *arg0, s8 *arg1, u8 *arg2) {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stw r31, 0x12c(r1)
    lis r31, lbl_80453C14@ha
    addi r31, r31, lbl_80453C14@l
    stw r30, 0x128(r1)
    mr r30, r5
    stw r29, 0x124(r1)
    mr r29, r4
    stw r28, 0x120(r1)
    mr r28, r3
    lwz r0, 0x50(r31)
    cmpwi r0, 0x0
    bne lbl_802A784C
    li r3, 0xb
    b lbl_802A7918
lbl_802A784C:
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    bne lbl_802A78BC
    mr r4, r28
    addi r3, r31, 0xf8
    bl fn_802A59E8
    lbz r0, 0x0(r29)
    lis r4, bta_dm_pinname_cback@ha
    mr r3, r28
    stb r0, 0xfe(r31)
    addi r4, r4, bta_dm_pinname_cback@l
    lbz r0, 0x1(r29)
    stb r0, 0xff(r31)
    lbz r0, 0x2(r29)
    stb r0, 0x100(r31)
    bl BTM_ReadRemoteDeviceName
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_802A78A0
    li r3, 0x1
    b lbl_802A7918
lbl_802A78A0:
    lbz r0, lbl_8049E000
    cmplwi r0, 0x2
    blt lbl_802A78BC
    lis r4, lbl_803732B8@ha
    li r3, 0x501
    addi r4, r4, lbl_803732B8@l
    bl LogMsg_0
lbl_802A78BC:
    mr r4, r28
    addi r3, r1, 0x8
    bl fn_802A59E8
    lbz r0, 0x0(r29)
    mr r4, r30
    addi r3, r1, 0xe
    li r5, 0x20
    stb r0, 0x106(r1)
    lbz r0, 0x1(r29)
    stb r0, 0x107(r1)
    lbz r0, 0x2(r29)
    stb r0, 0x108(r1)
    bl strncpy
    lis r3, lbl_80453C14@ha
    li r0, 0x0
    addi r3, r3, lbl_80453C14@l
    stb r0, 0x2e(r1)
    lwz r12, 0x50(r3)
    addi r4, r1, 0x8
    li r3, 0x2
    mtctr r12
    bctrl
    li r3, 0x1
lbl_802A7918:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    lwz r28, 0x120(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// asm_to_cpp: bta_dm_new_link_key_cback
asm s32 bta_dm_new_link_key_cback(s8 *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    mr r4, r3
    stw r0, 0x124(r1)
    addi r3, r1, 0x8
    stw r31, 0x11c(r1)
    mr r31, r6
    stw r30, 0x118(r1)
    mr r30, r5
    bl fn_802A59E8
    mr r4, r30
    addi r3, r1, 0xe
    li r5, 0x1f
    bl memcpy
    li r0, 0x0
    mr r4, r31
    stb r0, 0x2d(r1)
    addi r3, r1, 0x107
    li r5, 0x10
    bl memcpy
    lis r3, lbl_80453C14@ha
    li r0, 0x1
    addi r3, r3, lbl_80453C14@l
    stb r0, 0x106(r1)
    lwz r12, 0x50(r3)
    stb r0, 0x117(r1)
    cmpwi r12, 0x0
    beq lbl_802A79C0
    addi r4, r1, 0x8
    li r3, 0x3
    mtctr r12
    bctrl
lbl_802A79C0:
    lwz r31, 0x11c(r1)
    li r3, 0x1
    lwz r30, 0x118(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// asm_to_cpp: bta_dm_authentication_complete_cback
asm s32 bta_dm_authentication_complete_cback(s8 *arg0, s32 arg1, s32 *arg2, s32 arg3) {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r5
    beq lbl_802A7A48
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_802A59E8
    mr r4, r31
    addi r3, r1, 0xe
    li r5, 0x1f
    bl memcpy
    lis r3, lbl_80453C14@ha
    li r0, 0x0
    addi r3, r3, lbl_80453C14@l
    stb r0, 0x2d(r1)
    lwz r12, 0x50(r3)
    stb r0, 0x117(r1)
    cmpwi r12, 0x0
    stb r0, 0x106(r1)
    beq lbl_802A7A48
    addi r4, r1, 0x8
    li r3, 0x3
    mtctr r12
    bctrl
lbl_802A7A48:
    lwz r31, 0x11c(r1)
    li r3, 0x0
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// asm_to_cpp: bta_dm_local_addr_cback
asm M2C_UNK bta_dm_local_addr_cback() {
    nofralloc
    lis r4, lbl_80453C14@ha
    addi r4, r4, lbl_80453C14@l
    lwz r12, 0x50(r4)
    cmpwi r12, 0x0
    beqlr
    mr r4, r3
    li r3, 0x0
    mtctr r12
    bctr
    blr
}

// asm_to_cpp: bta_dm_signal_strength
asm int bta_dm_signal_strength() {
    nofralloc
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_802A7AB4
    lis r4, lbl_80453C14@ha
    lbz r0, 0x8(r3)
    addi r4, r4, lbl_80453C14@l
    stb r0, 0x6c(r4)
    lhz r0, 0xa(r3)
    li r3, 0x0
    sth r0, 0x70(r4)
    b bta_dm_signal_strength_timer_cback
lbl_802A7AB4:
    lis r3, lbl_80453C14@ha
    addi r3, r3, lbl_80453C14@l
    addi r3, r3, 0x54
    b bta_sys_stop_timer
}

// asm_to_cpp: bta_dm_signal_strength_timer_cback
asm void bta_dm_signal_strength_timer_cback(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_80453C14@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, lbl_80453C14@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r0, 0x6c(r31)
    clrlwi. r0, r0, 31
    beq lbl_802A7B24
    li r29, 0x0
    lis r30, bta_dm_rssi_cback@ha
    b lbl_802A7B14
lbl_802A7AFC:
    clrlwi r0, r29, 24
    addi r4, r30, bta_dm_rssi_cback@l
    mulli r0, r0, 0xb
    add r3, r31, r0
    bl BTM_ReadRSSI
    addi r29, r29, 0x1
lbl_802A7B14:
    lbz r0, 0x4d(r31)
    clrlwi r3, r29, 24
    cmplw r3, r0
    blt lbl_802A7AFC
lbl_802A7B24:
    lis r3, lbl_80453C14@ha
    addi r30, r3, lbl_80453C14@l
    lbz r0, 0x6c(r30)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_802A7B6C
    li r29, 0x0
    lis r31, bta_dm_link_quality_cback@ha
    b lbl_802A7B5C
lbl_802A7B44:
    clrlwi r0, r29, 24
    addi r4, r31, bta_dm_link_quality_cback@l
    mulli r0, r0, 0xb
    add r3, r30, r0
    bl BTM_ReadLinkQuality
    addi r29, r29, 0x1
lbl_802A7B5C:
    lbz r0, 0x4d(r30)
    clrlwi r3, r29, 24
    cmplw r3, r0
    blt lbl_802A7B44
lbl_802A7B6C:
    lis r7, lbl_80453C14@ha
    addi r7, r7, lbl_80453C14@l
    lhz r0, 0x70(r7)
    cmpwi r0, 0x0
    beq lbl_802A7B9C
    lis r6, bta_dm_signal_strength_timer_cback@ha
    addi r3, r7, 0x54
    addi r6, r6, bta_dm_signal_strength_timer_cback@l
    li r4, 0x0
    mulli r5, r0, 0x3e8
    stw r6, 0x5c(r7)
    bl bta_sys_start_timer
lbl_802A7B9C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_dm_acl_change_cback
asm void bta_dm_acl_change_cback() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r7
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x12
    bl GKI_getbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802A7C0C
    mr r4, r29
    addi r3, r3, 0xb
    bl fn_802A59E8
    stb r30, 0xa(r31)
    li r0, 0x105
    mr r3, r31
    sth r0, 0x0(r31)
    bl bta_sys_sendmsg
lbl_802A7C0C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_dm_acl_change
asm void bta_dm_acl_change() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stw r31, 0x12c(r1)
    addi r31, r3, 0xb
    stw r30, 0x128(r1)
    stw r29, 0x124(r1)
    lbz r0, 0xa(r3)
    cmpwi r0, 0x0
    beq lbl_802A7D0C
    lis r3, lbl_80453C14@ha
    li r29, 0x0
    addi r30, r3, lbl_80453C14@l
    b lbl_802A7C80
lbl_802A7C60:
    clrlwi r0, r29, 24
    mr r4, r31
    mulli r0, r0, 0xb
    add r3, r30, r0
    bl fn_802A5A1C
    cmpwi r3, 0x0
    beq lbl_802A7C90
    addi r29, r29, 0x1
lbl_802A7C80:
    lbz r0, 0x4d(r30)
    clrlwi r3, r29, 24
    cmplw r3, r0
    blt lbl_802A7C60
lbl_802A7C90:
    lis r30, lbl_80453C14@ha
    clrlwi r0, r29, 24
    addi r30, r30, lbl_80453C14@l
    lbz r3, 0x4d(r30)
    cmplw r0, r3
    bne lbl_802A7CC4
    mulli r0, r3, 0xb
    mr r4, r31
    add r3, r30, r0
    bl fn_802A59E8
    lbz r3, 0x4d(r30)
    addi r0, r3, 0x1
    stb r0, 0x4d(r30)
lbl_802A7CC4:
    clrlwi r0, r29, 24
    lis r30, lbl_80453C14@ha
    mulli r4, r0, 0xb
    li r3, 0x1
    addi r30, r30, lbl_80453C14@l
    li r0, 0x0
    add r5, r30, r4
    stb r3, 0x6(r5)
    mr r4, r31
    addi r3, r1, 0x8
    stb r0, 0x7(r5)
    bl fn_802A59E8
    lwz r12, 0x50(r30)
    addi r4, r1, 0x8
    li r3, 0x5
    mtctr r12
    bctrl
    b lbl_802A7E8C
lbl_802A7D0C:
    lis r3, lbl_80453C14@ha
    li r29, 0x0
    addi r30, r3, lbl_80453C14@l
    b lbl_802A7D80
lbl_802A7D1C:
    clrlwi r0, r29, 24
    mr r4, r31
    mulli r0, r0, 0xb
    add r3, r30, r0
    bl fn_802A5A1C
    cmpwi r3, 0x0
    bne lbl_802A7D7C
    lis r3, lbl_80453C14@ha
    addi r30, r3, lbl_80453C14@l
    b lbl_802A7D68
lbl_802A7D44:
    clrlwi r3, r29, 24
    li r5, 0xb
    addi r0, r3, 0x1
    mulli r3, r3, 0xb
    mulli r0, r0, 0xb
    add r3, r30, r3
    add r4, r30, r0
    bl memcpy
    addi r29, r29, 0x1
lbl_802A7D68:
    lbz r0, 0x4d(r30)
    clrlwi r3, r29, 24
    cmplw r3, r0
    blt lbl_802A7D44
    b lbl_802A7D90
lbl_802A7D7C:
    addi r29, r29, 0x1
lbl_802A7D80:
    lbz r0, 0x4d(r30)
    clrlwi r3, r29, 24
    cmplw r3, r0
    blt lbl_802A7D1C
lbl_802A7D90:
    lis r4, lbl_80453C14@ha
    lis r30, lbl_80453B98@ha
    addi r4, r4, lbl_80453C14@l
    addi r30, r30, lbl_80453B98@l
    lbz r3, 0x4d(r4)
    lbz r0, 0x78(r30)
    subi r3, r3, 0x1
    cmpwi r0, 0x0
    stb r3, 0x4d(r4)
    beq lbl_802A7E10
    mr r4, r31
    addi r3, r30, 0x1a
    bl fn_802A5A1C
    cmpwi r3, 0x0
    bne lbl_802A7E10
    lbz r0, 0x79(r30)
    li r3, 0x0
    stb r3, 0x78(r30)
    cmpwi r0, 0x0
    beq lbl_802A7E10
    lbz r0, lbl_8049E000
    cmplwi r0, 0x4
    blt lbl_802A7DFC
    lis r4, lbl_803732F8@ha
    li r3, 0x503
    addi r4, r4, lbl_803732F8@l
    bl LogMsg_0
lbl_802A7DFC:
    lis r3, lbl_80453B98@ha
    addi r3, r3, lbl_80453B98@l
    addi r3, r3, 0x40
    bl bta_sys_stop_timer
    bl bta_dm_discover_next_device
lbl_802A7E10:
    lis r30, lbl_80453C14@ha
    addi r30, r30, lbl_80453C14@l
    lbz r0, 0x72(r30)
    cmpwi r0, 0x0
    beq lbl_802A7E5C
    bl BTM_GetNumAclLinks
    clrlwi. r0, r3, 16
    bne lbl_802A7E5C
    li r0, 0x0
    addi r3, r30, 0x74
    stb r0, 0x72(r30)
    bl bta_sys_stop_timer
    lis r5, bta_dm_disable_conn_down_timer_cback@ha
    addi r3, r30, 0x74
    addi r5, r5, bta_dm_disable_conn_down_timer_cback@l
    li r4, 0x0
    stw r5, 0x7c(r30)
    li r5, 0x3e8
    bl bta_sys_start_timer
lbl_802A7E5C:
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_802A59E8
    bl btm_get_acl_disc_reason_code
    lis r5, lbl_80453C14@ha
    stb r3, 0xe(r1)
    addi r5, r5, lbl_80453C14@l
    addi r4, r1, 0x8
    lwz r12, 0x50(r5)
    li r3, 0x6
    mtctr r12
    bctrl
lbl_802A7E8C:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// asm_to_cpp: bta_dm_disable_conn_down_timer_cback
asm void bta_dm_disable_conn_down_timer_cback() {
    nofralloc
    lis r5, lbl_80453C14@ha
    li r3, 0x1
    addi r5, r5, lbl_80453C14@l
    li r4, 0x0
    lwz r12, 0x50(r5)
    mtctr r12
    bctr
}

// asm_to_cpp: bta_dm_rssi_cback
asm void bta_dm_rssi_cback(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_802A7F1C
    addi r3, r1, 0x8
    addi r4, r31, 0x3
    bl fn_802A59E8
    li r0, 0x1
    lis r3, lbl_80453C14@ha
    stb r0, 0xe(r1)
    addi r3, r3, lbl_80453C14@l
    lwz r12, 0x50(r3)
    addi r4, r1, 0x8
    lbz r0, 0x2(r31)
    li r3, 0x7
    stb r0, 0xf(r1)
    mtctr r12
    bctrl
lbl_802A7F1C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_dm_link_quality_cback
asm void bta_dm_link_quality_cback(s8 *arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_802A7F88
    addi r3, r1, 0x8
    addi r4, r31, 0x3
    bl fn_802A59E8
    li r0, 0x2
    lis r3, lbl_80453C14@ha
    stb r0, 0xe(r1)
    addi r3, r3, lbl_80453C14@l
    lwz r12, 0x50(r3)
    addi r4, r1, 0x8
    lbz r0, 0x2(r31)
    li r3, 0x7
    stb r0, 0x10(r1)
    mtctr r12
    bctrl
lbl_802A7F88:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_dm_l2cap_server_compress_cback
asm s32 bta_dm_l2cap_server_compress_cback(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, M2C_UNK arg_sp0, s32 arg_sp8) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r31, lbl_80453B68@ha
    lwz r27, 0x38(r1)
    addi r31, r31, lbl_80453B68@l
    mr r25, r3
    mr r26, r10
    li r29, 0x0
    mr r30, r31
    li r28, 0x0
lbl_802A7FD0:
    lbz r0, 0x8(r31)
    cmplwi r0, 0x1
    bne lbl_802A8050
    mr r3, r30
    mr r4, r25
    bl fn_802A5A1C
    cmpwi r3, 0x0
    bne lbl_802A8050
    lbz r0, lbl_8049E000
    cmplwi r0, 0x4
    blt lbl_802A8024
    slwi r0, r28, 3
    lis r5, lbl_80453B68@ha
    addi r5, r5, lbl_80453B68@l
    lis r4, lbl_8037330C@ha
    add r0, r0, r28
    li r3, 0x503
    add r5, r5, r0
    addi r4, r4, lbl_8037330C@l
    lbz r5, 0x6(r5)
    bl LogMsg_1
lbl_802A8024:
    slwi r0, r28, 3
    lis r3, lbl_80453B68@ha
    addi r3, r3, lbl_80453B68@l
    mr r4, r26
    add r0, r0, r28
    mr r5, r27
    add r3, r3, r0
    lbz r3, 0x6(r3)
    bl fn_8029ABC4
    mr r29, r3
    b lbl_802A8064
lbl_802A8050:
    addi r28, r28, 0x1
    addi r30, r30, 0x9
    cmpwi r28, 0x5
    addi r31, r31, 0x9
    blt lbl_802A7FD0
lbl_802A8064:
    addi r11, r1, 0x30
    mr r3, r29
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: bta_dm_compress_cback
asm void bta_dm_compress_cback() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bne lbl_802A81F4
    lwz r3, lbl_8049CF5C
    li r7, 0x1
    lbz r9, 0x1(r3)
    b lbl_802A81E4
lbl_802A80B0:
    clrlwi r8, r7, 24
    clrlslwi r0, r7, 24, 2
    subf r0, r8, r0
    add r8, r3, r0
    lbz r0, 0x1(r8)
    cmplw r5, r0
    beq lbl_802A80D4
    cmplwi r0, 0xff
    bne lbl_802A81E0
lbl_802A80D4:
    lbz r0, 0x0(r8)
    cmplw r4, r0
    bne lbl_802A81E0
    lbz r0, 0x2(r8)
    cmplwi r0, 0x1
    bne lbl_802A81E0
    lis r8, lbl_80453D18@ha
    lbz r11, 0x1(r3)
    lbz r10, lbl_80453D18@l(r8)
    addi r9, r8, lbl_80453D18@l
    li r31, 0x0
    li r29, 0x1
    b lbl_802A8164
lbl_802A8108:
    clrlwi r8, r29, 24
    clrlslwi r0, r29, 24, 2
    subf r0, r8, r0
    add r12, r3, r0
    lbz r0, 0x2(r12)
    cmplwi r0, 0x2
    bne lbl_802A8160
    li r30, 0x0
    b lbl_802A8154
lbl_802A812C:
    clrlwi r8, r30, 24
    clrlslwi r0, r30, 24, 3
    add r8, r0, r8
    lbz r0, 0x0(r12)
    add r8, r9, r8
    lbz r8, 0x7(r8)
    cmplw r8, r0
    bne lbl_802A8150
    li r31, 0x1
lbl_802A8150:
    addi r30, r30, 0x1
lbl_802A8154:
    clrlwi r0, r30, 24
    cmplw r0, r10
    blt lbl_802A812C
lbl_802A8160:
    addi r29, r29, 0x1
lbl_802A8164:
    clrlwi r0, r29, 24
    cmplw r0, r11
    ble lbl_802A8108
    cmpwi r31, 0x0
    bne lbl_802A829C
    clrlwi r3, r7, 24
    lis r30, lbl_80453B68@ha
    subi r3, r3, 0x1
    slwi r0, r3, 3
    addi r30, r30, lbl_80453B68@l
    add r29, r0, r3
    add r31, r30, r29
    stb r5, 0x7(r31)
    mr r3, r31
    stb r4, 0x6(r31)
    mr r4, r6
    bl fn_802A59E8
    lbz r0, lbl_8049E000
    li r3, 0x1
    stb r3, 0x8(r31)
    mr r7, r31
    cmplwi r0, 0x4
    blt lbl_802A829C
    lis r4, lbl_8037333C@ha
    lbz r5, 0x7(r31)
    lbz r6, 0x6(r31)
    addi r4, r4, lbl_8037333C@l
    lbz r7, 0x8(r7)
    li r3, 0x503
    bl LogMsg_3
    b lbl_802A829C
lbl_802A81E0:
    addi r7, r7, 0x1
lbl_802A81E4:
    clrlwi r0, r7, 24
    cmplw r0, r9
    ble lbl_802A80B0
    b lbl_802A829C
lbl_802A81F4:
    cmplwi r3, 0x1
    bne lbl_802A829C
    lwz r7, lbl_8049CF5C
    li r8, 0x1
    lbz r6, 0x1(r7)
    b lbl_802A8290
lbl_802A820C:
    clrlwi r3, r8, 24
    clrlslwi r0, r8, 24, 2
    subf r0, r3, r0
    add r3, r7, r0
    lbz r0, 0x1(r3)
    cmplw r5, r0
    beq lbl_802A8230
    cmplwi r0, 0xff
    bne lbl_802A828C
lbl_802A8230:
    lbz r0, 0x0(r3)
    cmplw r4, r0
    bne lbl_802A828C
    clrlwi r3, r8, 24
    lbz r0, lbl_8049E000
    subi r5, r3, 0x1
    lis r3, lbl_80453B68@ha
    cmplwi r0, 0x4
    slwi r4, r5, 3
    add r0, r4, r5
    addi r3, r3, lbl_80453B68@l
    add r3, r3, r0
    li r0, 0x0
    stb r0, 0x8(r3)
    blt lbl_802A829C
    lis r4, lbl_80373378@ha
    lbz r5, 0x7(r3)
    lbz r6, 0x6(r3)
    addi r4, r4, lbl_80373378@l
    lbz r7, 0x8(r3)
    li r3, 0x503
    bl LogMsg_3
    b lbl_802A829C
lbl_802A828C:
    addi r8, r8, 0x1
lbl_802A8290:
    clrlwi r0, r8, 24
    cmplw r0, r6
    ble lbl_802A820C
lbl_802A829C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_dm_rm_cback
asm void bta_dm_rm_cback(s32 arg0, u32 arg1, u32 arg2, s8 *arg3, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r30, r4
    mr r31, r5
    mr r26, r6
    bne lbl_802A83A8
    lis r3, lbl_80453C14@ha
    li r27, 0x0
    addi r29, r3, lbl_80453C14@l
    b lbl_802A8398
lbl_802A82F0:
    clrlwi r0, r27, 24
    mr r4, r26
    mulli r28, r0, 0xb
    add r3, r29, r28
    bl fn_802A5A1C
    cmpwi r3, 0x0
    bne lbl_802A8394
    add r3, r29, r28
    li r0, 0x1
    stb r0, 0x6(r3)
    li r7, 0x1
    lwz r6, lbl_8049CF58
    lbz r4, 0x1(r6)
    b lbl_802A8384
lbl_802A8328:
    clrlwi r3, r7, 24
    clrlslwi r0, r7, 24, 2
    subf r5, r3, r0
    add r3, r6, r5
    lbz r0, 0x1(r3)
    cmplw r31, r0
    beq lbl_802A834C
    cmplwi r0, 0xff
    bne lbl_802A8380
lbl_802A834C:
    lbz r0, 0x0(r3)
    cmplw r30, r0
    bne lbl_802A8380
    lis r3, lbl_80453C14@ha
    add r4, r6, r5
    addi r3, r3, lbl_80453C14@l
    lbz r4, 0x2(r4)
    add r3, r3, r28
    lbz r0, 0x7(r3)
    cmplw r4, r0
    ble lbl_802A83A8
    stb r4, 0x7(r3)
    b lbl_802A83A8
lbl_802A8380:
    addi r7, r7, 0x1
lbl_802A8384:
    clrlwi r0, r7, 24
    cmplw r0, r4
    ble lbl_802A8328
    b lbl_802A83A8
lbl_802A8394:
    addi r27, r27, 0x1
lbl_802A8398:
    lbz r0, 0x4d(r29)
    clrlwi r3, r27, 24
    cmplw r3, r0
    blt lbl_802A82F0
lbl_802A83A8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: bta_dm_keep_acl
asm void bta_dm_keep_acl(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lhz r4, 0x6(r3)
    lis r3, lbl_80453C14@ha
    addi r3, r3, lbl_80453C14@l
    clrlwi. r0, r4, 24
    stb r4, 0x101(r3)
    beq lbl_802A8414
    lis r31, 0x1
    la r3, lbl_804A2558
    subi r0, r31, 0x1
    clrlwi r4, r0, 16
    bl L2CA_SetIdleTimeoutByBdAddr
    subi r0, r31, 0x1
    li r3, 0x0
    clrlwi r4, r0, 16
    li r5, 0x1
    bl L2CA_SetIdleTimeout
    b lbl_802A8430
lbl_802A8414:
    la r3, lbl_804A2558
    li r4, 0x2
    bl L2CA_SetIdleTimeoutByBdAddr
    li r3, 0x0
    li r4, 0x2
    li r5, 0x1
    bl L2CA_SetIdleTimeout
lbl_802A8430:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: bta_dm_immediate_disable
asm int bta_dm_immediate_disable() {
    nofralloc
    lis r5, lbl_80453C14@ha
    li r3, 0x1
    addi r5, r5, lbl_80453C14@l
    li r4, 0x0
    lwz r12, 0x50(r5)
    mtctr r12
    bctr
}

// asm_to_cpp: bta_dm_send_hci_reset
asm void bta_dm_send_hci_reset(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80453AD8@ha
    li r3, 0x2
    stw r0, 0x14(r1)
    li r0, 0x1
    addi r4, r4, lbl_80453AD8@l
    stb r0, 0x7e(r4)
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802A8498
    li r4, 0x0
    bl btsnd_hcic_write_scan_enable
lbl_802A8498:
    lis r3, bta_dm_reset_complete@ha
    addi r3, r3, bta_dm_reset_complete@l
    bl BTM_SendHciReset
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
