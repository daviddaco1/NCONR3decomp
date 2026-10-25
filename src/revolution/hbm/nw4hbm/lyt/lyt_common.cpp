#include "types.h"

// Translation unit: src/revolution/hbm/nw4hbm/lyt/lyt_common.cpp
// Total functions: 16

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80341E10[];
extern "C" u8 lbl_80341E14[];
extern "C" u8 lbl_80341E18[];
extern "C" u8 lbl_80462410[];
extern "C" u8 lbl_80462418[];
extern "C" u8 lbl_80462438[];

// Forward declarations
extern "C" void Copy__Q46nw4hbm3lyt6detail11TexCoordAryFPCvUc();
extern "C" void DrawQuad__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeUcPA4_CQ36nw4hbm4math4VEC2PCQ36nw4hbm2ut5Color();
extern "C" void EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc();
extern "C" void EqualsPaneName__Q36nw4hbm3lyt6detailFPCcPCc();
extern "C" void Free__Q46nw4hbm3lyt6detail11TexCoordAryFv();
extern "C" void GXBegin();
extern "C" void GXClearVtxDesc();
extern "C" void GXInitTexObj();
extern "C" void GXInitTexObjCI();
extern "C" void GXInitTexObjLOD();
extern "C" void GXInitTexObjUserData();
extern "C" void GXSetBlendMode();
extern "C" void GXSetChanCtrl();
extern "C" void GXSetChanMatColor();
extern "C" void GXSetLineWidth();
extern "C" void GXSetNumChans();
extern "C" void GXSetNumTexGens();
extern "C" void GXSetTexCoordScaleManually();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXSetVtxDesc();
extern "C" void InitGXTexObjFromTPL__Q36nw4hbm3lyt6detailFP9_GXTexObjP10TPLPaletteUl();
extern "C" void IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc();
extern "C" void Reserve__Q46nw4hbm3lyt6detail11TexCoordAryFUc();
extern "C" void SetSize__Q46nw4hbm3lyt6detail11TexCoordAryFUc();
extern "C" void SetVertexFormat__Q36nw4hbm3lyt6detailFbUc();
extern "C" void TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeader();
extern "C" void TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeaderUl();
extern "C" void __ct__Q46nw4hbm3lyt6detail11TexCoordAryFv();
extern "C" void _restgpr_23();
extern "C" void _restgpr_27();
extern "C" void _savegpr_23();
extern "C" void _savegpr_27();
extern "C" void fn_802E430C();
extern "C" void fn_802E432C();
extern "C" void fn_802E43CC();
extern "C" void fn_802E4750();
extern "C" void fn_802E4808();
extern "C" void fn_802E48CC();
extern "C" void fn_802E4A28();
extern "C" void fn_802F32EC();
extern "C" void fn_802F3984();
extern "C" void fn_802F3A7C();
extern "C" void fn_8030CAF0();
extern "C" void fn_8030CB00();
extern "C" void fn_803299FC();
extern "C" void fn_80329B10();
extern "C" void strncmp();

// ----------------------------------------------------------------------------
// EqualsPaneName__Q36nw4hbm3lyt6detailFPCcPCc
// ----------------------------------------------------------------------------
extern "C" asm void EqualsPaneName__Q36nw4hbm3lyt6detailFPCcPCc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x10
    stw r0, 0x14(r1)
    bl strncmp
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc
// ----------------------------------------------------------------------------
extern "C" asm void EqualsMaterialName__Q36nw4hbm3lyt6detailFPCcPCc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x14
    stw r0, 0x14(r1)
    bl strncmp
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeader
// ----------------------------------------------------------------------------
extern "C" asm void TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeader() {
    nofralloc
    lhz r0, 0x4(r3)
    li r4, 0x0
    cmplwi r0, 0xfeff
    bne lbl_802F2FD0
    lhz r0, 0x6(r3)
    cmplwi r0, 0x8
    bne lbl_802F2FD0
    li r4, 0x1
lbl_802F2FD0:
    mr r3, r4
    blr
}

// ----------------------------------------------------------------------------
// TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeaderUl
// ----------------------------------------------------------------------------
extern "C" asm void TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeaderUl() {
    nofralloc
    lwz r0, 0x0(r3)
    li r5, 0x0
    cmplw r4, r0
    bne lbl_802F3004
    lhz r0, 0x4(r3)
    cmplwi r0, 0xfeff
    bne lbl_802F3004
    lhz r0, 0x6(r3)
    cmplwi r0, 0x8
    bne lbl_802F3004
    li r5, 0x1
lbl_802F3004:
    mr r3, r5
    blr
}

// ----------------------------------------------------------------------------
// __ct__Q46nw4hbm3lyt6detail11TexCoordAryFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q46nw4hbm3lyt6detail11TexCoordAryFv() {
    nofralloc
    li r0, 0x0
    stb r0, 0x0(r3)
    stb r0, 0x1(r3)
    stw r0, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// Free__Q46nw4hbm3lyt6detail11TexCoordAryFv
// ----------------------------------------------------------------------------
extern "C" asm void Free__Q46nw4hbm3lyt6detail11TexCoordAryFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_802F305C
    lis r3, lbl_80462438@ha
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
    li r0, 0x0
    stw r0, 0x4(r31)
    stb r0, 0x0(r31)
    stb r0, 0x1(r31)
lbl_802F305C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Reserve__Q46nw4hbm3lyt6detail11TexCoordAryFUc
// ----------------------------------------------------------------------------
extern "C" asm void Reserve__Q46nw4hbm3lyt6detail11TexCoordAryFUc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x0(r3)
    cmplw r0, r4
    bge lbl_802F30E0
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_802F30C0
    lis r3, lbl_80462438@ha
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CB00
    li r0, 0x0
    stw r0, 0x4(r30)
    stb r0, 0x0(r30)
    stb r0, 0x1(r30)
lbl_802F30C0:
    lis r3, lbl_80462438@ha
    clrlslwi r4, r31, 24, 5
    lwz r3, lbl_80462438@l(r3)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    stw r3, 0x4(r30)
    beq lbl_802F30E0
    stb r31, 0x0(r30)
lbl_802F30E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetSize__Q46nw4hbm3lyt6detail11TexCoordAryFUc
// ----------------------------------------------------------------------------
extern "C" asm void SetSize__Q46nw4hbm3lyt6detail11TexCoordAryFUc() {
    nofralloc
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beqlr
    lbz r0, 0x0(r3)
    cmplw r4, r0
    bgtlr
    lis r8, lbl_80462410@ha
    lbz r0, lbl_80462410@l(r8)
    extsb. r0, r0
    bne lbl_802F3160
    lis r6, lbl_80341E10@ha
    lis r5, lbl_80341E14@ha
    lis r7, lbl_80462418@ha
    lfs f1, lbl_80341E10@l(r6)
    addi r6, r7, lbl_80462418@l
    lfs f0, lbl_80341E14@l(r5)
    li r0, 0x1
    stfs f1, lbl_80462418@l(r7)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f1, 0xc(r6)
    stfs f1, 0x10(r6)
    stfs f0, 0x14(r6)
    stfs f0, 0x18(r6)
    stfs f0, 0x1c(r6)
    stb r0, lbl_80462410@l(r8)
lbl_802F3160:
    lbz r7, 0x1(r3)
    lis r6, lbl_80462418@ha
    addi r5, r6, lbl_80462418@l
    lfs f7, lbl_80462418@l(r6)
    subf r0, r7, r4
    slwi r6, r7, 5
    lfs f6, 0x4(r5)
    lfs f5, 0x8(r5)
    lfs f4, 0xc(r5)
    lfs f3, 0x10(r5)
    lfs f2, 0x14(r5)
    lfs f1, 0x18(r5)
    lfs f0, 0x1c(r5)
    mtctr r0
    cmpw r7, r4
    bge lbl_802F31E8
lbl_802F31A0:
    lwz r0, 0x4(r3)
    stfsx f7, r6, r0
    add r5, r0, r6
    stfs f6, 0x4(r5)
    lwz r0, 0x4(r3)
    add r5, r0, r6
    stfs f5, 0x8(r5)
    stfs f4, 0xc(r5)
    lwz r0, 0x4(r3)
    add r5, r0, r6
    stfs f3, 0x10(r5)
    stfs f2, 0x14(r5)
    lwz r0, 0x4(r3)
    add r5, r0, r6
    addi r6, r6, 0x20
    stfs f1, 0x18(r5)
    stfs f0, 0x1c(r5)
    bdnz lbl_802F31A0
lbl_802F31E8:
    stb r4, 0x1(r3)
    blr
}

// ----------------------------------------------------------------------------
// Copy__Q46nw4hbm3lyt6detail11TexCoordAryFPCvUc
// ----------------------------------------------------------------------------
extern "C" asm void Copy__Q46nw4hbm3lyt6detail11TexCoordAryFPCvUc() {
    nofralloc
    lbz r0, 0x1(r3)
    cmplw r0, r5
    bge lbl_802F3200
    mr r0, r5
lbl_802F3200:
    stb r0, 0x1(r3)
    li r6, 0x0
    mtctr r5
    cmpwi r5, 0x0
    blelr
lbl_802F3214:
    lwz r0, 0x4(r3)
    lfs f1, 0x0(r4)
    lfs f0, 0x4(r4)
    add r5, r0, r6
    stfsx f1, r6, r0
    lfs f1, 0x8(r4)
    stfs f0, 0x4(r5)
    lfs f0, 0xc(r4)
    lwz r0, 0x4(r3)
    lfs f3, 0x10(r4)
    add r5, r0, r6
    lfs f2, 0x14(r4)
    stfs f1, 0x8(r5)
    lfs f1, 0x18(r4)
    stfs f0, 0xc(r5)
    lfs f0, 0x1c(r4)
    addi r4, r4, 0x20
    lwz r0, 0x4(r3)
    add r5, r0, r6
    stfs f3, 0x10(r5)
    stfs f2, 0x14(r5)
    lwz r0, 0x4(r3)
    add r5, r0, r6
    addi r6, r6, 0x20
    stfs f1, 0x18(r5)
    stfs f0, 0x1c(r5)
    bdnz lbl_802F3214
    blr
}

// ----------------------------------------------------------------------------
// IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc
// ----------------------------------------------------------------------------
extern "C" asm void IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc() {
    nofralloc
    cmplwi r4, 0xff
    beq lbl_802F3294
    li r3, 0x1
    blr
lbl_802F3294:
    cmpwi r3, 0x0
    beq lbl_802F32E4
    lwz r4, 0x0(r3)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    bne lbl_802F32DC
    lwz r4, 0x4(r3)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    bne lbl_802F32DC
    lwz r4, 0x8(r3)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    bne lbl_802F32DC
    lwz r3, 0xc(r3)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    beq lbl_802F32E4
lbl_802F32DC:
    li r3, 0x1
    blr
lbl_802F32E4:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_802F32EC
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F32EC() {
    nofralloc
    lbz r8, 0x0(r4)
    cmplwi r5, 0xff
    lbz r7, 0x1(r4)
    lbz r6, 0x2(r4)
    lbz r0, 0x3(r4)
    stb r8, 0x0(r3)
    stb r7, 0x1(r3)
    stb r6, 0x2(r3)
    stb r0, 0x3(r3)
    beqlr
    lbz r0, 0x3(r4)
    lis r4, 0x8081
    subi r4, r4, 0x7f7f
    mullw r0, r0, r5
    mulhw r4, r4, r0
    add r0, r4, r0
    srawi r0, r0, 7
    srwi r4, r0, 31
    add r0, r0, r4
    stb r0, 0x3(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
// ----------------------------------------------------------------------------
extern "C" asm void SetVertexFormat__Q36nw4hbm3lyt6detailFbUc() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    cmpwi r29, 0x0
    beq lbl_802F3384
    li r3, 0xb
    li r4, 0x1
    bl GXSetVtxDesc
lbl_802F3384:
    li r31, 0x0
    b lbl_802F339C
lbl_802F338C:
    addi r3, r31, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
    addi r31, r31, 0x1
lbl_802F339C:
    cmpw r31, r30
    blt lbl_802F338C
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    cmpwi r29, 0x0
    beq lbl_802F33DC
    li r3, 0x0
    li r4, 0xb
    li r5, 0x1
    li r6, 0x5
    li r7, 0x0
    bl GXSetVtxAttrFmt
lbl_802F33DC:
    li r31, 0x0
    b lbl_802F3400
lbl_802F33E4:
    addi r4, r31, 0xd
    li r3, 0x0
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    addi r31, r31, 0x1
lbl_802F3400:
    cmpw r31, r30
    blt lbl_802F33E4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// DrawQuad__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeUcPA4_CQ36nw4hbm4math4VEC2PCQ36nw4hbm2ut5Color
// ----------------------------------------------------------------------------
extern "C" asm void DrawQuad__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeUcPA4_CQ36nw4hbm4math4VEC2PCQ36nw4hbm2ut5Color() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    li r3, 0x80
    li r4, 0x0
    li r5, 0x4
    bl GXBegin
    lfs f0, 0x0(r27)
    lis r3, 0xcc01
    lfs f1, 0x4(r27)
    cmpwi r31, 0x0
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
    beq lbl_802F3480
    lwz r0, 0x0(r31)
    stw r0, -0x8000(r3)
lbl_802F3480:
    cmpwi cr1, r29, 0x0
    li r6, 0x0
    ble cr1, lbl_802F3598
    cmpwi r29, 0x8
    subi r4, r29, 0x8
    ble lbl_802F3564
    li r5, 0x0
    blt cr1, lbl_802F34B4
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r29, r0
    bgt lbl_802F34B4
    li r5, 0x1
lbl_802F34B4:
    cmpwi r5, 0x0
    beq lbl_802F3564
    addi r0, r4, 0x7
    mr r5, r30
    srwi r0, r0, 3
    lis r3, 0xcc01
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_802F3564
lbl_802F34D8:
    lfs f0, 0x0(r5)
    addi r6, r6, 0x8
    lfs f1, 0x4(r5)
    stfs f0, -0x8000(r3)
    lfs f2, 0x20(r5)
    stfs f1, -0x8000(r3)
    lfs f0, 0x24(r5)
    stfs f2, -0x8000(r3)
    lfs f1, 0x40(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x44(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0x60(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x64(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0x80(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x84(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0xa0(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xa4(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0xc0(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xc4(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0xe0(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xe4(r5)
    addi r5, r5, 0x100
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    bdnz lbl_802F34D8
lbl_802F3564:
    slwi r3, r6, 5
    subf r0, r6, r29
    add r4, r30, r3
    lis r3, 0xcc01
    mtctr r0
    cmpw r6, r29
    bge lbl_802F3598
lbl_802F3580:
    lfs f1, 0x0(r4)
    lfs f0, 0x4(r4)
    addi r4, r4, 0x20
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    bdnz lbl_802F3580
lbl_802F3598:
    lfs f1, 0x0(r27)
    lis r3, 0xcc01
    lfs f0, 0x0(r28)
    cmpwi r31, 0x0
    lfs f2, 0x4(r27)
    fadds f0, f1, f0
    stfs f0, -0x8000(r3)
    stfs f2, -0x8000(r3)
    beq lbl_802F35C4
    lwz r0, 0x4(r31)
    stw r0, -0x8000(r3)
lbl_802F35C4:
    cmpwi cr1, r29, 0x0
    li r6, 0x0
    ble cr1, lbl_802F36DC
    cmpwi r29, 0x8
    subi r4, r29, 0x8
    ble lbl_802F36A8
    li r5, 0x0
    blt cr1, lbl_802F35F8
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r29, r0
    bgt lbl_802F35F8
    li r5, 0x1
lbl_802F35F8:
    cmpwi r5, 0x0
    beq lbl_802F36A8
    addi r0, r4, 0x7
    mr r5, r30
    srwi r0, r0, 3
    lis r3, 0xcc01
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_802F36A8
lbl_802F361C:
    lfs f0, 0x8(r5)
    addi r6, r6, 0x8
    lfs f1, 0xc(r5)
    stfs f0, -0x8000(r3)
    lfs f2, 0x28(r5)
    stfs f1, -0x8000(r3)
    lfs f0, 0x2c(r5)
    stfs f2, -0x8000(r3)
    lfs f1, 0x48(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x4c(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0x68(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x6c(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0x88(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x8c(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0xa8(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xac(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0xc8(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xcc(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0xe8(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xec(r5)
    addi r5, r5, 0x100
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    bdnz lbl_802F361C
lbl_802F36A8:
    slwi r3, r6, 5
    subf r0, r6, r29
    add r4, r30, r3
    lis r3, 0xcc01
    mtctr r0
    cmpw r6, r29
    bge lbl_802F36DC
lbl_802F36C4:
    lfs f1, 0x8(r4)
    lfs f0, 0xc(r4)
    addi r4, r4, 0x20
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    bdnz lbl_802F36C4
lbl_802F36DC:
    lfs f1, 0x0(r27)
    lis r3, 0xcc01
    lfs f0, 0x0(r28)
    cmpwi r31, 0x0
    lfs f2, 0x4(r27)
    fadds f1, f1, f0
    lfs f0, 0x4(r28)
    fadds f0, f2, f0
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_802F3710
    lwz r0, 0xc(r31)
    stw r0, -0x8000(r3)
lbl_802F3710:
    cmpwi cr1, r29, 0x0
    li r6, 0x0
    ble cr1, lbl_802F3828
    cmpwi r29, 0x8
    subi r4, r29, 0x8
    ble lbl_802F37F4
    li r5, 0x0
    blt cr1, lbl_802F3744
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r29, r0
    bgt lbl_802F3744
    li r5, 0x1
lbl_802F3744:
    cmpwi r5, 0x0
    beq lbl_802F37F4
    addi r0, r4, 0x7
    mr r5, r30
    srwi r0, r0, 3
    lis r3, 0xcc01
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_802F37F4
lbl_802F3768:
    lfs f0, 0x18(r5)
    addi r6, r6, 0x8
    lfs f1, 0x1c(r5)
    stfs f0, -0x8000(r3)
    lfs f2, 0x38(r5)
    stfs f1, -0x8000(r3)
    lfs f0, 0x3c(r5)
    stfs f2, -0x8000(r3)
    lfs f1, 0x58(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x5c(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0x78(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x7c(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0x98(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x9c(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0xb8(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xbc(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0xd8(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xdc(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0xf8(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xfc(r5)
    addi r5, r5, 0x100
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    bdnz lbl_802F3768
lbl_802F37F4:
    slwi r3, r6, 5
    subf r0, r6, r29
    add r4, r30, r3
    lis r3, 0xcc01
    mtctr r0
    cmpw r6, r29
    bge lbl_802F3828
lbl_802F3810:
    lfs f1, 0x18(r4)
    lfs f0, 0x1c(r4)
    addi r4, r4, 0x20
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    bdnz lbl_802F3810
lbl_802F3828:
    lfs f1, 0x4(r27)
    lis r3, 0xcc01
    lfs f0, 0x4(r28)
    cmpwi r31, 0x0
    lfs f2, 0x0(r27)
    fadds f0, f1, f0
    stfs f2, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_802F3854
    lwz r0, 0x8(r31)
    stw r0, -0x8000(r3)
lbl_802F3854:
    cmpwi cr1, r29, 0x0
    li r6, 0x0
    ble cr1, lbl_802F396C
    cmpwi r29, 0x8
    subi r4, r29, 0x8
    ble lbl_802F3938
    li r5, 0x0
    blt cr1, lbl_802F3888
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r29, r0
    bgt lbl_802F3888
    li r5, 0x1
lbl_802F3888:
    cmpwi r5, 0x0
    beq lbl_802F3938
    addi r0, r4, 0x7
    mr r5, r30
    srwi r0, r0, 3
    lis r3, 0xcc01
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_802F3938
lbl_802F38AC:
    lfs f0, 0x10(r5)
    addi r6, r6, 0x8
    lfs f1, 0x14(r5)
    stfs f0, -0x8000(r3)
    lfs f2, 0x30(r5)
    stfs f1, -0x8000(r3)
    lfs f0, 0x34(r5)
    stfs f2, -0x8000(r3)
    lfs f1, 0x50(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x54(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0x70(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x74(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0x90(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0x94(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0xb0(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xb4(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0xd0(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xd4(r5)
    stfs f1, -0x8000(r3)
    lfs f1, 0xf0(r5)
    stfs f0, -0x8000(r3)
    lfs f0, 0xf4(r5)
    addi r5, r5, 0x100
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    bdnz lbl_802F38AC
lbl_802F3938:
    slwi r3, r6, 5
    subf r0, r6, r29
    add r4, r30, r3
    lis r3, 0xcc01
    mtctr r0
    cmpw r6, r29
    bge lbl_802F396C
lbl_802F3954:
    lfs f1, 0x10(r4)
    lfs f0, 0x14(r4)
    addi r4, r4, 0x20
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    bdnz lbl_802F3954
lbl_802F396C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802F3984
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F3984() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_23
    li r0, -0x1
    cmpwi r7, 0x0
    stw r0, 0x10(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    stw r0, 0x14(r1)
    mr r29, r6
    mr r30, r7
    mr r31, r8
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_802F3A3C
    mr r24, r30
    addi r23, r1, 0x10
    li r25, 0x0
lbl_802F39D8:
    lbz r0, 0x0(r24)
    mr r5, r31
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stb r0, 0x8(r1)
    lbz r0, 0x1(r24)
    stb r0, 0x9(r1)
    lbz r0, 0x2(r24)
    stb r0, 0xa(r1)
    lbz r0, 0x3(r24)
    stb r0, 0xb(r1)
    bl fn_802F32EC
    lbz r3, 0xc(r1)
    addi r25, r25, 0x1
    lbz r0, 0xd(r1)
    cmpwi r25, 0x4
    stb r3, 0x0(r23)
    addi r24, r24, 0x4
    lbz r3, 0xe(r1)
    stb r0, 0x1(r23)
    lbz r0, 0xf(r1)
    stb r3, 0x2(r23)
    stb r0, 0x3(r23)
    addi r23, r23, 0x4
    blt lbl_802F39D8
lbl_802F3A3C:
    neg r3, r30
    addi r0, r1, 0x10
    or r4, r3, r30
    mr r5, r28
    srawi r7, r4, 31
    mr r3, r26
    mr r4, r27
    mr r6, r29
    and r7, r0, r7
    bl DrawQuad__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeUcPA4_CQ36nw4hbm4math4VEC2PCQ36nw4hbm2ut5Color
    addi r11, r1, 0x50
    bl _restgpr_23
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_802F3A7C
// ----------------------------------------------------------------------------
extern "C" asm void fn_802F3A7C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    li r3, 0x0
    li r4, 0x9
    li r5, 0x0
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x1
    bl GXSetNumChans
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    lbz r7, 0x0(r31)
    addi r4, r1, 0x8
    lbz r6, 0x1(r31)
    li r3, 0x4
    lbz r5, 0x2(r31)
    lbz r0, 0x3(r31)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    bl GXSetChanMatColor
    li r3, 0x0
    bl GXSetNumTexGens
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x0
    li r4, 0xff
    li r5, 0xff
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x0
    li r4, 0x4
    bl fn_802E43CC
    li r3, 0x0
    bl fn_802E432C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0xf
    bl GXSetBlendMode
    li r3, 0x6
    li r4, 0x0
    bl GXSetLineWidth
    li r3, 0xb0
    li r4, 0x0
    li r5, 0x5
    bl GXBegin
    lfs f1, 0x0(r29)
    lis r3, 0xcc01
    lfs f0, 0x0(r30)
    stfs f1, -0x8000(r3)
    lfs f2, 0x4(r29)
    fadds f3, f1, f0
    lfs f0, 0x4(r30)
    stfs f2, -0x8000(r3)
    fadds f0, f2, f0
    stfs f3, -0x8000(r3)
    stfs f2, -0x8000(r3)
    stfs f3, -0x8000(r3)
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
    stfs f2, -0x8000(r3)
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// InitGXTexObjFromTPL__Q36nw4hbm3lyt6detailFP9_GXTexObjP10TPLPaletteUl
// ----------------------------------------------------------------------------
extern "C" asm void InitGXTexObjFromTPL__Q36nw4hbm3lyt6detailFP9_GXTexObjP10TPLPaletteUl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lis r0, 0x8000
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    lwz r6, 0x8(r4)
    cmplw r6, r0
    bge lbl_802F3C68
    mr r3, r29
    bl fn_803299FC
lbl_802F3C68:
    mr r3, r29
    mr r4, r30
    bl fn_80329B10
    lwz r9, 0x0(r3)
    mr r30, r3
    lwz r0, 0x4(r3)
    lbz r5, 0x21(r9)
    lbz r4, 0x22(r9)
    cmpwi r0, 0x0
    subf r3, r5, r4
    subf r0, r4, r5
    or r0, r3, r0
    srwi r10, r0, 31
    beq lbl_802F3CD8
    li r0, 0x0
    mr r3, r31
    stw r0, 0x8(r1)
    lwz r4, 0x8(r9)
    lhz r5, 0x2(r9)
    lhz r6, 0x0(r9)
    lwz r7, 0x4(r9)
    lwz r8, 0xc(r9)
    lwz r9, 0x10(r9)
    bl GXInitTexObjCI
    lwz r4, 0x4(r30)
    mr r3, r31
    bl GXInitTexObjUserData
    b lbl_802F3CF8
lbl_802F3CD8:
    lwz r4, 0x8(r9)
    mr r3, r31
    lhz r5, 0x2(r9)
    lhz r6, 0x0(r9)
    lwz r7, 0x4(r9)
    lwz r8, 0xc(r9)
    lwz r9, 0x10(r9)
    bl GXInitTexObj
lbl_802F3CF8:
    lwz r9, 0x0(r30)
    lis r5, 0x4330
    lis r4, lbl_80341E18@ha
    stw r5, 0x10(r1)
    lbz r7, 0x21(r9)
    mr r3, r31
    lbz r0, 0x22(r9)
    li r6, 0x0
    stw r7, 0x14(r1)
    li r8, 0x0
    lfd f2, lbl_80341E18@l(r4)
    lfd f0, 0x10(r1)
    stw r5, 0x18(r1)
    fsubs f1, f0, f2
    lwz r4, 0x14(r9)
    stw r0, 0x1c(r1)
    lwz r5, 0x18(r9)
    lfd f0, 0x18(r1)
    lfs f3, 0x1c(r9)
    fsubs f2, f0, f2
    lbz r7, 0x20(r9)
    bl GXInitTexObjLOD
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

