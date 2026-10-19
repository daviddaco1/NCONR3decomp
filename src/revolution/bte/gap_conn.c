#include "types.h"

// Translation unit: src/revolution/bte/gap_conn.cpp
// Total functions: 8

// Small Data symbols (@sda21)
extern float lbl_8049CFC0;

// Global data symbols (@ha/@l)
extern u8 lbl_80375540[];
extern u8 lbl_80375584[];
extern u8 lbl_803755B0[];
extern u8 lbl_803755D8[];
extern u8 lbl_80456740[];

// Forward declarations
extern void GKI_dequeue();
extern void GKI_enqueue();
extern void GKI_freebuf();
extern void L2CA_ConfigReq();
extern void L2CA_ConfigRsp();
extern void L2CA_ConnectRsp();
extern void L2CA_Deregister();
extern void L2CA_DisconnectReq();
extern void L2CA_DisconnectRsp();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void _restgpr_26();
extern void _savegpr_26();
extern void gap_config_cfm();
extern void gap_config_ind();
extern void gap_congestion_ind();
extern void gap_conn_init();
extern void gap_connect_cfm();
extern void gap_connect_ind();
extern void gap_data_ind();
extern void gap_disconnect_ind();
extern void memcmp();
extern void memcpy();

// ----------------------------------------------------------------------------
// gap_conn_init
// ----------------------------------------------------------------------------
asm void gap_conn_init() {
    nofralloc
    lis r10, gap_connect_ind@ha
    lis r9, lbl_80456740@ha
    lis r8, gap_connect_cfm@ha
    lis r7, gap_config_ind@ha
    lis r6, gap_config_cfm@ha
    lis r5, gap_disconnect_ind@ha
    lis r4, gap_data_ind@ha
    lis r3, gap_congestion_ind@ha
    addi r10, r10, gap_connect_ind@l
    addi r9, r9, lbl_80456740@l
    li r0, 0x0
    addi r8, r8, gap_connect_cfm@l
    addi r7, r7, gap_config_ind@l
    addi r6, r6, gap_config_cfm@l
    addi r5, r5, gap_disconnect_ind@l
    addi r4, r4, gap_data_ind@l
    addi r3, r3, gap_congestion_ind@l
    stw r10, 0x84(r9)
    stw r8, 0x88(r9)
    stw r0, 0x8c(r9)
    stw r7, 0x90(r9)
    stw r6, 0x94(r9)
    stw r5, 0x98(r9)
    stw r0, 0x9c(r9)
    stw r0, 0xa0(r9)
    stw r4, 0xa4(r9)
    stw r3, 0xa8(r9)
    blr
}

// ----------------------------------------------------------------------------
// gap_connect_ind
// ----------------------------------------------------------------------------
asm void gap_connect_ind() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r7, lbl_80456740@ha
    mr r26, r3
    addi r7, r7, lbl_80456740@l
    mr r31, r4
    mr r27, r5
    mr r28, r6
    addi r29, r7, 0xac
    li r30, 0x0
lbl_802B71BC:
    lbz r0, 0x0(r29)
    cmplwi r0, 0x1
    bne lbl_802B71F8
    lhz r0, 0x10(r29)
    cmplw r0, r27
    bne lbl_802B71F8
    lbz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_802B7208
    mr r3, r26
    addi r4, r29, 0x9
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_802B7208
lbl_802B71F8:
    addi r30, r30, 0x1
    addi r29, r29, 0x60
    cmplwi r30, 0x8
    blt lbl_802B71BC
lbl_802B7208:
    clrlwi r0, r30, 16
    cmplwi r0, 0x8
    bne lbl_802B7290
    lis r3, lbl_80456740@ha
    addi r3, r3, lbl_80456740@l
    lbz r0, 0x28(r3)
    cmplwi r0, 0x2
    blt lbl_802B7238
    lis r3, 0xe
    la r4, lbl_8049CFC0
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802B7238:
    lis r3, lbl_80456740@ha
    addi r3, r3, lbl_80456740@l
    lbz r0, 0x28(r3)
    cmplwi r0, 0x2
    blt lbl_802B7260
    lis r3, 0xe
    lis r4, lbl_80375540@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80375540@l
    bl LogMsg_0
lbl_802B7260:
    lis r3, lbl_80456740@ha
    addi r3, r3, lbl_80456740@l
    lbz r0, 0x28(r3)
    cmplwi r0, 0x2
    blt lbl_802B7284
    lis r3, 0xe
    la r4, lbl_8049CFC0
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802B7284:
    mr r3, r31
    bl L2CA_DisconnectReq
    b lbl_802B72FC
lbl_802B7290:
    li r0, 0x3
    mr r4, r26
    stb r0, 0x0(r29)
    addi r3, r29, 0x9
    li r5, 0x6
    bl memcpy
    sth r31, 0x6(r29)
    mr r3, r26
    mr r4, r28
    mr r5, r31
    li r6, 0x0
    li r7, 0x0
    bl L2CA_ConnectRsp
    lis r3, lbl_80456740@ha
    addi r3, r3, lbl_80456740@l
    lbz r0, 0x28(r3)
    cmplwi r0, 0x4
    blt lbl_802B72F0
    lis r3, 0xe
    lis r4, lbl_80375584@ha
    lhz r5, 0x6(r29)
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375584@l
    bl LogMsg_1
lbl_802B72F0:
    mr r3, r31
    addi r4, r29, 0x24
    bl L2CA_ConfigReq
lbl_802B72FC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// gap_connect_cfm
// ----------------------------------------------------------------------------
asm void gap_connect_cfm() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80456740@ha
    stw r0, 0x14(r1)
    li r0, 0x2
    addi r5, r5, lbl_80456740@l
    stw r31, 0xc(r1)
    addi r31, r5, 0xac
    li r5, 0x0
    stw r30, 0x8(r1)
    mtctr r0
lbl_802B7340:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_802B735C
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B735C
    b lbl_802B73CC
lbl_802B735C:
    lbzu r0, 0x60(r31)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_802B737C
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B737C
    b lbl_802B73CC
lbl_802B737C:
    lbzu r0, 0x60(r31)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_802B739C
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B739C
    b lbl_802B73CC
lbl_802B739C:
    lbzu r0, 0x60(r31)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_802B73BC
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B73BC
    b lbl_802B73CC
lbl_802B73BC:
    addi r5, r5, 0x1
    addi r31, r31, 0x60
    bdnz lbl_802B7340
    li r31, 0x0
lbl_802B73CC:
    cmpwi r31, 0x0
    beq lbl_802B74D8
    cmpwi r4, 0x0
    bne lbl_802B73FC
    lbz r0, 0x0(r31)
    cmplwi r0, 0x2
    bne lbl_802B73FC
    li r0, 0x3
    addi r4, r31, 0x24
    stb r0, 0x0(r31)
    bl L2CA_ConfigReq
    b lbl_802B74D8
lbl_802B73FC:
    lwz r12, 0x20(r31)
    cmpwi r12, 0x0
    beq lbl_802B7418
    lhz r3, 0x4(r31)
    li r4, 0x101
    mtctr r12
    bctrl
lbl_802B7418:
    lhz r30, 0x10(r31)
    b lbl_802B742C
lbl_802B7420:
    addi r3, r31, 0x14
    bl GKI_dequeue
    bl GKI_freebuf
lbl_802B742C:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    bne lbl_802B7420
    lis r3, lbl_80456740@ha
    li r4, 0x0
    addi r3, r3, lbl_80456740@l
    li r0, 0x2
    stb r4, 0x0(r31)
    addi r4, r3, 0xac
    li r3, 0x0
    mtctr r0
lbl_802B7458:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_802B7470
    lhz r0, 0x10(r4)
    cmplw r0, r30
    beq lbl_802B74D8
lbl_802B7470:
    lbz r0, 0x60(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_802B748C
    lhz r0, 0x70(r4)
    cmplw r0, r30
    beq lbl_802B74D8
lbl_802B748C:
    lbz r0, 0xc0(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_802B74A8
    lhz r0, 0xd0(r4)
    cmplw r0, r30
    beq lbl_802B74D8
lbl_802B74A8:
    lbz r0, 0x120(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_802B74C4
    lhz r0, 0x130(r4)
    cmplw r0, r30
    beq lbl_802B74D8
lbl_802B74C4:
    addi r3, r3, 0x1
    addi r4, r4, 0x180
    bdnz lbl_802B7458
    mr r3, r30
    bl L2CA_Deregister
lbl_802B74D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// gap_config_ind
// ----------------------------------------------------------------------------
asm void gap_config_ind() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80456740@ha
    li r6, 0x0
    stw r0, 0x14(r1)
    li r0, 0x2
    addi r5, r5, lbl_80456740@l
    stw r31, 0xc(r1)
    addi r31, r5, 0xac
    mtctr r0
lbl_802B7518:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_802B7534
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B7534
    b lbl_802B75A4
lbl_802B7534:
    lbzu r0, 0x60(r31)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_802B7554
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B7554
    b lbl_802B75A4
lbl_802B7554:
    lbzu r0, 0x60(r31)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_802B7574
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B7574
    b lbl_802B75A4
lbl_802B7574:
    lbzu r0, 0x60(r31)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_802B7594
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B7594
    b lbl_802B75A4
lbl_802B7594:
    addi r6, r6, 0x1
    addi r31, r31, 0x60
    bdnz lbl_802B7518
    li r31, 0x0
lbl_802B75A4:
    cmpwi r31, 0x0
    beq lbl_802B7618
    lbz r0, 0x2(r4)
    cmpwi r0, 0x0
    beq lbl_802B75C4
    lhz r0, 0x4(r4)
    cmplwi r0, 0x69b
    ble lbl_802B75D0
lbl_802B75C4:
    li r0, 0x69b
    sth r0, 0x12(r31)
    b lbl_802B75D4
lbl_802B75D0:
    sth r0, 0x12(r31)
lbl_802B75D4:
    li r0, 0x0
    stb r0, 0x20(r4)
    stb r0, 0x2(r4)
    sth r0, 0x0(r4)
    bl L2CA_ConfigRsp
    lbz r0, 0x1(r31)
    ori r3, r0, 0x2
    rlwinm. r0, r3, 0, 29, 29
    stb r3, 0x1(r31)
    beq lbl_802B7618
    li r0, 0x4
    li r4, 0x100
    stb r0, 0x0(r31)
    lwz r12, 0x20(r31)
    lhz r3, 0x4(r31)
    mtctr r12
    bctrl
lbl_802B7618:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// gap_config_cfm
// ----------------------------------------------------------------------------
asm void gap_config_cfm() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80456740@ha
    li r6, 0x0
    stw r0, 0x14(r1)
    li r0, 0x2
    addi r5, r5, lbl_80456740@l
    stw r31, 0xc(r1)
    addi r31, r5, 0xac
    stw r30, 0x8(r1)
    mtctr r0
lbl_802B7658:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_802B7674
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B7674
    b lbl_802B76E4
lbl_802B7674:
    lbzu r0, 0x60(r31)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_802B7694
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B7694
    b lbl_802B76E4
lbl_802B7694:
    lbzu r0, 0x60(r31)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_802B76B4
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B76B4
    b lbl_802B76E4
lbl_802B76B4:
    lbzu r0, 0x60(r31)
    addi r6, r6, 0x1
    cmpwi r0, 0x0
    beq lbl_802B76D4
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B76D4
    b lbl_802B76E4
lbl_802B76D4:
    addi r6, r6, 0x1
    addi r31, r31, 0x60
    bdnz lbl_802B7658
    li r31, 0x0
lbl_802B76E4:
    cmpwi r31, 0x0
    beq lbl_802B7800
    lhz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_802B772C
    lbz r0, 0x1(r31)
    ori r3, r0, 0x4
    rlwinm. r0, r3, 0, 30, 30
    stb r3, 0x1(r31)
    beq lbl_802B7800
    li r0, 0x4
    li r4, 0x100
    stb r0, 0x0(r31)
    lwz r12, 0x20(r31)
    lhz r3, 0x4(r31)
    mtctr r12
    bctrl
    b lbl_802B7800
lbl_802B772C:
    lwz r12, 0x20(r31)
    li r4, 0x101
    lhz r3, 0x4(r31)
    mtctr r12
    bctrl
    lhz r30, 0x10(r31)
    b lbl_802B7754
lbl_802B7748:
    addi r3, r31, 0x14
    bl GKI_dequeue
    bl GKI_freebuf
lbl_802B7754:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    bne lbl_802B7748
    lis r3, lbl_80456740@ha
    li r4, 0x0
    addi r3, r3, lbl_80456740@l
    li r0, 0x2
    stb r4, 0x0(r31)
    addi r4, r3, 0xac
    li r3, 0x0
    mtctr r0
lbl_802B7780:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_802B7798
    lhz r0, 0x10(r4)
    cmplw r0, r30
    beq lbl_802B7800
lbl_802B7798:
    lbz r0, 0x60(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_802B77B4
    lhz r0, 0x70(r4)
    cmplw r0, r30
    beq lbl_802B7800
lbl_802B77B4:
    lbz r0, 0xc0(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_802B77D0
    lhz r0, 0xd0(r4)
    cmplw r0, r30
    beq lbl_802B7800
lbl_802B77D0:
    lbz r0, 0x120(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_802B77EC
    lhz r0, 0x130(r4)
    cmplw r0, r30
    beq lbl_802B7800
lbl_802B77EC:
    addi r3, r3, 0x1
    addi r4, r4, 0x180
    bdnz lbl_802B7780
    mr r3, r30
    bl L2CA_Deregister
lbl_802B7800:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// gap_disconnect_ind
// ----------------------------------------------------------------------------
asm void gap_disconnect_ind() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80456740@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80456740@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x28(r5)
    cmplwi r0, 0x4
    blt lbl_802B7864
    lis r3, 0xe
    lis r4, lbl_803755B0@ha
    mr r5, r29
    addi r3, r3, 0x3
    addi r4, r4, lbl_803755B0@l
    bl LogMsg_1
lbl_802B7864:
    lis r3, lbl_80456740@ha
    li r0, 0x2
    addi r3, r3, lbl_80456740@l
    li r4, 0x0
    addi r31, r3, 0xac
    mtctr r0
lbl_802B787C:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_802B7898
    lhz r0, 0x6(r31)
    cmplw r0, r29
    bne lbl_802B7898
    b lbl_802B7908
lbl_802B7898:
    lbzu r0, 0x60(r31)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B78B8
    lhz r0, 0x6(r31)
    cmplw r0, r29
    bne lbl_802B78B8
    b lbl_802B7908
lbl_802B78B8:
    lbzu r0, 0x60(r31)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B78D8
    lhz r0, 0x6(r31)
    cmplw r0, r29
    bne lbl_802B78D8
    b lbl_802B7908
lbl_802B78D8:
    lbzu r0, 0x60(r31)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B78F8
    lhz r0, 0x6(r31)
    cmplw r0, r29
    bne lbl_802B78F8
    b lbl_802B7908
lbl_802B78F8:
    addi r4, r4, 0x1
    addi r31, r31, 0x60
    bdnz lbl_802B787C
    li r31, 0x0
lbl_802B7908:
    cmpwi r31, 0x0
    beq lbl_802B79F4
    cmpwi r30, 0x0
    beq lbl_802B7920
    mr r3, r29
    bl L2CA_DisconnectRsp
lbl_802B7920:
    lwz r12, 0x20(r31)
    li r4, 0x101
    lhz r3, 0x4(r31)
    mtctr r12
    bctrl
    lhz r30, 0x10(r31)
    b lbl_802B7948
lbl_802B793C:
    addi r3, r31, 0x14
    bl GKI_dequeue
    bl GKI_freebuf
lbl_802B7948:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    bne lbl_802B793C
    lis r3, lbl_80456740@ha
    li r4, 0x0
    addi r3, r3, lbl_80456740@l
    li r0, 0x2
    stb r4, 0x0(r31)
    addi r4, r3, 0xac
    li r3, 0x0
    mtctr r0
lbl_802B7974:
    lbz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_802B798C
    lhz r0, 0x10(r4)
    cmplw r0, r30
    beq lbl_802B79F4
lbl_802B798C:
    lbz r0, 0x60(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_802B79A8
    lhz r0, 0x70(r4)
    cmplw r0, r30
    beq lbl_802B79F4
lbl_802B79A8:
    lbz r0, 0xc0(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_802B79C4
    lhz r0, 0xd0(r4)
    cmplw r0, r30
    beq lbl_802B79F4
lbl_802B79C4:
    lbz r0, 0x120(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    beq lbl_802B79E0
    lhz r0, 0x130(r4)
    cmplw r0, r30
    beq lbl_802B79F4
lbl_802B79E0:
    addi r3, r3, 0x1
    addi r4, r4, 0x180
    bdnz lbl_802B7974
    mr r3, r30
    bl L2CA_Deregister
lbl_802B79F4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// gap_data_ind
// ----------------------------------------------------------------------------
asm void gap_data_ind() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80456740@ha
    stw r0, 0x14(r1)
    li r0, 0x2
    addi r5, r5, lbl_80456740@l
    stw r31, 0xc(r1)
    addi r31, r5, 0xac
    li r5, 0x0
    mtctr r0
lbl_802B7A38:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_802B7A54
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B7A54
    b lbl_802B7AC4
lbl_802B7A54:
    lbzu r0, 0x60(r31)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_802B7A74
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B7A74
    b lbl_802B7AC4
lbl_802B7A74:
    lbzu r0, 0x60(r31)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_802B7A94
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B7A94
    b lbl_802B7AC4
lbl_802B7A94:
    lbzu r0, 0x60(r31)
    addi r5, r5, 0x1
    cmpwi r0, 0x0
    beq lbl_802B7AB4
    lhz r0, 0x6(r31)
    cmplw r0, r3
    bne lbl_802B7AB4
    b lbl_802B7AC4
lbl_802B7AB4:
    addi r5, r5, 0x1
    addi r31, r31, 0x60
    bdnz lbl_802B7A38
    li r31, 0x0
lbl_802B7AC4:
    cmpwi r31, 0x0
    bne lbl_802B7AD8
    mr r3, r4
    bl GKI_freebuf
    b lbl_802B7B0C
lbl_802B7AD8:
    lbz r0, 0x0(r31)
    cmplwi r0, 0x4
    bne lbl_802B7B04
    addi r3, r31, 0x14
    bl GKI_enqueue
    lwz r12, 0x20(r31)
    li r4, 0x102
    lhz r3, 0x4(r31)
    mtctr r12
    bctrl
    b lbl_802B7B0C
lbl_802B7B04:
    mr r3, r4
    bl GKI_freebuf
lbl_802B7B0C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// gap_congestion_ind
// ----------------------------------------------------------------------------
asm void gap_congestion_ind() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80456740@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80456740@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x28(r5)
    cmplwi r0, 0x4
    blt lbl_802B7B6C
    lis r3, 0xe
    lis r4, lbl_803755D8@ha
    mr r5, r31
    mr r6, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_803755D8@l
    bl LogMsg_2
lbl_802B7B6C:
    lis r3, lbl_80456740@ha
    li r0, 0x2
    addi r3, r3, lbl_80456740@l
    li r4, 0x0
    addi r3, r3, 0xac
    mtctr r0
lbl_802B7B84:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_802B7BA0
    lhz r0, 0x6(r3)
    cmplw r0, r30
    bne lbl_802B7BA0
    b lbl_802B7C10
lbl_802B7BA0:
    lbzu r0, 0x60(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B7BC0
    lhz r0, 0x6(r3)
    cmplw r0, r30
    bne lbl_802B7BC0
    b lbl_802B7C10
lbl_802B7BC0:
    lbzu r0, 0x60(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B7BE0
    lhz r0, 0x6(r3)
    cmplw r0, r30
    bne lbl_802B7BE0
    b lbl_802B7C10
lbl_802B7BE0:
    lbzu r0, 0x60(r3)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_802B7C00
    lhz r0, 0x6(r3)
    cmplw r0, r30
    bne lbl_802B7C00
    b lbl_802B7C10
lbl_802B7C00:
    addi r4, r4, 0x1
    addi r3, r3, 0x60
    bdnz lbl_802B7B84
    li r3, 0x0
lbl_802B7C10:
    cmpwi r3, 0x0
    beq lbl_802B7C3C
    neg r0, r31
    lwz r12, 0x20(r3)
    or r0, r0, r31
    lhz r3, 0x4(r3)
    srawi r4, r0, 31
    addi r0, r4, 0x104
    clrlwi r4, r0, 16
    mtctr r12
    bctrl
lbl_802B7C3C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

