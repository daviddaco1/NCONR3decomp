#include "types.h"

// Translation unit: src/nw4r/ef/unk_801BA248.cpp
// Total functions: 17

// Small Data symbols (@sda21)
extern "C" float lbl_8049D978;
extern "C" float lbl_8049D97C;
extern "C" float lbl_8049D980;
extern "C" float lbl_8049D984;
extern "C" float lbl_8049D988;
extern "C" float lbl_8049D98C;
extern "C" float lbl_8049D990;
extern "C" float lbl_804A1888;
extern "C" float lbl_804A188C;
extern "C" float lbl_804A1890;
extern "C" float lbl_804A1894;
extern "C" float lbl_804A1898;
extern "C" float lbl_804A189C;
extern "C" float lbl_804A18A0;
extern "C" float lbl_804A18A8;
extern "C" float lbl_804A18B0;
extern "C" float lbl_804A18B8;
extern "C" float lbl_804A18BC;
extern "C" float lbl_804A18C0;
extern "C" float lbl_804A18C4;
extern "C" float lbl_804A18C8;
extern "C" float lbl_804A18CC;
extern "C" float lbl_804A18D0;
extern "C" float lbl_804A18D4;
extern "C" float lbl_804A18D8;
extern "C" float lbl_804A18E0;
extern "C" float lbl_804A18E8;
extern "C" float lbl_804A18EC;
extern "C" float lbl_804A18F0;
extern "C" float lbl_804A18F4;
extern "C" float lbl_804A18F8;
extern "C" float lbl_804A1900;
extern "C" float lbl_804A1908;
extern "C" float lbl_804A1910;
extern "C" float lbl_804A1914;
extern "C" float lbl_804A1918;
extern "C" float lbl_804A191C;
extern "C" float lbl_804A1920;
extern "C" float lbl_804A1928;
extern "C" float lbl_804A1930;
extern "C" float lbl_804A1934;
extern "C" float lbl_804A1938;
extern "C" float lbl_804A193C;
extern "C" float lbl_804A1940;
extern "C" float lbl_804A1948;
extern "C" float lbl_804A1950;
extern "C" float lbl_804A1958;
extern "C" float lbl_804A195C;
extern "C" float lbl_804A1960;
extern "C" float lbl_804A1964;
extern "C" float lbl_804A1968;
extern "C" float lbl_804A1970;
extern "C" float lbl_804A1978;
extern "C" float lbl_804A197C;
extern "C" float lbl_804A1980;
extern "C" float lbl_804A1984;
extern "C" float lbl_804A1988;
extern "C" float lbl_804A198C;
extern "C" float lbl_804A1990;
extern "C" float lbl_804A1998;
extern "C" float lbl_804A19A0;
extern "C" float lbl_804A19A8;
extern "C" float lbl_804A19AC;
extern "C" float lbl_804A19B0;
extern "C" float lbl_804A19B4;
extern "C" float lbl_804A19B8;
extern "C" float lbl_804A19BC;
extern "C" float lbl_804A19C0;
extern "C" float lbl_804A19C8;
extern "C" float lbl_804A19D0;
extern "C" float lbl_804A19D4;
extern "C" float lbl_804A19D8;
extern "C" float lbl_804A19E0;
extern "C" float lbl_804A19E4;
extern "C" float lbl_804A19E8;
extern "C" float lbl_804A19F0;
extern "C" float lbl_804A19F4;
extern "C" float lbl_804A19F8;
extern "C" float lbl_804A19FC;
extern "C" float lbl_804A1A00;
extern "C" float lbl_804A1A08;
extern "C" float lbl_804A1A10;
extern "C" float lbl_804A1A14;
extern "C" float lbl_804A1A18;
extern "C" float lbl_804A1A1C;
extern "C" float lbl_804A1A20;
extern "C" float lbl_804A1A24;
extern "C" float lbl_804A1A28;
extern "C" float lbl_804A1A30;
extern "C" float lbl_804A1A38;
extern "C" float lbl_804A1A3C;
extern "C" float lbl_804A1A40;
extern "C" float lbl_804A1A44;
extern "C" float lbl_804A1A48;
extern "C" float lbl_804A1A4C;
extern "C" float lbl_804A1A50;
extern "C" float lbl_804A1A58;
extern "C" float lbl_804A1A60;
extern "C" float lbl_804A1A64;
extern "C" float lbl_804A1A68;
extern "C" float lbl_804A1A6C;

// Global data symbols (@ha/@l)
extern "C" u8 jumptable_80360750[];
extern "C" u8 lbl_80360788[];
extern "C" u8 lbl_80360798[];
extern "C" u8 lbl_803607A8[];
extern "C" u8 lbl_803607B8[];
extern "C" u8 lbl_803607C8[];
extern "C" u8 lbl_803607D8[];
extern "C" u8 lbl_803607E8[];

// Forward declarations
extern "C" void FrSqrt__Q24nw4r4mathFf();
extern "C" void PSMTXConcat();
extern "C" void _restgpr_16();
extern "C" void _restgpr_17();
extern "C" void _restgpr_20();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _savegpr_16();
extern "C" void _savegpr_17();
extern "C" void _savegpr_20();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void cos();
extern "C" void fmod();
extern "C" void fn_801AB870();
extern "C" void fn_801B9B90();
extern "C" void fn_801B9BF4();
extern "C" void fn_801B9C64();
extern "C" void fn_801B9E1C();
extern "C" void fn_801BA248();
extern "C" void fn_801BA710();
extern "C" void fn_801BA7E4();
extern "C" void fn_801BA7F0();
extern "C" void fn_801BA96C();
extern "C" void fn_801BAAEC();
extern "C" void fn_801BAC24();
extern "C" void fn_801BAC84();
extern "C" void fn_801BACDC();
extern "C" void fn_801BB024();
extern "C" void fn_801BB35C();
extern "C" void fn_801BB890();
extern "C" void fn_801BC0E4();
extern "C" void fn_801BC544();
extern "C" void fn_801BC894();
extern "C" void fn_801BCED0();
extern "C" void fn_801BD210();
extern "C" void fn_8030D7E0();
extern "C" void tan();

// ----------------------------------------------------------------------------
// fn_801BA248
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BA248() {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    opword 0xF3E10108
    stfd f30, 0xf0(r1)
    opword 0xF3C100F8
    lis r0, 0x4330
    lfs f1, lbl_804A1888
    stw r31, 0xec(r1)
    mr r31, r7
    stw r30, 0xe8(r1)
    mr r30, r5
    stw r29, 0xe4(r1)
    mr r29, r4
    lfs f0, 0x68(r5)
    stw r0, 0xc8(r1)
    fcmpu cr0, f1, f0
    stw r0, 0xd0(r1)
    beq lbl_801BA2B4
    opword 0xE0480000
    opword 0x10220018
    opword 0xE0488008
    opword 0xF0240000
    opword 0x10220018
    opword 0xF0248008
    b lbl_801BA2C0
lbl_801BA2B4:
    stfs f1, 0x0(r4)
    stfs f1, 0x4(r4)
    stfs f1, 0x8(r4)
lbl_801BA2C0:
    lfs f1, lbl_804A1888
    lfs f0, 0x6c(r5)
    fcmpu cr0, f1, f0
    beq lbl_801BA304
    opword 0xE0490000
    opword 0xE0640000
    opword 0x10220018
    opword 0xE0498008
    opword 0xF021002C
    opword 0x10220018
    opword 0xE001002C
    opword 0xF0218034
    opword 0x1003002A
    opword 0xE0648008
    opword 0xF0040000
    opword 0x1003082A
    opword 0xF0048008
lbl_801BA304:
    lfs f1, lbl_804A1888
    lfs f0, 0x70(r5)
    fcmpu cr0, f1, f0
    beq lbl_801BA470
    lis r3, 0x3
    lwz r0, 0xec(r5)
    addi r7, r3, 0x43fd
    lfd f6, lbl_804A18A0
    mullw r6, r0, r7
    lfs f5, lbl_804A188C
    lfs f4, lbl_804A1894
    addi r3, r1, 0x1c
    lfs f3, lbl_804A1890
    addi r4, r1, 0x18
    addis r6, r6, 0x27
    subi r0, r6, 0x613d
    mullw r6, r0, r7
    stw r0, 0xec(r5)
    srwi r0, r0, 16
    stw r0, 0xcc(r1)
    lfd f0, 0xc8(r1)
    addis r6, r6, 0x27
    subi r0, r6, 0x613d
    fsubs f0, f0, f6
    mullw r6, r0, r7
    stw r0, 0xec(r5)
    srwi r0, r0, 16
    fdivs f2, f0, f5
    stw r0, 0xd4(r1)
    lfd f0, 0xd0(r1)
    addis r6, r6, 0x27
    subi r6, r6, 0x613d
    srwi r0, r6, 16
    fsubs f1, f0, f6
    stw r0, 0xcc(r1)
    fmuls f2, f4, f2
    lfd f0, 0xc8(r1)
    fdivs f7, f1, f5
    stw r6, 0xec(r5)
    fsubs f0, f0, f6
    fmuls f1, f3, f2
    fmuls f2, f4, f7
    fdivs f0, f0, f5
    fmuls f0, f4, f0
    fmuls f31, f3, f2
    fmuls f30, f3, f0
    bl fn_801B9C64
    fmr f1, f31
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_801B9C64
    fmr f1, f30
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801B9C64
    lfs f1, 0x18(r1)
    lfs f0, 0x14(r1)
    lfs f2, 0x8(r1)
    fmuls f4, f1, f0
    lfs f1, 0x1c(r1)
    lfs f0, 0xc(r1)
    lfs f3, 0x70(r30)
    fmuls f5, f2, f4
    lfs f2, 0x0(r29)
    fmuls f4, f1, f0
    lfs f1, 0x4(r29)
    lfs f0, 0x8(r29)
    fadds f4, f5, f4
    fmuls f3, f3, f4
    fadds f2, f2, f3
    stfs f2, 0x0(r29)
    lfs f3, 0x18(r1)
    lfs f2, 0x14(r1)
    lfs f5, 0xc(r1)
    fmuls f6, f3, f2
    lfs f4, 0x1c(r1)
    lfs f3, 0x8(r1)
    lfs f2, 0x70(r30)
    fmuls f5, f5, f6
    fmuls f3, f4, f3
    fsubs f3, f5, f3
    fmuls f2, f2, f3
    fadds f1, f1, f2
    stfs f1, 0x4(r29)
    lfs f3, 0x70(r30)
    lfs f2, 0x18(r1)
    lfs f1, 0x10(r1)
    fmuls f2, f3, f2
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x8(r29)
lbl_801BA470:
    lfs f0, lbl_804A1888
    lfs f2, 0x74(r30)
    fcmpu cr0, f0, f2
    beq lbl_801BA4C4
    lfs f1, 0x0(r31)
    lfs f0, 0x0(r29)
    fmuls f3, f1, f2
    lfs f4, 0x4(r31)
    lfs f1, 0x4(r29)
    lfs f2, 0x8(r31)
    fadds f3, f0, f3
    lfs f0, 0x8(r29)
    stfs f3, 0x0(r29)
    lfs f3, 0x74(r30)
    fmuls f3, f4, f3
    fadds f1, f1, f3
    stfs f1, 0x4(r29)
    lfs f1, 0x74(r30)
    fmuls f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x8(r29)
lbl_801BA4C4:
    lfs f3, lbl_804A1888
    lfs f0, 0x7c(r30)
    fcmpu cr0, f3, f0
    beq lbl_801BA648
    lfs f6, 0x80(r30)
    fcmpu cr0, f3, f6
    bne lbl_801BA564
    lfs f1, 0x84(r30)
    addi r3, r1, 0x98
    lfs f2, 0x88(r30)
    lfs f3, 0x8c(r30)
    bl fn_801B9E1C
    lfs f1, lbl_804A1888
    addi r4, r1, 0x20
    lfs f0, lbl_804A1898
    mr r5, r4
    stfs f1, 0x20(r1)
    addi r3, r1, 0x98
    stfs f0, 0x24(r1)
    stfs f1, 0x28(r1)
    bl fn_8030D7E0
    lfs f1, 0x7c(r30)
    lfs f0, 0x20(r1)
    lfs f2, 0x0(r29)
    fmuls f3, f1, f0
    lfs f1, 0x4(r29)
    lfs f0, 0x8(r29)
    fadds f2, f2, f3
    stfs f2, 0x0(r29)
    lfs f3, 0x7c(r30)
    lfs f2, 0x24(r1)
    fmuls f2, f3, f2
    fadds f1, f1, f2
    stfs f1, 0x4(r29)
    lfs f2, 0x7c(r30)
    lfs f1, 0x28(r1)
    fmuls f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x8(r29)
    b lbl_801BA648
lbl_801BA564:
    lis r3, 0x3
    lwz r0, 0xec(r30)
    addi r5, r3, 0x43fd
    lfd f4, lbl_804A18A0
    mullw r4, r0, r5
    lfs f5, lbl_804A188C
    lfs f1, lbl_804A1894
    addi r3, r1, 0x68
    lfs f0, lbl_804A1890
    addis r4, r4, 0x27
    subi r0, r4, 0x613d
    mullw r4, r0, r5
    stw r0, 0xec(r30)
    srwi r0, r0, 16
    stw r0, 0xd4(r1)
    lfd f2, 0xd0(r1)
    addis r4, r4, 0x27
    fsubs f2, f2, f4
    subi r4, r4, 0x613d
    srwi r0, r4, 16
    stw r4, 0xec(r30)
    fdivs f7, f2, f5
    stw r0, 0xcc(r1)
    lfd f2, 0xc8(r1)
    fsubs f4, f2, f4
    fmuls f2, f1, f7
    fdivs f1, f4, f5
    fmuls f1, f6, f1
    fmuls f2, f0, f2
    bl fn_801B9E1C
    lfs f1, 0x84(r30)
    addi r3, r1, 0x38
    lfs f2, 0x88(r30)
    lfs f3, 0x8c(r30)
    bl fn_801B9E1C
    addi r4, r1, 0x68
    addi r3, r1, 0x38
    mr r5, r4
    bl PSMTXConcat
    lfs f1, 0x6c(r1)
    lfs f0, 0x7c(r30)
    lfs f2, 0x0(r29)
    fmuls f3, f1, f0
    lfs f1, 0x4(r29)
    lfs f0, 0x8(r29)
    fadds f2, f2, f3
    stfs f2, 0x0(r29)
    lfs f3, 0x7c(r1)
    lfs f2, 0x7c(r30)
    fmuls f2, f3, f2
    fadds f1, f1, f2
    stfs f1, 0x4(r29)
    lfs f2, 0x8c(r1)
    lfs f1, 0x7c(r30)
    fmuls f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x8(r29)
lbl_801BA648:
    lbz r0, 0x66(r30)
    extsb. r0, r0
    beq lbl_801BA6E4
    lis r3, 0x3
    lwz r4, 0xec(r30)
    addi r3, r3, 0x43fd
    xoris r0, r0, 0x8000
    mullw r3, r4, r3
    stw r0, 0xcc(r1)
    lfd f1, lbl_804A18A8
    lfd f0, 0xc8(r1)
    lfd f7, lbl_804A18A0
    fsubs f1, f0, f1
    addis r3, r3, 0x27
    lfs f0, lbl_804A189C
    subi r3, r3, 0x613d
    lfs f6, lbl_804A188C
    srwi r0, r3, 16
    stw r3, 0xec(r30)
    fmuls f5, f0, f1
    lfs f3, lbl_804A1890
    stw r0, 0xd4(r1)
    lfs f4, lbl_804A1898
    lfd f0, 0xd0(r1)
    lfs f2, 0x0(r29)
    fsubs f7, f0, f7
    lfs f1, 0x4(r29)
    lfs f0, 0x8(r29)
    fdivs f6, f7, f6
    fmuls f3, f3, f6
    fsubs f3, f3, f4
    fmuls f3, f5, f3
    fsubs f3, f4, f3
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x0(r29)
    stfs f1, 0x4(r29)
    stfs f0, 0x8(r29)
lbl_801BA6E4:
    opword 0xE3E10108
    lfd f31, 0x100(r1)
    opword 0xE3C100F8
    lfd f30, 0xf0(r1)
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r0, 0x114(r1)
    lwz r29, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// ----------------------------------------------------------------------------
// fn_801BA710
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BA710() {
    nofralloc
    lfs f0, lbl_804A1888
    lis r0, 0x4330
    stwu r1, -0x20(r1)
    fcmpu cr0, f0, f1
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    beq lbl_801BA7D8
    lis r3, 0x3
    lwz r6, 0xec(r5)
    addi r0, r3, 0x43fd
    stw r4, 0x14(r1)
    mullw r3, r6, r0
    lfd f6, lbl_804A18A0
    lfd f0, 0x10(r1)
    lfs f4, lbl_804A188C
    fsubs f3, f0, f6
    lfs f0, lbl_804A1898
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r5)
    stw r0, 0xc(r1)
    lfd f2, 0x8(r1)
    fsubs f5, f2, f6
    stw r4, 0xc(r1)
    lfd f2, 0x8(r1)
    fdivs f4, f5, f4
    fmuls f3, f3, f4
    fsubs f2, f2, f6
    fmuls f3, f1, f3
    fsubs f1, f2, f3
    fcmpo cr0, f1, f0
    bge lbl_801BA79C
    li r4, 0x1
    b lbl_801BA7D8
lbl_801BA79C:
    stw r4, 0x14(r1)
    lfs f0, lbl_804A18B0
    lfd f1, 0x10(r1)
    fsubs f1, f1, f6
    fsubs f1, f1, f3
    fcmpo cr0, f1, f0
    ble lbl_801BA7C4
    lis r3, 0x1
    subi r4, r3, 0x1
    b lbl_801BA7D8
lbl_801BA7C4:
    fctiwz f0, f3
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    subf r0, r0, r4
    clrlwi r4, r0, 16
lbl_801BA7D8:
    mr r3, r4
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801BA7E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BA7E4() {
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801BA7F0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BA7F0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r0, 0x0(r3)
    cmpwi r0, 0x400
    bge lbl_801BA954
    mulli r0, r0, 0x30
    li r25, 0x0
    lha r27, 0x0(r4)
    cmpwi r8, 0x0
    lbz r28, 0x2(r4)
    add r10, r3, r0
    stb r25, 0x4(r10)
    lbz r29, 0x3(r4)
    lwz r0, 0x0(r3)
    lbz r30, 0x4(r4)
    mulli r0, r0, 0x30
    lbz r31, 0x5(r4)
    lbz r12, 0x6(r4)
    lbz r11, 0x7(r4)
    add r26, r3, r0
    lbz r10, 0x8(r4)
    stb r25, 0x5(r26)
    lbz r0, 0x9(r4)
    lwz r4, 0x0(r3)
    mulli r4, r4, 0x30
    add r4, r3, r4
    sth r7, 0x6(r4)
    lwz r4, 0x0(r3)
    mulli r4, r4, 0x30
    add r4, r3, r4
    sth r27, 0x8(r4)
    stb r28, 0xa(r4)
    stb r29, 0xb(r4)
    stb r30, 0xc(r4)
    stb r31, 0xd(r4)
    stb r12, 0xe(r4)
    stb r11, 0xf(r4)
    stb r10, 0x10(r4)
    stb r0, 0x11(r4)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x30
    add r4, r3, r0
    stw r5, 0x14(r4)
    lwz r4, 0x10(r5)
    addi r0, r4, 0x1
    stw r0, 0x10(r5)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x30
    add r4, r3, r0
    stw r6, 0x18(r4)
    beq lbl_801BA904
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x30
    add r4, r3, r0
    lbz r0, 0x5(r4)
    ori r0, r0, 0x1
    stb r0, 0x5(r4)
    lwz r0, 0x0(r3)
    lfs f0, 0x0(r8)
    mulli r0, r0, 0x30
    add r4, r3, r0
    stfs f0, 0x1c(r4)
    lfs f0, 0x4(r8)
    stfs f0, 0x20(r4)
    lfs f0, 0x8(r8)
    stfs f0, 0x24(r4)
lbl_801BA904:
    cmpwi r9, 0x0
    beq lbl_801BA948
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x30
    add r4, r3, r0
    lbz r0, 0x5(r4)
    ori r0, r0, 0x2
    stb r0, 0x5(r4)
    lwz r0, 0x0(r3)
    lfs f0, 0x0(r9)
    mulli r0, r0, 0x30
    add r4, r3, r0
    stfs f0, 0x28(r4)
    lfs f0, 0x4(r9)
    stfs f0, 0x2c(r4)
    lfs f0, 0x8(r9)
    stfs f0, 0x30(r4)
lbl_801BA948:
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
lbl_801BA954:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801BA96C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BA96C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r0, 0x0(r3)
    cmpwi r0, 0x400
    bge lbl_801BAAD4
    mulli r0, r0, 0x30
    li r11, 0x1
    li r25, 0x0
    lha r27, 0x0(r4)
    lbz r28, 0x2(r4)
    cmpwi r8, 0x0
    add r10, r3, r0
    lbz r29, 0x3(r4)
    stb r11, 0x4(r10)
    lbz r30, 0x4(r4)
    lwz r0, 0x0(r3)
    lbz r31, 0x5(r4)
    mulli r0, r0, 0x30
    lbz r12, 0x6(r4)
    lbz r11, 0x7(r4)
    lbz r10, 0x8(r4)
    add r26, r3, r0
    lbz r0, 0x9(r4)
    stb r25, 0x5(r26)
    lwz r4, 0x0(r3)
    mulli r4, r4, 0x30
    add r4, r3, r4
    sth r7, 0x6(r4)
    lwz r4, 0x0(r3)
    mulli r4, r4, 0x30
    add r4, r3, r4
    sth r27, 0x8(r4)
    stb r28, 0xa(r4)
    stb r29, 0xb(r4)
    stb r30, 0xc(r4)
    stb r31, 0xd(r4)
    stb r12, 0xe(r4)
    stb r11, 0xf(r4)
    stb r10, 0x10(r4)
    stb r0, 0x11(r4)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x30
    add r4, r3, r0
    stw r5, 0x14(r4)
    lwz r4, 0x10(r5)
    addi r0, r4, 0x1
    stw r0, 0x10(r5)
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x30
    add r4, r3, r0
    stw r6, 0x18(r4)
    beq lbl_801BAA84
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x30
    add r4, r3, r0
    lbz r0, 0x5(r4)
    ori r0, r0, 0x1
    stb r0, 0x5(r4)
    lwz r0, 0x0(r3)
    lfs f0, 0x0(r8)
    mulli r0, r0, 0x30
    add r4, r3, r0
    stfs f0, 0x1c(r4)
    lfs f0, 0x4(r8)
    stfs f0, 0x20(r4)
    lfs f0, 0x8(r8)
    stfs f0, 0x24(r4)
lbl_801BAA84:
    cmpwi r9, 0x0
    beq lbl_801BAAC8
    lwz r0, 0x0(r3)
    mulli r0, r0, 0x30
    add r4, r3, r0
    lbz r0, 0x5(r4)
    ori r0, r0, 0x2
    stb r0, 0x5(r4)
    lwz r0, 0x0(r3)
    lfs f0, 0x0(r9)
    mulli r0, r0, 0x30
    add r4, r3, r0
    stfs f0, 0x28(r4)
    lfs f0, 0x4(r9)
    stfs f0, 0x2c(r4)
    lfs f0, 0x8(r9)
    stfs f0, 0x30(r4)
lbl_801BAAC8:
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
lbl_801BAAD4:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801BAAEC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BAAEC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0x4
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_801BABF4
lbl_801BAB14:
    lbz r0, 0x1(r31)
    li r8, 0x0
    clrlwi. r0, r0, 31
    beq lbl_801BAB28
    addi r8, r31, 0x18
lbl_801BAB28:
    lbz r0, 0x0(r31)
    cmpwi r0, 0x1
    beq lbl_801BAB94
    bge lbl_801BABEC
    cmpwi r0, 0x0
    bge lbl_801BAB44
    b lbl_801BABEC
lbl_801BAB44:
    lwz r6, 0x10(r31)
    addi r5, r31, 0x4
    lwz r4, 0x14(r31)
    lwz r3, 0xc8(r6)
    lhz r7, 0x2(r31)
    lwz r3, 0x20(r3)
    bl fn_801AB870
    lwz r3, 0x10(r31)
    lwz r0, 0x10(r3)
    subic. r0, r0, 0x1
    stw r0, 0x10(r3)
    bne lbl_801BABEC
    lwz r0, 0xc(r3)
    cmpwi r0, 0x2
    bne lbl_801BABEC
    lwz r12, 0x1c(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_801BABEC
lbl_801BAB94:
    lwz r6, 0x10(r31)
    addi r5, r31, 0x4
    lwz r4, 0x14(r31)
    lwz r3, 0xc8(r6)
    lhz r7, 0x2(r31)
    lwz r3, 0x20(r3)
    lwz r12, 0x1c(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lwz r3, 0x10(r31)
    lwz r0, 0x10(r3)
    subic. r0, r0, 0x1
    stw r0, 0x10(r3)
    bne lbl_801BABEC
    lwz r0, 0xc(r3)
    cmpwi r0, 0x2
    bne lbl_801BABEC
    lwz r12, 0x1c(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_801BABEC:
    addi r31, r31, 0x30
    addi r30, r30, 0x1
lbl_801BABF4:
    lwz r0, 0x0(r29)
    cmpw r30, r0
    blt lbl_801BAB14
    li r0, 0x0
    stw r0, 0x0(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801BAC24
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BAC24() {
    nofralloc
    cmplwi r4, 0xa
    bgt lbl_801BAC7C
    lis r3, jumptable_80360750@ha
    slwi r0, r4, 2
    addi r3, r3, jumptable_80360750@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    la r3, lbl_8049D978
    blr
    la r3, lbl_8049D97C
    blr
    la r3, lbl_8049D980
    blr
    la r3, lbl_8049D984
    blr
    la r3, lbl_8049D988
    blr
    la r3, lbl_8049D98C
    blr
    la r3, lbl_8049D990
    blr
lbl_801BAC7C:
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_801BAC84
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BAC84() {
    nofralloc
    lis r9, lbl_803607A8@ha
    lis r8, lbl_80360798@ha
    lis r7, lbl_803607C8@ha
    lis r6, lbl_803607B8@ha
    lis r5, lbl_803607D8@ha
    lis r4, lbl_803607E8@ha
    lis r3, lbl_80360788@ha
    addi r9, r9, lbl_803607A8@l
    addi r8, r8, lbl_80360798@l
    addi r7, r7, lbl_803607C8@l
    addi r6, r6, lbl_803607B8@l
    addi r5, r5, lbl_803607D8@l
    addi r4, r4, lbl_803607E8@l
    addi r3, r3, lbl_80360788@l
    stw r9, lbl_8049D978
    stw r8, lbl_8049D97C
    stw r7, lbl_8049D980
    stw r6, lbl_8049D984
    stw r5, lbl_8049D988
    stw r4, lbl_8049D98C
    stw r3, lbl_8049D990
    blr
}

// ----------------------------------------------------------------------------
// fn_801BACDC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BACDC() {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    opword 0xF3E10138
    stfd f30, 0x120(r1)
    opword 0xF3C10128
    stfd f29, 0x110(r1)
    opword 0xF3A10118
    stfd f28, 0x100(r1)
    opword 0xF3810108
    stfd f27, 0xf0(r1)
    opword 0xF36100F8
    stfd f26, 0xe0(r1)
    opword 0xF34100E8
    stfd f25, 0xd0(r1)
    opword 0xF32100D8
    stfd f24, 0xc0(r1)
    opword 0xF30100C8
    stfd f23, 0xb0(r1)
    opword 0xF2E100B8
    stfd f22, 0xa0(r1)
    opword 0xF2C100A8
    stfd f21, 0x90(r1)
    opword 0xF2A10098
    stfd f20, 0x80(r1)
    opword 0xF2810088
    addi r11, r1, 0x80
    bl _savegpr_24
    lis r0, 0x4330
    fmr f23, f1
    cmpwi r6, 0x1
    stw r0, 0x50(r1)
    mr r24, r3
    mr r25, r4
    stw r0, 0x58(r1)
    mr r26, r5
    mr r27, r6
    mr r28, r9
    mr r29, r10
    blt lbl_801BAFAC
    lis r3, 0x3
    lfs f24, lbl_804A18B8
    lfd f25, lbl_804A18D8
    addi r31, r3, 0x43fd
    lfs f26, lbl_804A18BC
    li r30, 0x0
    lfs f27, lbl_804A18C0
    lfs f28, lbl_804A18C4
    lfs f29, lbl_804A18CC
    lfs f30, lbl_804A18C8
    lfs f31, lbl_804A18D0
    lfd f21, lbl_804A18E0
    lfs f22, lbl_804A18D4
    b lbl_801BAFA4
lbl_801BADB8:
    stfs f24, 0x44(r1)
    stfs f24, 0x48(r1)
    stfs f24, 0x4c(r1)
    lwz r0, 0xec(r25)
    mullw r3, r0, r31
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r25)
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f0, f0, f25
    fdivs f0, f0, f26
    fmuls f0, f27, f0
    fsubs f1, f0, f28
    fcmpo cr0, f1, f24
    opword 0x4C411382
    bne lbl_801BAE10
    fmuls f0, f29, f1
    fadds f0, f30, f0
    fmuls f1, f0, f1
    b lbl_801BAE1C
lbl_801BAE10:
    fmuls f0, f29, f1
    fsubs f0, f30, f0
    fmuls f1, f0, f1
lbl_801BAE1C:
    frsp f0, f1
    stfs f1, 0x38(r1)
    fmuls f0, f0, f0
    fsubs f20, f28, f0
    fcmpo cr0, f20, f24
    opword 0x4C401382
    bne lbl_801BAE40
    fmr f20, f24
    b lbl_801BAE4C
lbl_801BAE40:
    fmr f1, f20
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f20, f20, f1
lbl_801BAE4C:
    lwz r0, 0xec(r25)
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    mullw r5, r0, r31
    addis r5, r5, 0x27
    subi r5, r5, 0x613d
    srwi r0, r5, 16
    stw r5, 0xec(r25)
    stw r0, 0x5c(r1)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f25
    fdivs f0, f0, f26
    fmuls f0, f31, f0
    fmuls f1, f27, f0
    bl fn_801B9C64
    lfs f1, 0x3c(r1)
    addi r3, r1, 0x2c
    lfs f0, 0x40(r1)
    mr r4, r3
    fmuls f1, f1, f20
    lfs f2, 0x38(r1)
    fmuls f0, f0, f20
    stfs f24, 0x30(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f2, 0x2c(r1)
    stfs f0, 0x34(r1)
    bl fn_801B9B90
    addi r7, r1, 0x38
    mr r3, r24
    mr r5, r25
    addi r4, r1, 0x20
    mr r8, r7
    addi r6, r1, 0x44
    addi r9, r1, 0x2c
    bl fn_801BA248
    lwz r0, 0xec(r25)
    fmr f1, f23
    mr r3, r24
    mr r4, r28
    mullw r6, r0, r31
    mr r5, r25
    addis r6, r6, 0x27
    subi r6, r6, 0x613d
    srwi r0, r6, 16
    stw r6, 0xec(r25)
    stw r0, 0x54(r1)
    lwz r10, 0x20(r1)
    lfd f0, 0x50(r1)
    lwz r9, 0x24(r1)
    fsubs f0, f0, f25
    lwz r8, 0x28(r1)
    lwz r7, 0x44(r1)
    lwz r6, 0x48(r1)
    fdivs f20, f0, f26
    lwz r0, 0x4c(r1)
    stw r10, 0x8(r1)
    stw r9, 0xc(r1)
    stw r8, 0x10(r1)
    stw r7, 0x14(r1)
    stw r6, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_801BA710
    lbz r0, 0x67(r25)
    mr r4, r3
    lwz r12, 0x1c(r26)
    mr r3, r26
    extsb r0, r0
    mr r7, r29
    xoris r0, r0, 0x8000
    lwz r12, 0x14(r12)
    stw r0, 0x5c(r1)
    clrlwi r4, r4, 16
    addi r5, r1, 0x14
    addi r6, r1, 0x8
    lfd f0, 0x58(r1)
    addi r8, r25, 0xfc
    lwz r9, 0xf8(r25)
    fsubs f0, f0, f21
    lhz r10, 0xe8(r25)
    fmuls f0, f22, f0
    fmuls f0, f0, f20
    fadds f1, f28, f0
    mtctr r12
    bctrl
    addi r30, r30, 0x1
lbl_801BAFA4:
    cmpw r30, r27
    blt lbl_801BADB8
lbl_801BAFAC:
    opword 0xE3E10138
    lfd f31, 0x130(r1)
    opword 0xE3C10128
    lfd f30, 0x120(r1)
    opword 0xE3A10118
    lfd f29, 0x110(r1)
    opword 0xE3810108
    lfd f28, 0x100(r1)
    opword 0xE36100F8
    lfd f27, 0xf0(r1)
    opword 0xE34100E8
    lfd f26, 0xe0(r1)
    opword 0xE32100D8
    lfd f25, 0xd0(r1)
    opword 0xE30100C8
    lfd f24, 0xc0(r1)
    opword 0xE2E100B8
    lfd f23, 0xb0(r1)
    opword 0xE2C100A8
    lfd f22, 0xa0(r1)
    opword 0xE2A10098
    lfd f21, 0x90(r1)
    opword 0xE2810088
    addi r11, r1, 0x80
    lfd f20, 0x80(r1)
    bl _restgpr_24
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// ----------------------------------------------------------------------------
// fn_801BB024
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BB024() {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stfd f31, 0x130(r1)
    opword 0xF3E10138
    stfd f30, 0x120(r1)
    opword 0xF3C10128
    stfd f29, 0x110(r1)
    opword 0xF3A10118
    stfd f28, 0x100(r1)
    opword 0xF3810108
    stfd f27, 0xf0(r1)
    opword 0xF36100F8
    stfd f26, 0xe0(r1)
    opword 0xF34100E8
    stfd f25, 0xd0(r1)
    opword 0xF32100D8
    stfd f24, 0xc0(r1)
    opword 0xF30100C8
    stfd f23, 0xb0(r1)
    opword 0xF2E100B8
    addi r11, r1, 0xb0
    bl _savegpr_20
    lis r0, 0x4330
    fmr f26, f1
    cmpwi r6, 0x1
    stw r0, 0x68(r1)
    mr r20, r3
    mr r21, r4
    stw r0, 0x70(r1)
    mr r22, r5
    mr r23, r6
    mr r24, r8
    mr r25, r9
    mr r26, r10
    blt lbl_801BB2FC
    lis r30, 0x3
    lfd f30, lbl_804A1908
    lfd f28, lbl_804A1900
    rlwinm r29, r7, 0, 14, 14
    lfs f29, lbl_804A18E8
    rlwinm r28, r7, 0, 5, 5
    lfs f31, lbl_804A18F0
    addi r31, r30, 0x43fd
    lfs f23, lbl_804A18EC
    li r27, 0x0
    lfs f24, lbl_804A18F4
    lfs f25, lbl_804A18F8
    b lbl_801BB2F4
lbl_801BB0E8:
    cmpwi r29, 0x0
    bne lbl_801BB120
    lwz r3, 0xec(r21)
    addi r0, r30, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r21)
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f28
    fdivs f27, f0, f29
    b lbl_801BB158
lbl_801BB120:
    cmpwi r23, 0x1
    ble lbl_801BB154
    subi r0, r23, 0x1
    xoris r3, r27, 0x8000
    xoris r0, r0, 0x8000
    stw r3, 0x74(r1)
    stw r0, 0x6c(r1)
    lfd f1, 0x70(r1)
    lfd f0, 0x68(r1)
    fsubs f1, f1, f30
    fsubs f0, f0, f30
    fdivs f27, f1, f0
    b lbl_801BB158
lbl_801BB154:
    lfs f27, lbl_804A18EC
lbl_801BB158:
    cmpwi r28, 0x0
    beq lbl_801BB164
    fsubs f27, f27, f31
lbl_801BB164:
    lfs f0, 0x0(r24)
    addi r3, r1, 0x1c
    lfs f1, 0x4(r24)
    addi r4, r1, 0x18
    fmuls f27, f27, f0
    bl fn_801B9C64
    lfs f1, 0x8(r24)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_801B9C64
    lfs f1, 0xc(r24)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801B9C64
    lfs f1, 0x8(r1)
    addi r6, r1, 0x5c
    lfs f7, 0x18(r1)
    mr r3, r20
    lfs f5, 0x14(r1)
    fneg f0, f1
    lfs f4, 0x1c(r1)
    fmuls f6, f7, f1
    fmuls f1, f7, f5
    lfs f3, 0xc(r1)
    fmuls f2, f0, f4
    lfs f0, 0x10(r1)
    fmuls f5, f5, f6
    fmuls f1, f3, f1
    fmuls f0, f7, f0
    stfs f23, 0x50(r1)
    fmuls f3, f4, f3
    mr r5, r21
    fadds f1, f2, f1
    fmuls f0, f27, f0
    fadds f2, f5, f3
    stfs f24, 0x54(r1)
    fmuls f1, f27, f1
    mr r8, r6
    stfs f0, 0x64(r1)
    addi r4, r1, 0x38
    stfs f0, 0x4c(r1)
    fmuls f0, f27, f2
    addi r7, r1, 0x50
    addi r9, r1, 0x44
    stfs f23, 0x58(r1)
    stfs f23, 0x48(r1)
    stfs f1, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x44(r1)
    bl fn_801BA248
    lwz r0, 0xec(r21)
    fmr f1, f26
    mr r3, r20
    mr r4, r25
    mullw r6, r0, r31
    mr r5, r21
    addis r6, r6, 0x27
    subi r6, r6, 0x613d
    srwi r0, r6, 16
    stw r6, 0xec(r21)
    stw r0, 0x74(r1)
    lwz r10, 0x38(r1)
    lfd f0, 0x70(r1)
    lwz r9, 0x3c(r1)
    fsubs f0, f0, f28
    lwz r8, 0x40(r1)
    lwz r7, 0x5c(r1)
    lwz r6, 0x60(r1)
    fdivs f27, f0, f29
    lwz r0, 0x64(r1)
    stw r10, 0x20(r1)
    stw r9, 0x24(r1)
    stw r8, 0x28(r1)
    stw r7, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_801BA710
    lbz r0, 0x67(r21)
    mr r4, r3
    lwz r12, 0x1c(r22)
    mr r3, r22
    extsb r0, r0
    mr r7, r26
    xoris r0, r0, 0x8000
    lwz r12, 0x14(r12)
    stw r0, 0x6c(r1)
    clrlwi r4, r4, 16
    addi r5, r1, 0x2c
    addi r6, r1, 0x20
    lfd f0, 0x68(r1)
    addi r8, r21, 0xfc
    lwz r9, 0xf8(r21)
    fsubs f0, f0, f30
    lhz r10, 0xe8(r21)
    fmuls f0, f25, f0
    fmuls f0, f0, f27
    fadds f1, f24, f0
    mtctr r12
    bctrl
    addi r27, r27, 0x1
lbl_801BB2F4:
    cmpw r27, r23
    blt lbl_801BB0E8
lbl_801BB2FC:
    opword 0xE3E10138
    lfd f31, 0x130(r1)
    opword 0xE3C10128
    lfd f30, 0x120(r1)
    opword 0xE3A10118
    lfd f29, 0x110(r1)
    opword 0xE3810108
    lfd f28, 0x100(r1)
    opword 0xE36100F8
    lfd f27, 0xf0(r1)
    opword 0xE34100E8
    lfd f26, 0xe0(r1)
    opword 0xE32100D8
    lfd f25, 0xd0(r1)
    opword 0xE30100C8
    lfd f24, 0xc0(r1)
    opword 0xE2E100B8
    addi r11, r1, 0xb0
    lfd f23, 0xb0(r1)
    bl _restgpr_20
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// ----------------------------------------------------------------------------
// fn_801BB35C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BB35C() {
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    stfd f31, 0x190(r1)
    opword 0xF3E10198
    stfd f30, 0x180(r1)
    opword 0xF3C10188
    stfd f29, 0x170(r1)
    opword 0xF3A10178
    stfd f28, 0x160(r1)
    opword 0xF3810168
    stfd f27, 0x150(r1)
    opword 0xF3610158
    stfd f26, 0x140(r1)
    opword 0xF3410148
    stfd f25, 0x130(r1)
    opword 0xF3210138
    stfd f24, 0x120(r1)
    opword 0xF3010128
    stfd f23, 0x110(r1)
    opword 0xF2E10118
    stfd f22, 0x100(r1)
    opword 0xF2C10108
    stfd f21, 0xf0(r1)
    opword 0xF2A100F8
    stfd f20, 0xe0(r1)
    opword 0xF28100E8
    stfd f19, 0xd0(r1)
    opword 0xF26100D8
    stfd f18, 0xc0(r1)
    opword 0xF24100C8
    stfd f17, 0xb0(r1)
    opword 0xF22100B8
    addi r11, r1, 0xb0
    bl _savegpr_20
    lis r0, 0x4330
    fmr f18, f1
    cmpwi r6, 0x1
    stw r0, 0x68(r1)
    mr r20, r3
    mr r21, r4
    stw r0, 0x70(r1)
    mr r22, r5
    mr r23, r6
    mr r27, r7
    mr r24, r8
    mr r25, r9
    mr r26, r10
    blt lbl_801BB800
    lfs f25, 0x0(r8)
    lfs f0, lbl_804A1910
    fabs f1, f25
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_801BB43C
    b lbl_801BB440
lbl_801BB43C:
    fmr f25, f0
lbl_801BB440:
    rlwinm. r0, r7, 0, 6, 6
    beq lbl_801BB450
    fmr f23, f25
    b lbl_801BB470
lbl_801BB450:
    lfs f23, 0x10(r8)
    lfs f0, lbl_804A1910
    fabs f1, f23
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_801BB46C
    b lbl_801BB470
lbl_801BB46C:
    fmr f23, f0
lbl_801BB470:
    lfs f22, lbl_804A1914
    rlwinm. r0, r7, 0, 13, 13
    fmr f21, f22
    beq lbl_801BB488
    lfs f20, 0x8(r8)
    b lbl_801BB4D0
lbl_801BB488:
    lis r3, 0x3
    lwz r5, 0xec(r4)
    addi r0, r3, 0x43fd
    lfd f4, lbl_804A1948
    mullw r3, r5, r0
    lfs f2, lbl_804A1918
    lfs f1, lbl_804A1920
    lfs f0, lbl_804A191C
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r4)
    stw r0, 0x6c(r1)
    lfd f3, 0x68(r1)
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fmuls f1, f1, f2
    fmuls f20, f0, f1
lbl_801BB4D0:
    rlwinm. r28, r7, 0, 14, 14
    beq lbl_801BB564
    lfs f1, 0xc(r8)
    lfs f0, 0x8(r8)
    lfd f2, lbl_804A1928
    fsubs f1, f1, f0
    bl fmod
    frsp f1, f1
    lfs f0, lbl_804A1930
    fcmpo cr0, f1, f0
    blt lbl_801BB514
    lfs f0, lbl_804A1934
    fcmpo cr0, f1, f0
    bgt lbl_801BB514
    lhz r3, 0x32(r21)
    cmplwi r3, 0x1
    bne lbl_801BB53C
lbl_801BB514:
    lhz r0, 0x32(r21)
    lfs f3, 0xc(r24)
    stw r0, 0x74(r1)
    lfs f2, 0x8(r24)
    lfd f1, lbl_804A1948
    lfd f0, 0x70(r1)
    fsubs f2, f3, f2
    fsubs f0, f0, f1
    fdivs f21, f2, f0
    b lbl_801BB564
lbl_801BB53C:
    subi r0, r3, 0x1
    lfs f2, 0xc(r24)
    xoris r0, r0, 0x8000
    lfs f0, 0x8(r24)
    stw r0, 0x6c(r1)
    fsubs f2, f2, f0
    lfd f1, lbl_804A1950
    lfd f0, 0x68(r1)
    fsubs f0, f0, f1
    fdivs f21, f2, f0
lbl_801BB564:
    lis r31, 0x3
    lfs f29, lbl_804A193C
    rlwinm r29, r27, 0, 7, 7
    lfs f30, lbl_804A1914
    lfd f26, lbl_804A1948
    addi r30, r31, 0x43fd
    lfs f27, lbl_804A1918
    li r27, 0x0
    lfs f28, lbl_804A1938
    lfd f31, lbl_804A1950
    lfs f17, lbl_804A1940
    b lbl_801BB7F8
lbl_801BB594:
    lwz r0, 0xec(r21)
    cmpwi r29, 0x0
    mullw r3, r0, r30
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r21)
    stw r0, 0x74(r1)
    lfs f0, 0x4(r24)
    lfd f1, 0x70(r1)
    fdivs f19, f0, f28
    fsubs f0, f1, f26
    fdivs f24, f0, f27
    beq lbl_801BB60C
    fsubs f1, f29, f24
    fmuls f0, f19, f19
    fmuls f0, f1, f0
    fadds f1, f24, f0
    fcmpo cr0, f1, f30
    opword 0x4C401382
    bne lbl_801BB5F0
    fmr f24, f30
    b lbl_801BB618
lbl_801BB5F0:
    bl FrSqrt__Q24nw4r4mathFf
    fsubs f2, f29, f24
    fmuls f0, f19, f19
    fmuls f0, f2, f0
    fadds f0, f24, f0
    fmuls f24, f0, f1
    b lbl_801BB618
lbl_801BB60C:
    fsubs f0, f29, f24
    fmuls f0, f19, f0
    fadds f24, f24, f0
lbl_801BB618:
    cmpwi r28, 0x0
    bne lbl_801BB65C
    lwz r3, 0xec(r21)
    addi r0, r31, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r21)
    stw r0, 0x6c(r1)
    lfs f1, 0xc(r24)
    lfd f2, 0x68(r1)
    lfs f0, 0x8(r24)
    fsubs f2, f2, f26
    fsubs f0, f1, f0
    fdivs f1, f2, f27
    fmuls f22, f0, f1
lbl_801BB65C:
    fadds f1, f20, f22
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801B9C64
    lfs f0, 0x8(r1)
    lfs f2, 0xc(r1)
    fneg f3, f0
    stfs f30, 0x44(r1)
    fmuls f1, f2, f24
    stfs f2, 0x40(r1)
    frsp f0, f3
    lwz r3, 0x44(r1)
    stfs f3, 0x48(r1)
    fmuls f1, f25, f1
    lwz r4, 0x40(r1)
    fmuls f0, f0, f24
    lwz r0, 0x48(r1)
    stfs f1, 0x58(r1)
    fmuls f0, f23, f0
    stfs f30, 0x5c(r1)
    stfs f0, 0x60(r1)
    stw r4, 0x34(r1)
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    lfs f0, 0x78(r21)
    fcmpu cr0, f30, f0
    bne lbl_801BB6D8
    stfs f30, 0x28(r1)
    stfs f29, 0x2c(r1)
    stfs f30, 0x30(r1)
    b lbl_801BB704
lbl_801BB6D8:
    fmuls f1, f24, f0
    addi r3, r1, 0x28
    bl fn_801B9BF4
    lfs f0, 0x8(r1)
    lfs f1, 0x28(r1)
    fneg f2, f0
    lfs f0, 0xc(r1)
    fmuls f0, f1, f0
    fmuls f1, f2, f1
    stfs f0, 0x28(r1)
    stfs f1, 0x30(r1)
lbl_801BB704:
    mr r3, r20
    mr r5, r21
    addi r4, r1, 0x4c
    addi r6, r1, 0x58
    addi r7, r1, 0x28
    addi r8, r1, 0x34
    addi r9, r1, 0x40
    bl fn_801BA248
    lwz r0, 0xec(r21)
    fmr f1, f18
    mr r3, r20
    mr r4, r25
    mullw r6, r0, r30
    mr r5, r21
    addis r6, r6, 0x27
    subi r6, r6, 0x613d
    srwi r0, r6, 16
    stw r6, 0xec(r21)
    stw r0, 0x74(r1)
    lwz r10, 0x4c(r1)
    lfd f0, 0x70(r1)
    lwz r9, 0x50(r1)
    fsubs f0, f0, f26
    lwz r8, 0x54(r1)
    lwz r7, 0x58(r1)
    lwz r6, 0x5c(r1)
    fdivs f19, f0, f27
    lwz r0, 0x60(r1)
    stw r10, 0x10(r1)
    stw r9, 0x14(r1)
    stw r8, 0x18(r1)
    stw r7, 0x1c(r1)
    stw r6, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_801BA710
    lbz r0, 0x67(r21)
    mr r4, r3
    lwz r12, 0x1c(r22)
    mr r3, r22
    extsb r0, r0
    mr r7, r26
    xoris r0, r0, 0x8000
    lwz r12, 0x14(r12)
    stw r0, 0x6c(r1)
    clrlwi r4, r4, 16
    addi r5, r1, 0x1c
    addi r6, r1, 0x10
    lfd f0, 0x68(r1)
    addi r8, r21, 0xfc
    lwz r9, 0xf8(r21)
    fsubs f0, f0, f31
    lhz r10, 0xe8(r21)
    fmuls f0, f17, f0
    fmuls f0, f0, f19
    fadds f1, f29, f0
    mtctr r12
    bctrl
    cmpwi r28, 0x0
    beq lbl_801BB7F4
    fadds f22, f22, f21
lbl_801BB7F4:
    addi r27, r27, 0x1
lbl_801BB7F8:
    cmpw r27, r23
    blt lbl_801BB594
lbl_801BB800:
    opword 0xE3E10198
    lfd f31, 0x190(r1)
    opword 0xE3C10188
    lfd f30, 0x180(r1)
    opword 0xE3A10178
    lfd f29, 0x170(r1)
    opword 0xE3810168
    lfd f28, 0x160(r1)
    opword 0xE3610158
    lfd f27, 0x150(r1)
    opword 0xE3410148
    lfd f26, 0x140(r1)
    opword 0xE3210138
    lfd f25, 0x130(r1)
    opword 0xE3010128
    lfd f24, 0x120(r1)
    opword 0xE2E10118
    lfd f23, 0x110(r1)
    opword 0xE2C10108
    lfd f22, 0x100(r1)
    opword 0xE2A100F8
    lfd f21, 0xf0(r1)
    opword 0xE28100E8
    lfd f20, 0xe0(r1)
    opword 0xE26100D8
    lfd f19, 0xd0(r1)
    opword 0xE24100C8
    lfd f18, 0xc0(r1)
    opword 0xE22100B8
    addi r11, r1, 0xb0
    lfd f17, 0xb0(r1)
    bl _restgpr_20
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

// ----------------------------------------------------------------------------
// fn_801BB890
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BB890() {
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    stw r0, 0x224(r1)
    stfd f31, 0x210(r1)
    opword 0xF3E10218
    stfd f30, 0x200(r1)
    opword 0xF3C10208
    stfd f29, 0x1f0(r1)
    opword 0xF3A101F8
    stfd f28, 0x1e0(r1)
    opword 0xF38101E8
    stfd f27, 0x1d0(r1)
    opword 0xF36101D8
    stfd f26, 0x1c0(r1)
    opword 0xF34101C8
    stfd f25, 0x1b0(r1)
    opword 0xF32101B8
    stfd f24, 0x1a0(r1)
    opword 0xF30101A8
    stfd f23, 0x190(r1)
    opword 0xF2E10198
    stfd f22, 0x180(r1)
    opword 0xF2C10188
    stfd f21, 0x170(r1)
    opword 0xF2A10178
    stfd f20, 0x160(r1)
    opword 0xF2810168
    stfd f19, 0x150(r1)
    opword 0xF2610158
    stfd f18, 0x140(r1)
    opword 0xF2410148
    stfd f17, 0x130(r1)
    opword 0xF2210138
    stfd f16, 0x120(r1)
    opword 0xF2010128
    stfd f15, 0x110(r1)
    opword 0xF1E10118
    stfd f14, 0x100(r1)
    opword 0xF1C10108
    addi r11, r1, 0x100
    bl _savegpr_16
    lis r0, 0x4330
    fmr f25, f1
    cmpwi r6, 0x1
    stw r0, 0xa8(r1)
    mr r27, r3
    mr r28, r4
    stw r0, 0xb0(r1)
    mr r29, r5
    mr r22, r6
    mr r16, r7
    mr r17, r8
    mr r30, r9
    mr r31, r10
    blt lbl_801BC03C
    lfs f1, 0x4(r8)
    lfs f0, lbl_804A1958
    lfs f31, 0x0(r8)
    fdivs f30, f1, f0
    lfs f0, lbl_804A195C
    fabs f1, f31
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_801BB994
    b lbl_801BB998
lbl_801BB994:
    fmr f31, f0
lbl_801BB998:
    rlwinm. r0, r7, 0, 6, 6
    beq lbl_801BB9AC
    fmr f29, f31
    fmr f28, f31
    b lbl_801BB9EC
lbl_801BB9AC:
    lfs f29, 0x10(r8)
    lfs f0, lbl_804A195C
    fabs f1, f29
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_801BB9C8
    b lbl_801BB9CC
lbl_801BB9C8:
    fmr f29, f0
lbl_801BB9CC:
    lfs f28, 0x14(r8)
    lfs f0, lbl_804A195C
    fabs f1, f28
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_801BB9E8
    b lbl_801BB9EC
lbl_801BB9E8:
    fmr f28, f0
lbl_801BB9EC:
    rlwinm. r0, r7, 0, 13, 13
    lfs f27, 0x8(r8)
    bne lbl_801BBA44
    lis r3, 0x3
    lwz r5, 0xec(r4)
    addi r0, r3, 0x43fd
    lfd f4, lbl_804A1998
    mullw r3, r5, r0
    lfs f2, lbl_804A1960
    lfs f1, lbl_804A1968
    lfs f0, lbl_804A1964
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r4)
    stw r0, 0xac(r1)
    lfd f3, 0xa8(r1)
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fmuls f1, f1, f2
    fmuls f0, f0, f1
    fadds f27, f27, f0
lbl_801BBA44:
    rlwinm. r0, r7, 0, 14, 14
    beq lbl_801BBDBC
    lfs f1, 0xc(r8)
    slwi r3, r6, 1
    lfs f0, 0x8(r8)
    addi r21, r3, 0x1
    lfd f2, lbl_804A1970
    li r20, 0x0
    fsubs f26, f1, f0
    li r19, 0x1
    li r18, 0x0
    li r17, 0x0
    fmr f1, f26
    bl fmod
    frsp f1, f1
    lfs f0, lbl_804A1978
    fcmpo cr0, f1, f0
    blt lbl_801BBA98
    lfs f0, lbl_804A197C
    fcmpo cr0, f1, f0
    ble lbl_801BBA9C
lbl_801BBA98:
    li r17, 0x1
lbl_801BBA9C:
    slwi r0, r22, 2
    lfs f23, lbl_804A1984
    mullw r4, r22, r0
    lfs f0, lbl_804A1990
    fneg f19, f29
    lis r3, 0x3
    subi r0, r21, 0x1
    fsubs f22, f23, f30
    rlwinm r23, r16, 0, 7, 7
    lfd f16, lbl_804A19A0
    lfs f17, lbl_804A1968
    addi r22, r4, 0x2
    lfs f18, lbl_804A1980
    xoris r25, r0, 0x8000
    lfd f29, lbl_804A1998
    addi r26, r3, 0x43fd
    lfs f24, lbl_804A1960
    li r16, 0x0
    lfs f21, lbl_804A1988
    li r24, 0x0
    lfs f20, lbl_804A198C
    stfd f0, 0xb8(r1)
    b lbl_801BBDB0
lbl_801BBAF8:
    xoris r0, r20, 0x8000
    stw r25, 0xac(r1)
    cmpwi r19, 0x1
    stw r0, 0xb4(r1)
    lfd f0, 0xa8(r1)
    lfd f1, 0xb0(r1)
    fsubs f0, f0, f16
    fsubs f1, f1, f16
    fdivs f0, f1, f0
    fmuls f0, f17, f0
    fadds f14, f18, f0
    bne lbl_801BBB30
    fmr f1, f27
    b lbl_801BBB98
lbl_801BBB30:
    cmpwi r17, 0x0
    beq lbl_801BBB68
    xoris r3, r18, 0x8000
    xoris r0, r19, 0x8000
    stw r3, 0xb4(r1)
    stw r0, 0xac(r1)
    lfd f1, 0xb0(r1)
    lfd f0, 0xa8(r1)
    fsubs f1, f1, f16
    fsubs f0, f0, f16
    fdivs f0, f1, f0
    fmuls f0, f26, f0
    fadds f1, f27, f0
    b lbl_801BBB98
lbl_801BBB68:
    subi r0, r19, 0x1
    xoris r3, r18, 0x8000
    xoris r0, r0, 0x8000
    stw r3, 0xb4(r1)
    stw r0, 0xac(r1)
    lfd f1, 0xb0(r1)
    lfd f0, 0xa8(r1)
    fsubs f1, f1, f16
    fsubs f0, f0, f16
    fdivs f0, f1, f0
    fmuls f0, f26, f0
    fadds f1, f27, f0
lbl_801BBB98:
    addi r18, r18, 0x1
    cmpw r18, r19
    bne lbl_801BBBE4
    addi r24, r24, 0x2
    li r18, 0x0
    cmpw r24, r21
    addi r20, r20, 0x1
    bge lbl_801BBBD0
    cmpwi r19, 0x1
    addi r0, r19, 0x3
    beq lbl_801BBBC8
    addi r0, r19, 0x4
lbl_801BBBC8:
    mr r19, r0
    b lbl_801BBBE4
lbl_801BBBD0:
    cmpwi r19, 0x4
    li r0, 0x1
    beq lbl_801BBBE0
    subi r0, r19, 0x4
lbl_801BBBE0:
    mr r19, r0
lbl_801BBBE4:
    lwz r0, 0xec(r28)
    cmpwi r23, 0x0
    mullw r3, r0, r26
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r28)
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f29
    fdivs f2, f0, f24
    beq lbl_801BBC20
    fmuls f0, f2, f2
    fmuls f0, f2, f0
    fsubs f2, f23, f0
lbl_801BBC20:
    fmuls f0, f2, f22
    stfs f21, 0x7c(r1)
    addi r3, r1, 0x78
    addi r4, r1, 0x80
    fadds f15, f30, f0
    bl fn_801B9C64
    lfs f0, 0x78(r1)
    fmr f1, f14
    addi r3, r1, 0xa0
    fmuls f0, f0, f20
    stfs f0, 0x78(r1)
    bl fn_801B9BF4
    fmuls f5, f31, f15
    lfs f6, 0xa4(r1)
    fmuls f1, f28, f15
    lfs f0, 0x80(r1)
    fmuls f3, f19, f15
    lfs f2, 0xa0(r1)
    fmuls f0, f0, f1
    lfs f4, 0x78(r1)
    fmuls f5, f6, f5
    addi r3, r1, 0x84
    fmuls f1, f2, f3
    addi r4, r1, 0x9c
    fmuls f2, f4, f5
    fmuls f0, f6, f0
    stfs f1, 0xa0(r1)
    stfs f2, 0x9c(r1)
    stfs f0, 0xa4(r1)
    bl fn_801B9B90
    fmr f1, f14
    bl cos
    frsp f0, f1
    fcmpo cr0, f0, f21
    bge lbl_801BBCC4
    lfs f1, 0x78(r1)
    lfs f0, 0x80(r1)
    fneg f1, f1
    fneg f0, f0
    stfs f1, 0x78(r1)
    stfs f0, 0x80(r1)
lbl_801BBCC4:
    addi r7, r1, 0x84
    mr r3, r27
    mr r5, r28
    addi r4, r1, 0x90
    mr r8, r7
    addi r6, r1, 0x9c
    addi r9, r1, 0x78
    bl fn_801BA248
    lwz r0, 0xec(r28)
    fmr f1, f25
    mr r3, r27
    mr r4, r30
    mullw r6, r0, r26
    mr r5, r28
    addis r6, r6, 0x27
    subi r6, r6, 0x613d
    srwi r0, r6, 16
    stw r6, 0xec(r28)
    stw r0, 0xac(r1)
    lwz r10, 0x90(r1)
    lfd f0, 0xa8(r1)
    lwz r9, 0x94(r1)
    fsubs f0, f0, f29
    lwz r8, 0x98(r1)
    lwz r7, 0x9c(r1)
    lwz r6, 0xa0(r1)
    fdivs f15, f0, f24
    lwz r0, 0xa4(r1)
    stw r10, 0x30(r1)
    stw r9, 0x34(r1)
    stw r8, 0x38(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_801BA710
    lbz r0, 0x67(r28)
    mr r4, r3
    lwz r12, 0x1c(r29)
    mr r3, r29
    extsb r0, r0
    mr r7, r31
    xoris r0, r0, 0x8000
    lwz r12, 0x14(r12)
    stw r0, 0xb4(r1)
    clrlwi r4, r4, 16
    addi r5, r1, 0x3c
    addi r6, r1, 0x30
    lfd f0, 0xb0(r1)
    addi r8, r28, 0xfc
    lwz r9, 0xf8(r28)
    fsubs f1, f0, f16
    lfd f0, 0xb8(r1)
    lhz r10, 0xe8(r28)
    fmuls f0, f0, f1
    fmuls f0, f0, f15
    fadds f1, f23, f0
    mtctr r12
    bctrl
    addi r16, r16, 0x1
lbl_801BBDB0:
    cmpw r16, r22
    blt lbl_801BBAF8
    b lbl_801BC03C
lbl_801BBDBC:
    lis r3, 0x3
    lfd f19, lbl_804A1998
    lfs f20, lbl_804A1960
    rlwinm r25, r7, 0, 7, 7
    lfs f21, lbl_804A1958
    addi r26, r3, 0x43fd
    lfs f22, lbl_804A1984
    li r16, 0x0
    lfs f23, lbl_804A1968
    lfs f24, lbl_804A1980
    lfs f30, lbl_804A1988
    lfd f26, lbl_804A19A0
    lfs f14, lbl_804A1990
    b lbl_801BC034
lbl_801BBDF4:
    lwz r0, 0xec(r28)
    cmpwi r25, 0x0
    mullw r3, r0, r26
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r28)
    stw r0, 0xac(r1)
    lfs f0, 0x4(r17)
    lfd f1, 0xa8(r1)
    fdivs f2, f0, f21
    fsubs f0, f1, f19
    fdivs f1, f0, f20
    beq lbl_801BBE48
    fmuls f0, f1, f1
    fmuls f0, f1, f0
    fsubs f1, f22, f0
    fsubs f0, f22, f1
    fmuls f0, f2, f0
    fadds f15, f1, f0
    b lbl_801BBE54
lbl_801BBE48:
    fsubs f0, f22, f1
    fmuls f0, f2, f0
    fadds f15, f1, f0
lbl_801BBE54:
    mullw r5, r3, r26
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    addis r5, r5, 0x27
    subi r0, r5, 0x613d
    mullw r5, r0, r26
    stw r0, 0xec(r28)
    srwi r0, r0, 16
    stw r0, 0xb4(r1)
    lfs f2, 0xc(r17)
    lfd f0, 0xb0(r1)
    addis r5, r5, 0x27
    fsubs f0, f0, f19
    subi r5, r5, 0x613d
    lfs f1, 0x8(r17)
    srwi r0, r5, 16
    stw r0, 0xac(r1)
    fdivs f3, f0, f20
    lfd f0, 0xa8(r1)
    stw r5, 0xec(r28)
    fsubs f0, f0, f19
    fsubs f1, f2, f1
    fdivs f0, f0, f20
    fmuls f2, f1, f3
    fmuls f0, f23, f0
    fadds f16, f27, f2
    fadds f1, f24, f0
    bl fn_801B9C64
    fmr f1, f16
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801B9C64
    lfs f7, 0x10(r1)
    fmuls f1, f28, f15
    lfs f0, 0x14(r1)
    fmuls f5, f31, f15
    fneg f6, f7
    lfs f4, 0xc(r1)
    fneg f3, f0
    fmuls f2, f29, f15
    lfs f0, 0x8(r1)
    fmuls f1, f7, f1
    fmuls f5, f6, f5
    addi r3, r1, 0x54
    fmuls f2, f3, f2
    fmuls f0, f0, f1
    addi r4, r1, 0x6c
    fmuls f3, f4, f5
    stfs f2, 0x70(r1)
    stfs f3, 0x6c(r1)
    stfs f0, 0x74(r1)
    bl fn_801B9B90
    lwz r0, 0x70(r1)
    addi r3, r1, 0x48
    lwz r5, 0x6c(r1)
    mr r4, r3
    stw r0, 0x4c(r1)
    lwz r0, 0x74(r1)
    stw r5, 0x48(r1)
    stw r0, 0x50(r1)
    stfs f30, 0x4c(r1)
    bl fn_801B9B90
    addi r7, r1, 0x54
    mr r3, r27
    mr r5, r28
    addi r4, r1, 0x60
    mr r8, r7
    addi r6, r1, 0x6c
    addi r9, r1, 0x48
    bl fn_801BA248
    lwz r0, 0xec(r28)
    fmr f1, f25
    mr r3, r27
    mr r4, r30
    mullw r6, r0, r26
    mr r5, r28
    addis r6, r6, 0x27
    subi r6, r6, 0x613d
    srwi r0, r6, 16
    stw r6, 0xec(r28)
    stw r0, 0xb4(r1)
    lwz r10, 0x60(r1)
    lfd f0, 0xb0(r1)
    lwz r9, 0x64(r1)
    fsubs f0, f0, f19
    lwz r8, 0x68(r1)
    lwz r7, 0x6c(r1)
    lwz r6, 0x70(r1)
    fdivs f15, f0, f20
    lwz r0, 0x74(r1)
    stw r10, 0x18(r1)
    stw r9, 0x1c(r1)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r6, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_801BA710
    lbz r0, 0x67(r28)
    mr r4, r3
    lwz r12, 0x1c(r29)
    mr r3, r29
    extsb r0, r0
    mr r7, r31
    xoris r0, r0, 0x8000
    lwz r12, 0x14(r12)
    stw r0, 0xac(r1)
    clrlwi r4, r4, 16
    addi r5, r1, 0x24
    addi r6, r1, 0x18
    lfd f0, 0xa8(r1)
    addi r8, r28, 0xfc
    lwz r9, 0xf8(r28)
    fsubs f0, f0, f26
    lhz r10, 0xe8(r28)
    fmuls f0, f14, f0
    fmuls f0, f0, f15
    fadds f1, f22, f0
    mtctr r12
    bctrl
    addi r16, r16, 0x1
lbl_801BC034:
    cmpw r16, r22
    blt lbl_801BBDF4
lbl_801BC03C:
    opword 0xE3E10218
    lfd f31, 0x210(r1)
    opword 0xE3C10208
    lfd f30, 0x200(r1)
    opword 0xE3A101F8
    lfd f29, 0x1f0(r1)
    opword 0xE38101E8
    lfd f28, 0x1e0(r1)
    opword 0xE36101D8
    lfd f27, 0x1d0(r1)
    opword 0xE34101C8
    lfd f26, 0x1c0(r1)
    opword 0xE32101B8
    lfd f25, 0x1b0(r1)
    opword 0xE30101A8
    lfd f24, 0x1a0(r1)
    opword 0xE2E10198
    lfd f23, 0x190(r1)
    opword 0xE2C10188
    lfd f22, 0x180(r1)
    opword 0xE2A10178
    lfd f21, 0x170(r1)
    opword 0xE2810168
    lfd f20, 0x160(r1)
    opword 0xE2610158
    lfd f19, 0x150(r1)
    opword 0xE2410148
    lfd f18, 0x140(r1)
    opword 0xE2210138
    lfd f17, 0x130(r1)
    opword 0xE2010128
    lfd f16, 0x120(r1)
    opword 0xE1E10118
    lfd f15, 0x110(r1)
    opword 0xE1C10108
    addi r11, r1, 0x100
    lfd f14, 0x100(r1)
    bl _restgpr_16
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

// ----------------------------------------------------------------------------
// fn_801BC0E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BC0E4() {
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    stw r0, 0x1d4(r1)
    stfd f31, 0x1c0(r1)
    opword 0xF3E101C8
    stfd f30, 0x1b0(r1)
    opword 0xF3C101B8
    stfd f29, 0x1a0(r1)
    opword 0xF3A101A8
    stfd f28, 0x190(r1)
    opword 0xF3810198
    stfd f27, 0x180(r1)
    opword 0xF3610188
    stfd f26, 0x170(r1)
    opword 0xF3410178
    stfd f25, 0x160(r1)
    opword 0xF3210168
    stfd f24, 0x150(r1)
    opword 0xF3010158
    stfd f23, 0x140(r1)
    opword 0xF2E10148
    stfd f22, 0x130(r1)
    opword 0xF2C10138
    stfd f21, 0x120(r1)
    opword 0xF2A10128
    stfd f20, 0x110(r1)
    opword 0xF2810118
    stfd f19, 0x100(r1)
    opword 0xF2610108
    stfd f18, 0xf0(r1)
    opword 0xF24100F8
    stfd f17, 0xe0(r1)
    opword 0xF22100E8
    stfd f16, 0xd0(r1)
    opword 0xF20100D8
    stfd f15, 0xc0(r1)
    opword 0xF1E100C8
    stfd f14, 0xb0(r1)
    opword 0xF1C100B8
    addi r11, r1, 0xb0
    bl _savegpr_20
    lis r0, 0x4330
    fmr f24, f1
    lis r31, 0x3
    fmr f25, f2
    fmr f26, f3
    stw r0, 0x68(r1)
    fmr f27, f4
    fmr f28, f5
    stw r0, 0x70(r1)
    fmr f29, f6
    fmr f30, f7
    lfs f19, lbl_804A19B4
    fmr f31, f8
    lfs f20, lbl_804A19B0
    mr r20, r3
    lfd f16, lbl_804A19C0
    lfs f17, lbl_804A19A8
    mr r21, r4
    lfs f18, lbl_804A19AC
    mr r22, r5
    lfs f21, lbl_804A19B8
    mr r23, r6
    lfd f22, lbl_804A19C8
    mr r24, r8
    lfs f23, lbl_804A19BC
    mr r25, r9
    mr r26, r10
    rlwinm r29, r7, 0, 7, 7
    rlwinm r28, r7, 0, 14, 14
    addi r30, r31, 0x43fd
    li r27, 0x0
    b lbl_801BC494
lbl_801BC208:
    lwz r0, 0xec(r21)
    cmpwi r29, 0x0
    mullw r3, r0, r30
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r21)
    stw r0, 0x6c(r1)
    lfs f0, 0x4(r24)
    lfd f1, 0x68(r1)
    fdivs f14, f0, f18
    fsubs f0, f1, f16
    fdivs f15, f0, f17
    beq lbl_801BC280
    fsubs f1, f19, f15
    fmuls f0, f14, f14
    fmuls f0, f1, f0
    fadds f1, f15, f0
    fcmpo cr0, f1, f20
    opword 0x4C401382
    bne lbl_801BC264
    fmr f15, f20
    b lbl_801BC28C
lbl_801BC264:
    bl FrSqrt__Q24nw4r4mathFf
    fsubs f2, f19, f15
    fmuls f0, f14, f14
    fmuls f0, f2, f0
    fadds f0, f15, f0
    fmuls f15, f0, f1
    b lbl_801BC28C
lbl_801BC280:
    fsubs f0, f19, f15
    fmuls f0, f14, f0
    fadds f15, f15, f0
lbl_801BC28C:
    cmpwi r28, 0x0
    bne lbl_801BC2D0
    lwz r3, 0xec(r21)
    addi r0, r31, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r21)
    stw r0, 0x74(r1)
    lfs f1, 0xc(r24)
    lfd f2, 0x70(r1)
    lfs f0, 0x8(r24)
    fsubs f2, f2, f16
    fsubs f0, f1, f0
    fdivs f1, f2, f17
    fmuls f28, f0, f1
lbl_801BC2D0:
    fadds f1, f30, f28
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801B9C64
    lfs f2, 0xc(r1)
    cmpwi r28, 0x0
    lfs f1, 0x8(r1)
    fmuls f0, f2, f15
    stfs f2, 0x40(r1)
    fneg f1, f1
    stfs f20, 0x44(r1)
    fmuls f0, f25, f0
    stfs f1, 0x48(r1)
    stfs f0, 0x58(r1)
    beq lbl_801BC314
    stfs f31, 0x5c(r1)
    b lbl_801BC350
lbl_801BC314:
    lwz r3, 0xec(r21)
    addi r0, r31, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r21)
    stw r0, 0x6c(r1)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f16
    fdivs f0, f0, f17
    fmuls f0, f21, f0
    fsubs f0, f0, f19
    fmuls f0, f26, f0
    stfs f0, 0x5c(r1)
lbl_801BC350:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x34
    lfs f1, 0x58(r1)
    mr r4, r3
    fmuls f0, f0, f15
    stfs f20, 0x38(r1)
    stfs f1, 0x34(r1)
    fmuls f0, f27, f0
    stfs f0, 0x60(r1)
    stfs f0, 0x3c(r1)
    bl fn_801B9B90
    lwz r6, 0x58(r1)
    addi r3, r1, 0x28
    lwz r5, 0x5c(r1)
    mr r4, r3
    lwz r0, 0x60(r1)
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r0, 0x30(r1)
    bl fn_801B9B90
    mr r3, r20
    mr r5, r21
    addi r4, r1, 0x4c
    addi r6, r1, 0x58
    addi r7, r1, 0x34
    addi r8, r1, 0x28
    addi r9, r1, 0x40
    bl fn_801BA248
    lwz r0, 0xec(r21)
    fmr f1, f24
    mr r3, r20
    mr r4, r25
    mullw r6, r0, r30
    mr r5, r21
    addis r6, r6, 0x27
    subi r6, r6, 0x613d
    srwi r0, r6, 16
    stw r6, 0xec(r21)
    stw r0, 0x74(r1)
    lwz r10, 0x4c(r1)
    lfd f0, 0x70(r1)
    lwz r9, 0x50(r1)
    fsubs f0, f0, f16
    lwz r8, 0x54(r1)
    lwz r7, 0x58(r1)
    lwz r6, 0x5c(r1)
    fdivs f15, f0, f17
    lwz r0, 0x60(r1)
    stw r10, 0x10(r1)
    stw r9, 0x14(r1)
    stw r8, 0x18(r1)
    stw r7, 0x1c(r1)
    stw r6, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_801BA710
    lbz r0, 0x67(r21)
    mr r4, r3
    lwz r12, 0x1c(r22)
    mr r3, r22
    extsb r0, r0
    mr r7, r26
    xoris r0, r0, 0x8000
    lwz r12, 0x14(r12)
    stw r0, 0x6c(r1)
    clrlwi r4, r4, 16
    addi r5, r1, 0x1c
    addi r6, r1, 0x10
    lfd f0, 0x68(r1)
    addi r8, r21, 0xfc
    lwz r9, 0xf8(r21)
    fsubs f0, f0, f22
    lhz r10, 0xe8(r21)
    fmuls f0, f23, f0
    fmuls f0, f0, f15
    fadds f1, f19, f0
    mtctr r12
    bctrl
    cmpwi r28, 0x0
    beq lbl_801BC490
    fadds f28, f28, f29
lbl_801BC490:
    addi r27, r27, 0x1
lbl_801BC494:
    cmpw r27, r23
    blt lbl_801BC208
    opword 0xE3E101C8
    lfd f31, 0x1c0(r1)
    opword 0xE3C101B8
    lfd f30, 0x1b0(r1)
    opword 0xE3A101A8
    lfd f29, 0x1a0(r1)
    opword 0xE3810198
    lfd f28, 0x190(r1)
    opword 0xE3610188
    lfd f27, 0x180(r1)
    opword 0xE3410178
    lfd f26, 0x170(r1)
    opword 0xE3210168
    lfd f25, 0x160(r1)
    opword 0xE3010158
    lfd f24, 0x150(r1)
    opword 0xE2E10148
    lfd f23, 0x140(r1)
    opword 0xE2C10138
    lfd f22, 0x130(r1)
    opword 0xE2A10128
    lfd f21, 0x120(r1)
    opword 0xE2810118
    lfd f20, 0x110(r1)
    opword 0xE2610108
    lfd f19, 0x100(r1)
    opword 0xE24100F8
    lfd f18, 0xf0(r1)
    opword 0xE22100E8
    lfd f17, 0xe0(r1)
    opword 0xE20100D8
    lfd f16, 0xd0(r1)
    opword 0xE1E100C8
    lfd f15, 0xc0(r1)
    opword 0xE1C100B8
    addi r11, r1, 0xb0
    lfd f14, 0xb0(r1)
    bl _restgpr_20
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}

// ----------------------------------------------------------------------------
// fn_801BC544
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BC544() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    opword 0xF3E100D8
    stfd f30, 0xc0(r1)
    opword 0xF3C100C8
    stfd f29, 0xb0(r1)
    opword 0xF3A100B8
    stfd f28, 0xa0(r1)
    opword 0xF38100A8
    stfd f27, 0x90(r1)
    opword 0xF3610098
    stfd f26, 0x80(r1)
    opword 0xF3410088
    stfd f25, 0x70(r1)
    opword 0xF3210078
    stfd f24, 0x60(r1)
    opword 0xF3010068
    stfd f23, 0x50(r1)
    opword 0xF2E10058
    stfd f22, 0x40(r1)
    opword 0xF2C10048
    addi r11, r1, 0x40
    bl _savegpr_23
    lis r0, 0x4330
    fmr f26, f1
    cmpwi r6, 0x1
    stw r0, 0x8(r1)
    mr r24, r3
    mr r25, r4
    stw r0, 0x10(r1)
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r8
    mr r30, r9
    mr r31, r10
    blt lbl_801BC82C
    lfs f31, 0x0(r8)
    lfs f0, lbl_804A19D0
    fabs f1, f31
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_801BC5FC
    b lbl_801BC600
lbl_801BC5FC:
    fmr f31, f0
lbl_801BC600:
    lfs f30, 0x10(r8)
    lfs f0, lbl_804A19D0
    fabs f1, f30
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_801BC61C
    b lbl_801BC620
lbl_801BC61C:
    fmr f30, f0
lbl_801BC620:
    rlwinm. r0, r7, 0, 6, 6
    beq lbl_801BC630
    fmr f29, f31
    b lbl_801BC650
lbl_801BC630:
    lfs f29, 0x14(r8)
    lfs f0, lbl_804A19D0
    fabs f1, f29
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_801BC64C
    b lbl_801BC650
lbl_801BC64C:
    fmr f29, f0
lbl_801BC650:
    rlwinm. r0, r7, 0, 13, 13
    lfs f28, lbl_804A19B0
    beq lbl_801BC664
    lfs f27, 0x8(r8)
    b lbl_801BC6AC
lbl_801BC664:
    lis r3, 0x3
    lwz r5, 0xec(r4)
    addi r0, r3, 0x43fd
    lfd f4, lbl_804A19C0
    mullw r3, r5, r0
    lfs f2, lbl_804A19A8
    lfs f1, lbl_804A19D4
    lfs f0, lbl_804A19B8
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r4)
    stw r0, 0xc(r1)
    lfd f3, 0x8(r1)
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fmuls f1, f1, f2
    fmuls f27, f0, f1
lbl_801BC6AC:
    rlwinm. r0, r7, 0, 14, 14
    beq lbl_801BC7E8
    lfs f1, 0xc(r8)
    lfs f0, 0x8(r8)
    lfd f2, lbl_804A19D8
    fsubs f1, f1, f0
    bl fmod
    frsp f1, f1
    lfs f0, lbl_804A19E0
    fcmpo cr0, f1, f0
    blt lbl_801BC6F0
    lfs f0, lbl_804A19E4
    fcmpo cr0, f1, f0
    bgt lbl_801BC6F0
    lhz r3, 0x32(r25)
    cmplwi r3, 0x1
    bne lbl_801BC718
lbl_801BC6F0:
    lhz r0, 0x32(r25)
    lfs f3, 0xc(r29)
    stw r0, 0x14(r1)
    lfs f2, 0x8(r29)
    lfd f1, lbl_804A19C0
    lfd f0, 0x10(r1)
    fsubs f2, f3, f2
    fsubs f0, f0, f1
    fdivs f22, f2, f0
    b lbl_801BC740
lbl_801BC718:
    subi r0, r3, 0x1
    lfs f2, 0xc(r29)
    xoris r0, r0, 0x8000
    lfs f0, 0x8(r29)
    stw r0, 0xc(r1)
    fsubs f2, f2, f0
    lfd f1, lbl_804A19C8
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fdivs f22, f2, f0
lbl_801BC740:
    lfd f23, lbl_804A19C8
    li r23, 0x0
    lfs f24, lbl_804A19E8
    lfs f25, lbl_804A19B8
    b lbl_801BC7DC
lbl_801BC754:
    cmpwi r27, 0x1
    bgt lbl_801BC764
    lfs f8, lbl_804A19B0
    b lbl_801BC798
lbl_801BC764:
    subi r0, r27, 0x1
    xoris r3, r23, 0x8000
    xoris r0, r0, 0x8000
    stw r3, 0x14(r1)
    stw r0, 0xc(r1)
    lfd f1, 0x10(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f1, f23
    fsubs f0, f0, f23
    fdivs f0, f1, f0
    fsubs f0, f0, f24
    fmuls f0, f30, f0
    fmuls f8, f25, f0
lbl_801BC798:
    fmr f1, f26
    mr r3, r24
    fmr f2, f31
    mr r4, r25
    fmr f3, f30
    mr r5, r26
    fmr f4, f29
    mr r6, r27
    fmr f5, f28
    mr r7, r28
    fmr f6, f22
    mr r8, r29
    fmr f7, f27
    mr r9, r30
    mr r10, r31
    bl fn_801BC0E4
    addi r23, r23, 0x1
lbl_801BC7DC:
    cmpw r23, r27
    blt lbl_801BC754
    b lbl_801BC82C
lbl_801BC7E8:
    fmr f1, f26
    lfs f8, lbl_804A19B0
    fmr f2, f31
    mr r3, r24
    fmr f3, f30
    mr r4, r25
    fmr f4, f29
    mr r5, r26
    fmr f5, f28
    mr r6, r27
    fmr f6, f28
    mr r7, r28
    fmr f7, f27
    mr r8, r29
    mr r9, r30
    mr r10, r31
    bl fn_801BC0E4
lbl_801BC82C:
    opword 0xE3E100D8
    lfd f31, 0xd0(r1)
    opword 0xE3C100C8
    lfd f30, 0xc0(r1)
    opword 0xE3A100B8
    lfd f29, 0xb0(r1)
    opword 0xE38100A8
    lfd f28, 0xa0(r1)
    opword 0xE3610098
    lfd f27, 0x90(r1)
    opword 0xE3410088
    lfd f26, 0x80(r1)
    opword 0xE3210078
    lfd f25, 0x70(r1)
    opword 0xE3010068
    lfd f24, 0x60(r1)
    opword 0xE2E10058
    lfd f23, 0x50(r1)
    opword 0xE2C10048
    addi r11, r1, 0x40
    lfd f22, 0x40(r1)
    bl _restgpr_23
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// ----------------------------------------------------------------------------
// fn_801BC894
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BC894() {
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    stfd f31, 0x1d0(r1)
    opword 0xF3E101D8
    stfd f30, 0x1c0(r1)
    opword 0xF3C101C8
    stfd f29, 0x1b0(r1)
    opword 0xF3A101B8
    stfd f28, 0x1a0(r1)
    opword 0xF38101A8
    stfd f27, 0x190(r1)
    opword 0xF3610198
    stfd f26, 0x180(r1)
    opword 0xF3410188
    stfd f25, 0x170(r1)
    opword 0xF3210178
    stfd f24, 0x160(r1)
    opword 0xF3010168
    stfd f23, 0x150(r1)
    opword 0xF2E10158
    stfd f22, 0x140(r1)
    opword 0xF2C10148
    stfd f21, 0x130(r1)
    opword 0xF2A10138
    stfd f20, 0x120(r1)
    opword 0xF2810128
    stfd f19, 0x110(r1)
    opword 0xF2610118
    stfd f18, 0x100(r1)
    opword 0xF2410108
    stfd f17, 0xf0(r1)
    opword 0xF22100F8
    stfd f16, 0xe0(r1)
    opword 0xF20100E8
    stfd f15, 0xd0(r1)
    opword 0xF1E100D8
    stfd f14, 0xc0(r1)
    opword 0xF1C100C8
    addi r11, r1, 0xc0
    bl _savegpr_20
    lis r0, 0x4330
    fmr f31, f1
    cmpwi r6, 0x1
    stw r0, 0x70(r1)
    mr r20, r3
    mr r21, r4
    stw r0, 0x78(r1)
    mr r22, r5
    mr r23, r6
    mr r24, r8
    mr r25, r9
    mr r26, r10
    blt lbl_801BCE28
    lfs f19, 0x0(r8)
    lfs f0, lbl_804A19F0
    fabs f1, f19
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_801BC988
    b lbl_801BC98C
lbl_801BC988:
    fmr f19, f0
lbl_801BC98C:
    lfs f21, 0x10(r8)
    lfs f0, lbl_804A19F0
    fabs f1, f21
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_801BC9A8
    b lbl_801BC9AC
lbl_801BC9A8:
    fmr f21, f0
lbl_801BC9AC:
    rlwinm. r0, r7, 0, 6, 6
    beq lbl_801BC9BC
    fmr f18, f19
    b lbl_801BC9DC
lbl_801BC9BC:
    lfs f18, 0x14(r8)
    lfs f0, lbl_804A19F0
    fabs f1, f18
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_801BC9D8
    b lbl_801BC9DC
lbl_801BC9D8:
    fmr f18, f0
lbl_801BC9DC:
    lfs f17, lbl_804A19F4
    rlwinm. r0, r7, 0, 13, 13
    fmr f16, f17
    beq lbl_801BC9F4
    lfs f15, 0x8(r8)
    b lbl_801BCA3C
lbl_801BC9F4:
    lis r3, 0x3
    lwz r5, 0xec(r4)
    addi r0, r3, 0x43fd
    lfd f4, lbl_804A1A28
    mullw r3, r5, r0
    lfs f2, lbl_804A19F8
    lfs f1, lbl_804A1A00
    lfs f0, lbl_804A19FC
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r4)
    stw r0, 0x74(r1)
    lfd f3, 0x70(r1)
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fmuls f1, f1, f2
    fmuls f15, f0, f1
lbl_801BCA3C:
    rlwinm. r28, r7, 0, 14, 14
    beq lbl_801BCAD0
    lfs f1, 0xc(r8)
    lfs f0, 0x8(r8)
    lfd f2, lbl_804A1A08
    fsubs f1, f1, f0
    bl fmod
    frsp f1, f1
    lfs f0, lbl_804A1A10
    fcmpo cr0, f1, f0
    blt lbl_801BCA80
    lfs f0, lbl_804A1A14
    fcmpo cr0, f1, f0
    bgt lbl_801BCA80
    lhz r3, 0x32(r21)
    cmplwi r3, 0x1
    bne lbl_801BCAA8
lbl_801BCA80:
    lhz r0, 0x32(r21)
    lfs f3, 0xc(r24)
    stw r0, 0x7c(r1)
    lfs f2, 0x8(r24)
    lfd f1, lbl_804A1A28
    lfd f0, 0x78(r1)
    fsubs f2, f3, f2
    fsubs f0, f0, f1
    fdivs f16, f2, f0
    b lbl_801BCAD0
lbl_801BCAA8:
    subi r0, r3, 0x1
    lfs f2, 0xc(r24)
    xoris r0, r0, 0x8000
    lfs f0, 0x8(r24)
    stw r0, 0x74(r1)
    fsubs f2, f2, f0
    lfd f1, lbl_804A1A30
    lfd f0, 0x70(r1)
    fsubs f0, f0, f1
    fdivs f16, f2, f0
lbl_801BCAD0:
    cmpwi r28, 0x0
    mr r29, r23
    beq lbl_801BCAE0
    mullw r29, r23, r23
lbl_801BCAE0:
    lfs f0, lbl_804A1A20
    lis r30, 0x3
    lfs f14, lbl_804A19F4
    addi r31, r30, 0x43fd
    stfd f0, 0x80(r1)
    li r27, 0x0
    lfs f0, lbl_804A1A24
    fmr f28, f14
    fmr f29, f14
    lfd f23, lbl_804A1A28
    lfs f24, lbl_804A19F8
    lfs f25, lbl_804A1A00
    lfs f26, lbl_804A19FC
    lfs f22, lbl_804A1A18
    lfs f27, lbl_804A1A1C
    lfd f30, lbl_804A1A30
    stfd f0, 0x88(r1)
    b lbl_801BCE20
lbl_801BCB28:
    lfs f0, 0x4(r24)
    cmpwi r28, 0x0
    fsubs f1, f22, f0
    fadds f0, f22, f0
    fdivs f20, f1, f0
    bne lbl_801BCBA8
    lwz r0, 0xec(r21)
    addi r4, r30, 0x43fd
    mullw r3, r0, r4
    addis r3, r3, 0x27
    subi r0, r3, 0x613d
    mullw r3, r0, r4
    stw r0, 0xec(r21)
    srwi r0, r0, 16
    stw r0, 0x7c(r1)
    lfs f2, 0xc(r24)
    lfd f0, 0x78(r1)
    addis r3, r3, 0x27
    fsubs f0, f0, f23
    subi r3, r3, 0x613d
    lfs f1, 0x8(r24)
    srwi r0, r3, 16
    stw r0, 0x74(r1)
    fdivs f3, f0, f24
    lfd f0, 0x70(r1)
    stw r3, 0xec(r21)
    fsubs f0, f0, f23
    fsubs f1, f2, f1
    fdivs f0, f0, f24
    fmuls f0, f25, f0
    fmuls f17, f1, f3
    fmuls f14, f26, f0
lbl_801BCBA8:
    fadds f1, f15, f17
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    bl fn_801B9C64
    fmr f1, f14
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_801B9C64
    lfs f1, 0x8(r1)
    fneg f0, f20
    lfs f2, 0xc(r1)
    addi r3, r1, 0x48
    fmuls f3, f20, f1
    lfs f4, 0x14(r1)
    fmuls f0, f0, f1
    lfs f1, 0x10(r1)
    fmuls f2, f21, f2
    fmuls f3, f4, f3
    fmuls f0, f1, f0
    mr r4, r3
    stfs f2, 0x64(r1)
    fadds f2, f27, f20
    fadds f3, f4, f3
    fsubs f0, f0, f1
    lwz r0, 0x64(r1)
    fmuls f1, f19, f3
    fmuls f0, f18, f0
    stw r0, 0x4c(r1)
    fdivs f1, f1, f2
    fdivs f0, f0, f2
    stfs f1, 0x60(r1)
    lwz r0, 0x60(r1)
    stw r0, 0x48(r1)
    stfs f0, 0x68(r1)
    lwz r0, 0x68(r1)
    stw r0, 0x50(r1)
    bl fn_801B9B90
    lfs f1, 0x68(r1)
    addi r3, r1, 0x3c
    lfs f0, 0x60(r1)
    mr r4, r3
    stfs f28, 0x40(r1)
    stfs f0, 0x3c(r1)
    stfs f1, 0x44(r1)
    bl fn_801B9B90
    fcmpu cr0, f29, f20
    bne lbl_801BCC9C
    fneg f0, f18
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    fmuls f4, f19, f1
    lfs f3, 0x14(r1)
    fmuls f1, f0, f1
    lfs f0, 0x10(r1)
    fmuls f2, f21, f2
    fmuls f3, f3, f4
    fmuls f0, f0, f1
    stfs f2, 0x34(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x38(r1)
    b lbl_801BCCE4
lbl_801BCC9C:
    fneg f0, f20
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    fadds f3, f27, f20
    fmuls f5, f20, f1
    lfs f4, 0x14(r1)
    fmuls f1, f0, f1
    lfs f0, 0x10(r1)
    fmuls f2, f21, f2
    fmuls f4, f4, f5
    fmuls f0, f0, f1
    stfs f2, 0x34(r1)
    fmuls f1, f19, f4
    fmuls f0, f18, f0
    fdivs f1, f1, f3
    fdivs f0, f0, f3
    stfs f1, 0x30(r1)
    stfs f0, 0x38(r1)
lbl_801BCCE4:
    addi r3, r1, 0x30
    mr r4, r3
    bl fn_801B9B90
    mr r3, r20
    mr r5, r21
    addi r4, r1, 0x54
    addi r6, r1, 0x60
    addi r7, r1, 0x30
    addi r8, r1, 0x48
    addi r9, r1, 0x3c
    bl fn_801BA248
    lwz r0, 0xec(r21)
    fmr f1, f31
    mr r3, r20
    mr r4, r25
    mullw r6, r0, r31
    mr r5, r21
    addis r6, r6, 0x27
    subi r6, r6, 0x613d
    srwi r0, r6, 16
    stw r6, 0xec(r21)
    stw r0, 0x7c(r1)
    lwz r10, 0x54(r1)
    lfd f0, 0x78(r1)
    lwz r9, 0x58(r1)
    fsubs f0, f0, f23
    lwz r8, 0x5c(r1)
    lwz r7, 0x60(r1)
    lwz r6, 0x64(r1)
    fdivs f20, f0, f24
    lwz r0, 0x68(r1)
    stw r10, 0x18(r1)
    stw r9, 0x1c(r1)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r6, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_801BA710
    lbz r0, 0x67(r21)
    mr r4, r3
    lwz r12, 0x1c(r22)
    mr r3, r22
    extsb r0, r0
    mr r7, r26
    xoris r0, r0, 0x8000
    lwz r12, 0x14(r12)
    stw r0, 0x74(r1)
    clrlwi r4, r4, 16
    addi r5, r1, 0x24
    addi r6, r1, 0x18
    lfd f0, 0x70(r1)
    addi r8, r21, 0xfc
    lwz r9, 0xf8(r21)
    fsubs f1, f0, f30
    lfd f0, 0x80(r1)
    lhz r10, 0xe8(r21)
    fmuls f0, f0, f1
    fmuls f0, f0, f20
    fadds f1, f27, f0
    mtctr r12
    bctrl
    cmpwi r28, 0x0
    beq lbl_801BCE1C
    addi r3, r27, 0x1
    divw r0, r3, r23
    mullw r0, r0, r23
    subf. r0, r0, r3
    bne lbl_801BCE00
    fadds f17, f17, f16
    lfs f14, lbl_804A19F4
    b lbl_801BCE1C
lbl_801BCE00:
    xoris r0, r23, 0x8000
    stw r0, 0x7c(r1)
    lfd f0, 0x78(r1)
    fsubs f1, f0, f30
    lfd f0, 0x88(r1)
    fdivs f0, f0, f1
    fadds f14, f14, f0
lbl_801BCE1C:
    addi r27, r27, 0x1
lbl_801BCE20:
    cmpw r27, r29
    blt lbl_801BCB28
lbl_801BCE28:
    opword 0xE3E101D8
    lfd f31, 0x1d0(r1)
    opword 0xE3C101C8
    lfd f30, 0x1c0(r1)
    opword 0xE3A101B8
    lfd f29, 0x1b0(r1)
    opword 0xE38101A8
    lfd f28, 0x1a0(r1)
    opword 0xE3610198
    lfd f27, 0x190(r1)
    opword 0xE3410188
    lfd f26, 0x180(r1)
    opword 0xE3210178
    lfd f25, 0x170(r1)
    opword 0xE3010168
    lfd f24, 0x160(r1)
    opword 0xE2E10158
    lfd f23, 0x150(r1)
    opword 0xE2C10148
    lfd f22, 0x140(r1)
    opword 0xE2A10138
    lfd f21, 0x130(r1)
    opword 0xE2810128
    lfd f20, 0x120(r1)
    opword 0xE2610118
    lfd f19, 0x110(r1)
    opword 0xE2410108
    lfd f18, 0x100(r1)
    opword 0xE22100F8
    lfd f17, 0xf0(r1)
    opword 0xE20100E8
    lfd f16, 0xe0(r1)
    opword 0xE1E100D8
    lfd f15, 0xd0(r1)
    opword 0xE1C100C8
    addi r11, r1, 0xc0
    lfd f14, 0xc0(r1)
    bl _restgpr_20
    lwz r0, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

// ----------------------------------------------------------------------------
// fn_801BCED0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BCED0() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    addi r11, r1, 0x80
    bl _savegpr_25
    lis r0, 0x4330
    fmr f31, f1
    mr r27, r5
    stw r0, 0x48(r1)
    mr r25, r3
    mr r26, r4
    stw r0, 0x50(r1)
    mr r28, r6
    mr r29, r7
    mr r30, r8
    mr r31, r9
    mr r3, r27
    mr r4, r27
    bl fn_801B9B90
    lwz r3, 0x0(r26)
    lwz r0, 0x4(r26)
    lfs f0, lbl_804A1A38
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    lwz r0, 0x8(r26)
    opword 0xE0410038
    stw r0, 0x40(r1)
    opword 0x104200B2
    lfs f1, 0x40(r1)
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801BD014
    lis r3, 0x3
    lwz r0, 0xec(r28)
    addi r4, r3, 0x43fd
    lfd f4, lbl_804A1A50
    mullw r3, r0, r4
    lfs f3, lbl_804A1A3C
    lfs f2, lbl_804A1A40
    lfs f1, lbl_804A1A44
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r28)
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f4
    fdivs f0, f0, f3
    fmuls f0, f2, f0
    fsubs f0, f0, f1
    stfs f0, 0x38(r1)
    lwz r0, 0xec(r28)
    mullw r3, r0, r4
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r28)
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f0, f0, f4
    fdivs f0, f0, f3
    fmuls f0, f2, f0
    fsubs f0, f0, f1
    stfs f0, 0x3c(r1)
    lwz r0, 0xec(r28)
    mullw r3, r0, r4
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r28)
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f4
    fdivs f0, f0, f3
    fmuls f0, f2, f0
    fsubs f0, f0, f1
    stfs f0, 0x40(r1)
lbl_801BD014:
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_801B9B90
    lwz r3, 0x0(r26)
    lwz r0, 0x4(r26)
    lfs f1, lbl_804A1A48
    stw r3, 0x2c(r1)
    lfs f0, lbl_804A1A38
    stw r0, 0x30(r1)
    lwz r0, 0x8(r26)
    stfs f1, 0x30(r1)
    opword 0xE041002C
    stw r0, 0x34(r1)
    opword 0x104200B2
    lfs f1, 0x34(r1)
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801BD0E4
    lis r3, 0x3
    lwz r0, 0xec(r28)
    addi r4, r3, 0x43fd
    lfd f4, lbl_804A1A50
    mullw r3, r0, r4
    lfs f3, lbl_804A1A3C
    lfs f2, lbl_804A1A40
    lfs f1, lbl_804A1A44
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r28)
    stw r0, 0x54(r1)
    lfd f0, 0x50(r1)
    fsubs f0, f0, f4
    fdivs f0, f0, f3
    fmuls f0, f2, f0
    fsubs f0, f0, f1
    stfs f0, 0x2c(r1)
    lwz r0, 0xec(r28)
    mullw r3, r0, r4
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r28)
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f4
    fdivs f0, f0, f3
    fmuls f0, f2, f0
    fsubs f0, f0, f1
    stfs f0, 0x34(r1)
lbl_801BD0E4:
    addi r3, r1, 0x2c
    mr r4, r3
    bl fn_801B9B90
    mr r3, r25
    mr r5, r28
    mr r6, r26
    mr r7, r27
    addi r4, r1, 0x20
    addi r8, r1, 0x38
    addi r9, r1, 0x2c
    bl fn_801BA248
    lis r3, 0x3
    lwz r4, 0xec(r28)
    addi r0, r3, 0x43fd
    lfd f3, lbl_804A1A50
    mullw r6, r4, r0
    lfs f0, lbl_804A1A3C
    fmr f1, f31
    mr r3, r25
    mr r4, r30
    mr r5, r28
    addis r6, r6, 0x27
    subi r6, r6, 0x613d
    srwi r0, r6, 16
    stw r6, 0xec(r28)
    stw r0, 0x54(r1)
    lwz r7, 0x20(r1)
    lfd f2, 0x50(r1)
    lwz r6, 0x24(r1)
    fsubs f2, f2, f3
    lwz r0, 0x28(r1)
    stw r7, 0x8(r1)
    fdivs f31, f2, f0
    stw r6, 0xc(r1)
    stw r0, 0x10(r1)
    lwz r6, 0x0(r26)
    lwz r0, 0x4(r26)
    stw r6, 0x14(r1)
    stw r0, 0x18(r1)
    lwz r0, 0x8(r26)
    stw r0, 0x1c(r1)
    bl fn_801BA710
    lbz r0, 0x67(r28)
    mr r4, r3
    lwz r12, 0x1c(r29)
    mr r3, r29
    extsb r0, r0
    lfd f3, lbl_804A1A58
    xoris r0, r0, 0x8000
    lfs f1, lbl_804A1A4C
    stw r0, 0x4c(r1)
    mr r7, r31
    lfs f0, lbl_804A1A44
    clrlwi r4, r4, 16
    lfd f2, 0x48(r1)
    addi r5, r1, 0x14
    lwz r12, 0x14(r12)
    addi r6, r1, 0x8
    fsubs f2, f2, f3
    addi r8, r28, 0xfc
    lwz r9, 0xf8(r28)
    lhz r10, 0xe8(r28)
    fmuls f1, f1, f2
    fmuls f1, f1, f31
    fadds f1, f0, f1
    mtctr r12
    bctrl
    opword 0xE3E10088
    addi r11, r1, 0x80
    lfd f31, 0x80(r1)
    bl _restgpr_25
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_801BD210
// ----------------------------------------------------------------------------
extern "C" asm void fn_801BD210() {
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    stfd f31, 0x220(r1)
    opword 0xF3E10228
    stfd f30, 0x210(r1)
    opword 0xF3C10218
    stfd f29, 0x200(r1)
    opword 0xF3A10208
    stfd f28, 0x1f0(r1)
    opword 0xF38101F8
    stfd f27, 0x1e0(r1)
    opword 0xF36101E8
    stfd f26, 0x1d0(r1)
    opword 0xF34101D8
    stfd f25, 0x1c0(r1)
    opword 0xF32101C8
    stfd f24, 0x1b0(r1)
    opword 0xF30101B8
    stfd f23, 0x1a0(r1)
    opword 0xF2E101A8
    stfd f22, 0x190(r1)
    opword 0xF2C10198
    stfd f21, 0x180(r1)
    opword 0xF2A10188
    stfd f20, 0x170(r1)
    opword 0xF2810178
    stfd f19, 0x160(r1)
    opword 0xF2610168
    stfd f18, 0x150(r1)
    opword 0xF2410158
    stfd f17, 0x140(r1)
    opword 0xF2210148
    stfd f16, 0x130(r1)
    opword 0xF2010138
    stfd f15, 0x120(r1)
    opword 0xF1E10128
    stfd f14, 0x110(r1)
    opword 0xF1C10118
    addi r11, r1, 0x110
    bl _savegpr_17
    lis r0, 0x4330
    fmr f23, f1
    cmpwi r6, 0x1
    stw r0, 0xb0(r1)
    mr r26, r3
    mr r27, r4
    stw r0, 0xb8(r1)
    mr r28, r5
    mr r29, r6
    mr r30, r9
    mr r31, r10
    blt lbl_801BEA50
    rlwinm. r0, r7, 0, 6, 6
    lfs f31, 0x0(r8)
    beq lbl_801BD2FC
    fmr f30, f31
    stfs f31, 0xc4(r1)
    b lbl_801BD308
lbl_801BD2FC:
    lfs f0, 0x4(r8)
    lfs f30, 0x8(r8)
    stfs f0, 0xc4(r1)
lbl_801BD308:
    lfs f0, lbl_804A1A60
    fcmpo cr0, f31, f0
    bge lbl_801BD318
    fmr f31, f0
lbl_801BD318:
    lfs f1, lbl_804A1A60
    lfs f0, 0xc4(r1)
    fcmpo cr0, f0, f1
    bge lbl_801BD32C
    stfs f1, 0xc4(r1)
lbl_801BD32C:
    lfs f0, lbl_804A1A60
    fcmpo cr0, f30, f0
    bge lbl_801BD33C
    fmr f30, f0
lbl_801BD33C:
    lfs f0, lbl_804A1A48
    lfs f1, 0xc(r8)
    fcmpu cr0, f0, f1
    bne lbl_801BD354
    lfs f29, lbl_804A1A60
    b lbl_801BD35C
lbl_801BD354:
    lfs f0, lbl_804A1A4C
    fmuls f29, f0, f1
lbl_801BD35C:
    lfs f27, 0x78(r4)
    lfs f0, lbl_804A1A64
    lfs f2, lbl_804A1A44
    fsubs f1, f27, f0
    lfs f0, lbl_804A1A68
    fsubs f28, f2, f29
    fabs f1, f1
    frsp f1, f1
    fcmpo cr0, f1, f0
    bge lbl_801BD388
    fsubs f27, f27, f0
lbl_801BD388:
    rlwinm. r0, r7, 0, 14, 14
    beq lbl_801BE140
    addi r0, r6, 0x1
    srwi r8, r6, 31
    xoris r3, r0, 0x8000
    lfd f1, lbl_804A1A58
    stw r3, 0xb4(r1)
    clrlwi r0, r6, 31
    xor r0, r0, r8
    subi r4, r6, 0x1
    lfd f0, 0xb0(r1)
    add r5, r8, r6
    srawi r5, r5, 1
    subf. r0, r8, r0
    fsubs f1, f0, f1
    lfs f0, lbl_804A1A40
    srwi r3, r4, 31
    addi r22, r5, 0x1
    add r0, r3, r4
    li r19, 0x0
    fdivs f29, f0, f1
    srawi r3, r0, 1
    addi r20, r3, 0x1
    bne lbl_801BD3EC
    li r19, 0x2
lbl_801BD3EC:
    lfs f0, 0xc4(r1)
    mullw r23, r6, r6
    lfs f21, lbl_804A1A48
    rlwinm r25, r7, 0, 7, 7
    fneg f22, f0
    lfd f25, lbl_804A1A58
    lfs f24, lbl_804A1A44
    lfd f20, lbl_804A1A50
    li r18, 0x1
    lfs f19, lbl_804A1A3C
    li r17, 0x1
    lfs f18, lbl_804A1A60
    li r21, 0x0
    lfs f17, lbl_804A1A6C
    lis r24, 0x3
    b lbl_801BD698
lbl_801BD42C:
    cmpwi r21, 0x0
    beq lbl_801BD4AC
    cmpwi r19, 0x2
    beq lbl_801BD46C
    bge lbl_801BD450
    cmpwi r19, 0x0
    beq lbl_801BD45C
    bge lbl_801BD464
    b lbl_801BD478
lbl_801BD450:
    cmpwi r19, 0x4
    bge lbl_801BD478
    b lbl_801BD474
lbl_801BD45C:
    subi r20, r20, 0x1
    b lbl_801BD478
lbl_801BD464:
    addi r22, r22, 0x1
    b lbl_801BD478
lbl_801BD46C:
    addi r20, r20, 0x1
    b lbl_801BD478
lbl_801BD474:
    subi r22, r22, 0x1
lbl_801BD478:
    subic. r17, r17, 0x1
    bgt lbl_801BD4AC
    addi r19, r19, 0x1
    cmpwi r19, 0x4
    bne lbl_801BD490
    li r19, 0x0
lbl_801BD490:
    srwi r3, r19, 31
    clrlwi r0, r19, 31
    xor r0, r0, r3
    subf. r0, r3, r0
    bne lbl_801BD4A8
    addi r18, r18, 0x1
lbl_801BD4A8:
    mr r17, r18
lbl_801BD4AC:
    xoris r3, r22, 0x8000
    xoris r0, r20, 0x8000
    stw r3, 0xbc(r1)
    stw r0, 0xb4(r1)
    lfd f1, 0xb8(r1)
    lfd f0, 0xb0(r1)
    fsubs f1, f1, f25
    fsubs f0, f0, f25
    fmuls f1, f1, f29
    fmuls f0, f0, f29
    fsubs f2, f1, f24
    fsubs f3, f0, f24
    fabs f1, f2
    fabs f0, f3
    fmuls f4, f2, f31
    frsp f1, f1
    frsp f0, f0
    fmuls f5, f3, f30
    fcmpo cr0, f1, f0
    ble lbl_801BD500
    b lbl_801BD504
lbl_801BD500:
    fmr f1, f0
lbl_801BD504:
    fabs f0, f3
    fabs f2, f2
    fsubs f3, f24, f1
    frsp f0, f0
    frsp f1, f2
    fcmpo cr0, f1, f0
    ble lbl_801BD524
    b lbl_801BD528
lbl_801BD524:
    fmr f1, f0
lbl_801BD528:
    fcmpu cr0, f21, f28
    stfs f4, 0xa4(r1)
    stfs f22, 0xa8(r1)
    stfs f5, 0xac(r1)
    beq lbl_801BD5C8
    cmpwi r25, 0x0
    beq lbl_801BD584
    lwz r3, 0xec(r27)
    addi r0, r24, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f20
    fdivs f0, f0, f19
    fmuls f0, f0, f0
    fmuls f0, f0, f28
    fmuls f0, f3, f0
    fsubs f2, f24, f0
    b lbl_801BD5BC
lbl_801BD584:
    lwz r3, 0xec(r27)
    addi r0, r24, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f20
    fdivs f0, f0, f19
    fmuls f0, f28, f0
    fmuls f0, f3, f0
    fsubs f2, f24, f0
lbl_801BD5BC:
    lfs f0, 0xa8(r1)
    fmuls f0, f0, f2
    stfs f0, 0xa8(r1)
lbl_801BD5C8:
    fcmpu cr0, f21, f27
    beq lbl_801BD5F8
    lfs f0, 0xa4(r1)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f18
    bge lbl_801BD608
    lfs f0, 0xac(r1)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f18
    bge lbl_801BD608
lbl_801BD5F8:
    stfs f21, 0x98(r1)
    stfs f17, 0x9c(r1)
    stfs f21, 0xa0(r1)
    b lbl_801BD670
lbl_801BD608:
    fmuls f1, f1, f27
    bl tan
    frsp f4, f1
    lfs f2, 0xa4(r1)
    lfs f0, 0xac(r1)
    fmuls f1, f2, f2
    stfs f2, 0x98(r1)
    fres f26, f4
    fmuls f0, f0, f0
    opword 0x107AD02A
    opword 0x105A06B2
    fadds f14, f1, f0
    opword 0x134418BC
    fcmpo cr0, f14, f21
    opword 0x4C401382
    bne lbl_801BD650
    fmr f0, f21
    b lbl_801BD65C
lbl_801BD650:
    fmr f1, f14
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f14, f1
lbl_801BD65C:
    fneg f1, f0
    lfs f0, 0xac(r1)
    stfs f0, 0xa0(r1)
    fmuls f0, f26, f1
    stfs f0, 0x9c(r1)
lbl_801BD670:
    fmr f1, f23
    mr r3, r26
    mr r6, r27
    mr r7, r28
    mr r8, r30
    mr r9, r31
    addi r4, r1, 0xa4
    addi r5, r1, 0x98
    bl fn_801BCED0
    addi r21, r21, 0x1
lbl_801BD698:
    cmpw r21, r23
    blt lbl_801BD42C
    fneg f0, f31
    lfs f24, lbl_804A1A48
    fneg f25, f30
    lfd f22, lbl_804A1A58
    lfs f21, lbl_804A1A44
    li r21, 0x1
    stfd f0, 0xc8(r1)
    lis r24, 0x3
    lfd f20, lbl_804A1A50
    lfs f19, lbl_804A1A3C
    lfs f18, lbl_804A1A60
    lfs f17, lbl_804A1A6C
    b lbl_801BDE6C
lbl_801BD6D4:
    xoris r0, r21, 0x8000
    li r22, 0x1
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    fmuls f0, f0, f29
    fsubs f0, f0, f21
    stfs f0, 0xc0(r1)
    frsp f0, f0
    lfs f1, 0xc0(r1)
    fabs f2, f0
    lfs f0, 0xc4(r1)
    fmuls f26, f1, f0
    frsp f14, f2
    b lbl_801BD8CC
lbl_801BD710:
    xoris r0, r22, 0x8000
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f22
    fmuls f0, f0, f29
    fsubs f1, f0, f21
    fabs f0, f1
    fmuls f2, f1, f31
    frsp f0, f0
    fcmpo cr0, f0, f14
    ble lbl_801BD740
    b lbl_801BD744
lbl_801BD740:
    fmr f0, f14
lbl_801BD744:
    fabs f1, f1
    fsubs f3, f21, f0
    frsp f1, f1
    fcmpo cr0, f1, f14
    ble lbl_801BD75C
    b lbl_801BD760
lbl_801BD75C:
    fmr f1, f14
lbl_801BD760:
    fcmpu cr0, f24, f28
    stfs f2, 0x8c(r1)
    stfs f26, 0x90(r1)
    stfs f25, 0x94(r1)
    beq lbl_801BD800
    cmpwi r25, 0x0
    beq lbl_801BD7BC
    lwz r3, 0xec(r27)
    addi r0, r24, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f20
    fdivs f0, f0, f19
    fmuls f0, f0, f0
    fmuls f0, f0, f28
    fmuls f0, f3, f0
    fsubs f2, f21, f0
    b lbl_801BD7F4
lbl_801BD7BC:
    lwz r3, 0xec(r27)
    addi r0, r24, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f20
    fdivs f0, f0, f19
    fmuls f0, f28, f0
    fmuls f0, f3, f0
    fsubs f2, f21, f0
lbl_801BD7F4:
    lfs f0, 0x94(r1)
    fmuls f0, f0, f2
    stfs f0, 0x94(r1)
lbl_801BD800:
    fcmpu cr0, f24, f27
    beq lbl_801BD830
    lfs f0, 0x8c(r1)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f18
    bge lbl_801BD840
    lfs f0, 0x90(r1)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f18
    bge lbl_801BD840
lbl_801BD830:
    stfs f24, 0x80(r1)
    stfs f24, 0x84(r1)
    stfs f17, 0x88(r1)
    b lbl_801BD8A4
lbl_801BD840:
    fmuls f1, f1, f27
    bl tan
    frsp f4, f1
    lfs f2, 0x8c(r1)
    lfs f0, 0x90(r1)
    fmuls f1, f2, f2
    stfs f2, 0x80(r1)
    fres f16, f4
    stfs f0, 0x84(r1)
    fmuls f0, f0, f0
    opword 0x1070802A
    opword 0x10500432
    fadds f15, f1, f0
    opword 0x120418BC
    fcmpo cr0, f15, f24
    opword 0x4C401382
    bne lbl_801BD88C
    fmr f0, f24
    b lbl_801BD898
lbl_801BD88C:
    fmr f1, f15
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f15, f1
lbl_801BD898:
    fneg f0, f0
    fmuls f0, f16, f0
    stfs f0, 0x88(r1)
lbl_801BD8A4:
    fmr f1, f23
    mr r3, r26
    mr r6, r27
    mr r7, r28
    mr r8, r30
    mr r9, r31
    addi r4, r1, 0x8c
    addi r5, r1, 0x80
    bl fn_801BCED0
    addi r22, r22, 0x1
lbl_801BD8CC:
    cmpw r22, r29
    ble lbl_801BD710
    lfs f0, 0xc0(r1)
    li r22, 0x1
    fabs f0, f0
    frsp f14, f0
    b lbl_801BDAA8
lbl_801BD8E8:
    xoris r0, r22, 0x8000
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    fmuls f0, f0, f29
    fsubs f1, f0, f21
    fabs f0, f1
    fmuls f2, f1, f30
    frsp f0, f0
    fcmpo cr0, f0, f14
    ble lbl_801BD918
    b lbl_801BD91C
lbl_801BD918:
    fmr f0, f14
lbl_801BD91C:
    fabs f1, f1
    fsubs f3, f21, f0
    frsp f1, f1
    fcmpo cr0, f1, f14
    ble lbl_801BD934
    b lbl_801BD938
lbl_801BD934:
    fmr f1, f14
lbl_801BD938:
    fcmpu cr0, f24, f28
    stfs f31, 0x74(r1)
    stfs f26, 0x78(r1)
    stfs f2, 0x7c(r1)
    beq lbl_801BD9D8
    cmpwi r25, 0x0
    beq lbl_801BD994
    lwz r3, 0xec(r27)
    addi r0, r24, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f20
    fdivs f0, f0, f19
    fmuls f0, f0, f0
    fmuls f0, f0, f28
    fmuls f0, f3, f0
    fsubs f2, f21, f0
    b lbl_801BD9CC
lbl_801BD994:
    lwz r3, 0xec(r27)
    addi r0, r24, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f20
    fdivs f0, f0, f19
    fmuls f0, f28, f0
    fmuls f0, f3, f0
    fsubs f2, f21, f0
lbl_801BD9CC:
    lfs f0, 0x74(r1)
    fmuls f0, f0, f2
    stfs f0, 0x74(r1)
lbl_801BD9D8:
    fcmpu cr0, f24, f27
    beq lbl_801BDA08
    lfs f0, 0x78(r1)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f18
    bge lbl_801BDA18
    lfs f0, 0x7c(r1)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f18
    bge lbl_801BDA18
lbl_801BDA08:
    stfs f21, 0x68(r1)
    stfs f24, 0x6c(r1)
    stfs f24, 0x70(r1)
    b lbl_801BDA80
lbl_801BDA18:
    fmuls f1, f1, f27
    bl tan
    frsp f4, f1
    lfs f1, 0x78(r1)
    lfs f0, 0x7c(r1)
    fmuls f1, f1, f1
    fres f15, f4
    fmuls f0, f0, f0
    opword 0x106F782A
    opword 0x104F03F2
    fadds f16, f1, f0
    opword 0x11E418BC
    fcmpo cr0, f16, f24
    opword 0x4C401382
    bne lbl_801BDA5C
    fmr f0, f24
    b lbl_801BDA68
lbl_801BDA5C:
    fmr f1, f16
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f16, f1
lbl_801BDA68:
    fmuls f2, f15, f0
    lfs f1, 0x78(r1)
    lfs f0, 0x7c(r1)
    stfs f1, 0x6c(r1)
    stfs f2, 0x68(r1)
    stfs f0, 0x70(r1)
lbl_801BDA80:
    fmr f1, f23
    mr r3, r26
    mr r6, r27
    mr r7, r28
    mr r8, r30
    mr r9, r31
    addi r4, r1, 0x74
    addi r5, r1, 0x68
    bl fn_801BCED0
    addi r22, r22, 0x1
lbl_801BDAA8:
    cmpw r22, r29
    ble lbl_801BD8E8
    lfs f0, 0xc0(r1)
    mr r22, r29
    fabs f0, f0
    frsp f14, f0
    b lbl_801BDC7C
lbl_801BDAC4:
    xoris r0, r22, 0x8000
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f22
    fmuls f0, f0, f29
    fsubs f1, f0, f21
    fabs f0, f1
    fmuls f2, f1, f31
    frsp f0, f0
    fcmpo cr0, f0, f14
    ble lbl_801BDAF4
    b lbl_801BDAF8
lbl_801BDAF4:
    fmr f0, f14
lbl_801BDAF8:
    fabs f1, f1
    fsubs f3, f21, f0
    frsp f1, f1
    fcmpo cr0, f1, f14
    ble lbl_801BDB10
    b lbl_801BDB14
lbl_801BDB10:
    fmr f1, f14
lbl_801BDB14:
    fcmpu cr0, f24, f28
    stfs f2, 0x5c(r1)
    stfs f26, 0x60(r1)
    stfs f30, 0x64(r1)
    beq lbl_801BDBB4
    cmpwi r25, 0x0
    beq lbl_801BDB70
    lwz r3, 0xec(r27)
    addi r0, r24, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f20
    fdivs f0, f0, f19
    fmuls f0, f0, f0
    fmuls f0, f0, f28
    fmuls f0, f3, f0
    fsubs f2, f21, f0
    b lbl_801BDBA8
lbl_801BDB70:
    lwz r3, 0xec(r27)
    addi r0, r24, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f20
    fdivs f0, f0, f19
    fmuls f0, f28, f0
    fmuls f0, f3, f0
    fsubs f2, f21, f0
lbl_801BDBA8:
    lfs f0, 0x64(r1)
    fmuls f0, f0, f2
    stfs f0, 0x64(r1)
lbl_801BDBB4:
    fcmpu cr0, f24, f27
    beq lbl_801BDBE4
    lfs f0, 0x5c(r1)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f18
    bge lbl_801BDBF4
    lfs f0, 0x60(r1)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f18
    bge lbl_801BDBF4
lbl_801BDBE4:
    stfs f24, 0x50(r1)
    stfs f24, 0x54(r1)
    stfs f21, 0x58(r1)
    b lbl_801BDC54
lbl_801BDBF4:
    fmuls f1, f1, f27
    bl tan
    frsp f4, f1
    lfs f2, 0x5c(r1)
    lfs f0, 0x60(r1)
    fmuls f1, f2, f2
    stfs f2, 0x50(r1)
    fres f15, f4
    stfs f0, 0x54(r1)
    fmuls f0, f0, f0
    opword 0x106F782A
    opword 0x104F03F2
    fadds f16, f1, f0
    opword 0x11E418BC
    fcmpo cr0, f16, f24
    opword 0x4C401382
    bne lbl_801BDC40
    fmr f0, f24
    b lbl_801BDC4C
lbl_801BDC40:
    fmr f1, f16
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f16, f1
lbl_801BDC4C:
    fmuls f0, f15, f0
    stfs f0, 0x58(r1)
lbl_801BDC54:
    fmr f1, f23
    mr r3, r26
    mr r6, r27
    mr r7, r28
    mr r8, r30
    mr r9, r31
    addi r4, r1, 0x5c
    addi r5, r1, 0x50
    bl fn_801BCED0
    subi r22, r22, 0x1
lbl_801BDC7C:
    cmpwi r22, 0x1
    bge lbl_801BDAC4
    lfs f0, 0xc0(r1)
    mr r22, r29
    fabs f0, f0
    frsp f14, f0
    b lbl_801BDE60
lbl_801BDC98:
    xoris r0, r22, 0x8000
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f22
    fmuls f0, f0, f29
    fsubs f1, f0, f21
    fabs f0, f1
    fmuls f2, f1, f30
    frsp f0, f0
    fcmpo cr0, f0, f14
    ble lbl_801BDCC8
    b lbl_801BDCCC
lbl_801BDCC8:
    fmr f0, f14
lbl_801BDCCC:
    fabs f1, f1
    fsubs f3, f21, f0
    frsp f1, f1
    fcmpo cr0, f1, f14
    ble lbl_801BDCE4
    b lbl_801BDCE8
lbl_801BDCE4:
    fmr f1, f14
lbl_801BDCE8:
    lfd f0, 0xc8(r1)
    fcmpu cr0, f24, f28
    stfs f26, 0x48(r1)
    stfs f0, 0x44(r1)
    stfs f2, 0x4c(r1)
    beq lbl_801BDD8C
    cmpwi r25, 0x0
    beq lbl_801BDD48
    lwz r3, 0xec(r27)
    addi r0, r24, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f20
    fdivs f0, f0, f19
    fmuls f0, f0, f0
    fmuls f0, f0, f28
    fmuls f0, f3, f0
    fsubs f2, f21, f0
    b lbl_801BDD80
lbl_801BDD48:
    lwz r3, 0xec(r27)
    addi r0, r24, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f20
    fdivs f0, f0, f19
    fmuls f0, f28, f0
    fmuls f0, f3, f0
    fsubs f2, f21, f0
lbl_801BDD80:
    lfs f0, 0x44(r1)
    fmuls f0, f0, f2
    stfs f0, 0x44(r1)
lbl_801BDD8C:
    fcmpu cr0, f24, f27
    beq lbl_801BDDBC
    lfs f0, 0x48(r1)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f18
    bge lbl_801BDDCC
    lfs f0, 0x4c(r1)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f18
    bge lbl_801BDDCC
lbl_801BDDBC:
    stfs f17, 0x38(r1)
    stfs f24, 0x3c(r1)
    stfs f24, 0x40(r1)
    b lbl_801BDE38
lbl_801BDDCC:
    fmuls f1, f1, f27
    bl tan
    frsp f4, f1
    lfs f1, 0x48(r1)
    lfs f0, 0x4c(r1)
    fmuls f1, f1, f1
    fres f15, f4
    fmuls f0, f0, f0
    opword 0x106F782A
    opword 0x104F03F2
    fadds f16, f1, f0
    opword 0x11E418BC
    fcmpo cr0, f16, f24
    opword 0x4C401382
    bne lbl_801BDE10
    fmr f0, f24
    b lbl_801BDE1C
lbl_801BDE10:
    fmr f1, f16
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f16, f1
lbl_801BDE1C:
    fneg f2, f0
    lfs f1, 0x48(r1)
    lfs f0, 0x4c(r1)
    stfs f1, 0x3c(r1)
    fmuls f1, f15, f2
    stfs f0, 0x40(r1)
    stfs f1, 0x38(r1)
lbl_801BDE38:
    fmr f1, f23
    mr r3, r26
    mr r6, r27
    mr r7, r28
    mr r8, r30
    mr r9, r31
    addi r4, r1, 0x44
    addi r5, r1, 0x38
    bl fn_801BCED0
    subi r22, r22, 0x1
lbl_801BDE60:
    cmpwi r22, 0x1
    bge lbl_801BDC98
    addi r21, r21, 0x1
lbl_801BDE6C:
    cmpw r21, r29
    ble lbl_801BD6D4
    subi r21, r29, 0x1
    lfs f20, lbl_804A1A48
    lfd f22, lbl_804A1A58
    mr r22, r21
    lfs f21, lbl_804A1A44
    li r18, 0x1
    lfd f19, lbl_804A1A50
    li r19, 0x1
    lfs f18, lbl_804A1A3C
    li r20, 0x2
    lfs f17, lbl_804A1A60
    li r17, 0x0
    lis r24, 0x3
    b lbl_801BE134
lbl_801BDEAC:
    cmpwi r17, 0x0
    beq lbl_801BDF48
    cmpwi r20, 0x2
    beq lbl_801BDEEC
    bge lbl_801BDED0
    cmpwi r20, 0x0
    beq lbl_801BDEDC
    bge lbl_801BDEE4
    b lbl_801BDEF8
lbl_801BDED0:
    cmpwi r20, 0x4
    bge lbl_801BDEF8
    b lbl_801BDEF4
lbl_801BDEDC:
    subi r18, r18, 0x1
    b lbl_801BDEF8
lbl_801BDEE4:
    addi r19, r19, 0x1
    b lbl_801BDEF8
lbl_801BDEEC:
    addi r18, r18, 0x1
    b lbl_801BDEF8
lbl_801BDEF4:
    subi r19, r19, 0x1
lbl_801BDEF8:
    subic. r22, r22, 0x1
    bgt lbl_801BDF48
    cmpwi r20, 0x0
    li r4, 0x3
    beq lbl_801BDF10
    subi r4, r20, 0x1
lbl_801BDF10:
    srwi r3, r4, 31
    clrlwi r0, r4, 31
    xor r0, r0, r3
    mr r20, r4
    subf r0, r3, r0
    cmpwi r0, 0x1
    bne lbl_801BDF44
    cmpwi r4, 0x1
    bne lbl_801BDF40
    subi r0, r29, 0x1
    cmpw r21, r0
    beq lbl_801BDF44
lbl_801BDF40:
    subi r21, r21, 0x1
lbl_801BDF44:
    mr r22, r21
lbl_801BDF48:
    xoris r3, r18, 0x8000
    xoris r0, r19, 0x8000
    stw r3, 0xb4(r1)
    stw r0, 0xbc(r1)
    lfd f1, 0xb0(r1)
    lfd f0, 0xb8(r1)
    fsubs f1, f1, f22
    fsubs f0, f0, f22
    fmuls f1, f1, f29
    fmuls f0, f0, f29
    fsubs f2, f1, f21
    fsubs f3, f0, f21
    fabs f1, f2
    fabs f0, f3
    fmuls f4, f2, f31
    frsp f1, f1
    frsp f0, f0
    fmuls f5, f3, f30
    fcmpo cr0, f1, f0
    ble lbl_801BDF9C
    b lbl_801BDFA0
lbl_801BDF9C:
    fmr f1, f0
lbl_801BDFA0:
    fabs f0, f3
    fabs f2, f2
    fsubs f3, f21, f1
    frsp f0, f0
    frsp f1, f2
    fcmpo cr0, f1, f0
    ble lbl_801BDFC0
    b lbl_801BDFC4
lbl_801BDFC0:
    fmr f1, f0
lbl_801BDFC4:
    lfs f0, 0xc4(r1)
    fcmpu cr0, f20, f28
    stfs f4, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f5, 0x34(r1)
    beq lbl_801BE068
    cmpwi r25, 0x0
    beq lbl_801BE024
    lwz r3, 0xec(r27)
    addi r0, r24, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f19
    fdivs f0, f0, f18
    fmuls f0, f0, f0
    fmuls f0, f0, f28
    fmuls f0, f3, f0
    fsubs f2, f21, f0
    b lbl_801BE05C
lbl_801BE024:
    lwz r3, 0xec(r27)
    addi r0, r24, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f19
    fdivs f0, f0, f18
    fmuls f0, f28, f0
    fmuls f0, f3, f0
    fsubs f2, f21, f0
lbl_801BE05C:
    lfs f0, 0x30(r1)
    fmuls f0, f0, f2
    stfs f0, 0x30(r1)
lbl_801BE068:
    fcmpu cr0, f20, f27
    beq lbl_801BE098
    lfs f0, 0x2c(r1)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f17
    bge lbl_801BE0A8
    lfs f0, 0x34(r1)
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f17
    bge lbl_801BE0A8
lbl_801BE098:
    stfs f20, 0x20(r1)
    stfs f21, 0x24(r1)
    stfs f20, 0x28(r1)
    b lbl_801BE10C
lbl_801BE0A8:
    fmuls f1, f1, f27
    bl tan
    frsp f4, f1
    lfs f2, 0x2c(r1)
    lfs f0, 0x34(r1)
    fmuls f1, f2, f2
    stfs f2, 0x20(r1)
    fres f14, f4
    fmuls f0, f0, f0
    opword 0x106E702A
    opword 0x104E03B2
    fadds f15, f1, f0
    opword 0x11C418BC
    fcmpo cr0, f15, f20
    opword 0x4C401382
    bne lbl_801BE0F0
    fmr f0, f20
    b lbl_801BE0FC
lbl_801BE0F0:
    fmr f1, f15
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f15, f1
lbl_801BE0FC:
    fmuls f1, f14, f0
    lfs f0, 0x34(r1)
    stfs f0, 0x28(r1)
    stfs f1, 0x24(r1)
lbl_801BE10C:
    fmr f1, f23
    mr r3, r26
    mr r6, r27
    mr r7, r28
    mr r8, r30
    mr r9, r31
    addi r4, r1, 0x2c
    addi r5, r1, 0x20
    bl fn_801BCED0
    addi r17, r17, 0x1
lbl_801BE134:
    cmpw r17, r23
    blt lbl_801BDEAC
    b lbl_801BEA50
lbl_801BE140:
    lfs f17, lbl_804A1A48
    li r17, 0x0
    lfs f21, lbl_804A1A40
    lis r24, 0x3
    lfs f22, lbl_804A1A6C
    lis r25, 0x2aab
    lfs f18, lbl_804A1A44
    lfd f19, lbl_804A1A50
    lfs f20, lbl_804A1A3C
    b lbl_801BEA48
lbl_801BE168:
    fcmpu cr0, f17, f29
    bne lbl_801BE200
    lwz r0, 0xec(r27)
    addi r4, r24, 0x43fd
    mullw r3, r0, r4
    addis r3, r3, 0x27
    subi r0, r3, 0x613d
    mullw r3, r0, r4
    stw r0, 0xec(r27)
    srwi r0, r0, 16
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    addis r3, r3, 0x27
    subi r0, r3, 0x613d
    fsubs f0, f0, f19
    mullw r3, r0, r4
    stw r0, 0xec(r27)
    srwi r0, r0, 16
    fdivs f2, f0, f20
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    fsubs f1, f0, f19
    stw r0, 0xb4(r1)
    fmuls f2, f21, f2
    lfd f0, 0xb0(r1)
    fdivs f1, f1, f20
    stw r3, 0xec(r27)
    fsubs f0, f0, f19
    fmuls f1, f21, f1
    fsubs f26, f2, f18
    fdivs f0, f0, f20
    fmuls f0, f21, f0
    fsubs f25, f1, f18
    fsubs f24, f0, f18
    b lbl_801BE724
lbl_801BE200:
    fcmpu cr0, f18, f29
    bne lbl_801BE4B0
    lwz r4, 0xec(r27)
    addi r0, r24, 0x43fd
    subi r3, r25, 0x5555
    mullw r4, r4, r0
    addis r4, r4, 0x27
    subi r6, r4, 0x613d
    srwi r5, r6, 16
    stw r6, 0xec(r27)
    mulhw r4, r3, r5
    srwi r3, r4, 31
    add r3, r4, r3
    mulli r3, r3, 0x6
    subf r3, r3, r5
    cmpwi r3, 0x3
    beq lbl_801BE390
    bge lbl_801BE260
    cmpwi r3, 0x1
    beq lbl_801BE2D0
    bge lbl_801BE330
    cmpwi r3, 0x0
    bge lbl_801BE270
    b lbl_801BE724
lbl_801BE260:
    cmpwi r3, 0x5
    beq lbl_801BE450
    bge lbl_801BE724
    b lbl_801BE3F0
lbl_801BE270:
    mullw r3, r6, r0
    fmr f24, f18
    addis r3, r3, 0x27
    subi r4, r3, 0x613d
    mullw r3, r4, r0
    stw r4, 0xec(r27)
    srwi r0, r4, 16
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    fsubs f0, f0, f19
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    fdivs f1, f0, f20
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f19
    fmuls f1, f21, f1
    fdivs f0, f0, f20
    fmuls f0, f21, f0
    fsubs f26, f1, f18
    fsubs f25, f0, f18
    b lbl_801BE724
lbl_801BE2D0:
    mullw r3, r6, r0
    lfs f24, lbl_804A1A6C
    addis r3, r3, 0x27
    subi r4, r3, 0x613d
    mullw r3, r4, r0
    stw r4, 0xec(r27)
    srwi r0, r4, 16
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    fsubs f0, f0, f19
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    fdivs f1, f0, f20
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f19
    fmuls f1, f21, f1
    fdivs f0, f0, f20
    fmuls f0, f21, f0
    fsubs f26, f1, f18
    fsubs f25, f0, f18
    b lbl_801BE724
lbl_801BE330:
    mullw r3, r6, r0
    fmr f25, f18
    addis r3, r3, 0x27
    subi r4, r3, 0x613d
    mullw r3, r4, r0
    stw r4, 0xec(r27)
    srwi r0, r4, 16
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    fsubs f0, f0, f19
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    fdivs f1, f0, f20
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f19
    fmuls f1, f21, f1
    fdivs f0, f0, f20
    fmuls f0, f21, f0
    fsubs f26, f1, f18
    fsubs f24, f0, f18
    b lbl_801BE724
lbl_801BE390:
    mullw r3, r6, r0
    lfs f25, lbl_804A1A6C
    addis r3, r3, 0x27
    subi r4, r3, 0x613d
    mullw r3, r4, r0
    stw r4, 0xec(r27)
    srwi r0, r4, 16
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    fsubs f0, f0, f19
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    fdivs f1, f0, f20
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f19
    fmuls f1, f21, f1
    fdivs f0, f0, f20
    fmuls f0, f21, f0
    fsubs f26, f1, f18
    fsubs f24, f0, f18
    b lbl_801BE724
lbl_801BE3F0:
    mullw r3, r6, r0
    fmr f26, f18
    addis r3, r3, 0x27
    subi r4, r3, 0x613d
    mullw r3, r4, r0
    stw r4, 0xec(r27)
    srwi r0, r4, 16
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    fsubs f0, f0, f19
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    fdivs f1, f0, f20
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f19
    fmuls f1, f21, f1
    fdivs f0, f0, f20
    fmuls f0, f21, f0
    fsubs f25, f1, f18
    fsubs f24, f0, f18
    b lbl_801BE724
lbl_801BE450:
    mullw r3, r6, r0
    lfs f26, lbl_804A1A6C
    addis r3, r3, 0x27
    subi r4, r3, 0x613d
    mullw r3, r4, r0
    stw r4, 0xec(r27)
    srwi r0, r4, 16
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    fsubs f0, f0, f19
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    fdivs f1, f0, f20
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f19
    fmuls f1, f21, f1
    fdivs f0, f0, f20
    fmuls f0, f21, f0
    fsubs f25, f1, f18
    fsubs f24, f0, f18
    b lbl_801BE724
lbl_801BE4B0:
    lwz r0, 0xec(r27)
    addi r4, r24, 0x43fd
    lfs f0, 0xc4(r1)
    fmuls f1, f31, f28
    mullw r3, r0, r4
    fmuls f3, f31, f0
    fmuls f0, f0, f1
    fmuls f2, f29, f3
    addis r3, r3, 0x27
    fmuls f3, f28, f3
    subi r3, r3, 0x613d
    fmuls f0, f29, f0
    srwi r0, r3, 16
    stw r0, 0xbc(r1)
    fmuls f1, f30, f2
    fmuls f2, f30, f0
    lfd f0, 0xb8(r1)
    fmuls f3, f30, f3
    fmuls f1, f28, f1
    stw r3, 0xec(r27)
    fsubs f0, f0, f19
    fmuls f4, f29, f2
    fadds f1, f3, f1
    fdivs f2, f0, f20
    fadds f0, f4, f1
    fmuls f0, f0, f2
    fcmpo cr0, f0, f3
    bge lbl_801BE5C8
    mullw r3, r3, r4
    addis r3, r3, 0x27
    subi r0, r3, 0x613d
    mullw r3, r0, r4
    stw r0, 0xec(r27)
    srwi r0, r0, 16
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    fsubs f0, f0, f19
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xbc(r1)
    fdivs f1, f0, f20
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f19
    fmuls f1, f21, f1
    fdivs f0, f0, f20
    fmuls f0, f21, f0
    fsubs f26, f1, f18
    fsubs f0, f0, f18
    fmuls f25, f28, f0
    fcmpo cr0, f25, f17
    opword 0x4C411382
    bne lbl_801BE590
    fsubs f25, f18, f25
    b lbl_801BE594
lbl_801BE590:
    fsubs f25, f22, f25
lbl_801BE594:
    addi r0, r24, 0x43fd
    mullw r3, r3, r0
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f19
    fdivs f0, f0, f20
    fmuls f0, f21, f0
    fsubs f24, f0, f18
    b lbl_801BE724
lbl_801BE5C8:
    fcmpo cr0, f0, f1
    bge lbl_801BE678
    mullw r3, r3, r4
    addis r3, r3, 0x27
    subi r0, r3, 0x613d
    mullw r3, r0, r4
    stw r0, 0xec(r27)
    srwi r0, r0, 16
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    addis r3, r3, 0x27
    subi r0, r3, 0x613d
    fsubs f0, f0, f19
    mullw r3, r0, r4
    stw r0, 0xec(r27)
    srwi r0, r0, 16
    fdivs f2, f0, f20
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    fsubs f1, f0, f19
    stw r0, 0xbc(r1)
    fmuls f2, f21, f2
    lfd f0, 0xb8(r1)
    fdivs f1, f1, f20
    stw r3, 0xec(r27)
    fsubs f0, f0, f19
    fmuls f1, f21, f1
    fsubs f26, f2, f18
    fdivs f0, f0, f20
    fmuls f0, f21, f0
    fsubs f1, f1, f18
    fsubs f0, f0, f18
    fmuls f25, f29, f1
    fmuls f24, f28, f0
    fcmpo cr0, f24, f17
    opword 0x4C411382
    bne lbl_801BE670
    fsubs f24, f18, f24
    b lbl_801BE724
lbl_801BE670:
    fsubs f24, f22, f24
    b lbl_801BE724
lbl_801BE678:
    mullw r3, r3, r4
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f19
    fdivs f0, f0, f20
    fmuls f0, f21, f0
    fsubs f0, f0, f18
    fmuls f26, f28, f0
    fcmpo cr0, f26, f17
    opword 0x4C411382
    bne lbl_801BE6BC
    fsubs f26, f18, f26
    b lbl_801BE6C0
lbl_801BE6BC:
    fsubs f26, f22, f26
lbl_801BE6C0:
    addi r4, r24, 0x43fd
    mullw r3, r3, r4
    addis r3, r3, 0x27
    subi r0, r3, 0x613d
    mullw r3, r0, r4
    stw r0, 0xec(r27)
    srwi r0, r0, 16
    stw r0, 0xbc(r1)
    lfd f0, 0xb8(r1)
    addis r3, r3, 0x27
    subi r3, r3, 0x613d
    fsubs f0, f0, f19
    srwi r0, r3, 16
    stw r3, 0xec(r27)
    stw r0, 0xb4(r1)
    fdivs f1, f0, f20
    lfd f0, 0xb0(r1)
    fsubs f0, f0, f19
    fmuls f1, f21, f1
    fdivs f0, f0, f20
    fmuls f0, f21, f0
    fsubs f1, f1, f18
    fsubs f0, f0, f18
    fmuls f25, f29, f1
    fmuls f24, f29, f0
lbl_801BE724:
    fcmpo cr0, f25, f17
    stfs f17, 0x8(r1)
    stfs f17, 0xc(r1)
    stfs f17, 0x10(r1)
    opword 0x4C411382
    bne lbl_801BE76C
    fabs f0, f26
    frsp f0, f0
    fcmpo cr0, f25, f0
    opword 0x4C411382
    bne lbl_801BE76C
    fabs f0, f24
    frsp f0, f0
    fcmpo cr0, f25, f0
    opword 0x4C411382
    bne lbl_801BE76C
    stfs f18, 0xc(r1)
    b lbl_801BE838
lbl_801BE76C:
    fcmpo cr0, f25, f17
    bge lbl_801BE7A8
    fabs f1, f26
    fneg f0, f25
    frsp f1, f1
    fcmpo cr0, f0, f1
    opword 0x4C411382
    bne lbl_801BE7A8
    fabs f1, f24
    frsp f1, f1
    fcmpo cr0, f0, f1
    opword 0x4C411382
    bne lbl_801BE7A8
    stfs f22, 0xc(r1)
    b lbl_801BE838
lbl_801BE7A8:
    fcmpo cr0, f26, f17
    opword 0x4C411382
    bne lbl_801BE7E4
    fabs f0, f25
    frsp f0, f0
    fcmpo cr0, f26, f0
    opword 0x4C411382
    bne lbl_801BE7E4
    fabs f0, f24
    frsp f0, f0
    fcmpo cr0, f26, f0
    opword 0x4C411382
    bne lbl_801BE7E4
    stfs f18, 0x8(r1)
    b lbl_801BE838
lbl_801BE7E4:
    fcmpo cr0, f26, f17
    bge lbl_801BE820
    fabs f1, f25
    fneg f0, f26
    frsp f1, f1
    fcmpo cr0, f0, f1
    opword 0x4C411382
    bne lbl_801BE820
    fabs f1, f24
    frsp f1, f1
    fcmpo cr0, f0, f1
    opword 0x4C411382
    bne lbl_801BE820
    stfs f22, 0x8(r1)
    b lbl_801BE838
lbl_801BE820:
    fcmpo cr0, f24, f17
    opword 0x4C411382
    bne lbl_801BE834
    stfs f18, 0x10(r1)
    b lbl_801BE838
lbl_801BE834:
    stfs f22, 0x10(r1)
lbl_801BE838:
    lfs f0, 0xc4(r1)
    fmuls f3, f26, f31
    fmuls f1, f24, f30
    fmuls f2, f25, f0
    fcmpu cr0, f17, f27
    stfs f3, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f1, 0x1c(r1)
    beq lbl_801BEA20
    lfs f0, 0x8(r1)
    fcmpu cr0, f17, f0
    beq lbl_801BE8FC
    fabs f0, f1
    fabs f1, f2
    frsp f0, f0
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_801BE884
    b lbl_801BE888
lbl_801BE884:
    fmr f1, f0
lbl_801BE888:
    fmuls f1, f1, f27
    bl tan
    frsp f4, f1
    lfs f1, 0x18(r1)
    lfs f0, 0x1c(r1)
    fmuls f1, f1, f1
    fres f15, f4
    fmuls f0, f0, f0
    opword 0x106F782A
    opword 0x104F03F2
    fadds f16, f1, f0
    opword 0x11E418BC
    fcmpo cr0, f16, f17
    opword 0x4C401382
    bne lbl_801BE8CC
    fmr f0, f17
    b lbl_801BE8D8
lbl_801BE8CC:
    fmr f1, f16
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f16, f1
lbl_801BE8D8:
    fmuls f3, f15, f0
    lfs f2, 0x8(r1)
    lfs f1, 0x18(r1)
    lfs f0, 0x1c(r1)
    fmuls f2, f2, f3
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f2, 0x8(r1)
    b lbl_801BEA20
lbl_801BE8FC:
    lfs f0, 0xc(r1)
    fcmpu cr0, f17, f0
    beq lbl_801BE998
    fabs f0, f1
    fabs f1, f3
    frsp f0, f0
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_801BE924
    b lbl_801BE928
lbl_801BE924:
    fmr f1, f0
lbl_801BE928:
    fmuls f1, f1, f27
    bl tan
    frsp f4, f1
    lfs f2, 0x14(r1)
    lfs f0, 0x1c(r1)
    fmuls f1, f2, f2
    stfs f2, 0x8(r1)
    fres f15, f4
    fmuls f0, f0, f0
    opword 0x106F782A
    opword 0x104F03F2
    fadds f16, f1, f0
    opword 0x11E418BC
    fcmpo cr0, f16, f17
    opword 0x4C401382
    bne lbl_801BE970
    fmr f0, f17
    b lbl_801BE97C
lbl_801BE970:
    fmr f1, f16
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f16, f1
lbl_801BE97C:
    fmuls f2, f15, f0
    lfs f1, 0xc(r1)
    lfs f0, 0x1c(r1)
    fmuls f1, f1, f2
    stfs f0, 0x10(r1)
    stfs f1, 0xc(r1)
    b lbl_801BEA20
lbl_801BE998:
    fabs f0, f2
    fabs f1, f3
    frsp f0, f0
    frsp f1, f1
    fcmpo cr0, f1, f0
    ble lbl_801BE9B4
    b lbl_801BE9B8
lbl_801BE9B4:
    fmr f1, f0
lbl_801BE9B8:
    fmuls f1, f1, f27
    bl tan
    frsp f4, f1
    lfs f2, 0x14(r1)
    lfs f0, 0x18(r1)
    fmuls f1, f2, f2
    stfs f2, 0x8(r1)
    fres f15, f4
    stfs f0, 0xc(r1)
    fmuls f0, f0, f0
    opword 0x106F782A
    opword 0x104F03F2
    fadds f16, f1, f0
    opword 0x11E418BC
    fcmpo cr0, f16, f17
    opword 0x4C401382
    bne lbl_801BEA04
    fmr f0, f17
    b lbl_801BEA10
lbl_801BEA04:
    fmr f1, f16
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f16, f1
lbl_801BEA10:
    fmuls f1, f15, f0
    lfs f0, 0x10(r1)
    fmuls f0, f0, f1
    stfs f0, 0x10(r1)
lbl_801BEA20:
    fmr f1, f23
    mr r3, r26
    mr r6, r27
    mr r7, r28
    mr r8, r30
    mr r9, r31
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_801BCED0
    addi r17, r17, 0x1
lbl_801BEA48:
    cmpw r17, r29
    blt lbl_801BE168
lbl_801BEA50:
    opword 0xE3E10228
    lfd f31, 0x220(r1)
    opword 0xE3C10218
    lfd f30, 0x210(r1)
    opword 0xE3A10208
    lfd f29, 0x200(r1)
    opword 0xE38101F8
    lfd f28, 0x1f0(r1)
    opword 0xE36101E8
    lfd f27, 0x1e0(r1)
    opword 0xE34101D8
    lfd f26, 0x1d0(r1)
    opword 0xE32101C8
    lfd f25, 0x1c0(r1)
    opword 0xE30101B8
    lfd f24, 0x1b0(r1)
    opword 0xE2E101A8
    lfd f23, 0x1a0(r1)
    opword 0xE2C10198
    lfd f22, 0x190(r1)
    opword 0xE2A10188
    lfd f21, 0x180(r1)
    opword 0xE2810178
    lfd f20, 0x170(r1)
    opword 0xE2610168
    lfd f19, 0x160(r1)
    opword 0xE2410158
    lfd f18, 0x150(r1)
    opword 0xE2210148
    lfd f17, 0x140(r1)
    opword 0xE2010138
    lfd f16, 0x130(r1)
    opword 0xE1E10128
    lfd f15, 0x120(r1)
    opword 0xE1C10118
    addi r11, r1, 0x110
    lfd f14, 0x110(r1)
    bl _restgpr_17
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

