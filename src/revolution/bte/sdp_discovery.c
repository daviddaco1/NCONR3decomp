#include "types.h"

// Translation unit: src/revolution/bte/sdp_discovery.cpp
// Total functions: 10

// Global data symbols (@ha/@l)
extern u8 jumptable_80378390[];
extern u8 lbl_80378258[];
extern u8 lbl_80378280[];
extern u8 lbl_803782A8[];
extern u8 lbl_80457C40[];

// Forward declarations
extern void GKI_getpoolbuf();
extern void L2CA_DataWrite();
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
extern void _restgpr_21();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _savegpr_21();
extern void _savegpr_25();
extern void _savegpr_26();
extern void add_attr();
extern void add_record();
extern void btu_start_timer();
extern void btu_stop_timer();
extern void memcpy();
extern void process_service_attr_rsp();
extern void process_service_search_attr_rsp();
extern void process_service_search_rsp();
extern void save_attr_seq();
extern void sdp_disc_connected();
extern void sdp_disc_server_rsp();
extern void sdp_disconnect();
extern void sdp_snd_service_search_req();
extern void sdpu_build_attrib_seq();
extern void sdpu_build_uuid_seq();
extern void sdpu_get_len_from_type();
extern void sdpu_is_base_uuid();

// ----------------------------------------------------------------------------
// sdpu_build_uuid_seq
// ----------------------------------------------------------------------------
asm void sdpu_build_uuid_seq() {
    nofralloc
    li r0, 0x35
    addi r11, r3, 0x1
    mr r10, r11
    stb r0, 0x0(r3)
    li r9, 0x0
    li r6, 0x1c
    li r7, 0x1a
    li r8, 0x19
    mtctr r4
    cmplwi r4, 0x0
    addi r11, r11, 0x1
    ble lbl_802CBE7C
lbl_802CBDD4:
    lhz r0, 0x0(r5)
    cmplwi r0, 0x2
    bne lbl_802CBE00
    stb r8, 0x0(r11)
    lhz r0, 0x4(r5)
    srawi r0, r0, 8
    stb r0, 0x1(r11)
    lhz r0, 0x4(r5)
    stb r0, 0x2(r11)
    addi r11, r11, 0x3
    b lbl_802CBE70
lbl_802CBE00:
    cmplwi r0, 0x4
    bne lbl_802CBE40
    stb r7, 0x0(r11)
    lwz r0, 0x4(r5)
    srwi r0, r0, 24
    stb r0, 0x1(r11)
    lwz r0, 0x4(r5)
    extrwi r0, r0, 8, 8
    stb r0, 0x2(r11)
    lwz r0, 0x4(r5)
    extrwi r0, r0, 8, 16
    stb r0, 0x3(r11)
    lwz r0, 0x4(r5)
    stb r0, 0x4(r11)
    addi r11, r11, 0x5
    b lbl_802CBE70
lbl_802CBE40:
    stb r6, 0x0(r11)
    li r4, 0x0
    addi r11, r11, 0x1
    b lbl_802CBE64
lbl_802CBE50:
    add r3, r5, r4
    addi r4, r4, 0x1
    lbz r0, 0x4(r3)
    stb r0, 0x0(r11)
    addi r11, r11, 0x1
lbl_802CBE64:
    lhz r0, 0x0(r5)
    cmpw r4, r0
    blt lbl_802CBE50
lbl_802CBE70:
    addi r9, r9, 0x1
    addi r5, r5, 0x14
    bdnz lbl_802CBDD4
lbl_802CBE7C:
    subf r4, r10, r11
    mr r3, r11
    subi r0, r4, 0x1
    stb r0, 0x0(r10)
    blr
}

// ----------------------------------------------------------------------------
// sdp_snd_service_search_req
// ----------------------------------------------------------------------------
asm void sdp_snd_service_search_req() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_802CBED4
    mr r3, r26
    li r4, 0x6
    bl sdp_disconnect
    b lbl_802CBFA8
lbl_802CBED4:
    li r0, 0x9
    addi r30, r3, 0x11
    sth r0, 0x4(r3)
    li r0, 0x2
    addi r31, r30, 0x3
    stb r0, 0x11(r3)
    addi r3, r31, 0x2
    lhz r0, 0x470(r26)
    srawi r0, r0, 8
    stb r0, 0x1(r30)
    lhz r0, 0x470(r26)
    stb r0, 0x2(r30)
    lhz r4, 0x470(r26)
    lwz r6, 0x410(r26)
    addi r0, r4, 0x1
    sth r0, 0x470(r26)
    addi r5, r6, 0x10
    lhz r4, 0xc(r6)
    bl sdpu_build_uuid_seq
    lis r4, lbl_80457C40@ha
    cmpwi r27, 0x0
    addi r4, r4, lbl_80457C40@l
    addi r25, r3, 0x3
    lhz r0, 0x462e(r4)
    srawi r0, r0, 8
    stb r0, 0x0(r3)
    lhz r0, 0x462e(r4)
    stb r0, 0x1(r3)
    stb r27, 0x2(r3)
    beq lbl_802CBF68
    cmpwi r28, 0x0
    beq lbl_802CBF68
    mr r3, r25
    mr r4, r28
    mr r5, r27
    bl memcpy
    add r25, r25, r27
lbl_802CBF68:
    subf r4, r31, r25
    li r3, 0x1
    subi r6, r4, 0x2
    subf r0, r30, r25
    extrwi r5, r6, 8, 16
    mr r4, r29
    stb r5, 0x0(r31)
    stb r6, 0x1(r31)
    stb r3, 0x474(r26)
    sth r0, 0x2(r29)
    lhz r3, 0x22(r26)
    bl L2CA_DataWrite
    addi r3, r26, 0x8
    li r4, 0x5
    li r5, 0x1e
    bl btu_start_timer
lbl_802CBFA8:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// sdp_disc_connected
// ----------------------------------------------------------------------------
asm void sdp_disc_connected() {
    nofralloc
    lbz r0, 0x475(r3)
    cmpwi r0, 0x0
    beq lbl_802CBFE0
    li r0, 0x3
    li r4, 0x0
    stb r0, 0x474(r3)
    li r5, 0x0
    b process_service_search_attr_rsp
lbl_802CBFE0:
    li r0, 0x0
    li r4, 0x0
    sth r0, 0x46c(r3)
    li r5, 0x0
    b sdp_snd_service_search_req
}

// ----------------------------------------------------------------------------
// sdp_disc_server_rsp
// ----------------------------------------------------------------------------
asm void sdp_disc_server_rsp() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x1
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    addi r3, r3, 0x8
    bl btu_stop_timer
    lhz r0, 0x4(r29)
    lhz r3, 0x2(r29)
    add r4, r29, r0
    lbz r31, 0x8(r4)
    subi r5, r3, 0x1
    cmpwi r31, 0x5
    sth r5, 0x2(r29)
    beq lbl_802CC084
    bge lbl_802CC054
    cmpwi r31, 0x3
    beq lbl_802CC060
    b lbl_802CC0C8
lbl_802CC054:
    cmpwi r31, 0x7
    beq lbl_802CC0A8
    b lbl_802CC0C8
lbl_802CC060:
    lbz r0, 0x474(r28)
    cmplwi r0, 0x1
    bne lbl_802CC0C8
    mr r3, r28
    addi r4, r4, 0x9
    clrlwi r5, r5, 16
    bl process_service_search_rsp
    li r30, 0x0
    b lbl_802CC0C8
lbl_802CC084:
    lbz r0, 0x474(r28)
    cmplwi r0, 0x2
    bne lbl_802CC0C8
    mr r3, r28
    addi r4, r4, 0x9
    clrlwi r5, r5, 16
    bl process_service_attr_rsp
    li r30, 0x0
    b lbl_802CC0C8
lbl_802CC0A8:
    lbz r0, 0x474(r28)
    cmplwi r0, 0x3
    bne lbl_802CC0C8
    mr r3, r28
    addi r4, r4, 0x9
    clrlwi r5, r5, 16
    bl process_service_search_attr_rsp
    li r30, 0x0
lbl_802CC0C8:
    cmpwi r30, 0x0
    beq lbl_802CC114
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CC100
    lis r3, 0xa
    lis r4, lbl_80378258@ha
    lbz r6, 0x474(r28)
    mr r5, r31
    addi r3, r3, 0x1
    addi r4, r4, lbl_80378258@l
    bl LogMsg_2
lbl_802CC100:
    lis r4, 0x1
    mr r3, r28
    subi r0, r4, 0xd
    clrlwi r4, r0, 16
    bl sdp_disconnect
lbl_802CC114:
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
// process_service_search_rsp
// ----------------------------------------------------------------------------
asm void process_service_search_rsp() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r5, r4, 0x8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r6, 0x6(r4)
    lbz r0, 0x7(r4)
    slwi r4, r6, 8
    lhz r9, 0x46c(r3)
    add r0, r4, r0
    clrlwi r0, r0, 16
    add r0, r9, r0
    clrlwi. r6, r0, 16
    sth r0, 0x46c(r3)
    bne lbl_802CC1B4
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CC19C
    lis r3, 0xa
    lis r4, lbl_80378280@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_80378280@l
    bl LogMsg_0
lbl_802CC19C:
    lis r4, 0x1
    mr r3, r31
    subi r0, r4, 0x10
    clrlwi r4, r0, 16
    bl sdp_disconnect
    b lbl_802CC268
lbl_802CC1B4:
    lis r4, lbl_80457C40@ha
    addi r4, r4, lbl_80457C40@l
    lhz r0, 0x462e(r4)
    cmplw r6, r0
    ble lbl_802CC20C
    sth r0, 0x46c(r3)
    b lbl_802CC20C
lbl_802CC1D0:
    clrlslwi r0, r9, 16, 2
    lbz r7, 0x0(r5)
    lbz r6, 0x1(r5)
    add r4, r3, r0
    lbz r0, 0x2(r5)
    slwi r8, r7, 24
    lbz r7, 0x3(r5)
    slwi r6, r6, 16
    slwi r0, r0, 8
    addi r5, r5, 0x4
    add r6, r8, r6
    addi r9, r9, 0x1
    add r0, r7, r0
    add r0, r6, r0
    stw r0, 0x418(r4)
lbl_802CC20C:
    lhz r0, 0x46c(r3)
    clrlwi r4, r9, 16
    cmplw r4, r0
    blt lbl_802CC1D0
    lbz r4, 0x0(r5)
    cmpwi r4, 0x0
    beq lbl_802CC250
    cmplwi r4, 0x10
    ble lbl_802CC240
    mr r3, r31
    li r4, 0x5
    bl sdp_disconnect
    b lbl_802CC268
lbl_802CC240:
    mr r3, r31
    addi r5, r5, 0x1
    bl sdp_snd_service_search_req
    b lbl_802CC268
lbl_802CC250:
    li r0, 0x2
    li r4, 0x0
    stb r0, 0x474(r3)
    mr r3, r31
    li r5, 0x0
    bl process_service_attr_rsp
lbl_802CC268:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// process_service_attr_rsp
// ----------------------------------------------------------------------------
asm void process_service_attr_rsp() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r4, 0x0
    mr r26, r3
    mr r27, r4
    li r29, 0x0
    beq lbl_802CC370
    lbz r5, 0x4(r4)
    addi r27, r4, 0x6
    lbz r0, 0x5(r4)
    slwi r4, r5, 8
    lhz r5, 0x24(r3)
    add r0, r4, r0
    clrlwi r25, r0, 16
    add r0, r5, r25
    cmpwi r0, 0x3e8
    ble lbl_802CC2D8
    li r4, 0x4
    bl sdp_disconnect
    b lbl_802CC50C
lbl_802CC2D8:
    add r3, r3, r5
    mr r4, r27
    mr r5, r25
    addi r3, r3, 0x26
    bl memcpy
    lhz r0, 0x24(r26)
    add r0, r0, r25
    sth r0, 0x24(r26)
    lbzux r3, r27, r25
    cmpwi r3, 0x0
    beq lbl_802CC324
    cmplwi r3, 0x10
    ble lbl_802CC31C
    mr r3, r26
    li r4, 0x5
    bl sdp_disconnect
    b lbl_802CC50C
lbl_802CC31C:
    li r29, 0x1
    b lbl_802CC370
lbl_802CC324:
    clrlwi r0, r0, 16
    mr r3, r26
    add r5, r26, r0
    addi r4, r26, 0x26
    addi r5, r5, 0x26
    bl save_attr_seq
    cmpwi r3, 0x0
    bne lbl_802CC35C
    lis r4, 0x1
    mr r3, r26
    subi r0, r4, 0xc
    clrlwi r4, r0, 16
    bl sdp_disconnect
    b lbl_802CC50C
lbl_802CC35C:
    lhz r3, 0x46e(r26)
    li r0, 0x0
    sth r0, 0x24(r26)
    addi r0, r3, 0x1
    sth r0, 0x46e(r26)
lbl_802CC370:
    lhz r3, 0x46e(r26)
    lhz r0, 0x46c(r26)
    cmplw r3, r0
    bge lbl_802CC500
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_802CC3A4
    mr r3, r26
    li r4, 0x6
    bl sdp_disconnect
    b lbl_802CC50C
lbl_802CC3A4:
    li r0, 0x9
    lis r4, lbl_80457C40@ha
    sth r0, 0x4(r3)
    addi r31, r3, 0x11
    li r0, 0x4
    addi r4, r4, lbl_80457C40@l
    stb r0, 0x0(r31)
    addi r3, r31, 0x3
    mr r30, r3
    lhz r0, 0x470(r26)
    addi r3, r3, 0x8
    srawi r0, r0, 8
    stb r0, 0x1(r31)
    lhz r0, 0x470(r26)
    stb r0, 0x2(r31)
    lhz r5, 0x470(r26)
    lhz r0, 0x46e(r26)
    addi r5, r5, 0x1
    slwi r0, r0, 2
    sth r5, 0x470(r26)
    add r5, r26, r0
    lwz r0, 0x418(r5)
    srwi r0, r0, 24
    stb r0, 0x5(r31)
    lhz r0, 0x46e(r26)
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r0, 0x418(r5)
    extrwi r0, r0, 8, 8
    stb r0, 0x6(r31)
    lhz r0, 0x46e(r26)
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r0, 0x418(r5)
    extrwi r0, r0, 8, 16
    stb r0, 0x7(r31)
    lhz r0, 0x46e(r26)
    slwi r0, r0, 2
    add r5, r26, r0
    lwz r0, 0x418(r5)
    stb r0, 0x8(r31)
    lhz r0, 0x462c(r4)
    srawi r0, r0, 8
    stb r0, 0x9(r31)
    lhz r0, 0x462c(r4)
    stb r0, 0xa(r31)
    lwz r4, 0x410(r26)
    lhz r5, 0x4c(r4)
    cmpwi r5, 0x0
    beq lbl_802CC47C
    addi r4, r4, 0x4e
    bl sdpu_build_attrib_seq
    mr r25, r3
    b lbl_802CC48C
lbl_802CC47C:
    li r4, 0x0
    li r5, 0x0
    bl sdpu_build_attrib_seq
    mr r25, r3
lbl_802CC48C:
    cmpwi r29, 0x0
    beq lbl_802CC4B8
    lbz r5, 0x0(r27)
    mr r3, r25
    mr r4, r27
    addi r5, r5, 0x1
    bl memcpy
    lbz r0, 0x0(r27)
    add r3, r0, r25
    addi r4, r3, 0x1
    b lbl_802CC4C4
lbl_802CC4B8:
    li r0, 0x0
    addi r4, r25, 0x1
    stb r0, 0x0(r25)
lbl_802CC4C4:
    subf r3, r30, r4
    subf r0, r31, r4
    subi r5, r3, 0x2
    mr r4, r28
    extrwi r3, r5, 8, 16
    stb r3, 0x0(r30)
    stb r5, 0x1(r30)
    sth r0, 0x2(r28)
    lhz r3, 0x22(r26)
    bl L2CA_DataWrite
    addi r3, r26, 0x8
    li r4, 0x5
    li r5, 0x1e
    bl btu_start_timer
    b lbl_802CC50C
lbl_802CC500:
    mr r3, r26
    li r4, 0x0
    bl sdp_disconnect
lbl_802CC50C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// process_service_search_attr_rsp
// ----------------------------------------------------------------------------
asm void process_service_search_attr_rsp() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r4, 0x0
    mr r27, r3
    mr r28, r4
    li r29, 0x0
    beq lbl_802CC5C8
    lbz r5, 0x4(r4)
    addi r28, r4, 0x6
    lbz r0, 0x5(r4)
    slwi r4, r5, 8
    lhz r5, 0x24(r3)
    add r0, r4, r0
    clrlwi r26, r0, 16
    add r0, r5, r26
    cmpwi r0, 0x3e8
    ble lbl_802CC580
    li r4, 0x4
    bl sdp_disconnect
    b lbl_802CC7E0
lbl_802CC580:
    add r3, r3, r5
    mr r4, r28
    mr r5, r26
    addi r3, r3, 0x26
    bl memcpy
    lhz r0, 0x24(r27)
    add r0, r0, r26
    sth r0, 0x24(r27)
    lbzux r0, r28, r26
    cmpwi r0, 0x0
    beq lbl_802CC5C8
    cmplwi r0, 0x10
    ble lbl_802CC5C4
    mr r3, r27
    li r4, 0x5
    bl sdp_disconnect
    b lbl_802CC7E0
lbl_802CC5C4:
    li r29, 0x1
lbl_802CC5C8:
    cmpwi r29, 0x0
    bne lbl_802CC5D8
    cmpwi r28, 0x0
    bne lbl_802CC714
lbl_802CC5D8:
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802CC5FC
    mr r3, r27
    li r4, 0x6
    bl sdp_disconnect
    b lbl_802CC7E0
lbl_802CC5FC:
    li r0, 0x9
    addi r31, r3, 0x11
    sth r0, 0x4(r3)
    li r0, 0x6
    addi r29, r31, 0x3
    stb r0, 0x11(r3)
    addi r3, r29, 0x2
    lhz r0, 0x470(r27)
    srawi r0, r0, 8
    stb r0, 0x1(r31)
    lhz r0, 0x470(r27)
    stb r0, 0x2(r31)
    lhz r4, 0x470(r27)
    lwz r6, 0x410(r27)
    addi r0, r4, 0x1
    sth r0, 0x470(r27)
    addi r5, r6, 0x10
    lhz r4, 0xc(r6)
    bl sdpu_build_uuid_seq
    lis r4, lbl_80457C40@ha
    addi r6, r3, 0x2
    addi r4, r4, lbl_80457C40@l
    lhz r0, 0x462c(r4)
    srawi r0, r0, 8
    stb r0, 0x0(r3)
    lhz r0, 0x462c(r4)
    stb r0, 0x1(r3)
    lwz r4, 0x410(r27)
    lhz r5, 0x4c(r4)
    cmpwi r5, 0x0
    beq lbl_802CC68C
    mr r3, r6
    addi r4, r4, 0x4e
    bl sdpu_build_attrib_seq
    mr r26, r3
    b lbl_802CC6A0
lbl_802CC68C:
    mr r3, r6
    li r4, 0x0
    li r5, 0x0
    bl sdpu_build_attrib_seq
    mr r26, r3
lbl_802CC6A0:
    cmpwi r28, 0x0
    beq lbl_802CC6CC
    lbz r5, 0x0(r28)
    mr r3, r26
    mr r4, r28
    addi r5, r5, 0x1
    bl memcpy
    lbz r0, 0x0(r28)
    add r3, r0, r26
    addi r4, r3, 0x1
    b lbl_802CC6D8
lbl_802CC6CC:
    li r0, 0x0
    addi r4, r26, 0x1
    stb r0, 0x0(r26)
lbl_802CC6D8:
    subf r3, r29, r4
    subf r0, r31, r4
    subi r5, r3, 0x2
    mr r4, r30
    extrwi r3, r5, 8, 16
    stb r3, 0x0(r29)
    stb r5, 0x1(r29)
    sth r0, 0x2(r30)
    lhz r3, 0x22(r27)
    bl L2CA_DataWrite
    addi r3, r27, 0x8
    li r4, 0x5
    li r5, 0x1e
    bl btu_start_timer
    b lbl_802CC7E0
lbl_802CC714:
    lbz r5, 0x26(r27)
    addi r3, r27, 0x27
    srawi r0, r5, 3
    cmpwi r0, 0x6
    beq lbl_802CC754
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CC7E0
    lis r3, 0xa
    lis r4, lbl_803782A8@ha
    addi r3, r3, 0x1
    addi r4, r4, lbl_803782A8@l
    bl LogMsg_1
    b lbl_802CC7E0
lbl_802CC754:
    mr r4, r5
    addi r5, r1, 0x8
    bl sdpu_get_len_from_type
    lhz r5, 0x24(r27)
    mr r4, r3
    lwz r0, 0x8(r1)
    add r5, r27, r5
    addi r26, r5, 0x26
    add r0, r3, r0
    cmplw r0, r26
    beq lbl_802CC7CC
    mr r3, r27
    li r4, 0x5
    bl sdp_disconnect
    b lbl_802CC7E0
    b lbl_802CC7CC
lbl_802CC794:
    lhz r0, 0x24(r27)
    mr r3, r27
    add r5, r27, r0
    addi r5, r5, 0x26
    bl save_attr_seq
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_802CC7CC
    lis r4, 0x1
    mr r3, r27
    subi r0, r4, 0xc
    clrlwi r4, r0, 16
    bl sdp_disconnect
    b lbl_802CC7E0
lbl_802CC7CC:
    cmplw r4, r26
    blt lbl_802CC794
    mr r3, r27
    li r4, 0x0
    bl sdp_disconnect
lbl_802CC7E0:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// save_attr_seq
// ----------------------------------------------------------------------------
asm void save_attr_seq() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lbz r6, 0x0(r4)
    lis r31, lbl_80378258@ha
    mr r26, r3
    mr r27, r5
    srawi r0, r6, 3
    addi r31, r31, lbl_80378258@l
    cmpwi r0, 0x6
    addi r3, r4, 0x1
    beq lbl_802CC860
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CC858
    lis r3, 0xa
    mr r5, r6
    addi r3, r3, 0x1
    addi r4, r31, 0x50
    bl LogMsg_1
lbl_802CC858:
    li r3, 0x0
    b lbl_802CC9CC
lbl_802CC860:
    mr r4, r6
    addi r5, r1, 0xc
    bl sdpu_get_len_from_type
    lwz r5, 0xc(r1)
    mr r30, r3
    add r0, r3, r5
    cmplw r0, r27
    ble lbl_802CC8AC
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CC8A4
    lis r3, 0xa
    addi r4, r31, 0x78
    addi r3, r3, 0x1
    bl LogMsg_1
lbl_802CC8A4:
    li r3, 0x0
    b lbl_802CC9CC
lbl_802CC8AC:
    lwz r3, 0x410(r26)
    addi r4, r26, 0x2
    bl add_record
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_802CC8F0
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CC8E8
    lis r3, 0xa
    addi r4, r31, 0x98
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802CC8E8:
    li r3, 0x0
    b lbl_802CC9CC
lbl_802CC8F0:
    lwz r0, 0xc(r1)
    add r28, r30, r0
    b lbl_802CC9C0
lbl_802CC8FC:
    lbz r29, 0x0(r30)
    addi r3, r30, 0x1
    addi r5, r1, 0x8
    mr r4, r29
    bl sdpu_get_len_from_type
    extrwi r0, r29, 5, 24
    cmpwi r0, 0x1
    bne lbl_802CC928
    lwz r0, 0x8(r1)
    cmplwi r0, 0x2
    beq lbl_802CC95C
lbl_802CC928:
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CC954
    lis r3, 0xa
    lwz r6, 0x8(r1)
    mr r5, r29
    addi r4, r31, 0xa8
    addi r3, r3, 0x1
    bl LogMsg_2
lbl_802CC954:
    li r3, 0x0
    b lbl_802CC9CC
lbl_802CC95C:
    lbz r4, 0x0(r3)
    mr r5, r27
    lbz r0, 0x1(r3)
    li r7, 0x0
    slwi r6, r4, 8
    lwz r4, 0x410(r26)
    add r0, r6, r0
    li r8, 0x0
    clrlwi r6, r0, 16
    addi r3, r3, 0x2
    bl add_attr
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802CC9C0
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CC9B8
    lis r3, 0xa
    addi r4, r31, 0x98
    addi r3, r3, 0x1
    bl LogMsg_0
lbl_802CC9B8:
    li r3, 0x0
    b lbl_802CC9CC
lbl_802CC9C0:
    cmplw r30, r28
    blt lbl_802CC8FC
    mr r3, r30
lbl_802CC9CC:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// add_record
// ----------------------------------------------------------------------------
asm void add_record() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x4(r3)
    cmplwi r5, 0x14
    bge lbl_802CCA10
    li r3, 0x0
    b lbl_802CCA6C
lbl_802CCA10:
    lwz r31, 0x68(r3)
    subi r0, r5, 0x14
    stw r0, 0x4(r3)
    li r0, 0x0
    addi r6, r31, 0x14
    li r5, 0x6
    stw r6, 0x68(r3)
    addi r3, r31, 0xc
    stw r0, 0x0(r31)
    stw r0, 0x4(r31)
    bl memcpy
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    bne lbl_802CCA58
    stw r31, 0x8(r30)
    b lbl_802CCA68
    b lbl_802CCA58
lbl_802CCA54:
    mr r3, r0
lbl_802CCA58:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_802CCA54
    stw r31, 0x4(r3)
lbl_802CCA68:
    mr r3, r31
lbl_802CCA6C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// add_attr
// ----------------------------------------------------------------------------
asm void add_attr() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    lbz r21, 0x0(r3)
    lis r31, lbl_80378258@ha
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r4, r21
    addi r31, r31, lbl_80378258@l
    rlwinm r28, r8, 0, 24, 24
    clrlwi r27, r8, 25
    addi r5, r1, 0x8
    addi r3, r3, 0x1
    bl sdpu_get_len_from_type
    lwz r0, 0x8(r1)
    mr r22, r3
    extrwi r6, r21, 4, 25
    li r4, 0xc
    clrlwi r5, r0, 20
    cmplwi r5, 0x4
    stw r5, 0x8(r1)
    ble lbl_802CCAF0
    addi r4, r5, 0x8
lbl_802CCAF0:
    addi r4, r4, 0x3
    lwz r0, 0x4(r23)
    clrrwi r30, r4, 2
    cmplw r0, r30
    bge lbl_802CCB0C
    li r3, 0x0
    b lbl_802CD004
lbl_802CCB0C:
    lwz r29, 0x68(r23)
    clrlslwi r0, r6, 16, 12
    cmplwi r6, 0x8
    li r4, 0x0
    sth r25, 0x4(r29)
    lwz r5, 0x8(r1)
    clrlwi r5, r5, 16
    or r5, r5, r0
    sth r5, 0x6(r29)
    stw r4, 0x0(r29)
    bgt lbl_802CCF84
    lis r5, jumptable_80378390@ha
    slwi r4, r6, 2
    addi r5, r5, jumptable_80378390@l
    lwzx r5, r5, r4
    mtctr r5
    bctr
    cmpwi r28, 0x0
    beq lbl_802CCC00
    lwz r0, 0x8(r1)
    cmplwi r0, 0x2
    bne lbl_802CCC00
    lbz r4, 0x0(r3)
    lbz r0, 0x1(r3)
    slwi r4, r4, 8
    add r0, r4, r0
    clrlwi r0, r0, 16
    cmplwi r0, 0x4
    bne lbl_802CCC00
    lwz r5, 0x68(r23)
    cmplwi r27, 0x5
    lwz r4, 0x4(r23)
    li r30, 0x0
    addi r5, r5, 0xc
    subi r0, r4, 0xc
    stw r5, 0x68(r23)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r1)
    add r4, r3, r0
    addi r21, r4, 0x2
    blt lbl_802CCBD8
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x1
    blt lbl_802CCBD0
    addi r4, r31, 0xd8
    lis r3, 0xa
    bl LogMsg_0
lbl_802CCBD0:
    mr r3, r21
    b lbl_802CD004
lbl_802CCBD8:
    addi r0, r27, 0x1
    mr r4, r23
    mr r5, r24
    mr r7, r29
    clrlwi r8, r0, 24
    li r6, 0x4
    addi r3, r3, 0x2
    bl add_attr
    mr r22, r3
    b lbl_802CCF84
lbl_802CCC00:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x3
    beq lbl_802CCC8C
    bge lbl_802CCC20
    cmpwi r0, 0x1
    beq lbl_802CCC2C
    bge lbl_802CCC3C
    b lbl_802CCC8C
lbl_802CCC20:
    cmpwi r0, 0x5
    bge lbl_802CCC8C
    b lbl_802CCC58
lbl_802CCC2C:
    lbz r0, 0x0(r3)
    addi r22, r3, 0x1
    stb r0, 0x8(r29)
    b lbl_802CCF84
lbl_802CCC3C:
    lbz r4, 0x0(r3)
    addi r22, r3, 0x2
    lbz r0, 0x1(r3)
    slwi r3, r4, 8
    add r0, r3, r0
    sth r0, 0x8(r29)
    b lbl_802CCF84
lbl_802CCC58:
    lbz r5, 0x0(r3)
    addi r22, r3, 0x4
    lbz r0, 0x2(r3)
    lbz r4, 0x1(r3)
    slwi r6, r5, 24
    slwi r0, r0, 8
    slwi r5, r4, 16
    lbz r4, 0x3(r3)
    add r3, r6, r5
    add r0, r4, r0
    add r0, r3, r0
    stw r0, 0x8(r29)
    b lbl_802CCF84
lbl_802CCC8C:
    addi r3, r29, 0x8
    li r4, 0x0
    b lbl_802CCCAC
lbl_802CCC98:
    lbz r0, 0x0(r22)
    addi r4, r4, 0x1
    addi r22, r22, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_802CCCAC:
    lwz r0, 0x8(r1)
    cmpw r4, r0
    blt lbl_802CCC98
    b lbl_802CCF84
    lwz r5, 0x8(r1)
    cmpwi r5, 0x4
    beq lbl_802CCD00
    bge lbl_802CCCD8
    cmpwi r5, 0x2
    beq lbl_802CCCE4
    b lbl_802CCE20
lbl_802CCCD8:
    cmpwi r5, 0x10
    beq lbl_802CCD58
    b lbl_802CCE20
lbl_802CCCE4:
    lbz r4, 0x0(r3)
    addi r22, r3, 0x2
    lbz r0, 0x1(r3)
    slwi r3, r4, 8
    add r0, r3, r0
    sth r0, 0x8(r29)
    b lbl_802CCF84
lbl_802CCD00:
    lbz r7, 0x0(r3)
    addi r22, r3, 0x4
    lbz r6, 0x1(r3)
    lis r4, 0x1
    slwi r8, r7, 24
    lbz r5, 0x2(r3)
    slwi r7, r6, 16
    lbz r6, 0x3(r3)
    slwi r3, r5, 8
    add r5, r8, r7
    add r3, r6, r3
    add r3, r5, r3
    cmplw r3, r4
    stw r3, 0x8(r29)
    bge lbl_802CCF84
    li r3, 0x2
    ori r0, r0, 0x2
    stw r3, 0x8(r1)
    sth r0, 0x6(r29)
    lwz r0, 0x8(r29)
    sth r0, 0x8(r29)
    b lbl_802CCF84
lbl_802CCD58:
    mr r3, r22
    bl sdpu_is_base_uuid
    clrlwi. r0, r3, 24
    beq lbl_802CCDF0
    lbz r0, 0x0(r22)
    cmpwi r0, 0x0
    bne lbl_802CCDAC
    lbz r0, 0x1(r22)
    cmpwi r0, 0x0
    bne lbl_802CCDAC
    lhz r0, 0x6(r29)
    clrrwi r0, r0, 12
    ori r0, r0, 0x2
    sth r0, 0x6(r29)
    lbz r3, 0x2(r22)
    lbz r0, 0x3(r22)
    addi r22, r22, 0x10
    slwi r3, r3, 8
    add r0, r3, r0
    sth r0, 0x8(r29)
    b lbl_802CCF84
lbl_802CCDAC:
    lhz r0, 0x6(r29)
    clrrwi r0, r0, 12
    ori r0, r0, 0x4
    sth r0, 0x6(r29)
    lbz r4, 0x0(r22)
    lbz r3, 0x1(r22)
    lbz r0, 0x2(r22)
    slwi r5, r4, 24
    lbz r4, 0x3(r22)
    slwi r3, r3, 16
    slwi r0, r0, 8
    addi r22, r22, 0x10
    add r3, r5, r3
    add r0, r4, r0
    add r0, r3, r0
    stw r0, 0x8(r29)
    b lbl_802CCF84
lbl_802CCDF0:
    addi r3, r29, 0x8
    li r4, 0x0
    b lbl_802CCE10
lbl_802CCDFC:
    lbz r0, 0x0(r22)
    addi r4, r4, 0x1
    addi r22, r22, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_802CCE10:
    lwz r0, 0x8(r1)
    cmpw r4, r0
    blt lbl_802CCDFC
    b lbl_802CCF84
lbl_802CCE20:
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CCE44
    lis r3, 0xa
    addi r4, r31, 0xf4
    addi r3, r3, 0x1
    bl LogMsg_1
lbl_802CCE44:
    lwz r0, 0x8(r1)
    add r3, r22, r0
    b lbl_802CD004
    lwz r5, 0x68(r23)
    cmplwi r27, 0x5
    lwz r4, 0x4(r23)
    li r30, 0x0
    addi r5, r5, 0xc
    subi r0, r4, 0xc
    stw r5, 0x68(r23)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r1)
    add r21, r3, r0
    blt lbl_802CCEA4
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x1
    blt lbl_802CCE9C
    addi r4, r31, 0xd8
    lis r3, 0xa
    bl LogMsg_0
lbl_802CCE9C:
    mr r3, r21
    b lbl_802CD004
lbl_802CCEA4:
    cmpwi r28, 0x0
    bne lbl_802CCEB4
    cmplwi r25, 0xd
    bne lbl_802CCEBC
lbl_802CCEB4:
    ori r0, r27, 0x80
    clrlwi r27, r0, 24
lbl_802CCEBC:
    clrlwi r3, r27, 24
    addi r25, r3, 0x1
    b lbl_802CCEF8
lbl_802CCEC8:
    mr r3, r22
    mr r4, r23
    mr r5, r24
    mr r7, r29
    clrlwi r8, r25, 24
    li r6, 0x0
    bl add_attr
    cmpwi r3, 0x0
    mr r22, r3
    bne lbl_802CCEF8
    li r3, 0x0
    b lbl_802CD004
lbl_802CCEF8:
    cmplw r22, r21
    blt lbl_802CCEC8
    b lbl_802CCF84
    addi r3, r29, 0x8
    li r4, 0x0
    b lbl_802CCF24
lbl_802CCF10:
    lbz r0, 0x0(r22)
    addi r4, r4, 0x1
    addi r22, r22, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_802CCF24:
    lwz r0, 0x8(r1)
    cmpw r4, r0
    blt lbl_802CCF10
    b lbl_802CCF84
    lwz r5, 0x8(r1)
    cmpwi r5, 0x1
    beq lbl_802CCF44
    b lbl_802CCF54
lbl_802CCF44:
    lbz r0, 0x0(r3)
    addi r22, r3, 0x1
    stb r0, 0x8(r29)
    b lbl_802CCF84
lbl_802CCF54:
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CCF78
    lis r3, 0xa
    addi r4, r31, 0x114
    addi r3, r3, 0x1
    bl LogMsg_1
lbl_802CCF78:
    lwz r0, 0x8(r1)
    add r3, r22, r0
    b lbl_802CD004
lbl_802CCF84:
    lwz r3, 0x68(r23)
    cmpwi r26, 0x0
    lwz r0, 0x4(r23)
    add r3, r3, r30
    subf r0, r30, r0
    stw r3, 0x68(r23)
    stw r0, 0x4(r23)
    bne lbl_802CCFD4
    lwz r3, 0x0(r24)
    cmpwi r3, 0x0
    bne lbl_802CCFC0
    stw r29, 0x0(r24)
    b lbl_802CD000
    b lbl_802CCFC0
lbl_802CCFBC:
    mr r3, r0
lbl_802CCFC0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_802CCFBC
    stw r29, 0x0(r3)
    b lbl_802CD000
lbl_802CCFD4:
    lwz r3, 0x8(r26)
    cmpwi r3, 0x0
    bne lbl_802CCFF0
    stw r29, 0x8(r26)
    b lbl_802CD000
    b lbl_802CCFF0
lbl_802CCFEC:
    mr r3, r0
lbl_802CCFF0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_802CCFEC
    stw r29, 0x0(r3)
lbl_802CD000:
    mr r3, r22
lbl_802CD004:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

