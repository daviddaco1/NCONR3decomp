#include "types.h"

// Translation unit: src/revolution/os/OSFont.cpp
// Total functions: 12

// Small Data symbols (@sda21)
extern float lbl_8049D208;
extern float lbl_8049E2F0;
extern float lbl_8049E2F4;
extern float lbl_8049E2F8;
extern float lbl_8049E2FC;
extern float lbl_804A27A8;
extern float lbl_804A27AA;
extern float lbl_804A27AC;
extern float lbl_804A27AE;

// Global data symbols (@ha/@l)
extern u8 lbl_80380568[];
extern u8 lbl_803806E8[];

// Forward declarations
extern void Decode();
extern void ExpandFontSheet();
extern void GetFontCode();
extern void OSGetFontEncode();
extern void OSGetFontTexel();
extern void OSGetFontTexture();
extern void OSInitFont();
extern void OSLoadFont();
extern void OSSetFontEncode();
extern void ParseStringS();
extern void ParseStringW();
extern void ReadFont();
extern void __OSReadROM();
extern void _restgpr_17();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _savegpr_17();
extern void _savegpr_25();
extern void _savegpr_26();
extern void fn_803150C4();
extern void fn_8031E248();
extern void fn_8031E358();
extern void fn_8031E3C8();
extern void fn_8031E440();

// ----------------------------------------------------------------------------
// GetFontCode
// ----------------------------------------------------------------------------
asm void GetFontCode() {
    nofralloc
    cmplwi r3, 0x1
    bne lbl_80318A30
    cmplwi r4, 0x20
    blt lbl_8031894C
    cmplwi r4, 0xdf
    bgt lbl_8031894C
    subi r0, r4, 0x20
    lis r3, lbl_80380568@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_80380568@l
    lhzx r3, r3, r0
    blr
lbl_8031894C:
    cmplwi r4, 0x889e
    ble lbl_803189B8
    cmplwi r4, 0x9872
    bgt lbl_803189B8
    extrwi r3, r4, 8, 16
    clrlwi r4, r4, 24
    subi r3, r3, 0x88
    li r0, 0x0
    cmplwi r4, 0x40
    mulli r3, r3, 0xbc
    blt lbl_8031898C
    cmplwi r4, 0xfc
    bgt lbl_8031898C
    cmplwi r4, 0x7f
    beq lbl_8031898C
    li r0, 0x1
lbl_8031898C:
    cmpwi r0, 0x0
    bne lbl_8031899C
    li r3, 0x0
    blr
lbl_8031899C:
    subi r4, r4, 0x40
    cmpwi r4, 0x40
    blt lbl_803189AC
    subi r4, r4, 0x1
lbl_803189AC:
    add r3, r3, r4
    addi r3, r3, 0x2be
    blr
lbl_803189B8:
    cmplwi r4, 0x8140
    blt lbl_80318A48
    cmplwi r4, 0x879e
    bge lbl_80318A48
    extrwi r3, r4, 8, 16
    clrlwi r4, r4, 24
    subi r3, r3, 0x81
    li r0, 0x0
    cmplwi r4, 0x40
    mulli r3, r3, 0xbc
    blt lbl_803189F8
    cmplwi r4, 0xfc
    bgt lbl_803189F8
    cmplwi r4, 0x7f
    beq lbl_803189F8
    li r0, 0x1
lbl_803189F8:
    cmpwi r0, 0x0
    bne lbl_80318A08
    li r3, 0x0
    blr
lbl_80318A08:
    subi r4, r4, 0x40
    cmpwi r4, 0x40
    blt lbl_80318A18
    subi r4, r4, 0x1
lbl_80318A18:
    add r0, r3, r4
    lis r3, lbl_803806E8@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_803806E8@l
    lhzx r3, r3, r0
    blr
lbl_80318A30:
    cmplwi r4, 0x20
    ble lbl_80318A48
    cmplwi r4, 0xff
    bgt lbl_80318A48
    subi r3, r4, 0x20
    blr
lbl_80318A48:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// Decode
// ----------------------------------------------------------------------------
asm void Decode() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r5, 0xc(r3)
    addi r30, r3, 0x10
    lwz r0, 0x4(r3)
    li r8, 0x0
    add r29, r3, r5
    lwz r9, 0x8(r3)
    li r11, 0x0
    lis r5, 0x8000
lbl_80318A84:
    cmpwi r11, 0x0
    bne lbl_80318A98
    lwz r12, 0x0(r30)
    li r11, 0x20
    addi r30, r30, 0x4
lbl_80318A98:
    clrrwi. r6, r12, 31
    beq lbl_80318AB4
    lbz r6, 0x0(r29)
    addi r29, r29, 0x1
    stbx r6, r4, r8
    addi r8, r8, 0x1
    b lbl_80318BCC
lbl_80318AB4:
    add r7, r3, r9
    lbzx r6, r3, r9
    lbz r7, 0x1(r7)
    addi r9, r9, 0x2
    rlwimi r7, r6, 8, 16, 23
    srawi. r10, r7, 12
    clrlwi r6, r7, 20
    subf r7, r6, r8
    bne lbl_80318AE8
    lbz r6, 0x0(r29)
    addi r29, r29, 0x1
    addi r10, r6, 0x12
    b lbl_80318AEC
lbl_80318AE8:
    addi r10, r10, 0x2
lbl_80318AEC:
    cmpwi cr1, r10, 0x0
    li r6, 0x0
    ble cr1, lbl_80318BCC
    cmpwi r10, 0x8
    subi r27, r10, 0x8
    ble lbl_80318B98
    li r28, 0x0
    blt cr1, lbl_80318B1C
    subi r26, r5, 0x2
    cmpw r10, r26
    bgt lbl_80318B1C
    li r28, 0x1
lbl_80318B1C:
    cmpwi r28, 0x0
    beq lbl_80318B98
    addi r31, r27, 0x7
    add r28, r4, r8
    srwi r31, r31, 3
    mtctr r31
    cmpwi r27, 0x0
    ble lbl_80318B98
lbl_80318B3C:
    add r26, r4, r7
    add r27, r8, r4
    lbz r31, -0x1(r26)
    addi r8, r8, 0x8
    addi r6, r6, 0x8
    stb r31, 0x0(r28)
    addi r28, r28, 0x8
    lbzx r31, r4, r7
    addi r7, r7, 0x8
    stb r31, 0x1(r27)
    lbz r31, 0x1(r26)
    stb r31, 0x2(r27)
    lbz r31, 0x2(r26)
    stb r31, 0x3(r27)
    lbz r31, 0x3(r26)
    stb r31, 0x4(r27)
    lbz r31, 0x4(r26)
    stb r31, 0x5(r27)
    lbz r31, 0x5(r26)
    stb r31, 0x6(r27)
    lbz r31, 0x6(r26)
    stb r31, 0x7(r27)
    bdnz lbl_80318B3C
lbl_80318B98:
    subf r31, r6, r10
    add r28, r4, r8
    mtctr r31
    cmpw r6, r10
    bge lbl_80318BCC
lbl_80318BAC:
    add r10, r4, r7
    addi r6, r6, 0x1
    lbz r10, -0x1(r10)
    addi r8, r8, 0x1
    addi r7, r7, 0x1
    stb r10, 0x0(r28)
    addi r28, r28, 0x1
    bdnz lbl_80318BAC
lbl_80318BCC:
    cmpw r8, r0
    slwi r12, r12, 1
    subi r11, r11, 0x1
    blt lbl_80318A84
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// OSGetFontEncode
// ----------------------------------------------------------------------------
asm void OSGetFontEncode() {
    nofralloc
    lhz r3, lbl_8049D208
    cmplwi r3, 0xffff
    bnelr
    lis r3, 0x8000
    lwz r0, 0xcc(r3)
    cmpwi r0, 0x0
    beq lbl_80318C18
    blt lbl_80318C2C
    b lbl_80318C2C
lbl_80318C18:
    lis r3, 0xcc00
    lhz r0, 0x206e(r3)
    extrwi r0, r0, 1, 30
    sth r0, lbl_8049D208
    b lbl_80318C34
lbl_80318C2C:
    li r0, 0x0
    sth r0, lbl_8049D208
lbl_80318C34:
    lis r4, ParseStringS@ha
    clrlwi r3, r0, 16
    addi r4, r4, ParseStringS@l
    stw r4, lbl_8049E2F0
    blr
}

// ----------------------------------------------------------------------------
// OSSetFontEncode
// ----------------------------------------------------------------------------
asm void OSSetFontEncode() {
    nofralloc
    lhz r0, lbl_8049D208
    cmplwi r0, 0xffff
    beq lbl_80318C58
    b lbl_80318C9C
lbl_80318C58:
    lis r4, 0x8000
    lwz r0, 0xcc(r4)
    cmpwi r0, 0x0
    beq lbl_80318C70
    blt lbl_80318C84
    b lbl_80318C84
lbl_80318C70:
    lis r4, 0xcc00
    lhz r0, 0x206e(r4)
    extrwi r0, r0, 1, 30
    sth r0, lbl_8049D208
    b lbl_80318C8C
lbl_80318C84:
    li r0, 0x0
    sth r0, lbl_8049D208
lbl_80318C8C:
    lis r4, ParseStringS@ha
    clrlwi r0, r0, 16
    addi r4, r4, ParseStringS@l
    stw r4, lbl_8049E2F0
lbl_80318C9C:
    cmplwi cr1, r3, 0x5
    bgt cr1, lbl_80318CC0
    cmplwi r3, 0x3
    sth r3, lbl_8049D208
    blt lbl_80318CC0
    bgt cr1, lbl_80318CC0
    lis r3, ParseStringW@ha
    addi r3, r3, ParseStringW@l
    stw r3, lbl_8049E2F0
lbl_80318CC0:
    mr r3, r0
    blr
}

// ----------------------------------------------------------------------------
// ReadFont
// ----------------------------------------------------------------------------
asm void ReadFont() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmplwi r4, 0x1
    mr r28, r3
    mr r29, r4
    mr r26, r5
    bne lbl_80318D48
    lis r4, 0x1b
    lis r3, 0x5
    mr r27, r28
    subi r31, r4, 0x100
    subi r30, r3, 0x3000
    b lbl_80318D3C
lbl_80318D08:
    cmpwi r30, 0x100
    li r25, 0x100
    bgt lbl_80318D18
    mr r25, r30
lbl_80318D18:
    subf r30, r25, r30
lbl_80318D1C:
    mr r3, r27
    mr r4, r25
    mr r5, r31
    bl __OSReadROM
    cmpwi r3, 0x0
    beq lbl_80318D1C
    add r31, r31, r25
    add r27, r27, r25
lbl_80318D3C:
    cmpwi r30, 0x0
    bgt lbl_80318D08
    b lbl_80318D98
lbl_80318D48:
    lis r3, 0x20
    mr r27, r28
    subi r31, r3, 0x3100
    li r30, 0x3000
    b lbl_80318D90
lbl_80318D5C:
    cmpwi r30, 0x100
    li r25, 0x100
    bgt lbl_80318D6C
    mr r25, r30
lbl_80318D6C:
    subf r30, r25, r30
lbl_80318D70:
    mr r3, r27
    mr r4, r25
    mr r5, r31
    bl __OSReadROM
    cmpwi r3, 0x0
    beq lbl_80318D70
    add r31, r31, r25
    add r27, r27, r25
lbl_80318D90:
    cmpwi r30, 0x0
    bgt lbl_80318D5C
lbl_80318D98:
    lbz r0, 0x0(r28)
    cmplwi r0, 0x59
    bne lbl_80318DC4
    lbz r0, 0x1(r28)
    cmplwi r0, 0x61
    bne lbl_80318DC4
    lbz r0, 0x2(r28)
    cmplwi r0, 0x79
    bne lbl_80318DC4
    lwz r27, 0x4(r28)
    b lbl_80318DC8
lbl_80318DC4:
    li r27, 0x0
lbl_80318DC8:
    cmpwi r27, 0x0
    bne lbl_80318DD8
    li r3, 0x0
    b lbl_80318FB0
lbl_80318DD8:
    mr r3, r28
    mr r4, r26
    bl Decode
    cmplwi r29, 0x1
    bne lbl_80318FAC
    mr r3, r29
    lhz r28, lbl_804A27A8
    lhz r29, lbl_804A27AA
    li r4, 0x54
    lhz r30, lbl_804A27AC
    lhz r31, lbl_804A27AE
    bl GetFontCode
    lhz r9, 0x1a(r26)
    lhz r4, 0x1c(r26)
    lhz r0, 0x1e(r26)
    mullw r10, r9, r4
    lwz r5, 0x24(r26)
    extlwi r4, r0, 27, 2
    lhz r6, 0x12(r26)
    extrwi r0, r0, 1, 2
    lhz r7, 0x10(r26)
    divw r12, r3, r10
    add r0, r0, r4
    add r4, r26, r5
    lwz r8, 0x14(r26)
    srawi r11, r0, 1
    mullw r0, r12, r10
    subf r3, r0, r3
    divw r5, r3, r9
    mullw r0, r5, r9
    mullw r5, r5, r6
    subf r25, r0, r3
    addi r6, r5, 0x4
    mullw r25, r25, r7
    addi r10, r5, 0x5
    srawi r3, r6, 3
    slwi r0, r6, 29
    addze r9, r3
    srwi r7, r6, 31
    mullw r12, r12, r8
    srawi r3, r25, 3
    subf r0, r7, r0
    addze r8, r3
    rotlwi r3, r0, 3
    slwi r0, r25, 29
    srwi r6, r25, 31
    srwi r12, r12, 1
    mullw r9, r11, r9
    add r7, r3, r7
    subf r0, r6, r0
    add r4, r4, r12
    rotlwi r3, r0, 3
    slwi r0, r8, 4
    add r3, r3, r6
    add r9, r4, r9
    slwi r8, r7, 1
    slwi r6, r10, 29
    srawi r3, r3, 2
    add r9, r9, r0
    add r9, r9, r8
    srwi r7, r10, 31
    addze r3, r3
    addi r8, r5, 0x6
    sthx r28, r9, r3
    subf r6, r7, r6
    rotlwi r6, r6, 3
    add r6, r6, r7
    lhz r11, 0x1e(r26)
    slwi r9, r6, 1
    srwi r7, r8, 31
    extlwi r12, r11, 27, 2
    extrwi r11, r11, 1, 2
    add r11, r11, r12
    slwi r6, r8, 29
    srawi r11, r11, 1
    srawi r10, r10, 3
    subf r6, r7, r6
    addze r10, r10
    rotlwi r6, r6, 3
    add r6, r6, r7
    mullw r10, r11, r10
    slwi r6, r6, 1
    add r7, r4, r10
    add r7, r7, r0
    add r7, r7, r9
    sthx r29, r7, r3
    lhz r7, 0x1e(r26)
    extlwi r9, r7, 27, 2
    extrwi r7, r7, 1, 2
    add r7, r7, r9
    srawi r9, r7, 1
    srawi r7, r8, 3
    addze r7, r7
    mullw r7, r9, r7
    add r7, r4, r7
    add r7, r7, r0
    add r7, r7, r6
    sthx r30, r7, r3
    addi r7, r5, 0x7
    slwi r5, r7, 29
    lhz r8, 0x1e(r26)
    srwi r6, r7, 31
    subf r5, r6, r5
    extlwi r9, r8, 27, 2
    extrwi r8, r8, 1, 2
    add r8, r8, r9
    rotlwi r5, r5, 3
    srawi r8, r8, 1
    srawi r7, r7, 3
    add r5, r5, r6
    addze r6, r7
    mullw r6, r8, r6
    slwi r5, r5, 1
    add r4, r4, r6
    add r4, r4, r0
    add r4, r4, r5
    sthx r31, r4, r3
lbl_80318FAC:
    mr r3, r27
lbl_80318FB0:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// OSLoadFont
// ----------------------------------------------------------------------------
asm void OSLoadFont() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lhz r0, lbl_8049D208
    cmplwi r0, 0xffff
    beq lbl_80318FF4
    b lbl_80319038
lbl_80318FF4:
    lis r4, 0x8000
    lwz r0, 0xcc(r4)
    cmpwi r0, 0x0
    beq lbl_8031900C
    blt lbl_80319020
    b lbl_80319020
lbl_8031900C:
    lis r4, 0xcc00
    lhz r0, 0x206e(r4)
    extrwi r0, r0, 1, 30
    sth r0, lbl_8049D208
    b lbl_80319028
lbl_80319020:
    li r0, 0x0
    sth r0, lbl_8049D208
lbl_80319028:
    lis r4, ParseStringS@ha
    clrlwi r0, r0, 16
    addi r4, r4, ParseStringS@l
    stw r4, lbl_8049E2F0
lbl_80319038:
    clrlwi r0, r0, 16
    cmpwi r0, 0x2
    beq lbl_803190D0
    bge lbl_80319058
    cmpwi r0, 0x0
    beq lbl_80319064
    bge lbl_8031907C
    b lbl_803190D0
lbl_80319058:
    cmpwi r0, 0x6
    bge lbl_803190D0
    b lbl_80319094
lbl_80319064:
    stw r3, lbl_8049E2FC
    mr r3, r30
    li r4, 0x0
    bl ReadFont
    mr r31, r3
    b lbl_803190D4
lbl_8031907C:
    stw r3, lbl_8049E2F8
    mr r3, r30
    li r4, 0x1
    bl ReadFont
    mr r31, r3
    b lbl_803190D4
lbl_80319094:
    stw r3, lbl_8049E2FC
    mr r3, r30
    li r4, 0x0
    bl ReadFont
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_803190D4
    lwz r0, lbl_8049E2FC
    li r4, 0x1
    add r5, r0, r3
    mr r3, r30
    stw r5, lbl_8049E2F8
    bl ReadFont
    add r31, r31, r3
    b lbl_803190D4
lbl_803190D0:
    li r31, 0x0
lbl_803190D4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// ParseStringS
// ----------------------------------------------------------------------------
asm void ParseStringS() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x1
    li r7, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_80319140
    bge lbl_803191C0
    cmpwi r3, 0x0
    bge lbl_80319128
    b lbl_803191C0
lbl_80319128:
    lbz r7, 0x0(r4)
    lwz r6, lbl_8049E2FC
    cmpwi r7, 0x0
    beq lbl_803191C0
    addi r30, r4, 0x1
    b lbl_803191C0
lbl_80319140:
    lbz r7, 0x0(r4)
    lwz r6, lbl_8049E2F8
    cmpwi r7, 0x0
    beq lbl_803191C0
    cmplwi r7, 0x81
    addi r30, r4, 0x1
    li r0, 0x0
    blt lbl_80319168
    cmplwi r7, 0x9f
    ble lbl_80319178
lbl_80319168:
    cmplwi r7, 0xe0
    blt lbl_8031917C
    cmplwi r7, 0xfc
    bgt lbl_8031917C
lbl_80319178:
    li r0, 0x1
lbl_8031917C:
    cmpwi r0, 0x0
    beq lbl_803191C0
    lbz r4, 0x0(r30)
    li r0, 0x0
    cmplwi r4, 0x40
    blt lbl_803191A8
    cmplwi r4, 0xfc
    bgt lbl_803191A8
    cmplwi r4, 0x7f
    beq lbl_803191A8
    li r0, 0x1
lbl_803191A8:
    cmpwi r0, 0x0
    beq lbl_803191C0
    lbz r0, 0x0(r30)
    rlwimi r0, r7, 8, 8, 23
    addi r30, r30, 0x1
    clrlwi r7, r0, 16
lbl_803191C0:
    stw r6, 0x0(r5)
    mr r4, r7
    bl GetFontCode
    stw r3, 0x0(r31)
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// ParseStringW
// ----------------------------------------------------------------------------
asm void ParseStringW() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    li r30, 0x0
    cmpwi r3, 0x3
    stw r30, 0x8(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    beq lbl_803192E8
    bge lbl_8031923C
    cmpwi r3, 0x1
    beq lbl_80319264
    bge lbl_80319324
    cmpwi r3, 0x0
    bge lbl_8031924C
    b lbl_80319324
lbl_8031923C:
    cmpwi r3, 0x5
    beq lbl_80319310
    bge lbl_80319324
    b lbl_803192FC
lbl_8031924C:
    lbz r30, 0x0(r4)
    lwz r31, lbl_8049E2FC
    cmpwi r30, 0x0
    beq lbl_80319324
    addi r27, r4, 0x1
    b lbl_80319324
lbl_80319264:
    lbz r30, 0x0(r4)
    lwz r31, lbl_8049E2F8
    cmpwi r30, 0x0
    beq lbl_80319324
    cmplwi r30, 0x81
    addi r27, r4, 0x1
    li r0, 0x0
    blt lbl_8031928C
    cmplwi r30, 0x9f
    ble lbl_8031929C
lbl_8031928C:
    cmplwi r30, 0xe0
    blt lbl_803192A0
    cmplwi r30, 0xfc
    bgt lbl_803192A0
lbl_8031929C:
    li r0, 0x1
lbl_803192A0:
    cmpwi r0, 0x0
    beq lbl_80319324
    lbz r3, 0x0(r27)
    li r0, 0x0
    cmplwi r3, 0x40
    blt lbl_803192CC
    cmplwi r3, 0xfc
    bgt lbl_803192CC
    cmplwi r3, 0x7f
    beq lbl_803192CC
    li r0, 0x1
lbl_803192CC:
    cmpwi r0, 0x0
    beq lbl_80319324
    lbz r0, 0x0(r27)
    rlwimi r0, r30, 8, 8, 23
    addi r27, r27, 0x1
    clrlwi r30, r0, 16
    b lbl_80319324
lbl_803192E8:
    mr r3, r27
    addi r4, r1, 0x8
    bl fn_8031E248
    mr r27, r3
    b lbl_80319324
lbl_803192FC:
    mr r3, r27
    addi r4, r1, 0x8
    bl fn_8031E358
    mr r27, r3
    b lbl_80319324
lbl_80319310:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    stw r0, 0x8(r1)
    beq lbl_80319324
    addi r27, r4, 0x4
lbl_80319324:
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_80319378
    lwz r31, lbl_8049E2FC
    li r26, 0x0
    bl fn_8031E3C8
    clrlwi. r30, r3, 24
    beq lbl_8031935C
    lwz r0, lbl_8049E2F4
    cmpwi r0, 0x0
    beq lbl_80319378
    lwz r0, 0x8(r1)
    cmplwi r0, 0x7f
    bgt lbl_80319378
lbl_8031935C:
    lwz r3, 0x8(r1)
    bl fn_8031E440
    clrlwi. r0, r3, 16
    mr r30, r3
    beq lbl_80319378
    li r26, 0x1
    lwz r31, lbl_8049E2F8
lbl_80319378:
    stw r31, 0x0(r28)
    mr r3, r26
    clrlwi r4, r30, 16
    bl GetFontCode
    stw r3, 0x0(r29)
    addi r11, r1, 0x30
    mr r3, r27
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// OSGetFontTexel
// ----------------------------------------------------------------------------
asm void OSGetFontTexel() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_17
    lhz r0, lbl_8049D208
    mr r29, r4
    mr r30, r5
    mr r17, r6
    cmplwi r0, 0xffff
    mr r31, r7
    beq lbl_803193DC
    b lbl_80319420
lbl_803193DC:
    lis r4, 0x8000
    lwz r0, 0xcc(r4)
    cmpwi r0, 0x0
    beq lbl_803193F4
    blt lbl_80319408
    b lbl_80319408
lbl_803193F4:
    lis r4, 0xcc00
    lhz r0, 0x206e(r4)
    extrwi r0, r0, 1, 30
    sth r0, lbl_8049D208
    b lbl_80319410
lbl_80319408:
    li r0, 0x0
    sth r0, lbl_8049D208
lbl_80319410:
    lis r4, ParseStringS@ha
    clrlwi r0, r0, 16
    addi r4, r4, ParseStringS@l
    stw r4, lbl_8049E2F0
lbl_80319420:
    lwz r12, lbl_8049E2F0
    mr r4, r3
    clrlwi r3, r0, 16
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mtctr r12
    bctrl
    lwz r4, 0xc(r1)
    slwi r0, r17, 2
    srawi r0, r0, 3
    lwz r11, 0x8(r1)
    lhz r9, 0x1a(r4)
    addze r0, r0
    lhz r5, 0x1c(r4)
    slwi r8, r0, 5
    lwz r6, 0x24(r4)
    addi r23, r4, 0x2c
    mullw r10, r9, r5
    lwz r5, 0x14(r4)
    add r22, r4, r6
    lhz r7, 0x12(r4)
    lhz r6, 0x10(r4)
    li r24, 0x0
    divw r12, r11, r10
    mullw r0, r12, r10
    subf r11, r0, r11
    divw r10, r11, r9
    mullw r9, r10, r9
    mullw r0, r12, r5
    subf r26, r9, r11
    srwi r0, r0, 1
    mullw r27, r10, r7
    add r22, r22, r0
    mullw r26, r26, r6
    b lbl_803195F4
lbl_803194AC:
    add r7, r27, r24
    slwi r0, r24, 29
    srawi r5, r7, 3
    srwi r4, r24, 31
    addze r9, r5
    slwi r6, r7, 29
    srawi r5, r24, 3
    srwi r7, r7, 31
    addze r5, r5
    subf r0, r4, r0
    mullw r5, r5, r8
    subf r6, r7, r6
    rotlwi r0, r0, 3
    rotlwi r6, r6, 3
    add r0, r0, r4
    add r4, r6, r7
    slwi r10, r4, 1
    add r11, r29, r5
    slwi r12, r0, 2
    li r25, 0x0
    b lbl_803195E0
lbl_80319500:
    lhz r4, 0x1e(r4)
    add r28, r30, r25
    add r5, r26, r25
    li r0, 0xf0
    extlwi r6, r4, 27, 2
    extrwi r4, r4, 1, 2
    add r4, r4, r6
    slwi r20, r28, 29
    srawi r7, r4, 1
    srwi r19, r28, 31
    mullw r7, r7, r9
    slwi r6, r5, 29
    srwi r4, r5, 31
    srawi r18, r5, 3
    subf r6, r4, r6
    clrlwi r21, r28, 31
    rotlwi r17, r6, 3
    addze r6, r18
    add r17, r17, r4
    subf r20, r19, r20
    xor r21, r21, r19
    slwi r5, r5, 30
    srawi r18, r17, 2
    rotlwi r20, r20, 3
    subf r17, r4, r5
    subf. r21, r19, r21
    addze r5, r18
    add r20, r20, r19
    srawi r18, r28, 3
    rotlwi r17, r17, 2
    add r7, r22, r7
    slwi r6, r6, 4
    add r7, r7, r6
    addze r19, r18
    add r7, r7, r10
    srwi r21, r20, 31
    add r28, r17, r4
    slwi r6, r19, 5
    add r4, r21, r20
    lbzx r7, r7, r5
    add r6, r11, r6
    slwi r21, r28, 1
    srawi r4, r4, 1
    subfic r5, r21, 0x6
    add r6, r6, r12
    sraw r5, r7, r5
    lbzx r7, r6, r4
    clrlwi r5, r5, 30
    lbzx r5, r23, r5
    beq lbl_803195CC
    li r0, 0xf
lbl_803195CC:
    and r0, r5, r0
    addi r25, r25, 0x1
    clrlwi r0, r0, 24
    or r0, r7, r0
    stbx r0, r6, r4
lbl_803195E0:
    lwz r4, 0xc(r1)
    lhz r0, 0x10(r4)
    cmpw r25, r0
    blt lbl_80319500
    addi r24, r24, 0x1
lbl_803195F4:
    lhz r0, 0x12(r4)
    cmpw r24, r0
    blt lbl_803194AC
    cmpwi r31, 0x0
    beq lbl_80319620
    lwz r5, 0xc(r1)
    lwz r4, 0x8(r1)
    lhz r0, 0x22(r5)
    add r0, r5, r0
    lbzx r0, r4, r0
    stw r0, 0x0(r31)
lbl_80319620:
    addi r11, r1, 0x50
    bl _restgpr_17
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// ExpandFontSheet
// ----------------------------------------------------------------------------
asm void ExpandFontSheet() {
    nofralloc
    lhz r0, 0x18(r3)
    addi r6, r3, 0x2c
    cmpwi r0, 0x0
    bne lbl_80319770
    lwz r7, 0x28(r3)
    srwi r0, r7, 31
    add r0, r0, r7
    srawi r7, r0, 1
    subic. r8, r7, 0x1
    add r7, r4, r8
    slwi r9, r8, 1
    addi r4, r8, 0x1
    blt lbl_80319898
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_80319718
lbl_80319678:
    lbz r0, 0x0(r7)
    add r10, r5, r9
    extrwi r8, r0, 2, 24
    extrwi r0, r0, 2, 26
    lbzx r0, r6, r0
    lbzx r8, r6, r8
    clrlwi r0, r0, 28
    rlwimi r0, r8, 0, 24, 27
    stbx r0, r5, r9
    subi r9, r9, 0x2
    lbz r0, 0x0(r7)
    extrwi r8, r0, 2, 28
    clrlwi r0, r0, 30
    lbzx r0, r6, r0
    lbzx r8, r6, r8
    clrlwi r0, r0, 28
    rlwimi r0, r8, 0, 24, 27
    stb r0, 0x1(r10)
    add r10, r5, r9
    lbz r0, -0x1(r7)
    extrwi r8, r0, 2, 24
    extrwi r0, r0, 2, 26
    lbzx r0, r6, r0
    lbzx r8, r6, r8
    clrlwi r0, r0, 28
    rlwimi r0, r8, 0, 24, 27
    stbx r0, r5, r9
    subi r9, r9, 0x2
    lbz r0, -0x1(r7)
    subi r7, r7, 0x2
    extrwi r8, r0, 2, 28
    clrlwi r0, r0, 30
    lbzx r0, r6, r0
    lbzx r8, r6, r8
    clrlwi r0, r0, 28
    rlwimi r0, r8, 0, 24, 27
    stb r0, 0x1(r10)
    bdnz lbl_80319678
    andi. r4, r4, 0x1
    beq lbl_80319898
lbl_80319718:
    mtctr r4
lbl_8031971C:
    lbz r0, 0x0(r7)
    add r10, r5, r9
    extrwi r8, r0, 2, 24
    extrwi r0, r0, 2, 26
    lbzx r0, r6, r0
    lbzx r8, r6, r8
    clrlwi r0, r0, 28
    rlwimi r0, r8, 0, 24, 27
    stbx r0, r5, r9
    subi r9, r9, 0x2
    lbz r0, 0x0(r7)
    subi r7, r7, 0x1
    extrwi r8, r0, 2, 28
    clrlwi r0, r0, 30
    lbzx r0, r6, r0
    lbzx r8, r6, r8
    clrlwi r0, r0, 28
    rlwimi r0, r8, 0, 24, 27
    stb r0, 0x1(r10)
    bdnz lbl_8031971C
    b lbl_80319898
lbl_80319770:
    cmplwi r0, 0x2
    bne lbl_80319898
    lwz r0, 0x28(r3)
    srawi r0, r0, 2
    addze r7, r0
    subic. r9, r7, 0x1
    add r7, r4, r9
    slwi r8, r9, 2
    addi r4, r9, 0x1
    blt lbl_80319898
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_80319844
lbl_803197A4:
    lbz r0, 0x0(r7)
    add r9, r5, r8
    extrwi r0, r0, 2, 24
    lbzx r0, r6, r0
    stbx r0, r5, r8
    subi r8, r8, 0x4
    lbz r0, 0x0(r7)
    extrwi r0, r0, 2, 26
    lbzx r0, r6, r0
    stb r0, 0x1(r9)
    lbz r0, 0x0(r7)
    extrwi r0, r0, 2, 28
    lbzx r0, r6, r0
    stb r0, 0x2(r9)
    lbz r0, 0x0(r7)
    clrlwi r0, r0, 30
    lbzx r0, r6, r0
    stb r0, 0x3(r9)
    add r9, r5, r8
    lbz r0, -0x1(r7)
    extrwi r0, r0, 2, 24
    lbzx r0, r6, r0
    stbx r0, r5, r8
    subi r8, r8, 0x4
    lbz r0, -0x1(r7)
    extrwi r0, r0, 2, 26
    lbzx r0, r6, r0
    stb r0, 0x1(r9)
    lbz r0, -0x1(r7)
    extrwi r0, r0, 2, 28
    lbzx r0, r6, r0
    stb r0, 0x2(r9)
    lbz r0, -0x1(r7)
    subi r7, r7, 0x2
    clrlwi r0, r0, 30
    lbzx r0, r6, r0
    stb r0, 0x3(r9)
    bdnz lbl_803197A4
    andi. r4, r4, 0x1
    beq lbl_80319898
lbl_80319844:
    mtctr r4
lbl_80319848:
    lbz r0, 0x0(r7)
    add r9, r5, r8
    extrwi r0, r0, 2, 24
    lbzx r0, r6, r0
    stbx r0, r5, r8
    subi r8, r8, 0x4
    lbz r0, 0x0(r7)
    extrwi r0, r0, 2, 26
    lbzx r0, r6, r0
    stb r0, 0x1(r9)
    lbz r0, 0x0(r7)
    extrwi r0, r0, 2, 28
    lbzx r0, r6, r0
    stb r0, 0x2(r9)
    lbz r0, 0x0(r7)
    subi r7, r7, 0x1
    clrlwi r0, r0, 30
    lbzx r0, r6, r0
    stb r0, 0x3(r9)
    bdnz lbl_80319848
lbl_80319898:
    lwz r4, 0x28(r3)
    mr r3, r5
    b fn_803150C4
}

// ----------------------------------------------------------------------------
// OSInitFont
// ----------------------------------------------------------------------------
asm void OSInitFont() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lhz r0, lbl_8049D208
    cmplwi r0, 0xffff
    beq lbl_803198C8
    b lbl_8031990C
lbl_803198C8:
    lis r4, 0x8000
    lwz r0, 0xcc(r4)
    cmpwi r0, 0x0
    beq lbl_803198E0
    blt lbl_803198F4
    b lbl_803198F4
lbl_803198E0:
    lis r4, 0xcc00
    lhz r0, 0x206e(r4)
    extrwi r0, r0, 1, 30
    sth r0, lbl_8049D208
    b lbl_803198FC
lbl_803198F4:
    li r0, 0x0
    sth r0, lbl_8049D208
lbl_803198FC:
    lis r4, ParseStringS@ha
    clrlwi r0, r0, 16
    addi r4, r4, ParseStringS@l
    stw r4, lbl_8049E2F0
lbl_8031990C:
    clrlwi r0, r0, 16
    cmpwi r0, 0x2
    beq lbl_80319A7C
    bge lbl_8031992C
    cmpwi r0, 0x0
    beq lbl_80319938
    bge lbl_80319988
    b lbl_80319A7C
lbl_8031992C:
    cmpwi r0, 0x6
    bge lbl_80319A7C
    b lbl_803199D8
lbl_80319938:
    stw r3, lbl_8049E2FC
    addis r3, r3, 0x2
    li r4, 0x0
    subi r3, r3, 0x2ee0
    bl ReadFont
    cmpwi r3, 0x0
    bne lbl_8031995C
    li r3, 0x0
    b lbl_80319A80
lbl_8031995C:
    lwz r5, lbl_8049E2FC
    lwz r3, 0x24(r5)
    addi r0, r3, 0x1f
    add r4, r5, r3
    clrrwi r0, r0, 5
    stw r0, 0x24(r5)
    lwz r3, lbl_8049E2FC
    lwz r0, 0x24(r3)
    add r5, r3, r0
    bl ExpandFontSheet
    b lbl_80319A7C
lbl_80319988:
    stw r3, lbl_8049E2F8
    addis r3, r3, 0xd
    li r4, 0x1
    addi r3, r3, 0x3f00
    bl ReadFont
    cmpwi r3, 0x0
    bne lbl_803199AC
    li r3, 0x0
    b lbl_80319A80
lbl_803199AC:
    lwz r5, lbl_8049E2F8
    lwz r3, 0x24(r5)
    addi r0, r3, 0x1f
    add r4, r5, r3
    clrrwi r0, r0, 5
    stw r0, 0x24(r5)
    lwz r3, lbl_8049E2F8
    lwz r0, 0x24(r3)
    add r5, r3, r0
    bl ExpandFontSheet
    b lbl_80319A7C
lbl_803199D8:
    addis r31, r3, 0xf
    stw r3, lbl_8049E2FC
    addi r31, r31, 0x4020
    li r4, 0x0
    mr r3, r31
    bl ReadFont
    cmpwi r3, 0x0
    bne lbl_80319A00
    li r3, 0x0
    b lbl_80319A80
lbl_80319A00:
    lwz r5, lbl_8049E2FC
    lwz r3, 0x24(r5)
    addi r0, r3, 0x1f
    add r4, r5, r3
    clrrwi r0, r0, 5
    stw r0, 0x24(r5)
    lwz r3, lbl_8049E2FC
    lwz r0, 0x24(r3)
    add r5, r3, r0
    bl ExpandFontSheet
    lwz r5, lbl_8049E2FC
    mr r3, r31
    li r4, 0x1
    addis r5, r5, 0x2
    addi r5, r5, 0x120
    stw r5, lbl_8049E2F8
    bl ReadFont
    cmpwi r3, 0x0
    bne lbl_80319A54
    li r3, 0x0
    b lbl_80319A80
lbl_80319A54:
    lwz r5, lbl_8049E2F8
    lwz r3, 0x24(r5)
    addi r0, r3, 0x1f
    add r4, r5, r3
    clrrwi r0, r0, 5
    stw r0, 0x24(r5)
    lwz r3, lbl_8049E2F8
    lwz r0, 0x24(r3)
    add r5, r3, r0
    bl ExpandFontSheet
lbl_80319A7C:
    li r3, 0x1
lbl_80319A80:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// OSGetFontTexture
// ----------------------------------------------------------------------------
asm void OSGetFontTexture() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r7
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lhz r0, lbl_8049D208
    cmplwi r0, 0xffff
    beq lbl_80319AD0
    b lbl_80319B14
lbl_80319AD0:
    lis r4, 0x8000
    lwz r0, 0xcc(r4)
    cmpwi r0, 0x0
    beq lbl_80319AE8
    blt lbl_80319AFC
    b lbl_80319AFC
lbl_80319AE8:
    lis r4, 0xcc00
    lhz r0, 0x206e(r4)
    extrwi r0, r0, 1, 30
    sth r0, lbl_8049D208
    b lbl_80319B04
lbl_80319AFC:
    li r0, 0x0
    sth r0, lbl_8049D208
lbl_80319B04:
    lis r4, ParseStringS@ha
    clrlwi r0, r0, 16
    addi r4, r4, ParseStringS@l
    stw r4, lbl_8049E2F0
lbl_80319B14:
    lwz r12, lbl_8049E2F0
    mr r4, r3
    clrlwi r3, r0, 16
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    mtctr r12
    bctrl
    lwz r7, 0xc(r1)
    cmpwi r31, 0x0
    lwz r6, 0x8(r1)
    lhz r5, 0x1a(r7)
    lhz r4, 0x1c(r7)
    lwz r0, 0x24(r7)
    mullw r5, r5, r4
    lwz r4, 0x14(r7)
    add r0, r7, r0
    divw r6, r6, r5
    mullw r4, r4, r6
    add r0, r4, r0
    stw r0, 0x0(r28)
    lwz r8, 0xc(r1)
    lwz r4, 0x8(r1)
    lhz r7, 0x1a(r8)
    lhz r5, 0x1c(r8)
    mullw r6, r6, r7
    lhz r0, 0x10(r8)
    mullw r5, r6, r5
    subf r5, r5, r4
    divw r6, r5, r7
    mullw r4, r6, r7
    subf r4, r4, r5
    mullw r0, r4, r0
    stw r0, 0x0(r29)
    lwz r4, 0xc(r1)
    lhz r0, 0x12(r4)
    mullw r0, r6, r0
    stw r0, 0x0(r30)
    beq lbl_80319BC4
    lwz r5, 0xc(r1)
    lwz r4, 0x8(r1)
    lhz r0, 0x22(r5)
    add r0, r5, r0
    lbzx r0, r4, r0
    stw r0, 0x0(r31)
lbl_80319BC4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

