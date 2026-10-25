#include "types.h"

// Translation unit: src/revolution/bte/sdp_server.cpp
// Total functions: 4

// Global data symbols (@ha/@l)
extern u8 lbl_80378718[];
extern u8 lbl_8037873C[];
extern u8 lbl_80457C40[];

// Forward declarations
extern void GKI_getpoolbuf();
extern void L2CA_DataWrite();
extern void LogMsg_0();
extern void LogMsg_1();
extern void _restgpr_14();
extern void _restgpr_20();
extern void _restgpr_24();
extern void _savegpr_14();
extern void _savegpr_20();
extern void _savegpr_24();
extern void btu_start_timer();
extern void memcpy();
extern void process_service_attr_req();
extern void process_service_search();
extern void process_service_search_attr_req();
extern void sdp_db_find_attr_in_rec();
extern void sdp_db_find_record();
extern void sdp_db_service_search();
extern void sdp_server_handle_client_req();
extern void sdpu_build_attrib_entry();
extern void sdpu_build_n_send_error();
extern void sdpu_extract_attr_seq();
extern void sdpu_extract_uid_seq();

// ----------------------------------------------------------------------------
// sdp_server_handle_client_req
// ----------------------------------------------------------------------------
asm void sdp_server_handle_client_req() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    addi r3, r3, 0x8
    lhz r5, 0x4(r4)
    lhz r0, 0x2(r4)
    add r5, r4, r5
    li r4, 0x5
    addi r31, r5, 0x8
    li r5, 0x1e
    add r30, r31, r0
    bl btu_start_timer
    lbz r3, 0x3(r31)
    lbz r0, 0x4(r31)
    slwi r3, r3, 8
    lbz r6, 0x1(r31)
    add r0, r3, r0
    lbz r29, 0x0(r31)
    lbz r4, 0x2(r31)
    clrlwi r5, r0, 16
    addi r31, r31, 0x1
    slwi r6, r6, 8
    add r3, r31, r5
    addi r0, r3, 0x4
    add r3, r6, r4
    cmplw r0, r30
    clrlwi r4, r3, 16
    ble lbl_802CDC20
    mr r3, r28
    li r5, 0x4
    li r6, 0x0
    bl sdpu_build_n_send_error
    b lbl_802CDCBC
lbl_802CDC20:
    cmpwi r29, 0x4
    beq lbl_802CDC58
    bge lbl_802CDC38
    cmpwi r29, 0x2
    beq lbl_802CDC44
    b lbl_802CDC80
lbl_802CDC38:
    cmpwi r29, 0x6
    beq lbl_802CDC6C
    b lbl_802CDC80
lbl_802CDC44:
    mr r3, r28
    mr r7, r30
    addi r6, r31, 0x4
    bl process_service_search
    b lbl_802CDCBC
lbl_802CDC58:
    mr r3, r28
    mr r7, r30
    addi r6, r31, 0x4
    bl process_service_attr_req
    b lbl_802CDCBC
lbl_802CDC6C:
    mr r3, r28
    mr r7, r30
    addi r6, r31, 0x4
    bl process_service_search_attr_req
    b lbl_802CDCBC
lbl_802CDC80:
    mr r3, r28
    li r5, 0x3
    li r6, 0x0
    bl sdpu_build_n_send_error
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x2
    blt lbl_802CDCBC
    lis r3, 0xa
    lis r4, lbl_80378718@ha
    mr r5, r29
    addi r3, r3, 0x1
    addi r4, r4, lbl_80378718@l
    bl LogMsg_1
lbl_802CDCBC:
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
// process_service_search
// ----------------------------------------------------------------------------
asm void process_service_search() {
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    addi r11, r1, 0x1d0
    bl _savegpr_14
    li r0, 0x0
    mr r30, r3
    stb r0, 0x17c(r1)
    mr r17, r4
    mr r4, r5
    mr r3, r6
    addi r5, r1, 0x58
    li r19, 0x0
    bl sdpu_extract_uid_seq
    cmpwi r3, 0x0
    mr r15, r3
    beq lbl_802CDD2C
    lhz r0, 0x58(r1)
    cmpwi r0, 0x0
    bne lbl_802CDD44
lbl_802CDD2C:
    mr r3, r30
    mr r4, r17
    li r5, 0x3
    li r6, 0x0
    bl sdpu_build_n_send_error
    b lbl_802CE0D4
lbl_802CDD44:
    lbz r4, 0x0(r3)
    lbz r0, 0x1(r3)
    slwi r3, r4, 8
    add r0, r3, r0
    clrlwi r18, r0, 16
    cmplwi r18, 0x14
    ble lbl_802CDD64
    li r18, 0x14
lbl_802CDD64:
    addi r14, r1, 0x8
    li r16, 0x0
    b lbl_802CDD98
lbl_802CDD70:
    mr r3, r19
    addi r4, r1, 0x58
    bl sdp_db_service_search
    cmpwi r3, 0x0
    mr r19, r3
    beq lbl_802CDDA4
    lwz r3, 0x0(r3)
    clrlslwi r0, r16, 16, 2
    addi r16, r16, 0x1
    stwx r3, r14, r0
lbl_802CDD98:
    clrlwi r0, r16, 16
    cmplw r0, r18
    blt lbl_802CDD70
lbl_802CDDA4:
    lbz r0, 0x2(r15)
    cmpwi r0, 0x0
    beq lbl_802CDE18
    cmplwi r0, 0x2
    addi r3, r15, 0x3
    beq lbl_802CDDD4
    mr r3, r30
    mr r4, r17
    li r5, 0x5
    li r6, 0x0
    bl sdpu_build_n_send_error
    b lbl_802CE0D4
lbl_802CDDD4:
    lbz r0, 0x0(r3)
    lbz r3, 0x1(r3)
    slwi r4, r0, 8
    lhz r0, 0x476(r30)
    add r3, r4, r3
    clrlwi r31, r3, 16
    cmplw r31, r0
    beq lbl_802CDE0C
    mr r3, r30
    mr r4, r17
    li r5, 0x5
    li r6, 0x0
    bl sdpu_build_n_send_error
    b lbl_802CE0D4
lbl_802CDE0C:
    subf r0, r31, r16
    clrlwi r4, r0, 16
    b lbl_802CDE20
lbl_802CDE18:
    mr r4, r16
    li r31, 0x0
lbl_802CDE20:
    lhz r3, 0x20(r30)
    clrlwi r0, r4, 16
    subi r3, r3, 0xc
    srawi r3, r3, 2
    addze r3, r3
    clrlwi r15, r3, 16
    cmplw r0, r15
    bgt lbl_802CDE48
    mr r15, r4
    b lbl_802CDE5C
lbl_802CDE48:
    lhz r3, 0x476(r30)
    li r0, 0x1
    stb r0, 0x17c(r1)
    add r0, r3, r15
    sth r0, 0x476(r30)
lbl_802CDE5C:
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    bne lbl_802CDE94
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x1
    blt lbl_802CE0D4
    lis r4, lbl_8037873C@ha
    lis r3, 0xa
    addi r4, r4, lbl_8037873C@l
    bl LogMsg_0
    b lbl_802CE0D4
lbl_802CDE94:
    li r0, 0x9
    addi r14, r3, 0x11
    sth r0, 0x4(r3)
    li r4, 0x3
    clrlwi r0, r15, 16
    addi r11, r14, 0x3
    stb r4, 0x11(r3)
    add r10, r31, r0
    srawi r5, r17, 8
    extrwi r4, r16, 8, 16
    stb r5, 0x12(r3)
    extrwi r0, r15, 8, 16
    cmpw r31, r10
    stb r17, 0x13(r3)
    stb r4, 0x16(r3)
    stb r16, 0x17(r3)
    stb r0, 0x18(r3)
    stw r11, 0x180(r1)
    addi r11, r11, 0x6
    stb r15, 0x19(r3)
    bge lbl_802CE068
    clrlwi r5, r10, 16
    subi r0, r10, 0x8
    subf r4, r31, r5
    clrlwi r4, r4, 16
    cmplwi r4, 0x8
    ble lbl_802CE028
    cmplw r31, r5
    bgt lbl_802CE028
    b lbl_802CE01C
lbl_802CDF0C:
    clrlslwi r4, r31, 16, 2
    addi r17, r1, 0x8
    lwzux r8, r17, r4
    addi r31, r31, 0x8
    srwi r5, r8, 24
    lwz r24, 0x4(r17)
    stb r5, 0x0(r11)
    extrwi r6, r8, 8, 8
    lwz r4, 0x8(r17)
    extrwi r7, r8, 8, 16
    stb r6, 0x1(r11)
    srwi r9, r24, 24
    lwz r6, 0x10(r17)
    extrwi r18, r24, 8, 8
    stb r7, 0x2(r11)
    extrwi r21, r24, 8, 16
    lwz r7, 0x14(r17)
    srwi r27, r4, 24
    stb r8, 0x3(r11)
    extrwi r12, r4, 8, 8
    lwz r8, 0x18(r17)
    extrwi r15, r4, 8, 16
    stb r9, 0x4(r11)
    srwi r19, r6, 24
    lwz r9, 0x1c(r17)
    extrwi r20, r6, 8, 8
    stb r18, 0x5(r11)
    srwi r22, r7, 24
    lwz r5, 0xc(r17)
    extrwi r23, r7, 8, 8
    stb r21, 0x6(r11)
    extrwi r21, r6, 8, 16
    srwi r16, r5, 24
    extrwi r17, r5, 8, 8
    stb r24, 0x7(r11)
    extrwi r18, r5, 8, 16
    extrwi r24, r7, 8, 16
    srwi r25, r8, 24
    stb r27, 0x8(r11)
    extrwi r26, r8, 8, 8
    extrwi r27, r8, 8, 16
    srwi r28, r9, 24
    stb r12, 0x9(r11)
    extrwi r29, r9, 8, 8
    extrwi r12, r9, 8, 16
    stb r15, 0xa(r11)
    stb r4, 0xb(r11)
    stb r16, 0xc(r11)
    stb r17, 0xd(r11)
    stb r18, 0xe(r11)
    stb r5, 0xf(r11)
    stb r19, 0x10(r11)
    stb r20, 0x11(r11)
    stb r21, 0x12(r11)
    stb r6, 0x13(r11)
    stb r22, 0x14(r11)
    stb r23, 0x15(r11)
    stb r24, 0x16(r11)
    stb r7, 0x17(r11)
    stb r25, 0x18(r11)
    stb r26, 0x19(r11)
    stb r27, 0x1a(r11)
    stb r8, 0x1b(r11)
    stb r28, 0x1c(r11)
    stb r29, 0x1d(r11)
    stb r12, 0x1e(r11)
    stb r9, 0x1f(r11)
    addi r11, r11, 0x20
lbl_802CE01C:
    clrlwi r4, r31, 16
    cmpw r4, r0
    blt lbl_802CDF0C
lbl_802CE028:
    addi r5, r1, 0x8
    b lbl_802CE05C
lbl_802CE030:
    clrlslwi r0, r31, 16, 2
    addi r31, r31, 0x1
    lwzx r6, r5, r0
    srwi r0, r6, 24
    extrwi r4, r6, 8, 8
    stb r0, 0x0(r11)
    extrwi r0, r6, 8, 16
    stb r4, 0x1(r11)
    stb r0, 0x2(r11)
    stb r6, 0x3(r11)
    addi r11, r11, 0x4
lbl_802CE05C:
    clrlwi r0, r31, 16
    cmpw r0, r10
    blt lbl_802CE030
lbl_802CE068:
    lbz r0, 0x17c(r1)
    cmpwi r0, 0x0
    beq lbl_802CE098
    li r0, 0x2
    stb r0, 0x0(r11)
    lhz r0, 0x476(r30)
    srawi r0, r0, 8
    stb r0, 0x1(r11)
    lhz r0, 0x476(r30)
    stb r0, 0x2(r11)
    addi r11, r11, 0x3
    b lbl_802CE0A4
lbl_802CE098:
    li r0, 0x0
    stb r0, 0x0(r11)
    addi r11, r11, 0x1
lbl_802CE0A4:
    lwz r0, 0x180(r1)
    lwz r5, 0x180(r1)
    subf r4, r0, r11
    subf r0, r14, r11
    subi r7, r4, 0x2
    extrwi r6, r7, 8, 16
    mr r4, r3
    stb r6, 0x0(r5)
    stb r7, 0x1(r5)
    sth r0, 0x2(r3)
    lhz r3, 0x22(r30)
    bl L2CA_DataWrite
lbl_802CE0D4:
    addi r11, r1, 0x1d0
    bl _restgpr_14
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

// ----------------------------------------------------------------------------
// process_service_attr_req
// ----------------------------------------------------------------------------
asm void process_service_attr_req() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_24
    lbz r9, 0x0(r6)
    addi r0, r6, 0x4
    lbz r8, 0x1(r6)
    cmplw r0, r7
    lbz r0, 0x2(r6)
    slwi r10, r9, 24
    slwi r8, r8, 16
    lbz r9, 0x3(r6)
    slwi r0, r0, 8
    mr r25, r3
    add r8, r10, r8
    mr r26, r4
    add r0, r9, r0
    mr r24, r7
    add r27, r8, r0
    ble lbl_802CE150
    li r5, 0x2
    li r6, 0x0
    bl sdpu_build_n_send_error
    b lbl_802CE464
lbl_802CE150:
    lbz r4, 0x4(r6)
    lbz r0, 0x5(r6)
    slwi r4, r4, 8
    lhz r3, 0x20(r3)
    add r0, r4, r0
    clrlwi r30, r0, 16
    subi r0, r3, 0xa
    cmpw r30, r0
    ble lbl_802CE178
    clrlwi r30, r0, 16
lbl_802CE178:
    mr r4, r5
    addi r3, r6, 0x6
    addi r5, r1, 0x8
    bl sdpu_extract_attr_seq
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_802CE1A8
    lhz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_802CE1A8
    cmplw r3, r24
    ble lbl_802CE1C0
lbl_802CE1A8:
    mr r3, r25
    mr r4, r26
    li r5, 0x3
    li r6, 0x0
    bl sdpu_build_n_send_error
    b lbl_802CE464
lbl_802CE1C0:
    mr r3, r27
    bl sdp_db_find_record
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_802CE1EC
    mr r3, r25
    mr r4, r26
    li r5, 0x2
    li r6, 0x0
    bl sdpu_build_n_send_error
    b lbl_802CE464
lbl_802CE1EC:
    lbz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_802CE250
    cmplwi r0, 0x2
    beq lbl_802CE218
    mr r3, r25
    mr r4, r26
    li r5, 0x5
    li r6, 0x0
    bl sdpu_build_n_send_error
    b lbl_802CE464
lbl_802CE218:
    lbz r0, 0x1(r28)
    lbz r3, 0x2(r28)
    slwi r4, r0, 8
    lhz r0, 0x476(r25)
    add r3, r4, r3
    clrlwi r3, r3, 16
    cmplw r3, r0
    beq lbl_802CE348
    mr r3, r25
    mr r4, r26
    li r5, 0x5
    li r6, 0x0
    bl sdpu_build_n_send_error
    b lbl_802CE464
lbl_802CE250:
    li r0, 0x0
    addi r29, r25, 0x29
    sth r0, 0x476(r25)
    li r28, 0x0
    b lbl_802CE2E4
lbl_802CE264:
    clrlslwi r0, r28, 16, 2
    addi r31, r1, 0x8
    add r31, r31, r0
    mr r3, r27
    lhz r4, 0x2(r31)
    lhz r5, 0x4(r31)
    bl sdp_db_find_attr_in_rec
    cmpwi r3, 0x0
    mr r24, r3
    beq lbl_802CE2E0
    addi r0, r25, 0x26
    lwz r4, 0x0(r3)
    subf r0, r0, r29
    clrlwi r0, r0, 16
    subfic r0, r0, 0x3e8
    clrlwi r3, r0, 16
    subi r0, r3, 0x6
    cmplw r4, r0
    bgt lbl_802CE2F4
    mr r3, r29
    mr r4, r24
    bl sdpu_build_attrib_entry
    lhz r4, 0x2(r31)
    mr r29, r3
    lhz r0, 0x4(r31)
    cmplw r4, r0
    beq lbl_802CE2E0
    lhz r3, 0x8(r24)
    subi r28, r28, 0x1
    addi r0, r3, 0x1
    sth r0, 0x2(r31)
lbl_802CE2E0:
    addi r28, r28, 0x1
lbl_802CE2E4:
    lhz r0, 0x8(r1)
    clrlwi r3, r28, 16
    cmplw r3, r0
    blt lbl_802CE264
lbl_802CE2F4:
    addi r0, r25, 0x26
    subf r0, r0, r29
    clrlwi r4, r0, 16
    sth r0, 0x24(r25)
    cmplwi r4, 0xff
    ble lbl_802CE328
    subi r3, r4, 0x3
    li r4, 0x36
    srawi r0, r3, 8
    stb r4, 0x26(r25)
    stb r0, 0x27(r25)
    stb r3, 0x28(r25)
    b lbl_802CE348
lbl_802CE328:
    subi r3, r4, 0x3
    subi r0, r4, 0x1
    li r5, 0x1
    li r4, 0x35
    sth r5, 0x476(r25)
    stb r4, 0x27(r25)
    stb r3, 0x28(r25)
    sth r0, 0x24(r25)
lbl_802CE348:
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_802CE384
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x1
    blt lbl_802CE464
    lis r4, lbl_8037873C@ha
    lis r3, 0xa
    addi r4, r4, lbl_8037873C@l
    bl LogMsg_0
    b lbl_802CE464
lbl_802CE384:
    li r0, 0x9
    addi r29, r3, 0x11
    sth r0, 0x4(r3)
    li r3, 0x5
    addi r31, r29, 0x3
    extrwi r0, r26, 8, 16
    stb r3, 0x0(r29)
    mr r28, r31
    stb r0, 0x1(r29)
    stb r26, 0x2(r29)
    lhz r0, 0x24(r25)
    cmplw r0, r30
    bgt lbl_802CE3BC
    mr r30, r0
lbl_802CE3BC:
    extrwi r0, r30, 8, 16
    clrlwi r5, r30, 16
    stb r0, 0x2(r31)
    stb r30, 0x3(r31)
    addi r31, r31, 0x4
    mr r3, r31
    lhz r0, 0x476(r25)
    add r4, r25, r0
    addi r4, r4, 0x26
    bl memcpy
    lhz r0, 0x24(r25)
    clrlwi r3, r30, 16
    add r31, r31, r3
    lhz r4, 0x476(r25)
    subf r3, r30, r0
    clrlwi. r0, r3, 16
    sth r3, 0x24(r25)
    add r0, r4, r30
    sth r0, 0x476(r25)
    beq lbl_802CE430
    li r0, 0x2
    stb r0, 0x0(r31)
    lhz r0, 0x476(r25)
    srawi r0, r0, 8
    stb r0, 0x1(r31)
    lhz r0, 0x476(r25)
    stb r0, 0x2(r31)
    addi r31, r31, 0x3
    b lbl_802CE43C
lbl_802CE430:
    li r0, 0x0
    stb r0, 0x0(r31)
    addi r31, r31, 0x1
lbl_802CE43C:
    subf r3, r28, r31
    subf r0, r29, r31
    subi r5, r3, 0x2
    mr r4, r27
    extrwi r3, r5, 8, 16
    stb r3, 0x0(r28)
    stb r5, 0x1(r28)
    sth r0, 0x2(r27)
    lhz r3, 0x22(r25)
    bl L2CA_DataWrite
lbl_802CE464:
    addi r11, r1, 0x70
    bl _restgpr_24
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// process_service_search_attr_req
// ----------------------------------------------------------------------------
asm void process_service_search_attr_req() {
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    addi r11, r1, 0x1f0
    bl _savegpr_20
    mr r20, r5
    mr r21, r3
    mr r22, r4
    mr r3, r6
    mr r4, r20
    addi r5, r1, 0x90
    li r24, 0x0
    bl sdpu_extract_uid_seq
    cmpwi r3, 0x0
    beq lbl_802CE4C4
    lhz r0, 0x90(r1)
    cmpwi r0, 0x0
    bne lbl_802CE4DC
lbl_802CE4C4:
    mr r3, r21
    mr r4, r22
    li r5, 0x3
    li r6, 0x0
    bl sdpu_build_n_send_error
    b lbl_802CE880
lbl_802CE4DC:
    lbz r4, 0x0(r3)
    lbz r0, 0x1(r3)
    slwi r5, r4, 8
    lhz r4, 0x20(r21)
    add r0, r5, r0
    clrlwi r29, r0, 16
    subi r0, r4, 0xa
    cmpw r29, r0
    ble lbl_802CE504
    clrlwi r29, r0, 16
lbl_802CE504:
    mr r4, r20
    addi r5, r1, 0x4c
    addi r3, r3, 0x2
    bl sdpu_extract_attr_seq
    cmpwi r3, 0x0
    beq lbl_802CE528
    lhz r0, 0x4c(r1)
    cmpwi r0, 0x0
    bne lbl_802CE540
lbl_802CE528:
    mr r3, r21
    mr r4, r22
    li r5, 0x3
    li r6, 0x0
    bl sdpu_build_n_send_error
    b lbl_802CE880
lbl_802CE540:
    li r0, 0x8
    addi r6, r1, 0x4
    addi r5, r1, 0x48
    mtctr r0
lbl_802CE550:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_802CE550
    lhz r0, 0x4(r5)
    sth r0, 0x4(r6)
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_802CE5D0
    cmplwi r0, 0x2
    beq lbl_802CE598
    mr r3, r21
    mr r4, r22
    li r5, 0x5
    li r6, 0x0
    bl sdpu_build_n_send_error
    b lbl_802CE880
lbl_802CE598:
    lbz r0, 0x1(r3)
    lbz r3, 0x2(r3)
    slwi r4, r0, 8
    lhz r0, 0x476(r21)
    add r3, r4, r3
    clrlwi r3, r3, 16
    cmplw r3, r0
    beq lbl_802CE764
    mr r3, r21
    mr r4, r22
    li r5, 0x5
    li r6, 0x0
    bl sdpu_build_n_send_error
    b lbl_802CE880
lbl_802CE5D0:
    li r0, 0x0
    addi r28, r21, 0x29
    sth r0, 0x476(r21)
    addi r4, r1, 0x90
    li r3, 0x0
    bl sdp_db_service_search
    mr r26, r3
    li r31, 0x8
    li r20, 0x36
    b lbl_802CE708
lbl_802CE5F8:
    addi r5, r1, 0x48
    addi r4, r1, 0x4
    mtctr r31
lbl_802CE604:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_802CE604
    lhz r0, 0x4(r4)
    mr r23, r28
    li r27, 0x0
    addi r28, r28, 0x3
    sth r0, 0x4(r5)
    b lbl_802CE6B8
lbl_802CE630:
    clrlslwi r0, r27, 16, 2
    addi r30, r1, 0x4c
    add r30, r30, r0
    mr r3, r26
    lhz r4, 0x2(r30)
    lhz r5, 0x4(r30)
    bl sdp_db_find_attr_in_rec
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_802CE6B4
    addi r0, r21, 0x26
    lwz r4, 0x0(r3)
    subf r0, r0, r28
    clrlwi r0, r0, 16
    subfic r0, r0, 0x3e8
    clrlwi r3, r0, 16
    subi r0, r3, 0x6
    cmplw r4, r0
    ble lbl_802CE684
    li r24, 0x1
    b lbl_802CE6C8
lbl_802CE684:
    mr r3, r28
    mr r4, r25
    bl sdpu_build_attrib_entry
    lhz r4, 0x2(r30)
    mr r28, r3
    lhz r0, 0x4(r30)
    cmplw r4, r0
    beq lbl_802CE6B4
    lhz r3, 0x8(r25)
    subi r27, r27, 0x1
    addi r0, r3, 0x1
    sth r0, 0x2(r30)
lbl_802CE6B4:
    addi r27, r27, 0x1
lbl_802CE6B8:
    lhz r0, 0x4c(r1)
    clrlwi r3, r27, 16
    cmplw r3, r0
    blt lbl_802CE630
lbl_802CE6C8:
    cmpwi r24, 0x0
    bne lbl_802CE710
    subf r3, r23, r28
    subi r0, r3, 0x3
    clrlwi. r3, r0, 16
    beq lbl_802CE6F4
    stb r20, 0x0(r23)
    extrwi r0, r3, 8, 16
    stb r0, 0x1(r23)
    stb r3, 0x2(r23)
    b lbl_802CE6F8
lbl_802CE6F4:
    mr r28, r23
lbl_802CE6F8:
    mr r3, r26
    addi r4, r1, 0x90
    bl sdp_db_service_search
    mr r26, r3
lbl_802CE708:
    cmpwi r26, 0x0
    bne lbl_802CE5F8
lbl_802CE710:
    addi r0, r21, 0x26
    subf r0, r0, r28
    clrlwi r4, r0, 16
    sth r0, 0x24(r21)
    cmplwi r4, 0xff
    ble lbl_802CE744
    subi r3, r4, 0x3
    li r4, 0x36
    srawi r0, r3, 8
    stb r4, 0x26(r21)
    stb r0, 0x27(r21)
    stb r3, 0x28(r21)
    b lbl_802CE764
lbl_802CE744:
    subi r3, r4, 0x3
    subi r0, r4, 0x1
    li r5, 0x1
    li r4, 0x35
    sth r5, 0x476(r21)
    stb r4, 0x27(r21)
    stb r3, 0x28(r21)
    sth r0, 0x24(r21)
lbl_802CE764:
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_802CE7A0
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x1
    blt lbl_802CE880
    lis r4, lbl_8037873C@ha
    lis r3, 0xa
    addi r4, r4, lbl_8037873C@l
    bl LogMsg_0
    b lbl_802CE880
lbl_802CE7A0:
    li r0, 0x9
    addi r28, r3, 0x11
    sth r0, 0x4(r3)
    li r3, 0x7
    addi r30, r28, 0x3
    extrwi r0, r22, 8, 16
    stb r3, 0x0(r28)
    mr r31, r30
    stb r0, 0x1(r28)
    stb r22, 0x2(r28)
    lhz r0, 0x24(r21)
    cmplw r0, r29
    bgt lbl_802CE7D8
    mr r29, r0
lbl_802CE7D8:
    extrwi r0, r29, 8, 16
    clrlwi r5, r29, 16
    stb r0, 0x2(r30)
    stb r29, 0x3(r30)
    addi r30, r30, 0x4
    mr r3, r30
    lhz r0, 0x476(r21)
    add r4, r21, r0
    addi r4, r4, 0x26
    bl memcpy
    lhz r0, 0x24(r21)
    clrlwi r3, r29, 16
    add r30, r30, r3
    lhz r4, 0x476(r21)
    subf r3, r29, r0
    clrlwi. r0, r3, 16
    sth r3, 0x24(r21)
    add r0, r4, r29
    sth r0, 0x476(r21)
    beq lbl_802CE84C
    li r0, 0x2
    stb r0, 0x0(r30)
    lhz r0, 0x476(r21)
    srawi r0, r0, 8
    stb r0, 0x1(r30)
    lhz r0, 0x476(r21)
    stb r0, 0x2(r30)
    addi r30, r30, 0x3
    b lbl_802CE858
lbl_802CE84C:
    li r0, 0x0
    stb r0, 0x0(r30)
    addi r30, r30, 0x1
lbl_802CE858:
    subf r3, r31, r30
    subf r0, r28, r30
    subi r5, r3, 0x2
    mr r4, r25
    extrwi r3, r5, 8, 16
    stb r3, 0x0(r31)
    stb r5, 0x1(r31)
    sth r0, 0x2(r25)
    lhz r3, 0x22(r21)
    bl L2CA_DataWrite
lbl_802CE880:
    addi r11, r1, 0x1f0
    bl _restgpr_20
    lwz r0, 0x1f4(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

