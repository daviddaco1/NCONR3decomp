#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern M2C_UNK lbl_8036BB88;
extern M2C_UNK lbl_8040BED0;
extern s32 lbl_8049CEB8;
extern u8 lbl_8049CEBC;
extern u8 lbl_8049CEBD;
extern u8 lbl_8049CEBE;
extern u8 lbl_8049CEBF;
extern u8 lbl_8049CEC0;
extern u8 lbl_8049CEC1;
extern u8 lbl_8049CEC2;
extern u8 lbl_8049CEC3;
extern u8 lbl_8049CEC4;
extern u8 lbl_8049CEC5;
extern u8 lbl_8049CEC6;
extern u8 lbl_8049CEC7;
extern s32 lbl_8049DD70;
extern s32 lbl_8049DD78;
extern s32 lbl_8049DD7C;
extern s32 lbl_8049DD80;
extern s32 lbl_8049DD84;

void __VISetFilter4EURGB60();
void __VISetCGMS();
void __VISetWSS();
void __VISetClosedCaption();
void __VISetMacrovision();
void __VISetGammaImm();
void __VISetGamma1_0();
void __VISetGamma();
void __VISetTrapFilter();
void __VISetRGBOverDrive();
void VISetRGBModeImm();
void __VISetRGBModeImm();


// __VISetCGMS: definicion C reemplazada por asm (ver abajo)


// __VISetWSS: definicion C reemplazada por asm (ver abajo)


// __VISetClosedCaption: definicion C reemplazada por asm (ver abajo)


// __VISetMacrovision: definicion C reemplazada por asm (ver abajo)


// __VISetGammaImm: definicion C reemplazada por asm (ver abajo)


// __VISetGamma1_0: definicion C reemplazada por asm (ver abajo)


// __VISetGamma: definicion C reemplazada por asm (ver abajo)


// __VISetTrapFilter: definicion C reemplazada por asm (ver abajo)


// __VISetRGBOverDrive: definicion C reemplazada por asm (ver abajo)


void VISetRGBModeImm(void) {
    lbl_8049DD70 |= 0x80;
}

// __VISetRGBModeImm: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
void __VISetCGMS(void);
void __VISetClosedCaption(void);
void __VISetFilter4EURGB60();
void __VISetGamma(void);
void __VISetGamma1_0(void);
void __VISetGammaImm(s8 *arg0);
void __VISetMacrovision(void);
void __VISetRGBModeImm(void);
void __VISetRGBOverDrive(void);
void __VISetTrapFilter(void);
void __VISetWSS(void);

// asm_to_cpp: __VISetFilter4EURGB60
asm void __VISetFilter4EURGB60() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x2
    stw r0, 0x14(r1)
    li r0, 0x6e
    addi r4, r1, 0x8
    stb r3, 0x9(r1)
    li r3, 0xe0
    stb r0, 0x8(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __VISetCGMS
asm void __VISetCGMS(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0x5
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    lbz r3, lbl_8049CEBC
    lbz r0, lbl_8049CEBE
    clrlwi r6, r3, 30
    lbz r5, lbl_8049CEBD
    stb r7, 0x8(r1)
    li r3, 0xe0
    rlwimi r6, r5, 2, 26, 29
    li r5, 0x3
    stb r6, 0x9(r1)
    stb r0, 0xa(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __VISetWSS
asm void __VISetWSS(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0x8
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    lbz r3, lbl_8049CEBF
    lbz r0, lbl_8049CEC1
    clrlwi r5, r3, 28
    lbz r6, lbl_8049CEC0
    lbz r3, lbl_8049CEC2
    clrlwi r0, r0, 29
    rlwimi r5, r6, 4, 24, 27
    stb r7, 0x8(r1)
    rlwimi r0, r3, 3, 26, 28
    li r3, 0xe0
    stb r5, 0x9(r1)
    li r5, 0x3
    stb r0, 0xa(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __VISetClosedCaption
asm void __VISetClosedCaption(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r9, 0x7a
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    lbz r0, lbl_8049CEC3
    lbz r5, lbl_8049CEC4
    clrlwi r8, r0, 25
    lbz r3, lbl_8049CEC5
    lbz r0, lbl_8049CEC6
    clrlwi r7, r5, 25
    clrlwi r6, r3, 25
    stb r9, 0x8(r1)
    clrlwi r0, r0, 25
    li r3, 0xe0
    stb r8, 0x9(r1)
    li r5, 0x5
    stb r7, 0xa(r1)
    stb r6, 0xb(r1)
    stb r0, 0xc(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __VISetMacrovision
asm void __VISetMacrovision(void) {
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    lis r3, lbl_8036BB88@ha
    stw r0, 0x194(r1)
    addi r3, r3, lbl_8036BB88@l
    stw r31, 0x18c(r1)
    stw r30, 0x188(r1)
    stw r29, 0x184(r1)
    stw r28, 0x180(r1)
    lwz r0, lbl_8049DD80
    cmpwi r0, 0x3
    beq lbl_80285880
    bge lbl_80285468
    cmpwi r0, 0x1
    beq lbl_80286098
    bge lbl_80285474
    b lbl_8028618C
lbl_80285468:
    cmpwi r0, 0x5
    bge lbl_8028618C
    b lbl_80285C8C
lbl_80285474:
    lwz r0, lbl_8049CEB8
    cmpwi r0, 0x2
    beq lbl_80285690
    bge lbl_80285494
    cmpwi r0, 0x0
    beq lbl_802854A0
    bge lbl_80285598
    b lbl_8028618C
lbl_80285494:
    cmpwi r0, 0x5
    beq lbl_80285788
    b lbl_8028618C
lbl_802854A0:
    addi r30, r3, 0x420
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x158
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x159(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x15a(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x15b(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x15c(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x15d(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x15e(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x15f(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x160(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x161(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x162(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x163(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x164(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x165(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x166(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x167(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x168(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x158(r1)
    stb r29, 0x169(r1)
    stb r28, 0x16a(r1)
    stb r12, 0x16b(r1)
    stb r11, 0x16c(r1)
    stb r10, 0x16d(r1)
    stb r9, 0x16e(r1)
    stb r8, 0x16f(r1)
    stb r7, 0x170(r1)
    stb r6, 0x171(r1)
    stb r0, 0x172(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    b lbl_8028618C
lbl_80285598:
    addi r30, r3, 0x474
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x13c
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x13d(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x13e(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x13f(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x140(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x141(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x142(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x143(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x144(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x145(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x146(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x147(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x148(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x149(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x14a(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x14b(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x14c(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x13c(r1)
    stb r29, 0x14d(r1)
    stb r28, 0x14e(r1)
    stb r12, 0x14f(r1)
    stb r11, 0x150(r1)
    stb r10, 0x151(r1)
    stb r9, 0x152(r1)
    stb r8, 0x153(r1)
    stb r7, 0x154(r1)
    stb r6, 0x155(r1)
    stb r0, 0x156(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    b lbl_8028618C
lbl_80285690:
    addi r30, r3, 0x51c
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x120
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x121(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x122(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x123(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x124(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x125(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x126(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x127(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x128(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x129(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x12a(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x12b(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x12c(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x12d(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x12e(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x12f(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x130(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x120(r1)
    stb r29, 0x131(r1)
    stb r28, 0x132(r1)
    stb r12, 0x133(r1)
    stb r11, 0x134(r1)
    stb r10, 0x135(r1)
    stb r9, 0x136(r1)
    stb r8, 0x137(r1)
    stb r7, 0x138(r1)
    stb r6, 0x139(r1)
    stb r0, 0x13a(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    b lbl_8028618C
lbl_80285788:
    addi r30, r3, 0x4c8
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x104
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x105(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x106(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x107(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x108(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x109(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x10a(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x10b(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x10c(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x10d(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x10e(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x10f(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x110(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x111(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x112(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x113(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x114(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x104(r1)
    stb r29, 0x115(r1)
    stb r28, 0x116(r1)
    stb r12, 0x117(r1)
    stb r11, 0x118(r1)
    stb r10, 0x119(r1)
    stb r9, 0x11a(r1)
    stb r8, 0x11b(r1)
    stb r7, 0x11c(r1)
    stb r6, 0x11d(r1)
    stb r0, 0x11e(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    b lbl_8028618C
lbl_80285880:
    lwz r0, lbl_8049CEB8
    cmpwi r0, 0x2
    beq lbl_80285A9C
    bge lbl_802858A0
    cmpwi r0, 0x0
    beq lbl_802858AC
    bge lbl_802859A4
    b lbl_8028618C
lbl_802858A0:
    cmpwi r0, 0x5
    beq lbl_80285B94
    b lbl_8028618C
lbl_802858AC:
    addi r30, r3, 0x43c
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0xe8
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0xe9(r1)
    lbz r29, 0x8(r30)
    stb r28, 0xea(r1)
    lbz r28, 0x9(r30)
    stb r12, 0xeb(r1)
    lbz r12, 0xa(r30)
    stb r11, 0xec(r1)
    lbz r11, 0xb(r30)
    stb r10, 0xed(r1)
    lbz r10, 0xc(r30)
    stb r9, 0xee(r1)
    lbz r9, 0xd(r30)
    stb r8, 0xef(r1)
    lbz r8, 0xe(r30)
    stb r7, 0xf0(r1)
    lbz r7, 0xf(r30)
    stb r29, 0xf1(r1)
    lbz r29, 0x10(r30)
    stb r28, 0xf2(r1)
    lbz r28, 0x11(r30)
    stb r12, 0xf3(r1)
    lbz r12, 0x12(r30)
    stb r11, 0xf4(r1)
    lbz r11, 0x13(r30)
    stb r10, 0xf5(r1)
    lbz r10, 0x14(r30)
    stb r9, 0xf6(r1)
    lbz r9, 0x15(r30)
    stb r8, 0xf7(r1)
    lbz r8, 0x16(r30)
    stb r7, 0xf8(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0xe8(r1)
    stb r29, 0xf9(r1)
    stb r28, 0xfa(r1)
    stb r12, 0xfb(r1)
    stb r11, 0xfc(r1)
    stb r10, 0xfd(r1)
    stb r9, 0xfe(r1)
    stb r8, 0xff(r1)
    stb r7, 0x100(r1)
    stb r6, 0x101(r1)
    stb r0, 0x102(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    b lbl_8028618C
lbl_802859A4:
    addi r30, r3, 0x490
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0xcc
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0xcd(r1)
    lbz r29, 0x8(r30)
    stb r28, 0xce(r1)
    lbz r28, 0x9(r30)
    stb r12, 0xcf(r1)
    lbz r12, 0xa(r30)
    stb r11, 0xd0(r1)
    lbz r11, 0xb(r30)
    stb r10, 0xd1(r1)
    lbz r10, 0xc(r30)
    stb r9, 0xd2(r1)
    lbz r9, 0xd(r30)
    stb r8, 0xd3(r1)
    lbz r8, 0xe(r30)
    stb r7, 0xd4(r1)
    lbz r7, 0xf(r30)
    stb r29, 0xd5(r1)
    lbz r29, 0x10(r30)
    stb r28, 0xd6(r1)
    lbz r28, 0x11(r30)
    stb r12, 0xd7(r1)
    lbz r12, 0x12(r30)
    stb r11, 0xd8(r1)
    lbz r11, 0x13(r30)
    stb r10, 0xd9(r1)
    lbz r10, 0x14(r30)
    stb r9, 0xda(r1)
    lbz r9, 0x15(r30)
    stb r8, 0xdb(r1)
    lbz r8, 0x16(r30)
    stb r7, 0xdc(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0xcc(r1)
    stb r29, 0xdd(r1)
    stb r28, 0xde(r1)
    stb r12, 0xdf(r1)
    stb r11, 0xe0(r1)
    stb r10, 0xe1(r1)
    stb r9, 0xe2(r1)
    stb r8, 0xe3(r1)
    stb r7, 0xe4(r1)
    stb r6, 0xe5(r1)
    stb r0, 0xe6(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    b lbl_8028618C
lbl_80285A9C:
    addi r30, r3, 0x538
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0xb0
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0xb1(r1)
    lbz r29, 0x8(r30)
    stb r28, 0xb2(r1)
    lbz r28, 0x9(r30)
    stb r12, 0xb3(r1)
    lbz r12, 0xa(r30)
    stb r11, 0xb4(r1)
    lbz r11, 0xb(r30)
    stb r10, 0xb5(r1)
    lbz r10, 0xc(r30)
    stb r9, 0xb6(r1)
    lbz r9, 0xd(r30)
    stb r8, 0xb7(r1)
    lbz r8, 0xe(r30)
    stb r7, 0xb8(r1)
    lbz r7, 0xf(r30)
    stb r29, 0xb9(r1)
    lbz r29, 0x10(r30)
    stb r28, 0xba(r1)
    lbz r28, 0x11(r30)
    stb r12, 0xbb(r1)
    lbz r12, 0x12(r30)
    stb r11, 0xbc(r1)
    lbz r11, 0x13(r30)
    stb r10, 0xbd(r1)
    lbz r10, 0x14(r30)
    stb r9, 0xbe(r1)
    lbz r9, 0x15(r30)
    stb r8, 0xbf(r1)
    lbz r8, 0x16(r30)
    stb r7, 0xc0(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0xb0(r1)
    stb r29, 0xc1(r1)
    stb r28, 0xc2(r1)
    stb r12, 0xc3(r1)
    stb r11, 0xc4(r1)
    stb r10, 0xc5(r1)
    stb r9, 0xc6(r1)
    stb r8, 0xc7(r1)
    stb r7, 0xc8(r1)
    stb r6, 0xc9(r1)
    stb r0, 0xca(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    b lbl_8028618C
lbl_80285B94:
    addi r30, r3, 0x4e4
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x94
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x95(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x96(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x97(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x98(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x99(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x9a(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x9b(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x9c(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x9d(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x9e(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x9f(r1)
    lbz r12, 0x12(r30)
    stb r11, 0xa0(r1)
    lbz r11, 0x13(r30)
    stb r10, 0xa1(r1)
    lbz r10, 0x14(r30)
    stb r9, 0xa2(r1)
    lbz r9, 0x15(r30)
    stb r8, 0xa3(r1)
    lbz r8, 0x16(r30)
    stb r7, 0xa4(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x94(r1)
    stb r29, 0xa5(r1)
    stb r28, 0xa6(r1)
    stb r12, 0xa7(r1)
    stb r11, 0xa8(r1)
    stb r10, 0xa9(r1)
    stb r9, 0xaa(r1)
    stb r8, 0xab(r1)
    stb r7, 0xac(r1)
    stb r6, 0xad(r1)
    stb r0, 0xae(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    b lbl_8028618C
lbl_80285C8C:
    lwz r0, lbl_8049CEB8
    cmpwi r0, 0x2
    beq lbl_80285EA8
    bge lbl_80285CAC
    cmpwi r0, 0x0
    beq lbl_80285CB8
    bge lbl_80285DB0
    b lbl_8028618C
lbl_80285CAC:
    cmpwi r0, 0x5
    beq lbl_80285FA0
    b lbl_8028618C
lbl_80285CB8:
    addi r30, r3, 0x458
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x78
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x79(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x7a(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x7b(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x7c(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x7d(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x7e(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x7f(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x80(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x81(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x82(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x83(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x84(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x85(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x86(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x87(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x88(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x78(r1)
    stb r29, 0x89(r1)
    stb r28, 0x8a(r1)
    stb r12, 0x8b(r1)
    stb r11, 0x8c(r1)
    stb r10, 0x8d(r1)
    stb r9, 0x8e(r1)
    stb r8, 0x8f(r1)
    stb r7, 0x90(r1)
    stb r6, 0x91(r1)
    stb r0, 0x92(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    b lbl_8028618C
lbl_80285DB0:
    addi r30, r3, 0x4ac
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x5c
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x5d(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x5e(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x5f(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x60(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x61(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x62(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x63(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x64(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x65(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x66(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x67(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x68(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x69(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x6a(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x6b(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x6c(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x5c(r1)
    stb r29, 0x6d(r1)
    stb r28, 0x6e(r1)
    stb r12, 0x6f(r1)
    stb r11, 0x70(r1)
    stb r10, 0x71(r1)
    stb r9, 0x72(r1)
    stb r8, 0x73(r1)
    stb r7, 0x74(r1)
    stb r6, 0x75(r1)
    stb r0, 0x76(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    b lbl_8028618C
lbl_80285EA8:
    addi r30, r3, 0x554
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x40
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x41(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x42(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x43(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x44(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x45(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x46(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x47(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x48(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x49(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x4a(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x4b(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x4c(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x4d(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x4e(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x4f(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x50(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x40(r1)
    stb r29, 0x51(r1)
    stb r28, 0x52(r1)
    stb r12, 0x53(r1)
    stb r11, 0x54(r1)
    stb r10, 0x55(r1)
    stb r9, 0x56(r1)
    stb r8, 0x57(r1)
    stb r7, 0x58(r1)
    stb r6, 0x59(r1)
    stb r0, 0x5a(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    b lbl_8028618C
lbl_80285FA0:
    addi r30, r3, 0x500
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x24
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x25(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x26(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x27(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x28(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x29(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x2a(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x2b(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x2c(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x2d(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x2e(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x2f(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x30(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x31(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x32(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x33(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x34(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x24(r1)
    stb r29, 0x35(r1)
    stb r28, 0x36(r1)
    stb r12, 0x37(r1)
    stb r11, 0x38(r1)
    stb r10, 0x39(r1)
    stb r9, 0x3a(r1)
    stb r8, 0x3b(r1)
    stb r7, 0x3c(r1)
    stb r6, 0x3d(r1)
    stb r0, 0x3e(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    b lbl_8028618C
lbl_80286098:
    lis r29, lbl_8040BED0@ha
    lbzu r30, lbl_8040BED0@l(r29)
    li r28, 0x40
    addi r4, r1, 0x8
    lbz r31, 0x1(r29)
    li r3, 0xe0
    lbz r12, 0x2(r29)
    li r5, 0x1b
    lbz r11, 0x3(r29)
    lbz r10, 0x4(r29)
    lbz r9, 0x5(r29)
    lbz r8, 0x6(r29)
    lbz r7, 0x7(r29)
    stb r30, 0x9(r1)
    lbz r30, 0x8(r29)
    stb r31, 0xa(r1)
    lbz r31, 0x9(r29)
    stb r12, 0xb(r1)
    lbz r12, 0xa(r29)
    stb r11, 0xc(r1)
    lbz r11, 0xb(r29)
    stb r10, 0xd(r1)
    lbz r10, 0xc(r29)
    stb r9, 0xe(r1)
    lbz r9, 0xd(r29)
    stb r8, 0xf(r1)
    lbz r8, 0xe(r29)
    stb r7, 0x10(r1)
    lbz r7, 0xf(r29)
    stb r30, 0x11(r1)
    lbz r30, 0x10(r29)
    stb r31, 0x12(r1)
    lbz r31, 0x11(r29)
    stb r12, 0x13(r1)
    lbz r12, 0x12(r29)
    stb r11, 0x14(r1)
    lbz r11, 0x13(r29)
    stb r10, 0x15(r1)
    lbz r10, 0x14(r29)
    stb r9, 0x16(r1)
    lbz r9, 0x15(r29)
    stb r8, 0x17(r1)
    lbz r8, 0x16(r29)
    stb r7, 0x18(r1)
    lbz r7, 0x17(r29)
    lbz r6, 0x18(r29)
    lbz r0, 0x19(r29)
    stb r28, 0x8(r1)
    stb r30, 0x19(r1)
    stb r31, 0x1a(r1)
    stb r12, 0x1b(r1)
    stb r11, 0x1c(r1)
    stb r10, 0x1d(r1)
    stb r9, 0x1e(r1)
    stb r8, 0x1f(r1)
    stb r7, 0x20(r1)
    stb r6, 0x21(r1)
    stb r0, 0x22(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
lbl_8028618C:
    lwz r0, 0x194(r1)
    lwz r31, 0x18c(r1)
    lwz r30, 0x188(r1)
    lwz r29, 0x184(r1)
    lwz r28, 0x180(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

// asm_to_cpp: __VISetGammaImm
asm void __VISetGammaImm(s8 *arg0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x22
    stw r0, 0x34(r1)
    li r0, 0x10
    addi r4, r1, 0x8
    stb r0, 0x8(r1)
    lhz r0, 0x0(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0x9(r1)
    lhz r0, 0x0(r3)
    stb r0, 0xa(r1)
    lhz r0, 0x2(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0xb(r1)
    lhz r0, 0x2(r3)
    stb r0, 0xc(r1)
    lhz r0, 0x4(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0xd(r1)
    lhz r0, 0x4(r3)
    stb r0, 0xe(r1)
    lhz r0, 0x6(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0xf(r1)
    lhz r0, 0x6(r3)
    stb r0, 0x10(r1)
    lhz r0, 0x8(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0x11(r1)
    lhz r0, 0x8(r3)
    stb r0, 0x12(r1)
    lhz r0, 0xa(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0x13(r1)
    lhz r0, 0xa(r3)
    stb r0, 0x14(r1)
    lbz r0, 0xc(r3)
    stb r0, 0x15(r1)
    lbz r0, 0xd(r3)
    stb r0, 0x16(r1)
    lbz r0, 0xe(r3)
    stb r0, 0x17(r1)
    lbz r0, 0xf(r3)
    stb r0, 0x18(r1)
    lbz r0, 0x10(r3)
    stb r0, 0x19(r1)
    lbz r0, 0x11(r3)
    stb r0, 0x1a(r1)
    lbz r0, 0x12(r3)
    stb r0, 0x1b(r1)
    lhz r0, 0x14(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0x1c(r1)
    lhz r0, 0x14(r3)
    rlwinm r0, r0, 0, 24, 25
    stb r0, 0x1d(r1)
    lhz r0, 0x16(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0x1e(r1)
    lhz r0, 0x16(r3)
    rlwinm r0, r0, 0, 24, 25
    stb r0, 0x1f(r1)
    lhz r0, 0x18(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0x20(r1)
    lhz r0, 0x18(r3)
    rlwinm r0, r0, 0, 24, 25
    stb r0, 0x21(r1)
    lhz r0, 0x1a(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0x22(r1)
    lhz r0, 0x1a(r3)
    rlwinm r0, r0, 0, 24, 25
    stb r0, 0x23(r1)
    lhz r0, 0x1c(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0x24(r1)
    lhz r0, 0x1c(r3)
    rlwinm r0, r0, 0, 24, 25
    stb r0, 0x25(r1)
    lhz r0, 0x1e(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0x26(r1)
    lhz r0, 0x1e(r3)
    rlwinm r0, r0, 0, 24, 25
    stb r0, 0x27(r1)
    lhz r0, 0x20(r3)
    extrwi r0, r0, 8, 16
    stb r0, 0x28(r1)
    lhz r0, 0x20(r3)
    li r3, 0xe0
    rlwinm r0, r0, 0, 24, 25
    stb r0, 0x29(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: __VISetGamma1_0
asm void __VISetGamma1_0(void) {
    nofralloc
    lis r3, lbl_8036BB88@ha
    addi r3, r3, lbl_8036BB88@l
    addi r3, r3, 0x154
    b __VISetGammaImm
}

// asm_to_cpp: __VISetGamma
asm void __VISetGamma(void) {
    nofralloc
    lwz r0, lbl_8049DD7C
    lis r3, lbl_8036BB88@ha
    addi r3, r3, lbl_8036BB88@l
    mulli r0, r0, 0x22
    add r3, r3, r0
    b __VISetGammaImm
}

// asm_to_cpp: __VISetTrapFilter
asm void __VISetTrapFilter(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x3
    stw r0, 0x14(r1)
    lbz r0, lbl_8049CEC7
    stb r3, 0x8(r1)
    cmplwi r0, 0x1
    bne lbl_80286394
    li r0, 0x0
    stb r0, 0x9(r1)
    b lbl_8028639C
lbl_80286394:
    li r0, 0x1
    stb r0, 0x9(r1)
lbl_8028639C:
    addi r4, r1, 0x8
    li r3, 0xe0
    li r5, 0x2
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __VISetRGBOverDrive
asm void __VISetRGBOverDrive(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8049DD84
    cmpwi r0, 0x3
    bne lbl_80286410
    lwz r0, lbl_8049DD78
    li r3, 0xa
    stb r3, 0x8(r1)
    addi r4, r1, 0x8
    slwi r0, r0, 1
    li r3, 0xe0
    ori r0, r0, 0x1
    li r5, 0x2
    stb r0, 0x9(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    b lbl_80286438
lbl_80286410:
    li r3, 0xa
    li r0, 0x0
    stb r3, 0x8(r1)
    addi r4, r1, 0x8
    li r3, 0xe0
    li r5, 0x2
    stb r0, 0x9(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
lbl_80286438:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __VISetRGBModeImm
asm void __VISetRGBModeImm(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r6, 0x3
    li r3, 0xe0
    stw r0, 0x14(r1)
    li r0, 0x1
    addi r4, r1, 0x8
    li r5, 0x2
    stw r6, lbl_8049DD84
    stb r0, 0x8(r1)
    stb r6, 0x9(r1)
    bl __VISendI2CData
    li r3, 0x2
    bl WaitMicroTime
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
