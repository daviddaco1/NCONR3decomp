#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK btm_cback();                    /* static */

/*
Decompilation failure in function btm_cback:

Found bctr instruction at gap_utils.s line 89, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

void gap_btm_cback0();
void gap_btm_cback1();

void gap_btm_cback0(s32 arg0) {
    btm_cback(0, arg0);
}

void gap_btm_cback1(s32 arg0) {
    btm_cback(1, arg0);
}

/*
Decompilation failure in function gap_find_addr_name_cb:

Found bctr instruction at gap_utils.s line 263, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function gap_find_addr_inq_cb:

Found bctr instruction at gap_utils.s line 386, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

/*
Decompilation failure in function gap_convert_btm_status:

Found bctr instruction at gap_utils.s line 436, but the corresponding jump table is not provided.

Please include it in the input .s file(s), or in an additional file.

*/

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 jumptable_803756DC[];
extern u8 jumptable_80375808[];
extern u8 jumptable_8037582C[];
extern u8 jumptable_80375894[];
extern u8 jumptable_803758B8[];
extern u8 jumptable_803758DC[];
extern u8 lbl_80375610[];
extern u8 lbl_80375788[];
extern u8 lbl_803757CC[];
extern u8 lbl_80375850[];
extern u8 lbl_80456740[];
extern void LogMsg_0();
extern void LogMsg_1();
extern void LogMsg_2();
M2C_UNK btm_cback();
extern int gap_convert_btm_status();
extern int gap_find_addr_inq_cb();
extern int gap_find_addr_name_cb();
extern void memcpy();

// asm_to_cpp: btm_cback
asm M2C_UNK btm_cback() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_80375610@ha
    cmplwi r3, 0x2
    stw r0, 0x24(r1)
    addi r7, r7, lbl_80375610@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    bge lbl_802B7E14
    lis r8, lbl_80456740@ha
    clrlslwi r0, r3, 16, 4
    addi r8, r8, lbl_80456740@l
    add r31, r8, r0
    lbz r0, 0xf(r31)
    cmpwi r0, 0x0
    beq lbl_802B7E14
    lhz r0, 0xc(r31)
    cmpwi r0, 0x3
    beq lbl_802B7D0C
    bge lbl_802B7CB4
    cmpwi r0, 0x2
    bge lbl_802B7CC0
    b lbl_802B7DE4
lbl_802B7CB4:
    cmpwi r0, 0x5
    bge lbl_802B7DE4
    b lbl_802B7D58
lbl_802B7CC0:
    lbz r6, 0x1(r4)
    li r3, 0x114
    lbz r0, 0x28(r8)
    addi r30, r1, 0x8
    stb r6, 0xa(r1)
    cmplwi r0, 0x4
    lbz r0, 0x0(r4)
    cntlzw r0, r0
    extrwi r0, r0, 1, 26
    neg r0, r0
    andc r0, r3, r0
    sth r0, 0x8(r1)
    blt lbl_802B7DE4
    lis r3, 0xe
    addi r4, r7, 0x0
    addi r3, r3, 0x3
    clrlwi r5, r0, 16
    bl LogMsg_2
    b lbl_802B7DE4
lbl_802B7D0C:
    lhz r5, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_802B7D38
    lbz r0, 0x28(r8)
    cmplwi r0, 0x4
    blt lbl_802B7DE4
    lis r3, 0xe
    addi r4, r7, 0x3c
    addi r3, r3, 0x3
    bl LogMsg_1
    b lbl_802B7DE4
lbl_802B7D38:
    lbz r0, 0x28(r8)
    cmplwi r0, 0x4
    blt lbl_802B7DE4
    lis r3, 0xe
    addi r4, r7, 0x70
    addi r3, r3, 0x3
    bl LogMsg_0
    b lbl_802B7DE4
lbl_802B7D58:
    lhz r0, 0x0(r4)
    clrlwi r0, r0, 24
    cmplwi r0, 0x8
    bgt lbl_802B7DB8
    lis r3, jumptable_803756DC@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_803756DC@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r5, 0x0
    b lbl_802B7DBC
    li r5, 0x10b
    b lbl_802B7DBC
    li r5, 0x103
    b lbl_802B7DBC
    li r5, 0x109
    b lbl_802B7DBC
    li r5, 0x10c
    b lbl_802B7DBC
    li r5, 0x10d
    b lbl_802B7DBC
    li r5, 0x115
    b lbl_802B7DBC
lbl_802B7DB8:
    li r5, 0x114
lbl_802B7DBC:
    lis r3, lbl_80456740@ha
    sth r5, 0x0(r4)
    addi r3, r3, lbl_80456740@l
    lbz r0, 0x28(r3)
    cmplwi r0, 0x4
    blt lbl_802B7DE4
    lis r3, 0xe
    addi r4, r7, 0x98
    addi r3, r3, 0x3
    bl LogMsg_1
lbl_802B7DE4:
    lwz r12, 0x4(r31)
    cmpwi r12, 0x0
    beq lbl_802B7E00
    mr r4, r30
    lhz r3, 0xc(r31)
    mtctr r12
    bctrl
lbl_802B7E00:
    cmpwi r31, 0x0
    beq lbl_802B7E14
    li r0, 0x0
    stw r0, 0x4(r31)
    stb r0, 0xf(r31)
lbl_802B7E14:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: gap_find_addr_name_cb
asm int gap_find_addr_name_cb() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80456740@ha
    addi r31, r31, lbl_80456740@l
    stw r30, 0x18(r1)
    addi r30, r31, 0x34
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x7e(r31)
    cmpwi r0, 0x0
    beq lbl_802B8040
    lhz r5, 0x0(r3)
    cmpwi r5, 0x0
    bne lbl_802B7F90
    lbz r0, 0x28(r31)
    cmplwi r0, 0x4
    blt lbl_802B7EA8
    lis r3, 0xe
    lis r4, lbl_80375788@ha
    addi r6, r29, 0x4
    addi r3, r3, 0x3
    addi r4, r4, lbl_80375788@l
    bl LogMsg_2
lbl_802B7EA8:
    addi r3, r30, 0x8
    bl strlen
    mr r5, r3
    addi r3, r30, 0x8
    addi r4, r29, 0x4
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_802B7EE8
    lwz r4, 0x30(r31)
    addi r3, r30, 0x2
    li r5, 0x6
    addi r4, r4, 0x2
    bl memcpy
    li r0, 0x0
    sth r0, 0x0(r30)
    b lbl_802B8018
lbl_802B7EE8:
    lwz r3, 0x30(r31)
    bl BTM_InqDbNext
    cmpwi r3, 0x0
    stw r3, 0x30(r31)
    beq lbl_802B7F84
    lis r4, gap_find_addr_name_cb@ha
    addi r3, r3, 0x2
    addi r4, r4, gap_find_addr_name_cb@l
    bl BTM_ReadRemoteDeviceName
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_802B8040
    lhz r0, 0x0(r29)
    clrlwi r0, r0, 24
    cmplwi r0, 0x8
    bgt lbl_802B7F78
    lis r3, jumptable_8037582C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8037582C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x0
    b lbl_802B7F7C
    li r0, 0x10b
    b lbl_802B7F7C
    li r0, 0x103
    b lbl_802B7F7C
    li r0, 0x109
    b lbl_802B7F7C
    li r0, 0x10c
    b lbl_802B7F7C
    li r0, 0x10d
    b lbl_802B7F7C
    li r0, 0x115
    b lbl_802B7F7C
lbl_802B7F78:
    li r0, 0x114
lbl_802B7F7C:
    sth r0, 0x0(r30)
    b lbl_802B8018
lbl_802B7F84:
    li r0, 0x102
    sth r0, 0x0(r30)
    b lbl_802B8018
lbl_802B7F90:
    lbz r0, 0x28(r31)
    cmplwi r0, 0x4
    blt lbl_802B7FB0
    lis r3, 0xe
    lis r4, lbl_803757CC@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_803757CC@l
    bl LogMsg_1
lbl_802B7FB0:
    lhz r0, 0x0(r29)
    clrlwi r0, r0, 24
    cmplwi r0, 0x8
    bgt lbl_802B8010
    lis r3, jumptable_80375808@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80375808@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x0
    b lbl_802B8014
    li r0, 0x10b
    b lbl_802B8014
    li r0, 0x103
    b lbl_802B8014
    li r0, 0x109
    b lbl_802B8014
    li r0, 0x10c
    b lbl_802B8014
    li r0, 0x10d
    b lbl_802B8014
    li r0, 0x115
    b lbl_802B8014
lbl_802B8010:
    li r0, 0x114
lbl_802B8014:
    sth r0, 0x0(r30)
lbl_802B8018:
    lwz r12, 0x2c(r31)
    cmpwi r12, 0x0
    beq lbl_802B8034
    mr r4, r30
    li r3, 0x5
    mtctr r12
    bctrl
lbl_802B8034:
    li r0, 0x0
    stb r0, 0x7e(r31)
    stw r0, 0x2c(r31)
lbl_802B8040:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: gap_find_addr_inq_cb
asm int gap_find_addr_inq_cb() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80456740@ha
    addi r31, r31, lbl_80456740@l
    stw r30, 0x18(r1)
    addi r30, r31, 0x34
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x7e(r31)
    cmpwi r0, 0x0
    beq lbl_802B81F4
    lbz r0, 0x28(r31)
    cmplwi r0, 0x4
    blt lbl_802B80B8
    lis r3, 0xe
    lis r4, lbl_80375850@ha
    lbz r5, 0x0(r29)
    addi r3, r3, 0x3
    lbz r6, 0x1(r29)
    addi r4, r4, lbl_80375850@l
    bl LogMsg_2
lbl_802B80B8:
    lbz r0, 0x0(r29)
    cmpwi r0, 0x0
    bne lbl_802B816C
    li r0, 0x111
    sth r0, 0x0(r30)
    bl BTM_InqDbFirst
    cmpwi r3, 0x0
    stw r3, 0x30(r31)
    beq lbl_802B8160
    lis r4, gap_find_addr_name_cb@ha
    addi r3, r3, 0x2
    addi r4, r4, gap_find_addr_name_cb@l
    bl BTM_ReadRemoteDeviceName
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_802B81F4
    lbz r0, 0x0(r29)
    cmplwi r0, 0x8
    bgt lbl_802B8154
    lis r3, jumptable_803758B8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_803758B8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x0
    b lbl_802B8158
    li r0, 0x10b
    b lbl_802B8158
    li r0, 0x103
    b lbl_802B8158
    li r0, 0x109
    b lbl_802B8158
    li r0, 0x10c
    b lbl_802B8158
    li r0, 0x10d
    b lbl_802B8158
    li r0, 0x115
    b lbl_802B8158
lbl_802B8154:
    li r0, 0x114
lbl_802B8158:
    sth r0, 0x0(r30)
    b lbl_802B81CC
lbl_802B8160:
    li r0, 0x102
    sth r0, 0x0(r30)
    b lbl_802B81CC
lbl_802B816C:
    cmplwi r0, 0x8
    bgt lbl_802B81C4
    lis r3, jumptable_80375894@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80375894@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r0, 0x0
    b lbl_802B81C8
    li r0, 0x10b
    b lbl_802B81C8
    li r0, 0x103
    b lbl_802B81C8
    li r0, 0x109
    b lbl_802B81C8
    li r0, 0x10c
    b lbl_802B81C8
    li r0, 0x10d
    b lbl_802B81C8
    li r0, 0x115
    b lbl_802B81C8
lbl_802B81C4:
    li r0, 0x114
lbl_802B81C8:
    sth r0, 0x0(r30)
lbl_802B81CC:
    lwz r12, 0x2c(r31)
    cmpwi r12, 0x0
    beq lbl_802B81E8
    mr r4, r30
    li r3, 0x5
    mtctr r12
    bctrl
lbl_802B81E8:
    li r0, 0x0
    stb r0, 0x7e(r31)
    stw r0, 0x2c(r31)
lbl_802B81F4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: gap_convert_btm_status
asm int gap_convert_btm_status() {
    nofralloc
    cmplwi r3, 0x8
    bgt lbl_802B8268
    lis r4, jumptable_803758DC@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_803758DC@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r3, 0x0
    blr
    li r3, 0x10b
    blr
    li r3, 0x103
    blr
    li r3, 0x109
    blr
    li r3, 0x10c
    blr
    li r3, 0x10d
    blr
    li r3, 0x115
    blr
lbl_802B8268:
    li r3, 0x114
    blr
}
