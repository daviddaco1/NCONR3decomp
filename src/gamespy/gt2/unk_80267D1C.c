#include "types.h"

// Translation unit: src/gamespy/gt2/unk_80267D1C.cpp
// Total functions: 25

// Small Data symbols (@sda21)
extern float lbl_8049CC20;
extern float lbl_8049CC24;

// Global data symbols (@ha/@l)
extern u8 lbl_8040A280[];

// Forward declarations
extern void GOAGetLastError();
extern void __OSCheckMutex();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_24();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo();
extern void fn_80253658();
extern void fn_80253660();
extern void fn_80253690();
extern void fn_802537B4();
extern void fn_80255E4C();
extern void fn_802565F0();
extern void fn_80256C70();
extern void fn_80267D1C();
extern void fn_80268180();
extern void fn_80268488();
extern void fn_80268C44();
extern void fn_80268C58();
extern void fn_80268E04();
extern void fn_80269254();
extern void fn_8026943C();
extern void fn_80269704();
extern void fn_80269B90();
extern void fn_80269DA8();
extern void fn_80269ED8();
extern void fn_8026A10C();
extern void fn_8026A4A0();
extern void fn_8026A584();
extern void fn_8026A64C();
extern void fn_8026A740();
extern void fn_8026A808();
extern void fn_8026A8D0();
extern void fn_8026A9FC();
extern void fn_8026AAC0();
extern void fn_8026ABB4();
extern void fn_8026AC6C();
extern void fn_8026AD28();
extern void fn_80336B20();
extern void gti2BufferShorten();
extern void gti2BufferWriteByte();
extern void gti2BufferWriteData();
extern void gti2BufferWriteUShort();
extern void gti2CheckResponse();
extern void gti2ClosedCallback();
extern void gti2ConnectAttemptCallback();
extern void gti2ConnectedCallback();
extern void gti2ConnectionClosed();
extern void gti2ConnectionSendData();
extern void gti2GetBufferFreeSpace();
extern void gti2GetChallenge();
extern void gti2GetResponse();
extern void gti2NewIncomingConnection();
extern void gti2PingCallback();
extern void gti2ReceiveFilterCallback();
extern void gti2ReceivedCallback();
extern void gti2SocketError();
extern void gti2SocketFindConnection();
extern void gti2SocketSend();
extern void gti2UnrecognizedMessageCallback();
extern void memcmp();
extern void memcpy();
extern void memset();
extern void nandCheckPathName();
extern void recvfrom();

// ----------------------------------------------------------------------------
// fn_80267D1C
// ----------------------------------------------------------------------------
asm void fn_80267D1C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r3, 0x60(r3)
    bl fn_80253658
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_80267D5C
    li r3, 0x1
    b lbl_80267E2C
lbl_80267D5C:
    li r30, 0x0
    b lbl_80267D84
lbl_80267D64:
    lwz r3, 0x60(r28)
    mr r4, r30
    bl fn_80253660
    lhz r0, 0x8(r3)
    subf r0, r29, r0
    extsh. r0, r0
    bge lbl_80267D8C
    addi r30, r30, 0x1
lbl_80267D84:
    cmpw r30, r31
    blt lbl_80267D64
lbl_80267D8C:
    cmpwi r30, 0x0
    bne lbl_80267DAC
    li r3, 0x1
    b lbl_80267E2C
    b lbl_80267DAC
lbl_80267DA0:
    lwz r3, 0x60(r28)
    mr r4, r30
    bl detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo
lbl_80267DAC:
    cmpwi r30, 0x0
    subi r30, r30, 0x1
    bne lbl_80267DA0
    lwz r3, 0x60(r28)
    bl fn_80253658
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_80267DDC
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x58(r28)
    b lbl_80267E2C
lbl_80267DDC:
    lwz r3, 0x60(r28)
    li r4, 0x0
    bl fn_80253660
    lwz r29, 0x0(r3)
    li r30, 0x0
    b lbl_80267E10
lbl_80267DF4:
    lwz r3, 0x60(r28)
    mr r4, r30
    bl fn_80253660
    lwz r0, 0x0(r3)
    addi r30, r30, 0x1
    subf r0, r29, r0
    stw r0, 0x0(r3)
lbl_80267E10:
    cmpw r30, r31
    blt lbl_80267DF4
    mr r5, r29
    addi r3, r28, 0x50
    li r4, 0x0
    bl gti2BufferShorten
    li r3, 0x1
lbl_80267E2C:
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
// nandCheckPathName
// ----------------------------------------------------------------------------
asm void nandCheckPathName() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r4
    lwz r6, 0xc(r3)
    cmpwi r6, 0x0
    beq lbl_80267F0C
    cmpwi r6, 0x5
    bge lbl_80267ED0
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_80267EB4
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_80267EF8
    li r3, 0x0
    b lbl_80267EFC
lbl_80267EB4:
    cmpwi r6, 0x4
    bne lbl_80267EC4
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_80267EC4:
    mr r3, r31
    bl gti2ConnectionClosed
    b lbl_80267EF8
lbl_80267ED0:
    cmpwi r6, 0x7
    beq lbl_80267EF8
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x2
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_80267EF8
    li r3, 0x0
    b lbl_80267EFC
lbl_80267EF8:
    li r3, 0x1
lbl_80267EFC:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_80268164
lbl_80267F0C:
    cmpwi r5, 0x40
    bge lbl_80267FA8
    cmpwi r6, 0x5
    bge lbl_80267F6C
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_80267F50
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_80267F94
    li r3, 0x0
    b lbl_80267F98
lbl_80267F50:
    cmpwi r6, 0x4
    bne lbl_80267F60
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_80267F60:
    mr r3, r31
    bl gti2ConnectionClosed
    b lbl_80267F94
lbl_80267F6C:
    cmpwi r6, 0x7
    beq lbl_80267F94
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x2
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_80267F94
    li r3, 0x0
    b lbl_80267F98
lbl_80267F94:
    li r3, 0x1
lbl_80267F98:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_80268164
lbl_80267FA8:
    mr r3, r29
    addi r4, r31, 0x68
    bl gti2CheckResponse
    cmpwi r3, 0x0
    bne lbl_8026805C
    lwz r3, 0xc(r31)
    cmpwi r3, 0x5
    bge lbl_8026801C
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_80268000
    mr r3, r31
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_80268048
    li r3, 0x0
    b lbl_8026804C
lbl_80268000:
    cmpwi r3, 0x4
    bne lbl_80268010
    li r0, 0x1
    stw r0, 0x14(r31)
lbl_80268010:
    mr r3, r31
    bl gti2ConnectionClosed
    b lbl_80268048
lbl_8026801C:
    cmpwi r3, 0x7
    beq lbl_80268048
    mr r3, r31
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x2
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_80268048
    li r3, 0x0
    b lbl_8026804C
lbl_80268048:
    li r3, 0x1
lbl_8026804C:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_80268164
lbl_8026805C:
    addi r3, r1, 0x10
    addi r4, r29, 0x20
    bl gti2GetResponse
    lwz r4, 0x8(r31)
    mr r3, r31
    lwz r29, 0x3c(r31)
    addi r6, r1, 0x8
    lwz r0, 0x44(r4)
    li r4, 0x3
    lwz r30, 0x38(r31)
    add r5, r29, r0
    addi r5, r5, 0x27
    bl fn_8026A10C
    cmpwi r3, 0x0
    bne lbl_802680A0
    li r0, 0x0
    b lbl_80268130
lbl_802680A0:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_802680B4
    li r0, 0x1
    b lbl_80268130
lbl_802680B4:
    addi r3, r31, 0x50
    addi r4, r1, 0x10
    li r5, 0x20
    bl gti2BufferWriteData
    mr r4, r30
    mr r5, r29
    addi r3, r31, 0x50
    bl gti2BufferWriteData
    lwz r3, 0x60(r31)
    bl fn_80253658
    mr r4, r3
    lwz r3, 0x60(r31)
    subi r4, r4, 0x1
    bl fn_80253660
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r31)
    mr r3, r31
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_80268118
    li r3, 0x0
    b lbl_80268124
lbl_80268118:
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x90(r31)
lbl_80268124:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_80268130:
    cmpwi r0, 0x0
    bne lbl_80268140
    li r3, 0x0
    b lbl_80268164
lbl_80268140:
    lwz r3, 0x38(r31)
    cmpwi r3, 0x0
    beq lbl_80268158
    bl fn_80256C70
    li r0, 0x0
    stw r0, 0x38(r31)
lbl_80268158:
    li r0, 0x1
    li r3, 0x1
    stw r0, 0xc(r31)
lbl_80268164:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80268180
// ----------------------------------------------------------------------------
asm void fn_80268180() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r6, 0xc(r3)
    mr r31, r3
    mr r29, r4
    mr r28, r5
    cmpwi r6, 0x3
    beq lbl_80268240
    cmpwi r6, 0x5
    bge lbl_80268204
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_802681E8
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_8026822C
    li r3, 0x0
    b lbl_80268230
lbl_802681E8:
    cmpwi r6, 0x4
    bne lbl_802681F8
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_802681F8:
    mr r3, r31
    bl gti2ConnectionClosed
    b lbl_8026822C
lbl_80268204:
    cmpwi r6, 0x7
    beq lbl_8026822C
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x2
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_8026822C
    li r3, 0x0
    b lbl_80268230
lbl_8026822C:
    li r3, 0x1
lbl_80268230:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_80268470
lbl_80268240:
    cmpwi r5, 0x20
    bge lbl_802682DC
    cmpwi r6, 0x5
    bge lbl_802682A0
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_80268284
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_802682C8
    li r3, 0x0
    b lbl_802682CC
lbl_80268284:
    cmpwi r6, 0x4
    bne lbl_80268294
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_80268294:
    mr r3, r31
    bl gti2ConnectionClosed
    b lbl_802682C8
lbl_802682A0:
    cmpwi r6, 0x7
    beq lbl_802682C8
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x2
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_802682C8
    li r3, 0x0
    b lbl_802682CC
lbl_802682C8:
    li r3, 0x1
lbl_802682CC:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_80268470
lbl_802682DC:
    mr r3, r29
    addi r4, r31, 0x68
    bl gti2CheckResponse
    cmpwi r3, 0x0
    bne lbl_80268390
    lwz r3, 0xc(r31)
    cmpwi r3, 0x5
    bge lbl_80268350
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_80268334
    mr r3, r31
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_8026837C
    li r3, 0x0
    b lbl_80268380
lbl_80268334:
    cmpwi r3, 0x4
    bne lbl_80268344
    li r0, 0x1
    stw r0, 0x14(r31)
lbl_80268344:
    mr r3, r31
    bl gti2ConnectionClosed
    b lbl_8026837C
lbl_80268350:
    cmpwi r3, 0x7
    beq lbl_8026837C
    mr r3, r31
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x2
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_8026837C
    li r3, 0x0
    b lbl_80268380
lbl_8026837C:
    li r3, 0x1
lbl_80268380:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_80268470
lbl_80268390:
    lwz r27, 0x8(r31)
    lwz r0, 0x20(r27)
    cmpwi r0, 0x0
    bne lbl_80268434
    lwz r0, 0x40(r27)
    li r30, 0x0
    lhz r29, 0x4(r31)
    cmpwi r0, 0x2
    lwz r28, 0x0(r31)
    bne lbl_802683D4
    li r0, 0x3
    addi r3, r1, 0xc
    sth r0, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r30, 0x2
lbl_802683D4:
    addi r3, r1, 0xc
    la r4, lbl_8049CC20
    add r3, r3, r30
    li r5, 0x2
    bl memcpy
    addi r30, r30, 0x2
    addi r6, r1, 0xc
    li r0, 0x68
    mr r3, r27
    stbx r0, r6, r30
    mr r4, r28
    mr r5, r29
    addi r7, r30, 0x1
    bl gti2SocketSend
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_80268424
    li r3, 0x0
    b lbl_80268470
lbl_80268424:
    mr r3, r31
    bl gti2ConnectionClosed
    li r3, 0x1
    b lbl_80268470
lbl_80268434:
    li r0, 0x4
    stw r0, 0xc(r31)
    bl fn_802565F0
    lwz r0, 0x8c(r31)
    mr r4, r31
    lwz r5, 0x0(r31)
    addi r8, r29, 0x20
    subf r7, r0, r3
    lwz r3, 0x8(r31)
    lhz r6, 0x4(r31)
    subi r9, r28, 0x20
    bl gti2ConnectAttemptCallback
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_80268470:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80268488
// ----------------------------------------------------------------------------
asm void fn_80268488() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_25
    lhz r7, 0x66(r3)
    cmpwi r4, 0x0
    mr r30, r3
    mr r31, r5
    addi r0, r7, 0x1
    mr r25, r6
    sth r0, 0x66(r3)
    bne lbl_802685D8
    lwz r4, 0xc(r3)
    cmpwi cr1, r4, 0x5
    beq cr1, lbl_80268560
    cmpwi r4, 0x6
    beq lbl_80268560
    bge cr1, lbl_80268524
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_80268508
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_8026854C
    li r0, 0x0
    b lbl_80268550
lbl_80268508:
    cmpwi r4, 0x4
    bne lbl_80268518
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_80268518:
    mr r3, r30
    bl gti2ConnectionClosed
    b lbl_8026854C
lbl_80268524:
    cmpwi r4, 0x7
    beq lbl_8026854C
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x2
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_8026854C
    li r0, 0x0
    b lbl_80268550
lbl_8026854C:
    li r0, 0x1
lbl_80268550:
    cmpwi r0, 0x0
    bne lbl_802685C4
    li r0, 0x0
    b lbl_802685C8
lbl_80268560:
    lwz r3, 0x9c(r3)
    bl fn_80253658
    cmpwi r3, 0x0
    beq lbl_802685A0
    mr r3, r30
    mr r5, r31
    mr r6, r25
    li r4, 0x0
    li r7, 0x1
    bl gti2ReceiveFilterCallback
    cmpwi r3, 0x0
    bne lbl_80268598
    li r0, 0x0
    b lbl_802685C8
lbl_80268598:
    li r0, 0x1
    b lbl_802685C8
lbl_802685A0:
    mr r3, r30
    mr r4, r31
    mr r5, r25
    li r6, 0x1
    bl gti2ReceivedCallback
    cmpwi r3, 0x0
    bne lbl_802685C4
    li r0, 0x0
    b lbl_802685C8
lbl_802685C4:
    li r0, 0x1
lbl_802685C8:
    cmpwi r0, 0x0
    bne lbl_80268C28
    li r3, 0x0
    b lbl_80268C2C
lbl_802685D8:
    cmpwi r4, 0x1
    bne lbl_80268844
    lwz r4, 0xc(r3)
    cmpwi r4, 0x2
    beq lbl_80268688
    cmpwi r4, 0x5
    bge lbl_80268644
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_80268628
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_8026866C
    li r0, 0x0
    b lbl_80268670
lbl_80268628:
    cmpwi r4, 0x4
    bne lbl_80268638
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_80268638:
    mr r3, r30
    bl gti2ConnectionClosed
    b lbl_8026866C
lbl_80268644:
    cmpwi r4, 0x7
    beq lbl_8026866C
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x2
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_8026866C
    li r0, 0x0
    b lbl_80268670
lbl_8026866C:
    li r0, 0x1
lbl_80268670:
    cmpwi r0, 0x0
    bne lbl_80268680
    li r3, 0x0
    b lbl_80268834
lbl_80268680:
    li r3, 0x1
    b lbl_80268834
lbl_80268688:
    cmpwi r6, 0x20
    bge lbl_8026872C
    cmpwi r4, 0x5
    bge lbl_802686E8
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_802686CC
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_80268710
    li r0, 0x0
    b lbl_80268714
lbl_802686CC:
    cmpwi r4, 0x4
    bne lbl_802686DC
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_802686DC:
    mr r3, r30
    bl gti2ConnectionClosed
    b lbl_80268710
lbl_802686E8:
    cmpwi r4, 0x7
    beq lbl_80268710
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x2
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_80268710
    li r0, 0x0
    b lbl_80268714
lbl_80268710:
    li r0, 0x1
lbl_80268714:
    cmpwi r0, 0x0
    bne lbl_80268724
    li r3, 0x0
    b lbl_80268834
lbl_80268724:
    li r3, 0x1
    b lbl_80268834
lbl_8026872C:
    mr r4, r31
    addi r3, r1, 0x20
    bl gti2GetResponse
    addi r3, r1, 0x40
    bl gti2GetChallenge
    addi r3, r30, 0x68
    addi r4, r1, 0x40
    bl gti2GetResponse
    lwz r5, 0x8(r30)
    mr r3, r30
    addi r6, r1, 0xc
    li r4, 0x2
    lwz r5, 0x44(r5)
    addi r5, r5, 0x47
    bl fn_8026A10C
    cmpwi r3, 0x0
    bne lbl_80268778
    li r3, 0x0
    b lbl_80268818
lbl_80268778:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_8026878C
    li r3, 0x1
    b lbl_80268818
lbl_8026878C:
    addi r3, r30, 0x50
    addi r4, r1, 0x20
    li r5, 0x20
    bl gti2BufferWriteData
    addi r3, r30, 0x50
    addi r4, r1, 0x40
    li r5, 0x20
    bl gti2BufferWriteData
    lwz r3, 0x60(r30)
    bl fn_80253658
    mr r4, r3
    lwz r3, 0x60(r30)
    subi r4, r4, 0x1
    bl fn_80253660
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r30)
    mr r3, r30
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_802687F0
    li r3, 0x0
    b lbl_802687FC
lbl_802687F0:
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x90(r30)
lbl_802687FC:
    cmpwi r3, 0x0
    bne lbl_8026880C
    li r3, 0x0
    b lbl_80268818
lbl_8026880C:
    lwz r0, 0x88(r30)
    li r3, 0x1
    stw r0, 0x8c(r30)
lbl_80268818:
    cmpwi r3, 0x0
    bne lbl_80268828
    li r3, 0x0
    b lbl_80268834
lbl_80268828:
    li r0, 0x3
    li r3, 0x1
    stw r0, 0xc(r30)
lbl_80268834:
    cmpwi r3, 0x0
    bne lbl_80268C28
    li r3, 0x0
    b lbl_80268C2C
lbl_80268844:
    cmpwi r4, 0x2
    bne lbl_80268868
    mr r4, r31
    mr r5, r25
    bl nandCheckPathName
    cmpwi r3, 0x0
    bne lbl_80268C28
    li r3, 0x0
    b lbl_80268C2C
lbl_80268868:
    cmpwi r4, 0x3
    bne lbl_8026888C
    mr r4, r31
    mr r5, r25
    bl fn_80268180
    cmpwi r3, 0x0
    bne lbl_80268C28
    li r3, 0x0
    b lbl_80268C2C
lbl_8026888C:
    cmpwi r4, 0x4
    bne lbl_80268970
    lwz r4, 0xc(r3)
    cmpwi r4, 0x1
    beq lbl_8026893C
    cmpwi r4, 0x5
    bge lbl_802688F8
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_802688DC
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_80268920
    li r0, 0x0
    b lbl_80268924
lbl_802688DC:
    cmpwi r4, 0x4
    bne lbl_802688EC
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_802688EC:
    mr r3, r30
    bl gti2ConnectionClosed
    b lbl_80268920
lbl_802688F8:
    cmpwi r4, 0x7
    beq lbl_80268920
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x2
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_80268920
    li r0, 0x0
    b lbl_80268924
lbl_80268920:
    li r0, 0x1
lbl_80268924:
    cmpwi r0, 0x0
    bne lbl_80268934
    li r0, 0x0
    b lbl_80268960
lbl_80268934:
    li r0, 0x1
    b lbl_80268960
lbl_8026893C:
    li r0, 0x5
    li r4, 0x0
    stw r0, 0xc(r3)
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_80268960:
    cmpwi r0, 0x0
    bne lbl_80268C28
    li r3, 0x0
    b lbl_80268C2C
lbl_80268970:
    cmpwi r4, 0x5
    bne lbl_80268ADC
    lwz r4, 0xc(r3)
    cmpwi r4, 0x1
    beq lbl_80268A20
    cmpwi r4, 0x5
    bge lbl_802689DC
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_802689C0
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_80268A04
    li r0, 0x0
    b lbl_80268A08
lbl_802689C0:
    cmpwi r4, 0x4
    bne lbl_802689D0
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_802689D0:
    mr r3, r30
    bl gti2ConnectionClosed
    b lbl_80268A04
lbl_802689DC:
    cmpwi r4, 0x7
    beq lbl_80268A04
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x2
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_80268A04
    li r0, 0x0
    b lbl_80268A08
lbl_80268A04:
    li r0, 0x1
lbl_80268A08:
    cmpwi r0, 0x0
    bne lbl_80268A18
    li r0, 0x0
    b lbl_80268ACC
lbl_80268A18:
    li r0, 0x1
    b lbl_80268ACC
lbl_80268A20:
    bl gti2ConnectionClosed
    lwz r29, 0x8(r30)
    li r26, 0x0
    lhz r27, 0x4(r30)
    lwz r0, 0x40(r29)
    lwz r28, 0x0(r30)
    cmpwi r0, 0x2
    bne lbl_80268A5C
    li r0, 0x3
    addi r3, r1, 0x18
    sth r0, 0xa(r1)
    addi r4, r1, 0xa
    li r5, 0x2
    bl memcpy
    li r26, 0x2
lbl_80268A5C:
    addi r3, r1, 0x18
    la r4, lbl_8049CC20
    add r3, r3, r26
    li r5, 0x2
    bl memcpy
    addi r26, r26, 0x2
    addi r6, r1, 0x18
    li r0, 0x68
    mr r3, r29
    stbx r0, r6, r26
    mr r4, r28
    mr r5, r27
    addi r7, r26, 0x1
    bl gti2SocketSend
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_80268AAC
    li r0, 0x0
    b lbl_80268ACC
lbl_80268AAC:
    mr r3, r30
    mr r5, r31
    mr r6, r25
    li r4, 0x2
    bl gti2ConnectedCallback
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_80268ACC:
    cmpwi r0, 0x0
    bne lbl_80268C28
    li r3, 0x0
    b lbl_80268C2C
lbl_80268ADC:
    cmpwi r4, 0x6
    bne lbl_80268C28
    lwz r26, 0x8(r3)
    li r29, 0x0
    lhz r28, 0x4(r3)
    lwz r0, 0x40(r26)
    lwz r27, 0x0(r3)
    cmpwi r0, 0x2
    bne lbl_80268B1C
    li r0, 0x3
    addi r3, r1, 0x10
    sth r0, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r29, 0x2
lbl_80268B1C:
    addi r3, r1, 0x10
    la r4, lbl_8049CC20
    add r3, r3, r29
    li r5, 0x2
    bl memcpy
    addi r29, r29, 0x2
    addi r6, r1, 0x10
    li r0, 0x68
    mr r3, r26
    stbx r0, r6, r29
    mr r4, r27
    mr r5, r28
    addi r7, r29, 0x1
    bl gti2SocketSend
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_80268B6C
    li r0, 0x0
    b lbl_80268C18
lbl_80268B6C:
    lwz r3, 0xc(r30)
    subi r0, r3, 0x6
    cmpwi r3, 0x5
    cntlzw r0, r0
    srwi r26, r0, 5
    bge lbl_80268BD8
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_80268BBC
    mr r3, r30
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x2
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_80268C08
    li r3, 0x0
    b lbl_80268C0C
lbl_80268BBC:
    cmpwi r3, 0x4
    bne lbl_80268BCC
    li r0, 0x1
    stw r0, 0x14(r30)
lbl_80268BCC:
    mr r3, r30
    bl gti2ConnectionClosed
    b lbl_80268C08
lbl_80268BD8:
    cmpwi r3, 0x7
    beq lbl_80268C08
    mr r3, r30
    bl gti2ConnectionClosed
    cntlzw r0, r26
    mr r3, r30
    srwi r4, r0, 5
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_80268C08
    li r3, 0x0
    b lbl_80268C0C
lbl_80268C08:
    li r3, 0x1
lbl_80268C0C:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_80268C18:
    cmpwi r0, 0x0
    bne lbl_80268C28
    li r3, 0x0
    b lbl_80268C2C
lbl_80268C28:
    li r3, 0x1
lbl_80268C2C:
    addi r11, r1, 0x80
    bl _restgpr_25
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_80268C44
// ----------------------------------------------------------------------------
asm void fn_80268C44() {
    nofralloc
    lhz r4, 0xc(r4)
    lhz r0, 0xc(r3)
    subf r0, r4, r0
    extsh r3, r0
    blr
}

// ----------------------------------------------------------------------------
// fn_80268C58
// ----------------------------------------------------------------------------
asm void fn_80268C58() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    mr r30, r3
    lwz r3, 0x5c(r3)
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r31, r8
    bl fn_80253658
    mr r29, r3
    li r28, 0x0
    b lbl_80268CD0
lbl_80268C98:
    lwz r3, 0x5c(r30)
    mr r4, r28
    bl fn_80253660
    lhz r0, 0xc(r3)
    cmplw r0, r25
    bne lbl_80268CC0
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x0(r31)
    b lbl_80268DEC
lbl_80268CC0:
    subf r0, r25, r0
    extsh. r0, r0
    bgt lbl_80268CD8
    addi r28, r28, 0x1
lbl_80268CD0:
    cmpw r28, r29
    blt lbl_80268C98
lbl_80268CD8:
    addi r3, r30, 0x44
    bl gti2GetBufferFreeSpace
    cmpw r3, r27
    bge lbl_80268CF8
    li r0, 0x1
    li r3, 0x1
    stw r0, 0x0(r31)
    b lbl_80268DEC
lbl_80268CF8:
    lwz r0, 0x4c(r30)
    lis r5, fn_80268C44@ha
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    addi r5, r5, fn_80268C44@l
    stw r27, 0xc(r1)
    stw r24, 0x10(r1)
    sth r25, 0x14(r1)
    lwz r3, 0x5c(r30)
    bl fn_802537B4
    lwz r3, 0x5c(r30)
    bl fn_80253658
    addi r0, r29, 0x1
    cmpw r0, r3
    beq lbl_80268D44
    li r0, 0x1
    li r3, 0x1
    stw r0, 0x0(r31)
    b lbl_80268DEC
lbl_80268D44:
    mr r4, r26
    mr r5, r27
    addi r3, r30, 0x44
    bl gti2BufferWriteData
    cmpwi r29, 0x0
    bne lbl_80268D80
    subi r0, r25, 0x1
    lhz r4, 0x66(r30)
    mr r3, r30
    clrlwi r5, r0, 16
    bl fn_8026AAC0
    cmpwi r3, 0x0
    bne lbl_80268DE0
    li r3, 0x0
    b lbl_80268DEC
lbl_80268D80:
    lwz r3, 0x5c(r30)
    mr r4, r29
    bl fn_80253660
    lhz r0, 0xc(r3)
    cmplw r0, r25
    bne lbl_80268DE0
    lwz r3, 0x5c(r30)
    subi r4, r29, 0x1
    bl fn_80253660
    lhz r3, 0xc(r3)
    subf r0, r3, r25
    clrlwi r0, r0, 16
    cmplwi r0, 0x1
    ble lbl_80268DE0
    addi r4, r3, 0x1
    subi r0, r25, 0x1
    mr r3, r30
    clrlwi r4, r4, 16
    clrlwi r5, r0, 16
    bl fn_8026AAC0
    cmpwi r3, 0x0
    bne lbl_80268DE0
    li r3, 0x0
    b lbl_80268DEC
lbl_80268DE0:
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x0(r31)
lbl_80268DEC:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80268E04
// ----------------------------------------------------------------------------
asm void fn_80268E04() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r8, 0x8(r3)
    mr r30, r3
    mr r31, r4
    lwz r7, 0x44(r8)
    addi r10, r7, 0x7
    cmpw r6, r10
    bge lbl_80268ECC
    lwz r4, 0xc(r3)
    cmpwi r4, 0x5
    bge lbl_80268E90
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_80268E74
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_80268EB8
    li r3, 0x0
    b lbl_80268EBC
lbl_80268E74:
    cmpwi r4, 0x4
    bne lbl_80268E84
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_80268E84:
    mr r3, r30
    bl gti2ConnectionClosed
    b lbl_80268EB8
lbl_80268E90:
    cmpwi r4, 0x7
    beq lbl_80268EB8
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x2
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_80268EB8
    li r3, 0x0
    b lbl_80268EBC
lbl_80268EB8:
    li r3, 0x1
lbl_80268EBC:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_8026923C
lbl_80268ECC:
    lwz r0, 0x40(r8)
    add r9, r5, r7
    lbz r7, 0x3(r9)
    cmpwi r0, 0x2
    lbz r0, 0x5(r9)
    lbz r29, 0x4(r9)
    rlwimi r29, r7, 8, 16, 23
    lbz r8, 0x6(r9)
    rlwimi r8, r0, 8, 16, 23
    bne lbl_80268F30
    cmpwi r4, 0x0
    bne lbl_80268F30
    lbz r0, 0x0(r5)
    stb r0, 0x5(r9)
    lwz r4, 0x8(r3)
    lbz r7, 0x1(r5)
    lwz r0, 0x44(r4)
    add r4, r0, r5
    stb r7, 0x6(r4)
    lwz r3, 0x8(r3)
    lwz r0, 0x44(r3)
    subf r0, r0, r10
    add r27, r5, r0
    subf r26, r0, r6
    b lbl_80268F38
lbl_80268F30:
    add r27, r5, r10
    subf r26, r10, r6
lbl_80268F38:
    mr r3, r30
    clrlwi r4, r8, 16
    bl fn_80267D1C
    cmpwi r3, 0x0
    bne lbl_80268F54
    li r3, 0x0
    b lbl_8026923C
lbl_80268F54:
    lhz r0, 0x66(r30)
    clrlwi r5, r29, 16
    cmplw r5, r0
    bne lbl_802690AC
    lwz r0, 0x90(r30)
    cmpwi r0, 0x0
    bne lbl_80268F80
    li r0, 0x1
    stw r0, 0x90(r30)
    bl fn_802565F0
    stw r3, 0x94(r30)
lbl_80268F80:
    mr r3, r30
    mr r4, r31
    mr r5, r27
    mr r6, r26
    bl fn_80268488
    cmpwi r3, 0x0
    bne lbl_80268FA4
    li r3, 0x0
    b lbl_8026923C
lbl_80268FA4:
    lwz r3, 0x5c(r30)
    bl fn_80253658
    subi r26, r3, 0x1
    b lbl_80269088
lbl_80268FB4:
    lwz r3, 0x5c(r30)
    mr r4, r26
    bl fn_80253660
    lhz r4, 0xc(r3)
    mr r31, r3
    lhz r0, 0x66(r30)
    cmplw r4, r0
    bne lbl_80269084
    lwz r5, 0x44(r30)
    mr r3, r30
    lwz r0, 0x0(r31)
    lwz r4, 0x8(r31)
    lwz r6, 0x4(r31)
    add r5, r5, r0
    bl fn_80268488
    cmpwi r3, 0x0
    bne lbl_80269000
    li r0, 0x0
    b lbl_80269094
lbl_80269000:
    lwz r29, 0x0(r31)
    mr r4, r26
    lwz r28, 0x4(r31)
    li r27, 0x0
    lwz r3, 0x5c(r30)
    bl detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo
    lwz r3, 0x5c(r30)
    bl fn_80253658
    mr r31, r3
    li r26, 0x0
    b lbl_80269068
lbl_8026902C:
    lwz r3, 0x5c(r30)
    mr r4, r26
    bl fn_80253660
    lwz r0, 0x0(r3)
    cmpw r0, r29
    ble lbl_80269064
    subf r4, r28, r0
    stw r4, 0x0(r3)
    lwz r0, 0x4(r3)
    add r0, r4, r0
    cmpw r27, r0
    ble lbl_80269060
    mr r0, r27
lbl_80269060:
    mr r27, r0
lbl_80269064:
    addi r26, r26, 0x1
lbl_80269068:
    cmpw r26, r31
    blt lbl_8026902C
    mr r4, r29
    mr r5, r28
    addi r3, r30, 0x44
    bl gti2BufferShorten
    b lbl_80268FA4
lbl_80269084:
    subi r26, r26, 0x1
lbl_80269088:
    cmpwi r26, 0x0
    bge lbl_80268FB4
    li r0, 0x1
lbl_80269094:
    cmpwi r0, 0x0
    bne lbl_802690A4
    li r3, 0x0
    b lbl_8026923C
lbl_802690A4:
    li r3, 0x1
    b lbl_8026923C
lbl_802690AC:
    subf r0, r0, r29
    extsh. r0, r0
    bge lbl_802690DC
    lwz r0, 0x90(r30)
    cmpwi r0, 0x0
    bne lbl_802690D4
    li r0, 0x1
    stw r0, 0x90(r30)
    bl fn_802565F0
    stw r3, 0x94(r30)
lbl_802690D4:
    li r3, 0x1
    b lbl_8026923C
lbl_802690DC:
    mr r3, r30
    mr r4, r31
    mr r6, r27
    mr r7, r26
    addi r8, r1, 0xc
    bl fn_80268C58
    cmpwi r3, 0x0
    bne lbl_80269104
    li r3, 0x0
    b lbl_8026923C
lbl_80269104:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_80269238
    lwz r26, 0x8(r30)
    li r29, 0x0
    lhz r28, 0x4(r30)
    lwz r0, 0x40(r26)
    lwz r27, 0x0(r30)
    cmpwi r0, 0x2
    bne lbl_80269148
    li r0, 0x3
    addi r3, r1, 0x10
    sth r0, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r29, 0x2
lbl_80269148:
    addi r3, r1, 0x10
    la r4, lbl_8049CC20
    add r3, r3, r29
    li r5, 0x2
    bl memcpy
    addi r29, r29, 0x2
    addi r6, r1, 0x10
    li r0, 0x68
    mr r3, r26
    stbx r0, r6, r29
    mr r4, r27
    mr r5, r28
    addi r7, r29, 0x1
    bl gti2SocketSend
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_80269198
    li r0, 0x0
    b lbl_80269228
lbl_80269198:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x5
    bge lbl_802691F8
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_802691DC
    mr r3, r30
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_80269224
    li r0, 0x0
    b lbl_80269228
lbl_802691DC:
    cmpwi r3, 0x4
    bne lbl_802691EC
    li r0, 0x1
    stw r0, 0x14(r30)
lbl_802691EC:
    mr r3, r30
    bl gti2ConnectionClosed
    b lbl_80269224
lbl_802691F8:
    cmpwi r3, 0x7
    beq lbl_80269224
    mr r3, r30
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x4
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_80269224
    li r0, 0x0
    b lbl_80269228
lbl_80269224:
    li r0, 0x1
lbl_80269228:
    cmpwi r0, 0x0
    bne lbl_80269238
    li r3, 0x0
    b lbl_8026923C
lbl_80269238:
    li r3, 0x1
lbl_8026923C:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80269254
// ----------------------------------------------------------------------------
asm void fn_80269254() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r5, 0x2
    lbz r0, 0x0(r4)
    lbz r29, 0x1(r4)
    mr r26, r3
    rlwimi r29, r0, 8, 16, 23
    bne lbl_80269288
    mr r28, r29
    b lbl_80269338
lbl_80269288:
    cmpwi r5, 0x4
    bne lbl_802692A0
    lbz r0, 0x2(r4)
    lbz r28, 0x3(r4)
    rlwimi r28, r0, 8, 16, 23
    b lbl_80269338
lbl_802692A0:
    lwz r4, 0xc(r3)
    cmpwi r4, 0x5
    bge lbl_802692FC
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_802692E0
    bl gti2ConnectionClosed
    mr r3, r26
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_80269324
    li r3, 0x0
    b lbl_80269328
lbl_802692E0:
    cmpwi r4, 0x4
    bne lbl_802692F0
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_802692F0:
    mr r3, r26
    bl gti2ConnectionClosed
    b lbl_80269324
lbl_802692FC:
    cmpwi r4, 0x7
    beq lbl_80269324
    bl gti2ConnectionClosed
    mr r3, r26
    li r4, 0x2
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_80269324
    li r3, 0x0
    b lbl_80269328
lbl_80269324:
    li r3, 0x1
lbl_80269328:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_80269424
lbl_80269338:
    lwz r3, 0x60(r3)
    bl fn_80253658
    mr r30, r3
    li r27, 0x0
    b lbl_80269418
lbl_8026934C:
    lwz r3, 0x60(r26)
    mr r4, r27
    bl fn_80253660
    lhz r4, 0x8(r3)
    mr r31, r3
    subf r0, r29, r4
    extsh. r0, r0
    blt lbl_80269414
    subf r0, r28, r4
    extsh. r0, r0
    bgt lbl_80269414
    lwz r4, 0x8(r26)
    lwz r0, 0x0(r3)
    mr r3, r26
    lwz r4, 0x44(r4)
    lhz r5, 0x66(r26)
    add r4, r0, r4
    lwz r6, 0x50(r26)
    addi r4, r4, 0x5
    extrwi r0, r5, 8, 16
    stbx r0, r6, r4
    addi r4, r4, 0x1
    stbx r5, r6, r4
    lwz r4, 0x50(r26)
    lwz r0, 0x0(r31)
    lwz r5, 0x4(r31)
    add r4, r4, r0
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_802693CC
    li r0, 0x0
    b lbl_80269404
lbl_802693CC:
    lwz r0, 0x88(r26)
    stw r0, 0xc(r31)
    lwz r3, 0x8(r26)
    lwz r4, 0x50(r26)
    lwz r0, 0x0(r31)
    lwz r3, 0x44(r3)
    add r0, r4, r0
    add r3, r3, r0
    lbz r0, 0x2(r3)
    cmpwi r0, 0x2
    bne lbl_80269400
    lwz r0, 0x88(r26)
    stw r0, 0x8c(r26)
lbl_80269400:
    li r0, 0x1
lbl_80269404:
    cmpwi r0, 0x0
    bne lbl_80269414
    li r3, 0x0
    b lbl_80269424
lbl_80269414:
    addi r27, r27, 0x1
lbl_80269418:
    cmpw r27, r30
    blt lbl_8026934C
    li r3, 0x1
lbl_80269424:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8026943C
// ----------------------------------------------------------------------------
asm void fn_8026943C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x64
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r7, 0x8(r3)
    lwz r7, 0x44(r7)
    addi r0, r7, 0x3
    add r30, r5, r0
    subf r7, r0, r6
    bne lbl_80269544
    cmpwi r7, 0x2
    beq lbl_80269518
    lwz r4, 0xc(r3)
    cmpwi r4, 0x5
    bge lbl_802694D4
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_802694B8
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x7
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_802694FC
    li r0, 0x0
    b lbl_80269500
lbl_802694B8:
    cmpwi r4, 0x4
    bne lbl_802694C8
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_802694C8:
    mr r3, r31
    bl gti2ConnectionClosed
    b lbl_802694FC
lbl_802694D4:
    cmpwi r4, 0x7
    beq lbl_802694FC
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x2
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_802694FC
    li r0, 0x0
    b lbl_80269500
lbl_802694FC:
    li r0, 0x1
lbl_80269500:
    cmpwi r0, 0x0
    bne lbl_80269510
    li r0, 0x0
    b lbl_80269534
lbl_80269510:
    li r0, 0x1
    b lbl_80269534
lbl_80269518:
    lbz r0, 0x0(r30)
    lbz r4, 0x1(r30)
    rlwimi r4, r0, 8, 16, 23
    bl fn_80267D1C
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_80269534:
    cmpwi r0, 0x0
    bne lbl_802696E8
    li r3, 0x0
    b lbl_802696EC
lbl_80269544:
    cmpwi r4, 0x65
    bne lbl_80269568
    mr r4, r30
    mr r5, r7
    bl fn_80269254
    cmpwi r3, 0x0
    bne lbl_802696E8
    li r3, 0x0
    b lbl_802696EC
lbl_80269568:
    cmpwi r4, 0x66
    bne lbl_80269594
    li r0, 0x67
    mr r4, r5
    stb r0, 0x2(r5)
    mr r5, r6
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_802696E8
    li r3, 0x0
    b lbl_802696EC
lbl_80269594:
    cmpwi r4, 0x67
    bne lbl_80269620
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    bne lbl_802695B0
    li r0, 0x1
    b lbl_80269610
lbl_802695B0:
    cmplwi r7, 0x8
    beq lbl_802695C0
    li r0, 0x1
    b lbl_80269610
lbl_802695C0:
    mr r3, r30
    la r4, lbl_8049CC24
    li r5, 0x4
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_802695E0
    li r0, 0x1
    b lbl_80269610
lbl_802695E0:
    addi r3, r1, 0x8
    addi r4, r30, 0x4
    li r5, 0x4
    bl memcpy
    bl fn_802565F0
    lwz r0, 0x8(r1)
    subf r4, r0, r3
    mr r3, r31
    bl gti2PingCallback
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_80269610:
    cmpwi r0, 0x0
    bne lbl_802696E8
    li r3, 0x0
    b lbl_802696EC
lbl_80269620:
    cmpwi r4, 0x68
    bne lbl_802696E8
    lwz r4, 0xc(r3)
    cmpwi cr1, r4, 0x7
    bne cr1, lbl_8026963C
    li r0, 0x1
    b lbl_802696D8
lbl_8026963C:
    subi r0, r4, 0x6
    cmpwi r4, 0x5
    cntlzw r0, r0
    srwi r30, r0, 5
    bge lbl_802696A0
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_80269684
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x2
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_802696C8
    li r3, 0x0
    b lbl_802696CC
lbl_80269684:
    cmpwi r4, 0x4
    bne lbl_80269694
    li r0, 0x1
    stw r0, 0x14(r3)
lbl_80269694:
    mr r3, r31
    bl gti2ConnectionClosed
    b lbl_802696C8
lbl_802696A0:
    beq cr1, lbl_802696C8
    bl gti2ConnectionClosed
    cntlzw r0, r30
    mr r3, r31
    srwi r4, r0, 5
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_802696C8
    li r3, 0x0
    b lbl_802696CC
lbl_802696C8:
    li r3, 0x1
lbl_802696CC:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_802696D8:
    cmpwi r0, 0x0
    bne lbl_802696E8
    li r3, 0x0
    b lbl_802696EC
lbl_802696E8:
    li r3, 0x1
lbl_802696EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80269704
// ----------------------------------------------------------------------------
asm void fn_80269704() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_24
    lwz r0, 0x44(r3)
    mr r29, r6
    mr r30, r7
    mr r26, r3
    mr r27, r4
    add r31, r4, r0
    mr r28, r5
    subf r24, r0, r5
    mr r4, r29
    mr r5, r30
    bl gti2SocketFindConnection
    stw r3, 0x14(r1)
    mr r4, r3
    lwz r0, 0x2c(r26)
    cmpwi r0, 0x0
    beq lbl_80269788
    mr r3, r26
    mr r5, r29
    mr r6, r30
    mr r8, r27
    mr r9, r28
    li r7, 0x0
    li r10, 0x0
    bl __OSCheckMutex
    cmpwi r3, 0x0
    bne lbl_80269788
    li r3, 0x0
    b lbl_80269B78
lbl_80269788:
    cmpwi r24, 0x2
    li r25, 0x0
    ble lbl_802697B0
    mr r3, r31
    la r4, lbl_8049CC20
    li r5, 0x2
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_802697B0
    li r25, 0x1
lbl_802697B0:
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    bne lbl_80269964
    mr r3, r26
    mr r4, r29
    mr r5, r30
    mr r6, r27
    mr r7, r28
    addi r8, r1, 0x10
    bl gti2UnrecognizedMessageCallback
    cmpwi r3, 0x0
    bne lbl_802697E8
    li r3, 0x0
    b lbl_80269B78
lbl_802697E8:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_802697FC
    li r3, 0x1
    b lbl_80269B78
lbl_802697FC:
    cmpwi r25, 0x0
    beq lbl_80269810
    lbz r0, 0x2(r31)
    cmplwi r0, 0x1
    beq lbl_802698A8
lbl_80269810:
    cmpwi r25, 0x0
    beq lbl_80269824
    lbz r0, 0x2(r31)
    cmplwi r0, 0x68
    beq lbl_802698A0
lbl_80269824:
    lwz r0, 0x40(r26)
    li r27, 0x0
    cmpwi r0, 0x2
    bne lbl_80269850
    li r0, 0x3
    addi r3, r1, 0x28
    sth r0, 0xc(r1)
    addi r4, r1, 0xc
    li r5, 0x2
    bl memcpy
    li r27, 0x2
lbl_80269850:
    addi r3, r1, 0x28
    la r4, lbl_8049CC20
    add r3, r3, r27
    li r5, 0x2
    bl memcpy
    addi r27, r27, 0x2
    addi r6, r1, 0x28
    li r0, 0x68
    mr r3, r26
    stbx r0, r6, r27
    mr r4, r29
    mr r5, r30
    addi r7, r27, 0x1
    bl gti2SocketSend
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_802698A0
    li r3, 0x0
    b lbl_80269B78
lbl_802698A0:
    li r3, 0x1
    b lbl_80269B78
lbl_802698A8:
    lwz r0, 0x20(r26)
    cmpwi r0, 0x0
    bne lbl_802698BC
    li r3, 0x1
    b lbl_80269B78
lbl_802698BC:
    mr r3, r26
    mr r5, r29
    mr r6, r30
    addi r4, r1, 0x14
    bl gti2NewIncomingConnection
    cmpwi r3, 0x0
    beq lbl_80269964
    cmpwi r3, 0x5
    beq lbl_8026995C
    lwz r0, 0x40(r26)
    li r27, 0x0
    cmpwi r0, 0x2
    bne lbl_8026990C
    li r0, 0x3
    addi r3, r1, 0x20
    sth r0, 0xa(r1)
    addi r4, r1, 0xa
    li r5, 0x2
    bl memcpy
    li r27, 0x2
lbl_8026990C:
    addi r3, r1, 0x20
    la r4, lbl_8049CC20
    add r3, r3, r27
    li r5, 0x2
    bl memcpy
    addi r27, r27, 0x2
    addi r6, r1, 0x20
    li r0, 0x68
    mr r3, r26
    stbx r0, r6, r27
    mr r4, r29
    mr r5, r30
    addi r7, r27, 0x1
    bl gti2SocketSend
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_8026995C
    li r3, 0x0
    b lbl_80269B78
lbl_8026995C:
    li r3, 0x1
    b lbl_80269B78
lbl_80269964:
    lwz r3, 0x14(r1)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x7
    bne lbl_80269A1C
    cmpwi r25, 0x0
    beq lbl_80269988
    lbz r0, 0x2(r31)
    cmplwi r0, 0x68
    beq lbl_80269A14
lbl_80269988:
    lwz r3, 0x14(r1)
    li r26, 0x0
    lwz r29, 0x8(r3)
    lhz r27, 0x4(r3)
    lwz r0, 0x40(r29)
    lwz r28, 0x0(r3)
    cmpwi r0, 0x2
    bne lbl_802699C4
    li r0, 0x3
    addi r3, r1, 0x18
    sth r0, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r26, 0x2
lbl_802699C4:
    addi r3, r1, 0x18
    la r4, lbl_8049CC20
    add r3, r3, r26
    li r5, 0x2
    bl memcpy
    addi r26, r26, 0x2
    addi r6, r1, 0x18
    li r0, 0x68
    mr r3, r29
    stbx r0, r6, r26
    mr r4, r28
    mr r5, r27
    addi r7, r26, 0x1
    bl gti2SocketSend
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_80269A14
    li r3, 0x0
    b lbl_80269B78
lbl_80269A14:
    li r3, 0x1
    b lbl_80269B78
lbl_80269A1C:
    cmpwi r25, 0x0
    beq lbl_80269A60
    cmpwi r24, 0x4
    blt lbl_80269A60
    addi r3, r31, 0x2
    la r4, lbl_8049CC20
    li r5, 0x2
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_80269A60
    lbz r3, 0x1(r27)
    li r25, 0x0
    lbz r0, 0x0(r27)
    addi r31, r31, 0x2
    stb r3, 0x3(r27)
    subi r28, r28, 0x2
    stbu r0, 0x2(r27)
lbl_80269A60:
    cmpwi r25, 0x0
    bne lbl_80269B30
    lwz r31, 0x14(r1)
    lwz r0, 0xc(r31)
    cmpwi r0, 0x5
    bge lbl_80269AA4
    mr r3, r26
    mr r4, r29
    mr r5, r30
    mr r6, r27
    mr r7, r28
    addi r8, r1, 0x10
    bl gti2UnrecognizedMessageCallback
    cmpwi r3, 0x0
    bne lbl_80269B28
    li r3, 0x0
    b lbl_80269B78
lbl_80269AA4:
    beq lbl_80269AB8
    cmpwi r0, 0x6
    beq lbl_80269AB8
    li r0, 0x1
    b lbl_80269B18
lbl_80269AB8:
    lwz r3, 0x9c(r31)
    bl fn_80253658
    cmpwi r3, 0x0
    beq lbl_80269AF8
    mr r3, r31
    mr r5, r27
    mr r6, r28
    li r4, 0x0
    li r7, 0x0
    bl gti2ReceiveFilterCallback
    cmpwi r3, 0x0
    bne lbl_80269AF0
    li r0, 0x0
    b lbl_80269B18
lbl_80269AF0:
    li r0, 0x1
    b lbl_80269B18
lbl_80269AF8:
    mr r3, r31
    mr r4, r27
    mr r5, r28
    li r6, 0x0
    bl gti2ReceivedCallback
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_80269B18:
    cmpwi r0, 0x0
    bne lbl_80269B28
    li r3, 0x0
    b lbl_80269B78
lbl_80269B28:
    li r3, 0x1
    b lbl_80269B78
lbl_80269B30:
    lbz r4, 0x2(r31)
    cmpwi r4, 0x8
    bge lbl_80269B5C
    lwz r3, 0x14(r1)
    mr r5, r27
    mr r6, r28
    bl fn_80268E04
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_80269B78
lbl_80269B5C:
    lwz r3, 0x14(r1)
    mr r5, r27
    mr r6, r28
    bl fn_8026943C
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_80269B78:
    addi r11, r1, 0x50
    bl _restgpr_24
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_80269B90
// ----------------------------------------------------------------------------
asm void fn_80269B90() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl gti2SocketFindConnection
    lwz r0, 0x2c(r28)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_80269C00
    mr r3, r28
    mr r4, r31
    mr r5, r29
    mr r6, r30
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl __OSCheckMutex
    cmpwi r3, 0x0
    bne lbl_80269C00
    li r3, 0x0
    b lbl_80269D88
lbl_80269C00:
    cmpwi r31, 0x0
    bne lbl_80269C10
    li r3, 0x1
    b lbl_80269D88
lbl_80269C10:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x0
    bne lbl_80269CE8
    lwz r0, 0x20(r31)
    cmpwi r0, 0x0
    beq lbl_80269C40
    bl fn_802565F0
    lwz r4, 0x1c(r31)
    lwz r0, 0x20(r31)
    subf r3, r4, r3
    cmplw r3, r0
    bge lbl_80269C48
lbl_80269C40:
    li r3, 0x1
    b lbl_80269D88
lbl_80269C48:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x5
    bge lbl_80269CA8
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_80269C8C
    mr r3, r31
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x6
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_80269CD4
    li r0, 0x0
    b lbl_80269CD8
lbl_80269C8C:
    cmpwi r3, 0x4
    bne lbl_80269C9C
    li r0, 0x1
    stw r0, 0x14(r31)
lbl_80269C9C:
    mr r3, r31
    bl gti2ConnectionClosed
    b lbl_80269CD4
lbl_80269CA8:
    cmpwi r3, 0x7
    beq lbl_80269CD4
    mr r3, r31
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x1
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_80269CD4
    li r0, 0x0
    b lbl_80269CD8
lbl_80269CD4:
    li r0, 0x1
lbl_80269CD8:
    cmpwi r0, 0x0
    bne lbl_80269D84
    li r3, 0x0
    b lbl_80269D88
lbl_80269CE8:
    cmpwi r3, 0x5
    bge lbl_80269D44
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_80269D28
    mr r3, r31
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x2
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_80269D70
    li r0, 0x0
    b lbl_80269D74
lbl_80269D28:
    cmpwi r3, 0x4
    bne lbl_80269D38
    li r0, 0x1
    stw r0, 0x14(r31)
lbl_80269D38:
    mr r3, r31
    bl gti2ConnectionClosed
    b lbl_80269D70
lbl_80269D44:
    cmpwi r3, 0x7
    beq lbl_80269D70
    mr r3, r31
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x1
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_80269D70
    li r0, 0x0
    b lbl_80269D74
lbl_80269D70:
    li r0, 0x1
lbl_80269D74:
    cmpwi r0, 0x0
    bne lbl_80269D84
    li r3, 0x0
    b lbl_80269D88
lbl_80269D84:
    li r3, 0x1
lbl_80269D88:
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
// fn_80269DA8
// ----------------------------------------------------------------------------
asm void fn_80269DA8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r5
    mr r27, r3
    mr r28, r4
    mr r30, r6
    bl gti2SocketFindConnection
    lwz r0, 0x2c(r27)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_80269E14
    mr r3, r27
    mr r4, r31
    mr r5, r28
    mr r6, r29
    mr r10, r30
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    bl __OSCheckMutex
    cmpwi r3, 0x0
    bne lbl_80269E14
    li r3, 0x0
    b lbl_80269EC0
lbl_80269E14:
    cmpwi r31, 0x0
    bne lbl_80269E24
    li r3, 0x1
    b lbl_80269EC0
lbl_80269E24:
    lwz r3, 0xc(r31)
    cmpwi r3, 0x5
    bge lbl_80269E84
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_80269E68
    mr r3, r31
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x6
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_80269EB0
    li r3, 0x0
    b lbl_80269EB4
lbl_80269E68:
    cmpwi r3, 0x4
    bne lbl_80269E78
    li r0, 0x1
    stw r0, 0x14(r31)
lbl_80269E78:
    mr r3, r31
    bl gti2ConnectionClosed
    b lbl_80269EB0
lbl_80269E84:
    cmpwi r3, 0x7
    beq lbl_80269EB0
    mr r3, r31
    bl gti2ConnectionClosed
    mr r3, r31
    li r4, 0x1
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_80269EB0
    li r3, 0x0
    b lbl_80269EB4
lbl_80269EB0:
    li r3, 0x1
lbl_80269EB4:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_80269EC0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80269ED8
// ----------------------------------------------------------------------------
asm void fn_80269ED8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    mr r25, r3
    li r31, 0x1
    li r28, 0x8
    lis r29, lbl_8040A280@ha
    b lbl_8026A0E0
lbl_80269F00:
    stw r28, 0x8(r1)
    addi r4, r29, lbl_8040A280@l
    addi r7, r1, 0x10
    addi r8, r1, 0x8
    lwz r3, 0x0(r25)
    li r5, 0x1000
    li r6, 0x0
    bl recvfrom
    cmpwi r3, -0x1
    mr r26, r3
    bne lbl_8026A0AC
    lwz r3, 0x0(r25)
    bl GOAGetLastError
    cmpwi r3, -0xf
    bne lbl_80269F68
    lhz r3, 0x12(r1)
    bl fn_80336B20
    mr r0, r3
    lwz r4, 0x14(r1)
    mr r3, r25
    clrlwi r5, r0, 16
    bl fn_80269B90
    cmpwi r3, 0x0
    bne lbl_8026A0E0
    li r3, 0x0
    b lbl_8026A0F4
lbl_80269F68:
    cmpwi r3, -0x17
    bne lbl_8026A094
    lhz r3, 0x12(r1)
    bl fn_80336B20
    lwz r27, 0x14(r1)
    mr r30, r3
    mr r3, r25
    mr r4, r27
    clrlwi r5, r30, 16
    bl gti2SocketFindConnection
    lwz r0, 0x2c(r25)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_80269FD4
    mr r3, r25
    mr r4, r26
    mr r5, r27
    clrlwi r6, r30, 16
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl __OSCheckMutex
    cmpwi r3, 0x0
    bne lbl_80269FD4
    li r0, 0x0
    b lbl_8026A084
lbl_80269FD4:
    cmpwi r26, 0x0
    bne lbl_80269FE4
    li r0, 0x1
    b lbl_8026A084
lbl_80269FE4:
    lwz r3, 0xc(r26)
    cmpwi r3, 0x5
    bge lbl_8026A040
    lwz r0, 0x10(r26)
    cmpwi r0, 0x0
    beq lbl_8026A028
    mr r3, r26
    bl gti2ConnectionClosed
    mr r3, r26
    li r4, 0x6
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_8026A06C
    li r0, 0x0
    b lbl_8026A070
lbl_8026A028:
    cmpwi r3, 0x4
    bne lbl_8026A034
    stw r31, 0x14(r26)
lbl_8026A034:
    mr r3, r26
    bl gti2ConnectionClosed
    b lbl_8026A06C
lbl_8026A040:
    cmpwi r3, 0x7
    beq lbl_8026A06C
    mr r3, r26
    bl gti2ConnectionClosed
    mr r3, r26
    li r4, 0x1
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_8026A06C
    li r0, 0x0
    b lbl_8026A070
lbl_8026A06C:
    li r0, 0x1
lbl_8026A070:
    cmpwi r0, 0x0
    bne lbl_8026A080
    li r0, 0x0
    b lbl_8026A084
lbl_8026A080:
    li r0, 0x1
lbl_8026A084:
    cmpwi r0, 0x0
    bne lbl_8026A0E0
    li r3, 0x0
    b lbl_8026A0F4
lbl_8026A094:
    cmpwi r3, -0x23
    beq lbl_8026A0E0
    mr r3, r25
    bl gti2SocketError
    li r3, 0x0
    b lbl_8026A0F4
lbl_8026A0AC:
    lhz r3, 0x12(r1)
    bl fn_80336B20
    mr r0, r3
    lwz r6, 0x14(r1)
    mr r3, r25
    mr r5, r26
    addi r4, r29, lbl_8040A280@l
    clrlwi r7, r0, 16
    bl fn_80269704
    cmpwi r3, 0x0
    bne lbl_8026A0E0
    li r3, 0x0
    b lbl_8026A0F4
lbl_8026A0E0:
    lwz r3, 0x0(r25)
    bl fn_80255E4C
    cmpwi r3, 0x0
    bne lbl_80269F00
    li r3, 0x1
lbl_8026A0F4:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8026A10C
// ----------------------------------------------------------------------------
asm void fn_8026A10C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_26
    lwz r7, 0x8(r3)
    mr r30, r3
    mr r28, r4
    mr r27, r5
    lwz r0, 0x44(r7)
    mr r31, r6
    addi r3, r3, 0x50
    subf r0, r0, r5
    sth r0, 0xc(r1)
    bl gti2GetBufferFreeSpace
    cmpw r3, r27
    bge lbl_8026A288
    lwz r29, 0x8(r30)
    li r26, 0x0
    lhz r27, 0x4(r30)
    lwz r0, 0x40(r29)
    lwz r28, 0x0(r30)
    cmpwi r0, 0x2
    bne lbl_8026A188
    li r0, 0x3
    addi r3, r1, 0x18
    sth r0, 0xa(r1)
    addi r4, r1, 0xa
    li r5, 0x2
    bl memcpy
    li r26, 0x2
lbl_8026A188:
    addi r3, r1, 0x18
    la r4, lbl_8049CC20
    add r3, r3, r26
    li r5, 0x2
    bl memcpy
    addi r26, r26, 0x2
    addi r6, r1, 0x18
    li r0, 0x68
    mr r3, r29
    stbx r0, r6, r26
    mr r4, r28
    mr r5, r27
    addi r7, r26, 0x1
    bl gti2SocketSend
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_8026A1D8
    li r0, 0x0
    b lbl_8026A268
lbl_8026A1D8:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x5
    bge lbl_8026A238
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_8026A21C
    mr r3, r30
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_8026A264
    li r0, 0x0
    b lbl_8026A268
lbl_8026A21C:
    cmpwi r3, 0x4
    bne lbl_8026A22C
    li r0, 0x1
    stw r0, 0x14(r30)
lbl_8026A22C:
    mr r3, r30
    bl gti2ConnectionClosed
    b lbl_8026A264
lbl_8026A238:
    cmpwi r3, 0x7
    beq lbl_8026A264
    mr r3, r30
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x4
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_8026A264
    li r0, 0x0
    b lbl_8026A268
lbl_8026A264:
    li r0, 0x1
lbl_8026A268:
    cmpwi r0, 0x0
    bne lbl_8026A278
    li r3, 0x0
    b lbl_8026A488
lbl_8026A278:
    li r0, 0x1
    li r3, 0x1
    stw r0, 0x0(r31)
    b lbl_8026A488
lbl_8026A288:
    lhz r26, 0x64(r30)
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x10
    bl memset
    lwz r0, 0x58(r30)
    stw r0, 0x20(r1)
    stw r27, 0x24(r1)
    sth r26, 0x28(r1)
    bl fn_802565F0
    stw r3, 0x2c(r1)
    lwz r3, 0x60(r30)
    bl fn_80253658
    mr r29, r3
    lwz r3, 0x60(r30)
    addi r4, r1, 0x20
    bl fn_80253690
    lwz r3, 0x60(r30)
    bl fn_80253658
    addi r0, r29, 0x1
    subf r0, r0, r3
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_8026A420
    lwz r26, 0x8(r30)
    li r29, 0x0
    lhz r28, 0x4(r30)
    lwz r0, 0x40(r26)
    lwz r27, 0x0(r30)
    cmpwi r0, 0x2
    bne lbl_8026A320
    li r0, 0x3
    addi r3, r1, 0x10
    sth r0, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r29, 0x2
lbl_8026A320:
    addi r3, r1, 0x10
    la r4, lbl_8049CC20
    add r3, r3, r29
    li r5, 0x2
    bl memcpy
    addi r29, r29, 0x2
    addi r6, r1, 0x10
    li r0, 0x68
    mr r3, r26
    stbx r0, r6, r29
    mr r4, r27
    mr r5, r28
    addi r7, r29, 0x1
    bl gti2SocketSend
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    bne lbl_8026A370
    li r0, 0x0
    b lbl_8026A400
lbl_8026A370:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x5
    bge lbl_8026A3D0
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_8026A3B4
    mr r3, r30
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    bl gti2ConnectedCallback
    cmpwi r3, 0x0
    bne lbl_8026A3FC
    li r0, 0x0
    b lbl_8026A400
lbl_8026A3B4:
    cmpwi r3, 0x4
    bne lbl_8026A3C4
    li r0, 0x1
    stw r0, 0x14(r30)
lbl_8026A3C4:
    mr r3, r30
    bl gti2ConnectionClosed
    b lbl_8026A3FC
lbl_8026A3D0:
    cmpwi r3, 0x7
    beq lbl_8026A3FC
    mr r3, r30
    bl gti2ConnectionClosed
    mr r3, r30
    li r4, 0x4
    bl gti2ClosedCallback
    cmpwi r3, 0x0
    bne lbl_8026A3FC
    li r0, 0x0
    b lbl_8026A400
lbl_8026A3FC:
    li r0, 0x1
lbl_8026A400:
    cmpwi r0, 0x0
    bne lbl_8026A410
    li r3, 0x0
    b lbl_8026A488
lbl_8026A410:
    li r0, 0x1
    li r3, 0x1
    stw r0, 0x0(r31)
    b lbl_8026A488
lbl_8026A420:
    lwz r3, 0x8(r30)
    lwz r0, 0x40(r3)
    cmpwi r0, 0x2
    bne lbl_8026A440
    lwz r5, 0x44(r3)
    addi r3, r30, 0x50
    addi r4, r1, 0xc
    bl gti2BufferWriteData
lbl_8026A440:
    addi r3, r30, 0x50
    la r4, lbl_8049CC20
    li r5, 0x2
    bl gti2BufferWriteData
    addi r3, r30, 0x50
    clrlwi r4, r28, 24
    bl gti2BufferWriteByte
    lhz r4, 0x64(r30)
    addi r3, r30, 0x50
    addi r0, r4, 0x1
    sth r0, 0x64(r30)
    bl gti2BufferWriteUShort
    lhz r4, 0x66(r30)
    addi r3, r30, 0x50
    bl gti2BufferWriteUShort
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x0(r31)
lbl_8026A488:
    addi r11, r1, 0x50
    bl _restgpr_26
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_8026A4A0
// ----------------------------------------------------------------------------
asm void fn_8026A4A0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r4
    li r4, 0x1
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r5, 0x8(r3)
    lwz r5, 0x44(r5)
    addi r5, r5, 0x27
    bl fn_8026A10C
    cmpwi r3, 0x0
    bne lbl_8026A4E4
    li r3, 0x0
    b lbl_8026A56C
lbl_8026A4E4:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8026A4F8
    li r3, 0x1
    b lbl_8026A56C
lbl_8026A4F8:
    mr r4, r31
    addi r3, r30, 0x50
    li r5, 0x20
    bl gti2BufferWriteData
    lwz r3, 0x60(r30)
    bl fn_80253658
    mr r4, r3
    lwz r3, 0x60(r30)
    subi r4, r4, 0x1
    bl fn_80253660
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r30)
    mr r3, r30
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_8026A54C
    li r3, 0x0
    b lbl_8026A558
lbl_8026A54C:
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x90(r30)
lbl_8026A558:
    cmpwi r3, 0x0
    bne lbl_8026A568
    li r3, 0x0
    b lbl_8026A56C
lbl_8026A568:
    li r3, 0x1
lbl_8026A56C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8026A584
// ----------------------------------------------------------------------------
asm void fn_8026A584() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x4
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r5, 0x8(r3)
    lwz r5, 0x44(r5)
    addi r5, r5, 0x7
    bl fn_8026A10C
    cmpwi r3, 0x0
    bne lbl_8026A5C0
    li r3, 0x0
    b lbl_8026A638
lbl_8026A5C0:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8026A5D4
    li r3, 0x1
    b lbl_8026A638
lbl_8026A5D4:
    lwz r3, 0x60(r31)
    bl fn_80253658
    mr r4, r3
    lwz r3, 0x60(r31)
    subi r4, r4, 0x1
    bl fn_80253660
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r31)
    mr r3, r31
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_8026A618
    li r3, 0x0
    b lbl_8026A624
lbl_8026A618:
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x90(r31)
lbl_8026A624:
    cmpwi r3, 0x0
    bne lbl_8026A634
    li r3, 0x0
    b lbl_8026A638
lbl_8026A634:
    li r3, 0x1
lbl_8026A638:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8026A64C
// ----------------------------------------------------------------------------
asm void fn_8026A64C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x5
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r6, 0x8(r3)
    lwz r0, 0x44(r6)
    addi r6, r1, 0x8
    add r5, r5, r0
    addi r5, r5, 0x7
    bl fn_8026A10C
    cmpwi r3, 0x0
    bne lbl_8026A69C
    li r3, 0x0
    b lbl_8026A724
lbl_8026A69C:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8026A6B0
    li r3, 0x1
    b lbl_8026A724
lbl_8026A6B0:
    mr r4, r30
    mr r5, r31
    addi r3, r29, 0x50
    bl gti2BufferWriteData
    lwz r3, 0x60(r29)
    bl fn_80253658
    mr r4, r3
    lwz r3, 0x60(r29)
    subi r4, r4, 0x1
    bl fn_80253660
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r29)
    mr r3, r29
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_8026A704
    li r3, 0x0
    b lbl_8026A710
lbl_8026A704:
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x90(r29)
lbl_8026A710:
    cmpwi r3, 0x0
    bne lbl_8026A720
    li r3, 0x0
    b lbl_8026A724
lbl_8026A720:
    li r3, 0x1
lbl_8026A724:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8026A740
// ----------------------------------------------------------------------------
asm void fn_8026A740() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x6
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r5, 0x8(r3)
    lwz r5, 0x44(r5)
    addi r5, r5, 0x7
    bl fn_8026A10C
    cmpwi r3, 0x0
    bne lbl_8026A77C
    li r3, 0x0
    b lbl_8026A7F4
lbl_8026A77C:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8026A790
    li r3, 0x1
    b lbl_8026A7F4
lbl_8026A790:
    lwz r3, 0x60(r31)
    bl fn_80253658
    mr r4, r3
    lwz r3, 0x60(r31)
    subi r4, r4, 0x1
    bl fn_80253660
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r31)
    mr r3, r31
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_8026A7D4
    li r3, 0x0
    b lbl_8026A7E0
lbl_8026A7D4:
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x90(r31)
lbl_8026A7E0:
    cmpwi r3, 0x0
    bne lbl_8026A7F0
    li r3, 0x0
    b lbl_8026A7F4
lbl_8026A7F0:
    li r3, 0x1
lbl_8026A7F4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8026A808
// ----------------------------------------------------------------------------
asm void fn_8026A808() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x7
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r5, 0x8(r3)
    lwz r5, 0x44(r5)
    addi r5, r5, 0x7
    bl fn_8026A10C
    cmpwi r3, 0x0
    bne lbl_8026A844
    li r3, 0x0
    b lbl_8026A8BC
lbl_8026A844:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8026A858
    li r3, 0x1
    b lbl_8026A8BC
lbl_8026A858:
    lwz r3, 0x60(r31)
    bl fn_80253658
    mr r4, r3
    lwz r3, 0x60(r31)
    subi r4, r4, 0x1
    bl fn_80253660
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r31)
    mr r3, r31
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_8026A89C
    li r3, 0x0
    b lbl_8026A8A8
lbl_8026A89C:
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x90(r31)
lbl_8026A8A8:
    cmpwi r3, 0x0
    bne lbl_8026A8B8
    li r3, 0x0
    b lbl_8026A8BC
lbl_8026A8B8:
    li r3, 0x1
lbl_8026A8BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8026A8D0
// ----------------------------------------------------------------------------
asm void fn_8026A8D0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r5, 0x2
    mr r27, r3
    mr r28, r4
    mr r29, r5
    blt lbl_8026A918
    lwz r3, 0x8(r3)
    li r5, 0x2
    lwz r0, 0x44(r3)
    add r3, r4, r0
    la r4, lbl_8049CC20
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_8026A940
lbl_8026A918:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_8026A938
    li r3, 0x0
    b lbl_8026A9E4
lbl_8026A938:
    li r3, 0x1
    b lbl_8026A9E4
lbl_8026A940:
    addi r31, r29, 0x2
    addi r3, r27, 0x50
    bl gti2GetBufferFreeSpace
    cmpw r3, r31
    bge lbl_8026A95C
    li r3, 0x1
    b lbl_8026A9E4
lbl_8026A95C:
    lwz r3, 0x8(r27)
    lwz r4, 0x50(r27)
    lwz r0, 0x40(r3)
    lwz r3, 0x58(r27)
    cmpwi r0, 0x2
    add r30, r4, r3
    bne lbl_8026A988
    mr r4, r28
    addi r3, r27, 0x50
    li r5, 0x2
    bl gti2BufferWriteData
lbl_8026A988:
    addi r3, r27, 0x50
    la r4, lbl_8049CC20
    li r5, 0x2
    bl gti2BufferWriteData
    lwz r4, 0x8(r27)
    addi r3, r27, 0x50
    lwz r0, 0x44(r4)
    add r4, r28, r0
    subf r5, r0, r29
    bl gti2BufferWriteData
    mr r3, r27
    mr r4, r30
    mr r5, r31
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_8026A9D0
    li r3, 0x0
    b lbl_8026A9E4
lbl_8026A9D0:
    mr r5, r31
    addi r3, r27, 0x50
    li r4, -0x1
    bl gti2BufferShorten
    li r3, 0x1
lbl_8026A9E4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8026A9FC
// ----------------------------------------------------------------------------
asm void fn_8026A9FC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r4, 0x8(r3)
    lwz r0, 0x40(r4)
    cmpwi r0, 0x2
    bne lbl_8026AA44
    li r0, 0x5
    addi r3, r1, 0xc
    sth r0, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r31, 0x2
lbl_8026AA44:
    addi r3, r1, 0xc
    la r4, lbl_8049CC20
    add r3, r3, r31
    li r5, 0x2
    bl memcpy
    addi r31, r31, 0x2
    addi r4, r1, 0xc
    li r0, 0x64
    mr r3, r30
    stbx r0, r4, r31
    addi r6, r31, 0x2
    addi r5, r31, 0x3
    addi r31, r31, 0x1
    lhz r7, 0x66(r30)
    extrwi r0, r7, 8, 16
    stbx r0, r4, r31
    stbx r7, r4, r6
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_8026AA9C
    li r3, 0x0
    b lbl_8026AAA8
lbl_8026AA9C:
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x90(r30)
lbl_8026AAA8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8026AAC0
// ----------------------------------------------------------------------------
asm void fn_8026AAC0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r6, 0x8(r3)
    lwz r0, 0x40(r6)
    cmpwi r0, 0x2
    bne lbl_8026AB18
    li r0, 0x7
    addi r3, r1, 0xc
    sth r0, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r31, 0x2
lbl_8026AB18:
    addi r3, r1, 0xc
    la r4, lbl_8049CC20
    add r3, r3, r31
    li r5, 0x2
    bl memcpy
    addi r3, r1, 0xc
    li r4, 0x65
    addi r31, r31, 0x2
    extrwi r0, r29, 8, 16
    stbx r4, r3, r31
    addi r31, r31, 0x1
    cmplw r29, r30
    stbx r0, r3, r31
    addi r0, r31, 0x1
    addi r31, r31, 0x2
    stbx r29, r3, r0
    beq lbl_8026AB70
    extrwi r0, r30, 8, 16
    addi r4, r31, 0x1
    stbx r0, r3, r31
    addi r31, r31, 0x2
    stbx r30, r3, r4
lbl_8026AB70:
    mr r3, r28
    mr r5, r31
    addi r4, r1, 0xc
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_8026AB90
    li r3, 0x0
    b lbl_8026AB94
lbl_8026AB90:
    li r3, 0x1
lbl_8026AB94:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8026ABB4
// ----------------------------------------------------------------------------
asm void fn_8026ABB4() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    li r28, 0x0
    lwz r31, 0x8(r3)
    lhz r29, 0x4(r3)
    lwz r0, 0x40(r31)
    lwz r30, 0x0(r3)
    cmpwi r0, 0x2
    bne lbl_8026AC08
    li r0, 0x3
    addi r3, r1, 0xc
    sth r0, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    li r28, 0x2
lbl_8026AC08:
    addi r3, r1, 0xc
    la r4, lbl_8049CC20
    add r3, r3, r28
    li r5, 0x2
    bl memcpy
    addi r28, r28, 0x2
    addi r6, r1, 0xc
    li r0, 0x68
    mr r3, r31
    stbx r0, r6, r28
    mr r4, r30
    mr r5, r29
    addi r7, r28, 0x1
    bl gti2SocketSend
    neg r0, r3
    lwz r31, 0x2c(r1)
    or r0, r0, r3
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    srwi r3, r0, 31
    lwz r28, 0x20(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8026AC6C
// ----------------------------------------------------------------------------
asm void fn_8026AC6C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r5, 0x8(r3)
    lhz r8, 0x66(r3)
    lwz r6, 0x44(r5)
    lwz r5, 0x0(r4)
    extrwi r0, r8, 8, 16
    lwz r7, 0x50(r3)
    add r5, r5, r6
    addi r5, r5, 0x5
    stbx r0, r7, r5
    addi r5, r5, 0x1
    stbx r8, r7, r5
    lwz r6, 0x50(r3)
    lwz r0, 0x0(r4)
    lwz r5, 0x4(r4)
    add r4, r6, r0
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_8026ACD8
    li r3, 0x0
    b lbl_8026AD10
lbl_8026ACD8:
    lwz r3, 0x88(r31)
    lwz r0, 0x0(r30)
    stw r3, 0xc(r30)
    lwz r3, 0x8(r31)
    lwz r4, 0x50(r31)
    lwz r3, 0x44(r3)
    add r0, r0, r3
    add r3, r0, r4
    lbz r0, 0x2(r3)
    cmpwi r0, 0x2
    bne lbl_8026AD0C
    lwz r0, 0x88(r31)
    stw r0, 0x8c(r31)
lbl_8026AD0C:
    li r3, 0x1
lbl_8026AD10:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8026AD28
// ----------------------------------------------------------------------------
asm void fn_8026AD28() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_8026ADF8
    addi r6, r1, 0x8
    li r4, 0x0
    addi r5, r5, 0x7
    bl fn_8026A10C
    cmpwi r3, 0x0
    bne lbl_8026AD74
    li r3, 0x0
    b lbl_8026ADFC
lbl_8026AD74:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8026AD88
    li r3, 0x1
    b lbl_8026ADFC
lbl_8026AD88:
    mr r4, r30
    mr r5, r31
    addi r3, r29, 0x50
    bl gti2BufferWriteData
    lwz r3, 0x60(r29)
    bl fn_80253658
    mr r4, r3
    lwz r3, 0x60(r29)
    subi r4, r4, 0x1
    bl fn_80253660
    mr r5, r3
    lwz r0, 0x0(r3)
    lwz r4, 0x50(r29)
    mr r3, r29
    lwz r5, 0x4(r5)
    add r4, r4, r0
    bl gti2ConnectionSendData
    cmpwi r3, 0x0
    bne lbl_8026ADDC
    li r3, 0x0
    b lbl_8026ADE8
lbl_8026ADDC:
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x90(r29)
lbl_8026ADE8:
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_8026ADFC
lbl_8026ADF8:
    bl fn_8026A8D0
lbl_8026ADFC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

