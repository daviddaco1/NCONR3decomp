#include "types.h"

// Translation unit: src/gamespy/GP/gpiPeer.cpp
// Total functions: 22

// Small Data symbols (@sda21)
extern float lbl_8049CA70;
extern float lbl_8049CA78;
extern float lbl_8049CA80;
extern float lbl_8049CA88;
extern float lbl_8049CA90;
extern float lbl_8049CA98;
extern float lbl_8049CAA0;
extern float lbl_8049CAA8;
extern float lbl_8049CAB0;
extern float lbl_8049CAB4;
extern float lbl_8049CAB8;
extern float lbl_8049CAC0;
extern float lbl_8049CAC8;

// Global data symbols (@ha/@l)
extern u8 lbl_80369410[];
extern u8 lbl_80369470[];
extern u8 lbl_80369480[];
extern u8 lbl_803694B8[];
extern u8 lbl_803694CC[];

// Forward declarations
extern void MD5Digest();
extern void _restgpr_24();
extern void _restgpr_27();
extern void _savegpr_24();
extern void _savegpr_27();
extern void atoi();
extern void detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo();
extern void fn_80253528();
extern void fn_802535C4();
extern void fn_80253658();
extern void fn_80253660();
extern void fn_80253690();
extern void fn_80256120();
extern void fn_8025651C();
extern void fn_802565F0();
extern void fn_80256C4C();
extern void fn_80256C5C();
extern void fn_80256C70();
extern void fn_8025AEDC();
extern void fn_8025AFD0();
extern void fn_8025B188();
extern void fn_8025B22C();
extern void fn_80263228();
extern void fn_80265A54();
extern void fn_80336AC8();
extern void gpiAddCallback();
extern void gpiAddOperation();
extern void gpiAddPeer();
extern void gpiAppendCharToBuffer();
extern void gpiAppendIntToBuffer();
extern void gpiAppendStringToBuffer();
extern void gpiAppendStringToBufferLen();
extern void gpiCallErrorCallback();
extern void gpiCheckTimedOutPeerOperations();
extern void gpiClipBufferToPosition();
extern void gpiDestroyPeer();
extern void gpiFreeMessage();
extern void gpiGetPeerByProfile();
extern void gpiGetProfile();
extern void gpiPeerAcceptedCallback();
extern void gpiPeerAddMessage();
extern void gpiPeerAddOp();
extern void gpiPeerFinishTransferMessage();
extern void gpiPeerGetSig();
extern void gpiPeerLeftCallback();
extern void gpiPeerMessageCallback();
extern void gpiPeerPingReplyCallback();
extern void gpiPeerRemoveOp();
extern void gpiPeerSendMessages();
extern void gpiPeerStartConnect();
extern void gpiPeerStartTransferMessage();
extern void gpiProcessPeerAcceptingConnection();
extern void gpiProcessPeerConnected();
extern void gpiProcessPeerInitiatingConnection();
extern void gpiProcessPeers();
extern void gpiReadMessageFromBuffer();
extern void gpiRemovePeer();
extern void gpiRemoveProfile();
extern void gpiSendBufferToPeer();
extern void gpiSendGetInfo();
extern void gpiSendOrBufferChar();
extern void gpiSendOrBufferString();
extern void gpiSendOrBufferStringLenToPeer();
extern void gpiSetError();
extern void gpiSetErrorString();
extern void gpiValueForKey();
extern void gsUdpEngineGetPeerState();
extern void gsUdpEngineStartTalkingToPeer();
extern void gsUdpEngineThink();
extern void memcpy();
extern void memset();
extern void sprintf();
extern void strcmp();
extern void strlen();
extern void strncmp();
extern void strstr();

// ----------------------------------------------------------------------------
// gpiProcessPeerInitiatingConnection
// ----------------------------------------------------------------------------
asm void gpiProcessPeerInitiatingConnection() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r4, 0x0
    lis r29, lbl_80369410@ha
    lwz r28, 0x0(r3)
    mr r30, r3
    mr r31, r4
    addi r29, r29, lbl_80369410@l
    li r5, 0x0
    bne lbl_80261268
    li r3, 0x3
    b lbl_80261564
lbl_80261268:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x6a
    beq lbl_8026127C
    cmpwi r0, 0x64
    bne lbl_80261284
lbl_8026127C:
    li r3, 0x3
    b lbl_80261564
lbl_80261284:
    cmpwi r0, 0x67
    beq lbl_802612BC
    bge lbl_802612A0
    cmpwi r0, 0x65
    beq lbl_8026151C
    bge lbl_802612AC
    b lbl_8026151C
lbl_802612A0:
    cmpwi r0, 0x69
    bge lbl_8026151C
    b lbl_80261410
lbl_802612AC:
    bl gpiPeerStartConnect
    cmpwi r3, 0x0
    beq lbl_8026151C
    b lbl_80261564
lbl_802612BC:
    lwz r3, 0x8(r4)
    addi r5, r1, 0xc
    lhz r4, 0xc(r4)
    bl gsUdpEngineGetPeerState
    lwz r0, 0xc(r1)
    cmpwi r0, 0x1
    bne lbl_8026151C
    lwz r4, 0x10(r31)
    mr r3, r30
    addi r5, r1, 0x10
    li r27, 0x1
    bl gpiGetProfile
    cmpwi r3, 0x0
    bne lbl_80261308
    mr r3, r30
    addi r4, r29, 0x0
    bl gpiSetErrorString
    li r3, 0x3
    b lbl_80261564
lbl_80261308:
    mr r3, r30
    addi r4, r31, 0x34
    la r5, lbl_8049CA70
    bl gpiAppendStringToBuffer
    mr r3, r30
    addi r4, r31, 0x34
    la r5, lbl_8049CA78
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a0(r28)
    mr r3, r30
    addi r4, r31, 0x34
    bl gpiAppendIntToBuffer
    mr r3, r30
    addi r4, r31, 0x34
    la r5, lbl_8049CA80
    bl gpiAppendStringToBuffer
    mr r3, r30
    addi r4, r31, 0x34
    addi r5, r28, 0x110
    bl gpiAppendStringToBuffer
    mr r3, r30
    addi r4, r31, 0x34
    la r5, lbl_8049CA88
    bl gpiAppendStringToBuffer
    lwz r5, 0x10(r1)
    mr r3, r30
    addi r4, r31, 0x34
    lwz r5, 0x1c(r5)
    bl gpiAppendStringToBuffer
    mr r3, r30
    addi r4, r31, 0x34
    la r5, lbl_8049CA90
    bl gpiAppendStringToBuffer
    lwz r4, 0x5d8(r28)
    b lbl_802613C0
lbl_80261394:
    lwz r3, 0x10(r4)
    lwz r0, 0x10(r31)
    cmpw r3, r0
    bne lbl_802613BC
    cmplw r4, r31
    beq lbl_802613BC
    lwz r0, 0x0(r4)
    cmpwi r0, 0x67
    bgt lbl_802613BC
    li r27, 0x0
lbl_802613BC:
    lwz r4, 0x54(r4)
lbl_802613C0:
    cmpwi r4, 0x0
    bne lbl_80261394
    cmpwi r27, 0x0
    beq lbl_80261404
    lwz r3, 0x10(r1)
    lwz r3, 0x1c(r3)
    bl fn_80256C70
    lwz r3, 0x10(r1)
    li r0, 0x0
    stw r0, 0x1c(r3)
    lwz r3, 0x10(r1)
    bl fn_80263228
    cmpwi r3, 0x0
    beq lbl_80261404
    lwz r4, 0x10(r1)
    mr r3, r30
    bl gpiRemoveProfile
lbl_80261404:
    li r0, 0x68
    stw r0, 0x0(r31)
    b lbl_8026151C
lbl_80261410:
    lwz r3, 0x24(r4)
    cmpwi r3, 0x0
    beq lbl_80261428
    la r4, lbl_8049CA90
    bl strstr
    mr r5, r3
lbl_80261428:
    cmpwi r5, 0x0
    beq lbl_8026151C
    li r0, 0x0
    la r4, lbl_8049CA98
    stb r0, 0x0(r5)
    li r5, 0x7
    lwz r28, 0x24(r31)
    mr r3, r28
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_802614E0
    lwz r3, 0x20(r31)
    addi r0, r3, 0x1
    cmpwi r0, 0x1
    stw r0, 0x20(r31)
    ble lbl_8026147C
    mr r3, r30
    addi r4, r29, 0x1c
    bl gpiSetErrorString
    li r3, 0x3
    b lbl_80261564
lbl_8026147C:
    mr r3, r30
    addi r6, r1, 0x8
    li r4, 0x2
    li r5, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    bl gpiAddOperation
    cmpwi r3, 0x0
    beq lbl_802614A8
    b lbl_802614D4
lbl_802614A8:
    lwz r5, 0x8(r1)
    mr r3, r30
    lwz r4, 0x10(r31)
    lwz r5, 0x18(r5)
    bl gpiSendGetInfo
    cmpwi r3, 0x0
    beq lbl_802614C8
    b lbl_802614D4
lbl_802614C8:
    li r0, 0x65
    li r3, 0x0
    stw r0, 0x0(r31)
lbl_802614D4:
    cmpwi r3, 0x0
    beq lbl_8026150C
    b lbl_80261564
lbl_802614E0:
    mr r3, r28
    la r4, lbl_8049CAA0
    li r5, 0x6
    bl strncmp
    cmpwi r3, 0x0
    beq lbl_8026150C
    mr r3, r30
    addi r4, r29, 0x40
    bl gpiSetErrorString
    li r3, 0x3
    b lbl_80261564
lbl_8026150C:
    li r3, 0x69
    li r0, 0x0
    stw r3, 0x0(r31)
    stw r0, 0x2c(r31)
lbl_8026151C:
    lwz r0, 0x3c(r31)
    cmpwi r0, 0x0
    ble lbl_80261560
    lwz r4, 0x8(r31)
    mr r3, r30
    lhz r5, 0xc(r31)
    addi r6, r31, 0x34
    addi r7, r1, 0x14
    li r8, 0x1
    bl gpiSendBufferToPeer
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    bne lbl_80261558
    cmpwi r3, 0x0
    beq lbl_80261560
lbl_80261558:
    li r0, 0x6a
    stw r0, 0x0(r31)
lbl_80261560:
    li r3, 0x0
lbl_80261564:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// gpiProcessPeerAcceptingConnection
// ----------------------------------------------------------------------------
asm void gpiProcessPeerAcceptingConnection() {
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    addi r11, r1, 0x1a0
    bl _savegpr_27
    lwz r0, 0x0(r4)
    mr r27, r3
    lwz r29, 0x0(r3)
    mr r28, r4
    cmpwi r0, 0x68
    beq lbl_802615B0
    li r3, 0x3
    b lbl_80261780
lbl_802615B0:
    lwz r3, 0x8(r4)
    addi r5, r1, 0xc
    lhz r4, 0xc(r4)
    bl gsUdpEngineGetPeerState
    lwz r0, 0xc(r1)
    cmpwi r0, 0x3
    bne lbl_802615DC
    li r0, 0x6a
    li r3, 0x0
    stw r0, 0x0(r28)
    b lbl_80261780
lbl_802615DC:
    lwz r3, 0x24(r28)
    la r4, lbl_8049CA90
    bl strstr
    cmpwi r3, 0x0
    beq lbl_8026177C
    li r31, 0x0
    la r4, lbl_8049CA70
    stb r31, 0x0(r3)
    li r5, 0x6
    lwz r30, 0x24(r28)
    mr r3, r30
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_80261768
    mr r3, r30
    addi r5, r1, 0x10
    la r4, lbl_8049CA78
    li r6, 0x10
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_80261640
    li r0, 0x6a
    li r3, 0x0
    stw r0, 0x0(r28)
    b lbl_80261780
lbl_80261640:
    addi r3, r1, 0x10
    bl atoi
    mr r30, r3
    lwz r3, 0x24(r28)
    addi r5, r1, 0x20
    la r4, lbl_8049CA80
    li r6, 0x1f
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_80261678
    li r0, 0x6a
    li r3, 0x0
    stw r0, 0x0(r28)
    b lbl_80261780
lbl_80261678:
    lwz r3, 0x24(r28)
    addi r5, r1, 0x64
    la r4, lbl_8049CA88
    li r6, 0x21
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_802616A4
    li r0, 0x6a
    li r3, 0x0
    stw r0, 0x0(r28)
    b lbl_80261780
lbl_802616A4:
    lwz r6, 0x1a0(r29)
    mr r7, r30
    addi r3, r1, 0x88
    addi r5, r29, 0x177
    la r4, lbl_8049CAA8
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x88
    bl strlen
    mr r4, r3
    addi r3, r1, 0x88
    addi r5, r1, 0x40
    bl MD5Digest
    addi r3, r1, 0x64
    addi r4, r1, 0x40
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80261738
    mr r3, r27
    addi r4, r28, 0x34
    la r5, lbl_8049CA98
    bl gpiAppendStringToBuffer
    mr r3, r27
    addi r4, r28, 0x34
    la r5, lbl_8049CA90
    bl gpiAppendStringToBuffer
    lwz r4, 0x8(r28)
    mr r3, r27
    lhz r5, 0xc(r28)
    addi r6, r28, 0x34
    addi r7, r1, 0x8
    li r8, 0x1
    bl gpiSendBufferToPeer
    li r0, 0x6a
    li r3, 0x0
    stw r0, 0x0(r28)
    b lbl_80261780
lbl_80261738:
    mr r3, r27
    addi r4, r28, 0x34
    la r5, lbl_8049CAA0
    bl gpiAppendStringToBuffer
    mr r3, r27
    addi r4, r28, 0x34
    la r5, lbl_8049CA90
    bl gpiAppendStringToBuffer
    li r0, 0x69
    stw r30, 0x10(r28)
    stw r0, 0x0(r28)
    b lbl_80261778
lbl_80261768:
    li r0, 0x6a
    li r3, 0x0
    stw r0, 0x0(r28)
    b lbl_80261780
lbl_80261778:
    stw r31, 0x2c(r28)
lbl_8026177C:
    li r3, 0x0
lbl_80261780:
    addi r11, r1, 0x1a0
    bl _restgpr_27
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

// ----------------------------------------------------------------------------
// gpiPeerSendMessages
// ----------------------------------------------------------------------------
asm void gpiPeerSendMessages() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_802617C8
    li r3, 0x3
    b lbl_80261860
lbl_802617C8:
    lwz r0, 0x3c(r4)
    cmpwi r0, 0x0
    beq lbl_8026184C
    li r3, 0x0
    b lbl_80261860
    b lbl_8026184C
lbl_802617E0:
    lwz r3, 0x44(r30)
    li r4, 0x0
    bl fn_80253660
    mr r31, r3
    lwz r4, 0x8(r30)
    lhz r5, 0xc(r30)
    mr r3, r29
    mr r6, r31
    addi r7, r1, 0x8
    li r8, 0x0
    bl gpiSendBufferToPeer
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_80261820
    cmpwi r3, 0x0
    beq lbl_80261830
lbl_80261820:
    li r0, 0x6a
    li r3, 0x0
    stw r0, 0x0(r30)
    b lbl_80261860
lbl_80261830:
    lwz r3, 0xc(r31)
    lwz r0, 0x8(r31)
    cmpw r3, r0
    bne lbl_8026185C
    lwz r3, 0x44(r30)
    li r4, 0x0
    bl detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo
lbl_8026184C:
    lwz r3, 0x44(r30)
    bl fn_80253658
    cmpwi r3, 0x0
    bne lbl_802617E0
lbl_8026185C:
    li r3, 0x0
lbl_80261860:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// gpiProcessPeerConnected
// ----------------------------------------------------------------------------
asm void gpiProcessPeerConnected() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    lwz r31, 0x0(r3)
    bne lbl_802618B4
    li r3, 0x3
    b lbl_80261BC0
lbl_802618B4:
    lwz r0, 0x3c(r4)
    cmpwi r0, 0x0
    beq lbl_802618FC
    lwz r4, 0x8(r4)
    addi r6, r30, 0x34
    lhz r5, 0xc(r30)
    addi r7, r1, 0x14
    li r8, 0x1
    bl gpiSendBufferToPeer
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    bne lbl_802618EC
    cmpwi r3, 0x0
    beq lbl_802618FC
lbl_802618EC:
    li r0, 0x6a
    li r3, 0x0
    stw r0, 0x0(r30)
    b lbl_80261BC0
lbl_802618FC:
    lwz r0, 0x3c(r30)
    cmpwi r0, 0x0
    bne lbl_80261934
    mr r3, r29
    mr r4, r30
    bl gpiPeerSendMessages
    cmpwi r3, 0x0
    beq lbl_80261920
    b lbl_80261BC0
lbl_80261920:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x6a
    bne lbl_80261934
    li r3, 0x0
    b lbl_80261BC0
lbl_80261934:
    lwz r0, 0x2c(r30)
    cmpwi r0, 0x0
    ble lbl_80261960
    li r3, 0x0
    bl fn_80256120
    li r5, 0x2710
    li r0, 0x0
    addc r4, r4, r5
    adde r0, r3, r0
    stw r4, 0x1c(r30)
    stw r0, 0x18(r30)
lbl_80261960:
    mr r3, r29
    addi r4, r30, 0x24
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    bl gpiReadMessageFromBuffer
    cmpwi r3, 0x0
    beq lbl_80261984
    b lbl_80261BC0
lbl_80261984:
    lwz r7, 0x10(r1)
    cmpwi r7, 0x0
    beq lbl_80261B8C
    lwz r5, 0xc(r1)
    cmpwi r5, 0x67
    beq lbl_80261B80
    bge lbl_802619C4
    cmpwi r5, 0x5
    beq lbl_80261A80
    bge lbl_802619B8
    cmpwi r5, 0x1
    beq lbl_802619E8
    b lbl_80261B80
lbl_802619B8:
    cmpwi r5, 0x66
    bge lbl_80261B18
    b lbl_80261B80
lbl_802619C4:
    cmpwi r5, 0xc8
    bge lbl_802619DC
    cmpwi r5, 0x69
    beq lbl_80261B50
    bge lbl_80261B80
    b lbl_80261B38
lbl_802619DC:
    cmpwi r5, 0xd1
    bge lbl_80261B80
    b lbl_80261B6C
lbl_802619E8:
    lwz r3, 0x1c0(r31)
    lwz r0, 0x1c4(r31)
    cmpwi r3, 0x0
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    beq lbl_80261B80
    li r3, 0xc
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_80261A2C
    lis r4, lbl_80369470@ha
    mr r3, r29
    addi r4, r4, lbl_80369470@l
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_80261BC0
lbl_80261A2C:
    lwz r0, 0x10(r30)
    stw r0, 0x0(r3)
    lwz r3, 0x10(r1)
    bl fn_8025651C
    stw r3, 0x8(r28)
    li r3, 0x0
    bl fn_80256120
    stw r4, 0x4(r28)
    mr r3, r29
    lwz r6, 0x38(r1)
    mr r5, r28
    lwz r0, 0x3c(r1)
    addi r4, r1, 0x30
    stw r6, 0x30(r1)
    li r6, 0x0
    li r7, 0x2
    stw r0, 0x34(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_80261B80
    b lbl_80261BC0
lbl_80261A80:
    lwz r3, 0x1c8(r31)
    lwz r0, 0x1cc(r31)
    cmpwi r3, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x24(r1)
    beq lbl_80261B80
    li r3, 0xc
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_80261AC4
    lis r4, lbl_80369470@ha
    mr r3, r29
    addi r4, r4, lbl_80369470@l
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_80261BC0
lbl_80261AC4:
    lwz r0, 0x10(r30)
    stw r0, 0x0(r3)
    lwz r3, 0x10(r1)
    bl fn_8025651C
    stw r3, 0x8(r28)
    li r3, 0x0
    bl fn_80256120
    stw r4, 0x4(r28)
    mr r3, r29
    lwz r6, 0x20(r1)
    mr r5, r28
    lwz r0, 0x24(r1)
    addi r4, r1, 0x28
    stw r6, 0x28(r1)
    li r6, 0x0
    li r7, 0x2
    stw r0, 0x2c(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_80261B80
    b lbl_80261BC0
lbl_80261B18:
    lwz r4, 0x10(r30)
    mr r3, r29
    li r5, 0x67
    la r6, lbl_8049CAB0
    li r7, 0x0
    li r8, 0x0
    bl fn_8025AFD0
    b lbl_80261B80
lbl_80261B38:
    mr r3, r29
    mr r4, r30
    bl fn_8025B188
    cmpwi r3, 0x0
    beq lbl_80261B80
    b lbl_80261BC0
lbl_80261B50:
    mr r3, r29
    mr r4, r30
    mr r5, r7
    bl fn_8025B22C
    cmpwi r3, 0x0
    beq lbl_80261B80
    b lbl_80261BC0
lbl_80261B6C:
    lwz r6, 0x24(r30)
    mr r3, r29
    lwz r8, 0x8(r1)
    mr r4, r30
    bl fn_80265A54
lbl_80261B80:
    mr r3, r29
    addi r4, r30, 0x24
    bl gpiClipBufferToPosition
lbl_80261B8C:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_80261960
    lwz r3, 0x8(r30)
    addi r5, r1, 0x18
    lhz r4, 0xc(r30)
    bl gsUdpEngineGetPeerState
    lwz r0, 0x18(r1)
    cmpwi r0, 0x3
    bne lbl_80261BBC
    li r0, 0x6a
    stw r0, 0x0(r30)
lbl_80261BBC:
    li r3, 0x0
lbl_80261BC0:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// gpiCheckTimedOutPeerOperations
// ----------------------------------------------------------------------------
asm void gpiCheckTimedOutPeerOperations() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r30, 0x4c(r4)
    bne lbl_80261C14
    b lbl_80261CC0
lbl_80261C14:
    li r31, 0x0
    b lbl_80261CAC
lbl_80261C1C:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x2
    beq lbl_80261CA8
    bl fn_802565F0
    lwz r0, 0x14(r30)
    cmplw r3, r0
    ble lbl_80261CA8
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_80261CA8
    lwz r0, 0x10(r30)
    cmpwi r0, 0x68
    bne lbl_80261C9C
    li r3, 0x10
    bl fn_80256C4C
    lwz r9, 0x8(r30)
    mr r5, r3
    lwz r8, 0x4(r30)
    addi r4, r1, 0x8
    stw r9, 0x10(r1)
    li r6, 0x0
    li r7, 0x0
    stw r31, 0x4(r3)
    stw r31, 0xc(r3)
    stw r31, 0x8(r3)
    lwz r0, 0x10(r29)
    stw r8, 0x14(r1)
    stw r0, 0x0(r3)
    mr r3, r28
    stw r9, 0x8(r1)
    stw r8, 0xc(r1)
    bl gpiAddCallback
lbl_80261C9C:
    mr r3, r29
    mr r4, r30
    bl gpiPeerRemoveOp
lbl_80261CA8:
    lwz r30, 0xc(r30)
lbl_80261CAC:
    cmpwi r30, 0x0
    beq lbl_80261CC0
    lwz r0, 0x50(r29)
    cmplw r30, r0
    bne lbl_80261C1C
lbl_80261CC0:
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
// gpiDestroyPeer
// ----------------------------------------------------------------------------
asm void gpiDestroyPeer() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r3, 0x24(r4)
    bl fn_80256C70
    li r31, 0x0
    lwz r3, 0x34(r30)
    stw r31, 0x24(r30)
    bl fn_80256C70
    lwz r3, 0x44(r30)
    stw r31, 0x34(r30)
    cmpwi r3, 0x0
    beq lbl_80261D28
    bl fn_802535C4
    stw r31, 0x44(r30)
lbl_80261D28:
    mr r3, r30
    bl fn_80256C70
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// gpiRemovePeer
// ----------------------------------------------------------------------------
asm void gpiRemovePeer() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r5, 0x0(r3)
    beq lbl_80261E40
    lwz r3, 0x5d8(r5)
    cmpwi r3, 0x0
    beq lbl_80261E40
    cmplw r3, r4
    bne lbl_80261DA0
    lwz r0, 0x54(r4)
    stw r0, 0x5d8(r5)
    b lbl_80261DF8
    b lbl_80261DA0
lbl_80261D94:
    cmpwi r0, 0x0
    beq lbl_80261E40
    mr r3, r0
lbl_80261DA0:
    lwz r0, 0x54(r3)
    cmplw r0, r4
    bne lbl_80261D94
    lwz r0, 0x54(r4)
    stw r0, 0x54(r3)
    b lbl_80261DF8
lbl_80261DB8:
    lwz r3, 0x44(r30)
    li r4, 0x0
    bl fn_80253660
    lwz r5, 0x10(r3)
    mr r4, r3
    cmpwi r5, 0x64
    bge lbl_80261DEC
    lwz r6, 0x0(r4)
    mr r3, r31
    lwz r0, 0x14(r4)
    lwz r4, 0x10(r30)
    add r6, r6, r0
    bl fn_8025AEDC
lbl_80261DEC:
    lwz r3, 0x44(r30)
    li r4, 0x0
    bl detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo
lbl_80261DF8:
    lwz r3, 0x44(r30)
    bl fn_80253658
    cmpwi r3, 0x0
    bne lbl_80261DB8
    lwz r3, 0x24(r30)
    bl fn_80256C70
    li r31, 0x0
    lwz r3, 0x34(r30)
    stw r31, 0x24(r30)
    bl fn_80256C70
    lwz r3, 0x44(r30)
    stw r31, 0x34(r30)
    cmpwi r3, 0x0
    beq lbl_80261E38
    bl fn_802535C4
    stw r31, 0x44(r30)
lbl_80261E38:
    mr r3, r30
    bl fn_80256C70
lbl_80261E40:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// gpiProcessPeers
// ----------------------------------------------------------------------------
asm void gpiProcessPeers() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x0(r3)
    bl gsUdpEngineThink
    lwz r29, 0x5d8(r31)
    b lbl_80261F70
lbl_80261E88:
    lwz r0, 0x0(r29)
    lwz r30, 0x54(r29)
    cmpwi r0, 0x6a
    bne lbl_80261EA8
    mr r3, r28
    mr r4, r29
    bl gpiRemovePeer
    b lbl_80261F6C
lbl_80261EA8:
    cmpwi r0, 0x64
    li r31, 0x0
    bne lbl_80261EBC
    li r31, 0x3
    b lbl_80261F20
lbl_80261EBC:
    cmpwi r0, 0x69
    beq lbl_80261EF0
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_80261EE0
    mr r3, r28
    mr r4, r29
    bl gpiProcessPeerInitiatingConnection
    b lbl_80261EEC
lbl_80261EE0:
    mr r3, r28
    mr r4, r29
    bl gpiProcessPeerAcceptingConnection
lbl_80261EEC:
    mr r31, r3
lbl_80261EF0:
    cmpwi r31, 0x0
    bne lbl_80261F20
    lwz r0, 0x0(r29)
    cmpwi r0, 0x69
    bne lbl_80261F20
    mr r3, r28
    mr r4, r29
    bl gpiProcessPeerConnected
    mr r31, r3
    mr r3, r28
    mr r4, r29
    bl gpiCheckTimedOutPeerOperations
lbl_80261F20:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x6a
    beq lbl_80261F60
    cmpwi r31, 0x0
    bne lbl_80261F60
    li r3, 0x0
    bl fn_80256120
    lwz r0, 0x18(r29)
    xoris r5, r3, 0x8000
    lwz r3, 0x1c(r29)
    xoris r0, r0, 0x8000
    subfc r3, r4, r3
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_80261F6C
lbl_80261F60:
    mr r3, r28
    mr r4, r29
    bl gpiRemovePeer
lbl_80261F6C:
    mr r29, r30
lbl_80261F70:
    cmpwi r29, 0x0
    bne lbl_80261E88
    lwz r31, 0x1c(r1)
    li r3, 0x0
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// gpiGetPeerByProfile
// ----------------------------------------------------------------------------
asm void gpiGetPeerByProfile() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r3, 0x5d8(r3)
    b lbl_80261FB8
lbl_80261FA8:
    lwz r0, 0x10(r3)
    cmpw r0, r4
    beqlr
    lwz r3, 0x54(r3)
lbl_80261FB8:
    cmpwi r3, 0x0
    bne lbl_80261FA8
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// gpiFreeMessage
// ----------------------------------------------------------------------------
asm void gpiFreeMessage() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x0(r3)
    bl fn_80256C70
    li r0, 0x0
    stw r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// gpiAddPeer
// ----------------------------------------------------------------------------
asm void gpiAddPeer() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r29, 0x0(r3)
    li r3, 0x58
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_80262044
    li r3, 0x0
    b lbl_802620B4
lbl_80262044:
    li r4, 0x0
    li r5, 0x58
    bl memset
    li r0, 0x64
    li r3, 0x0
    stw r0, 0x0(r30)
    stw r31, 0x4(r30)
    stw r28, 0x10(r30)
    bl fn_80256120
    li r0, 0x2710
    lis r5, gpiFreeMessage@ha
    addc r0, r4, r0
    li r31, 0x0
    stw r0, 0x1c(r30)
    adde r0, r3, r31
    addi r5, r5, gpiFreeMessage@l
    li r3, 0x18
    stw r0, 0x18(r30)
    li r4, 0x0
    lwz r0, 0x5d8(r29)
    stw r0, 0x54(r30)
    bl fn_80253528
    stw r3, 0x44(r30)
    mr r3, r30
    stw r30, 0x5d8(r29)
    stw r31, 0x4c(r30)
    stw r31, 0x50(r30)
    stw r31, 0x48(r30)
lbl_802620B4:
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
// gpiPeerGetSig
// ----------------------------------------------------------------------------
asm void gpiPeerGetSig() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    li r7, 0x0
    stw r0, 0x24(r1)
    addi r6, r1, 0x8
    li r8, 0x0
    li r9, 0x0
    stw r31, 0x1c(r1)
    mr r31, r4
    li r4, 0x2
    stw r30, 0x18(r1)
    mr r30, r3
    bl gpiAddOperation
    cmpwi r3, 0x0
    beq lbl_80262118
    b lbl_80262144
lbl_80262118:
    lwz r5, 0x8(r1)
    mr r3, r30
    lwz r4, 0x10(r31)
    lwz r5, 0x18(r5)
    bl gpiSendGetInfo
    cmpwi r3, 0x0
    beq lbl_80262138
    b lbl_80262144
lbl_80262138:
    li r0, 0x65
    li r3, 0x0
    stw r0, 0x0(r31)
lbl_80262144:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// gpiPeerStartConnect
// ----------------------------------------------------------------------------
asm void gpiPeerStartConnect() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r5, r1, 0xc
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r31, 0x0(r3)
    lwz r4, 0x10(r4)
    bl gpiGetProfile
    cmpwi r3, 0x0
    bne lbl_802621AC
    lis r4, lbl_80369410@ha
    mr r3, r29
    addi r4, r4, lbl_80369410@l
    bl gpiSetErrorString
    li r3, 0x3
    b lbl_8026225C
lbl_802621AC:
    lwz r3, 0xc(r1)
    lwz r4, 0xc(r3)
    cmpwi r4, 0x0
    beq lbl_80262250
    lwz r3, 0x1c(r4)
    addi r5, r1, 0x8
    lhz r4, 0x20(r4)
    bl gsUdpEngineGetPeerState
    lwz r0, 0x8(r1)
    cmpwi r0, 0x1
    bne lbl_802621E0
    cmpwi r0, 0x0
    beq lbl_80262230
lbl_802621E0:
    lwz r3, 0xc(r1)
    addi r5, r31, 0x220
    li r6, 0x2710
    lwz r4, 0xc(r3)
    lwz r3, 0x1c(r4)
    lhz r4, 0x20(r4)
    bl gsUdpEngineStartTalkingToPeer
    cmpwi r3, 0x5
    beq lbl_80262230
    lis r5, lbl_80369480@ha
    mr r3, r29
    addi r5, r5, lbl_80369480@l
    li r4, 0x5
    bl gpiSetError
    mr r3, r29
    li r4, 0x3
    li r5, 0x0
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8026225C
lbl_80262230:
    lwz r3, 0xc(r1)
    lwz r3, 0xc(r3)
    lwz r0, 0x1c(r3)
    stw r0, 0x8(r30)
    lwz r3, 0xc(r1)
    lwz r3, 0xc(r3)
    lhz r0, 0x20(r3)
    sth r0, 0xc(r30)
lbl_80262250:
    li r0, 0x67
    li r3, 0x0
    stw r0, 0x0(r30)
lbl_8026225C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// gpiPeerAddMessage
// ----------------------------------------------------------------------------
asm void gpiPeerAddMessage() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    bne lbl_802622AC
    li r3, 0x3
    b lbl_802623DC
lbl_802622AC:
    cmpwi r6, 0x0
    bne lbl_802622BC
    li r3, 0x3
    b lbl_802623DC
lbl_802622BC:
    mr r3, r30
    bl strlen
    mr r31, r3
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x18
    bl memset
    stw r29, 0x18(r1)
    mr r3, r27
    addi r4, r1, 0x8
    la r5, lbl_8049CAB4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_802622F8
    b lbl_802623DC
lbl_802622F8:
    mr r3, r27
    mr r5, r29
    addi r4, r1, 0x8
    bl gpiAppendIntToBuffer
    cmpwi r3, 0x0
    beq lbl_80262314
    b lbl_802623DC
lbl_80262314:
    mr r3, r27
    addi r4, r1, 0x8
    la r5, lbl_8049CAB8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_80262330
    b lbl_802623DC
lbl_80262330:
    mr r3, r27
    mr r5, r31
    addi r4, r1, 0x8
    bl gpiAppendIntToBuffer
    cmpwi r3, 0x0
    beq lbl_8026234C
    b lbl_802623DC
lbl_8026234C:
    mr r3, r27
    addi r4, r1, 0x8
    la r5, lbl_8049CAC0
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_80262368
    b lbl_802623DC
lbl_80262368:
    lwz r0, 0x10(r1)
    mr r3, r27
    mr r5, r30
    mr r6, r31
    stw r0, 0x1c(r1)
    addi r4, r1, 0x8
    bl gpiAppendStringToBufferLen
    cmpwi r3, 0x0
    beq lbl_80262390
    b lbl_802623DC
lbl_80262390:
    mr r3, r27
    addi r4, r1, 0x8
    li r5, 0x0
    bl gpiAppendCharToBuffer
    cmpwi r3, 0x0
    beq lbl_802623AC
    b lbl_802623DC
lbl_802623AC:
    lwz r3, 0x44(r28)
    addi r4, r1, 0x8
    bl fn_80253690
    li r3, 0x0
    bl fn_80256120
    li r5, 0x2710
    li r0, 0x0
    addc r4, r4, r5
    adde r0, r3, r0
    stw r4, 0x1c(r28)
    li r3, 0x0
    stw r0, 0x18(r28)
lbl_802623DC:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// gpiPeerStartTransferMessage
// ----------------------------------------------------------------------------
asm void gpiPeerStartTransferMessage() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    lwz r7, 0x4(r6)
    lwz r0, 0x0(r6)
    lwz r8, 0x8(r6)
    bne lbl_8026242C
    li r3, 0x3
    b lbl_80262454
lbl_8026242C:
    lis r4, lbl_803694B8@ha
    mr r6, r0
    addi r3, r1, 0x8
    addi r4, r4, lbl_803694B8@l
    opword 0x4CC63182
    bl sprintf
    mr r3, r30
    mr r4, r31
    addi r5, r1, 0x8
    bl gpiSendOrBufferString
lbl_80262454:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// gpiPeerFinishTransferMessage
// ----------------------------------------------------------------------------
asm void gpiPeerFinishTransferMessage() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r6
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    bne lbl_802624A8
    li r3, 0x3
    b lbl_8026255C
lbl_802624A8:
    cmpwi r5, 0x0
    bne lbl_802624B4
    la r30, lbl_8049CAC8
lbl_802624B4:
    cmpwi r6, -0x1
    bne lbl_802624C8
    mr r3, r30
    bl strlen
    mr r31, r3
lbl_802624C8:
    lis r4, lbl_803694CC@ha
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r4, lbl_803694CC@l
    opword 0x4CC63182
    bl sprintf
    mr r3, r28
    mr r4, r29
    addi r5, r1, 0x8
    bl gpiSendOrBufferString
    cmpwi r3, 0x0
    beq lbl_802624FC
    b lbl_8026255C
lbl_802624FC:
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl gpiSendOrBufferStringLenToPeer
    cmpwi r3, 0x0
    beq lbl_8026251C
    b lbl_8026255C
lbl_8026251C:
    mr r3, r28
    mr r4, r29
    li r5, 0x0
    bl gpiSendOrBufferChar
    cmpwi r3, 0x0
    beq lbl_80262538
    b lbl_8026255C
lbl_80262538:
    li r3, 0x0
    bl fn_80256120
    li r5, 0x2710
    li r0, 0x0
    addc r4, r4, r5
    adde r0, r3, r0
    stw r4, 0x1c(r29)
    li r3, 0x0
    stw r0, 0x18(r29)
lbl_8026255C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// gpiPeerLeftCallback
// ----------------------------------------------------------------------------
asm void gpiPeerLeftCallback() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r5, 0x0(r6)
    bne lbl_802625A8
    cmpwi r4, 0x0
    bne lbl_802625A8
    li r31, 0x0
    b lbl_802625DC
lbl_802625A8:
    lwz r31, 0x5d8(r5)
    b lbl_802625D0
lbl_802625B0:
    lwz r0, 0x8(r31)
    cmplw r0, r3
    bne lbl_802625CC
    lhz r0, 0xc(r31)
    cmplw r0, r4
    bne lbl_802625CC
    b lbl_802625DC
lbl_802625CC:
    lwz r31, 0x54(r31)
lbl_802625D0:
    cmpwi r31, 0x0
    bne lbl_802625B0
    li r31, 0x0
lbl_802625DC:
    cmpwi r31, 0x0
    beq lbl_802625F8
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80336AC8
    li r0, 0x6a
    stw r0, 0x0(r31)
lbl_802625F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// gpiPeerMessageCallback
// ----------------------------------------------------------------------------
asm void gpiPeerMessageCallback() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r3, 0x0
    lwz r7, 0x0(r8)
    mr r24, r3
    mr r27, r4
    mr r25, r5
    mr r26, r6
    mr r31, r8
    bne lbl_80262650
    cmpwi r4, 0x0
    bne lbl_80262650
    li r30, 0x0
    b lbl_80262684
lbl_80262650:
    lwz r30, 0x5d8(r7)
    b lbl_80262678
lbl_80262658:
    lwz r0, 0x8(r30)
    cmplw r0, r3
    bne lbl_80262674
    lhz r0, 0xc(r30)
    cmplw r0, r4
    bne lbl_80262674
    b lbl_80262684
lbl_80262674:
    lwz r30, 0x54(r30)
lbl_80262678:
    cmpwi r30, 0x0
    bne lbl_80262658
    li r30, 0x0
lbl_80262684:
    cmpwi r30, 0x0
    bne lbl_802626CC
    mr r3, r31
    li r4, -0x1
    li r5, 0x0
    bl gpiAddPeer
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_802626BC
    li r0, 0x68
    stw r0, 0x0(r3)
    stw r24, 0x8(r3)
    sth r27, 0xc(r3)
    b lbl_802626CC
lbl_802626BC:
    stw r24, 0xc(r1)
    addi r3, r1, 0xc
    bl fn_80336AC8
    b lbl_80262774
lbl_802626CC:
    lwz r28, 0x2c(r30)
    lwz r27, 0x28(r30)
    lwz r29, 0x24(r30)
    subf r0, r28, r27
    cmpw r26, r0
    ble lbl_80262748
    cmpwi r26, 0x4000
    li r0, 0x4000
    blt lbl_802626F4
    mr r0, r26
lbl_802626F4:
    add r27, r28, r0
    mr r3, r29
    addi r4, r27, 0x1
    bl fn_80256C5C
    cmpwi r3, 0x0
    bne lbl_80262744
    stw r24, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80336AC8
    mr r3, r29
    bl fn_80256C70
    lis r4, lbl_80369470@ha
    mr r3, r31
    addi r4, r4, lbl_80369470@l
    bl gpiSetErrorString
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    bl gpiCallErrorCallback
    b lbl_80262774
lbl_80262744:
    mr r29, r3
lbl_80262748:
    mr r4, r25
    mr r5, r26
    add r3, r29, r28
    bl memcpy
    stw r29, 0x24(r30)
    li r0, 0x0
    lwz r3, 0x2c(r30)
    add r3, r3, r26
    stw r3, 0x2c(r30)
    stw r27, 0x28(r30)
    stbx r0, r29, r3
lbl_80262774:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// gpiPeerAcceptedCallback
// ----------------------------------------------------------------------------
asm void gpiPeerAcceptedCallback() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r5, 0x0(r7)
    bne lbl_802627BC
    cmpwi r4, 0x0
    bne lbl_802627BC
    li r5, 0x0
    b lbl_802627F0
lbl_802627BC:
    lwz r5, 0x5d8(r5)
    b lbl_802627E4
lbl_802627C4:
    lwz r0, 0x8(r5)
    cmplw r0, r3
    bne lbl_802627E0
    lhz r0, 0xc(r5)
    cmplw r0, r4
    bne lbl_802627E0
    b lbl_802627F0
lbl_802627E0:
    lwz r5, 0x54(r5)
lbl_802627E4:
    cmpwi r5, 0x0
    bne lbl_802627C4
    li r5, 0x0
lbl_802627F0:
    cmpwi r5, 0x0
    bne lbl_80262808
    stw r31, 0x10(r1)
    addi r3, r1, 0x10
    bl fn_80336AC8
    b lbl_80262828
lbl_80262808:
    cmpwi r6, 0x0
    beq lbl_80262828
    li r0, 0x6a
    addi r3, r1, 0xc
    stw r0, 0x0(r5)
    stw r31, 0xc(r1)
    bl fn_80336AC8
    b lbl_80262834
lbl_80262828:
    stw r31, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80336AC8
lbl_80262834:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// gpiPeerPingReplyCallback
// ----------------------------------------------------------------------------
asm void gpiPeerPingReplyCallback() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// gpiPeerAddOp
// ----------------------------------------------------------------------------
asm void gpiPeerAddOp() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x0
    bne lbl_80262860
    blr
lbl_80262860:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_8026287C
    stw r4, 0x4c(r3)
    stw r4, 0x50(r3)
    stw r4, 0x48(r3)
    blr
lbl_8026287C:
    lwz r6, 0x50(r3)
    lwz r5, 0x4c(r3)
    cmplw r5, r6
    bne lbl_80262898
    stw r4, 0xc(r5)
    stw r4, 0x50(r3)
    blr
lbl_80262898:
    stw r4, 0xc(r6)
    stw r4, 0x50(r3)
    blr
}

// ----------------------------------------------------------------------------
// gpiPeerRemoveOp
// ----------------------------------------------------------------------------
asm void gpiPeerRemoveOp() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    cmpwi r4, 0x0
    bne lbl_802628B8
    blr
lbl_802628B8:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r5, 0x4c(r3)
    lwz r0, 0x50(r3)
    cmplw r5, r0
    bne lbl_802628F0
    cmplw r5, r4
    bne lbl_802628F0
    lwz r0, 0xc(r4)
    stw r0, 0x50(r3)
    stw r0, 0x4c(r3)
    stw r0, 0x48(r3)
    b lbl_8026292C
lbl_802628F0:
    cmplw r5, r4
    bne lbl_80262918
    lwz r0, 0xc(r5)
    stw r0, 0x4c(r3)
    stw r0, 0x48(r3)
    b lbl_8026292C
    b lbl_80262918
lbl_8026290C:
    cmpwi r0, 0x0
    beqlr
    mr r5, r0
lbl_80262918:
    lwz r0, 0xc(r5)
    cmplw r0, r4
    bne lbl_8026290C
    lwz r0, 0xc(r4)
    stw r0, 0xc(r5)
lbl_8026292C:
    mr r3, r4
    b fn_80256C70
    blr
}

