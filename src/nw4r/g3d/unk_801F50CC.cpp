#include "types.h"

// Translation unit: src/nw4r/g3d/unk_801F50CC.cpp
// Total functions: 2

// Small Data symbols (@sda21)
extern "C" float lbl_8049C508;
extern "C" float lbl_804A1E98;

// Forward declarations
extern "C" void GetArray__Q34nw4r3g3d9ResVtxClrCFPPCvPUc();
extern "C" void GetArray__Q34nw4r3g3d9ResVtxNrmCFPPCvPUc();
extern "C" void GetArray__Q34nw4r3g3d9ResVtxPosCFPPCvPUc();
extern "C" void OSRegisterVersion();
extern "C" void TestExistence__Q34nw4r3g3d9AnmObjShpCFUl();
extern "C" void _restgpr_14();
extern "C" void _savegpr_14();
extern "C" void fn_801D0EA4();
extern "C" void fn_801F50CC();
extern "C" void fn_801F58C4();
extern "C" void fn_803150C4();

// ----------------------------------------------------------------------------
// fn_801F50CC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801F50CC() {
    nofralloc
    stwu r1, -0x5b0(r1)
    mflr r0
    stw r0, 0x5b4(r1)
    stfd f31, 0x5a0(r1)
    opword 0xF3E105A8
    addi r11, r1, 0x5a0
    bl _savegpr_14
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    bl fn_801D0EA4
    addi r14, r1, 0x368
    addi r24, r1, 0x558
    subf r4, r14, r24
    mr r23, r3
    addi r5, r4, 0xf
    lfs f31, lbl_804A1E98
    srawi r0, r5, 4
    clrrwi r20, r4, 31
    addze r3, r0
    clrrwi r19, r5, 31
    addi r21, r3, 0x1
    addi r22, r1, 0x4d8
    clrrwi r18, r3, 31
    li r31, 0x0
    clrrwi r17, r21, 31
    li r25, 0x0
    b lbl_801F589C
lbl_801F5140:
    mr r3, r26
    mr r4, r31
    bl TestExistence__Q34nw4r3g3d9AnmObjShpCFUl
    cmpwi r3, 0x0
    beq lbl_801F5894
    addi r3, r1, 0x368
    stw r25, 0x348(r1)
    cmplw r3, r24
    stw r25, 0x34c(r1)
    stw r25, 0x350(r1)
    stw r25, 0x358(r1)
    stw r25, 0x35c(r1)
    stw r25, 0x360(r1)
    bge lbl_801F5294
    cmpwi r21, 0x8
    ble lbl_801F5268
    cmplw r14, r24
    li r0, 0x0
    li r4, 0x0
    bgt lbl_801F51B4
    cmpwi r20, 0x0
    li r5, 0x1
    bne lbl_801F51A8
    cmpwi r19, 0x0
    beq lbl_801F51A8
    li r5, 0x0
lbl_801F51A8:
    cmpwi r5, 0x0
    beq lbl_801F51B4
    li r4, 0x1
lbl_801F51B4:
    cmpwi r4, 0x0
    beq lbl_801F51E0
    cmpwi r18, 0x0
    li r4, 0x1
    bne lbl_801F51D4
    cmpw r18, r17
    beq lbl_801F51D4
    li r4, 0x0
lbl_801F51D4:
    cmpwi r4, 0x0
    beq lbl_801F51E0
    li r0, 0x1
lbl_801F51E0:
    cmpwi r0, 0x0
    beq lbl_801F5268
    addi r0, r22, 0x7f
    subf r0, r3, r0
    srwi r0, r0, 7
    mtctr r0
    cmplw r3, r22
    bge lbl_801F5268
lbl_801F5200:
    stw r25, 0x0(r3)
    stw r25, 0x4(r3)
    stw r25, 0x8(r3)
    stw r25, 0x10(r3)
    stw r25, 0x14(r3)
    stw r25, 0x18(r3)
    stw r25, 0x20(r3)
    stw r25, 0x24(r3)
    stw r25, 0x28(r3)
    stw r25, 0x30(r3)
    stw r25, 0x34(r3)
    stw r25, 0x38(r3)
    stw r25, 0x40(r3)
    stw r25, 0x44(r3)
    stw r25, 0x48(r3)
    stw r25, 0x50(r3)
    stw r25, 0x54(r3)
    stw r25, 0x58(r3)
    stw r25, 0x60(r3)
    stw r25, 0x64(r3)
    stw r25, 0x68(r3)
    stw r25, 0x70(r3)
    stw r25, 0x74(r3)
    stw r25, 0x78(r3)
    addi r3, r3, 0x80
    bdnz lbl_801F5200
lbl_801F5268:
    addi r0, r24, 0xf
    subf r0, r3, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r3, r24
    bge lbl_801F5294
lbl_801F5280:
    stw r25, 0x0(r3)
    stw r25, 0x4(r3)
    stw r25, 0x8(r3)
    addi r3, r3, 0x10
    bdnz lbl_801F5280
lbl_801F5294:
    lwz r12, 0x0(r26)
    mr r3, r26
    mr r5, r31
    addi r4, r1, 0x340
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lwz r4, 0x0(r3)
    mr r30, r3
    clrlwi. r0, r4, 31
    beq lbl_801F5894
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_801F54D8
    lwz r0, 0x8(r3)
    li r4, 0x0
    stw r0, 0x20(r1)
    lwz r16, 0x0(r27)
    lwz r0, 0x8(r16)
    cmpwi r0, 0x0
    beq lbl_801F52EC
    add r15, r16, r0
    b lbl_801F52F0
lbl_801F52EC:
    li r15, 0x0
lbl_801F52F0:
    lfs f0, 0x14(r3)
    fcmpu cr0, f31, f0
    beq lbl_801F5320
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    addi r5, r1, 0xa
    bl GetArray__Q34nw4r3g3d9ResVtxPosCFPPCvPUc
    lwz r0, 0x1c(r1)
    li r4, 0x1
    stw r0, 0x238(r1)
    lfs f0, 0x14(r30)
    stfs f0, 0x23c(r1)
lbl_801F5320:
    slwi r0, r4, 3
    addi r5, r1, 0x238
    mr r3, r30
    li r7, 0x0
    add r5, r5, r0
    b lbl_801F537C
lbl_801F5338:
    lfs f0, 0x24(r3)
    fcmpu cr0, f31, f0
    beq lbl_801F5374
    lwz r6, 0x18(r3)
    lwz r0, 0x8(r6)
    cmpwi r0, 0x0
    beq lbl_801F535C
    add r0, r6, r0
    b lbl_801F5360
lbl_801F535C:
    li r0, 0x0
lbl_801F5360:
    stw r0, 0x0(r5)
    addi r4, r4, 0x1
    lfs f0, 0x24(r3)
    stfs f0, 0x4(r5)
    addi r5, r5, 0x8
lbl_801F5374:
    addi r3, r3, 0x10
    addi r7, r7, 0x1
lbl_801F537C:
    lwz r0, 0x4(r30)
    cmpw r7, r0
    blt lbl_801F5338
    lwz r5, 0x20(r1)
    slwi r0, r4, 3
    addi r3, r1, 0x238
    lhz r4, 0x1e(r5)
    add r3, r3, r0
    mulli r4, r4, 0xc
    add r8, r15, r4
    b lbl_801F54B4
lbl_801F53A8:
    lwz r7, 0x238(r1)
    addi r5, r1, 0x240
    addi r6, r3, 0x7
    lfs f2, 0x23c(r1)
    opword 0xE0070000
    subf r6, r5, r6
    opword 0xE0278008
    addi r0, r7, 0xc
    cmplw r5, r3
    opword 0x100000B2
    opword 0x102100B2
    stw r0, 0x238(r1)
    srwi r6, r6, 3
    bge lbl_801F54A8
    srwi. r0, r6, 2
    mtctr r0
    beq lbl_801F547C
lbl_801F53EC:
    lwz r7, 0x0(r5)
    lfs f2, 0x4(r5)
    opword 0xE0670000
    addi r0, r7, 0xc
    opword 0xE0878008
    opword 0x100300BA
    stw r0, 0x0(r5)
    opword 0x102408BA
    lwz r7, 0x8(r5)
    lfs f2, 0xc(r5)
    opword 0xE0670000
    addi r0, r7, 0xc
    opword 0xE0878008
    opword 0x100300BA
    stw r0, 0x8(r5)
    opword 0x102408BA
    lwz r7, 0x10(r5)
    lfs f2, 0x14(r5)
    opword 0xE0670000
    addi r0, r7, 0xc
    opword 0xE0878008
    opword 0x100300BA
    stw r0, 0x10(r5)
    opword 0x102408BA
    lwz r7, 0x18(r5)
    lfs f2, 0x1c(r5)
    opword 0xE0670000
    addi r0, r7, 0xc
    opword 0xE0878008
    opword 0x100300BA
    stw r0, 0x18(r5)
    opword 0x102408BA
    addi r5, r5, 0x20
    bdnz lbl_801F53EC
    andi. r6, r6, 0x3
    beq lbl_801F54A8
lbl_801F547C:
    mtctr r6
lbl_801F5480:
    lwz r7, 0x0(r5)
    lfs f2, 0x4(r5)
    opword 0xE0670000
    addi r0, r7, 0xc
    opword 0xE0878008
    opword 0x100300BA
    stw r0, 0x0(r5)
    opword 0x102408BA
    addi r5, r5, 0x8
    bdnz lbl_801F5480
lbl_801F54A8:
    opword 0xF00F0000
    opword 0xF02F8008
    addi r15, r15, 0xc
lbl_801F54B4:
    cmplw r15, r8
    blt lbl_801F53A8
    lwz r0, 0x8(r16)
    cmpwi r0, 0x0
    beq lbl_801F54D0
    add r3, r16, r0
    b lbl_801F54D4
lbl_801F54D0:
    li r3, 0x0
lbl_801F54D4:
    bl fn_803150C4
lbl_801F54D8:
    lwz r0, 0x0(r30)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801F5704
    cmpwi r28, 0x0
    beq lbl_801F5704
    lwz r4, 0xc(r30)
    li r3, 0x0
    stw r4, 0x18(r1)
    lwz r0, 0x10(r4)
    slwi r0, r0, 2
    lwzx r16, r28, r0
    lwz r0, 0x8(r16)
    cmpwi r0, 0x0
    beq lbl_801F5518
    add r15, r16, r0
    b lbl_801F551C
lbl_801F5518:
    li r15, 0x0
lbl_801F551C:
    lfs f0, 0x14(r30)
    fcmpu cr0, f31, f0
    beq lbl_801F554C
    addi r3, r1, 0x18
    addi r4, r1, 0x14
    addi r5, r1, 0x9
    bl GetArray__Q34nw4r3g3d9ResVtxNrmCFPPCvPUc
    lwz r0, 0x14(r1)
    li r3, 0x1
    stw r0, 0x130(r1)
    lfs f0, 0x14(r30)
    stfs f0, 0x134(r1)
lbl_801F554C:
    slwi r0, r3, 3
    addi r5, r1, 0x130
    mr r4, r30
    li r7, 0x0
    add r5, r5, r0
    b lbl_801F55A8
lbl_801F5564:
    lfs f0, 0x24(r4)
    fcmpu cr0, f31, f0
    beq lbl_801F55A0
    lwz r6, 0x1c(r4)
    lwz r0, 0x8(r6)
    cmpwi r0, 0x0
    beq lbl_801F5588
    add r0, r6, r0
    b lbl_801F558C
lbl_801F5588:
    li r0, 0x0
lbl_801F558C:
    stw r0, 0x0(r5)
    addi r3, r3, 0x1
    lfs f0, 0x24(r4)
    stfs f0, 0x4(r5)
    addi r5, r5, 0x8
lbl_801F55A0:
    addi r4, r4, 0x10
    addi r7, r7, 0x1
lbl_801F55A8:
    lwz r0, 0x4(r30)
    cmpw r7, r0
    blt lbl_801F5564
    lwz r4, 0x18(r1)
    slwi r0, r3, 3
    addi r3, r1, 0x130
    lhz r4, 0x1e(r4)
    add r3, r3, r0
    mulli r4, r4, 0xc
    add r8, r15, r4
    b lbl_801F56E0
lbl_801F55D4:
    lwz r7, 0x130(r1)
    addi r5, r1, 0x138
    addi r6, r3, 0x7
    lfs f2, 0x134(r1)
    opword 0xE0070000
    subf r6, r5, r6
    opword 0xE0278008
    addi r0, r7, 0xc
    cmplw r5, r3
    opword 0x100000B2
    opword 0x102100B2
    stw r0, 0x130(r1)
    srwi r6, r6, 3
    bge lbl_801F56D4
    srwi. r0, r6, 2
    mtctr r0
    beq lbl_801F56A8
lbl_801F5618:
    lwz r7, 0x0(r5)
    lfs f2, 0x4(r5)
    opword 0xE0670000
    addi r0, r7, 0xc
    opword 0xE0878008
    opword 0x100300BA
    stw r0, 0x0(r5)
    opword 0x102408BA
    lwz r7, 0x8(r5)
    lfs f2, 0xc(r5)
    opword 0xE0670000
    addi r0, r7, 0xc
    opword 0xE0878008
    opword 0x100300BA
    stw r0, 0x8(r5)
    opword 0x102408BA
    lwz r7, 0x10(r5)
    lfs f2, 0x14(r5)
    opword 0xE0670000
    addi r0, r7, 0xc
    opword 0xE0878008
    opword 0x100300BA
    stw r0, 0x10(r5)
    opword 0x102408BA
    lwz r7, 0x18(r5)
    lfs f2, 0x1c(r5)
    opword 0xE0670000
    addi r0, r7, 0xc
    opword 0xE0878008
    opword 0x100300BA
    stw r0, 0x18(r5)
    opword 0x102408BA
    addi r5, r5, 0x20
    bdnz lbl_801F5618
    andi. r6, r6, 0x3
    beq lbl_801F56D4
lbl_801F56A8:
    mtctr r6
lbl_801F56AC:
    lwz r7, 0x0(r5)
    lfs f2, 0x4(r5)
    opword 0xE0670000
    addi r0, r7, 0xc
    opword 0xE0878008
    opword 0x100300BA
    stw r0, 0x0(r5)
    opword 0x102408BA
    addi r5, r5, 0x8
    bdnz lbl_801F56AC
lbl_801F56D4:
    opword 0xF00F0000
    opword 0xF02F8008
    addi r15, r15, 0xc
lbl_801F56E0:
    cmplw r15, r8
    blt lbl_801F55D4
    lwz r0, 0x8(r16)
    cmpwi r0, 0x0
    beq lbl_801F56FC
    add r3, r16, r0
    b lbl_801F5700
lbl_801F56FC:
    li r3, 0x0
lbl_801F5700:
    bl fn_803150C4
lbl_801F5704:
    lwz r0, 0x0(r30)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_801F5894
    cmpwi r29, 0x0
    beq lbl_801F5894
    lwz r4, 0x10(r30)
    li r3, 0x0
    stw r4, 0x10(r1)
    lwz r0, 0x10(r4)
    slwi r0, r0, 2
    lwzx r16, r29, r0
    lwz r0, 0x8(r16)
    cmpwi r0, 0x0
    beq lbl_801F5744
    add r15, r16, r0
    b lbl_801F5748
lbl_801F5744:
    li r15, 0x0
lbl_801F5748:
    lfs f0, 0x14(r30)
    fcmpu cr0, f31, f0
    beq lbl_801F5778
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl GetArray__Q34nw4r3g3d9ResVtxClrCFPPCvPUc
    lwz r0, 0xc(r1)
    li r3, 0x1
    stw r0, 0x28(r1)
    lfs f0, 0x14(r30)
    stfs f0, 0x2c(r1)
lbl_801F5778:
    slwi r0, r3, 3
    addi r5, r1, 0x28
    mr r4, r30
    li r7, 0x0
    add r5, r5, r0
    b lbl_801F57D4
lbl_801F5790:
    lfs f0, 0x24(r4)
    fcmpu cr0, f31, f0
    beq lbl_801F57CC
    lwz r6, 0x20(r4)
    lwz r0, 0x8(r6)
    cmpwi r0, 0x0
    beq lbl_801F57B4
    add r0, r6, r0
    b lbl_801F57B8
lbl_801F57B4:
    li r0, 0x0
lbl_801F57B8:
    stw r0, 0x0(r5)
    addi r3, r3, 0x1
    lfs f0, 0x24(r4)
    stfs f0, 0x4(r5)
    addi r5, r5, 0x8
lbl_801F57CC:
    addi r4, r4, 0x10
    addi r7, r7, 0x1
lbl_801F57D4:
    lwz r0, 0x4(r30)
    cmpw r7, r0
    blt lbl_801F5790
    lwz r4, 0x10(r1)
    slwi r0, r3, 3
    addi r3, r1, 0x28
    lhz r4, 0x1e(r4)
    add r3, r3, r0
    slwi r4, r4, 2
    add r6, r15, r4
    b lbl_801F5870
lbl_801F5800:
    lwz r5, 0x28(r1)
    lfs f2, 0x2c(r1)
    opword 0xE0052000
    opword 0xE0252002
    addi r7, r1, 0x30
    addi r0, r3, 0x7
    addi r5, r5, 0x4
    subf r0, r7, r0
    stw r5, 0x28(r1)
    srwi r0, r0, 3
    opword 0x100000B2
    opword 0x102100B2
    mtctr r0
    cmplw r7, r3
    bge lbl_801F5864
lbl_801F583C:
    lwz r5, 0x0(r7)
    lfs f2, 0x4(r7)
    opword 0xE0652000
    opword 0xE0852002
    addi r0, r5, 0x4
    opword 0x100300BA
    stw r0, 0x0(r7)
    opword 0x102408BA
    addi r7, r7, 0x8
    bdnz lbl_801F583C
lbl_801F5864:
    opword 0xF00F2000
    opword 0xF02F2002
    addi r15, r15, 0x4
lbl_801F5870:
    cmplw r15, r6
    blt lbl_801F5800
    lwz r0, 0x8(r16)
    cmpwi r0, 0x0
    beq lbl_801F588C
    add r3, r16, r0
    b lbl_801F5890
lbl_801F588C:
    li r3, 0x0
lbl_801F5890:
    bl fn_803150C4
lbl_801F5894:
    addi r27, r27, 0x4
    addi r31, r31, 0x1
lbl_801F589C:
    cmplw r31, r23
    blt lbl_801F5140
    opword 0xE3E105A8
    addi r11, r1, 0x5a0
    lfd f31, 0x5a0(r1)
    bl _restgpr_14
    lwz r0, 0x5b4(r1)
    mtlr r0
    addi r1, r1, 0x5b0
    blr
}

// ----------------------------------------------------------------------------
// fn_801F58C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801F58C4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8049C508
    bl OSRegisterVersion
    li r3, 0x4
    oris r3, r3, 0x4
    mtspr GQR2, r3
    li r3, 0x5
    oris r3, r3, 0x5
    mtspr GQR3, r3
    li r3, 0x6
    oris r3, r3, 0x6
    mtspr GQR4, r3
    li r3, 0x7
    oris r3, r3, 0x7
    mtspr GQR5, r3
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

