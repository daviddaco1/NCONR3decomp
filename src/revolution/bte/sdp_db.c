#include "types.h"

// Translation unit: src/revolution/bte/sdp_db.cpp
// Total functions: 10

// Global data symbols (@ha/@l)
extern u8 lbl_803781C0[];
extern u8 lbl_803781FC[];
extern u8 lbl_80378230[];
extern u8 lbl_80457C40[];

// Forward declarations
extern void LogMsg_2();
extern void SDP_AddAttribute();
extern void SDP_AddServiceClassIdList();
extern void SDP_AddUuidSequence();
extern void SDP_CreateRecord();
extern void SDP_DeleteAttribute();
extern void SDP_DeleteRecord();
extern void _restgpr_23();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _savegpr_23();
extern void _savegpr_24();
extern void _savegpr_25();
extern void _savegpr_26();
extern void find_uuid_in_seq();
extern void memcpy();
extern void memset();
extern void sdp_db_find_attr_in_rec();
extern void sdp_db_find_record();
extern void sdp_db_service_search();
extern void sdpu_compare_uuid_arrays();
extern void sdpu_get_len_from_type();

// ----------------------------------------------------------------------------
// sdp_db_service_search
// ----------------------------------------------------------------------------
asm void sdp_db_service_search() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r5, lbl_80457C40@ha
    cmpwi r3, 0x0
    addi r5, r5, lbl_80457C40@l
    mr r29, r4
    lhz r0, 0x1222(r5)
    mulli r0, r0, 0x298
    add r4, r5, r0
    addi r30, r4, 0x1224
    bne lbl_802CB118
    addi r28, r5, 0x1224
    b lbl_802CB1F0
lbl_802CB118:
    addi r28, r3, 0x298
    b lbl_802CB1F0
lbl_802CB120:
    li r31, 0x0
    b lbl_802CB1C4
lbl_802CB128:
    clrlwi r0, r31, 16
    addi r24, r28, 0xc
    mulli r0, r0, 0x12
    li r25, 0x0
    add r27, r29, r0
    addi r26, r27, 0x4
    b lbl_802CB1A0
lbl_802CB144:
    lbz r0, 0xa(r24)
    cmplwi r0, 0x3
    bne lbl_802CB170
    lwz r3, 0x4(r24)
    mr r5, r26
    lwz r4, 0x0(r24)
    lhz r6, 0x2(r27)
    bl sdpu_compare_uuid_arrays
    clrlwi. r0, r3, 24
    bne lbl_802CB1B0
    b lbl_802CB198
lbl_802CB170:
    cmplwi r0, 0x6
    bne lbl_802CB198
    lwz r3, 0x4(r24)
    mr r5, r26
    lwz r4, 0x0(r24)
    li r7, 0x0
    lhz r6, 0x2(r27)
    bl find_uuid_in_seq
    clrlwi. r0, r3, 24
    bne lbl_802CB1B0
lbl_802CB198:
    addi r25, r25, 0x1
    addi r24, r24, 0xc
lbl_802CB1A0:
    lhz r0, 0x8(r28)
    clrlwi r3, r25, 16
    cmplw r3, r0
    blt lbl_802CB144
lbl_802CB1B0:
    lhz r0, 0x8(r28)
    clrlwi r3, r25, 16
    cmplw r3, r0
    beq lbl_802CB1D4
    addi r31, r31, 0x1
lbl_802CB1C4:
    lhz r0, 0x0(r29)
    clrlwi r3, r31, 16
    cmplw r3, r0
    blt lbl_802CB128
lbl_802CB1D4:
    lhz r0, 0x0(r29)
    clrlwi r3, r31, 16
    cmplw r3, r0
    bne lbl_802CB1EC
    mr r3, r28
    b lbl_802CB1FC
lbl_802CB1EC:
    addi r28, r28, 0x298
lbl_802CB1F0:
    cmplw r28, r30
    blt lbl_802CB120
    li r3, 0x0
lbl_802CB1FC:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// find_uuid_in_seq
// ----------------------------------------------------------------------------
asm void find_uuid_in_seq() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r7, 0x3
    mr r26, r3
    mr r27, r5
    mr r28, r6
    mr r29, r7
    add r31, r3, r4
    ble lbl_802CB2C8
    li r3, 0x0
    b lbl_802CB2D4
    b lbl_802CB2C8
lbl_802CB250:
    lbz r30, 0x0(r26)
    addi r3, r26, 0x1
    addi r5, r1, 0x8
    mr r4, r30
    bl sdpu_get_len_from_type
    extrwi r0, r30, 5, 24
    mr r26, r3
    cmplwi r0, 0x3
    bne lbl_802CB294
    lwz r4, 0x8(r1)
    mr r5, r27
    mr r6, r28
    bl sdpu_compare_uuid_arrays
    clrlwi. r0, r3, 24
    beq lbl_802CB2C0
    li r3, 0x1
    b lbl_802CB2D4
lbl_802CB294:
    cmplwi r0, 0x6
    bne lbl_802CB2C0
    lwz r4, 0x8(r1)
    mr r5, r27
    mr r6, r28
    addi r7, r29, 0x1
    bl find_uuid_in_seq
    clrlwi. r0, r3, 24
    beq lbl_802CB2C0
    li r3, 0x1
    b lbl_802CB2D4
lbl_802CB2C0:
    lwz r0, 0x8(r1)
    add r26, r26, r0
lbl_802CB2C8:
    cmplw r26, r31
    blt lbl_802CB250
    li r3, 0x0
lbl_802CB2D4:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// sdp_db_find_record
// ----------------------------------------------------------------------------
asm void sdp_db_find_record() {
    nofralloc
    lis r5, lbl_80457C40@ha
    li r0, 0x298
    addi r5, r5, lbl_80457C40@l
    lhz r4, 0x1222(r5)
    addi r6, r5, 0x1224
    mulli r4, r4, 0x298
    add r4, r5, r4
    addi r5, r4, 0x1224
    addi r4, r5, 0x297
    subf r4, r6, r4
    divwu r4, r4, r0
    mtctr r4
    cmplw r6, r5
    bge lbl_802CB340
lbl_802CB324:
    lwz r0, 0x0(r6)
    cmplw r0, r3
    bne lbl_802CB338
    mr r3, r6
    blr
lbl_802CB338:
    addi r6, r6, 0x298
    bdnz lbl_802CB324
lbl_802CB340:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// sdp_db_find_attr_in_rec
// ----------------------------------------------------------------------------
asm void sdp_db_find_attr_in_rec() {
    nofralloc
    lhz r6, 0x8(r3)
    addi r3, r3, 0xc
    li r7, 0x0
    b lbl_802CB374
lbl_802CB358:
    lhz r0, 0x8(r3)
    cmplw r0, r4
    blt lbl_802CB36C
    cmplw r0, r5
    blelr
lbl_802CB36C:
    addi r7, r7, 0x1
    addi r3, r3, 0xc
lbl_802CB374:
    clrlwi r0, r7, 16
    cmplw r0, r6
    blt lbl_802CB358
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// SDP_CreateRecord
// ----------------------------------------------------------------------------
asm void SDP_CreateRecord() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_80457C40@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_80457C40@l
    stw r31, 0x1c(r1)
    addi r31, r3, 0x121c
    lhz r0, 0x1222(r3)
    cmplwi r0, 0x14
    bge lbl_802CB450
    mulli r0, r0, 0x298
    li r4, 0x0
    li r5, 0x298
    add r3, r31, r0
    addi r3, r3, 0x8
    bl memset
    lhz r4, 0x6(r31)
    cmpwi r4, 0x0
    beq lbl_802CB3EC
    subi r0, r4, 0x1
    mulli r0, r0, 0x298
    add r3, r31, r0
    lwz r3, 0x8(r3)
    addi r3, r3, 0x1
    b lbl_802CB3F0
lbl_802CB3EC:
    lis r3, 0x1
lbl_802CB3F0:
    mulli r4, r4, 0x298
    srwi r0, r3, 24
    extrwi r6, r3, 8, 8
    stb r0, 0x8(r1)
    extrwi r0, r3, 8, 16
    add r4, r31, r4
    stw r3, 0x8(r4)
    addi r7, r1, 0x8
    li r4, 0x0
    li r5, 0x1
    lhz r8, 0x6(r31)
    stb r6, 0x9(r1)
    li r6, 0x4
    addi r8, r8, 0x1
    sth r8, 0x6(r31)
    stb r0, 0xa(r1)
    stb r3, 0xb(r1)
    bl SDP_AddAttribute
    lhz r3, 0x6(r31)
    subi r0, r3, 0x1
    mulli r0, r0, 0x298
    add r3, r31, r0
    lwz r3, 0x8(r3)
    b lbl_802CB454
lbl_802CB450:
    li r3, 0x0
lbl_802CB454:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SDP_DeleteRecord
// ----------------------------------------------------------------------------
asm void SDP_DeleteRecord() {
    nofralloc
    lis r4, lbl_80457C40@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_80457C40@l
    addi r10, r4, 0x1224
    beq lbl_802CB488
    lhz r4, 0x1222(r4)
    cmpwi r4, 0x0
    bne lbl_802CB4A8
lbl_802CB488:
    lis r4, lbl_80457C40@ha
    li r0, 0x0
    addi r4, r4, lbl_80457C40@l
    li r3, 0x1
    sth r0, 0x1222(r4)
    stw r0, 0x121c(r4)
    stb r0, 0x1220(r4)
    blr
lbl_802CB4A8:
    li r9, 0x0
    b lbl_802CB568
lbl_802CB4B0:
    lwz r0, 0x0(r10)
    cmplw r0, r3
    bne lbl_802CB560
    lis r5, lbl_80457C40@ha
    li r7, 0x53
    addi r5, r5, lbl_80457C40@l
    b lbl_802CB528
lbl_802CB4CC:
    subi r8, r10, 0x4
    addi r6, r10, 0x294
    mtctr r7
lbl_802CB4D8:
    lwz r4, 0x4(r6)
    lwzu r0, 0x8(r6)
    stw r4, 0x4(r8)
    stwu r0, 0x8(r8)
    bdnz lbl_802CB4D8
    li r8, 0x0
    b lbl_802CB510
lbl_802CB4F4:
    clrlwi r0, r8, 16
    addi r8, r8, 0x1
    mulli r0, r0, 0xc
    add r6, r10, r0
    lwz r4, 0x10(r6)
    subi r0, r4, 0x298
    stw r0, 0x10(r6)
lbl_802CB510:
    lhz r0, 0x8(r10)
    clrlwi r4, r8, 16
    cmplw r4, r0
    blt lbl_802CB4F4
    addi r9, r9, 0x1
    addi r10, r10, 0x298
lbl_802CB528:
    lhz r4, 0x1222(r5)
    clrlwi r0, r9, 16
    cmplw r0, r4
    blt lbl_802CB4CC
    lwz r0, 0x121c(r5)
    subi r4, r4, 0x1
    sth r4, 0x1222(r5)
    cmplw r0, r3
    bne lbl_802CB558
    li r0, 0x0
    stw r0, 0x121c(r5)
    stb r0, 0x1220(r5)
lbl_802CB558:
    li r3, 0x1
    blr
lbl_802CB560:
    addi r9, r9, 0x1
    addi r10, r10, 0x298
lbl_802CB568:
    clrlwi r0, r9, 16
    cmplw r0, r4
    blt lbl_802CB4B0
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// SDP_AddAttribute
// ----------------------------------------------------------------------------
asm void SDP_AddAttribute() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lis r8, lbl_80457C40@ha
    mr r26, r5
    addi r8, r8, lbl_80457C40@l
    mr r24, r3
    lhz r9, 0x1222(r8)
    mr r25, r4
    mr r27, r6
    mr r28, r7
    addi r30, r8, 0x1224
    li r5, 0x0
    b lbl_802CB8EC
lbl_802CB5BC:
    lwz r0, 0x0(r30)
    cmplw r0, r3
    bne lbl_802CB8E4
    lhz r3, 0x8(r30)
    addi r29, r30, 0xc
    li r31, 0x0
    b lbl_802CB600
lbl_802CB5D8:
    lhz r0, 0x8(r29)
    cmplw r0, r4
    bne lbl_802CB5F4
    mr r3, r24
    mr r4, r25
    bl SDP_DeleteAttribute
    b lbl_802CB60C
lbl_802CB5F4:
    bgt lbl_802CB60C
    addi r31, r31, 0x1
    addi r29, r29, 0xc
lbl_802CB600:
    clrlwi r0, r31, 16
    cmplw r0, r3
    blt lbl_802CB5D8
lbl_802CB60C:
    lhz r5, 0x8(r30)
    cmplwi r5, 0x19
    bne lbl_802CB620
    li r3, 0x0
    b lbl_802CB8FC
lbl_802CB620:
    clrlwi r0, r31, 16
    cmplw r0, r5
    bne lbl_802CB63C
    mulli r0, r5, 0xc
    add r3, r30, r0
    addi r29, r3, 0xc
    b lbl_802CB800
lbl_802CB63C:
    cmplw cr1, r5, r0
    ble cr1, lbl_802CB800
    subf r0, r31, r5
    addi r3, r31, 0x8
    clrlwi r0, r0, 16
    cmplwi r0, 0x8
    ble lbl_802CB7BC
    blt cr1, lbl_802CB7BC
    clrlwi r3, r3, 16
    addi r0, r5, 0x7
    subf r0, r3, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r5, r3
    ble lbl_802CB7BC
lbl_802CB678:
    clrlwi r0, r5, 16
    addis r3, r5, 0x1
    mulli r4, r0, 0xc
    lwzux r9, r4, r30
    subi r6, r3, 0x1
    subi r0, r3, 0x2
    lwz r7, 0x4(r4)
    clrlwi r6, r6, 16
    mulli r8, r6, 0xc
    subi r5, r5, 0x8
    stw r9, 0xc(r4)
    clrlwi r6, r0, 16
    subi r0, r3, 0x3
    stw r7, 0x10(r4)
    clrlwi r0, r0, 16
    add r23, r30, r8
    lwz r11, 0x8(r4)
    mulli r10, r6, 0xc
    subi r6, r3, 0x4
    stw r11, 0x14(r4)
    mulli r9, r0, 0xc
    subi r0, r3, 0x5
    lwzx r12, r30, r8
    clrlwi r6, r6, 16
    lwz r11, 0x4(r23)
    clrlwi r7, r0, 16
    stw r12, 0x0(r4)
    add r12, r30, r10
    subi r0, r3, 0x6
    add r10, r30, r9
    mulli r8, r6, 0xc
    stw r11, 0x4(r4)
    clrlwi r6, r0, 16
    subi r0, r3, 0x7
    mulli r3, r6, 0xc
    lwz r6, 0x8(r23)
    clrlwi r0, r0, 16
    stw r6, 0x8(r4)
    add r9, r30, r8
    mulli r7, r7, 0xc
    lwz r11, 0x0(r12)
    add r8, r30, r7
    add r7, r30, r3
    lwz r3, 0x4(r12)
    mulli r0, r0, 0xc
    stw r11, -0xc(r4)
    stw r3, -0x8(r4)
    add r6, r30, r0
    lwz r0, 0x8(r12)
    stw r0, -0x4(r4)
    lwz r3, 0x0(r10)
    lwz r0, 0x4(r10)
    stw r3, -0x18(r4)
    stw r0, -0x14(r4)
    lwz r0, 0x8(r10)
    stw r0, -0x10(r4)
    lwz r3, 0x0(r9)
    lwz r0, 0x4(r9)
    stw r3, -0x24(r4)
    stw r0, -0x20(r4)
    lwz r0, 0x8(r9)
    stw r0, -0x1c(r4)
    lwz r3, 0x0(r8)
    lwz r0, 0x4(r8)
    stw r3, -0x30(r4)
    stw r0, -0x2c(r4)
    lwz r0, 0x8(r8)
    stw r0, -0x28(r4)
    lwz r3, 0x0(r7)
    lwz r0, 0x4(r7)
    stw r3, -0x3c(r4)
    stw r0, -0x38(r4)
    lwz r0, 0x8(r7)
    stw r0, -0x34(r4)
    lwz r3, 0x0(r6)
    lwz r0, 0x4(r6)
    stw r3, -0x48(r4)
    stw r0, -0x44(r4)
    lwz r0, 0x8(r6)
    stw r0, -0x40(r4)
    bdnz lbl_802CB678
lbl_802CB7BC:
    clrlwi r3, r31, 16
    clrlwi r4, r5, 16
    subf r0, r3, r4
    mtctr r0
    cmplw r4, r3
    ble lbl_802CB800
lbl_802CB7D4:
    clrlwi r0, r5, 16
    subi r5, r5, 0x1
    mulli r0, r0, 0xc
    add r4, r30, r0
    lwzx r3, r30, r0
    lwz r0, 0x4(r4)
    stw r3, 0xc(r4)
    stw r0, 0x10(r4)
    lwz r0, 0x8(r4)
    stw r0, 0x14(r4)
    bdnz lbl_802CB7D4
lbl_802CB800:
    lhz r3, 0x8(r30)
    addi r0, r3, 0x1
    sth r0, 0x8(r30)
    sth r25, 0x8(r29)
    stw r27, 0x0(r29)
    stb r26, 0xa(r29)
    lwz r6, 0x4(r30)
    add r0, r6, r27
    cmplwi r0, 0x15e
    blt lbl_802CB874
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CB858
    lis r3, 0xa
    lis r4, lbl_803781C0@ha
    mr r5, r27
    subfic r6, r6, 0x15e
    addi r3, r3, 0x1
    addi r4, r4, lbl_803781C0@l
    bl LogMsg_2
lbl_802CB858:
    lwz r0, 0x4(r30)
    li r3, 0x0
    subfic r27, r0, 0x15e
    stbx r3, r28, r27
    lwz r0, 0x4(r30)
    subfic r0, r0, 0x15f
    stbx r3, r28, r0
lbl_802CB874:
    cmpwi r27, 0x0
    beq lbl_802CB8B8
    cmpwi r28, 0x0
    beq lbl_802CB8B8
    lwz r0, 0x4(r30)
    mr r4, r28
    mr r5, r27
    add r3, r30, r0
    addi r3, r3, 0x138
    bl memcpy
    lwz r0, 0x4(r30)
    add r3, r30, r0
    addi r0, r3, 0x138
    stw r0, 0x4(r29)
    lwz r0, 0x4(r30)
    add r0, r0, r27
    stw r0, 0x4(r30)
lbl_802CB8B8:
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lwz r0, 0x121c(r3)
    cmplw r24, r0
    bne lbl_802CB8DC
    cmplwi r25, 0x8001
    bne lbl_802CB8DC
    li r0, 0x1
    stb r0, 0x1220(r3)
lbl_802CB8DC:
    li r3, 0x1
    b lbl_802CB8FC
lbl_802CB8E4:
    addi r5, r5, 0x1
    addi r30, r30, 0x298
lbl_802CB8EC:
    clrlwi r0, r5, 16
    cmplw r0, r9
    blt lbl_802CB5BC
    li r3, 0x0
lbl_802CB8FC:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// SDP_AddUuidSequence
// ----------------------------------------------------------------------------
asm void SDP_AddUuidSequence() {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0xc4(r1)
    stw r31, 0xbc(r1)
    addi r31, r1, 0x8
    stw r30, 0xb8(r1)
    mr r30, r4
    li r4, 0x19
    stw r29, 0xb4(r1)
    mr r29, r3
    mr r3, r31
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_802CB9B8
lbl_802CB950:
    stb r4, 0x0(r31)
    lhz r0, 0x0(r6)
    srawi r0, r0, 8
    stb r0, 0x1(r31)
    lhz r0, 0x0(r6)
    stb r0, 0x2(r31)
    addi r31, r31, 0x3
    subf r0, r3, r31
    cmpwi r0, 0x4d
    ble lbl_802CB9AC
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CB9B8
    lis r3, 0xa
    lis r4, lbl_803781FC@ha
    mr r6, r5
    clrlwi r5, r7, 16
    addi r3, r3, 0x1
    addi r4, r4, lbl_803781FC@l
    bl LogMsg_2
    b lbl_802CB9B8
lbl_802CB9AC:
    addi r7, r7, 0x1
    addi r6, r6, 0x2
    bdnz lbl_802CB950
lbl_802CB9B8:
    addi r7, r1, 0x8
    mr r3, r29
    mr r4, r30
    li r5, 0x6
    subf r6, r7, r31
    bl SDP_AddAttribute
    lwz r0, 0xc4(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    lwz r29, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// ----------------------------------------------------------------------------
// SDP_AddServiceClassIdList
// ----------------------------------------------------------------------------
asm void SDP_AddServiceClassIdList() {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    cmpwi r4, 0x0
    li r6, 0x0
    stw r0, 0xb4(r1)
    addi r8, r1, 0x8
    beq lbl_802CBB44
    cmplwi r4, 0x8
    addis r7, r4, 0x1
    subi r7, r7, 0x8
    ble lbl_802CBB04
    clrlwi r9, r7, 16
    li r0, 0x19
    addi r7, r9, 0x7
    srwi r7, r7, 3
    mtctr r7
    cmplwi r9, 0x0
    ble lbl_802CBB04
lbl_802CBA34:
    stb r0, 0x0(r8)
    addi r6, r6, 0x8
    lhz r7, 0x0(r5)
    srawi r7, r7, 8
    stb r7, 0x1(r8)
    lhz r7, 0x0(r5)
    stb r7, 0x2(r8)
    stb r0, 0x3(r8)
    lhz r7, 0x2(r5)
    srawi r7, r7, 8
    stb r7, 0x4(r8)
    lhz r7, 0x2(r5)
    stb r7, 0x5(r8)
    stb r0, 0x6(r8)
    lhz r7, 0x4(r5)
    srawi r7, r7, 8
    stb r7, 0x7(r8)
    lhz r7, 0x4(r5)
    stb r7, 0x8(r8)
    stb r0, 0x9(r8)
    lhz r7, 0x6(r5)
    srawi r7, r7, 8
    stb r7, 0xa(r8)
    lhz r7, 0x6(r5)
    stb r7, 0xb(r8)
    stb r0, 0xc(r8)
    lhz r7, 0x8(r5)
    srawi r7, r7, 8
    stb r7, 0xd(r8)
    lhz r7, 0x8(r5)
    stb r7, 0xe(r8)
    stb r0, 0xf(r8)
    lhz r7, 0xa(r5)
    srawi r7, r7, 8
    stb r7, 0x10(r8)
    lhz r7, 0xa(r5)
    stb r7, 0x11(r8)
    stb r0, 0x12(r8)
    lhz r7, 0xc(r5)
    srawi r7, r7, 8
    stb r7, 0x13(r8)
    lhz r7, 0xc(r5)
    stb r7, 0x14(r8)
    stb r0, 0x15(r8)
    lhz r7, 0xe(r5)
    srawi r7, r7, 8
    stb r7, 0x16(r8)
    lhz r7, 0xe(r5)
    addi r5, r5, 0x10
    stb r7, 0x17(r8)
    addi r8, r8, 0x18
    bdnz lbl_802CBA34
lbl_802CBB04:
    clrlwi r7, r6, 16
    li r9, 0x19
    subf r0, r7, r4
    mtctr r0
    cmplw r7, r4
    bge lbl_802CBB44
lbl_802CBB1C:
    stb r9, 0x0(r8)
    addi r6, r6, 0x1
    lhz r0, 0x0(r5)
    srawi r0, r0, 8
    stb r0, 0x1(r8)
    lhz r0, 0x0(r5)
    addi r5, r5, 0x2
    stb r0, 0x2(r8)
    addi r8, r8, 0x3
    bdnz lbl_802CBB1C
lbl_802CBB44:
    addi r7, r1, 0x8
    li r4, 0x1
    subf r6, r7, r8
    li r5, 0x6
    bl SDP_AddAttribute
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// ----------------------------------------------------------------------------
// SDP_DeleteAttribute
// ----------------------------------------------------------------------------
asm void SDP_DeleteAttribute() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r27, lbl_80457C40@ha
    mr r25, r3
    addi r27, r27, lbl_80457C40@l
    mr r26, r4
    addi r31, r27, 0x1224
    li r3, 0x0
    lis r28, 0xa
    lis r29, lbl_80378230@ha
    b lbl_802CBD78
lbl_802CBBA0:
    lwz r0, 0x0(r31)
    cmplw r0, r25
    bne lbl_802CBD70
    lbz r0, 0x4630(r27)
    addi r30, r31, 0xc
    cmplwi r0, 0x3
    blt lbl_802CBBD0
    mr r5, r26
    mr r6, r25
    addi r3, r28, 0x2
    addi r4, r29, lbl_80378230@l
    bl LogMsg_2
lbl_802CBBD0:
    lhz r4, 0x8(r31)
    li r3, 0x0
    b lbl_802CBD64
lbl_802CBBDC:
    lhz r0, 0x8(r30)
    cmplw r0, r26
    bne lbl_802CBD5C
    lwz r0, 0x0(r30)
    lwz r4, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_802CBC34
    li r7, 0x0
    b lbl_802CBC24
lbl_802CBC00:
    clrlwi r5, r7, 16
    mulli r5, r5, 0xc
    add r6, r31, r5
    lwz r5, 0x10(r6)
    cmplw r5, r4
    ble lbl_802CBC20
    subf r5, r0, r5
    stw r5, 0x10(r6)
lbl_802CBC20:
    addi r7, r7, 0x1
lbl_802CBC24:
    lhz r5, 0x8(r31)
    clrlwi r6, r7, 16
    cmplw r6, r5
    blt lbl_802CBC00
lbl_802CBC34:
    lhz r5, 0x8(r31)
    subi r5, r5, 0x1
    sth r5, 0x8(r31)
    b lbl_802CBC64
lbl_802CBC44:
    lwz r6, 0xc(r30)
    addi r3, r3, 0x1
    lwz r5, 0x10(r30)
    stw r6, 0x0(r30)
    stw r5, 0x4(r30)
    lwz r5, 0x14(r30)
    stw r5, 0x8(r30)
    addi r30, r30, 0xc
lbl_802CBC64:
    lhz r5, 0x8(r31)
    clrlwi r6, r3, 16
    cmplw r6, r5
    blt lbl_802CBC44
    cmpwi r0, 0x0
    beq lbl_802CBD54
    addi r5, r31, 0x138
    add r6, r4, r0
    lwz r3, 0x4(r31)
    subf r5, r5, r6
    li r7, 0x0
    subf r3, r5, r3
    clrlwi. r8, r3, 16
    beq lbl_802CBD48
    cmplwi r8, 0x8
    addis r3, r8, 0x1
    subi r3, r3, 0x8
    ble lbl_802CBD18
    clrlwi r5, r3, 16
    addi r3, r5, 0x7
    srwi r3, r3, 3
    mtctr r3
    cmplwi r5, 0x0
    ble lbl_802CBD18
lbl_802CBCC4:
    lbz r3, 0x0(r6)
    add r5, r4, r0
    addi r7, r7, 0x8
    addi r6, r6, 0x8
    stb r3, 0x0(r4)
    lbz r3, 0x1(r5)
    stb r3, 0x1(r4)
    lbz r3, 0x2(r5)
    stb r3, 0x2(r4)
    lbz r3, 0x3(r5)
    stb r3, 0x3(r4)
    lbz r3, 0x4(r5)
    stb r3, 0x4(r4)
    lbz r3, 0x5(r5)
    stb r3, 0x5(r4)
    lbz r3, 0x6(r5)
    stb r3, 0x6(r4)
    lbz r3, 0x7(r5)
    stb r3, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_802CBCC4
lbl_802CBD18:
    clrlwi r6, r7, 16
    add r5, r0, r4
    subf r3, r6, r8
    mtctr r3
    cmplw r6, r8
    bge lbl_802CBD48
lbl_802CBD30:
    lbz r3, 0x0(r5)
    addi r7, r7, 0x1
    addi r5, r5, 0x1
    stb r3, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_802CBD30
lbl_802CBD48:
    lwz r3, 0x4(r31)
    subf r0, r0, r3
    stw r0, 0x4(r31)
lbl_802CBD54:
    li r3, 0x1
    b lbl_802CBD8C
lbl_802CBD5C:
    addi r3, r3, 0x1
    addi r30, r30, 0xc
lbl_802CBD64:
    clrlwi r0, r3, 16
    cmplw r0, r4
    blt lbl_802CBBDC
lbl_802CBD70:
    addi r3, r3, 0x1
    addi r31, r31, 0x298
lbl_802CBD78:
    lhz r0, 0x1222(r27)
    clrlwi r4, r3, 16
    cmplw r4, r0
    blt lbl_802CBBA0
    li r3, 0x0
lbl_802CBD8C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

