#include "types.h"

// Translation unit: src/revolution/bte/btm_sco.cpp
// Total functions: 15

// Global data symbols (@ha/@l)
extern u8 lbl_80341880[];
extern u8 lbl_803747A0[];
extern u8 lbl_8037482C[];
extern u8 lbl_8037487C[];
extern u8 lbl_803748CC[];
extern u8 lbl_80374A64[];
extern u8 lbl_80453F78[];

// Forward declarations
extern void BTM_ChangeEScoLinkParms();
extern void BTM_GetHCIConnHandle();
extern void BTM_RemoveSco();
extern void GKI_freebuf();
extern void GKI_getpoolbuf();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void LogMsg_6();
extern void _restgpr_20();
extern void _restgpr_24();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_20();
extern void _savegpr_24();
extern void _savegpr_26();
extern void _savegpr_27();
extern void btm_chg_all_acl_pkt_types();
extern void btm_esco_conn_rsp();
extern void btm_esco_proc_conn_chg();
extern void btm_is_sco_active();
extern void btm_is_sco_active_by_bdaddr();
extern void btm_num_sco_links_active();
extern void btm_remove_sco_links();
extern void btm_route_sco_data();
extern void btm_sco_acl_removed();
extern void btm_sco_chk_pend_unpark();
extern void btm_sco_conn_req();
extern void btm_sco_connected();
extern void btm_sco_init();
extern void btm_sco_removed();
extern void btsnd_hcic_accept_conn();
extern void btsnd_hcic_accept_esco_conn();
extern void btsnd_hcic_add_SCO_conn();
extern void btsnd_hcic_change_conn_type();
extern void btsnd_hcic_disconnect();
extern void btsnd_hcic_reject_conn();
extern void btsnd_hcic_reject_esco_conn();
extern void btsnd_hcic_setup_esco_conn();
extern void memcmp();
extern void memcpy();

// ----------------------------------------------------------------------------
// btm_sco_init
// ----------------------------------------------------------------------------
asm void btm_sco_init() {
    nofralloc
    lis r3, lbl_80341880@ha
    lwzu r6, lbl_80341880@l(r3)
    lis r4, 0x1
    lis r7, lbl_80453F78@ha
    subi r8, r4, 0x1
    lwz r5, 0x4(r3)
    addi r7, r7, lbl_80453F78@l
    lwz r4, 0x8(r3)
    lwz r3, 0xc(r3)
    li r0, 0x2
    sth r8, 0x18f6(r7)
    stw r6, 0x18f8(r7)
    stw r5, 0x18fc(r7)
    stw r4, 0x1900(r7)
    stw r3, 0x1904(r7)
    stb r0, 0x1909(r7)
    blr
}

// ----------------------------------------------------------------------------
// btm_esco_conn_rsp
// ----------------------------------------------------------------------------
asm void btm_esco_conn_rsp() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r29, r5
    mr r28, r6
    li r31, 0x0
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802B1FB0
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x1
    blt lbl_802B2110
    lis r4, lbl_803747A0@ha
    lis r3, 0xd
    addi r4, r4, lbl_803747A0@l
    bl LogMsg_0
    b lbl_802B2110
lbl_802B1FB0:
    cmplwi r26, 0x3
    bge lbl_802B1FCC
    mulli r0, r26, 0x34
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    add r3, r3, r0
    addi r31, r3, 0x1854
lbl_802B1FCC:
    cmpwi r27, 0x0
    beq lbl_802B202C
    cmpwi r31, 0x0
    beq lbl_802B1FF0
    lhz r3, 0x8(r31)
    subi r0, r3, 0x2
    cntlzw r0, r0
    extrwi r0, r0, 16, 11
    sth r0, 0x8(r31)
lbl_802B1FF0:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x1908(r3)
    cmpwi r0, 0x0
    bne lbl_802B2018
    mr r3, r30
    mr r4, r29
    mr r5, r27
    bl btsnd_hcic_reject_conn
    b lbl_802B2110
lbl_802B2018:
    mr r3, r30
    mr r4, r29
    mr r5, r27
    bl btsnd_hcic_reject_esco_conn
    b lbl_802B2110
lbl_802B202C:
    li r3, 0x1
    bl btm_chg_all_acl_pkt_types
    li r0, 0x3
    lis r3, lbl_80453F78@ha
    sth r0, 0x8(r31)
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x1908(r3)
    cmpwi r0, 0x0
    beq lbl_802B2100
    lbz r0, 0x2e(r31)
    cmplwi r0, 0x2
    bne lbl_802B2100
    cmpwi r28, 0x0
    beq lbl_802B2084
    lwz r3, 0x0(r28)
    lwz r0, 0x4(r28)
    stw r3, 0x14(r31)
    stw r0, 0x18(r31)
    lwz r3, 0x8(r28)
    lwz r0, 0xc(r28)
    stw r3, 0x1c(r31)
    stw r0, 0x20(r31)
lbl_802B2084:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lhz r4, 0x1904(r3)
    sth r4, 0x20(r31)
    lhz r5, 0x656(r3)
    and r3, r4, r5
    rlwinm. r0, r3, 0, 26, 28
    clrlwi r28, r3, 26
    bne lbl_802B20B0
    ori r0, r28, 0x8
    clrlwi r28, r0, 16
lbl_802B20B0:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x636(r3)
    cmplwi r0, 0x3
    blt lbl_802B20D4
    or r0, r4, r5
    rlwinm r0, r0, 0, 22, 25
    or r0, r28, r0
    clrlwi r28, r0, 16
lbl_802B20D4:
    lwz r5, 0x14(r31)
    mr r3, r30
    lwz r6, 0x18(r31)
    mr r4, r29
    lhz r7, 0x1c(r31)
    clrlwi r10, r28, 16
    lhz r8, 0x1e(r31)
    lbz r9, 0x22(r31)
    bl btsnd_hcic_accept_esco_conn
    sth r28, 0x20(r31)
    b lbl_802B2110
lbl_802B2100:
    mr r3, r30
    mr r4, r29
    li r5, 0x0
    bl btsnd_hcic_accept_conn
lbl_802B2110:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_sco_chk_pend_unpark
// ----------------------------------------------------------------------------
asm void btm_sco_chk_pend_unpark() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    lis r28, lbl_80453F78@ha
    mr r23, r3
    addi r28, r28, lbl_80453F78@l
    mr r24, r4
    mr r25, r5
    li r27, 0x0
    addi r26, r28, 0x1854
    lis r30, 0xd
    lis r31, lbl_8037487C@ha
    lis r21, lbl_8037482C@ha
    li r22, 0x3
lbl_802B2168:
    lhz r0, 0x8(r26)
    cmplwi r0, 0x6
    bne lbl_802B228C
    cmpwi r25, 0x0
    bne lbl_802B228C
    cmpwi r23, 0x0
    bne lbl_802B228C
    addi r3, r26, 0x28
    bl BTM_GetHCIConnHandle
    clrlwi r5, r3, 16
    mr r29, r3
    cmplw r24, r5
    bne lbl_802B228C
    lbz r0, 0x27c0(r28)
    cmplwi r0, 0x3
    blt lbl_802B21B8
    lbz r6, 0x1909(r28)
    addi r3, r30, 0x2
    addi r4, r31, lbl_8037487C@l
    bl LogMsg_2
lbl_802B21B8:
    li r3, 0x1
    bl btm_chg_all_acl_pkt_types
    lbz r0, 0x1908(r28)
    cmpwi r0, 0x0
    bne lbl_802B21EC
    lhz r0, 0x20(r26)
    clrlwi r3, r29, 16
    clrlslwi r4, r0, 29, 5
    bl btsnd_hcic_add_SCO_conn
    clrlwi. r0, r3, 24
    bne lbl_802B227C
    li r0, 0x3
    b lbl_802B2280
lbl_802B21EC:
    lbz r0, 0x636(r28)
    lhz r3, 0x656(r28)
    lhz r4, 0x20(r26)
    cmplwi r0, 0x3
    and r0, r4, r3
    clrlwi r20, r0, 26
    blt lbl_802B2218
    or r0, r4, r3
    rlwinm r0, r0, 0, 22, 25
    or r0, r20, r0
    clrlwi r20, r0, 16
lbl_802B2218:
    lbz r0, 0x27c0(r28)
    cmplwi r0, 0x3
    blt lbl_802B2248
    lwz r5, 0x14(r26)
    addi r3, r30, 0x2
    lwz r6, 0x18(r26)
    addi r4, r21, lbl_8037482C@l
    lhz r7, 0x1c(r26)
    clrlwi r10, r20, 16
    lhz r8, 0x1e(r26)
    lbz r9, 0x22(r26)
    bl LogMsg_6
lbl_802B2248:
    lwz r4, 0x14(r26)
    clrlwi r3, r29, 16
    lwz r5, 0x18(r26)
    clrlwi r9, r20, 16
    lhz r6, 0x1c(r26)
    lhz r7, 0x1e(r26)
    lbz r8, 0x22(r26)
    bl btsnd_hcic_setup_esco_conn
    clrlwi. r0, r3, 24
    bne lbl_802B2278
    li r0, 0x3
    b lbl_802B2280
lbl_802B2278:
    sth r20, 0x20(r26)
lbl_802B227C:
    li r0, 0x1
lbl_802B2280:
    cmplwi r0, 0x1
    bne lbl_802B228C
    sth r22, 0x8(r26)
lbl_802B228C:
    addi r27, r27, 0x1
    addi r26, r26, 0x34
    cmplwi r27, 0x3
    blt lbl_802B2168
    addi r11, r1, 0x40
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// btm_sco_conn_req
// ----------------------------------------------------------------------------
asm void btm_sco_conn_req() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r6, lbl_80453F78@ha
    mr r30, r3
    addi r6, r6, lbl_80453F78@l
    mr r29, r4
    mr r31, r5
    li r28, 0x0
    addi r27, r6, 0x1854
lbl_802B22E4:
    lhz r3, 0x8(r27)
    cmplwi r3, 0x1
    bne lbl_802B22FC
    lbz r0, 0xd(r27)
    cmpwi r0, 0x0
    bne lbl_802B2304
lbl_802B22FC:
    cmplwi r3, 0x3
    bne lbl_802B23A4
lbl_802B2304:
    mr r4, r30
    addi r3, r27, 0x28
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802B23A4
    li r0, 0x1
    mr r4, r30
    stb r0, 0xd(r27)
    addi r3, r27, 0x28
    li r5, 0x6
    stb r31, 0x2e(r27)
    bl memcpy
    lwz r0, 0x10(r27)
    cmpwi r0, 0x0
    bne lbl_802B235C
    mr r5, r30
    clrlwi r3, r28, 16
    li r4, 0x0
    li r6, 0x0
    bl btm_esco_conn_rsp
    b lbl_802B247C
lbl_802B235C:
    mr r4, r30
    addi r3, r1, 0xa
    li r5, 0x6
    bl memcpy
    mr r4, r29
    addi r3, r1, 0x10
    li r5, 0x3
    bl memcpy
    li r0, 0x2
    stb r31, 0x13(r1)
    addi r4, r1, 0x8
    li r3, 0x2
    sth r0, 0x8(r27)
    lwz r12, 0x10(r27)
    sth r28, 0x8(r1)
    mtctr r12
    bctrl
    b lbl_802B247C
lbl_802B23A4:
    addi r28, r28, 0x1
    addi r27, r27, 0x34
    cmplwi r28, 0x3
    blt lbl_802B22E4
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lwz r0, 0x1850(r3)
    cmpwi r0, 0x0
    beq lbl_802B2440
    li r0, 0x3
    addi r28, r3, 0x1854
    li r27, 0x0
    mtctr r0
lbl_802B23D8:
    lhz r0, 0x8(r28)
    cmpwi r0, 0x0
    bne lbl_802B2410
    li r0, 0x0
    li r29, 0x1
    stb r0, 0xc(r28)
    mr r4, r30
    addi r3, r28, 0x28
    li r5, 0x6
    sth r29, 0x8(r28)
    stb r31, 0x2e(r28)
    bl memcpy
    stb r29, 0xd(r28)
    b lbl_802B241C
lbl_802B2410:
    addi r27, r27, 0x1
    addi r28, r28, 0x34
    bdnz lbl_802B23D8
lbl_802B241C:
    clrlwi r3, r27, 16
    cmplwi r3, 0x3
    bge lbl_802B2440
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lwz r12, 0x1850(r4)
    mtctr r12
    bctrl
    b lbl_802B247C
lbl_802B2440:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x2
    blt lbl_802B2468
    lis r3, 0xd
    lis r4, lbl_803748CC@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803748CC@l
    bl LogMsg_0
lbl_802B2468:
    mr r5, r30
    li r3, 0x3
    li r4, 0xd
    li r6, 0x0
    bl btm_esco_conn_rsp
lbl_802B247C:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// btm_sco_connected
// ----------------------------------------------------------------------------
asm void btm_sco_connected() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r7, lbl_80453F78@ha
    mr r24, r3
    addi r7, r7, lbl_80453F78@l
    mr r25, r4
    sth r3, 0x18f6(r7)
    mr r26, r5
    mr r29, r6
    addi r31, r7, 0x1854
    li r27, 0x0
    li r30, 0x0
lbl_802B24D0:
    lhz r28, 0x8(r31)
    addis r3, r28, 0x1
    subi r0, r3, 0x1
    clrlwi r0, r0, 16
    cmplwi r0, 0x2
    bgt lbl_802B260C
    lbz r0, 0xd(r31)
    cmpwi r0, 0x0
    beq lbl_802B260C
    cmpwi r25, 0x0
    beq lbl_802B2514
    mr r4, r25
    addi r3, r31, 0x28
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802B260C
lbl_802B2514:
    cmpwi r24, 0x0
    beq lbl_802B2554
    cmplwi r28, 0x3
    bne lbl_802B2548
    cmplwi r24, 0x23
    beq lbl_802B261C
    li r0, 0x0
    clrlwi r3, r30, 16
    sth r0, 0x8(r31)
    lwz r12, 0x4(r31)
    mtctr r12
    bctrl
    b lbl_802B261C
lbl_802B2548:
    li r0, 0x1
    sth r0, 0x8(r31)
    b lbl_802B261C
lbl_802B2554:
    cmplwi r28, 0x1
    bne lbl_802B2560
    li r27, 0x1
lbl_802B2560:
    li r0, 0x4
    lis r3, lbl_80453F78@ha
    sth r0, 0x8(r31)
    addi r3, r3, lbl_80453F78@l
    sth r26, 0xa(r31)
    lbz r0, 0x1908(r3)
    cmpwi r0, 0x0
    bne lbl_802B25B8
    li r0, 0x0
    cmpwi r27, 0x0
    stb r0, 0x2e(r31)
    beq lbl_802B25F8
    lhz r6, 0x20(r31)
    clrlwi r3, r30, 16
    lhz r5, 0x1c(r31)
    addi r4, r1, 0x8
    lbz r0, 0x22(r31)
    sth r6, 0xa(r1)
    sth r5, 0x8(r1)
    stb r0, 0xc(r1)
    bl BTM_ChangeEScoLinkParms
    b lbl_802B25F8
lbl_802B25B8:
    cmpwi r29, 0x0
    beq lbl_802B25F8
    lhz r3, 0x0(r29)
    lhz r0, 0x2(r29)
    sth r3, 0x24(r31)
    sth r0, 0x26(r31)
    lhz r3, 0x4(r29)
    lhz r0, 0x6(r29)
    sth r3, 0x28(r31)
    sth r0, 0x2a(r31)
    lhz r0, 0x8(r29)
    sth r0, 0x2c(r31)
    lhz r0, 0xa(r29)
    sth r0, 0x2e(r31)
    lhz r0, 0xc(r29)
    sth r0, 0x30(r31)
lbl_802B25F8:
    lwz r12, 0x0(r31)
    clrlwi r3, r30, 16
    mtctr r12
    bctrl
    b lbl_802B261C
lbl_802B260C:
    addi r30, r30, 0x1
    addi r31, r31, 0x34
    cmplwi r30, 0x3
    blt lbl_802B24D0
lbl_802B261C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// BTM_RemoveSco
// ----------------------------------------------------------------------------
asm void BTM_RemoveSco() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    cmplwi r3, 0x3
    stw r0, 0x14(r1)
    mulli r0, r3, 0x34
    addi r4, r4, lbl_80453F78@l
    stw r31, 0xc(r1)
    add r31, r4, r0
    stw r30, 0x8(r1)
    bge lbl_802B266C
    lhz r30, 0x185c(r31)
    cmpwi r30, 0x0
    bne lbl_802B2674
lbl_802B266C:
    li r3, 0x7
    b lbl_802B26D4
lbl_802B2674:
    lhz r0, 0x185e(r31)
    cmplwi r0, 0xffff
    beq lbl_802B2688
    cmplwi r30, 0x6
    bne lbl_802B26A8
lbl_802B2688:
    lis r3, 0x1
    li r0, 0x0
    subi r4, r3, 0x1
    sth r4, 0x185e(r31)
    li r3, 0x0
    sth r0, 0x185c(r31)
    stw r0, 0x1864(r31)
    b lbl_802B26D4
lbl_802B26A8:
    li r0, 0x5
    li r4, 0x13
    sth r0, 0x185c(r31)
    lhz r3, 0x185e(r31)
    bl btsnd_hcic_disconnect
    clrlwi. r0, r3, 24
    bne lbl_802B26D0
    sth r30, 0x185c(r31)
    li r3, 0x3
    b lbl_802B26D4
lbl_802B26D0:
    li r3, 0x1
lbl_802B26D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btm_remove_sco_links
// ----------------------------------------------------------------------------
asm void btm_remove_sco_links() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x1c(r1)
    addi r31, r4, 0x1854
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
lbl_802B2718:
    lbz r0, 0xd(r31)
    cmpwi r0, 0x0
    beq lbl_802B2744
    mr r4, r29
    addi r3, r31, 0x28
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802B2744
    clrlwi r3, r30, 16
    bl BTM_RemoveSco
lbl_802B2744:
    addi r30, r30, 0x1
    addi r31, r31, 0x34
    cmplwi r30, 0x3
    blt lbl_802B2718
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_sco_removed
// ----------------------------------------------------------------------------
asm void btm_sco_removed() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80453F78@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80453F78@l
    stw r31, 0xc(r1)
    mr r31, r3
    li r3, 0x0
    sth r4, 0x18f6(r5)
    lhz r0, 0x185c(r5)
    cmpwi r0, 0x7
    bge lbl_802B27B0
    cmpwi r0, 0x2
    bge lbl_802B27AC
    b lbl_802B27B0
lbl_802B27AC:
    li r3, 0x1
lbl_802B27B0:
    lhz r0, 0x1890(r5)
    cmpwi r0, 0x7
    bge lbl_802B27CC
    cmpwi r0, 0x2
    bge lbl_802B27C8
    b lbl_802B27CC
lbl_802B27C8:
    addi r3, r3, 0x1
lbl_802B27CC:
    lhz r0, 0x18c4(r5)
    cmpwi r0, 0x7
    bge lbl_802B27E8
    cmpwi r0, 0x2
    bge lbl_802B27E4
    b lbl_802B27E8
lbl_802B27E4:
    addi r3, r3, 0x1
lbl_802B27E8:
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bgt lbl_802B27FC
    li r3, 0x0
    bl btm_chg_all_acl_pkt_types
lbl_802B27FC:
    lis r3, lbl_80453F78@ha
    li r0, 0x3
    addi r3, r3, lbl_80453F78@l
    li r6, 0x0
    addi r5, r3, 0x1854
    mtctr r0
lbl_802B2814:
    lhz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_802B2864
    cmplwi r0, 0x1
    beq lbl_802B2864
    lhz r0, 0xa(r5)
    cmplw r0, r31
    bne lbl_802B2864
    li r4, 0x0
    lis r3, 0x1
    sth r4, 0x8(r5)
    subi r0, r3, 0x1
    clrlwi r3, r6, 16
    sth r0, 0xa(r5)
    stb r4, 0xd(r5)
    stw r4, 0x10(r5)
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
    b lbl_802B2870
lbl_802B2864:
    addi r6, r6, 0x1
    addi r5, r5, 0x34
    bdnz lbl_802B2814
lbl_802B2870:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// btm_sco_acl_removed
// ----------------------------------------------------------------------------
asm void btm_sco_acl_removed() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x1854
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
lbl_802B28B8:
    lhz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_802B2908
    cmpwi r28, 0x0
    beq lbl_802B28F0
    mr r4, r28
    addi r3, r30, 0x28
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802B2908
    lbz r0, 0xd(r30)
    cmpwi r0, 0x0
    beq lbl_802B2908
lbl_802B28F0:
    sth r31, 0x8(r30)
    clrlwi r3, r29, 16
    stw r31, 0x10(r30)
    lwz r12, 0x4(r30)
    mtctr r12
    bctrl
lbl_802B2908:
    addi r29, r29, 0x1
    addi r30, r30, 0x34
    cmplwi r29, 0x3
    blt lbl_802B28B8
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
// btm_route_sco_data
// ----------------------------------------------------------------------------
asm void btm_route_sco_data() {
    nofralloc
    b GKI_freebuf
}

// ----------------------------------------------------------------------------
// BTM_ChangeEScoLinkParms
// ----------------------------------------------------------------------------
asm void BTM_ChangeEScoLinkParms() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmplwi r3, 0x3
    lis r30, lbl_803747A0@ha
    mr r28, r4
    addi r30, r30, lbl_803747A0@l
    bge lbl_802B2980
    mulli r0, r3, 0x34
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    add r31, r3, r0
    lhz r0, 0x185c(r31)
    cmplwi r0, 0x4
    beq lbl_802B2988
lbl_802B2980:
    li r3, 0x6
    b lbl_802B2ACC
lbl_802B2988:
    lbz r0, 0x1882(r31)
    addi r29, r31, 0x1868
    cmpwi r0, 0x0
    beq lbl_802B29A4
    lbz r0, 0x1908(r3)
    cmpwi r0, 0x0
    bne lbl_802B2A04
lbl_802B29A4:
    lis r3, lbl_80453F78@ha
    lhz r4, 0x2(r4)
    addi r3, r3, lbl_80453F78@l
    lhz r0, 0x656(r3)
    clrlwi r0, r0, 29
    and r0, r4, r0
    sth r0, 0xc(r29)
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_802B29E4
    lis r3, 0xd
    lhz r5, 0x185e(r31)
    lhz r6, 0xc(r29)
    addi r3, r3, 0x2
    addi r4, r30, 0x248
    bl LogMsg_2
lbl_802B29E4:
    lhz r0, 0xc(r29)
    lhz r3, 0x185e(r31)
    clrlslwi r4, r0, 29, 5
    bl btsnd_hcic_change_conn_type
    clrlwi. r0, r3, 24
    bne lbl_802B2AC8
    li r3, 0x3
    b lbl_802B2ACC
lbl_802B2A04:
    lbz r0, 0x636(r3)
    lhz r3, 0x656(r3)
    lhz r4, 0x2(r4)
    cmplwi r0, 0x3
    and r0, r4, r3
    clrlwi r27, r0, 26
    blt lbl_802B2A30
    or r0, r4, r3
    rlwinm r0, r0, 0, 22, 25
    or r0, r27, r0
    clrlwi r27, r0, 16
lbl_802B2A30:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_802B2A58
    lis r3, 0xd
    lhz r5, 0x185e(r31)
    addi r3, r3, 0x2
    addi r4, r30, 0x28c
    bl LogMsg_1
lbl_802B2A58:
    lis r3, lbl_80453F78@ha
    addi r3, r3, lbl_80453F78@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x3
    blt lbl_802B2A94
    lis r3, 0xd
    lwz r5, 0x0(r29)
    lwz r6, 0x4(r29)
    addi r3, r3, 0x2
    lhz r7, 0x0(r28)
    addi r4, r30, 0x8c
    lhz r8, 0xa(r29)
    clrlwi r10, r27, 16
    lbz r9, 0x4(r28)
    bl LogMsg_6
lbl_802B2A94:
    lhz r3, 0x185e(r31)
    clrlwi r9, r27, 16
    lwz r4, 0x0(r29)
    lwz r5, 0x4(r29)
    lhz r6, 0x0(r28)
    lhz r7, 0xa(r29)
    lbz r8, 0x4(r28)
    bl btsnd_hcic_setup_esco_conn
    clrlwi. r0, r3, 24
    bne lbl_802B2AC4
    li r3, 0x3
    b lbl_802B2ACC
lbl_802B2AC4:
    sth r27, 0x2(r28)
lbl_802B2AC8:
    li r3, 0x1
lbl_802B2ACC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// btm_esco_proc_conn_chg
// ----------------------------------------------------------------------------
asm void btm_esco_proc_conn_chg() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    lis r9, lbl_80453F78@ha
    mr r24, r3
    addi r9, r9, lbl_80453F78@l
    mr r25, r4
    lbz r0, 0x27c0(r9)
    mr r26, r5
    mr r27, r6
    mr r28, r7
    cmplwi r0, 0x4
    mr r29, r8
    addi r31, r9, 0x1854
    blt lbl_802B2B44
    lis r3, 0xd
    lis r4, lbl_80374A64@ha
    mr r5, r25
    mr r6, r24
    addi r3, r3, 0x3
    addi r4, r4, lbl_80374A64@l
    bl LogMsg_2
lbl_802B2B44:
    li r0, 0x3
    li r30, 0x0
    mtctr r0
lbl_802B2B50:
    lhz r0, 0x8(r31)
    cmplwi r0, 0x4
    bne lbl_802B2BC4
    lhz r0, 0xa(r31)
    cmplw r25, r0
    bne lbl_802B2BC4
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_802B2BD0
    addi r3, r1, 0xe
    addi r4, r31, 0x28
    li r5, 0x6
    bl memcpy
    sth r28, 0x24(r31)
    addi r4, r1, 0x8
    li r3, 0x1
    sth r29, 0x26(r31)
    stb r26, 0x2f(r31)
    stb r27, 0x30(r31)
    lwz r12, 0x10(r31)
    stb r24, 0x14(r1)
    sth r30, 0x8(r1)
    sth r28, 0xa(r1)
    sth r29, 0xc(r1)
    stb r26, 0x15(r1)
    stb r27, 0x16(r1)
    mtctr r12
    bctrl
    b lbl_802B2BD0
lbl_802B2BC4:
    addi r30, r30, 0x1
    addi r31, r31, 0x34
    bdnz lbl_802B2B50
lbl_802B2BD0:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// btm_is_sco_active
// ----------------------------------------------------------------------------
asm void btm_is_sco_active() {
    nofralloc
    lis r4, lbl_80453F78@ha
    addi r4, r4, lbl_80453F78@l
    lhz r0, 0x185e(r4)
    cmplw r3, r0
    bne lbl_802B2C10
    lhz r0, 0x185c(r4)
    cmplwi r0, 0x4
    bne lbl_802B2C10
    li r3, 0x1
    blr
lbl_802B2C10:
    lhz r0, 0x1892(r4)
    cmplw r3, r0
    bne lbl_802B2C30
    lhz r0, 0x1890(r4)
    cmplwi r0, 0x4
    bne lbl_802B2C30
    li r3, 0x1
    blr
lbl_802B2C30:
    lhz r0, 0x18c6(r4)
    cmplw r3, r0
    bne lbl_802B2C50
    lhz r0, 0x18c4(r4)
    cmplwi r0, 0x4
    bne lbl_802B2C50
    li r3, 0x1
    blr
lbl_802B2C50:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// btm_num_sco_links_active
// ----------------------------------------------------------------------------
asm void btm_num_sco_links_active() {
    nofralloc
    lis r4, lbl_80453F78@ha
    li r3, 0x0
    addi r4, r4, lbl_80453F78@l
    lhz r0, 0x185c(r4)
    cmpwi r0, 0x7
    bge lbl_802B2C80
    cmpwi r0, 0x2
    bge lbl_802B2C7C
    b lbl_802B2C80
lbl_802B2C7C:
    li r3, 0x1
lbl_802B2C80:
    lhz r0, 0x1890(r4)
    cmpwi r0, 0x7
    bge lbl_802B2C9C
    cmpwi r0, 0x2
    bge lbl_802B2C98
    b lbl_802B2C9C
lbl_802B2C98:
    addi r3, r3, 0x1
lbl_802B2C9C:
    lhz r0, 0x18c4(r4)
    cmpwi r0, 0x7
    bgelr
    cmpwi r0, 0x2
    bltlr
    addi r3, r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// btm_is_sco_active_by_bdaddr
// ----------------------------------------------------------------------------
asm void btm_is_sco_active_by_bdaddr() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80453F78@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80453F78@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r4, 0x1854
    stw r29, 0x14(r1)
    mr r29, r3
lbl_802B2CE4:
    mr r4, r29
    addi r3, r30, 0x28
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802B2D10
    lhz r0, 0x8(r30)
    cmplwi r0, 0x4
    bne lbl_802B2D10
    li r3, 0x1
    b lbl_802B2D24
lbl_802B2D10:
    addi r31, r31, 0x1
    addi r30, r30, 0x34
    cmplwi r31, 0x3
    blt lbl_802B2CE4
    li r3, 0x0
lbl_802B2D24:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

