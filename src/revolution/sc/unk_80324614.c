#include "types.h"

// Translation unit: src/revolution/sc/unk_80324614.cpp
// Total functions: 9

// Small Data symbols (@sda21)
extern float lbl_8049D368;
extern float lbl_8049D370;
extern float lbl_8049D378;
extern float lbl_8049D380;
extern float lbl_8049D384;
extern float lbl_8049E400;

// Global data symbols (@ha/@l)
extern u8 Packet_8046EFC8[];
extern u8 Si_8038DB08[];
extern u8 lbl_8038DA30[];
extern u8 lbl_8038DA60[];
extern u8 lbl_8038DAA8[];
extern u8 lbl_8046DFC0[];

// Forward declarations
extern void OSDisableInterrupts();
extern void OSReport();
extern void OSRestoreInterrupts();
extern void SCFindByteArrayItem();
extern void SCFindU32Item();
extern void SIBusy();
extern void SIIsChanBusy();
extern void fn_80324614();
extern void fn_80324704();
extern void fn_80324754();
extern void fn_803248C0();
extern void fn_80324944();
extern void fn_80324980();
extern void fn_803249E8();
extern void memset();
extern void sscanf();
extern void strcmp();

// ----------------------------------------------------------------------------
// fn_80324614
// ----------------------------------------------------------------------------
asm void fn_80324614() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x1008
    li r5, 0x10
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8046DFC0@ha
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    addi r3, r31, lbl_8046DFC0@l
    bl SCFindByteArrayItem
    cmpwi r3, 0x0
    beq lbl_803246BC
    lwz r4, lbl_8046DFC0@l(r31)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    beq lbl_803246BC
    clrrwi. r3, r4, 24
    beq lbl_803246BC
    addis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_803246BC
    rlwinm r3, r4, 0, 8, 15
    subis r0, r3, 0xff
    cmplwi r0, 0x0
    beq lbl_803246BC
    bl OSDisableInterrupts
    lwz r29, lbl_8046DFC0@l(r31)
    mr r30, r3
    rlwinm. r0, r29, 0, 8, 15
    bne lbl_803246AC
    addi r3, r31, lbl_8046DFC0@l
    li r4, 0x0
    li r5, 0x1008
    bl memset
    stw r29, lbl_8046DFC0@l(r31)
lbl_803246AC:
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x1
    b lbl_803246C0
lbl_803246BC:
    li r0, 0x0
lbl_803246C0:
    cmpwi r0, 0x0
    beq lbl_803246E0
    lis r4, lbl_8046DFC0@ha
    li r3, 0x1
    lwz r0, lbl_8046DFC0@l(r4)
    srwi r0, r0, 24
    stb r0, 0x0(r28)
    b lbl_803246E4
lbl_803246E0:
    li r3, 0x0
lbl_803246E4:
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
// fn_80324704
// ----------------------------------------------------------------------------
asm void fn_80324704() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8038DA30@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_8038DA30@l
    opword 0x4CC63182
    bl OSReport
    addi r3, r1, 0x8
    li r4, 0x14
    bl SCFindU32Item
    cmpwi r3, 0x0
    bne lbl_8032473C
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_8032473C:
    lwz r0, 0x8(r1)
    extrwi r3, r0, 1, 30
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80324754
// ----------------------------------------------------------------------------
asm void fn_80324754() {
    nofralloc
    lis r6, 0x73b6
    li r0, 0x80
    subi r11, r6, 0x2406
    li r9, 0x0
    li r12, 0x0
    li r6, 0x0
    li r10, 0x0
    mtctr r0
lbl_80324774:
    addis r8, r10, 0x8000
    lbz r8, 0x3800(r8)
    cmpwi r8, 0x0
    beq lbl_803247C8
    lbzx r7, r3, r12
    xor r0, r8, r11
    clrlwi r8, r0, 24
    extsb. r0, r7
    bne lbl_803247A8
    cmplwi r8, 0x3d
    bne lbl_803247A8
    li r9, 0x1
    b lbl_80324840
lbl_803247A8:
    extsb r7, r7
    addi r0, r12, 0x1
    xor r7, r8, r7
    andi. r7, r7, 0xdf
    cntlzw r7, r7
    extrwi r7, r7, 1, 26
    neg r7, r7
    and r12, r0, r7
lbl_803247C8:
    addi r10, r10, 0x1
    srwi r7, r11, 31
    addis r8, r10, 0x8000
    slwi r0, r11, 1
    lbz r8, 0x3800(r8)
    or r11, r7, r0
    cmpwi r8, 0x0
    beq lbl_8032482C
    lbzx r7, r3, r12
    xor r0, r8, r11
    clrlwi r8, r0, 24
    extsb. r0, r7
    bne lbl_8032480C
    cmplwi r8, 0x3d
    bne lbl_8032480C
    li r9, 0x1
    b lbl_80324840
lbl_8032480C:
    extsb r7, r7
    addi r0, r12, 0x1
    xor r7, r8, r7
    andi. r7, r7, 0xdf
    cntlzw r7, r7
    extrwi r7, r7, 1, 26
    neg r7, r7
    and r12, r0, r7
lbl_8032482C:
    srwi r7, r11, 31
    slwi r0, r11, 1
    or r11, r7, r0
    addi r10, r10, 0x1
    bdnz lbl_80324774
lbl_80324840:
    cmpwi r9, 0x0
    beq lbl_803248B8
    addi r10, r10, 0x1
    b lbl_803248A8
lbl_80324850:
    addis r3, r10, 0x8000
    srwi r7, r11, 31
    lbz r3, 0x3800(r3)
    slwi r0, r11, 1
    or r11, r7, r0
    cmpwi r3, 0x0
    beq lbl_80324888
    xor r0, r3, r11
    clrlwi r3, r0, 24
    cmplwi r3, 0xd
    beq lbl_80324884
    cmplwi r3, 0xa
    bne lbl_80324888
lbl_80324884:
    li r3, 0x0
lbl_80324888:
    cmpwi r3, 0x0
    stb r3, 0x0(r4)
    addi r6, r6, 0x1
    addi r4, r4, 0x1
    bne lbl_803248A4
    li r3, 0x1
    blr
lbl_803248A4:
    addi r10, r10, 0x1
lbl_803248A8:
    cmplwi r10, 0x100
    bge lbl_803248B8
    cmplw r6, r5
    blt lbl_80324850
lbl_803248B8:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_803248C0
// ----------------------------------------------------------------------------
asm void fn_803248C0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    la r3, lbl_8049D368
    li r5, 0x4
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_8038DA60@ha
    addi r30, r30, lbl_8038DA60@l
    bl fn_80324754
    cmpwi r3, 0x0
    beq lbl_80324928
    b lbl_80324918
lbl_803248F8:
    addi r3, r30, 0x1
    addi r4, r1, 0x8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80324914
    mr r3, r31
    b lbl_8032492C
lbl_80324914:
    addi r30, r30, 0x5
lbl_80324918:
    lbz r31, 0x0(r30)
    extsb r0, r31
    cmpwi r0, -0x1
    bne lbl_803248F8
lbl_80324928:
    li r3, -0x1
lbl_8032492C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80324944
// ----------------------------------------------------------------------------
asm void fn_80324944() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_8049D370
    la r4, lbl_8049E400
    stw r0, 0x14(r1)
    li r5, 0x6
    bl fn_80324754
    cmpwi r3, 0x0
    li r3, 0x0
    beq lbl_80324970
    la r3, lbl_8049E400
lbl_80324970:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80324980
// ----------------------------------------------------------------------------
asm void fn_80324980() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0xb
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r3
    la r3, lbl_8049D378
    bl fn_80324754
    cmpwi r3, 0x0
    beq lbl_803249D0
    mr r5, r31
    addi r3, r1, 0x8
    la r4, lbl_8049D380
    opword 0x4CC63182
    bl sscanf
    cmpwi r3, 0x1
    bne lbl_803249D0
    li r3, 0x1
    b lbl_803249D4
lbl_803249D0:
    li r3, 0x0
lbl_803249D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_803249E8
// ----------------------------------------------------------------------------
asm void fn_803249E8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    la r3, lbl_8049D384
    li r5, 0x3
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, lbl_8038DAA8@ha
    addi r30, r30, lbl_8038DAA8@l
    bl fn_80324754
    cmpwi r3, 0x0
    beq lbl_80324A50
    b lbl_80324A40
lbl_80324A20:
    addi r3, r30, 0x1
    addi r4, r1, 0x8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80324A3C
    mr r3, r31
    b lbl_80324A54
lbl_80324A3C:
    addi r30, r30, 0x4
lbl_80324A40:
    lbz r31, 0x0(r30)
    extsb r0, r31
    cmpwi r0, -0x1
    bne lbl_80324A20
lbl_80324A50:
    li r3, -0x1
lbl_80324A54:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SIBusy
// ----------------------------------------------------------------------------
asm void SIBusy() {
    nofralloc
    lis r3, Si_8038DB08@ha
    lwz r4, Si_8038DB08@l(r3)
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// SIIsChanBusy
// ----------------------------------------------------------------------------
asm void SIIsChanBusy() {
    nofralloc
    lis r4, Packet_8046EFC8@ha
    slwi r0, r3, 5
    addi r4, r4, Packet_8046EFC8@l
    li r5, 0x0
    lwzx r0, r4, r0
    cmpwi r0, -0x1
    bne lbl_80324AB4
    lis r4, Si_8038DB08@ha
    lwz r0, Si_8038DB08@l(r4)
    cmpw r0, r3
    bne lbl_80324AB8
lbl_80324AB4:
    li r5, 0x1
lbl_80324AB8:
    mr r3, r5
    blr
}

