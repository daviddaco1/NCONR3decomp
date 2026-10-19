#include "types.h"

// Translation unit: src/nw4r/lyt/lyt_textBox.cpp
// Total functions: 22

// Small Data symbols (@sda21)
extern "C" float lbl_8049C510;
extern "C" float lbl_8049D9D0;
extern "C" float lbl_8049D9D8;
extern "C" float lbl_8049D9E8;
extern "C" float lbl_804A1ED0;
extern "C" float lbl_804A1ED8;
extern "C" float lbl_804A1EE0;
extern "C" float lbl_804A1EE4;

// Global data symbols (@ha/@l)
extern "C" u8 dtor_80031FA4[];
extern "C" u8 lbl_803616C8[];

// Forward declarations
extern "C" void AllocStringBuffer__Q34nw4r3lyt7TextBoxFUs();
extern "C" void DrawSelf__Q34nw4r3lyt7TextBoxFRCQ34nw4r3lyt8DrawInfo();
extern "C" void FreeStringBuffer__Q34nw4r3lyt7TextBoxFv();
extern "C" void GXLoadPosMtxImm();
extern "C" void GXSetCurrentMtx();
extern "C" void GetCharStrmReader__Q34nw4r2ut4FontCFv();
extern "C" void GetRuntimeTypeInfo__Q34nw4r3lyt7TextBoxCFv();
extern "C" void GetTextColor__Q34nw4r3lyt7TextBoxCFUl();
extern "C" void GetVtxColorElement__Q34nw4r3lyt7TextBoxCFUl();
extern "C" void GetVtxPos__Q34nw4r3lyt4PaneCFv();
extern "C" void LoadMtx__Q34nw4r3lyt7TextBoxFRCQ34nw4r3lyt8DrawInfo();
extern "C" void MultipleAlpha__Q34nw4r3lyt6detailFQ34nw4r2ut5ColorUc();
extern "C" void PSMTXConcat();
extern "C" void PSMTXCopy();
extern "C" void SetColorMapping__Q34nw4r2ut10CharWriterFQ34nw4r2ut5ColorQ34nw4r2ut5Color();
extern "C" void SetFontSize__Q34nw4r2ut10CharWriterFff();
extern "C" void SetString__Q34nw4r3lyt7TextBoxFPCwUs();
extern "C" void SetString__Q34nw4r3lyt7TextBoxFPCwUsUs();
extern "C" void SetTextColor__Q34nw4r3lyt7TextBoxFUlQ34nw4r2ut5Color();
extern "C" void SetVtxColorElement__Q34nw4r3lyt7TextBoxFUlUc();
extern "C" void SetVtxColor__Q34nw4r3lyt7TextBoxFUlQ34nw4r2ut5Color();
extern "C" void SetupGX__Q34nw4r2ut10CharWriterFv();
extern "C" void UpdateVertexColor__Q34nw4r2ut10CharWriterFv();
extern "C" void __construct_array();
extern "C" void __ct__Q34nw4r3lyt4PaneFPCQ44nw4r3lyt3res4Pane();
extern "C" void __ct__Q34nw4r3lyt7TextBoxFPCQ44nw4r3lyt3res7TextBoxRCQ34nw4r3lyt11ResBlockSet();
extern "C" void __ct__Q34nw4r3lyt8MaterialFPCQ44nw4r3lyt3res8MaterialRCQ34nw4r3lyt11ResBlockSet();
extern "C" void __destroy_arr();
extern "C" void __dt__Q34nw4r2ut4FontFv();
extern "C" void __dt__Q34nw4r3lyt4PaneFv();
extern "C" void __dt__Q34nw4r3lyt7TextBoxFv();
extern "C" void __ptmf_scall();
extern "C" void _restgpr_14();
extern "C" void _restgpr_24();
extern "C" void _restgpr_27();
extern "C" void _savegpr_14();
extern "C" void _savegpr_24();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_8003D544();
extern "C" void fn_801A95CC();
extern "C" void fn_801F7FD8();
extern "C" void fn_801F8B9C();
extern "C" void fn_801F9328();
extern "C" void fn_801F96AC();
extern "C" void fn_801F9888();
extern "C" void fn_80224BAC();
extern "C" void fn_80224C40();
extern "C" void fn_80226610();
extern "C" void fn_8022666C();
extern "C" void fn_802266C4();
extern "C" void fn_80226740();
extern "C" void fn_802E4808();
extern "C" void fn_8030CAF0();
extern "C" void fn_8030CB00();
extern "C" void memcpy();
extern "C" void memset();
extern "C" void wcscpy();

// ----------------------------------------------------------------------------
// fn_801F7FD8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801F7FD8() {
    nofralloc
    lha r5, 0x0(r4)
    stwu r1, -0x10(r1)
    cmpwi r5, 0x0
    bge lbl_801F7FF0
    li r0, 0x0
    b lbl_801F8000
lbl_801F7FF0:
    cmpwi r5, 0xff
    li r0, 0xff
    bgt lbl_801F8000
    mr r0, r5
lbl_801F8000:
    lha r5, 0x2(r4)
    stb r0, 0x8(r1)
    cmpwi r5, 0x0
    bge lbl_801F8018
    li r0, 0x0
    b lbl_801F8028
lbl_801F8018:
    cmpwi r5, 0xff
    li r0, 0xff
    bgt lbl_801F8028
    mr r0, r5
lbl_801F8028:
    lha r5, 0x4(r4)
    stb r0, 0x9(r1)
    cmpwi r5, 0x0
    bge lbl_801F8040
    li r0, 0x0
    b lbl_801F8050
lbl_801F8040:
    cmpwi r5, 0xff
    li r0, 0xff
    bgt lbl_801F8050
    mr r0, r5
lbl_801F8050:
    lha r4, 0x6(r4)
    stb r0, 0xa(r1)
    cmpwi r4, 0x0
    bge lbl_801F8068
    li r0, 0x0
    b lbl_801F8078
lbl_801F8068:
    cmpwi r4, 0xff
    li r0, 0xff
    bgt lbl_801F8078
    mr r0, r4
lbl_801F8078:
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x0(r3)
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __ct__Q34nw4r3lyt7TextBoxFPCQ44nw4r3lyt3res7TextBoxRCQ34nw4r3lyt11ResBlockSet
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q34nw4r3lyt7TextBoxFPCQ44nw4r3lyt3res7TextBoxRCQ34nw4r3lyt11ResBlockSet() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    mr r28, r3
    mr r29, r4
    mr r30, r5
    bl __ct__Q34nw4r3lyt4PaneFPCQ44nw4r3lyt3res4Pane
    lis r3, lbl_803616C8@ha
    lis r4, fn_8003D544@ha
    addi r3, r3, lbl_803616C8@l
    lis r5, dtor_80031FA4@ha
    stw r3, 0x0(r28)
    addi r3, r28, 0xdc
    addi r4, r4, fn_8003D544@l
    addi r5, r5, dtor_80031FA4@l
    li r6, 0x4
    li r7, 0x2
    bl __construct_array
    lhz r0, 0x4c(r29)
    lfs f0, lbl_804A1ED0
    extrwi. r31, r0, 16, 15
    stfs f0, 0xe8(r28)
    stfs f0, 0xec(r28)
    beq lbl_801F80FC
    subi r0, r31, 0x1
    clrlwi r31, r0, 16
lbl_801F80FC:
    lis r3, 0x5555
    lbz r0, 0x100(r28)
    addi r8, r3, 0x5556
    lfs f0, lbl_804A1ED0
    mulhw r5, r8, r0
    li r9, 0x0
    stw r9, 0xd8(r28)
    addi r3, r28, 0x101
    li r4, 0x0
    sth r9, 0xfc(r28)
    srwi r0, r5, 31
    sth r9, 0xfe(r28)
    add r0, r5, r0
    li r5, 0x1
    clrlwi r6, r0, 24
    stw r9, 0xe4(r28)
    clrlslwi r0, r0, 24, 2
    subf r6, r6, r0
    stfs f0, 0x8(r1)
    addi r0, r6, 0x1
    clrlwi r7, r0, 24
    stfs f0, 0xc(r1)
    mulhw r6, r8, r7
    stfs f0, 0xe8(r28)
    stfs f0, 0xec(r28)
    srwi r0, r6, 31
    stfs f0, 0xf0(r28)
    add r0, r6, r0
    mulli r0, r0, 0x3
    stfs f0, 0xf4(r28)
    stw r9, 0xf8(r28)
    subf r0, r0, r7
    clrlwi r6, r0, 24
    addi r0, r6, 0x3
    stb r0, 0x100(r28)
    bl memset
    cmpwi r31, 0x0
    beq lbl_801F81AC
    lwz r12, 0x0(r28)
    mr r3, r28
    mr r4, r31
    lwz r12, 0x74(r12)
    mtctr r12
    bctrl
lbl_801F81AC:
    lhz r4, 0x4e(r29)
    cmplwi r4, 0x2
    blt lbl_801F81F0
    lwz r0, 0xd8(r28)
    cmpwi r0, 0x0
    beq lbl_801F81F0
    lwz r12, 0x0(r28)
    extrwi r4, r4, 15, 16
    subi r0, r4, 0x1
    lwz r4, 0x58(r29)
    lwz r12, 0x80(r12)
    mr r3, r28
    clrlwi r6, r0, 16
    li r5, 0x0
    add r4, r29, r4
    mtctr r12
    bctrl
lbl_801F81F0:
    lbz r0, 0x55(r29)
    lwz r7, 0x5c(r29)
    lwz r6, 0x60(r29)
    lfs f3, 0x64(r29)
    lfs f2, 0x68(r29)
    lbz r5, 0x54(r29)
    lbz r4, 0x101(r28)
    rlwimi r4, r0, 5, 25, 26
    lfs f1, 0x6c(r29)
    lfs f0, 0x70(r29)
    lhz r0, 0x52(r29)
    lwz r3, 0x4(r30)
    stw r7, 0xdc(r28)
    slwi r0, r0, 3
    addi r7, r3, 0xc
    lwz r3, 0xc(r30)
    stw r6, 0xe0(r28)
    stfs f3, 0xe8(r28)
    stfs f2, 0xec(r28)
    stb r5, 0x100(r28)
    stb r4, 0x101(r28)
    stfs f1, 0xf4(r28)
    stfs f0, 0xf0(r28)
    lwz r12, 0x0(r3)
    lwzx r0, r7, r0
    lwz r12, 0x10(r12)
    add r31, r7, r0
    mr r4, r31
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_801F8278
    stw r3, 0xe4(r28)
    b lbl_801F82F8
lbl_801F8278:
    lwz r3, 0xc(r30)
    lis r4, 0x666f
    mr r5, r31
    li r6, 0x0
    lwz r12, 0x0(r3)
    addi r4, r4, 0x6e74
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_801F82F8
    lwz r3, lbl_8049D9D8
    li r4, 0x1c
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_801F82D0
    mr r31, r3
    beq lbl_801F82D4
    bl fn_80224BAC
    mr r31, r3
    b lbl_801F82D4
lbl_801F82D0:
    li r31, 0x0
lbl_801F82D4:
    cmpwi r31, 0x0
    beq lbl_801F82F8
    mr r3, r31
    mr r4, r27
    bl fn_80224C40
    lbz r0, 0x101(r28)
    stw r31, 0xe4(r28)
    ori r0, r0, 0x80
    stb r0, 0x101(r28)
lbl_801F82F8:
    lhz r0, 0x50(r29)
    li r4, 0x5c
    lwz r7, 0x8(r30)
    slwi r0, r0, 2
    lwz r3, 0x0(r30)
    add r6, r7, r0
    lwz r5, 0x4(r30)
    lwz r6, 0xc(r6)
    lwz r0, 0xc(r30)
    stw r3, 0x10(r1)
    add r27, r7, r6
    lwz r3, lbl_8049D9D8
    stw r5, 0x14(r1)
    stw r7, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_801F8354
    beq lbl_801F8358
    mr r4, r27
    addi r5, r1, 0x10
    bl __ct__Q34nw4r3lyt8MaterialFPCQ44nw4r3lyt3res8MaterialRCQ34nw4r3lyt11ResBlockSet
    b lbl_801F8358
lbl_801F8354:
    li r3, 0x0
lbl_801F8358:
    stw r3, 0x28(r28)
    addi r11, r1, 0x40
    mr r3, r28
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r3lyt7TextBoxFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r3lyt7TextBoxFv() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    beq lbl_801F84F8
    lbz r0, 0x101(r3)
    lis r4, lbl_803616C8@ha
    addi r4, r4, lbl_803616C8@l
    extrwi. r0, r0, 1, 24
    stw r4, 0x0(r3)
    beq lbl_801F83F4
    lwz r31, 0xe4(r3)
    cmpwi r31, 0x0
    beq lbl_801F83E8
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8049D9D8
    mr r4, r31
    bl fn_8030CB00
lbl_801F83E8:
    lbz r0, 0x101(r29)
    rlwinm r0, r0, 0, 25, 23
    stb r0, 0x101(r29)
lbl_801F83F4:
    li r0, 0x0
    stw r0, 0xe4(r29)
    b lbl_801F8454
    bctrl
    xoris r0, r3, 0x8000
    lwz r3, 0xe4(r29)
    lis r4, 0x4330
    stw r0, 0x1c(r1)
    lwz r12, 0x0(r3)
    stw r4, 0x18(r1)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    stw r4, 0x20(r1)
    lfd f1, lbl_804A1ED8
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    stfs f2, 0xc(r1)
    fsubs f0, f0, f1
    stfs f2, 0xec(r29)
    stfs f0, 0x8(r1)
    stfs f0, 0xe8(r29)
    b lbl_801F8468
lbl_801F8454:
    lfs f0, lbl_804A1ED0
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0xe8(r29)
    stfs f0, 0xec(r29)
lbl_801F8468:
    lwz r31, 0x28(r29)
    cmpwi cr1, r31, 0x0
    beq cr1, lbl_801F84B0
    lbz r0, 0x59(r31)
    cmpwi r0, 0x0
    bne lbl_801F84B0
    beq cr1, lbl_801F84A8
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8049D9D8
    mr r4, r31
    bl fn_8030CB00
lbl_801F84A8:
    li r0, 0x0
    stw r0, 0x28(r29)
lbl_801F84B0:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x78(r12)
    mtctr r12
    bctrl
    lis r4, dtor_80031FA4@ha
    addi r3, r29, 0xdc
    addi r4, r4, dtor_80031FA4@l
    li r5, 0x4
    li r6, 0x2
    bl __destroy_arr
    mr r3, r29
    li r4, 0x0
    bl __dt__Q34nw4r3lyt4PaneFv
    cmpwi r30, 0x0
    ble lbl_801F84F8
    mr r3, r29
    bl dtor_80136CFC
lbl_801F84F8:
    lwz r31, 0x3c(r1)
    mr r3, r29
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// GetTextColor__Q34nw4r3lyt7TextBoxCFUl
// ----------------------------------------------------------------------------
extern "C" asm void GetTextColor__Q34nw4r3lyt7TextBoxCFUl() {
    nofralloc
    srwi r5, r5, 1
    b lbl_801F8520
lbl_801F8520:
    slwi r0, r5, 2
    add r7, r4, r0
    lbz r6, 0xdc(r7)
    lbz r5, 0xdd(r7)
    lbz r4, 0xde(r7)
    lbz r0, 0xdf(r7)
    stb r6, 0x0(r3)
    stb r5, 0x1(r3)
    stb r4, 0x2(r3)
    stb r0, 0x3(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetVtxColor__Q34nw4r3lyt7TextBoxFUlQ34nw4r2ut5Color
// ----------------------------------------------------------------------------
extern "C" asm void SetVtxColor__Q34nw4r3lyt7TextBoxFUlQ34nw4r2ut5Color() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lbz r8, 0x0(r5)
    srwi r4, r4, 1
    stw r0, 0x14(r1)
    lbz r7, 0x1(r5)
    lbz r6, 0x2(r5)
    lbz r0, 0x3(r5)
    addi r5, r1, 0x8
    stb r8, 0x8(r1)
    stb r7, 0x9(r1)
    stb r6, 0xa(r1)
    stb r0, 0xb(r1)
    bl SetTextColor__Q34nw4r3lyt7TextBoxFUlQ34nw4r2ut5Color
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetTextColor__Q34nw4r3lyt7TextBoxFUlQ34nw4r2ut5Color
// ----------------------------------------------------------------------------
extern "C" asm void SetTextColor__Q34nw4r3lyt7TextBoxFUlQ34nw4r2ut5Color() {
    nofralloc
    slwi r0, r4, 2
    lbz r6, 0x0(r5)
    add r4, r3, r0
    lbz r0, 0x1(r5)
    stb r6, 0xdc(r4)
    lbz r3, 0x2(r5)
    stb r0, 0xdd(r4)
    lbz r0, 0x3(r5)
    stb r3, 0xde(r4)
    stb r0, 0xdf(r4)
    blr
}

// ----------------------------------------------------------------------------
// GetVtxColorElement__Q34nw4r3lyt7TextBoxCFUl
// ----------------------------------------------------------------------------
extern "C" asm void GetVtxColorElement__Q34nw4r3lyt7TextBoxCFUl() {
    nofralloc
    rlwinm r5, r4, 31, 1, 29
    clrlwi r0, r4, 30
    add r3, r3, r5
    add r3, r3, r0
    lbz r3, 0xdc(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetVtxColorElement__Q34nw4r3lyt7TextBoxFUlUc
// ----------------------------------------------------------------------------
extern "C" asm void SetVtxColorElement__Q34nw4r3lyt7TextBoxFUlUc() {
    nofralloc
    rlwinm r6, r4, 31, 1, 29
    clrlwi r0, r4, 30
    add r3, r3, r6
    add r3, r3, r0
    stb r5, 0xdc(r3)
    blr
}

// ----------------------------------------------------------------------------
// DrawSelf__Q34nw4r3lyt7TextBoxFRCQ34nw4r3lyt8DrawInfo
// ----------------------------------------------------------------------------
extern "C" asm void DrawSelf__Q34nw4r3lyt7TextBoxFRCQ34nw4r3lyt8DrawInfo() {
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    stfd f31, 0x1f0(r1)
    opword 0xF3E101F8
    stfd f30, 0x1e0(r1)
    opword 0xF3C101E8
    stfd f29, 0x1d0(r1)
    opword 0xF3A101D8
    stfd f28, 0x1c0(r1)
    opword 0xF38101C8
    addi r11, r1, 0x1c0
    bl _savegpr_14
    lwz r0, 0xd8(r3)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_801F8B20
    lwz r0, 0xe4(r3)
    cmpwi r0, 0x0
    beq lbl_801F8B20
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_801F8650
    b lbl_801F8B20
lbl_801F8650:
    lwz r12, 0x0(r3)
    lwz r12, 0x70(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0xcc
    bl fn_80226610
    mr r4, r29
    addi r3, r1, 0x58
    addi r5, r1, 0xcc
    bl fn_801F9328
    lbz r0, 0xdc(r29)
    addi r3, r1, 0x30
    addi r4, r1, 0x20
    stb r0, 0x20(r1)
    lbz r0, 0xdd(r29)
    stb r0, 0x21(r1)
    lbz r0, 0xde(r29)
    stb r0, 0x22(r1)
    lbz r0, 0xdf(r29)
    stb r0, 0x23(r1)
    lbz r5, 0xb9(r29)
    bl MultipleAlpha__Q34nw4r3lyt6detailFQ34nw4r2ut5ColorUc
    lbz r0, 0xe0(r29)
    addi r3, r1, 0x2c
    addi r4, r1, 0x1c
    stb r0, 0x1c(r1)
    lbz r0, 0xe1(r29)
    stb r0, 0x1d(r1)
    lbz r0, 0xe2(r29)
    stb r0, 0x1e(r1)
    lbz r0, 0xe3(r29)
    stb r0, 0x1f(r1)
    lbz r5, 0xb9(r29)
    bl MultipleAlpha__Q34nw4r3lyt6detailFQ34nw4r2ut5ColorUc
    lwz r3, 0x30(r1)
    li r4, 0x0
    lwz r0, 0x2c(r1)
    cmplw r3, r0
    beq lbl_801F86F0
    li r4, 0x2
lbl_801F86F0:
    stw r4, 0xec(r1)
    addi r3, r1, 0xcc
    bl UpdateVertexColor__Q34nw4r2ut10CharWriterFv
    lwz r5, 0x30(r1)
    addi r3, r1, 0xcc
    lwz r0, 0x2c(r1)
    addi r4, r1, 0x18
    stw r5, 0x18(r1)
    addi r5, r1, 0x14
    stw r0, 0x14(r1)
    bl fn_801A95CC
    lwz r6, 0x28(r29)
    addi r3, r1, 0x28
    addi r4, r1, 0x40
    lhz r5, 0x10(r6)
    lhz r0, 0x12(r6)
    sth r5, 0x40(r1)
    sth r0, 0x42(r1)
    lhz r5, 0x14(r6)
    lhz r0, 0x16(r6)
    sth r5, 0x44(r1)
    sth r0, 0x46(r1)
    bl fn_801F7FD8
    lwz r6, 0x28(r29)
    addi r3, r1, 0x24
    addi r4, r1, 0x38
    lhz r5, 0x18(r6)
    lhz r0, 0x1a(r6)
    sth r5, 0x38(r1)
    sth r0, 0x3a(r1)
    lhz r5, 0x1c(r6)
    lhz r0, 0x1e(r6)
    sth r5, 0x3c(r1)
    sth r0, 0x3e(r1)
    bl fn_801F7FD8
    lwz r5, 0x28(r1)
    addi r3, r1, 0xcc
    lwz r0, 0x24(r1)
    addi r4, r1, 0x10
    stw r5, 0x10(r1)
    addi r5, r1, 0xc
    stw r0, 0xc(r1)
    bl SetColorMapping__Q34nw4r2ut10CharWriterFQ34nw4r2ut5ColorQ34nw4r2ut5Color
    addi r3, r1, 0xcc
    bl SetupGX__Q34nw4r2ut10CharWriterFv
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
    lbz r0, 0x101(r29)
    extrwi r0, r0, 2, 25
    cmpwi r0, 0x2
    beq lbl_801F884C
    bge lbl_801F87E0
    cmpwi r0, 0x0
    beq lbl_801F87EC
    bge lbl_801F8844
    b lbl_801F87EC
lbl_801F87E0:
    cmpwi r0, 0x4
    bge lbl_801F87EC
    b lbl_801F8854
lbl_801F87EC:
    lis r3, 0x5555
    lbz r4, 0x100(r29)
    addi r0, r3, 0x5556
    mulhw r3, r0, r4
    srwi r0, r3, 31
    add r0, r3, r0
    mulli r0, r0, 0x3
    subf r0, r0, r4
    clrlwi r0, r0, 24
    cmpwi r0, 0x1
    beq lbl_801F8834
    bge lbl_801F8820
    b lbl_801F882C
lbl_801F8820:
    cmpwi r0, 0x3
    bge lbl_801F882C
    b lbl_801F883C
lbl_801F882C:
    lfs f30, lbl_804A1ED0
    b lbl_801F8858
lbl_801F8834:
    lfs f30, lbl_804A1EE0
    b lbl_801F8858
lbl_801F883C:
    lfs f30, lbl_804A1EE4
    b lbl_801F8858
lbl_801F8844:
    lfs f30, lbl_804A1ED0
    b lbl_801F8858
lbl_801F884C:
    lfs f30, lbl_804A1EE0
    b lbl_801F8858
lbl_801F8854:
    lfs f30, lbl_804A1EE4
lbl_801F8858:
    lfs f0, 0x5c(r1)
    lwz r31, 0xd8(r29)
    fneg f3, f0
    lfs f2, 0x58(r1)
    lfs f1, 0x60(r1)
    lfs f0, 0x58(r1)
    stfs f2, 0xf8(r1)
    fsubs f29, f1, f0
    stfs f3, 0xfc(r1)
    lhz r30, 0xfe(r29)
    cmpwi r30, 0x0
    ble lbl_801F8B14
    lfs f31, lbl_804A1ED0
    b lbl_801F8B0C
lbl_801F8890:
    lfs f1, 0x4c(r29)
    lwz r0, 0xf8(r1)
    lbz r15, 0xeb(r1)
    stw r0, 0x94(r1)
    lbz r0, 0xe9(r1)
    stw r15, 0x168(r1)
    lwz r15, 0xec(r1)
    stb r0, 0x85(r1)
    lwz r0, 0x168(r1)
    stw r15, 0x130(r1)
    lwz r15, 0xf0(r1)
    stb r0, 0x87(r1)
    lwz r0, 0x130(r1)
    stw r15, 0x134(r1)
    lwz r15, 0xf4(r1)
    stw r0, 0x88(r1)
    lwz r0, 0x134(r1)
    stw r15, 0x138(r1)
    lwz r15, 0xfc(r1)
    stw r0, 0x8c(r1)
    lwz r0, 0x138(r1)
    stw r15, 0x13c(r1)
    lwz r15, 0x100(r1)
    stw r0, 0x90(r1)
    lwz r0, 0x13c(r1)
    stw r15, 0x140(r1)
    lwz r15, 0x104(r1)
    stw r0, 0x98(r1)
    lwz r0, 0x140(r1)
    stw r15, 0x144(r1)
    lwz r15, 0x108(r1)
    stw r0, 0x9c(r1)
    lwz r0, 0x144(r1)
    stw r15, 0x148(r1)
    lhz r15, 0x10c(r1)
    stw r0, 0xa0(r1)
    lwz r0, 0x148(r1)
    stw r15, 0x14c(r1)
    lbz r15, 0x10e(r1)
    stw r0, 0xa4(r1)
    lwz r0, 0x14c(r1)
    stw r15, 0x150(r1)
    lbz r15, 0x10f(r1)
    sth r0, 0xa8(r1)
    lwz r0, 0x150(r1)
    stw r15, 0x154(r1)
    lwz r15, 0x114(r1)
    stb r0, 0xaa(r1)
    lwz r0, 0x154(r1)
    stw r15, 0x158(r1)
    lwz r15, 0x124(r1)
    stb r0, 0xab(r1)
    lwz r0, 0x158(r1)
    stw r15, 0x15c(r1)
    lwz r15, 0x128(r1)
    stw r0, 0xb0(r1)
    lwz r0, 0x15c(r1)
    stw r15, 0x160(r1)
    lwz r15, 0x12c(r1)
    stw r0, 0xc0(r1)
    lwz r0, 0x160(r1)
    lwz r16, 0xcc(r1)
    lwz r17, 0xd0(r1)
    lbz r18, 0xd4(r1)
    lbz r19, 0xd5(r1)
    lbz r20, 0xd6(r1)
    lbz r21, 0xd7(r1)
    lbz r22, 0xd8(r1)
    lbz r23, 0xd9(r1)
    lbz r24, 0xda(r1)
    lbz r25, 0xdb(r1)
    lbz r26, 0xdc(r1)
    lbz r27, 0xdd(r1)
    lbz r28, 0xde(r1)
    lbz r12, 0xdf(r1)
    lbz r11, 0xe0(r1)
    lbz r10, 0xe1(r1)
    lbz r9, 0xe2(r1)
    lbz r8, 0xe3(r1)
    lbz r7, 0xe4(r1)
    lbz r6, 0xe5(r1)
    lbz r5, 0xe6(r1)
    lbz r4, 0xe7(r1)
    lbz r3, 0xe8(r1)
    lbz r14, 0xea(r1)
    lfs f4, 0x110(r1)
    lfs f3, 0x118(r1)
    lfs f2, 0x11c(r1)
    lfs f0, 0x120(r1)
    stw r0, 0xc4(r1)
    mr r0, r15
    stw r15, 0x164(r1)
    stfs f31, 0x48(r1)
    stfs f31, 0x4c(r1)
    stfs f31, 0x50(r1)
    stfs f31, 0x54(r1)
    stw r16, 0x68(r1)
    stw r17, 0x6c(r1)
    stb r18, 0x70(r1)
    stb r19, 0x71(r1)
    stb r20, 0x72(r1)
    stb r21, 0x73(r1)
    stb r22, 0x74(r1)
    stb r23, 0x75(r1)
    stb r24, 0x76(r1)
    stb r25, 0x77(r1)
    stb r26, 0x78(r1)
    stb r27, 0x79(r1)
    stb r28, 0x7a(r1)
    stb r12, 0x7b(r1)
    stb r11, 0x7c(r1)
    stb r10, 0x7d(r1)
    stb r9, 0x7e(r1)
    stb r8, 0x7f(r1)
    stb r7, 0x80(r1)
    stb r6, 0x81(r1)
    stb r5, 0x82(r1)
    stb r4, 0x83(r1)
    stb r3, 0x84(r1)
    stb r14, 0x86(r1)
    stfs f4, 0xac(r1)
    stfs f3, 0xb4(r1)
    stfs f2, 0xb8(r1)
    stfs f0, 0xbc(r1)
    stw r0, 0xc8(r1)
    stfs f31, 0x94(r1)
    stfs f31, 0x98(r1)
    mr r5, r31
    mr r6, r30
    addi r3, r1, 0x48
    addi r4, r1, 0x68
    addi r7, r1, 0x8
    bl fn_801F8B9C
    lfs f1, 0x50(r1)
    mr r14, r3
    lfs f0, 0x48(r1)
    addi r3, r1, 0x68
    li r4, -0x1
    fsubs f28, f1, f0
    bl fn_8022666C
    fsubs f1, f29, f28
    lfs f0, 0x58(r1)
    mr r4, r31
    mr r5, r14
    addi r3, r1, 0xcc
    fmuls f1, f30, f1
    fadds f0, f0, f1
    stfs f0, 0xf8(r1)
    bl fn_80226740
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_801F8B00
    addi r3, r1, 0xcc
    la r4, lbl_8049C510
    li r5, 0x1
    bl fn_80226740
lbl_801F8B00:
    slwi r0, r14, 1
    subf r30, r14, r30
    add r31, r31, r0
lbl_801F8B0C:
    cmpwi r30, 0x0
    bgt lbl_801F8890
lbl_801F8B14:
    addi r3, r1, 0xcc
    li r4, -0x1
    bl fn_8022666C
lbl_801F8B20:
    opword 0xE3E101F8
    lfd f31, 0x1f0(r1)
    opword 0xE3C101E8
    lfd f30, 0x1e0(r1)
    opword 0xE3A101D8
    lfd f29, 0x1d0(r1)
    opword 0xE38101C8
    addi r11, r1, 0x1c0
    lfd f28, 0x1c0(r1)
    bl _restgpr_14
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

// ----------------------------------------------------------------------------
// SetColorMapping__Q34nw4r2ut10CharWriterFQ34nw4r2ut5ColorQ34nw4r2ut5Color
// ----------------------------------------------------------------------------
extern "C" asm void SetColorMapping__Q34nw4r2ut10CharWriterFQ34nw4r2ut5ColorQ34nw4r2ut5Color() {
    nofralloc
    lbz r11, 0x0(r4)
    lbz r10, 0x1(r4)
    lbz r9, 0x2(r4)
    lbz r8, 0x3(r4)
    lbz r7, 0x0(r5)
    lbz r6, 0x1(r5)
    lbz r4, 0x2(r5)
    lbz r0, 0x3(r5)
    stb r11, 0x0(r3)
    stb r10, 0x1(r3)
    stb r9, 0x2(r3)
    stb r8, 0x3(r3)
    stb r7, 0x4(r3)
    stb r6, 0x5(r3)
    stb r4, 0x6(r3)
    stb r0, 0x7(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801F8B9C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801F8B9C() {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    opword 0xF3E100C8
    stfd f30, 0xb0(r1)
    opword 0xF3C100B8
    stfd f29, 0xa0(r1)
    opword 0xF3A100A8
    stfd f28, 0x90(r1)
    opword 0xF3810098
    stfd f27, 0x80(r1)
    opword 0xF3610088
    addi r11, r1, 0x80
    bl _savegpr_24
    li r0, 0x0
    mr r25, r3
    stw r0, 0x40(r1)
    fmr f30, f1
    mr r26, r4
    lfs f31, lbl_804A1ED0
    stw r0, 0x44(r1)
    mr r27, r5
    mr r28, r6
    stw r0, 0x48(r1)
    mr r29, r7
    addi r3, r1, 0x28
    li r31, 0x0
    stw r4, 0x38(r1)
    stw r5, 0x3c(r1)
    lwz r4, 0x48(r4)
    bl GetCharStrmReader__Q34nw4r2ut4FontCFv
    lwz r30, 0x28(r1)
    mr r3, r26
    lfs f0, lbl_804A1ED0
    stfs f0, 0x0(r25)
    stfs f0, 0x8(r25)
    bl fn_802266C4
    lfs f0, lbl_804A1ED0
    fcmpo cr0, f0, f1
    ble lbl_801F8C44
    b lbl_801F8C48
lbl_801F8C44:
    fmr f1, f0
lbl_801F8C48:
    stfs f1, 0x4(r25)
    mr r3, r26
    bl fn_802266C4
    lfs f0, lbl_804A1ED0
    fcmpo cr0, f0, f1
    bge lbl_801F8C64
    b lbl_801F8C68
lbl_801F8C64:
    fmr f1, f0
lbl_801F8C68:
    stfs f1, 0xc(r25)
    li r0, 0x0
    addi r3, r1, 0x28
    addi r12, r1, 0x2c
    stb r0, 0x0(r29)
    stw r27, 0x28(r1)
    lfs f3, 0x0(r25)
    lfs f2, 0x4(r25)
    lfs f1, 0x8(r25)
    lfs f0, 0xc(r25)
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
    bl __ptmf_scall
    nop
    lfs f28, lbl_804A1ED0
    mr r4, r3
    lfd f29, lbl_804A1ED8
    lis r24, 0x4330
    b lbl_801F8EC4
lbl_801F8CBC:
    clrlwi r5, r4, 16
    cmpwi r5, 0x20
    bge lbl_801F8DE0
    cntlzw r0, r31
    stfs f31, 0x8(r1)
    srwi r0, r0, 5
    addi r4, r1, 0x8
    stfs f28, 0xc(r1)
    addi r6, r1, 0x38
    stfs f28, 0x10(r1)
    stfs f28, 0x14(r1)
    stw r7, 0x3c(r1)
    stw r0, 0x48(r1)
    stfs f31, 0x2c(r26)
    lwz r3, 0x60(r26)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r0, 0x3c(r1)
    lfs f1, 0x8(r1)
    stw r0, 0x28(r1)
    lfs f0, 0x0(r25)
    fcmpo cr0, f0, f1
    ble lbl_801F8D24
    b lbl_801F8D28
lbl_801F8D24:
    fmr f1, f0
lbl_801F8D28:
    stfs f1, 0x0(r25)
    lfs f0, 0x4(r25)
    lfs f1, 0xc(r1)
    fcmpo cr0, f0, f1
    ble lbl_801F8D40
    b lbl_801F8D44
lbl_801F8D40:
    fmr f1, f0
lbl_801F8D44:
    stfs f1, 0x4(r25)
    lfs f0, 0x8(r25)
    lfs f1, 0x10(r1)
    fcmpo cr0, f0, f1
    bge lbl_801F8D5C
    b lbl_801F8D60
lbl_801F8D5C:
    fmr f1, f0
lbl_801F8D60:
    stfs f1, 0x8(r25)
    lfs f0, 0xc(r25)
    lfs f2, 0x14(r1)
    fcmpo cr0, f0, f2
    bge lbl_801F8D78
    b lbl_801F8D7C
lbl_801F8D78:
    fmr f2, f0
lbl_801F8D7C:
    lfs f1, 0x8(r25)
    lfs f0, 0x0(r25)
    stfs f2, 0xc(r25)
    fsubs f0, f1, f0
    lfs f31, 0x2c(r26)
    fcmpo cr0, f0, f30
    ble lbl_801F8DA4
    li r0, 0x1
    stb r0, 0x0(r29)
    b lbl_801F8EE0
lbl_801F8DA4:
    cmpwi r3, 0x4
    bne lbl_801F8DB4
    mr r3, r28
    b lbl_801F8F3C
lbl_801F8DB4:
    cmpwi r3, 0x1
    bne lbl_801F8DC4
    li r31, 0x0
    b lbl_801F8E8C
lbl_801F8DC4:
    cmpwi r3, 0x2
    bne lbl_801F8DD4
    li r31, 0x1
    b lbl_801F8E8C
lbl_801F8DD4:
    cmpwi r3, 0x3
    beq lbl_801F8EE0
    b lbl_801F8E8C
lbl_801F8DE0:
    cmpwi r31, 0x0
    beq lbl_801F8DF0
    lfs f0, 0x50(r26)
    fadds f31, f31, f0
lbl_801F8DF0:
    lbz r0, 0x43(r26)
    li r31, 0x1
    cmpwi r0, 0x0
    beq lbl_801F8E0C
    lfs f0, 0x44(r26)
    fadds f31, f31, f0
    b lbl_801F8E44
lbl_801F8E0C:
    lwz r3, 0x48(r26)
    clrlwi r4, r4, 16
    lfs f27, 0x24(r26)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    stw r24, 0x50(r1)
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f0, f0, f29
    fmuls f0, f0, f27
    fadds f31, f31, f0
lbl_801F8E44:
    lfs f0, 0x0(r25)
    fcmpo cr0, f0, f31
    ble lbl_801F8E54
    fmr f0, f31
lbl_801F8E54:
    lfs f2, 0x8(r25)
    stfs f0, 0x0(r25)
    fcmpo cr0, f2, f31
    bge lbl_801F8E68
    fmr f2, f31
lbl_801F8E68:
    frsp f1, f2
    lfs f0, 0x0(r25)
    stfs f2, 0x8(r25)
    fsubs f0, f1, f0
    fcmpo cr0, f0, f30
    ble lbl_801F8E8C
    li r0, 0x1
    stb r0, 0x0(r29)
    b lbl_801F8EE0
lbl_801F8E8C:
    lwz r30, 0x28(r1)
    addi r3, r1, 0x28
    addi r12, r1, 0x2c
    bl __ptmf_scall
    nop
    lfs f3, 0x0(r25)
    mr r4, r3
    lfs f2, 0x4(r25)
    lfs f1, 0x8(r25)
    lfs f0, 0xc(r25)
    stfs f3, 0x18(r1)
    stfs f2, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f0, 0x24(r1)
lbl_801F8EC4:
    lwz r7, 0x28(r1)
    subf r3, r27, r7
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    cmpw r0, r28
    ble lbl_801F8CBC
lbl_801F8EE0:
    lbz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_801F8F28
    cmpwi r30, 0x0
    beq lbl_801F8F28
    subf r3, r27, r30
    lfs f3, 0x18(r1)
    lfs f2, 0x1c(r1)
    srwi r0, r3, 31
    lfs f1, 0x20(r1)
    add r0, r0, r3
    lfs f0, 0x24(r1)
    srawi r3, r0, 1
    stfs f3, 0x0(r25)
    stfs f2, 0x4(r25)
    stfs f1, 0x8(r25)
    stfs f0, 0xc(r25)
    b lbl_801F8F3C
lbl_801F8F28:
    lwz r0, 0x28(r1)
    subf r3, r27, r0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r3, r0, 1
lbl_801F8F3C:
    opword 0xE3E100C8
    lfd f31, 0xc0(r1)
    opword 0xE3C100B8
    lfd f30, 0xb0(r1)
    opword 0xE3A100A8
    lfd f29, 0xa0(r1)
    opword 0xE3810098
    lfd f28, 0x90(r1)
    opword 0xE3610088
    addi r11, r1, 0x80
    lfd f27, 0x80(r1)
    bl _restgpr_24
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// ----------------------------------------------------------------------------
// GetCharStrmReader__Q34nw4r2ut4FontCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetCharStrmReader__Q34nw4r2ut4FontCFv() {
    nofralloc
    stwu r1, -0x20(r1)
    li r0, 0x0
    lwz r6, 0x4(r4)
    lwz r5, 0x8(r4)
    lwz r4, 0xc(r4)
    stw r6, 0x8(r1)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r0, 0x0(r3)
    stw r6, 0x4(r3)
    stw r5, 0x8(r3)
    stw r4, 0xc(r3)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// AllocStringBuffer__Q34nw4r3lyt7TextBoxFUs
// ----------------------------------------------------------------------------
extern "C" asm void AllocStringBuffer__Q34nw4r3lyt7TextBoxFUs() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_801F905C
    addi r4, r4, 0x1
    lhz r0, 0xfc(r3)
    slwi r31, r4, 1
    cmplw r31, r0
    ble lbl_801F905C
    lwz r12, 0x0(r3)
    lwz r12, 0x78(r12)
    mtctr r12
    bctrl
    addi r0, r30, 0x1
    lwz r3, lbl_8049D9D8
    slwi r4, r0, 1
    bl fn_8030CAF0
    cmpwi r3, 0x0
    bne lbl_801F9020
    li r3, 0x0
    b lbl_801F904C
lbl_801F9020:
    addi r0, r30, 0x1
    mr r5, r3
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_801F904C
lbl_801F9038:
    cmpwi r5, 0x0
    beq lbl_801F9044
    sth r4, 0x0(r5)
lbl_801F9044:
    addi r5, r5, 0x2
    bdnz lbl_801F9038
lbl_801F904C:
    cmpwi r3, 0x0
    stw r3, 0xd8(r29)
    beq lbl_801F905C
    sth r31, 0xfc(r29)
lbl_801F905C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// FreeStringBuffer__Q34nw4r3lyt7TextBoxFv
// ----------------------------------------------------------------------------
extern "C" asm void FreeStringBuffer__Q34nw4r3lyt7TextBoxFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0xd8(r3)
    cmpwi r4, 0x0
    beq lbl_801F90B0
    beq lbl_801F90A4
    lwz r3, lbl_8049D9D8
    bl fn_8030CB00
lbl_801F90A4:
    li r0, 0x0
    stw r0, 0xd8(r31)
    sth r0, 0xfc(r31)
lbl_801F90B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetString__Q34nw4r3lyt7TextBoxFPCwUs
// ----------------------------------------------------------------------------
extern "C" asm void SetString__Q34nw4r3lyt7TextBoxFPCwUs() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    mr r3, r28
    bl wcscpy
    lwz r6, 0xd8(r31)
    cmpwi r6, 0x0
    bne lbl_801F9108
    li r3, 0x0
    b lbl_801F9180
lbl_801F9108:
    lhz r4, 0xfc(r31)
    cntlzw r0, r4
    srwi r4, r4, 1
    extrwi r5, r0, 1, 26
    subi r0, r4, 0x1
    neg r4, r5
    clrlwi r0, r0, 16
    andc r0, r0, r4
    clrlwi r0, r0, 16
    cmplw r29, r0
    blt lbl_801F913C
    li r3, 0x0
    b lbl_801F9180
lbl_801F913C:
    subf r0, r29, r0
    mr r30, r3
    cmplw r3, r0
    ble lbl_801F9150
    mr r30, r0
lbl_801F9150:
    clrlslwi r0, r29, 16, 1
    mr r4, r28
    add r3, r6, r0
    slwi r5, r30, 1
    bl memcpy
    add r0, r29, r30
    lwz r4, 0xd8(r31)
    sth r0, 0xfe(r31)
    clrlslwi r0, r0, 16, 1
    li r5, 0x0
    clrlwi r3, r30, 16
    sthx r5, r4, r0
lbl_801F9180:
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
// SetString__Q34nw4r3lyt7TextBoxFPCwUsUs
// ----------------------------------------------------------------------------
extern "C" asm void SetString__Q34nw4r3lyt7TextBoxFPCwUsUs() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r8, 0xd8(r3)
    cmpwi r8, 0x0
    bne lbl_801F91D4
    li r3, 0x0
    b lbl_801F9248
lbl_801F91D4:
    lhz r3, 0xfc(r3)
    cntlzw r0, r3
    srwi r3, r3, 1
    extrwi r7, r0, 1, 26
    subi r0, r3, 0x1
    neg r3, r7
    clrlwi r0, r0, 16
    andc r0, r0, r3
    clrlwi r0, r0, 16
    cmplw r5, r0
    blt lbl_801F9208
    li r3, 0x0
    b lbl_801F9248
lbl_801F9208:
    subf r0, r5, r0
    mr r31, r6
    cmplw r6, r0
    ble lbl_801F921C
    mr r31, r0
lbl_801F921C:
    clrlslwi r0, r5, 16, 1
    slwi r5, r31, 1
    add r3, r8, r0
    bl memcpy
    add r0, r30, r31
    lwz r4, 0xd8(r29)
    sth r0, 0xfe(r29)
    clrlslwi r0, r0, 16, 1
    li r5, 0x0
    clrlwi r3, r31, 16
    sthx r5, r4, r0
lbl_801F9248:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q34nw4r2ut4FontFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q34nw4r2ut4FontFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801F928C
    cmpwi r4, 0x0
    ble lbl_801F928C
    bl dtor_80136CFC
lbl_801F928C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// LoadMtx__Q34nw4r3lyt7TextBoxFRCQ34nw4r3lyt8DrawInfo
// ----------------------------------------------------------------------------
extern "C" asm void LoadMtx__Q34nw4r3lyt7TextBoxFRCQ34nw4r3lyt8DrawInfo() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    mr r5, r3
    stw r0, 0x44(r1)
    lbz r0, 0x50(r4)
    extrwi. r0, r0, 1, 24
    beq lbl_801F92D4
    addi r3, r4, 0x4
    addi r4, r5, 0x84
    addi r5, r1, 0x8
    bl PSMTXConcat
    b lbl_801F92E0
lbl_801F92D4:
    addi r3, r3, 0x84
    addi r4, r1, 0x8
    bl PSMTXCopy
lbl_801F92E0:
    lfs f2, 0xc(r1)
    addi r3, r1, 0x8
    lfs f1, 0x1c(r1)
    li r4, 0x0
    lfs f0, 0x2c(r1)
    fneg f2, f2
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0xc(r1)
    stfs f1, 0x1c(r1)
    stfs f0, 0x2c(r1)
    bl GXLoadPosMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801F9328
// ----------------------------------------------------------------------------
extern "C" asm void fn_801F9328() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lfs f0, lbl_804A1ED0
    stw r0, 0xa4(r1)
    lwz r0, 0xe4(r4)
    stw r31, 0x9c(r1)
    mr r31, r5
    lfs f1, 0xe8(r4)
    stw r30, 0x98(r1)
    mr r30, r4
    lfs f2, 0xec(r4)
    stw r29, 0x94(r1)
    mr r29, r3
    stfs f0, 0x0(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    mr r3, r31
    stfs f0, 0x2c(r5)
    stfs f0, 0x30(r5)
    stw r0, 0x48(r5)
    bl SetFontSize__Q34nw4r2ut10CharWriterFff
    lwz r0, 0xf8(r30)
    lfs f0, 0xf0(r30)
    lfs f1, 0xf4(r30)
    cmpwi r0, 0x0
    stfs f0, 0x54(r31)
    stfs f1, 0x50(r31)
    beq lbl_801F93A0
    stw r0, 0x60(r31)
lbl_801F93A0:
    lbz r0, 0x0(r31)
    lfs f1, 0x4c(r30)
    stb r0, 0x20(r1)
    lhz r6, 0xfe(r30)
    lbz r0, 0x1(r31)
    lwz r5, 0xd8(r30)
    stb r0, 0x21(r1)
    lbz r0, 0x2(r31)
    stb r0, 0x22(r1)
    lbz r0, 0x3(r31)
    stb r0, 0x23(r1)
    lbz r0, 0x4(r31)
    stb r0, 0x24(r1)
    lbz r0, 0x5(r31)
    stb r0, 0x25(r1)
    lbz r0, 0x6(r31)
    stb r0, 0x26(r1)
    lbz r0, 0x7(r31)
    stb r0, 0x27(r1)
    lbz r0, 0x8(r31)
    stb r0, 0x28(r1)
    lbz r0, 0x9(r31)
    stb r0, 0x29(r1)
    lbz r0, 0xa(r31)
    stb r0, 0x2a(r1)
    lbz r0, 0xb(r31)
    stb r0, 0x2b(r1)
    lbz r0, 0xc(r31)
    stb r0, 0x2c(r1)
    lbz r0, 0xd(r31)
    stb r0, 0x2d(r1)
    lbz r0, 0xe(r31)
    stb r0, 0x2e(r1)
    lbz r0, 0xf(r31)
    stb r0, 0x2f(r1)
    lbz r0, 0x10(r31)
    stb r0, 0x30(r1)
    lbz r0, 0x11(r31)
    stb r0, 0x31(r1)
    lbz r0, 0x12(r31)
    stb r0, 0x32(r1)
    lbz r0, 0x13(r31)
    stb r0, 0x33(r1)
    lbz r0, 0x14(r31)
    stb r0, 0x34(r1)
    lbz r0, 0x15(r31)
    stb r0, 0x35(r1)
    lbz r0, 0x16(r31)
    stb r0, 0x36(r1)
    lbz r0, 0x17(r31)
    stb r0, 0x37(r1)
    lbz r0, 0x18(r31)
    stb r0, 0x38(r1)
    lbz r0, 0x19(r31)
    stb r0, 0x39(r1)
    lbz r0, 0x1a(r31)
    stb r0, 0x3a(r1)
    lbz r0, 0x1b(r31)
    stb r0, 0x3b(r1)
    lbz r0, 0x1c(r31)
    stb r0, 0x3c(r1)
    lbz r0, 0x1d(r31)
    stb r0, 0x3d(r1)
    lbz r0, 0x1e(r31)
    stb r0, 0x3e(r1)
    lbz r0, 0x1f(r31)
    stb r0, 0x3f(r1)
    lwz r0, 0x20(r31)
    stw r0, 0x40(r1)
    lwz r3, 0x24(r31)
    lwz r0, 0x28(r31)
    stw r3, 0x44(r1)
    stw r0, 0x48(r1)
    lwz r3, 0x2c(r31)
    lwz r0, 0x30(r31)
    stw r3, 0x4c(r1)
    stw r0, 0x50(r1)
    lwz r0, 0x34(r31)
    stw r0, 0x54(r1)
    lwz r3, 0x38(r31)
    lwz r0, 0x3c(r31)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    lbz r0, 0x40(r31)
    stb r0, 0x60(r1)
    lbz r0, 0x41(r31)
    stb r0, 0x61(r1)
    lbz r0, 0x42(r31)
    stb r0, 0x62(r1)
    lbz r0, 0x43(r31)
    stb r0, 0x63(r1)
    lfs f0, 0x44(r31)
    stfs f0, 0x64(r1)
    lwz r0, 0x48(r31)
    stw r0, 0x68(r1)
    lfs f0, 0x4c(r31)
    stfs f0, 0x6c(r1)
    lfs f0, 0x50(r31)
    stfs f0, 0x70(r1)
    lfs f0, 0x54(r31)
    mr r3, r29
    addi r4, r1, 0x20
    stfs f0, 0x74(r1)
    lwz r0, 0x58(r31)
    stw r0, 0x78(r1)
    lwz r0, 0x5c(r31)
    stw r0, 0x7c(r1)
    lwz r0, 0x60(r31)
    stw r0, 0x80(r1)
    bl fn_801F96AC
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_8022666C
    lfs f3, 0xc(r29)
    mr r3, r30
    lfs f2, 0x4(r29)
    lfs f1, 0x8(r29)
    lfs f0, 0x0(r29)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    bl GetVtxPos__Q34nw4r3lyt4PaneCFv
    lis r5, 0x5555
    lbz r6, 0x100(r30)
    addi r0, r5, 0x5556
    stw r4, 0xc(r1)
    mulhw r5, r0, r6
    stw r3, 0x8(r1)
    stw r3, 0x10(r1)
    srwi r0, r5, 31
    stw r4, 0x14(r1)
    add r0, r5, r0
    mulli r0, r0, 0x3
    subf r0, r0, r6
    clrlwi r0, r0, 24
    cmpwi r0, 0x1
    beq lbl_801F95E4
    bge lbl_801F95D0
    b lbl_801F95DC
lbl_801F95D0:
    cmpwi r0, 0x3
    bge lbl_801F95DC
    b lbl_801F95EC
lbl_801F95DC:
    lfs f3, lbl_804A1ED0
    b lbl_801F95F0
lbl_801F95E4:
    lfs f3, lbl_804A1EE0
    b lbl_801F95F0
lbl_801F95EC:
    lfs f3, lbl_804A1EE4
lbl_801F95F0:
    lis r3, 0x5555
    lfs f2, 0x4c(r30)
    lfs f1, 0x18(r1)
    addi r0, r3, 0x5556
    mulhw r3, r0, r6
    lfs f0, 0x10(r1)
    fsubs f1, f2, f1
    fmuls f1, f1, f3
    srwi r0, r3, 31
    add r0, r3, r0
    fadds f0, f0, f1
    clrlwi r0, r0, 24
    cmpwi r0, 0x1
    stfs f0, 0x10(r1)
    beq lbl_801F9648
    bge lbl_801F9634
    b lbl_801F9640
lbl_801F9634:
    cmpwi r0, 0x3
    bge lbl_801F9640
    b lbl_801F9650
lbl_801F9640:
    lfs f5, lbl_804A1ED0
    b lbl_801F9654
lbl_801F9648:
    lfs f5, lbl_804A1EE0
    b lbl_801F9654
lbl_801F9650:
    lfs f5, lbl_804A1EE4
lbl_801F9654:
    lfs f0, 0x50(r30)
    lfs f4, 0x1c(r1)
    lfs f1, 0x10(r1)
    fsubs f3, f0, f4
    lfs f0, 0x18(r1)
    stfs f1, 0x0(r29)
    fadds f0, f1, f0
    lfs f2, 0x14(r1)
    fmuls f1, f3, f5
    stfs f0, 0x8(r29)
    fsubs f1, f2, f1
    fsubs f0, f1, f4
    stfs f1, 0x4(r29)
    stfs f1, 0x14(r1)
    stfs f0, 0xc(r29)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// fn_801F96AC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801F96AC() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    fmr f30, f1
    lfs f31, lbl_804A1ED0
    stw r31, 0x2c(r1)
    mr r31, r6
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    stfs f31, 0x0(r3)
    stfs f31, 0x8(r3)
    stfs f31, 0x4(r3)
    stfs f31, 0xc(r3)
    stfs f31, 0x2c(r4)
    stfs f31, 0x30(r4)
lbl_801F9708:
    fmr f1, f30
    stfs f31, 0x10(r1)
    mr r4, r29
    mr r5, r30
    stfs f31, 0x14(r1)
    mr r6, r31
    stfs f31, 0x18(r1)
    addi r3, r1, 0x10
    addi r7, r1, 0x8
    stfs f31, 0x1c(r1)
    bl fn_801F8B9C
    lfs f1, 0x10(r1)
    slwi r0, r3, 1
    lfs f0, 0x0(r28)
    add r30, r30, r0
    subf r31, r3, r31
    fcmpo cr0, f0, f1
    ble lbl_801F9754
    b lbl_801F9758
lbl_801F9754:
    fmr f1, f0
lbl_801F9758:
    stfs f1, 0x0(r28)
    lfs f0, 0x4(r28)
    lfs f1, 0x14(r1)
    fcmpo cr0, f0, f1
    ble lbl_801F9770
    b lbl_801F9774
lbl_801F9770:
    fmr f1, f0
lbl_801F9774:
    stfs f1, 0x4(r28)
    lfs f0, 0x8(r28)
    lfs f1, 0x18(r1)
    fcmpo cr0, f0, f1
    bge lbl_801F978C
    b lbl_801F9790
lbl_801F978C:
    fmr f1, f0
lbl_801F9790:
    stfs f1, 0x8(r28)
    lfs f0, 0xc(r28)
    lfs f1, 0x1c(r1)
    fcmpo cr0, f0, f1
    bge lbl_801F97A8
    b lbl_801F97AC
lbl_801F97A8:
    fmr f1, f0
lbl_801F97AC:
    stfs f1, 0xc(r28)
    lbz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_801F9848
    fmr f1, f30
    mr r4, r29
    addi r3, r1, 0x10
    addi r7, r1, 0x8
    la r5, lbl_8049C510
    li r6, 0x1
    bl fn_801F8B9C
    lfs f1, 0x10(r1)
    lfs f0, 0x0(r28)
    fcmpo cr0, f0, f1
    ble lbl_801F97EC
    b lbl_801F97F0
lbl_801F97EC:
    fmr f1, f0
lbl_801F97F0:
    stfs f1, 0x0(r28)
    lfs f0, 0x4(r28)
    lfs f1, 0x14(r1)
    fcmpo cr0, f0, f1
    ble lbl_801F9808
    b lbl_801F980C
lbl_801F9808:
    fmr f1, f0
lbl_801F980C:
    stfs f1, 0x4(r28)
    lfs f0, 0x8(r28)
    lfs f1, 0x18(r1)
    fcmpo cr0, f0, f1
    bge lbl_801F9824
    b lbl_801F9828
lbl_801F9824:
    fmr f1, f0
lbl_801F9828:
    stfs f1, 0x8(r28)
    lfs f0, 0xc(r28)
    lfs f1, 0x1c(r1)
    fcmpo cr0, f0, f1
    bge lbl_801F9840
    b lbl_801F9844
lbl_801F9840:
    fmr f1, f0
lbl_801F9844:
    stfs f1, 0xc(r28)
lbl_801F9848:
    cmpwi r31, 0x0
    bgt lbl_801F9708
    opword 0xE3E10048
    lfd f31, 0x40(r1)
    opword 0xE3C10038
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x54(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// GetRuntimeTypeInfo__Q34nw4r3lyt7TextBoxCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetRuntimeTypeInfo__Q34nw4r3lyt7TextBoxCFv() {
    nofralloc
    la r3, lbl_8049D9E8
    blr
}

// ----------------------------------------------------------------------------
// fn_801F9888
// ----------------------------------------------------------------------------
extern "C" asm void fn_801F9888() {
    nofralloc
    la r0, lbl_8049D9D0
    stw r0, lbl_8049D9E8
    blr
}

