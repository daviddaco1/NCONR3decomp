#include "types.h"

// Translation unit: src/revolution/bte/sdp_utils.cpp
// Total functions: 13

// Global data symbols (@ha/@l)
extern u8 jumptable_80378758[];
extern u8 jumptable_803787F0[];
extern u8 jumptable_80378810[];
extern u8 jumptable_80378830[];
extern u8 lbl_803419C8[];
extern u8 lbl_8037879C[];
extern u8 lbl_803787D4[];
extern u8 lbl_80457C40[];

// Forward declarations
extern void GKI_getpoolbuf();
extern void L2CA_DataWrite();
extern void LogMsg_0();
extern void LogMsg_2();
extern void _restgpr_24();
extern void _savegpr_24();
extern void btu_stop_timer();
extern void memcmp();
extern void memcpy();
extern void memset();
extern void sdpu_allocate_ccb();
extern void sdpu_build_attrib_entry();
extern void sdpu_build_attrib_seq();
extern void sdpu_build_n_send_error();
extern void sdpu_compare_uuid_arrays();
extern void sdpu_compare_uuid_with_attr();
extern void sdpu_extract_attr_seq();
extern void sdpu_extract_uid_seq();
extern void sdpu_find_ccb_by_cid();
extern void sdpu_get_len_from_type();
extern void sdpu_is_base_uuid();
extern void sdpu_release_ccb();
extern void sdpu_sort_attr_list();
extern void strlen();

// ----------------------------------------------------------------------------
// sdpu_find_ccb_by_cid
// ----------------------------------------------------------------------------
asm void sdpu_find_ccb_by_cid() {
    nofralloc
    lis r4, lbl_80457C40@ha
    addi r4, r4, lbl_80457C40@l
    lbzu r0, 0x3c(r4)
    cmpwi r0, 0x0
    beq lbl_802CE8C0
    lhz r0, 0x22(r4)
    cmplw r0, r3
    bne lbl_802CE8C0
    mr r3, r4
    blr
lbl_802CE8C0:
    lbzu r0, 0x478(r4)
    cmpwi r0, 0x0
    beq lbl_802CE8E0
    lhz r0, 0x22(r4)
    cmplw r0, r3
    bne lbl_802CE8E0
    mr r3, r4
    blr
lbl_802CE8E0:
    lbzu r0, 0x478(r4)
    cmpwi r0, 0x0
    beq lbl_802CE900
    lhz r0, 0x22(r4)
    cmplw r0, r3
    bne lbl_802CE900
    mr r3, r4
    blr
lbl_802CE900:
    lbzu r0, 0x478(r4)
    cmpwi r0, 0x0
    beq lbl_802CE920
    lhz r0, 0x22(r4)
    cmplw r0, r3
    bne lbl_802CE920
    mr r3, r4
    blr
lbl_802CE920:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// sdpu_allocate_ccb
// ----------------------------------------------------------------------------
asm void sdpu_allocate_ccb() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80457C40@ha
    li r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x4
    addi r3, r3, lbl_80457C40@l
    stw r31, 0xc(r1)
    addi r31, r3, 0x3c
    mtctr r0
lbl_802CE950:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_802CE978
    mr r3, r31
    li r4, 0x0
    li r5, 0x478
    bl memset
    stw r31, 0x18(r31)
    mr r3, r31
    b lbl_802CE988
lbl_802CE978:
    addi r4, r4, 0x1
    addi r31, r31, 0x478
    bdnz lbl_802CE950
    li r3, 0x0
lbl_802CE988:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// sdpu_release_ccb
// ----------------------------------------------------------------------------
asm void sdpu_release_ccb() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x8
    bl btu_stop_timer
    li r0, 0x0
    stb r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// sdpu_build_attrib_seq
// ----------------------------------------------------------------------------
asm void sdpu_build_attrib_seq() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_802CE9EC
    slwi r0, r5, 2
    subf r0, r5, r0
    clrlwi r7, r0, 16
    b lbl_802CE9F0
lbl_802CE9EC:
    li r7, 0x5
lbl_802CE9F0:
    cmplwi r7, 0xff
    ble lbl_802CEA14
    extrwi r0, r7, 8, 16
    li r6, 0x36
    stb r6, 0x0(r3)
    addi r6, r3, 0x3
    stb r0, 0x1(r3)
    stb r7, 0x2(r3)
    b lbl_802CEA24
lbl_802CEA14:
    li r0, 0x35
    stb r7, 0x1(r3)
    addi r6, r3, 0x2
    stb r0, 0x0(r3)
lbl_802CEA24:
    cmpwi r4, 0x0
    bne lbl_802CEA54
    li r0, 0xa
    li r3, 0x0
    stb r0, 0x0(r6)
    li r0, 0xff
    stb r3, 0x1(r6)
    stb r3, 0x2(r6)
    stb r0, 0x3(r6)
    stb r0, 0x4(r6)
    addi r6, r6, 0x5
    b lbl_802CEB9C
lbl_802CEA54:
    cmpwi r5, 0x0
    li r3, 0x0
    beq lbl_802CEB9C
    cmplwi r5, 0x8
    addis r7, r5, 0x1
    subi r7, r7, 0x8
    ble lbl_802CEB5C
    clrlwi r8, r7, 16
    li r0, 0x9
    addi r7, r8, 0x7
    srwi r7, r7, 3
    mtctr r7
    cmplwi r8, 0x0
    ble lbl_802CEB5C
lbl_802CEA8C:
    stb r0, 0x0(r6)
    addi r3, r3, 0x8
    lhz r7, 0x0(r4)
    srawi r7, r7, 8
    stb r7, 0x1(r6)
    lhz r7, 0x0(r4)
    stb r7, 0x2(r6)
    stb r0, 0x3(r6)
    lhz r7, 0x2(r4)
    srawi r7, r7, 8
    stb r7, 0x4(r6)
    lhz r7, 0x2(r4)
    stb r7, 0x5(r6)
    stb r0, 0x6(r6)
    lhz r7, 0x4(r4)
    srawi r7, r7, 8
    stb r7, 0x7(r6)
    lhz r7, 0x4(r4)
    stb r7, 0x8(r6)
    stb r0, 0x9(r6)
    lhz r7, 0x6(r4)
    srawi r7, r7, 8
    stb r7, 0xa(r6)
    lhz r7, 0x6(r4)
    stb r7, 0xb(r6)
    stb r0, 0xc(r6)
    lhz r7, 0x8(r4)
    srawi r7, r7, 8
    stb r7, 0xd(r6)
    lhz r7, 0x8(r4)
    stb r7, 0xe(r6)
    stb r0, 0xf(r6)
    lhz r7, 0xa(r4)
    srawi r7, r7, 8
    stb r7, 0x10(r6)
    lhz r7, 0xa(r4)
    stb r7, 0x11(r6)
    stb r0, 0x12(r6)
    lhz r7, 0xc(r4)
    srawi r7, r7, 8
    stb r7, 0x13(r6)
    lhz r7, 0xc(r4)
    stb r7, 0x14(r6)
    stb r0, 0x15(r6)
    lhz r7, 0xe(r4)
    srawi r7, r7, 8
    stb r7, 0x16(r6)
    lhz r7, 0xe(r4)
    addi r4, r4, 0x10
    stb r7, 0x17(r6)
    addi r6, r6, 0x18
    bdnz lbl_802CEA8C
lbl_802CEB5C:
    clrlwi r7, r3, 16
    li r8, 0x9
    subf r0, r7, r5
    mtctr r0
    cmplw r7, r5
    bge lbl_802CEB9C
lbl_802CEB74:
    stb r8, 0x0(r6)
    addi r3, r3, 0x1
    lhz r0, 0x0(r4)
    srawi r0, r0, 8
    stb r0, 0x1(r6)
    lhz r0, 0x0(r4)
    addi r4, r4, 0x2
    stb r0, 0x2(r6)
    addi r6, r6, 0x3
    bdnz lbl_802CEB74
lbl_802CEB9C:
    mr r3, r6
    blr
}

// ----------------------------------------------------------------------------
// sdpu_build_attrib_entry
// ----------------------------------------------------------------------------
asm void sdpu_build_attrib_entry() {
    nofralloc
    li r0, 0x9
    stb r0, 0x0(r3)
    lhz r0, 0x8(r4)
    srawi r0, r0, 8
    stb r0, 0x1(r3)
    lhz r0, 0x8(r4)
    stb r0, 0x2(r3)
    lbz r6, 0xa(r4)
    cmpwi r6, 0x5
    beq lbl_802CEC2C
    bge lbl_802CEBDC
    cmpwi r6, 0x4
    bge lbl_802CEBE4
    b lbl_802CEC2C
lbl_802CEBDC:
    cmpwi r6, 0x9
    bge lbl_802CEC2C
lbl_802CEBE4:
    clrlslwi r0, r6, 24, 3
    addi r6, r3, 0x5
    ori r0, r0, 0x5
    li r5, 0x0
    stb r0, 0x3(r3)
    lwz r0, 0x0(r4)
    stb r0, 0x4(r3)
    b lbl_802CEC18
lbl_802CEC04:
    lwz r3, 0x4(r4)
    lbzx r0, r3, r5
    addi r5, r5, 0x1
    stb r0, 0x0(r6)
    addi r6, r6, 0x1
lbl_802CEC18:
    lwz r0, 0x0(r4)
    cmpw r5, r0
    blt lbl_802CEC04
    mr r3, r6
    blr
lbl_802CEC2C:
    lwz r0, 0x0(r4)
    cmplwi r0, 0x10
    bgt lbl_802CECB0
    lis r5, jumptable_80378758@ha
    slwi r0, r0, 2
    addi r5, r5, jumptable_80378758@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    clrlslwi r0, r6, 27, 3
    addi r6, r3, 0x4
    stb r0, 0x3(r3)
    b lbl_802CECC8
    clrlslwi r0, r6, 24, 3
    addi r6, r3, 0x4
    ori r0, r0, 0x1
    stb r0, 0x3(r3)
    b lbl_802CECC8
    clrlslwi r0, r6, 24, 3
    addi r6, r3, 0x4
    ori r0, r0, 0x2
    stb r0, 0x3(r3)
    b lbl_802CECC8
    clrlslwi r0, r6, 24, 3
    addi r6, r3, 0x4
    ori r0, r0, 0x3
    stb r0, 0x3(r3)
    b lbl_802CECC8
    clrlslwi r0, r6, 24, 3
    addi r6, r3, 0x4
    ori r0, r0, 0x4
    stb r0, 0x3(r3)
    b lbl_802CECC8
lbl_802CECB0:
    clrlslwi r0, r6, 24, 3
    addi r6, r3, 0x5
    ori r0, r0, 0x5
    stb r0, 0x3(r3)
    lwz r0, 0x0(r4)
    stb r0, 0x4(r3)
lbl_802CECC8:
    li r5, 0x0
    b lbl_802CECE4
lbl_802CECD0:
    lwz r3, 0x4(r4)
    lbzx r0, r3, r5
    addi r5, r5, 0x1
    stb r0, 0x0(r6)
    addi r6, r6, 0x1
lbl_802CECE4:
    lwz r0, 0x0(r4)
    cmpw r5, r0
    blt lbl_802CECD0
    mr r3, r6
    blr
}

// ----------------------------------------------------------------------------
// sdpu_build_n_send_error
// ----------------------------------------------------------------------------
asm void sdpu_build_n_send_error() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lis r7, lbl_80457C40@ha
    mr r31, r3
    addi r7, r7, lbl_80457C40@l
    mr r30, r4
    lbz r0, 0x4630(r7)
    mr r25, r5
    mr r24, r6
    cmplwi r0, 0x2
    blt lbl_802CED48
    lis r3, 0xa
    lis r4, lbl_8037879C@ha
    lhz r6, 0x22(r31)
    addi r3, r3, 0x1
    addi r4, r4, lbl_8037879C@l
    bl LogMsg_2
lbl_802CED48:
    li r3, 0x2
    bl GKI_getpoolbuf
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_802CED84
    lis r3, lbl_80457C40@ha
    addi r3, r3, lbl_80457C40@l
    lbz r0, 0x4630(r3)
    cmplwi r0, 0x1
    blt lbl_802CEE1C
    lis r4, lbl_803787D4@ha
    lis r3, 0xa
    addi r4, r4, lbl_803787D4@l
    bl LogMsg_0
    b lbl_802CEE1C
lbl_802CED84:
    li r0, 0x9
    addi r28, r3, 0x11
    sth r0, 0x4(r3)
    li r0, 0x1
    addi r29, r28, 0x3
    srawi r3, r30, 8
    stb r0, 0x0(r28)
    mr r27, r29
    extrwi r0, r25, 8, 16
    cmpwi r24, 0x0
    stb r3, 0x1(r28)
    addi r29, r29, 0x4
    stb r30, 0x2(r28)
    stb r0, 0x5(r28)
    stb r25, 0x6(r28)
    beq lbl_802CEDF4
    mr r30, r24
    li r25, 0x0
    b lbl_802CEDE4
lbl_802CEDD0:
    lbz r0, 0x0(r30)
    addi r25, r25, 0x1
    addi r30, r30, 0x1
    stb r0, 0x0(r29)
    addi r29, r29, 0x1
lbl_802CEDE4:
    mr r3, r24
    bl strlen
    cmpw r25, r3
    blt lbl_802CEDD0
lbl_802CEDF4:
    subf r3, r27, r29
    subf r0, r28, r29
    subi r5, r3, 0x2
    mr r4, r26
    extrwi r3, r5, 8, 16
    stb r3, 0x0(r27)
    stb r5, 0x1(r27)
    sth r0, 0x2(r26)
    lhz r3, 0x22(r31)
    bl L2CA_DataWrite
lbl_802CEE1C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// sdpu_extract_uid_seq
// ----------------------------------------------------------------------------
asm void sdpu_extract_uid_seq() {
    nofralloc
    li r0, 0x0
    addi r8, r3, 0x1
    sth r0, 0x0(r5)
    lbz r3, 0x0(r3)
    srawi r0, r3, 3
    clrlwi r6, r3, 29
    cmplwi r0, 0x6
    beq lbl_802CEE5C
    li r3, 0x0
    blr
lbl_802CEE5C:
    cmplwi r6, 0x7
    bgt lbl_802CEEEC
    lis r3, jumptable_80378810@ha
    slwi r0, r6, 2
    addi r3, r3, jumptable_80378810@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x2
    b lbl_802CEEF4
    li r0, 0x4
    b lbl_802CEEF4
    li r0, 0x10
    b lbl_802CEEF4
    lbz r0, 0x0(r8)
    addi r8, r8, 0x1
    b lbl_802CEEF4
    lbz r3, 0x0(r8)
    lbz r0, 0x1(r8)
    addi r8, r8, 0x2
    slwi r3, r3, 8
    add r0, r3, r0
    clrlwi r0, r0, 16
    b lbl_802CEEF4
    lbz r6, 0x0(r8)
    lbz r3, 0x1(r8)
    lbz r0, 0x2(r8)
    slwi r7, r6, 24
    lbz r6, 0x3(r8)
    slwi r3, r3, 16
    slwi r0, r0, 8
    addi r8, r8, 0x4
    add r3, r7, r3
    add r0, r6, r0
    add r0, r3, r0
    b lbl_802CEEF4
lbl_802CEEEC:
    li r3, 0x0
    blr
lbl_802CEEF4:
    cmplw r0, r4
    blt lbl_802CEF04
    li r3, 0x0
    blr
lbl_802CEF04:
    add r0, r8, r0
    lis r4, jumptable_803787F0@ha
    lis r3, 0x8000
    b lbl_802CF168
lbl_802CEF14:
    lbz r7, 0x0(r8)
    addi r8, r8, 0x1
    srawi r6, r7, 3
    clrlwi r9, r7, 29
    cmplwi r6, 0x3
    beq lbl_802CEF34
    li r3, 0x0
    blr
lbl_802CEF34:
    cmplwi r9, 0x7
    bgt lbl_802CEFC0
    addi r7, r4, jumptable_803787F0@l
    slwi r6, r9, 2
    lwzx r7, r7, r6
    mtctr r7
    bctr
    li r6, 0x2
    b lbl_802CEFC8
    li r6, 0x4
    b lbl_802CEFC8
    li r6, 0x10
    b lbl_802CEFC8
    lbz r6, 0x0(r8)
    addi r8, r8, 0x1
    b lbl_802CEFC8
    lbz r7, 0x0(r8)
    lbz r6, 0x1(r8)
    addi r8, r8, 0x2
    slwi r7, r7, 8
    add r6, r7, r6
    clrlwi r6, r6, 16
    b lbl_802CEFC8
    lbz r9, 0x0(r8)
    lbz r7, 0x1(r8)
    lbz r6, 0x2(r8)
    slwi r10, r9, 24
    lbz r9, 0x3(r8)
    slwi r7, r7, 16
    slwi r6, r6, 8
    addi r8, r8, 0x4
    add r7, r10, r7
    add r6, r9, r6
    add r6, r7, r6
    b lbl_802CEFC8
lbl_802CEFC0:
    li r3, 0x0
    blr
lbl_802CEFC8:
    cmplwi r6, 0x2
    beq lbl_802CEFE0
    cmplwi r6, 0x4
    beq lbl_802CEFE0
    cmplwi r6, 0x10
    bne lbl_802CF14C
lbl_802CEFE0:
    lhz r9, 0x0(r5)
    cmpwi cr1, r6, 0x0
    li r7, 0x0
    mulli r9, r9, 0x12
    add r9, r5, r9
    sth r6, 0x2(r9)
    ble cr1, lbl_802CF13C
    cmpwi r6, 0x8
    subi r10, r6, 0x8
    ble lbl_802CF108
    li r11, 0x0
    blt cr1, lbl_802CF020
    subi r9, r3, 0x2
    cmpw r6, r9
    bgt lbl_802CF020
    li r11, 0x1
lbl_802CF020:
    cmpwi r11, 0x0
    beq lbl_802CF108
    addi r9, r10, 0x7
    srwi r9, r9, 3
    mtctr r9
    cmpwi r10, 0x0
    ble lbl_802CF108
lbl_802CF03C:
    lhz r9, 0x0(r5)
    lbz r10, 0x0(r8)
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    stb r10, 0x4(r9)
    lhz r9, 0x0(r5)
    lbz r10, 0x1(r8)
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    stb r10, 0x5(r9)
    lhz r9, 0x0(r5)
    lbz r10, 0x2(r8)
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    stb r10, 0x6(r9)
    lhz r9, 0x0(r5)
    lbz r10, 0x3(r8)
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    stb r10, 0x7(r9)
    lhz r9, 0x0(r5)
    lbz r10, 0x4(r8)
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    stb r10, 0x8(r9)
    lhz r9, 0x0(r5)
    lbz r10, 0x5(r8)
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    stb r10, 0x9(r9)
    lhz r9, 0x0(r5)
    lbz r10, 0x6(r8)
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    stb r10, 0xa(r9)
    lhz r9, 0x0(r5)
    lbz r10, 0x7(r8)
    addi r8, r8, 0x8
    mulli r9, r9, 0x12
    add r9, r5, r9
    add r9, r9, r7
    addi r7, r7, 0x8
    stb r10, 0xb(r9)
    bdnz lbl_802CF03C
lbl_802CF108:
    subf r9, r7, r6
    mtctr r9
    cmpw r7, r6
    bge lbl_802CF13C
lbl_802CF118:
    lhz r6, 0x0(r5)
    lbz r9, 0x0(r8)
    addi r8, r8, 0x1
    mulli r6, r6, 0x12
    add r6, r5, r6
    add r6, r6, r7
    addi r7, r7, 0x1
    stb r9, 0x4(r6)
    bdnz lbl_802CF118
lbl_802CF13C:
    lhz r6, 0x0(r5)
    addi r6, r6, 0x1
    sth r6, 0x0(r5)
    b lbl_802CF154
lbl_802CF14C:
    li r3, 0x0
    blr
lbl_802CF154:
    clrlwi r6, r6, 16
    cmplwi r6, 0x10
    blt lbl_802CF168
    li r3, 0x0
    blr
lbl_802CF168:
    cmplw r8, r0
    blt lbl_802CEF14
    beq lbl_802CF17C
    li r3, 0x0
    blr
lbl_802CF17C:
    mr r3, r8
    blr
}

// ----------------------------------------------------------------------------
// sdpu_extract_attr_seq
// ----------------------------------------------------------------------------
asm void sdpu_extract_attr_seq() {
    nofralloc
    li r0, 0x0
    sth r0, 0x0(r5)
    lbz r6, 0x0(r3)
    srawi r0, r6, 3
    clrlwi r6, r6, 29
    cmplwi r0, 0x6
    beq lbl_802CF1A8
    addi r3, r3, 0x1
    blr
lbl_802CF1A8:
    cmpwi r6, 0x6
    beq lbl_802CF1D8
    bge lbl_802CF1C0
    cmpwi r6, 0x5
    bge lbl_802CF1CC
    b lbl_802CF224
lbl_802CF1C0:
    cmpwi r6, 0x8
    bge lbl_802CF224
    b lbl_802CF1F4
lbl_802CF1CC:
    lbz r0, 0x1(r3)
    addi r6, r3, 0x2
    b lbl_802CF22C
lbl_802CF1D8:
    lbz r7, 0x1(r3)
    addi r6, r3, 0x3
    lbz r0, 0x2(r3)
    slwi r3, r7, 8
    add r0, r3, r0
    clrlwi r0, r0, 16
    b lbl_802CF22C
lbl_802CF1F4:
    lbz r8, 0x1(r3)
    addi r6, r3, 0x5
    lbz r7, 0x2(r3)
    lbz r0, 0x3(r3)
    slwi r8, r8, 24
    lbz r3, 0x4(r3)
    slwi r7, r7, 16
    slwi r0, r0, 8
    add r3, r7, r3
    add r0, r8, r0
    add r0, r3, r0
    b lbl_802CF22C
lbl_802CF224:
    addi r3, r3, 0x1
    blr
lbl_802CF22C:
    cmplw r0, r4
    ble lbl_802CF23C
    mr r3, r6
    blr
lbl_802CF23C:
    add r0, r6, r0
    b lbl_802CF3C4
lbl_802CF244:
    lbz r4, 0x0(r6)
    addi r6, r6, 0x1
    srawi r3, r4, 3
    clrlwi r4, r4, 29
    cmplwi r3, 0x1
    beq lbl_802CF264
    mr r3, r6
    blr
lbl_802CF264:
    cmpwi r4, 0x5
    beq lbl_802CF2A8
    bge lbl_802CF288
    cmpwi r4, 0x2
    beq lbl_802CF2A0
    bge lbl_802CF300
    cmpwi r4, 0x1
    bge lbl_802CF298
    b lbl_802CF300
lbl_802CF288:
    cmpwi r4, 0x7
    beq lbl_802CF2D0
    bge lbl_802CF300
    b lbl_802CF2B4
lbl_802CF298:
    li r3, 0x2
    b lbl_802CF308
lbl_802CF2A0:
    li r3, 0x4
    b lbl_802CF308
lbl_802CF2A8:
    lbz r3, 0x0(r6)
    addi r6, r6, 0x1
    b lbl_802CF308
lbl_802CF2B4:
    lbz r4, 0x0(r6)
    lbz r3, 0x1(r6)
    addi r6, r6, 0x2
    slwi r4, r4, 8
    add r3, r4, r3
    clrlwi r3, r3, 16
    b lbl_802CF308
lbl_802CF2D0:
    lbz r7, 0x0(r6)
    lbz r4, 0x1(r6)
    lbz r3, 0x2(r6)
    slwi r8, r7, 24
    lbz r7, 0x3(r6)
    slwi r4, r4, 16
    slwi r3, r3, 8
    addi r6, r6, 0x4
    add r4, r8, r4
    add r3, r7, r3
    add r3, r4, r3
    b lbl_802CF308
lbl_802CF300:
    li r3, 0x0
    blr
lbl_802CF308:
    cmplwi r3, 0x2
    bne lbl_802CF34C
    lbz r7, 0x0(r6)
    lhz r3, 0x0(r5)
    lbz r4, 0x1(r6)
    slwi r7, r7, 8
    slwi r3, r3, 2
    addi r6, r6, 0x2
    add r4, r7, r4
    add r3, r5, r3
    sth r4, 0x2(r3)
    lhz r3, 0x0(r5)
    slwi r3, r3, 2
    add r4, r5, r3
    lhz r3, 0x2(r4)
    sth r3, 0x4(r4)
    b lbl_802CF3A4
lbl_802CF34C:
    cmplwi r3, 0x4
    bne lbl_802CF39C
    lbz r7, 0x0(r6)
    lhz r3, 0x0(r5)
    lbz r4, 0x1(r6)
    slwi r7, r7, 8
    slwi r3, r3, 2
    add r4, r7, r4
    add r3, r5, r3
    sth r4, 0x2(r3)
    lbz r7, 0x2(r6)
    lhz r3, 0x0(r5)
    lbz r4, 0x3(r6)
    slwi r7, r7, 8
    slwi r3, r3, 2
    addi r6, r6, 0x4
    add r4, r7, r4
    add r3, r5, r3
    sth r4, 0x4(r3)
    b lbl_802CF3A4
lbl_802CF39C:
    li r3, 0x0
    blr
lbl_802CF3A4:
    lhz r3, 0x0(r5)
    addi r4, r3, 0x1
    clrlwi r3, r4, 16
    sth r4, 0x0(r5)
    cmplwi r3, 0x10
    blt lbl_802CF3C4
    li r3, 0x0
    blr
lbl_802CF3C4:
    cmplw r6, r0
    blt lbl_802CF244
    mr r3, r6
    blr
}

// ----------------------------------------------------------------------------
// sdpu_get_len_from_type
// ----------------------------------------------------------------------------
asm void sdpu_get_len_from_type() {
    nofralloc
    clrlwi r0, r4, 29
    mr r8, r3
    cmplwi r0, 0x7
    bgt lbl_802CF49C
    lis r4, jumptable_80378830@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80378830@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r0, 0x1
    stw r0, 0x0(r5)
    b lbl_802CF49C
    li r0, 0x2
    stw r0, 0x0(r5)
    b lbl_802CF49C
    li r0, 0x4
    stw r0, 0x0(r5)
    b lbl_802CF49C
    li r0, 0x8
    stw r0, 0x0(r5)
    b lbl_802CF49C
    li r0, 0x10
    stw r0, 0x0(r5)
    b lbl_802CF49C
    lbz r0, 0x0(r3)
    addi r8, r3, 0x1
    stw r0, 0x0(r5)
    b lbl_802CF49C
    lbz r4, 0x0(r3)
    addi r8, r3, 0x2
    lbz r0, 0x1(r3)
    slwi r3, r4, 8
    add r0, r3, r0
    clrlwi r0, r0, 16
    stw r0, 0x0(r5)
    b lbl_802CF49C
    lbz r6, 0x0(r3)
    addi r8, r3, 0x4
    lbz r0, 0x2(r3)
    lbz r4, 0x1(r3)
    slwi r7, r6, 24
    slwi r0, r0, 8
    slwi r6, r4, 16
    lbz r4, 0x3(r3)
    add r3, r7, r6
    add r0, r4, r0
    add r0, r3, r0
    clrlwi r0, r0, 16
    stw r0, 0x0(r5)
lbl_802CF49C:
    mr r3, r8
    blr
}

// ----------------------------------------------------------------------------
// sdpu_is_base_uuid
// ----------------------------------------------------------------------------
asm void sdpu_is_base_uuid() {
    nofralloc
    lis r5, lbl_803419C8@ha
    li r0, 0x2
    addi r5, r5, lbl_803419C8@l
    li r6, 0x4
    mtctr r0
lbl_802CF4B8:
    clrlwi r0, r6, 16
    lbzx r4, r5, r0
    lbzx r0, r3, r0
    cmplw r4, r0
    beq lbl_802CF4D4
    li r3, 0x0
    blr
lbl_802CF4D4:
    addi r6, r6, 0x1
    clrlwi r0, r6, 16
    lbzx r4, r5, r0
    lbzx r0, r3, r0
    cmplw r4, r0
    beq lbl_802CF4F4
    li r3, 0x0
    blr
lbl_802CF4F4:
    addi r6, r6, 0x1
    clrlwi r0, r6, 16
    lbzx r4, r5, r0
    lbzx r0, r3, r0
    cmplw r4, r0
    beq lbl_802CF514
    li r3, 0x0
    blr
lbl_802CF514:
    addi r6, r6, 0x1
    clrlwi r0, r6, 16
    lbzx r4, r5, r0
    lbzx r0, r3, r0
    cmplw r4, r0
    beq lbl_802CF534
    li r3, 0x0
    blr
lbl_802CF534:
    addi r6, r6, 0x1
    clrlwi r0, r6, 16
    lbzx r4, r5, r0
    lbzx r0, r3, r0
    cmplw r4, r0
    beq lbl_802CF554
    li r3, 0x0
    blr
lbl_802CF554:
    addi r6, r6, 0x1
    clrlwi r0, r6, 16
    lbzx r4, r5, r0
    lbzx r0, r3, r0
    cmplw r4, r0
    beq lbl_802CF574
    li r3, 0x0
    blr
lbl_802CF574:
    addi r6, r6, 0x1
    bdnz lbl_802CF4B8
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// sdpu_compare_uuid_arrays
// ----------------------------------------------------------------------------
asm void sdpu_compare_uuid_arrays() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmplw r4, r6
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r6
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    bne lbl_802CF660
    cmplwi r4, 0x2
    bne lbl_802CF5F0
    lbz r4, 0x0(r3)
    li r6, 0x0
    lbz r0, 0x0(r5)
    cmplw r4, r0
    bne lbl_802CF5E8
    lbz r3, 0x1(r3)
    lbz r0, 0x1(r5)
    cmplw r3, r0
    bne lbl_802CF5E8
    li r6, 0x1
lbl_802CF5E8:
    mr r3, r6
    b lbl_802CF7D8
lbl_802CF5F0:
    cmplwi r4, 0x4
    bne lbl_802CF644
    lbz r4, 0x0(r3)
    li r6, 0x0
    lbz r0, 0x0(r5)
    cmplw r4, r0
    bne lbl_802CF658
    lbz r4, 0x1(r3)
    lbz r0, 0x1(r5)
    cmplw r4, r0
    bne lbl_802CF658
    lbz r4, 0x2(r3)
    lbz r0, 0x2(r5)
    cmplw r4, r0
    bne lbl_802CF658
    lbz r3, 0x3(r3)
    lbz r0, 0x3(r5)
    cmplw r3, r0
    bne lbl_802CF658
    li r6, 0x1
    b lbl_802CF658
lbl_802CF644:
    mr r4, r30
    mr r5, r29
    bl memcmp
    cntlzw r0, r3
    extrwi r6, r0, 8, 19
lbl_802CF658:
    mr r3, r6
    b lbl_802CF7D8
lbl_802CF660:
    ble lbl_802CF720
    cmplwi r4, 0x4
    bne lbl_802CF6B4
    lbz r0, 0x0(r3)
    li r6, 0x0
    cmpwi r0, 0x0
    bne lbl_802CF6AC
    lbz r0, 0x1(r3)
    cmpwi r0, 0x0
    bne lbl_802CF6AC
    lbz r4, 0x2(r3)
    lbz r0, 0x0(r5)
    cmplw r4, r0
    bne lbl_802CF6AC
    lbz r3, 0x3(r3)
    lbz r0, 0x1(r5)
    cmplw r3, r0
    bne lbl_802CF6AC
    li r6, 0x1
lbl_802CF6AC:
    mr r3, r6
    b lbl_802CF7D8
lbl_802CF6B4:
    mr r4, r28
    addi r3, r1, 0x18
    li r5, 0x10
    bl memcpy
    lis r4, lbl_803419C8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_803419C8@l
    li r5, 0x10
    bl memcpy
    cmplwi r31, 0x4
    bne lbl_802CF6F4
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x8
    bl memcpy
    b lbl_802CF704
lbl_802CF6F4:
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0xa
    bl memcpy
lbl_802CF704:
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    li r5, 0x10
    bl memcmp
    cntlzw r0, r3
    extrwi r3, r0, 8, 19
    b lbl_802CF7D8
lbl_802CF720:
    cmplwi r6, 0x4
    bne lbl_802CF770
    lbz r0, 0x0(r5)
    li r6, 0x0
    cmpwi r0, 0x0
    bne lbl_802CF768
    lbz r0, 0x1(r5)
    cmpwi r0, 0x0
    bne lbl_802CF768
    lbz r4, 0x2(r5)
    lbz r0, 0x0(r3)
    cmplw r4, r0
    bne lbl_802CF768
    lbz r4, 0x3(r5)
    lbz r0, 0x1(r3)
    cmplw r4, r0
    bne lbl_802CF768
    li r6, 0x1
lbl_802CF768:
    mr r3, r6
    b lbl_802CF7D8
lbl_802CF770:
    mr r4, r30
    addi r3, r1, 0x8
    li r5, 0x10
    bl memcpy
    lis r4, lbl_803419C8@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_803419C8@l
    li r5, 0x10
    bl memcpy
    cmplwi r29, 0x4
    bne lbl_802CF7B0
    mr r4, r28
    mr r5, r29
    addi r3, r1, 0x18
    bl memcpy
    b lbl_802CF7C0
lbl_802CF7B0:
    mr r4, r28
    mr r5, r29
    addi r3, r1, 0x1a
    bl memcpy
lbl_802CF7C0:
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    li r5, 0x10
    bl memcmp
    cntlzw r0, r3
    extrwi r3, r0, 8, 19
lbl_802CF7D8:
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
// sdpu_compare_uuid_with_attr
// ----------------------------------------------------------------------------
asm void sdpu_compare_uuid_with_attr() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lhz r0, 0x6(r4)
    lhz r5, 0x0(r3)
    clrlwi r0, r0, 20
    cmplw r5, r0
    beq lbl_802CF820
    li r3, 0x0
    b lbl_802CF878
lbl_802CF820:
    cmplwi r5, 0x2
    bne lbl_802CF840
    lhz r3, 0x4(r3)
    lhz r0, 0x8(r4)
    subf r0, r3, r0
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    b lbl_802CF878
lbl_802CF840:
    cmplwi r5, 0x4
    bne lbl_802CF860
    lwz r3, 0x4(r3)
    lwz r0, 0x8(r4)
    subf r0, r3, r0
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    b lbl_802CF878
lbl_802CF860:
    li r5, 0x10
    addi r3, r3, 0x4
    addi r4, r4, 0x8
    bl memcmp
    cntlzw r0, r3
    extrwi r3, r0, 8, 19
lbl_802CF878:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// sdpu_sort_attr_list
// ----------------------------------------------------------------------------
asm void sdpu_sort_attr_list() {
    nofralloc
    cmplwi r3, 0x1
    blelr
    subi r5, r3, 0x1
    li r8, 0x0
    lis r3, 0x1
    b lbl_802CF8C8
lbl_802CF8A0:
    clrlslwi r0, r8, 16, 1
    add r7, r4, r0
    lhz r6, 0x50(r7)
    lhz r0, 0x4e(r7)
    cmplw r0, r6
    ble lbl_802CF8C4
    sth r6, 0x4e(r7)
    subi r8, r3, 0x1
    sth r0, 0x50(r7)
lbl_802CF8C4:
    addi r8, r8, 0x1
lbl_802CF8C8:
    clrlwi r0, r8, 16
    cmpw r0, r5
    blt lbl_802CF8A0
    blr
}

