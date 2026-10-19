#include "types.h"

// Translation unit: src/revolution/bte/l2c_csm.cpp
// Total functions: 11

// Global data symbols (@ha/@l)
extern u8 jumptable_803765E0[];
extern u8 jumptable_803766A0[];
extern u8 jumptable_80376744[];
extern u8 jumptable_80376808[];
extern u8 jumptable_80376970[];
extern u8 jumptable_80376A04[];
extern u8 jumptable_80376B98[];
extern u8 jumptable_80376C24[];
extern u8 jumptable_80376CE8[];
extern u8 jumptable_80376D80[];
extern u8 l2c_link_sec_comp[];
extern u8 lbl_80376620[];
extern u8 lbl_803767B0[];
extern u8 lbl_803767D8[];
extern u8 lbl_803769E0[];
extern u8 lbl_80376D58[];
extern u8 lbl_80376DF0[];
extern u8 lbl_80453A50[];
extern u8 lbl_80457040[];

// Forward declarations
extern void GKI_dequeue();
extern void GKI_enqueue();
extern void GKI_freebuf();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void btm_sec_abort_access_req();
extern void btm_sec_l2cap_access_req();
extern void btu_start_timer();
extern void btu_stop_timer();
extern void forward_peer_data();
extern void l2c_csm_closed();
extern void l2c_csm_config();
extern void l2c_csm_execute();
extern void l2c_csm_open();
extern void l2c_csm_orig_w4_sec_comp();
extern void l2c_csm_term_w4_sec_comp();
extern void l2c_csm_w4_l2ca_connect_rsp();
extern void l2c_csm_w4_l2ca_disconnect_rsp();
extern void l2c_csm_w4_l2cap_connect_rsp();
extern void l2c_csm_w4_l2cap_disconnect_rsp();
extern void l2c_link_check_send_pkts();
extern void l2cu_process_our_cfg_req();
extern void l2cu_process_our_cfg_rsp();
extern void l2cu_process_peer_cfg_req();
extern void l2cu_process_peer_cfg_rsp();
extern void l2cu_release_ccb();
extern void l2cu_send_peer_config_req();
extern void l2cu_send_peer_config_rsp();
extern void l2cu_send_peer_connect_req();
extern void l2cu_send_peer_connect_rsp();
extern void l2cu_send_peer_disc_req();
extern void l2cu_send_peer_disc_rsp();

// ----------------------------------------------------------------------------
// l2c_csm_execute
// ----------------------------------------------------------------------------
asm void l2c_csm_execute() {
    nofralloc
    lwz r0, 0x4(r3)
    cmplwi r0, 0x8
    bgtlr
    lis r6, jumptable_803765E0@ha
    slwi r0, r0, 2
    addi r6, r6, jumptable_803765E0@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    b l2c_csm_closed
    b l2c_csm_orig_w4_sec_comp
    b l2c_csm_term_w4_sec_comp
    b l2c_csm_w4_l2cap_connect_rsp
    b l2c_csm_w4_l2ca_connect_rsp
    b l2c_csm_config
    b l2c_csm_open
    b l2c_csm_w4_l2cap_disconnect_rsp
    b l2c_csm_w4_l2ca_disconnect_rsp
    blr
}

// ----------------------------------------------------------------------------
// l2c_csm_closed
// ----------------------------------------------------------------------------
asm void l2c_csm_closed() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r6, lbl_80457040@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_80457040@l(r6)
    lis r31, jumptable_803765E0@ha
    lwz r27, 0x18(r7)
    mr r28, r3
    cmplwi r0, 0x4
    lwz r30, 0x8(r7)
    lhz r29, 0x14(r3)
    mr r25, r4
    mr r26, r5
    addi r31, r31, jumptable_803765E0@l
    blt lbl_802BE92C
    lis r3, 0x8
    mr r5, r25
    addi r3, r3, 0x3
    addi r4, r31, 0x24
    bl LogMsg_1
lbl_802BE92C:
    cmplwi r25, 0x1e
    bgt lbl_802BEB4C
    lis r3, jumptable_803766A0@ha
    slwi r0, r25, 2
    addi r3, r3, jumptable_803766A0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BE970
    lis r3, 0x8
    lhz r5, 0x14(r28)
    addi r3, r3, 0x2
    addi r4, r31, 0x40
    bl LogMsg_1
lbl_802BE970:
    mr r3, r28
    bl l2cu_release_ccb
    mr r12, r27
    mr r3, r29
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802BEB4C
    li r0, 0x1
    lwz r5, 0x10(r28)
    stw r0, 0x4(r28)
    lis r7, l2c_link_sec_comp@ha
    lwz r4, 0x30(r28)
    addi r3, r5, 0x2a
    lhz r5, 0x28(r5)
    addi r7, r7, l2c_link_sec_comp@l
    lhz r4, 0x2(r4)
    li r6, 0x1
    bl btm_sec_l2cap_access_req
    b lbl_802BEB4C
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BE9E8
    lis r3, 0x8
    lhz r5, 0x14(r28)
    lbz r6, 0x6(r26)
    addi r3, r3, 0x2
    addi r4, r31, 0x84
    bl LogMsg_2
lbl_802BE9E8:
    mr r3, r28
    bl l2cu_release_ccb
    mr r12, r30
    mr r3, r29
    lbz r4, 0x6(r26)
    mtctr r12
    bctrl
    b lbl_802BEB4C
    lwz r3, 0x10(r28)
    lis r7, l2c_link_sec_comp@ha
    lwz r4, 0x30(r28)
    addi r7, r7, l2c_link_sec_comp@l
    lhz r5, 0x28(r3)
    addi r3, r3, 0x2a
    lhz r4, 0x2(r4)
    li r6, 0x1
    bl btm_sec_l2cap_access_req
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_802BEB4C
    li r0, 0x1
    stw r0, 0x4(r28)
    b lbl_802BEB4C
    mr r3, r28
    bl l2cu_send_peer_connect_req
    li r0, 0x3
    addi r3, r28, 0x18
    stw r0, 0x4(r28)
    li r4, 0x3
    li r5, 0x3c
    bl btu_start_timer
    b lbl_802BEB4C
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BEA94
    lis r3, 0x8
    lis r6, 0x1
    lhz r5, 0x14(r28)
    addi r3, r3, 0x2
    addi r4, r31, 0x84
    subi r6, r6, 0x1112
    bl LogMsg_2
lbl_802BEA94:
    mr r3, r28
    bl l2cu_release_ccb
    mr r12, r30
    mr r3, r29
    li r4, 0x3
    mtctr r12
    bctrl
    b lbl_802BEB4C
    li r0, 0x2
    lwz r5, 0x10(r28)
    stw r0, 0x4(r28)
    lis r7, l2c_link_sec_comp@ha
    lwz r4, 0x30(r28)
    addi r3, r5, 0x2a
    lhz r5, 0x28(r5)
    addi r7, r7, l2c_link_sec_comp@l
    lhz r4, 0x2(r4)
    li r6, 0x0
    bl btm_sec_l2cap_access_req
    b lbl_802BEB4C
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BEB10
    lis r3, 0x8
    lis r6, 0x1
    lhz r5, 0x14(r28)
    addi r3, r3, 0x2
    addi r4, r31, 0x84
    subi r6, r6, 0x1112
    bl LogMsg_2
lbl_802BEB10:
    mr r3, r28
    bl l2cu_release_ccb
    lis r3, 0x1
    mr r12, r30
    subi r0, r3, 0x1112
    mr r3, r29
    clrlwi r4, r0, 16
    mtctr r12
    bctrl
    b lbl_802BEB4C
    mr r3, r26
    bl GKI_freebuf
    b lbl_802BEB4C
    mr r3, r28
    bl l2cu_release_ccb
lbl_802BEB4C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// l2c_csm_orig_w4_sec_comp
// ----------------------------------------------------------------------------
asm void l2c_csm_orig_w4_sec_comp() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r6, lbl_80457040@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_80457040@l(r6)
    lis r30, jumptable_803765E0@ha
    lwz r29, 0x18(r7)
    mr r31, r3
    cmplwi r0, 0x4
    lwz r28, 0x8(r7)
    lhz r27, 0x14(r3)
    mr r25, r4
    mr r26, r5
    addi r30, r30, jumptable_803765E0@l
    blt lbl_802BEBC0
    lis r3, 0x8
    mr r5, r25
    addi r3, r3, 0x3
    addi r4, r30, 0x13c
    bl LogMsg_1
lbl_802BEBC0:
    subi r0, r25, 0x3
    cmplwi r0, 0x1a
    bgt lbl_802BECBC
    lis r3, jumptable_80376744@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80376744@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BEC08
    lis r3, 0x8
    lhz r5, 0x14(r31)
    addi r3, r3, 0x2
    addi r4, r30, 0x40
    bl LogMsg_1
lbl_802BEC08:
    mr r3, r31
    bl l2cu_release_ccb
    mr r12, r29
    mr r3, r27
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802BECBC
    li r0, 0x3
    addi r3, r31, 0x18
    stw r0, 0x4(r31)
    li r4, 0x3
    li r5, 0x3c
    bl btu_start_timer
    mr r3, r31
    bl l2cu_send_peer_connect_req
    li r0, 0x0
    stb r0, 0x37(r31)
    b lbl_802BECBC
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BEC7C
    lis r3, 0x8
    lhz r5, 0x14(r31)
    addi r3, r3, 0x2
    addi r4, r30, 0x84
    li r6, 0x5
    bl LogMsg_2
lbl_802BEC7C:
    mr r3, r31
    bl l2cu_release_ccb
    mr r12, r28
    mr r3, r27
    li r4, 0x5
    mtctr r12
    bctrl
    b lbl_802BECBC
    mr r3, r26
    bl GKI_freebuf
    b lbl_802BECBC
    lwz r3, 0x10(r31)
    addi r3, r3, 0x2a
    bl btm_sec_abort_access_req
    mr r3, r31
    bl l2cu_release_ccb
lbl_802BECBC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// l2c_csm_term_w4_sec_comp
// ----------------------------------------------------------------------------
asm void l2c_csm_term_w4_sec_comp() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80457040@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, lbl_80457040@l(r6)
    cmplwi r0, 0x4
    blt lbl_802BED20
    lis r3, 0x8
    lis r4, lbl_803767B0@ha
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_803767B0@l
    bl LogMsg_1
lbl_802BED20:
    subi r0, r30, 0x3
    cmplwi r0, 0x1a
    bgt lbl_802BEE20
    lis r3, jumptable_80376808@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80376808@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x10(r29)
    addi r3, r3, 0x2a
    bl btm_sec_abort_access_req
    mr r3, r29
    bl l2cu_release_ccb
    b lbl_802BEE20
    li r0, 0x4
    addi r3, r29, 0x18
    stw r0, 0x4(r29)
    li r4, 0x3
    li r5, 0x3c
    bl btu_start_timer
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BED9C
    lis r3, 0x8
    lis r4, lbl_803767D8@ha
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r4, lbl_803767D8@l
    bl LogMsg_1
lbl_802BED9C:
    lwz r5, 0x30(r29)
    lwz r3, 0x10(r29)
    lwz r12, 0x4(r5)
    addi r3, r3, 0x2a
    lhz r4, 0x14(r29)
    lhz r5, 0x2(r5)
    lbz r6, 0x36(r29)
    mtctr r12
    bctrl
    b lbl_802BEE20
    mr r3, r29
    li r4, 0x3
    li r5, 0x0
    bl l2cu_send_peer_connect_rsp
    mr r3, r29
    bl l2cu_release_ccb
    b lbl_802BEE20
    mr r3, r31
    bl GKI_freebuf
    b lbl_802BEE20
    mr r3, r29
    bl l2cu_release_ccb
    b lbl_802BEE20
    lwz r3, 0x10(r29)
    lbz r4, 0x36(r29)
    lhz r5, 0x14(r29)
    lhz r6, 0x16(r29)
    bl l2cu_send_peer_disc_rsp
    lwz r3, 0x10(r29)
    addi r3, r3, 0x2a
    bl btm_sec_abort_access_req
    mr r3, r29
    bl l2cu_release_ccb
lbl_802BEE20:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// l2c_csm_w4_l2cap_connect_rsp
// ----------------------------------------------------------------------------
asm void l2c_csm_w4_l2cap_connect_rsp() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r6, lbl_80457040@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_80457040@l(r6)
    lis r31, jumptable_803765E0@ha
    lwz r28, 0x18(r7)
    mr r29, r3
    cmplwi r0, 0x4
    lwz r27, 0x8(r7)
    lhz r30, 0x14(r3)
    mr r25, r4
    mr r26, r5
    addi r31, r31, jumptable_803765E0@l
    blt lbl_802BEE98
    lis r3, 0x8
    mr r5, r25
    addi r3, r3, 0x3
    addi r4, r31, 0x294
    bl LogMsg_1
lbl_802BEE98:
    subi r0, r25, 0x3
    cmplwi r0, 0x1b
    bgt lbl_802BF068
    lis r3, jumptable_80376970@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80376970@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x0
    lis r3, lbl_80457040@ha
    stw r0, 0x4(r29)
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BEEE8
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x40
    bl LogMsg_1
lbl_802BEEE8:
    mr r3, r29
    bl l2cu_release_ccb
    mr r12, r28
    mr r3, r30
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802BF068
    lhz r5, 0xe(r26)
    li r0, 0x5
    addi r3, r29, 0x18
    li r4, 0x3
    sth r5, 0x16(r29)
    li r5, 0x1e
    stw r0, 0x4(r29)
    bl btu_start_timer
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BEF4C
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x2bc
    bl LogMsg_1
lbl_802BEF4C:
    lwz r5, 0x30(r29)
    li r4, 0x0
    lhz r3, 0x14(r29)
    lwz r12, 0x8(r5)
    mtctr r12
    bctrl
    b lbl_802BF068
    addi r3, r29, 0x18
    li r4, 0x3
    li r5, 0x78
    bl btu_start_timer
    lwz r3, 0x30(r29)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_802BF068
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BEFA8
    lis r3, 0x8
    addi r4, r31, 0x2f4
    addi r3, r3, 0x2
    bl LogMsg_0
lbl_802BEFA8:
    lwz r4, 0x30(r29)
    li r3, 0x0
    lwz r12, 0xc(r4)
    mtctr r12
    bctrl
    b lbl_802BF068
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BEFE8
    lis r3, 0x8
    lhz r5, 0x14(r29)
    lhz r6, 0xa(r26)
    addi r3, r3, 0x2
    addi r4, r31, 0x318
    bl LogMsg_2
lbl_802BEFE8:
    mr r3, r29
    bl l2cu_release_ccb
    mr r12, r27
    mr r3, r30
    lhz r4, 0xa(r26)
    mtctr r12
    bctrl
    b lbl_802BF068
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF02C
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x358
    bl LogMsg_1
lbl_802BF02C:
    mr r3, r29
    bl l2cu_release_ccb
    lis r3, 0x1
    mr r12, r27
    subi r0, r3, 0x1112
    mr r3, r30
    clrlwi r4, r0, 16
    mtctr r12
    bctrl
    b lbl_802BF068
    mr r3, r29
    bl l2cu_release_ccb
    b lbl_802BF068
    mr r3, r26
    bl GKI_freebuf
lbl_802BF068:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// l2c_csm_w4_l2ca_connect_rsp
// ----------------------------------------------------------------------------
asm void l2c_csm_w4_l2ca_connect_rsp() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r6, lbl_80457040@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_80457040@l(r6)
    mr r31, r3
    lwz r30, 0x18(r7)
    mr r27, r4
    cmplwi r0, 0x4
    lhz r29, 0x14(r3)
    mr r28, r5
    blt lbl_802BF0D4
    lis r3, 0x8
    lis r4, lbl_803769E0@ha
    mr r5, r27
    addi r3, r3, 0x3
    addi r4, r4, lbl_803769E0@l
    bl LogMsg_1
lbl_802BF0D4:
    subi r0, r27, 0x3
    cmplwi r0, 0x1b
    bgt lbl_802BF240
    lis r3, jumptable_80376A04@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80376A04@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF120
    lis r3, 0x8
    lis r4, lbl_80376620@ha
    lhz r5, 0x14(r31)
    addi r3, r3, 0x2
    addi r4, r4, lbl_80376620@l
    bl LogMsg_1
lbl_802BF120:
    mr r3, r31
    bl l2cu_release_ccb
    mr r12, r30
    mr r3, r29
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802BF240
    cmpwi r28, 0x0
    beq lbl_802BF154
    lhz r4, 0xa(r28)
    cmpwi r4, 0x0
    bne lbl_802BF180
lbl_802BF154:
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl l2cu_send_peer_connect_rsp
    li r0, 0x5
    addi r3, r31, 0x18
    stw r0, 0x4(r31)
    li r4, 0x3
    li r5, 0x1e
    bl btu_start_timer
    b lbl_802BF240
lbl_802BF180:
    lhz r5, 0xc(r28)
    mr r3, r31
    bl l2cu_send_peer_connect_rsp
    addi r3, r31, 0x18
    li r4, 0x3
    li r5, 0x78
    bl btu_start_timer
    b lbl_802BF240
    lhz r4, 0xa(r28)
    mr r3, r31
    lhz r5, 0xc(r28)
    bl l2cu_send_peer_connect_rsp
    mr r3, r31
    bl l2cu_release_ccb
    b lbl_802BF240
    mr r3, r31
    li r4, 0x2
    li r5, 0x0
    bl l2cu_send_peer_connect_rsp
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF1F4
    lis r3, 0x8
    lis r4, lbl_80376620@ha
    lhz r5, 0x14(r31)
    addi r3, r3, 0x2
    addi r4, r4, lbl_80376620@l
    bl LogMsg_1
lbl_802BF1F4:
    mr r3, r31
    bl l2cu_release_ccb
    mr r12, r30
    mr r3, r29
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802BF240
    mr r3, r28
    bl GKI_freebuf
    b lbl_802BF240
    mr r3, r31
    bl l2cu_send_peer_disc_req
    li r0, 0x7
    addi r3, r31, 0x18
    stw r0, 0x4(r31)
    li r4, 0x3
    li r5, 0x1e
    bl btu_start_timer
lbl_802BF240:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// l2c_csm_config
// ----------------------------------------------------------------------------
asm void l2c_csm_config() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r6, lbl_80457040@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_80457040@l(r6)
    lis r31, jumptable_803765E0@ha
    lwz r28, 0x18(r7)
    mr r30, r5
    cmplwi r0, 0x4
    lhz r27, 0x14(r3)
    mr r29, r3
    mr r26, r4
    addi r31, r31, jumptable_803765E0@l
    blt lbl_802BF2B0
    lis r3, 0x8
    mr r5, r26
    addi r3, r3, 0x3
    addi r4, r31, 0x494
    bl LogMsg_1
lbl_802BF2B0:
    subi r0, r26, 0x3
    cmplwi r0, 0x1b
    bgt lbl_802BF608
    lis r3, jumptable_80376B98@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80376B98@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF2F8
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x40
    bl LogMsg_1
lbl_802BF2F8:
    mr r3, r29
    bl l2cu_release_ccb
    mr r12, r28
    mr r3, r27
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802BF608
    mr r3, r29
    mr r4, r30
    bl l2cu_process_peer_cfg_req
    clrlwi. r0, r3, 24
    beq lbl_802BF36C
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF350
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x4b0
    bl LogMsg_1
lbl_802BF350:
    lwz r5, 0x30(r29)
    mr r4, r30
    lhz r3, 0x14(r29)
    lwz r12, 0x10(r5)
    mtctr r12
    bctrl
    b lbl_802BF608
lbl_802BF36C:
    mr r3, r29
    mr r4, r30
    bl l2cu_send_peer_config_rsp
    b lbl_802BF608
    mr r3, r29
    mr r4, r30
    bl l2cu_process_peer_cfg_rsp
    lbz r0, 0x34(r29)
    ori r3, r0, 0x2
    clrlwi. r0, r3, 31
    stb r3, 0x34(r29)
    beq lbl_802BF3B8
    li r0, 0x6
    addi r3, r29, 0x18
    stw r0, 0x4(r29)
    bl btu_stop_timer
    mr r3, r29
    li r4, 0x0
    bl forward_peer_data
lbl_802BF3B8:
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF3DC
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x4e0
    bl LogMsg_1
lbl_802BF3DC:
    lwz r5, 0x30(r29)
    mr r4, r30
    lhz r3, 0x14(r29)
    lwz r12, 0x14(r5)
    mtctr r12
    bctrl
    b lbl_802BF608
    addi r3, r29, 0x18
    bl btu_stop_timer
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF428
    lis r3, 0x8
    lhz r5, 0x14(r29)
    lhz r6, 0x0(r30)
    addi r3, r3, 0x2
    addi r4, r31, 0x510
    bl LogMsg_2
lbl_802BF428:
    lwz r5, 0x30(r29)
    mr r4, r30
    lhz r3, 0x14(r29)
    lwz r12, 0x14(r5)
    mtctr r12
    bctrl
    b lbl_802BF608
    addi r3, r29, 0x18
    li r4, 0x3
    li r5, 0x1e
    bl btu_start_timer
    li r0, 0x8
    lis r3, lbl_80457040@ha
    stw r0, 0x4(r29)
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF480
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x54c
    bl LogMsg_1
lbl_802BF480:
    lwz r5, 0x30(r29)
    li r4, 0x1
    lhz r3, 0x14(r29)
    lwz r12, 0x18(r5)
    mtctr r12
    bctrl
    b lbl_802BF608
    mr r3, r29
    mr r4, r30
    bl l2cu_process_our_cfg_req
    mr r3, r29
    mr r4, r30
    bl l2cu_send_peer_config_req
    addi r3, r29, 0x18
    li r4, 0x3
    li r5, 0x1e
    bl btu_start_timer
    b lbl_802BF608
    mr r3, r29
    mr r4, r30
    bl l2cu_process_our_cfg_rsp
    lbz r0, 0x34(r29)
    ori r3, r0, 0x1
    rlwinm. r0, r3, 0, 30, 30
    stb r3, 0x34(r29)
    beq lbl_802BF504
    li r0, 0x6
    addi r3, r29, 0x18
    stw r0, 0x4(r29)
    bl btu_stop_timer
    mr r3, r29
    li r4, 0x0
    bl forward_peer_data
lbl_802BF504:
    mr r3, r29
    mr r4, r30
    bl l2cu_send_peer_config_rsp
    b lbl_802BF608
    mr r3, r29
    mr r4, r30
    bl l2cu_send_peer_config_rsp
    addi r3, r29, 0x18
    li r4, 0x3
    li r5, 0x1e
    bl btu_start_timer
    b lbl_802BF608
    mr r3, r29
    bl l2cu_send_peer_disc_req
    li r0, 0x7
    addi r3, r29, 0x18
    stw r0, 0x4(r29)
    li r4, 0x3
    li r5, 0x1e
    bl btu_start_timer
    b lbl_802BF608
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF57C
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x58c
    bl LogMsg_1
lbl_802BF57C:
    lwz r5, 0x30(r29)
    mr r4, r30
    lhz r3, 0x14(r29)
    lwz r12, 0x24(r5)
    mtctr r12
    bctrl
    b lbl_802BF608
    lbz r0, 0x34(r29)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_802BF5B4
    mr r4, r30
    addi r3, r29, 0x70
    bl GKI_enqueue
    b lbl_802BF608
lbl_802BF5B4:
    mr r3, r30
    bl GKI_freebuf
    b lbl_802BF608
    mr r3, r29
    bl l2cu_send_peer_disc_req
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF5EC
    lis r3, 0x8
    lhz r5, 0x14(r29)
    addi r3, r3, 0x2
    addi r4, r31, 0x40
    bl LogMsg_1
lbl_802BF5EC:
    mr r3, r29
    bl l2cu_release_ccb
    mr r12, r28
    mr r3, r27
    li r4, 0x0
    mtctr r12
    bctrl
lbl_802BF608:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// l2c_csm_open
// ----------------------------------------------------------------------------
asm void l2c_csm_open() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r6, lbl_80457040@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_80457040@l(r6)
    lis r30, jumptable_803765E0@ha
    lwz r29, 0x18(r7)
    mr r31, r3
    cmplwi r0, 0x4
    lhz r28, 0x14(r3)
    mr r26, r4
    mr r27, r5
    addi r30, r30, jumptable_803765E0@l
    blt lbl_802BF678
    lis r3, 0x8
    mr r5, r26
    addi r3, r3, 0x3
    addi r4, r30, 0x628
    bl LogMsg_1
lbl_802BF678:
    subi r0, r26, 0x3
    cmplwi r0, 0x1a
    bgt lbl_802BF864
    lis r3, jumptable_80376C24@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80376C24@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF6C0
    lis r3, 0x8
    lhz r5, 0x14(r31)
    addi r3, r3, 0x2
    addi r4, r30, 0x40
    bl LogMsg_1
lbl_802BF6C0:
    mr r3, r31
    bl l2cu_release_ccb
    mr r12, r29
    mr r3, r28
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802BF864
    lwz r3, 0x30(r31)
    lwz r12, 0x20(r3)
    cmpwi r12, 0x0
    beq lbl_802BF864
    lwz r3, 0x10(r31)
    addi r3, r3, 0x2a
    mtctr r12
    bctrl
    b lbl_802BF864
    lwz r28, 0x4(r31)
    li r3, 0x5
    lbz r29, 0x34(r31)
    li r0, 0x0
    stw r3, 0x4(r31)
    addi r3, r31, 0x18
    li r4, 0x3
    li r5, 0x1e
    stb r0, 0x34(r31)
    bl btu_start_timer
    mr r3, r31
    mr r4, r27
    bl l2cu_process_peer_cfg_req
    clrlwi. r0, r3, 24
    beq lbl_802BF75C
    lwz r5, 0x30(r31)
    mr r4, r27
    lhz r3, 0x14(r31)
    lwz r12, 0x10(r5)
    mtctr r12
    bctrl
    b lbl_802BF864
lbl_802BF75C:
    addi r3, r31, 0x18
    bl btu_stop_timer
    stw r28, 0x4(r31)
    mr r3, r31
    mr r4, r27
    stb r29, 0x34(r31)
    bl l2cu_send_peer_config_rsp
    b lbl_802BF864
    li r0, 0x8
    addi r3, r31, 0x18
    stw r0, 0x4(r31)
    li r4, 0x3
    li r5, 0x1e
    bl btu_start_timer
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF7B8
    lis r3, 0x8
    lhz r5, 0x14(r31)
    addi r3, r3, 0x2
    addi r4, r30, 0x54c
    bl LogMsg_1
lbl_802BF7B8:
    lwz r5, 0x30(r31)
    li r4, 0x1
    lhz r3, 0x14(r31)
    lwz r12, 0x18(r5)
    mtctr r12
    bctrl
    b lbl_802BF864
    lwz r5, 0x30(r31)
    mr r4, r27
    lhz r3, 0x14(r31)
    lwz r12, 0x24(r5)
    mtctr r12
    bctrl
    b lbl_802BF864
    mr r3, r31
    bl l2cu_send_peer_disc_req
    li r0, 0x7
    addi r3, r31, 0x18
    stw r0, 0x4(r31)
    li r4, 0x3
    li r5, 0x1e
    bl btu_start_timer
    b lbl_802BF864
    lhz r0, 0x14(r31)
    mr r3, r31
    mr r4, r27
    sth r0, 0x0(r27)
    bl forward_peer_data
    b lbl_802BF864
    mr r3, r31
    mr r4, r27
    bl l2cu_process_our_cfg_req
    mr r3, r31
    mr r4, r27
    bl l2cu_send_peer_config_req
    li r3, 0x5
    li r0, 0x0
    stw r3, 0x4(r31)
    addi r3, r31, 0x18
    li r4, 0x3
    li r5, 0x1e
    stb r0, 0x34(r31)
    bl btu_start_timer
lbl_802BF864:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// l2c_csm_w4_l2cap_disconnect_rsp
// ----------------------------------------------------------------------------
asm void l2c_csm_w4_l2cap_disconnect_rsp() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r6, lbl_80457040@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_80457040@l(r6)
    lis r31, jumptable_803765E0@ha
    lwz r30, 0x1c(r7)
    mr r25, r3
    cmplwi r0, 0x4
    lwz r28, 0x18(r7)
    lhz r29, 0x14(r3)
    mr r26, r4
    mr r27, r5
    addi r31, r31, jumptable_803765E0@l
    blt lbl_802BF8D8
    lis r3, 0x8
    mr r5, r26
    addi r3, r3, 0x3
    addi r4, r31, 0x6b0
    bl LogMsg_1
lbl_802BF8D8:
    subi r0, r26, 0x3
    cmplwi r0, 0x1b
    bgt lbl_802BFA48
    lis r3, jumptable_80376CE8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80376CE8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF920
    lis r3, 0x8
    lhz r5, 0x14(r25)
    addi r3, r3, 0x2
    addi r4, r31, 0x40
    bl LogMsg_1
lbl_802BF920:
    mr r3, r25
    bl l2cu_release_ccb
    mr r12, r28
    mr r3, r29
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802BFA48
    mr r3, r25
    bl l2cu_release_ccb
    cmpwi r30, 0x0
    beq lbl_802BFA48
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF974
    lis r3, 0x8
    mr r5, r29
    addi r3, r3, 0x2
    addi r4, r31, 0x6d8
    bl LogMsg_1
lbl_802BF974:
    mr r12, r30
    mr r3, r29
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802BFA48
    lwz r3, 0x10(r25)
    lbz r4, 0x36(r25)
    lhz r5, 0x14(r25)
    lhz r6, 0x16(r25)
    bl l2cu_send_peer_disc_rsp
    mr r3, r25
    bl l2cu_release_ccb
    cmpwi r30, 0x0
    beq lbl_802BFA48
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BF9D4
    lis r3, 0x8
    mr r5, r29
    addi r3, r3, 0x2
    addi r4, r31, 0x6d8
    bl LogMsg_1
lbl_802BF9D4:
    mr r12, r30
    mr r3, r29
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802BFA48
    mr r3, r25
    bl l2cu_release_ccb
    cmpwi r30, 0x0
    beq lbl_802BFA48
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BFA20
    lis r3, 0x8
    mr r5, r29
    addi r3, r3, 0x2
    addi r4, r31, 0x6d8
    bl LogMsg_1
lbl_802BFA20:
    lis r3, 0x1
    mr r12, r30
    subi r0, r3, 0x1112
    mr r3, r29
    clrlwi r4, r0, 16
    mtctr r12
    bctrl
    b lbl_802BFA48
    mr r3, r27
    bl GKI_freebuf
lbl_802BFA48:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// l2c_csm_w4_l2ca_disconnect_rsp
// ----------------------------------------------------------------------------
asm void l2c_csm_w4_l2ca_disconnect_rsp() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r6, lbl_80457040@ha
    lwz r7, 0x30(r3)
    lbz r0, lbl_80457040@l(r6)
    mr r27, r3
    lwz r31, 0x18(r7)
    mr r28, r4
    cmplwi r0, 0x4
    lhz r30, 0x14(r3)
    mr r29, r5
    blt lbl_802BFAB4
    lis r3, 0x8
    lis r4, lbl_80376D58@ha
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r4, lbl_80376D58@l
    bl LogMsg_1
lbl_802BFAB4:
    subi r0, r28, 0x3
    cmplwi r0, 0x1b
    bgt lbl_802BFBA4
    lis r3, jumptable_80376D80@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80376D80@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BFB00
    lis r3, 0x8
    lis r4, lbl_80376620@ha
    lhz r5, 0x14(r27)
    addi r3, r3, 0x2
    addi r4, r4, lbl_80376620@l
    bl LogMsg_1
lbl_802BFB00:
    mr r3, r27
    bl l2cu_release_ccb
    mr r12, r31
    mr r3, r30
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802BFBA4
    lwz r3, 0x10(r27)
    lbz r4, 0x36(r27)
    lhz r5, 0x14(r27)
    lhz r6, 0x16(r27)
    bl l2cu_send_peer_disc_rsp
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x3
    blt lbl_802BFB5C
    lis r3, 0x8
    lis r4, lbl_80376620@ha
    lhz r5, 0x14(r27)
    addi r3, r3, 0x2
    addi r4, r4, lbl_80376620@l
    bl LogMsg_1
lbl_802BFB5C:
    mr r3, r27
    bl l2cu_release_ccb
    mr r12, r31
    mr r3, r30
    li r4, 0x0
    mtctr r12
    bctrl
    b lbl_802BFBA4
    lwz r3, 0x10(r27)
    lbz r4, 0x36(r27)
    lhz r5, 0x14(r27)
    lhz r6, 0x16(r27)
    bl l2cu_send_peer_disc_rsp
    mr r3, r27
    bl l2cu_release_ccb
    b lbl_802BFBA4
    mr r3, r29
    bl GKI_freebuf
lbl_802BFBA4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// forward_peer_data
// ----------------------------------------------------------------------------
asm void forward_peer_data() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r27, r3
    mr r28, r4
    beq lbl_802BFC04
    lhz r0, 0x78(r3)
    cmpwi r0, 0x0
    beq lbl_802BFC04
    addi r3, r3, 0x70
    bl GKI_enqueue
    addi r3, r27, 0x70
    bl GKI_dequeue
    mr r28, r3
    b lbl_802BFC18
lbl_802BFC04:
    cmpwi r4, 0x0
    bne lbl_802BFC18
    addi r3, r3, 0x70
    bl GKI_dequeue
    mr r28, r3
lbl_802BFC18:
    lis r31, lbl_80453A50@ha
    lis r30, lbl_80376DF0@ha
    addi r31, r31, lbl_80453A50@l
    lis r29, lbl_80457040@ha
    b lbl_802BFD40
lbl_802BFC2C:
    lhz r5, 0x4(r28)
    cmplwi r5, 0x9
    bge lbl_802BFC68
    lbz r0, lbl_80457040@l(r29)
    cmplwi r0, 0x1
    blt lbl_802BFC50
    addi r4, r30, lbl_80376DF0@l
    lis r3, 0x8
    bl LogMsg_1
lbl_802BFC50:
    mr r3, r28
    bl GKI_freebuf
    addi r3, r27, 0x70
    bl GKI_dequeue
    mr r28, r3
    b lbl_802BFD40
lbl_802BFC68:
    subi r0, r5, 0x8
    sth r0, 0x4(r28)
    clrlwi r0, r0, 16
    add r5, r28, r0
    lhz r4, 0x2(r28)
    addi r3, r5, 0xa
    addi r0, r4, 0x4
    sth r0, 0x2(r28)
    lwz r4, 0x10(r27)
    lhz r0, 0x28(r4)
    ori r0, r0, 0x2000
    stb r0, 0x8(r5)
    lwz r4, 0x10(r27)
    lhz r0, 0x28(r4)
    ori r0, r0, 0x2000
    srawi r0, r0, 8
    stb r0, 0x9(r5)
    lhz r0, 0x7c(r31)
    lhz r4, 0x2(r28)
    cmplw r4, r0
    ble lbl_802BFCD4
    stb r0, 0x0(r3)
    lhz r0, 0x7c(r31)
    srawi r0, r0, 8
    stb r0, 0x1(r3)
    addi r3, r3, 0x2
    b lbl_802BFCE8
lbl_802BFCD4:
    stb r4, 0x0(r3)
    lhz r0, 0x2(r28)
    srawi r0, r0, 8
    stb r0, 0x1(r3)
    addi r3, r3, 0x2
lbl_802BFCE8:
    lhz r6, 0x2(r28)
    mr r5, r28
    li r4, 0x0
    subi r0, r6, 0x4
    stb r0, 0x0(r3)
    lhz r6, 0x2(r28)
    subi r0, r6, 0x4
    srawi r0, r0, 8
    stb r0, 0x1(r3)
    lhz r0, 0x16(r27)
    stb r0, 0x2(r3)
    lhz r0, 0x16(r27)
    srawi r0, r0, 8
    stb r0, 0x3(r3)
    lhz r3, 0x2(r28)
    addi r0, r3, 0x4
    sth r0, 0x2(r28)
    lwz r3, 0x10(r27)
    bl l2c_link_check_send_pkts
    addi r3, r27, 0x70
    bl GKI_dequeue
    mr r28, r3
lbl_802BFD40:
    cmpwi r28, 0x0
    bne lbl_802BFC2C
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

