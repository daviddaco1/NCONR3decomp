#include "types.h"

// Translation unit: src/nw4r/ut/ut_TextWriterBase.cpp
// Total functions: 10

// Small Data symbols (@sda21)
extern "C" float lbl_8049DAD8;
extern "C" float lbl_8049DADC;
extern "C" float lbl_8049DAE0;
extern "C" float lbl_8049DAE1;
extern "C" float lbl_804A22D8;
extern "C" float lbl_804A22DC;
extern "C" float lbl_804A22E0;
extern "C" float lbl_804A22E8;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_804091C0[];
extern "C" u8 lbl_804091CC[];

// Forward declarations
extern "C" void GetCharStrmReader__Q34nw4r2ut4FontCFv();
extern "C" void GetFontAscent__Q34nw4r2ut10CharWriterCFv();
extern "C" void Print__Q34nw4r2ut10CharWriterFUs();
extern "C" void __ct__Q34nw4r2ut10CharWriterFv();
extern "C" void __dt__Q34nw4r2ut10CharWriterFv();
extern "C" void __ptmf_scall();
extern "C" void __register_global_object();
extern "C" void _restgpr_20();
extern "C" void _restgpr_21();
extern "C" void _restgpr_27();
extern "C" void _savegpr_20();
extern "C" void _savegpr_21();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_802230EC();
extern "C" void fn_802230FC();
extern "C" void fn_80223454();
extern "C" void fn_80223464();
extern "C" void fn_80226594();
extern "C" void fn_80226610();
extern "C" void fn_8022666C();
extern "C" void fn_802266C4();
extern "C" void fn_80226740();
extern "C" void fn_80226748();
extern "C" void fn_80226DD0();
extern "C" void fn_80226EF0();
extern "C" void fn_8022797C();
extern "C" void fn_802280B8();

// ----------------------------------------------------------------------------
// fn_80226594
// ----------------------------------------------------------------------------
extern "C" asm void fn_80226594() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x48(r3)
    stw r31, 0x1c(r1)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_802265CC
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_802265D0
lbl_802265CC:
    li r3, 0x0
lbl_802265D0:
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f2, lbl_804A22E0
    stw r0, 0x8(r1)
    lfs f3, 0x28(r31)
    lfd f1, 0x8(r1)
    lfs f0, 0x54(r31)
    fsubs f1, f1, f2
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    fmuls f1, f1, f3
    fadds f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80226610
// ----------------------------------------------------------------------------
extern "C" asm void fn_80226610() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl __ct__Q34nw4r2ut10CharWriterFv
    lfs f0, lbl_804A22DC
    li r5, 0x4
    lfs f1, lbl_804A22D8
    li r4, 0x0
    la r0, lbl_8049DADC
    stfs f0, 0x50(r31)
    mr r3, r31
    stfs f1, 0x4c(r31)
    stfs f0, 0x54(r31)
    stw r5, 0x58(r31)
    stw r4, 0x5c(r31)
    stw r0, 0x60(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8022666C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8022666C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802266A8
    li r4, 0x0
    bl __dt__Q34nw4r2ut10CharWriterFv
    cmpwi r31, 0x0
    ble lbl_802266A8
    mr r3, r30
    bl dtor_80136CFC
lbl_802266A8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_802266C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_802266C4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x48(r3)
    stw r31, 0x1c(r1)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_802266FC
    mr r3, r0
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_80226700
lbl_802266FC:
    li r3, 0x0
lbl_80226700:
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lfd f2, lbl_804A22E0
    stw r0, 0x8(r1)
    lfs f3, 0x28(r31)
    lfd f1, 0x8(r1)
    lfs f0, 0x54(r31)
    fsubs f1, f1, f2
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    fmuls f1, f1, f3
    fadds f1, f0, f1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80226740
// ----------------------------------------------------------------------------
extern "C" asm void fn_80226740() {
    nofralloc
    li r6, 0x1
    b fn_80226EF0
}

// ----------------------------------------------------------------------------
// fn_80226748
// ----------------------------------------------------------------------------
extern "C" asm void fn_80226748() {
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    stfd f31, 0x160(r1)
    opword 0xF3E10168
    stfd f30, 0x150(r1)
    opword 0xF3C10158
    stfd f29, 0x140(r1)
    opword 0xF3A10148
    stfd f28, 0x130(r1)
    opword 0xF3810138
    stfd f27, 0x120(r1)
    opword 0xF3610128
    addi r11, r1, 0x120
    bl _savegpr_20
    lfs f1, 0x4c(r3)
    slwi r31, r6, 1
    lfs f0, lbl_804A22D8
    mr r22, r3
    lwz r21, 0x0(r5)
    mr r23, r4
    fcmpo cr0, f1, f0
    mr r24, r5
    add r30, r21, r31
    mfcr r29
    lfs f31, lbl_804A22DC
    li r20, 0x0
    stw r3, 0x5c(r1)
    srwi r29, r29, 31
    addi r3, r1, 0x28
    stw r20, 0x64(r1)
    li r28, 0x0
    li r27, 0x0
    stw r20, 0x68(r1)
    stw r20, 0x6c(r1)
    stw r21, 0x60(r1)
    stfs f31, 0x38(r1)
    lwz r4, 0x48(r22)
    stfs f31, 0x3c(r1)
    stfs f31, 0x40(r1)
    stfs f31, 0x44(r1)
    bl GetCharStrmReader__Q34nw4r2ut4FontCFv
    lfs f0, lbl_804A22DC
    stfs f0, 0x0(r23)
    stfs f0, 0x8(r23)
    lwz r3, 0x48(r22)
    cmpwi r3, 0x0
    beq lbl_8022681C
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_80226820
lbl_8022681C:
    mr r3, r20
lbl_80226820:
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xdc(r1)
    lfd f2, lbl_804A22E0
    stw r0, 0xd8(r1)
    lfs f3, 0x28(r22)
    lfd f0, 0xd8(r1)
    lfs f1, 0x54(r22)
    fsubs f2, f0, f2
    lfs f0, lbl_804A22DC
    fmuls f2, f2, f3
    fadds f1, f1, f2
    fcmpo cr0, f0, f1
    ble lbl_8022685C
    b lbl_80226860
lbl_8022685C:
    fmr f1, f0
lbl_80226860:
    stfs f1, 0x4(r23)
    lwz r3, 0x48(r22)
    cmpwi r3, 0x0
    beq lbl_80226884
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_80226888
lbl_80226884:
    li r3, 0x0
lbl_80226888:
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xe4(r1)
    lfd f2, lbl_804A22E0
    stw r0, 0xe0(r1)
    lfs f3, 0x28(r22)
    lfd f0, 0xe0(r1)
    lfs f1, 0x54(r22)
    fsubs f2, f0, f2
    lfs f0, lbl_804A22DC
    fmuls f2, f2, f3
    fadds f4, f1, f2
    fcmpo cr0, f0, f4
    bge lbl_802268C4
    b lbl_802268C8
lbl_802268C4:
    fmr f4, f0
lbl_802268C8:
    frsp f0, f4
    lfs f3, 0x0(r23)
    lfs f2, 0x4(r23)
    addi r3, r1, 0x28
    lfs f1, 0x8(r23)
    addi r12, r1, 0x2c
    stfs f4, 0xc(r23)
    li r26, 0x0
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f0, 0x44(r1)
    stw r21, 0x28(r1)
    bl __ptmf_scall
    nop
    lfs f29, lbl_804A22DC
    mr r25, r3
    lfd f30, lbl_804A22E0
    addi r20, r1, 0x70
    lis r21, 0x4330
    b lbl_80226D78
lbl_8022691C:
    clrlwi r5, r25, 16
    cmpwi r5, 0x20
    bge lbl_80226C94
    cntlzw r0, r28
    stfs f31, 0x18(r1)
    srwi r0, r0, 5
    cmpwi r29, 0x0
    stfs f29, 0x1c(r1)
    stfs f29, 0x20(r1)
    stfs f29, 0x24(r1)
    stw r3, 0x60(r1)
    stw r0, 0x6c(r1)
    stfs f31, 0x2c(r22)
    beq lbl_80226BB0
    cmpwi r5, 0xa
    beq lbl_80226BB0
    cmpwi r26, 0x0
    beq lbl_80226BB0
    lwz r7, 0x5c(r1)
    lwz r6, 0x60(r1)
    lwz r4, 0x64(r1)
    lwz r3, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r7, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r4, 0x50(r1)
    stw r3, 0x54(r1)
    stw r0, 0x58(r1)
    lbz r0, 0x0(r22)
    stb r0, 0x70(r1)
    lbz r0, 0x1(r22)
    stb r0, 0x71(r1)
    lbz r0, 0x2(r22)
    stb r0, 0x72(r1)
    lbz r0, 0x3(r22)
    stb r0, 0x73(r1)
    lbz r0, 0x4(r22)
    stb r0, 0x74(r1)
    lbz r0, 0x5(r22)
    stb r0, 0x75(r1)
    lbz r0, 0x6(r22)
    stb r0, 0x76(r1)
    lbz r0, 0x7(r22)
    stb r0, 0x77(r1)
    lbz r0, 0x8(r22)
    stb r0, 0x78(r1)
    lbz r0, 0x9(r22)
    stb r0, 0x79(r1)
    lbz r0, 0xa(r22)
    stb r0, 0x7a(r1)
    lbz r0, 0xb(r22)
    stb r0, 0x7b(r1)
    lbz r0, 0xc(r22)
    stb r0, 0x7c(r1)
    lbz r0, 0xd(r22)
    stb r0, 0x7d(r1)
    lbz r0, 0xe(r22)
    stb r0, 0x7e(r1)
    lbz r0, 0xf(r22)
    stb r0, 0x7f(r1)
    lbz r0, 0x10(r22)
    stb r0, 0x80(r1)
    lbz r0, 0x11(r22)
    stb r0, 0x81(r1)
    lbz r0, 0x12(r22)
    stb r0, 0x82(r1)
    lbz r0, 0x13(r22)
    stb r0, 0x83(r1)
    lbz r0, 0x14(r22)
    stb r0, 0x84(r1)
    lbz r0, 0x15(r22)
    stb r0, 0x85(r1)
    lbz r0, 0x16(r22)
    stb r0, 0x86(r1)
    lbz r0, 0x17(r22)
    stb r0, 0x87(r1)
    lbz r0, 0x18(r22)
    stb r0, 0x88(r1)
    lbz r0, 0x19(r22)
    stb r0, 0x89(r1)
    lbz r0, 0x1a(r22)
    stb r0, 0x8a(r1)
    lbz r0, 0x1b(r22)
    stb r0, 0x8b(r1)
    lbz r0, 0x1c(r22)
    stb r0, 0x8c(r1)
    lbz r0, 0x1d(r22)
    stb r0, 0x8d(r1)
    lbz r0, 0x1e(r22)
    stb r0, 0x8e(r1)
    lbz r0, 0x1f(r22)
    stb r0, 0x8f(r1)
    lwz r0, 0x20(r22)
    stw r0, 0x90(r1)
    lwz r3, 0x24(r22)
    lwz r0, 0x28(r22)
    stw r3, 0x94(r1)
    stw r0, 0x98(r1)
    lwz r3, 0x2c(r22)
    lwz r0, 0x30(r22)
    stw r3, 0x9c(r1)
    stw r0, 0xa0(r1)
    lwz r0, 0x34(r22)
    stw r0, 0xa4(r1)
    lwz r3, 0x38(r22)
    lwz r0, 0x3c(r22)
    stw r3, 0xa8(r1)
    stw r0, 0xac(r1)
    lbz r0, 0x40(r22)
    stb r0, 0xb0(r1)
    lbz r0, 0x41(r22)
    stb r0, 0xb1(r1)
    lbz r0, 0x42(r22)
    stb r0, 0xb2(r1)
    lbz r0, 0x43(r22)
    stb r0, 0xb3(r1)
    lfs f0, 0x44(r22)
    stfs f0, 0xb4(r1)
    lwz r0, 0x48(r22)
    addi r4, r1, 0x8
    addi r6, r1, 0x48
    stw r0, 0xb8(r1)
    lfs f0, 0x4c(r22)
    stfs f0, 0xbc(r1)
    lfs f0, 0x50(r22)
    stfs f0, 0xc0(r1)
    lfs f0, 0x54(r22)
    stfs f0, 0xc4(r1)
    lwz r0, 0x58(r22)
    stw r0, 0xc8(r1)
    lwz r0, 0x5c(r22)
    stw r0, 0xcc(r1)
    lwz r0, 0x60(r22)
    stw r0, 0xd0(r1)
    stfs f29, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f29, 0x14(r1)
    stw r20, 0x48(r1)
    lwz r3, 0x60(r22)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lfs f1, 0x10(r1)
    lfs f0, 0x8(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f0, f29
    ble lbl_80226BA4
    lfs f2, 0x9c(r1)
    lfs f1, 0x64(r1)
    lfs f0, 0x4c(r22)
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_80226BA4
    stw r26, 0x28(r1)
    mr r3, r20
    li r27, 0x1
    li r25, 0xa
    li r4, 0x0
    bl __dt__Q34nw4r2ut10CharWriterFv
    b lbl_80226D78
lbl_80226BA4:
    addi r3, r1, 0x70
    li r4, 0x0
    bl __dt__Q34nw4r2ut10CharWriterFv
lbl_80226BB0:
    lwz r3, 0x60(r22)
    addi r4, r1, 0x18
    clrlwi r5, r25, 16
    addi r6, r1, 0x5c
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r0, 0x60(r1)
    lfs f1, 0x18(r1)
    stw r0, 0x28(r1)
    lfs f0, 0x0(r23)
    fcmpo cr0, f0, f1
    ble lbl_80226BEC
    b lbl_80226BF0
lbl_80226BEC:
    fmr f1, f0
lbl_80226BF0:
    stfs f1, 0x0(r23)
    lfs f0, 0x4(r23)
    lfs f1, 0x1c(r1)
    fcmpo cr0, f0, f1
    ble lbl_80226C08
    b lbl_80226C0C
lbl_80226C08:
    fmr f1, f0
lbl_80226C0C:
    stfs f1, 0x4(r23)
    lfs f0, 0x8(r23)
    lfs f1, 0x20(r1)
    fcmpo cr0, f0, f1
    bge lbl_80226C24
    b lbl_80226C28
lbl_80226C24:
    fmr f1, f0
lbl_80226C28:
    stfs f1, 0x8(r23)
    lfs f0, 0xc(r23)
    lfs f1, 0x24(r1)
    fcmpo cr0, f0, f1
    bge lbl_80226C40
    b lbl_80226C44
lbl_80226C40:
    fmr f1, f0
lbl_80226C44:
    stfs f1, 0xc(r23)
    cmpwi r3, 0x4
    lfs f31, 0x2c(r22)
    bne lbl_80226C68
    lwz r0, 0x0(r24)
    li r3, 0x0
    add r0, r0, r31
    stw r0, 0x0(r24)
    b lbl_80226D90
lbl_80226C68:
    cmpwi r3, 0x1
    bne lbl_80226C78
    li r28, 0x0
    b lbl_80226D58
lbl_80226C78:
    cmpwi r3, 0x2
    bne lbl_80226C88
    li r28, 0x1
    b lbl_80226D58
lbl_80226C88:
    cmpwi r3, 0x3
    beq lbl_80226D84
    b lbl_80226D58
lbl_80226C94:
    cmpwi r28, 0x0
    lfs f27, lbl_804A22DC
    beq lbl_80226CA8
    lfs f0, 0x50(r22)
    fadds f27, f27, f0
lbl_80226CA8:
    lbz r0, 0x43(r22)
    cmpwi r0, 0x0
    beq lbl_80226CC0
    lfs f0, 0x44(r22)
    fadds f27, f27, f0
    b lbl_80226CF8
lbl_80226CC0:
    lwz r3, 0x48(r22)
    clrlwi r4, r25, 16
    lfs f28, 0x24(r22)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    stw r21, 0xe0(r1)
    stw r0, 0xe4(r1)
    lfd f0, 0xe0(r1)
    fsubs f0, f0, f30
    fmuls f0, f0, f28
    fadds f27, f27, f0
lbl_80226CF8:
    cmpwi r29, 0x0
    beq lbl_80226D28
    cmpwi r26, 0x0
    beq lbl_80226D28
    fadds f1, f31, f27
    lfs f0, 0x4c(r22)
    fcmpo cr0, f1, f0
    ble lbl_80226D28
    stw r26, 0x28(r1)
    li r27, 0x1
    li r25, 0xa
    b lbl_80226D78
lbl_80226D28:
    fadds f31, f31, f27
    lfs f0, 0x0(r23)
    fcmpo cr0, f0, f31
    ble lbl_80226D3C
    fmr f0, f31
lbl_80226D3C:
    lfs f1, 0x8(r23)
    stfs f0, 0x0(r23)
    fcmpo cr0, f1, f31
    bge lbl_80226D50
    fmr f1, f31
lbl_80226D50:
    stfs f1, 0x8(r23)
    li r28, 0x1
lbl_80226D58:
    cmpwi r29, 0x0
    beq lbl_80226D64
    lwz r26, 0x28(r1)
lbl_80226D64:
    addi r3, r1, 0x28
    addi r12, r1, 0x2c
    bl __ptmf_scall
    nop
    mr r25, r3
lbl_80226D78:
    lwz r3, 0x28(r1)
    cmplw r3, r30
    ble lbl_8022691C
lbl_80226D84:
    lwz r0, 0x28(r1)
    mr r3, r27
    stw r0, 0x0(r24)
lbl_80226D90:
    opword 0xE3E10168
    lfd f31, 0x160(r1)
    opword 0xE3C10158
    lfd f30, 0x150(r1)
    opword 0xE3A10148
    lfd f29, 0x140(r1)
    opword 0xE3810138
    lfd f28, 0x130(r1)
    opword 0xE3610128
    addi r11, r1, 0x120
    lfd f27, 0x120(r1)
    bl _restgpr_20
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

// ----------------------------------------------------------------------------
// fn_80226DD0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80226DD0() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    slwi r0, r6, 1
    lfs f31, lbl_804A22DC
    stw r31, 0x2c(r1)
    add r31, r5, r0
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    stw r5, 0x8(r1)
    stfs f31, 0x0(r4)
    stfs f31, 0x8(r4)
    stfs f31, 0x4(r4)
    stfs f31, 0xc(r4)
    stfs f31, 0x2c(r3)
    stfs f31, 0x30(r3)
lbl_80226E20:
    stfs f31, 0x10(r1)
    mr r3, r29
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    stfs f31, 0x14(r1)
    stfs f31, 0x18(r1)
    stfs f31, 0x1c(r1)
    bl fn_80226748
    lwz r0, 0x8(r1)
    lfs f1, 0x10(r1)
    lfs f0, 0x0(r30)
    subf r3, r0, r31
    srwi r0, r3, 31
    add r0, r0, r3
    fcmpo cr0, f0, f1
    srawi r6, r0, 1
    ble lbl_80226E68
    b lbl_80226E6C
lbl_80226E68:
    fmr f1, f0
lbl_80226E6C:
    stfs f1, 0x0(r30)
    lfs f0, 0x4(r30)
    lfs f1, 0x14(r1)
    fcmpo cr0, f0, f1
    ble lbl_80226E84
    b lbl_80226E88
lbl_80226E84:
    fmr f1, f0
lbl_80226E88:
    stfs f1, 0x4(r30)
    lfs f0, 0x8(r30)
    lfs f1, 0x18(r1)
    fcmpo cr0, f0, f1
    bge lbl_80226EA0
    b lbl_80226EA4
lbl_80226EA0:
    fmr f1, f0
lbl_80226EA4:
    stfs f1, 0x8(r30)
    lfs f0, 0xc(r30)
    lfs f1, 0x1c(r1)
    fcmpo cr0, f0, f1
    bge lbl_80226EBC
    b lbl_80226EC0
lbl_80226EBC:
    fmr f1, f0
lbl_80226EC0:
    cmpwi r6, 0x0
    stfs f1, 0xc(r30)
    bgt lbl_80226E20
    opword 0xE3E10038
    lwz r0, 0x44(r1)
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80226EF0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80226EF0() {
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    stfd f31, 0x280(r1)
    opword 0xF3E10288
    stfd f30, 0x270(r1)
    opword 0xF3C10278
    stfd f29, 0x260(r1)
    opword 0xF3A10268
    stfd f28, 0x250(r1)
    opword 0xF3810258
    stfd f27, 0x240(r1)
    opword 0xF3610248
    stfd f26, 0x230(r1)
    opword 0xF3410238
    stfd f25, 0x220(r1)
    opword 0xF3210228
    stfd f24, 0x210(r1)
    opword 0xF3010218
    stfd f23, 0x200(r1)
    opword 0xF2E10208
    stfd f22, 0x1f0(r1)
    opword 0xF2C101F8
    addi r11, r1, 0x1f0
    bl _savegpr_21
    lfs f1, 0x2c(r3)
    mr r22, r4
    lfs f0, lbl_804A22D8
    mr r23, r5
    stfs f1, 0x14(r1)
    mr r21, r3
    mr r24, r6
    lfs f28, 0x30(r3)
    stfs f28, 0x10(r1)
    lfs f1, 0x4c(r3)
    fcmpo cr0, f1, f0
    mfcr r29
    mr r27, r22
    srwi r29, r29, 31
    mr r26, r22
    mr r6, r22
    mr r7, r23
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    li r28, 0x0
    bl fn_8022797C
    lfs f0, 0x30(r21)
    li r0, 0x0
    lfs f2, 0x14(r1)
    fmr f25, f1
    stw r0, 0x74(r1)
    fsubs f26, f28, f0
    lfs f0, 0x10(r1)
    addi r3, r1, 0x48
    stw r0, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r21, 0x6c(r1)
    stw r22, 0x70(r1)
    stfs f2, 0x74(r1)
    stfs f0, 0x78(r1)
    lwz r4, 0x48(r21)
    bl GetCharStrmReader__Q34nw4r2ut4FontCFv
    stw r22, 0x48(r1)
    addi r3, r1, 0x48
    addi r12, r1, 0x4c
    bl __ptmf_scall
    nop
    lfs f29, lbl_804A22DC
    mr r25, r3
    lfs f30, lbl_804A22E8
    addi r30, r1, 0x148
    lfd f31, lbl_804A22E0
    lis r31, 0x4330
    b lbl_80227884
lbl_80227018:
    clrlwi r5, r25, 16
    cmpwi r5, 0x20
    bge lbl_8022775C
    cntlzw r0, r28
    cmpwi r29, 0x0
    srwi r6, r0, 5
    stw r7, 0x70(r1)
    stw r6, 0x7c(r1)
    beq lbl_8022728C
    cmpwi r5, 0xa
    beq lbl_8022728C
    cmplw r27, r26
    beq lbl_8022728C
    lwz r4, 0x6c(r1)
    lwz r3, 0x74(r1)
    lwz r0, 0x78(r1)
    stw r4, 0x58(r1)
    stw r7, 0x5c(r1)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    stw r6, 0x68(r1)
    lbz r0, 0x0(r21)
    stb r0, 0x148(r1)
    lbz r0, 0x1(r21)
    stb r0, 0x149(r1)
    lbz r0, 0x2(r21)
    stb r0, 0x14a(r1)
    lbz r0, 0x3(r21)
    stb r0, 0x14b(r1)
    lbz r0, 0x4(r21)
    stb r0, 0x14c(r1)
    lbz r0, 0x5(r21)
    stb r0, 0x14d(r1)
    lbz r0, 0x6(r21)
    stb r0, 0x14e(r1)
    lbz r0, 0x7(r21)
    stb r0, 0x14f(r1)
    lbz r0, 0x8(r21)
    stb r0, 0x150(r1)
    lbz r0, 0x9(r21)
    stb r0, 0x151(r1)
    lbz r0, 0xa(r21)
    stb r0, 0x152(r1)
    lbz r0, 0xb(r21)
    stb r0, 0x153(r1)
    lbz r0, 0xc(r21)
    stb r0, 0x154(r1)
    lbz r0, 0xd(r21)
    stb r0, 0x155(r1)
    lbz r0, 0xe(r21)
    stb r0, 0x156(r1)
    lbz r0, 0xf(r21)
    stb r0, 0x157(r1)
    lbz r0, 0x10(r21)
    stb r0, 0x158(r1)
    lbz r0, 0x11(r21)
    stb r0, 0x159(r1)
    lbz r0, 0x12(r21)
    stb r0, 0x15a(r1)
    lbz r0, 0x13(r21)
    stb r0, 0x15b(r1)
    lbz r0, 0x14(r21)
    stb r0, 0x15c(r1)
    lbz r0, 0x15(r21)
    stb r0, 0x15d(r1)
    lbz r0, 0x16(r21)
    stb r0, 0x15e(r1)
    lbz r0, 0x17(r21)
    stb r0, 0x15f(r1)
    lbz r0, 0x18(r21)
    stb r0, 0x160(r1)
    lbz r0, 0x19(r21)
    stb r0, 0x161(r1)
    lbz r0, 0x1a(r21)
    stb r0, 0x162(r1)
    lbz r0, 0x1b(r21)
    stb r0, 0x163(r1)
    lbz r0, 0x1c(r21)
    stb r0, 0x164(r1)
    lbz r0, 0x1d(r21)
    stb r0, 0x165(r1)
    lbz r0, 0x1e(r21)
    stb r0, 0x166(r1)
    lbz r0, 0x1f(r21)
    stb r0, 0x167(r1)
    lwz r0, 0x20(r21)
    stw r0, 0x168(r1)
    lwz r3, 0x24(r21)
    lwz r0, 0x28(r21)
    stw r3, 0x16c(r1)
    stw r0, 0x170(r1)
    lwz r3, 0x2c(r21)
    lwz r0, 0x30(r21)
    stw r3, 0x174(r1)
    stw r0, 0x178(r1)
    lwz r0, 0x34(r21)
    stw r0, 0x17c(r1)
    lwz r3, 0x38(r21)
    lwz r0, 0x3c(r21)
    stw r3, 0x180(r1)
    stw r0, 0x184(r1)
    lbz r0, 0x40(r21)
    stb r0, 0x188(r1)
    lbz r0, 0x41(r21)
    stb r0, 0x189(r1)
    lbz r0, 0x42(r21)
    stb r0, 0x18a(r1)
    lbz r0, 0x43(r21)
    stb r0, 0x18b(r1)
    lfs f0, 0x44(r21)
    stfs f0, 0x18c(r1)
    lwz r0, 0x48(r21)
    addi r4, r1, 0x38
    addi r6, r1, 0x58
    stw r0, 0x190(r1)
    lfs f0, 0x4c(r21)
    stfs f0, 0x194(r1)
    lfs f0, 0x50(r21)
    stfs f0, 0x198(r1)
    lfs f0, 0x54(r21)
    stfs f0, 0x19c(r1)
    lwz r0, 0x58(r21)
    stw r0, 0x1a0(r1)
    lwz r0, 0x5c(r21)
    stw r0, 0x1a4(r1)
    lwz r0, 0x60(r21)
    stw r0, 0x1a8(r1)
    stfs f29, 0x38(r1)
    stfs f29, 0x3c(r1)
    stfs f29, 0x40(r1)
    stfs f29, 0x44(r1)
    stw r30, 0x58(r1)
    lwz r3, 0x60(r21)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lfs f1, 0x40(r1)
    lfs f0, 0x38(r1)
    fsubs f0, f1, f0
    fcmpo cr0, f0, f29
    ble lbl_80227280
    lfs f2, 0x174(r1)
    lfs f1, 0x74(r1)
    lfs f0, 0x4c(r21)
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_80227280
    stw r27, 0x48(r1)
    mr r3, r30
    li r25, 0xa
    li r4, 0x0
    bl __dt__Q34nw4r2ut10CharWriterFv
    b lbl_80227884
lbl_80227280:
    addi r3, r1, 0x148
    li r4, 0x0
    bl __dt__Q34nw4r2ut10CharWriterFv
lbl_8022728C:
    lwz r3, 0x60(r21)
    clrlwi r4, r25, 16
    addi r5, r1, 0x6c
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x3
    bne lbl_80227728
    lwz r0, 0x5c(r21)
    clrlwi r0, r0, 30
    cmplwi r0, 0x1
    bne lbl_802274D4
    lwz r0, 0x70(r1)
    stfs f29, 0x28(r1)
    stw r0, 0xc(r1)
    stfs f29, 0x2c(r1)
    stfs f29, 0x30(r1)
    stfs f29, 0x34(r1)
    lbz r3, 0x0(r21)
    stb r3, 0xe4(r1)
    lbz r3, 0x1(r21)
    stb r3, 0xe5(r1)
    lbz r3, 0x2(r21)
    stb r3, 0xe6(r1)
    lbz r3, 0x3(r21)
    stb r3, 0xe7(r1)
    lbz r3, 0x4(r21)
    stb r3, 0xe8(r1)
    lbz r3, 0x5(r21)
    stb r3, 0xe9(r1)
    lbz r3, 0x6(r21)
    stb r3, 0xea(r1)
    lbz r3, 0x7(r21)
    stb r3, 0xeb(r1)
    lbz r3, 0x8(r21)
    stb r3, 0xec(r1)
    lbz r3, 0x9(r21)
    stb r3, 0xed(r1)
    lbz r3, 0xa(r21)
    stb r3, 0xee(r1)
    lbz r3, 0xb(r21)
    stb r3, 0xef(r1)
    lbz r3, 0xc(r21)
    stb r3, 0xf0(r1)
    lbz r3, 0xd(r21)
    stb r3, 0xf1(r1)
    lbz r3, 0xe(r21)
    stb r3, 0xf2(r1)
    lbz r3, 0xf(r21)
    stb r3, 0xf3(r1)
    lbz r3, 0x10(r21)
    stb r3, 0xf4(r1)
    lbz r3, 0x11(r21)
    stb r3, 0xf5(r1)
    lbz r3, 0x12(r21)
    stb r3, 0xf6(r1)
    lbz r3, 0x13(r21)
    stb r3, 0xf7(r1)
    lbz r3, 0x14(r21)
    stb r3, 0xf8(r1)
    lbz r3, 0x15(r21)
    stb r3, 0xf9(r1)
    lbz r3, 0x16(r21)
    stb r3, 0xfa(r1)
    lbz r3, 0x17(r21)
    stb r3, 0xfb(r1)
    lbz r3, 0x18(r21)
    stb r3, 0xfc(r1)
    lbz r3, 0x19(r21)
    stb r3, 0xfd(r1)
    lbz r3, 0x1a(r21)
    stb r3, 0xfe(r1)
    lbz r3, 0x1b(r21)
    stb r3, 0xff(r1)
    lbz r3, 0x1c(r21)
    stb r3, 0x100(r1)
    lbz r3, 0x1d(r21)
    stb r3, 0x101(r1)
    lbz r3, 0x1e(r21)
    stb r3, 0x102(r1)
    lbz r3, 0x1f(r21)
    stb r3, 0x103(r1)
    lwz r3, 0x20(r21)
    stw r3, 0x104(r1)
    lwz r4, 0x24(r21)
    lwz r3, 0x28(r21)
    stw r4, 0x108(r1)
    stw r3, 0x10c(r1)
    lwz r4, 0x2c(r21)
    lwz r3, 0x30(r21)
    stw r4, 0x110(r1)
    stw r3, 0x114(r1)
    lwz r3, 0x34(r21)
    stw r3, 0x118(r1)
    lwz r4, 0x38(r21)
    lwz r3, 0x3c(r21)
    stw r4, 0x11c(r1)
    stw r3, 0x120(r1)
    lbz r3, 0x40(r21)
    stb r3, 0x124(r1)
    lbz r3, 0x41(r21)
    stb r3, 0x125(r1)
    lbz r3, 0x42(r21)
    stb r3, 0x126(r1)
    lbz r3, 0x43(r21)
    stb r3, 0x127(r1)
    lfs f0, 0x44(r21)
    stfs f0, 0x128(r1)
    lwz r5, 0x48(r21)
    subf r4, r22, r0
    srwi r0, r4, 31
    addi r3, r1, 0xe4
    stw r5, 0x12c(r1)
    add r0, r0, r4
    srawi r0, r0, 1
    addi r4, r1, 0x28
    lfs f0, 0x4c(r21)
    subf r6, r0, r23
    addi r5, r1, 0xc
    stfs f0, 0x130(r1)
    lfs f0, 0x50(r21)
    stfs f0, 0x134(r1)
    lfs f0, 0x54(r21)
    stfs f0, 0x138(r1)
    lwz r0, 0x58(r21)
    stw r0, 0x13c(r1)
    lwz r0, 0x5c(r21)
    stw r0, 0x140(r1)
    lwz r0, 0x60(r21)
    stw r0, 0x144(r1)
    stfs f29, 0x110(r1)
    stfs f29, 0x114(r1)
    bl fn_80226748
    lfs f1, 0x30(r1)
    addi r3, r1, 0xe4
    lfs f0, 0x28(r1)
    li r4, 0x0
    fsubs f27, f1, f0
    bl __dt__Q34nw4r2ut10CharWriterFv
    fsubs f1, f25, f27
    lfs f0, 0x74(r1)
    fmuls f1, f1, f30
    fadds f0, f0, f1
    stfs f0, 0x2c(r21)
    b lbl_80227714
lbl_802274D4:
    cmplwi r0, 0x2
    bne lbl_802276EC
    lwz r0, 0x70(r1)
    stfs f29, 0x18(r1)
    stw r0, 0x8(r1)
    stfs f29, 0x1c(r1)
    stfs f29, 0x20(r1)
    stfs f29, 0x24(r1)
    lbz r3, 0x0(r21)
    stb r3, 0x80(r1)
    lbz r3, 0x1(r21)
    stb r3, 0x81(r1)
    lbz r3, 0x2(r21)
    stb r3, 0x82(r1)
    lbz r3, 0x3(r21)
    stb r3, 0x83(r1)
    lbz r3, 0x4(r21)
    stb r3, 0x84(r1)
    lbz r3, 0x5(r21)
    stb r3, 0x85(r1)
    lbz r3, 0x6(r21)
    stb r3, 0x86(r1)
    lbz r3, 0x7(r21)
    stb r3, 0x87(r1)
    lbz r3, 0x8(r21)
    stb r3, 0x88(r1)
    lbz r3, 0x9(r21)
    stb r3, 0x89(r1)
    lbz r3, 0xa(r21)
    stb r3, 0x8a(r1)
    lbz r3, 0xb(r21)
    stb r3, 0x8b(r1)
    lbz r3, 0xc(r21)
    stb r3, 0x8c(r1)
    lbz r3, 0xd(r21)
    stb r3, 0x8d(r1)
    lbz r3, 0xe(r21)
    stb r3, 0x8e(r1)
    lbz r3, 0xf(r21)
    stb r3, 0x8f(r1)
    lbz r3, 0x10(r21)
    stb r3, 0x90(r1)
    lbz r3, 0x11(r21)
    stb r3, 0x91(r1)
    lbz r3, 0x12(r21)
    stb r3, 0x92(r1)
    lbz r3, 0x13(r21)
    stb r3, 0x93(r1)
    lbz r3, 0x14(r21)
    stb r3, 0x94(r1)
    lbz r3, 0x15(r21)
    stb r3, 0x95(r1)
    lbz r3, 0x16(r21)
    stb r3, 0x96(r1)
    lbz r3, 0x17(r21)
    stb r3, 0x97(r1)
    lbz r3, 0x18(r21)
    stb r3, 0x98(r1)
    lbz r3, 0x19(r21)
    stb r3, 0x99(r1)
    lbz r3, 0x1a(r21)
    stb r3, 0x9a(r1)
    lbz r3, 0x1b(r21)
    stb r3, 0x9b(r1)
    lbz r3, 0x1c(r21)
    stb r3, 0x9c(r1)
    lbz r3, 0x1d(r21)
    stb r3, 0x9d(r1)
    lbz r3, 0x1e(r21)
    stb r3, 0x9e(r1)
    lbz r3, 0x1f(r21)
    stb r3, 0x9f(r1)
    lwz r3, 0x20(r21)
    stw r3, 0xa0(r1)
    lwz r4, 0x24(r21)
    lwz r3, 0x28(r21)
    stw r4, 0xa4(r1)
    stw r3, 0xa8(r1)
    lwz r4, 0x2c(r21)
    lwz r3, 0x30(r21)
    stw r4, 0xac(r1)
    stw r3, 0xb0(r1)
    lwz r3, 0x34(r21)
    stw r3, 0xb4(r1)
    lwz r4, 0x38(r21)
    lwz r3, 0x3c(r21)
    stw r4, 0xb8(r1)
    stw r3, 0xbc(r1)
    lbz r3, 0x40(r21)
    stb r3, 0xc0(r1)
    lbz r3, 0x41(r21)
    stb r3, 0xc1(r1)
    lbz r3, 0x42(r21)
    stb r3, 0xc2(r1)
    lbz r3, 0x43(r21)
    stb r3, 0xc3(r1)
    lfs f0, 0x44(r21)
    stfs f0, 0xc4(r1)
    lwz r5, 0x48(r21)
    subf r4, r22, r0
    srwi r0, r4, 31
    addi r3, r1, 0x80
    stw r5, 0xc8(r1)
    add r0, r0, r4
    srawi r0, r0, 1
    addi r4, r1, 0x18
    lfs f0, 0x4c(r21)
    subf r6, r0, r23
    addi r5, r1, 0x8
    stfs f0, 0xcc(r1)
    lfs f0, 0x50(r21)
    stfs f0, 0xd0(r1)
    lfs f0, 0x54(r21)
    stfs f0, 0xd4(r1)
    lwz r0, 0x58(r21)
    stw r0, 0xd8(r1)
    lwz r0, 0x5c(r21)
    stw r0, 0xdc(r1)
    lwz r0, 0x60(r21)
    stw r0, 0xe0(r1)
    stfs f29, 0xac(r1)
    stfs f29, 0xb0(r1)
    bl fn_80226748
    lfs f1, 0x20(r1)
    addi r3, r1, 0x80
    lfs f0, 0x18(r1)
    li r4, 0x0
    fsubs f27, f1, f0
    bl __dt__Q34nw4r2ut10CharWriterFv
    fsubs f1, f25, f27
    lfs f0, 0x74(r1)
    fadds f0, f0, f1
    stfs f0, 0x2c(r21)
    b lbl_80227714
lbl_802276EC:
    lfs f1, 0x2c(r21)
    lfs f0, 0x74(r1)
    fsubs f1, f1, f0
    fcmpo cr0, f25, f1
    bge lbl_80227704
    b lbl_80227708
lbl_80227704:
    fmr f1, f25
lbl_80227708:
    lfs f0, 0x74(r1)
    fmr f25, f1
    stfs f0, 0x2c(r21)
lbl_80227714:
    cmpwi r29, 0x0
    beq lbl_80227720
    lwz r26, 0x48(r1)
lbl_80227720:
    li r28, 0x0
    b lbl_80227750
lbl_80227728:
    cmpwi r3, 0x1
    bne lbl_80227738
    li r28, 0x0
    b lbl_80227750
lbl_80227738:
    cmpwi r3, 0x2
    bne lbl_80227748
    li r28, 0x1
    b lbl_80227750
lbl_80227748:
    cmpwi r3, 0x4
    beq lbl_802278A0
lbl_80227750:
    lwz r0, 0x70(r1)
    stw r0, 0x48(r1)
    b lbl_80227864
lbl_8022775C:
    cmpwi r29, 0x0
    lfs f27, 0x30(r21)
    beq lbl_802277F8
    cmplw r27, r26
    beq lbl_802277F8
    cmpwi r28, 0x0
    lfs f24, 0x2c(r21)
    beq lbl_80227784
    lfs f23, 0x50(r21)
    b lbl_80227788
lbl_80227784:
    lfs f23, lbl_804A22DC
lbl_80227788:
    lbz r0, 0x43(r21)
    cmpwi r0, 0x0
    beq lbl_8022779C
    lfs f2, 0x44(r21)
    b lbl_802277D0
lbl_8022779C:
    lwz r3, 0x48(r21)
    clrlwi r4, r25, 16
    lfs f22, 0x24(r21)
    lwz r12, 0x0(r3)
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    xoris r0, r3, 0x8000
    stw r31, 0x1b0(r1)
    stw r0, 0x1b4(r1)
    lfd f0, 0x1b0(r1)
    fsubs f0, f0, f31
    fmuls f2, f0, f22
lbl_802277D0:
    lfs f1, 0x14(r1)
    lfs f0, 0x4c(r21)
    fsubs f1, f24, f1
    fadds f1, f23, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_802277F8
    stw r27, 0x48(r1)
    li r25, 0xa
    b lbl_80227884
lbl_802277F8:
    cmpwi r28, 0x0
    beq lbl_80227810
    lfs f1, 0x50(r21)
    lfs f0, 0x2c(r21)
    fadds f0, f0, f1
    stfs f0, 0x2c(r21)
lbl_80227810:
    lwz r3, 0x48(r21)
    li r28, 0x1
    lfs f22, 0x28(r21)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    neg r0, r3
    stw r31, 0x1b0(r1)
    xoris r0, r0, 0x8000
    lfs f0, 0x30(r21)
    stw r0, 0x1b4(r1)
    mr r3, r21
    clrlwi r4, r25, 16
    lfd f1, 0x1b0(r1)
    fsubs f1, f1, f31
    fmuls f1, f1, f22
    fadds f0, f0, f1
    stfs f0, 0x30(r21)
    bl Print__Q34nw4r2ut10CharWriterFUs
    stfs f27, 0x30(r21)
lbl_80227864:
    cmpwi r29, 0x0
    beq lbl_80227870
    lwz r27, 0x48(r1)
lbl_80227870:
    addi r3, r1, 0x48
    addi r12, r1, 0x4c
    bl __ptmf_scall
    nop
    mr r25, r3
lbl_80227884:
    lwz r7, 0x48(r1)
    subf r3, r22, r7
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    cmpw r0, r23
    ble lbl_80227018
lbl_802278A0:
    lfs f1, 0x2c(r21)
    lfs f0, 0x74(r1)
    fsubs f23, f1, f0
    fcmpo cr0, f25, f23
    bge lbl_802278B8
    b lbl_802278BC
lbl_802278B8:
    fmr f23, f25
lbl_802278BC:
    lwz r0, 0x5c(r21)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x100
    beq lbl_802278D4
    cmplwi r0, 0x200
    bne lbl_802278DC
lbl_802278D4:
    stfs f28, 0x30(r21)
    b lbl_80227910
lbl_802278DC:
    cmpwi r24, 0x0
    beq lbl_80227904
    cmpwi r0, 0x0
    bne lbl_80227910
    lfs f22, 0x30(r21)
    mr r3, r21
    bl GetFontAscent__Q34nw4r2ut10CharWriterCFv
    fsubs f0, f22, f1
    stfs f0, 0x30(r21)
    b lbl_80227910
lbl_80227904:
    lfs f0, 0x30(r21)
    fadds f0, f0, f26
    stfs f0, 0x30(r21)
lbl_80227910:
    fmr f1, f23
    opword 0xE3E10288
    lfd f31, 0x280(r1)
    opword 0xE3C10278
    lfd f30, 0x270(r1)
    opword 0xE3A10268
    lfd f29, 0x260(r1)
    opword 0xE3810258
    lfd f28, 0x250(r1)
    opword 0xE3610248
    lfd f27, 0x240(r1)
    opword 0xE3410238
    lfd f26, 0x230(r1)
    opword 0xE3210228
    lfd f25, 0x220(r1)
    opword 0xE3010218
    lfd f24, 0x210(r1)
    opword 0xE2E10208
    lfd f23, 0x200(r1)
    opword 0xE2C101F8
    lfd f22, 0x1f0(r1)
    addi r11, r1, 0x1f0
    bl _restgpr_21
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

// ----------------------------------------------------------------------------
// fn_8022797C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8022797C() {
    nofralloc
    stwu r1, -0x1b0(r1)
    mflr r0
    stw r0, 0x1b4(r1)
    stfd f31, 0x1a0(r1)
    opword 0xF3E101A8
    stfd f30, 0x190(r1)
    opword 0xF3C10198
    addi r11, r1, 0x190
    bl _savegpr_27
    lwz r0, 0x5c(r3)
    mr r27, r3
    lfs f31, lbl_804A22DC
    mr r28, r4
    andi. r0, r0, 0x333
    mr r29, r5
    fmr f2, f31
    mr r30, r6
    mr r31, r7
    cmplwi r0, 0x300
    beq lbl_80227BBC
    cmpwi r0, 0x0
    beq lbl_80227BBC
    stfs f31, 0x30(r1)
    stfs f31, 0x34(r1)
    stfs f31, 0x38(r1)
    stfs f31, 0x3c(r1)
    lbz r0, 0x0(r3)
    stb r0, 0x108(r1)
    lbz r0, 0x1(r3)
    stb r0, 0x109(r1)
    lbz r0, 0x2(r3)
    stb r0, 0x10a(r1)
    lbz r0, 0x3(r3)
    stb r0, 0x10b(r1)
    lbz r0, 0x4(r3)
    stb r0, 0x10c(r1)
    lbz r0, 0x5(r3)
    stb r0, 0x10d(r1)
    lbz r0, 0x6(r3)
    stb r0, 0x10e(r1)
    lbz r0, 0x7(r3)
    stb r0, 0x10f(r1)
    lbz r0, 0x8(r3)
    stb r0, 0x110(r1)
    lbz r0, 0x9(r3)
    stb r0, 0x111(r1)
    lbz r0, 0xa(r3)
    stb r0, 0x112(r1)
    lbz r0, 0xb(r3)
    stb r0, 0x113(r1)
    lbz r0, 0xc(r3)
    stb r0, 0x114(r1)
    lbz r0, 0xd(r3)
    stb r0, 0x115(r1)
    lbz r0, 0xe(r3)
    stb r0, 0x116(r1)
    lbz r0, 0xf(r3)
    stb r0, 0x117(r1)
    lbz r0, 0x10(r3)
    stb r0, 0x118(r1)
    lbz r0, 0x11(r3)
    stb r0, 0x119(r1)
    lbz r0, 0x12(r3)
    stb r0, 0x11a(r1)
    lbz r0, 0x13(r3)
    stb r0, 0x11b(r1)
    lbz r0, 0x14(r3)
    stb r0, 0x11c(r1)
    lbz r0, 0x15(r3)
    stb r0, 0x11d(r1)
    lbz r0, 0x16(r3)
    stb r0, 0x11e(r1)
    lbz r0, 0x17(r3)
    stb r0, 0x11f(r1)
    lbz r0, 0x18(r3)
    stb r0, 0x120(r1)
    lbz r0, 0x19(r3)
    stb r0, 0x121(r1)
    lbz r0, 0x1a(r3)
    stb r0, 0x122(r1)
    lbz r0, 0x1b(r3)
    stb r0, 0x123(r1)
    lbz r0, 0x1c(r3)
    stb r0, 0x124(r1)
    lbz r0, 0x1d(r3)
    stb r0, 0x125(r1)
    lbz r0, 0x1e(r3)
    stb r0, 0x126(r1)
    lbz r0, 0x1f(r3)
    stb r0, 0x127(r1)
    lwz r0, 0x20(r3)
    stw r0, 0x128(r1)
    lwz r4, 0x24(r3)
    lwz r0, 0x28(r3)
    stw r4, 0x12c(r1)
    stw r0, 0x130(r1)
    lwz r4, 0x2c(r3)
    lwz r0, 0x30(r3)
    stw r4, 0x134(r1)
    stw r0, 0x138(r1)
    lwz r0, 0x34(r3)
    stw r0, 0x13c(r1)
    lwz r4, 0x38(r3)
    lwz r0, 0x3c(r3)
    stw r4, 0x140(r1)
    stw r0, 0x144(r1)
    lbz r0, 0x40(r3)
    stb r0, 0x148(r1)
    lbz r0, 0x41(r3)
    stb r0, 0x149(r1)
    lbz r0, 0x42(r3)
    stb r0, 0x14a(r1)
    lbz r0, 0x43(r3)
    stb r0, 0x14b(r1)
    lfs f0, 0x44(r3)
    stfs f0, 0x14c(r1)
    lwz r0, 0x48(r3)
    stw r0, 0x150(r1)
    lfs f0, 0x4c(r3)
    mr r5, r30
    mr r6, r31
    addi r4, r1, 0x30
    stfs f0, 0x154(r1)
    lfs f0, 0x50(r3)
    stfs f0, 0x158(r1)
    lfs f0, 0x54(r3)
    stfs f0, 0x15c(r1)
    lwz r0, 0x58(r3)
    stw r0, 0x160(r1)
    lwz r0, 0x5c(r3)
    stw r0, 0x164(r1)
    lwz r0, 0x60(r3)
    addi r3, r1, 0x108
    stw r0, 0x168(r1)
    bl fn_80226DD0
    addi r3, r1, 0x108
    li r4, 0x0
    bl __dt__Q34nw4r2ut10CharWriterFv
    lfs f3, 0x30(r1)
    lfs f2, 0x38(r1)
    lfs f1, 0x34(r1)
    lfs f0, 0x3c(r1)
    fadds f31, f3, f2
    fadds f2, f1, f0
lbl_80227BBC:
    lwz r0, 0x5c(r27)
    rlwinm r0, r0, 0, 26, 27
    cmplwi r0, 0x10
    bne lbl_80227BE4
    lfs f1, lbl_804A22E8
    lfs f0, 0x0(r28)
    fmuls f1, f31, f1
    fsubs f0, f0, f1
    stfs f0, 0x0(r28)
    b lbl_80227BF8
lbl_80227BE4:
    cmplwi r0, 0x20
    bne lbl_80227BF8
    lfs f0, 0x0(r28)
    fsubs f0, f0, f31
    stfs f0, 0x0(r28)
lbl_80227BF8:
    lwz r0, 0x5c(r27)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x100
    bne lbl_80227C20
    lfs f1, lbl_804A22E8
    lfs f0, 0x0(r29)
    fmuls f1, f2, f1
    fsubs f0, f0, f1
    stfs f0, 0x0(r29)
    b lbl_80227C34
lbl_80227C20:
    cmplwi r0, 0x200
    bne lbl_80227C34
    lfs f0, 0x0(r29)
    fsubs f0, f0, f2
    stfs f0, 0x0(r29)
lbl_80227C34:
    lwz r0, 0x5c(r27)
    clrlwi r0, r0, 30
    cmplwi r0, 0x1
    bne lbl_80227E4C
    lfs f1, lbl_804A22DC
    stw r30, 0xc(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    lbz r0, 0x0(r27)
    stb r0, 0xa4(r1)
    lbz r0, 0x1(r27)
    stb r0, 0xa5(r1)
    lbz r0, 0x2(r27)
    stb r0, 0xa6(r1)
    lbz r0, 0x3(r27)
    stb r0, 0xa7(r1)
    lbz r0, 0x4(r27)
    stb r0, 0xa8(r1)
    lbz r0, 0x5(r27)
    stb r0, 0xa9(r1)
    lbz r0, 0x6(r27)
    stb r0, 0xaa(r1)
    lbz r0, 0x7(r27)
    stb r0, 0xab(r1)
    lbz r0, 0x8(r27)
    stb r0, 0xac(r1)
    lbz r0, 0x9(r27)
    stb r0, 0xad(r1)
    lbz r0, 0xa(r27)
    stb r0, 0xae(r1)
    lbz r0, 0xb(r27)
    stb r0, 0xaf(r1)
    lbz r0, 0xc(r27)
    stb r0, 0xb0(r1)
    lbz r0, 0xd(r27)
    stb r0, 0xb1(r1)
    lbz r0, 0xe(r27)
    stb r0, 0xb2(r1)
    lbz r0, 0xf(r27)
    stb r0, 0xb3(r1)
    lbz r0, 0x10(r27)
    stb r0, 0xb4(r1)
    lbz r0, 0x11(r27)
    stb r0, 0xb5(r1)
    lbz r0, 0x12(r27)
    stb r0, 0xb6(r1)
    lbz r0, 0x13(r27)
    stb r0, 0xb7(r1)
    lbz r0, 0x14(r27)
    stb r0, 0xb8(r1)
    lbz r0, 0x15(r27)
    stb r0, 0xb9(r1)
    lbz r0, 0x16(r27)
    stb r0, 0xba(r1)
    lbz r0, 0x17(r27)
    stb r0, 0xbb(r1)
    lbz r0, 0x18(r27)
    stb r0, 0xbc(r1)
    lbz r0, 0x19(r27)
    stb r0, 0xbd(r1)
    lbz r0, 0x1a(r27)
    stb r0, 0xbe(r1)
    lbz r0, 0x1b(r27)
    stb r0, 0xbf(r1)
    lbz r0, 0x1c(r27)
    stb r0, 0xc0(r1)
    lbz r0, 0x1d(r27)
    stb r0, 0xc1(r1)
    lbz r0, 0x1e(r27)
    stb r0, 0xc2(r1)
    lbz r0, 0x1f(r27)
    stb r0, 0xc3(r1)
    lwz r0, 0x20(r27)
    stw r0, 0xc4(r1)
    lwz r3, 0x24(r27)
    lwz r0, 0x28(r27)
    stw r3, 0xc8(r1)
    stw r0, 0xcc(r1)
    lwz r3, 0x2c(r27)
    lwz r0, 0x30(r27)
    stw r3, 0xd0(r1)
    stw r0, 0xd4(r1)
    lwz r0, 0x34(r27)
    stw r0, 0xd8(r1)
    lwz r3, 0x38(r27)
    lwz r0, 0x3c(r27)
    stw r3, 0xdc(r1)
    stw r0, 0xe0(r1)
    lbz r0, 0x40(r27)
    stb r0, 0xe4(r1)
    lbz r0, 0x41(r27)
    stb r0, 0xe5(r1)
    lbz r0, 0x42(r27)
    stb r0, 0xe6(r1)
    lbz r0, 0x43(r27)
    stb r0, 0xe7(r1)
    lfs f0, 0x44(r27)
    stfs f0, 0xe8(r1)
    lwz r0, 0x48(r27)
    mr r6, r31
    addi r3, r1, 0xa4
    addi r4, r1, 0x20
    stw r0, 0xec(r1)
    addi r5, r1, 0xc
    lfs f0, 0x4c(r27)
    stfs f0, 0xf0(r1)
    lfs f0, 0x50(r27)
    stfs f0, 0xf4(r1)
    lfs f0, 0x54(r27)
    stfs f0, 0xf8(r1)
    lwz r0, 0x58(r27)
    stw r0, 0xfc(r1)
    lwz r0, 0x5c(r27)
    stw r0, 0x100(r1)
    lwz r0, 0x60(r27)
    stw r0, 0x104(r1)
    stfs f1, 0xd0(r1)
    stfs f1, 0xd4(r1)
    bl fn_80226748
    lfs f1, 0x28(r1)
    addi r3, r1, 0xa4
    lfs f0, 0x20(r1)
    li r4, 0x0
    fsubs f30, f1, f0
    bl __dt__Q34nw4r2ut10CharWriterFv
    fsubs f2, f31, f30
    lfs f1, lbl_804A22E8
    lfs f0, 0x0(r28)
    fmuls f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x2c(r27)
    b lbl_8022805C
lbl_80227E4C:
    cmplwi r0, 0x2
    bne lbl_80228054
    lfs f1, lbl_804A22DC
    stw r30, 0x8(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    lbz r0, 0x0(r27)
    stb r0, 0x40(r1)
    lbz r0, 0x1(r27)
    stb r0, 0x41(r1)
    lbz r0, 0x2(r27)
    stb r0, 0x42(r1)
    lbz r0, 0x3(r27)
    stb r0, 0x43(r1)
    lbz r0, 0x4(r27)
    stb r0, 0x44(r1)
    lbz r0, 0x5(r27)
    stb r0, 0x45(r1)
    lbz r0, 0x6(r27)
    stb r0, 0x46(r1)
    lbz r0, 0x7(r27)
    stb r0, 0x47(r1)
    lbz r0, 0x8(r27)
    stb r0, 0x48(r1)
    lbz r0, 0x9(r27)
    stb r0, 0x49(r1)
    lbz r0, 0xa(r27)
    stb r0, 0x4a(r1)
    lbz r0, 0xb(r27)
    stb r0, 0x4b(r1)
    lbz r0, 0xc(r27)
    stb r0, 0x4c(r1)
    lbz r0, 0xd(r27)
    stb r0, 0x4d(r1)
    lbz r0, 0xe(r27)
    stb r0, 0x4e(r1)
    lbz r0, 0xf(r27)
    stb r0, 0x4f(r1)
    lbz r0, 0x10(r27)
    stb r0, 0x50(r1)
    lbz r0, 0x11(r27)
    stb r0, 0x51(r1)
    lbz r0, 0x12(r27)
    stb r0, 0x52(r1)
    lbz r0, 0x13(r27)
    stb r0, 0x53(r1)
    lbz r0, 0x14(r27)
    stb r0, 0x54(r1)
    lbz r0, 0x15(r27)
    stb r0, 0x55(r1)
    lbz r0, 0x16(r27)
    stb r0, 0x56(r1)
    lbz r0, 0x17(r27)
    stb r0, 0x57(r1)
    lbz r0, 0x18(r27)
    stb r0, 0x58(r1)
    lbz r0, 0x19(r27)
    stb r0, 0x59(r1)
    lbz r0, 0x1a(r27)
    stb r0, 0x5a(r1)
    lbz r0, 0x1b(r27)
    stb r0, 0x5b(r1)
    lbz r0, 0x1c(r27)
    stb r0, 0x5c(r1)
    lbz r0, 0x1d(r27)
    stb r0, 0x5d(r1)
    lbz r0, 0x1e(r27)
    stb r0, 0x5e(r1)
    lbz r0, 0x1f(r27)
    stb r0, 0x5f(r1)
    lwz r0, 0x20(r27)
    stw r0, 0x60(r1)
    lwz r3, 0x24(r27)
    lwz r0, 0x28(r27)
    stw r3, 0x64(r1)
    stw r0, 0x68(r1)
    lwz r3, 0x2c(r27)
    lwz r0, 0x30(r27)
    stw r3, 0x6c(r1)
    stw r0, 0x70(r1)
    lwz r0, 0x34(r27)
    stw r0, 0x74(r1)
    lwz r3, 0x38(r27)
    lwz r0, 0x3c(r27)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    lbz r0, 0x40(r27)
    stb r0, 0x80(r1)
    lbz r0, 0x41(r27)
    stb r0, 0x81(r1)
    lbz r0, 0x42(r27)
    stb r0, 0x82(r1)
    lbz r0, 0x43(r27)
    stb r0, 0x83(r1)
    lfs f0, 0x44(r27)
    stfs f0, 0x84(r1)
    lwz r0, 0x48(r27)
    mr r6, r31
    addi r3, r1, 0x40
    addi r4, r1, 0x10
    stw r0, 0x88(r1)
    addi r5, r1, 0x8
    lfs f0, 0x4c(r27)
    stfs f0, 0x8c(r1)
    lfs f0, 0x50(r27)
    stfs f0, 0x90(r1)
    lfs f0, 0x54(r27)
    stfs f0, 0x94(r1)
    lwz r0, 0x58(r27)
    stw r0, 0x98(r1)
    lwz r0, 0x5c(r27)
    stw r0, 0x9c(r1)
    lwz r0, 0x60(r27)
    stw r0, 0xa0(r1)
    stfs f1, 0x6c(r1)
    stfs f1, 0x70(r1)
    bl fn_80226748
    lfs f1, 0x18(r1)
    addi r3, r1, 0x40
    lfs f0, 0x10(r1)
    li r4, 0x0
    fsubs f30, f1, f0
    bl __dt__Q34nw4r2ut10CharWriterFv
    fsubs f1, f31, f30
    lfs f0, 0x0(r28)
    fadds f0, f0, f1
    stfs f0, 0x2c(r27)
    b lbl_8022805C
lbl_80228054:
    lfs f0, 0x0(r28)
    stfs f0, 0x2c(r27)
lbl_8022805C:
    lwz r0, 0x5c(r27)
    rlwinm r0, r0, 0, 22, 23
    cmplwi r0, 0x300
    bne lbl_80228078
    lfs f0, 0x0(r29)
    stfs f0, 0x30(r27)
    b lbl_8022808C
lbl_80228078:
    mr r3, r27
    bl GetFontAscent__Q34nw4r2ut10CharWriterCFv
    lfs f0, 0x0(r29)
    fadds f0, f0, f1
    stfs f0, 0x30(r27)
lbl_8022808C:
    fmr f1, f31
    opword 0xE3E101A8
    lfd f31, 0x1a0(r1)
    opword 0xE3C10198
    lfd f30, 0x190(r1)
    addi r11, r1, 0x190
    bl _restgpr_27
    lwz r0, 0x1b4(r1)
    mtlr r0
    addi r1, r1, 0x1b0
    blr
}

// ----------------------------------------------------------------------------
// fn_802280B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_802280B8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, lbl_8049DAE0
    extsb. r0, r0
    bne lbl_802280F8
    la r3, lbl_8049DAD8
    bl fn_802230EC
    lis r4, fn_802230FC@ha
    lis r5, lbl_804091C0@ha
    addi r4, r4, fn_802230FC@l
    la r3, lbl_8049DAD8
    addi r5, r5, lbl_804091C0@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DAE0
lbl_802280F8:
    lbz r0, lbl_8049DAE1
    extsb. r0, r0
    bne lbl_8022812C
    la r3, lbl_8049DADC
    bl fn_80223454
    lis r4, fn_80223464@ha
    lis r5, lbl_804091CC@ha
    addi r4, r4, fn_80223464@l
    la r3, lbl_8049DADC
    addi r5, r5, lbl_804091CC@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DAE1
lbl_8022812C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

