#include "types.h"

// Translation unit: src/gamespy/ghttp/ghttpPost.cpp
// Total functions: 24

// Small Data symbols (@sda21)
extern float lbl_8049CD00;
extern float lbl_8049CD04;
extern float lbl_8049CD08;
extern float lbl_8049CD10;
extern float lbl_8049CD18;
extern float lbl_8049CD1C;
extern float lbl_8049CD24;
extern float lbl_8049DBD4;
extern float lbl_8049DBE8;
extern float lbl_8049DBF0;
extern float lbl_8049DBF4;
extern float lbl_8049DBF8;
extern float lbl_8049DBFC;
extern float lbl_8049DC00;
extern float lbl_804A2310;
extern float lbl_804A2311;
extern float lbl_804A2312;
extern float lbl_804A2313;

// Global data symbols (@ha/@l)
extern u8 lbl_8036AF20[];
extern u8 lbl_8036AFEC[];
extern u8 lbl_8036B014[];
extern u8 lbl_8036B040[];
extern u8 lbl_8036B130[];

// Forward declarations
extern void _restgpr_21();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_21();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_802581B4();
extern void fn_802581BC();
extern void fclose();
extern void fn_80197DE4();
extern void fn_8019894C();
extern void fn_80198950();
extern void fn_80253528();
extern void fn_802535C4();
extern void fn_80253658();
extern void fn_80253660();
extern void fn_80253690();
extern void fn_80255E4C();
extern void fn_8025651C();
extern void fn_80256638();
extern void fn_80256C70();
extern void fn_8026EDD0();
extern void fn_8026F474();
extern void fn_80270128();
extern void fn_802701E8();
extern void fn_80270384();
extern void fn_802703D4();
extern void fn_80270430();
extern void fn_80270648();
extern void fn_80270654();
extern void fn_8027071C();
extern void fn_80270724();
extern void fn_80336B28();
extern void fn_80336B2C();
extern void ftell();
extern void ghiAppendCharToBuffer();
extern void ghiAppendDataToBuffer();
extern void ghiCallCompletedCallback();
extern void ghiCleanupConnections();
extern void ghiCreateLock();
extern void ghiDoConnecting();
extern void ghiDoHostLookup();
extern void ghiDoLookupPending();
extern void ghiDoPosting();
extern void ghiDoReceivingFile();
extern void ghiDoReceivingHeaders();
extern void ghiDoReceivingStatus();
extern void ghiDoSecuringSession();
extern void ghiDoSend();
extern void ghiDoSendingRequest();
extern void ghiDoSocketInit();
extern void ghiDoWaiting();
extern void ghiEncryptDataToBuffer();
extern void ghiEnumConnections();
extern void ghiFreeConnection();
extern void ghiFreeLock();
extern void ghiFreePost();
extern void ghiInitBuffer();
extern void ghiInitFixedBuffer();
extern void ghiIsPostAutoFree();
extern void ghiLock();
extern void ghiNewConnection();
extern void ghiPostCleanupState();
extern void ghiPostDoPosting();
extern void ghiPostFileDiskStateDoPosting();
extern void ghiPostFileMemoryStateDoPosting();
extern void ghiPostGetContentType();
extern void ghiPostGetHasFilesContentLength();
extern void ghiPostGetNoFilesContentLength();
extern void ghiPostInitState();
extern void ghiPostSetAutoFree();
extern void ghiPostStateDoPosting();
extern void ghiPostStateInit();
extern void ghiPostStringStateDoPosting();
extern void ghiPostXmlStateDoPosting();
extern void ghiRedirectConnection();
extern void ghiRequestToConnection();
extern void ghiResetBuffer();
extern void ghiUnlock();
extern void memcpy();
extern void memset();
extern void sprintf();
extern void strchr();
extern void strcpy();
extern void strlen();

// ----------------------------------------------------------------------------
// ghiPostSetAutoFree
// ----------------------------------------------------------------------------
asm void ghiPostSetAutoFree() {
    nofralloc
    li r3, 0x3
    blr
}

// ----------------------------------------------------------------------------
// ghiIsPostAutoFree
// ----------------------------------------------------------------------------
asm void ghiIsPostAutoFree() {
    nofralloc
    li r3, 0x3
    blr
}

// ----------------------------------------------------------------------------
// fn_80270128
// ----------------------------------------------------------------------------
asm void fn_80270128() {
    nofralloc
    lis r4, 0x51ec
    lwz r5, 0x114(r3)
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r5
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    cmpwi r0, 0x3
    beqlr
    bge lbl_80270160
    cmpwi r0, 0x1
    beqlr
    bgelr
    blr
lbl_80270160:
    cmpwi r0, 0x5
    beq lbl_802701DC
    bgelr
    b lbl_8027017C
    blr
    blr
    blr
lbl_8027017C:
    cmpwi r5, 0x194
    beq lbl_802701C4
    bge lbl_802701A0
    cmpwi r5, 0x192
    beq lbl_802701D0
    bge lbl_802701B8
    cmpwi r5, 0x191
    bge lbl_802701AC
    b lbl_802701D0
lbl_802701A0:
    cmpwi r5, 0x19a
    beq lbl_802701C4
    b lbl_802701D0
lbl_802701AC:
    li r0, 0x9
    stw r0, 0x3c(r3)
    blr
lbl_802701B8:
    li r0, 0xa
    stw r0, 0x3c(r3)
    blr
lbl_802701C4:
    li r0, 0xb
    stw r0, 0x3c(r3)
    blr
lbl_802701D0:
    li r0, 0x8
    stw r0, 0x3c(r3)
    blr
lbl_802701DC:
    li r0, 0xc
    stw r0, 0x3c(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_802701E8
// ----------------------------------------------------------------------------
asm void fn_802701E8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0x150(r3)
    cmpwi r0, 0x0
    beq lbl_80270214
    li r3, 0x0
    b lbl_8027036C
lbl_80270214:
    lwz r0, 0x10(r3)
    li r4, 0x1
    stw r4, 0x150(r3)
    cmpwi r0, 0x0
    bne lbl_8027022C
    bl ghiDoSocketInit
lbl_8027022C:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x1
    bne lbl_80270240
    mr r3, r31
    bl ghiDoHostLookup
lbl_80270240:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x2
    bne lbl_80270254
    mr r3, r31
    bl ghiDoLookupPending
lbl_80270254:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x3
    bne lbl_80270268
    mr r3, r31
    bl ghiDoConnecting
lbl_80270268:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x4
    bne lbl_8027027C
    mr r3, r31
    bl ghiDoSecuringSession
lbl_8027027C:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x5
    bne lbl_80270290
    mr r3, r31
    bl ghiDoSendingRequest
lbl_80270290:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x6
    bne lbl_802702A4
    mr r3, r31
    bl ghiDoPosting
lbl_802702A4:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x7
    bne lbl_802702B8
    mr r3, r31
    bl ghiDoWaiting
lbl_802702B8:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x8
    bne lbl_802702CC
    mr r3, r31
    bl ghiDoReceivingStatus
lbl_802702CC:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x9
    bne lbl_802702E0
    mr r3, r31
    bl ghiDoReceivingHeaders
lbl_802702E0:
    lwz r0, 0x10(r31)
    cmpwi r0, 0xa
    bne lbl_802702F4
    mr r3, r31
    bl ghiDoReceivingFile
lbl_802702F4:
    lwz r0, 0x12c(r31)
    cmpwi r0, 0x0
    beq lbl_80270308
    mr r3, r31
    bl ghiRedirectConnection
lbl_80270308:
    lwz r0, 0x3c(r31)
    lwz r30, 0x120(r31)
    cmpwi r0, 0x12
    bne lbl_80270338
    cmpwi r30, 0x0
    bne lbl_80270338
    lwz r3, 0x4c(r31)
    bl fn_80255E4C
    cmpwi r3, 0x0
    bne lbl_80270338
    li r0, 0x1
    stw r0, 0x120(r31)
lbl_80270338:
    lwz r0, 0x120(r31)
    cmpwi r0, 0x0
    beq lbl_80270360
    mr r3, r31
    bl fn_80270128
    mr r3, r31
    bl ghiCallCompletedCallback
    mr r3, r31
    bl ghiFreeConnection
    b lbl_80270368
lbl_80270360:
    li r0, 0x0
    stw r0, 0x150(r31)
lbl_80270368:
    mr r3, r30
lbl_8027036C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80270384
// ----------------------------------------------------------------------------
asm void fn_80270384() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl ghiLock
    lwz r3, lbl_8049DBE8
    addi r0, r3, 0x1
    cmpwi r0, 0x1
    stw r0, lbl_8049DBE8
    bne lbl_802703C0
    bl ghiCreateLock
    li r3, 0x7d
    li r0, 0xfa
    stw r3, lbl_8049CD00
    stw r0, lbl_8049CD04
    b lbl_802703C4
lbl_802703C0:
    bl ghiUnlock
lbl_802703C4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802703D4
// ----------------------------------------------------------------------------
asm void fn_802703D4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl ghiLock
    lwz r0, lbl_8049DBE8
    subic. r0, r0, 0x1
    stw r0, lbl_8049DBE8
    bne lbl_8027041C
    bl ghiCleanupConnections
    lwz r3, lbl_8049DBD4
    cmpwi r3, 0x0
    beq lbl_80270410
    bl fn_80256C70
    li r0, 0x0
    stw r0, lbl_8049DBD4
lbl_80270410:
    bl ghiUnlock
    bl ghiFreeLock
    b lbl_80270420
lbl_8027041C:
    bl ghiUnlock
lbl_80270420:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80270430
// ----------------------------------------------------------------------------
asm void fn_80270430() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    cmpwi r3, 0x0
    lwz r30, 0x48(r1)
    lwz r31, 0x4c(r1)
    mr r22, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    mr r28, r9
    mr r29, r10
    beq lbl_80270480
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_80270488
lbl_80270480:
    li r3, -0x2
    b lbl_80270630
lbl_80270488:
    cmpwi cr1, r6, 0x0
    bge cr1, lbl_80270498
    li r3, -0x3
    b lbl_80270630
lbl_80270498:
    cmpwi r5, 0x0
    beq lbl_802704AC
    bne cr1, lbl_802704AC
    li r3, -0x3
    b lbl_80270630
lbl_802704AC:
    lwz r0, lbl_8049DBE8
    cmpwi r0, 0x0
    bne lbl_802704EC
    bl ghiLock
    lwz r3, lbl_8049DBE8
    addi r0, r3, 0x1
    cmpwi r0, 0x1
    stw r0, lbl_8049DBE8
    bne lbl_802704E8
    bl ghiCreateLock
    li r3, 0x7d
    li r0, 0xfa
    stw r3, lbl_8049CD00
    stw r0, lbl_8049CD04
    b lbl_802704EC
lbl_802704E8:
    bl ghiUnlock
lbl_802704EC:
    bl ghiNewConnection
    cmpwi r3, 0x0
    mr r21, r3
    bne lbl_80270504
    li r3, -0x5
    b lbl_80270630
lbl_80270504:
    li r0, 0x0
    stw r0, 0xc(r3)
    mr r3, r22
    bl fn_8025651C
    cmpwi r3, 0x0
    stw r3, 0x14(r21)
    bne lbl_80270530
    mr r3, r21
    bl ghiFreeConnection
    li r3, -0x5
    b lbl_80270630
lbl_80270530:
    cmpwi r23, 0x0
    beq lbl_80270568
    lbz r0, 0x0(r23)
    extsb. r0, r0
    beq lbl_80270568
    mr r3, r23
    bl fn_8025651C
    cmpwi r3, 0x0
    stw r3, 0x2c(r21)
    bne lbl_80270568
    mr r3, r21
    bl ghiFreeConnection
    li r3, -0x5
    b lbl_80270630
lbl_80270568:
    stw r26, 0x160(r21)
    neg r0, r24
    or r0, r0, r24
    stw r28, 0x34(r21)
    srwi. r0, r0, 31
    stw r29, 0x40(r21)
    stw r30, 0x44(r21)
    stw r31, 0x48(r21)
    stw r27, 0x158(r21)
    stw r0, 0x108(r21)
    beq lbl_802705AC
    mr r3, r21
    mr r5, r24
    mr r6, r25
    addi r4, r21, 0xe4
    bl ghiInitFixedBuffer
    b lbl_802705C0
lbl_802705AC:
    mr r3, r21
    addi r4, r21, 0xe4
    li r5, 0x800
    li r6, 0x800
    bl ghiInitBuffer
lbl_802705C0:
    cmpwi r3, 0x0
    bne lbl_802705D8
    mr r3, r21
    bl ghiFreeConnection
    li r3, -0x1
    b lbl_80270630
lbl_802705D8:
    cmpwi r26, 0x0
    beq lbl_80270600
    mr r3, r21
    bl ghiPostInitState
    cmpwi r3, 0x0
    bne lbl_80270600
    mr r3, r21
    bl ghiFreeConnection
    li r3, -0x6
    b lbl_80270630
lbl_80270600:
    cmpwi r28, 0x0
    beq lbl_8027062C
    b lbl_80270614
lbl_8027060C:
    li r3, 0xa
    bl fn_80256638
lbl_80270614:
    mr r3, r21
    bl fn_802701E8
    cmpwi r3, 0x0
    beq lbl_8027060C
    li r3, 0x0
    b lbl_80270630
lbl_8027062C:
    lwz r3, 0x4(r21)
lbl_80270630:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80270648
// ----------------------------------------------------------------------------
asm void fn_80270648() {
    nofralloc
    lis r3, fn_802701E8@ha
    addi r3, r3, fn_802701E8@l
    b ghiEnumConnections
}

// ----------------------------------------------------------------------------
// fn_80270654
// ----------------------------------------------------------------------------
asm void fn_80270654() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl ghiRequestToConnection
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802706A0
    b lbl_802706CC
    b lbl_802706A0
lbl_80270684:
    mr r3, r30
    bl ghiRequestToConnection
    cmpwi r3, 0x0
    beq lbl_80270698
    bl fn_802701E8
lbl_80270698:
    li r3, 0xa
    bl fn_80256638
lbl_802706A0:
    mr r3, r30
    bl ghiRequestToConnection
    cmpwi r3, 0x0
    beq lbl_802706B8
    lwz r0, 0x10(r3)
    b lbl_802706BC
lbl_802706B8:
    li r0, 0x0
lbl_802706BC:
    cmpwi r0, 0x2
    beq lbl_80270684
    mr r3, r31
    bl ghiFreeConnection
lbl_802706CC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// ghiFreePost
// ----------------------------------------------------------------------------
asm void ghiFreePost() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bl ghiRequestToConnection
    cmpwi r3, 0x0
    beq lbl_80270708
    stw r31, 0x184(r3)
lbl_80270708:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8027071C
// ----------------------------------------------------------------------------
asm void fn_8027071C() {
    nofralloc
    lwz r3, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80270724
// ----------------------------------------------------------------------------
asm void fn_80270724() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x0(r3)
    bl fn_802535C4
    mr r3, r31
    bl fn_80256C70
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// ghiPostGetContentType
// ----------------------------------------------------------------------------
asm void ghiPostGetContentType() {
    nofralloc
    lwz r3, 0x160(r3)
    lis r4, lbl_8036AF20@ha
    addi r4, r4, lbl_8036AF20@l
    cmpwi r3, 0x0
    bne lbl_80270778
    la r3, lbl_8049CD08
    blr
lbl_80270778:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_8027078C
    addi r3, r4, 0x44
    blr
lbl_8027078C:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_802707A0
    addi r3, r4, 0x58
    blr
lbl_802707A0:
    lwz r0, 0x10(r3)
    addi r3, r4, 0xa8
    cmpwi r0, 0x0
    beqlr
    addi r3, r4, 0x9c
    blr
}

// ----------------------------------------------------------------------------
// ghiPostGetNoFilesContentLength
// ----------------------------------------------------------------------------
asm void ghiPostGetNoFilesContentLength() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r29, 0x160(r3)
    li r27, 0x0
    lwz r3, 0x0(r29)
    bl fn_80253658
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802707F0
    li r3, 0x0
    b lbl_80270864
lbl_802707F0:
    li r28, 0x0
    b lbl_80270854
lbl_802707F8:
    lwz r3, 0x0(r29)
    mr r4, r28
    bl fn_80253660
    lwz r0, 0x0(r3)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_8027083C
    lwz r3, 0x4(r3)
    bl strlen
    lwz r0, 0x14(r31)
    add r27, r27, r3
    lwz r3, 0xc(r31)
    slwi r0, r0, 1
    add r27, r27, r3
    add r27, r27, r0
    addi r27, r27, 0x1
    b lbl_80270850
lbl_8027083C:
    cmpwi r0, 0x3
    bne lbl_80270850
    lwz r3, 0x8(r3)
    bl fn_802581BC
    add r27, r27, r3
lbl_80270850:
    addi r28, r28, 0x1
lbl_80270854:
    cmpw r28, r30
    blt lbl_802707F8
    add r3, r27, r30
    subi r3, r3, 0x1
lbl_80270864:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ghiPostGetHasFilesContentLength
// ----------------------------------------------------------------------------
asm void ghiPostGetHasFilesContentLength() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lwz r0, lbl_8049DBF0
    mr r25, r3
    lwz r28, 0x160(r3)
    li r26, 0x0
    cmpwi r0, 0x0
    bne lbl_80270904
    lwz r0, 0x14(r28)
    cmpwi r0, 0x0
    beq lbl_802708D4
    li r3, 0xc
    li r0, 0x0
    stw r3, lbl_8049DBF0
    stw r3, lbl_8049DBF4
    stw r3, lbl_8049DBF8
    stw r3, lbl_8049DC00
    stw r0, lbl_8049DBFC
    b lbl_80270904
lbl_802708D4:
    lis r3, lbl_8036AFEC@ha
    addi r3, r3, lbl_8036AFEC@l
    bl strlen
    addi r6, r3, 0x2f
    addi r5, r3, 0x4c
    addi r0, r3, 0x4
    li r4, 0x0
    stw r3, lbl_8049DBF0
    stw r6, lbl_8049DBF4
    stw r5, lbl_8049DBF8
    stw r4, lbl_8049DC00
    stw r0, lbl_8049DBFC
lbl_80270904:
    lwz r3, 0x0(r28)
    bl fn_80253658
    mr r30, r3
    li r27, 0x0
    lis r24, lbl_8036B014@ha
    b lbl_80270BD4
lbl_8027091C:
    lwz r3, 0x0(r28)
    mr r4, r27
    bl fn_80253660
    lwz r0, 0x0(r3)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_80270958
    lwz r0, lbl_8049DBF4
    lwz r3, 0x4(r3)
    add r26, r26, r0
    bl strlen
    lwz r0, 0xc(r31)
    add r26, r26, r3
    add r26, r26, r0
    b lbl_80270BD0
lbl_80270958:
    cmpwi r0, 0x1
    bne lbl_80270A34
    lwz r0, lbl_8049DBF8
    lwz r3, 0x4(r3)
    add r26, r26, r0
    bl strlen
    add r26, r26, r3
    lwz r3, 0x10(r31)
    bl strlen
    add r26, r26, r3
    lwz r3, 0x164(r25)
    mr r4, r27
    bl fn_80253660
    lwz r23, 0x14(r28)
    lwz r29, 0xc(r3)
    cmpwi r23, 0x0
    add r26, r26, r29
    bne lbl_802709AC
    lwz r3, 0xc(r31)
    bl strlen
    add r26, r26, r3
lbl_802709AC:
    cmpwi r23, 0x0
    beq lbl_80270BD0
    lwz r3, 0x4(r31)
    bl strlen
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_802709E0
    add r26, r26, r0
lbl_802709E0:
    lwz r3, 0x10(r31)
    bl strlen
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_80270A0C
    add r26, r26, r0
lbl_80270A0C:
    slwi r0, r29, 30
    srwi r3, r29, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_80270BD0
    add r26, r26, r0
    b lbl_80270BD0
lbl_80270A34:
    cmpwi r0, 0x2
    bne lbl_80270B0C
    lwz r0, lbl_8049DBF8
    lwz r22, 0x4(r3)
    add r26, r26, r0
    mr r3, r22
    bl strlen
    lwz r21, 0x14(r31)
    add r26, r26, r3
    mr r3, r21
    bl strlen
    lwz r23, 0x14(r28)
    add r26, r26, r3
    lwz r29, 0xc(r31)
    cmpwi r23, 0x0
    add r26, r26, r29
    bne lbl_80270A84
    lwz r3, 0x10(r31)
    bl strlen
    add r26, r26, r3
lbl_80270A84:
    cmpwi r23, 0x0
    beq lbl_80270BD0
    mr r3, r22
    bl strlen
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_80270AB8
    add r26, r26, r0
lbl_80270AB8:
    mr r3, r21
    bl strlen
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_80270AE4
    add r26, r26, r0
lbl_80270AE4:
    slwi r0, r29, 30
    srwi r3, r29, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_80270BD0
    add r26, r26, r0
    b lbl_80270BD0
lbl_80270B0C:
    cmpwi r0, 0x3
    bne lbl_80270BC8
    lwz r0, lbl_8049DC00
    lwz r3, 0x8(r3)
    add r26, r26, r0
    bl fn_802581BC
    add r26, r26, r3
    lwz r3, 0x8(r31)
    bl fn_802581BC
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_80270B54
    add r26, r26, r0
lbl_80270B54:
    la r3, lbl_8049CD10
    bl strlen
    add r26, r26, r3
    la r3, lbl_8049CD10
    bl strlen
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_80270B8C
    add r26, r26, r0
lbl_80270B8C:
    addi r3, r24, lbl_8036B014@l
    bl strlen
    add r26, r26, r3
    addi r3, r24, lbl_8036B014@l
    bl strlen
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r0, r0, 0x4
    cmpwi r0, 0x4
    beq lbl_80270BD0
    add r26, r26, r0
    b lbl_80270BD0
lbl_80270BC8:
    li r3, 0x0
    b lbl_80270BE4
lbl_80270BD0:
    addi r27, r27, 0x1
lbl_80270BD4:
    cmpw r27, r30
    blt lbl_8027091C
    lwz r0, lbl_8049DBFC
    add r3, r26, r0
lbl_80270BE4:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// ghiPostStateInit
// ----------------------------------------------------------------------------
asm void ghiPostStateInit() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, -0x1
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x0(r3)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    stw r0, 0x4(r3)
    beq lbl_80270CA0
    cmpwi r4, 0x1
    bne lbl_80270C88
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    bne lbl_80270C44
    li r3, 0x0
    b lbl_80270CA4
lbl_80270C44:
    li r4, 0x0
    li r5, 0x2
    bl fn_8019894C
    cmpwi r3, 0x0
    beq lbl_80270C60
    li r3, 0x0
    b lbl_80270CA4
lbl_80270C60:
    lwz r3, 0x8(r31)
    bl ftell
    cmpwi r3, -0x1
    stw r3, 0xc(r31)
    bne lbl_80270C7C
    li r3, 0x0
    b lbl_80270CA4
lbl_80270C7C:
    lwz r3, 0x8(r31)
    bl fn_80198950
    b lbl_80270CA0
lbl_80270C88:
    cmpwi r4, 0x2
    beq lbl_80270CA0
    cmpwi r4, 0x3
    beq lbl_80270CA0
    li r3, 0x0
    b lbl_80270CA4
lbl_80270CA0:
    li r3, 0x1
lbl_80270CA4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// ghiPostInitState
// ----------------------------------------------------------------------------
asm void ghiPostInitState() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r4, 0x160(r3)
    cmpwi r4, 0x0
    bne lbl_80270CEC
    li r3, 0x0
    b lbl_80270E64
lbl_80270CEC:
    li r0, 0x0
    stw r0, 0x168(r3)
    stw r0, 0x16c(r3)
    stw r0, 0x170(r3)
    stw r0, 0x180(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x174(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x178(r3)
    lwz r3, 0x0(r4)
    bl fn_80253658
    mr r30, r3
    li r3, 0x10
    mr r4, r30
    li r5, 0x0
    bl fn_80253528
    cmpwi r3, 0x0
    stw r3, 0x164(r31)
    bne lbl_80270D40
    li r3, 0x0
    b lbl_80270E64
lbl_80270D40:
    li r28, 0x0
    b lbl_80270DFC
lbl_80270D48:
    lwz r3, 0x160(r31)
    mr r4, r28
    lwz r3, 0x0(r3)
    bl fn_80253660
    mr r29, r3
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x10
    bl memset
    stw r29, 0x8(r1)
    addi r3, r1, 0x8
    bl ghiPostStateInit
    cmpwi r3, 0x0
    bne lbl_80270DEC
    li r30, 0x0
    subi r28, r28, 0x1
    b lbl_80270DCC
lbl_80270D8C:
    lwz r3, 0x164(r31)
    mr r4, r28
    bl fn_80253660
    lwz r4, 0x0(r3)
    mr r29, r3
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_80270DC8
    cmpwi r0, 0x1
    bne lbl_80270DC8
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_80270DC4
    bl fclose
lbl_80270DC4:
    stw r30, 0x8(r29)
lbl_80270DC8:
    subi r28, r28, 0x1
lbl_80270DCC:
    cmpwi r28, 0x0
    bge lbl_80270D8C
    lwz r3, 0x164(r31)
    bl fn_802535C4
    li r0, 0x0
    li r3, 0x0
    stw r0, 0x164(r31)
    b lbl_80270E64
lbl_80270DEC:
    lwz r3, 0x164(r31)
    addi r4, r1, 0x8
    bl fn_80253690
    addi r28, r28, 0x1
lbl_80270DFC:
    cmpw r28, r30
    blt lbl_80270D48
    lwz r3, 0x160(r31)
    cmpwi r3, 0x0
    bne lbl_80270E18
    li r3, 0x0
    b lbl_80270E38
lbl_80270E18:
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_80270E30
    mr r3, r31
    bl ghiPostGetHasFilesContentLength
    b lbl_80270E38
lbl_80270E30:
    mr r3, r31
    bl ghiPostGetNoFilesContentLength
lbl_80270E38:
    stw r3, 0x170(r31)
    lwz r3, 0x160(r31)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    bne lbl_80270E58
    li r0, 0x1
    stw r0, 0x17c(r31)
    b lbl_80270E60
lbl_80270E58:
    li r0, 0x0
    stw r0, 0x17c(r31)
lbl_80270E60:
    li r3, 0x1
lbl_80270E64:
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
// ghiPostCleanupState
// ----------------------------------------------------------------------------
asm void ghiPostCleanupState() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x164(r3)
    mr r27, r3
    cmpwi r0, 0x0
    beq lbl_80270F18
    mr r3, r0
    bl fn_80253658
    mr r29, r3
    li r28, 0x0
    li r31, 0x0
    b lbl_80270F00
lbl_80270EC0:
    lwz r3, 0x164(r27)
    mr r4, r28
    bl fn_80253660
    lwz r4, 0x0(r3)
    mr r30, r3
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_80270EFC
    cmpwi r0, 0x1
    bne lbl_80270EFC
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_80270EF8
    bl fclose
lbl_80270EF8:
    stw r31, 0x8(r30)
lbl_80270EFC:
    addi r28, r28, 0x1
lbl_80270F00:
    cmpw r28, r29
    blt lbl_80270EC0
    lwz r3, 0x164(r27)
    bl fn_802535C4
    li r0, 0x0
    stw r0, 0x164(r27)
lbl_80270F18:
    lwz r29, 0x160(r27)
    cmpwi r29, 0x0
    beq lbl_80270F48
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    beq lbl_80270F48
    lwz r3, 0x0(r29)
    bl fn_802535C4
    mr r3, r29
    bl fn_80256C70
    li r0, 0x0
    stw r0, 0x160(r27)
lbl_80270F48:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ghiPostStringStateDoPosting
// ----------------------------------------------------------------------------
asm void ghiPostStringStateDoPosting() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r6, 0x0(r3)
    mr r30, r4
    lwz r5, 0xc(r6)
    cmpwi r5, 0x0
    bne lbl_80270F90
    li r3, 0x1
    b lbl_802710F4
lbl_80270F90:
    lwz r3, 0x160(r4)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_80271090
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_80271090
    lwz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_80271090
    lwz r31, 0x8(r6)
    lbz r6, lbl_804A2310
    lbz r5, lbl_804A2311
    lbz r3, lbl_804A2312
    lbz r0, lbl_804A2313
    stb r6, 0x8(r1)
    stb r5, 0x9(r1)
    stb r3, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x194(r4)
    cmpwi r0, 0x0
    bne lbl_80270FF0
    addi r26, r4, 0x54
    b lbl_80270FF4
lbl_80270FF0:
    addi r26, r4, 0x78
lbl_80270FF4:
    lis r29, lbl_8036B040@ha
    lis r28, lbl_8036AF20@ha
    addi r29, r29, lbl_8036B040@l
    b lbl_80271080
lbl_80271004:
    mr r4, r27
    addi r3, r28, lbl_8036AF20@l
    bl strchr
    cmpwi r3, 0x0
    beq lbl_80271028
    mr r3, r26
    mr r4, r27
    bl ghiAppendCharToBuffer
    b lbl_8027107C
lbl_80271028:
    cmpwi r27, 0x20
    bne lbl_80271040
    mr r3, r26
    li r4, 0x2b
    bl ghiAppendCharToBuffer
    b lbl_8027107C
lbl_80271040:
    slwi r0, r27, 28
    srwi r5, r27, 31
    subf r0, r5, r0
    srawi r4, r27, 4
    rotlwi r0, r0, 4
    mr r3, r26
    addze r6, r4
    addi r4, r1, 0x8
    add r0, r0, r5
    lbzx r6, r29, r6
    lbzx r0, r29, r0
    li r5, 0x3
    stb r6, 0x9(r1)
    stb r0, 0xa(r1)
    bl ghiAppendDataToBuffer
lbl_8027107C:
    addi r31, r31, 0x1
lbl_80271080:
    lbz r27, 0x0(r31)
    extsb. r27, r27
    bne lbl_80271004
    b lbl_802710AC
lbl_80271090:
    lwz r4, 0x8(r6)
    mr r3, r30
    bl fn_8026F474
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_802710F4
lbl_802710AC:
    lwz r0, 0x194(r30)
    cmpwi r0, 0x0
    bne lbl_802710F0
    mr r3, r30
    bl fn_8026EDD0
    cmpwi r3, 0x0
    bne lbl_802710D0
    li r3, 0x0
    b lbl_802710F4
lbl_802710D0:
    lwz r3, 0x64(r30)
    lwz r0, 0x60(r30)
    cmpw r3, r0
    bne lbl_802710E8
    addi r3, r30, 0x54
    bl ghiResetBuffer
lbl_802710E8:
    li r3, 0x1
    b lbl_802710F4
lbl_802710F0:
    li r3, 0x1
lbl_802710F4:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// ghiPostXmlStateDoPosting
// ----------------------------------------------------------------------------
asm void ghiPostXmlStateDoPosting() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    li r28, 0x0
    lwz r3, 0x0(r3)
    lwz r29, 0x8(r3)
    sth r0, 0x8(r1)
    stb r0, 0xa(r1)
    lwz r3, 0x160(r4)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_80271180
    mr r3, r29
    bl fn_802581BC
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r28, r0, 0x4
    cmpwi r28, 0x4
    bne lbl_80271180
    li r28, 0x0
lbl_80271180:
    lwz r0, 0x194(r31)
    cmpwi r0, 0x0
    beq lbl_8027123C
    lwz r0, 0x1a4(r31)
    cmpwi r0, 0x1
    bne lbl_8027123C
    mr r3, r29
    bl fn_802581BC
    mr r30, r3
    mr r3, r29
    bl fn_802581B4
    mr r4, r3
    mr r5, r30
    addi r3, r31, 0x78
    bl ghiAppendDataToBuffer
    cmpwi r3, 0x0
    beq lbl_802711F4
    mr r5, r28
    addi r3, r31, 0x78
    addi r4, r1, 0x8
    bl ghiAppendDataToBuffer
    cmpwi r3, 0x0
    beq lbl_802711F4
    lwz r4, 0x7c(r31)
    addi r3, r31, 0x54
    lwz r5, 0x84(r31)
    bl ghiEncryptDataToBuffer
    cmpwi r3, 0x0
    bne lbl_802711FC
lbl_802711F4:
    li r3, 0x0
    b lbl_8027128C
lbl_802711FC:
    addi r3, r31, 0x78
    bl ghiResetBuffer
    mr r3, r31
    bl fn_8026EDD0
    cmpwi r3, 0x0
    bne lbl_8027121C
    li r3, 0x0
    b lbl_8027128C
lbl_8027121C:
    lwz r3, 0x64(r31)
    lwz r0, 0x60(r31)
    cmpw r3, r0
    bne lbl_80271234
    addi r3, r31, 0x54
    bl ghiResetBuffer
lbl_80271234:
    li r3, 0x1
    b lbl_8027128C
lbl_8027123C:
    mr r3, r29
    bl fn_802581BC
    mr r30, r3
    mr r3, r29
    bl fn_802581B4
    mr r4, r3
    mr r3, r31
    mr r5, r30
    bl fn_8026F474
    cmpwi r3, 0x0
    bne lbl_80271270
    li r3, 0x0
    b lbl_8027128C
lbl_80271270:
    mr r3, r31
    mr r5, r28
    addi r4, r1, 0x8
    bl fn_8026F474
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_8027128C:
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
// ghiPostFileDiskStateDoPosting
// ----------------------------------------------------------------------------
asm void ghiPostFileDiskStateDoPosting() {
    nofralloc
    stwu r1, -0x1020(r1)
    mflr r0
    stw r0, 0x1024(r1)
    stw r31, 0x101c(r1)
    mr r31, r4
    stw r30, 0x1018(r1)
    mr r30, r3
lbl_802712C8:
    lwz r6, 0x8(r30)
    addi r3, r1, 0x10
    li r4, 0x1
    li r5, 0x1000
    bl fn_80197DE4
    cmpwi r3, 0x0
    mr r5, r3
    bgt lbl_80271300
    li r3, 0x1
    li r0, 0xe
    stw r3, 0x120(r31)
    li r3, 0x0
    stw r0, 0x3c(r31)
    b lbl_802713D4
lbl_80271300:
    lwz r4, 0x4(r30)
    lwz r0, 0xc(r30)
    add r3, r4, r3
    cmpw r3, r0
    stw r3, 0x4(r30)
    ble lbl_80271330
    li r3, 0x1
    li r0, 0xe
    stw r3, 0x120(r31)
    li r3, 0x0
    stw r0, 0x3c(r31)
    b lbl_802713D4
lbl_80271330:
    mr r3, r31
    addi r4, r1, 0x10
    bl fn_8026F474
    cmpwi r3, 0x0
    bne lbl_8027134C
    li r3, 0x0
    b lbl_802713D4
lbl_8027134C:
    lwz r4, 0x4(r30)
    lwz r0, 0xc(r30)
    cmpw r4, r0
    bne lbl_802713C8
    lwz r3, 0x160(r31)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_802713C0
    li r0, 0x0
    sth r0, 0x8(r1)
    stb r0, 0xa(r1)
    lwz r3, 0xc(r30)
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r5, r0, 0x4
    cmpwi r5, 0x4
    beq lbl_802713C0
    cmpwi r5, 0x0
    ble lbl_802713C0
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_8026F474
    cmpwi r3, 0x0
    bne lbl_802713C0
    li r3, 0x0
    b lbl_802713D4
lbl_802713C0:
    li r3, 0x1
    b lbl_802713D4
lbl_802713C8:
    cmpwi r3, 0x1
    beq lbl_802712C8
    li r3, 0x2
lbl_802713D4:
    lwz r0, 0x1024(r1)
    lwz r31, 0x101c(r1)
    lwz r30, 0x1018(r1)
    mtlr r0
    addi r1, r1, 0x1020
    blr
}

// ----------------------------------------------------------------------------
// ghiPostFileMemoryStateDoPosting
// ----------------------------------------------------------------------------
asm void ghiPostFileMemoryStateDoPosting() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r6, 0x0(r3)
    lwz r5, 0xc(r6)
    cmpwi r5, 0x0
    bne lbl_80271424
    li r3, 0x1
    b lbl_802715EC
lbl_80271424:
    lwz r0, 0x194(r4)
    cmpwi r0, 0x0
    beq lbl_8027143C
    lwz r0, 0x1a4(r4)
    cmpwi r0, 0x0
    bne lbl_80271518
lbl_8027143C:
    lwz r4, 0x4(r30)
    mr r3, r31
    lwz r0, 0x8(r6)
    subf r5, r4, r5
    add r4, r0, r4
    bl ghiDoSend
    cmpwi r3, -0x1
    beq lbl_8027146C
    bge lbl_8027147C
    cmpwi r3, -0x2
    bge lbl_80271474
    b lbl_8027147C
lbl_8027146C:
    li r3, 0x0
    b lbl_802715EC
lbl_80271474:
    li r3, 0x2
    b lbl_802715EC
lbl_8027147C:
    lwz r0, 0x4(r30)
    lwz r6, 0x0(r30)
    add r0, r0, r3
    stw r0, 0x4(r30)
    lwz r5, 0xc(r6)
    cmpw r5, r0
    bne lbl_80271508
    lwz r3, 0x160(r31)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_80271500
    li r0, 0x0
    sth r0, 0xc(r1)
    stb r0, 0xe(r1)
    lwz r3, 0x0(r30)
    lwz r3, 0xc(r3)
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r5, r0, 0x4
    cmpwi r5, 0x4
    beq lbl_80271500
    cmpwi r5, 0x0
    ble lbl_80271500
    mr r3, r31
    addi r4, r1, 0xc
    bl fn_8026F474
    cmpwi r3, 0x0
    bne lbl_80271500
    li r3, 0x0
    b lbl_802715EC
lbl_80271500:
    li r3, 0x1
    b lbl_802715EC
lbl_80271508:
    cmpwi r3, 0x0
    bne lbl_8027143C
    li r3, 0x2
    b lbl_802715EC
lbl_80271518:
    lwz r4, 0x4(r30)
    li r29, 0x3f01
    subf r0, r4, r5
    cmpwi r0, 0x3f01
    bge lbl_80271530
    mr r29, r0
lbl_80271530:
    lwz r0, 0x8(r6)
    mr r3, r31
    mr r5, r29
    add r4, r0, r4
    bl fn_8026F474
    cmpwi r3, 0x0
    bne lbl_80271554
    li r3, 0x0
    b lbl_802715EC
lbl_80271554:
    lwz r0, 0x4(r30)
    lwz r6, 0x0(r30)
    add r0, r0, r29
    stw r0, 0x4(r30)
    lwz r5, 0xc(r6)
    cmpw r5, r0
    bne lbl_802715E0
    lwz r3, 0x160(r31)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_802715D8
    li r0, 0x0
    sth r0, 0x8(r1)
    stb r0, 0xa(r1)
    lwz r3, 0x0(r30)
    lwz r3, 0xc(r3)
    slwi r0, r3, 30
    srwi r3, r3, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add r0, r0, r3
    subfic r5, r0, 0x4
    cmpwi r5, 0x4
    beq lbl_802715D8
    cmpwi r5, 0x0
    ble lbl_802715D8
    mr r3, r31
    addi r4, r1, 0x8
    bl fn_8026F474
    cmpwi r3, 0x0
    bne lbl_802715D8
    li r3, 0x0
    b lbl_802715EC
lbl_802715D8:
    li r3, 0x1
    b lbl_802715EC
lbl_802715E0:
    cmpwi r3, 0x1
    beq lbl_80271518
    li r3, 0x2
lbl_802715EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ghiPostStateDoPosting
// ----------------------------------------------------------------------------
asm void ghiPostStateDoPosting() {
    nofralloc
    stwu r1, -0x840(r1)
    mflr r0
    stw r0, 0x844(r1)
    addi r11, r1, 0x840
    bl _savegpr_26
    lwz r0, 0x4(r3)
    lis r31, lbl_8036AF20@ha
    mr r27, r3
    mr r28, r4
    cmpwi r0, -0x1
    addi r31, r31, lbl_8036AF20@l
    li r29, 0x0
    bne lbl_80271BB0
    li r0, 0x0
    stw r0, 0x4(r3)
    lwz r4, 0x160(r4)
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_802716A0
    lwz r0, 0x10(r4)
    cmpwi r0, 0x0
    bne lbl_802716A0
    cmpwi r5, 0x0
    beq lbl_80271684
    lwz r5, 0x0(r27)
    addi r3, r1, 0x20
    la r4, lbl_8049CD18
    lwz r5, 0x4(r5)
    opword 0x4CC63182
    bl sprintf
    b lbl_80271ADC
lbl_80271684:
    lwz r5, 0x0(r27)
    addi r3, r1, 0x20
    la r4, lbl_8049CD1C
    lwz r5, 0x4(r5)
    opword 0x4CC63182
    bl sprintf
    b lbl_80271ADC
lbl_802716A0:
    lwz r8, 0x0(r3)
    lwz r7, 0x0(r8)
    cmpwi r7, 0x0
    bne lbl_802716D8
    cmpwi r5, 0x0
    addi r3, r1, 0x20
    addi r4, r31, 0x138
    addi r5, r31, 0x190
    beq lbl_802716C8
    addi r5, r31, 0x168
lbl_802716C8:
    lwz r6, 0x4(r8)
    opword 0x4CC63182
    bl sprintf
    b lbl_80271ADC
lbl_802716D8:
    cmpwi r7, 0x3
    bne lbl_802718B4
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_802718A8
    li r0, 0x8
    cmpwi r5, 0x0
    stb r0, 0x14(r1)
    beq lbl_80271704
    ori r0, r0, 0x4
    stb r0, 0x14(r1)
lbl_80271704:
    cmpwi r6, 0x0
    beq lbl_80271718
    lbz r0, 0x14(r1)
    ori r0, r0, 0x2
    stb r0, 0x14(r1)
lbl_80271718:
    li r0, 0x20
    li r30, 0x0
    stb r0, 0x15(r1)
    la r3, lbl_8049CD10
    sth r30, 0x16(r1)
    bl strlen
    clrlwi r3, r3, 16
    bl fn_80336B2C
    sth r3, 0x18(r1)
    addi r3, r31, 0xf4
    bl strlen
    clrlwi r3, r3, 16
    bl fn_80336B2C
    sth r3, 0x1a(r1)
    lwz r3, 0x0(r27)
    lwz r3, 0x8(r3)
    bl fn_802581BC
    bl fn_80336B28
    stw r3, 0x1c(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    li r5, 0xc
    bl memcpy
    addi r3, r1, 0x2c
    la r4, lbl_8049CD10
    bl strcpy
    la r3, lbl_8049CD10
    bl strlen
    addi r29, r3, 0xc
    la r3, lbl_8049CD10
    bl strlen
    clrlwi r0, r3, 30
    subfic r4, r0, 0x4
    cmpwi r4, 0x4
    beq lbl_80271808
    cmpwi r4, 0x0
    addi r0, r1, 0x20
    add r3, r0, r29
    ble lbl_80271808
    srwi. r0, r4, 3
    mtctr r0
    beq lbl_802717F4
lbl_802717C0:
    stb r30, 0x0(r3)
    addi r29, r29, 0x8
    stb r30, 0x1(r3)
    stb r30, 0x2(r3)
    stb r30, 0x3(r3)
    stb r30, 0x4(r3)
    stb r30, 0x5(r3)
    stb r30, 0x6(r3)
    stb r30, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_802717C0
    andi. r4, r4, 0x7
    beq lbl_80271808
lbl_802717F4:
    mtctr r4
lbl_802717F8:
    stb r30, 0x0(r3)
    addi r29, r29, 0x1
    addi r3, r3, 0x1
    bdnz lbl_802717F8
lbl_80271808:
    addi r3, r1, 0x20
    addi r4, r31, 0xf4
    add r3, r3, r29
    bl strcpy
    addi r3, r31, 0xf4
    bl strlen
    add r29, r29, r3
    addi r3, r31, 0xf4
    bl strlen
    clrlwi r0, r3, 30
    subfic r5, r0, 0x4
    cmpwi r5, 0x4
    beq lbl_80271ADC
    cmpwi r5, 0x0
    addi r0, r1, 0x20
    li r4, 0x0
    add r3, r0, r29
    ble lbl_80271ADC
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_80271890
lbl_8027185C:
    stb r4, 0x0(r3)
    addi r29, r29, 0x8
    stb r4, 0x1(r3)
    stb r4, 0x2(r3)
    stb r4, 0x3(r3)
    stb r4, 0x4(r3)
    stb r4, 0x5(r3)
    stb r4, 0x6(r3)
    stb r4, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_8027185C
    andi. r5, r5, 0x7
    beq lbl_80271ADC
lbl_80271890:
    mtctr r5
lbl_80271894:
    stb r4, 0x0(r3)
    addi r29, r29, 0x1
    addi r3, r3, 0x1
    bdnz lbl_80271894
    b lbl_80271ADC
lbl_802718A8:
    li r0, 0x0
    stb r0, 0x20(r1)
    b lbl_80271ADC
lbl_802718B4:
    subi r0, r7, 0x1
    cmplwi r0, 0x1
    bgt lbl_80271ADC
    cmpwi r7, 0x1
    bne lbl_802718D8
    lwz r26, 0xc(r3)
    lwz r7, 0xc(r8)
    lwz r30, 0x10(r8)
    b lbl_802718E4
lbl_802718D8:
    lwz r26, 0xc(r8)
    lwz r7, 0x10(r8)
    lwz r30, 0x14(r8)
lbl_802718E4:
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_80271AB4
    li r0, 0x8
    cmpwi r5, 0x0
    stb r0, 0x8(r1)
    beq lbl_80271908
    ori r0, r0, 0x4
    stb r0, 0x8(r1)
lbl_80271908:
    cmpwi r6, 0x0
    beq lbl_8027191C
    lbz r0, 0x8(r1)
    ori r0, r0, 0x2
    stb r0, 0x8(r1)
lbl_8027191C:
    li r0, 0x10
    li r31, 0x0
    stb r0, 0x9(r1)
    sth r31, 0xa(r1)
    lwz r3, 0x0(r3)
    lwz r3, 0x4(r3)
    bl strlen
    clrlwi r3, r3, 16
    bl fn_80336B2C
    sth r3, 0xc(r1)
    mr r3, r30
    bl strlen
    clrlwi r3, r3, 16
    bl fn_80336B2C
    sth r3, 0xe(r1)
    mr r3, r26
    bl fn_80336B28
    stw r3, 0x10(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x8
    li r5, 0xc
    bl memcpy
    lwz r4, 0x0(r27)
    addi r3, r1, 0x2c
    lwz r4, 0x4(r4)
    bl strcpy
    lwz r3, 0x0(r27)
    lwz r26, 0x4(r3)
    mr r3, r26
    bl strlen
    addi r29, r3, 0xc
    mr r3, r26
    bl strlen
    clrlwi r0, r3, 30
    subfic r4, r0, 0x4
    cmpwi r4, 0x4
    beq lbl_80271A14
    cmpwi r4, 0x0
    addi r0, r1, 0x20
    add r3, r0, r29
    ble lbl_80271A14
    srwi. r0, r4, 3
    mtctr r0
    beq lbl_80271A00
lbl_802719CC:
    stb r31, 0x0(r3)
    addi r29, r29, 0x8
    stb r31, 0x1(r3)
    stb r31, 0x2(r3)
    stb r31, 0x3(r3)
    stb r31, 0x4(r3)
    stb r31, 0x5(r3)
    stb r31, 0x6(r3)
    stb r31, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_802719CC
    andi. r4, r4, 0x7
    beq lbl_80271A14
lbl_80271A00:
    mtctr r4
lbl_80271A04:
    stb r31, 0x0(r3)
    addi r29, r29, 0x1
    addi r3, r3, 0x1
    bdnz lbl_80271A04
lbl_80271A14:
    addi r3, r1, 0x20
    mr r4, r30
    add r3, r3, r29
    bl strcpy
    mr r3, r30
    bl strlen
    add r29, r29, r3
    mr r3, r30
    bl strlen
    clrlwi r0, r3, 30
    subfic r5, r0, 0x4
    cmpwi r5, 0x4
    beq lbl_80271ADC
    cmpwi r5, 0x0
    addi r0, r1, 0x20
    li r4, 0x0
    add r3, r0, r29
    ble lbl_80271ADC
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_80271A9C
lbl_80271A68:
    stb r4, 0x0(r3)
    addi r29, r29, 0x8
    stb r4, 0x1(r3)
    stb r4, 0x2(r3)
    stb r4, 0x3(r3)
    stb r4, 0x4(r3)
    stb r4, 0x5(r3)
    stb r4, 0x6(r3)
    stb r4, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_80271A68
    andi. r5, r5, 0x7
    beq lbl_80271ADC
lbl_80271A9C:
    mtctr r5
lbl_80271AA0:
    stb r4, 0x0(r3)
    addi r29, r29, 0x1
    addi r3, r3, 0x1
    bdnz lbl_80271AA0
    b lbl_80271ADC
lbl_80271AB4:
    cmpwi r5, 0x0
    addi r3, r1, 0x20
    addi r4, r31, 0x1bc
    addi r5, r31, 0x190
    beq lbl_80271ACC
    addi r5, r31, 0x168
lbl_80271ACC:
    lwz r6, 0x4(r8)
    mr r8, r30
    opword 0x4CC63182
    bl sprintf
lbl_80271ADC:
    lwz r0, 0x194(r28)
    cmpwi r0, 0x0
    beq lbl_80271B64
    lwz r0, 0x1a4(r28)
    cmpwi r0, 0x1
    bne lbl_80271B64
    cmpwi r29, 0x0
    bne lbl_80271B08
    addi r3, r1, 0x20
    bl strlen
    mr r29, r3
lbl_80271B08:
    mr r5, r29
    addi r3, r28, 0x54
    addi r4, r1, 0x20
    bl ghiEncryptDataToBuffer
    cmpwi r3, 0x0
    bne lbl_80271B28
    li r3, 0x0
    b lbl_80271C0C
lbl_80271B28:
    mr r3, r28
    bl fn_8026EDD0
    cmpwi r3, 0x0
    bne lbl_80271B40
    li r3, 0x0
    b lbl_80271C0C
lbl_80271B40:
    lwz r3, 0x64(r28)
    lwz r0, 0x60(r28)
    cmpw r3, r0
    bge lbl_80271B58
    li r3, 0x2
    b lbl_80271C0C
lbl_80271B58:
    addi r3, r28, 0x54
    bl ghiResetBuffer
    b lbl_80271BB0
lbl_80271B64:
    cmpwi r29, 0x0
    bne lbl_80271B78
    addi r3, r1, 0x20
    bl strlen
    mr r29, r3
lbl_80271B78:
    mr r3, r28
    mr r5, r29
    addi r4, r1, 0x20
    bl fn_8026F474
    cmpwi r3, 0x0
    bne lbl_80271B98
    li r3, 0x0
    b lbl_80271C0C
lbl_80271B98:
    cmpwi r3, 0x2
    bne lbl_80271BA8
    li r3, 0x2
    b lbl_80271C0C
lbl_80271BA8:
    addi r3, r28, 0x54
    bl ghiResetBuffer
lbl_80271BB0:
    lwz r3, 0x0(r27)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_80271BD0
    mr r3, r27
    mr r4, r28
    bl ghiPostStringStateDoPosting
    b lbl_80271C0C
lbl_80271BD0:
    cmpwi r0, 0x3
    bne lbl_80271BE8
    mr r3, r27
    mr r4, r28
    bl ghiPostXmlStateDoPosting
    b lbl_80271C0C
lbl_80271BE8:
    cmpwi r0, 0x1
    bne lbl_80271C00
    mr r3, r27
    mr r4, r28
    bl ghiPostFileDiskStateDoPosting
    b lbl_80271C0C
lbl_80271C00:
    mr r3, r27
    mr r4, r28
    bl ghiPostFileMemoryStateDoPosting
lbl_80271C0C:
    addi r11, r1, 0x840
    bl _restgpr_26
    lwz r0, 0x844(r1)
    mtlr r0
    addi r1, r1, 0x840
    blr
}

// ----------------------------------------------------------------------------
// ghiPostDoPosting
// ----------------------------------------------------------------------------
asm void ghiPostDoPosting() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r3, 0x164(r3)
    bl fn_80253658
    lwz r4, 0x64(r30)
    mr r31, r3
    lwz r0, 0x60(r30)
    cmpw r4, r0
    bge lbl_80271CC0
    mr r3, r30
    bl fn_8026EDD0
    cmpwi r3, 0x0
    bne lbl_80271C78
    li r3, 0x0
    b lbl_80271E50
lbl_80271C78:
    lwz r3, 0x64(r30)
    lwz r0, 0x60(r30)
    cmpw r3, r0
    bge lbl_80271C90
    li r3, 0x2
    b lbl_80271E50
lbl_80271C90:
    addi r3, r30, 0x54
    bl ghiResetBuffer
    lwz r0, 0x17c(r30)
    cmpwi r0, 0x0
    beq lbl_80271CAC
    li r3, 0x3
    b lbl_80271E50
lbl_80271CAC:
    lwz r0, 0x168(r30)
    cmpw r0, r31
    bne lbl_80271CC0
    li r3, 0x1
    b lbl_80271E50
lbl_80271CC0:
    lwz r0, 0x17c(r30)
    cmpwi r0, 0x0
    beq lbl_80271DA8
    lwz r3, 0x160(r30)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_80271CE8
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_80271D34
lbl_80271CE8:
    la r3, lbl_8049CD24
    bl strlen
    mr r5, r3
    mr r3, r30
    la r4, lbl_8049CD24
    bl fn_8026F474
    cmpwi r3, 0x0
    bne lbl_80271D10
    li r3, 0x0
    b lbl_80271E50
lbl_80271D10:
    cmpwi r3, 0x2
    bne lbl_80271D20
    li r3, 0x2
    b lbl_80271E50
lbl_80271D20:
    lwz r0, 0x17c(r30)
    cmpwi r0, 0x1
    bne lbl_80271DA8
    li r3, 0x3
    b lbl_80271E50
lbl_80271D34:
    li r0, 0x0
    stw r0, 0x17c(r30)
    b lbl_80271DA8
lbl_80271D40:
    lwz r3, 0x164(r30)
    bl fn_80253660
    mr r28, r3
    lwz r29, 0x168(r30)
    lwz r3, 0x164(r30)
    bl fn_80253658
    subi r3, r3, 0x1
    cntlzw r0, r29
    subf r4, r29, r3
    cntlzw r5, r4
    mr r3, r28
    srwi r6, r5, 5
    mr r4, r30
    srwi r5, r0, 5
    bl ghiPostStateDoPosting
    cmpwi r3, 0x0
    bne lbl_80271D8C
    li r3, 0x0
    b lbl_80271E50
lbl_80271D8C:
    cmpwi r3, 0x2
    bne lbl_80271D9C
    li r3, 0x2
    b lbl_80271E50
lbl_80271D9C:
    lwz r3, 0x168(r30)
    addi r0, r3, 0x1
    stw r0, 0x168(r30)
lbl_80271DA8:
    lwz r4, 0x168(r30)
    cmpw r4, r31
    blt lbl_80271D40
    lwz r0, 0x194(r30)
    cmpwi r0, 0x0
    beq lbl_80271DF0
    lwz r5, 0x84(r30)
    cmpwi r5, 0x0
    ble lbl_80271DF0
    lwz r4, 0x7c(r30)
    addi r3, r30, 0x54
    bl ghiEncryptDataToBuffer
    cmpwi r3, 0x0
    bne lbl_80271DE8
    li r3, 0x0
    b lbl_80271E50
lbl_80271DE8:
    addi r3, r30, 0x78
    bl ghiResetBuffer
lbl_80271DF0:
    lwz r3, 0x160(r30)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_80271E38
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    bne lbl_80271E38
    lis r31, lbl_8036B130@ha
    addi r3, r31, lbl_8036B130@l
    bl strlen
    mr r5, r3
    mr r3, r30
    addi r4, r31, lbl_8036B130@l
    bl fn_8026F474
    cmpwi r3, 0x0
    bne lbl_80271E38
    li r3, 0x0
    b lbl_80271E50
lbl_80271E38:
    lwz r4, 0x64(r30)
    li r3, 0x1
    lwz r0, 0x60(r30)
    cmpw r4, r0
    bge lbl_80271E50
    li r3, 0x2
lbl_80271E50:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

