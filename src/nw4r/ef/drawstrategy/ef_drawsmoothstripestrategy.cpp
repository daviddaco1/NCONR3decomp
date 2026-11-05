#include "types.h"

// Translation unit: src/nw4r/ef/drawstrategy/ef_drawsmoothstripestrategy.cpp
// Total functions: 34

// Small Data symbols (@sda21)
extern "C" float lbl_8049D9A0;
extern "C" float lbl_8049D9A1;
extern "C" float lbl_8049D9A2;
extern "C" float lbl_8049D9A3;
extern "C" float lbl_804A1B78;
extern "C" float lbl_804A1B7C;
extern "C" float lbl_804A1B80;
extern "C" float lbl_804A1B84;
extern "C" float lbl_804A1B88;
extern "C" float lbl_804A1B90;
extern "C" float lbl_804A1B94;
extern "C" float lbl_804A1B98;
extern "C" float lbl_804A1BA0;
extern "C" float lbl_804A1BA4;
extern "C" float lbl_804A1BA8;

// Global data symbols (@ha/@l)
extern "C" u8 jumptable_803609E8[];
extern "C" u8 jumptable_80360A4C[];
extern "C" u8 jumptable_80360AB0[];
extern "C" u8 lbl_80360AD0[];
extern "C" u8 lbl_803E6550[];
extern "C" u8 lbl_803E6568[];
extern "C" u8 lbl_803E65B0[];

// Forward declarations
extern "C" void FrSqrt__Q24nw4r4mathFf();
extern "C" void GXBegin();
extern "C" void GXClearVtxDesc();
extern "C" void GXEnableTexOffsets();
extern "C" void GXGetProjectionv();
extern "C" void GXLoadPosMtxImm();
extern "C" void GXSetCullMode();
extern "C" void GXSetCurrentMtx();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXSetVtxDesc();
extern "C" void PSMTXConcat();
extern "C" void PSMTXInverse();
extern "C" void SinCosFIdx__Q24nw4r4mathFPfPff();
extern "C" void VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void __ct__Q34nw4r2ef16DrawStrategyImplFv();
extern "C" void _restgpr_14();
extern "C" void _restgpr_15();
extern "C" void _restgpr_16();
extern "C" void _restgpr_20();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" void _savegpr_14();
extern "C" void _savegpr_15();
extern "C" void _savegpr_16();
extern "C" void _savegpr_20();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void fn_8002AF5C();
extern "C" void fn_8002B0AC();
extern "C" void fn_80031AF4();
extern "C" void fn_80047C40();
extern "C" void fn_801B9B90();
extern "C" void fn_801B9C64();
extern "C" void fn_801BF1AC();
extern "C" void fn_801BF940();
extern "C" void fn_801C0E98();
extern "C" void fn_801C2CF4();
extern "C" void fn_801C2DC8();
extern "C" void fn_801C2E84();
extern "C" void fn_801C3624();
extern "C" void fn_801C53B8();
extern "C" void fn_801C6B84();
extern "C" void fn_801C6B98();
extern "C" void fn_801C9DAC();
extern "C" void fn_801C9DE8();
extern "C" void fn_801CA180();
extern "C" void fn_801CA5E8();
extern "C" void fn_801CA878();
extern "C" void fn_801CAA5C();
extern "C" void fn_801CB35C();
extern "C" void fn_801CB360();
extern "C" void fn_801CB6AC();
extern "C" void fn_801CB6B8();
extern "C" void fn_801CB6C4();
extern "C" void fn_801CB6C8();
extern "C" void fn_801CBAE8();
extern "C" void fn_801CBF8C();
extern "C" void fn_801CBFD4();
extern "C" void fn_801CC00C();
extern "C" void fn_801CC048();
extern "C" void fn_801CC348();
extern "C" void fn_801CC6FC();
extern "C" void fn_801CCC6C();
extern "C" void fn_801CD440();
extern "C" void fn_801CDE24();
extern "C" void fn_801CE0C4();
extern "C" void fn_801CE178();
extern "C" void fn_801CE290();
extern "C" void fn_801CE4F8();
extern "C" void fn_801CE7A8();
extern "C" void fn_801CE9C4();
extern "C" void fn_801CE9D4();
extern "C" void fn_801CE9EC();
extern "C" void fn_801CE9F8();
extern "C" void fn_801CEA04();
extern "C" void fn_801CEA54();
extern "C" void fn_801CEA7C();
extern "C" void fn_8030D7E0();
extern "C" void fn_8030DEEC();
extern "C" void strcmp();

// ----------------------------------------------------------------------------
// fn_801C9DAC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C9DAC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl __ct__Q34nw4r2ef16DrawStrategyImplFv
    lis r4, lbl_80360AD0@ha
    mr r3, r31
    addi r4, r4, lbl_80360AD0@l
    stw r4, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801C9DE8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801C9DE8() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    opword 0xF3E10128
    stfd f30, 0x110(r1)
    opword 0xF3C10118
    stfd f29, 0x100(r1)
    opword 0xF3A10108
    addi r11, r1, 0x100
    bl _savegpr_25
    mr r26, r5
    mr r27, r7
    mr r25, r4
    mr r12, r8
    fmr f30, f1
    mr r31, r6
    fmr f31, f2
    mr r28, r9
    mr r29, r10
    mr r4, r26
    mr r5, r27
    addi r3, r1, 0x34
    lwz r30, 0x138(r1)
    mtctr r12
    bctrl
    rlwinm. r0, r31, 0, 28, 28
    addi r31, r1, 0x34
    bne lbl_801C9E70
    mr r3, r31
    addi r4, r27, 0xcc
    addi r5, r1, 0x1c
    bl fn_8030DEEC
    b lbl_801C9E80
lbl_801C9E70:
    mr r3, r31
    addi r4, r26, 0xc8
    addi r5, r1, 0x1c
    bl fn_8030DEEC
lbl_801C9E80:
    opword 0xE0410020
    opword 0xE021801C
    opword 0x104200B2
    lfs f0, lbl_804A1B78
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    bge lbl_801C9EA8
    li r0, 0x0
    b lbl_801C9EC8
lbl_801C9EA8:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE001001C
    li r0, 0x1
    opword 0x10400058
    opword 0xE0018024
    opword 0xF041001C
    opword 0x10400058
    opword 0xF0418024
lbl_801C9EC8:
    cmpwi r0, 0x0
    bne lbl_801C9EE8
    lfs f0, 0xbc(r26)
    stfs f0, 0x1c(r1)
    lfs f0, 0xc0(r26)
    stfs f0, 0x20(r1)
    lfs f0, 0xc4(r26)
    stfs f0, 0x24(r1)
lbl_801C9EE8:
    mr r4, r31
    addi r3, r1, 0x1c
    addi r5, r1, 0x28
    bl fn_8030DEEC
    opword 0xE041002C
    opword 0xE0218028
    opword 0x104200B2
    lfs f0, lbl_804A1B78
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    blt lbl_801C9F34
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010028
    opword 0x10400058
    opword 0xE0018030
    opword 0xF0410028
    opword 0x10400058
    opword 0xF0418030
lbl_801C9F34:
    lfs f0, 0x28(r1)
    lfs f1, 0x8(r28)
    stfs f0, 0xcc(r27)
    lfs f4, 0x4(r28)
    lfs f0, 0x2c(r1)
    lfs f8, 0x0(r28)
    stfs f0, 0xd0(r27)
    lfs f0, 0x30(r1)
    stfs f0, 0xd4(r27)
    lfs f0, 0x30(r1)
    lfs f2, 0x3c(r1)
    lfs f3, 0x24(r1)
    lfs f5, 0x2c(r1)
    lfs f6, 0x38(r1)
    lfs f7, 0x20(r1)
    lfs f9, 0x28(r1)
    lfs f10, 0x34(r1)
    lfs f11, 0x1c(r1)
    stfs f10, 0x74(r1)
    stfs f11, 0x70(r1)
    stfs f9, 0x78(r1)
    stfs f8, 0x7c(r1)
    stfs f7, 0x80(r1)
    stfs f6, 0x84(r1)
    stfs f5, 0x88(r1)
    stfs f4, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f2, 0x94(r1)
    stfs f0, 0x98(r1)
    stfs f1, 0x9c(r1)
    lbz r3, 0x9a(r27)
    lfs f3, 0x40(r27)
    lfs f1, 0x44(r27)
    cmpwi r3, 0x0
    lfs f0, 0x48(r27)
    stfs f3, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    beq lbl_801C9FF8
    lis r0, 0x4330
    stw r3, 0xd4(r1)
    lfd f2, lbl_804A1B88
    stw r0, 0xd0(r1)
    lfs f0, lbl_804A1B7C
    lfd f1, 0xd0(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fadds f0, f3, f0
    stfs f0, 0x10(r1)
lbl_801C9FF8:
    lbz r3, 0x9b(r27)
    cmpwi r3, 0x0
    beq lbl_801CA030
    lis r0, 0x4330
    stw r3, 0xd4(r1)
    lfd f3, lbl_804A1B88
    stw r0, 0xd0(r1)
    lfs f1, lbl_804A1B7C
    lfd f2, 0xd0(r1)
    lfs f0, 0x14(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x14(r1)
lbl_801CA030:
    lbz r3, 0x9c(r27)
    cmpwi r3, 0x0
    beq lbl_801CA068
    lis r0, 0x4330
    stw r3, 0xd4(r1)
    lfd f3, lbl_804A1B88
    stw r0, 0xd0(r1)
    lfs f1, lbl_804A1B7C
    lfd f2, 0xd0(r1)
    lfs f0, 0x18(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x18(r1)
lbl_801CA068:
    lwz r5, 0xc8(r27)
    addi r3, r1, 0xc
    lfs f1, 0x14(r1)
    addi r4, r1, 0x8
    lfs f0, 0x64(r5)
    lfs f2, 0x30(r27)
    fadds f1, f1, f0
    lfs f0, 0x38(r27)
    lfs f4, 0x10(r1)
    fmuls f5, f2, f0
    lfs f3, 0x60(r5)
    lfs f0, 0x58(r5)
    fadds f4, f4, f3
    lfs f3, 0x18(r1)
    lfs f2, 0x68(r5)
    fmuls f29, f5, f0
    stfs f1, 0x14(r1)
    fadds f0, f3, f2
    stfs f4, 0x10(r1)
    stfs f0, 0x18(r1)
    bl fn_801B9C64
    lfs f1, 0x8(r1)
    addi r3, r1, 0x70
    lfs f0, 0xc(r1)
    addi r4, r1, 0x40
    fmuls f5, f1, f29
    lfs f1, lbl_804A1B80
    fmuls f4, f0, f29
    lfs f0, lbl_804A1B84
    stfs f1, 0x44(r1)
    addi r5, r1, 0xa0
    fneg f3, f4
    stfs f5, 0x8(r1)
    fmuls f2, f5, f30
    stfs f4, 0xc(r1)
    fmuls f6, f3, f30
    fsubs f2, f30, f2
    stfs f5, 0x40(r1)
    stfs f3, 0x48(r1)
    stfs f2, 0x4c(r1)
    stfs f1, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stfs f4, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f5, 0x68(r1)
    stfs f6, 0x6c(r1)
    bl PSMTXConcat
    mr r4, r29
    mr r5, r25
    addi r3, r1, 0xa0
    bl fn_8030D7E0
    mr r4, r30
    addi r3, r1, 0xa0
    addi r5, r25, 0xc
    bl fn_8030D7E0
    stfs f31, 0x18(r25)
    opword 0xE3E10128
    lfd f31, 0x120(r1)
    opword 0xE3C10118
    lfd f30, 0x110(r1)
    opword 0xE3A10108
    lfd f29, 0x100(r1)
    addi r11, r1, 0x100
    bl _restgpr_25
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// ----------------------------------------------------------------------------
// fn_801CA180
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CA180() {
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    opword 0xF3E10148
    stfd f30, 0x130(r1)
    opword 0xF3C10138
    stfd f29, 0x120(r1)
    opword 0xF3A10128
    stfd f28, 0x110(r1)
    opword 0xF3810118
    stfd f27, 0x100(r1)
    opword 0xF3610108
    mr r12, r8
    fmr f28, f1
    addi r3, r1, 0x40
    stw r31, 0xfc(r1)
    fmr f29, f2
    fmr f30, f3
    mr r31, r6
    stw r30, 0xf8(r1)
    mr r30, r7
    stw r29, 0xf4(r1)
    mr r29, r5
    mr r5, r30
    stw r28, 0xf0(r1)
    mr r28, r4
    mr r4, r29
    mtctr r12
    bctrl
    rlwinm. r0, r31, 0, 28, 28
    addi r31, r1, 0x40
    bne lbl_801CA218
    mr r3, r31
    addi r4, r30, 0xcc
    addi r5, r1, 0x10
    bl fn_8030DEEC
    b lbl_801CA228
lbl_801CA218:
    mr r3, r31
    addi r4, r29, 0xc8
    addi r5, r1, 0x10
    bl fn_8030DEEC
lbl_801CA228:
    opword 0xE0410014
    opword 0xE0218010
    opword 0x104200B2
    lfs f0, lbl_804A1B78
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    bge lbl_801CA250
    li r0, 0x0
    b lbl_801CA270
lbl_801CA250:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010010
    li r0, 0x1
    opword 0x10400058
    opword 0xE0018018
    opword 0xF0410010
    opword 0x10400058
    opword 0xF0418018
lbl_801CA270:
    cmpwi r0, 0x0
    bne lbl_801CA290
    lfs f0, 0xbc(r29)
    stfs f0, 0x10(r1)
    lfs f0, 0xc0(r29)
    stfs f0, 0x14(r1)
    lfs f0, 0xc4(r29)
    stfs f0, 0x18(r1)
lbl_801CA290:
    mr r4, r31
    addi r3, r1, 0x10
    addi r5, r1, 0x1c
    bl fn_8030DEEC
    opword 0xE0410020
    opword 0xE021801C
    opword 0x104200B2
    lfs f0, lbl_804A1B78
    opword 0x1021107A
    opword 0x10211094
    fcmpo cr0, f1, f0
    blt lbl_801CA2DC
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE001001C
    opword 0x10400058
    opword 0xE0018024
    opword 0xF041001C
    opword 0x10400058
    opword 0xF0418024
lbl_801CA2DC:
    lfs f0, 0x1c(r1)
    lfs f1, 0xb4(r30)
    stfs f0, 0xcc(r30)
    lfs f4, 0xb0(r30)
    lfs f0, 0x20(r1)
    lfs f8, 0xac(r30)
    stfs f0, 0xd0(r30)
    lfs f0, 0x24(r1)
    stfs f0, 0xd4(r30)
    lfs f0, 0x24(r1)
    lfs f2, 0x48(r1)
    lfs f3, 0x18(r1)
    lfs f5, 0x20(r1)
    lfs f6, 0x44(r1)
    lfs f7, 0x14(r1)
    lfs f9, 0x1c(r1)
    lfs f10, 0x40(r1)
    lfs f11, 0x10(r1)
    stfs f10, 0xb4(r1)
    stfs f11, 0xb0(r1)
    stfs f9, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f7, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f5, 0xc8(r1)
    stfs f4, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f2, 0xd4(r1)
    stfs f0, 0xd8(r1)
    stfs f1, 0xdc(r1)
    lbz r3, 0x9a(r30)
    lfs f3, 0x40(r30)
    lfs f1, 0x44(r30)
    cmpwi r3, 0x0
    lfs f0, 0x48(r30)
    stfs f3, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f0, 0x3c(r1)
    beq lbl_801CA3A0
    lis r0, 0x4330
    stw r3, 0xe4(r1)
    lfd f2, lbl_804A1B88
    stw r0, 0xe0(r1)
    lfs f0, lbl_804A1B7C
    lfd f1, 0xe0(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    fadds f0, f3, f0
    stfs f0, 0x34(r1)
lbl_801CA3A0:
    lbz r3, 0x9b(r30)
    cmpwi r3, 0x0
    beq lbl_801CA3D8
    lis r0, 0x4330
    stw r3, 0xe4(r1)
    lfd f3, lbl_804A1B88
    stw r0, 0xe0(r1)
    lfs f1, lbl_804A1B7C
    lfd f2, 0xe0(r1)
    lfs f0, 0x38(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x38(r1)
lbl_801CA3D8:
    lbz r3, 0x9c(r30)
    cmpwi r3, 0x0
    beq lbl_801CA410
    lis r0, 0x4330
    stw r3, 0xe4(r1)
    lfd f3, lbl_804A1B88
    stw r0, 0xe0(r1)
    lfs f1, lbl_804A1B7C
    lfd f2, 0xe0(r1)
    lfs f0, 0x3c(r1)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x3c(r1)
lbl_801CA410:
    lwz r4, 0xc8(r30)
    lfs f3, 0x34(r1)
    lfs f0, 0x60(r4)
    lfs f2, 0x30(r30)
    fadds f6, f3, f0
    lfs f1, 0x38(r30)
    lwz r3, 0x24(r4)
    lfs f4, 0x38(r1)
    fmuls f7, f2, f1
    lfs f3, 0x64(r4)
    lfs f0, 0x58(r4)
    fadds f5, f4, f3
    lhz r0, 0x9c(r3)
    lfs f4, 0x3c(r1)
    fmuls f31, f7, f0
    lfs f3, 0x68(r4)
    rlwinm r0, r0, 0, 17, 18
    fadds f0, f4, f3
    cmpwi r0, 0x4000
    stfs f6, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f0, 0x3c(r1)
    beq lbl_801CA488
    bge lbl_801CA47C
    cmpwi r0, 0x2000
    beq lbl_801CA494
    b lbl_801CA4A4
lbl_801CA47C:
    cmpwi r0, 0x6000
    beq lbl_801CA4B0
    b lbl_801CA4A4
lbl_801CA488:
    lfs f0, 0x34(r30)
    fmuls f7, f0, f1
    b lbl_801CA4B0
lbl_801CA494:
    lfs f0, 0x3c(r30)
    fmuls f7, f2, f0
    b lbl_801CA4B0
    b lbl_801CA4B0
lbl_801CA4A4:
    lfs f1, 0x34(r30)
    lfs f0, 0x3c(r30)
    fmuls f7, f1, f0
lbl_801CA4B0:
    lfs f0, 0x5c(r4)
    addi r3, r1, 0xc
    lfs f1, 0x38(r1)
    addi r4, r1, 0x8
    fmuls f27, f7, f0
    bl fn_801B9C64
    lfs f3, 0x8(r1)
    addi r3, r1, 0xb0
    lfs f7, 0xc(r1)
    addi r4, r1, 0x80
    fmuls f2, f3, f31
    lfs f1, lbl_804A1B80
    fmuls f8, f7, f31
    lfs f0, lbl_804A1B84
    fmuls f6, f3, f27
    stfs f1, 0x84(r1)
    fmuls f5, f28, f8
    stfs f2, 0x80(r1)
    fmuls f4, f28, f2
    addi r5, r1, 0x50
    fneg f2, f7
    stfs f0, 0x94(r1)
    fmuls f3, f7, f27
    stfs f1, 0x90(r1)
    fmuls f9, f2, f27
    fsubs f7, f29, f5
    stfs f1, 0x98(r1)
    fmuls f5, f29, f6
    fmuls f0, f29, f3
    stfs f1, 0x9c(r1)
    fsubs f2, f28, f4
    fsubs f3, f7, f5
    stfs f9, 0x88(r1)
    fadds f0, f2, f0
    stfs f8, 0xa0(r1)
    stfs f1, 0xa4(r1)
    stfs f0, 0x8c(r1)
    stfs f6, 0xa8(r1)
    stfs f3, 0xac(r1)
    bl PSMTXConcat
    lfs f2, 0x7c(r1)
    lis r5, lbl_803E6550@ha
    lfs f1, 0x6c(r1)
    addi r3, r28, 0xc
    lfs f0, 0x5c(r1)
    addi r4, r1, 0x50
    stfs f1, 0x2c(r1)
    addi r5, r5, lbl_803E6550@l
    stfs f0, 0x28(r1)
    stfs f2, 0x30(r1)
    stfs f0, 0x0(r28)
    stfs f1, 0x4(r28)
    stfs f2, 0x8(r28)
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    lis r5, lbl_803E6568@ha
    addi r3, r28, 0x18
    addi r4, r1, 0x50
    addi r5, r5, lbl_803E6568@l
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    stfs f30, 0x24(r28)
    opword 0xE3E10148
    lfd f31, 0x140(r1)
    opword 0xE3C10138
    lfd f30, 0x130(r1)
    opword 0xE3A10128
    lfd f29, 0x120(r1)
    opword 0xE3810118
    lfd f28, 0x110(r1)
    opword 0xE3610108
    lfd f27, 0x100(r1)
    lwz r31, 0xfc(r1)
    lwz r30, 0xf8(r1)
    lwz r29, 0xf4(r1)
    lwz r28, 0xf0(r1)
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

// ----------------------------------------------------------------------------
// fn_801CA5E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CA5E8() {
    nofralloc
    stwu r1, -0x110(r1)
    stfd f31, 0x100(r1)
    opword 0xF3E10108
    stfd f30, 0xf0(r1)
    opword 0xF3C100F8
    stfd f29, 0xe0(r1)
    opword 0xF3A100E8
    stfd f28, 0xd0(r1)
    opword 0xF38100D8
    stfd f27, 0xc0(r1)
    opword 0xF36100C8
    stfd f26, 0xb0(r1)
    opword 0xF34100B8
    xoris r0, r4, 0x8000
    lis r9, 0x4330
    stw r0, 0xac(r1)
    cmpwi r4, 0x0
    lfd f10, lbl_804A1B98
    li r10, 0x0
    stw r9, 0xa8(r1)
    lfd f0, 0xa8(r1)
    fsubs f0, f0, f10
    fres f11, f0
    opword 0x104B582A
    opword 0x102B02F2
    opword 0x1160107C
    ble lbl_801CA840
    clrlwi r8, r8, 31
    lfs f9, lbl_804A1B90
    lfs f7, lbl_804A1B94
    lis r3, 0xcc01
    mtctr r4
    ble lbl_801CA840
lbl_801CA66C:
    xoris r0, r10, 0x8000
    stw r9, 0xa8(r1)
    opword 0xE3850000
    stw r0, 0xac(r1)
    opword 0xE3660000
    lfd f0, 0xa8(r1)
    opword 0xE0C5000C
    fsubs f0, f0, f10
    opword 0xE086000C
    opword 0xE1A70000
    opword 0xE067000C
    fmuls f2, f0, f11
    fmuls f0, f2, f2
    fmuls f8, f9, f0
    fmuls f0, f7, f0
    fsubs f1, f8, f2
    stfs f8, 0x88(r1)
    fadds f0, f0, f2
    opword 0x13AD0218
    opword 0xE1A78008
    fadds f2, f9, f1
    fadds f5, f9, f0
    opword 0x11830218
    opword 0xF3A10038
    opword 0x135C0098
    opword 0xE3858008
    opword 0x13C60098
    opword 0x13E40158
    opword 0xF3410020
    opword 0x137B0158
    opword 0x135C0098
    opword 0xE0678014
    opword 0xE0010020
    opword 0xF3C1005C
    opword 0x13AD0218
    opword 0x1380D82A
    opword 0xF3E10068
    opword 0xE021005C
    opword 0xF361002C
    opword 0xE3668008
    opword 0xE0010068
    opword 0x137B0158
    opword 0xF3810014
    opword 0x11A1002A
    opword 0xE0C58014
    opword 0xF1810074
    opword 0x11830218
    opword 0xE0868014
    opword 0x139AD82A
    opword 0x13C60098
    opword 0xE0610014
    opword 0xE0210038
    opword 0x13E40158
    opword 0xF1A10050
    opword 0x1063082A
    opword 0x11BEF82A
    opword 0xE0010074
    opword 0xE0210050
    opword 0xF0610008
    opword 0x107CE82A
    opword 0x1001002A
    lfs f4, 0x8(r1)
    opword 0xF0618010
    lfs f3, 0xc(r1)
    opword 0xF0010044
    opword 0x100D602A
    lfs f6, 0x10(r1)
    stfs f2, 0x80(r1)
    stfs f5, 0x84(r1)
    opword 0xF3418028
    opword 0xF3618034
    opword 0xF381801C
    opword 0xF3A18040
    stfs f4, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f6, 0x94(r1)
    opword 0xF3C18064
    opword 0xF3E18070
    opword 0xF1A18058
    opword 0xF181807C
    opword 0xF001804C
    lfs f1, 0x18(r5)
    cmpwi r8, 0x0
    lfs f0, 0x18(r6)
    fmuls f1, f1, f2
    stfs f4, -0x8000(r3)
    fmuls f0, f0, f5
    lfs f2, 0x18(r7)
    stfs f3, -0x8000(r3)
    fmuls f2, f2, f8
    fadds f0, f1, f0
    lfs f5, 0x44(r1)
    lfs f4, 0x48(r1)
    lfs f3, 0x4c(r1)
    fadds f1, f2, f0
    stfs f5, 0x98(r1)
    stfs f4, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f1, 0xa4(r1)
    stfs f6, -0x8000(r3)
    beq lbl_801CA80C
    lfs f0, lbl_804A1B84
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
lbl_801CA80C:
    lfs f0, 0x98(r1)
    cmpwi r8, 0x0
    lfs f2, 0x9c(r1)
    stfs f0, -0x8000(r3)
    lfs f0, 0xa0(r1)
    stfs f2, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801CA838
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
lbl_801CA838:
    addi r10, r10, 0x1
    bdnz lbl_801CA66C
lbl_801CA840:
    opword 0xE3E10108
    lfd f31, 0x100(r1)
    opword 0xE3C100F8
    lfd f30, 0xf0(r1)
    opword 0xE3A100E8
    lfd f29, 0xe0(r1)
    opword 0xE38100D8
    lfd f28, 0xd0(r1)
    opword 0xE36100C8
    lfd f27, 0xc0(r1)
    opword 0xE34100B8
    lfd f26, 0xb0(r1)
    addi r1, r1, 0x110
    blr
}

// ----------------------------------------------------------------------------
// fn_801CA878
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CA878() {
    nofralloc
    stwu r1, -0xc0(r1)
    stfd f31, 0xb0(r1)
    opword 0xF3E100B8
    lfs f3, lbl_804A1B84
    lis r3, 0xcc01
    lfs f2, lbl_804A1B90
    clrlwi. r0, r7, 31
    lfs f0, lbl_804A1B94
    fmuls f8, f2, f3
    opword 0xE1660000
    fmuls f0, f0, f3
    opword 0xE0A40000
    opword 0xE1850000
    fsubs f1, f8, f3
    fadds f0, f0, f3
    opword 0xE084000C
    opword 0x114B0218
    opword 0xE065000C
    fadds f7, f2, f1
    fadds f6, f2, f0
    opword 0xE1668008
    opword 0x13E501D8
    opword 0xE0A48008
    opword 0x11AC0198
    opword 0xE1858008
    opword 0x112401D8
    opword 0xE0848014
    opword 0xF3E10020
    opword 0x10430198
    opword 0x13E501D8
    opword 0xE0658014
    opword 0xF1A1002C
    opword 0x11AC0198
    opword 0xE0210020
    opword 0xE001002C
    opword 0xF121005C
    opword 0x112401D8
    opword 0x1181002A
    opword 0xF0410068
    opword 0x10A05090
    opword 0x10430198
    opword 0xE021005C
    opword 0xF1810014
    opword 0x119F682A
    opword 0xE0010068
    opword 0xE0810014
    opword 0xF1410038
    opword 0x114B0218
    opword 0x1161002A
    opword 0x1064282A
    lfs f1, 0x18(r4)
    lfs f0, 0x18(r5)
    opword 0xF1610050
    opword 0x1169102A
    fmuls f1, f1, f7
    opword 0xF0610008
    opword 0x106C502A
    fmuls f0, f0, f6
    lfs f5, 0x8(r1)
    opword 0xF1418040
    lfs f4, 0xc(r1)
    fadds f0, f1, f0
    stfs f5, -0x8000(r3)
    opword 0xE146000C
    opword 0xF1218064
    opword 0x112A0218
    opword 0xE1468014
    stfs f5, 0x8c(r1)
    opword 0xE0A10050
    opword 0xF0418070
    opword 0x10204890
    lfs f2, 0x18(r6)
    opword 0xF1210074
    opword 0x112A0218
    fmuls f2, f2, f8
    opword 0xF0618010
    lfs f3, 0x10(r1)
    stfs f4, -0x8000(r3)
    stfs f4, 0x90(r1)
    opword 0x1085082A
    fadds f1, f2, f0
    stfs f3, 0x94(r1)
    opword 0xF0810044
    opword 0x108B482A
    stfs f3, -0x8000(r3)
    lfs f3, 0x44(r1)
    opword 0xF081804C
    lfs f2, 0x48(r1)
    lfs f0, 0x4c(r1)
    stfs f7, 0x80(r1)
    stfs f6, 0x84(r1)
    stfs f8, 0x88(r1)
    opword 0xF3E18028
    opword 0xF1A18034
    opword 0xF181801C
    opword 0xF1618058
    opword 0xF121807C
    stfs f3, 0x98(r1)
    stfs f2, 0x9c(r1)
    stfs f0, 0xa0(r1)
    stfs f1, 0xa4(r1)
    beq lbl_801CAA1C
    lfs f0, lbl_804A1B84
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
lbl_801CAA1C:
    lfs f0, 0x98(r1)
    lis r3, 0xcc01
    lfs f2, 0x9c(r1)
    cmpwi r0, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, 0xa0(r1)
    stfs f2, -0x8000(r3)
    stfs f0, -0x8000(r3)
    beq lbl_801CAA4C
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    stfs f1, -0x8000(r3)
lbl_801CAA4C:
    opword 0xE3E100B8
    lfd f31, 0xb0(r1)
    addi r1, r1, 0xc0
    blr
}

// ----------------------------------------------------------------------------
// fn_801CAA5C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CAA5C() {
    nofralloc
    stwu r1, -0x380(r1)
    mflr r0
    stw r0, 0x384(r1)
    stfd f31, 0x370(r1)
    opword 0xF3E10378
    stfd f30, 0x360(r1)
    opword 0xF3C10368
    stfd f29, 0x350(r1)
    opword 0xF3A10358
    stfd f28, 0x340(r1)
    opword 0xF3810348
    stfd f27, 0x330(r1)
    opword 0xF3610338
    stfd f26, 0x320(r1)
    opword 0xF3410328
    stfd f25, 0x310(r1)
    opword 0xF3210318
    stfd f24, 0x300(r1)
    opword 0xF3010308
    addi r11, r1, 0x300
    bl _savegpr_20
    lfs f2, lbl_804A1B80
    lis r11, 0x4330
    lfs f30, lbl_804A1B90
    xoris r3, r4, 0x8000
    lfs f31, lbl_804A1B94
    xoris r0, r5, 0x8000
    fmuls f11, f30, f2
    opword 0xE0A80000
    fmuls f0, f31, f2
    stw r11, 0x2c0(r1)
    lfd f29, lbl_804A1B98
    mr r22, r4
    fsubs f1, f11, f2
    stw r3, 0x2c4(r1)
    fadds f0, f0, f2
    opword 0xE3060000
    stw r11, 0x2c8(r1)
    opword 0x10E502D8
    fadds f8, f30, f1
    lfd f1, 0x2c0(r1)
    fadds f10, f30, f0
    stw r0, 0x2cc(r1)
    opword 0xE0C70000
    fsubs f1, f1, f29
    opword 0x11B80218
    lfd f0, 0x2c8(r1)
    opword 0x11860298
    opword 0xE3068008
    fsubs f3, f0, f29
    opword 0xE0C78008
    fres f28, f1
    opword 0xE0A88008
    opword 0xF1A100D4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    opword 0x112D602A
    opword 0xF18100E0
    opword 0x11B80218
    mr r26, r8
    opword 0x11860298
    opword 0xF0E100EC
    opword 0xF12100C8
    opword 0x10803890
    opword 0x10E502D8
    mr r27, r10
    opword 0xE0A100C8
    opword 0x112D602A
    fres f27, f3
    stfs f8, 0x23c(r1)
    stfs f10, 0x240(r1)
    stfs f11, 0x244(r1)
    opword 0xF1A180DC
    opword 0xF18180E8
    opword 0x10C5202A
    opword 0xF12180D0
    opword 0x105CE02A
    opword 0x101C0732
    opword 0xF0E180F4
    opword 0x10BBD82A
    opword 0x109B06F2
    opword 0xF0C100BC
    opword 0x10C9382A
    opword 0x1381103C
    opword 0x1363293C
    opword 0xF0C180C4
    opword 0xE046000C
    cmpwi r4, 0x1
    opword 0xE087000C
    li r28, 0x1
    opword 0x10C20218
    opword 0xE0460018
    opword 0x10A40298
    opword 0xE0270018
    opword 0x10420218
    lfs f9, 0x24(r8)
    opword 0xF0C10110
    opword 0x10210298
    opword 0xE0878014
    fmuls f9, f9, f11
    opword 0xF041014C
    opword 0xE0468014
    opword 0xF0A1011C
    opword 0x10A40298
    opword 0x10C20218
    opword 0xE0468020
    lfs f7, 0x24(r6)
    opword 0x10420218
    lfs f4, 0x24(r7)
    fmuls f8, f7, f8
    fmuls f7, f4, f10
    opword 0xE068000C
    opword 0xE0080018
    opword 0xF0210158
    opword 0x106302D8
    fadds f7, f8, f7
    opword 0x100002D8
    opword 0xE1810110
    opword 0xE081011C
    fadds f7, f9, f7
    opword 0xF0610128
    opword 0x108C202A
    opword 0xE0688014
    opword 0xF0010164
    opword 0xE0088020
    opword 0x106302D8
    opword 0xF0810104
    opword 0x1086282A
    opword 0x100002D8
    opword 0xE0278020
    opword 0xE121014C
    opword 0x10210298
    opword 0xE1010158
    opword 0xE1610104
    opword 0x1309402A
    opword 0xE1210128
    lfs f10, 0xbc(r1)
    opword 0x116B482A
    opword 0xE1010164
    opword 0xF3010140
    opword 0x1302082A
    lfs f25, 0xc0(r1)
    opword 0xF16100F8
    opword 0xE1210140
    opword 0x1164182A
    lfs f26, 0xc4(r1)
    opword 0x1109402A
    lfs f13, 0xf8(r1)
    opword 0xF1618100
    lfs f12, 0xfc(r1)
    opword 0xF1010134
    opword 0x1118002A
    lfs f11, 0x100(r1)
    stfs f10, 0x270(r1)
    lfs f10, 0x134(r1)
    opword 0xF101813C
    lfs f9, 0x138(r1)
    lfs f8, 0x13c(r1)
    stfs f25, 0x274(r1)
    stfs f26, 0x278(r1)
    opword 0xF0C18118
    opword 0xF0A18124
    opword 0xF081810C
    opword 0xF0618130
    stfs f13, 0x27c(r1)
    stfs f12, 0x280(r1)
    stfs f11, 0x284(r1)
    opword 0xF0418154
    opword 0xF0218160
    opword 0xF3018148
    opword 0xF001816C
    stfs f10, 0x288(r1)
    stfs f9, 0x28c(r1)
    stfs f8, 0x290(r1)
    stfs f7, 0x294(r1)
    blt lbl_801CB304
    slwi r3, r5, 1
    rlwinm r30, r9, 0, 27, 27
    addi r31, r3, 0x2
    clrlwi r29, r9, 31
    lis r21, 0xcc01
    b lbl_801CB2FC
lbl_801CAD38:
    xoris r0, r28, 0x8000
    lwz r10, 0x270(r1)
    stw r0, 0x2c4(r1)
    lwz r9, 0x274(r1)
    lfd f0, 0x2c0(r1)
    lwz r8, 0x278(r1)
    fsubs f0, f0, f29
    lwz r7, 0x27c(r1)
    lwz r6, 0x280(r1)
    lwz r5, 0x284(r1)
    fmuls f4, f0, f28
    lwz r4, 0x288(r1)
    lwz r3, 0x28c(r1)
    lwz r0, 0x290(r1)
    fmuls f0, f4, f4
    lfs f3, 0x294(r1)
    opword 0xE1B80000
    opword 0xE0F90000
    fmuls f11, f30, f0
    opword 0xE0BA0000
    fmuls f0, f31, f0
    opword 0xE058000C
    stw r10, 0x298(r1)
    fsubs f1, f11, f4
    fadds f0, f0, f4
    stw r9, 0x29c(r1)
    opword 0x108502D8
    opword 0xE0BA8008
    fadds f10, f30, f1
    fadds f9, f30, f0
    opword 0xF0810038
    opword 0x108502D8
    opword 0x118D0298
    opword 0xE1B88008
    opword 0x10C70258
    opword 0x11020298
    opword 0xE0F98008
    opword 0xF1810020
    opword 0x118D0298
    opword 0xE0010038
    opword 0xF0C1002C
    opword 0xE0A10020
    opword 0x10C70258
    opword 0xE021002C
    opword 0xE0588014
    opword 0x10A5082A
    opword 0xF101005C
    opword 0x11020298
    stw r8, 0x2a0(r1)
    opword 0xF0A10014
    opword 0x10AC302A
    opword 0xE0210014
    stw r7, 0x2a4(r1)
    opword 0x1001002A
    stw r6, 0x2a8(r1)
    opword 0xF0010008
    opword 0x1005202A
    lfs f2, 0x8(r1)
    opword 0xF0018010
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r1)
    stw r5, 0x2ac(r1)
    stw r4, 0x2b0(r1)
    stw r3, 0x2b4(r1)
    stw r0, 0x2b8(r1)
    stfs f3, 0x2bc(r1)
    stfs f10, 0x230(r1)
    stfs f9, 0x234(r1)
    stfs f11, 0x238(r1)
    stfs f10, 0x23c(r1)
    stfs f9, 0x240(r1)
    stfs f11, 0x244(r1)
    opword 0xF1818028
    opword 0xF0C18034
    opword 0xF0A1801C
    opword 0xF0818040
    stfs f2, 0x248(r1)
    stfs f1, 0x24c(r1)
    stfs f0, 0x250(r1)
    opword 0xF1018064
    opword 0xE059000C
    clrlwi r5, r31, 16
    opword 0xE0180018
    li r3, 0x98
    opword 0x10A20258
    opword 0xE0F90018
    opword 0x10400298
    opword 0xE001005C
    opword 0x10270258
    opword 0xE0DA0018
    opword 0x1080282A
    opword 0xF0410098
    opword 0xE0598014
    opword 0x11A602D8
    opword 0xF0A10068
    li r4, 0x0
    opword 0x10A20258
    opword 0xE0188020
    opword 0xE07A000C
    opword 0x10400298
    opword 0xE0C10098
    opword 0xF0810050
    opword 0x10000890
    opword 0xE0F98020
    opword 0x106302D8
    opword 0xF02100A4
    opword 0x10270258
    opword 0x1006002A
    opword 0xF0610074
    opword 0x1088282A
    lfs f7, 0x24(r24)
    opword 0xF001008C
    opword 0x1002082A
    fmuls f7, f7, f10
    opword 0xE07A8014
    lfs f8, 0x24(r26)
    opword 0x106302D8
    opword 0xE0DA8020
    opword 0xF1A100B0
    opword 0x11A602D8
    lfs f6, 0x24(r25)
    opword 0xE3010050
    fmuls f6, f6, f9
    opword 0xE1810074
    opword 0xE141008C
    opword 0x1318602A
    lwz r20, 0x248(r1)
    lwz r12, 0x24c(r1)
    lwz r11, 0x250(r1)
    fadds f6, f7, f6
    opword 0xF3010044
    fmuls f8, f8, f11
    opword 0xE12100B0
    opword 0x1304182A
    lfs f12, 0x44(r1)
    opword 0x10EA482A
    lfs f11, 0x48(r1)
    fadds f6, f8, f6
    opword 0xF301804C
    opword 0xF0E10080
    opword 0x10E0682A
    lfs f10, 0x4c(r1)
    lfs f9, 0x80(r1)
    opword 0xF0E18088
    lfs f8, 0x84(r1)
    lfs f7, 0x88(r1)
    stfs f12, 0x254(r1)
    stfs f11, 0x258(r1)
    lwz r10, 0x254(r1)
    stfs f10, 0x25c(r1)
    lwz r9, 0x258(r1)
    stfs f9, 0x260(r1)
    lwz r8, 0x25c(r1)
    stfs f8, 0x264(r1)
    lwz r7, 0x260(r1)
    stfs f7, 0x268(r1)
    lwz r6, 0x264(r1)
    lwz r0, 0x268(r1)
    opword 0xF0A18070
    opword 0xF0818058
    opword 0xF061807C
    opword 0xF04180A0
    opword 0xF02180AC
    opword 0xF0018094
    opword 0xF1A180B8
    stfs f6, 0x26c(r1)
    stw r20, 0x270(r1)
    stw r12, 0x274(r1)
    stw r11, 0x278(r1)
    stw r10, 0x27c(r1)
    stw r9, 0x280(r1)
    stw r8, 0x284(r1)
    stw r7, 0x288(r1)
    stw r6, 0x28c(r1)
    stw r0, 0x290(r1)
    stfs f6, 0x294(r1)
    bl GXBegin
    cmpwi r30, 0x0
    beq lbl_801CB180
    cmpwi r23, 0x0
    li r4, 0x0
    blt lbl_801CB2F8
    addi r0, r23, 0x1
    mr r3, r27
    mtctr r0
    blt lbl_801CB2F8
lbl_801CB020:
    lfs f5, 0x4(r3)
    cmpwi r29, 0x0
    opword 0xE04102B0
    lfs f6, 0x0(r3)
    opword 0x10620158
    opword 0xE00102A4
    opword 0xE04182B8
    opword 0x10200198
    opword 0xE00182AC
    opword 0xF0610200
    opword 0x10620158
    opword 0xE0810298
    opword 0xF021020C
    opword 0x10200198
    opword 0xE0410200
    opword 0xE001020C
    opword 0xF0618208
    opword 0x1000102A
    opword 0xF0218214
    opword 0xF0010218
    opword 0x1001182A
    opword 0xE0210218
    opword 0xF0018220
    opword 0x1021202A
    opword 0xE08182A0
    opword 0xF0210224
    opword 0x1020202A
    lfs f0, 0x224(r1)
    opword 0xF021822C
    lfs f1, 0x228(r1)
    stfs f0, -0x8000(r21)
    lfs f0, 0x22c(r1)
    stfs f1, -0x8000(r21)
    stfs f0, -0x8000(r21)
    beq lbl_801CB0CC
    xoris r0, r4, 0x8000
    lfs f1, 0x2bc(r1)
    stw r0, 0x2cc(r1)
    lfd f0, 0x2c8(r1)
    fsubs f0, f0, f29
    fmuls f0, f27, f0
    stfs f0, -0x8000(r21)
    stfs f1, -0x8000(r21)
lbl_801CB0CC:
    opword 0xE001027C
    cmpwi r29, 0x0
    opword 0xE0410288
    opword 0x10200198
    opword 0xE0018284
    opword 0x10620158
    opword 0xE0418290
    opword 0xE0810270
    opword 0xF02101DC
    opword 0x10200198
    opword 0xF06101D0
    opword 0x10620158
    opword 0xE00101DC
    opword 0xE04101D0
    opword 0xF02181E4
    opword 0x1000102A
    opword 0xF06181D8
    opword 0xF00101E8
    opword 0x1001182A
    opword 0xE02101E8
    opword 0xF00181F0
    opword 0x1021202A
    opword 0xE0818278
    opword 0xF02101F4
    opword 0x1020202A
    lfs f0, 0x1f4(r1)
    opword 0xF02181FC
    lfs f1, 0x1f8(r1)
    stfs f0, -0x8000(r21)
    lfs f0, 0x1fc(r1)
    stfs f1, -0x8000(r21)
    stfs f0, -0x8000(r21)
    beq lbl_801CB170
    xoris r0, r4, 0x8000
    lfs f1, 0x294(r1)
    stw r0, 0x2c4(r1)
    lfd f0, 0x2c0(r1)
    fsubs f0, f0, f29
    fmuls f0, f27, f0
    stfs f0, -0x8000(r21)
    stfs f1, -0x8000(r21)
lbl_801CB170:
    addi r3, r3, 0x8
    addi r4, r4, 0x1
    bdnz lbl_801CB020
    b lbl_801CB2F8
lbl_801CB180:
    cmpwi r23, 0x0
    li r4, 0x0
    blt lbl_801CB2F8
    addi r0, r23, 0x1
    mr r3, r27
    mtctr r0
    blt lbl_801CB2F8
lbl_801CB19C:
    lfs f5, 0x4(r3)
    cmpwi r29, 0x0
    opword 0xE0410288
    lfs f6, 0x0(r3)
    opword 0x10620158
    opword 0xE001027C
    opword 0xE0418290
    opword 0x10200198
    opword 0xE0018284
    opword 0xF06101A0
    opword 0x10620158
    opword 0xE0810270
    opword 0xF02101AC
    opword 0x10200198
    opword 0xE04101A0
    opword 0xE00101AC
    opword 0xF06181A8
    opword 0x1000102A
    opword 0xF02181B4
    opword 0xF00101B8
    opword 0x1001182A
    opword 0xE02101B8
    opword 0xF00181C0
    opword 0x1021202A
    opword 0xE0818278
    opword 0xF02101C4
    opword 0x1020202A
    lfs f0, 0x1c4(r1)
    opword 0xF02181CC
    lfs f1, 0x1c8(r1)
    stfs f0, -0x8000(r21)
    lfs f0, 0x1cc(r1)
    stfs f1, -0x8000(r21)
    stfs f0, -0x8000(r21)
    beq lbl_801CB248
    xoris r0, r4, 0x8000
    lfs f1, 0x294(r1)
    stw r0, 0x2cc(r1)
    lfd f0, 0x2c8(r1)
    fsubs f0, f0, f29
    fmuls f0, f27, f0
    stfs f0, -0x8000(r21)
    stfs f1, -0x8000(r21)
lbl_801CB248:
    opword 0xE00102A4
    cmpwi r29, 0x0
    opword 0xE04102B0
    opword 0x10200198
    opword 0xE00182AC
    opword 0x10620158
    opword 0xE04182B8
    opword 0xE0810298
    opword 0xF021017C
    opword 0x10200198
    opword 0xF0610170
    opword 0x10620158
    opword 0xE001017C
    opword 0xE0410170
    opword 0xF0218184
    opword 0x1000102A
    opword 0xF0618178
    opword 0xF0010188
    opword 0x1001182A
    opword 0xE0210188
    opword 0xF0018190
    opword 0x1021202A
    opword 0xE08182A0
    opword 0xF0210194
    opword 0x1020202A
    lfs f0, 0x194(r1)
    opword 0xF021819C
    lfs f1, 0x198(r1)
    stfs f0, -0x8000(r21)
    lfs f0, 0x19c(r1)
    stfs f1, -0x8000(r21)
    stfs f0, -0x8000(r21)
    beq lbl_801CB2EC
    xoris r0, r4, 0x8000
    lfs f1, 0x2bc(r1)
    stw r0, 0x2c4(r1)
    lfd f0, 0x2c0(r1)
    fsubs f0, f0, f29
    fmuls f0, f27, f0
    stfs f0, -0x8000(r21)
    stfs f1, -0x8000(r21)
lbl_801CB2EC:
    addi r3, r3, 0x8
    addi r4, r4, 0x1
    bdnz lbl_801CB19C
lbl_801CB2F8:
    addi r28, r28, 0x1
lbl_801CB2FC:
    cmpw r28, r22
    ble lbl_801CAD38
lbl_801CB304:
    opword 0xE3E10378
    lfd f31, 0x370(r1)
    opword 0xE3C10368
    lfd f30, 0x360(r1)
    opword 0xE3A10358
    lfd f29, 0x350(r1)
    opword 0xE3810348
    lfd f28, 0x340(r1)
    opword 0xE3610338
    lfd f27, 0x330(r1)
    opword 0xE3410328
    lfd f26, 0x320(r1)
    opword 0xE3210318
    lfd f25, 0x310(r1)
    opword 0xE3010308
    addi r11, r1, 0x300
    lfd f24, 0x300(r1)
    bl _restgpr_20
    lwz r0, 0x384(r1)
    mtlr r0
    addi r1, r1, 0x380
    blr
}

// ----------------------------------------------------------------------------
// fn_801CB35C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CB35C() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_801CB360
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CB360() {
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    stfd f31, 0xe0(r1)
    opword 0xF3E100E8
    stfd f30, 0xd0(r1)
    opword 0xF3C100D8
    stfd f29, 0xc0(r1)
    opword 0xF3A100C8
    addi r11, r1, 0xc0
    bl _savegpr_15
    lwz r22, 0x0(r4)
    lis r0, 0x4330
    mr r26, r3
    stw r0, 0x68(r1)
    lwz r3, 0x24(r22)
    mr r27, r4
    stw r0, 0x70(r1)
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bl fn_801C3624
    lwz r12, 0x0(r26)
    mr r23, r3
    mr r3, r26
    mr r4, r22
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    mr r21, r3
    mr r3, r26
    mr r4, r23
    bl fn_801CB6AC
    lwz r12, 0x0(r26)
    mr r24, r3
    mr r3, r26
    lwz r12, 0x10(r12)
    mr r4, r24
    mtctr r12
    bctrl
    lwz r12, 0x0(r26)
    mr r20, r3
    mr r3, r26
    mr r4, r24
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    mr r19, r3
    mr r3, r26
    mr r4, r22
    bl fn_801C6B84
    lbz r0, 0xa9(r23)
    mr r25, r3
    lfd f2, lbl_804A1B98
    mullw r4, r25, r28
    extsb r0, r0
    lfs f0, lbl_804A1BA0
    li r3, 0x98
    xoris r0, r0, 0x8000
    stw r0, 0x6c(r1)
    lfd f1, 0x68(r1)
    addi r0, r4, 0x1
    clrlslwi r5, r0, 17, 1
    li r4, 0x0
    fsubs f1, f1, f2
    fmuls f30, f0, f1
    bl GXBegin
    mr r3, r26
    mr r4, r23
    bl fn_801CB6B8
    cmpwi r3, 0x40
    beq lbl_801CB4B0
    bge lbl_801CB48C
    cmpwi r3, 0x0
lbl_801CB48C:
    subi r0, r25, 0x1
    lfd f1, lbl_804A1B98
    xoris r0, r0, 0x8000
    stw r0, 0x74(r1)
    lfd f0, 0x70(r1)
    fsubs f1, f0, f1
    bl fn_801C6B98
    fmr f29, f1
    b lbl_801CB4B4
lbl_801CB4B0:
    lfs f29, lbl_804A1B84
lbl_801CB4B4:
    cmpwi r24, 0x0
    li r18, 0x0
    li r17, 0x1
    beq lbl_801CB4CC
    subi r18, r25, 0x1
    li r17, -0x1
lbl_801CB4CC:
    addi r3, r1, 0x10
    bl fn_801CB6C4
    addi r3, r1, 0x2c
    bl fn_801CB6C4
    addi r3, r1, 0x48
    bl fn_801CB6C4
    mr r12, r20
    mr r3, r22
    li r16, 0x0
    li r15, 0x0
    mtctr r12
    bctrl
    xoris r0, r18, 0x8000
    mr r20, r3
    stw r0, 0x6c(r1)
    fmr f1, f30
    lfd f2, lbl_804A1B98
    mr r3, r26
    lfd f0, 0x68(r1)
    mr r5, r27
    stw r31, 0x8(r1)
    fsubs f0, f0, f2
    mr r6, r29
    mr r7, r20
    mr r8, r21
    mr r10, r30
    addi r4, r1, 0x10
    fmuls f2, f29, f0
    addi r9, r20, 0xac
    bl fn_801C9DE8
    mr r12, r19
    mr r3, r22
    mr r4, r20
    add r18, r18, r17
    mtctr r12
    bctrl
    lis r4, 0x5555
    lfd f31, lbl_804A1B98
    mr r23, r3
    addi r25, r4, 0x5556
    b lbl_801CB624
lbl_801CB570:
    addi r4, r15, 0x1
    xoris r0, r18, 0x8000
    mulhw r3, r25, r4
    stw r0, 0x74(r1)
    mr r20, r16
    fmr f1, f30
    lfd f0, 0x70(r1)
    mr r16, r15
    srwi r0, r3, 31
    fsubs f0, f0, f31
    add r0, r3, r0
    addi r24, r1, 0x10
    mulli r0, r0, 0x3
    stw r31, 0x8(r1)
    fmuls f2, f29, f0
    mr r3, r26
    subf r15, r0, r4
    mr r5, r27
    mulli r0, r15, 0x1c
    mr r6, r29
    mr r7, r23
    mr r8, r21
    add r24, r24, r0
    mr r10, r30
    mr r4, r24
    addi r9, r23, 0xac
    bl fn_801C9DE8
    mulli r9, r20, 0x1c
    addi r5, r1, 0x10
    mr r3, r26
    mr r6, r5
    mulli r0, r16, 0x1c
    mr r4, r28
    mr r7, r24
    mr r8, r29
    add r5, r5, r9
    add r6, r6, r0
    bl fn_801CA5E8
    mr r12, r19
    mr r3, r22
    mr r4, r23
    mtctr r12
    bctrl
    mr r23, r3
    add r18, r18, r17
lbl_801CB624:
    cmpwi r23, 0x0
    bne lbl_801CB570
    mulli r0, r15, 0x1c
    addi r15, r1, 0x10
    mr r3, r26
    mr r17, r15
    add r15, r15, r0
    mr r4, r28
    mulli r0, r16, 0x1c
    mr r8, r29
    mr r6, r15
    mr r7, r15
    add r17, r17, r0
    mr r5, r17
    bl fn_801CA5E8
    mr r3, r26
    mr r4, r17
    mr r5, r15
    mr r6, r15
    mr r7, r29
    bl fn_801CA878
    bl fn_801CB35C
    opword 0xE3E100E8
    lfd f31, 0xe0(r1)
    opword 0xE3C100D8
    lfd f30, 0xd0(r1)
    opword 0xE3A100C8
    addi r11, r1, 0xc0
    lfd f29, 0xc0(r1)
    bl _restgpr_15
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

// ----------------------------------------------------------------------------
// fn_801CB6AC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CB6AC() {
    nofralloc
    lhz r0, 0x0(r4)
    rlwinm r3, r0, 0, 20, 20
    blr
}

// ----------------------------------------------------------------------------
// fn_801CB6B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CB6B8() {
    nofralloc
    lbz r0, 0xb2(r4)
    rlwinm r3, r0, 0, 24, 25
    blr
}

// ----------------------------------------------------------------------------
// fn_801CB6C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CB6C4() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_801CB6C8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CB6C8() {
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
    addi r11, r1, 0x110
    bl _savegpr_15
    lwz r22, 0x0(r4)
    lis r0, 0x4330
    mr r26, r3
    stw r0, 0xb8(r1)
    lwz r3, 0x24(r22)
    mr r27, r4
    stw r0, 0xc0(r1)
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    bl fn_801C3624
    lwz r12, 0x0(r26)
    mr r23, r3
    mr r3, r26
    mr r4, r22
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    mr r21, r3
    mr r3, r26
    mr r4, r23
    bl fn_801CB6AC
    lwz r12, 0x0(r26)
    mr r24, r3
    mr r3, r26
    lwz r12, 0x10(r12)
    mr r4, r24
    mtctr r12
    bctrl
    lwz r12, 0x0(r26)
    mr r20, r3
    mr r3, r26
    mr r4, r24
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    mr r19, r3
    mr r3, r26
    mr r4, r22
    bl fn_801C6B84
    lbz r0, 0xa9(r23)
    mr r25, r3
    lfd f2, lbl_804A1B98
    mullw r4, r25, r28
    extsb r0, r0
    lfs f0, lbl_804A1BA0
    li r3, 0x98
    xoris r0, r0, 0x8000
    stw r0, 0xbc(r1)
    lfd f1, 0xb8(r1)
    addi r0, r4, 0x1
    clrlslwi r5, r0, 17, 1
    li r4, 0x0
    fsubs f1, f1, f2
    fmuls f30, f0, f1
    bl GXBegin
    mr r3, r26
    mr r4, r23
    bl fn_801CB6B8
    cmpwi r3, 0x40
    beq lbl_801CB814
    bge lbl_801CB7F4
    cmpwi r3, 0x0
lbl_801CB7F4:
    xoris r0, r25, 0x8000
    lfd f2, lbl_804A1B98
    stw r0, 0xc4(r1)
    lfs f0, lbl_804A1B90
    lfd f1, 0xc0(r1)
    fsubs f1, f1, f2
    fdivs f29, f0, f1
    b lbl_801CB818
lbl_801CB814:
    lfs f29, lbl_804A1B90
lbl_801CB818:
    cmpwi r24, 0x0
    li r18, -0x1
    li r17, 0x2
    beq lbl_801CB834
    slwi r3, r25, 1
    li r17, -0x2
    addi r18, r3, 0x1
lbl_801CB834:
    addi r3, r1, 0x28
    bl fn_801CB6C4
    addi r3, r1, 0x44
    bl fn_801CB6C4
    addi r3, r1, 0x60
    bl fn_801CB6C4
    addi r3, r1, 0x7c
    bl fn_801CB6C4
    addi r3, r1, 0x98
    bl fn_801CB6C4
    addi r3, r1, 0x1c
    bl fn_8002AF5C
    addi r3, r1, 0x10
    bl fn_8002AF5C
    mr r12, r20
    mr r3, r22
    mtctr r12
    bctrl
    xoris r0, r18, 0x8000
    mr r15, r3
    stw r0, 0xbc(r1)
    fmr f1, f30
    lfd f2, lbl_804A1B98
    mr r3, r26
    lfd f0, 0xb8(r1)
    mr r5, r27
    stw r31, 0x8(r1)
    fsubs f0, f0, f2
    mr r6, r29
    mr r7, r15
    mr r8, r21
    mr r10, r30
    addi r4, r1, 0x7c
    fmuls f2, f29, f0
    addi r9, r15, 0xac
    bl fn_801C9DE8
    mr r12, r19
    mr r3, r22
    mr r4, r15
    mtctr r12
    bctrl
    add r18, r18, r17
    mr r15, r3
    xoris r0, r18, 0x8000
    lfd f2, lbl_804A1B98
    stw r0, 0xc4(r1)
    fmr f1, f30
    mr r3, r26
    mr r5, r27
    lfd f0, 0xc0(r1)
    mr r6, r29
    stw r31, 0x8(r1)
    fsubs f0, f0, f2
    mr r7, r15
    mr r8, r21
    mr r10, r30
    addi r4, r1, 0x98
    addi r9, r15, 0xac
    fmuls f2, f29, f0
    bl fn_801C9DE8
    mr r12, r19
    mr r3, r22
    mr r4, r15
    mtctr r12
    bctrl
    lis r4, 0x5555
    lfd f31, lbl_804A1B98
    mr r23, r3
    add r18, r18, r17
    addi r25, r4, 0x5556
    li r16, 0x3
    li r15, 0x4
    b lbl_801CBA0C
lbl_801CB958:
    addi r4, r15, 0x1
    xoris r0, r18, 0x8000
    mulhw r3, r25, r4
    stw r0, 0xbc(r1)
    mr r20, r16
    fmr f1, f30
    lfd f0, 0xb8(r1)
    mr r16, r15
    srwi r0, r3, 31
    fsubs f0, f0, f31
    add r0, r3, r0
    addi r24, r1, 0x28
    mulli r0, r0, 0x3
    stw r31, 0x8(r1)
    fmuls f2, f29, f0
    mr r3, r26
    subf r15, r0, r4
    mr r5, r27
    mulli r0, r15, 0x1c
    mr r6, r29
    mr r7, r23
    mr r8, r21
    add r24, r24, r0
    mr r10, r30
    mr r4, r24
    addi r9, r23, 0xac
    bl fn_801C9DE8
    mulli r9, r20, 0x1c
    addi r5, r1, 0x28
    mr r3, r26
    mr r6, r5
    mulli r0, r16, 0x1c
    mr r4, r28
    mr r7, r24
    mr r8, r29
    add r5, r5, r9
    add r6, r6, r0
    bl fn_801CA5E8
    mr r12, r19
    mr r3, r22
    mr r4, r23
    mtctr r12
    bctrl
    mr r23, r3
    add r18, r18, r17
lbl_801CBA0C:
    cmpwi r23, 0x0
    bne lbl_801CB958
    xoris r0, r18, 0x8000
    lfd f1, lbl_804A1B98
    stw r0, 0xc4(r1)
    mulli r4, r15, 0x1c
    addi r15, r1, 0x28
    lfd f0, 0xc0(r1)
    mr r3, r26
    mr r5, r15
    mr r8, r29
    fsubs f0, f0, f1
    add r15, r15, r4
    mulli r0, r16, 0x1c
    mr r4, r28
    mr r6, r15
    fmuls f0, f29, f0
    add r5, r5, r0
    addi r7, r1, 0x7c
    stfs f0, 0x94(r1)
    bl fn_801CA5E8
    add r18, r18, r17
    lfd f1, lbl_804A1B98
    xoris r0, r18, 0x8000
    mr r3, r26
    stw r0, 0xbc(r1)
    mr r4, r28
    mr r5, r15
    mr r8, r29
    lfd f0, 0xb8(r1)
    addi r6, r1, 0x7c
    addi r7, r1, 0x98
    fsubs f0, f0, f1
    fmuls f0, f29, f0
    stfs f0, 0xb0(r1)
    bl fn_801CA5E8
    mr r3, r26
    mr r4, r15
    mr r7, r29
    addi r5, r1, 0x7c
    addi r6, r1, 0x98
    bl fn_801CA878
    bl fn_801CB35C
    opword 0xE3E10138
    lfd f31, 0x130(r1)
    opword 0xE3C10128
    lfd f30, 0x120(r1)
    opword 0xE3A10118
    addi r11, r1, 0x110
    lfd f29, 0x110(r1)
    bl _restgpr_15
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// ----------------------------------------------------------------------------
// fn_801CBAE8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CBAE8() {
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stfd f31, 0x140(r1)
    opword 0xF3E10148
    stfd f30, 0x130(r1)
    opword 0xF3C10138
    stfd f29, 0x120(r1)
    opword 0xF3A10128
    addi r11, r1, 0x120
    bl _savegpr_14
    lwz r28, 0x0(r4)
    lis r0, 0x4330
    mr r15, r3
    stw r0, 0xc0(r1)
    lwz r3, 0x24(r28)
    mr r16, r4
    stw r0, 0xc8(r1)
    mr r17, r5
    mr r18, r6
    mr r19, r7
    mr r20, r8
    bl fn_801C3624
    lwz r12, 0x0(r15)
    mr r21, r3
    mr r3, r15
    mr r4, r28
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    mr r27, r3
    mr r3, r15
    mr r4, r21
    bl fn_801CB6AC
    lwz r12, 0x0(r15)
    mr r14, r3
    mr r3, r15
    lwz r12, 0x10(r12)
    mr r4, r14
    mtctr r12
    bctrl
    lwz r12, 0x0(r15)
    mr r23, r3
    mr r3, r15
    mr r4, r14
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lbz r0, 0xa9(r21)
    mr r26, r3
    lfd f2, lbl_804A1B98
    extsb r0, r0
    lfs f0, lbl_804A1BA0
    xoris r0, r0, 0x8000
    lwz r3, 0x0(r16)
    stw r0, 0xc4(r1)
    lfd f1, 0xc0(r1)
    fsubs f1, f1, f2
    fmuls f30, f0, f1
    bl fn_801CBF8C
    mr r5, r3
    addi r3, r1, 0x40
    addi r4, r16, 0xa4
    addi r5, r5, 0xac
    bl fn_8002B0AC
    mr r3, r15
    mr r4, r28
    bl fn_801C6B84
    mr r22, r3
    li r3, 0x98
    addi r0, r22, 0x1
    li r4, 0x0
    mullw r5, r0, r17
    addi r0, r5, 0x1
    clrlslwi r5, r0, 17, 1
    bl GXBegin
    mr r3, r15
    mr r4, r21
    bl fn_801CB6B8
    cmpwi r3, 0x40
    beq lbl_801CBC54
    bge lbl_801CBC34
    cmpwi r3, 0x0
lbl_801CBC34:
    xoris r0, r22, 0x8000
    lfd f1, lbl_804A1B98
    stw r0, 0xcc(r1)
    lfd f0, 0xc8(r1)
    fsubs f1, f0, f1
    bl fn_801C6B98
    fmr f29, f1
    b lbl_801CBC58
lbl_801CBC54:
    lfs f29, lbl_804A1B84
lbl_801CBC58:
    cmpwi r14, 0x0
    li r25, 0x0
    li r24, 0x1
    beq lbl_801CBC70
    mr r25, r22
    li r24, -0x1
lbl_801CBC70:
    addi r3, r1, 0x68
    bl fn_801CB6C4
    addi r3, r1, 0x84
    bl fn_801CB6C4
    addi r3, r1, 0xa0
    bl fn_801CB6C4
    addi r3, r1, 0x34
    li r22, 0x0
    li r21, 0x0
    bl fn_8002AF5C
    addi r3, r1, 0x28
    bl fn_8002AF5C
    mr r12, r23
    mr r3, r28
    mtctr r12
    bctrl
    xoris r0, r25, 0x8000
    mr r23, r3
    stw r0, 0xc4(r1)
    fmr f1, f30
    lfd f2, lbl_804A1B98
    mr r3, r15
    lfd f0, 0xc0(r1)
    mr r5, r16
    stw r20, 0x8(r1)
    fsubs f0, f0, f2
    mr r6, r18
    mr r7, r23
    mr r8, r27
    mr r10, r19
    addi r4, r1, 0x68
    fmuls f2, f29, f0
    addi r9, r23, 0xac
    bl fn_801C9DE8
    cmpwi r14, 0x0
    add r25, r25, r24
    bne lbl_801CBD68
    addi r3, r1, 0x84
    addi r4, r1, 0x68
    li r21, 0x1
    bl fn_801CC00C
    xoris r0, r25, 0x8000
    lfd f1, lbl_804A1B98
    stw r0, 0xcc(r1)
    addi r3, r1, 0x68
    addi r4, r1, 0x40
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f1
    fmuls f0, f29, f0
    stfs f0, 0x9c(r1)
    bl fn_80031AF4
    addi r3, r1, 0x74
    addi r4, r1, 0x40
    bl fn_80031AF4
    addi r5, r1, 0x68
    mr r3, r15
    mr r4, r17
    mr r8, r18
    mr r6, r5
    add r25, r25, r24
    addi r7, r1, 0x84
    bl fn_801CA5E8
lbl_801CBD68:
    mr r12, r26
    mr r3, r28
    mr r4, r23
    mtctr r12
    bctrl
    lis r4, 0x5555
    lfd f31, lbl_804A1B98
    mr r29, r3
    addi r31, r4, 0x5556
    b lbl_801CBE44
lbl_801CBD90:
    addi r4, r21, 0x1
    xoris r0, r25, 0x8000
    mulhw r3, r31, r4
    stw r0, 0xc4(r1)
    mr r23, r22
    fmr f1, f30
    lfd f0, 0xc0(r1)
    mr r22, r21
    srwi r0, r3, 31
    fsubs f0, f0, f31
    add r0, r3, r0
    addi r30, r1, 0x68
    mulli r0, r0, 0x3
    stw r20, 0x8(r1)
    fmuls f2, f29, f0
    mr r3, r15
    subf r21, r0, r4
    mr r5, r16
    mulli r0, r21, 0x1c
    mr r6, r18
    mr r7, r29
    mr r8, r27
    add r30, r30, r0
    mr r10, r19
    mr r4, r30
    addi r9, r29, 0xac
    bl fn_801C9DE8
    mulli r9, r23, 0x1c
    addi r5, r1, 0x68
    mr r3, r15
    mr r6, r5
    mulli r0, r22, 0x1c
    mr r4, r17
    mr r7, r30
    mr r8, r18
    add r5, r5, r9
    add r6, r6, r0
    bl fn_801CA5E8
    mr r12, r26
    mr r3, r28
    mr r4, r29
    mtctr r12
    bctrl
    mr r29, r3
    add r25, r25, r24
lbl_801CBE44:
    cmpwi r29, 0x0
    bne lbl_801CBD90
    cmpwi r14, 0x0
    beq lbl_801CBF0C
    lis r3, 0x5555
    mr r19, r22
    addi r0, r3, 0x5556
    addi r6, r21, 0x1
    mulhw r4, r0, r6
    addi r14, r1, 0x68
    mr r22, r21
    mr r16, r14
    addi r3, r1, 0x10
    addi r5, r1, 0x40
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf r21, r0, r6
    mulli r4, r22, 0x1c
    mulli r0, r21, 0x1c
    add r14, r14, r4
    add r16, r16, r0
    addi r4, r14, 0xc
    bl fn_80047C40
    mr r4, r14
    addi r3, r1, 0x1c
    addi r5, r1, 0x40
    bl fn_80047C40
    xoris r0, r25, 0x8000
    lfd f1, lbl_804A1B98
    stw r0, 0xcc(r1)
    addi r3, r1, 0x4c
    addi r4, r1, 0x1c
    addi r5, r1, 0x10
    lfd f0, 0xc8(r1)
    fsubs f0, f0, f1
    fmuls f1, f29, f0
    bl fn_801CBFD4
    mr r4, r3
    mr r3, r16
    bl fn_801CC00C
    mulli r0, r19, 0x1c
    addi r5, r1, 0x68
    mr r3, r15
    mr r4, r17
    mr r6, r14
    mr r7, r16
    mr r8, r18
    add r5, r5, r0
    bl fn_801CA5E8
lbl_801CBF0C:
    mulli r0, r21, 0x1c
    addi r14, r1, 0x68
    mr r3, r15
    mr r16, r14
    add r14, r14, r0
    mr r4, r17
    mulli r0, r22, 0x1c
    mr r8, r18
    mr r6, r14
    mr r7, r14
    add r16, r16, r0
    mr r5, r16
    bl fn_801CA5E8
    mr r3, r15
    mr r4, r16
    mr r5, r14
    mr r6, r14
    mr r7, r18
    bl fn_801CA878
    bl fn_801CB35C
    opword 0xE3E10148
    lfd f31, 0x140(r1)
    opword 0xE3C10138
    lfd f30, 0x130(r1)
    opword 0xE3A10128
    addi r11, r1, 0x120
    lfd f29, 0x120(r1)
    bl _restgpr_14
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

// ----------------------------------------------------------------------------
// fn_801CBF8C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CBF8C() {
    nofralloc
    lwz r5, 0x3c(r3)
    b lbl_801CBFB8
lbl_801CBF94:
    lhz r4, 0x42(r3)
    lwzx r5, r5, r4
    b lbl_801CBFA4
lbl_801CBFA0:
    lwzx r5, r5, r4
lbl_801CBFA4:
    cmpwi r5, 0x0
    beq lbl_801CBFB8
    lwz r0, 0xc(r5)
    cmpwi r0, 0x1
    bne lbl_801CBFA0
lbl_801CBFB8:
    cmpwi r5, 0x0
    beq lbl_801CBFCC
    lwz r0, 0xc(r5)
    cmpwi r0, 0x1
    bne lbl_801CBF94
lbl_801CBFCC:
    mr r3, r5
    blr
}

// ----------------------------------------------------------------------------
// fn_801CBFD4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CBFD4() {
    nofralloc
    lwz r9, 0x0(r4)
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    lwz r6, 0x0(r5)
    lwz r4, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r9, 0x0(r3)
    stw r8, 0x4(r3)
    stw r7, 0x8(r3)
    stw r6, 0xc(r3)
    stw r4, 0x10(r3)
    stw r0, 0x14(r3)
    stfs f1, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801CC00C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CC00C() {
    nofralloc
    lwz r9, 0x0(r4)
    lwz r8, 0x4(r4)
    lwz r7, 0x8(r4)
    lwz r6, 0xc(r4)
    lwz r5, 0x10(r4)
    lwz r0, 0x14(r4)
    lfs f0, 0x18(r4)
    stw r9, 0x0(r3)
    stw r8, 0x4(r3)
    stw r7, 0x8(r3)
    stw r6, 0xc(r3)
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    stfs f0, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801CC048
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CC048() {
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    opword 0xF3E10108
    stfd f30, 0xf0(r1)
    opword 0xF3C100F8
    stfd f29, 0xe0(r1)
    opword 0xF3A100E8
    stfd f28, 0xd0(r1)
    opword 0xF38100D8
    addi r11, r1, 0xd0
    bl _savegpr_16
    lwz r12, 0x0(r3)
    lis r0, 0x4330
    lwz r23, 0x0(r4)
    mr r29, r4
    lwz r12, 0x18(r12)
    mr r28, r3
    mr r30, r5
    mr r31, r6
    mr r4, r23
    stw r0, 0x80(r1)
    lwz r26, 0x24(r23)
    stw r0, 0x88(r1)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r22, r3
    lhz r0, 0x9c(r26)
    mr r3, r28
    lwz r12, 0x10(r12)
    rlwinm r27, r0, 0, 20, 20
    mr r4, r27
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r24, r3
    mr r3, r28
    mr r4, r27
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lbz r0, 0x145(r26)
    mr r21, r3
    lbz r3, 0x146(r26)
    extsb r4, r0
    lbz r0, 0x14e(r26)
    extsb r3, r3
    lfd f3, lbl_804A1B98
    xoris r4, r4, 0x8000
    rlwinm r0, r0, 0, 24, 25
    xoris r3, r3, 0x8000
    stw r4, 0x84(r1)
    lfs f1, lbl_804A1BA0
    cmpwi r0, 0x40
    stw r3, 0x8c(r1)
    lfd f2, 0x80(r1)
    lfd f0, 0x88(r1)
    fsubs f2, f2, f3
    lhz r3, 0x50(r23)
    fsubs f0, f0, f3
    fmuls f30, f1, f2
    fmuls f29, f1, f0
    beq lbl_801CC180
    bge lbl_801CC154
    cmpwi r0, 0x0
lbl_801CC154:
    subi r0, r3, 0x1
    lfd f1, lbl_804A1B98
    xoris r0, r0, 0x8000
    stw r0, 0x84(r1)
    lfd f0, 0x80(r1)
    fsubs f0, f0, f1
    fres f28, f0
    opword 0x105CE02A
    opword 0x103C0732
    opword 0x1380107C
    b lbl_801CC184
lbl_801CC180:
    lfs f28, lbl_804A1B84
lbl_801CC184:
    cmpwi r27, 0x0
    li r20, 0x0
    li r19, 0x1
    beq lbl_801CC19C
    subi r20, r3, 0x1
    li r19, -0x1
lbl_801CC19C:
    mr r12, r24
    mr r3, r23
    li r17, 0x0
    li r16, 0x0
    mtctr r12
    bctrl
    xoris r0, r20, 0x8000
    mr r18, r3
    stw r0, 0x8c(r1)
    fmr f1, f30
    lfd f3, lbl_804A1B98
    fmr f2, f29
    lfd f0, 0x88(r1)
    mr r3, r28
    mr r5, r29
    fsubs f0, f0, f3
    mr r6, r31
    mr r7, r18
    mr r8, r22
    addi r4, r1, 0x8
    fmuls f3, f28, f0
    bl fn_801CA180
    mr r12, r21
    mr r3, r23
    mr r4, r18
    add r20, r20, r19
    mtctr r12
    bctrl
    lis r4, 0x5555
    lfd f31, lbl_804A1B98
    mr r24, r3
    addi r27, r4, 0x5556
    b lbl_801CC2D4
lbl_801CC220:
    addi r4, r16, 0x1
    xoris r0, r20, 0x8000
    mulhw r3, r27, r4
    stw r0, 0x84(r1)
    mr r18, r17
    fmr f1, f30
    lfd f0, 0x80(r1)
    mr r17, r16
    srwi r0, r3, 31
    fsubs f0, f0, f31
    add r0, r3, r0
    fmr f2, f29
    mulli r0, r0, 0x3
    addi r25, r1, 0x8
    fmuls f3, f28, f0
    mr r3, r28
    subf r16, r0, r4
    mr r5, r29
    mulli r0, r16, 0x28
    mr r6, r31
    mr r7, r24
    mr r8, r22
    add r25, r25, r0
    mr r4, r25
    bl fn_801CA180
    mulli r11, r18, 0x28
    addi r6, r1, 0x8
    lbz r5, 0x14c(r26)
    mr r3, r28
    mr r7, r6
    lwz r10, 0xd4(r29)
    mulli r0, r17, 0x28
    mr r4, r30
    mr r8, r25
    mr r9, r31
    add r6, r6, r11
    add r7, r7, r0
    bl fn_801CAA5C
    mr r12, r21
    mr r3, r23
    mr r4, r24
    mtctr r12
    bctrl
    mr r24, r3
    add r20, r20, r19
lbl_801CC2D4:
    cmpwi r24, 0x0
    bne lbl_801CC220
    mulli r0, r16, 0x28
    addi r7, r1, 0x8
    lbz r5, 0x14c(r26)
    mr r3, r28
    mr r6, r7
    lwz r10, 0xd4(r29)
    add r7, r7, r0
    mr r4, r30
    mulli r0, r17, 0x28
    mr r9, r31
    mr r8, r7
    add r6, r6, r0
    bl fn_801CAA5C
    opword 0xE3E10108
    lfd f31, 0x100(r1)
    opword 0xE3C100F8
    lfd f30, 0xf0(r1)
    opword 0xE3A100E8
    lfd f29, 0xe0(r1)
    opword 0xE38100D8
    addi r11, r1, 0xd0
    lfd f28, 0xd0(r1)
    bl _restgpr_16
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

// ----------------------------------------------------------------------------
// fn_801CC348
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CC348() {
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    stfd f31, 0x150(r1)
    opword 0xF3E10158
    stfd f30, 0x140(r1)
    opword 0xF3C10148
    stfd f29, 0x130(r1)
    opword 0xF3A10138
    stfd f28, 0x120(r1)
    opword 0xF3810128
    addi r11, r1, 0x120
    bl _savegpr_16
    lwz r12, 0x0(r3)
    lis r0, 0x4330
    lwz r23, 0x0(r4)
    mr r29, r4
    lwz r12, 0x18(r12)
    mr r28, r3
    mr r30, r5
    mr r31, r6
    mr r4, r23
    stw r0, 0xd0(r1)
    lwz r26, 0x24(r23)
    stw r0, 0xd8(r1)
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r22, r3
    lhz r0, 0x9c(r26)
    mr r3, r28
    lwz r12, 0x10(r12)
    rlwinm r27, r0, 0, 20, 20
    mr r4, r27
    mtctr r12
    bctrl
    lwz r12, 0x0(r28)
    mr r24, r3
    mr r3, r28
    mr r4, r27
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lbz r0, 0x145(r26)
    mr r21, r3
    lbz r3, 0x146(r26)
    extsb r4, r0
    lbz r0, 0x14e(r26)
    extsb r3, r3
    lfd f3, lbl_804A1B98
    xoris r4, r4, 0x8000
    rlwinm r0, r0, 0, 24, 25
    xoris r3, r3, 0x8000
    stw r4, 0xd4(r1)
    lfs f1, lbl_804A1BA0
    cmpwi r0, 0x40
    stw r3, 0xdc(r1)
    lfd f2, 0xd0(r1)
    lfd f0, 0xd8(r1)
    fsubs f2, f2, f3
    lhz r3, 0x50(r23)
    fsubs f0, f0, f3
    fmuls f29, f1, f2
    fmuls f28, f1, f0
    beq lbl_801CC474
    bge lbl_801CC454
    cmpwi r0, 0x0
lbl_801CC454:
    xoris r0, r3, 0x8000
    lfd f2, lbl_804A1B98
    stw r0, 0xd4(r1)
    lfs f0, lbl_804A1B90
    lfd f1, 0xd0(r1)
    fsubs f1, f1, f2
    fdivs f31, f0, f1
    b lbl_801CC478
lbl_801CC474:
    lfs f31, lbl_804A1B90
lbl_801CC478:
    cmpwi r27, 0x0
    li r20, -0x1
    li r19, 0x2
    beq lbl_801CC494
    slwi r3, r3, 1
    li r19, -0x2
    addi r20, r3, 0x1
lbl_801CC494:
    mr r12, r24
    mr r3, r23
    mtctr r12
    bctrl
    xoris r0, r20, 0x8000
    mr r16, r3
    stw r0, 0xdc(r1)
    fmr f1, f29
    lfd f3, lbl_804A1B98
    fmr f2, f28
    lfd f0, 0xd8(r1)
    mr r3, r28
    mr r5, r29
    fsubs f0, f0, f3
    mr r6, r31
    mr r7, r16
    mr r8, r22
    addi r4, r1, 0x80
    fmuls f3, f31, f0
    bl fn_801CA180
    mr r12, r21
    mr r3, r23
    mr r4, r16
    mtctr r12
    bctrl
    add r20, r20, r19
    mr r16, r3
    xoris r0, r20, 0x8000
    lfd f3, lbl_804A1B98
    stw r0, 0xd4(r1)
    fmr f1, f29
    fmr f2, f28
    mr r3, r28
    lfd f0, 0xd0(r1)
    mr r5, r29
    mr r6, r31
    fsubs f0, f0, f3
    mr r7, r16
    mr r8, r22
    addi r4, r1, 0xa8
    fmuls f3, f31, f0
    bl fn_801CA180
    mr r12, r21
    mr r3, r23
    mr r4, r16
    mtctr r12
    bctrl
    lis r4, 0x5555
    lfd f30, lbl_804A1B98
    mr r24, r3
    add r20, r20, r19
    addi r27, r4, 0x5556
    li r17, 0x3
    li r16, 0x4
    b lbl_801CC624
lbl_801CC570:
    addi r4, r16, 0x1
    xoris r0, r20, 0x8000
    mulhw r3, r27, r4
    stw r0, 0xdc(r1)
    mr r18, r17
    fmr f1, f29
    lfd f0, 0xd8(r1)
    mr r17, r16
    srwi r0, r3, 31
    fsubs f0, f0, f30
    add r0, r3, r0
    fmr f2, f28
    mulli r0, r0, 0x3
    addi r25, r1, 0x8
    fmuls f3, f31, f0
    mr r3, r28
    subf r16, r0, r4
    mr r5, r29
    mulli r0, r16, 0x28
    mr r6, r31
    mr r7, r24
    mr r8, r22
    add r25, r25, r0
    mr r4, r25
    bl fn_801CA180
    mulli r11, r18, 0x28
    addi r6, r1, 0x8
    lbz r5, 0x14c(r26)
    mr r3, r28
    mr r7, r6
    lwz r10, 0xd4(r29)
    mulli r0, r17, 0x28
    mr r4, r30
    mr r8, r25
    mr r9, r31
    add r6, r6, r11
    add r7, r7, r0
    bl fn_801CAA5C
    mr r12, r21
    mr r3, r23
    mr r4, r24
    mtctr r12
    bctrl
    mr r24, r3
    add r20, r20, r19
lbl_801CC624:
    cmpwi r24, 0x0
    bne lbl_801CC570
    xoris r0, r20, 0x8000
    lfd f1, lbl_804A1B98
    stw r0, 0xd4(r1)
    mulli r4, r16, 0x28
    addi r16, r1, 0x8
    lfd f0, 0xd0(r1)
    mr r3, r28
    mr r6, r16
    mr r9, r31
    fsubs f0, f0, f1
    add r16, r16, r4
    mulli r0, r17, 0x28
    mr r4, r30
    mr r7, r16
    fmuls f0, f31, f0
    add r6, r6, r0
    addi r8, r1, 0x80
    stfs f0, 0xa4(r1)
    lbz r5, 0x14c(r26)
    lwz r10, 0xd4(r29)
    bl fn_801CAA5C
    add r20, r20, r19
    lfd f1, lbl_804A1B98
    xoris r0, r20, 0x8000
    mr r3, r28
    stw r0, 0xdc(r1)
    mr r4, r30
    mr r6, r16
    mr r9, r31
    lfd f0, 0xd8(r1)
    addi r7, r1, 0x80
    addi r8, r1, 0xa8
    fsubs f0, f0, f1
    fmuls f0, f31, f0
    stfs f0, 0xcc(r1)
    lbz r5, 0x14c(r26)
    lwz r10, 0xd4(r29)
    bl fn_801CAA5C
    opword 0xE3E10158
    lfd f31, 0x150(r1)
    opword 0xE3C10148
    lfd f30, 0x140(r1)
    opword 0xE3A10138
    lfd f29, 0x130(r1)
    opword 0xE3810128
    addi r11, r1, 0x120
    lfd f28, 0x120(r1)
    bl _restgpr_16
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

// ----------------------------------------------------------------------------
// fn_801CC6FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CC6FC() {
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    stfd f31, 0x170(r1)
    opword 0xF3E10178
    stfd f30, 0x160(r1)
    opword 0xF3C10168
    stfd f29, 0x150(r1)
    opword 0xF3A10158
    stfd f28, 0x140(r1)
    opword 0xF3810148
    addi r11, r1, 0x140
    bl _savegpr_14
    lwz r12, 0x0(r3)
    lis r0, 0x4330
    lwz r29, 0x0(r4)
    mr r20, r4
    lwz r12, 0x18(r12)
    mr r19, r3
    mr r21, r5
    mr r22, r6
    mr r4, r29
    stw r0, 0xe8(r1)
    lwz r31, 0x24(r29)
    stw r0, 0xf0(r1)
    mtctr r12
    bctrl
    lwz r12, 0x0(r19)
    mr r28, r3
    lhz r0, 0x9c(r31)
    mr r3, r19
    lwz r12, 0x10(r12)
    rlwinm r30, r0, 0, 20, 20
    mr r4, r30
    mtctr r12
    bctrl
    lwz r12, 0x0(r19)
    mr r14, r3
    mr r3, r19
    mr r4, r30
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lbz r0, 0x146(r31)
    mr r27, r3
    lbz r4, 0x145(r31)
    extsb r0, r0
    lfd f3, lbl_804A1B98
    extsb r3, r4
    lfs f1, lbl_804A1BA0
    xoris r3, r3, 0x8000
    xoris r0, r0, 0x8000
    stw r3, 0xec(r1)
    lwz r4, 0x0(r20)
    stw r0, 0xf4(r1)
    lfd f2, 0xe8(r1)
    lfd f0, 0xf0(r1)
    fsubs f2, f2, f3
    lwz r3, 0x3c(r4)
    fsubs f0, f0, f3
    fmuls f31, f1, f2
    fmuls f30, f1, f0
    b lbl_801CC81C
lbl_801CC7F8:
    lhz r5, 0x42(r4)
    lwzx r3, r3, r5
    b lbl_801CC808
lbl_801CC804:
    lwzx r3, r3, r5
lbl_801CC808:
    cmpwi r3, 0x0
    beq lbl_801CC81C
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    bne lbl_801CC804
lbl_801CC81C:
    cmpwi r3, 0x0
    beq lbl_801CC830
    lwz r0, 0xc(r3)
    cmpwi r0, 0x1
    bne lbl_801CC7F8
lbl_801CC830:
    opword 0xE01400A4
    opword 0xE02300AC
    lbz r0, 0x14e(r31)
    opword 0x10400828
    opword 0xE02380B4
    opword 0xE01480AC
    rlwinm r0, r0, 0, 24, 25
    cmpwi r0, 0x40
    lhz r3, 0x50(r29)
    opword 0xF0410014
    opword 0x10400828
    opword 0xF041801C
    beq lbl_801CC894
    bge lbl_801CC86C
    cmpwi r0, 0x0
lbl_801CC86C:
    xoris r0, r3, 0x8000
    lfd f1, lbl_804A1B98
    stw r0, 0xec(r1)
    lfd f0, 0xe8(r1)
    fsubs f0, f0, f1
    fres f29, f0
    opword 0x105DE82A
    opword 0x103D0772
    opword 0x13A0107C
    b lbl_801CC898
lbl_801CC894:
    lfs f29, lbl_804A1B84
lbl_801CC898:
    cmpwi r30, 0x0
    li r26, 0x0
    li r25, 0x1
    beq lbl_801CC8B0
    mr r26, r3
    li r25, -0x1
lbl_801CC8B0:
    mr r12, r14
    mr r3, r29
    li r24, 0x0
    li r23, 0x0
    mtctr r12
    bctrl
    xoris r0, r26, 0x8000
    mr r14, r3
    stw r0, 0xf4(r1)
    fmr f1, f31
    lfd f3, lbl_804A1B98
    fmr f2, f30
    lfd f0, 0xf0(r1)
    mr r3, r19
    mr r5, r20
    fsubs f0, f0, f3
    mr r6, r22
    mr r7, r14
    mr r8, r28
    addi r4, r1, 0x70
    fmuls f3, f29, f0
    bl fn_801CA180
    cmpwi r30, 0x0
    add r26, r26, r25
    bne lbl_801CC9EC
    xoris r0, r26, 0x8000
    addi r6, r1, 0x70
    stw r0, 0xec(r1)
    mr r3, r19
    lwz r5, 0x70(r1)
    mr r4, r21
    lfd f1, lbl_804A1B98
    mr r7, r6
    lfd f0, 0xe8(r1)
    mr r9, r22
    opword 0xE0460000
    add r26, r26, r25
    fsubs f0, f0, f1
    opword 0xE0210014
    lwz r10, 0x74(r1)
    addi r8, r1, 0x98
    opword 0x1062082A
    opword 0xE0468008
    fmuls f0, f29, f0
    opword 0xE021801C
    lwz r15, 0x78(r1)
    li r23, 0x1
    lwz r16, 0x7c(r1)
    lwz r17, 0x80(r1)
    lwz r18, 0x84(r1)
    lwz r12, 0x88(r1)
    lwz r11, 0x8c(r1)
    lwz r0, 0x90(r1)
    opword 0xF0660000
    opword 0x1062082A
    stw r5, 0x98(r1)
    stw r10, 0x9c(r1)
    stw r15, 0xa0(r1)
    stw r16, 0xa4(r1)
    stw r17, 0xa8(r1)
    stw r18, 0xac(r1)
    stw r12, 0xb0(r1)
    stw r11, 0xb4(r1)
    stw r0, 0xb8(r1)
    stfs f0, 0xbc(r1)
    opword 0xF0668008
    stw r5, 0x48(r1)
    lbz r5, 0x14c(r31)
    stw r10, 0x4c(r1)
    lwz r10, 0xd4(r20)
    stw r15, 0x50(r1)
    stw r16, 0x54(r1)
    stw r17, 0x58(r1)
    stw r18, 0x5c(r1)
    stw r12, 0x60(r1)
    stw r11, 0x64(r1)
    stw r0, 0x68(r1)
    stfs f0, 0x6c(r1)
    bl fn_801CAA5C
lbl_801CC9EC:
    mr r12, r27
    mr r3, r29
    mr r4, r14
    mtctr r12
    bctrl
    lis r4, 0x5555
    lfd f28, lbl_804A1B98
    mr r16, r3
    addi r14, r4, 0x5556
    b lbl_801CCAC8
lbl_801CCA14:
    addi r4, r23, 0x1
    xoris r0, r26, 0x8000
    mulhw r3, r14, r4
    stw r0, 0xf4(r1)
    mr r17, r24
    fmr f1, f31
    lfd f0, 0xf0(r1)
    mr r24, r23
    srwi r0, r3, 31
    fsubs f0, f0, f28
    add r0, r3, r0
    fmr f2, f30
    mulli r0, r0, 0x3
    addi r15, r1, 0x70
    fmuls f3, f29, f0
    mr r3, r19
    subf r23, r0, r4
    mr r5, r20
    mulli r0, r23, 0x28
    mr r6, r22
    mr r7, r16
    mr r8, r28
    add r15, r15, r0
    mr r4, r15
    bl fn_801CA180
    mulli r11, r17, 0x28
    addi r6, r1, 0x70
    lbz r5, 0x14c(r31)
    mr r3, r19
    mr r7, r6
    lwz r10, 0xd4(r20)
    mulli r0, r24, 0x28
    mr r4, r21
    mr r8, r15
    mr r9, r22
    add r6, r6, r11
    add r7, r7, r0
    bl fn_801CAA5C
    mr r12, r27
    mr r3, r29
    mr r4, r16
    mtctr r12
    bctrl
    mr r16, r3
    add r26, r26, r25
lbl_801CCAC8:
    cmpwi r16, 0x0
    bne lbl_801CCA14
    cmpwi r30, 0x0
    beq lbl_801CCC00
    lis r4, 0x5555
    mr r3, r24
    addi r5, r23, 0x1
    mr r24, r23
    addi r4, r4, 0x5556
    xoris r0, r26, 0x8000
    mulhw r4, r4, r5
    stw r0, 0xec(r1)
    addi r7, r1, 0x70
    opword 0xE0610014
    lfd f1, lbl_804A1B98
    addi r14, r1, 0x7c
    mulli r8, r24, 0x28
    srwi r0, r4, 31
    lfd f0, 0xe8(r1)
    addi r6, r1, 0x88
    add r0, r4, r0
    add r7, r7, r8
    mulli r0, r0, 0x3
    fsubs f0, f0, f1
    add r4, r6, r8
    opword 0xE0470000
    add r9, r14, r8
    lwz r26, 0x0(r4)
    opword 0x1022182A
    subf r23, r0, r5
    mulli r10, r23, 0x28
    lwz r12, 0x0(r9)
    lwz r11, 0x4(r9)
    addi r8, r1, 0x70
    opword 0xF0210008
    add r17, r14, r10
    lwz r0, 0x8(r9)
    mulli r14, r3, 0x28
    lwz r5, 0x8(r1)
    add r16, r6, r10
    lwz r25, 0x4(r4)
    addi r6, r1, 0x70
    lwz r18, 0x8(r4)
    opword 0xE0478008
    add r6, r6, r14
    opword 0xE061801C
    fmuls f0, f29, f0
    lwz r27, 0xc(r1)
    addi r15, r1, 0x94
    opword 0x1022182A
    stwux r5, r8, r10
    mr r3, r19
    stw r27, 0x4(r8)
    mr r4, r21
    mr r9, r22
    opword 0xF0218010
    lwz r14, 0x10(r1)
    stw r5, 0x20(r1)
    stw r14, 0x8(r8)
    stw r12, 0x0(r17)
    stw r11, 0x4(r17)
    stw r0, 0x8(r17)
    stw r26, 0x0(r16)
    stw r25, 0x4(r16)
    stw r18, 0x8(r16)
    stfsx f0, r15, r10
    stw r27, 0x24(r1)
    lbz r5, 0x14c(r31)
    stw r14, 0x28(r1)
    lwz r10, 0xd4(r20)
    stw r12, 0x2c(r1)
    stw r11, 0x30(r1)
    stw r0, 0x34(r1)
    stw r26, 0x38(r1)
    stw r25, 0x3c(r1)
    stw r18, 0x40(r1)
    stfs f0, 0x44(r1)
    bl fn_801CAA5C
lbl_801CCC00:
    mulli r0, r23, 0x28
    addi r7, r1, 0x70
    lbz r5, 0x14c(r31)
    mr r3, r19
    mr r6, r7
    lwz r10, 0xd4(r20)
    add r7, r7, r0
    mr r4, r21
    mulli r0, r24, 0x28
    mr r9, r22
    mr r8, r7
    add r6, r6, r0
    bl fn_801CAA5C
    opword 0xE3E10178
    lfd f31, 0x170(r1)
    opword 0xE3C10168
    lfd f30, 0x160(r1)
    opword 0xE3A10158
    lfd f29, 0x150(r1)
    opword 0xE3810148
    addi r11, r1, 0x140
    lfd f28, 0x140(r1)
    bl _restgpr_14
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

// ----------------------------------------------------------------------------
// fn_801CCC6C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CCC6C() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    stfd f29, 0x40(r1)
    opword 0xF3A10048
    addi r11, r1, 0x40
    bl _savegpr_20
    mr r31, r1
    lwz r8, 0x0(r4)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    lwz r24, 0x24(r8)
    mr r29, r6
    mr r30, r7
    lbz r23, 0x14c(r24)
    cmpwi r23, 0x3
    blt lbl_801CD408
    addi r3, r23, 0x1
    lwz r0, 0x0(r1)
    slwi r3, r3, 3
    neg r21, r3
    clrrwi r21, r21, 3
    stwux r0, r1, r21
    addic. r21, r1, 0x8
    beq lbl_801CD408
    xoris r0, r23, 0x8000
    lis r25, 0x4330
    stw r0, 0xc(r31)
    addi r22, r21, 0x8
    lfs f0, lbl_804A1B84
    li r20, 0x1
    stw r25, 0x8(r31)
    lfd f30, lbl_804A1B98
    lfd f2, 0x8(r31)
    lfs f1, lbl_804A1BA4
    fsubs f2, f2, f30
    stfs f0, 0x0(r21)
    lfs f0, lbl_804A1B80
    lfs f31, lbl_804A1BA8
    fdivs f29, f1, f2
    stfs f0, 0x4(r21)
    b lbl_801CCD58
lbl_801CCD28:
    xoris r0, r20, 0x8000
    stw r25, 0x8(r31)
    mr r4, r22
    addi r3, r22, 0x4
    stw r0, 0xc(r31)
    lfd f0, 0x8(r31)
    fsubs f0, f0, f30
    fmuls f0, f29, f0
    fmuls f1, f31, f0
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    addi r22, r22, 0x8
    addi r20, r20, 0x1
lbl_801CCD58:
    cmpw r20, r23
    blt lbl_801CCD28
    lfs f1, lbl_804A1B84
    slwi r0, r23, 3
    lfs f0, lbl_804A1B80
    add r3, r21, r0
    stfsx f1, r21, r0
    stfs f0, 0x4(r3)
    stw r21, 0xd4(r27)
    lbz r0, 0x14e(r24)
    clrlwi r0, r0, 29
    cmpwi r0, 0x1
    beq lbl_801CCFC4
    bge lbl_801CCD94
    b lbl_801CCDA0
lbl_801CCD94:
    cmpwi r0, 0x3
    bge lbl_801CCDA0
    b lbl_801CD1E8
lbl_801CCDA0:
    li r3, 0x1
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801CCE9C
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801CCDD4:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCE04
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCE04:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCE34
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCE34:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCE64
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCE64:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCE94
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCE94:
    addi r4, r4, 0x3
    bdnz lbl_801CCDD4
lbl_801CCE9C:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_801CC048
    li r3, 0x2
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801CCFAC
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801CCEE4:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCF14
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCF14:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCF44
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCF44:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCF74
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCF74:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CCFA4
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CCFA4:
    addi r4, r4, 0x3
    bdnz lbl_801CCEE4
lbl_801CCFAC:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_801CC048
    b lbl_801CD408
lbl_801CCFC4:
    li r3, 0x1
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801CD0C0
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801CCFF8:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD028
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD028:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD058
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD058:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD088
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD088:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD0B8
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD0B8:
    addi r4, r4, 0x3
    bdnz lbl_801CCFF8
lbl_801CD0C0:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_801CC348
    li r3, 0x2
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801CD1D0
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801CD108:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD138
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD138:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD168
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD168:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD198
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD198:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD1C8
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD1C8:
    addi r4, r4, 0x3
    bdnz lbl_801CD108
lbl_801CD1D0:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_801CC348
    b lbl_801CD408
lbl_801CD1E8:
    li r3, 0x1
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801CD2E4
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801CD21C:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD24C
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD24C:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD27C
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD27C:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD2AC
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD2AC:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD2DC
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD2DC:
    addi r4, r4, 0x3
    bdnz lbl_801CD21C
lbl_801CD2E4:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_801CC6FC
    li r3, 0x2
    bl GXSetCullMode
    cmpwi r30, 0x0
    beq lbl_801CD3F4
    li r3, 0x98
    li r4, 0x0
    li r5, 0x8
    bl GXBegin
    li r0, 0x2
    clrlwi r5, r29, 31
    li r4, 0x0
    lis r3, 0xcc01
    mtctr r0
lbl_801CD32C:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD35C
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD35C:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD38C
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD38C:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD3BC
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD3BC:
    lfs f0, lbl_804A1B80
    cmpwi r5, 0x0
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    beq lbl_801CD3EC
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
    lfs f0, lbl_804A1B80
    stfs f0, -0x8000(r3)
lbl_801CD3EC:
    addi r4, r4, 0x3
    bdnz lbl_801CD32C
lbl_801CD3F4:
    mr r3, r26
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_801CC6FC
lbl_801CD408:
    mr r10, r31
    opword 0xE3EA0068
    lfd f31, 0x60(r31)
    opword 0xE3CA0058
    lfd f30, 0x50(r31)
    opword 0xE3AA0048
    addi r11, r10, 0x40
    lfd f29, 0x40(r31)
    bl _restgpr_20
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

// ----------------------------------------------------------------------------
// fn_801CD440
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CD440() {
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    stfd f31, 0x280(r1)
    opword 0xF3E10288
    addi r11, r1, 0x280
    bl _savegpr_22
    lhz r29, 0x50(r5)
    lis r31, lbl_803E65B0@ha
    lwz r6, 0x24(r5)
    mr r24, r3
    cmpwi r29, 0x0
    mr r25, r4
    mr r26, r5
    addi r31, r31, lbl_803E65B0@l
    addi r30, r6, 0x9c
    beq lbl_801CDE04
    lfs f1, lbl_804A1B80
    lfs f0, 0x88(r4)
    lwz r27, 0x0(r4)
    lwz r23, 0x4(r4)
    fcmpu cr0, f1, f0
    lwz r12, 0x8(r4)
    lwz r11, 0xc(r4)
    lwz r10, 0x10(r4)
    lwz r9, 0x14(r4)
    lwz r8, 0x18(r4)
    lwz r7, 0x1c(r4)
    lwz r6, 0x20(r4)
    lwz r5, 0x24(r4)
    lwz r3, 0x28(r4)
    lwz r0, 0x2c(r4)
    stw r27, 0x140(r1)
    stw r23, 0x144(r1)
    stw r12, 0x148(r1)
    stw r11, 0x14c(r1)
    stw r10, 0x150(r1)
    stw r9, 0x154(r1)
    stw r8, 0x158(r1)
    stw r7, 0x15c(r1)
    stw r6, 0x160(r1)
    stw r5, 0x164(r1)
    stw r3, 0x168(r1)
    stw r0, 0x16c(r1)
    beq lbl_801CD600
    addi r3, r1, 0x90
    bl GXGetProjectionv
    lfs f0, 0x90(r1)
    fctiwz f0, f0
    stfd f0, 0x248(r1)
    lwz r0, 0x24c(r1)
    cmpwi r0, 0x1
    beq lbl_801CD5F0
    bge lbl_801CD600
    cmpwi r0, 0x0
    bge lbl_801CD524
    b lbl_801CD600
lbl_801CD524:
    mr r3, r25
    addi r4, r25, 0x8c
    addi r5, r1, 0x38
    bl fn_8030D7E0
    addi r3, r1, 0x38
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801CD5DC
    lfs f1, 0x40(r1)
    lfs f0, lbl_804A1B80
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801CD59C
    lfs f3, 0x88(r25)
    lfs f4, 0x38(r1)
    lfs f2, 0x3c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x16c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x14c(r1)
    lfs f2, 0x15c(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x14c(r1)
    stfs f2, 0x15c(r1)
    stfs f0, 0x16c(r1)
    b lbl_801CD600
lbl_801CD59C:
    lfs f3, 0x88(r25)
    lfs f4, 0x38(r1)
    lfs f2, 0x3c(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x16c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x14c(r1)
    lfs f2, 0x15c(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0x14c(r1)
    stfs f2, 0x15c(r1)
    stfs f0, 0x16c(r1)
    b lbl_801CD600
lbl_801CD5DC:
    lfs f1, 0x16c(r1)
    lfs f0, 0x88(r25)
    fadds f0, f1, f0
    stfs f0, 0x16c(r1)
    b lbl_801CD600
lbl_801CD5F0:
    lfs f1, 0x16c(r1)
    lfs f0, 0x88(r25)
    fadds f0, f1, f0
    stfs f0, 0x16c(r1)
lbl_801CD600:
    mr r5, r26
    addi r3, r1, 0x170
    addi r4, r1, 0x140
    bl fn_801C0E98
    lfs f0, 0x198(r1)
    addi r3, r1, 0x22c
    lfs f1, 0x188(r1)
    addi r4, r1, 0x1d8
    lfs f2, 0x178(r1)
    addi r5, r1, 0x2c
    stfs f1, 0x30(r1)
    stfs f2, 0x2c(r1)
    stfs f0, 0x34(r1)
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r4, r24
    mr r5, r30
    addi r3, r1, 0x68
    addi r6, r1, 0x170
    bl fn_801CDE24
    lwz r3, 0x3c(r26)
    lfs f1, lbl_804A1B84
    b lbl_801CD688
lbl_801CD658:
    lfs f0, 0xcc(r3)
    fcmpo cr0, f0, f1
    opword 0x4C401382
    beq lbl_801CD690
    lfs f0, 0x68(r1)
    stfs f0, 0xcc(r3)
    lfs f0, 0x6c(r1)
    stfs f0, 0xd0(r3)
    lfs f0, 0x70(r1)
    stfs f0, 0xd4(r3)
    lhz r0, 0x42(r26)
    lwzx r3, r3, r0
lbl_801CD688:
    cmpwi r3, 0x0
    bne lbl_801CD658
lbl_801CD690:
    lbz r4, 0xad(r30)
    lhz r5, 0x0(r30)
    subi r3, r4, 0x2
    subfic r0, r4, 0x2
    nor r0, r3, r0
    lwz r23, 0x0(r25)
    extrwi r3, r5, 1, 20
    lfs f1, lbl_804A1B80
    srawi r0, r0, 31
    lfs f0, 0x88(r25)
    lwz r12, 0x4(r25)
    rlwinm r27, r0, 0, 28, 28
    neg r3, r3
    lwz r11, 0x8(r25)
    lwz r10, 0xc(r25)
    rlwinm r28, r5, 0, 20, 20
    lwz r9, 0x10(r25)
    rlwimi r27, r3, 0, 27, 27
    lwz r8, 0x14(r25)
    fcmpu cr0, f1, f0
    lwz r7, 0x18(r25)
    lwz r6, 0x1c(r25)
    lwz r5, 0x20(r25)
    lwz r4, 0x24(r25)
    lwz r3, 0x28(r25)
    lwz r0, 0x2c(r25)
    stw r23, 0x110(r1)
    stw r12, 0x114(r1)
    stw r11, 0x118(r1)
    stw r10, 0x11c(r1)
    stw r9, 0x120(r1)
    stw r8, 0x124(r1)
    stw r7, 0x128(r1)
    stw r6, 0x12c(r1)
    stw r5, 0x130(r1)
    stw r4, 0x134(r1)
    stw r3, 0x138(r1)
    stw r0, 0x13c(r1)
    beq lbl_801CD838
    addi r3, r1, 0x74
    bl GXGetProjectionv
    lfs f0, 0x74(r1)
    fctiwz f0, f0
    stfd f0, 0x248(r1)
    lwz r0, 0x24c(r1)
    cmpwi r0, 0x1
    beq lbl_801CD828
    bge lbl_801CD838
    cmpwi r0, 0x0
    bge lbl_801CD75C
    b lbl_801CD838
lbl_801CD75C:
    mr r3, r25
    addi r4, r25, 0x8c
    addi r5, r1, 0x20
    bl fn_8030D7E0
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_801B9B90
    cmpwi r3, 0x0
    beq lbl_801CD814
    lfs f1, 0x28(r1)
    lfs f0, lbl_804A1B80
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801CD7D4
    lfs f3, 0x88(r25)
    lfs f4, 0x20(r1)
    lfs f2, 0x24(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x13c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x11c(r1)
    lfs f2, 0x12c(r1)
    fadds f4, f4, f5
    fadds f2, f2, f3
    fadds f0, f0, f1
    stfs f4, 0x11c(r1)
    stfs f2, 0x12c(r1)
    stfs f0, 0x13c(r1)
    b lbl_801CD838
lbl_801CD7D4:
    lfs f3, 0x88(r25)
    lfs f4, 0x20(r1)
    lfs f2, 0x24(r1)
    fmuls f1, f1, f3
    fmuls f5, f4, f3
    lfs f0, 0x13c(r1)
    fmuls f3, f2, f3
    lfs f4, 0x11c(r1)
    lfs f2, 0x12c(r1)
    fsubs f4, f4, f5
    fsubs f2, f2, f3
    fsubs f0, f0, f1
    stfs f4, 0x11c(r1)
    stfs f2, 0x12c(r1)
    stfs f0, 0x13c(r1)
    b lbl_801CD838
lbl_801CD814:
    lfs f1, 0x13c(r1)
    lfs f0, 0x88(r25)
    fadds f0, f1, f0
    stfs f0, 0x13c(r1)
    b lbl_801CD838
lbl_801CD828:
    lfs f1, 0x13c(r1)
    lfs f0, 0x88(r25)
    fadds f0, f1, f0
    stfs f0, 0x13c(r1)
lbl_801CD838:
    addi r3, r1, 0x110
    addi r4, r1, 0x1a8
    mr r5, r3
    bl PSMTXConcat
    rlwinm. r22, r27, 0, 28, 28
    beq lbl_801CD8AC
    addi r3, r1, 0x110
    addi r4, r1, 0xe0
    bl PSMTXInverse
    cmpwi r3, 0x0
    beq lbl_801CD88C
    lfs f2, 0x108(r1)
    lfs f1, 0xf8(r1)
    lfs f0, 0xe8(r1)
    stfs f1, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x238(r1)
    stfs f1, 0x23c(r1)
    stfs f2, 0x240(r1)
    b lbl_801CD8AC
lbl_801CD88C:
    lfs f1, lbl_804A1B80
    lfs f0, lbl_804A1B84
    stfs f1, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f1, 0x238(r1)
    stfs f1, 0x23c(r1)
    stfs f0, 0x240(r1)
lbl_801CD8AC:
    lbz r0, 0xb2(r30)
    clrlwi r0, r0, 29
    cmpwi r0, 0x1
    bne lbl_801CD8C4
    cmpwi r29, 0x3
    blt lbl_801CD8D4
lbl_801CD8C4:
    cmpwi r0, 0x0
    bne lbl_801CDADC
    cmpwi r29, 0x2
    bge lbl_801CDADC
lbl_801CD8D4:
    lwz r12, 0x0(r24)
    mr r3, r24
    mr r4, r26
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r24)
    mr r25, r3
    mr r3, r24
    mr r4, r28
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r24)
    mr r23, r3
    mr r3, r24
    mr r4, r28
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    mr r12, r23
    mr r24, r3
    mr r3, r26
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_801CDE04
    lfs f31, lbl_804A1B78
    addi r23, r1, 0x5c
    b lbl_801CDAD0
lbl_801CD950:
    mr r12, r25
    mr r5, r27
    addi r3, r1, 0x5c
    addi r4, r1, 0x170
    mtctr r12
    bctrl
    cmpwi r22, 0x0
    bne lbl_801CD984
    mr r3, r23
    addi r4, r27, 0xcc
    addi r5, r1, 0x8
    bl fn_8030DEEC
    b lbl_801CD994
lbl_801CD984:
    mr r3, r23
    addi r4, r1, 0x238
    addi r5, r1, 0x8
    bl fn_8030DEEC
lbl_801CD994:
    opword 0xE021000C
    opword 0xE0018008
    opword 0x10210072
    opword 0x1000083A
    opword 0x10200854
    fcmpo cr0, f1, f31
    bge lbl_801CD9B8
    li r0, 0x0
    b lbl_801CD9D8
lbl_801CD9B8:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010008
    li r0, 0x1
    opword 0x10400058
    opword 0xE0018010
    opword 0xF0410008
    opword 0x10400058
    opword 0xF0418010
lbl_801CD9D8:
    cmpwi r0, 0x0
    bne lbl_801CD9F8
    lfs f2, 0x22c(r1)
    lfs f1, 0x230(r1)
    lfs f0, 0x234(r1)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
lbl_801CD9F8:
    mr r4, r23
    addi r3, r1, 0x8
    addi r5, r1, 0x14
    bl fn_8030DEEC
    opword 0xE0210018
    opword 0xE0018014
    opword 0x10210072
    opword 0x1000083A
    opword 0x10200854
    fcmpo cr0, f1, f31
    blt lbl_801CDA40
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0010014
    opword 0x10400058
    opword 0xE001801C
    opword 0xF0410014
    opword 0x10400058
    opword 0xF041801C
lbl_801CDA40:
    lfs f0, 0x14(r1)
    mr r12, r24
    mr r3, r26
    mr r4, r27
    stfs f0, 0xcc(r27)
    lfs f0, 0x18(r1)
    stfs f0, 0xd0(r27)
    lfs f0, 0x1c(r1)
    stfs f0, 0xd4(r27)
    lfs f0, 0xb4(r27)
    lfs f1, 0x1c(r1)
    lfs f2, 0x64(r1)
    lfs f3, 0x10(r1)
    lfs f4, 0xb0(r27)
    lfs f5, 0x18(r1)
    lfs f6, 0x60(r1)
    lfs f7, 0xc(r1)
    lfs f8, 0xac(r27)
    lfs f9, 0x14(r1)
    lfs f10, 0x5c(r1)
    lfs f11, 0x8(r1)
    stfs f10, 0xb4(r1)
    stfs f11, 0xb0(r1)
    stfs f9, 0xb8(r1)
    stfs f8, 0xbc(r1)
    stfs f7, 0xc0(r1)
    stfs f6, 0xc4(r1)
    stfs f5, 0xc8(r1)
    stfs f4, 0xcc(r1)
    stfs f3, 0xd0(r1)
    stfs f2, 0xd4(r1)
    stfs f1, 0xd8(r1)
    stfs f0, 0xdc(r1)
    mtctr r12
    bctrl
    mr r27, r3
lbl_801CDAD0:
    cmpwi r27, 0x0
    bne lbl_801CD950
    b lbl_801CDE04
lbl_801CDADC:
    lwz r5, 0x24(r26)
    mr r3, r24
    mr r4, r26
    mr r6, r25
    addi r5, r5, 0x9c
    bl fn_801BF1AC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl GXEnableTexOffsets
    bl GXClearVtxDesc
    li r3, 0x9
    li r4, 0x1
    bl GXSetVtxDesc
    lbz r0, 0xd0(r24)
    cmpwi r0, 0x0
    beq lbl_801CDB2C
    li r3, 0xd
    li r4, 0x1
    bl GXSetVtxDesc
lbl_801CDB2C:
    li r3, 0x0
    li r4, 0x9
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    li r4, 0xd
    li r5, 0x1
    li r6, 0x4
    li r7, 0x0
    bl GXSetVtxAttrFmt
    li r3, 0x0
    bl GXSetCurrentMtx
    addi r3, r1, 0x110
    li r4, 0x0
    bl GXLoadPosMtxImm
    lbz r5, 0xd0(r24)
    mr r3, r24
    lwz r12, 0x0(r24)
    neg r4, r5
    lhz r0, 0x0(r30)
    or r4, r4, r5
    lwz r12, 0x10(r12)
    srwi r5, r4, 31
    rlwinm r4, r0, 0, 20, 20
    or r27, r27, r5
    mtctr r12
    bctrl
    mr r12, r3
    mr r3, r26
    mtctr r12
    bctrl
    mr r28, r3
    mr r3, r24
    mr r4, r28
    mr r5, r30
    mr r6, r25
    li r7, 0x1
    li r8, 0x0
    bl fn_801BF940
    lbz r29, 0xb1(r30)
    cmpwi r29, 0x0
    bne lbl_801CDBE0
    li r29, 0x1
lbl_801CDBE0:
    lbz r0, lbl_8049D9A0
    extsb. r0, r0
    bne lbl_801CDC0C
    lfs f1, lbl_804A1B84
    li r0, 0x1
    lfs f0, lbl_804A1B80
    addi r3, r31, 0x0
    stfs f1, 0x0(r31)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stb r0, lbl_8049D9A0
lbl_801CDC0C:
    lbz r0, lbl_8049D9A1
    extsb. r0, r0
    bne lbl_801CDC38
    lfs f1, lbl_804A1B94
    li r0, 0x1
    lfs f0, lbl_804A1B80
    addi r3, r31, 0xc
    stfs f1, 0xc(r31)
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stb r0, lbl_8049D9A1
lbl_801CDC38:
    lbz r0, lbl_8049D9A2
    extsb. r0, r0
    bne lbl_801CDC64
    lfs f1, lbl_804A1B80
    addi r3, r31, 0x18
    lfs f0, lbl_804A1B84
    li r0, 0x1
    stfs f1, 0x18(r31)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    stb r0, lbl_8049D9A2
lbl_801CDC64:
    lbz r0, lbl_8049D9A3
    extsb. r0, r0
    bne lbl_801CDC90
    lfs f1, lbl_804A1B80
    addi r3, r31, 0x24
    lfs f0, lbl_804A1B94
    li r0, 0x1
    stfs f1, 0x24(r31)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    stb r0, lbl_8049D9A3
lbl_801CDC90:
    lbz r0, 0xad(r30)
    cmpwi r0, 0x3
    beq lbl_801CDDBC
    lwz r3, 0x170(r1)
    lwz r3, 0x24(r3)
    lbz r0, 0x14e(r3)
    clrlwi r0, r0, 29
    cmpwi r0, 0x1
    beq lbl_801CDCE8
    bge lbl_801CDCBC
    b lbl_801CDCC8
lbl_801CDCBC:
    cmpwi r0, 0x3
    bge lbl_801CDCC8
    b lbl_801CDD08
lbl_801CDCC8:
    mr r3, r24
    mr r5, r29
    mr r6, r27
    addi r4, r1, 0x170
    addi r7, r31, 0x0
    addi r8, r31, 0xc
    bl fn_801CB360
    b lbl_801CDD24
lbl_801CDCE8:
    mr r3, r24
    mr r5, r29
    mr r6, r27
    addi r4, r1, 0x170
    addi r7, r31, 0x0
    addi r8, r31, 0xc
    bl fn_801CB6C8
    b lbl_801CDD24
lbl_801CDD08:
    mr r3, r24
    mr r5, r29
    mr r6, r27
    addi r4, r1, 0x170
    addi r7, r31, 0x0
    addi r8, r31, 0xc
    bl fn_801CBAE8
lbl_801CDD24:
    lbz r0, 0xad(r30)
    cmplwi r0, 0x1
    bne lbl_801CDE04
    lwz r3, 0x170(r1)
    lwz r3, 0x24(r3)
    lbz r0, 0x14e(r3)
    clrlwi r0, r0, 29
    cmpwi r0, 0x1
    beq lbl_801CDD7C
    bge lbl_801CDD50
    b lbl_801CDD5C
lbl_801CDD50:
    cmpwi r0, 0x3
    bge lbl_801CDD5C
    b lbl_801CDD9C
lbl_801CDD5C:
    mr r3, r24
    mr r5, r29
    mr r6, r27
    addi r4, r1, 0x170
    addi r7, r31, 0x18
    addi r8, r31, 0x24
    bl fn_801CB360
    b lbl_801CDE04
lbl_801CDD7C:
    mr r3, r24
    mr r5, r29
    mr r6, r27
    addi r4, r1, 0x170
    addi r7, r31, 0x18
    addi r8, r31, 0x24
    bl fn_801CB6C8
    b lbl_801CDE04
lbl_801CDD9C:
    mr r3, r24
    mr r5, r29
    mr r6, r27
    addi r4, r1, 0x170
    addi r7, r31, 0x18
    addi r8, r31, 0x24
    bl fn_801CBAE8
    b lbl_801CDE04
lbl_801CDDBC:
    lhz r0, 0x0(r30)
    li r7, 0x0
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_801CDDEC
    lwz r3, 0xc8(r28)
    lwz r3, 0x20(r3)
    lwz r3, 0xbc(r3)
    lwz r3, 0x20(r3)
    addis r3, r3, 0x1
    lbz r0, -0x3f9c(r3)
    cmpwi r0, 0x0
    bne lbl_801CDDF0
lbl_801CDDEC:
    li r7, 0x1
lbl_801CDDF0:
    mr r3, r24
    mr r5, r29
    mr r6, r27
    addi r4, r1, 0x170
    bl fn_801CCC6C
lbl_801CDE04:
    opword 0xE3E10288
    addi r11, r1, 0x280
    lfd f31, 0x280(r1)
    bl _restgpr_22
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

// ----------------------------------------------------------------------------
// fn_801CDE24
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CDE24() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    lbz r0, 0xae(r5)
    stw r31, 0x7c(r1)
    mr r31, r6
    cmplwi r0, 0x7
    stw r30, 0x78(r1)
    mr r30, r3
    bne lbl_801CDF8C
    lbz r0, 0xb2(r5)
    rlwinm r0, r0, 0, 26, 28
    cmplwi r0, 0x18
    bgt lbl_801CDE9C
    lis r4, jumptable_80360A4C@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80360A4C@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lfs f2, 0x88(r6)
    lfs f1, 0x78(r6)
    lfs f0, 0x68(r6)
    stfs f1, 0x60(r1)
    stfs f0, 0x5c(r1)
    stfs f2, 0x64(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    b lbl_801CE044
lbl_801CDE9C:
    lfs f2, 0x8c(r6)
    lfs f1, 0x7c(r6)
    lfs f0, 0x6c(r6)
    stfs f1, 0x54(r1)
    stfs f0, 0x50(r1)
    stfs f2, 0x58(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    b lbl_801CE044
    lfs f2, 0x90(r6)
    lfs f1, 0x80(r6)
    lfs f0, 0x70(r6)
    stfs f1, 0x48(r1)
    stfs f0, 0x44(r1)
    stfs f2, 0x4c(r1)
    stfs f0, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f2, 0x8(r3)
    b lbl_801CE044
    lfs f3, 0x7c(r6)
    lfs f2, 0x6c(r6)
    lfs f1, 0x78(r6)
    lfs f0, 0x68(r6)
    stfs f2, 0x14(r1)
    lfs f4, 0x8c(r6)
    stfs f3, 0x18(r1)
    lfs f2, 0x88(r6)
    lfs f5, 0x80(r6)
    lfs f3, 0x70(r6)
    lfs f6, 0x90(r6)
    stfs f0, 0x20(r1)
    opword 0xE0E10014
    stfs f1, 0x24(r1)
    opword 0xE0010020
    stfs f4, 0x1c(r1)
    opword 0x1000382A
    stfs f2, 0x28(r1)
    opword 0xE0E1801C
    opword 0xF001002C
    opword 0xE0018028
    stfs f3, 0x8(r1)
    opword 0x1000382A
    opword 0xE021002C
    stfs f5, 0xc(r1)
    opword 0xE0410008
    stfs f6, 0x10(r1)
    opword 0x1021102A
    opword 0xE0418010
    opword 0xF0018034
    opword 0xF0210038
    opword 0x1020102A
    lfs f2, 0x38(r1)
    opword 0xF0218040
    lfs f1, 0x3c(r1)
    lfs f0, 0x40(r1)
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    b lbl_801CE044
lbl_801CDF8C:
    lbz r0, 0xb2(r5)
    rlwinm r0, r0, 0, 26, 28
    cmplwi r0, 0x18
    bgt lbl_801CDFD8
    lis r4, jumptable_803609E8@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_803609E8@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lis r5, lbl_803E6550@ha
    addi r4, r6, 0x8
    addi r5, r5, lbl_803E6550@l
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r3, r30
    mr r5, r30
    addi r4, r31, 0x68
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801CE044
lbl_801CDFD8:
    lfs f2, 0x98(r6)
    lfs f1, 0x9c(r6)
    lfs f0, 0xa0(r6)
    stfs f2, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    b lbl_801CE0AC
    lis r5, lbl_803E6568@ha
    addi r4, r6, 0x8
    addi r5, r5, lbl_803E6568@l
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r3, r30
    mr r5, r30
    addi r4, r31, 0x68
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801CE044
    lfs f0, lbl_804A1B84
    addi r4, r6, 0x8
    addi r5, r1, 0x68
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f0, 0x70(r1)
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    mr r3, r30
    mr r5, r30
    addi r4, r31, 0x68
    bl VEC3TransformNormal__Q24nw4r4mathFPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801CE044:
    opword 0xE03E0004
    opword 0xE05E8000
    opword 0x10210072
    lfs f0, lbl_804A1B78
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE06C
    li r0, 0x0
    b lbl_801CE08C
lbl_801CE06C:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05E0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05E8008
    opword 0xF01E0000
    opword 0x10020058
    opword 0xF01E8008
lbl_801CE08C:
    cmpwi r0, 0x0
    bne lbl_801CE0AC
    lfs f2, 0x98(r31)
    lfs f1, 0x9c(r31)
    lfs f0, 0xa0(r31)
    stfs f2, 0x0(r30)
    stfs f1, 0x4(r30)
    stfs f0, 0x8(r30)
lbl_801CE0AC:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE0C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE0C4() {
    nofralloc
    lwz r4, 0x24(r4)
    lbz r0, 0x14a(r4)
    cmplwi r0, 0x7
    bgt lbl_801CE16C
    lis r3, jumptable_80360AB0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80360AB0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
    lis r3, fn_801C2DC8@ha
    addi r3, r3, fn_801C2DC8@l
    blr
    lis r3, fn_801C2E84@ha
    addi r3, r3, fn_801C2E84@l
    blr
    lis r3, fn_801CE178@ha
    addi r3, r3, fn_801CE178@l
    blr
    lis r3, fn_801C53B8@ha
    addi r3, r3, fn_801C53B8@l
    blr
    lbz r0, 0x14e(r4)
    clrlwi r0, r0, 29
    cmpwi r0, 0x2
    beq lbl_801CE154
    bge lbl_801CE160
    cmpwi r0, 0x1
    bge lbl_801CE148
    b lbl_801CE160
lbl_801CE148:
    lis r3, fn_801CE4F8@ha
    addi r3, r3, fn_801CE4F8@l
    blr
lbl_801CE154:
    lis r3, fn_801CE7A8@ha
    addi r3, r3, fn_801CE7A8@l
    blr
lbl_801CE160:
    lis r3, fn_801CE290@ha
    addi r3, r3, fn_801CE290@l
    blr
lbl_801CE16C:
    lis r3, fn_801C2CF4@ha
    addi r3, r3, fn_801C2CF4@l
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE178
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE178() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x0(r4)
    lhz r7, 0x42(r6)
    add r6, r5, r7
    lwz r6, 0x4(r6)
    b lbl_801CE1B0
lbl_801CE1A8:
    add r6, r6, r7
    lwz r6, 0x4(r6)
lbl_801CE1B0:
    cmpwi r6, 0x0
    beq lbl_801CE1C4
    lwz r0, 0xc(r6)
    cmpwi r0, 0x1
    bne lbl_801CE1A8
lbl_801CE1C4:
    cmpwi r6, 0x0
    beq lbl_801CE1F0
    opword 0xE02500AC
    opword 0xE00600AC
    opword 0x10010028
    opword 0xF0030000
    opword 0xE02580B4
    opword 0xE00680B4
    opword 0x10010028
    opword 0xF0038008
    b lbl_801CE210
lbl_801CE1F0:
    opword 0xE02500AC
    opword 0xE00400A4
    opword 0x10010028
    opword 0xF0030000
    opword 0xE02580B4
    opword 0xE00480AC
    opword 0x10010028
    opword 0xF0038008
lbl_801CE210:
    opword 0xE0230004
    opword 0xE0438000
    opword 0x10210072
    lfs f0, lbl_804A1B78
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE238
    li r0, 0x0
    b lbl_801CE258
lbl_801CE238:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05E0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05E8008
    opword 0xF01E0000
    opword 0x10020058
    opword 0xF01E8008
lbl_801CE258:
    cmpwi r0, 0x0
    bne lbl_801CE278
    lfs f0, 0x98(r31)
    stfs f0, 0x0(r30)
    lfs f0, 0x9c(r31)
    stfs f0, 0x4(r30)
    lfs f0, 0xa0(r31)
    stfs f0, 0x8(r30)
lbl_801CE278:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE290
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE290() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r5
    stw r29, 0x44(r1)
    mr r29, r4
    stw r28, 0x40(r1)
    mr r28, r3
    lwz r6, 0x0(r4)
    lhz r6, 0x42(r6)
    lwzx r4, r5, r6
    b lbl_801CE2CC
lbl_801CE2C8:
    lwzx r4, r4, r6
lbl_801CE2CC:
    cmpwi r4, 0x0
    beq lbl_801CE2E0
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801CE2C8
lbl_801CE2E0:
    add r3, r5, r6
    lwz r31, 0x4(r3)
    b lbl_801CE2F4
lbl_801CE2EC:
    add r3, r31, r6
    lwz r31, 0x4(r3)
lbl_801CE2F4:
    cmpwi r31, 0x0
    beq lbl_801CE308
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_801CE2EC
lbl_801CE308:
    lfs f0, lbl_804A1B80
    cmpwi r4, 0x0
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    beq lbl_801CE3AC
    opword 0xE06400AC
    opword 0xE04500AC
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE06480B4
    opword 0xE04580B4
    opword 0xF021002C
    opword 0x10231028
    opword 0xE041802C
    opword 0xF0218034
    opword 0xE0210030
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE368
    li r0, 0x0
    b lbl_801CE388
lbl_801CE368:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE041002C
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418034
    opword 0xF001002C
    opword 0x10020058
    opword 0xF0018034
lbl_801CE388:
    cmpwi r0, 0x0
    bne lbl_801CE3AC
    lfs f0, lbl_804A1B80
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
lbl_801CE3AC:
    lfs f0, lbl_804A1B80
    cmpwi r31, 0x0
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    beq lbl_801CE450
    opword 0xE07F00AC
    opword 0xE05E00AC
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE07F80B4
    opword 0xE05E80B4
    opword 0xF0210020
    opword 0x10231028
    opword 0xE0418020
    opword 0xF0218028
    opword 0xE0210024
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE40C
    li r0, 0x0
    b lbl_801CE42C
lbl_801CE40C:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410020
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418028
    opword 0xF0010020
    opword 0x10020058
    opword 0xF0018028
lbl_801CE42C:
    cmpwi r0, 0x0
    bne lbl_801CE450
    lfs f0, lbl_804A1B80
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_801CE450:
    opword 0xE061002C
    opword 0xE0410020
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE0618034
    opword 0xE0418028
    opword 0xF03C0000
    opword 0x10231028
    opword 0xE05C8000
    opword 0xF03C8008
    opword 0xE03C0004
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE498
    li r0, 0x0
    b lbl_801CE4B8
lbl_801CE498:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05C0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05C8008
    opword 0xF01C0000
    opword 0x10020058
    opword 0xF01C8008
lbl_801CE4B8:
    cmpwi r0, 0x0
    bne lbl_801CE4D8
    lfs f0, 0x98(r29)
    stfs f0, 0x0(r28)
    lfs f0, 0x9c(r29)
    stfs f0, 0x4(r28)
    lfs f0, 0xa0(r29)
    stfs f0, 0x8(r28)
lbl_801CE4D8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE4F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE4F8() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r5
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    lwz r6, 0x0(r4)
    lhz r4, 0x42(r6)
    lwzx r7, r5, r4
    b lbl_801CE534
lbl_801CE530:
    lwzx r7, r7, r4
lbl_801CE534:
    cmpwi r7, 0x0
    beq lbl_801CE548
    lwz r0, 0xc(r7)
    cmpwi r0, 0x1
    bne lbl_801CE530
lbl_801CE548:
    cmpwi r7, 0x0
    bne lbl_801CE590
    lwz r7, 0x3c(r6)
    b lbl_801CE57C
lbl_801CE558:
    lhz r3, 0x42(r6)
    lwzx r7, r7, r3
    b lbl_801CE568
lbl_801CE564:
    lwzx r7, r7, r3
lbl_801CE568:
    cmpwi r7, 0x0
    beq lbl_801CE57C
    lwz r0, 0xc(r7)
    cmpwi r0, 0x1
    bne lbl_801CE564
lbl_801CE57C:
    cmpwi r7, 0x0
    beq lbl_801CE590
    lwz r0, 0xc(r7)
    cmpwi r0, 0x1
    bne lbl_801CE558
lbl_801CE590:
    add r3, r5, r4
    lwz r28, 0x4(r3)
    b lbl_801CE5A4
lbl_801CE59C:
    add r3, r28, r4
    lwz r28, 0x4(r3)
lbl_801CE5A4:
    cmpwi r28, 0x0
    beq lbl_801CE5B8
    lwz r0, 0xc(r28)
    cmpwi r0, 0x1
    bne lbl_801CE59C
lbl_801CE5B8:
    cmpwi r28, 0x0
    bne lbl_801CE5E8
    lwz r28, 0x38(r6)
    b lbl_801CE5D4
lbl_801CE5C8:
    lhz r0, 0x42(r6)
    add r3, r28, r0
    lwz r28, 0x4(r3)
lbl_801CE5D4:
    cmpwi r28, 0x0
    beq lbl_801CE5E8
    lwz r0, 0xc(r28)
    cmpwi r0, 0x1
    bne lbl_801CE5C8
lbl_801CE5E8:
    opword 0xE06700AC
    opword 0xE04500AC
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE06780B4
    opword 0xE04580B4
    opword 0xF021002C
    opword 0x10231028
    opword 0xE041802C
    opword 0xF0218034
    opword 0xE0210030
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE630
    li r0, 0x0
    b lbl_801CE650
lbl_801CE630:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE041002C
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418034
    opword 0xF001002C
    opword 0x10020058
    opword 0xF0018034
lbl_801CE650:
    cmpwi r0, 0x0
    bne lbl_801CE674
    lfs f0, lbl_804A1B80
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
lbl_801CE674:
    opword 0xE07C00AC
    opword 0xE05F00AC
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE07C80B4
    opword 0xE05F80B4
    opword 0xF0210020
    opword 0x10231028
    opword 0xE0418020
    opword 0xF0218028
    opword 0xE0210024
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE6BC
    li r0, 0x0
    b lbl_801CE6DC
lbl_801CE6BC:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410020
    li r0, 0x1
    opword 0x10020058
    opword 0xE0418028
    opword 0xF0010020
    opword 0x10020058
    opword 0xF0018028
lbl_801CE6DC:
    cmpwi r0, 0x0
    bne lbl_801CE700
    lfs f0, lbl_804A1B80
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
lbl_801CE700:
    opword 0xE061002C
    opword 0xE0410020
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE0618034
    opword 0xE0418028
    opword 0xF03D0000
    opword 0x10231028
    opword 0xE05D8000
    opword 0xF03D8008
    opword 0xE03D0004
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE748
    li r0, 0x0
    b lbl_801CE768
lbl_801CE748:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05D0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05D8008
    opword 0xF01D0000
    opword 0x10020058
    opword 0xF01D8008
lbl_801CE768:
    cmpwi r0, 0x0
    bne lbl_801CE788
    lfs f0, 0x98(r30)
    stfs f0, 0x0(r29)
    lfs f0, 0x9c(r30)
    stfs f0, 0x4(r29)
    lfs f0, 0xa0(r30)
    stfs f0, 0x8(r29)
lbl_801CE788:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE7A8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE7A8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lwz r6, 0x0(r4)
    lhz r6, 0x42(r6)
    lwzx r4, r5, r6
    b lbl_801CE7E4
lbl_801CE7E0:
    lwzx r4, r4, r6
lbl_801CE7E4:
    cmpwi r4, 0x0
    beq lbl_801CE7F8
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_801CE7E0
lbl_801CE7F8:
    add r3, r5, r6
    lwz r31, 0x4(r3)
    b lbl_801CE80C
lbl_801CE804:
    add r3, r31, r6
    lwz r31, 0x4(r3)
lbl_801CE80C:
    cmpwi r31, 0x0
    beq lbl_801CE820
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_801CE804
lbl_801CE820:
    lfs f0, lbl_804A1B80
    cmpwi r4, 0x0
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    beq lbl_801CE894
    opword 0xE06400AC
    opword 0xE04500AC
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE06480B4
    opword 0xE04580B4
    opword 0xF0210014
    opword 0x10231028
    opword 0xE0418014
    opword 0xF021801C
    opword 0xE0210018
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    blt lbl_801CE894
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410014
    opword 0x10020058
    opword 0xE041801C
    opword 0xF0010014
    opword 0x10020058
    opword 0xF001801C
lbl_801CE894:
    cmpwi r31, 0x0
    beq lbl_801CE8C0
    opword 0xE05F00AC
    opword 0xE03E00AC
    opword 0x10020828
    opword 0xE05F80B4
    opword 0xE03E80B4
    opword 0xF0010008
    opword 0x10020828
    opword 0xF0018010
    b lbl_801CE8E0
lbl_801CE8C0:
    opword 0xE05D00A4
    opword 0xE03E00AC
    opword 0x10020828
    opword 0xE05D80AC
    opword 0xE03E80B4
    opword 0xF0010008
    opword 0x10020828
    opword 0xF0018010
lbl_801CE8E0:
    opword 0xE021000C
    opword 0xE0418008
    opword 0x10210072
    lfs f0, lbl_804A1B78
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    blt lbl_801CE91C
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE0410008
    opword 0x10020058
    opword 0xE0418010
    opword 0xF0010008
    opword 0x10020058
    opword 0xF0018010
lbl_801CE91C:
    opword 0xE0610014
    opword 0xE0410008
    lfs f0, lbl_804A1B78
    opword 0x10231028
    opword 0xE061801C
    opword 0xE0418010
    opword 0xF03C0000
    opword 0x10231028
    opword 0xE05C8000
    opword 0xF03C8008
    opword 0xE03C0004
    opword 0x10210072
    opword 0x104208BA
    opword 0x10220854
    fcmpo cr0, f1, f0
    bge lbl_801CE964
    li r0, 0x0
    b lbl_801CE984
lbl_801CE964:
    bl FrSqrt__Q24nw4r4mathFf
    opword 0xE05C0000
    li r0, 0x1
    opword 0x10020058
    opword 0xE05C8008
    opword 0xF01C0000
    opword 0x10020058
    opword 0xF01C8008
lbl_801CE984:
    cmpwi r0, 0x0
    bne lbl_801CE9A4
    lfs f0, 0x98(r29)
    stfs f0, 0x0(r28)
    lfs f0, 0x9c(r29)
    stfs f0, 0x4(r28)
    lfs f0, 0xa0(r29)
    stfs f0, 0x8(r28)
lbl_801CE9A4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE9C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE9C4() {
    nofralloc
    lwz r4, 0x0(r4)
    addi r0, r4, 0x8
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE9D4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE9D4() {
    nofralloc
    lwz r4, 0x0(r4)
    lwz r0, 0x4(r4)
    add r4, r0, r4
    addi r0, r4, 0xc
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE9EC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE9EC() {
    nofralloc
    lwz r3, 0x0(r3)
    lfs f1, 0x10(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801CE9F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CE9F8() {
    nofralloc
    lwz r3, 0x0(r3)
    addi r3, r3, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801CEA04
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CEA04() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r4, 0x0(r4)
    stw r0, 0x14(r1)
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    lwz r3, 0x0(r5)
    cmplw r3, r0
    bne lbl_801CEA40
    addi r3, r5, 0x4
    addi r4, r4, 0x4
    bl strcmp
    cntlzw r0, r3
    srwi r3, r0, 5
    b lbl_801CEA44
lbl_801CEA40:
    li r3, 0x0
lbl_801CEA44:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801CEA54
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CEA54() {
    nofralloc
    srwi r6, r4, 24
    extrwi r5, r4, 8, 8
    extrwi r0, r4, 8, 16
    li r7, 0x61
    stb r7, 0x0(r3)
    stb r6, 0x1(r3)
    stb r5, 0x2(r3)
    stb r0, 0x3(r3)
    stb r4, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801CEA7C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801CEA7C() {
    nofralloc
    srwi r7, r5, 24
    extrwi r6, r5, 8, 8
    extrwi r0, r5, 8, 16
    li r8, 0x8
    stb r8, 0x0(r3)
    stb r4, 0x1(r3)
    stb r7, 0x2(r3)
    stb r6, 0x3(r3)
    stb r0, 0x4(r3)
    stb r5, 0x5(r3)
    blr
}

