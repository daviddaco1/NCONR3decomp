#include "types.h"

// Translation unit: src/revolution/bte/rfc_ts_frames.cpp
// Total functions: 15

// Small Data symbols (@sda21)
extern float lbl_8049CFD8;
extern float lbl_8049CFE0;

// Global data symbols (@ha/@l)
extern u8 lbl_80378008[];
extern u8 lbl_80457828[];

// Forward declarations
extern void GKI_freebuf();
extern void GKI_getpoolbuf();
extern void L2CA_DataWrite();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_26();
extern void _savegpr_27();
extern void rfc_calc_fcs();
extern void rfc_check_fcs();
extern void rfc_check_send_cmd();
extern void rfc_parse_data();
extern void rfc_process_fcoff();
extern void rfc_process_fcon();
extern void rfc_process_msc();
extern void rfc_process_mx_message();
extern void rfc_process_nsc();
extern void rfc_process_pn();
extern void rfc_process_rls();
extern void rfc_process_rpn();
extern void rfc_process_test_rsp();
extern void rfc_send_buf_uih();
extern void rfc_send_credit();
extern void rfc_send_disc();
extern void rfc_send_dm();
extern void rfc_send_fcoff();
extern void rfc_send_fcon();
extern void rfc_send_msc();
extern void rfc_send_pn();
extern void rfc_send_rls();
extern void rfc_send_rpn();
extern void rfc_send_sabme();
extern void rfc_send_test();
extern void rfc_send_ua();

// ----------------------------------------------------------------------------
// rfc_send_sabme
// ----------------------------------------------------------------------------
asm void rfc_send_sabme() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x6d(r3)
    mr r27, r3
    mr r28, r4
    li r3, 0x1
    cmpwi r0, 0x0
    bne lbl_802C8478
    li r3, 0x0
lbl_802C8478:
    clrlslwi r29, r3, 25, 1
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_802C84E0
    li r0, 0x9
    addi r31, r3, 0x11
    sth r0, 0x4(r3)
    ori r3, r29, 0x1
    clrlslwi r0, r28, 24, 2
    li r5, 0x3f
    or r3, r3, r0
    mr r4, r31
    stb r3, 0x0(r31)
    li r0, 0x1
    li r3, 0x3
    stb r5, 0x1(r31)
    stb r0, 0x2(r31)
    bl rfc_calc_fcs
    stb r3, 0x3(r31)
    li r0, 0x4
    mr r3, r27
    mr r4, r30
    sth r0, 0x2(r30)
    bl rfc_check_send_cmd
lbl_802C84E0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// rfc_send_ua
// ----------------------------------------------------------------------------
asm void rfc_send_ua() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x6d(r3)
    mr r27, r3
    mr r28, r4
    li r3, 0x1
    cmpwi r0, 0x0
    beq lbl_802C8528
    li r3, 0x0
lbl_802C8528:
    clrlslwi r29, r3, 25, 1
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_802C8590
    li r0, 0x9
    addi r31, r3, 0x11
    sth r0, 0x4(r3)
    ori r3, r29, 0x1
    clrlslwi r0, r28, 24, 2
    li r5, 0x73
    or r3, r3, r0
    mr r4, r31
    stb r3, 0x0(r31)
    li r0, 0x1
    li r3, 0x3
    stb r5, 0x1(r31)
    stb r0, 0x2(r31)
    bl rfc_calc_fcs
    stb r3, 0x3(r31)
    li r0, 0x4
    mr r3, r27
    mr r4, r30
    sth r0, 0x2(r30)
    bl rfc_check_send_cmd
lbl_802C8590:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// rfc_send_dm
// ----------------------------------------------------------------------------
asm void rfc_send_dm() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x6d(r3)
    mr r31, r3
    mr r27, r4
    mr r30, r5
    cmpwi r0, 0x0
    li r0, 0x1
    beq lbl_802C85DC
    li r0, 0x0
lbl_802C85DC:
    clrlslwi r28, r0, 25, 1
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_802C8654
    neg r0, r30
    li r4, 0x9
    or r0, r0, r30
    sth r4, 0x4(r3)
    addi r30, r3, 0x11
    ori r5, r28, 0x1
    srawi r3, r0, 31
    clrlslwi r4, r27, 24, 2
    or r4, r5, r4
    li r0, 0x1
    rlwinm r3, r3, 0, 27, 27
    stb r4, 0x0(r30)
    ori r3, r3, 0xf
    mr r4, r30
    stb r3, 0x1(r30)
    li r3, 0x3
    stb r0, 0x2(r30)
    bl rfc_calc_fcs
    stb r3, 0x3(r30)
    li r0, 0x4
    mr r3, r31
    mr r4, r29
    sth r0, 0x2(r29)
    bl rfc_check_send_cmd
lbl_802C8654:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// rfc_send_disc
// ----------------------------------------------------------------------------
asm void rfc_send_disc() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x6d(r3)
    mr r27, r3
    mr r28, r4
    li r3, 0x1
    cmpwi r0, 0x0
    bne lbl_802C869C
    li r3, 0x0
lbl_802C869C:
    clrlslwi r29, r3, 25, 1
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_802C8704
    li r0, 0x9
    addi r31, r3, 0x11
    sth r0, 0x4(r3)
    ori r3, r29, 0x1
    clrlslwi r0, r28, 24, 2
    li r5, 0x53
    or r3, r3, r0
    mr r4, r31
    stb r3, 0x0(r31)
    li r0, 0x1
    li r3, 0x3
    stb r5, 0x1(r31)
    stb r0, 0x2(r31)
    bl rfc_calc_fcs
    stb r3, 0x3(r31)
    li r0, 0x4
    mr r3, r27
    mr r4, r30
    sth r0, 0x2(r30)
    bl rfc_check_send_cmd
lbl_802C8704:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// rfc_send_buf_uih
// ----------------------------------------------------------------------------
asm void rfc_send_buf_uih() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lbz r0, 0x6d(r3)
    cmpwi r0, 0x0
    li r0, 0x1
    bne lbl_802C8758
    li r0, 0x0
lbl_802C8758:
    lhz r3, 0x4(r5)
    clrlslwi r6, r0, 25, 1
    lhz r0, 0x2(r5)
    subi r3, r3, 0x3
    cmplwi r0, 0x7f
    sth r3, 0x4(r5)
    ble lbl_802C8780
    clrlwi r3, r3, 16
    subi r0, r3, 0x1
    sth r0, 0x4(r5)
lbl_802C8780:
    cmpwi r4, 0x0
    beq lbl_802C8794
    lhz r0, 0x6(r5)
    clrlwi r0, r0, 24
    b lbl_802C8798
lbl_802C8794:
    li r0, 0x0
lbl_802C8798:
    cmpwi r0, 0x0
    beq lbl_802C87AC
    lhz r3, 0x4(r5)
    subi r3, r3, 0x1
    sth r3, 0x4(r5)
lbl_802C87AC:
    neg r3, r0
    lhz r7, 0x4(r5)
    or r3, r3, r0
    ori r6, r6, 0x1
    clrlslwi r4, r4, 24, 2
    add r7, r5, r7
    or r4, r6, r4
    srawi r3, r3, 31
    rlwinm r3, r3, 0, 27, 27
    stb r4, 0x8(r7)
    ori r3, r3, 0xef
    addi r4, r7, 0xa
    stb r3, 0x9(r7)
    lhz r3, 0x2(r5)
    cmplwi r3, 0x7f
    bgt lbl_802C880C
    clrlslwi r3, r3, 16, 1
    ori r3, r3, 0x1
    stb r3, 0x0(r4)
    addi r4, r4, 0x1
    lhz r3, 0x2(r5)
    addi r3, r3, 0x3
    sth r3, 0x2(r5)
    b lbl_802C8830
lbl_802C880C:
    clrlslwi r3, r3, 25, 1
    stb r3, 0x0(r4)
    lhz r3, 0x2(r5)
    srawi r3, r3, 7
    stb r3, 0x1(r4)
    addi r4, r4, 0x2
    lhz r3, 0x2(r5)
    addi r3, r3, 0x4
    sth r3, 0x2(r5)
lbl_802C8830:
    cmpwi r0, 0x0
    beq lbl_802C8848
    stb r0, 0x0(r4)
    lhz r3, 0x2(r5)
    addi r0, r3, 0x1
    sth r0, 0x2(r5)
lbl_802C8848:
    lhz r4, 0x2(r5)
    li r3, 0x2
    lhz r6, 0x4(r5)
    addi r0, r4, 0x1
    add r6, r5, r6
    sth r0, 0x2(r5)
    add r28, r6, r4
    addi r4, r6, 0x8
    bl rfc_calc_fcs
    cmpwi r30, 0x0
    stb r3, 0x8(r28)
    bne lbl_802C8888
    mr r3, r29
    mr r4, r31
    bl rfc_check_send_cmd
    b lbl_802C8894
lbl_802C8888:
    lhz r3, 0x68(r29)
    mr r4, r31
    bl L2CA_DataWrite
lbl_802C8894:
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
// rfc_send_pn
// ----------------------------------------------------------------------------
asm void rfc_send_pn() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r30, r3
    mr r26, r4
    mr r27, r5
    mr r31, r6
    mr r28, r7
    mr r29, r8
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802C8984
    neg r0, r27
    li r4, 0xc
    or r0, r0, r27
    sth r4, 0x4(r3)
    srawi r4, r0, 31
    cmpwi r27, 0x0
    rlwinm r4, r4, 0, 30, 30
    li r0, 0x11
    ori r4, r4, 0x81
    addi r8, r3, 0x18
    stb r4, 0x14(r3)
    stb r0, 0x15(r3)
    stb r26, 0x16(r3)
    stb r28, 0x17(r3)
    beq lbl_802C893C
    li r0, 0x0
    stb r0, 0x0(r8)
    addi r8, r8, 0x1
    b lbl_802C8950
lbl_802C893C:
    lis r4, lbl_80457828@ha
    addi r4, r4, lbl_80457828@l
    lbz r0, 0xb(r4)
    stb r0, 0x0(r8)
    addi r8, r8, 0x1
lbl_802C8950:
    li r7, 0x0
    extrwi r6, r31, 8, 16
    stb r7, 0x0(r8)
    li r0, 0xa
    mr r5, r3
    li r4, 0x0
    stb r31, 0x1(r8)
    stb r6, 0x2(r8)
    stb r7, 0x3(r8)
    stb r29, 0x4(r8)
    sth r0, 0x2(r3)
    mr r3, r30
    bl rfc_send_buf_uih
lbl_802C8984:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// rfc_send_fcon
// ----------------------------------------------------------------------------
asm void rfc_send_fcon() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802C8A08
    neg r0, r31
    li r4, 0xc
    or r0, r0, r31
    sth r4, 0x4(r3)
    srawi r4, r0, 31
    li r6, 0x2
    rlwinm r4, r4, 0, 30, 30
    li r0, 0x1
    ori r4, r4, 0xa1
    mr r5, r3
    stb r4, 0x14(r3)
    li r4, 0x0
    stb r0, 0x15(r3)
    sth r6, 0x2(r3)
    mr r3, r30
    bl rfc_send_buf_uih
lbl_802C8A08:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// rfc_send_fcoff
// ----------------------------------------------------------------------------
asm void rfc_send_fcoff() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802C8A8C
    neg r0, r31
    li r4, 0xc
    or r0, r0, r31
    sth r4, 0x4(r3)
    srawi r4, r0, 31
    li r6, 0x2
    rlwinm r4, r4, 0, 30, 30
    li r0, 0x1
    ori r4, r4, 0x61
    mr r5, r3
    stb r4, 0x14(r3)
    li r4, 0x0
    stb r0, 0x15(r3)
    sth r6, 0x2(r3)
    mr r3, r30
    bl rfc_send_buf_uih
lbl_802C8A8C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// rfc_send_msc
// ----------------------------------------------------------------------------
asm void rfc_send_msc() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lbz r31, 0x0(r6)
    mr r28, r3
    lbz r30, 0x1(r6)
    mr r26, r4
    mr r27, r5
    mr r29, r6
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802C8BAC
    neg r0, r27
    neg r4, r30
    or r0, r0, r27
    li r6, 0xc
    or r5, r4, r30
    sth r6, 0x4(r3)
    srawi r0, r0, 31
    clrlslwi r4, r26, 24, 2
    rlwinm r0, r0, 0, 30, 30
    srwi r5, r5, 31
    ori r0, r0, 0xe1
    cmpwi r30, 0x0
    addi r9, r5, 0x2
    stb r0, 0x14(r3)
    clrlslwi r5, r9, 24, 1
    clrlwi r0, r31, 31
    ori r6, r5, 0x1
    ori r5, r4, 0x3
    stb r6, 0x15(r3)
    extrwi r4, r31, 1, 30
    neg r8, r0
    stb r5, 0x16(r3)
    neg r4, r4
    extrwi r0, r31, 1, 29
    lbz r7, 0x4(r29)
    rlwinm r10, r4, 0, 28, 28
    neg r6, r0
    extrwi r0, r31, 1, 28
    neg r4, r7
    or r4, r4, r7
    neg r5, r0
    srawi r4, r4, 31
    ori r0, r10, 0x1
    rlwinm r4, r4, 0, 30, 30
    addi r7, r3, 0x18
    rlwimi r4, r8, 0, 29, 29
    rlwimi r4, r6, 0, 25, 25
    rlwimi r4, r5, 0, 24, 24
    or r0, r4, r0
    stb r0, 0x17(r3)
    beq lbl_802C8B90
    clrlslwi r0, r30, 24, 4
    ori r0, r0, 0x3
    stb r0, 0x0(r7)
lbl_802C8B90:
    clrlwi r4, r9, 24
    mr r5, r3
    addi r0, r4, 0x2
    sth r0, 0x2(r3)
    li r4, 0x0
    mr r3, r28
    bl rfc_send_buf_uih
lbl_802C8BAC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// rfc_send_rls
// ----------------------------------------------------------------------------
asm void rfc_send_rls() {
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
    beq lbl_802C8C54
    neg r0, r30
    li r5, 0xc
    or r4, r0, r30
    sth r5, 0x4(r3)
    srawi r4, r4, 31
    clrlslwi r0, r29, 24, 2
    rlwinm r5, r4, 0, 30, 30
    ori r6, r31, 0x1
    ori r5, r5, 0x51
    ori r7, r0, 0x3
    stb r5, 0x14(r3)
    li r4, 0x5
    li r0, 0x4
    mr r5, r3
    stb r4, 0x15(r3)
    li r4, 0x0
    stb r7, 0x16(r3)
    stb r6, 0x17(r3)
    sth r0, 0x2(r3)
    mr r3, r28
    bl rfc_send_buf_uih
lbl_802C8C54:
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
// rfc_send_rpn
// ----------------------------------------------------------------------------
asm void rfc_send_rpn() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r3
    mr r27, r4
    mr r28, r5
    mr r30, r6
    mr r31, r7
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r5, r3
    beq lbl_802C8D78
    neg r0, r28
    li r4, 0xc
    or r0, r0, r28
    sth r4, 0x4(r3)
    srawi r0, r0, 31
    cmpwi r30, 0x0
    rlwinm r0, r0, 0, 30, 30
    addi r4, r3, 0x15
    ori r0, r0, 0x91
    stb r0, 0x14(r3)
    bne lbl_802C8CF8
    li r6, 0x3
    clrlslwi r0, r27, 24, 2
    stb r6, 0x0(r4)
    ori r0, r0, 0x3
    stb r0, 0x1(r4)
    sth r6, 0x2(r3)
    b lbl_802C8D6C
lbl_802C8CF8:
    li r6, 0x11
    clrlslwi r0, r27, 24, 2
    stb r6, 0x0(r4)
    ori r7, r0, 0x3
    extrwi r6, r31, 8, 16
    li r0, 0xa
    stb r7, 0x1(r4)
    lbz r7, 0x0(r30)
    stb r7, 0x2(r4)
    lbz r7, 0x2(r30)
    lbz r9, 0x3(r30)
    lbz r10, 0x4(r30)
    slwi r7, r7, 2
    lbz r8, 0x1(r30)
    slwi r9, r9, 3
    slwi r10, r10, 4
    or r7, r8, r7
    or r7, r9, r7
    or r7, r10, r7
    stb r7, 0x3(r4)
    lbz r7, 0x5(r30)
    stb r7, 0x4(r4)
    lbz r7, 0x7(r30)
    stb r7, 0x5(r4)
    lbz r7, 0x8(r30)
    stb r7, 0x6(r4)
    stb r31, 0x7(r4)
    stb r6, 0x8(r4)
    sth r0, 0x2(r3)
lbl_802C8D6C:
    mr r3, r29
    li r4, 0x0
    bl rfc_send_buf_uih
lbl_802C8D78:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// rfc_send_test
// ----------------------------------------------------------------------------
asm void rfc_send_test() {
    nofralloc
    lhz r0, 0x4(r5)
    cmplwi r0, 0x10
    bge lbl_802C8DE8
    lhz r6, 0x2(r5)
    add r0, r5, r0
    li r8, 0x0
    add r7, r0, r6
    add r6, r5, r6
    addi r7, r7, 0x7
    addi r9, r6, 0x17
    b lbl_802C8DD0
lbl_802C8DBC:
    lbz r0, 0x0(r7)
    addi r8, r8, 0x1
    subi r7, r7, 0x1
    stb r0, 0x0(r9)
    subi r9, r9, 0x1
lbl_802C8DD0:
    lhz r0, 0x2(r5)
    clrlwi r6, r8, 16
    cmplw r6, r0
    blt lbl_802C8DBC
    li r0, 0x10
    sth r0, 0x4(r5)
lbl_802C8DE8:
    neg r0, r4
    lhz r6, 0x4(r5)
    or r0, r0, r4
    subi r4, r6, 0x2
    srawi r0, r0, 31
    sth r4, 0x4(r5)
    clrlwi r6, r4, 16
    li r4, 0x0
    rlwinm r0, r0, 0, 30, 30
    add r6, r5, r6
    ori r0, r0, 0x21
    stb r0, 0x8(r6)
    lhz r0, 0x2(r5)
    slwi r0, r0, 1
    ori r0, r0, 0x1
    stb r0, 0x9(r6)
    lhz r6, 0x2(r5)
    addi r0, r6, 0x2
    sth r0, 0x2(r5)
    b rfc_send_buf_uih
}

// ----------------------------------------------------------------------------
// rfc_send_credit
// ----------------------------------------------------------------------------
asm void rfc_send_credit() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lbz r0, 0x6d(r3)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    cmpwi r0, 0x0
    li r0, 0x1
    bne lbl_802C8E6C
    li r0, 0x0
lbl_802C8E6C:
    clrlslwi r30, r0, 25, 1
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802C8EE0
    li r5, 0x9
    ori r4, r30, 0x1
    clrlslwi r0, r28, 24, 2
    sth r5, 0x4(r3)
    or r0, r4, r0
    li r4, 0xff
    stb r0, 0x11(r3)
    li r0, 0x1
    addi r30, r31, 0x15
    stb r4, 0x12(r3)
    stb r0, 0x13(r3)
    stb r29, 0x14(r3)
    li r3, 0x2
    lhz r0, 0x4(r31)
    add r4, r31, r0
    addi r4, r4, 0x8
    bl rfc_calc_fcs
    stb r3, 0x0(r30)
    li r0, 0x5
    mr r3, r27
    mr r4, r31
    sth r0, 0x2(r31)
    bl rfc_check_send_cmd
lbl_802C8EE0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// rfc_parse_data
// ----------------------------------------------------------------------------
asm void rfc_parse_data() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80378008@ha
    addi r31, r31, lbl_80378008@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lhz r0, 0x4(r5)
    lhz r8, 0x2(r5)
    add r6, r5, r0
    addi r7, r6, 0x8
    cmplwi r8, 0x3
    mr r0, r7
    bge lbl_802C8F68
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C8F60
    mr r5, r8
    addi r4, r31, 0x0
    lis r3, 0x9
    bl LogMsg_1
lbl_802C8F60:
    li r3, 0x32
    b lbl_802C9450
lbl_802C8F68:
    lbz r8, 0x0(r7)
    rlwinm r6, r8, 0, 30, 30
    clrlwi. r9, r8, 31
    srawi r6, r6, 1
    stb r6, 0x2(r4)
    lbz r6, 0x0(r7)
    addi r7, r7, 0x1
    srawi r8, r6, 2
    stb r8, 0x0(r4)
    bne lbl_802C8FA8
    lbz r6, 0x0(r7)
    clrlwi r8, r8, 24
    addi r7, r7, 0x1
    slwi r6, r6, 6
    add r6, r8, r6
    stb r6, 0x0(r4)
lbl_802C8FA8:
    lbz r6, 0x0(r7)
    rlwinm r6, r6, 0, 28, 26
    stb r6, 0x1(r4)
    lbz r6, 0x0(r7)
    rlwinm r6, r6, 0, 27, 27
    srawi r6, r6, 4
    stb r6, 0x4(r4)
    lbz r6, 0x1(r7)
    addi r7, r7, 0x2
    clrlwi. r10, r6, 31
    srawi r8, r6, 1
    bne lbl_802C8FEC
    lbz r6, 0x0(r7)
    addi r7, r7, 0x1
    slwi r6, r6, 7
    add r6, r8, r6
    clrlwi r8, r6, 16
lbl_802C8FEC:
    cntlzw r6, r10
    cntlzw r9, r9
    srwi r11, r6, 5
    lhz r6, 0x4(r5)
    srwi r10, r9, 5
    lhz r9, 0x2(r5)
    add r11, r10, r11
    addi r10, r11, 0x4
    add r6, r11, r6
    subf r9, r10, r9
    addi r6, r6, 0x3
    sth r9, 0x2(r5)
    sth r6, 0x4(r5)
    lbz r6, 0x72(r3)
    cmplwi r6, 0x2
    bne lbl_802C9078
    lbz r6, 0x1(r4)
    cmplwi r6, 0xef
    bne lbl_802C9078
    lbz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_802C9078
    lbz r6, 0x4(r4)
    cmplwi r6, 0x1
    bne lbl_802C9078
    lbz r6, 0x0(r7)
    addi r7, r7, 0x1
    stb r6, 0x5(r4)
    lhz r9, 0x2(r5)
    lhz r6, 0x4(r5)
    subi r9, r9, 0x1
    addi r6, r6, 0x1
    sth r9, 0x2(r5)
    sth r6, 0x4(r5)
    b lbl_802C9080
lbl_802C9078:
    li r6, 0x0
    stb r6, 0x5(r4)
lbl_802C9080:
    lhz r5, 0x2(r5)
    clrlwi r6, r8, 16
    cmplw r5, r6
    beq lbl_802C90B8
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C90B0
    addi r4, r31, 0x10
    lis r3, 0x9
    bl LogMsg_2
lbl_802C90B0:
    li r3, 0x32
    b lbl_802C9450
lbl_802C90B8:
    lbz r9, 0x1(r4)
    lbzx r5, r7, r6
    cmpwi r9, 0x43
    beq lbl_802C92D0
    bge lbl_802C90E4
    cmpwi r9, 0x2f
    beq lbl_802C90FC
    bge lbl_802C944C
    cmpwi r9, 0xf
    beq lbl_802C923C
    b lbl_802C944C
lbl_802C90E4:
    cmpwi r9, 0xef
    beq lbl_802C9370
    bge lbl_802C944C
    cmpwi r9, 0x63
    beq lbl_802C919C
    b lbl_802C944C
lbl_802C90FC:
    lbz r6, 0x6d(r3)
    cmpwi r6, 0x0
    beq lbl_802C9114
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    bne lbl_802C916C
lbl_802C9114:
    cmpwi r6, 0x0
    bne lbl_802C9128
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    beq lbl_802C916C
lbl_802C9128:
    lbz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_802C916C
    clrlwi. r3, r8, 16
    bne lbl_802C916C
    lbz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_802C9158
    cmplwi r3, 0x2
    blt lbl_802C916C
    cmplwi r3, 0x3d
    bgt lbl_802C916C
lbl_802C9158:
    mr r4, r0
    li r3, 0x3
    bl rfc_check_fcs
    clrlwi. r0, r3, 24
    bne lbl_802C9194
lbl_802C916C:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C918C
    addi r4, r31, 0x24
    lis r3, 0x9
    bl LogMsg_0
lbl_802C918C:
    li r3, 0x32
    b lbl_802C9450
lbl_802C9194:
    li r3, 0x0
    b lbl_802C9450
lbl_802C919C:
    lbz r6, 0x6d(r3)
    cmpwi r6, 0x0
    beq lbl_802C91B4
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    beq lbl_802C920C
lbl_802C91B4:
    cmpwi r6, 0x0
    bne lbl_802C91C8
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    bne lbl_802C920C
lbl_802C91C8:
    lbz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_802C920C
    clrlwi. r3, r8, 16
    bne lbl_802C920C
    lbz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_802C91F8
    cmplwi r3, 0x2
    blt lbl_802C920C
    cmplwi r3, 0x3d
    bgt lbl_802C920C
lbl_802C91F8:
    mr r4, r0
    li r3, 0x3
    bl rfc_check_fcs
    clrlwi. r0, r3, 24
    bne lbl_802C9234
lbl_802C920C:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C922C
    lis r3, 0x9
    la r4, lbl_8049CFD8
    bl LogMsg_0
lbl_802C922C:
    li r3, 0x32
    b lbl_802C9450
lbl_802C9234:
    li r3, 0x1
    b lbl_802C9450
lbl_802C923C:
    lbz r6, 0x6d(r3)
    cmpwi r6, 0x0
    beq lbl_802C9254
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    beq lbl_802C92A0
lbl_802C9254:
    cmpwi r6, 0x0
    bne lbl_802C9268
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    bne lbl_802C92A0
lbl_802C9268:
    clrlwi. r3, r8, 16
    bne lbl_802C92A0
    lbz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_802C928C
    cmplwi r3, 0x2
    blt lbl_802C92A0
    cmplwi r3, 0x3d
    bgt lbl_802C92A0
lbl_802C928C:
    mr r4, r0
    li r3, 0x3
    bl rfc_check_fcs
    clrlwi. r0, r3, 24
    bne lbl_802C92C8
lbl_802C92A0:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C92C0
    lis r3, 0x9
    la r4, lbl_8049CFE0
    bl LogMsg_0
lbl_802C92C0:
    li r3, 0x32
    b lbl_802C9450
lbl_802C92C8:
    li r3, 0x2
    b lbl_802C9450
lbl_802C92D0:
    lbz r6, 0x6d(r3)
    cmpwi r6, 0x0
    beq lbl_802C92E8
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    bne lbl_802C9340
lbl_802C92E8:
    cmpwi r6, 0x0
    bne lbl_802C92FC
    lbz r3, 0x2(r4)
    cmpwi r3, 0x0
    beq lbl_802C9340
lbl_802C92FC:
    lbz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_802C9340
    clrlwi. r3, r8, 16
    bne lbl_802C9340
    lbz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_802C932C
    cmplwi r3, 0x2
    blt lbl_802C9340
    cmplwi r3, 0x3d
    bgt lbl_802C9340
lbl_802C932C:
    mr r4, r0
    li r3, 0x3
    bl rfc_check_fcs
    clrlwi. r0, r3, 24
    bne lbl_802C9368
lbl_802C9340:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C9360
    addi r4, r31, 0x30
    lis r3, 0x9
    bl LogMsg_0
lbl_802C9360:
    li r3, 0x32
    b lbl_802C9450
lbl_802C9368:
    li r3, 0x3
    b lbl_802C9450
lbl_802C9370:
    lbz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_802C93B4
    cmplwi r3, 0x2
    blt lbl_802C938C
    cmplwi r3, 0x3d
    ble lbl_802C93B4
lbl_802C938C:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C93AC
    addi r4, r31, 0x3c
    lis r3, 0x9
    bl LogMsg_0
lbl_802C93AC:
    li r3, 0x32
    b lbl_802C9450
lbl_802C93B4:
    mr r4, r0
    li r3, 0x2
    bl rfc_check_fcs
    clrlwi. r0, r3, 24
    bne lbl_802C93F0
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C93E8
    addi r4, r31, 0x54
    lis r3, 0x9
    bl LogMsg_0
lbl_802C93E8:
    li r3, 0x32
    b lbl_802C9450
lbl_802C93F0:
    lbz r3, 0x6d(r29)
    cmpwi r3, 0x0
    beq lbl_802C9408
    lbz r0, 0x2(r30)
    cmpwi r0, 0x0
    bne lbl_802C941C
lbl_802C9408:
    cmpwi r3, 0x0
    bne lbl_802C9444
    lbz r0, 0x2(r30)
    cmpwi r0, 0x0
    bne lbl_802C9444
lbl_802C941C:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C943C
    addi r4, r31, 0x64
    lis r3, 0x9
    bl LogMsg_0
lbl_802C943C:
    li r3, 0x4
    b lbl_802C9450
lbl_802C9444:
    li r3, 0x4
    b lbl_802C9450
lbl_802C944C:
    li r3, 0x32
lbl_802C9450:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// rfc_process_mx_message
// ----------------------------------------------------------------------------
asm void rfc_process_mx_message() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_80378008@ha
    stw r0, 0x24(r1)
    addi r7, r7, lbl_80378008@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_80457828@ha
    addi r30, r30, lbl_80457828@l
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lhz r0, 0x4(r4)
    lhz r6, 0x2(r4)
    add r5, r4, r0
    lbz r0, 0x8(r5)
    clrlwi. r0, r0, 31
    stb r0, 0x3(r30)
    lbz r0, 0x8(r5)
    extrwi r31, r0, 1, 30
    stb r31, 0x2(r30)
    lbz r0, 0x8(r5)
    rlwinm r0, r0, 0, 24, 29
    stb r0, 0x1(r30)
    beq lbl_802C94DC
    cmpwi r6, 0x0
    bne lbl_802C950C
lbl_802C94DC:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C9500
    lbz r5, 0x3(r30)
    addi r4, r7, 0x78
    lis r3, 0x9
    bl LogMsg_2
lbl_802C9500:
    mr r3, r29
    bl GKI_freebuf
    b lbl_802C9A70
lbl_802C950C:
    lbz r3, 0x9(r5)
    addis r6, r6, 0x1
    addi r5, r5, 0xa
    clrlwi. r0, r3, 31
    srawi r8, r3, 1
    subi r6, r6, 0x2
    bne lbl_802C9540
    lbz r0, 0x0(r5)
    subi r6, r6, 0x1
    addi r5, r5, 0x1
    slwi r0, r0, 7
    add r0, r8, r0
    clrlwi r8, r0, 24
lbl_802C9540:
    clrlwi r0, r8, 24
    clrlwi r3, r6, 16
    cmpw r0, r3
    beq lbl_802C957C
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C9570
    addi r4, r7, 0x98
    lis r3, 0x9
    bl LogMsg_0
lbl_802C9570:
    mr r3, r29
    bl GKI_freebuf
    b lbl_802C9A70
lbl_802C957C:
    lbz r0, 0x1(r30)
    cmpwi r0, 0x80
    beq lbl_802C95E0
    bge lbl_802C95BC
    cmpwi r0, 0x50
    beq lbl_802C996C
    bge lbl_802C95B0
    cmpwi r0, 0x20
    beq lbl_802C96B4
    bge lbl_802C9A00
    cmpwi r0, 0x10
    beq lbl_802C9804
    b lbl_802C9A00
lbl_802C95B0:
    cmpwi r0, 0x60
    beq lbl_802C9728
    b lbl_802C9A00
lbl_802C95BC:
    cmpwi r0, 0xa0
    beq lbl_802C9708
    bge lbl_802C95D4
    cmpwi r0, 0x90
    beq lbl_802C9854
    b lbl_802C9A00
lbl_802C95D4:
    cmpwi r0, 0xe0
    beq lbl_802C9748
    b lbl_802C9A00
lbl_802C95E0:
    cmplwi r3, 0x8
    bne lbl_802C9A00
    lbz r0, 0x0(r5)
    clrlwi. r4, r0, 26
    stb r4, 0x0(r30)
    lbz r0, 0x1(r5)
    clrlwi r0, r0, 28
    stb r0, 0x9(r30)
    lbz r0, 0x1(r5)
    rlwinm r0, r0, 0, 24, 27
    stb r0, 0xa(r30)
    lbz r0, 0x2(r5)
    clrlwi r0, r0, 26
    stb r0, 0xb(r30)
    lbz r0, 0x3(r5)
    stb r0, 0xc(r30)
    lbz r0, 0x5(r5)
    lbz r3, 0x4(r5)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0xe(r30)
    lbz r0, 0x6(r5)
    stb r0, 0x10(r30)
    lbz r0, 0x7(r5)
    clrlwi r0, r0, 29
    stb r0, 0x11(r30)
    beq lbl_802C9674
    beq lbl_802C9660
    cmplwi r4, 0x2
    blt lbl_802C9674
    cmplwi r4, 0x3d
    bgt lbl_802C9674
lbl_802C9660:
    lhz r0, 0xe(r30)
    cmplwi r0, 0x17
    blt lbl_802C9674
    cmplwi r0, 0x7fff
    ble lbl_802C9698
lbl_802C9674:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C9A00
    addi r4, r7, 0xa8
    lis r3, 0x9
    bl LogMsg_0
    b lbl_802C9A00
lbl_802C9698:
    mr r3, r29
    bl GKI_freebuf
    mr r3, r28
    mr r4, r31
    mr r5, r30
    bl rfc_process_pn
    b lbl_802C9A70
lbl_802C96B4:
    cmpwi r3, 0x0
    beq lbl_802C9A00
    stw r5, 0x8(r30)
    cmpwi r31, 0x0
    sth r6, 0xc(r30)
    lhz r5, 0x4(r4)
    lhz r3, 0x2(r4)
    addi r5, r5, 0x2
    subi r0, r3, 0x2
    sth r5, 0x4(r4)
    sth r0, 0x2(r4)
    beq lbl_802C96F8
    mr r3, r28
    mr r5, r29
    li r4, 0x0
    bl rfc_send_test
    b lbl_802C9A70
lbl_802C96F8:
    mr r3, r28
    mr r4, r29
    bl rfc_process_test_rsp
    b lbl_802C9A70
lbl_802C9708:
    cmpwi r3, 0x0
    bne lbl_802C9A00
    mr r3, r29
    bl GKI_freebuf
    mr r3, r28
    mr r4, r31
    bl rfc_process_fcon
    b lbl_802C9A70
lbl_802C9728:
    cmpwi r3, 0x0
    bne lbl_802C9A00
    mr r3, r29
    bl GKI_freebuf
    mr r3, r28
    mr r4, r31
    bl rfc_process_fcoff
    b lbl_802C9A70
lbl_802C9748:
    lbz r4, 0x0(r5)
    rlwinm r3, r4, 0, 30, 30
    clrlwi. r0, r4, 31
    srawi r0, r3, 1
    srawi r3, r4, 2
    stb r3, 0x0(r30)
    beq lbl_802C9788
    clrlwi. r0, r0, 24
    beq lbl_802C9788
    clrlwi. r0, r3, 24
    beq lbl_802C9788
    beq lbl_802C97AC
    cmplwi r0, 0x2
    blt lbl_802C9788
    cmplwi r0, 0x3d
    ble lbl_802C97AC
lbl_802C9788:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C9A00
    addi r4, r7, 0xb8
    lis r3, 0x9
    bl LogMsg_0
    b lbl_802C9A00
lbl_802C97AC:
    clrlwi r0, r8, 24
    lbz r3, 0x1(r5)
    cmplwi r0, 0x3
    stb r3, 0x9(r30)
    bne lbl_802C97DC
    lbz r0, 0x2(r5)
    rlwinm r0, r0, 0, 30, 30
    stb r0, 0xa(r30)
    lbz r0, 0x2(r5)
    extrwi r0, r0, 4, 24
    stb r0, 0xb(r30)
    b lbl_802C97E8
lbl_802C97DC:
    li r0, 0x0
    stb r0, 0xa(r30)
    stb r0, 0xb(r30)
lbl_802C97E8:
    mr r3, r29
    bl GKI_freebuf
    mr r3, r28
    mr r4, r31
    mr r5, r30
    bl rfc_process_msc
    b lbl_802C9A70
lbl_802C9804:
    cmplwi r3, 0x1
    bne lbl_802C9A00
    cmpwi r31, 0x0
    beq lbl_802C9A00
    lbz r0, 0x0(r5)
    mr r3, r29
    clrlwi r0, r0, 31
    stb r0, 0x8(r30)
    lbz r0, 0x0(r5)
    rlwinm r0, r0, 0, 30, 30
    srawi r0, r0, 1
    stb r0, 0x9(r30)
    lbz r0, 0x0(r5)
    srawi r0, r0, 2
    stb r0, 0xa(r30)
    bl GKI_freebuf
    mr r3, r28
    mr r4, r30
    bl rfc_process_nsc
    b lbl_802C9A70
lbl_802C9854:
    cmplwi r3, 0x1
    beq lbl_802C9864
    cmplwi r3, 0x8
    bne lbl_802C9A00
lbl_802C9864:
    lbz r4, 0x0(r5)
    rlwinm r3, r4, 0, 30, 30
    clrlwi. r0, r4, 31
    srawi r0, r3, 1
    srawi r3, r4, 2
    stb r3, 0x0(r30)
    beq lbl_802C98A4
    clrlwi. r0, r0, 24
    beq lbl_802C98A4
    clrlwi. r0, r3, 24
    beq lbl_802C98A4
    beq lbl_802C98C8
    cmplwi r0, 0x2
    blt lbl_802C98A4
    cmplwi r0, 0x3d
    ble lbl_802C98C8
lbl_802C98A4:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C9A00
    addi r4, r7, 0xc8
    lis r3, 0x9
    bl LogMsg_0
    b lbl_802C9A00
lbl_802C98C8:
    clrlwi r3, r6, 16
    subi r0, r3, 0x1
    cntlzw r0, r0
    extrwi. r0, r0, 8, 19
    stb r0, 0x9(r30)
    bne lbl_802C994C
    lbz r0, 0x1(r5)
    stb r0, 0xa(r30)
    lbz r0, 0x2(r5)
    clrlwi r0, r0, 30
    stb r0, 0xb(r30)
    lbz r0, 0x2(r5)
    extrwi r0, r0, 1, 29
    stb r0, 0xc(r30)
    lbz r0, 0x2(r5)
    extrwi r0, r0, 1, 28
    stb r0, 0xd(r30)
    lbz r0, 0x2(r5)
    extrwi r0, r0, 2, 26
    stb r0, 0xe(r30)
    lbz r0, 0x3(r5)
    clrlwi r0, r0, 26
    stb r0, 0xf(r30)
    lbz r0, 0x4(r5)
    stb r0, 0x10(r30)
    lbz r0, 0x5(r5)
    stb r0, 0x11(r30)
    lbz r0, 0x7(r5)
    lbz r3, 0x6(r5)
    slwi r0, r0, 8
    add r0, r3, r0
    andi. r0, r0, 0x3f7f
    sth r0, 0x12(r30)
lbl_802C994C:
    mr r3, r29
    bl GKI_freebuf
    lbz r5, 0x9(r30)
    mr r3, r28
    mr r4, r31
    mr r6, r30
    bl rfc_process_rpn
    b lbl_802C9A70
lbl_802C996C:
    cmplwi r3, 0x2
    bne lbl_802C9A00
    lbz r6, 0x0(r5)
    rlwinm r3, r6, 0, 30, 30
    clrlwi. r0, r6, 31
    srawi r4, r3, 1
    srawi r3, r6, 2
    stb r3, 0x0(r30)
    lbz r0, 0x1(r5)
    rlwinm r0, r0, 0, 24, 30
    stb r0, 0x9(r30)
    beq lbl_802C99C0
    clrlwi. r0, r4, 24
    beq lbl_802C99C0
    clrlwi. r0, r3, 24
    beq lbl_802C99C0
    beq lbl_802C99E4
    cmplwi r0, 0x2
    blt lbl_802C99C0
    cmplwi r0, 0x3d
    ble lbl_802C99E4
lbl_802C99C0:
    lis r3, lbl_80457828@ha
    addi r3, r3, lbl_80457828@l
    lbz r0, 0x414(r3)
    cmplwi r0, 0x1
    blt lbl_802C9A00
    addi r4, r7, 0xc8
    lis r3, 0x9
    bl LogMsg_0
    b lbl_802C9A00
lbl_802C99E4:
    mr r3, r29
    bl GKI_freebuf
    mr r3, r28
    mr r4, r31
    mr r5, r30
    bl rfc_process_rls
    b lbl_802C9A70
lbl_802C9A00:
    mr r3, r29
    bl GKI_freebuf
    cmpwi r31, 0x0
    beq lbl_802C9A70
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    beq lbl_802C9A70
    li r0, 0xc
    lis r7, lbl_80457828@ha
    sth r0, 0x4(r3)
    li r0, 0x11
    li r8, 0x3
    addi r7, r7, lbl_80457828@l
    stb r0, 0x14(r3)
    mr r5, r3
    li r4, 0x0
    stb r8, 0x15(r3)
    lbz r0, 0x2(r7)
    lbz r6, 0x3(r7)
    slwi r0, r0, 1
    lbz r7, 0x1(r7)
    or r0, r6, r0
    or r0, r7, r0
    stb r0, 0x16(r3)
    sth r8, 0x2(r3)
    mr r3, r28
    bl rfc_send_buf_uih
lbl_802C9A70:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

