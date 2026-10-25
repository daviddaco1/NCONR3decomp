#include "types.h"

// Translation unit: src/revolution/bte/l2c_main.cpp
// Total functions: 5

// Global data symbols (@ha/@l)
extern u8 jumptable_8037732C[];
extern u8 lbl_80377088[];
extern u8 lbl_8037735C[];
extern u8 lbl_80377370[];
extern u8 lbl_80453A50[];
extern u8 lbl_80457040[];

// Forward declarations
extern void GKI_enqueue();
extern void GKI_freebuf();
extern void GKI_getfirst();
extern void GKI_getnext();
extern void GKI_remove_from_queue();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void LogMsg_3();
extern void LogMsg_5();
extern void _restgpr_14();
extern void _restgpr_24();
extern void _restgpr_27();
extern void _savegpr_14();
extern void _savegpr_24();
extern void _savegpr_27();
extern void btm_sec_is_bonding();
extern void btu_start_timer();
extern void btu_stop_timer();
extern void l2c_csm_execute();
extern void l2c_init();
extern void l2c_link_timeout();
extern void l2c_process_held_packets();
extern void l2c_process_timeout();
extern void l2c_rcv_acl_data();
extern void l2cu_allocate_ccb();
extern void l2cu_find_ccb_by_cid();
extern void l2cu_find_lcb_by_handle();
extern void l2cu_find_rcb_by_psm();
extern void l2cu_reject_connection();
extern void l2cu_send_peer_cmd_reject();
extern void l2cu_send_peer_config_rej();
extern void l2cu_send_peer_disc_rsp();
extern void l2cu_send_peer_echo_rsp();
extern void l2cu_send_peer_info_rsp();
extern void memset();
extern void process_l2cap_cmd();

// ----------------------------------------------------------------------------
// l2c_init
// ----------------------------------------------------------------------------
asm void l2c_init() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x7e8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80457040@ha
    addi r3, r31, lbl_80457040@l
    bl memset
    li r4, 0x1
    li r0, 0x2
    mulli r3, r4, 0x7c
    addi r11, r31, lbl_80457040@l
    li r7, 0x3
    li r4, 0x4
    add r8, r11, r3
    addi r5, r11, 0x178
    mulli r6, r7, 0x7c
    li r7, 0x6
    addi r10, r8, 0x178
    stw r10, 0x180(r11)
    mulli r9, r0, 0x7c
    li r0, 0x5
    add r6, r11, r6
    add r8, r11, r9
    addi r6, r6, 0x178
    mulli r3, r4, 0x7c
    li r4, 0x7
    addi r8, r8, 0x178
    stw r8, 0x1fc(r11)
    add r8, r11, r3
    mulli r9, r0, 0x7c
    stw r6, 0x278(r11)
    addi r10, r8, 0x178
    stw r10, 0x2f4(r11)
    li r0, 0x8
    mulli r6, r7, 0x7c
    add r8, r11, r9
    li r7, 0x9
    addi r8, r8, 0x178
    mulli r3, r4, 0x7c
    add r6, r11, r6
    stw r8, 0x370(r11)
    addi r4, r11, 0x5d4
    addi r6, r6, 0x178
    add r8, r11, r3
    mulli r9, r0, 0x7c
    stw r6, 0x3ec(r11)
    addi r10, r8, 0x178
    stw r10, 0x468(r11)
    li r3, 0x0
    mulli r6, r7, 0x7c
    add r8, r11, r9
    li r0, 0x2
    addi r8, r8, 0x178
    add r6, r11, r6
    stw r8, 0x4e4(r11)
    addi r6, r6, 0x178
    stw r6, 0x560(r11)
    stw r5, 0x7b0(r11)
    stw r4, 0x7b4(r11)
    stb r3, 0x1(r11)
    sth r0, 0x7ba(r11)
    stb r3, lbl_80457040@l(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// l2c_rcv_acl_data
// ----------------------------------------------------------------------------
asm void l2c_rcv_acl_data() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lhz r0, 0x4(r3)
    lis r30, lbl_80377088@ha
    mr r27, r3
    li r28, 0x0
    add r31, r3, r0
    addi r30, r30, lbl_80377088@l
    lbz r0, 0x9(r31)
    lbz r3, 0x8(r31)
    slwi r0, r0, 8
    add r0, r3, r0
    extrwi r5, r0, 2, 18
    cmplwi r5, 0x2
    clrlwi r26, r0, 20
    beq lbl_802C1078
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C106C
    lis r3, 0x8
    addi r4, r30, 0x0
    addi r3, r3, 0x1
    bl LogMsg_1
lbl_802C106C:
    mr r3, r27
    bl GKI_freebuf
    b lbl_802C1318
lbl_802C1078:
    mr r3, r26
    bl l2cu_find_lcb_by_handle
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_802C1158
    lbz r3, 0xf(r31)
    lhz r0, 0x6(r27)
    lbz r4, 0xe(r31)
    slwi r3, r3, 8
    cmpwi r0, 0x0
    lbz r28, 0x10(r31)
    add r0, r4, r3
    clrlwi r24, r0, 16
    bne lbl_802C114C
    cmplwi r24, 0x1
    bne lbl_802C114C
    cmplwi r28, 0xa
    beq lbl_802C10C8
    cmplwi r28, 0x2
    bne lbl_802C114C
lbl_802C10C8:
    mr r3, r26
    bl btm_sec_is_bonding
    clrlwi. r0, r3, 24
    bne lbl_802C114C
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C1110
    addi r3, r3, lbl_80457040@l
    lis r4, 0x8
    lhz r9, 0x7c8(r3)
    addi r3, r4, 0x1
    lhz r6, 0x6(r27)
    mr r5, r26
    mr r7, r24
    mr r8, r28
    addi r4, r30, 0x24
    bl LogMsg_5
lbl_802C1110:
    li r0, 0x2
    lis r28, lbl_80457040@ha
    addi r28, r28, lbl_80457040@l
    sth r0, 0x6(r27)
    mr r4, r27
    addi r3, r28, 0x7c0
    bl GKI_enqueue
    lhz r0, 0x7c8(r28)
    cmplwi r0, 0x1
    bne lbl_802C1318
    addi r3, r28, 0x7cc
    li r4, 0x4
    li r5, 0x1
    bl btu_start_timer
    b lbl_802C1318
lbl_802C114C:
    mr r3, r27
    bl GKI_freebuf
    b lbl_802C1318
lbl_802C1158:
    lhz r4, 0x4(r27)
    lbz r5, 0xb(r31)
    addi r0, r4, 0x4
    lbz r6, 0xa(r31)
    slwi r4, r5, 8
    sth r0, 0x4(r27)
    add r0, r6, r4
    clrlwi r25, r0, 16
    lbz r0, 0xf(r31)
    lbz r4, 0xe(r31)
    slwi r0, r0, 8
    lbz r5, 0xd(r31)
    add r0, r4, r0
    lbz r4, 0xc(r31)
    clrlwi r26, r0, 16
    slwi r0, r5, 8
    add r0, r4, r0
    cmplwi r26, 0x2
    clrlwi r24, r0, 16
    ble lbl_802C11EC
    mr r4, r26
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_802C11EC
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C11E0
    lis r3, 0x8
    mr r5, r26
    addi r3, r3, 0x1
    addi r4, r30, 0x78
    bl LogMsg_1
lbl_802C11E0:
    mr r3, r27
    bl GKI_freebuf
    b lbl_802C1318
lbl_802C11EC:
    cmplwi r25, 0x4
    blt lbl_802C120C
    lhz r3, 0x4(r27)
    subi r4, r25, 0x4
    sth r4, 0x2(r27)
    addi r0, r3, 0x4
    sth r0, 0x4(r27)
    b lbl_802C1238
lbl_802C120C:
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C122C
    lis r3, 0x8
    addi r4, r30, 0x90
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802C122C:
    mr r3, r27
    bl GKI_freebuf
    b lbl_802C1318
lbl_802C1238:
    clrlwi r6, r4, 16
    cmplw r24, r6
    beq lbl_802C1274
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C1268
    lis r3, 0x8
    mr r5, r24
    addi r4, r30, 0xb4
    addi r3, r3, 0x1
    bl LogMsg_2
lbl_802C1268:
    mr r3, r27
    bl GKI_freebuf
    b lbl_802C1318
lbl_802C1274:
    cmplwi r26, 0x1
    bne lbl_802C1298
    mr r3, r29
    mr r5, r24
    addi r4, r31, 0x10
    bl process_l2cap_cmd
    mr r3, r27
    bl GKI_freebuf
    b lbl_802C1318
lbl_802C1298:
    cmplwi r26, 0x2
    bne lbl_802C12F4
    clrlwi r3, r0, 16
    lbz r4, 0x11(r31)
    lbz r5, 0x10(r31)
    addi r3, r3, 0x2
    subi r0, r6, 0x2
    slwi r4, r4, 8
    sth r3, 0x4(r27)
    lis r3, lbl_80457040@ha
    add r4, r5, r4
    sth r0, 0x2(r27)
    clrlwi r5, r4, 16
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x5
    blt lbl_802C12E8
    lis r3, 0x8
    addi r4, r30, 0xe0
    addi r3, r3, 0x4
    bl LogMsg_1
lbl_802C12E8:
    mr r3, r27
    bl GKI_freebuf
    b lbl_802C1318
lbl_802C12F4:
    cmpwi r28, 0x0
    bne lbl_802C1308
    mr r3, r27
    bl GKI_freebuf
    b lbl_802C1318
lbl_802C1308:
    mr r3, r28
    mr r5, r27
    li r4, 0x13
    bl l2c_csm_execute
lbl_802C1318:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// process_l2cap_cmd
// ----------------------------------------------------------------------------
asm void process_l2cap_cmd() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_14
    add r22, r4, r5
    lis r23, lbl_80377088@ha
    lis r30, lbl_80453A50@ha
    mr r21, r4
    li r31, 0x0
    mr r15, r3
    mr r14, r5
    addi r23, r23, lbl_80377088@l
    addi r30, r30, lbl_80453A50@l
    subi r24, r22, 0x4
    li r28, 0x1
    lis r29, 0x8
    lis r27, lbl_80457040@ha
    lis r26, jumptable_8037732C@ha
lbl_802C137C:
    cmplw r21, r24
    mr r16, r21
    bgt lbl_802C1D88
    lbz r0, 0x3(r21)
    lbz r3, 0x2(r21)
    slwi r0, r0, 8
    lbz r7, 0x0(r21)
    add r0, r3, r0
    lbz r25, 0x1(r21)
    clrlwi r17, r0, 16
    add r3, r21, r17
    addi r21, r3, 0x4
    cmplw r21, r22
    ble lbl_802C13E0
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C1D88
    lis r3, 0x8
    mr r5, r14
    mr r6, r17
    addi r4, r23, 0x100
    addi r3, r3, 0x1
    bl LogMsg_3
    b lbl_802C1D88
lbl_802C13E0:
    cmplwi r7, 0xb
    bgt lbl_802C1D4C
    addi r3, r26, jumptable_8037732C@l
    slwi r0, r7, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lbz r0, 0x5(r16)
    lbz r3, 0x4(r16)
    addi r16, r16, 0x6
    slwi r0, r0, 8
    add r0, r3, r0
    clrlwi r17, r0, 16
    cmplwi r17, 0x1
    bne lbl_802C1450
    lbz r3, 0x1(r16)
    lbz r0, lbl_80457040@l(r27)
    lbz r4, 0x0(r16)
    slwi r3, r3, 8
    cmplwi r0, 0x2
    addi r16, r16, 0x2
    add r0, r4, r3
    clrlwi r6, r0, 16
    blt lbl_802C1450
    lhz r5, 0x28(r15)
    addi r3, r29, 0x1
    addi r4, r23, 0x134
    bl LogMsg_2
lbl_802C1450:
    cmplwi r17, 0x2
    bne lbl_802C137C
    lbz r4, 0x1(r16)
    lbz r3, 0x3(r16)
    lbz r0, lbl_80457040@l(r27)
    slwi r5, r4, 8
    lbz r6, 0x0(r16)
    slwi r3, r3, 8
    lbz r4, 0x2(r16)
    cmplwi r0, 0x2
    add r5, r6, r5
    add r0, r4, r3
    clrlwi r17, r5, 16
    clrlwi r16, r0, 16
    blt lbl_802C14A0
    mr r5, r16
    mr r6, r17
    addi r3, r29, 0x1
    addi r4, r23, 0x158
    bl LogMsg_2
lbl_802C14A0:
    mr r3, r15
    mr r4, r16
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    beq lbl_802C137C
    lhz r0, 0x16(r3)
    cmplw r0, r17
    bne lbl_802C137C
    li r4, 0x3
    li r5, 0x0
    bl l2c_csm_execute
    b lbl_802C137C
    lbz r0, 0x5(r16)
    lbz r3, 0x4(r16)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x10(r1)
    clrlwi r3, r0, 16
    lbz r0, 0x7(r16)
    lbz r4, 0x6(r16)
    slwi r0, r0, 8
    add r0, r4, r0
    clrlwi r17, r0, 16
    bl l2cu_find_rcb_by_psm
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_802C1540
    lbz r0, lbl_80457040@l(r27)
    cmplwi r0, 0x2
    blt lbl_802C1528
    lhz r5, 0x10(r1)
    addi r3, r29, 0x1
    addi r4, r23, 0x188
    bl LogMsg_1
lbl_802C1528:
    mr r3, r15
    mr r4, r17
    mr r5, r25
    li r6, 0x2
    bl l2cu_reject_connection
    b lbl_802C137C
lbl_802C1540:
    mr r3, r15
    bl l2cu_allocate_ccb
    cmpwi r3, 0x0
    bne lbl_802C1580
    lbz r0, lbl_80457040@l(r27)
    cmplwi r0, 0x1
    blt lbl_802C1568
    addi r4, r23, 0x1b4
    lis r3, 0x8
    bl LogMsg_0
lbl_802C1568:
    mr r3, r15
    mr r4, r17
    mr r5, r25
    li r6, 0x4
    bl l2cu_reject_connection
    b lbl_802C137C
lbl_802C1580:
    stb r25, 0x36(r3)
    addi r5, r1, 0x8
    li r4, 0xa
    stw r16, 0x30(r3)
    sth r17, 0x16(r3)
    bl l2c_csm_execute
    b lbl_802C137C
    lbz r0, 0x5(r16)
    mr r3, r15
    lbz r4, 0x4(r16)
    slwi r0, r0, 8
    add r0, r4, r0
    sth r0, 0x16(r1)
    lbz r0, 0x9(r16)
    lbz r4, 0x8(r16)
    slwi r0, r0, 8
    lbz r5, 0x7(r16)
    add r0, r4, r0
    lbz r6, 0x6(r16)
    slwi r4, r5, 8
    sth r0, 0x12(r1)
    add r0, r6, r4
    clrlwi r17, r0, 16
    lbz r0, 0xb(r16)
    mr r4, r17
    lbz r5, 0xa(r16)
    slwi r0, r0, 8
    add r0, r5, r0
    sth r0, 0x14(r1)
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    bne lbl_802C1624
    lbz r0, lbl_80457040@l(r27)
    cmplwi r0, 0x2
    blt lbl_802C137C
    lhz r6, 0x16(r1)
    mr r5, r17
    addi r3, r29, 0x1
    addi r4, r23, 0x1d4
    bl LogMsg_2
    b lbl_802C137C
lbl_802C1624:
    lbz r5, 0x35(r3)
    cmplw r5, r25
    beq lbl_802C1650
    lbz r0, lbl_80457040@l(r27)
    cmplwi r0, 0x2
    blt lbl_802C137C
    mr r6, r25
    addi r3, r29, 0x1
    addi r4, r23, 0x204
    bl LogMsg_2
    b lbl_802C137C
lbl_802C1650:
    lhz r0, 0x12(r1)
    cmpwi r0, 0x0
    bne lbl_802C166C
    addi r5, r1, 0x8
    li r4, 0xb
    bl l2c_csm_execute
    b lbl_802C137C
lbl_802C166C:
    cmplwi r0, 0x1
    bne lbl_802C1684
    addi r5, r1, 0x8
    li r4, 0xc
    bl l2c_csm_execute
    b lbl_802C137C
lbl_802C1684:
    addi r5, r1, 0x8
    li r4, 0xd
    bl l2c_csm_execute
    b lbl_802C137C
    lbz r0, 0x7(r16)
    li r19, 0x0
    lbz r4, 0x5(r16)
    li r18, 0x0
    lbz r3, 0x6(r16)
    slwi r0, r0, 8
    lbz r5, 0x4(r16)
    slwi r4, r4, 8
    add r0, r3, r0
    addi r16, r16, 0x8
    add r3, r5, r4
    sth r0, 0x50(r1)
    mr r20, r16
    stb r19, 0x3c(r1)
    clrlwi r4, r3, 16
    stb r19, 0x1e(r1)
    stb r19, 0x1a(r1)
    stb r19, 0x38(r1)
    b lbl_802C18DC
lbl_802C16E0:
    lbz r5, 0x0(r16)
    lbz r3, 0x1(r16)
    addi r16, r16, 0x2
    clrlwi r0, r5, 25
    cmpwi r0, 0x3
    beq lbl_802C1758
    bge lbl_802C170C
    cmpwi r0, 0x1
    beq lbl_802C1718
    bge lbl_802C1738
    b lbl_802C18B0
lbl_802C170C:
    cmpwi r0, 0x5
    bge lbl_802C18B0
    b lbl_802C1850
lbl_802C1718:
    stb r28, 0x1a(r1)
    lbz r0, 0x1(r16)
    lbz r3, 0x0(r16)
    addi r16, r16, 0x2
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x1c(r1)
    b lbl_802C18DC
lbl_802C1738:
    stb r28, 0x38(r1)
    lbz r0, 0x1(r16)
    lbz r3, 0x0(r16)
    addi r16, r16, 0x2
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x3a(r1)
    b lbl_802C18DC
lbl_802C1758:
    stb r28, 0x1e(r1)
    lbz r0, 0x0(r16)
    stb r0, 0x20(r1)
    lbz r0, 0x1(r16)
    stb r0, 0x21(r1)
    lbz r3, 0x5(r16)
    lbz r5, 0x4(r16)
    lbz r0, 0x3(r16)
    slwi r6, r3, 24
    lbz r3, 0x2(r16)
    slwi r5, r5, 16
    slwi r0, r0, 8
    add r3, r5, r3
    add r0, r6, r0
    add r0, r3, r0
    stw r0, 0x24(r1)
    lbz r3, 0x9(r16)
    lbz r5, 0x8(r16)
    lbz r0, 0x7(r16)
    slwi r6, r3, 24
    lbz r3, 0x6(r16)
    slwi r5, r5, 16
    slwi r0, r0, 8
    add r3, r5, r3
    add r0, r6, r0
    add r0, r3, r0
    stw r0, 0x28(r1)
    lbz r3, 0xd(r16)
    lbz r5, 0xc(r16)
    lbz r0, 0xb(r16)
    slwi r6, r3, 24
    lbz r3, 0xa(r16)
    slwi r5, r5, 16
    slwi r0, r0, 8
    add r3, r5, r3
    add r0, r6, r0
    add r0, r3, r0
    stw r0, 0x2c(r1)
    lbz r3, 0x11(r16)
    lbz r5, 0x10(r16)
    lbz r0, 0xf(r16)
    slwi r6, r3, 24
    lbz r3, 0xe(r16)
    slwi r5, r5, 16
    slwi r0, r0, 8
    add r3, r5, r3
    add r0, r6, r0
    add r0, r3, r0
    stw r0, 0x30(r1)
    lbz r3, 0x15(r16)
    lbz r5, 0x14(r16)
    lbz r0, 0x13(r16)
    slwi r6, r3, 24
    lbz r3, 0x12(r16)
    slwi r5, r5, 16
    slwi r0, r0, 8
    addi r16, r16, 0x16
    add r3, r5, r3
    add r0, r6, r0
    add r0, r3, r0
    stw r0, 0x34(r1)
    b lbl_802C18DC
lbl_802C1850:
    stb r28, 0x3c(r1)
    lbz r0, 0x0(r16)
    stb r0, 0x3e(r1)
    lbz r0, 0x1(r16)
    stb r0, 0x3f(r1)
    lbz r0, 0x2(r16)
    stb r0, 0x40(r1)
    lbz r0, 0x4(r16)
    lbz r3, 0x3(r16)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x42(r1)
    lbz r0, 0x6(r16)
    lbz r3, 0x5(r16)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x44(r1)
    lbz r0, 0x8(r16)
    lbz r3, 0x7(r16)
    addi r16, r16, 0x9
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x46(r1)
    b lbl_802C18DC
lbl_802C18B0:
    addi r6, r3, 0x2
    cmpw r6, r17
    bgt lbl_802C18D8
    rlwinm. r0, r5, 0, 24, 24
    add r16, r16, r3
    bne lbl_802C18DC
    add r0, r18, r6
    li r19, 0x1
    clrlwi r18, r0, 16
    b lbl_802C18DC
lbl_802C18D8:
    mr r16, r21
lbl_802C18DC:
    cmplw r16, r21
    blt lbl_802C16E0
    mr r3, r15
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    beq lbl_802C1928
    cmpwi r19, 0x0
    stb r25, 0x36(r3)
    beq lbl_802C1918
    subi r0, r17, 0x4
    mr r4, r20
    mr r6, r18
    clrlwi r5, r0, 16
    bl l2cu_send_peer_config_rej
    b lbl_802C137C
lbl_802C1918:
    addi r5, r1, 0x18
    li r4, 0xe
    bl l2c_csm_execute
    b lbl_802C137C
lbl_802C1928:
    mr r3, r15
    mr r5, r25
    li r4, 0x2
    li r6, 0x0
    li r7, 0x0
    bl l2cu_send_peer_cmd_reject
    b lbl_802C137C
    lbz r0, 0x7(r16)
    lbz r3, 0x6(r16)
    slwi r0, r0, 8
    lbz r4, 0x5(r16)
    add r0, r3, r0
    lbz r5, 0x4(r16)
    slwi r3, r4, 8
    sth r0, 0x50(r1)
    add r0, r5, r3
    clrlwi r17, r0, 16
    lbz r0, 0x9(r16)
    lbz r3, 0x8(r16)
    addi r16, r16, 0xa
    slwi r0, r0, 8
    add r0, r3, r0
    stb r31, 0x1e(r1)
    sth r0, 0x18(r1)
    stb r31, 0x1a(r1)
    stb r31, 0x38(r1)
    stb r31, 0x3c(r1)
    b lbl_802C1B60
lbl_802C1998:
    lbz r0, 0x0(r16)
    addi r16, r16, 0x2
    clrlwi r0, r0, 25
    cmpwi r0, 0x3
    beq lbl_802C1A0C
    bge lbl_802C19C0
    cmpwi r0, 0x1
    beq lbl_802C19CC
    bge lbl_802C19EC
    b lbl_802C1B60
lbl_802C19C0:
    cmpwi r0, 0x5
    bge lbl_802C1B60
    b lbl_802C1B04
lbl_802C19CC:
    stb r28, 0x1a(r1)
    lbz r0, 0x1(r16)
    lbz r3, 0x0(r16)
    addi r16, r16, 0x2
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x1c(r1)
    b lbl_802C1B60
lbl_802C19EC:
    stb r28, 0x38(r1)
    lbz r0, 0x1(r16)
    lbz r3, 0x0(r16)
    addi r16, r16, 0x2
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x3a(r1)
    b lbl_802C1B60
lbl_802C1A0C:
    stb r28, 0x1e(r1)
    lbz r0, 0x0(r16)
    stb r0, 0x20(r1)
    lbz r0, 0x1(r16)
    stb r0, 0x21(r1)
    lbz r3, 0x5(r16)
    lbz r4, 0x4(r16)
    lbz r0, 0x3(r16)
    slwi r5, r3, 24
    lbz r3, 0x2(r16)
    slwi r4, r4, 16
    slwi r0, r0, 8
    add r3, r4, r3
    add r0, r5, r0
    add r0, r3, r0
    stw r0, 0x24(r1)
    lbz r3, 0x9(r16)
    lbz r4, 0x8(r16)
    lbz r0, 0x7(r16)
    slwi r5, r3, 24
    lbz r3, 0x6(r16)
    slwi r4, r4, 16
    slwi r0, r0, 8
    add r3, r4, r3
    add r0, r5, r0
    add r0, r3, r0
    stw r0, 0x28(r1)
    lbz r3, 0xd(r16)
    lbz r4, 0xc(r16)
    lbz r0, 0xb(r16)
    slwi r5, r3, 24
    lbz r3, 0xa(r16)
    slwi r4, r4, 16
    slwi r0, r0, 8
    add r3, r4, r3
    add r0, r5, r0
    add r0, r3, r0
    stw r0, 0x2c(r1)
    lbz r3, 0x11(r16)
    lbz r4, 0x10(r16)
    lbz r0, 0xf(r16)
    slwi r5, r3, 24
    lbz r3, 0xe(r16)
    slwi r4, r4, 16
    slwi r0, r0, 8
    add r3, r4, r3
    add r0, r5, r0
    add r0, r3, r0
    stw r0, 0x30(r1)
    lbz r3, 0x15(r16)
    lbz r4, 0x14(r16)
    lbz r0, 0x13(r16)
    slwi r5, r3, 24
    lbz r3, 0x12(r16)
    slwi r4, r4, 16
    slwi r0, r0, 8
    addi r16, r16, 0x16
    add r3, r4, r3
    add r0, r5, r0
    add r0, r3, r0
    stw r0, 0x34(r1)
    b lbl_802C1B60
lbl_802C1B04:
    stb r28, 0x3c(r1)
    lbz r0, 0x0(r16)
    stb r0, 0x3e(r1)
    lbz r0, 0x1(r16)
    stb r0, 0x3f(r1)
    lbz r0, 0x2(r16)
    stb r0, 0x40(r1)
    lbz r0, 0x4(r16)
    lbz r3, 0x3(r16)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x42(r1)
    lbz r0, 0x6(r16)
    lbz r3, 0x5(r16)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x44(r1)
    lbz r0, 0x8(r16)
    lbz r3, 0x7(r16)
    addi r16, r16, 0x9
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x46(r1)
lbl_802C1B60:
    cmplw r16, r21
    blt lbl_802C1998
    mr r3, r15
    mr r4, r17
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    beq lbl_802C1BD4
    lbz r5, 0x35(r3)
    cmplw r5, r25
    beq lbl_802C1BA8
    lbz r0, lbl_80457040@l(r27)
    cmplwi r0, 0x2
    blt lbl_802C137C
    mr r6, r25
    addi r3, r29, 0x1
    addi r4, r23, 0x230
    bl LogMsg_2
    b lbl_802C137C
lbl_802C1BA8:
    lhz r0, 0x18(r1)
    cmpwi r0, 0x0
    bne lbl_802C1BC4
    addi r5, r1, 0x18
    li r4, 0xf
    bl l2c_csm_execute
    b lbl_802C137C
lbl_802C1BC4:
    addi r5, r1, 0x18
    li r4, 0x10
    bl l2c_csm_execute
    b lbl_802C137C
lbl_802C1BD4:
    lbz r0, lbl_80457040@l(r27)
    cmplwi r0, 0x2
    blt lbl_802C137C
    mr r5, r17
    addi r3, r29, 0x1
    addi r4, r23, 0x25c
    bl LogMsg_1
    b lbl_802C137C
    lbz r4, 0x5(r16)
    mr r3, r15
    lbz r0, 0x7(r16)
    slwi r5, r4, 8
    lbz r6, 0x4(r16)
    lbz r4, 0x6(r16)
    slwi r0, r0, 8
    add r5, r6, r5
    add r0, r4, r0
    clrlwi r16, r5, 16
    mr r4, r16
    clrlwi r17, r0, 16
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    beq lbl_802C1C50
    lhz r0, 0x16(r3)
    cmplw r0, r17
    bne lbl_802C137C
    stb r25, 0x36(r3)
    addi r5, r1, 0x8
    li r4, 0x11
    bl l2c_csm_execute
    b lbl_802C137C
lbl_802C1C50:
    mr r3, r15
    mr r4, r25
    mr r5, r16
    mr r6, r17
    bl l2cu_send_peer_disc_rsp
    b lbl_802C137C
    lbz r4, 0x5(r16)
    mr r3, r15
    lbz r0, 0x7(r16)
    slwi r5, r4, 8
    lbz r6, 0x4(r16)
    lbz r4, 0x6(r16)
    slwi r0, r0, 8
    add r5, r6, r5
    add r0, r4, r0
    clrlwi r16, r5, 16
    clrlwi r4, r0, 16
    bl l2cu_find_ccb_by_cid
    cmpwi r3, 0x0
    beq lbl_802C137C
    lhz r0, 0x16(r3)
    cmplw r0, r16
    bne lbl_802C137C
    lbz r0, 0x35(r3)
    cmplw r0, r25
    bne lbl_802C137C
    addi r5, r1, 0x8
    li r4, 0x12
    bl l2c_csm_execute
    b lbl_802C137C
    lhz r3, 0x7e(r30)
    subi r0, r3, 0xc
    cmpw r17, r0
    bge lbl_802C1CF0
    mr r3, r15
    mr r4, r25
    mr r6, r17
    addi r5, r16, 0x4
    bl l2cu_send_peer_echo_rsp
    b lbl_802C137C
lbl_802C1CF0:
    mr r3, r15
    mr r4, r25
    li r5, 0x0
    li r6, 0x0
    bl l2cu_send_peer_echo_rsp
    b lbl_802C137C
    lwz r12, 0x54(r15)
    cmpwi r12, 0x0
    beq lbl_802C137C
    stw r31, 0x54(r15)
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_802C137C
    lbz r0, 0x5(r16)
    mr r3, r15
    lbz r5, 0x4(r16)
    mr r4, r25
    slwi r0, r0, 8
    add r0, r5, r0
    clrlwi r5, r0, 16
    bl l2cu_send_peer_info_rsp
    b lbl_802C137C
lbl_802C1D4C:
    lis r3, lbl_80457040@ha
    lbz r0, lbl_80457040@l(r3)
    cmplwi r0, 0x2
    blt lbl_802C1D70
    lis r3, 0x8
    mr r5, r7
    addi r3, r3, 0x1
    addi r4, r23, 0x288
    bl LogMsg_1
lbl_802C1D70:
    mr r3, r15
    mr r5, r25
    li r4, 0x0
    li r6, 0x0
    li r7, 0x0
    bl l2cu_send_peer_cmd_reject
lbl_802C1D88:
    addi r11, r1, 0xa0
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// l2c_process_timeout
// ----------------------------------------------------------------------------
asm void l2c_process_timeout() {
    nofralloc
    lhz r0, 0x14(r3)
    cmpwi r0, 0x4
    beq lbl_802C1DE4
    bge lbl_802C1DC0
    cmpwi r0, 0x2
    beq lbl_802C1DCC
    bge lbl_802C1DD4
    blr
lbl_802C1DC0:
    cmpwi r0, 0x49
    beqlr
    blr
lbl_802C1DCC:
    lwz r3, 0x10(r3)
    b l2c_link_timeout
lbl_802C1DD4:
    lwz r3, 0x10(r3)
    li r4, 0x1e
    li r5, 0x0
    b l2c_csm_execute
lbl_802C1DE4:
    li r3, 0x1
    b l2c_process_held_packets
    blr
}

// ----------------------------------------------------------------------------
// l2c_process_held_packets
// ----------------------------------------------------------------------------
asm void l2c_process_held_packets() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_80457040@ha
    mr r27, r3
    addi r4, r31, lbl_80457040@l
    lhz r0, 0x7c8(r4)
    addi r28, r4, 0x7c0
    cmpwi r0, 0x0
    beq lbl_802C1F04
    cmpwi r3, 0x0
    bne lbl_802C1E54
    addi r3, r4, 0x7cc
    bl btu_stop_timer
    lbz r0, lbl_80457040@l(r31)
    cmplwi r0, 0x2
    blt lbl_802C1E74
    lis r3, 0x8
    lis r4, lbl_8037735C@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_8037735C@l
    bl LogMsg_0
    b lbl_802C1E74
lbl_802C1E54:
    lbz r0, lbl_80457040@l(r31)
    cmplwi r0, 0x2
    blt lbl_802C1E74
    lis r3, 0x8
    lis r4, lbl_80377370@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80377370@l
    bl LogMsg_0
lbl_802C1E74:
    mr r3, r28
    bl GKI_getfirst
    lis r4, 0x1
    mr r30, r3
    subi r31, r4, 0x1
    b lbl_802C1ED8
lbl_802C1E8C:
    mr r3, r30
    bl GKI_getnext
    cmpwi r27, 0x0
    mr r29, r3
    beq lbl_802C1EBC
    lhz r3, 0x6(r30)
    cmpwi r3, 0x0
    beq lbl_802C1EBC
    subi r3, r3, 0x1
    clrlwi. r0, r3, 16
    sth r3, 0x6(r30)
    bne lbl_802C1ED4
lbl_802C1EBC:
    mr r3, r28
    mr r4, r30
    bl GKI_remove_from_queue
    sth r31, 0x6(r30)
    mr r3, r30
    bl l2c_rcv_acl_data
lbl_802C1ED4:
    mr r30, r29
lbl_802C1ED8:
    cmpwi r30, 0x0
    bne lbl_802C1E8C
    lhz r0, 0x8(r28)
    cmpwi r0, 0x0
    beq lbl_802C1F04
    lis r3, lbl_80457040@ha
    li r4, 0x4
    addi r3, r3, lbl_80457040@l
    li r5, 0x1
    addi r3, r3, 0x7cc
    bl btu_start_timer
lbl_802C1F04:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

