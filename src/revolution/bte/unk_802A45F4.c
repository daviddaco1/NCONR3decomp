#include "types.h"

// Translation unit: src/revolution/bte/unk_802A45F4.cpp
// Total functions: 13

// Small Data symbols (@sda21)
extern float lbl_8049CF48;
extern float lbl_8049CF4C;
extern float lbl_8049CF50;
extern float lbl_8049CF54;
extern float lbl_8049DFD0;
extern float lbl_8049DFD1;
extern float lbl_8049DFD4;
extern float lbl_8049DFD8;
extern float lbl_8049DFDC;
extern float lbl_8049DFE0;
extern float lbl_8049DFE4;

// Global data symbols (@ha/@l)
extern u8 bta_ci_hci_msg_handler[];
extern u8 lbl_804501E0[];
extern u8 lbl_80450240[];
extern u8 lbl_80451240[];

// Forward declarations
extern void GKI_create_pool();
extern void GKI_delete_pool();
extern void GKI_dequeue();
extern void GKI_disable();
extern void GKI_enable();
extern void GKI_enqueue();
extern void GKI_enqueue_head();
extern void GKI_freebuf();
extern void GKI_get_buf_size();
extern void GKI_getpoolbuf();
extern void GKI_init_q();
extern void IPCCltInit();
extern void IUSB_CloseDeviceAsync();
extern void IUSB_CloseLib();
extern void IUSB_OpenDeviceIds();
extern void IUSB_OpenLib();
extern void IUSB_ReadBlkMsgAsync();
extern void IUSB_ReadIntrMsgAsync();
extern void IUSB_WriteBlkMsgAsync();
extern void IUSB_WriteCtrlMsgAsync();
extern void OSSwitchFiberEx();
extern void _restgpr_25();
extern void _savegpr_25();
extern void fn_802A45F4();
extern void fn_802A4600();
extern void fn_802A4694();
extern void fn_802A47A8();
extern void fn_802A4944();
extern void fn_802A4A10();
extern void fn_802A4AFC();
extern void fn_802A4BDC();
extern void fn_802A4DE4();
extern void fn_802A4EEC();
extern void fn_802A4EF4();
extern void fn_802A5108();
extern void fn_802A51B4();
extern void l2cap_link_chk_pkt_end();
extern void l2cap_link_chk_pkt_start();
extern void memcpy();
extern void memset();

// ----------------------------------------------------------------------------
// fn_802A45F4
// ----------------------------------------------------------------------------
asm void fn_802A45F4() {
    nofralloc
    lis r3, 0x1
    addi r3, r3, 0x4a78
    blr
}

// ----------------------------------------------------------------------------
// fn_802A4600
// ----------------------------------------------------------------------------
asm void fn_802A4600() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_804501E0@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r4, lbl_804501E0@l
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    stw r30, lbl_804501E0@l(r4)
    stb r30, 0x10(r31)
    stb r30, 0x11(r31)
    stb r30, 0x12(r31)
    stb r30, 0x13(r31)
    stb r30, lbl_8049DFD0
    bl IUSB_CloseLib
    bl GKI_disable
    li r0, 0x5
    stb r30, 0x28(r31)
    stb r0, 0x29(r31)
    stb r30, lbl_8049DFD1
    bl GKI_enable
    lwz r12, 0x20(r31)
    cmpwi r12, 0x0
    beq lbl_802A4678
    extsb r4, r29
    li r3, 0x4
    mtctr r12
    bctrl
lbl_802A4678:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802A4694
// ----------------------------------------------------------------------------
asm void fn_802A4694() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_804501E0@ha
    addi r31, r31, lbl_804501E0@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x29(r31)
    stb r5, 0x2b(r31)
    cmplwi r0, 0x2
    beq lbl_802A46EC
    mr r3, r30
    bl GKI_freebuf
    lbz r3, 0x1c(r31)
    bl GKI_delete_pool
    li r0, 0xff
    stb r0, 0x1c(r31)
    b lbl_802A478C
lbl_802A46EC:
    li r0, 0x0
    cmplw r4, r0
    beq lbl_802A4788
    cmpwi r3, 0x0
    bgt lbl_802A470C
    mr r3, r30
    bl GKI_freebuf
    b lbl_802A4788
lbl_802A470C:
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802A472C
    mr r3, r30
    bl GKI_freebuf
    b lbl_802A4788
lbl_802A472C:
    lhz r0, 0x4(r30)
    clrlwi r4, r29, 16
    li r6, 0x1000
    sth r29, 0x2(r30)
    add r5, r4, r0
    mr r4, r30
    addi r0, r5, 0x8
    sth r6, 0x0(r30)
    clrrwi r5, r0, 2
    addi r5, r5, 0x4
    bl memcpy
    lis r5, lbl_80450240@ha
    lis r7, bta_ci_hci_msg_handler@ha
    addi r5, r5, lbl_80450240@l
    mr r3, r31
    addi r8, r5, 0x1000
    addi r7, r7, bta_ci_hci_msg_handler@l
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl OSSwitchFiberEx
    mr r3, r30
    bl GKI_freebuf
lbl_802A4788:
    bl fn_802A4944
lbl_802A478C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802A47A8
// ----------------------------------------------------------------------------
asm void fn_802A47A8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_804501E0@ha
    addi r30, r30, lbl_804501E0@l
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    lbz r0, 0x29(r30)
    cmplwi r0, 0x2
    beq lbl_802A47F8
    mr r3, r29
    bl GKI_freebuf
    lbz r3, 0x1d(r30)
    bl GKI_delete_pool
    li r0, 0xff
    stb r0, 0x1d(r30)
    b lbl_802A4924
lbl_802A47F8:
    cmpwi r3, 0x0
    bgt lbl_802A480C
    mr r3, r29
    bl GKI_freebuf
    b lbl_802A48A4
lbl_802A480C:
    sth r3, 0x2(r4)
    li r3, 0x3
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_802A4830
    mr r3, r29
    bl GKI_freebuf
    b lbl_802A48A4
lbl_802A4830:
    lhz r5, 0x2(r29)
    mr r4, r29
    lhz r0, 0x4(r29)
    add r5, r5, r0
    addi r0, r5, 0x8
    clrrwi r5, r0, 2
    addi r5, r5, 0x4
    bl memcpy
    mr r3, r28
    bl l2cap_link_chk_pkt_start
    li r0, 0x0
    mr r28, r3
    cmplw r3, r0
    beq lbl_802A489C
    bl l2cap_link_chk_pkt_end
    clrlwi. r0, r3, 24
    beq lbl_802A489C
    lis r5, lbl_80451240@ha
    lis r7, bta_ci_hci_msg_handler@ha
    addi r5, r5, lbl_80451240@l
    mr r3, r28
    addi r8, r5, 0x1000
    addi r7, r7, bta_ci_hci_msg_handler@l
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl OSSwitchFiberEx
lbl_802A489C:
    mr r3, r29
    bl GKI_freebuf
lbl_802A48A4:
    lis r30, lbl_804501E0@ha
    addi r31, r30, lbl_804501E0@l
lbl_802A48AC:
    lbz r3, 0x1d(r31)
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_802A48AC
    li r4, 0x1100
    addi r0, r3, 0x27
    sth r4, 0x0(r3)
    li r4, 0x0
    clrrwi r29, r0, 5
    addi r0, r3, 0x8
    sth r4, 0x2(r3)
    subf r0, r0, r29
    sth r0, 0x4(r3)
    bl GKI_get_buf_size
    clrlwi r3, r3, 16
    lhz r0, 0x4(r28)
    subi r5, r3, 0x28
    lis r7, fn_802A47A8@ha
    lwz r3, lbl_804501E0@l(r30)
    mr r6, r29
    lbz r4, 0x11(r31)
    mr r8, r28
    subf r5, r0, r5
    addi r7, r7, fn_802A47A8@l
    bl IUSB_ReadBlkMsgAsync
    cmpwi r3, 0x0
    beq lbl_802A4924
    mr r3, r28
    bl GKI_freebuf
lbl_802A4924:
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
// fn_802A4944
// ----------------------------------------------------------------------------
asm void fn_802A4944() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_804501E0@ha
    addi r31, r30, lbl_804501E0@l
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
lbl_802A4968:
    lbz r3, 0x1c(r31)
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_802A4968
    li r4, 0x1000
    addi r0, r3, 0x27
    sth r4, 0x0(r3)
    li r4, 0x0
    clrrwi r28, r0, 5
    addi r0, r3, 0x8
    sth r4, 0x2(r3)
    subf r0, r0, r28
    sth r0, 0x4(r3)
    bl GKI_get_buf_size
    clrlwi r3, r3, 16
    lhz r0, 0x4(r29)
    subi r5, r3, 0x28
    lis r7, fn_802A4694@ha
    lwz r3, lbl_804501E0@l(r30)
    mr r6, r28
    lbz r4, 0x12(r31)
    mr r8, r29
    subf r5, r0, r5
    addi r7, r7, fn_802A4694@l
    bl IUSB_ReadIntrMsgAsync
    cmpwi r3, 0x0
    beq lbl_802A49E0
    mr r3, r29
    bl GKI_freebuf
lbl_802A49E0:
    lis r3, lbl_804501E0@ha
    li r0, 0x1
    addi r3, r3, lbl_804501E0@l
    stb r0, 0x2b(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802A4A10
// ----------------------------------------------------------------------------
asm void fn_802A4A10() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    beq lbl_802A4A54
    mr r3, r4
    bl GKI_freebuf
    bl GKI_disable
    lis r4, lbl_804501E0@ha
    addi r4, r4, lbl_804501E0@l
    lbz r3, 0x48(r4)
    subi r0, r3, 0x1
    stb r0, 0x48(r4)
    bl GKI_enable
lbl_802A4A54:
    lis r30, lbl_804501E0@ha
    addi r31, r30, lbl_804501E0@l
    lbz r0, 0x48(r31)
    cmplwi r0, 0x5
    bge lbl_802A4AE0
    lhz r0, 0x44(r31)
    cmpwi r0, 0x0
    beq lbl_802A4AE0
    addi r3, r31, 0x3c
    bl GKI_dequeue
    stw r3, 0x8(r1)
    mr r29, r3
    lis r10, fn_802A4A10@ha
    li r4, 0x20
    lhz r0, 0x4(r3)
    addi r10, r10, fn_802A4A10@l
    lwz r3, lbl_804501E0@l(r30)
    li r5, 0x0
    add r6, r29, r0
    lhz r8, 0x2(r29)
    addi r9, r6, 0x8
    li r7, 0x0
    li r6, 0x0
    bl IUSB_WriteCtrlMsgAsync
    cmpwi r3, 0x0
    bge lbl_802A4ACC
    mr r4, r29
    addi r3, r31, 0x3c
    bl GKI_enqueue_head
    b lbl_802A4AE0
lbl_802A4ACC:
    bl GKI_disable
    lbz r3, 0x48(r31)
    addi r0, r3, 0x1
    stb r0, 0x48(r31)
    bl GKI_enable
lbl_802A4AE0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802A4AFC
// ----------------------------------------------------------------------------
asm void fn_802A4AFC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    beq lbl_802A4B40
    mr r3, r4
    bl GKI_freebuf
    bl GKI_disable
    lis r4, lbl_804501E0@ha
    addi r4, r4, lbl_804501E0@l
    lbz r3, 0x38(r4)
    subi r0, r3, 0x1
    stb r0, 0x38(r4)
    bl GKI_enable
lbl_802A4B40:
    lis r30, lbl_804501E0@ha
    addi r31, r30, lbl_804501E0@l
    lbz r0, 0x38(r31)
    cmplwi r0, 0x5
    bge lbl_802A4BC0
    lhz r0, 0x34(r31)
    cmpwi r0, 0x0
    beq lbl_802A4BC0
    addi r3, r31, 0x2c
    bl GKI_dequeue
    lhz r0, 0x4(r3)
    mr r29, r3
    lis r7, fn_802A4AFC@ha
    lwz r3, lbl_804501E0@l(r30)
    add r6, r29, r0
    lbz r4, 0x10(r31)
    lhz r5, 0x2(r29)
    mr r8, r29
    addi r7, r7, fn_802A4AFC@l
    addi r6, r6, 0x8
    bl IUSB_WriteBlkMsgAsync
    cmpwi r3, 0x0
    bge lbl_802A4BAC
    mr r4, r29
    addi r3, r31, 0x2c
    bl GKI_enqueue_head
    b lbl_802A4BC0
lbl_802A4BAC:
    bl GKI_disable
    lbz r3, 0x38(r31)
    addi r0, r3, 0x1
    stb r0, 0x38(r31)
    bl GKI_enable
lbl_802A4BC0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802A4BDC
// ----------------------------------------------------------------------------
asm void fn_802A4BDC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x4c
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lis r30, lbl_804501E0@ha
    addi r3, r30, lbl_804501E0@l
    bl memset
    bl GKI_disable
    addi r30, r30, lbl_804501E0@l
    li r0, 0x5
    stb r0, 0x29(r30)
    bl GKI_enable
    lbz r0, lbl_8049DFD1
    cmpwi r0, 0x0
    bne lbl_802A4C38
    li r3, 0x0
    li r0, 0x1
    stb r3, 0x28(r30)
    stb r0, lbl_8049DFD1
lbl_802A4C38:
    bl IPCCltInit
    cmpwi r3, 0x0
    bne lbl_802A4DCC
    bl IUSB_OpenLib
    cmpwi r3, 0x0
    bne lbl_802A4DCC
    lbz r0, lbl_8049DFDC
    lis r4, lbl_804501E0@ha
    addi r4, r4, lbl_804501E0@l
    cmplwi r0, 0x1
    stw r31, 0x24(r4)
    bne lbl_802A4C7C
    lwz r3, lbl_8049DFE0
    lwz r0, lbl_8049DFE4
    stw r3, 0x14(r4)
    stw r0, 0x18(r4)
    b lbl_802A4C8C
lbl_802A4C7C:
    li r3, 0x57e
    li r0, 0x305
    stw r3, 0x14(r4)
    stw r0, 0x18(r4)
lbl_802A4C8C:
    lwz r0, lbl_8049DFD8
    lis r6, lbl_804501E0@ha
    addi r6, r6, lbl_804501E0@l
    li r3, 0x0
    cmplwi r0, 0x1
    stb r3, 0x10(r6)
    lwz r5, 0x18(r6)
    stb r3, 0x11(r6)
    lwz r0, 0x14(r6)
    stb r3, 0x12(r6)
    stb r3, 0x13(r6)
    bne lbl_802A4D00
    lwz r3, lbl_8049DFD4
    cmpwi r3, 0x0
    bne lbl_802A4CE0
    clrlwi r4, r0, 16
    clrlwi r5, r5, 16
    la r3, lbl_8049CF50
    bl IUSB_OpenDeviceIds
    mr r30, r3
    b lbl_802A4D14
lbl_802A4CE0:
    cmplwi r3, 0x1
    bne lbl_802A4D14
    clrlwi r4, r0, 16
    clrlwi r5, r5, 16
    la r3, lbl_8049CF54
    bl IUSB_OpenDeviceIds
    mr r30, r3
    b lbl_802A4D14
lbl_802A4D00:
    clrlwi r4, r0, 16
    clrlwi r5, r5, 16
    la r3, lbl_8049CF54
    bl IUSB_OpenDeviceIds
    mr r30, r3
lbl_802A4D14:
    cmpwi r30, 0x0
    blt lbl_802A4D20
    stw r30, lbl_8049CF4C
lbl_802A4D20:
    cmpwi r30, 0x0
    blt lbl_802A4DCC
    lis r30, lbl_804501E0@ha
    li r3, 0x2
    addi r30, r30, lbl_804501E0@l
    li r4, 0x82
    li r0, 0x81
    li r31, 0x0
    stb r3, 0x10(r30)
    addi r3, r30, 0x2c
    stb r4, 0x11(r30)
    stb r0, 0x12(r30)
    stb r31, 0x13(r30)
    bl GKI_init_q
    stb r31, 0x38(r30)
    addi r3, r30, 0x3c
    bl GKI_init_q
    stb r31, 0x48(r30)
    li r3, 0x294
    li r4, 0x2d
    li r5, 0x1
    li r6, 0x0
    bl GKI_create_pool
    stb r3, 0x1c(r30)
    li r3, 0x708
    li r4, 0x1e
    li r5, 0x1
    li r6, 0x0
    bl GKI_create_pool
    lbz r0, 0x1c(r30)
    stb r3, 0x1d(r30)
    cmplwi r0, 0xff
    beq lbl_802A4DCC
    clrlwi r0, r3, 24
    cmplwi r0, 0xff
    bne lbl_802A4DB4
    b lbl_802A4DCC
lbl_802A4DB4:
    bl GKI_disable
    li r0, 0x4
    stb r0, 0x29(r30)
    bl GKI_enable
    li r0, 0x1
    stw r0, lbl_8049CF48
lbl_802A4DCC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802A4DE4
// ----------------------------------------------------------------------------
asm void fn_802A4DE4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_804501E0@ha
    addi r31, r30, lbl_804501E0@l
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lbz r0, 0x29(r31)
    cmplwi r0, 0x4
    bne lbl_802A4ECC
    lbz r0, 0x1c(r31)
    cmplwi r0, 0xff
    beq lbl_802A4ECC
    lbz r0, 0x1d(r31)
    cmplwi r0, 0xff
    bne lbl_802A4E34
    b lbl_802A4ECC
lbl_802A4E34:
    bl GKI_disable
    li r0, 0x2
    stw r28, 0x20(r31)
    stb r0, 0x29(r31)
    bl GKI_enable
    bl fn_802A4944
lbl_802A4E4C:
    lbz r3, 0x1d(r31)
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_802A4E4C
    li r4, 0x1100
    addi r0, r3, 0x27
    sth r4, 0x0(r3)
    li r4, 0x0
    clrrwi r29, r0, 5
    addi r0, r3, 0x8
    sth r4, 0x2(r3)
    subf r0, r0, r29
    sth r0, 0x4(r3)
    bl GKI_get_buf_size
    clrlwi r3, r3, 16
    lhz r0, 0x4(r28)
    subi r5, r3, 0x28
    lis r7, fn_802A47A8@ha
    lwz r3, lbl_804501E0@l(r30)
    mr r6, r29
    lbz r4, 0x11(r31)
    mr r8, r28
    subf r5, r0, r5
    addi r7, r7, fn_802A47A8@l
    bl IUSB_ReadBlkMsgAsync
    cmpwi r3, 0x0
    beq lbl_802A4EC4
    mr r3, r28
    bl GKI_freebuf
lbl_802A4EC4:
    li r0, 0x0
    stw r0, lbl_8049CF48
lbl_802A4ECC:
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
// fn_802A4EEC
// ----------------------------------------------------------------------------
asm void fn_802A4EEC() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_802A4EF4
// ----------------------------------------------------------------------------
asm void fn_802A4EF4() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r29, lbl_804501E0@ha
    mr r25, r4
    addi r30, r29, lbl_804501E0@l
    mr r31, r5
    lbz r0, 0x29(r30)
    li r28, 0x0
    cmplwi r0, 0x2
    beq lbl_802A4F30
    li r3, 0x0
    b lbl_802A50F0
lbl_802A4F30:
    cmpwi r3, 0x2
    beq lbl_802A5024
    bge lbl_802A50EC
    cmpwi r3, 0x0
    beq lbl_802A4F4C
    b lbl_802A50EC
    b lbl_802A50EC
lbl_802A4F4C:
    lbz r3, 0x1c(r30)
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_802A4F68
    li r3, 0x0
    b lbl_802A50F0
lbl_802A4F68:
    addi r0, r3, 0x27
    sth r31, 0x2(r3)
    clrrwi r27, r0, 5
    mr r4, r25
    addi r0, r3, 0x8
    mr r5, r31
    subf r0, r0, r27
    sth r0, 0x4(r3)
    mr r3, r27
    bl memcpy
    lbz r0, 0x48(r30)
    cmplwi r0, 0x5
    bge lbl_802A4FDC
    lhz r0, 0x44(r30)
    cmpwi r0, 0x0
    bne lbl_802A4FDC
    stw r26, 0x8(r1)
    lis r10, fn_802A4A10@ha
    mr r8, r31
    mr r9, r27
    lwz r3, lbl_804501E0@l(r29)
    addi r10, r10, fn_802A4A10@l
    li r4, 0x20
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl IUSB_WriteCtrlMsgAsync
    mr r28, r3
    b lbl_802A4FF8
lbl_802A4FDC:
    lis r3, lbl_804501E0@ha
    mr r4, r26
    addi r3, r3, lbl_804501E0@l
    addi r3, r3, 0x3c
    bl GKI_enqueue
    li r3, 0x0
    b lbl_802A50F0
lbl_802A4FF8:
    cmpwi r3, 0x0
    beq lbl_802A500C
    mr r3, r26
    bl GKI_freebuf
    b lbl_802A50EC
lbl_802A500C:
    bl GKI_disable
    lbz r3, 0x48(r30)
    addi r0, r3, 0x1
    stb r0, 0x48(r30)
    bl GKI_enable
    b lbl_802A50EC
lbl_802A5024:
    lbz r3, 0x1d(r30)
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_802A5040
    li r3, 0x0
    b lbl_802A50F0
lbl_802A5040:
    addi r0, r3, 0x27
    sth r31, 0x2(r3)
    clrrwi r28, r0, 5
    mr r4, r25
    addi r0, r3, 0x8
    mr r5, r31
    subf r0, r0, r28
    sth r0, 0x4(r3)
    mr r3, r28
    bl memcpy
    lbz r0, 0x38(r30)
    cmplwi r0, 0x5
    bge lbl_802A50A8
    lhz r0, 0x34(r30)
    cmpwi r0, 0x0
    bne lbl_802A50A8
    lis r7, fn_802A4AFC@ha
    lwz r3, lbl_804501E0@l(r29)
    lbz r4, 0x10(r30)
    mr r5, r31
    mr r6, r28
    mr r8, r27
    addi r7, r7, fn_802A4AFC@l
    bl IUSB_WriteBlkMsgAsync
    mr r28, r3
    b lbl_802A50C4
lbl_802A50A8:
    lis r3, lbl_804501E0@ha
    mr r4, r27
    addi r3, r3, lbl_804501E0@l
    addi r3, r3, 0x2c
    bl GKI_enqueue
    li r3, 0x0
    b lbl_802A50F0
lbl_802A50C4:
    cmpwi r3, 0x0
    beq lbl_802A50D8
    mr r3, r27
    bl GKI_freebuf
    b lbl_802A50EC
lbl_802A50D8:
    bl GKI_disable
    lbz r3, 0x38(r30)
    addi r0, r3, 0x1
    stb r0, 0x38(r30)
    bl GKI_enable
lbl_802A50EC:
    clrlwi r3, r28, 16
lbl_802A50F0:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_802A5108
// ----------------------------------------------------------------------------
asm void fn_802A5108() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl GKI_disable
    lis r3, lbl_804501E0@ha
    li r0, 0x0
    addi r31, r3, lbl_804501E0@l
    stb r0, 0x29(r31)
    bl GKI_enable
    lhz r0, 0x34(r31)
    cmpwi r0, 0x0
    beq lbl_802A5158
    b lbl_802A514C
lbl_802A5140:
    addi r3, r31, 0x2c
    bl GKI_dequeue
    bl GKI_freebuf
lbl_802A514C:
    lhz r0, 0x34(r31)
    cmpwi r0, 0x0
    bne lbl_802A5140
lbl_802A5158:
    lis r3, lbl_804501E0@ha
    addi r31, r3, lbl_804501E0@l
    lhz r0, 0x44(r31)
    cmpwi r0, 0x0
    beq lbl_802A5188
    b lbl_802A517C
lbl_802A5170:
    addi r3, r31, 0x3c
    bl GKI_dequeue
    bl GKI_freebuf
lbl_802A517C:
    lhz r0, 0x44(r31)
    cmpwi r0, 0x0
    bne lbl_802A5170
lbl_802A5188:
    lis r3, lbl_804501E0@ha
    lis r4, fn_802A4600@ha
    lwz r3, lbl_804501E0@l(r3)
    addi r4, r4, fn_802A4600@l
    li r5, 0x0
    bl IUSB_CloseDeviceAsync
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802A51B4
// ----------------------------------------------------------------------------
asm void fn_802A51B4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl IUSB_CloseLib
    bl GKI_disable
    lis r3, lbl_804501E0@ha
    li r0, 0x0
    addi r3, r3, lbl_804501E0@l
    li r4, 0x5
    stb r4, 0x29(r3)
    stb r0, 0x28(r3)
    stb r0, lbl_8049DFD1
    bl GKI_enable
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

