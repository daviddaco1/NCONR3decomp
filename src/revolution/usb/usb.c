#include "types.h"

// Translation unit: src/revolution/usb/usb.cpp
// Total functions: 14

// Small Data symbols (@sda21)
extern float lbl_8049D3A8;
extern float lbl_8049D3AC;
extern float lbl_8049D3B0;
extern float lbl_8049E548;
extern float lbl_8049E54C;
extern float lbl_8049E550;

// Global data symbols (@ha/@l)
extern u8 lbl_8038DC40[];

// Forward declarations
extern void DCFlushRange();
extern void DCInvalidateRange();
extern void IOS_CloseAsync();
extern void IOS_Ioctlv();
extern void IOS_IoctlvAsync();
extern void IOS_Open();
extern void IPCGetBufferHi();
extern void IPCGetBufferLo();
extern void IPCSetBufferLo();
extern void IUSB_CloseDeviceAsync();
extern void IUSB_CloseLib();
extern void IUSB_OpenDeviceIds();
extern void IUSB_OpenLib();
extern void IUSB_ReadBlkMsgAsync();
extern void IUSB_ReadIntrMsgAsync();
extern void IUSB_WriteBlkMsgAsync();
extern void IUSB_WriteCtrlMsgAsync();
extern void OSDisableInterrupts();
extern void OSReport();
extern void OSRestoreInterrupts();
extern void USB_ERR();
extern void USB_LOG();
extern void __CtrlMsgInt();
extern void __IntrBlkMsgInt();
extern void __LongBlkMsgInt();
extern void _restgpr_14();
extern void _restgpr_20();
extern void _restgpr_21();
extern void _restgpr_23();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_14();
extern void _savegpr_20();
extern void _savegpr_21();
extern void _savegpr_23();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_80329D84();
extern void iosAllocAligned();
extern void iosCreateHeap();
extern void iosFree();
extern void memset();
extern void snprintf();
extern void vprintf();

// ----------------------------------------------------------------------------
// USB_LOG
// ----------------------------------------------------------------------------
asm void USB_LOG() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    bne cr1, lbl_80329B68
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_80329B68:
    lbz r0, lbl_8049E550
    stw r3, 0x8(r1)
    cmpwi r0, 0x0
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    beq lbl_80329BC4
    la r3, lbl_8049D3B0
    opword 0x4CC63182
    bl OSReport
    addi r5, r1, 0x88
    addi r0, r1, 0x8
    lis r3, 0x100
    stw r5, 0x6c(r1)
    addi r4, r1, 0x68
    stw r3, 0x68(r1)
    mr r3, r31
    stw r0, 0x70(r1)
    bl vprintf
lbl_80329BC4:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// USB_ERR
// ----------------------------------------------------------------------------
asm void USB_ERR() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    bne cr1, lbl_80329C10
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_80329C10:
    lbz r0, lbl_8049D3AC
    stw r3, 0x8(r1)
    cmpwi r0, 0x0
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    beq lbl_80329C70
    lis r3, lbl_8038DC40@ha
    addi r3, r3, lbl_8038DC40@l
    opword 0x4CC63182
    bl OSReport
    addi r5, r1, 0x88
    addi r0, r1, 0x8
    lis r3, 0x100
    stw r5, 0x6c(r1)
    addi r4, r1, 0x68
    stw r3, 0x68(r1)
    mr r3, r31
    stw r0, 0x70(r1)
    bl vprintf
lbl_80329C70:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// IUSB_OpenLib
// ----------------------------------------------------------------------------
asm void IUSB_OpenLib() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8038DC40@ha
    addi r31, r31, lbl_8038DC40@l
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lwz r4, lbl_8049D3A8
    mr r29, r3
    cmpwi r4, -0x1
    beq lbl_80329CCC
    addi r3, r31, 0xc
    opword 0x4CC63182
    bl USB_LOG
    b lbl_80329D54
lbl_80329CCC:
    lwz r0, lbl_8049E548
    cmpwi r0, 0x0
    bne lbl_80329D2C
    bl IPCGetBufferLo
    stw r3, lbl_8049E548
    bl IPCGetBufferHi
    stw r3, lbl_8049E54C
    mr r6, r3
    lwz r5, lbl_8049E548
    addi r3, r31, 0x3c
    li r4, 0x80
    opword 0x4CC63182
    bl USB_LOG
    lwz r3, lbl_8049E548
    lwz r0, lbl_8049E54C
    addi r3, r3, 0x4000
    cmplw r3, r0
    ble lbl_80329D28
    addi r3, r31, 0x5c
    opword 0x4CC63182
    bl USB_ERR
    li r30, -0x16
    b lbl_80329D54
lbl_80329D28:
    bl IPCSetBufferLo
lbl_80329D2C:
    lwz r3, lbl_8049E548
    li r4, 0x4000
    bl iosCreateHeap
    cmpwi r3, 0x0
    stw r3, lbl_8049D3A8
    bge lbl_80329D54
    addi r3, r31, 0x74
    opword 0x4CC63182
    bl USB_ERR
    li r30, -0x16
lbl_80329D54:
    mr r3, r29
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// IUSB_CloseLib
// ----------------------------------------------------------------------------
asm void IUSB_CloseLib() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_80329D84
// ----------------------------------------------------------------------------
asm void fn_80329D84() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r31, lbl_8038DC40@ha
    mr r26, r3
    addi r31, r31, lbl_8038DC40@l
    mr r27, r4
    mr r4, r26
    addi r3, r31, 0x88
    opword 0x4CC63182
    bl USB_LOG
    lwz r4, 0x34(r27)
    addi r3, r31, 0xa8
    opword 0x4CC63182
    bl USB_LOG
    lwz r0, 0x34(r27)
    cmplwi r0, 0x7
    beq lbl_80329E04
    cmplwi r0, 0x3
    beq lbl_80329E04
    cmpwi r0, 0x0
    beq lbl_80329E04
    cmplwi r0, 0x4
    beq lbl_80329E04
    cmplwi r0, 0x2
    beq lbl_80329E04
    addi r3, r31, 0xc8
    opword 0x4CC63182
    bl USB_ERR
    b lbl_80329E78
lbl_80329E04:
    mr r29, r27
    li r28, 0x0
    b lbl_80329E64
lbl_80329E10:
    lwz r5, 0x14(r29)
    mr r4, r28
    addi r3, r31, 0xf0
    opword 0x4CC63182
    bl USB_LOG
    lwz r30, 0x14(r29)
    cmpwi r30, 0x0
    beq lbl_80329E5C
    lwz r3, lbl_8049D3A8
    mr r4, r30
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_80329E5C
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r30
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_80329E5C:
    addi r29, r29, 0x4
    addi r28, r28, 0x1
lbl_80329E64:
    lwz r0, 0x34(r27)
    cmplw r28, r0
    blt lbl_80329E10
    li r0, 0x0
    stw r0, 0x34(r27)
lbl_80329E78:
    lwz r4, 0x0(r27)
    addi r3, r31, 0x128
    lwz r5, 0x8(r27)
    opword 0x4CC63182
    bl USB_LOG
    lwz r12, 0x0(r27)
    cmpwi r12, 0x0
    beq lbl_80329EAC
    mr r3, r26
    lwz r4, 0x8(r27)
    mtctr r12
    bctrl
    b lbl_80329EDC
lbl_80329EAC:
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    beq lbl_80329EDC
    addi r3, r31, 0x13c
    opword 0x4CC63182
    bl USB_LOG
    lwz r12, 0x4(r27)
    mr r3, r26
    lwz r4, 0xc(r27)
    lwz r5, 0x8(r27)
    mtctr r12
    bctrl
lbl_80329EDC:
    cmpwi r27, 0x0
    beq lbl_80329F10
    lwz r3, lbl_8049D3A8
    mr r4, r27
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_80329F10
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r27
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_80329F10:
    addi r11, r1, 0x20
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// IUSB_OpenDeviceIds
// ----------------------------------------------------------------------------
asm void IUSB_OpenDeviceIds() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r6, 0x0
    lis r31, lbl_8038DC40@ha
    mr r26, r3
    mr r27, r4
    mr r30, r5
    mr r28, r6
    addi r31, r31, lbl_8038DC40@l
    li r29, 0x0
    bne lbl_80329F6C
    li r30, -0x4
    b lbl_8032A020
lbl_80329F6C:
    lwz r3, lbl_8049D3A8
    li r4, 0x80
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_80329FA0
    lwz r4, lbl_8049D3A8
    mr r6, r29
    addi r3, r31, 0x154
    li r5, 0x80
    opword 0x4CC63182
    bl USB_ERR
lbl_80329FA0:
    cmpwi r29, 0x0
    bne lbl_80329FBC
    addi r3, r31, 0x178
    opword 0x4CC63182
    bl USB_ERR
    li r30, -0x16
    b lbl_8032A020
lbl_80329FBC:
    mr r3, r29
    li r4, 0x0
    li r5, 0x80
    bl memset
    mr r6, r26
    mr r7, r27
    mr r8, r30
    addi r3, r29, 0x40
    addi r5, r31, 0x19c
    li r4, 0x40
    opword 0x4CC63182
    bl snprintf
    addi r3, r31, 0x1b0
    addi r4, r29, 0x40
    opword 0x4CC63182
    bl USB_LOG
    addi r3, r29, 0x40
    li r4, 0x0
    bl IOS_Open
    mr r30, r3
    addi r3, r31, 0x1c4
    mr r4, r30
    opword 0x4CC63182
    bl USB_LOG
    stw r30, 0x0(r28)
lbl_8032A020:
    cmpwi r29, 0x0
    beq lbl_8032A054
    lwz r3, lbl_8049D3A8
    mr r4, r29
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032A054
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r29
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A054:
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// IUSB_CloseDeviceAsync
// ----------------------------------------------------------------------------
asm void IUSB_CloseDeviceAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_8038DC40@ha
    mr r27, r3
    addi r31, r31, lbl_8038DC40@l
    mr r28, r4
    mr r29, r5
    addi r3, r31, 0x214
    opword 0x4CC63182
    bl USB_LOG
    lwz r3, lbl_8049D3A8
    li r4, 0x80
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8032A0D8
    lwz r4, lbl_8049D3A8
    mr r6, r30
    addi r3, r31, 0x154
    li r5, 0x80
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A0D8:
    cmpwi r30, 0x0
    bne lbl_8032A0F4
    addi r3, r31, 0x240
    opword 0x4CC63182
    bl USB_ERR
    li r29, -0x16
    b lbl_8032A178
lbl_8032A0F4:
    mr r3, r30
    li r4, 0x0
    li r5, 0x80
    bl memset
    stw r28, 0x0(r30)
    lis r4, fn_80329D84@ha
    li r0, 0x0
    mr r3, r27
    stw r29, 0x8(r30)
    mr r5, r30
    addi r4, r4, fn_80329D84@l
    stw r0, 0x34(r30)
    bl IOS_CloseAsync
    mr r29, r3
    addi r3, r31, 0x224
    mr r4, r29
    opword 0x4CC63182
    bl USB_LOG
    cmpwi r29, 0x0
    bge lbl_8032A178
    cmpwi r30, 0x0
    beq lbl_8032A178
    lwz r3, lbl_8049D3A8
    mr r4, r30
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032A178
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r30
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A178:
    addi r11, r1, 0x20
    mr r3, r29
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __LongBlkMsgInt
// ----------------------------------------------------------------------------
asm void __LongBlkMsgInt() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    mr r21, r3
    lis r31, lbl_8038DC40@ha
    mr r22, r4
    mr r23, r5
    lwz r3, lbl_8049D3A8
    mr r24, r6
    mr r25, r7
    mr r30, r8
    mr r26, r9
    addi r31, r31, lbl_8038DC40@l
    li r4, 0x60
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_8032A200
    lwz r4, lbl_8049D3A8
    mr r6, r29
    addi r3, r31, 0x154
    li r5, 0x60
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A200:
    lwz r3, lbl_8049D3A8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_8032A234
    lwz r4, lbl_8049D3A8
    mr r6, r28
    addi r3, r31, 0x154
    li r5, 0x20
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A234:
    lwz r3, lbl_8049D3A8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_8032A268
    lwz r4, lbl_8049D3A8
    mr r6, r27
    addi r3, r31, 0x154
    li r5, 0x20
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A268:
    cmpwi r29, 0x0
    beq lbl_8032A280
    cmpwi r28, 0x0
    beq lbl_8032A280
    cmpwi r27, 0x0
    bne lbl_8032A294
lbl_8032A280:
    addi r3, r31, 0x2c0
    opword 0x4CC63182
    bl USB_ERR
    li r30, -0x16
    b lbl_8032A430
lbl_8032A294:
    stb r22, 0x0(r28)
    li r5, 0x1
    li r0, 0x4
    mr r3, r28
    stw r23, 0x0(r27)
    li r4, 0x20
    stw r28, 0x0(r29)
    stw r5, 0x4(r29)
    stw r27, 0x8(r29)
    stw r0, 0xc(r29)
    stw r24, 0x10(r29)
    stw r23, 0x14(r29)
    bl DCFlushRange
    mr r3, r27
    li r4, 0x20
    bl DCFlushRange
    mr r3, r29
    li r4, 0x60
    bl DCFlushRange
    cmpwi r26, 0x0
    bne lbl_8032A318
    mr r3, r21
    mr r7, r29
    li r4, 0xa
    li r5, 0x2
    li r6, 0x1
    bl IOS_Ioctlv
    mr r30, r3
    addi r3, r31, 0x2e4
    mr r4, r30
    opword 0x4CC63182
    bl USB_LOG
    b lbl_8032A430
lbl_8032A318:
    lwz r3, lbl_8049D3A8
    li r4, 0x80
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_8032A34C
    lwz r4, lbl_8049D3A8
    mr r6, r26
    addi r3, r31, 0x154
    li r5, 0x80
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A34C:
    cmpwi r26, 0x0
    bne lbl_8032A368
    addi r3, r31, 0x304
    opword 0x4CC63182
    bl USB_ERR
    li r30, -0x16
    b lbl_8032A430
lbl_8032A368:
    mr r3, r26
    li r4, 0x0
    li r5, 0x80
    bl memset
    stw r25, 0x0(r26)
    mr r4, r25
    mr r5, r30
    addi r3, r31, 0x330
    stw r30, 0x8(r26)
    opword 0x4CC63182
    bl USB_LOG
    li r0, 0x3
    lis r8, fn_80329D84@ha
    stw r0, 0x34(r26)
    mr r3, r21
    mr r7, r29
    mr r9, r26
    stw r28, 0x14(r26)
    addi r8, r8, fn_80329D84@l
    li r4, 0xa
    li r5, 0x2
    stw r27, 0x18(r26)
    li r6, 0x1
    stw r29, 0x1c(r26)
    stw r24, 0x40(r26)
    sth r23, 0x44(r26)
    bl IOS_IoctlvAsync
    cmpwi r3, 0x0
    mr r30, r3
    bge lbl_8032A4CC
    cmpwi r3, -0x16
    bne lbl_8032A3FC
    mr r5, r30
    addi r3, r31, 0x354
    addi r4, r31, 0x2b0
    opword 0x4CC63182
    bl OSReport
lbl_8032A3FC:
    cmpwi r26, 0x0
    beq lbl_8032A430
    lwz r3, lbl_8049D3A8
    mr r4, r26
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032A430
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r26
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A430:
    cmpwi r28, 0x0
    beq lbl_8032A464
    lwz r3, lbl_8049D3A8
    mr r4, r28
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032A464
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r28
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A464:
    cmpwi r27, 0x0
    beq lbl_8032A498
    lwz r3, lbl_8049D3A8
    mr r4, r27
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032A498
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r27
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A498:
    cmpwi r29, 0x0
    beq lbl_8032A4CC
    lwz r3, lbl_8049D3A8
    mr r4, r29
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032A4CC
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r29
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A4CC:
    addi r11, r1, 0x40
    mr r3, r30
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// __IntrBlkMsgInt
// ----------------------------------------------------------------------------
asm void __IntrBlkMsgInt() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_20
    mr r20, r3
    lis r31, lbl_8038DC40@ha
    mr r21, r4
    mr r22, r5
    lwz r3, lbl_8049D3A8
    mr r23, r6
    mr r24, r7
    mr r25, r8
    mr r30, r9
    mr r26, r10
    addi r31, r31, lbl_8038DC40@l
    li r4, 0x60
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_8032A558
    lwz r4, lbl_8049D3A8
    mr r6, r29
    addi r3, r31, 0x154
    li r5, 0x60
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A558:
    lwz r3, lbl_8049D3A8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_8032A58C
    lwz r4, lbl_8049D3A8
    mr r6, r28
    addi r3, r31, 0x154
    li r5, 0x20
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A58C:
    lwz r3, lbl_8049D3A8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_8032A5C0
    lwz r4, lbl_8049D3A8
    mr r6, r27
    addi r3, r31, 0x154
    li r5, 0x20
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A5C0:
    cmpwi r29, 0x0
    beq lbl_8032A5D8
    cmpwi r28, 0x0
    beq lbl_8032A5D8
    cmpwi r27, 0x0
    bne lbl_8032A5EC
lbl_8032A5D8:
    addi r3, r31, 0x388
    opword 0x4CC63182
    bl USB_ERR
    li r30, -0x16
    b lbl_8032A788
lbl_8032A5EC:
    stb r21, 0x0(r28)
    li r5, 0x1
    li r0, 0x2
    mr r3, r28
    sth r22, 0x0(r27)
    li r4, 0x20
    stw r28, 0x0(r29)
    stw r5, 0x4(r29)
    stw r27, 0x8(r29)
    stw r0, 0xc(r29)
    stw r23, 0x10(r29)
    stw r22, 0x14(r29)
    bl DCFlushRange
    mr r3, r27
    li r4, 0x20
    bl DCFlushRange
    mr r3, r29
    li r4, 0x60
    bl DCFlushRange
    cmpwi r26, 0x0
    bne lbl_8032A670
    mr r3, r20
    mr r4, r24
    mr r7, r29
    li r5, 0x2
    li r6, 0x1
    bl IOS_Ioctlv
    mr r30, r3
    addi r3, r31, 0x3ac
    mr r4, r30
    opword 0x4CC63182
    bl USB_LOG
    b lbl_8032A788
lbl_8032A670:
    lwz r3, lbl_8049D3A8
    li r4, 0x80
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_8032A6A4
    lwz r4, lbl_8049D3A8
    mr r6, r26
    addi r3, r31, 0x154
    li r5, 0x80
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A6A4:
    cmpwi r26, 0x0
    bne lbl_8032A6C0
    addi r3, r31, 0x3cc
    opword 0x4CC63182
    bl USB_ERR
    li r30, -0x16
    b lbl_8032A788
lbl_8032A6C0:
    mr r3, r26
    li r4, 0x0
    li r5, 0x80
    bl memset
    stw r25, 0x0(r26)
    mr r4, r25
    mr r5, r30
    addi r3, r31, 0x3f8
    stw r30, 0x8(r26)
    opword 0x4CC63182
    bl USB_LOG
    li r0, 0x3
    lis r8, fn_80329D84@ha
    stw r0, 0x34(r26)
    mr r3, r20
    mr r4, r24
    mr r7, r29
    stw r28, 0x14(r26)
    mr r9, r26
    addi r8, r8, fn_80329D84@l
    li r5, 0x2
    stw r27, 0x18(r26)
    li r6, 0x1
    stw r29, 0x1c(r26)
    stw r23, 0x40(r26)
    sth r22, 0x44(r26)
    bl IOS_IoctlvAsync
    cmpwi r3, 0x0
    mr r30, r3
    bge lbl_8032A824
    cmpwi r3, -0x16
    bne lbl_8032A754
    mr r5, r30
    addi r3, r31, 0x354
    addi r4, r31, 0x378
    opword 0x4CC63182
    bl OSReport
lbl_8032A754:
    cmpwi r26, 0x0
    beq lbl_8032A788
    lwz r3, lbl_8049D3A8
    mr r4, r26
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032A788
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r26
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A788:
    cmpwi r28, 0x0
    beq lbl_8032A7BC
    lwz r3, lbl_8049D3A8
    mr r4, r28
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032A7BC
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r28
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A7BC:
    cmpwi r27, 0x0
    beq lbl_8032A7F0
    lwz r3, lbl_8049D3A8
    mr r4, r27
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032A7F0
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r27
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A7F0:
    cmpwi r29, 0x0
    beq lbl_8032A824
    lwz r3, lbl_8049D3A8
    mr r4, r29
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032A824
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r29
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032A824:
    addi r11, r1, 0x40
    mr r3, r30
    bl _restgpr_20
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// IUSB_ReadIntrMsgAsync
// ----------------------------------------------------------------------------
asm void IUSB_ReadIntrMsgAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r28, r5
    mr r29, r6
    mr r26, r3
    mr r27, r4
    mr r30, r7
    mr r31, r8
    mr r3, r29
    mr r4, r28
    bl DCInvalidateRange
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r8, r30
    mr r9, r31
    li r7, 0x2
    li r10, 0x1
    bl __IntrBlkMsgInt
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// IUSB_ReadBlkMsgAsync
// ----------------------------------------------------------------------------
asm void IUSB_ReadBlkMsgAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r28, r5
    mr r29, r6
    mr r26, r3
    mr r27, r4
    mr r30, r7
    mr r31, r8
    mr r3, r29
    mr r4, r28
    bl DCInvalidateRange
    cmplwi r28, 0xffff
    bgt lbl_8032A91C
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r8, r30
    mr r9, r31
    li r7, 0x1
    li r10, 0x1
    bl __IntrBlkMsgInt
    b lbl_8032A93C
lbl_8032A91C:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    mr r8, r31
    li r9, 0x1
    bl __LongBlkMsgInt
lbl_8032A93C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// IUSB_WriteBlkMsgAsync
// ----------------------------------------------------------------------------
asm void IUSB_WriteBlkMsgAsync() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r28, r5
    mr r29, r6
    mr r26, r3
    mr r27, r4
    mr r30, r7
    mr r31, r8
    mr r3, r29
    mr r4, r28
    bl DCFlushRange
    cmplwi r28, 0xffff
    bgt lbl_8032A9BC
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r8, r30
    mr r9, r31
    li r7, 0x1
    li r10, 0x1
    bl __IntrBlkMsgInt
    b lbl_8032A9DC
lbl_8032A9BC:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    mr r7, r30
    mr r8, r31
    li r9, 0x1
    bl __LongBlkMsgInt
lbl_8032A9DC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __CtrlMsgInt
// ----------------------------------------------------------------------------
asm void __CtrlMsgInt() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_14
    cmpwi r9, 0x0
    lis r31, lbl_8038DC40@ha
    lwz r23, 0x58(r1)
    mr r15, r3
    lbz r14, 0x5f(r1)
    mr r16, r4
    mr r17, r5
    mr r18, r6
    mr r19, r7
    mr r20, r8
    mr r21, r9
    mr r22, r10
    addi r31, r31, lbl_8038DC40@l
    bne lbl_8032AA48
    cmpwi r8, 0x0
    bne lbl_8032AA50
lbl_8032AA48:
    clrlwi. r0, r9, 27
    beq lbl_8032AA64
lbl_8032AA50:
    addi r3, r31, 0x48c
    li r15, -0x4
    opword 0x4CC63182
    bl USB_ERR
    b lbl_8032AF7C
lbl_8032AA64:
    lwz r3, lbl_8049D3A8
    li r4, 0xe0
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8032AA98
    lwz r4, lbl_8049D3A8
    mr r6, r30
    addi r3, r31, 0x154
    li r5, 0xe0
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AA98:
    lwz r3, lbl_8049D3A8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_8032AACC
    lwz r4, lbl_8049D3A8
    mr r6, r29
    addi r3, r31, 0x154
    li r5, 0x20
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AACC:
    lwz r3, lbl_8049D3A8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_8032AB00
    lwz r4, lbl_8049D3A8
    mr r6, r28
    addi r3, r31, 0x154
    li r5, 0x20
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AB00:
    lwz r3, lbl_8049D3A8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_8032AB34
    lwz r4, lbl_8049D3A8
    mr r6, r27
    addi r3, r31, 0x154
    li r5, 0x20
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AB34:
    lwz r3, lbl_8049D3A8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_8032AB68
    lwz r4, lbl_8049D3A8
    mr r6, r26
    addi r3, r31, 0x154
    li r5, 0x20
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AB68:
    lwz r3, lbl_8049D3A8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_8032AB9C
    lwz r4, lbl_8049D3A8
    mr r6, r25
    addi r3, r31, 0x154
    li r5, 0x20
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AB9C:
    lwz r3, lbl_8049D3A8
    li r4, 0x20
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_8032ABD0
    lwz r4, lbl_8049D3A8
    mr r6, r24
    addi r3, r31, 0x154
    li r5, 0x20
    opword 0x4CC63182
    bl USB_ERR
lbl_8032ABD0:
    cmpwi r29, 0x0
    beq lbl_8032AC08
    cmpwi r28, 0x0
    beq lbl_8032AC08
    cmpwi r27, 0x0
    beq lbl_8032AC08
    cmpwi r26, 0x0
    beq lbl_8032AC08
    cmpwi r25, 0x0
    beq lbl_8032AC08
    cmpwi r24, 0x0
    beq lbl_8032AC08
    cmpwi r30, 0x0
    bne lbl_8032AC1C
lbl_8032AC08:
    addi r3, r31, 0x4a8
    opword 0x4CC63182
    bl USB_ERR
    li r15, -0x16
    b lbl_8032AE10
lbl_8032AC1C:
    stb r16, 0x0(r29)
    li r6, 0x0
    li r5, 0x1
    li r0, 0x2
    stb r17, 0x0(r28)
    mr r3, r29
    li r4, 0x20
    sthbrx r18, r0, r26
    sthbrx r19, r0, r25
    sthbrx r20, r0, r24
    stb r6, 0x0(r27)
    stw r29, 0x0(r30)
    stw r5, 0x4(r30)
    stw r28, 0x8(r30)
    stw r5, 0xc(r30)
    stw r26, 0x10(r30)
    stw r0, 0x14(r30)
    stw r25, 0x18(r30)
    stw r0, 0x1c(r30)
    stw r24, 0x20(r30)
    stw r0, 0x24(r30)
    stw r27, 0x28(r30)
    stw r5, 0x2c(r30)
    stw r21, 0x30(r30)
    stw r20, 0x34(r30)
    bl DCFlushRange
    mr r3, r28
    li r4, 0x20
    bl DCFlushRange
    mr r3, r27
    li r4, 0x20
    bl DCFlushRange
    mr r3, r26
    li r4, 0x20
    bl DCFlushRange
    mr r3, r25
    li r4, 0x20
    bl DCFlushRange
    mr r3, r24
    li r4, 0x20
    bl DCFlushRange
    mr r3, r30
    li r4, 0xe0
    bl DCFlushRange
    cmpwi r14, 0x0
    bne lbl_8032ACF4
    mr r3, r15
    mr r7, r30
    li r4, 0x0
    li r5, 0x6
    li r6, 0x1
    bl IOS_Ioctlv
    mr r15, r3
    b lbl_8032AE10
lbl_8032ACF4:
    lwz r3, lbl_8049D3A8
    li r4, 0x80
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r14, r3
    bne lbl_8032AD28
    lwz r4, lbl_8049D3A8
    mr r6, r14
    addi r3, r31, 0x154
    li r5, 0x80
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AD28:
    cmpwi r14, 0x0
    bne lbl_8032AD44
    addi r3, r31, 0x4c8
    opword 0x4CC63182
    bl USB_ERR
    li r15, -0x16
    b lbl_8032AE10
lbl_8032AD44:
    mr r3, r14
    li r4, 0x0
    li r5, 0x80
    bl memset
    stw r22, 0x0(r14)
    mr r4, r22
    mr r5, r23
    addi r3, r31, 0x4f0
    stw r23, 0x8(r14)
    opword 0x4CC63182
    bl USB_LOG
    li r0, 0x7
    lis r8, fn_80329D84@ha
    stw r0, 0x34(r14)
    mr r3, r15
    mr r7, r30
    mr r9, r14
    stw r29, 0x14(r14)
    addi r8, r8, fn_80329D84@l
    li r4, 0x0
    li r5, 0x6
    stw r28, 0x18(r14)
    li r6, 0x1
    stw r26, 0x1c(r14)
    stw r25, 0x20(r14)
    stw r24, 0x24(r14)
    stw r27, 0x28(r14)
    stw r30, 0x2c(r14)
    stw r21, 0x40(r14)
    sth r20, 0x44(r14)
    bl IOS_IoctlvAsync
    mr r15, r3
    addi r3, r31, 0x514
    mr r4, r15
    opword 0x4CC63182
    bl USB_LOG
    cmpwi r15, 0x0
    bge lbl_8032AF7C
    cmpwi r14, 0x0
    beq lbl_8032AE10
    lwz r3, lbl_8049D3A8
    mr r4, r14
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032AE10
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r14
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AE10:
    cmpwi r29, 0x0
    beq lbl_8032AE44
    lwz r3, lbl_8049D3A8
    mr r4, r29
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032AE44
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r29
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AE44:
    cmpwi r28, 0x0
    beq lbl_8032AE78
    lwz r3, lbl_8049D3A8
    mr r4, r28
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032AE78
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r28
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AE78:
    cmpwi r26, 0x0
    beq lbl_8032AEAC
    lwz r3, lbl_8049D3A8
    mr r4, r26
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032AEAC
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r26
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AEAC:
    cmpwi r25, 0x0
    beq lbl_8032AEE0
    lwz r3, lbl_8049D3A8
    mr r4, r25
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032AEE0
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r25
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AEE0:
    cmpwi r24, 0x0
    beq lbl_8032AF14
    lwz r3, lbl_8049D3A8
    mr r4, r24
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032AF14
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r24
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AF14:
    cmpwi r27, 0x0
    beq lbl_8032AF48
    lwz r3, lbl_8049D3A8
    mr r4, r27
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032AF48
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r27
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AF48:
    cmpwi r30, 0x0
    beq lbl_8032AF7C
    lwz r3, lbl_8049D3A8
    mr r4, r30
    bl iosFree
    cmpwi r3, 0x0
    bge lbl_8032AF7C
    lwz r4, lbl_8049D3A8
    mr r6, r3
    mr r5, r30
    addi r3, r31, 0x108
    opword 0x4CC63182
    bl USB_ERR
lbl_8032AF7C:
    addi r11, r1, 0x50
    mr r3, r15
    bl _restgpr_14
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// IUSB_WriteCtrlMsgAsync
// ----------------------------------------------------------------------------
asm void IUSB_WriteCtrlMsgAsync() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r28, r8
    mr r29, r9
    mr r23, r3
    mr r24, r4
    lwz r31, 0x48(r1)
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r30, r10
    mr r3, r29
    mr r4, r28
    bl DCFlushRange
    stw r31, 0x8(r1)
    li r0, 0x1
    mr r3, r23
    mr r4, r24
    stw r0, 0xc(r1)
    mr r5, r25
    mr r6, r26
    mr r7, r27
    mr r8, r28
    mr r9, r29
    mr r10, r30
    bl __CtrlMsgInt
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

