#include "types.h"

// Translation unit: src/revolution/bte/hidh_api.cpp
// Total functions: 11

// Global data symbols (@ha/@l)
extern u8 lbl_80375950[];
extern u8 lbl_80456C38[];

// Forward declarations
extern void BTM_SetSecurityLevel();
extern void GKI_freebuf();
extern void HID_HostAddDev();
extern void HID_HostCloseDev();
extern void HID_HostDeregister();
extern void HID_HostGetSDPRecord();
extern void HID_HostInit();
extern void HID_HostOpenDev();
extern void HID_HostRegister();
extern void HID_HostRemoveDev();
extern void HID_HostSetSecurityLevel();
extern void HID_HostWriteDev();
extern void LogMsg_0();
extern void LogMsg_1();
extern void SDP_FindAttributeInRec();
extern void SDP_FindServiceUUIDInDb();
extern void SDP_InitDiscoveryDb();
extern void SDP_ServiceSearchRequest();
extern void _restgpr_24();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_24();
extern void _savegpr_26();
extern void _savegpr_27();
extern void btu_stop_timer();
extern void hidh_conn_dereg();
extern void hidh_conn_disconnect();
extern void hidh_conn_initiate();
extern void hidh_conn_reg();
extern void hidh_conn_snd_data();
extern void hidh_search_callback();
extern void memcmp();
extern void memcpy();
extern void memset();

// ----------------------------------------------------------------------------
// HID_HostGetSDPRecord
// ----------------------------------------------------------------------------
asm void HID_HostGetSDPRecord() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_80456C38@ha
    addi r31, r31, lbl_80456C38@l
    stw r30, 0x28(r1)
    mr r30, r6
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lbz r0, 0x380(r31)
    cmpwi r0, 0x0
    beq lbl_802BAF3C
    li r3, 0x10
    b lbl_802BAFA0
lbl_802BAF3C:
    li r7, 0x2
    li r0, 0x1124
    stw r4, 0x388(r31)
    mr r4, r5
    mr r3, r29
    addi r6, r1, 0x8
    sth r7, 0x8(r1)
    li r5, 0x1
    li r7, 0x0
    li r8, 0x0
    sth r0, 0xc(r1)
    bl SDP_InitDiscoveryDb
    lis r5, hidh_search_callback@ha
    mr r3, r28
    mr r4, r29
    addi r5, r5, hidh_search_callback@l
    bl SDP_ServiceSearchRequest
    clrlwi. r0, r3, 24
    beq lbl_802BAF9C
    li r0, 0x1
    stw r30, 0x384(r31)
    li r3, 0x0
    stb r0, 0x380(r31)
    b lbl_802BAFA0
lbl_802BAF9C:
    li r3, 0x3
lbl_802BAFA0:
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
// hidh_search_callback
// ----------------------------------------------------------------------------
asm void hidh_search_callback() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x2
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    li r0, 0x1124
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    li r29, 0x0
    stw r28, 0x20(r1)
    lis r28, lbl_80456C38@ha
    addi r28, r28, lbl_80456C38@l
    sth r4, 0x8(r1)
    addi r30, r28, 0x38c
    lwz r4, 0x388(r28)
    sth r0, 0xc(r1)
    stb r29, 0x380(r28)
    beq lbl_802BB024
    lwz r12, 0x384(r28)
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    b lbl_802BB3F0
lbl_802BB024:
    mr r3, r4
    addi r4, r1, 0x8
    li r5, 0x0
    bl SDP_FindServiceUUIDInDb
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802BB05C
    lwz r12, 0x384(r28)
    li r3, 0xc
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    b lbl_802BB3F0
lbl_802BB05C:
    mr r3, r30
    li r4, 0x0
    li r5, 0x74
    bl memset
    mr r3, r31
    li r4, 0x206
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    beq lbl_802BB0D4
    lhz r0, 0x6(r3)
    srawi r0, r0, 12
    cmpwi r0, 0x6
    bne lbl_802BB0D4
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_802BB0D4
    lhz r0, 0x6(r3)
    srawi r0, r0, 12
    cmpwi r0, 0x6
    bne lbl_802BB0D4
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_802BB0D4
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_802BB0D4
    lhz r3, 0x6(r4)
    srawi r0, r3, 12
    cmpwi r0, 0x4
    beq lbl_802BB0F8
lbl_802BB0D4:
    lis r5, lbl_80456C38@ha
    li r3, 0xd
    addi r5, r5, lbl_80456C38@l
    li r4, 0x0
    lwz r12, 0x384(r5)
    li r5, 0x0
    mtctr r12
    bctrl
    b lbl_802BB3F0
lbl_802BB0F8:
    clrlwi. r0, r3, 20
    sth r0, 0x68(r30)
    beq lbl_802BB10C
    addi r0, r4, 0x8
    stw r0, 0x6c(r30)
lbl_802BB10C:
    mr r3, r31
    li r4, 0x204
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    beq lbl_802BB130
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_802BB130
    ori r29, r29, 0x1
lbl_802BB130:
    mr r3, r31
    li r4, 0x205
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    beq lbl_802BB158
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_802BB158
    ori r0, r29, 0x4
    clrlwi r29, r0, 16
lbl_802BB158:
    mr r3, r31
    li r4, 0x20d
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    beq lbl_802BB180
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_802BB180
    ori r0, r29, 0x2
    clrlwi r29, r0, 16
lbl_802BB180:
    mr r3, r31
    li r4, 0x208
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    beq lbl_802BB1A8
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_802BB1A8
    ori r0, r29, 0x8
    clrlwi r29, r0, 16
lbl_802BB1A8:
    mr r3, r31
    li r4, 0x209
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    beq lbl_802BB1D0
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_802BB1D0
    ori r0, r29, 0x10
    clrlwi r29, r0, 16
lbl_802BB1D0:
    mr r3, r31
    li r4, 0x20a
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    beq lbl_802BB1F8
    lbz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_802BB1F8
    ori r0, r29, 0x20
    clrlwi r29, r0, 16
lbl_802BB1F8:
    mr r3, r31
    li r4, 0x100
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_802BB258
    lhz r0, 0x6(r3)
    clrlwi r28, r0, 20
    cmplwi r28, 0x20
    bge lbl_802BB23C
    mr r3, r30
    mr r5, r28
    addi r4, r4, 0x8
    bl memcpy
    li r0, 0x0
    stbx r0, r30, r28
    b lbl_802BB260
lbl_802BB23C:
    mr r3, r30
    addi r4, r4, 0x8
    li r5, 0x1f
    bl memcpy
    li r0, 0x0
    stb r0, 0x20(r30)
    b lbl_802BB260
lbl_802BB258:
    li r0, 0x0
    stb r0, 0x0(r30)
lbl_802BB260:
    mr r3, r31
    li r4, 0x101
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_802BB2C4
    lhz r0, 0x6(r3)
    clrlwi r28, r0, 20
    cmplwi r28, 0x20
    bge lbl_802BB2A8
    mr r5, r28
    addi r3, r30, 0x20
    addi r4, r4, 0x8
    bl memcpy
    add r3, r30, r28
    li r0, 0x0
    stb r0, 0x20(r3)
    b lbl_802BB2CC
lbl_802BB2A8:
    addi r3, r30, 0x20
    addi r4, r4, 0x8
    li r5, 0x1f
    bl memcpy
    li r0, 0x0
    stb r0, 0x40(r30)
    b lbl_802BB2CC
lbl_802BB2C4:
    li r0, 0x0
    stb r0, 0x20(r30)
lbl_802BB2CC:
    mr r3, r31
    li r4, 0x102
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_802BB330
    lhz r0, 0x6(r3)
    clrlwi r28, r0, 20
    cmplwi r28, 0x20
    bge lbl_802BB314
    mr r5, r28
    addi r3, r30, 0x40
    addi r4, r4, 0x8
    bl memcpy
    add r3, r30, r28
    li r0, 0x0
    stb r0, 0x40(r3)
    b lbl_802BB338
lbl_802BB314:
    addi r3, r30, 0x40
    addi r4, r4, 0x8
    li r5, 0x1f
    bl memcpy
    li r0, 0x0
    stb r0, 0x60(r30)
    b lbl_802BB338
lbl_802BB330:
    li r0, 0x0
    stb r0, 0x40(r30)
lbl_802BB338:
    mr r3, r31
    li r4, 0x200
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    beq lbl_802BB354
    lhz r0, 0x8(r3)
    sth r0, 0x60(r30)
lbl_802BB354:
    mr r3, r31
    li r4, 0x203
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    beq lbl_802BB370
    lbz r0, 0x8(r3)
    stb r0, 0x65(r30)
lbl_802BB370:
    mr r3, r31
    li r4, 0x202
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    beq lbl_802BB38C
    lbz r0, 0x8(r3)
    stb r0, 0x64(r30)
lbl_802BB38C:
    mr r3, r31
    li r4, 0x201
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    beq lbl_802BB3A8
    lhz r0, 0x8(r3)
    sth r0, 0x62(r30)
lbl_802BB3A8:
    mr r3, r31
    li r4, 0x20c
    bl SDP_FindAttributeInRec
    cmpwi r3, 0x0
    beq lbl_802BB3CC
    lhz r0, 0x8(r3)
    ori r3, r29, 0x40
    clrlwi r29, r3, 16
    sth r0, 0x66(r30)
lbl_802BB3CC:
    lis r6, lbl_80456C38@ha
    clrlwi r4, r29, 16
    addi r6, r6, lbl_80456C38@l
    li r3, 0x0
    lwz r12, 0x384(r6)
    addi r5, r6, 0x38c
    stw r31, 0x3fc(r6)
    mtctr r12
    bctrl
lbl_802BB3F0:
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
// HID_HostInit
// ----------------------------------------------------------------------------
asm void HID_HostInit() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x404
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80456C38@ha
    addi r3, r31, lbl_80456C38@l
    bl memset
    addi r3, r31, lbl_80456C38@l
    li r0, 0x0
    stb r0, 0x401(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// HID_HostRegister
// ----------------------------------------------------------------------------
asm void HID_HostRegister() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80456C38@ha
    addi r31, r31, lbl_80456C38@l
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x400(r31)
    cmpwi r0, 0x0
    beq lbl_802BB488
    li r3, 0x2
    b lbl_802BB4B8
lbl_802BB488:
    cmpwi r3, 0x0
    bne lbl_802BB498
    li r3, 0x5
    b lbl_802BB4B8
lbl_802BB498:
    bl hidh_conn_reg
    clrlwi. r0, r3, 24
    beq lbl_802BB4A8
    b lbl_802BB4B8
lbl_802BB4A8:
    li r0, 0x1
    stw r30, 0x340(r31)
    li r3, 0x0
    stb r0, 0x400(r31)
lbl_802BB4B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// HID_HostDeregister
// ----------------------------------------------------------------------------
asm void HID_HostDeregister() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r3, lbl_80456C38@ha
    addi r29, r3, lbl_80456C38@l
    lbz r0, 0x400(r29)
    cmpwi r0, 0x0
    bne lbl_802BB500
    li r3, 0x1
    b lbl_802BB59C
lbl_802BB500:
    li r27, 0x0
    li r30, 0x1
    li r31, 0x0
lbl_802BB50C:
    lbz r0, 0x400(r29)
    cmpwi cr6, r0, 0x0
    beq cr6, lbl_802BB578
    clrlwi r0, r27, 24
    cmplwi cr1, r0, 0x10
    bgt cr1, lbl_802BB578
    mulli r0, r0, 0x34
    add r28, r29, r0
    lbzx r0, r29, r0
    cmpwi r0, 0x0
    beq lbl_802BB578
    beq cr6, lbl_802BB568
    bgt cr1, lbl_802BB568
    beq lbl_802BB568
    stb r30, 0xc(r28)
    addi r3, r28, 0x1c
    bl btu_stop_timer
    lbz r0, 0xa(r28)
    cmplwi r0, 0x1
    bne lbl_802BB568
    stb r30, 0xc(r28)
    clrlwi r3, r27, 24
    bl hidh_conn_disconnect
lbl_802BB568:
    stb r31, 0x0(r28)
    stb r31, 0x10(r28)
    sth r31, 0x16(r28)
    sth r31, 0x14(r28)
lbl_802BB578:
    addi r27, r27, 0x1
    cmplwi r27, 0x10
    blt lbl_802BB50C
    bl hidh_conn_dereg
    lis r4, lbl_80456C38@ha
    li r0, 0x0
    addi r4, r4, lbl_80456C38@l
    li r3, 0x0
    stb r0, 0x400(r4)
lbl_802BB59C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// HID_HostAddDev
// ----------------------------------------------------------------------------
asm void HID_HostAddDev() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r31, lbl_80456C38@ha
    mr r26, r3
    addi r31, r31, lbl_80456C38@l
    mr r27, r4
    lbz r0, 0x400(r31)
    mr r28, r5
    cmpwi r0, 0x0
    bne lbl_802BB5F0
    li r3, 0x1
    b lbl_802BB72C
lbl_802BB5F0:
    li r29, 0x0
lbl_802BB5F4:
    mr r3, r26
    addi r4, r31, 0x1
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_802BB61C
    addi r29, r29, 0x1
    addi r31, r31, 0x34
    cmpwi r29, 0x10
    blt lbl_802BB5F4
lbl_802BB61C:
    cmpwi r29, 0x10
    bne lbl_802BB6C0
    lis r3, lbl_80456C38@ha
    li r0, 0x2
    addi r3, r3, lbl_80456C38@l
    li r29, 0x0
    mtctr r0
lbl_802BB638:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_802BB6C0
    lbz r0, 0x34(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x0
    beq lbl_802BB6C0
    lbz r0, 0x68(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x0
    beq lbl_802BB6C0
    lbz r0, 0x9c(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x0
    beq lbl_802BB6C0
    lbz r0, 0xd0(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x0
    beq lbl_802BB6C0
    lbz r0, 0x104(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x0
    beq lbl_802BB6C0
    lbz r0, 0x138(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x0
    beq lbl_802BB6C0
    lbz r0, 0x16c(r3)
    addi r29, r29, 0x1
    cmpwi r0, 0x0
    beq lbl_802BB6C0
    addi r3, r3, 0x1a0
    addi r29, r29, 0x1
    bdnz lbl_802BB638
lbl_802BB6C0:
    cmpwi r29, 0x10
    bne lbl_802BB6D0
    li r3, 0x3
    b lbl_802BB72C
lbl_802BB6D0:
    mulli r30, r29, 0x34
    lis r31, lbl_80456C38@ha
    addi r31, r31, lbl_80456C38@l
    lbzx r0, r31, r30
    cmpwi r0, 0x0
    bne lbl_802BB714
    li r0, 0x1
    add r3, r31, r30
    stbx r0, r31, r30
    mr r4, r26
    addi r3, r3, 0x1
    li r5, 0x6
    bl memcpy
    add r3, r31, r30
    li r0, 0x0
    stb r0, 0xa(r3)
    stb r0, 0xc(r3)
lbl_802BB714:
    lis r4, lbl_80456C38@ha
    li r3, 0x0
    addi r4, r4, lbl_80456C38@l
    add r4, r4, r30
    sth r27, 0x8(r4)
    stb r29, 0x0(r28)
lbl_802BB72C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// HID_HostRemoveDev
// ----------------------------------------------------------------------------
asm void HID_HostRemoveDev() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_80456C38@ha
    mr r27, r3
    addi r30, r30, lbl_80456C38@l
    lbz r0, 0x400(r30)
    cmpwi cr6, r0, 0x0
    bne cr6, lbl_802BB778
    li r3, 0x1
    b lbl_802BB7F4
lbl_802BB778:
    cmplwi cr1, r3, 0x10
    bgt cr1, lbl_802BB794
    mulli r28, r3, 0x34
    lbzx r0, r30, r28
    add r29, r30, r28
    cmpwi r0, 0x0
    bne lbl_802BB79C
lbl_802BB794:
    li r3, 0x5
    b lbl_802BB7F4
lbl_802BB79C:
    beq cr6, lbl_802BB7D0
    bgt cr1, lbl_802BB7D0
    beq lbl_802BB7D0
    li r31, 0x1
    addi r3, r29, 0x1c
    stb r31, 0xc(r29)
    bl btu_stop_timer
    lbz r0, 0xa(r29)
    cmplwi r0, 0x1
    bne lbl_802BB7D0
    stb r31, 0xc(r29)
    mr r3, r27
    bl hidh_conn_disconnect
lbl_802BB7D0:
    li r0, 0x0
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    stb r0, 0x0(r29)
    add r4, r3, r28
    stb r0, 0x10(r4)
    li r3, 0x0
    sth r0, 0x16(r4)
    sth r0, 0x14(r4)
lbl_802BB7F4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// HID_HostOpenDev
// ----------------------------------------------------------------------------
asm void HID_HostOpenDev() {
    nofralloc
    lis r4, lbl_80456C38@ha
    addi r4, r4, lbl_80456C38@l
    lbz r0, 0x400(r4)
    cmpwi r0, 0x0
    bne lbl_802BB828
    li r3, 0x1
    blr
lbl_802BB828:
    cmplwi r3, 0x10
    bgt lbl_802BB840
    mulli r5, r3, 0x34
    lbzx r0, r4, r5
    cmpwi r0, 0x0
    bne lbl_802BB848
lbl_802BB840:
    li r3, 0x5
    blr
lbl_802BB848:
    add r4, r4, r5
    lbz r0, 0xa(r4)
    cmpwi r0, 0x0
    beq lbl_802BB860
    li r3, 0xa
    blr
lbl_802BB860:
    li r0, 0x1
    stb r0, 0xc(r4)
    b hidh_conn_initiate
    blr
}

// ----------------------------------------------------------------------------
// HID_HostWriteDev
// ----------------------------------------------------------------------------
asm void HID_HostWriteDev() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r9, lbl_80456C38@ha
    lis r31, lbl_80375950@ha
    addi r9, r9, lbl_80456C38@l
    mr r25, r3
    lbz r0, 0x400(r9)
    mr r26, r4
    mr r27, r5
    mr r28, r6
    cmpwi r0, 0x0
    mr r29, r7
    mr r30, r8
    addi r31, r31, lbl_80375950@l
    li r24, 0x0
    bne lbl_802BB8D8
    lbz r0, 0x401(r9)
    cmplwi r0, 0x1
    blt lbl_802BB8D4
    addi r4, r31, 0x0
    lis r3, 0x1e
    bl LogMsg_0
lbl_802BB8D4:
    li r24, 0x1
lbl_802BB8D8:
    cmplwi r25, 0x10
    bgt lbl_802BB8F8
    mulli r0, r25, 0x34
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbzx r0, r3, r0
    cmpwi r0, 0x0
    bne lbl_802BB91C
lbl_802BB8F8:
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x1
    blt lbl_802BB918
    addi r4, r31, 0x18
    lis r3, 0x1e
    bl LogMsg_0
lbl_802BB918:
    li r24, 0x5
lbl_802BB91C:
    mulli r0, r25, 0x34
    lis r4, lbl_80456C38@ha
    addi r4, r4, lbl_80456C38@l
    add r3, r4, r0
    lbz r0, 0xa(r3)
    cmplwi r0, 0x1
    beq lbl_802BB958
    lbz r0, 0x401(r4)
    cmplwi r0, 0x1
    blt lbl_802BB954
    mr r5, r25
    addi r4, r31, 0x30
    lis r3, 0x1e
    bl LogMsg_1
lbl_802BB954:
    li r24, 0x4
lbl_802BB958:
    cmpwi r24, 0x0
    beq lbl_802BB974
    cmpwi r30, 0x0
    beq lbl_802BB994
    mr r3, r30
    bl GKI_freebuf
    b lbl_802BB994
lbl_802BB974:
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    mr r7, r29
    mr r8, r30
    bl hidh_conn_snd_data
    mr r24, r3
lbl_802BB994:
    addi r11, r1, 0x30
    mr r3, r24
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// HID_HostCloseDev
// ----------------------------------------------------------------------------
asm void HID_HostCloseDev() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r30, lbl_80456C38@ha
    mr r27, r3
    addi r30, r30, lbl_80456C38@l
    lbz r0, 0x400(r30)
    cmpwi r0, 0x0
    bne lbl_802BB9E4
    li r3, 0x1
    b lbl_802BBA38
lbl_802BB9E4:
    cmplwi r3, 0x10
    bgt lbl_802BBA00
    mulli r28, r3, 0x34
    lbzx r0, r30, r28
    add r29, r30, r28
    cmpwi r0, 0x0
    bne lbl_802BBA08
lbl_802BBA00:
    li r3, 0x5
    b lbl_802BBA38
lbl_802BBA08:
    li r31, 0x1
    addi r3, r29, 0x1c
    stb r31, 0xc(r29)
    bl btu_stop_timer
    lbz r0, 0xa(r29)
    cmplwi r0, 0x1
    beq lbl_802BBA2C
    li r3, 0x4
    b lbl_802BBA38
lbl_802BBA2C:
    stb r31, 0xc(r29)
    mr r3, r27
    bl hidh_conn_disconnect
lbl_802BBA38:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// HID_HostSetSecurityLevel
// ----------------------------------------------------------------------------
asm void HID_HostSetSecurityLevel() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x20
    li r7, 0x11
    stw r0, 0x24(r1)
    li r8, 0x6
    li r9, 0x1
    stw r31, 0x1c(r1)
    lis r31, lbl_80375950@ha
    addi r31, r31, lbl_80375950@l
    stw r30, 0x18(r1)
    mr r30, r4
    mr r6, r30
    stw r29, 0x14(r1)
    mr r29, r3
    li r3, 0x0
    mr r4, r29
    bl BTM_SetSecurityLevel
    clrlwi. r0, r3, 24
    bne lbl_802BBAC8
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x1
    blt lbl_802BBAC0
    addi r4, r31, 0x54
    lis r3, 0x1e
    bl LogMsg_0
lbl_802BBAC0:
    li r3, 0x3
    b lbl_802BBC5C
lbl_802BBAC8:
    mr r4, r29
    mr r6, r30
    li r3, 0x1
    li r5, 0x20
    li r7, 0x11
    li r8, 0x6
    li r9, 0x1
    bl BTM_SetSecurityLevel
    clrlwi. r0, r3, 24
    bne lbl_802BBB18
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x1
    blt lbl_802BBB10
    addi r4, r31, 0x74
    lis r3, 0x1e
    bl LogMsg_0
lbl_802BBB10:
    li r3, 0x3
    b lbl_802BBC5C
lbl_802BBB18:
    mr r4, r29
    li r3, 0x0
    li r5, 0x21
    li r6, 0x0
    li r7, 0x11
    li r8, 0x6
    li r9, 0x2
    bl BTM_SetSecurityLevel
    clrlwi. r0, r3, 24
    bne lbl_802BBB68
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x1
    blt lbl_802BBB60
    addi r4, r31, 0x94
    lis r3, 0x1e
    bl LogMsg_0
lbl_802BBB60:
    li r3, 0x3
    b lbl_802BBC5C
lbl_802BBB68:
    mr r4, r29
    li r3, 0x1
    li r5, 0x21
    li r6, 0x0
    li r7, 0x11
    li r8, 0x6
    li r9, 0x2
    bl BTM_SetSecurityLevel
    clrlwi. r0, r3, 24
    bne lbl_802BBBB8
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x1
    blt lbl_802BBBB0
    addi r4, r31, 0xb4
    lis r3, 0x1e
    bl LogMsg_0
lbl_802BBBB0:
    li r3, 0x3
    b lbl_802BBC5C
lbl_802BBBB8:
    mr r4, r29
    li r3, 0x1
    li r5, 0x22
    li r6, 0x0
    li r7, 0x13
    li r8, 0x6
    li r9, 0x0
    bl BTM_SetSecurityLevel
    clrlwi. r0, r3, 24
    bne lbl_802BBC08
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x1
    blt lbl_802BBC00
    addi r4, r31, 0xd4
    lis r3, 0x1e
    bl LogMsg_0
lbl_802BBC00:
    li r3, 0x3
    b lbl_802BBC5C
lbl_802BBC08:
    mr r4, r29
    li r3, 0x0
    li r5, 0x22
    li r6, 0x0
    li r7, 0x13
    li r8, 0x6
    li r9, 0x0
    bl BTM_SetSecurityLevel
    clrlwi. r0, r3, 24
    bne lbl_802BBC58
    lis r3, lbl_80456C38@ha
    addi r3, r3, lbl_80456C38@l
    lbz r0, 0x401(r3)
    cmplwi r0, 0x1
    blt lbl_802BBC50
    addi r4, r31, 0xf4
    lis r3, 0x1e
    bl LogMsg_0
lbl_802BBC50:
    li r3, 0x3
    b lbl_802BBC5C
lbl_802BBC58:
    li r3, 0x0
lbl_802BBC5C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

