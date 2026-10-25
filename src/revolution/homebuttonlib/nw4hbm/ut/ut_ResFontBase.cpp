#include "types.h"

// Translation unit: src/revolution/homebuttonlib/nw4hbm/ut/ut_ResFontBase.cpp
// Total functions: 24

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8037DE00[];
extern "C" u8 lbl_8037DE10[];
extern "C" u8 lbl_8037DE68[];

// Forward declarations
extern "C" void FindGlyphIndex__Q46nw4hbm2ut6detail11ResFontBaseCFPCQ36nw4hbm2ut11FontCodeMapUs();
extern "C" void GetAscent__Q46nw4hbm2ut6detail11ResFontBaseCFv();
extern "C" void GetBaselinePos__Q46nw4hbm2ut6detail11ResFontBaseCFv();
extern "C" void GetCellHeight__Q46nw4hbm2ut6detail11ResFontBaseCFv();
extern "C" void GetCellWidth__Q46nw4hbm2ut6detail11ResFontBaseCFv();
extern "C" void GetCharWidth__Q46nw4hbm2ut6detail11ResFontBaseCFUs();
extern "C" void GetCharWidths__Q46nw4hbm2ut6detail11ResFontBaseCFUs();
extern "C" void GetDefaultCharWidths__Q46nw4hbm2ut6detail11ResFontBaseCFv();
extern "C" void GetDescent__Q46nw4hbm2ut6detail11ResFontBaseCFv();
extern "C" void GetEncoding__Q46nw4hbm2ut6detail11ResFontBaseCFv();
extern "C" void GetGlyphFromIndex__Q46nw4hbm2ut6detail11ResFontBaseCFPQ36nw4hbm2ut5GlyphUs();
extern "C" void GetGlyph__Q46nw4hbm2ut6detail11ResFontBaseCFPQ36nw4hbm2ut5GlyphUs();
extern "C" void GetHeight__Q46nw4hbm2ut6detail11ResFontBaseCFv();
extern "C" void GetLineFeed__Q46nw4hbm2ut6detail11ResFontBaseCFv();
extern "C" void GetMaxCharWidth__Q46nw4hbm2ut6detail11ResFontBaseCFv();
extern "C" void GetTextureFormat__Q46nw4hbm2ut6detail11ResFontBaseCFv();
extern "C" void GetType__Q46nw4hbm2ut6detail11ResFontBaseCFv();
extern "C" void GetWidth__Q46nw4hbm2ut6detail11ResFontBaseCFv();
extern "C" void SetAlternateChar__Q46nw4hbm2ut6detail11ResFontBaseFUs();
extern "C" void SetDefaultCharWidths__Q46nw4hbm2ut6detail11ResFontBaseFRCQ36nw4hbm2ut10CharWidths();
extern "C" void SetLineFeed__Q46nw4hbm2ut6detail11ResFontBaseFi();
extern "C" void SetResourceBuffer__Q46nw4hbm2ut6detail11ResFontBaseFPvPQ36nw4hbm2ut15FontInformation();
extern "C" void __ct__Q46nw4hbm2ut6detail11ResFontBaseFv();
extern "C" void __dt__Q46nw4hbm2ut6detail11ResFontBaseFv();
extern "C" void dtor_80136CFC();

// ----------------------------------------------------------------------------
// __ct__Q46nw4hbm2ut6detail11ResFontBaseFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q46nw4hbm2ut6detail11ResFontBaseFv() {
    nofralloc
    lis r5, lbl_8037DE68@ha
    lis r4, lbl_8037DE10@ha
    addi r5, r5, lbl_8037DE68@l
    lis r7, lbl_8037DE00@ha
    stw r5, 0x0(r3)
    addi r4, r4, lbl_8037DE10@l
    li r0, 0x0
    lwzu r6, lbl_8037DE00@l(r7)
    lwz r5, 0x4(r7)
    stw r6, 0x4(r3)
    stw r5, 0x8(r3)
    lwz r5, 0x8(r7)
    stw r5, 0xc(r3)
    stw r4, 0x0(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q46nw4hbm2ut6detail11ResFontBaseFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q46nw4hbm2ut6detail11ResFontBaseFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_802FF7E4
    cmpwi r4, 0x0
    ble lbl_802FF7E4
    bl dtor_80136CFC
lbl_802FF7E4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetResourceBuffer__Q46nw4hbm2ut6detail11ResFontBaseFPvPQ36nw4hbm2ut15FontInformation
// ----------------------------------------------------------------------------
extern "C" asm void SetResourceBuffer__Q46nw4hbm2ut6detail11ResFontBaseFPvPQ36nw4hbm2ut15FontInformation() {
    nofralloc
    stw r4, 0x10(r3)
    stw r5, 0x14(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetWidth__Q46nw4hbm2ut6detail11ResFontBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetWidth__Q46nw4hbm2ut6detail11ResFontBaseCFv() {
    nofralloc
    lwz r3, 0x14(r3)
    lbz r3, 0x15(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetHeight__Q46nw4hbm2ut6detail11ResFontBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetHeight__Q46nw4hbm2ut6detail11ResFontBaseCFv() {
    nofralloc
    lwz r3, 0x14(r3)
    lbz r3, 0x14(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetAscent__Q46nw4hbm2ut6detail11ResFontBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetAscent__Q46nw4hbm2ut6detail11ResFontBaseCFv() {
    nofralloc
    lwz r3, 0x14(r3)
    lbz r3, 0x16(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetDescent__Q46nw4hbm2ut6detail11ResFontBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetDescent__Q46nw4hbm2ut6detail11ResFontBaseCFv() {
    nofralloc
    lwz r4, 0x14(r3)
    lbz r3, 0x16(r4)
    lbz r0, 0x14(r4)
    subf r3, r3, r0
    blr
}

// ----------------------------------------------------------------------------
// GetBaselinePos__Q46nw4hbm2ut6detail11ResFontBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetBaselinePos__Q46nw4hbm2ut6detail11ResFontBaseCFv() {
    nofralloc
    lwz r3, 0x14(r3)
    lwz r3, 0x8(r3)
    lbz r3, 0x2(r3)
    extsb r3, r3
    blr
}

// ----------------------------------------------------------------------------
// GetCellHeight__Q46nw4hbm2ut6detail11ResFontBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetCellHeight__Q46nw4hbm2ut6detail11ResFontBaseCFv() {
    nofralloc
    lwz r3, 0x14(r3)
    lwz r3, 0x8(r3)
    lbz r3, 0x1(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetCellWidth__Q46nw4hbm2ut6detail11ResFontBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetCellWidth__Q46nw4hbm2ut6detail11ResFontBaseCFv() {
    nofralloc
    lwz r3, 0x14(r3)
    lwz r3, 0x8(r3)
    lbz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetMaxCharWidth__Q46nw4hbm2ut6detail11ResFontBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetMaxCharWidth__Q46nw4hbm2ut6detail11ResFontBaseCFv() {
    nofralloc
    lwz r3, 0x14(r3)
    lwz r3, 0x8(r3)
    lbz r3, 0x3(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetType__Q46nw4hbm2ut6detail11ResFontBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetType__Q46nw4hbm2ut6detail11ResFontBaseCFv() {
    nofralloc
    li r3, 0x2
    blr
}

// ----------------------------------------------------------------------------
// GetTextureFormat__Q46nw4hbm2ut6detail11ResFontBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetTextureFormat__Q46nw4hbm2ut6detail11ResFontBaseCFv() {
    nofralloc
    lwz r3, 0x14(r3)
    lwz r3, 0x8(r3)
    lhz r3, 0xa(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetLineFeed__Q46nw4hbm2ut6detail11ResFontBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetLineFeed__Q46nw4hbm2ut6detail11ResFontBaseCFv() {
    nofralloc
    lwz r3, 0x14(r3)
    lbz r3, 0x1(r3)
    extsb r3, r3
    blr
}

// ----------------------------------------------------------------------------
// GetDefaultCharWidths__Q46nw4hbm2ut6detail11ResFontBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetDefaultCharWidths__Q46nw4hbm2ut6detail11ResFontBaseCFv() {
    nofralloc
    lwz r4, 0x14(r3)
    lhz r0, 0x4(r4)
    slwi r3, r0, 16
    lbz r0, 0x6(r4)
    rlwimi r3, r0, 8, 16, 23
    blr
}

// ----------------------------------------------------------------------------
// SetDefaultCharWidths__Q46nw4hbm2ut6detail11ResFontBaseFRCQ36nw4hbm2ut10CharWidths
// ----------------------------------------------------------------------------
extern "C" asm void SetDefaultCharWidths__Q46nw4hbm2ut6detail11ResFontBaseFRCQ36nw4hbm2ut10CharWidths() {
    nofralloc
    lwz r5, 0x14(r3)
    lbz r0, 0x0(r4)
    lbz r3, 0x1(r4)
    stb r0, 0x4(r5)
    lbz r0, 0x2(r4)
    stb r3, 0x5(r5)
    stb r0, 0x6(r5)
    blr
}

// ----------------------------------------------------------------------------
// SetAlternateChar__Q46nw4hbm2ut6detail11ResFontBaseFUs
// ----------------------------------------------------------------------------
extern "C" asm void SetAlternateChar__Q46nw4hbm2ut6detail11ResFontBaseFUs() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r5, r4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r6, 0x14(r3)
    lwz r6, 0x10(r6)
    b lbl_802FF938
lbl_802FF908:
    lhz r0, 0x0(r6)
    cmplw r0, r4
    bgt lbl_802FF934
    lhz r0, 0x2(r6)
    cmplw r4, r0
    bgt lbl_802FF934
    mr r3, r31
    mr r4, r6
    bl FindGlyphIndex__Q46nw4hbm2ut6detail11ResFontBaseCFPCQ36nw4hbm2ut11FontCodeMapUs
    mr r5, r3
    b lbl_802FF948
lbl_802FF934:
    lwz r6, 0x8(r6)
lbl_802FF938:
    cmpwi r6, 0x0
    bne lbl_802FF908
    lis r3, 0x1
    subi r5, r3, 0x1
lbl_802FF948:
    clrlwi r0, r5, 16
    cmplwi r0, 0xffff
    beq lbl_802FF964
    lwz r4, 0x14(r31)
    li r3, 0x1
    sth r5, 0x2(r4)
    b lbl_802FF968
lbl_802FF964:
    li r3, 0x0
lbl_802FF968:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetLineFeed__Q46nw4hbm2ut6detail11ResFontBaseFi
// ----------------------------------------------------------------------------
extern "C" asm void SetLineFeed__Q46nw4hbm2ut6detail11ResFontBaseFi() {
    nofralloc
    lwz r3, 0x14(r3)
    stb r4, 0x1(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetCharWidth__Q46nw4hbm2ut6detail11ResFontBaseCFUs
// ----------------------------------------------------------------------------
extern "C" asm void GetCharWidth__Q46nw4hbm2ut6detail11ResFontBaseCFUs() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x4c(r12)
    mtctr r12
    bctrl
    srwi r0, r3, 24
    stb r0, 0x8(r1)
    extrwi r0, r3, 8, 8
    stb r0, 0x9(r1)
    extrwi r0, r3, 8, 16
    mr r3, r0
    stb r0, 0xa(r1)
    extsb r3, r3
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetCharWidths__Q46nw4hbm2ut6detail11ResFontBaseCFUs
// ----------------------------------------------------------------------------
extern "C" asm void GetCharWidths__Q46nw4hbm2ut6detail11ResFontBaseCFUs() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r6, 0x14(r3)
    mr r5, r4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r6, 0x10(r6)
    b lbl_802FFA24
lbl_802FF9F8:
    lhz r0, 0x0(r6)
    cmplw r0, r4
    bgt lbl_802FFA20
    lhz r0, 0x2(r6)
    cmplw r4, r0
    bgt lbl_802FFA20
    mr r3, r31
    mr r4, r6
    bl FindGlyphIndex__Q46nw4hbm2ut6detail11ResFontBaseCFPCQ36nw4hbm2ut11FontCodeMapUs
    b lbl_802FFA34
lbl_802FFA20:
    lwz r6, 0x8(r6)
lbl_802FFA24:
    cmpwi r6, 0x0
    bne lbl_802FF9F8
    lis r3, 0x1
    subi r3, r3, 0x1
lbl_802FFA34:
    clrlwi r0, r3, 16
    cmplwi r0, 0xffff
    beq lbl_802FFA44
    b lbl_802FFA4C
lbl_802FFA44:
    lwz r3, 0x14(r31)
    lhz r3, 0x2(r3)
lbl_802FFA4C:
    lwz r6, 0x14(r31)
    clrlwi r3, r3, 16
    lwz r4, 0xc(r6)
    b lbl_802FFA90
lbl_802FFA5C:
    lhz r5, 0x0(r4)
    cmplw r5, r3
    bgt lbl_802FFA8C
    lhz r0, 0x2(r4)
    cmplw r3, r0
    bgt lbl_802FFA8C
    subf r3, r5, r3
    slwi r0, r3, 2
    subf r0, r3, r0
    add r3, r4, r0
    addi r4, r3, 0x8
    b lbl_802FFA9C
lbl_802FFA8C:
    lwz r4, 0x4(r4)
lbl_802FFA90:
    cmpwi r4, 0x0
    bne lbl_802FFA5C
    addi r4, r6, 0x4
lbl_802FFA9C:
    lhz r0, 0x0(r4)
    lwz r31, 0xc(r1)
    slwi r3, r0, 16
    lbz r0, 0x2(r4)
    rlwimi r3, r0, 8, 16, 23
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetGlyph__Q46nw4hbm2ut6detail11ResFontBaseCFPQ36nw4hbm2ut5GlyphUs
// ----------------------------------------------------------------------------
extern "C" asm void GetGlyph__Q46nw4hbm2ut6detail11ResFontBaseCFPQ36nw4hbm2ut5GlyphUs() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r6, 0x14(r3)
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x10(r6)
    b lbl_802FFB14
lbl_802FFAE8:
    lhz r0, 0x0(r4)
    cmplw r0, r5
    bgt lbl_802FFB10
    lhz r0, 0x2(r4)
    cmplw r5, r0
    bgt lbl_802FFB10
    mr r3, r30
    bl FindGlyphIndex__Q46nw4hbm2ut6detail11ResFontBaseCFPCQ36nw4hbm2ut11FontCodeMapUs
    mr r5, r3
    b lbl_802FFB24
lbl_802FFB10:
    lwz r4, 0x8(r4)
lbl_802FFB14:
    cmpwi r4, 0x0
    bne lbl_802FFAE8
    lis r3, 0x1
    subi r5, r3, 0x1
lbl_802FFB24:
    clrlwi r0, r5, 16
    mr r3, r30
    cmplwi r0, 0xffff
    mr r4, r31
    beq lbl_802FFB3C
    b lbl_802FFB44
lbl_802FFB3C:
    lwz r5, 0x14(r30)
    lhz r5, 0x2(r5)
lbl_802FFB44:
    clrlwi r5, r5, 16
    bl GetGlyphFromIndex__Q46nw4hbm2ut6detail11ResFontBaseCFPQ36nw4hbm2ut5GlyphUs
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetEncoding__Q46nw4hbm2ut6detail11ResFontBaseCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetEncoding__Q46nw4hbm2ut6detail11ResFontBaseCFv() {
    nofralloc
    lwz r3, 0x14(r3)
    lbz r3, 0x7(r3)
    blr
}

// ----------------------------------------------------------------------------
// FindGlyphIndex__Q46nw4hbm2ut6detail11ResFontBaseCFPCQ36nw4hbm2ut11FontCodeMapUs
// ----------------------------------------------------------------------------
extern "C" asm void FindGlyphIndex__Q46nw4hbm2ut6detail11ResFontBaseCFPCQ36nw4hbm2ut11FontCodeMapUs() {
    nofralloc
    lhz r0, 0x4(r4)
    lis r3, 0x1
    subi r3, r3, 0x1
    cmpwi r0, 0x1
    beq lbl_802FFBB8
    bge lbl_802FFB94
    cmpwi r0, 0x0
    bge lbl_802FFBA0
    blr
lbl_802FFB94:
    cmpwi r0, 0x3
    bgelr
    b lbl_802FFBD0
lbl_802FFBA0:
    lhz r0, 0x0(r4)
    lhz r3, 0xc(r4)
    subf r0, r0, r5
    add r0, r3, r0
    clrlwi r3, r0, 16
    blr
lbl_802FFBB8:
    lhz r0, 0x0(r4)
    subf r0, r0, r5
    slwi r0, r0, 1
    add r3, r4, r0
    lhz r3, 0xc(r3)
    blr
lbl_802FFBD0:
    addi r6, r4, 0xc
    lhz r4, 0xc(r4)
    addi r7, r6, 0x2
    subi r0, r4, 0x1
    slwi r0, r0, 2
    add r4, r6, r0
    addi r6, r4, 0x2
    b lbl_802FFC38
lbl_802FFBF0:
    subf r0, r7, r6
    srawi r0, r0, 2
    addze r4, r0
    srwi r0, r4, 31
    add r0, r0, r4
    extlwi r0, r0, 30, 1
    add r4, r7, r0
    lhzx r0, r7, r0
    cmplw r0, r5
    bge lbl_802FFC20
    addi r7, r4, 0x4
    b lbl_802FFC38
lbl_802FFC20:
    cmplw r5, r0
    bge lbl_802FFC30
    subi r6, r4, 0x4
    b lbl_802FFC38
lbl_802FFC30:
    lhz r3, 0x2(r4)
    blr
lbl_802FFC38:
    cmplw r7, r6
    ble lbl_802FFBF0
    blr
}

// ----------------------------------------------------------------------------
// GetGlyphFromIndex__Q46nw4hbm2ut6detail11ResFontBaseCFPQ36nw4hbm2ut5GlyphUs
// ----------------------------------------------------------------------------
extern "C" asm void GetGlyphFromIndex__Q46nw4hbm2ut6detail11ResFontBaseCFPQ36nw4hbm2ut5GlyphUs() {
    nofralloc
    stwu r1, -0x10(r1)
    lwz r12, 0x14(r3)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r3, 0x8(r12)
    lhz r31, 0xc(r3)
    lhz r0, 0xe(r3)
    lbz r6, 0x0(r3)
    mullw r9, r31, r0
    lbz r7, 0x1(r3)
    addi r8, r6, 0x1
    lwz r0, 0x4(r3)
    lwz r6, 0x14(r3)
    addi r7, r7, 0x1
    divwu r11, r5, r9
    mullw r9, r11, r9
    subf r30, r9, r5
    divwu r10, r30, r31
    mullw r9, r10, r31
    mullw r0, r11, r0
    subf r9, r9, r30
    add r0, r6, r0
    mullw r8, r9, r8
    stw r0, 0x0(r4)
    lwz r6, 0xc(r12)
    mullw r9, r10, r7
    b lbl_802FFCE4
lbl_802FFCB0:
    lhz r7, 0x0(r6)
    cmplw r7, r5
    bgt lbl_802FFCE0
    lhz r0, 0x2(r6)
    cmplw r5, r0
    bgt lbl_802FFCE0
    subf r5, r7, r5
    slwi r0, r5, 2
    subf r0, r5, r0
    add r5, r6, r0
    addi r7, r5, 0x8
    b lbl_802FFCF0
lbl_802FFCE0:
    lwz r6, 0x4(r6)
lbl_802FFCE4:
    cmpwi r6, 0x0
    bne lbl_802FFCB0
    addi r7, r12, 0x4
lbl_802FFCF0:
    lbz r6, 0x0(r7)
    addi r5, r8, 0x1
    addi r0, r9, 0x1
    stb r6, 0x4(r4)
    lbz r6, 0x1(r7)
    stb r6, 0x5(r4)
    lbz r6, 0x2(r7)
    stb r6, 0x6(r4)
    lbz r6, 0x1(r3)
    stb r6, 0x7(r4)
    lhz r6, 0xa(r3)
    stw r6, 0x8(r4)
    lhz r6, 0x10(r3)
    sth r6, 0xc(r4)
    lhz r3, 0x12(r3)
    sth r3, 0xe(r4)
    sth r5, 0x10(r4)
    sth r0, 0x12(r4)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

