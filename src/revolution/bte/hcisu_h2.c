#include "types.h"

// Translation unit: src/revolution/bte/hcisu_h2.cpp
// Total functions: 7

// Small Data symbols (@sda21)
extern float lbl_804A2508;
extern float lbl_804A2510;

// Global data symbols (@ha/@l)
extern u8 hcisu_h2_usb_cback[];
extern u8 lbl_803731D0[];
extern u8 lbl_8037320C[];
extern u8 lbl_804501A0[];
extern u8 lbl_80453A50[];

// Forward declarations
extern void GKI_freebuf();
extern void GKI_get_buf_size();
extern void GKI_getpoolbuf();
extern void GKI_send_msg();
extern void LogMsg_0();
extern void _restgpr_14();
extern void _restgpr_27();
extern void _savegpr_14();
extern void _savegpr_27();
extern void fn_802A4BDC();
extern void fn_802A4DE4();
extern void fn_802A4EEC();
extern void fn_802A4EF4();
extern void fn_802A5108();
extern void fn_802A51B4();
extern void hcisu_h2_close();
extern void hcisu_h2_handle_event();
extern void hcisu_h2_init();
extern void hcisu_h2_open();
extern void hcisu_h2_receive_msg();
extern void hcisu_h2_send();
extern void hcisu_h2_send_msg_now();
extern void l2cap_link_chk_pkt_end();
extern void l2cap_link_chk_pkt_start();

// ----------------------------------------------------------------------------
// hcisu_h2_receive_msg
// ----------------------------------------------------------------------------
asm void hcisu_h2_receive_msg() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_14
    lbz r0, 0x1e(r4)
    mr r15, r4
    li r19, 0x0
    cmplwi r0, 0x2
    beq lbl_802A3FAC
    li r3, 0x0
    b lbl_802A42FC
lbl_802A3FAC:
    addi r20, r3, 0x1
    clrlslwi r0, r3, 16, 1
    lis r31, lbl_804501A0@ha
    add r22, r4, r3
    clrlwi r16, r20, 16
    clrlslwi r23, r3, 16, 2
    add r21, r4, r0
    addi r31, r31, lbl_804501A0@l
    li r29, 0x0
    li r30, 0x4
    la r28, lbl_804A2508
    li r25, 0x3
    li r24, 0x2
    lis r14, lbl_803731D0@ha
    la r26, lbl_804A2510
    li r27, 0x1
lbl_802A3FEC:
    clrlwi r3, r16, 24
    addi r4, r1, 0x8
    li r5, 0x1
    bl fn_802A4EEC
    clrlwi. r0, r3, 16
    beq lbl_802A42F8
    lbz r0, 0x1a(r22)
    li r17, 0x0
    addi r19, r19, 0x1
    cmpwi r0, 0x2
    beq lbl_802A41DC
    bge lbl_802A402C
    cmpwi r0, 0x0
    beq lbl_802A403C
    bge lbl_802A40E4
    b lbl_802A42D8
lbl_802A402C:
    cmpwi r0, 0x4
    beq lbl_802A42C0
    bge lbl_802A42D8
    b lbl_802A4228
lbl_802A403C:
    cmplwi r16, 0x1
    bne lbl_802A4058
    li r3, 0x2
    bl GKI_getpoolbuf
    stwx r3, r15, r23
    stb r30, 0x14(r22)
    b lbl_802A408C
lbl_802A4058:
    cmplwi r16, 0x2
    bne lbl_802A4074
    li r3, 0x3
    bl GKI_getpoolbuf
    stwx r3, r15, r23
    stb r24, 0x14(r22)
    b lbl_802A408C
lbl_802A4074:
    cmplwi r16, 0x3
    bne lbl_802A42D8
    li r3, 0x1
    bl GKI_getpoolbuf
    stwx r3, r15, r23
    stb r25, 0x14(r22)
lbl_802A408C:
    lwzx r3, r15, r23
    cmpwi r3, 0x0
    beq lbl_802A40C4
    sth r29, 0x2(r3)
    lbz r0, 0x14(r22)
    lwzx r3, r15, r23
    slwi r0, r0, 1
    add r4, r26, r0
    lhz r0, -0x2(r4)
    sth r0, 0x0(r3)
    lwzx r3, r15, r23
    sth r29, 0x4(r3)
    stb r27, 0x1a(r22)
    b lbl_802A40D4
lbl_802A40C4:
    addi r4, r14, lbl_803731D0@l
    lis r3, 0x7
    bl LogMsg_0
    stb r24, 0x1a(r22)
lbl_802A40D4:
    lbz r0, 0x14(r22)
    add r3, r28, r0
    lbz r0, -0x1(r3)
    sth r0, 0xc(r21)
lbl_802A40E4:
    lwzx r6, r15, r23
    lbz r5, 0x8(r1)
    lhz r4, 0x2(r6)
    add r3, r6, r4
    addi r0, r4, 0x1
    stb r5, 0x8(r3)
    sth r0, 0x2(r6)
    lhz r3, 0xc(r21)
    subi r3, r3, 0x1
    clrlwi. r0, r3, 16
    sth r3, 0xc(r21)
    bne lbl_802A41D0
    lbz r0, 0x14(r22)
    lbz r18, 0x8(r1)
    cmplwi r0, 0x2
    bne lbl_802A4164
    lbz r0, 0x17(r22)
    clrlslwi r4, r18, 16, 8
    lwzx r3, r15, r23
    add r0, r4, r0
    clrlwi r18, r0, 16
    bl l2cap_link_chk_pkt_start
    cmpwi r3, 0x0
    stwx r3, r15, r23
    bne lbl_802A4164
    cmpwi r18, 0x0
    sth r18, 0xc(r21)
    bne lbl_802A415C
    stb r29, 0x1a(r22)
    b lbl_802A42D8
lbl_802A415C:
    stb r30, 0x1a(r22)
    b lbl_802A42D8
lbl_802A4164:
    sth r18, 0xc(r21)
    lwzx r3, r15, r23
    bl GKI_get_buf_size
    lbz r0, 0x14(r22)
    clrlwi r4, r3, 16
    add r3, r28, r0
    lbz r0, -0x1(r3)
    add r3, r18, r0
    addi r0, r3, 0x8
    cmplw r0, r4
    ble lbl_802A41B4
    lwzx r3, r15, r23
    bl GKI_freebuf
    stwx r29, r15, r23
    lis r3, lbl_8037320C@ha
    addi r4, r3, lbl_8037320C@l
    stb r30, 0x1a(r22)
    lis r3, 0x7
    bl LogMsg_0
    b lbl_802A42D8
lbl_802A41B4:
    cmpwi r18, 0x0
    beq lbl_802A41C4
    stb r25, 0x1a(r22)
    b lbl_802A42D8
lbl_802A41C4:
    stb r29, 0x1a(r22)
    li r17, 0x1
    b lbl_802A42D8
lbl_802A41D0:
    lbz r0, 0x8(r1)
    stb r0, 0x17(r22)
    b lbl_802A42D8
lbl_802A41DC:
    lhz r3, 0xc(r21)
    subi r3, r3, 0x1
    clrlwi. r0, r3, 16
    sth r3, 0xc(r21)
    bne lbl_802A421C
    lbz r0, 0x14(r22)
    lbz r3, 0x8(r1)
    cmplwi r0, 0x2
    bne lbl_802A4210
    lbz r0, 0x17(r22)
    clrlslwi r3, r3, 16, 8
    add r0, r3, r0
    clrlwi r3, r0, 16
lbl_802A4210:
    sth r3, 0xc(r21)
    stb r30, 0x1a(r22)
    b lbl_802A42D8
lbl_802A421C:
    lbz r0, 0x8(r1)
    stb r0, 0x17(r22)
    b lbl_802A42D8
lbl_802A4228:
    lwzx r7, r15, r23
    clrlwi r3, r20, 24
    lbz r6, 0x8(r1)
    lhz r5, 0x2(r7)
    add r4, r7, r5
    addi r0, r5, 0x1
    stb r6, 0x8(r4)
    sth r0, 0x2(r7)
    lhz r4, 0xc(r21)
    subi r0, r4, 0x1
    sth r0, 0xc(r21)
    clrlwi r5, r0, 16
    lwzx r4, r15, r23
    lhz r0, 0x2(r4)
    add r4, r4, r0
    addi r4, r4, 0x8
    bl fn_802A4EEC
    lwzx r4, r15, r23
    add r19, r19, r3
    lhz r0, 0x2(r4)
    add r0, r0, r3
    sth r0, 0x2(r4)
    lhz r0, 0xc(r21)
    subf r3, r3, r0
    clrlwi. r0, r3, 16
    sth r3, 0xc(r21)
    bne lbl_802A42D8
    lbz r0, 0x14(r22)
    cmplwi r0, 0x2
    bne lbl_802A42B4
    bl l2cap_link_chk_pkt_end
    clrlwi. r0, r3, 24
    bne lbl_802A42B4
    stb r29, 0x1a(r22)
    b lbl_802A42D8
lbl_802A42B4:
    stb r29, 0x1a(r22)
    li r17, 0x1
    b lbl_802A42D8
lbl_802A42C0:
    lhz r3, 0xc(r21)
    subi r3, r3, 0x1
    clrlwi. r0, r3, 16
    sth r3, 0xc(r21)
    bne lbl_802A42D8
    stb r29, 0x1a(r22)
lbl_802A42D8:
    cmpwi r17, 0x0
    beq lbl_802A3FEC
    lbz r3, 0x1f(r31)
    li r4, 0x0
    lwzx r5, r15, r23
    bl GKI_send_msg
    stwx r29, r15, r23
    b lbl_802A3FEC
lbl_802A42F8:
    mr r3, r19
lbl_802A42FC:
    addi r11, r1, 0x60
    bl _restgpr_14
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// hcisu_h2_send_msg_now
// ----------------------------------------------------------------------------
asm void hcisu_h2_send_msg_now() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lhz r5, 0x0(r4)
    mr r27, r4
    lhz r0, 0x4(r4)
    cmplwi r5, 0x2100
    add r3, r4, r0
    addi r6, r3, 0x8
    bne lbl_802A434C
    li r28, 0x2
    b lbl_802A4368
lbl_802A434C:
    cmplwi r5, 0x2200
    bne lbl_802A435C
    li r28, 0x3
    b lbl_802A4368
lbl_802A435C:
    cmplwi r5, 0x2000
    bne lbl_802A4368
    li r28, 0x0
lbl_802A4368:
    cmplwi r5, 0x2100
    bne lbl_802A448C
    lis r3, lbl_80453A50@ha
    lhz r4, 0x2(r4)
    addi r30, r3, lbl_80453A50@l
    lhz r0, 0x7e(r30)
    cmplw r4, r0
    ble lbl_802A448C
    lbz r0, 0x1(r6)
    lbz r3, 0x0(r6)
    addi r6, r6, 0x2
    clrlslwi r0, r0, 24, 8
    add r0, r3, r0
    clrlwi r0, r0, 16
    andi. r0, r0, 0xcfff
    ori r31, r0, 0x1000
    srawi r29, r31, 8
    b lbl_802A447C
lbl_802A43B0:
    mr r4, r6
    mr r3, r28
    mr r6, r27
    bl fn_802A4EF4
    lhz r3, 0x4(r27)
    lhz r0, 0x7c(r30)
    lhz r4, 0x2(r27)
    add r0, r3, r0
    sth r0, 0x4(r27)
    clrlwi r0, r0, 16
    add r3, r27, r0
    lhz r0, 0x7c(r30)
    addi r6, r3, 0xa
    subf r0, r0, r4
    sth r0, 0x2(r27)
    stb r31, 0x8(r3)
    stb r29, 0x9(r3)
    lhz r3, 0x2(r27)
    lhz r0, 0x7e(r30)
    cmplw r3, r0
    ble lbl_802A4420
    lhz r0, 0x7c(r30)
    stb r0, 0x0(r6)
    lhz r0, 0x7c(r30)
    srawi r0, r0, 8
    stb r0, 0x1(r6)
    addi r6, r6, 0x2
    b lbl_802A443C
lbl_802A4420:
    subi r0, r3, 0x4
    stb r0, 0x0(r6)
    lhz r3, 0x2(r27)
    subi r0, r3, 0x4
    srawi r0, r0, 8
    stb r0, 0x1(r6)
    addi r6, r6, 0x2
lbl_802A443C:
    lhz r3, 0x6(r27)
    cmpwi r3, 0x0
    beq lbl_802A447C
    subi r3, r3, 0x1
    clrlwi. r0, r3, 16
    sth r3, 0x6(r27)
    bne lbl_802A447C
    li r0, 0x1900
    lis r3, lbl_804501A0@ha
    sth r0, 0x0(r27)
    addi r3, r3, lbl_804501A0@l
    mr r5, r27
    li r4, 0x0
    lbz r3, 0x1f(r3)
    bl GKI_send_msg
    b lbl_802A44A8
lbl_802A447C:
    lhz r5, 0x7e(r30)
    lhz r0, 0x2(r27)
    cmplw r0, r5
    bgt lbl_802A43B0
lbl_802A448C:
    lhz r5, 0x2(r27)
    mr r4, r6
    mr r3, r28
    mr r6, r27
    bl fn_802A4EF4
    mr r3, r27
    bl GKI_freebuf
lbl_802A44A8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// hcisu_h2_init
// ----------------------------------------------------------------------------
asm void hcisu_h2_init() {
    nofralloc
    lis r6, lbl_804501A0@ha
    li r0, 0x0
    addi r6, r6, lbl_804501A0@l
    stb r0, 0x1e(r6)
    stb r0, 0x1a(r6)
    stb r0, 0x1b(r6)
    stb r0, 0x1c(r6)
    stb r3, 0x1f(r6)
    stb r4, 0x20(r6)
    sth r5, 0x12(r6)
    blr
}

// ----------------------------------------------------------------------------
// hcisu_h2_open
// ----------------------------------------------------------------------------
asm void hcisu_h2_open() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_804501A0@ha
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r5, r5, lbl_804501A0@l
    stb r0, 0x13(r1)
    li r0, 0x2
    lbz r4, 0x1f(r5)
    lhz r6, 0x0(r3)
    sth r6, 0xc(r1)
    lhz r6, 0x2(r3)
    addi r3, r1, 0x8
    sth r6, 0xe(r1)
    sth r4, 0x10(r1)
    stb r0, 0x1e(r5)
    bl fn_802A4BDC
    lis r4, hcisu_h2_usb_cback@ha
    addi r3, r1, 0x8
    addi r4, r4, hcisu_h2_usb_cback@l
    bl fn_802A4DE4
    lwz r0, 0x24(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// hcisu_h2_close
// ----------------------------------------------------------------------------
asm void hcisu_h2_close() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_804501A0@ha
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r3, r3, lbl_804501A0@l
    stb r0, 0x1e(r3)
    bl fn_802A5108
    bl fn_802A51B4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// hcisu_h2_send
// ----------------------------------------------------------------------------
asm void hcisu_h2_send() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_804501A0@ha
    mr r4, r3
    stw r0, 0x14(r1)
    addi r3, r5, lbl_804501A0@l
    bl hcisu_h2_send_msg_now
    lwz r0, 0x14(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// hcisu_h2_handle_event
// ----------------------------------------------------------------------------
asm void hcisu_h2_handle_event() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_804501A0@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_804501A0@l
    subi r0, r3, 0x8
    lhz r3, 0x12(r4)
    subf r0, r3, r0
    clrlwi r3, r0, 16
    bl hcisu_h2_receive_msg
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

