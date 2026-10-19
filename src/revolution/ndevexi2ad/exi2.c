#include "types.h"

// Translation unit: src/revolution/ndevexi2ad/exi2.cpp
// Total functions: 6

// Forward declarations
extern void __DBEXIInit();
extern void __DBEXIReadRam();
extern void __DBEXIReadReg();
extern void __DBEXIWriteRam();
extern void __DBEXIWriteReg();
extern void __EXI2Imm();
extern void __OSMaskInterrupts();
extern void _restgpr_26();
extern void _savegpr_26();

// ----------------------------------------------------------------------------
// __EXI2Imm
// ----------------------------------------------------------------------------
asm void __EXI2Imm() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r5, 0x0
    beq lbl_801A8A2C
    cmpwi cr1, r4, 0x0
    li r0, 0x0
    li r7, 0x0
    ble cr1, lbl_801A8A24
    cmpwi r4, 0x8
    subi r9, r4, 0x8
    ble lbl_801A89F0
    li r8, 0x0
    blt cr1, lbl_801A890C
    lis r6, 0x8000
    subi r6, r6, 0x2
    cmpw r4, r6
    bgt lbl_801A890C
    li r8, 0x1
lbl_801A890C:
    cmpwi r8, 0x0
    beq lbl_801A89F0
    addi r8, r9, 0x7
    mr r6, r3
    srwi r8, r8, 3
    mtctr r8
    cmpwi r9, 0x0
    ble lbl_801A89F0
lbl_801A892C:
    subfic r9, r7, 0x3
    addi r8, r7, 0x1
    subfic r28, r8, 0x3
    lbz r10, 0x0(r6)
    addi r8, r7, 0x2
    lbz r27, 0x1(r6)
    subfic r29, r8, 0x3
    slwi r28, r28, 3
    slwi r8, r9, 3
    neg r12, r7
    slw r26, r10, r8
    slwi r30, r29, 3
    lbz r31, 0x2(r6)
    addi r8, r7, 0x4
    subfic r11, r8, 0x3
    or r0, r0, r26
    slw r28, r27, r28
    addi r8, r7, 0x5
    slw r31, r31, r30
    lbz r29, 0x3(r6)
    slwi r12, r12, 3
    or r0, r0, r28
    subfic r10, r8, 0x3
    addi r8, r7, 0x6
    slw r29, r29, r12
    or r0, r0, r31
    subfic r9, r8, 0x3
    addi r8, r7, 0x7
    slwi r12, r10, 3
    lbz r31, 0x5(r6)
    subfic r8, r8, 0x3
    slwi r10, r9, 3
    lbz r30, 0x4(r6)
    slwi r11, r11, 3
    or r0, r0, r29
    lbz r9, 0x7(r6)
    slw r30, r30, r11
    lbz r11, 0x6(r6)
    slwi r8, r8, 3
    slw r12, r31, r12
    or r0, r0, r30
    slw r10, r11, r10
    or r0, r0, r12
    slw r8, r9, r8
    or r0, r0, r10
    addi r7, r7, 0x8
    or r0, r0, r8
    addi r6, r6, 0x8
    bdnz lbl_801A892C
lbl_801A89F0:
    subf r6, r7, r4
    add r9, r3, r7
    mtctr r6
    cmpw r7, r4
    bge lbl_801A8A24
lbl_801A8A04:
    subfic r6, r7, 0x3
    lbz r8, 0x0(r9)
    slwi r6, r6, 3
    addi r9, r9, 0x1
    slw r6, r8, r6
    addi r7, r7, 0x1
    or r0, r0, r6
    bdnz lbl_801A8A04
lbl_801A8A24:
    lis r6, 0xcd00
    stw r0, 0x6838(r6)
lbl_801A8A2C:
    slwi r6, r5, 2
    subi r0, r4, 0x1
    ori r7, r6, 0x1
    slwi r0, r0, 4
    lis r6, 0xcd00
    or r0, r7, r0
    stw r0, 0x6834(r6)
lbl_801A8A48:
    lwz r0, 0x6834(r6)
    clrlwi. r0, r0, 31
    bne lbl_801A8A48
    cmpwi r5, 0x0
    bne lbl_801A8B84
    lis r5, 0xcd00
    cmpwi cr1, r4, 0x0
    lwz r0, 0x6838(r5)
    li r5, 0x0
    ble cr1, lbl_801A8B84
    cmpwi r4, 0x8
    subi r7, r4, 0x8
    ble lbl_801A8B58
    li r8, 0x0
    blt cr1, lbl_801A8A98
    lis r6, 0x8000
    subi r6, r6, 0x2
    cmpw r4, r6
    bgt lbl_801A8A98
    li r8, 0x1
lbl_801A8A98:
    cmpwi r8, 0x0
    beq lbl_801A8B58
    addi r6, r7, 0x7
    srwi r6, r6, 3
    mtctr r6
    cmpwi r7, 0x0
    ble lbl_801A8B58
lbl_801A8AB4:
    subfic r6, r5, 0x3
    addi r7, r5, 0x1
    slwi r8, r6, 3
    srw r9, r0, r8
    subfic r7, r7, 0x3
    slwi r8, r7, 3
    stb r9, 0x0(r3)
    addi r7, r5, 0x2
    neg r6, r5
    srw r9, r0, r8
    slwi r8, r6, 3
    subfic r7, r7, 0x3
    slwi r6, r7, 3
    stb r9, 0x1(r3)
    srw r9, r0, r6
    srw r8, r0, r8
    addi r6, r5, 0x4
    stb r9, 0x2(r3)
    subfic r7, r6, 0x3
    addi r6, r5, 0x5
    stb r8, 0x3(r3)
    slwi r7, r7, 3
    srw r9, r0, r7
    subfic r6, r6, 0x3
    slwi r8, r6, 3
    stb r9, 0x4(r3)
    addi r6, r5, 0x6
    subfic r7, r6, 0x3
    srw r8, r0, r8
    addi r6, r5, 0x7
    stb r8, 0x5(r3)
    slwi r7, r7, 3
    addi r5, r5, 0x8
    subfic r6, r6, 0x3
    srw r7, r0, r7
    slwi r6, r6, 3
    stb r7, 0x6(r3)
    srw r6, r0, r6
    stb r6, 0x7(r3)
    addi r3, r3, 0x8
    bdnz lbl_801A8AB4
lbl_801A8B58:
    subf r6, r5, r4
    mtctr r6
    cmpw r5, r4
    bge lbl_801A8B84
lbl_801A8B68:
    subfic r4, r5, 0x3
    addi r5, r5, 0x1
    slwi r4, r4, 3
    srw r4, r0, r4
    stb r4, 0x0(r3)
    addi r3, r3, 0x1
    bdnz lbl_801A8B68
lbl_801A8B84:
    addi r11, r1, 0x20
    li r3, 0x1
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __DBEXIInit
// ----------------------------------------------------------------------------
asm void __DBEXIInit() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, 0x2
    stw r0, 0x24(r1)
    addi r3, r3, -0x8000
    stw r31, 0x1c(r1)
    bl __OSMaskInterrupts
    lis r3, 0xcd00
lbl_801A8BC0:
    lwz r0, 0x6834(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_801A8BC0
    lis r31, 0xcd00
    li r0, 0x0
    stw r0, 0x6828(r31)
    lis r3, 0xb400
    lis r0, 0xd400
    li r4, 0x4
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    li r5, 0x1
    stw r0, 0x8(r1)
    lwz r0, 0x6828(r31)
    andi. r0, r0, 0x405
    ori r0, r0, 0xc0
    stw r0, 0x6828(r31)
    bl __EXI2Imm
lbl_801A8C0C:
    lwz r0, 0x6834(r31)
    clrlwi. r0, r0, 31
    bne lbl_801A8C0C
    addi r3, r1, 0x8
    li r4, 0x4
    li r5, 0x1
    bl __EXI2Imm
    lis r3, 0xcd00
lbl_801A8C2C:
    lwz r0, 0x6834(r3)
    clrlwi. r0, r0, 31
    bne lbl_801A8C2C
    lis r3, 0xcd00
    lwz r0, 0x6828(r3)
    andi. r0, r0, 0x405
    stw r0, 0x6828(r3)
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __DBEXIReadReg
// ----------------------------------------------------------------------------
asm void __DBEXIReadReg() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x1
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x4
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lis r28, 0xcd00
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    stw r6, 0xc(r1)
    lwz r0, 0x6828(r28)
    andi. r0, r0, 0x405
    ori r0, r0, 0xc0
    stw r0, 0x6828(r28)
    bl __EXI2Imm
    cntlzw r0, r3
    srwi r29, r0, 5
lbl_801A8CB8:
    lwz r0, 0x6834(r28)
    clrlwi. r0, r0, 31
    bne lbl_801A8CB8
    addi r3, r1, 0xc
    li r4, 0x4
    li r5, 0x0
    bl __EXI2Imm
    cntlzw r0, r3
    lis r3, 0xcd00
    srwi r0, r0, 5
    or r6, r29, r0
lbl_801A8CE4:
    lwz r0, 0x6834(r3)
    clrlwi. r0, r0, 31
    bne lbl_801A8CE4
    lis r3, 0xcd00
    cmpwi cr1, r31, 0x2
    lwz r0, 0x6828(r3)
    andi. r0, r0, 0x405
    stw r0, 0x6828(r3)
    beq cr1, lbl_801A8D28
    bge cr1, lbl_801A8D3C
    cmpwi r31, 0x1
    bge lbl_801A8D18
    b lbl_801A8D3C
lbl_801A8D18:
    lwz r0, 0xc(r1)
    srwi r0, r0, 24
    stb r0, 0x0(r30)
    b lbl_801A8D58
lbl_801A8D28:
    lwz r3, 0xc(r1)
    rlwinm r0, r3, 24, 16, 23
    rlwimi r0, r3, 8, 24, 31
    sth r0, 0x0(r30)
    b lbl_801A8D58
lbl_801A8D3C:
    lwz r4, 0xc(r1)
    rlwinm r3, r4, 8, 8, 15
    rlwinm r0, r4, 24, 16, 23
    rlwimi r3, r4, 24, 0, 7
    rlwimi r0, r4, 8, 24, 31
    or r0, r3, r0
    stw r0, 0x0(r30)
lbl_801A8D58:
    cntlzw r0, r6
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    srwi r3, r0, 5
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __DBEXIWriteReg
// ----------------------------------------------------------------------------
asm void __DBEXIWriteReg() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x2
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r3, 0x8(r1)
    beq lbl_801A8DC0
    bge lbl_801A8DD4
    cmpwi r5, 0x1
    bge lbl_801A8DB0
    b lbl_801A8DD4
lbl_801A8DB0:
    lbz r0, 0x0(r4)
    slwi r0, r0, 24
    stw r0, 0xc(r1)
    b lbl_801A8DF0
lbl_801A8DC0:
    lhz r3, 0x0(r4)
    rlwinm r0, r3, 8, 8, 15
    rlwimi r0, r3, 24, 0, 7
    stw r0, 0xc(r1)
    b lbl_801A8DF0
lbl_801A8DD4:
    lwz r4, 0x0(r4)
    rlwinm r3, r4, 8, 8, 15
    rlwinm r0, r4, 24, 16, 23
    rlwimi r3, r4, 24, 0, 7
    rlwimi r0, r4, 8, 24, 31
    or r0, r3, r0
    stw r0, 0xc(r1)
lbl_801A8DF0:
    lis r30, 0xcd00
    addi r3, r1, 0x8
    lwz r0, 0x6828(r30)
    li r4, 0x4
    li r5, 0x1
    andi. r0, r0, 0x405
    ori r0, r0, 0xc0
    stw r0, 0x6828(r30)
    bl __EXI2Imm
    cntlzw r0, r3
    srwi r31, r0, 5
lbl_801A8E1C:
    lwz r0, 0x6834(r30)
    clrlwi. r0, r0, 31
    bne lbl_801A8E1C
    addi r3, r1, 0xc
    li r4, 0x4
    li r5, 0x1
    bl __EXI2Imm
    cntlzw r0, r3
    lis r3, 0xcd00
    srwi r0, r0, 5
    or r5, r31, r0
lbl_801A8E48:
    lwz r0, 0x6834(r3)
    clrlwi. r0, r0, 31
    bne lbl_801A8E48
    lis r4, 0xcd00
    cntlzw r0, r5
    lwz r5, 0x6828(r4)
    srwi r3, r0, 5
    andi. r0, r5, 0x405
    stw r0, 0x6828(r4)
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __DBEXIReadRam
// ----------------------------------------------------------------------------
asm void __DBEXIReadRam() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, 0xcd00
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    li r4, 0x4
    stw r28, 0x10(r1)
    mr r28, r5
    li r5, 0x1
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    lwz r0, 0x6828(r31)
    andi. r0, r0, 0x405
    ori r0, r0, 0xc0
    stw r0, 0x6828(r31)
    bl __EXI2Imm
    cntlzw r0, r3
    srwi r30, r0, 5
lbl_801A8ED8:
    lwz r0, 0x6834(r31)
    clrlwi. r0, r0, 31
    bne lbl_801A8ED8
    lis r31, 0xcd00
    b lbl_801A8F24
lbl_801A8EEC:
    addi r3, r1, 0xc
    li r4, 0x4
    li r5, 0x0
    bl __EXI2Imm
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
lbl_801A8F08:
    lwz r0, 0x6834(r31)
    clrlwi. r0, r0, 31
    bne lbl_801A8F08
    lwz r0, 0xc(r1)
    subi r28, r28, 0x4
    stw r0, 0x0(r29)
    addi r29, r29, 0x4
lbl_801A8F24:
    cmpwi r28, 0x0
    bgt lbl_801A8EEC
    lis r4, 0xcd00
    cntlzw r0, r30
    lwz r5, 0x6828(r4)
    srwi r3, r0, 5
    andi. r0, r5, 0x405
    stw r0, 0x6828(r4)
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
// __DBEXIWriteRam
// ----------------------------------------------------------------------------
asm void __DBEXIWriteRam() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, 0xcd00
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    li r4, 0x4
    stw r28, 0x10(r1)
    mr r28, r5
    li r5, 0x1
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    lwz r0, 0x6828(r31)
    andi. r0, r0, 0x405
    ori r0, r0, 0xc0
    stw r0, 0x6828(r31)
    bl __EXI2Imm
    cntlzw r0, r3
    srwi r30, r0, 5
lbl_801A8FB8:
    lwz r0, 0x6834(r31)
    clrlwi. r0, r0, 31
    bne lbl_801A8FB8
    lis r31, 0xcd00
    b lbl_801A9004
lbl_801A8FCC:
    lwz r0, 0x0(r29)
    addi r3, r1, 0xc
    li r4, 0x4
    li r5, 0x1
    stw r0, 0xc(r1)
    addi r29, r29, 0x4
    bl __EXI2Imm
    cntlzw r0, r3
    srwi r0, r0, 5
    or r30, r30, r0
lbl_801A8FF4:
    lwz r0, 0x6834(r31)
    clrlwi. r0, r0, 31
    bne lbl_801A8FF4
    subi r28, r28, 0x4
lbl_801A9004:
    cmpwi r28, 0x0
    bgt lbl_801A8FCC
    lis r4, 0xcd00
    cntlzw r0, r30
    lwz r5, 0x6828(r4)
    srwi r3, r0, 5
    andi. r0, r5, 0x405
    stw r0, 0x6828(r4)
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

