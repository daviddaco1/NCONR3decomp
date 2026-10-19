#include "types.h"

// Translation unit: src/revolution/bte/rfc_mx_fsm.cpp
// Total functions: 10

// Global data symbols (@ha/@l)
extern u8 jumptable_80377A28[];
extern u8 jumptable_80377AC0[];
extern u8 jumptable_80377B40[];
extern u8 jumptable_80377B88[];
extern u8 jumptable_80377C0C[];
extern u8 jumptable_80377C64[];
extern u8 lbl_80377A98[];
extern u8 lbl_80377BC4[];
extern u8 lbl_80377BE8[];
extern u8 lbl_80377C3C[];
extern u8 lbl_80377CA0[];
extern u8 lbl_80377CC4[];
extern u8 lbl_80457828[];

// Forward declarations
extern void GKI_freebuf();
extern void L2CA_ConfigReq();
extern void L2CA_ConfigRsp();
extern void L2CA_ConnectReq();
extern void L2CA_ConnectRsp();
extern void L2CA_DisconnectReq();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void PORT_CloseInd();
extern void PORT_StartCnf();
extern void PORT_StartInd();
extern void memset();
extern void rfc_mx_conf_cnf();
extern void rfc_mx_conf_ind();
extern void rfc_mx_sm_execute();
extern void rfc_mx_sm_sabme_wait_ua();
extern void rfc_mx_sm_state_configure();
extern void rfc_mx_sm_state_connected();
extern void rfc_mx_sm_state_disc_wait_ua();
extern void rfc_mx_sm_state_idle();
extern void rfc_mx_sm_state_wait_conn_cnf();
extern void rfc_mx_sm_state_wait_sabme();
extern void rfc_release_multiplexer_channel();
extern void rfc_save_lcid_mcb();
extern void rfc_send_disc();
extern void rfc_send_dm();
extern void rfc_send_sabme();
extern void rfc_send_ua();
extern void rfc_timer_start();
extern void rfc_timer_stop();

// ----------------------------------------------------------------------------
// rfc_mx_sm_execute
// ----------------------------------------------------------------------------
asm void rfc_mx_sm_execute() {
    nofralloc
    lbz r0, 0x6c(r3)
    cmplwi r0, 0x6
    bgtlr
    lis r6, jumptable_80377A28@ha
    slwi r0, r0, 2
    addi r6, r6, jumptable_80377A28@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    b rfc_mx_sm_state_idle
    b rfc_mx_sm_state_wait_conn_cnf
    b rfc_mx_sm_state_configure
    b rfc_mx_sm_sabme_wait_ua
    b rfc_mx_sm_state_wait_sabme
    b rfc_mx_sm_state_connected
    b rfc_mx_sm_state_disc_wait_ua
    blr
}

// ----------------------------------------------------------------------------
// rfc_mx_sm_state_idle
// ----------------------------------------------------------------------------
asm void rfc_mx_sm_state_idle() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, lbl_80457828@ha
    stw r0, 0x64(r1)
    addi r6, r6, lbl_80457828@l
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    lis r30, jumptable_80377A28@ha
    addi r30, r30, jumptable_80377A28@l
    stw r29, 0x54(r1)
    mr r29, r5
    stw r28, 0x50(r1)
    mr r28, r4
    lbz r0, 0x414(r6)
    cmplwi r0, 0x4
    blt lbl_802C61D4
    lis r3, 0x9
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r30, 0x1c
    bl LogMsg_1
lbl_802C61D4:
    cmplwi r28, 0xc
    bgt lbl_802C6344
    lis r3, jumptable_80377AC0@ha
    slwi r0, r28, 2
    addi r3, r3, jumptable_80377AC0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x29a
    addi r4, r31, 0x62
    sth r0, 0x6a(r31)
    li r3, 0x3
    bl L2CA_ConnectReq
    clrlwi. r4, r3, 16
    sth r3, 0x68(r31)
    bne lbl_802C6224
    mr r3, r31
    li r4, 0x1
    bl PORT_StartCnf
    b lbl_802C6370
lbl_802C6224:
    mr r3, r31
    bl rfc_save_lcid_mcb
    li r0, 0x1
    stb r0, 0x6c(r31)
    b lbl_802C6370
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C6370
    lbz r5, 0x6c(r31)
    mr r6, r28
    addi r4, r30, 0x3c
    lis r3, 0x9
    bl LogMsg_2
    b lbl_802C6370
    lbz r0, 0x6d(r31)
    cmpwi r0, 0x0
    beq lbl_802C628C
    lbz r4, 0x0(r29)
    addi r3, r31, 0x62
    lhz r5, 0x68(r31)
    li r6, 0x1
    li r7, 0x0
    bl L2CA_ConnectRsp
    b lbl_802C6370
lbl_802C628C:
    mr r3, r31
    li r4, 0x78
    bl rfc_timer_start
    lbz r4, 0x0(r29)
    addi r3, r31, 0x62
    lhz r5, 0x68(r31)
    li r6, 0x0
    li r7, 0x0
    bl L2CA_ConnectRsp
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C62D4
    lis r3, 0x9
    addi r4, r30, 0x58
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802C62D4:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x3c
    bl memset
    li r0, 0x0
    li r4, 0x1
    li r3, 0x69b
    stb r4, 0xa(r1)
    addi r4, r1, 0x8
    sth r3, 0xc(r1)
    stb r0, 0x28(r1)
    stb r0, 0xe(r1)
    lhz r3, 0x68(r31)
    bl L2CA_ConfigReq
    li r0, 0x2
    stb r0, 0x6c(r31)
    b lbl_802C6370
    b lbl_802C6370
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    bl rfc_send_dm
    b lbl_802C6370
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    bl rfc_send_dm
    b lbl_802C6370
lbl_802C6344:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C6370
    lis r3, 0x9
    lbz r6, 0x6c(r31)
    mr r5, r28
    addi r4, r30, 0x70
    addi r3, r3, 0x3
    bl LogMsg_2
lbl_802C6370:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// rfc_mx_sm_state_wait_conn_cnf
// ----------------------------------------------------------------------------
asm void rfc_mx_sm_state_wait_conn_cnf() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, lbl_80457828@ha
    stw r0, 0x64(r1)
    addi r6, r6, lbl_80457828@l
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    lis r30, jumptable_80377A28@ha
    addi r30, r30, jumptable_80377A28@l
    stw r29, 0x54(r1)
    mr r29, r5
    stw r28, 0x50(r1)
    mr r28, r4
    lbz r0, 0x414(r6)
    cmplwi r0, 0x4
    blt lbl_802C63E8
    lis r3, 0x9
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r30, 0xcc
    bl LogMsg_1
lbl_802C63E8:
    cmpwi r28, 0x9
    beq lbl_802C6444
    bge lbl_802C640C
    cmpwi r28, 0x6
    beq lbl_802C6418
    bge lbl_802C6500
    cmpwi r28, 0x5
    bge lbl_802C64E4
    b lbl_802C6500
lbl_802C640C:
    cmpwi r28, 0xe
    beq lbl_802C64D0
    b lbl_802C6500
lbl_802C6418:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C652C
    lbz r5, 0x6c(r31)
    mr r6, r28
    addi r4, r30, 0x3c
    lis r3, 0x9
    bl LogMsg_2
    b lbl_802C652C
lbl_802C6444:
    lhz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_802C6468
    li r0, 0x0
    mr r3, r31
    stb r0, 0x6c(r31)
    lhz r4, 0x0(r29)
    bl PORT_StartCnf
    b lbl_802C652C
lbl_802C6468:
    li r0, 0x2
    lis r3, lbl_80457828@ha
    stb r0, 0x6c(r31)
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C6494
    lis r3, 0x9
    addi r4, r30, 0x58
    addi r3, r3, 0x3
    bl LogMsg_0
lbl_802C6494:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x3c
    bl memset
    li r0, 0x0
    li r4, 0x1
    li r3, 0x69b
    stb r4, 0xa(r1)
    addi r4, r1, 0x8
    sth r3, 0xc(r1)
    stb r0, 0x28(r1)
    stb r0, 0xe(r1)
    lhz r3, 0x68(r31)
    bl L2CA_ConfigReq
    b lbl_802C652C
lbl_802C64D0:
    li r0, 0x0
    mr r3, r31
    stb r0, 0x6c(r31)
    bl PORT_CloseInd
    b lbl_802C652C
lbl_802C64E4:
    li r0, 0x0
    lhz r3, 0x68(r31)
    stb r0, 0x6c(r31)
    bl L2CA_DisconnectReq
    mr r3, r31
    bl PORT_CloseInd
    b lbl_802C652C
lbl_802C6500:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C652C
    lis r3, 0x9
    lbz r6, 0x6c(r31)
    mr r5, r28
    addi r4, r30, 0x70
    addi r3, r3, 0x3
    bl LogMsg_2
lbl_802C652C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// rfc_mx_sm_state_configure
// ----------------------------------------------------------------------------
asm void rfc_mx_sm_state_configure() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80457828@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_80457828@l
    stw r31, 0x1c(r1)
    lis r31, jumptable_80377A28@ha
    addi r31, r31, jumptable_80377A28@l
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x414(r6)
    cmplwi r0, 0x4
    blt lbl_802C65A4
    lis r3, 0x9
    mr r5, r29
    addi r3, r3, 0x3
    addi r4, r31, 0xf4
    bl LogMsg_1
lbl_802C65A4:
    subi r0, r29, 0x6
    cmplwi r0, 0x8
    bgt lbl_802C6628
    lis r3, jumptable_80377B40@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80377B40@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C6654
    lbz r5, 0x6c(r28)
    mr r6, r29
    addi r4, r31, 0x3c
    lis r3, 0x9
    bl LogMsg_2
    b lbl_802C6654
    mr r3, r28
    mr r4, r30
    bl rfc_mx_conf_ind
    b lbl_802C6654
    mr r3, r28
    mr r4, r30
    bl rfc_mx_conf_cnf
    b lbl_802C6654
    li r0, 0x0
    mr r3, r28
    stb r0, 0x6c(r28)
    bl PORT_CloseInd
    b lbl_802C6654
lbl_802C6628:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C6654
    lis r3, 0x9
    lbz r6, 0x6c(r28)
    mr r5, r29
    addi r4, r31, 0x70
    addi r3, r3, 0x3
    bl LogMsg_2
lbl_802C6654:
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
// rfc_mx_sm_sabme_wait_ua
// ----------------------------------------------------------------------------
asm void rfc_mx_sm_sabme_wait_ua() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80457828@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_80457828@l
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lis r30, jumptable_80377A28@ha
    addi r30, r30, jumptable_80377A28@l
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lbz r0, 0x414(r6)
    cmplwi r0, 0x4
    blt lbl_802C66CC
    lis r3, 0x9
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r30, 0x13c
    bl LogMsg_1
lbl_802C66CC:
    cmplwi r28, 0xe
    bgt lbl_802C679C
    lis r3, jumptable_80377B88@ha
    slwi r0, r28, 2
    addi r3, r3, jumptable_80377B88@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C67C8
    lbz r5, 0x6c(r31)
    mr r6, r28
    addi r4, r30, 0x3c
    lis r3, 0x9
    bl LogMsg_2
    b lbl_802C67C8
    mr r3, r31
    mr r4, r29
    bl rfc_mx_conf_ind
    b lbl_802C67C8
    mr r3, r31
    mr r4, r29
    bl rfc_mx_conf_cnf
    b lbl_802C67C8
    li r0, 0x0
    mr r3, r31
    stb r0, 0x6c(r31)
    bl PORT_CloseInd
    b lbl_802C67C8
    mr r3, r31
    bl rfc_timer_stop
    li r3, 0x5
    li r0, 0x1
    stb r3, 0x6c(r31)
    mr r3, r31
    li r4, 0x0
    stb r0, 0x71(r31)
    bl PORT_StartCnf
    b lbl_802C67C8
    mr r3, r31
    bl rfc_timer_stop
    li r0, 0x0
    lhz r3, 0x68(r31)
    stb r0, 0x6c(r31)
    bl L2CA_DisconnectReq
    mr r3, r31
    li r4, 0x1
    bl PORT_StartCnf
    b lbl_802C67C8
lbl_802C679C:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C67C8
    lis r3, 0x9
    lbz r6, 0x6c(r31)
    mr r5, r28
    addi r4, r30, 0x70
    addi r3, r3, 0x3
    bl LogMsg_2
lbl_802C67C8:
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
// rfc_mx_sm_state_wait_sabme
// ----------------------------------------------------------------------------
asm void rfc_mx_sm_state_wait_sabme() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80457828@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_80457828@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x414(r6)
    cmplwi r0, 0x4
    blt lbl_802C6838
    lis r3, 0x9
    lis r4, lbl_80377BC4@ha
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377BC4@l
    bl LogMsg_1
lbl_802C6838:
    cmpwi r30, 0x7
    beq lbl_802C687C
    bge lbl_802C6850
    cmpwi r30, 0x0
    beq lbl_802C6870
    b lbl_802C68BC
lbl_802C6850:
    cmpwi r30, 0xe
    beq lbl_802C685C
    b lbl_802C68BC
lbl_802C685C:
    li r0, 0x0
    mr r3, r29
    stb r0, 0x6c(r29)
    bl PORT_CloseInd
    b lbl_802C68EC
lbl_802C6870:
    mr r3, r29
    bl PORT_StartInd
    b lbl_802C68EC
lbl_802C687C:
    lhz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_802C689C
    mr r3, r29
    li r4, 0x0
    li r5, 0x1
    bl rfc_send_dm
    b lbl_802C68EC
lbl_802C689C:
    mr r3, r29
    li r4, 0x0
    bl rfc_send_ua
    li r3, 0x5
    li r0, 0x1
    stb r3, 0x6c(r29)
    stb r0, 0x71(r29)
    b lbl_802C68EC
lbl_802C68BC:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C68EC
    lis r3, 0x9
    lis r4, lbl_80377A98@ha
    lbz r6, 0x6c(r29)
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377A98@l
    bl LogMsg_2
lbl_802C68EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// rfc_mx_sm_state_connected
// ----------------------------------------------------------------------------
asm void rfc_mx_sm_state_connected() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80457828@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80457828@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x414(r5)
    cmplwi r0, 0x4
    blt lbl_802C6950
    lis r3, 0x9
    lis r4, lbl_80377BE8@ha
    mr r5, r31
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377BE8@l
    bl LogMsg_1
lbl_802C6950:
    subi r0, r31, 0x3
    cmplwi r0, 0xb
    bgt lbl_802C69D8
    lis r3, jumptable_80377C0C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80377C0C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r30
    li r4, 0x3
    bl rfc_timer_start
    li r0, 0x6
    mr r3, r30
    stb r0, 0x6c(r30)
    li r4, 0x0
    bl rfc_send_disc
    b lbl_802C6A08
    li r0, 0x0
    mr r3, r30
    stb r0, 0x6c(r30)
    bl PORT_CloseInd
    b lbl_802C6A08
    mr r3, r30
    li r4, 0x0
    bl rfc_send_ua
    lbz r0, 0x6d(r30)
    cmpwi r0, 0x0
    beq lbl_802C69CC
    lhz r3, 0x68(r30)
    bl L2CA_DisconnectReq
lbl_802C69CC:
    mr r3, r30
    bl PORT_CloseInd
    b lbl_802C6A08
lbl_802C69D8:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C6A08
    lis r3, 0x9
    lis r4, lbl_80377A98@ha
    lbz r6, 0x6c(r30)
    mr r5, r31
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377A98@l
    bl LogMsg_2
lbl_802C6A08:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// rfc_mx_sm_state_disc_wait_ua
// ----------------------------------------------------------------------------
asm void rfc_mx_sm_state_disc_wait_ua() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80457828@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_80457828@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x414(r6)
    cmplwi r0, 0x4
    blt lbl_802C6A70
    lis r3, 0x9
    lis r4, lbl_80377C3C@ha
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377C3C@l
    bl LogMsg_1
lbl_802C6A70:
    cmplwi r30, 0xe
    bgt lbl_802C6B4C
    lis r3, jumptable_80377C64@ha
    slwi r0, r30, 2
    addi r3, r3, jumptable_80377C64@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lhz r3, 0x68(r29)
    bl L2CA_DisconnectReq
    lbz r0, 0x70(r29)
    cmpwi r0, 0x0
    beq lbl_802C6AF0
    addi r4, r29, 0x62
    li r3, 0x3
    bl L2CA_ConnectReq
    clrlwi. r4, r3, 16
    sth r3, 0x68(r29)
    bne lbl_802C6ACC
    mr r3, r29
    li r4, 0x1
    bl PORT_StartCnf
    b lbl_802C6B7C
lbl_802C6ACC:
    mr r3, r29
    bl rfc_save_lcid_mcb
    li r3, 0x0
    li r0, 0x1
    stb r3, 0x70(r29)
    stb r3, 0x6e(r29)
    stb r3, 0x6f(r29)
    stb r0, 0x6c(r29)
    b lbl_802C6B7C
lbl_802C6AF0:
    mr r3, r29
    bl rfc_release_multiplexer_channel
    b lbl_802C6B7C
    mr r3, r29
    li r4, 0x0
    bl rfc_send_ua
    b lbl_802C6B7C
    mr r3, r31
    bl GKI_freebuf
    mr r3, r29
    li r4, 0x0
    li r5, 0x0
    bl rfc_send_dm
    b lbl_802C6B7C
    li r0, 0x1
    stb r0, 0x70(r29)
    b lbl_802C6B7C
    li r0, 0x0
    mr r3, r29
    stb r0, 0x6c(r29)
    bl PORT_CloseInd
    b lbl_802C6B7C
    b lbl_802C6B7C
lbl_802C6B4C:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x4
    blt lbl_802C6B7C
    lis r3, 0x9
    lis r4, lbl_80377A98@ha
    lbz r6, 0x6c(r29)
    mr r5, r30
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377A98@l
    bl LogMsg_2
lbl_802C6B7C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// rfc_mx_conf_cnf
// ----------------------------------------------------------------------------
asm void rfc_mx_conf_cnf() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80457828@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80457828@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x414(r5)
    cmplwi r0, 0x4
    blt lbl_802C6BF4
    cmpwi r31, 0x0
    lis r3, 0x9
    lis r4, lbl_80377CA0@ha
    mr r5, r31
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377CA0@l
    beq lbl_802C6BEC
    lhz r6, 0x0(r31)
    b lbl_802C6BF0
lbl_802C6BEC:
    li r6, 0x0
lbl_802C6BF0:
    bl LogMsg_2
lbl_802C6BF4:
    lhz r4, 0x0(r31)
    cmpwi r4, 0x0
    beq lbl_802C6C28
    lbz r0, 0x6d(r30)
    cmpwi r0, 0x0
    beq lbl_802C6C1C
    mr r3, r30
    bl PORT_StartCnf
    lhz r3, 0x68(r30)
    bl L2CA_DisconnectReq
lbl_802C6C1C:
    mr r3, r30
    bl rfc_release_multiplexer_channel
    b lbl_802C6C74
lbl_802C6C28:
    lbz r0, 0x6c(r30)
    li r3, 0x1
    stb r3, 0x6e(r30)
    cmplwi r0, 0x2
    bne lbl_802C6C74
    lbz r0, 0x6f(r30)
    cmpwi r0, 0x0
    beq lbl_802C6C74
    lbz r0, 0x6d(r30)
    cmpwi r0, 0x0
    beq lbl_802C6C6C
    li r0, 0x3
    mr r3, r30
    stb r0, 0x6c(r30)
    li r4, 0x0
    bl rfc_send_sabme
    b lbl_802C6C74
lbl_802C6C6C:
    li r0, 0x4
    stb r0, 0x6c(r30)
lbl_802C6C74:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// rfc_mx_conf_ind
// ----------------------------------------------------------------------------
asm void rfc_mx_conf_ind() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80457828@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80457828@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x414(r5)
    cmplwi r0, 0x4
    blt lbl_802C6CD4
    lis r3, 0x9
    lis r4, lbl_80377CC4@ha
    mr r5, r31
    addi r3, r3, 0x3
    addi r4, r4, lbl_80377CC4@l
    bl LogMsg_1
lbl_802C6CD4:
    lbz r0, 0x2(r31)
    cmpwi r0, 0x0
    beq lbl_802C6CF0
    lhz r3, 0x4(r31)
    subi r0, r3, 0x6
    sth r0, 0x6a(r30)
    b lbl_802C6CF8
lbl_802C6CF0:
    li r0, 0x29a
    sth r0, 0x6a(r30)
lbl_802C6CF8:
    li r0, 0x0
    mr r4, r31
    stb r0, 0x2(r31)
    stb r0, 0x20(r31)
    stb r0, 0x6(r31)
    sth r0, 0x0(r31)
    lhz r3, 0x68(r30)
    bl L2CA_ConfigRsp
    lbz r0, 0x6c(r30)
    li r3, 0x1
    stb r3, 0x6f(r30)
    cmplwi r0, 0x2
    bne lbl_802C6D64
    lbz r0, 0x6e(r30)
    cmpwi r0, 0x0
    beq lbl_802C6D64
    lbz r0, 0x6d(r30)
    cmpwi r0, 0x0
    beq lbl_802C6D5C
    li r0, 0x3
    mr r3, r30
    stb r0, 0x6c(r30)
    li r4, 0x0
    bl rfc_send_sabme
    b lbl_802C6D64
lbl_802C6D5C:
    li r0, 0x4
    stb r0, 0x6c(r30)
lbl_802C6D64:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

