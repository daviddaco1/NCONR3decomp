#include "types.h"

// Translation unit: src/revolution/bte/sdp_main.cpp
// Total functions: 11

// Global data symbols (@ha/@l)
extern u8 lbl_803783B8[];
extern u8 lbl_80378430[];
extern u8 lbl_803784F0[];
extern u8 lbl_8037851C[];
extern u8 lbl_80378574[];
extern u8 lbl_80378590[];
extern u8 lbl_803785BC[];
extern u8 lbl_803785E0[];
extern u8 lbl_80378618[];
extern u8 lbl_80378690[];
extern u8 lbl_803786C0[];
extern u8 lbl_803786E8[];
extern u8 lbl_80457C40[];

// Forward declarations
extern void BTM_SetSecurityLevel();
extern void GKI_freebuf();
extern void L2CA_ConfigReq();
extern void L2CA_ConfigRsp();
extern void L2CA_ConnectReq();
extern void L2CA_ConnectRsp();
extern void L2CA_DisconnectReq();
extern void L2CA_DisconnectRsp();
extern void L2CA_Register();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void btu_start_timer();
extern void memcpy();
extern void memset();
extern void sdp_config_cfm();
extern void sdp_config_ind();
extern void sdp_conn_originate();
extern void sdp_conn_timeout();
extern void sdp_connect_cfm();
extern void sdp_connect_ind();
extern void sdp_data_ind();
extern void sdp_disc_connected();
extern void sdp_disc_server_rsp();
extern void sdp_disconnect();
extern void sdp_disconnect_cfm();
extern void sdp_disconnect_ind();
extern void sdp_init();
extern void sdp_server_handle_client_req();
extern void sdpu_allocate_ccb();
extern void sdpu_find_ccb_by_cid();
extern void sdpu_release_ccb();

// ----------------------------------------------------------------------------
// sdp_init
// ----------------------------------------------------------------------------
asm void sdp_init() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x4634
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_803783B8@ha
    addi r30, r30, lbl_803783B8@l
    stw r29, 0x14(r1)
    lis r29, lbl_80457C40@ha
    addi r3, r29, lbl_80457C40@l
    bl memset
    lis r3, 0x1
    addi r31, r29, lbl_80457C40@l
    li r7, 0x1
    li r5, 0x100
    subi r11, r3, 0x1
    li r10, 0xf0
    li r0, 0x15
    sth r5, 0x4(r31)
    addi r4, r30, 0x0
    li r29, 0x0
    stb r7, 0x2(r31)
    li r3, 0x0
    li r5, 0x0
    li r6, 0x0
    stb r7, 0x20(r31)
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    sth r11, 0x22(r31)
    sth r10, 0x462c(r31)
    sth r0, 0x462e(r31)
    bl BTM_SetSecurityLevel
    clrlwi. r0, r3, 24
    bne lbl_802CD0CC
    lbz r0, 0x4630(r31)
    cmplwi r0, 0x1
    blt lbl_802CD1A0
    addi r4, r30, 0x14
    lis r3, 0xa
    bl LogMsg_0
    b lbl_802CD1A0
lbl_802CD0CC:
    addi r4, r30, 0x0
    li r3, 0x1
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    bl BTM_SetSecurityLevel
    clrlwi. r0, r3, 24
    bne lbl_802CD110
    lbz r0, 0x4630(r31)
    cmplwi r0, 0x1
    blt lbl_802CD1A0
    addi r4, r30, 0x38
    lis r3, 0xa
    bl LogMsg_0
    b lbl_802CD1A0
lbl_802CD110:
    lis r11, sdp_connect_ind@ha
    lis r10, sdp_connect_cfm@ha
    lis r9, sdp_config_ind@ha
    lis r8, sdp_config_cfm@ha
    lis r7, sdp_disconnect_ind@ha
    lis r6, sdp_disconnect_cfm@ha
    lis r5, sdp_data_ind@ha
    addi r11, r11, sdp_connect_ind@l
    addi r10, r10, sdp_connect_cfm@l
    addi r9, r9, sdp_config_ind@l
    addi r8, r8, sdp_config_cfm@l
    addi r7, r7, sdp_disconnect_ind@l
    addi r6, r6, sdp_disconnect_cfm@l
    addi r5, r5, sdp_data_ind@l
    stb r29, 0x4630(r31)
    addi r4, r31, 0x4604
    li r3, 0x1
    stw r11, 0x4604(r31)
    stw r10, 0x4608(r31)
    stw r29, 0x460c(r31)
    stw r9, 0x4610(r31)
    stw r8, 0x4614(r31)
    stw r7, 0x4618(r31)
    stw r6, 0x461c(r31)
    stw r29, 0x4620(r31)
    stw r5, 0x4624(r31)
    stw r29, 0x4628(r31)
    bl L2CA_Register
    clrlwi. r0, r3, 24
    bne lbl_802CD1A0
    lbz r0, 0x4630(r31)
    cmplwi r0, 0x1
    blt lbl_802CD1A0
    addi r4, r30, 0x60
    lis r3, 0xa
    bl LogMsg_0
lbl_802CD1A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// sdp_connect_ind
// ----------------------------------------------------------------------------
asm void sdp_connect_ind() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl sdpu_allocate_ccb
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_802CD260
    li r0, 0x2
    mr r4, r28
    stb r0, 0x0(r3)
    li r5, 0x6
    addi r3, r3, 0x2
    bl memcpy
    sth r29, 0x22(r30)
    mr r3, r28
    mr r4, r31
    mr r5, r29
    li r6, 0x0
    li r7, 0x0
    bl L2CA_ConnectRsp
    lis r31, lbl_80457C40@ha
    mr r3, r29
    addi r4, r31, lbl_80457C40@l
    bl L2CA_ConfigReq
    addi r3, r31, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x4
    blt lbl_802CD260
    lis r3, 0xa
    lis r4, lbl_80378430@ha
    lhz r5, 0x22(r30)
    addi r3, r3, 0x3
    addi r4, r4, lbl_80378430@l
    bl LogMsg_1
lbl_802CD260:
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
// sdp_connect_cfm
// ----------------------------------------------------------------------------
asm void sdp_connect_cfm() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    lis r30, lbl_803783B8@ha
    addi r30, r30, lbl_803783B8@l
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl sdpu_find_ccb_by_cid
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_802CD2E8
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CD3F0
    lis r3, 0xa
    mr r5, r28
    addi r3, r3, 0x1
    addi r4, r30, 0xb0
    bl LogMsg_1
    b lbl_802CD3F0
lbl_802CD2E8:
    cmpwi r31, 0x0
    bne lbl_802CD33C
    lbz r0, 0x0(r3)
    cmplwi r0, 0x1
    bne lbl_802CD33C
    li r0, 0x2
    lis r31, lbl_80457C40@ha
    stb r0, 0x0(r3)
    mr r3, r28
    addi r4, r31, lbl_80457C40@l
    bl L2CA_ConfigReq
    addi r3, r31, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x4
    blt lbl_802CD3F0
    lis r3, 0xa
    lhz r5, 0x22(r29)
    addi r3, r3, 0x3
    addi r4, r30, 0xdc
    bl LogMsg_1
    b lbl_802CD3F0
lbl_802CD33C:
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CD368
    lis r3, 0xa
    lhz r6, 0x22(r29)
    mr r5, r31
    addi r4, r30, 0x108
    addi r3, r3, 0x1
    bl LogMsg_2
lbl_802CD368:
    lwz r12, 0x414(r29)
    cmpwi r12, 0x0
    beq lbl_802CD3E8
    cmplwi r31, 0xe
    beq lbl_802CD39C
    cmplwi r31, 0x5
    beq lbl_802CD39C
    cmplwi r31, 0x18
    beq lbl_802CD39C
    cmplwi r31, 0x29
    beq lbl_802CD39C
    cmplwi r31, 0x6
    bne lbl_802CD3B4
lbl_802CD39C:
    lis r3, 0x1
    subi r0, r3, 0xa
    clrlwi r3, r0, 16
    mtctr r12
    bctrl
    b lbl_802CD3E8
lbl_802CD3B4:
    cmplwi r31, 0xf
    bne lbl_802CD3D4
    lis r3, 0x1
    subi r0, r3, 0x9
    clrlwi r3, r0, 16
    mtctr r12
    bctrl
    b lbl_802CD3E8
lbl_802CD3D4:
    lis r3, 0x1
    subi r0, r3, 0xf
    clrlwi r3, r0, 16
    mtctr r12
    bctrl
lbl_802CD3E8:
    mr r3, r29
    bl sdpu_release_ccb
lbl_802CD3F0:
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
// sdp_config_ind
// ----------------------------------------------------------------------------
asm void sdp_config_ind() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl sdpu_find_ccb_by_cid
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802CD470
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CD530
    lis r3, 0xa
    lis r4, lbl_803784F0@ha
    mr r5, r29
    addi r3, r3, 0x1
    addi r4, r4, lbl_803784F0@l
    bl LogMsg_1
    b lbl_802CD530
lbl_802CD470:
    lbz r0, 0x2(r30)
    cmpwi r0, 0x0
    bne lbl_802CD488
    li r0, 0x100
    sth r0, 0x20(r3)
    b lbl_802CD4A4
lbl_802CD488:
    lhz r0, 0x4(r30)
    cmplwi r0, 0x100
    ble lbl_802CD4A0
    li r0, 0x100
    sth r0, 0x20(r3)
    b lbl_802CD4A4
lbl_802CD4A0:
    sth r0, 0x20(r3)
lbl_802CD4A4:
    li r0, 0x0
    mr r3, r29
    stb r0, 0x20(r30)
    mr r4, r30
    stb r0, 0x2(r30)
    sth r0, 0x0(r30)
    bl L2CA_ConfigRsp
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x4
    blt lbl_802CD4EC
    lis r3, 0xa
    lis r4, lbl_8037851C@ha
    mr r5, r29
    addi r3, r3, 0x3
    addi r4, r4, lbl_8037851C@l
    bl LogMsg_1
lbl_802CD4EC:
    lbz r0, 0x1(r31)
    ori r3, r0, 0x2
    rlwinm. r0, r3, 0, 29, 29
    stb r3, 0x1(r31)
    beq lbl_802CD530
    li r0, 0x3
    stb r0, 0x0(r31)
    lbz r0, 0x1(r31)
    clrlwi. r0, r0, 31
    beq lbl_802CD520
    mr r3, r31
    bl sdp_disc_connected
    b lbl_802CD530
lbl_802CD520:
    addi r3, r31, 0x8
    li r4, 0x5
    li r5, 0x1e
    bl btu_start_timer
lbl_802CD530:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// sdp_config_cfm
// ----------------------------------------------------------------------------
asm void sdp_config_cfm() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80457C40@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80457C40@l
    stw r31, 0x1c(r1)
    lis r31, lbl_803783B8@ha
    addi r31, r31, lbl_803783B8@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x4630(r5)
    cmplwi r0, 0x4
    blt lbl_802CD5A4
    lis r3, 0xa
    lhz r6, 0x0(r29)
    mr r5, r28
    addi r4, r31, 0x190
    addi r3, r3, 0x3
    bl LogMsg_2
lbl_802CD5A4:
    mr r3, r28
    bl sdpu_find_ccb_by_cid
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802CD5E4
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CD6A8
    lis r3, 0xa
    mr r5, r28
    addi r3, r3, 0x1
    addi r4, r31, 0x138
    bl LogMsg_1
    b lbl_802CD6A8
lbl_802CD5E4:
    lhz r0, 0x0(r29)
    cmpwi r0, 0x0
    bne lbl_802CD634
    lbz r0, 0x1(r3)
    ori r4, r0, 0x4
    rlwinm. r0, r4, 0, 30, 30
    stb r4, 0x1(r3)
    beq lbl_802CD6A8
    li r0, 0x3
    stb r0, 0x0(r3)
    lbz r0, 0x1(r3)
    clrlwi. r0, r0, 31
    beq lbl_802CD620
    bl sdp_disc_connected
    b lbl_802CD6A8
lbl_802CD620:
    li r4, 0x5
    li r5, 0x1e
    addi r3, r3, 0x8
    bl btu_start_timer
    b lbl_802CD6A8
lbl_802CD634:
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x4
    blt lbl_802CD65C
    lis r3, 0xa
    lhz r5, 0x22(r30)
    addi r3, r3, 0x3
    addi r4, r31, 0x1bc
    bl LogMsg_1
lbl_802CD65C:
    lbz r0, 0x0(r30)
    cmplwi r0, 0x1
    beq lbl_802CD680
    lhz r3, 0x22(r30)
    bl L2CA_DisconnectReq
    lis r3, 0x1
    subi r0, r3, 0xe
    sth r0, 0x472(r30)
    b lbl_802CD6A8
lbl_802CD680:
    lwz r12, 0x414(r30)
    cmpwi r12, 0x0
    beq lbl_802CD6A0
    lis r3, 0x1
    subi r0, r3, 0xe
    clrlwi r3, r0, 16
    mtctr r12
    bctrl
lbl_802CD6A0:
    mr r3, r30
    bl sdpu_release_ccb
lbl_802CD6A8:
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
// sdp_disconnect_ind
// ----------------------------------------------------------------------------
asm void sdp_disconnect_ind() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl sdpu_find_ccb_by_cid
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802CD728
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CD7A4
    lis r3, 0xa
    lis r4, lbl_80378590@ha
    mr r5, r29
    addi r3, r3, 0x1
    addi r4, r4, lbl_80378590@l
    bl LogMsg_1
    b lbl_802CD7A4
lbl_802CD728:
    cmpwi r30, 0x0
    beq lbl_802CD738
    mr r3, r29
    bl L2CA_DisconnectRsp
lbl_802CD738:
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x4
    blt lbl_802CD764
    lis r3, 0xa
    lis r4, lbl_803785BC@ha
    mr r5, r29
    addi r3, r3, 0x3
    addi r4, r4, lbl_803785BC@l
    bl LogMsg_1
lbl_802CD764:
    lwz r12, 0x414(r31)
    cmpwi r12, 0x0
    beq lbl_802CD79C
    lbz r5, 0x0(r31)
    lis r3, 0x1
    subi r0, r3, 0xf
    subi r4, r5, 0x3
    subfic r3, r5, 0x3
    nor r3, r4, r3
    srawi r3, r3, 31
    andc r0, r0, r3
    clrlwi r3, r0, 16
    mtctr r12
    bctrl
lbl_802CD79C:
    mr r3, r31
    bl sdpu_release_ccb
lbl_802CD7A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// sdp_data_ind
// ----------------------------------------------------------------------------
asm void sdp_data_ind() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl sdpu_find_ccb_by_cid
    cmpwi r3, 0x0
    beq lbl_802CD848
    lbz r5, 0x0(r3)
    cmplwi r5, 0x3
    bne lbl_802CD818
    lbz r0, 0x1(r3)
    clrlwi. r0, r0, 31
    beq lbl_802CD80C
    mr r4, r31
    bl sdp_disc_server_rsp
    b lbl_802CD874
lbl_802CD80C:
    mr r4, r31
    bl sdp_server_handle_client_req
    b lbl_802CD874
lbl_802CD818:
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CD874
    lis r3, 0xa
    lis r4, lbl_803785E0@ha
    mr r6, r30
    addi r3, r3, 0x1
    addi r4, r4, lbl_803785E0@l
    bl LogMsg_2
    b lbl_802CD874
lbl_802CD848:
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CD874
    lis r3, 0xa
    lis r4, lbl_80378618@ha
    mr r5, r30
    addi r3, r3, 0x1
    addi r4, r4, lbl_80378618@l
    bl LogMsg_1
lbl_802CD874:
    mr r3, r31
    bl GKI_freebuf
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// sdp_conn_originate
// ----------------------------------------------------------------------------
asm void sdp_conn_originate() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_803783B8@ha
    addi r31, r31, lbl_803783B8@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl sdpu_allocate_ccb
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802CD8F4
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CD8EC
    lis r3, 0xa
    addi r4, r31, 0x28c
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802CD8EC:
    li r3, 0x0
    b lbl_802CD98C
lbl_802CD8F4:
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x4
    blt lbl_802CD918
    lis r3, 0xa
    addi r4, r31, 0x2a8
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802CD918:
    lbz r0, 0x1(r30)
    mr r4, r29
    addi r3, r30, 0x2
    li r5, 0x6
    ori r0, r0, 0x1
    stb r0, 0x1(r30)
    bl memcpy
    li r0, 0x1
    mr r4, r29
    stb r0, 0x0(r30)
    li r3, 0x1
    bl L2CA_ConnectReq
    clrlwi. r0, r3, 16
    beq lbl_802CD95C
    sth r3, 0x22(r30)
    mr r3, r30
    b lbl_802CD98C
lbl_802CD95C:
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CD980
    lis r3, 0xa
    addi r4, r31, 0x2c0
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802CD980:
    mr r3, r30
    bl sdpu_release_ccb
    li r3, 0x0
lbl_802CD98C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// sdp_disconnect
// ----------------------------------------------------------------------------
asm void sdp_disconnect() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80457C40@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80457C40@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x4630(r5)
    cmplwi r0, 0x4
    blt lbl_802CD9F0
    lis r3, 0xa
    lis r4, lbl_80378574@ha
    lhz r5, 0x22(r30)
    addi r3, r3, 0x3
    addi r4, r4, lbl_80378574@l
    bl LogMsg_1
lbl_802CD9F0:
    lbz r0, 0x0(r30)
    cmplwi r0, 0x1
    beq lbl_802CDA0C
    lhz r3, 0x22(r30)
    bl L2CA_DisconnectReq
    sth r31, 0x472(r30)
    b lbl_802CDA2C
lbl_802CDA0C:
    lwz r12, 0x414(r30)
    cmpwi r12, 0x0
    beq lbl_802CDA24
    mr r3, r31
    mtctr r12
    bctrl
lbl_802CDA24:
    mr r3, r30
    bl sdpu_release_ccb
lbl_802CDA2C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// sdp_disconnect_cfm
// ----------------------------------------------------------------------------
asm void sdp_disconnect_cfm() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl sdpu_find_ccb_by_cid
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802CDA9C
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CDAE8
    lis r3, 0xa
    lis r4, lbl_80378690@ha
    mr r5, r30
    addi r3, r3, 0x1
    addi r4, r4, lbl_80378690@l
    bl LogMsg_1
    b lbl_802CDAE8
lbl_802CDA9C:
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x4
    blt lbl_802CDAC8
    lis r3, 0xa
    lis r4, lbl_803786C0@ha
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_803786C0@l
    bl LogMsg_1
lbl_802CDAC8:
    lwz r12, 0x414(r31)
    cmpwi r12, 0x0
    beq lbl_802CDAE0
    lhz r3, 0x472(r31)
    mtctr r12
    bctrl
lbl_802CDAE0:
    mr r3, r31
    bl sdpu_release_ccb
lbl_802CDAE8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// sdp_conn_timeout
// ----------------------------------------------------------------------------
asm void sdp_conn_timeout() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80457C40@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80457C40@l
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x4630(r4)
    cmplwi r0, 0x4
    blt lbl_802CDB44
    lis r3, 0xa
    lis r4, lbl_803786E8@ha
    lbz r5, 0x0(r31)
    addi r3, r3, 0x3
    lhz r6, 0x22(r31)
    addi r4, r4, lbl_803786E8@l
    bl LogMsg_2
lbl_802CDB44:
    lhz r3, 0x22(r31)
    bl L2CA_DisconnectReq
    lwz r12, 0x414(r31)
    cmpwi r12, 0x0
    beq lbl_802CDB6C
    lis r3, 0x1
    subi r0, r3, 0xf
    clrlwi r3, r0, 16
    mtctr r12
    bctrl
lbl_802CDB6C:
    mr r3, r31
    bl sdpu_release_ccb
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

