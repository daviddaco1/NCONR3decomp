#include "types.h"

// Translation unit: src/revolution/ipc/unk_803078EC.cpp
// Total functions: 34

// Small Data symbols (@sda21)
extern float lbl_8049D0C8;
extern float lbl_8049D0CC;
extern float lbl_8049D0D0;
extern float lbl_8049D0D4;
extern float lbl_8049D0D8;
extern float lbl_8049D0DC;
extern float lbl_8049D0E0;
extern float lbl_8049D0E4;
extern float lbl_8049D0E8;
extern float lbl_8049D0EC;
extern float lbl_8049D0F0;
extern float lbl_8049D0F4;
extern float lbl_8049D0F8;
extern float lbl_8049D0FC;
extern float lbl_8049D100;
extern float lbl_8049D104;
extern float lbl_8049D108;
extern float lbl_8049D10C;
extern float lbl_8049D110;
extern float lbl_8049D114;
extern float lbl_8049D118;
extern float lbl_8049D11C;
extern float lbl_8049D120;
extern float lbl_8049D124;
extern float lbl_8049D128;
extern float lbl_8049D12C;
extern float lbl_8049D130;
extern float lbl_8049D134;
extern float lbl_8049D138;
extern float lbl_8049D13C;
extern float lbl_8049D140;
extern float lbl_8049D144;
extern float lbl_8049E218;
extern float lbl_8049E21C;
extern float lbl_8049E220;
extern float lbl_8049E224;
extern float lbl_8049E228;
extern float lbl_8049E22C;
extern float lbl_8049E230;
extern float lbl_8049E234;
extern float lbl_8049E238;
extern float lbl_8049E240;
extern float lbl_8049E242;
extern float lbl_8049E243;
extern float lbl_8049E244;
extern float lbl_8049E245;
extern float lbl_8049E246;
extern float lbl_8049E248;
extern float lbl_8049E24C;
extern float lbl_804A2680;
extern float lbl_804A2684;
extern float lbl_804A2688;
extern float lbl_804A268C;
extern float lbl_804A2690;
extern float lbl_804A2694;
extern float lbl_804A2698;
extern float lbl_804A269C;
extern float lbl_804A26A0;
extern float lbl_804A26A8;
extern float lbl_804A26AC;
extern float lbl_804A26B0;
extern float lbl_804A26B8;
extern float lbl_804A26C0;
extern float lbl_804A26C8;
extern float lbl_804A26D0;
extern float lbl_804A26D2;
extern float lbl_804A26D4;
extern float lbl_804A26D8;
extern float lbl_804A26DA;
extern float lbl_804A26DC;
extern float lbl_804A26E0;
extern float lbl_804A26E4;
extern float lbl_804A26E8;
extern float lbl_804A26EC;
extern float lbl_804A26F0;
extern float lbl_804A26F4;

// Global data symbols (@ha/@l)
extern u8 jumptable_8037F524[];
extern u8 lbl_8037F558[];
extern u8 lbl_80463280[];
extern u8 lbl_80464840[];
extern u8 lbl_80464870[];
extern u8 lbl_80464890[];

// Forward declarations
extern void OSDisableInterrupts();
extern void OSRegisterVersion();
extern void OSRestoreInterrupts();
extern void _restgpr_14();
extern void _restgpr_20();
extern void _restgpr_25();
extern void _restgpr_27();
extern void _savegpr_14();
extern void _savegpr_20();
extern void _savegpr_25();
extern void _savegpr_27();
extern void cos();
extern void fn_802870B0();
extern void fn_80287118();
extern void fn_80287120();
extern void fn_8028717C();
extern void fn_802872A4();
extern void fn_80287314();
extern void fn_80289630();
extern void fn_802896B4();
extern void fn_802896FC();
extern void fn_8028A7FC();
extern void fn_8028A9B8();
extern void fn_8028AA44();
extern void fn_8028AACC();
extern void fn_8028ABB0();
extern void fn_8028ABF4();
extern void fn_8028AF20();
extern void fn_8028B2E8();
extern void fn_8028D1A8();
extern void fn_8028D1DC();
extern void fn_8028D220();
extern void fn_8028D2B0();
extern void fn_8028E330();
extern void fn_8028EE58();
extern void fn_803078EC();
extern void fn_8030797C();
extern void fn_80307998();
extern void fn_803079B4();
extern void fn_803079D0();
extern void fn_803079EC();
extern void fn_80307BC0();
extern void fn_80307D60();
extern void fn_80307E00();
extern void fn_80307EB4();
extern void fn_80308048();
extern void fn_8030816C();
extern void fn_803085C4();
extern void fn_803087AC();
extern void fn_803089D4();
extern void fn_80308B88();
extern void fn_80308CFC();
extern void fn_803092C8();
extern void fn_80309734();
extern void fn_8030985C();
extern void fn_80309A80();
extern void fn_8030A354();
extern void fn_8030A360();
extern void fn_8030AC68();
extern void fn_8030AC74();
extern void fn_8030B0B4();
extern void fn_8030B154();
extern void fn_8030B2BC();
extern void fn_8030B314();
extern void fn_8030B32C();
extern void fn_8030B344();
extern void fn_8030B360();
extern void fn_8030B37C();
extern void fn_8030B410();
extern void fn_8030D7E0();
extern void memset();
extern void sin();
extern void sqrt();

// ----------------------------------------------------------------------------
// fn_803078EC
// ----------------------------------------------------------------------------
asm void fn_803078EC() {
    nofralloc
    lfs f0, lbl_804A2680
    lis r4, lbl_80463280@ha
    mulli r0, r3, 0x570
    stwu r1, -0x20(r1)
    fcmpu cr0, f2, f0
    addi r4, r4, lbl_80463280@l
    add r4, r4, r0
    beq lbl_80307948
    lfs f0, lbl_804A2688
    lfs f3, lbl_804A2684
    fmuls f1, f0, f1
    fmuls f0, f0, f2
    fadds f1, f3, f1
    fadds f0, f3, f0
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f1, 0x8(r1)
    stfd f0, 0x10(r1)
    lwz r3, 0xc(r1)
    lwz r0, 0x14(r1)
    sth r3, 0x504(r4)
    sth r0, 0x506(r4)
    b lbl_8030795C
lbl_80307948:
    lis r3, 0x1
    li r0, 0x0
    subi r3, r3, 0x63c0
    sth r3, 0x504(r4)
    sth r0, 0x506(r4)
lbl_8030795C:
    li r3, 0x0
    sth r3, 0x500(r4)
    lhz r0, 0x504(r4)
    sth r0, 0x502(r4)
    sth r3, 0x508(r4)
    sth r0, 0x50a(r4)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8030797C
// ----------------------------------------------------------------------------
asm void fn_8030797C() {
    nofralloc
    mulli r0, r3, 0x570
    lis r3, lbl_80463280@ha
    addi r3, r3, lbl_80463280@l
    add r3, r3, r0
    stfs f1, 0xb0(r3)
    stfs f2, 0xb4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80307998
// ----------------------------------------------------------------------------
asm void fn_80307998() {
    nofralloc
    mulli r0, r3, 0x570
    lis r3, lbl_80463280@ha
    addi r3, r3, lbl_80463280@l
    add r3, r3, r0
    stfs f1, 0xb8(r3)
    stfs f2, 0xbc(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_803079B4
// ----------------------------------------------------------------------------
asm void fn_803079B4() {
    nofralloc
    mulli r0, r3, 0x570
    lis r3, lbl_80463280@ha
    addi r3, r3, lbl_80463280@l
    add r3, r3, r0
    stfs f1, 0xc0(r3)
    stfs f2, 0xc4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_803079D0
// ----------------------------------------------------------------------------
asm void fn_803079D0() {
    nofralloc
    mulli r0, r3, 0x570
    lis r3, lbl_80463280@ha
    addi r3, r3, lbl_80463280@l
    add r3, r3, r0
    stfs f1, 0xc8(r3)
    stfs f2, 0xcc(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_803079EC
// ----------------------------------------------------------------------------
asm void fn_803079EC() {
    nofralloc
    stwu r1, -0x20(r1)
    addi r0, r3, 0xf0
    lfs f6, lbl_804A268C
    li r4, -0x1
    stw r31, 0x1c(r1)
    lfs f5, lbl_804A2690
    stw r30, 0x18(r1)
    li r30, 0x0
    lfs f4, lbl_804A2694
    stw r29, 0x14(r1)
    addi r29, r3, 0x114
    lfs f3, lbl_804A2698
    stb r30, 0x554(r3)
    lfs f1, 0xd0(r3)
    lfs f0, lbl_8049D0F4
    lhz r5, 0x504(r3)
    fadds f0, f6, f0
    lfs f2, lbl_804A2680
    lwz r11, 0xdc(r3)
    lwz r10, 0xe0(r3)
    stfs f0, 0x528(r3)
    lfs f0, lbl_8049D0F4
    fsubs f0, f5, f0
    stfs f0, 0x530(r3)
    lfs f0, lbl_8049D0F4
    fadds f0, f4, f0
    stfs f0, 0x52c(r3)
    lfs f0, lbl_8049D0F4
    fsubs f0, f3, f0
    stfs f0, 0x534(r3)
    lfs f0, lbl_8049D0FC
    fdivs f0, f5, f0
    stfs f0, 0x538(r3)
    lfs f0, lbl_8049D0FC
    fdivs f0, f6, f0
    stfs f0, 0x53c(r3)
    lfs f0, lbl_8049D0E8
    fmuls f0, f0, f0
    stfs f0, 0x540(r3)
    lfs f0, lbl_8049E24C
    stfs f0, 0x548(r3)
    lfs f3, lbl_8049E248
    fdivs f0, f3, f1
    stfs f3, 0x544(r3)
    stw r30, 0x8(r3)
    stw r30, 0x4(r3)
    stw r30, 0x0(r3)
    sth r30, 0x500(r3)
    sth r5, 0x502(r3)
    stb r30, 0x5e(r3)
    stb r30, 0x4fe(r3)
    lwz r8, lbl_8049E230
    lwz r7, lbl_8049E234
    stfs f5, 0x4ec(r3)
    stfs f2, 0x4f0(r3)
    lwz r6, 0x4ec(r3)
    stw r8, 0x28(r3)
    lwz r5, 0x4f0(r3)
    stw r7, 0x2c(r3)
    stw r8, 0x20(r3)
    stw r7, 0x24(r3)
    stfs f2, 0x30(r3)
    stfs f5, 0x4e4(r3)
    stfs f5, 0x34(r3)
    stfs f2, 0x4e8(r3)
    stfs f2, 0x38(r3)
    lwz r31, lbl_8049E230
    lwz r12, lbl_8049E234
    stfs f2, 0x14(r3)
    stfs f2, 0xc(r3)
    lwz r7, 0x14(r3)
    stfs f6, 0x10(r3)
    lwz r9, 0xc(r3)
    lwz r8, 0x10(r3)
    stw r31, 0x3c(r3)
    stw r12, 0x40(r3)
    stfs f2, 0x44(r3)
    stfs f5, 0x54(r3)
    stfs f2, 0x58(r3)
    stfs f1, 0x48(r3)
    stfs f2, 0x50(r3)
    stfs f2, 0x4c(r3)
    stfs f1, 0x4d0(r3)
    stfs f0, 0x4d4(r3)
    stfs f0, 0x4c4(r3)
    stw r11, 0x4c8(r3)
    stw r10, 0x4cc(r3)
    stfs f5, 0x18(r3)
    stfs f2, 0x1c(r3)
    stw r9, 0x4d8(r3)
    stw r8, 0x4dc(r3)
    stw r7, 0x4e0(r3)
    stw r6, 0x4f4(r3)
    stw r5, 0x4f8(r3)
    lhz r5, lbl_8049D0F0
    sth r5, 0x4fc(r3)
    sth r30, 0x138(r3)
lbl_80307B70:
    stb r4, 0x8(r29)
    subi r29, r29, 0xc
    cmplw r29, r0
    bge lbl_80307B70
    addi r5, r3, 0x12c
    addi r0, r3, 0x120
    li r4, -0x1
lbl_80307B8C:
    stb r4, 0x8(r5)
    subi r5, r5, 0xc
    cmplw r5, r0
    bge lbl_80307B8C
    li r4, 0x0
    li r0, 0x1
    stb r4, 0x13b(r3)
    stb r0, 0x555(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80307BC0
// ----------------------------------------------------------------------------
asm void fn_80307BC0() {
    nofralloc
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_80307BD8
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_80307C10
lbl_80307BD8:
    lwz r0, 0x4(r3)
    li r7, 0x0
    lhz r6, 0x504(r3)
    cmpwi r0, 0x0
    sth r7, 0x500(r3)
    sth r6, 0x502(r3)
    beq lbl_80307C84
    lhz r0, 0x506(r3)
    cmpwi r0, 0x0
    beq lbl_80307C84
    lwz r0, 0x0(r3)
    oris r0, r0, 0x8000
    stw r0, 0x0(r3)
    b lbl_80307C84
lbl_80307C10:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80307C84
    lhz r0, 0x500(r3)
    add r0, r0, r5
    clrlwi r6, r0, 16
    sth r0, 0x500(r3)
    cmplwi r6, 0x9c40
    blt lbl_80307C40
    subis r6, r6, 0x1
    addi r0, r6, 0x63c0
    sth r0, 0x500(r3)
lbl_80307C40:
    lhz r8, 0x500(r3)
    lhz r7, 0x502(r3)
    cmplw r8, r7
    blt lbl_80307C84
    lwz r6, 0x0(r3)
    cmplwi r8, 0x4e20
    lhz r0, 0x506(r3)
    oris r6, r6, 0x8000
    add r0, r7, r0
    stw r6, 0x0(r3)
    sth r0, 0x502(r3)
    blt lbl_80307C84
    clrlwi r6, r0, 16
    subi r7, r8, 0x4e20
    subi r0, r6, 0x4e20
    sth r7, 0x500(r3)
    sth r0, 0x502(r3)
lbl_80307C84:
    cmplwi r4, 0x2
    beq lbl_80307C98
    subi r0, r4, 0x10
    cmplwi r0, 0x1
    bgtlr
lbl_80307C98:
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    bne lbl_80307CB0
    lwz r0, 0x68(r3)
    cmpwi r0, 0x0
    beq lbl_80307CE8
lbl_80307CB0:
    lwz r0, 0x64(r3)
    li r5, 0x0
    lhz r4, 0x504(r3)
    cmpwi r0, 0x0
    sth r5, 0x508(r3)
    sth r4, 0x50a(r3)
    beqlr
    lhz r0, 0x506(r3)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x60(r3)
    oris r0, r0, 0x8000
    stw r0, 0x60(r3)
    blr
lbl_80307CE8:
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    beqlr
    lhz r0, 0x508(r3)
    add r0, r0, r5
    clrlwi r4, r0, 16
    sth r0, 0x508(r3)
    cmplwi r4, 0x9c40
    blt lbl_80307D18
    subis r4, r4, 0x1
    addi r0, r4, 0x63c0
    sth r0, 0x508(r3)
lbl_80307D18:
    lhz r6, 0x508(r3)
    lhz r5, 0x50a(r3)
    cmplw r6, r5
    bltlr
    lwz r4, 0x60(r3)
    cmplwi r6, 0x4e20
    lhz r0, 0x506(r3)
    oris r4, r4, 0x8000
    add r0, r5, r0
    stw r4, 0x60(r3)
    sth r0, 0x50a(r3)
    bltlr
    clrlwi r4, r0, 16
    subi r5, r6, 0x4e20
    subi r0, r4, 0x4e20
    sth r5, 0x508(r3)
    sth r0, 0x50a(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80307D60
// ----------------------------------------------------------------------------
asm void fn_80307D60() {
    nofralloc
    andi. r9, r6, 0x9fff
    lwz r0, 0x0(r3)
    cmplwi r4, 0x1
    clrlwi r10, r0, 16
    stw r9, 0x0(r3)
    bne lbl_80307D98
    lbz r6, 0x555(r3)
    neg r0, r6
    or r0, r0, r6
    srawi r0, r0, 31
    andc r0, r7, r0
    rlwinm r0, r0, 0, 17, 18
    or r0, r9, r0
    stw r0, 0x0(r3)
lbl_80307D98:
    lwz r0, 0x0(r3)
    cmplwi r4, 0x2
    xor r7, r0, r10
    and r6, r7, r0
    and r0, r7, r10
    stw r6, 0x4(r3)
    stw r0, 0x8(r3)
    beq lbl_80307DC4
    subi r0, r4, 0x10
    cmplwi r0, 0x1
    bgt lbl_80307DFC
lbl_80307DC4:
    lbz r7, 0x555(r3)
    lwz r0, 0x60(r3)
    neg r6, r7
    or r6, r6, r7
    clrlwi r7, r0, 16
    srawi r0, r6, 31
    andc r0, r8, r0
    clrlwi r0, r0, 16
    xor r8, r0, r7
    stw r0, 0x60(r3)
    and r6, r8, r0
    and r0, r8, r7
    stw r6, 0x64(r3)
    stw r0, 0x68(r3)
lbl_80307DFC:
    b fn_80307BC0
}

// ----------------------------------------------------------------------------
// fn_80307E00
// ----------------------------------------------------------------------------
asm void fn_80307E00() {
    nofralloc
    lfs f2, 0x0(r4)
    lwz r0, 0x56c(r3)
    fsubs f3, f1, f2
    cmpwi r0, 0x0
    bne lbl_80307E6C
    lfs f0, lbl_804A2680
    fcmpo cr0, f3, f0
    bge lbl_80307E28
    fneg f2, f3
    b lbl_80307E2C
lbl_80307E28:
    fmr f2, f3
lbl_80307E2C:
    lfs f0, 0xc8(r3)
    fcmpo cr0, f2, f0
    opword 0x4C411382
    bne lbl_80307E44
    lfs f2, lbl_804A2690
    b lbl_80307E50
lbl_80307E44:
    fdivs f2, f2, f0
    fmuls f2, f2, f2
    fmuls f2, f2, f2
lbl_80307E50:
    lfs f1, 0xcc(r3)
    lfs f0, 0x0(r4)
    fmuls f2, f2, f1
    fmuls f1, f2, f3
    fadds f0, f0, f1
    stfs f0, 0x0(r4)
    blr
lbl_80307E6C:
    lfs f1, 0xc8(r3)
    fneg f0, f1
    fcmpo cr0, f3, f0
    bge lbl_80307E94
    fadds f1, f3, f1
    lfs f0, 0xcc(r3)
    fmuls f0, f0, f1
    fadds f0, f2, f0
    stfs f0, 0x0(r4)
    blr
lbl_80307E94:
    fcmpo cr0, f3, f1
    blelr
    fsubs f1, f3, f1
    lfs f0, 0xcc(r3)
    fmuls f0, f0, f1
    fadds f0, f2, f0
    stfs f0, 0x0(r4)
    blr
}

// ----------------------------------------------------------------------------
// fn_80307EB4
// ----------------------------------------------------------------------------
asm void fn_80307EB4() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stfd f30, 0x10(r1)
    opword 0xF3C10018
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f1, 0x4d8(r3)
    lfs f0, 0x4dc(r3)
    fmuls f1, f1, f1
    fmuls f0, f0, f0
    fadds f1, f1, f0
    bl sqrt
    frsp f8, f1
    lfs f0, lbl_804A2680
    fcmpu cr0, f0, f8
    beq lbl_80308024
    lfs f2, lbl_804A269C
    fcmpo cr0, f8, f2
    opword 0x4C411382
    bne lbl_80307F14
    b lbl_80308024
lbl_80307F14:
    lfs f0, 0x4d8(r31)
    lfs f1, 0x4dc(r31)
    fdivs f9, f0, f8
    lfs f0, lbl_804A2690
    fdivs f10, f1, f8
    fcmpo cr0, f8, f0
    ble lbl_80307F34
    fsubs f8, f2, f8
lbl_80307F34:
    lfs f0, 0xd8(r31)
    lfs f6, 0xd4(r31)
    fmuls f4, f0, f10
    lfs f7, lbl_8049D0E4
    fmuls f5, f6, f9
    lfs f3, 0x4ec(r31)
    fmuls f2, f0, f9
    lfs f1, 0x4f0(r31)
    fmuls f0, f6, f10
    fmuls f6, f8, f7
    fadds f4, f5, f4
    fsubs f0, f2, f0
    fmuls f8, f8, f6
    fsubs f2, f4, f3
    fsubs f0, f0, f1
    fmuls f2, f8, f2
    fmuls f0, f8, f0
    fadds f31, f3, f2
    fadds f30, f1, f0
    fmuls f1, f31, f31
    fmuls f0, f30, f30
    fadds f1, f1, f0
    bl sqrt
    frsp f1, f1
    lfs f0, lbl_804A2680
    fcmpu cr0, f0, f1
    beq lbl_80308024
    fdivs f7, f31, f1
    lfs f5, 0x4f4(r31)
    lfs f4, 0x4f8(r31)
    lfs f0, 0x540(r31)
    fdivs f6, f30, f1
    stfs f7, 0x4ec(r31)
    stfs f6, 0x4f0(r31)
    fsubs f2, f7, f5
    fsubs f3, f6, f4
    lfs f1, lbl_8049D0EC
    fmuls f1, f1, f2
    fadds f1, f5, f1
    fsubs f2, f7, f1
    stfs f1, 0x4f4(r31)
    lfs f1, lbl_8049D0EC
    fmuls f2, f2, f2
    fmuls f1, f1, f3
    fadds f1, f4, f1
    fsubs f3, f6, f1
    stfs f1, 0x4f8(r31)
    fmuls f1, f3, f3
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_8030801C
    lhz r3, 0x4fc(r31)
    cmpwi r3, 0x0
    beq lbl_80308024
    subi r0, r3, 0x1
    sth r0, 0x4fc(r31)
    b lbl_80308024
lbl_8030801C:
    lhz r0, lbl_8049D0F0
    sth r0, 0x4fc(r31)
lbl_80308024:
    opword 0xE3E10028
    lfd f31, 0x20(r1)
    opword 0xE3C10018
    lfd f30, 0x10(r1)
    lwz r0, 0x34(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80308048
// ----------------------------------------------------------------------------
asm void fn_80308048() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    stfd f29, 0x10(r1)
    opword 0xF3A10018
    stw r31, 0xc(r1)
    mr r31, r3
    lfs f1, 0x4d8(r3)
    lfs f0, 0x4dc(r3)
    fmuls f1, f1, f1
    fmuls f0, f0, f0
    fadds f30, f1, f0
    fmr f1, f30
    bl sqrt
    lfs f0, 0x4e0(r31)
    frsp f31, f1
    fneg f29, f0
    fmuls f0, f29, f29
    fadds f1, f30, f0
    bl sqrt
    frsp f5, f1
    lfs f0, lbl_804A2680
    fcmpu cr0, f0, f5
    beq lbl_80308140
    lfs f1, lbl_804A269C
    fcmpo cr0, f5, f1
    opword 0x4C411382
    bne lbl_803080CC
    b lbl_80308140
lbl_803080CC:
    fdivs f2, f31, f5
    lfs f0, lbl_804A2690
    fdivs f29, f29, f5
    fcmpo cr0, f5, f0
    ble lbl_803080E4
    fsubs f5, f1, f5
lbl_803080E4:
    lfs f0, lbl_8049D0E4
    lfs f3, 0x54(r31)
    fmuls f4, f5, f0
    lfs f1, 0x58(r31)
    fsubs f2, f2, f3
    fsubs f0, f29, f1
    fmuls f5, f5, f4
    fmuls f2, f5, f2
    fmuls f0, f5, f0
    fadds f31, f3, f2
    fadds f30, f1, f0
    fmuls f1, f31, f31
    fmuls f0, f30, f30
    fadds f1, f1, f0
    bl sqrt
    frsp f2, f1
    lfs f0, lbl_804A2680
    fcmpu cr0, f0, f2
    beq lbl_80308140
    fdivs f1, f31, f2
    fdivs f0, f30, f2
    stfs f1, 0x54(r31)
    stfs f0, 0x58(r31)
lbl_80308140:
    opword 0xE3E10038
    lfd f31, 0x30(r1)
    opword 0xE3C10028
    lfd f30, 0x20(r1)
    opword 0xE3A10018
    lfd f29, 0x10(r1)
    lwz r0, 0x44(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8030816C
// ----------------------------------------------------------------------------
asm void fn_8030816C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r5, 0x4330
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    lbz r0, 0x36(r4)
    stw r5, 0x30(r1)
    cmplwi r0, 0xb
    stw r5, 0x38(r1)
    bgt lbl_803085AC
    lis r5, jumptable_8037F524@ha
    slwi r0, r0, 2
    addi r5, r5, jumptable_8037F524@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    b lbl_803085AC
    lha r0, 0x2(r4)
    lfd f3, lbl_804A26A0
    neg r0, r0
    lfs f1, 0x510(r3)
    xoris r0, r0, 0x8000
    lfs f0, lbl_804A2680
    stw r0, 0x34(r1)
    lfs f4, lbl_8049D12C
    lfd f2, 0x30(r1)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_80308200
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_8030820C
    b lbl_80308210
lbl_80308200:
    fcmpo cr0, f1, f4
    ble lbl_8030820C
    b lbl_80308210
lbl_8030820C:
    fmr f4, f1
lbl_80308210:
    stfs f4, 0x4d8(r3)
    lfd f3, lbl_804A26A0
    lha r0, 0x6(r4)
    lfs f1, 0x518(r3)
    neg r0, r0
    lfs f0, lbl_804A2680
    xoris r0, r0, 0x8000
    lfs f4, lbl_8049D12C
    stw r0, 0x3c(r1)
    lfd f2, 0x38(r1)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_80308258
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_80308264
    b lbl_80308268
lbl_80308258:
    fcmpo cr0, f1, f4
    ble lbl_80308264
    b lbl_80308268
lbl_80308264:
    fmr f4, f1
lbl_80308268:
    stfs f4, 0x4dc(r3)
    lfd f3, lbl_804A26A0
    lha r0, 0x4(r4)
    lfs f1, 0x514(r3)
    xoris r0, r0, 0x8000
    lfs f0, lbl_804A2680
    stw r0, 0x34(r1)
    lfs f4, lbl_8049D12C
    lfd f2, 0x30(r1)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_803082AC
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_803082B8
    b lbl_803082BC
lbl_803082AC:
    fcmpo cr0, f1, f4
    ble lbl_803082B8
    b lbl_803082BC
lbl_803082B8:
    fmr f4, f1
lbl_803082BC:
    lwz r6, 0xc(r3)
    addi r4, r30, 0xc
    lwz r5, 0x10(r3)
    lwz r0, 0x14(r3)
    stfs f4, 0x4e0(r3)
    mr r3, r30
    lfs f1, 0x4d8(r30)
    stw r6, 0x14(r1)
    stw r5, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_80307E00
    lfs f1, 0x4dc(r30)
    mr r3, r30
    addi r4, r30, 0x10
    bl fn_80307E00
    lfs f1, 0x4e0(r30)
    mr r3, r30
    addi r4, r30, 0x14
    bl fn_80307E00
    lfs f1, 0xc(r30)
    lfs f0, 0x10(r30)
    fmuls f1, f1, f1
    lfs f2, 0x14(r30)
    fmuls f0, f0, f0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f1, f2, f0
    bl sqrt
    lfs f2, 0x14(r1)
    frsp f6, f1
    lfs f0, 0xc(r30)
    lfs f1, 0x18(r1)
    fsubs f5, f2, f0
    lfs f0, 0x10(r30)
    lfs f2, 0x1c(r1)
    fsubs f4, f1, f0
    lfs f0, 0x14(r30)
    fmuls f1, f5, f5
    fsubs f3, f2, f0
    stfs f6, 0x18(r30)
    fmuls f0, f4, f4
    stfs f5, 0x14(r1)
    fmuls f2, f3, f3
    fadds f0, f1, f0
    stfs f4, 0x18(r1)
    stfs f3, 0x1c(r1)
    fadds f1, f2, f0
    bl sqrt
    frsp f0, f1
    mr r3, r30
    stfs f0, 0x1c(r30)
    bl fn_80307EB4
    mr r3, r30
    bl fn_80308048
    lbz r0, 0x29(r31)
    extsb. r0, r0
    bne lbl_803085AC
    lbz r0, 0x28(r31)
    cmplwi r0, 0x1
    bne lbl_803085AC
    lbz r0, 0x36(r31)
    cmplwi r0, 0x4
    beq lbl_803083C4
    cmplwi r0, 0x5
    beq lbl_803083C4
    b lbl_803085AC
lbl_803083C4:
    lha r0, 0x2a(r31)
    lfd f3, lbl_804A26A0
    neg r0, r0
    lfs f1, 0x51c(r30)
    xoris r0, r0, 0x8000
    lfs f0, lbl_804A2680
    stw r0, 0x3c(r1)
    lfs f4, lbl_8049D130
    lfd f2, 0x38(r1)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_80308408
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_80308414
    b lbl_80308418
lbl_80308408:
    fcmpo cr0, f1, f4
    ble lbl_80308414
    b lbl_80308418
lbl_80308414:
    fmr f4, f1
lbl_80308418:
    stfs f4, 0x20(r1)
    lfd f3, lbl_804A26A0
    lha r0, 0x2e(r31)
    lfs f1, 0x524(r30)
    neg r0, r0
    lfs f0, lbl_804A2680
    xoris r0, r0, 0x8000
    lfs f4, lbl_8049D130
    stw r0, 0x34(r1)
    lfd f2, 0x30(r1)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_80308460
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_8030846C
    b lbl_80308470
lbl_80308460:
    fcmpo cr0, f1, f4
    ble lbl_8030846C
    b lbl_80308470
lbl_8030846C:
    fmr f4, f1
lbl_80308470:
    stfs f4, 0x24(r1)
    lfd f3, lbl_804A26A0
    lha r0, 0x2c(r31)
    lfs f1, 0x520(r30)
    xoris r0, r0, 0x8000
    lfs f0, lbl_804A2680
    stw r0, 0x3c(r1)
    lfs f4, lbl_8049D130
    lfd f2, 0x38(r1)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_803084B4
    fneg f4, f4
    fcmpo cr0, f1, f4
    bge lbl_803084C0
    b lbl_803084C4
lbl_803084B4:
    fcmpo cr0, f1, f4
    ble lbl_803084C0
    b lbl_803084C4
lbl_803084C0:
    fmr f4, f1
lbl_803084C4:
    stfs f4, 0x28(r1)
    lbz r0, 0x55e(r30)
    cmpwi r0, 0x0
    beq lbl_803084E8
    addi r4, r1, 0x20
    lis r3, lbl_80464840@ha
    mr r5, r4
    addi r3, r3, lbl_80464840@l
    bl fn_8030D7E0
lbl_803084E8:
    lwz r6, 0x68(r30)
    mr r3, r30
    lwz r5, 0x6c(r30)
    addi r4, r30, 0x68
    lwz r0, 0x70(r30)
    stw r6, 0x8(r1)
    lfs f1, 0x20(r1)
    stw r5, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80307E00
    lfs f1, 0x24(r1)
    mr r3, r30
    addi r4, r30, 0x6c
    bl fn_80307E00
    lfs f1, 0x28(r1)
    mr r3, r30
    addi r4, r30, 0x70
    bl fn_80307E00
    lfs f1, 0x68(r30)
    lfs f0, 0x6c(r30)
    fmuls f1, f1, f1
    lfs f2, 0x70(r30)
    fmuls f0, f0, f0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f1, f2, f0
    bl sqrt
    lfs f2, 0x8(r1)
    frsp f6, f1
    lfs f0, 0x68(r30)
    lfs f1, 0xc(r1)
    fsubs f5, f2, f0
    lfs f0, 0x6c(r30)
    lfs f2, 0x10(r1)
    fsubs f4, f1, f0
    lfs f0, 0x70(r30)
    fmuls f1, f5, f5
    fsubs f3, f2, f0
    stfs f6, 0x74(r30)
    fmuls f0, f4, f4
    stfs f5, 0x8(r1)
    fmuls f2, f3, f3
    fadds f0, f1, f0
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    fadds f1, f2, f0
    bl sqrt
    frsp f0, f1
    stfs f0, 0x78(r30)
lbl_803085AC:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_803085C4
// ----------------------------------------------------------------------------
asm void fn_803085C4() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    opword 0xF3E10078
    stfd f30, 0x60(r1)
    opword 0xF3C10068
    stfd f29, 0x50(r1)
    opword 0xF3A10058
    stfd f28, 0x40(r1)
    opword 0xF3810048
    stfd f27, 0x30(r1)
    opword 0xF3610038
    addi r11, r1, 0x30
    bl _savegpr_25
    lfs f30, lbl_8049D100
    mr r25, r3
    lfs f29, lbl_804A2680
    addi r29, r3, 0xf0
    lfs f31, lbl_804A2690
    addi r31, r3, 0x114
lbl_80308618:
    lbz r0, 0x8(r29)
    extsb. r0, r0
    bne lbl_80308718
    addi r28, r29, 0xc
    addi r30, r25, 0x114
lbl_8030862C:
    lbz r0, 0x8(r28)
    extsb. r0, r0
    bne lbl_8030870C
    lfs f3, 0x0(r28)
    lfs f2, 0x0(r29)
    lfs f1, 0x4(r28)
    lfs f0, 0x4(r29)
    fsubs f27, f3, f2
    fsubs f28, f1, f0
    fmuls f1, f27, f27
    fmuls f0, f28, f28
    fadds f1, f1, f0
    bl sqrt
    frsp f0, f1
    lfs f5, 0xdc(r25)
    lfs f2, 0xe0(r25)
    lfs f1, 0x544(r25)
    fdivs f3, f31, f0
    lfs f0, 0x548(r25)
    fmuls f27, f27, f3
    fmuls f28, f28, f3
    fmuls f6, f1, f3
    fmuls f4, f5, f27
    fmuls f3, f2, f28
    fmuls f2, f2, f27
    fmuls f1, f5, f28
    fadds f3, f4, f3
    fcmpo cr0, f6, f0
    fsubs f2, f2, f1
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    opword 0x4C401382
    beq lbl_8030870C
    lfs f0, lbl_8049D0F8
    fcmpo cr0, f6, f0
    opword 0x4C411382
    beq lbl_8030870C
    lfs f1, 0x4ec(r25)
    lfs f0, 0x4f0(r25)
    fmuls f1, f1, f3
    fmuls f0, f0, f2
    fadds f0, f1, f0
    fcmpo cr0, f0, f29
    bge lbl_803086F8
    fneg f0, f0
    fcmpo cr0, f0, f30
    ble lbl_8030870C
    fmr f30, f0
    mr r27, r28
    mr r26, r29
    b lbl_8030870C
lbl_803086F8:
    fcmpo cr0, f0, f30
    ble lbl_8030870C
    fmr f30, f0
    mr r27, r29
    mr r26, r28
lbl_8030870C:
    addi r28, r28, 0xc
    cmplw r28, r30
    ble lbl_8030862C
lbl_80308718:
    addi r29, r29, 0xc
    cmplw r29, r31
    blt lbl_80308618
    lfs f0, lbl_8049D100
    fcmpu cr0, f30, f0
    bne lbl_80308738
    li r3, 0x0
    b lbl_8030876C
lbl_80308738:
    lwz r4, 0x0(r27)
    li r3, 0x2
    lwz r0, 0x4(r27)
    stw r4, 0x120(r25)
    stw r0, 0x124(r25)
    lwz r0, 0x8(r27)
    stw r0, 0x128(r25)
    lwz r4, 0x0(r26)
    lwz r0, 0x4(r26)
    stw r4, 0x12c(r25)
    stw r0, 0x130(r25)
    lwz r0, 0x8(r26)
    stw r0, 0x134(r25)
lbl_8030876C:
    opword 0xE3E10078
    lfd f31, 0x70(r1)
    opword 0xE3C10068
    lfd f30, 0x60(r1)
    opword 0xE3A10058
    lfd f29, 0x50(r1)
    opword 0xE3810048
    lfd f28, 0x40(r1)
    opword 0xE3610038
    addi r11, r1, 0x30
    lfd f27, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_803087AC
// ----------------------------------------------------------------------------
asm void fn_803087AC() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    opword 0xF3E10078
    stfd f30, 0x60(r1)
    opword 0xF3C10068
    stfd f29, 0x50(r1)
    opword 0xF3A10058
    stfd f28, 0x40(r1)
    opword 0xF3810048
    stfd f27, 0x30(r1)
    opword 0xF3610038
    addi r11, r1, 0x30
    bl _savegpr_25
    lfs f31, lbl_804A269C
    mr r31, r3
    lfs f29, lbl_804A2680
    addi r28, r3, 0xf0
    lfs f30, lbl_804A2690
    addi r30, r3, 0x114
lbl_80308800:
    lbz r0, 0x8(r28)
    extsb. r0, r0
    bne lbl_80308940
    addi r27, r28, 0xc
    addi r29, r31, 0x114
lbl_80308814:
    lbz r0, 0x8(r27)
    extsb. r0, r0
    bne lbl_80308934
    lfs f3, 0x0(r27)
    lfs f2, 0x0(r28)
    lfs f1, 0x4(r27)
    lfs f0, 0x4(r28)
    fsubs f28, f3, f2
    fsubs f27, f1, f0
    fmuls f1, f28, f28
    fmuls f0, f27, f27
    fadds f1, f1, f0
    bl sqrt
    frsp f2, f1
    lfs f1, 0x544(r31)
    lfs f0, 0x548(r31)
    fdivs f4, f30, f2
    fmuls f3, f28, f4
    fmuls f2, f27, f4
    fmuls f4, f4, f1
    stfs f3, 0x8(r1)
    fcmpo cr0, f4, f0
    stfs f2, 0xc(r1)
    opword 0x4C401382
    beq lbl_80308934
    lfs f0, lbl_8049D0F8
    fcmpo cr0, f4, f0
    opword 0x4C411382
    beq lbl_80308934
    lfs f0, 0x4d0(r31)
    fsubs f4, f4, f0
    fcmpo cr0, f4, f29
    bge lbl_803088A4
    lfs f0, 0x53c(r31)
    fmuls f4, f4, f0
    b lbl_803088AC
lbl_803088A4:
    lfs f0, 0x538(r31)
    fmuls f4, f4, f0
lbl_803088AC:
    fcmpo cr0, f4, f30
    opword 0x4C411382
    beq lbl_80308934
    lfs f3, 0x4c8(r31)
    lfs f2, 0x8(r1)
    lfs f1, 0x4cc(r31)
    lfs f0, 0xc(r1)
    fmuls f2, f3, f2
    fmuls f0, f1, f0
    fadds f1, f2, f0
    fcmpo cr0, f1, f29
    bge lbl_803088E8
    fneg f1, f1
    li r0, 0x1
    b lbl_803088EC
lbl_803088E8:
    li r0, 0x0
lbl_803088EC:
    lfs f0, lbl_8049D104
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_80308934
    fsubs f1, f30, f1
    fsubs f0, f30, f0
    fdivs f0, f1, f0
    fadds f4, f4, f0
    fcmpo cr0, f4, f31
    bge lbl_80308934
    fmr f31, f4
    cmpwi r0, 0x0
    beq lbl_8030892C
    mr r26, r27
    mr r25, r28
    b lbl_80308934
lbl_8030892C:
    mr r26, r28
    mr r25, r27
lbl_80308934:
    addi r27, r27, 0xc
    cmplw r27, r29
    ble lbl_80308814
lbl_80308940:
    addi r28, r28, 0xc
    cmplw r28, r30
    blt lbl_80308800
    lfs f0, lbl_804A269C
    fcmpu cr0, f0, f31
    bne lbl_80308960
    li r3, 0x0
    b lbl_80308994
lbl_80308960:
    lwz r4, 0x0(r26)
    li r3, 0x2
    lwz r0, 0x4(r26)
    stw r4, 0x120(r31)
    stw r0, 0x124(r31)
    lwz r0, 0x8(r26)
    stw r0, 0x128(r31)
    lwz r4, 0x0(r25)
    lwz r0, 0x4(r25)
    stw r4, 0x12c(r31)
    stw r0, 0x130(r31)
    lwz r0, 0x8(r25)
    stw r0, 0x134(r31)
lbl_80308994:
    opword 0xE3E10078
    lfd f31, 0x70(r1)
    opword 0xE3C10068
    lfd f30, 0x60(r1)
    opword 0xE3A10058
    lfd f29, 0x50(r1)
    opword 0xE3810048
    lfd f28, 0x40(r1)
    opword 0xE3610038
    addi r11, r1, 0x30
    lfd f27, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_803089D4
// ----------------------------------------------------------------------------
asm void fn_803089D4() {
    nofralloc
    stwu r1, -0x20(r1)
    addi r8, r3, 0xf0
    addi r0, r3, 0x120
    lfs f5, 0xdc(r3)
    lfs f0, 0x4ec(r3)
    lfs f3, 0xe0(r3)
    lfs f1, 0x4f0(r3)
    fmuls f4, f5, f0
    fmuls f2, f3, f0
    lfs f0, 0x4d4(r3)
    fmuls f3, f3, f1
    fmuls f1, f5, f1
    fadds f7, f4, f3
    fsubs f8, f2, f1
    fmuls f7, f7, f0
    fmuls f8, f8, f0
lbl_80308A14:
    lbz r4, 0x8(r8)
    extsb. r4, r4
    bne lbl_80308B70
    lfs f2, 0x0(r8)
    lfs f0, 0x4(r8)
    fsubs f1, f2, f7
    lfs f3, 0x528(r3)
    fsubs f6, f0, f8
    fadds f5, f2, f7
    fadds f4, f0, f8
    stfs f1, 0x10(r1)
    fcmpo cr0, f1, f3
    stfs f6, 0x14(r1)
    stfs f5, 0x8(r1)
    stfs f4, 0xc(r1)
    opword 0x4C401382
    beq lbl_80308A88
    lfs f2, 0x530(r3)
    fcmpo cr0, f1, f2
    opword 0x4C411382
    beq lbl_80308A88
    lfs f1, 0x52c(r3)
    fcmpo cr0, f6, f1
    opword 0x4C401382
    beq lbl_80308A88
    lfs f0, 0x534(r3)
    fcmpo cr0, f6, f0
    opword 0x4C411382
    bne lbl_80308B00
lbl_80308A88:
    lfs f1, 0x8(r1)
    lfs f0, 0x528(r3)
    fcmpo cr0, f1, f0
    ble lbl_80308B70
    lfs f0, 0x530(r3)
    fcmpo cr0, f1, f0
    bge lbl_80308B70
    lfs f1, 0xc(r1)
    lfs f0, 0x52c(r3)
    fcmpo cr0, f1, f0
    ble lbl_80308B70
    lfs f0, 0x534(r3)
    fcmpo cr0, f1, f0
    bge lbl_80308B70
    lwz r5, 0x0(r8)
    li r4, 0x0
    lwz r7, 0x4(r8)
    li r0, -0x1
    lwz r6, 0x10(r1)
    stw r5, 0x12c(r3)
    lwz r5, 0x14(r1)
    stw r7, 0x130(r3)
    lwz r7, 0x8(r8)
    stw r7, 0x134(r3)
    stw r6, 0x120(r3)
    stw r5, 0x124(r3)
    stb r4, 0x128(r3)
    stb r0, 0x129(r3)
    li r3, -0x1
    b lbl_80308B80
lbl_80308B00:
    fcmpo cr0, f5, f3
    opword 0x4C401382
    beq lbl_80308B30
    fcmpo cr0, f5, f2
    opword 0x4C411382
    beq lbl_80308B30
    fcmpo cr0, f4, f1
    opword 0x4C401382
    beq lbl_80308B30
    fcmpo cr0, f4, f0
    opword 0x4C411382
    bne lbl_80308B70
lbl_80308B30:
    lwz r5, 0x0(r8)
    li r4, 0x0
    lwz r7, 0x4(r8)
    li r0, -0x1
    lwz r6, 0x8(r1)
    stw r5, 0x120(r3)
    lwz r5, 0xc(r1)
    stw r7, 0x124(r3)
    lwz r7, 0x8(r8)
    stw r7, 0x128(r3)
    stw r6, 0x12c(r3)
    stw r5, 0x130(r3)
    stb r4, 0x134(r3)
    stb r0, 0x135(r3)
    li r3, -0x1
    b lbl_80308B80
lbl_80308B70:
    addi r8, r8, 0xc
    cmplw r8, r0
    blt lbl_80308A14
    li r3, 0x0
lbl_80308B80:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80308B88
// ----------------------------------------------------------------------------
asm void fn_80308B88() {
    nofralloc
    lfs f0, lbl_8049D110
    addi r6, r3, 0x120
    addi r0, r3, 0x138
    fmuls f4, f0, f0
lbl_80308B98:
    lbz r4, 0x8(r6)
    extsb. r4, r4
    bne lbl_80308C08
    lbz r4, 0x9(r6)
    extsb. r4, r4
    bne lbl_80308C08
    addi r7, r3, 0xf0
    addi r4, r3, 0x120
lbl_80308BB8:
    lbz r5, 0x8(r7)
    extsb. r5, r5
    bne lbl_80308BFC
    lfs f3, 0x0(r6)
    lfs f2, 0x0(r7)
    lfs f1, 0x4(r6)
    lfs f0, 0x4(r7)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    fmuls f1, f2, f2
    fmuls f0, f0, f0
    fadds f0, f1, f0
    fcmpo cr0, f0, f4
    bge lbl_80308BFC
    fmr f4, f0
    mr r8, r6
    mr r9, r7
lbl_80308BFC:
    addi r7, r7, 0xc
    cmplw r7, r4
    blt lbl_80308BB8
lbl_80308C08:
    addi r6, r6, 0xc
    cmplw r6, r0
    blt lbl_80308B98
    lfs f0, lbl_8049D110
    fmuls f0, f0, f0
    fcmpu cr0, f4, f0
    bne lbl_80308C2C
    li r3, 0x0
    blr
lbl_80308C2C:
    lwz r5, 0x0(r9)
    addi r0, r3, 0x120
    lwz r4, 0x4(r9)
    cmplw r8, r0
    stw r5, 0x0(r8)
    stw r4, 0x4(r8)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r8)
    lfs f5, 0xdc(r3)
    lfs f0, 0x4ec(r3)
    lfs f3, 0xe0(r3)
    lfs f1, 0x4f0(r3)
    fmuls f4, f5, f0
    fmuls f2, f3, f0
    lfs f0, 0x4c4(r3)
    fmuls f3, f3, f1
    fmuls f1, f5, f1
    fadds f3, f4, f3
    fsubs f1, f2, f1
    fmuls f2, f0, f3
    stfs f3, 0x4c8(r3)
    fmuls f3, f0, f1
    stfs f1, 0x4cc(r3)
    bne lbl_80308CB8
    lfs f0, 0x0(r8)
    li r4, 0x0
    li r0, -0x1
    fadds f0, f0, f2
    stfs f0, 0x12c(r3)
    lfs f0, 0x4(r8)
    fadds f0, f0, f3
    stb r4, 0x134(r3)
    stb r0, 0x135(r3)
    stfs f0, 0x130(r3)
    b lbl_80308CE0
lbl_80308CB8:
    lfs f0, 0x0(r8)
    li r4, 0x0
    li r0, -0x1
    fsubs f0, f0, f2
    stfs f0, 0x120(r3)
    lfs f0, 0x4(r8)
    fsubs f0, f0, f3
    stb r4, 0x128(r3)
    stb r0, 0x129(r3)
    stfs f0, 0x124(r3)
lbl_80308CE0:
    lbz r0, 0x5e(r3)
    extsb. r0, r0
    bge lbl_80308CF4
    li r3, -0x1
    blr
lbl_80308CF4:
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_80308CFC
// ----------------------------------------------------------------------------
asm void fn_80308CFC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    extsb. r0, r4
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    bne lbl_80308D2C
    li r0, 0x0
    stb r0, 0x5e(r3)
    b lbl_803092B0
lbl_80308D2C:
    lfs f4, 0xdc(r3)
    lfs f1, 0x4c8(r3)
    lfs f2, 0xe0(r3)
    fmuls f3, f4, f1
    lfs f0, 0x4cc(r3)
    fmuls f1, f2, f1
    lbz r0, 0x5e(r3)
    fmuls f2, f2, f0
    fmuls f0, f4, f0
    extsb. r0, r0
    fadds f3, f3, f2
    fsubs f2, f1, f0
    stfs f3, 0x10(r1)
    stfs f2, 0x14(r1)
    bne lbl_80308D94
    lwz r4, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r4, 0x34(r3)
    lfs f0, lbl_804A2680
    stw r0, 0x38(r3)
    lwz r4, lbl_8049E230
    lwz r0, lbl_8049E234
    stw r4, 0x3c(r3)
    stw r0, 0x40(r3)
    stfs f0, 0x44(r3)
    b lbl_80308F5C
lbl_80308D94:
    lfs f1, 0x34(r3)
    lfs f0, 0x38(r3)
    fsubs f3, f3, f1
    fsubs f2, f2, f0
    fmuls f1, f3, f3
    stfs f3, 0x8(r1)
    fmuls f0, f2, f2
    stfs f2, 0xc(r1)
    fadds f1, f1, f0
    bl sqrt
    lwz r0, 0x564(r30)
    frsp f2, f1
    cmpwi r0, 0x0
    bne lbl_80308E90
    lfs f0, 0xb8(r30)
    fcmpo cr0, f2, f0
    opword 0x4C411382
    bne lbl_80308DE4
    lfs f4, lbl_804A2690
    b lbl_80308DF0
lbl_80308DE4:
    fdivs f4, f2, f0
    fmuls f4, f4, f4
    fmuls f4, f4, f4
lbl_80308DF0:
    lfs f0, 0xbc(r30)
    lfs f3, 0x8(r1)
    fmuls f4, f4, f0
    lfs f1, 0xc(r1)
    lfs f2, 0x34(r30)
    lfs f0, 0x38(r30)
    fmuls f3, f4, f3
    fmuls f1, f4, f1
    fadds f3, f2, f3
    fadds f2, f0, f1
    fmuls f1, f3, f3
    stfs f3, 0x8(r1)
    fmuls f0, f2, f2
    stfs f2, 0xc(r1)
    fadds f1, f1, f0
    bl sqrt
    frsp f4, f1
    lfs f0, 0x8(r1)
    lfs f2, 0xc(r1)
    lfs f1, 0x34(r30)
    fdivs f3, f0, f4
    lfs f0, 0x38(r30)
    fdivs f2, f2, f4
    stfs f3, 0x8(r1)
    fsubs f3, f3, f1
    stfs f2, 0xc(r1)
    fsubs f2, f2, f0
    fmuls f1, f3, f3
    stfs f3, 0x3c(r30)
    fmuls f0, f2, f2
    stfs f2, 0x40(r30)
    fadds f1, f1, f0
    bl sqrt
    frsp f0, f1
    lwz r3, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r3, 0x34(r30)
    stfs f0, 0x44(r30)
    stw r0, 0x38(r30)
    b lbl_80308F5C
lbl_80308E90:
    lfs f0, 0xb8(r30)
    fcmpo cr0, f2, f0
    ble lbl_80308F44
    fsubs f0, f2, f0
    lfs f4, 0xbc(r30)
    lfs f3, 0x8(r1)
    lfs f1, 0xc(r1)
    fdivs f5, f0, f2
    lfs f2, 0x34(r30)
    lfs f0, 0x38(r30)
    fmuls f4, f4, f5
    fmuls f3, f3, f4
    fmuls f1, f1, f4
    fadds f3, f2, f3
    fadds f2, f0, f1
    fmuls f1, f3, f3
    stfs f3, 0x8(r1)
    fmuls f0, f2, f2
    stfs f2, 0xc(r1)
    fadds f1, f1, f0
    bl sqrt
    frsp f4, f1
    lfs f0, 0x8(r1)
    lfs f2, 0xc(r1)
    lfs f1, 0x34(r30)
    fdivs f3, f0, f4
    lfs f0, 0x38(r30)
    fdivs f2, f2, f4
    stfs f3, 0x8(r1)
    fsubs f3, f3, f1
    stfs f2, 0xc(r1)
    fsubs f2, f2, f0
    fmuls f1, f3, f3
    stfs f3, 0x3c(r30)
    fmuls f0, f2, f2
    stfs f2, 0x40(r30)
    fadds f1, f1, f0
    bl sqrt
    frsp f0, f1
    lwz r3, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r3, 0x34(r30)
    stfs f0, 0x44(r30)
    stw r0, 0x38(r30)
    b lbl_80308F5C
lbl_80308F44:
    lwz r3, lbl_8049E230
    lwz r0, lbl_8049E234
    lfs f0, lbl_804A2680
    stw r3, 0x3c(r30)
    stw r0, 0x40(r30)
    stfs f0, 0x44(r30)
lbl_80308F5C:
    lfs f1, 0x544(r30)
    lfs f0, 0x4c4(r30)
    lbz r0, 0x5e(r30)
    fdivs f2, f1, f0
    extsb. r0, r0
    bne lbl_80308F88
    lfs f0, lbl_804A2680
    stfs f2, 0x48(r30)
    stfs f0, 0x4c(r30)
    stfs f0, 0x50(r30)
    b lbl_80309078
lbl_80308F88:
    lfs f1, 0x48(r30)
    lfs f0, lbl_804A2680
    fsubs f4, f2, f1
    fcmpo cr0, f4, f0
    bge lbl_80308FA4
    fneg f3, f4
    b lbl_80308FA8
lbl_80308FA4:
    fmr f3, f4
lbl_80308FA8:
    lwz r0, 0x568(r30)
    cmpwi r0, 0x0
    bne lbl_80309018
    lfs f0, 0xc0(r30)
    fcmpo cr0, f3, f0
    opword 0x4C411382
    bne lbl_80308FCC
    lfs f3, lbl_804A2690
    b lbl_80308FD8
lbl_80308FCC:
    fdivs f3, f3, f0
    fmuls f3, f3, f3
    fmuls f3, f3, f3
lbl_80308FD8:
    lfs f1, 0xc4(r30)
    lfs f0, lbl_804A2680
    fmuls f3, f3, f1
    fmuls f1, f3, f4
    fcmpo cr0, f1, f0
    stfs f1, 0x4c(r30)
    bge lbl_80309000
    fneg f0, f1
    stfs f0, 0x50(r30)
    b lbl_80309004
lbl_80309000:
    stfs f1, 0x50(r30)
lbl_80309004:
    lfs f1, 0x48(r30)
    lfs f0, 0x4c(r30)
    fadds f0, f1, f0
    stfs f0, 0x48(r30)
    b lbl_80309078
lbl_80309018:
    lfs f0, 0xc0(r30)
    fcmpo cr0, f3, f0
    ble lbl_8030906C
    fsubs f2, f3, f0
    lfs f1, 0xc4(r30)
    lfs f0, lbl_804A2680
    fdivs f2, f2, f3
    fmuls f1, f1, f2
    fmuls f1, f1, f4
    fcmpo cr0, f1, f0
    stfs f1, 0x4c(r30)
    bge lbl_80309054
    fneg f0, f1
    stfs f0, 0x50(r30)
    b lbl_80309058
lbl_80309054:
    stfs f1, 0x50(r30)
lbl_80309058:
    lfs f1, 0x48(r30)
    lfs f0, 0x4c(r30)
    fadds f0, f1, f0
    stfs f0, 0x48(r30)
    b lbl_80309078
lbl_8030906C:
    lfs f0, lbl_804A2680
    stfs f0, 0x4c(r30)
    stfs f0, 0x50(r30)
lbl_80309078:
    lfs f2, 0x4cc(r30)
    lfs f0, 0xe0(r30)
    fneg f1, f2
    lbz r0, 0x5e(r30)
    lfs f5, 0x4c8(r30)
    fmuls f3, f2, f0
    lfs f4, 0xdc(r30)
    extsb. r0, r0
    fmuls f0, f5, f0
    lfs f7, 0x120(r30)
    fmuls f2, f1, f4
    lfs f6, 0x12c(r30)
    fmuls f5, f5, f4
    lfs f4, 0x124(r30)
    lfs f1, 0x130(r30)
    fadds f7, f7, f6
    lfs f8, lbl_804A2684
    fadds f3, f5, f3
    fadds f6, f4, f1
    lfs f4, 0xd8(r30)
    fmuls f7, f8, f7
    fadds f2, f2, f0
    lfs f1, 0xd4(r30)
    fmuls f5, f8, f6
    fmuls f9, f3, f7
    lfs f6, 0xe4(r30)
    fmuls f7, f2, f7
    fmuls f0, f3, f5
    lfs f3, 0xe8(r30)
    fmuls f8, f2, f5
    lfs f5, 0xec(r30)
    fneg f2, f4
    fadds f7, f7, f0
    fsubs f8, f9, f8
    fneg f0, f1
    fsubs f3, f3, f7
    fsubs f6, f6, f8
    fmuls f6, f5, f6
    fmuls f5, f5, f3
    fmuls f3, f2, f6
    stfs f6, 0x8(r1)
    fmuls f2, f1, f5
    fmuls f1, f0, f6
    stfs f5, 0xc(r1)
    fmuls f0, f4, f5
    fadds f3, f3, f2
    fsubs f2, f1, f0
    stfs f3, 0x10(r1)
    stfs f2, 0x14(r1)
    bne lbl_8030916C
    lwz r3, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x20(r30)
    lfs f0, lbl_804A2680
    stw r0, 0x24(r30)
    lwz r3, lbl_8049E230
    lwz r0, lbl_8049E234
    stw r3, 0x28(r30)
    stw r0, 0x2c(r30)
    stfs f0, 0x30(r30)
    b lbl_803092AC
lbl_8030916C:
    lfs f1, 0x20(r30)
    lfs f0, 0x24(r30)
    fsubs f3, f3, f1
    fsubs f2, f2, f0
    fmuls f1, f3, f3
    stfs f3, 0x8(r1)
    fmuls f0, f2, f2
    stfs f2, 0xc(r1)
    fadds f1, f1, f0
    bl sqrt
    lwz r0, 0x560(r30)
    frsp f4, f1
    cmpwi r0, 0x0
    bne lbl_80309224
    lfs f0, 0xb0(r30)
    fcmpo cr0, f4, f0
    opword 0x4C411382
    bne lbl_803091BC
    lfs f2, lbl_804A2690
    b lbl_803091C8
lbl_803091BC:
    fdivs f2, f4, f0
    fmuls f2, f2, f2
    fmuls f2, f2, f2
lbl_803091C8:
    lfs f0, 0xb4(r30)
    lfs f1, 0x8(r1)
    fmuls f2, f2, f0
    lfs f0, 0xc(r1)
    fmuls f3, f2, f1
    fmuls f2, f2, f0
    fmuls f1, f3, f3
    stfs f3, 0x28(r30)
    fmuls f0, f2, f2
    stfs f2, 0x2c(r30)
    fadds f1, f1, f0
    bl sqrt
    frsp f4, f1
    lfs f3, 0x20(r30)
    lfs f2, 0x28(r30)
    lfs f1, 0x24(r30)
    lfs f0, 0x2c(r30)
    fadds f2, f3, f2
    stfs f4, 0x30(r30)
    fadds f0, f1, f0
    stfs f2, 0x20(r30)
    stfs f0, 0x24(r30)
    b lbl_803092AC
lbl_80309224:
    lfs f0, 0xb0(r30)
    fcmpo cr0, f4, f0
    ble lbl_80309294
    fsubs f3, f4, f0
    lfs f2, 0xb4(r30)
    lfs f1, 0x8(r1)
    lfs f0, 0xc(r1)
    fdivs f3, f3, f4
    fmuls f2, f2, f3
    fmuls f3, f2, f1
    fmuls f2, f2, f0
    fmuls f1, f3, f3
    stfs f3, 0x28(r30)
    fmuls f0, f2, f2
    stfs f2, 0x2c(r30)
    fadds f1, f1, f0
    bl sqrt
    frsp f4, f1
    lfs f3, 0x20(r30)
    lfs f2, 0x28(r30)
    lfs f1, 0x24(r30)
    lfs f0, 0x2c(r30)
    fadds f2, f3, f2
    stfs f4, 0x30(r30)
    fadds f0, f1, f0
    stfs f2, 0x20(r30)
    stfs f0, 0x24(r30)
    b lbl_803092AC
lbl_80309294:
    lwz r3, lbl_8049E230
    lwz r0, lbl_8049E234
    lfs f0, lbl_804A2680
    stw r3, 0x28(r30)
    stw r0, 0x2c(r30)
    stfs f0, 0x30(r30)
lbl_803092AC:
    stb r31, 0x5e(r30)
lbl_803092B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_803092C8
// ----------------------------------------------------------------------------
asm void fn_803092C8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lbz r0, 0x36(r4)
    cmplwi r0, 0x2
    beq lbl_80309320
    cmplwi r0, 0x5
    beq lbl_80309320
    cmplwi r0, 0x8
    beq lbl_80309320
    cmplwi r0, 0xb
    bne lbl_803093C0
    lbz r0, 0x557(r3)
    cmpwi r0, 0x0
    beq lbl_803093C0
lbl_80309320:
    lfd f4, lbl_804A26A0
    addi r8, r4, 0x20
    lfs f3, lbl_804A26A8
    addi r9, r3, 0x114
    lfs f2, lbl_804A26AC
    addi r0, r3, 0xf0
    lfs f1, lbl_804A26B0
    li r4, -0x1
    lis r7, 0x4330
    li r5, 0x0
lbl_80309348:
    lhz r6, 0x4(r8)
    cmpwi r6, 0x0
    beq lbl_803093A8
    lha r6, 0x0(r8)
    stw r7, 0x8(r1)
    xoris r6, r6, 0x8000
    stw r6, 0xc(r1)
    lfd f0, 0x8(r1)
    stw r7, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f0, f3, f0
    fsubs f0, f0, f2
    stfs f0, 0x0(r9)
    lha r6, 0x2(r8)
    xoris r6, r6, 0x8000
    stw r6, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f0, f3, f0
    fsubs f0, f0, f1
    stfs f0, 0x4(r9)
    stb r5, 0x8(r9)
    stb r5, 0x9(r9)
    b lbl_803093AC
lbl_803093A8:
    stb r4, 0x8(r9)
lbl_803093AC:
    subi r9, r9, 0xc
    subi r8, r8, 0x8
    cmplw r9, r0
    bge lbl_80309348
    b lbl_803093DC
lbl_803093C0:
    addi r5, r3, 0x114
    addi r0, r3, 0xf0
    li r4, -0x1
lbl_803093CC:
    stb r4, 0x8(r5)
    subi r5, r5, 0xc
    cmplw r5, r0
    bge lbl_803093CC
lbl_803093DC:
    addi r7, r3, 0x114
    addi r6, r3, 0xf0
    mr r4, r7
lbl_803093E8:
    lbz r0, 0x8(r4)
    extsb. r0, r0
    blt lbl_80309448
    lfs f1, 0x0(r4)
    lfs f0, 0x528(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_8030943C
    lfs f0, 0x530(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_8030943C
    lfs f1, 0x4(r4)
    lfs f0, 0x52c(r3)
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_8030943C
    lfs f0, 0x534(r3)
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_80309448
lbl_8030943C:
    lbz r0, 0x8(r4)
    ori r0, r0, 0x1
    stb r0, 0x8(r4)
lbl_80309448:
    subi r4, r4, 0xc
    cmplw r4, r6
    bge lbl_803093E8
lbl_80309454:
    lbz r0, 0x8(r6)
    extsb. r0, r0
    bne lbl_803094A4
    addi r5, r6, 0xc
lbl_80309464:
    lbz r4, 0x8(r5)
    extsb. r0, r4
    bne lbl_80309498
    lfs f1, 0x0(r6)
    lfs f0, 0x0(r5)
    fcmpu cr0, f1, f0
    bne lbl_80309498
    lfs f1, 0x4(r6)
    lfs f0, 0x4(r5)
    fcmpu cr0, f1, f0
    bne lbl_80309498
    ori r0, r4, 0x2
    stb r0, 0x8(r5)
lbl_80309498:
    addi r5, r5, 0xc
    cmplw r5, r7
    ble lbl_80309464
lbl_803094A4:
    addi r6, r6, 0xc
    cmplw r6, r7
    blt lbl_80309454
    li r0, 0x0
    addi r5, r3, 0x114
    sth r0, 0x138(r3)
    addi r0, r3, 0xf0
lbl_803094C0:
    lbz r4, 0x8(r5)
    extsb. r4, r4
    bne lbl_803094D8
    lha r4, 0x138(r3)
    addi r4, r4, 0x1
    sth r4, 0x138(r3)
lbl_803094D8:
    subi r5, r5, 0xc
    cmplw r5, r0
    bge lbl_803094C0
    lfs f1, 0x54(r3)
    lfs f0, lbl_8049D10C
    fcmpo cr0, f1, f0
    opword 0x4C401382
    beq lbl_803095E8
    lbz r0, 0x5e(r3)
    extsb r0, r0
    cmpwi r0, 0x2
    beq lbl_80309510
    cmpwi r0, -0x2
    bne lbl_80309554
lbl_80309510:
    lha r0, 0x138(r3)
    cmpwi r0, 0x2
    blt lbl_80309530
    mr r3, r31
    bl fn_803087AC
    extsb. r0, r3
    mr r30, r3
    bne lbl_803095EC
lbl_80309530:
    lha r0, 0x138(r31)
    cmpwi r0, 0x1
    blt lbl_803095E8
    mr r3, r31
    bl fn_80308B88
    extsb. r0, r3
    mr r30, r3
    bne lbl_803095EC
    b lbl_803095E8
lbl_80309554:
    cmpwi r0, 0x1
    beq lbl_80309564
    cmpwi r0, -0x1
    bne lbl_803095A8
lbl_80309564:
    lha r0, 0x138(r3)
    cmpwi r0, 0x2
    blt lbl_80309584
    mr r3, r31
    bl fn_803085C4
    extsb. r0, r3
    mr r30, r3
    bne lbl_803095EC
lbl_80309584:
    lha r0, 0x138(r31)
    cmpwi r0, 0x1
    blt lbl_803095E8
    mr r3, r31
    bl fn_80308B88
    extsb. r0, r3
    mr r30, r3
    bne lbl_803095EC
    b lbl_803095E8
lbl_803095A8:
    lha r0, 0x138(r3)
    cmpwi r0, 0x2
    blt lbl_803095C8
    mr r3, r31
    bl fn_803085C4
    extsb. r0, r3
    mr r30, r3
    bne lbl_803095EC
lbl_803095C8:
    lha r0, 0x138(r31)
    cmpwi r0, 0x1
    bne lbl_803095E8
    mr r3, r31
    bl fn_803089D4
    extsb. r0, r3
    mr r30, r3
    bne lbl_803095EC
lbl_803095E8:
    li r30, 0x0
lbl_803095EC:
    extsb. r0, r30
    beq lbl_803096F8
    lfs f3, 0x12c(r31)
    lfs f2, 0x120(r31)
    lfs f1, 0x130(r31)
    lfs f0, 0x124(r31)
    fsubs f30, f3, f2
    fsubs f31, f1, f0
    fmuls f1, f30, f30
    fmuls f0, f31, f31
    fadds f1, f1, f0
    bl sqrt
    frsp f3, f1
    lfs f0, lbl_804A2690
    lhz r0, 0x4fc(r31)
    lfs f4, 0xdc(r31)
    fdivs f2, f0, f3
    lfs f1, 0x544(r31)
    lfs f0, 0xe0(r31)
    cmpwi r0, 0x0
    stfs f3, 0x4c4(r31)
    fmuls f30, f30, f2
    fmuls f31, f31, f2
    fmuls f5, f1, f2
    fmuls f3, f4, f30
    stfs f30, 0x4c8(r31)
    fmuls f2, f0, f31
    fmuls f1, f0, f30
    stfs f5, 0x4d0(r31)
    fmuls f0, f4, f31
    fadds f2, f3, f2
    stfs f31, 0x4cc(r31)
    fsubs f3, f1, f0
    stfs f2, 0x4e4(r31)
    stfs f3, 0x4e8(r31)
    bne lbl_803096B0
    lfs f0, 0x4ec(r31)
    lfs f1, 0x4f0(r31)
    fmuls f2, f2, f0
    lfs f0, lbl_8049D108
    fmuls f1, f3, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_803096B0
    li r0, 0x1
    li r30, 0x0
    stb r0, 0x134(r31)
    stb r0, 0x128(r31)
lbl_803096B0:
    lbz r0, 0x5e(r31)
    cmpwi r0, 0x2
    bne lbl_803096EC
    extsb r0, r30
    cmpwi r0, 0x2
    bne lbl_803096EC
    lbz r3, 0x4fe(r31)
    cmplwi r3, 0xc8
    bne lbl_803096E0
    lfs f0, 0x4c4(r31)
    stfs f0, 0x4d4(r31)
    b lbl_80309700
lbl_803096E0:
    addi r0, r3, 0x1
    stb r0, 0x4fe(r31)
    b lbl_80309700
lbl_803096EC:
    li r0, 0x0
    stb r0, 0x4fe(r31)
    b lbl_80309700
lbl_803096F8:
    li r0, 0x0
    stb r0, 0x4fe(r31)
lbl_80309700:
    mr r3, r31
    extsb r4, r30
    bl fn_80308CFC
    opword 0xE3E10038
    lfd f31, 0x30(r1)
    opword 0xE3C10028
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x44(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80309734
// ----------------------------------------------------------------------------
asm void fn_80309734() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stfd f29, 0x30(r1)
    opword 0xF3A10038
    stfd f28, 0x20(r1)
    opword 0xF3810028
    lis r8, 0x4330
    xoris r0, r4, 0x8000
    xoris r5, r5, 0x8000
    stw r0, 0xc(r1)
    xoris r4, r6, 0x8000
    lfd f4, lbl_804A26A0
    xoris r0, r7, 0x8000
    stw r8, 0x8(r1)
    lfd f0, 0x8(r1)
    stw r8, 0x10(r1)
    fsubs f31, f0, f4
    stw r5, 0x14(r1)
    lfd f0, 0x10(r1)
    fmuls f1, f31, f31
    stw r4, 0xc(r1)
    fsubs f30, f0, f4
    stw r0, 0x14(r1)
    lfd f3, 0x8(r1)
    fmuls f0, f30, f30
    lfd f2, 0x10(r1)
    stw r31, 0x1c(r1)
    fsubs f29, f3, f4
    fsubs f28, f2, f4
    mr r31, r3
    fadds f1, f1, f0
    bl sqrt
    frsp f2, f1
    fcmpo cr0, f2, f29
    opword 0x4C401382
    bne lbl_803097E8
    lfs f0, lbl_804A2680
    stfs f0, 0x4(r31)
    stfs f0, 0x0(r31)
    b lbl_80309828
lbl_803097E8:
    fcmpo cr0, f2, f28
    opword 0x4C411382
    bne lbl_80309808
    fdivs f1, f31, f2
    fdivs f0, f30, f2
    stfs f1, 0x0(r31)
    stfs f0, 0x4(r31)
    b lbl_80309828
lbl_80309808:
    fsubs f1, f2, f29
    fsubs f0, f28, f29
    fdivs f0, f1, f0
    fdivs f0, f0, f2
    fmuls f1, f31, f0
    fmuls f0, f30, f0
    stfs f1, 0x0(r31)
    stfs f0, 0x4(r31)
lbl_80309828:
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    lfd f30, 0x40(r1)
    opword 0xE3A10038
    lfd f29, 0x30(r1)
    opword 0xE3810028
    lfd f28, 0x20(r1)
    lwz r0, 0x64(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_8030985C
// ----------------------------------------------------------------------------
asm void fn_8030985C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    lis r0, 0x4330
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    bge lbl_803098F8
    neg r0, r4
    cmpw r0, r6
    bgt lbl_8030989C
    lfs f0, lbl_804A2680
    stfs f0, 0x0(r3)
    b lbl_803098E8
lbl_8030989C:
    cmpw r0, r7
    blt lbl_803098B0
    lfs f0, lbl_804A2690
    stfs f0, 0x0(r3)
    b lbl_803098E8
lbl_803098B0:
    add r4, r4, r6
    subf r0, r6, r7
    neg r4, r4
    lfd f2, lbl_804A26A0
    xoris r4, r4, 0x8000
    xoris r0, r0, 0x8000
    stw r4, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x0(r3)
lbl_803098E8:
    lfs f0, 0x0(r3)
    fneg f0, f0
    stfs f0, 0x0(r3)
    b lbl_80309954
lbl_803098F8:
    cmpw r4, r6
    bgt lbl_8030990C
    lfs f0, lbl_804A2680
    stfs f0, 0x0(r3)
    b lbl_80309954
lbl_8030990C:
    cmpw r4, r7
    blt lbl_80309920
    lfs f0, lbl_804A2690
    stfs f0, 0x0(r3)
    b lbl_80309954
lbl_80309920:
    subf r4, r6, r4
    subf r0, r6, r7
    xoris r4, r4, 0x8000
    lfd f2, lbl_804A26A0
    xoris r0, r0, 0x8000
    stw r4, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x0(r3)
lbl_80309954:
    cmpwi r5, 0x0
    bge lbl_803099D0
    neg r0, r5
    cmpw r0, r6
    bgt lbl_80309974
    lfs f0, lbl_804A2680
    stfs f0, 0x4(r3)
    b lbl_803099C0
lbl_80309974:
    cmpw r0, r7
    blt lbl_80309988
    lfs f0, lbl_804A2690
    stfs f0, 0x4(r3)
    b lbl_803099C0
lbl_80309988:
    add r4, r5, r6
    subf r0, r6, r7
    neg r4, r4
    lfd f2, lbl_804A26A0
    xoris r4, r4, 0x8000
    xoris r0, r0, 0x8000
    stw r4, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x4(r3)
lbl_803099C0:
    lfs f0, 0x4(r3)
    fneg f0, f0
    stfs f0, 0x4(r3)
    b lbl_80309A2C
lbl_803099D0:
    cmpw r5, r6
    bgt lbl_803099E4
    lfs f0, lbl_804A2680
    stfs f0, 0x4(r3)
    b lbl_80309A2C
lbl_803099E4:
    cmpw r5, r7
    blt lbl_803099F8
    lfs f0, lbl_804A2690
    stfs f0, 0x4(r3)
    b lbl_80309A2C
lbl_803099F8:
    subf r4, r6, r5
    subf r0, r6, r7
    xoris r4, r4, 0x8000
    lfd f2, lbl_804A26A0
    xoris r0, r0, 0x8000
    stw r4, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x4(r3)
lbl_80309A2C:
    lfs f0, 0x0(r3)
    lfs f1, 0x4(r3)
    fmuls f2, f0, f0
    lfs f0, lbl_804A2690
    fmuls f1, f1, f1
    fadds f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_80309A6C
    bl sqrt
    frsp f2, f1
    lfs f1, 0x0(r31)
    lfs f0, 0x4(r31)
    fdivs f1, f1, f2
    fdivs f0, f0, f2
    stfs f1, 0x0(r31)
    stfs f0, 0x4(r31)
lbl_80309A6C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80309A80
// ----------------------------------------------------------------------------
asm void fn_80309A80() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, 0x4330
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, fn_80309734@ha
    addi r31, r31, fn_80309734@l
    stw r30, 0x28(r1)
    addi r30, r3, 0x60
    stw r29, 0x24(r1)
    mr r29, r4
    lwz r0, lbl_8049E220
    stw r5, 0x8(r1)
    cmpwi r0, 0x0
    stw r5, 0x10(r1)
    beq lbl_80309AC8
    lis r31, fn_8030985C@ha
    addi r31, r31, fn_8030985C@l
lbl_80309AC8:
    lbz r6, 0x28(r4)
    cmplwi r6, 0x1
    bne lbl_80309B58
    lbz r5, 0x36(r4)
    addi r0, r5, 0xfd
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    bgt lbl_80309B58
    lbz r0, 0x555(r3)
    cmpwi r0, 0x0
    beq lbl_80309B2C
    li r0, 0x0
    lfs f2, lbl_804A2680
    stb r0, 0x555(r3)
    lfs f1, lbl_804A268C
    lwz r3, lbl_8049E230
    lwz r0, lbl_8049E234
    lfs f0, lbl_804A2690
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    stfs f2, 0x10(r30)
    stfs f2, 0x8(r30)
    stfs f1, 0xc(r30)
    stfs f0, 0x14(r30)
    stfs f2, 0x18(r30)
lbl_80309B2C:
    lbz r4, 0x30(r4)
    mr r12, r31
    lbz r5, 0x31(r29)
    mr r3, r30
    extsb r4, r4
    lwz r6, lbl_8049D114
    extsb r5, r5
    lwz r7, lbl_8049D118
    mtctr r12
    bctrl
    b lbl_8030A338
lbl_80309B58:
    cmplwi r6, 0x2
    bne lbl_80309CE0
    lbz r5, 0x36(r4)
    addi r0, r5, 0xfa
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    bgt lbl_80309CE0
    lbz r0, 0x555(r3)
    cmpwi r0, 0x0
    beq lbl_80309BCC
    li r7, 0x0
    lfs f0, lbl_804A2680
    stb r7, 0x555(r3)
    lhz r0, 0x504(r3)
    lwz r6, lbl_8049E230
    lwz r5, lbl_8049E234
    stw r6, 0xc(r30)
    stw r5, 0x10(r30)
    lwz r6, lbl_8049E230
    lwz r5, lbl_8049E234
    stw r6, 0x14(r30)
    stw r5, 0x18(r30)
    stfs f0, 0x20(r30)
    stfs f0, 0x1c(r30)
    stw r7, 0x8(r30)
    stw r7, 0x4(r30)
    stw r7, 0x0(r30)
    sth r7, 0x508(r3)
    sth r0, 0x50a(r3)
lbl_80309BCC:
    mr r12, r31
    addi r3, r30, 0xc
    lha r4, 0x2c(r4)
    lha r5, 0x2e(r29)
    lwz r6, lbl_8049D11C
    lwz r7, lbl_8049D120
    mtctr r12
    bctrl
    mr r12, r31
    addi r3, r30, 0x14
    lha r4, 0x30(r29)
    lha r5, 0x32(r29)
    lwz r6, lbl_8049D11C
    lwz r7, lbl_8049D120
    mtctr r12
    bctrl
    lwz r5, lbl_8049D124
    lbz r0, 0x34(r29)
    lwz r4, lbl_8049D128
    cmpw r0, r5
    bgt lbl_80309C2C
    lfs f0, lbl_804A2680
    stfs f0, 0x1c(r30)
    b lbl_80309C74
lbl_80309C2C:
    cmpw r0, r4
    blt lbl_80309C40
    lfs f0, lbl_804A2690
    stfs f0, 0x1c(r30)
    b lbl_80309C74
lbl_80309C40:
    subf r3, r5, r0
    subf r0, r5, r4
    xoris r3, r3, 0x8000
    lfd f2, lbl_804A26A0
    xoris r0, r0, 0x8000
    stw r3, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x1c(r30)
lbl_80309C74:
    lwz r5, lbl_8049D124
    lbz r0, 0x35(r29)
    lwz r4, lbl_8049D128
    cmpw r0, r5
    bgt lbl_80309C94
    lfs f0, lbl_804A2680
    stfs f0, 0x20(r30)
    b lbl_8030A338
lbl_80309C94:
    cmpw r0, r4
    blt lbl_80309CA8
    lfs f0, lbl_804A2690
    stfs f0, 0x20(r30)
    b lbl_8030A338
lbl_80309CA8:
    subf r3, r5, r0
    subf r0, r5, r4
    xoris r3, r3, 0x8000
    lfd f2, lbl_804A26A0
    xoris r0, r0, 0x8000
    stw r3, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x20(r30)
    b lbl_8030A338
lbl_80309CE0:
    cmplwi r6, 0x11
    bne lbl_80309F10
    lbz r0, 0x36(r4)
    cmplwi r0, 0xb
    bne lbl_80309F10
    lbz r0, 0x555(r3)
    cmpwi r0, 0x0
    beq lbl_80309D4C
    li r7, 0x0
    lfs f0, lbl_804A2680
    stb r7, 0x555(r3)
    lhz r0, 0x504(r3)
    lwz r6, lbl_8049E230
    lwz r5, lbl_8049E234
    stw r6, 0xc(r30)
    stw r5, 0x10(r30)
    lwz r6, lbl_8049E230
    lwz r5, lbl_8049E234
    stw r6, 0x14(r30)
    stw r5, 0x18(r30)
    stfs f0, 0x20(r30)
    stfs f0, 0x1c(r30)
    stw r7, 0x8(r30)
    stw r7, 0x4(r30)
    stw r7, 0x0(r30)
    sth r7, 0x508(r3)
    sth r0, 0x50a(r3)
lbl_80309D4C:
    mr r12, r31
    addi r3, r30, 0xc
    lha r4, 0x2c(r4)
    lha r5, 0x2e(r29)
    lwz r6, lbl_8049D11C
    lwz r7, lbl_8049D120
    mtctr r12
    bctrl
    lwz r5, lbl_8049E228
    lha r0, 0x30(r29)
    lwz r4, lbl_8049D138
    cmpw r0, r5
    bgt lbl_80309D8C
    lfs f0, lbl_804A2680
    stfs f0, 0x14(r30)
    b lbl_80309DD4
lbl_80309D8C:
    cmpw r0, r4
    blt lbl_80309DA0
    lfs f0, lbl_804A2690
    stfs f0, 0x14(r30)
    b lbl_80309DD4
lbl_80309DA0:
    subf r3, r5, r0
    subf r0, r5, r4
    xoris r3, r3, 0x8000
    lfd f2, lbl_804A26A0
    xoris r0, r0, 0x8000
    stw r3, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x14(r30)
lbl_80309DD4:
    lwz r5, lbl_8049E228
    lha r0, 0x32(r29)
    lwz r4, lbl_8049D138
    cmpw r0, r5
    bgt lbl_80309DF4
    lfs f0, lbl_804A2680
    stfs f0, 0x18(r30)
    b lbl_80309E3C
lbl_80309DF4:
    cmpw r0, r4
    blt lbl_80309E08
    lfs f0, lbl_804A2690
    stfs f0, 0x18(r30)
    b lbl_80309E3C
lbl_80309E08:
    subf r3, r5, r0
    subf r0, r5, r4
    xoris r3, r3, 0x8000
    lfd f2, lbl_804A26A0
    xoris r0, r0, 0x8000
    stw r3, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x18(r30)
lbl_80309E3C:
    lwz r5, lbl_8049E224
    lbz r0, 0x34(r29)
    lwz r4, lbl_8049D134
    cmpw r0, r5
    bgt lbl_80309E5C
    lfs f0, lbl_804A2680
    stfs f0, 0x1c(r30)
    b lbl_80309EA4
lbl_80309E5C:
    cmpw r0, r4
    blt lbl_80309E70
    lfs f0, lbl_804A2690
    stfs f0, 0x1c(r30)
    b lbl_80309EA4
lbl_80309E70:
    subf r3, r5, r0
    subf r0, r5, r4
    xoris r3, r3, 0x8000
    lfd f2, lbl_804A26A0
    xoris r0, r0, 0x8000
    stw r3, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x1c(r30)
lbl_80309EA4:
    lwz r5, lbl_8049E224
    lbz r0, 0x35(r29)
    lwz r4, lbl_8049D134
    cmpw r0, r5
    bgt lbl_80309EC4
    lfs f0, lbl_804A2680
    stfs f0, 0x20(r30)
    b lbl_8030A338
lbl_80309EC4:
    cmpw r0, r4
    blt lbl_80309ED8
    lfs f0, lbl_804A2690
    stfs f0, 0x20(r30)
    b lbl_8030A338
lbl_80309ED8:
    subf r3, r5, r0
    subf r0, r5, r4
    xoris r3, r3, 0x8000
    lfd f2, lbl_804A26A0
    xoris r0, r0, 0x8000
    stw r3, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x20(r30)
    b lbl_8030A338
lbl_80309F10:
    cmplwi r6, 0x10
    bne lbl_8030A060
    lbz r0, 0x36(r4)
    cmplwi r0, 0xa
    bne lbl_8030A060
    lbz r0, 0x555(r3)
    cmpwi r0, 0x0
    beq lbl_80309F7C
    li r7, 0x0
    lfs f0, lbl_804A2680
    stb r7, 0x555(r3)
    lhz r0, 0x504(r3)
    lwz r6, lbl_8049E230
    lwz r5, lbl_8049E234
    stw r6, 0xc(r30)
    stw r5, 0x10(r30)
    lwz r6, lbl_8049E230
    lwz r5, lbl_8049E234
    stw r6, 0x14(r30)
    stw r5, 0x18(r30)
    stfs f0, 0x20(r30)
    stfs f0, 0x1c(r30)
    stw r7, 0x8(r30)
    stw r7, 0x4(r30)
    stw r7, 0x0(r30)
    sth r7, 0x508(r3)
    sth r0, 0x50a(r3)
lbl_80309F7C:
    lfs f0, lbl_804A2680
    stfs f0, 0x10(r30)
    stfs f0, 0xc(r30)
    stfs f0, 0x18(r30)
    stfs f0, 0x14(r30)
    lwz r6, lbl_8049E224
    lbz r0, 0x2c(r4)
    lwz r5, lbl_8049D134
    cmpw r0, r6
    bgt lbl_80309FAC
    stfs f0, 0x1c(r30)
    b lbl_80309FF4
lbl_80309FAC:
    cmpw r0, r5
    blt lbl_80309FC0
    lfs f0, lbl_804A2690
    stfs f0, 0x1c(r30)
    b lbl_80309FF4
lbl_80309FC0:
    subf r3, r6, r0
    subf r0, r6, r5
    xoris r3, r3, 0x8000
    lfd f2, lbl_804A26A0
    xoris r0, r0, 0x8000
    stw r3, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x1c(r30)
lbl_80309FF4:
    lbz r0, 0x2d(r4)
    lwz r5, lbl_8049E224
    lwz r4, lbl_8049D134
    cmpw r0, r5
    bgt lbl_8030A014
    lfs f0, lbl_804A2680
    stfs f0, 0x20(r30)
    b lbl_8030A338
lbl_8030A014:
    cmpw r0, r4
    blt lbl_8030A028
    lfs f0, lbl_804A2690
    stfs f0, 0x20(r30)
    b lbl_8030A338
lbl_8030A028:
    subf r3, r5, r0
    subf r0, r5, r4
    xoris r3, r3, 0x8000
    lfd f2, lbl_804A26A0
    xoris r0, r0, 0x8000
    stw r3, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    stfs f0, 0x20(r30)
    b lbl_8030A338
lbl_8030A060:
    cmplwi r6, 0x3
    bne lbl_8030A338
    lbz r0, 0x36(r4)
    cmplwi r0, 0xc
    bne lbl_8030A338
    lbz r0, 0x555(r3)
    cmpwi r0, 0x0
    beq lbl_8030A0C8
    li r0, 0x0
    lis r7, lbl_80464870@ha
    stb r0, 0x555(r3)
    lis r6, lbl_80464890@ha
    lfd f0, lbl_804A26B8
    addi r5, r7, lbl_80464870@l
    addi r3, r6, lbl_80464890@l
    stb r0, lbl_8049E242
    sth r0, lbl_8049E240
    stb r0, lbl_8049E243
    stfd f0, lbl_80464870@l(r7)
    stfd f0, lbl_80464890@l(r6)
    stfd f0, 0x8(r5)
    stfd f0, 0x8(r3)
    stfd f0, 0x10(r5)
    stfd f0, 0x10(r3)
    stfd f0, 0x18(r5)
    stfd f0, 0x18(r3)
lbl_8030A0C8:
    lbz r3, 0x33(r4)
    bl fn_802872A4
    cmpwi r3, 0x0
    bne lbl_8030A0E4
    li r0, -0x1
    stw r0, 0x48(r30)
    b lbl_8030A338
lbl_8030A0E4:
    lbz r0, lbl_8049E242
    cmplwi r0, 0x3
    bge lbl_8030A0FC
    li r0, -0x2
    stw r0, 0x48(r30)
    b lbl_8030A338
lbl_8030A0FC:
    lbz r0, 0x32(r29)
    extsb r0, r0
    cmpwi r0, 0x7f
    beq lbl_8030A114
    cmpwi r0, -0x80
    bne lbl_8030A120
lbl_8030A114:
    li r0, -0x3
    stw r0, 0x48(r30)
    b lbl_8030A338
lbl_8030A120:
    mr r3, r29
    addi r4, r30, 0x8
    li r5, 0x4
    bl fn_8028717C
    cmpwi r3, 0x0
    stw r3, 0x48(r30)
    blt lbl_8030A300
    lis r4, lbl_80464890@ha
    lbz r0, lbl_8049E243
    lfs f0, lbl_8049D140
    addi r3, r4, lbl_80464890@l
    lfd f2, lbl_80464890@l(r4)
    cmpwi r0, 0x0
    lfs f1, lbl_804A2690
    addi r6, r30, 0x10
    fmul f5, f0, f2
    lfd f4, 0x8(r30)
    lfd f3, 0x8(r3)
    addi r7, r30, 0x18
    fadds f6, f1, f0
    lfd f2, 0x10(r3)
    fadd f4, f5, f4
    lfd f1, 0x18(r3)
    fmul f5, f0, f3
    addi r8, r30, 0x20
    fdiv f3, f4, f6
    stfd f3, lbl_80464890@l(r4)
    fmul f3, f0, f2
    lfd f4, 0x10(r30)
    fmul f2, f0, f1
    fadd f1, f5, f4
    fdiv f1, f1, f6
    stfd f1, 0x8(r3)
    lfd f1, 0x18(r30)
    fadd f1, f3, f1
    fdiv f1, f1, f6
    stfd f1, 0x10(r3)
    lfd f1, 0x20(r30)
    fadd f1, f2, f1
    fdiv f1, f1, f6
    stfd f1, 0x18(r3)
    beq lbl_8030A300
    lhz r5, lbl_8049E240
    lis r4, lbl_80464870@ha
    lfd f12, lbl_804A26A0
    addi r3, r4, lbl_80464870@l
    addi r0, r5, 0x1
    lfd f3, lbl_80464870@l(r4)
    clrlwi r5, r0, 16
    sth r0, lbl_8049E240
    subi r0, r5, 0x1
    lfd f11, lbl_804A26C8
    xoris r0, r0, 0x8000
    stw r5, 0x14(r1)
    lfd f5, 0x8(r30)
    stw r0, 0xc(r1)
    lfd f1, 0x10(r1)
    lfd f2, 0x8(r1)
    fsub f4, f1, f11
    stw r5, 0x14(r1)
    fsub f6, f2, f12
    lfd f2, 0x8(r3)
    lfd f1, 0x10(r1)
    stw r0, 0xc(r1)
    fmul f7, f6, f3
    lfd f6, 0x10(r3)
    lfd f3, 0x8(r1)
    fsub f8, f1, f11
    stw r5, 0x14(r1)
    fsub f1, f3, f12
    fadd f7, f7, f5
    lfd f5, 0x10(r1)
    stw r0, 0xc(r1)
    fmul f9, f1, f2
    lfd f3, 0x18(r3)
    fdiv f10, f7, f4
    lfd f4, 0x8(r1)
    stw r5, 0x14(r1)
    stw r0, 0xc(r1)
    lfd f2, 0x10(r1)
    lfd f1, 0x8(r1)
    fsub f7, f4, f12
    stfd f10, lbl_80464870@l(r4)
    fsub f4, f1, f12
    lfd f1, 0x0(r6)
    fsub f5, f5, f11
    fmul f6, f7, f6
    stw r5, 0xc(r1)
    fadd f7, f9, f1
    lfd f1, 0x8(r1)
    fmul f3, f4, f3
    fdiv f7, f7, f8
    stfd f7, 0x8(r3)
    fsubs f1, f1, f11
    fsub f2, f2, f11
    lfd f4, 0x0(r7)
    fcmpu cr0, f1, f0
    fadd f0, f6, f4
    fdiv f4, f0, f5
    stfd f4, 0x10(r3)
    lfd f0, 0x0(r8)
    fadd f0, f3, f0
    fdiv f1, f0, f2
    stfd f1, 0x18(r3)
    bne lbl_8030A300
    fadd f0, f10, f7
    li r0, 0x0
    stb r0, lbl_8049E243
    mr r4, r29
    la r3, lbl_8049E238
    fadd f0, f4, f0
    fadd f1, f1, f0
    bl fn_80287314
    stw r3, 0x48(r30)
    lfd f0, lbl_804A26C0
    lfd f1, lbl_8049E238
    fcmpo cr0, f1, f0
    bge lbl_8030A300
    li r0, -0x4
    stw r0, 0x48(r30)
lbl_8030A300:
    lis r3, lbl_80464890@ha
    lfd f0, lbl_80464890@l(r3)
    addi r3, r3, lbl_80464890@l
    stfd f0, 0x28(r30)
    lfd f0, 0x8(r3)
    stfd f0, 0x30(r30)
    lfd f0, 0x10(r3)
    stfd f0, 0x38(r30)
    lfd f0, 0x18(r3)
    stfd f0, 0x40(r30)
    lfd f0, lbl_8049E238
    stfd f0, 0x0(r30)
    lbz r0, lbl_8049E243
    stw r0, 0x4c(r30)
lbl_8030A338:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8030A354
// ----------------------------------------------------------------------------
asm void fn_8030A354() {
    nofralloc
    li r6, 0x0
    li r7, 0x0
    b fn_8030A360
}

// ----------------------------------------------------------------------------
// fn_8030A360
// ----------------------------------------------------------------------------
asm void fn_8030A360() {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    addi r11, r1, 0x110
    bl _savegpr_20
    lbz r0, lbl_8049E22C
    lis r10, 0x4330
    mulli r9, r3, 0x570
    lis r8, lbl_80463280@ha
    cmpwi r0, 0x0
    stw r10, 0xc8(r1)
    addi r8, r8, lbl_80463280@l
    stw r10, 0xd0(r1)
    mr r25, r3
    mr r29, r4
    mr r24, r5
    mr r30, r6
    mr r31, r7
    add r26, r8, r9
    li r23, 0x0
    li r22, 0x0
    bne lbl_8030A3C0
    li r23, -0x5
    b lbl_8030ABD4
lbl_8030A3C0:
    bl fn_802896B4
    cmpwi r3, 0x3
    beq lbl_8030A3D4
    li r23, -0x3
    b lbl_8030ABD4
lbl_8030A3D4:
    bl OSDisableInterrupts
    lbz r0, 0x4ff(r26)
    mr r21, r3
    cmpwi r0, 0x0
    beq lbl_8030A3F4
    bl OSRestoreInterrupts
    li r23, -0x4
    b lbl_8030ABD4
lbl_8030A3F4:
    li r20, 0x1
    mr r3, r25
    stb r20, 0x4ff(r26)
    li r4, 0x0
    bl fn_8028A9B8
    cmpwi r3, -0x1
    bne lbl_8030A490
    mr r3, r26
    bl fn_803079EC
    lwz r0, 0x50c(r26)
    cmpwi cr1, r0, 0x0
    beq cr1, lbl_8030A478
    lbz r0, 0x55a(r26)
    cmpwi r0, 0x0
    beq lbl_8030A478
    lbz r0, 0x55b(r26)
    cmpwi r0, 0x0
    bne lbl_8030A478
    beq cr1, lbl_8030A464
    bne lbl_8030A464
    stb r20, 0x55b(r26)
    mr r3, r25
    li r4, 0x1
    lwz r12, 0x50c(r26)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, 0x55a(r26)
lbl_8030A464:
    mr r3, r25
    bl fn_8028D1DC
    stb r3, 0x557(r26)
    li r0, 0x0
    stb r0, 0x558(r26)
lbl_8030A478:
    li r0, 0x0
    mr r3, r21
    stb r0, 0x4ff(r26)
    bl OSRestoreInterrupts
    li r23, -0x2
    b lbl_8030ABD4
lbl_8030A490:
    mr r3, r21
    bl OSRestoreInterrupts
    lbz r0, 0x554(r26)
    cmpwi r0, 0x0
    beq lbl_8030A4B4
    li r0, -0x4
    mr r3, r26
    stb r0, 0x5d(r26)
    bl fn_803079EC
lbl_8030A4B4:
    li r0, 0x16
    addi r5, r1, 0x14
    subi r4, r29, 0x4
    mtctr r0
lbl_8030A4C4:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_8030A4C4
    lbz r0, 0x13b(r26)
    cmplwi r0, 0x1
    ble lbl_8030ABCC
    cmpwi r29, 0x0
    beq lbl_8030ABCC
    cmpwi r24, 0x0
    beq lbl_8030ABCC
    bl OSDisableInterrupts
    lbz r6, 0x13b(r26)
    cmplw r6, r24
    ble lbl_8030A508
    mr r6, r24
lbl_8030A508:
    lbz r4, 0x13a(r26)
    mr r5, r6
    li r0, 0x0
    li r7, 0x0
    subic. r4, r4, 0x1
    bge lbl_8030A52C
    lwz r8, 0x4c0(r26)
    add r4, r4, r8
    addi r4, r4, 0x10
lbl_8030A52C:
    cmpwi r4, 0x10
    blt lbl_8030A548
    subi r8, r4, 0x10
    lwz r9, 0x4bc(r26)
    mulli r8, r8, 0x38
    add r12, r9, r8
    b lbl_8030A554
lbl_8030A548:
    mulli r8, r4, 0x38
    add r8, r26, r8
    addi r12, r8, 0x13c
lbl_8030A554:
    li r11, -0x7
    li r10, -0x4
lbl_8030A55C:
    cmpwi r0, 0x0
    beq lbl_8030A58C
    lbz r8, 0x29(r12)
    extsb. r8, r8
    bne lbl_8030A57C
    stb r11, 0x29(r12)
    li r0, 0x0
    b lbl_8030A5A0
lbl_8030A57C:
    cmpwi r8, -0x2
    bne lbl_8030A5A0
    li r0, 0x0
    b lbl_8030A5A0
lbl_8030A58C:
    lbz r8, 0x29(r12)
    extsb r8, r8
    cmpwi r8, -0x7
    bne lbl_8030A5A0
    li r0, 0x1
lbl_8030A5A0:
    lbz r9, 0x5c(r26)
    lbz r8, 0x28(r12)
    cmplw r9, r8
    beq lbl_8030A5B4
    li r7, 0x1
lbl_8030A5B4:
    cmpwi r7, 0x0
    beq lbl_8030A5C0
    stb r10, 0x29(r12)
lbl_8030A5C0:
    subic. r4, r4, 0x1
    bge lbl_8030A5D4
    lwz r8, 0x4c0(r26)
    add r4, r4, r8
    addi r4, r4, 0x10
lbl_8030A5D4:
    cmpwi r4, 0x10
    blt lbl_8030A5F0
    subi r8, r4, 0x10
    lwz r9, 0x4bc(r26)
    mulli r8, r8, 0x38
    add r12, r9, r8
    b lbl_8030A5FC
lbl_8030A5F0:
    mulli r8, r4, 0x38
    add r8, r26, r8
    addi r12, r8, 0x13c
lbl_8030A5FC:
    subic. r5, r5, 0x1
    bgt lbl_8030A55C
    li r22, 0x1
    cmplwi r6, 0x1
    stb r22, 0x13b(r26)
    ble lbl_8030A618
    subi r22, r6, 0x1
lbl_8030A618:
    lbz r0, 0x13a(r26)
    mulli r6, r22, 0xb0
    mr r4, r22
    subf r5, r22, r0
    subic. r5, r5, 0x1
    add r7, r29, r6
    bge lbl_8030A640
    lwz r0, 0x4c0(r26)
    add r5, r5, r0
    addi r5, r5, 0x10
lbl_8030A640:
    cmpwi r5, 0x10
    blt lbl_8030A65C
    subi r0, r5, 0x10
    lwz r6, 0x4bc(r26)
    mulli r0, r0, 0x38
    add r6, r6, r0
    b lbl_8030A668
lbl_8030A65C:
    mulli r0, r5, 0x38
    add r6, r26, r0
    addi r6, r6, 0x13c
lbl_8030A668:
    lhz r8, 0x0(r6)
    addi r5, r5, 0x1
    lhz r0, 0x2(r6)
    sth r8, -0xb0(r7)
    sth r0, -0xae(r7)
    lhz r8, 0x4(r6)
    lhz r0, 0x6(r6)
    sth r8, -0xac(r7)
    sth r0, -0xaa(r7)
    lhz r8, 0x8(r6)
    lhz r0, 0xa(r6)
    sth r8, -0xa8(r7)
    sth r0, -0xa6(r7)
    lhz r8, 0xc(r6)
    lhz r0, 0xe(r6)
    sth r8, -0xa4(r7)
    sth r0, -0xa2(r7)
    lhz r8, 0x10(r6)
    lhz r0, 0x12(r6)
    sth r8, -0xa0(r7)
    sth r0, -0x9e(r7)
    lhz r8, 0x14(r6)
    lhz r0, 0x16(r6)
    sth r8, -0x9c(r7)
    sth r0, -0x9a(r7)
    lhz r8, 0x18(r6)
    lhz r0, 0x1a(r6)
    sth r8, -0x98(r7)
    sth r0, -0x96(r7)
    lhz r8, 0x1c(r6)
    lhz r0, 0x1e(r6)
    sth r8, -0x94(r7)
    sth r0, -0x92(r7)
    lhz r8, 0x20(r6)
    lhz r0, 0x22(r6)
    sth r8, -0x90(r7)
    sth r0, -0x8e(r7)
    lhz r8, 0x24(r6)
    lhz r0, 0x26(r6)
    sth r8, -0x8c(r7)
    sth r0, -0x8a(r7)
    lhz r8, 0x28(r6)
    lhz r0, 0x2a(r6)
    sth r8, -0x88(r7)
    sth r0, -0x86(r7)
    lhz r8, 0x2c(r6)
    lhz r0, 0x2e(r6)
    sth r8, -0x84(r7)
    sth r0, -0x82(r7)
    lhz r8, 0x30(r6)
    lhz r0, 0x32(r6)
    sth r8, -0x80(r7)
    sth r0, -0x7e(r7)
    lhz r8, 0x34(r6)
    lhz r0, 0x36(r6)
    sth r8, -0x7c(r7)
    sth r0, -0x7a(r7)
    subi r7, r7, 0xb0
    lwz r6, 0x4c0(r26)
    addi r0, r6, 0x10
    cmplw r5, r0
    blt lbl_8030A764
    li r5, 0x0
lbl_8030A764:
    subic. r4, r4, 0x1
    bgt lbl_8030A640
    bl OSRestoreInterrupts
    lhz r10, lbl_804A26D0
    mr r3, r25
    lhz r9, lbl_804A26D2
    addi r5, r1, 0x10
    lhz r8, lbl_804A26D4
    li r4, 0x0
    lhz r7, lbl_804A26D8
    lhz r6, lbl_804A26DA
    lhz r0, lbl_804A26DC
    sth r10, 0x10(r1)
    sth r9, 0x12(r1)
    sth r8, 0x14(r1)
    sth r7, 0x8(r1)
    sth r6, 0xa(r1)
    sth r0, 0xc(r1)
    bl fn_8028A7FC
    lha r5, 0x10(r1)
    lha r4, 0x14(r1)
    lha r3, 0x12(r1)
    mullw r0, r4, r5
    mullw. r0, r0, r3
    beq lbl_8030A81C
    xoris r0, r5, 0x8000
    xoris r3, r3, 0x8000
    stw r0, 0xcc(r1)
    xoris r0, r4, 0x8000
    lfd f4, lbl_804A26A0
    lfd f0, 0xc8(r1)
    stw r3, 0xd4(r1)
    fsubs f2, f0, f4
    lfs f3, lbl_804A2690
    stw r0, 0xcc(r1)
    lfd f1, 0xd0(r1)
    lfd f0, 0xc8(r1)
    fdivs f2, f3, f2
    fsubs f1, f1, f4
    stfs f2, 0x510(r26)
    fsubs f0, f0, f4
    fdivs f1, f3, f1
    fdivs f0, f3, f0
    stfs f1, 0x514(r26)
    stfs f0, 0x518(r26)
    b lbl_8030A82C
lbl_8030A81C:
    lfs f0, lbl_804A26E0
    stfs f0, 0x510(r26)
    stfs f0, 0x514(r26)
    stfs f0, 0x518(r26)
lbl_8030A82C:
    mr r3, r25
    addi r5, r1, 0x8
    li r4, 0x1
    bl fn_8028A7FC
    lha r5, 0x8(r1)
    lha r4, 0xc(r1)
    lha r3, 0xa(r1)
    mullw r0, r4, r5
    mullw. r0, r0, r3
    beq lbl_8030A8A8
    xoris r0, r5, 0x8000
    xoris r3, r3, 0x8000
    stw r0, 0xd4(r1)
    xoris r0, r4, 0x8000
    lfd f4, lbl_804A26A0
    lfd f0, 0xd0(r1)
    stw r3, 0xcc(r1)
    fsubs f2, f0, f4
    lfs f3, lbl_804A2690
    stw r0, 0xd4(r1)
    lfd f1, 0xc8(r1)
    lfd f0, 0xd0(r1)
    fdivs f2, f3, f2
    fsubs f1, f1, f4
    stfs f2, 0x51c(r26)
    fsubs f0, f0, f4
    fdivs f1, f3, f1
    fdivs f0, f3, f0
    stfs f1, 0x520(r26)
    stfs f0, 0x524(r26)
    b lbl_8030A8B8
lbl_8030A8A8:
    lfs f0, lbl_804A26E4
    stfs f0, 0x51c(r26)
    stfs f0, 0x520(r26)
    stfs f0, 0x524(r26)
lbl_8030A8B8:
    mulli r3, r22, 0xb0
    lbz r0, 0x55f(r26)
    mr r24, r22
    cmplwi r0, 0x1
    add r27, r29, r3
    mr r25, r27
    bne lbl_8030AA54
    li r27, 0x1
    lis r28, 0x1
    li r20, 0x0
    li r21, 0x16
lbl_8030A8E4:
    lbz r3, -0x88(r25)
    subi r25, r25, 0xb0
    lbz r0, 0x5c(r26)
    cmplw r0, r3
    beq lbl_8030A900
    stb r3, 0x5c(r26)
    stb r27, 0x555(r26)
lbl_8030A900:
    lbz r0, 0x29(r25)
    subi r8, r28, 0x1
    mr r7, r8
    stb r0, 0x5d(r26)
    mr r6, r8
    lbz r0, 0x36(r25)
    stb r0, 0x5f(r26)
    lbz r0, 0x29(r25)
    lbz r4, 0x5c(r26)
    extsb r0, r0
    cmpwi r0, -0x2
    beq lbl_8030A99C
    bge lbl_8030A940
    cmpwi r0, -0x7
    beq lbl_8030A994
    b lbl_8030A9A4
lbl_8030A940:
    cmpwi r0, 0x0
    beq lbl_8030A94C
    b lbl_8030A9A4
lbl_8030A94C:
    cmplwi r4, 0x1
    bne lbl_8030A960
    lhz r7, 0x0(r25)
    li r8, 0x0
    b lbl_8030A988
lbl_8030A960:
    cmplwi r4, 0x2
    beq lbl_8030A974
    subi r0, r4, 0x10
    cmplwi r0, 0x1
    bgt lbl_8030A980
lbl_8030A974:
    lhz r8, 0x2a(r25)
    li r7, 0x0
    b lbl_8030A988
lbl_8030A980:
    li r8, 0x0
    li r7, 0x0
lbl_8030A988:
    lhz r0, 0x0(r25)
    andi. r6, r0, 0x9f1f
    b lbl_8030A9A4
lbl_8030A994:
    li r8, 0x0
    li r7, 0x0
lbl_8030A99C:
    lhz r0, 0x0(r25)
    andi. r6, r0, 0x9f1f
lbl_8030A9A4:
    cmplwi r6, 0xffff
    bne lbl_8030A9B4
    lwz r0, 0x0(r26)
    andi. r6, r0, 0x9f1f
lbl_8030A9B4:
    cmplwi r7, 0xffff
    bne lbl_8030A9C0
    lwz r7, 0x0(r26)
lbl_8030A9C0:
    cmplwi r8, 0xffff
    bne lbl_8030A9CC
    lwz r8, 0x60(r26)
lbl_8030A9CC:
    mr r3, r26
    li r5, 0x1
    bl fn_80307D60
    lbz r0, 0x29(r25)
    extsb. r0, r0
    beq lbl_8030A9F4
    bge lbl_8030AA1C
    cmpwi r0, -0x7
    beq lbl_8030AA00
    b lbl_8030AA1C
lbl_8030A9F4:
    mr r3, r26
    mr r4, r25
    bl fn_80309A80
lbl_8030AA00:
    mr r3, r26
    mr r4, r25
    bl fn_8030816C
    mr r3, r26
    mr r4, r25
    bl fn_803092C8
    b lbl_8030AA28
lbl_8030AA1C:
    cmpwi r31, 0x0
    bne lbl_8030AA28
    stb r20, 0x5e(r26)
lbl_8030AA28:
    subi r5, r25, 0x4
    subi r4, r26, 0x4
    mtctr r21
lbl_8030AA34:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_8030AA34
    subic. r24, r24, 0x1
    bgt lbl_8030A8E4
    b lbl_8030ABCC
lbl_8030AA54:
    lis r4, 0x1
    li r3, 0x1
    subi r8, r4, 0x1
    mr r7, r8
    mr r6, r8
lbl_8030AA68:
    lbz r4, -0x88(r25)
    subi r25, r25, 0xb0
    lbz r0, 0x5c(r26)
    cmplw r0, r4
    beq lbl_8030AA84
    stb r4, 0x5c(r26)
    stb r3, 0x555(r26)
lbl_8030AA84:
    lbz r0, 0x29(r25)
    lbz r4, 0x28(r25)
    extsb r0, r0
    cmpwi r0, -0x2
    beq lbl_8030AAF0
    bge lbl_8030AAA8
    cmpwi r0, -0x7
    beq lbl_8030AAF0
    b lbl_8030AAF8
lbl_8030AAA8:
    cmpwi r0, 0x0
    beq lbl_8030AAB4
    b lbl_8030AAF8
lbl_8030AAB4:
    cmplwi r4, 0x1
    bne lbl_8030AAC8
    lhz r7, 0x0(r25)
    li r8, 0x0
    b lbl_8030AAF0
lbl_8030AAC8:
    cmplwi r4, 0x2
    beq lbl_8030AADC
    subi r0, r4, 0x10
    cmplwi r0, 0x1
    bgt lbl_8030AAE8
lbl_8030AADC:
    lhz r8, 0x2a(r25)
    li r7, 0x0
    b lbl_8030AAF0
lbl_8030AAE8:
    li r8, 0x0
    li r7, 0x0
lbl_8030AAF0:
    lhz r0, 0x0(r25)
    andi. r6, r0, 0x9f1f
lbl_8030AAF8:
    subic. r24, r24, 0x1
    bgt lbl_8030AA68
    cmplwi r6, 0xffff
    bne lbl_8030AB10
    lwz r0, 0x0(r26)
    andi. r6, r0, 0x9f1f
lbl_8030AB10:
    cmplwi r7, 0xffff
    bne lbl_8030AB1C
    lwz r7, 0x0(r26)
lbl_8030AB1C:
    cmplwi r8, 0xffff
    bne lbl_8030AB28
    lwz r8, 0x60(r26)
lbl_8030AB28:
    mr r3, r26
    mr r5, r22
    bl fn_80307D60
    mr r25, r22
    li r28, 0x0
    li r24, 0x16
lbl_8030AB40:
    lbz r0, -0x87(r27)
    stb r0, 0x5d(r26)
    lbz r0, -0x7a(r27)
    stb r0, 0x5f(r26)
    lbz r0, -0x87(r27)
    subi r27, r27, 0xb0
    extsb. r0, r0
    beq lbl_8030AB70
    bge lbl_8030AB98
    cmpwi r0, -0x7
    beq lbl_8030AB7C
    b lbl_8030AB98
lbl_8030AB70:
    mr r3, r26
    mr r4, r27
    bl fn_80309A80
lbl_8030AB7C:
    mr r3, r26
    mr r4, r27
    bl fn_8030816C
    mr r3, r26
    mr r4, r27
    bl fn_803092C8
    b lbl_8030ABA4
lbl_8030AB98:
    cmpwi r31, 0x0
    bne lbl_8030ABA4
    stb r28, 0x5e(r26)
lbl_8030ABA4:
    subi r5, r27, 0x4
    subi r4, r26, 0x4
    mtctr r24
lbl_8030ABB0:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_8030ABB0
    subic. r25, r25, 0x1
    bgt lbl_8030AB40
lbl_8030ABCC:
    li r0, 0x0
    stb r0, 0x4ff(r26)
lbl_8030ABD4:
    cmpwi r22, 0x0
    bne lbl_8030AC40
    cmpwi r23, 0x0
    bne lbl_8030AC18
    cmpwi r31, 0x0
    beq lbl_8030AC10
    li r0, 0x16
    subi r5, r29, 0x4
    addi r4, r1, 0x14
    mtctr r0
lbl_8030ABFC:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_8030ABFC
lbl_8030AC10:
    li r23, -0x1
    b lbl_8030AC40
lbl_8030AC18:
    cmpwi r23, -0x2
    bne lbl_8030AC40
    cmpwi r31, 0x0
    beq lbl_8030AC40
    li r4, 0xfd
    li r3, 0x0
    li r0, -0x1
    stb r4, 0x5c(r29)
    stb r3, 0x5f(r29)
    stb r0, 0x5d(r29)
lbl_8030AC40:
    cmpwi r30, 0x0
    beq lbl_8030AC4C
    stw r23, 0x0(r30)
lbl_8030AC4C:
    addi r11, r1, 0x110
    mr r3, r22
    bl _restgpr_20
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// ----------------------------------------------------------------------------
// fn_8030AC68
// ----------------------------------------------------------------------------
asm void fn_8030AC68() {
    nofralloc
    li r3, 0x0
    li r4, 0x0
    b fn_8030AC74
}

// ----------------------------------------------------------------------------
// fn_8030AC74
// ----------------------------------------------------------------------------
asm void fn_8030AC74() {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stfd f31, 0xa0(r1)
    opword 0xF3E100A8
    stfd f30, 0x90(r1)
    opword 0xF3C10098
    stfd f29, 0x80(r1)
    opword 0xF3A10088
    stfd f28, 0x70(r1)
    opword 0xF3810078
    stfd f27, 0x60(r1)
    opword 0xF3610068
    addi r11, r1, 0x60
    bl _savegpr_14
    lbz r0, lbl_8049E22C
    lis r20, lbl_80463280@ha
    mr r15, r3
    mr r16, r4
    cmpwi r0, 0x0
    addi r20, r20, lbl_80463280@l
    bne lbl_8030B074
    bl fn_80289630
    addi r3, r20, 0x0
    li r4, 0x0
    li r5, 0x15c0
    bl memset
    bl fn_8028D1A8
    clrlwi r3, r3, 24
    lis r0, 0x4330
    stw r3, 0xc(r1)
    li r17, 0x0
    lis r3, 0x1
    lfd f1, lbl_804A26C8
    stw r0, 0x8(r1)
    mr r22, r17
    lfs f29, lbl_804A2690
    mr r26, r17
    lfd f0, 0x8(r1)
    mr r27, r17
    lfd f30, lbl_804A26B8
    mr r29, r17
    fsubs f0, f0, f1
    lfs f31, lbl_804A2680
    addi r19, r20, 0x0
    srwi r18, r16, 2
    addi r23, r20, 0x15f0
    addi r24, r20, 0x1610
    fadds f0, f29, f0
    subi r28, r3, 0x63c0
    li r31, 0x0
    li r30, -0x1
    lis r14, fn_8030B410@ha
    li r25, 0x1
    stfs f0, lbl_8049D0F8
    lis r21, fn_8030B154@ha
lbl_8030AD54:
    mr r3, r17
    addi r4, r21, fn_8030B154@l
    bl fn_8028AACC
    stw r3, 0x550(r19)
    mr r3, r17
    addi r4, r14, fn_8030B410@l
    bl fn_8028AA44
    stw r3, 0x54c(r19)
    mr r3, r17
    stb r22, 0x557(r19)
    stb r22, lbl_8049E246
    stb r22, lbl_8049E245
    stb r22, lbl_8049E244
    stb r22, lbl_8049E242
    sth r22, lbl_8049E240
    stb r22, lbl_8049E243
    stfd f30, 0x15f0(r20)
    stfd f30, 0x1610(r20)
    stfd f30, 0x8(r23)
    stfd f30, 0x8(r24)
    stfd f30, 0x10(r23)
    stfd f30, 0x10(r24)
    stfd f30, 0x18(r23)
    stfd f30, 0x18(r24)
    stb r25, 0x556(r19)
    bl fn_8028D220
    stb r3, 0x559(r19)
    li r0, 0xfd
    lfs f27, lbl_804A2690
    stb r0, 0x5c(r19)
    lfs f28, lbl_804A2698
    fmuls f1, f27, f27
    stb r26, 0x5f(r19)
    lfs f2, lbl_8049D0CC
    fmuls f0, f28, f28
    lwz r3, lbl_8049D0D0
    stfs f2, 0xd0(r19)
    lwz r0, lbl_8049D0D4
    fadds f1, f1, f0
    stw r3, 0xd4(r19)
    lwz r3, lbl_8049D0D8
    stw r0, 0xd8(r19)
    lwz r0, lbl_8049D0DC
    stw r3, 0xdc(r19)
    lwz r3, lbl_8049E218
    stw r0, 0xe0(r19)
    lwz r0, lbl_8049E21C
    stw r3, 0xe4(r19)
    stw r0, 0xe8(r19)
    bl sqrt
    lfs f0, 0xe4(r19)
    frsp f1, f1
    fcmpo cr0, f0, f31
    bge lbl_8030AE34
    fadds f27, f27, f0
    b lbl_8030AE38
lbl_8030AE34:
    fsubs f27, f27, f0
lbl_8030AE38:
    lfs f0, 0xe8(r19)
    fcmpo cr0, f0, f31
    bge lbl_8030AE4C
    fadds f28, f28, f0
    b lbl_8030AE50
lbl_8030AE4C:
    fsubs f28, f28, f0
lbl_8030AE50:
    fcmpo cr0, f27, f28
    bge lbl_8030AE5C
    b lbl_8030AE60
lbl_8030AE5C:
    fmr f27, f28
lbl_8030AE60:
    fdivs f0, f1, f27
    cmpwi r16, 0x0
    stfs f0, 0xec(r19)
    stfs f31, 0xc8(r19)
    stfs f31, 0xc0(r19)
    stfs f31, 0xb8(r19)
    stfs f31, 0xb0(r19)
    stfs f29, 0xcc(r19)
    stfs f29, 0xc4(r19)
    stfs f29, 0xbc(r19)
    stfs f29, 0xb4(r19)
    stw r27, 0x56c(r19)
    stw r27, 0x568(r19)
    stw r27, 0x564(r19)
    stw r27, 0x560(r19)
    sth r28, 0x504(r19)
    sth r27, 0x506(r19)
    sth r27, 0x500(r19)
    sth r28, 0x502(r19)
    sth r27, 0x508(r19)
    sth r28, 0x50a(r19)
    stb r27, 0x55f(r19)
    stb r25, 0x55c(r19)
    stb r25, 0x55d(r19)
    stb r27, 0x55e(r19)
    beq lbl_8030AEE4
    cmpwi r15, 0x0
    beq lbl_8030AEE4
    mullw r0, r18, r31
    stw r18, 0x4c0(r19)
    add r0, r15, r0
    stw r0, 0x4bc(r19)
    b lbl_8030AEEC
lbl_8030AEE4:
    stw r29, 0x4c0(r19)
    stw r29, 0x4bc(r19)
lbl_8030AEEC:
    stb r30, 0x165(r19)
    li r5, 0x0
    li r4, 0x0
    stb r30, 0x19d(r19)
    stb r30, 0x1d5(r19)
    stb r30, 0x20d(r19)
    stb r30, 0x245(r19)
    stb r30, 0x27d(r19)
    stb r30, 0x2b5(r19)
    stb r30, 0x2ed(r19)
    stb r30, 0x325(r19)
    stb r30, 0x35d(r19)
    stb r30, 0x395(r19)
    stb r30, 0x3cd(r19)
    stb r30, 0x405(r19)
    stb r30, 0x43d(r19)
    stb r30, 0x475(r19)
    stb r30, 0x4ad(r19)
    b lbl_8030AF4C
lbl_8030AF38:
    lwz r0, 0x4bc(r19)
    addi r5, r5, 0x1
    add r3, r0, r4
    addi r4, r4, 0x38
    stb r30, 0x29(r3)
lbl_8030AF4C:
    lwz r0, 0x4c0(r19)
    cmplw r5, r0
    blt lbl_8030AF38
    addi r17, r17, 0x1
    addi r31, r31, 0x38
    cmpwi r17, 0x4
    addi r19, r19, 0x570
    blt lbl_8030AD54
    li r3, 0x1
    bl fn_8028EE58
    lfs f28, lbl_8049D0E0
    bl OSDisableInterrupts
    lfs f0, lbl_804A26E8
    stfs f28, lbl_8049D0E0
    fdivs f0, f28, f0
    stfs f0, lbl_8049E24C
    stfs f0, lbl_8049E248
    bl OSRestoreInterrupts
    addi r3, r20, 0x0
    li r15, 0x3
    addi r16, r3, 0x1050
    li r14, 0x1
lbl_8030AFA4:
    bl fn_802896B4
    cmpwi r3, 0x3
    bne lbl_8030AFBC
    mr r3, r15
    li r4, 0x0
    bl fn_8028AF20
lbl_8030AFBC:
    subic. r15, r15, 0x1
    stb r14, 0x554(r16)
    subi r16, r16, 0x570
    bge lbl_8030AFA4
    lfs f1, lbl_804A26EC
    addi r14, r20, 0x15c0
    lfs f2, lbl_804A2680
    lfs f0, lbl_8049D144
    lfs f3, lbl_804A2690
    fmuls f1, f1, f0
    stfs f2, 0x4(r14)
    stfs f3, 0x15c0(r20)
    stfs f2, 0x8(r14)
    stfs f2, 0xc(r14)
    stfs f2, 0x10(r14)
    bl cos
    frsp f2, f1
    lfs f1, lbl_804A26EC
    lfs f0, lbl_8049D144
    fmuls f1, f1, f0
    stfs f2, 0x14(r14)
    bl sin
    fneg f3, f1
    lfs f2, lbl_804A2680
    lfs f1, lbl_804A26EC
    lfs f0, lbl_8049D144
    frsp f3, f3
    stfs f2, 0x1c(r14)
    fmuls f1, f1, f0
    stfs f2, 0x20(r14)
    stfs f3, 0x18(r14)
    bl sin
    frsp f2, f1
    lfs f1, lbl_804A26EC
    lfs f0, lbl_8049D144
    fmuls f1, f1, f0
    stfs f2, 0x24(r14)
    bl cos
    frsp f1, f1
    lfs f0, lbl_804A2680
    li r0, 0x1
    lwz r3, lbl_8049D0C8
    stfs f0, 0x2c(r14)
    stfs f1, 0x28(r14)
    stb r0, lbl_8049E22C
    bl OSRegisterVersion
lbl_8030B074:
    opword 0xE3E100A8
    lfd f31, 0xa0(r1)
    opword 0xE3C10098
    lfd f30, 0x90(r1)
    opword 0xE3A10088
    lfd f29, 0x80(r1)
    opword 0xE3810078
    lfd f28, 0x70(r1)
    opword 0xE3610068
    addi r11, r1, 0x60
    lfd f27, 0x60(r1)
    bl _restgpr_14
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

// ----------------------------------------------------------------------------
// fn_8030B0B4
// ----------------------------------------------------------------------------
asm void fn_8030B0B4() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lfs f31, lbl_8049D0E0
    bl OSDisableInterrupts
    lfs f0, lbl_804A26E8
    stfs f31, lbl_8049D0E0
    fdivs f0, f31, f0
    stfs f0, lbl_8049E24C
    stfs f0, lbl_8049E248
    bl OSRestoreInterrupts
    lis r3, lbl_80463280@ha
    li r29, 0x3
    addi r3, r3, lbl_80463280@l
    li r31, 0x1
    addi r30, r3, 0x1050
lbl_8030B108:
    bl fn_802896B4
    cmpwi r3, 0x3
    bne lbl_8030B120
    mr r3, r29
    li r4, 0x0
    bl fn_8028AF20
lbl_8030B120:
    subic. r29, r29, 0x1
    stb r31, 0x554(r30)
    subi r30, r30, 0x570
    bge lbl_8030B108
    opword 0xE3E10028
    lwz r0, 0x34(r1)
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8030B154
// ----------------------------------------------------------------------------
asm void fn_8030B154() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80463280@ha
    addi r31, r31, lbl_80463280@l
    stw r30, 0x18(r1)
    addi r0, r31, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    mulli r3, r3, 0x570
    add r30, r0, r3
    bne lbl_8030B210
    li r3, 0x0
    bl fn_8028EE58
    lis r4, fn_8030B410@ha
    mr r3, r28
    addi r4, r4, fn_8030B410@l
    bl fn_8028AA44
    li r3, 0x1
    bl fn_8028EE58
    li r0, 0x0
    cmpwi r28, 0x3
    stb r0, 0x557(r30)
    stb r0, 0x559(r30)
    bne lbl_8030B280
    lfd f0, lbl_804A26B8
    addi r4, r31, 0x15f0
    addi r3, r31, 0x1610
    stb r0, lbl_8049E246
    stb r0, lbl_8049E245
    stb r0, lbl_8049E244
    stb r0, lbl_8049E242
    sth r0, lbl_8049E240
    stb r0, lbl_8049E243
    stfd f0, 0x15f0(r31)
    stfd f0, 0x1610(r31)
    stfd f0, 0x8(r4)
    stfd f0, 0x8(r3)
    stfd f0, 0x10(r4)
    stfd f0, 0x10(r3)
    stfd f0, 0x18(r4)
    stfd f0, 0x18(r3)
    b lbl_8030B280
lbl_8030B210:
    li r4, -0x1
    li r6, 0x0
    stb r4, 0x165(r30)
    li r5, 0x0
    stb r4, 0x19d(r30)
    stb r4, 0x1d5(r30)
    stb r4, 0x20d(r30)
    stb r4, 0x245(r30)
    stb r4, 0x27d(r30)
    stb r4, 0x2b5(r30)
    stb r4, 0x2ed(r30)
    stb r4, 0x325(r30)
    stb r4, 0x35d(r30)
    stb r4, 0x395(r30)
    stb r4, 0x3cd(r30)
    stb r4, 0x405(r30)
    stb r4, 0x43d(r30)
    stb r4, 0x475(r30)
    stb r4, 0x4ad(r30)
    b lbl_8030B274
lbl_8030B260:
    lwz r0, 0x4bc(r30)
    addi r6, r6, 0x1
    add r3, r0, r5
    addi r5, r5, 0x38
    stb r4, 0x29(r3)
lbl_8030B274:
    lwz r0, 0x4c0(r30)
    cmplw r6, r0
    blt lbl_8030B260
lbl_8030B280:
    lwz r12, 0x550(r30)
    cmpwi r12, 0x0
    beq lbl_8030B29C
    mr r3, r28
    mr r4, r29
    mtctr r12
    bctrl
lbl_8030B29C:
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
// fn_8030B2BC
// ----------------------------------------------------------------------------
asm void fn_8030B2BC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bl OSDisableInterrupts
    mulli r0, r31, 0x570
    lis r4, lbl_80463280@ha
    addi r4, r4, lbl_80463280@l
    add r4, r4, r0
    lwz r31, 0x550(r4)
    stw r30, 0x550(r4)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8030B314
// ----------------------------------------------------------------------------
asm void fn_8030B314() {
    nofralloc
    cntlzw r3, r4
    li r0, 0x0
    extrwi r3, r3, 8, 19
    stb r0, lbl_8049E246
    stb r3, lbl_8049E245
    blr
}

// ----------------------------------------------------------------------------
// fn_8030B32C
// ----------------------------------------------------------------------------
asm void fn_8030B32C() {
    nofralloc
    cntlzw r3, r4
    li r0, 0x0
    extrwi r3, r3, 8, 19
    stb r0, lbl_8049E246
    stb r3, lbl_8049E242
    blr
}

// ----------------------------------------------------------------------------
// fn_8030B344
// ----------------------------------------------------------------------------
asm void fn_8030B344() {
    nofralloc
    mulli r0, r3, 0x570
    lis r3, lbl_80463280@ha
    li r4, 0x0
    addi r3, r3, lbl_80463280@l
    add r3, r3, r0
    stb r4, 0x556(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8030B360
// ----------------------------------------------------------------------------
asm void fn_8030B360() {
    nofralloc
    mulli r0, r3, 0x570
    lis r3, lbl_80463280@ha
    li r4, 0x1
    addi r3, r3, lbl_80463280@l
    add r3, r3, r0
    stb r4, 0x556(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8030B37C
// ----------------------------------------------------------------------------
asm void fn_8030B37C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80463280@ha
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    mulli r0, r3, 0x570
    addi r5, r5, lbl_80463280@l
    stw r31, 0xc(r1)
    add r31, r5, r0
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_8030B3E4
    lwz r0, 0x50c(r31)
    cmpwi r0, 0x0
    beq lbl_8030B3E4
    lbz r0, 0x55b(r31)
    cmpwi r0, 0x0
    bne lbl_8030B3E4
    li r0, 0x1
    li r4, 0x1
    stb r0, 0x55b(r31)
    lwz r12, 0x50c(r31)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, 0x55a(r31)
lbl_8030B3E4:
    mr r3, r30
    bl fn_8028D1DC
    stb r3, 0x557(r31)
    li r0, 0x0
    stb r0, 0x558(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8030B410
// ----------------------------------------------------------------------------
asm void fn_8030B410() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    addi r11, r1, 0x40
    bl _savegpr_27
    lis r31, lbl_80463280@ha
    lis r4, 0x4330
    addi r31, r31, lbl_80463280@l
    stw r4, 0x10(r1)
    mulli r5, r3, 0x570
    mr r28, r3
    addi r0, r31, 0x0
    stw r4, 0x18(r1)
    addi r4, r1, 0x8
    add r30, r0, r5
    bl fn_8028A9B8
    cmpwi r3, -0x1
    beq lbl_8030B9E4
    lwz r3, 0x4c0(r30)
    lbz r27, 0x13a(r30)
    addi r0, r3, 0x10
    cmplw r27, r0
    blt lbl_8030B480
    li r27, 0x0
lbl_8030B480:
    cmplwi r27, 0x10
    blt lbl_8030B49C
    subi r0, r27, 0x10
    lwz r3, 0x4bc(r30)
    mulli r0, r0, 0x38
    add r29, r3, r0
    b lbl_8030B4A8
lbl_8030B49C:
    mulli r0, r27, 0x38
    add r3, r30, r0
    addi r29, r3, 0x13c
lbl_8030B4A8:
    mr r3, r28
    mr r4, r29
    bl fn_8028B2E8
    mr r3, r28
    bl fn_8028ABB0
    stb r3, 0x36(r29)
    addi r0, r27, 0x1
    stb r0, 0x13a(r30)
    lwz r3, 0x4c0(r30)
    lbz r4, 0x13b(r30)
    addi r0, r3, 0x10
    cmplw r4, r0
    bge lbl_8030B4E4
    addi r0, r4, 0x1
    stb r0, 0x13b(r30)
lbl_8030B4E4:
    lbz r0, 0x55c(r30)
    cmpwi r0, 0x0
    beq lbl_8030B5A4
    lbz r0, 0x55d(r30)
    cmpwi r0, 0x0
    beq lbl_8030B51C
    bl fn_802896FC
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_8030B514
    lfs f0, lbl_804A26F0
    b lbl_8030B520
lbl_8030B514:
    lfs f0, lbl_804A26F4
    b lbl_8030B520
lbl_8030B51C:
    lfs f0, lbl_804A2680
lbl_8030B520:
    lfs f30, lbl_804A2690
    fneg f2, f0
    lfs f31, lbl_804A2698
    lfs f3, lbl_804A2680
    fmuls f1, f30, f30
    fmuls f0, f31, f31
    stfs f3, 0xe4(r30)
    fadds f1, f1, f0
    stfs f2, 0xe8(r30)
    bl sqrt
    lfs f2, 0xe4(r30)
    frsp f3, f1
    lfs f0, lbl_804A2680
    fcmpo cr0, f2, f0
    bge lbl_8030B564
    fadds f30, f30, f2
    b lbl_8030B568
lbl_8030B564:
    fsubs f30, f30, f2
lbl_8030B568:
    lfs f1, 0xe8(r30)
    lfs f0, lbl_804A2680
    fcmpo cr0, f1, f0
    bge lbl_8030B580
    fadds f31, f31, f1
    b lbl_8030B584
lbl_8030B580:
    fsubs f31, f31, f1
lbl_8030B584:
    fcmpo cr0, f30, f31
    bge lbl_8030B590
    b lbl_8030B594
lbl_8030B590:
    fmr f30, f31
lbl_8030B594:
    fdivs f0, f3, f30
    li r0, 0x0
    stfs f0, 0xec(r30)
    stb r0, 0x55c(r30)
lbl_8030B5A4:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x10
    beq lbl_8030B62C
    bge lbl_8030B5DC
    cmpwi r0, 0x2
    beq lbl_8030B614
    bge lbl_8030B5D0
    cmpwi r0, 0x0
    beq lbl_8030B604
    bge lbl_8030B60C
    b lbl_8030B9E4
lbl_8030B5D0:
    cmpwi r0, 0x4
    bge lbl_8030B9E4
    b lbl_8030B624
lbl_8030B5DC:
    cmpwi r0, 0xfd
    bge lbl_8030B5F8
    cmpwi r0, 0xfb
    bge lbl_8030B604
    cmpwi r0, 0x12
    bge lbl_8030B9E4
    b lbl_8030B61C
lbl_8030B5F8:
    cmpwi r0, 0xff
    beq lbl_8030B604
    b lbl_8030B9E4
lbl_8030B604:
    li r27, 0x0
    b lbl_8030B630
lbl_8030B60C:
    li r27, 0x2
    b lbl_8030B630
lbl_8030B614:
    li r27, 0x4
    b lbl_8030B630
lbl_8030B61C:
    li r27, 0x6
    b lbl_8030B630
lbl_8030B624:
    li r27, 0x8
    b lbl_8030B630
lbl_8030B62C:
    li r27, 0xa
lbl_8030B630:
    lbz r0, 0x556(r30)
    cmpwi r0, 0x0
    beq lbl_8030B640
    addi r27, r27, 0x1
lbl_8030B640:
    mr r3, r28
    bl fn_8028D1DC
    cmpwi r3, 0x0
    beq lbl_8030B658
    lbz r4, 0x559(r30)
    b lbl_8030B65C
lbl_8030B658:
    li r4, 0x0
lbl_8030B65C:
    lis r3, lbl_8037F558@ha
    slwi r0, r27, 1
    addi r3, r3, lbl_8037F558@l
    add r27, r3, r0
    lbzx r0, r3, r0
    cmplw r4, r0
    beq lbl_8030B6F0
    lwz r0, 0x50c(r30)
    cmpwi r0, 0x0
    beq lbl_8030B6B4
    lbz r0, 0x55a(r30)
    cmpwi r0, 0x0
    bne lbl_8030B6B4
    li r0, 0x1
    mr r3, r28
    stb r0, 0x55a(r30)
    li r4, 0x0
    lwz r12, 0x50c(r30)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, 0x55b(r30)
lbl_8030B6B4:
    lbz r0, 0x558(r30)
    cmpwi r0, 0x0
    bne lbl_8030B708
    li r0, 0x1
    lis r5, fn_8030B37C@ha
    stb r0, 0x558(r30)
    mr r3, r28
    lbz r4, 0x0(r27)
    addi r5, r5, fn_8030B37C@l
    bl fn_8028D2B0
    cmpwi r3, 0x0
    bne lbl_8030B708
    lbz r0, 0x0(r27)
    stb r0, 0x559(r30)
    b lbl_8030B708
lbl_8030B6F0:
    lbz r4, 0x1(r27)
    lbz r0, 0x36(r29)
    cmplw r0, r4
    beq lbl_8030B708
    mr r3, r28
    bl fn_8028ABF4
lbl_8030B708:
    lwz r0, 0x8(r1)
    cmplwi r0, 0x3
    bne lbl_8030B9E4
    lbz r3, lbl_8049E246
    cmpwi r3, 0x0
    bne lbl_8030B754
    lbz r0, lbl_8049E245
    cmpwi r0, 0x0
    bne lbl_8030B754
    lis r5, fn_8030B314@ha
    mr r3, r28
    addi r5, r5, fn_8030B314@l
    li r4, 0xaa
    bl fn_8028E330
    cmpwi r3, 0x0
    bne lbl_8030B9E4
    li r0, 0x1
    stb r0, lbl_8049E246
    b lbl_8030B9E4
lbl_8030B754:
    lbz r0, lbl_8049E245
    cmpwi r0, 0x0
    beq lbl_8030B7A8
    lbz r0, lbl_8049E244
    cmpwi r0, 0x0
    bne lbl_8030B7A8
    cmpwi r3, 0x0
    bne lbl_8030B78C
    bl fn_802870B0
    cmpwi r3, 0x0
    bne lbl_8030B9E4
    li r0, 0x1
    stb r0, lbl_8049E246
    b lbl_8030B9E4
lbl_8030B78C:
    bl fn_80287118
    clrlwi r0, r3, 24
    stb r3, lbl_8049E244
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    stb r0, lbl_8049E246
    b lbl_8030B9E4
lbl_8030B7A8:
    cmpwi r3, 0x0
    bne lbl_8030B9E4
    lbz r0, lbl_8049E244
    cmpwi r0, 0x0
    beq lbl_8030B9E4
    lbz r0, lbl_8049E242
    cmplwi r0, 0x3
    bge lbl_8030B9E4
    cmpwi r0, 0x1
    beq lbl_8030B814
    bge lbl_8030B7E0
    cmpwi r0, 0x0
    bge lbl_8030B7EC
    b lbl_8030B9E4
lbl_8030B7E0:
    cmpwi r0, 0x3
    bge lbl_8030B9E4
    b lbl_8030B89C
lbl_8030B7EC:
    lis r5, fn_8030B32C@ha
    mr r3, r28
    addi r5, r5, fn_8030B32C@l
    li r4, 0x0
    bl fn_8028E330
    cmpwi r3, 0x0
    bne lbl_8030B9E4
    li r0, 0x1
    stb r0, lbl_8049E246
    b lbl_8030B9E4
lbl_8030B814:
    lbz r0, 0x32(r29)
    extsb r0, r0
    cmpwi r0, 0x7f
    beq lbl_8030B82C
    cmpwi r0, -0x80
    bne lbl_8030B86C
lbl_8030B82C:
    lfd f0, lbl_804A26B8
    addi r4, r31, 0x15f0
    addi r3, r31, 0x1610
    li r0, 0x0
    stb r0, lbl_8049E242
    sth r0, lbl_8049E240
    stb r0, lbl_8049E243
    stfd f0, 0x15f0(r31)
    stfd f0, 0x1610(r31)
    stfd f0, 0x8(r4)
    stfd f0, 0x8(r3)
    stfd f0, 0x10(r4)
    stfd f0, 0x10(r3)
    stfd f0, 0x18(r4)
    stfd f0, 0x18(r3)
    b lbl_8030B9E4
lbl_8030B86C:
    lhz r3, lbl_8049E240
    lbz r0, lbl_8049D13C
    addi r4, r3, 0x1
    clrlwi r3, r4, 16
    sth r4, lbl_8049E240
    cmpw r3, r0
    ble lbl_8030B9E4
    li r3, 0x2
    li r0, 0x0
    stb r3, lbl_8049E242
    sth r0, lbl_8049E240
    b lbl_8030B9E4
lbl_8030B89C:
    lbz r0, 0x29(r29)
    extsb. r0, r0
    bne lbl_8030B9E4
    lhz r4, lbl_8049E240
    addi r3, r31, 0x15f0
    lfd f1, lbl_804A26A0
    addi r0, r4, 0x1
    lfd f2, 0x15f0(r31)
    clrlwi r5, r0, 16
    sth r0, lbl_8049E240
    subi r0, r5, 0x1
    lfd f0, lbl_804A26C8
    xoris r4, r0, 0x8000
    lhz r0, 0x2a(r29)
    stw r4, 0x14(r1)
    lfd f6, 0x8(r3)
    lfd f3, 0x10(r1)
    stw r0, 0x1c(r1)
    fsub f3, f3, f1
    lfd f5, 0x10(r3)
    lfd f4, 0x18(r1)
    stw r5, 0x14(r1)
    fmul f7, f3, f2
    lfd f3, 0x18(r3)
    lfd f2, 0x10(r1)
    fsub f4, f4, f0
    stw r4, 0x1c(r1)
    fsub f8, f2, f0
    fadd f9, f7, f4
    lfd f4, 0x18(r1)
    lfs f2, lbl_8049D140
    stw r5, 0x1c(r1)
    fsub f7, f4, f1
    fdiv f8, f9, f8
    lfd f4, 0x18(r1)
    stfd f8, 0x15f0(r31)
    fmul f8, f7, f6
    lhz r0, 0x2c(r29)
    fsub f7, f4, f0
    stw r0, 0x14(r1)
    lfd f4, 0x10(r1)
    fsub f6, f4, f0
    stw r4, 0x14(r1)
    lfd f4, 0x10(r1)
    fadd f8, f8, f6
    stw r5, 0x14(r1)
    fsub f6, f4, f1
    fdiv f7, f8, f7
    lfd f4, 0x10(r1)
    stfd f7, 0x8(r3)
    fmul f7, f6, f5
    lhz r0, 0x2e(r29)
    fsub f5, f4, f0
    stw r0, 0x1c(r1)
    lfd f4, 0x18(r1)
    fsub f6, f4, f0
    stw r4, 0x1c(r1)
    lfd f4, 0x18(r1)
    fadd f6, f7, f6
    stw r5, 0x1c(r1)
    fsub f4, f4, f1
    fdiv f5, f6, f5
    lfd f1, 0x18(r1)
    stfd f5, 0x10(r3)
    fmul f5, f4, f3
    lhz r0, 0x30(r29)
    fsub f3, f1, f0
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsub f4, f1, f0
    stw r5, 0x14(r1)
    lfd f1, 0x10(r1)
    fadd f4, f5, f4
    fsubs f0, f1, f0
    fdiv f1, f4, f3
    fcmpo cr0, f0, f2
    stfd f1, 0x18(r3)
    ble lbl_8030B9E4
    li r0, 0x3
    li r4, 0x4
    stb r0, lbl_8049E242
    bl fn_80287120
lbl_8030B9E4:
    lwz r12, 0x54c(r30)
    cmpwi r12, 0x0
    beq lbl_8030B9FC
    mr r3, r28
    mtctr r12
    bctrl
lbl_8030B9FC:
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    addi r11, r1, 0x40
    lfd f30, 0x40(r1)
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

