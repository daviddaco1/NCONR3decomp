#include "types.h"

// Translation unit: src/revolution/bte/sdp_api.cpp
// Total functions: 9

// Global data symbols (@ha/@l)
extern u8 lbl_80378170[];
extern u8 lbl_80457C40[];

// Forward declarations
extern void LogMsg_4();
extern void SDP_AddAttribute();
extern void SDP_AddServiceClassIdList();
extern void SDP_CreateRecord();
extern void SDP_DeleteRecord();
extern void SDP_FindAttributeInRec();
extern void SDP_FindServiceInDb();
extern void SDP_FindServiceUUIDInDb();
extern void SDP_GetLocalDiRecord();
extern void SDP_InitDiscoveryDb();
extern void SDP_ServiceSearchAttributeRequest();
extern void SDP_ServiceSearchRequest();
extern void SDP_SetLocalDiRecord();
extern void SDP_SetTraceLevel();
extern void _restgpr_26();
extern void _savegpr_26();
extern void memset();
extern void sdp_conn_originate();
extern void sdp_db_find_attr_in_rec();
extern void sdp_db_find_record();
extern void sdpu_compare_uuid_with_attr();
extern void sdpu_sort_attr_list();
extern void strlen();

// ----------------------------------------------------------------------------
// SDP_InitDiscoveryDb
// ----------------------------------------------------------------------------
asm void SDP_InitDiscoveryDb() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r27, r3
    mr r26, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    beq lbl_802CA2BC
    cmplwi r4, 0x6c
    blt lbl_802CA2BC
    cmplwi r7, 0xc
    bgt lbl_802CA2BC
    cmplwi r5, 0x3
    ble lbl_802CA2F8
lbl_802CA2BC:
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x1
    blt lbl_802CA2F0
    lis r4, lbl_80378170@ha
    mr r5, r27
    mr r6, r26
    mr r7, r28
    mr r8, r30
    addi r4, r4, lbl_80378170@l
    lis r3, 0xa
    bl LogMsg_4
lbl_802CA2F0:
    li r3, 0x0
    b lbl_802CA5D0
lbl_802CA2F8:
    mr r5, r26
    li r4, 0x0
    bl memset
    subi r5, r26, 0x6c
    addi r0, r27, 0x6c
    li r3, 0x0
    cmpwi r28, 0x0
    stw r5, 0x0(r27)
    li r4, 0x0
    stw r5, 0x4(r27)
    stw r3, 0x8(r27)
    stw r0, 0x68(r27)
    beq lbl_802CA500
    cmplwi r28, 0x8
    addis r3, r28, 0x1
    subi r3, r3, 0x8
    ble lbl_802CA4AC
    clrlwi r3, r3, 16
    addi r0, r3, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_802CA4AC
lbl_802CA354:
    clrlwi r0, r4, 16
    lwz r5, 0x0(r29)
    mulli r3, r0, 0x14
    lwz r0, 0x4(r29)
    addi r4, r4, 0x8
    add r3, r27, r3
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r5, 0x8(r29)
    lwz r0, 0xc(r29)
    stw r5, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, 0x10(r29)
    stw r0, 0x20(r3)
    lwz r5, 0x14(r29)
    lwz r0, 0x18(r29)
    stw r5, 0x24(r3)
    stw r0, 0x28(r3)
    lwz r5, 0x1c(r29)
    lwz r0, 0x20(r29)
    stw r5, 0x2c(r3)
    stw r0, 0x30(r3)
    lwz r0, 0x24(r29)
    stw r0, 0x34(r3)
    lwz r5, 0x28(r29)
    lwz r0, 0x2c(r29)
    stw r5, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r5, 0x30(r29)
    lwz r0, 0x34(r29)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x38(r29)
    stw r0, 0x48(r3)
    lwz r5, 0x3c(r29)
    lwz r0, 0x40(r29)
    stw r5, 0x4c(r3)
    stw r0, 0x50(r3)
    lwz r5, 0x44(r29)
    lwz r0, 0x48(r29)
    stw r5, 0x54(r3)
    stw r0, 0x58(r3)
    lwz r0, 0x4c(r29)
    stw r0, 0x5c(r3)
    lwz r5, 0x50(r29)
    lwz r0, 0x54(r29)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r5, 0x58(r29)
    lwz r0, 0x5c(r29)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x60(r29)
    stw r0, 0x70(r3)
    lwz r5, 0x64(r29)
    lwz r0, 0x68(r29)
    stw r5, 0x74(r3)
    stw r0, 0x78(r3)
    lwz r5, 0x6c(r29)
    lwz r0, 0x70(r29)
    stw r5, 0x7c(r3)
    stw r0, 0x80(r3)
    lwz r0, 0x74(r29)
    stw r0, 0x84(r3)
    lwz r5, 0x78(r29)
    lwz r0, 0x7c(r29)
    stw r5, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r5, 0x80(r29)
    lwz r0, 0x84(r29)
    stw r5, 0x90(r3)
    stw r0, 0x94(r3)
    lwz r0, 0x88(r29)
    stw r0, 0x98(r3)
    lwz r5, 0x8c(r29)
    lwz r0, 0x90(r29)
    stw r5, 0x9c(r3)
    stw r0, 0xa0(r3)
    lwz r5, 0x94(r29)
    lwz r0, 0x98(r29)
    stw r5, 0xa4(r3)
    stw r0, 0xa8(r3)
    lwz r0, 0x9c(r29)
    addi r29, r29, 0xa0
    stw r0, 0xac(r3)
    bdnz lbl_802CA354
lbl_802CA4AC:
    clrlwi r3, r4, 16
    subf r0, r3, r28
    mtctr r0
    cmplw r3, r28
    bge lbl_802CA500
lbl_802CA4C0:
    clrlwi r0, r4, 16
    lwz r3, 0x0(r29)
    mulli r5, r0, 0x14
    lwz r0, 0x4(r29)
    addi r4, r4, 0x1
    add r5, r27, r5
    stw r3, 0x10(r5)
    stw r0, 0x14(r5)
    lwz r3, 0x8(r29)
    lwz r0, 0xc(r29)
    stw r3, 0x18(r5)
    stw r0, 0x1c(r5)
    lwz r0, 0x10(r29)
    addi r29, r29, 0x14
    stw r0, 0x20(r5)
    bdnz lbl_802CA4C0
lbl_802CA500:
    cmpwi r30, 0x0
    sth r28, 0xc(r27)
    li r5, 0x0
    beq lbl_802CA5BC
    cmplwi r30, 0x8
    addis r3, r30, 0x1
    subi r3, r3, 0x8
    ble lbl_802CA58C
    clrlwi r3, r3, 16
    addi r0, r3, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_802CA58C
lbl_802CA538:
    clrlslwi r3, r5, 16, 1
    lhz r0, 0x0(r31)
    add r3, r27, r3
    addi r5, r5, 0x8
    sth r0, 0x4e(r3)
    lhz r0, 0x2(r31)
    sth r0, 0x50(r3)
    lhz r0, 0x4(r31)
    sth r0, 0x52(r3)
    lhz r0, 0x6(r31)
    sth r0, 0x54(r3)
    lhz r0, 0x8(r31)
    sth r0, 0x56(r3)
    lhz r0, 0xa(r31)
    sth r0, 0x58(r3)
    lhz r0, 0xc(r31)
    sth r0, 0x5a(r3)
    lhz r0, 0xe(r31)
    addi r31, r31, 0x10
    sth r0, 0x5c(r3)
    bdnz lbl_802CA538
lbl_802CA58C:
    clrlwi r3, r5, 16
    subf r0, r3, r30
    mtctr r0
    cmplw r3, r30
    bge lbl_802CA5BC
lbl_802CA5A0:
    clrlslwi r0, r5, 16, 1
    lhz r4, 0x0(r31)
    add r3, r27, r0
    addi r5, r5, 0x1
    sth r4, 0x4e(r3)
    addi r31, r31, 0x2
    bdnz lbl_802CA5A0
lbl_802CA5BC:
    mr r3, r30
    mr r4, r27
    bl sdpu_sort_attr_list
    sth r30, 0x4c(r27)
    li r3, 0x1
lbl_802CA5D0:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SDP_ServiceSearchRequest
// ----------------------------------------------------------------------------
asm void SDP_ServiceSearchRequest() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    bl sdp_conn_originate
    cmpwi r3, 0x0
    bne lbl_802CA618
    li r3, 0x0
    b lbl_802CA62C
lbl_802CA618:
    li r0, 0x0
    stb r0, 0x474(r3)
    stw r30, 0x410(r3)
    stw r31, 0x414(r3)
    li r3, 0x1
lbl_802CA62C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SDP_ServiceSearchAttributeRequest
// ----------------------------------------------------------------------------
asm void SDP_ServiceSearchAttributeRequest() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    bl sdp_conn_originate
    cmpwi r3, 0x0
    bne lbl_802CA674
    li r3, 0x0
    b lbl_802CA690
lbl_802CA674:
    li r4, 0x0
    li r0, 0x1
    stb r4, 0x474(r3)
    stw r30, 0x410(r3)
    stw r31, 0x414(r3)
    stb r0, 0x475(r3)
    li r3, 0x1
lbl_802CA690:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SDP_FindAttributeInRec
// ----------------------------------------------------------------------------
asm void SDP_FindAttributeInRec() {
    nofralloc
    lwz r3, 0x0(r3)
    b lbl_802CA6C0
lbl_802CA6B0:
    lhz r0, 0x4(r3)
    cmplw r0, r4
    beqlr
    lwz r3, 0x0(r3)
lbl_802CA6C0:
    cmpwi r3, 0x0
    bne lbl_802CA6B0
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// SDP_FindServiceInDb
// ----------------------------------------------------------------------------
asm void SDP_FindServiceInDb() {
    nofralloc
    cmpwi r5, 0x0
    bne lbl_802CA6E0
    lwz r3, 0x8(r3)
    b lbl_802CA78C
lbl_802CA6E0:
    lwz r3, 0x4(r5)
    b lbl_802CA78C
lbl_802CA6E8:
    lwz r6, 0x0(r3)
    b lbl_802CA780
lbl_802CA6F0:
    lhz r5, 0x4(r6)
    cmplwi r5, 0x1
    bne lbl_802CA74C
    lhz r0, 0x6(r6)
    srawi r0, r0, 12
    cmpwi r0, 0x6
    bne lbl_802CA74C
    lwz r6, 0x8(r6)
    b lbl_802CA740
lbl_802CA714:
    lhz r5, 0x6(r6)
    srawi r0, r5, 12
    cmpwi r0, 0x3
    bne lbl_802CA73C
    clrlwi r0, r5, 20
    cmpwi r0, 0x2
    bne lbl_802CA73C
    lhz r0, 0x8(r6)
    cmplw r0, r4
    beqlr
lbl_802CA73C:
    lwz r6, 0x0(r6)
lbl_802CA740:
    cmpwi r6, 0x0
    bne lbl_802CA714
    b lbl_802CA788
lbl_802CA74C:
    cmplwi r5, 0x3
    bne lbl_802CA77C
    lhz r5, 0x6(r6)
    srawi r0, r5, 12
    cmpwi r0, 0x3
    bne lbl_802CA77C
    clrlwi r0, r5, 20
    cmpwi r0, 0x2
    bne lbl_802CA77C
    lhz r0, 0x8(r6)
    cmplw r0, r4
    beqlr
lbl_802CA77C:
    lwz r6, 0x0(r6)
lbl_802CA780:
    cmpwi r6, 0x0
    bne lbl_802CA6F0
lbl_802CA788:
    lwz r3, 0x4(r3)
lbl_802CA78C:
    cmpwi r3, 0x0
    bne lbl_802CA6E8
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// SDP_FindServiceUUIDInDb
// ----------------------------------------------------------------------------
asm void SDP_FindServiceUUIDInDb() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_802CA7C8
    lwz r31, 0x8(r3)
    b lbl_802CA87C
lbl_802CA7C8:
    lwz r31, 0x4(r5)
    b lbl_802CA87C
lbl_802CA7D0:
    lwz r30, 0x0(r31)
    b lbl_802CA870
lbl_802CA7D8:
    lhz r3, 0x4(r30)
    cmplwi r3, 0x1
    bne lbl_802CA838
    lhz r0, 0x6(r30)
    srawi r0, r0, 12
    cmpwi r0, 0x6
    bne lbl_802CA838
    lwz r30, 0x8(r30)
    b lbl_802CA82C
lbl_802CA7FC:
    lhz r0, 0x6(r30)
    srawi r0, r0, 12
    cmpwi r0, 0x3
    bne lbl_802CA828
    mr r3, r29
    mr r4, r30
    bl sdpu_compare_uuid_with_attr
    clrlwi. r0, r3, 24
    beq lbl_802CA828
    mr r3, r31
    b lbl_802CA888
lbl_802CA828:
    lwz r30, 0x0(r30)
lbl_802CA82C:
    cmpwi r30, 0x0
    bne lbl_802CA7FC
    b lbl_802CA878
lbl_802CA838:
    cmplwi r3, 0x3
    bne lbl_802CA86C
    lhz r0, 0x6(r30)
    srawi r0, r0, 12
    cmpwi r0, 0x3
    bne lbl_802CA86C
    mr r3, r29
    mr r4, r30
    bl sdpu_compare_uuid_with_attr
    clrlwi. r0, r3, 24
    beq lbl_802CA86C
    mr r3, r31
    b lbl_802CA888
lbl_802CA86C:
    lwz r30, 0x0(r30)
lbl_802CA870:
    cmpwi r30, 0x0
    bne lbl_802CA7D8
lbl_802CA878:
    lwz r31, 0x4(r31)
lbl_802CA87C:
    cmpwi r31, 0x0
    bne lbl_802CA7D0
    li r3, 0x0
lbl_802CA888:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SDP_SetLocalDiRecord
// ----------------------------------------------------------------------------
asm void SDP_SetLocalDiRecord() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    li r0, 0x1200
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    mr r28, r4
    sth r0, 0xc(r1)
    stw r31, 0x0(r4)
    bne lbl_802CA8E8
    li r3, 0xb
    b lbl_802CABE4
lbl_802CA8E8:
    lbz r0, 0x8(r3)
    cmplwi r0, 0x1
    bne lbl_802CA90C
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lwz r30, 0x121c(r3)
    cmpwi r30, 0x0
    beq lbl_802CA90C
    b lbl_802CA924
lbl_802CA90C:
    bl SDP_CreateRecord
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802CA924
    li r3, 0x6
    b lbl_802CABE4
lbl_802CA924:
    stw r30, 0x0(r28)
    mr r3, r30
    addi r5, r1, 0xc
    li r4, 0x1
    bl SDP_AddServiceClassIdList
    clrlwi. r0, r3, 24
    bne lbl_802CA944
    li r31, 0x7
lbl_802CA944:
    cmpwi r31, 0x0
    bne lbl_802CA980
    li r3, 0x0
    li r0, 0x9
    stb r3, 0x8(r1)
    addi r7, r1, 0x8
    mr r3, r30
    li r4, 0x200
    stb r0, 0x9(r1)
    li r5, 0x1
    li r6, 0x2
    bl SDP_AddAttribute
    clrlwi. r0, r3, 24
    bne lbl_802CA980
    li r31, 0x7
lbl_802CA980:
    cmpwi r31, 0x0
    bne lbl_802CA9D8
    lbz r0, 0x9(r29)
    extsb. r0, r0
    beq lbl_802CA9D8
    addi r3, r29, 0x9
    bl strlen
    addi r0, r3, 0x1
    cmplwi r0, 0x50
    bgt lbl_802CA9D4
    addi r3, r29, 0x9
    bl strlen
    mr r4, r3
    mr r3, r30
    addi r6, r4, 0x1
    addi r7, r29, 0x9
    li r4, 0xb
    li r5, 0x8
    bl SDP_AddAttribute
    clrlwi. r0, r3, 24
    bne lbl_802CA9D8
lbl_802CA9D4:
    li r31, 0x7
lbl_802CA9D8:
    cmpwi r31, 0x0
    bne lbl_802CAA30
    lbz r0, 0x59(r29)
    extsb. r0, r0
    beq lbl_802CAA30
    addi r3, r29, 0x59
    bl strlen
    addi r0, r3, 0x1
    cmplwi r0, 0x50
    bgt lbl_802CAA2C
    addi r3, r29, 0x59
    bl strlen
    mr r4, r3
    mr r3, r30
    addi r6, r4, 0x1
    addi r7, r29, 0x59
    li r4, 0x101
    li r5, 0x4
    bl SDP_AddAttribute
    clrlwi. r0, r3, 24
    bne lbl_802CAA30
lbl_802CAA2C:
    li r31, 0x7
lbl_802CAA30:
    cmpwi r31, 0x0
    bne lbl_802CAA88
    lbz r0, 0xa9(r29)
    extsb. r0, r0
    beq lbl_802CAA88
    addi r3, r29, 0xa9
    bl strlen
    addi r0, r3, 0x1
    cmplwi r0, 0x50
    bgt lbl_802CAA84
    addi r3, r29, 0xa9
    bl strlen
    mr r4, r3
    mr r3, r30
    addi r6, r4, 0x1
    addi r7, r29, 0xa9
    li r4, 0xa
    li r5, 0x8
    bl SDP_AddAttribute
    clrlwi. r0, r3, 24
    bne lbl_802CAA88
lbl_802CAA84:
    li r31, 0x7
lbl_802CAA88:
    cmpwi r31, 0x0
    bne lbl_802CAAC8
    lhz r0, 0x0(r29)
    addi r7, r1, 0x8
    mr r3, r30
    li r4, 0x201
    srawi r0, r0, 8
    li r5, 0x1
    stb r0, 0x8(r1)
    li r6, 0x2
    lhz r0, 0x0(r29)
    stb r0, 0x9(r1)
    bl SDP_AddAttribute
    clrlwi. r0, r3, 24
    bne lbl_802CAAC8
    li r31, 0x7
lbl_802CAAC8:
    cmpwi r31, 0x0
    bne lbl_802CAB08
    lhz r0, 0x4(r29)
    addi r7, r1, 0x8
    mr r3, r30
    li r4, 0x202
    srawi r0, r0, 8
    li r5, 0x1
    stb r0, 0x8(r1)
    li r6, 0x2
    lhz r0, 0x4(r29)
    stb r0, 0x9(r1)
    bl SDP_AddAttribute
    clrlwi. r0, r3, 24
    bne lbl_802CAB08
    li r31, 0x7
lbl_802CAB08:
    cmpwi r31, 0x0
    bne lbl_802CAB48
    lhz r0, 0x6(r29)
    addi r7, r1, 0x8
    mr r3, r30
    li r4, 0x203
    srawi r0, r0, 8
    li r5, 0x1
    stb r0, 0x8(r1)
    li r6, 0x2
    lhz r0, 0x6(r29)
    stb r0, 0x9(r1)
    bl SDP_AddAttribute
    clrlwi. r0, r3, 24
    bne lbl_802CAB48
    li r31, 0x7
lbl_802CAB48:
    cmpwi r31, 0x0
    bne lbl_802CAB74
    mr r3, r30
    addi r7, r29, 0x8
    li r4, 0x204
    li r5, 0x5
    li r6, 0x1
    bl SDP_AddAttribute
    clrlwi. r0, r3, 24
    bne lbl_802CAB74
    li r31, 0x7
lbl_802CAB74:
    cmpwi r31, 0x0
    bne lbl_802CABB4
    lhz r0, 0x2(r29)
    addi r7, r1, 0x8
    mr r3, r30
    li r4, 0x205
    srawi r0, r0, 8
    li r5, 0x1
    stb r0, 0x8(r1)
    li r6, 0x2
    lhz r0, 0x2(r29)
    stb r0, 0x9(r1)
    bl SDP_AddAttribute
    clrlwi. r0, r3, 24
    bne lbl_802CABB4
    li r31, 0x7
lbl_802CABB4:
    cmpwi r31, 0x0
    beq lbl_802CABC8
    mr r3, r30
    bl SDP_DeleteRecord
    b lbl_802CABE0
lbl_802CABC8:
    lbz r0, 0x8(r29)
    cmplwi r0, 0x1
    bne lbl_802CABE0
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    stw r30, 0x121c(r3)
lbl_802CABE0:
    mr r3, r31
lbl_802CABE4:
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
// SDP_GetLocalDiRecord
// ----------------------------------------------------------------------------
asm void SDP_GetLocalDiRecord() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x9
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_802CAC48
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lwz r0, 0x121c(r3)
    stw r0, 0x0(r4)
lbl_802CAC48:
    lwz r3, 0x0(r4)
    bl sdp_db_find_record
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_802CB088
    mr r3, r29
    li r4, 0x0
    li r5, 0xfa
    bl memset
    mr r3, r30
    li r31, 0x0
    li r4, 0x200
    li r5, 0x200
    bl sdp_db_find_attr_in_rec
    cmpwi r3, 0x0
    beq lbl_802CACA0
    lwz r4, 0x4(r3)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    slwi r3, r3, 8
    add r0, r3, r0
    sth r0, 0x0(r29)
lbl_802CACA0:
    mr r3, r30
    li r4, 0x201
    li r5, 0x201
    bl sdp_db_find_attr_in_rec
    cmpwi r3, 0x0
    beq lbl_802CACD0
    lwz r4, 0x4(r3)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    slwi r3, r3, 8
    add r0, r3, r0
    sth r0, 0x2(r29)
lbl_802CACD0:
    mr r3, r30
    li r4, 0x202
    li r5, 0x202
    bl sdp_db_find_attr_in_rec
    cmpwi r3, 0x0
    beq lbl_802CAD00
    lwz r4, 0x4(r3)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    slwi r3, r3, 8
    add r0, r3, r0
    sth r0, 0x6(r29)
lbl_802CAD00:
    mr r3, r30
    li r4, 0x203
    li r5, 0x203
    bl sdp_db_find_attr_in_rec
    cmpwi r3, 0x0
    beq lbl_802CAD30
    lwz r4, 0x4(r3)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    slwi r3, r3, 8
    add r0, r3, r0
    sth r0, 0x8(r29)
lbl_802CAD30:
    mr r3, r30
    li r4, 0x205
    li r5, 0x205
    bl sdp_db_find_attr_in_rec
    cmpwi r3, 0x0
    beq lbl_802CAD60
    lwz r4, 0x4(r3)
    lbz r3, 0x0(r4)
    lbz r0, 0x1(r4)
    slwi r3, r3, 8
    add r0, r3, r0
    sth r0, 0x4(r29)
lbl_802CAD60:
    mr r3, r30
    li r4, 0x204
    li r5, 0x204
    bl sdp_db_find_attr_in_rec
    cmpwi r3, 0x0
    beq lbl_802CAD84
    lwz r3, 0x4(r3)
    lbz r0, 0x0(r3)
    stb r0, 0xa(r29)
lbl_802CAD84:
    mr r3, r30
    li r4, 0xb
    li r5, 0xb
    bl sdp_db_find_attr_in_rec
    cmpwi r3, 0x0
    beq lbl_802CAE84
    lwz r0, 0x0(r3)
    li r4, 0x50
    cmplwi r0, 0x50
    bge lbl_802CADB0
    mr r4, r0
lbl_802CADB0:
    cmpwi cr1, r4, 0x0
    lwz r7, 0x4(r3)
    li r8, 0x0
    ble cr1, lbl_802CAE84
    cmpwi r4, 0x8
    subi r5, r4, 0x8
    ble lbl_802CAE58
    li r6, 0x0
    blt cr1, lbl_802CADE8
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r4, r0
    bgt lbl_802CADE8
    li r6, 0x1
lbl_802CADE8:
    cmpwi r6, 0x0
    beq lbl_802CAE58
    addi r0, r5, 0x7
    addi r3, r29, 0xb
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_802CAE58
lbl_802CAE08:
    lbz r0, 0x0(r7)
    addi r8, r8, 0x8
    stb r0, 0x0(r3)
    lbz r0, 0x1(r7)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r7)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r7)
    stb r0, 0x3(r3)
    lbz r0, 0x4(r7)
    stb r0, 0x4(r3)
    lbz r0, 0x5(r7)
    stb r0, 0x5(r3)
    lbz r0, 0x6(r7)
    stb r0, 0x6(r3)
    lbz r0, 0x7(r7)
    addi r7, r7, 0x8
    stb r0, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_802CAE08
lbl_802CAE58:
    add r3, r29, r8
    subf r0, r8, r4
    addi r3, r3, 0xb
    mtctr r0
    cmpw r8, r4
    bge lbl_802CAE84
lbl_802CAE70:
    lbz r0, 0x0(r7)
    addi r7, r7, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    bdnz lbl_802CAE70
lbl_802CAE84:
    mr r3, r30
    li r4, 0x101
    li r5, 0x101
    bl sdp_db_find_attr_in_rec
    cmpwi r3, 0x0
    beq lbl_802CAF84
    lwz r0, 0x0(r3)
    li r4, 0x50
    cmplwi r0, 0x50
    bge lbl_802CAEB0
    mr r4, r0
lbl_802CAEB0:
    cmpwi cr1, r4, 0x0
    lwz r7, 0x4(r3)
    li r8, 0x0
    ble cr1, lbl_802CAF84
    cmpwi r4, 0x8
    subi r5, r4, 0x8
    ble lbl_802CAF58
    li r6, 0x0
    blt cr1, lbl_802CAEE8
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r4, r0
    bgt lbl_802CAEE8
    li r6, 0x1
lbl_802CAEE8:
    cmpwi r6, 0x0
    beq lbl_802CAF58
    addi r0, r5, 0x7
    addi r3, r29, 0x5b
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_802CAF58
lbl_802CAF08:
    lbz r0, 0x0(r7)
    addi r8, r8, 0x8
    stb r0, 0x0(r3)
    lbz r0, 0x1(r7)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r7)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r7)
    stb r0, 0x3(r3)
    lbz r0, 0x4(r7)
    stb r0, 0x4(r3)
    lbz r0, 0x5(r7)
    stb r0, 0x5(r3)
    lbz r0, 0x6(r7)
    stb r0, 0x6(r3)
    lbz r0, 0x7(r7)
    addi r7, r7, 0x8
    stb r0, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_802CAF08
lbl_802CAF58:
    add r3, r29, r8
    subf r0, r8, r4
    addi r3, r3, 0x5b
    mtctr r0
    cmpw r8, r4
    bge lbl_802CAF84
lbl_802CAF70:
    lbz r0, 0x0(r7)
    addi r7, r7, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    bdnz lbl_802CAF70
lbl_802CAF84:
    mr r3, r30
    li r4, 0xa
    li r5, 0xa
    bl sdp_db_find_attr_in_rec
    cmpwi r3, 0x0
    beq lbl_802CB090
    lwz r0, 0x0(r3)
    li r4, 0x50
    cmplwi r0, 0x50
    bge lbl_802CAFB0
    mr r4, r0
lbl_802CAFB0:
    cmpwi cr1, r4, 0x0
    lwz r7, 0x4(r3)
    li r8, 0x0
    ble cr1, lbl_802CB090
    cmpwi r4, 0x8
    subi r5, r4, 0x8
    ble lbl_802CB058
    li r6, 0x0
    blt cr1, lbl_802CAFE8
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r4, r0
    bgt lbl_802CAFE8
    li r6, 0x1
lbl_802CAFE8:
    cmpwi r6, 0x0
    beq lbl_802CB058
    addi r0, r5, 0x7
    addi r3, r29, 0xab
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_802CB058
lbl_802CB008:
    lbz r0, 0x0(r7)
    addi r8, r8, 0x8
    stb r0, 0x0(r3)
    lbz r0, 0x1(r7)
    stb r0, 0x1(r3)
    lbz r0, 0x2(r7)
    stb r0, 0x2(r3)
    lbz r0, 0x3(r7)
    stb r0, 0x3(r3)
    lbz r0, 0x4(r7)
    stb r0, 0x4(r3)
    lbz r0, 0x5(r7)
    stb r0, 0x5(r3)
    lbz r0, 0x6(r7)
    stb r0, 0x6(r3)
    lbz r0, 0x7(r7)
    addi r7, r7, 0x8
    stb r0, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_802CB008
lbl_802CB058:
    add r3, r29, r8
    subf r0, r8, r4
    addi r3, r3, 0xab
    mtctr r0
    cmpw r8, r4
    bge lbl_802CB090
lbl_802CB070:
    lbz r0, 0x0(r7)
    addi r7, r7, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    bdnz lbl_802CB070
    b lbl_802CB090
lbl_802CB088:
    li r0, 0x0
    stw r0, 0x0(r28)
lbl_802CB090:
    mr r3, r31
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
// SDP_SetTraceLevel
// ----------------------------------------------------------------------------
asm void SDP_SetTraceLevel() {
    nofralloc
    cmplwi r3, 0xff
    beq lbl_802CB0C8
    lis r4, lbl_80457C40@ha
    addi r4, r4, lbl_80457C40@l
    stb r3, 0x4630(r4)
lbl_802CB0C8:
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r3, 0x4630(r3)
    blr
}

