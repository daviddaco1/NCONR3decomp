#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK LogMsg_0();               /* extern */
M2C_UNK LogMsg_1();    /* extern */
M2C_UNK memcpy();                  /* extern */
M2C_UNK memset();             /* extern */
extern M2C_UNK lbl_80377388;
extern M2C_UNK lbl_803773A4;
extern M2C_UNK lbl_803773C4;
extern M2C_UNK lbl_803773E4;
extern M2C_UNK lbl_80377404;
extern M2C_UNK lbl_80377448;
extern M2C_UNK lbl_80453A50;
extern M2C_UNK lbl_80453F78;
extern u8 lbl_80457040;
extern M2C_UNK lbl_8049CFC8;
extern M2C_UNK lbl_8049CFD0;

u8 * l2cu_allocate_lcb();
void l2cu_release_lcb();
u8 * l2cu_find_lcb_by_bd_addr();
u8 * l2cu_find_lcb_by_handle();
u8 l2cu_get_conn_role();
s8 * l2cu_build_header();
void l2cu_send_peer_cmd_reject();
void l2cu_send_peer_connect_req();
void l2cu_send_peer_connect_rsp();
void l2cu_reject_connection();
void l2cu_send_peer_config_req();
void l2cu_send_peer_config_rsp();
void l2cu_send_peer_config_rej();
void l2cu_send_peer_disc_req();
void l2cu_send_peer_disc_rsp();
void l2cu_send_peer_echo_req();
void l2cu_send_peer_echo_rsp();
void l2cu_send_peer_info_rsp();
s8 * l2cu_allocate_ccb();
void l2cu_release_ccb();
s8 * l2cu_find_ccb_by_cid();
u8 * l2cu_allocate_rcb();
void l2cu_release_rcb();
u8 * l2cu_find_rcb_by_psm();
void l2cu_process_peer_cfg_req();
void l2cu_process_peer_cfg_rsp();
void l2cu_process_our_cfg_req();
void l2cu_process_our_cfg_rsp();
void l2cu_device_reset();
s32 l2cu_create_conn();
s32 l2cu_create_conn_after_switch();
u8 * l2cu_find_lcb_by_state();
s32 l2cu_lcb_disconnecting();

// l2cu_allocate_lcb: definicion C reemplazada por asm (ver abajo)


// l2cu_release_lcb: definicion C reemplazada por asm (ver abajo)


// l2cu_find_lcb_by_bd_addr: definicion C reemplazada por asm (ver abajo)


// l2cu_find_lcb_by_handle: definicion C reemplazada por asm (ver abajo)


// l2cu_get_conn_role: definicion C reemplazada por asm (ver abajo)




// l2cu_send_peer_connect_req: definicion C reemplazada por asm (ver abajo)




// l2cu_send_peer_config_req: definicion C reemplazada por asm (ver abajo)


// l2cu_send_peer_config_rsp: definicion C reemplazada por asm (ver abajo)


// l2cu_send_peer_config_rej: definicion C reemplazada por asm (ver abajo)


// l2cu_send_peer_disc_req: definicion C reemplazada por asm (ver abajo)






// l2cu_allocate_ccb: definicion C reemplazada por asm (ver abajo)


void l2cu_release_ccb(s8 *arg0);

// l2cu_find_ccb_by_cid: definicion C reemplazada por asm (ver abajo)



void l2cu_release_rcb(s8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 2) = 0;
}

// l2cu_find_rcb_by_psm: definicion C reemplazada por asm (ver abajo)


// l2cu_process_peer_cfg_req: definicion C reemplazada por asm (ver abajo)


// l2cu_process_peer_cfg_rsp: definicion C reemplazada por asm (ver abajo)


// l2cu_process_our_cfg_req: definicion C reemplazada por asm (ver abajo)


// l2cu_process_our_cfg_rsp: definicion C reemplazada por asm (ver abajo)


// l2cu_device_reset: definicion C reemplazada por asm (ver abajo)


// l2cu_create_conn: definicion C reemplazada por asm (ver abajo)


s32 l2cu_create_conn_after_switch(s8 *arg0);

// l2cu_find_lcb_by_state: definicion C reemplazada por asm (ver abajo)


// l2cu_lcb_disconnecting: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern void GKI_enqueue();
extern void GKI_freebuf();
extern void _restgpr_24();
extern void _restgpr_27();
extern void _savegpr_24();
extern void _savegpr_27();
extern void btm_acl_removed();
extern void btm_remove_sco_links();
extern void btsnd_hcic_write_auto_flush_tout();
extern void btu_start_timer();
extern void btu_stop_timer();
extern void l2c_link_adjust_allocation();
extern void l2c_link_check_send_pkts();
s8 *l2cu_allocate_ccb(s8 *arg0);
u8 *l2cu_allocate_lcb(s8 *arg0);
u8 * l2cu_allocate_rcb();
s8 * l2cu_build_header();
s32 l2cu_create_conn(s8 *arg0, M2C_UNK arg_sp0);
s32 l2cu_create_conn_after_switch();
void l2cu_device_reset(void);
s8 *l2cu_find_ccb_by_cid(s32 arg0, u32 arg1);
u8 *l2cu_find_lcb_by_bd_addr(s32 arg0);
u8 *l2cu_find_lcb_by_handle(u32 arg0);
u8 *l2cu_find_lcb_by_state(s32 arg0);
u8 *l2cu_find_rcb_by_psm(u32 arg0);
u8 l2cu_get_conn_role(void);
s32 l2cu_lcb_disconnecting(void);
void l2cu_process_our_cfg_req(s8 *arg0, s8 *arg1);
void l2cu_process_our_cfg_rsp(s8 *arg0, s8 *arg1);
void l2cu_process_peer_cfg_req(s8 *arg0, s8 *arg1);
void l2cu_process_peer_cfg_rsp(s8 *arg0, s8 *arg1);
void l2cu_reject_connection();
void l2cu_release_ccb();
void l2cu_release_lcb(s8 *arg0, s32 arg1, s32 arg2);
void l2cu_send_peer_cmd_reject();
void l2cu_send_peer_config_rej(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0);
void l2cu_send_peer_config_req(s8 *arg0, s8 *arg1);
void l2cu_send_peer_config_rsp(s8 *arg0, s8 *arg1);
void l2cu_send_peer_connect_req(s8 *arg0);
void l2cu_send_peer_connect_rsp();
void l2cu_send_peer_disc_req(s8 *arg0);
void l2cu_send_peer_disc_rsp();
void l2cu_send_peer_echo_req();
void l2cu_send_peer_echo_rsp();
void l2cu_send_peer_info_rsp();

// asm_to_cpp: l2cu_allocate_lcb
asm u8 *l2cu_allocate_lcb(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80457040@ha
    stw r0, 0x14(r1)
    li r0, 0x4
    addi r4, r4, lbl_80457040@l
    stw r31, 0xc(r1)
    addi r31, r4, 0x8
    stw r30, 0x8(r1)
    mr r30, r3
    mtctr r0
lbl_802C1F48:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_802C1FCC
    mr r3, r31
    li r4, 0x0
    li r5, 0x5c
    bl memset
    li r0, 0x1
    mr r4, r30
    stb r0, 0x0(r31)
    addi r3, r31, 0x2a
    li r5, 0x6
    bl memcpy
    li r5, 0x0
    lis r3, 0x1
    stw r5, 0x4(r31)
    subi r0, r3, 0x1
    lis r4, lbl_80457040@ha
    sth r0, 0x28(r31)
    addi r4, r4, lbl_80457040@l
    stw r5, 0x50(r31)
    sth r0, 0x32(r31)
    stw r31, 0x20(r31)
    sth r5, 0x38(r31)
    lhz r0, 0x7ba(r4)
    sth r0, 0x58(r31)
    stb r5, 0x31(r31)
    lhz r3, 0x7b8(r4)
    addi r0, r3, 0x1
    sth r0, 0x7b8(r4)
    bl l2c_link_adjust_allocation
    mr r3, r31
    b lbl_802C1FD8
lbl_802C1FCC:
    addi r31, r31, 0x5c
    bdnz lbl_802C1F48
    li r3, 0x0
lbl_802C1FD8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: l2cu_release_lcb
asm void l2cu_release_lcb(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stb r31, 0x0(r3)
    addi r3, r3, 0x10
    bl btu_stop_timer
    lwz r3, 0x50(r30)
    cmpwi r3, 0x0
    beq lbl_802C202C
    bl GKI_freebuf
    stw r31, 0x50(r30)
lbl_802C202C:
    addi r3, r30, 0x2a
    bl btm_remove_sco_links
    lwz r3, 0x8(r30)
    b lbl_802C2044
lbl_802C203C:
    bl l2cu_release_ccb
    lwz r3, 0x8(r30)
lbl_802C2044:
    cmpwi r3, 0x0
    bne lbl_802C203C
    lwz r3, 0x4(r30)
    subi r0, r3, 0x4
    cmplwi r0, 0x1
    bgt lbl_802C2074
    addi r3, r30, 0x2a
    bl btm_acl_removed
    b lbl_802C2074
lbl_802C2068:
    addi r3, r30, 0x44
    bl GKI_dequeue
    bl GKI_freebuf
lbl_802C2074:
    lwz r0, 0x44(r30)
    cmpwi r0, 0x0
    bne lbl_802C2068
    lis r4, lbl_80457040@ha
    addi r4, r4, lbl_80457040@l
    lhz r3, 0x7b8(r4)
    cmplwi r3, 0x1
    blt lbl_802C209C
    subi r0, r3, 0x1
    sth r0, 0x7b8(r4)
lbl_802C209C:
    lis r4, lbl_80457040@ha
    lhz r0, 0x38(r30)
    addi r4, r4, lbl_80457040@l
    lhz r3, 0x4(r4)
    add r0, r3, r0
    sth r0, 0x4(r4)
    bl l2c_link_adjust_allocation
    lwz r12, 0x54(r30)
    cmpwi r12, 0x0
    beq lbl_802C20D8
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x54(r30)
    mtctr r12
    bctrl
lbl_802C20D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: l2cu_find_lcb_by_bd_addr
asm u8 *l2cu_find_lcb_by_bd_addr(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80457040@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80457040@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x8
    stw r29, 0x14(r1)
    mr r29, r3
lbl_802C211C:
    lbz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_802C2148
    mr r4, r29
    addi r3, r30, 0x2a
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802C2148
    mr r3, r30
    b lbl_802C215C
lbl_802C2148:
    addi r31, r31, 0x1
    addi r30, r30, 0x5c
    cmpwi r31, 0x4
    blt lbl_802C211C
    li r3, 0x0
lbl_802C215C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: l2cu_find_lcb_by_handle
asm u8 *l2cu_find_lcb_by_handle(u32 arg0) {
    nofralloc
    lis r4, lbl_80457040@ha
    addi r4, r4, lbl_80457040@l
    lbzu r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_802C21A0
    lhz r0, 0x28(r4)
    cmplw r0, r3
    bne lbl_802C21A0
    mr r3, r4
    blr
lbl_802C21A0:
    lbzu r0, 0x5c(r4)
    cmpwi r0, 0x0
    beq lbl_802C21C0
    lhz r0, 0x28(r4)
    cmplw r0, r3
    bne lbl_802C21C0
    mr r3, r4
    blr
lbl_802C21C0:
    lbzu r0, 0x5c(r4)
    cmpwi r0, 0x0
    beq lbl_802C21E0
    lhz r0, 0x28(r4)
    cmplw r0, r3
    bne lbl_802C21E0
    mr r3, r4
    blr
lbl_802C21E0:
    lbzu r0, 0x5c(r4)
    cmpwi r0, 0x0
    beq lbl_802C2200
    lhz r0, 0x28(r4)
    cmplw r0, r3
    bne lbl_802C2200
    mr r3, r4
    blr
lbl_802C2200:
    li r3, 0x0
    blr
}

// asm_to_cpp: l2cu_get_conn_role
asm u8 l2cu_get_conn_role(void) {
    nofralloc
    lis r3, lbl_80457040@ha
    addi r3, r3, lbl_80457040@l
    lbz r3, 0x1(r3)
    blr
}

// asm_to_cpp: l2cu_build_header
asm s8 * l2cu_build_header() {
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
    bne lbl_802C225C
    li r3, 0x0
    b lbl_802C22BC
lbl_802C225C:
    li r8, 0x0
    ori r5, r28, 0x2000
    sth r8, 0x4(r3)
    addi r0, r29, 0xc
    srawi r7, r5, 8
    addi r9, r29, 0x8
    sth r0, 0x2(r3)
    srawi r6, r9, 8
    addi r10, r29, 0x4
    li r4, 0x1
    stb r5, 0x8(r3)
    srawi r5, r10, 8
    extrwi r0, r29, 8, 16
    stb r7, 0x9(r3)
    stb r9, 0xa(r3)
    stb r6, 0xb(r3)
    stb r10, 0xc(r3)
    stb r5, 0xd(r3)
    stb r4, 0xe(r3)
    stb r8, 0xf(r3)
    stb r30, 0x10(r3)
    stb r31, 0x11(r3)
    stb r29, 0x12(r3)
    stb r0, 0x13(r3)
lbl_802C22BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: l2cu_send_peer_cmd_reject
asm void l2cu_send_peer_cmd_reject() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmplwi r4, 0x1
    mr r27, r3
    mr r28, r4
    mr r29, r6
    mr r30, r7
    bne lbl_802C2310
    li r31, 0x2
    b lbl_802C2324
lbl_802C2310:
    subi r6, r4, 0x2
    subfic r0, r4, 0x2
    nor r0, r6, r0
    srawi r0, r0, 31
    rlwinm r31, r0, 0, 29, 29
lbl_802C2324:
    addi r0, r31, 0x2
    lhz r3, 0x28(r3)
    mr r6, r5
    li r5, 0x1
    clrlwi r4, r0, 16
    bl l2cu_build_header
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_802C2370
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C23C0
    lis r3, 0x8
    lis r4, lbl_80377388@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80377388@l
    bl LogMsg_0
    b lbl_802C23C0
lbl_802C2370:
    clrlwi r0, r31, 16
    stb r28, 0x14(r3)
    extrwi r4, r28, 8, 16
    addi r6, r3, 0x16
    cmplwi r0, 0x2
    stb r4, 0x15(r3)
    blt lbl_802C239C
    stb r29, 0x0(r6)
    extrwi r0, r29, 8, 16
    stb r0, 0x1(r6)
    addi r6, r6, 0x2
lbl_802C239C:
    clrlwi r0, r31, 16
    cmplwi r0, 0x4
    blt lbl_802C23B4
    stb r30, 0x0(r6)
    extrwi r0, r30, 8, 16
    stb r0, 0x1(r6)
lbl_802C23B4:
    mr r3, r27
    li r4, 0x0
    bl l2c_link_check_send_pkts
lbl_802C23C0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: l2cu_send_peer_connect_req
asm void l2cu_send_peer_connect_req(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x4
    li r5, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r7, 0x10(r3)
    lbz r6, 0x31(r7)
    addi r0, r6, 0x1
    stb r0, 0x31(r7)
    clrlwi r6, r0, 24
    stb r0, 0x35(r3)
    lwz r3, 0x10(r3)
    lhz r3, 0x28(r3)
    bl l2cu_build_header
    cmpwi r3, 0x0
    bne lbl_802C2448
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C2488
    lis r3, 0x8
    lis r4, lbl_803773A4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803773A4@l
    bl LogMsg_0
    b lbl_802C2488
lbl_802C2448:
    lwz r6, 0x30(r31)
    mr r5, r3
    li r4, 0x0
    lhz r0, 0x2(r6)
    stb r0, 0x14(r3)
    lwz r6, 0x30(r31)
    lhz r0, 0x2(r6)
    srawi r0, r0, 8
    stb r0, 0x15(r3)
    lhz r0, 0x14(r31)
    stb r0, 0x16(r3)
    lhz r0, 0x14(r31)
    srawi r0, r0, 8
    stb r0, 0x17(r3)
    lwz r3, 0x10(r31)
    bl l2c_link_check_send_pkts
lbl_802C2488:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: l2cu_send_peer_connect_rsp
asm void l2cu_send_peer_connect_rsp() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x3
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x8
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x10(r3)
    lhz r3, 0x28(r6)
    lbz r6, 0x36(r29)
    bl l2cu_build_header
    cmpwi r3, 0x0
    bne lbl_802C2508
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C2558
    lis r3, 0x8
    lis r4, lbl_803773A4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803773A4@l
    bl LogMsg_0
    b lbl_802C2558
lbl_802C2508:
    lhz r6, 0x14(r29)
    extrwi r0, r31, 8, 16
    mr r5, r3
    li r4, 0x0
    stb r6, 0x14(r3)
    lhz r6, 0x14(r29)
    srawi r6, r6, 8
    stb r6, 0x15(r3)
    lhz r6, 0x16(r29)
    stb r6, 0x16(r3)
    lhz r6, 0x16(r29)
    srawi r6, r6, 8
    stb r6, 0x17(r3)
    srawi r6, r30, 8
    stb r30, 0x18(r3)
    stb r6, 0x19(r3)
    stb r31, 0x1a(r3)
    stb r0, 0x1b(r3)
    lwz r3, 0x10(r29)
    bl l2c_link_check_send_pkts
lbl_802C2558:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: l2cu_reject_connection
asm void l2cu_reject_connection() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    mr r6, r5
    li r5, 0x3
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x8
    stw r29, 0x14(r1)
    mr r29, r3
    lhz r3, 0x28(r3)
    bl l2cu_build_header
    cmpwi r3, 0x0
    bne lbl_802C25DC
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C2618
    lis r3, 0x8
    lis r4, lbl_803773A4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803773A4@l
    bl LogMsg_0
    b lbl_802C2618
lbl_802C25DC:
    li r7, 0x0
    srawi r6, r30, 8
    stb r7, 0x14(r3)
    extrwi r0, r31, 8, 16
    mr r5, r3
    li r4, 0x0
    stb r7, 0x15(r3)
    stb r30, 0x16(r3)
    stb r6, 0x17(r3)
    stb r31, 0x18(r3)
    stb r0, 0x19(r3)
    stb r7, 0x1a(r3)
    stb r7, 0x1b(r3)
    mr r3, r29
    bl l2c_link_check_send_pkts
lbl_802C2618:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: l2cu_send_peer_config_req
asm void l2cu_send_peer_config_req(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x10(r3)
    lbz r5, 0x31(r6)
    addi r0, r5, 0x1
    stb r0, 0x31(r6)
    stb r0, 0x35(r3)
    lbz r0, 0x2(r4)
    cmpwi r0, 0x0
    beq lbl_802C2678
    li r7, 0x4
lbl_802C2678:
    lbz r0, 0x20(r4)
    cmpwi r0, 0x0
    beq lbl_802C268C
    addi r0, r7, 0x4
    clrlwi r7, r0, 16
lbl_802C268C:
    lbz r0, 0x6(r4)
    cmpwi r0, 0x0
    beq lbl_802C26A0
    addi r0, r7, 0x18
    clrlwi r7, r0, 16
lbl_802C26A0:
    lbz r0, 0x24(r4)
    cmpwi r0, 0x0
    beq lbl_802C26B4
    addi r0, r7, 0xb
    clrlwi r7, r0, 16
lbl_802C26B4:
    lwz r3, 0x10(r3)
    addi r0, r7, 0x4
    lbz r6, 0x35(r30)
    clrlwi r4, r0, 16
    lhz r3, 0x28(r3)
    li r5, 0x4
    bl l2cu_build_header
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_802C2704
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C2914
    lis r3, 0x8
    lis r4, lbl_803773A4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803773A4@l
    bl LogMsg_0
    b lbl_802C2914
lbl_802C2704:
    lhz r6, 0x16(r30)
    li r0, 0x0
    addi r4, r3, 0x18
    stb r6, 0x14(r3)
    lhz r6, 0x16(r30)
    srawi r6, r6, 8
    stb r6, 0x15(r3)
    stb r0, 0x16(r3)
    stb r0, 0x17(r3)
    lbz r0, 0x2(r31)
    cmpwi r0, 0x0
    beq lbl_802C275C
    li r3, 0x1
    li r0, 0x2
    stb r3, 0x0(r4)
    stb r0, 0x1(r4)
    lhz r0, 0x4(r31)
    stb r0, 0x2(r4)
    lhz r0, 0x4(r31)
    srawi r0, r0, 8
    stb r0, 0x3(r4)
    addi r4, r4, 0x4
lbl_802C275C:
    lbz r0, 0x20(r31)
    cmpwi r0, 0x0
    beq lbl_802C278C
    li r0, 0x2
    stb r0, 0x0(r4)
    stb r0, 0x1(r4)
    lhz r0, 0x22(r31)
    stb r0, 0x2(r4)
    lhz r0, 0x22(r31)
    srawi r0, r0, 8
    stb r0, 0x3(r4)
    addi r4, r4, 0x4
lbl_802C278C:
    lbz r0, 0x6(r31)
    cmpwi r0, 0x0
    beq lbl_802C2898
    li r3, 0x3
    li r0, 0x16
    stb r3, 0x0(r4)
    stb r0, 0x1(r4)
    lbz r0, 0x8(r31)
    stb r0, 0x2(r4)
    lbz r0, 0x9(r31)
    stb r0, 0x3(r4)
    lwz r0, 0xc(r31)
    stb r0, 0x4(r4)
    lwz r0, 0xc(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x5(r4)
    lwz r0, 0xc(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0x6(r4)
    lwz r0, 0xc(r31)
    srwi r0, r0, 24
    stb r0, 0x7(r4)
    lwz r0, 0x10(r31)
    stb r0, 0x8(r4)
    lwz r0, 0x10(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x9(r4)
    lwz r0, 0x10(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0xa(r4)
    lwz r0, 0x10(r31)
    srwi r0, r0, 24
    stb r0, 0xb(r4)
    lwz r0, 0x14(r31)
    stb r0, 0xc(r4)
    lwz r0, 0x14(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0xd(r4)
    lwz r0, 0x14(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0xe(r4)
    lwz r0, 0x14(r31)
    srwi r0, r0, 24
    stb r0, 0xf(r4)
    lwz r0, 0x18(r31)
    stb r0, 0x10(r4)
    lwz r0, 0x18(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x11(r4)
    lwz r0, 0x18(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0x12(r4)
    lwz r0, 0x18(r31)
    srwi r0, r0, 24
    stb r0, 0x13(r4)
    lwz r0, 0x1c(r31)
    stb r0, 0x14(r4)
    lwz r0, 0x1c(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x15(r4)
    lwz r0, 0x1c(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0x16(r4)
    lwz r0, 0x1c(r31)
    srwi r0, r0, 24
    stb r0, 0x17(r4)
    addi r4, r4, 0x18
lbl_802C2898:
    lbz r0, 0x24(r31)
    cmpwi r0, 0x0
    beq lbl_802C2908
    li r3, 0x4
    li r0, 0x9
    stb r3, 0x0(r4)
    stb r0, 0x1(r4)
    lbz r0, 0x26(r31)
    stb r0, 0x2(r4)
    lbz r0, 0x27(r31)
    stb r0, 0x3(r4)
    lbz r0, 0x28(r31)
    stb r0, 0x4(r4)
    lhz r0, 0x2a(r31)
    stb r0, 0x5(r4)
    lhz r0, 0x2a(r31)
    srawi r0, r0, 8
    stb r0, 0x6(r4)
    lhz r0, 0x2c(r31)
    stb r0, 0x7(r4)
    lhz r0, 0x2c(r31)
    srawi r0, r0, 8
    stb r0, 0x8(r4)
    lhz r0, 0x2e(r31)
    stb r0, 0x9(r4)
    lhz r0, 0x2e(r31)
    srawi r0, r0, 8
    stb r0, 0xa(r4)
lbl_802C2908:
    lwz r3, 0x10(r30)
    li r4, 0x0
    bl l2c_link_check_send_pkts
lbl_802C2914:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: l2cu_send_peer_config_rsp
asm void l2cu_send_peer_config_rsp(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x2(r4)
    cmpwi r0, 0x0
    beq lbl_802C295C
    li r5, 0x4
lbl_802C295C:
    lbz r0, 0x20(r4)
    cmpwi r0, 0x0
    beq lbl_802C2970
    addi r0, r5, 0x4
    clrlwi r5, r0, 16
lbl_802C2970:
    lbz r0, 0x6(r4)
    cmpwi r0, 0x0
    beq lbl_802C2984
    addi r0, r5, 0x18
    clrlwi r5, r0, 16
lbl_802C2984:
    lbz r0, 0x24(r4)
    cmpwi r0, 0x0
    beq lbl_802C2998
    addi r0, r5, 0xb
    clrlwi r5, r0, 16
lbl_802C2998:
    lwz r3, 0x10(r3)
    addi r0, r5, 0x6
    lbz r6, 0x36(r30)
    clrlwi r4, r0, 16
    lhz r3, 0x28(r3)
    li r5, 0x5
    bl l2cu_build_header
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_802C29E8
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C2C0C
    lis r3, 0x8
    lis r4, lbl_803773A4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803773A4@l
    bl LogMsg_0
    b lbl_802C2C0C
lbl_802C29E8:
    lhz r6, 0x16(r30)
    li r0, 0x0
    addi r4, r3, 0x1a
    stb r6, 0x14(r3)
    lhz r6, 0x16(r30)
    srawi r6, r6, 8
    stb r6, 0x15(r3)
    stb r0, 0x16(r3)
    stb r0, 0x17(r3)
    lhz r0, 0x0(r31)
    stb r0, 0x18(r3)
    lhz r0, 0x0(r31)
    srawi r0, r0, 8
    stb r0, 0x19(r3)
    lbz r0, 0x2(r31)
    cmpwi r0, 0x0
    beq lbl_802C2A54
    li r3, 0x1
    li r0, 0x2
    stb r3, 0x0(r4)
    stb r0, 0x1(r4)
    lhz r0, 0x4(r31)
    stb r0, 0x2(r4)
    lhz r0, 0x4(r31)
    srawi r0, r0, 8
    stb r0, 0x3(r4)
    addi r4, r4, 0x4
lbl_802C2A54:
    lbz r0, 0x20(r31)
    cmpwi r0, 0x0
    beq lbl_802C2A84
    li r0, 0x2
    stb r0, 0x0(r4)
    stb r0, 0x1(r4)
    lhz r0, 0x22(r31)
    stb r0, 0x2(r4)
    lhz r0, 0x22(r31)
    srawi r0, r0, 8
    stb r0, 0x3(r4)
    addi r4, r4, 0x4
lbl_802C2A84:
    lbz r0, 0x6(r31)
    cmpwi r0, 0x0
    beq lbl_802C2B90
    li r3, 0x3
    li r0, 0x16
    stb r3, 0x0(r4)
    stb r0, 0x1(r4)
    lbz r0, 0x8(r31)
    stb r0, 0x2(r4)
    lbz r0, 0x9(r31)
    stb r0, 0x3(r4)
    lwz r0, 0xc(r31)
    stb r0, 0x4(r4)
    lwz r0, 0xc(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x5(r4)
    lwz r0, 0xc(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0x6(r4)
    lwz r0, 0xc(r31)
    srwi r0, r0, 24
    stb r0, 0x7(r4)
    lwz r0, 0x10(r31)
    stb r0, 0x8(r4)
    lwz r0, 0x10(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x9(r4)
    lwz r0, 0x10(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0xa(r4)
    lwz r0, 0x10(r31)
    srwi r0, r0, 24
    stb r0, 0xb(r4)
    lwz r0, 0x14(r31)
    stb r0, 0xc(r4)
    lwz r0, 0x14(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0xd(r4)
    lwz r0, 0x14(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0xe(r4)
    lwz r0, 0x14(r31)
    srwi r0, r0, 24
    stb r0, 0xf(r4)
    lwz r0, 0x18(r31)
    stb r0, 0x10(r4)
    lwz r0, 0x18(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x11(r4)
    lwz r0, 0x18(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0x12(r4)
    lwz r0, 0x18(r31)
    srwi r0, r0, 24
    stb r0, 0x13(r4)
    lwz r0, 0x1c(r31)
    stb r0, 0x14(r4)
    lwz r0, 0x1c(r31)
    extrwi r0, r0, 8, 16
    stb r0, 0x15(r4)
    lwz r0, 0x1c(r31)
    extrwi r0, r0, 8, 8
    stb r0, 0x16(r4)
    lwz r0, 0x1c(r31)
    srwi r0, r0, 24
    stb r0, 0x17(r4)
    addi r4, r4, 0x18
lbl_802C2B90:
    lbz r0, 0x24(r31)
    cmpwi r0, 0x0
    beq lbl_802C2C00
    li r3, 0x4
    li r0, 0x9
    stb r3, 0x0(r4)
    stb r0, 0x1(r4)
    lbz r0, 0x26(r31)
    stb r0, 0x2(r4)
    lbz r0, 0x27(r31)
    stb r0, 0x3(r4)
    lbz r0, 0x28(r31)
    stb r0, 0x4(r4)
    lhz r0, 0x2a(r31)
    stb r0, 0x5(r4)
    lhz r0, 0x2a(r31)
    srawi r0, r0, 8
    stb r0, 0x6(r4)
    lhz r0, 0x2c(r31)
    stb r0, 0x7(r4)
    lhz r0, 0x2c(r31)
    srawi r0, r0, 8
    stb r0, 0x8(r4)
    lhz r0, 0x2e(r31)
    stb r0, 0x9(r4)
    lhz r0, 0x2e(r31)
    srawi r0, r0, 8
    stb r0, 0xa(r4)
lbl_802C2C00:
    lwz r3, 0x10(r30)
    li r4, 0x0
    bl l2c_link_check_send_pkts
lbl_802C2C0C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: l2cu_send_peer_config_rej
asm void l2cu_send_peer_config_rej(s8 *arg0, s8 *arg1, s32 arg2, s32 arg3, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r24, r6
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802C2C84
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C2DC0
    lis r3, 0x8
    lis r4, lbl_803773C4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803773C4@l
    bl LogMsg_0
    b lbl_802C2DC0
lbl_802C2C84:
    li r7, 0x0
    addi r30, r3, 0xa
    sth r7, 0x4(r3)
    addi r8, r24, 0xa
    li r5, 0x1
    li r4, 0x5
    lwz r6, 0x10(r25)
    addi r9, r24, 0x6
    li r0, 0x3
    mr r29, r30
    lhz r6, 0x28(r6)
    add r28, r26, r27
    ori r6, r6, 0x2000
    stb r6, 0x8(r3)
    lwz r6, 0x10(r25)
    lhz r6, 0x28(r6)
    ori r6, r6, 0x2000
    srawi r6, r6, 8
    stb r6, 0x9(r3)
    srawi r6, r8, 8
    srawi r3, r9, 8
    stb r8, 0x2(r30)
    stb r6, 0x3(r30)
    stb r5, 0x4(r30)
    stb r7, 0x5(r30)
    stb r4, 0x6(r30)
    lbz r4, 0x36(r25)
    stb r4, 0x7(r30)
    stb r9, 0x8(r30)
    stb r3, 0x9(r30)
    lhz r3, 0x16(r25)
    stb r3, 0xa(r30)
    lhz r3, 0x16(r25)
    srawi r3, r3, 8
    stb r3, 0xb(r30)
    stb r7, 0xc(r30)
    stb r7, 0xd(r30)
    stb r0, 0xe(r30)
    stb r7, 0xf(r30)
    addi r30, r30, 0x10
    b lbl_802C2D88
lbl_802C2D28:
    lbz r4, 0x0(r26)
    lbz r3, 0x1(r26)
    clrlwi r0, r4, 25
    cmpwi r0, 0x4
    bge lbl_802C2D54
    cmpwi r0, 0x1
    bge lbl_802C2D48
    b lbl_802C2D54
lbl_802C2D48:
    add r3, r3, r26
    addi r26, r3, 0x2
    b lbl_802C2D88
lbl_802C2D54:
    addi r24, r3, 0x2
    cmpw r24, r27
    bgt lbl_802C2D84
    rlwinm. r0, r4, 0, 24, 24
    bne lbl_802C2D7C
    mr r3, r30
    mr r4, r26
    mr r5, r24
    bl memcpy
    add r30, r30, r24
lbl_802C2D7C:
    add r26, r26, r24
    b lbl_802C2D88
lbl_802C2D84:
    mr r26, r28
lbl_802C2D88:
    cmplw r26, r28
    blt lbl_802C2D28
    subf r3, r29, r30
    mr r4, r25
    subi r3, r3, 0x2
    mr r5, r31
    stb r3, 0x0(r29)
    extrwi r0, r3, 8, 16
    clrlwi r3, r3, 16
    stb r0, 0x1(r29)
    addi r0, r3, 0x4
    sth r0, 0x2(r31)
    lwz r3, 0x10(r25)
    bl l2c_link_check_send_pkts
lbl_802C2DC0:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: l2cu_send_peer_disc_req
asm void l2cu_send_peer_disc_req(s8 *arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x4
    li r5, 0x6
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r7, 0x10(r3)
    lbz r6, 0x31(r7)
    addi r0, r6, 0x1
    stb r0, 0x31(r7)
    clrlwi r6, r0, 24
    stb r0, 0x35(r3)
    lwz r3, 0x10(r3)
    lhz r3, 0x28(r3)
    bl l2cu_build_header
    cmpwi r3, 0x0
    bne lbl_802C2E48
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C2E98
    lis r3, 0x8
    lis r4, lbl_803773A4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803773A4@l
    bl LogMsg_0
    b lbl_802C2E98
lbl_802C2E48:
    lhz r5, 0x16(r31)
    li r0, 0x0
    mr r4, r3
    stb r5, 0x14(r3)
    lhz r5, 0x16(r31)
    srawi r5, r5, 8
    stb r5, 0x15(r3)
    lhz r5, 0x14(r31)
    stb r5, 0x16(r3)
    lhz r5, 0x14(r31)
    srawi r5, r5, 8
    stb r5, 0x17(r3)
    sth r0, 0x6(r3)
    lwz r3, 0x10(r31)
    addi r3, r3, 0x44
    bl GKI_enqueue
    lwz r3, 0x10(r31)
    li r4, 0x0
    li r5, 0x0
    bl l2c_link_check_send_pkts
lbl_802C2E98:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: l2cu_send_peer_disc_rsp
asm void l2cu_send_peer_disc_rsp() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    mr r6, r4
    li r4, 0x4
    stw r30, 0x18(r1)
    mr r30, r5
    li r5, 0x7
    stw r29, 0x14(r1)
    mr r29, r3
    lhz r3, 0x28(r3)
    bl l2cu_build_header
    cmpwi r3, 0x0
    bne lbl_802C2F14
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C2F50
    lis r3, 0x8
    lis r4, lbl_803773A4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803773A4@l
    bl LogMsg_0
    b lbl_802C2F50
lbl_802C2F14:
    stb r30, 0x14(r3)
    srawi r4, r30, 8
    extrwi r5, r31, 8, 16
    li r0, 0x0
    stb r4, 0x15(r3)
    mr r4, r3
    stb r31, 0x16(r3)
    stb r5, 0x17(r3)
    sth r0, 0x6(r3)
    addi r3, r29, 0x44
    bl GKI_enqueue
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl l2c_link_check_send_pkts
lbl_802C2F50:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: l2cu_send_peer_echo_req
asm void l2cu_send_peer_echo_req() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    mr r4, r31
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r5, 0x31(r3)
    lhz r3, 0x28(r3)
    addi r0, r5, 0x1
    li r5, 0x8
    stb r0, 0x31(r29)
    clrlwi r6, r0, 24
    bl l2cu_build_header
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_802C2FE4
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C30C0
    lis r3, 0x8
    lis r4, lbl_803773E4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803773E4@l
    bl LogMsg_0
    b lbl_802C30C0
lbl_802C2FE4:
    cmpwi cr1, r31, 0x0
    addi r7, r3, 0x14
    beq cr1, lbl_802C30B4
    li r8, 0x0
    ble cr1, lbl_802C30B4
    cmpwi r31, 0x8
    subi r4, r31, 0x8
    ble lbl_802C308C
    li r6, 0x0
    blt cr1, lbl_802C3020
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r31, r0
    bgt lbl_802C3020
    li r6, 0x1
lbl_802C3020:
    cmpwi r6, 0x0
    beq lbl_802C308C
    addi r0, r4, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_802C308C
lbl_802C303C:
    lbzx r0, r30, r8
    add r3, r30, r8
    addi r8, r8, 0x8
    stb r0, 0x0(r7)
    lbz r0, 0x1(r3)
    stb r0, 0x1(r7)
    lbz r0, 0x2(r3)
    stb r0, 0x2(r7)
    lbz r0, 0x3(r3)
    stb r0, 0x3(r7)
    lbz r0, 0x4(r3)
    stb r0, 0x4(r7)
    lbz r0, 0x5(r3)
    stb r0, 0x5(r7)
    lbz r0, 0x6(r3)
    stb r0, 0x6(r7)
    lbz r0, 0x7(r3)
    stb r0, 0x7(r7)
    addi r7, r7, 0x8
    bdnz lbl_802C303C
lbl_802C308C:
    subf r0, r8, r31
    add r3, r30, r8
    mtctr r0
    cmpw r8, r31
    bge lbl_802C30B4
lbl_802C30A0:
    lbz r0, 0x0(r3)
    addi r3, r3, 0x1
    stb r0, 0x0(r7)
    addi r7, r7, 0x1
    bdnz lbl_802C30A0
lbl_802C30B4:
    mr r3, r29
    li r4, 0x0
    bl l2c_link_check_send_pkts
lbl_802C30C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: l2cu_send_peer_echo_rsp
asm void l2cu_send_peer_echo_rsp() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_80453A50@ha
    mr r8, r4
    stw r0, 0x24(r1)
    addi r7, r7, lbl_80453A50@l
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    lhz r0, 0x7e(r7)
    cmplwi r0, 0x294
    bge lbl_802C3120
    lhz r4, 0x7c(r7)
    b lbl_802C3124
lbl_802C3120:
    li r4, 0x294
lbl_802C3124:
    subi r0, r4, 0xc
    clrlwi r0, r0, 16
    cmplw r6, r0
    ble lbl_802C3138
    li r31, 0x0
lbl_802C3138:
    lhz r3, 0x28(r3)
    mr r4, r31
    mr r6, r8
    li r5, 0x9
    bl l2cu_build_header
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_802C3180
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C325C
    lis r3, 0x8
    lis r4, lbl_803773A4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803773A4@l
    bl LogMsg_0
    b lbl_802C325C
lbl_802C3180:
    cmpwi cr1, r31, 0x0
    addi r7, r3, 0x14
    beq cr1, lbl_802C3250
    li r8, 0x0
    ble cr1, lbl_802C3250
    cmpwi r31, 0x8
    subi r4, r31, 0x8
    ble lbl_802C3228
    li r6, 0x0
    blt cr1, lbl_802C31BC
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r31, r0
    bgt lbl_802C31BC
    li r6, 0x1
lbl_802C31BC:
    cmpwi r6, 0x0
    beq lbl_802C3228
    addi r0, r4, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_802C3228
lbl_802C31D8:
    lbzx r0, r30, r8
    add r3, r30, r8
    addi r8, r8, 0x8
    stb r0, 0x0(r7)
    lbz r0, 0x1(r3)
    stb r0, 0x1(r7)
    lbz r0, 0x2(r3)
    stb r0, 0x2(r7)
    lbz r0, 0x3(r3)
    stb r0, 0x3(r7)
    lbz r0, 0x4(r3)
    stb r0, 0x4(r7)
    lbz r0, 0x5(r3)
    stb r0, 0x5(r7)
    lbz r0, 0x6(r3)
    stb r0, 0x6(r7)
    lbz r0, 0x7(r3)
    stb r0, 0x7(r7)
    addi r7, r7, 0x8
    bdnz lbl_802C31D8
lbl_802C3228:
    subf r0, r8, r31
    add r3, r30, r8
    mtctr r0
    cmpw r8, r31
    bge lbl_802C3250
lbl_802C323C:
    lbz r0, 0x0(r3)
    addi r3, r3, 0x1
    stb r0, 0x0(r7)
    addi r7, r7, 0x1
    bdnz lbl_802C323C
lbl_802C3250:
    mr r3, r29
    li r4, 0x0
    bl l2c_link_check_send_pkts
lbl_802C325C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: l2cu_send_peer_info_rsp
asm void l2cu_send_peer_info_rsp() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r6, r4
    li r4, 0x4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    li r5, 0xb
    stw r30, 0x8(r1)
    mr r30, r3
    lhz r3, 0x28(r3)
    bl l2cu_build_header
    cmpwi r3, 0x0
    bne lbl_802C32D8
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C3304
    lis r3, 0x8
    lis r4, lbl_803773A4@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803773A4@l
    bl LogMsg_0
    b lbl_802C3304
lbl_802C32D8:
    stb r31, 0x14(r3)
    extrwi r4, r31, 8, 16
    li r6, 0x1
    li r0, 0x0
    stb r4, 0x15(r3)
    mr r5, r3
    li r4, 0x0
    stb r6, 0x16(r3)
    stb r0, 0x17(r3)
    mr r3, r30
    bl l2c_link_check_send_pkts
lbl_802C3304:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: l2cu_allocate_ccb
asm s8 *l2cu_allocate_ccb(s8 *arg0) {
    nofralloc
    lis r7, lbl_80457040@ha
    addi r7, r7, lbl_80457040@l
    lwz r8, 0x7b0(r7)
    cmpwi r8, 0x0
    bne lbl_802C3338
    li r3, 0x0
    blr
lbl_802C3338:
    addi r0, r7, 0x178
    lis r4, 0x8421
    subf r0, r0, r8
    lwz r6, 0x8(r8)
    addi r4, r4, 0x843
    li r5, 0x1
    mulhw r4, r4, r0
    stw r6, 0x7b0(r7)
    stb r5, 0x0(r8)
    add r0, r4, r0
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    clrlwi r4, r0, 16
    addi r0, r4, 0x40
    sth r0, 0x14(r8)
    stw r3, 0x10(r8)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_802C33A0
    stw r8, 0xc(r3)
    li r0, 0x0
    stw r8, 0x8(r3)
    stw r0, 0x8(r8)
    stw r0, 0xc(r8)
    b lbl_802C33BC
lbl_802C33A0:
    li r0, 0x0
    stw r0, 0x8(r8)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r8)
    lwz r4, 0xc(r3)
    stw r8, 0x8(r4)
    stw r8, 0xc(r3)
lbl_802C33BC:
    lis r3, 0x1
    li r6, 0x2a0
    subi r0, r3, 0x1
    li r5, 0x1
    sth r0, 0x3c(r8)
    li r4, 0x0
    li r0, -0x1
    mr r3, r8
    sth r6, 0x3a(r8)
    sth r6, 0x38(r8)
    stb r5, 0x59(r8)
    stb r5, 0x41(r8)
    stw r4, 0x5c(r8)
    stw r4, 0x44(r8)
    stw r4, 0x60(r8)
    stw r4, 0x48(r8)
    stw r4, 0x64(r8)
    stw r4, 0x4c(r8)
    stw r0, 0x68(r8)
    stw r0, 0x50(r8)
    stw r0, 0x6c(r8)
    stw r0, 0x54(r8)
    stb r4, 0x34(r8)
    stw r4, 0x4(r8)
    stb r5, 0x37(r8)
    stw r8, 0x28(r8)
    blr
}

// asm_to_cpp: l2cu_release_ccb
asm void l2cu_release_ccb() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x0(r3)
    lwz r31, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_802C35B4
    li r0, 0x0
    stb r0, 0x0(r3)
    addi r3, r3, 0x18
    bl btu_stop_timer
    b lbl_802C3470
lbl_802C3464:
    addi r3, r30, 0x70
    bl GKI_dequeue
    bl GKI_freebuf
lbl_802C3470:
    lwz r0, 0x70(r30)
    cmpwi r0, 0x0
    bne lbl_802C3464
    li r4, 0x0
    stw r4, 0x10(r30)
    lwz r0, 0x8(r31)
    cmplw r0, r30
    bne lbl_802C34A8
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    stw r3, 0x8(r31)
    beq lbl_802C34DC
    stw r4, 0xc(r3)
    b lbl_802C34DC
lbl_802C34A8:
    lwz r0, 0xc(r31)
    cmplw r0, r30
    bne lbl_802C34C4
    lwz r3, 0xc(r30)
    stw r3, 0xc(r31)
    stw r4, 0x8(r3)
    b lbl_802C34DC
lbl_802C34C4:
    lwz r0, 0x8(r30)
    lwz r3, 0xc(r30)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r30)
    lwz r3, 0x8(r30)
    stw r0, 0xc(r3)
lbl_802C34DC:
    lis r4, lbl_80457040@ha
    addi r4, r4, lbl_80457040@l
    lwz r0, 0x7b0(r4)
    cmpwi r0, 0x0
    bne lbl_802C3508
    stw r30, 0x7b0(r4)
    li r0, 0x0
    stw r30, 0x7b4(r4)
    stw r0, 0x8(r30)
    stw r0, 0xc(r30)
    b lbl_802C3524
lbl_802C3508:
    li r0, 0x0
    stw r0, 0x8(r30)
    lwz r0, 0x7b4(r4)
    stw r0, 0xc(r30)
    lwz r3, 0x7b4(r4)
    stw r30, 0x8(r3)
    stw r30, 0x7b4(r4)
lbl_802C3524:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_802C35B4
    lwz r0, 0x4(r31)
    cmpwi r0, 0x4
    bne lbl_802C35B4
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_802C35B4
    lhz r3, 0x58(r31)
    cmpwi r3, 0x0
    bne lbl_802C359C
    lhz r3, 0x28(r31)
    li r4, 0x13
    bl btm_sec_disconnect
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_802C357C
    li r0, 0x5
    li r3, 0x1e
    stw r0, 0x4(r31)
    b lbl_802C359C
lbl_802C357C:
    cmpwi r0, 0x0
    bne lbl_802C3598
    li r0, 0x5
    lis r3, 0x1
    stw r0, 0x4(r31)
    subi r3, r3, 0x1
    b lbl_802C359C
lbl_802C3598:
    li r3, 0x1
lbl_802C359C:
    clrlwi r5, r3, 16
    cmplwi r5, 0xffff
    beq lbl_802C35B4
    addi r3, r31, 0x10
    li r4, 0x2
    bl btu_start_timer
lbl_802C35B4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: l2cu_find_ccb_by_cid
asm s8 *l2cu_find_ccb_by_cid(s32 arg0, u32 arg1) {
    nofralloc
    cmplwi r4, 0x40
    li r5, 0x0
    blt lbl_802C3620
    subi r0, r4, 0x40
    lis r4, lbl_80457040@ha
    clrlwi r0, r0, 16
    mulli r0, r0, 0x7c
    addi r4, r4, lbl_80457040@l
    add r4, r4, r0
    lbz r0, 0x178(r4)
    addi r5, r4, 0x178
    cmpwi r0, 0x0
    bne lbl_802C3608
    li r5, 0x0
    b lbl_802C3620
lbl_802C3608:
    cmpwi r3, 0x0
    beq lbl_802C3620
    lwz r0, 0x10(r5)
    cmplw r3, r0
    beq lbl_802C3620
    li r5, 0x0
lbl_802C3620:
    mr r3, r5
    blr
}

// asm_to_cpp: l2cu_allocate_rcb
asm u8 * l2cu_allocate_rcb() {
    nofralloc
    lis r4, lbl_80457040@ha
    li r0, 0x8
    addi r4, r4, lbl_80457040@l
    li r5, 0x0
    addi r4, r4, 0x650
    mtctr r0
lbl_802C3640:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_802C3660
    li r0, 0x1
    stb r0, 0x0(r4)
    sth r3, 0x2(r4)
    mr r3, r4
    blr
lbl_802C3660:
    addi r5, r5, 0x1
    addi r4, r4, 0x2c
    bdnz lbl_802C3640
    li r3, 0x0
    blr
}

// asm_to_cpp: l2cu_find_rcb_by_psm
asm u8 *l2cu_find_rcb_by_psm(u32 arg0) {
    nofralloc
    lis r4, lbl_80457040@ha
    li r0, 0x2
    addi r4, r4, lbl_80457040@l
    li r5, 0x0
    addi r4, r4, 0x650
    mtctr r0
lbl_802C369C:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_802C36BC
    lhz r0, 0x2(r4)
    cmplw r0, r3
    bne lbl_802C36BC
    mr r3, r4
    blr
lbl_802C36BC:
    lbzu r0, 0x2c(r4)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_802C36E0
    lhz r0, 0x2(r4)
    cmplw r0, r3
    bne lbl_802C36E0
    mr r3, r4
    blr
lbl_802C36E0:
    lbzu r0, 0x2c(r4)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_802C3704
    lhz r0, 0x2(r4)
    cmplw r0, r3
    bne lbl_802C3704
    mr r3, r4
    blr
lbl_802C3704:
    lbzu r0, 0x2c(r4)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_802C3728
    lhz r0, 0x2(r4)
    cmplw r0, r3
    bne lbl_802C3728
    mr r3, r4
    blr
lbl_802C3728:
    addi r5, r5, 0x1
    addi r4, r4, 0x2c
    bdnz lbl_802C369C
    li r3, 0x0
    blr
}

// asm_to_cpp: l2cu_process_peer_cfg_req
asm void l2cu_process_peer_cfg_req(s8 *arg0, s8 *arg1) {
    nofralloc
    lbz r0, 0x2(r4)
    li r6, 0x1
    li r7, 0x1
    li r8, 0x1
    cmpwi r0, 0x0
    beq lbl_802C3788
    lhz r0, 0x4(r4)
    cmplwi r0, 0x30
    blt lbl_802C377C
    cmplwi r0, 0x69b
    sth r0, 0x3a(r3)
    ble lbl_802C3788
    li r0, 0x69b
    sth r0, 0x4(r4)
    sth r0, 0x3a(r3)
    b lbl_802C3788
lbl_802C377C:
    li r0, 0x30
    li r6, 0x0
    sth r0, 0x4(r4)
lbl_802C3788:
    lbz r0, 0x20(r4)
    cmpwi r0, 0x0
    beq lbl_802C37B0
    lhz r0, 0x22(r4)
    cmpwi r0, 0x0
    bne lbl_802C37B0
    lis r5, 0x1
    li r8, 0x0
    subi r0, r5, 0x1
    sth r0, 0x22(r4)
lbl_802C37B0:
    lbz r0, 0x6(r4)
    cmpwi r0, 0x0
    beq lbl_802C3808
    lbz r0, 0x9(r4)
    cmplwi r0, 0x2
    bgt lbl_802C37FC
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r5, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r5, 0x18(r4)
    lwz r0, 0x1c(r4)
    stw r5, 0x50(r3)
    stw r0, 0x54(r3)
    b lbl_802C3808
lbl_802C37FC:
    li r0, 0x1
    li r7, 0x0
    stb r0, 0x9(r4)
lbl_802C3808:
    cmpwi r6, 0x0
    li r3, 0x0
    li r0, 0x0
    beq lbl_802C382C
    cmpwi r8, 0x0
    beq lbl_802C382C
    cmpwi r7, 0x0
    beq lbl_802C382C
    li r0, 0x1
lbl_802C382C:
    cmpwi r0, 0x0
    beq lbl_802C3838
    li r3, 0x1
lbl_802C3838:
    cmpwi r3, 0x0
    bnelr
    li r0, 0x1
    cmpwi r6, 0x0
    sth r0, 0x0(r4)
    beq lbl_802C3858
    li r0, 0x0
    stb r0, 0x2(r4)
lbl_802C3858:
    cmpwi r8, 0x0
    beq lbl_802C3868
    li r0, 0x0
    stb r0, 0x20(r4)
lbl_802C3868:
    cmpwi r7, 0x0
    beq lbl_802C3878
    li r0, 0x0
    stb r0, 0x6(r4)
lbl_802C3878:
    li r0, 0x0
    stb r0, 0x24(r4)
    blr
}

// asm_to_cpp: l2cu_process_peer_cfg_rsp
asm void l2cu_process_peer_cfg_rsp(s8 *arg0, s8 *arg1) {
    nofralloc
    lbz r0, 0x6(r4)
    cmpwi r0, 0x0
    beqlr
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r5, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r5, 0x18(r4)
    lwz r0, 0x1c(r4)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
    blr
}

// asm_to_cpp: l2cu_process_our_cfg_req
asm void l2cu_process_our_cfg_req(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lbz r0, 0x2(r4)
    cmpwi r0, 0x0
    beq lbl_802C3900
    lhz r0, 0x4(r4)
    cmplwi r0, 0x69b
    sth r0, 0x38(r3)
    ble lbl_802C3900
    li r0, 0x69b
    sth r0, 0x4(r4)
    sth r0, 0x38(r3)
lbl_802C3900:
    lbz r0, 0x6(r4)
    cmpwi r0, 0x0
    beq lbl_802C393C
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r5, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r5, 0x18(r4)
    lwz r0, 0x1c(r4)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
lbl_802C393C:
    lbz r0, 0x20(r4)
    cmpwi r0, 0x0
    beq lbl_802C39BC
    lhz r0, 0x22(r4)
    cmpwi r0, 0x0
    beq lbl_802C39BC
    sth r0, 0x3c(r3)
    lwz r31, 0x10(r3)
    lhz r3, 0x22(r4)
    lhz r0, 0x32(r31)
    cmplw r3, r0
    bge lbl_802C39BC
    sth r3, 0x32(r31)
    lhz r0, 0x22(r4)
    cmplwi r0, 0x4ff
    bgt lbl_802C39BC
    clrlslwi r3, r0, 16, 3
    lis r4, 0x6666
    addi r0, r3, 0x3
    addi r4, r4, 0x6667
    li r3, 0x2
    mulhw r0, r4, r0
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    clrlwi r30, r0, 16
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802C39BC
    lhz r4, 0x28(r31)
    mr r5, r30
    bl btsnd_hcic_write_auto_flush_tout
lbl_802C39BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: l2cu_process_our_cfg_rsp
asm void l2cu_process_our_cfg_rsp(s8 *arg0, s8 *arg1) {
    nofralloc
    lbz r0, 0x6(r4)
    cmpwi r0, 0x0
    beqlr
    lwz r5, 0x8(r4)
    lwz r0, 0xc(r4)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r5, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r5, 0x18(r4)
    lwz r0, 0x1c(r4)
    stw r5, 0x50(r3)
    stw r0, 0x54(r3)
    blr
}

// asm_to_cpp: l2cu_device_reset
asm void l2cu_device_reset(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80457040@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80457040@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    addi r30, r3, 0x8
lbl_802C3A38:
    lbz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_802C3A58
    lhz r3, 0x28(r30)
    cmplwi r3, 0xffff
    beq lbl_802C3A58
    li r4, 0xff
    bl l2c_link_hci_disc_comp
lbl_802C3A58:
    addi r31, r31, 0x1
    addi r30, r30, 0x5c
    cmpwi r31, 0x4
    blt lbl_802C3A38
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: l2cu_create_conn
asm s32 l2cu_create_conn(s8 *arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    li r0, 0x3
    lis r26, lbl_80457040@ha
    addi r4, r26, lbl_80457040@l
    lis r30, lbl_80453F78@ha
    stw r0, 0x4(r3)
    mr r31, r3
    addi r24, r4, 0x8
    addi r30, r30, lbl_80453F78@l
    li r25, 0x0
    lis r28, 0x8
    lis r29, lbl_80377404@ha
lbl_802C3AC0:
    cmplw r24, r31
    beq lbl_802C3B68
    lbz r0, 0x0(r24)
    cmpwi r0, 0x0
    beq lbl_802C3B68
    lbz r0, 0x30(r24)
    cmplwi r0, 0x1
    bne lbl_802C3B68
    addi r3, r24, 0x2a
    bl btm_is_sco_active_by_bdaddr
    lbz r0, lbl_80457040@l(r26)
    mr r27, r3
    cmplwi r0, 0x3
    blt lbl_802C3B18
    clrlwi r0, r27, 24
    addi r3, r28, 0x2
    cmplwi r0, 0x1
    addi r4, r29, lbl_80377404@l
    la r5, lbl_8049CFD0
    bne lbl_802C3B14
    la r5, lbl_8049CFC8
lbl_802C3B14:
    bl LogMsg_1
lbl_802C3B18:
    clrlwi r0, r27, 24
    cmplwi r0, 0x1
    beq lbl_802C3B68
    lbz r0, 0x640(r30)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_802C3B68
    li r3, 0x2
    li r0, 0x0
    stw r3, 0x4(r31)
    addi r3, r24, 0x2a
    li r4, 0x0
    li r5, 0x0
    stb r0, 0x30(r31)
    bl BTM_SwitchRole
    addi r3, r31, 0x10
    li r4, 0x2
    li r5, 0xa
    bl btu_start_timer
    li r3, 0x1
    b lbl_802C3B80
lbl_802C3B68:
    addi r25, r25, 0x1
    addi r24, r24, 0x5c
    cmpwi r25, 0x4
    blt lbl_802C3AC0
    mr r3, r31
    bl l2cu_create_conn_after_switch
lbl_802C3B80:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: l2cu_create_conn_after_switch
asm s32 l2cu_create_conn_after_switch() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl BTM_ReadLocalFeatures
    lbz r4, 0x0(r3)
    li r0, 0x3
    addi r3, r30, 0x2a
    stw r0, 0x4(r30)
    extrwi r31, r4, 1, 26
    bl BTM_InqDbRead
    cmpwi r3, 0x0
    beq lbl_802C3BE8
    lhz r0, 0x0(r3)
    lbz r5, 0xb(r3)
    lbz r6, 0xd(r3)
    ori r7, r0, 0x8000
    b lbl_802C3BF4
lbl_802C3BE8:
    li r5, 0x1
    li r6, 0x0
    li r7, 0x0
lbl_802C3BF4:
    mr r8, r31
    addi r3, r30, 0x2a
    li r4, 0x18
    bl btsnd_hcic_create_conn
    clrlwi. r0, r3, 24
    bne lbl_802C3C3C
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x1
    blt lbl_802C3C2C
    lis r4, lbl_80377448@ha
    lis r3, 0x8
    addi r4, r4, lbl_80377448@l
    bl LogMsg_0
lbl_802C3C2C:
    mr r3, r30
    bl l2cu_release_lcb
    li r3, 0x0
    b lbl_802C3C50
lbl_802C3C3C:
    addi r3, r30, 0x10
    li r4, 0x2
    li r5, 0x3c
    bl btu_start_timer
    li r3, 0x1
lbl_802C3C50:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: l2cu_find_lcb_by_state
asm u8 *l2cu_find_lcb_by_state(s32 arg0) {
    nofralloc
    lis r4, lbl_80457040@ha
    addi r4, r4, lbl_80457040@l
    lbzu r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_802C3C90
    lwz r0, 0x4(r4)
    cmpw r0, r3
    bne lbl_802C3C90
    mr r3, r4
    blr
lbl_802C3C90:
    lbzu r0, 0x5c(r4)
    cmpwi r0, 0x0
    beq lbl_802C3CB0
    lwz r0, 0x4(r4)
    cmpw r0, r3
    bne lbl_802C3CB0
    mr r3, r4
    blr
lbl_802C3CB0:
    lbzu r0, 0x5c(r4)
    cmpwi r0, 0x0
    beq lbl_802C3CD0
    lwz r0, 0x4(r4)
    cmpw r0, r3
    bne lbl_802C3CD0
    mr r3, r4
    blr
lbl_802C3CD0:
    lbzu r0, 0x5c(r4)
    cmpwi r0, 0x0
    beq lbl_802C3CF0
    lwz r0, 0x4(r4)
    cmpw r0, r3
    bne lbl_802C3CF0
    mr r3, r4
    blr
lbl_802C3CF0:
    li r3, 0x0
    blr
}

// asm_to_cpp: l2cu_lcb_disconnecting
asm s32 l2cu_lcb_disconnecting(void) {
    nofralloc
    lis r4, lbl_80457040@ha
    li r0, 0x2
    addi r4, r4, lbl_80457040@l
    li r3, 0x0
    addi r5, r4, 0x8
    li r6, 0x0
    mtctr r0
lbl_802C3D14:
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_802C3D70
    lwz r4, 0x8(r5)
    cmpwi r4, 0x0
    beq lbl_802C3D38
    lwz r0, 0x4(r5)
    cmpwi r0, 0x5
    bne lbl_802C3D40
lbl_802C3D38:
    li r3, 0x1
    blr
lbl_802C3D40:
    lwz r0, 0xc(r5)
    cmplw r4, r0
    bne lbl_802C3D70
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_802C3D70
    lwz r4, 0x4(r4)
    subi r0, r4, 0x7
    cmplwi r0, 0x1
    bgt lbl_802C3D70
    li r3, 0x1
    blr
lbl_802C3D70:
    lbz r0, 0x5c(r5)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_802C3DD0
    lwz r4, 0x64(r5)
    cmpwi r4, 0x0
    beq lbl_802C3D98
    lwz r0, 0x60(r5)
    cmpwi r0, 0x5
    bne lbl_802C3DA0
lbl_802C3D98:
    li r3, 0x1
    blr
lbl_802C3DA0:
    lwz r0, 0x68(r5)
    cmplw r4, r0
    bne lbl_802C3DD0
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_802C3DD0
    lwz r4, 0x4(r4)
    subi r0, r4, 0x7
    cmplwi r0, 0x1
    bgt lbl_802C3DD0
    li r3, 0x1
    blr
lbl_802C3DD0:
    addi r6, r6, 0x1
    addi r5, r5, 0xb8
    bdnz lbl_802C3D14
    blr
}
