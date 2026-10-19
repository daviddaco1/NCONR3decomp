#include "types.h"

// Translation unit: src/nw4r/g3d/res/unk_801D7300.cpp
// Total functions: 22

// Small Data symbols (@sda21)
extern "C" float lbl_804A1C38;
extern "C" float lbl_804A1C3C;
extern "C" float lbl_804A1C58;
extern "C" float lbl_804A1C60;
extern "C" float lbl_804A1C68;
extern "C" float lbl_804A1C70;
extern "C" float lbl_804A1C78;
extern "C" float lbl_804A1C80;
extern "C" float lbl_804A1C88;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80360C60[];
extern "C" u8 lbl_80360C80[];
extern "C" u8 lbl_80360CA0[];
extern "C" u8 lbl_80360CC0[];
extern "C" u8 lbl_80360CE0[];

// Forward declarations
extern "C" void ConfigMEM1_48MB();
extern "C" void FrSqrt__Q24nw4r4mathFf();
extern "C" void MTX34Scale__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void PSMTXCopy();
extern "C" void __vc__Q34nw4r3g3d6ResDicCFPCc();
extern "C" void __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void floor();
extern "C" void fn_801D4B44();
extern "C" void fn_801D4C70();
extern "C" void fn_801D7300();
extern "C" void fn_801D752C();
extern "C" void fn_801D75FC();
extern "C" void fn_801D79F4();
extern "C" void fn_801D7B54();
extern "C" void fn_801D7E6C();
extern "C" void fn_801D7EEC();
extern "C" void fn_801D7F98();
extern "C" void fn_801D8018();
extern "C" void fn_801D80C4();
extern "C" void fn_801D8144();
extern "C" void fn_801D81F0();
extern "C" void fn_801D82F0();
extern "C" void fn_801D839C();
extern "C" void fn_801D8448();
extern "C" void fn_801D84C8();
extern "C" void fn_801D8514();
extern "C" void fn_801D8560();
extern "C" void fn_801D85AC();
extern "C" void fn_801D85F8();
extern "C" void fn_801D8644();

// ----------------------------------------------------------------------------
// fn_801D7300
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D7300() {
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
    lfs f0, 0x18(r4)
    stw r31, 0x2c(r1)
    mr r31, r4
    fmuls f2, f0, f0
    lfs f1, 0x8(r4)
    stw r30, 0x28(r1)
    mr r30, r3
    lfs f0, 0x28(r4)
    fmadds f1, f1, f1, f2
    lfs f30, lbl_804A1C38
    fmadds f29, f0, f0, f1
    fcmpo cr0, f29, f30
    opword 0x4C401382
    bne lbl_801D7360
    b lbl_801D736C
lbl_801D7360:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f30, f29, f1
lbl_801D736C:
    lfs f0, 0x14(r31)
    lfs f1, 0x4(r31)
    fmuls f2, f0, f0
    lfs f0, 0x24(r31)
    lfs f31, lbl_804A1C38
    fmadds f1, f1, f1, f2
    fmadds f29, f0, f0, f1
    fcmpo cr0, f29, f31
    opword 0x4C401382
    bne lbl_801D7398
    b lbl_801D73A4
lbl_801D7398:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f31, f29, f1
lbl_801D73A4:
    lfs f0, 0x10(r31)
    lfs f1, 0x0(r31)
    fmuls f3, f0, f0
    lfs f0, 0x20(r31)
    lfs f2, lbl_804A1C38
    fmadds f1, f1, f1, f3
    fmadds f29, f0, f0, f1
    fcmpo cr0, f29, f2
    opword 0x4C401382
    bne lbl_801D73D0
    b lbl_801D73DC
lbl_801D73D0:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f2, f29, f1
lbl_801D73DC:
    frsp f0, f2
    lfs f1, lbl_804A1C3C
    stfs f2, 0x14(r1)
    fcmpu cr0, f1, f0
    stfs f31, 0x18(r1)
    stfs f30, 0x1c(r1)
    bne lbl_801D7430
    frsp f0, f31
    fcmpu cr0, f1, f0
    bne lbl_801D7430
    frsp f0, f30
    fcmpu cr0, f1, f0
    bne lbl_801D7430
    lwz r0, 0x0(r30)
    ori r3, r0, 0x18
    rlwinm. r0, r3, 0, 29, 29
    stw r3, 0x0(r30)
    beq lbl_801D7464
    ori r0, r3, 0x2
    stw r0, 0x0(r30)
    b lbl_801D7464
lbl_801D7430:
    lwz r3, 0x0(r30)
    li r0, -0x1b
    lfs f0, 0x14(r1)
    lfs f1, 0x18(r1)
    and r0, r3, r0
    stw r0, 0x0(r30)
    fcmpu cr0, f0, f1
    bne lbl_801D7464
    lfs f0, 0x1c(r1)
    fcmpu cr0, f1, f0
    bne lbl_801D7464
    ori r0, r0, 0x10
    stw r0, 0x0(r30)
lbl_801D7464:
    lwz r0, 0x0(r30)
    lfs f2, 0x14(r1)
    lfs f1, 0x18(r1)
    rlwinm. r0, r0, 0, 28, 28
    lfs f0, 0x1c(r1)
    stfs f2, 0x4(r30)
    stfs f1, 0x8(r30)
    stfs f0, 0xc(r30)
    beq lbl_801D7498
    mr r3, r31
    addi r4, r30, 0x1c
    bl PSMTXCopy
    b lbl_801D74F0
lbl_801D7498:
    lfs f0, 0x14(r1)
    mr r4, r31
    lfs f3, 0x18(r1)
    addi r3, r30, 0x1c
    fres f1, f0
    lfs f6, 0x1c(r1)
    addi r5, r1, 0x8
    fres f4, f3
    opword 0x1041082A
    opword 0x10210072
    opword 0x10A4202A
    opword 0x10840132
    opword 0x1020107C
    fres f7, f6
    stfs f1, 0x8(r1)
    opword 0x1083293C
    opword 0x1047382A
    opword 0x100701F2
    stfs f4, 0xc(r1)
    opword 0x10E6103C
    stfs f7, 0x10(r1)
    bl MTX34Scale__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801D74F0:
    lwz r0, 0x0(r30)
    clrlwi r0, r0, 1
    stw r0, 0x0(r30)
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    lfd f30, 0x40(r1)
    opword 0xE3A10038
    lfd f29, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_801D752C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D752C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    lwz r0, 0x4(r5)
    lwz r6, 0x14(r5)
    cmpwi r0, 0x0
    srwi r7, r6, 31
    beq lbl_801D7560
    add r3, r5, r0
    b lbl_801D7564
lbl_801D7560:
    li r3, 0x0
lbl_801D7564:
    lfs f0, lbl_804A1C58
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801D7578
    b lbl_801D75B8
lbl_801D7578:
    lhz r3, 0x34(r3)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f2, lbl_804A1C60
    stw r3, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fcmpo cr0, f0, f1
    opword 0x4C401382
    bne lbl_801D75B4
    stw r3, 0x14(r1)
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    b lbl_801D75B8
lbl_801D75B4:
    fmr f0, f1
lbl_801D75B8:
    clrlwi r0, r6, 30
    cmpwi r7, 0x0
    stw r0, 0x0(r4)
    beq lbl_801D75D0
    lwz r3, 0x18(r5)
    b lbl_801D75E4
lbl_801D75D0:
    lwz r0, 0x18(r5)
    fmr f1, f0
    add r3, r5, r0
    addi r3, r3, 0x18
    bl fn_801D4C70
lbl_801D75E4:
    stw r3, 0x4(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801D75FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D75FC() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    addi r11, r1, 0x40
    bl _savegpr_23
    lwz r31, 0x0(r3)
    fmr f30, f1
    mr r27, r4
    lwz r0, 0x4(r31)
    lwz r30, 0x1c(r31)
    cmpwi r0, 0x0
    beq lbl_801D7644
    add r3, r31, r0
    b lbl_801D7648
lbl_801D7644:
    li r3, 0x0
lbl_801D7648:
    lfs f31, lbl_804A1C68
    fcmpo cr0, f1, f31
    opword 0x4C401382
    bne lbl_801D765C
    b lbl_801D769C
lbl_801D765C:
    lhz r3, 0x34(r3)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f2, lbl_804A1C70
    stw r3, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fcmpo cr0, f0, f1
    opword 0x4C401382
    bne lbl_801D7698
    stw r3, 0x14(r1)
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f31, f0, f2
    b lbl_801D769C
lbl_801D7698:
    fmr f31, f30
lbl_801D769C:
    rlwinm. r0, r30, 0, 8, 8
    clrlwi r0, r30, 26
    stw r0, 0x4(r4)
    bne lbl_801D76F8
    fmr f1, f31
    bl floor
    frsp f0, f1
    lwz r0, 0x20(r31)
    lis r3, 0x8000
    add r5, r31, r0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    rlwinm r4, r0, 29, 3, 29
    clrlwi r0, r0, 27
    add r4, r5, r4
    lwz r4, 0x20(r4)
    srw r0, r3, r0
    and. r0, r4, r0
    beq lbl_801D76F8
    lwz r0, 0x4(r27)
    ori r0, r0, 0x4
    stw r0, 0x4(r27)
lbl_801D76F8:
    lwz r0, 0x4(r27)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801D79CC
    clrlwi. r29, r30, 30
    extrwi r28, r30, 1, 28
    li r26, 0x1
    bne lbl_801D7720
    cmpwi r28, 0x0
    bne lbl_801D7720
    li r26, 0x0
lbl_801D7720:
    rlwinm. r0, r30, 0, 12, 12
    extrwi r25, r30, 1, 11
    extrwi r24, r30, 1, 10
    extrwi r23, r30, 1, 9
    beq lbl_801D773C
    lfs f1, 0x24(r31)
    b lbl_801D7750
lbl_801D773C:
    lwz r0, 0x24(r31)
    fmr f1, f30
    add r3, r31, r0
    addi r3, r3, 0x24
    bl fn_801D4B44
lbl_801D7750:
    cmpwi r25, 0x0
    stfs f1, 0x8(r27)
    beq lbl_801D7764
    lfs f1, 0x28(r31)
    b lbl_801D7778
lbl_801D7764:
    lwz r0, 0x28(r31)
    fmr f1, f30
    add r3, r31, r0
    addi r3, r3, 0x28
    bl fn_801D4B44
lbl_801D7778:
    cmpwi r24, 0x0
    stfs f1, 0xc(r27)
    beq lbl_801D778C
    lfs f1, 0x2c(r31)
    b lbl_801D77A0
lbl_801D778C:
    lwz r0, 0x2c(r31)
    fmr f1, f30
    add r3, r31, r0
    addi r3, r3, 0x2c
    bl fn_801D4B44
lbl_801D77A0:
    cmpwi r23, 0x0
    stfs f1, 0x10(r27)
    beq lbl_801D77B4
    lwz r3, 0x30(r31)
    b lbl_801D77C8
lbl_801D77B4:
    lwz r0, 0x30(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x30
    bl fn_801D4C70
lbl_801D77C8:
    cmpwi r26, 0x0
    stw r3, 0x20(r27)
    beq lbl_801D7854
    rlwinm. r0, r30, 0, 7, 7
    extrwi r23, r30, 1, 6
    extrwi r24, r30, 1, 5
    beq lbl_801D77EC
    lfs f1, 0x34(r31)
    b lbl_801D7800
lbl_801D77EC:
    lwz r0, 0x34(r31)
    fmr f1, f30
    add r3, r31, r0
    addi r3, r3, 0x34
    bl fn_801D4B44
lbl_801D7800:
    cmpwi r23, 0x0
    stfs f1, 0x14(r27)
    beq lbl_801D7814
    lfs f1, 0x38(r31)
    b lbl_801D7828
lbl_801D7814:
    lwz r0, 0x38(r31)
    fmr f1, f30
    add r3, r31, r0
    addi r3, r3, 0x38
    bl fn_801D4B44
lbl_801D7828:
    cmpwi r24, 0x0
    stfs f1, 0x18(r27)
    beq lbl_801D783C
    lfs f1, 0x3c(r31)
    b lbl_801D7850
lbl_801D783C:
    lwz r0, 0x3c(r31)
    fmr f1, f30
    add r3, r31, r0
    addi r3, r3, 0x3c
    bl fn_801D4B44
lbl_801D7850:
    stfs f1, 0x1c(r27)
lbl_801D7854:
    cmpwi r29, 0x1
    beq lbl_801D7968
    bge lbl_801D786C
    cmpwi r29, 0x0
    bge lbl_801D7878
    b lbl_801D7968
lbl_801D786C:
    cmpwi r29, 0x3
    bge lbl_801D7968
    b lbl_801D78D8
lbl_801D7878:
    rlwinm. r0, r30, 0, 3, 3
    lwz r0, 0x40(r31)
    extrwi r23, r30, 1, 2
    stw r0, 0x24(r27)
    beq lbl_801D7894
    lfs f1, 0x44(r31)
    b lbl_801D78A8
lbl_801D7894:
    lwz r0, 0x44(r31)
    fmr f1, f30
    add r3, r31, r0
    addi r3, r3, 0x44
    bl fn_801D4B44
lbl_801D78A8:
    cmpwi r23, 0x0
    stfs f1, 0x28(r27)
    beq lbl_801D78BC
    lfs f1, 0x48(r31)
    b lbl_801D78D0
lbl_801D78BC:
    lwz r0, 0x48(r31)
    fmr f1, f30
    add r3, r31, r0
    addi r3, r3, 0x48
    bl fn_801D4B44
lbl_801D78D0:
    stfs f1, 0x2c(r27)
    b lbl_801D7968
lbl_801D78D8:
    lwz r3, 0x40(r31)
    rlwinm. r0, r30, 0, 4, 4
    extrwi r23, r30, 1, 3
    extrwi r24, r30, 1, 2
    stw r3, 0x24(r27)
    lwz r0, 0x4c(r31)
    stw r0, 0x30(r27)
    beq lbl_801D7900
    lfs f1, 0x50(r31)
    b lbl_801D7914
lbl_801D7900:
    lwz r0, 0x50(r31)
    fmr f1, f30
    add r3, r31, r0
    addi r3, r3, 0x50
    bl fn_801D4B44
lbl_801D7914:
    cmpwi r23, 0x0
    stfs f1, 0x34(r27)
    beq lbl_801D7928
    lfs f1, 0x44(r31)
    b lbl_801D793C
lbl_801D7928:
    lwz r0, 0x44(r31)
    fmr f1, f30
    add r3, r31, r0
    addi r3, r3, 0x44
    bl fn_801D4B44
lbl_801D793C:
    cmpwi r24, 0x0
    stfs f1, 0x28(r27)
    beq lbl_801D7950
    lfs f1, 0x48(r31)
    b lbl_801D7964
lbl_801D7950:
    lwz r0, 0x48(r31)
    fmr f1, f30
    add r3, r31, r0
    addi r3, r3, 0x48
    bl fn_801D4B44
lbl_801D7964:
    stfs f1, 0x2c(r27)
lbl_801D7968:
    cmpwi r28, 0x0
    beq lbl_801D79CC
    rlwinm. r0, r30, 0, 1, 1
    srwi r23, r30, 31
    beq lbl_801D7984
    lwz r3, 0x54(r31)
    b lbl_801D7998
lbl_801D7984:
    lwz r0, 0x54(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x54
    bl fn_801D4C70
lbl_801D7998:
    cmpwi r23, 0x0
    stw r3, 0x38(r27)
    beq lbl_801D79AC
    lfs f1, 0x58(r31)
    b lbl_801D79C0
lbl_801D79AC:
    lwz r0, 0x58(r31)
    fmr f1, f30
    add r3, r31, r0
    addi r3, r3, 0x58
    bl fn_801D4B44
lbl_801D79C0:
    stfs f1, 0x3c(r27)
    lwz r0, 0x14(r31)
    stw r0, 0x0(r27)
lbl_801D79CC:
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    addi r11, r1, 0x40
    lfd f30, 0x40(r1)
    bl _restgpr_23
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_801D79F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D79F4() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    fmr f30, f1
    stw r31, 0x2c(r1)
    lwz r31, 0x0(r3)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r4
    lwz r0, 0x4(r31)
    lwz r5, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_801D7A44
    add r3, r31, r0
    b lbl_801D7A48
lbl_801D7A44:
    li r3, 0x0
lbl_801D7A48:
    lfs f31, lbl_804A1C78
    fcmpo cr0, f1, f31
    opword 0x4C401382
    bne lbl_801D7A5C
    b lbl_801D7A9C
lbl_801D7A5C:
    lhz r3, 0x34(r3)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f2, lbl_804A1C80
    stw r3, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fcmpo cr0, f0, f1
    opword 0x4C401382
    bne lbl_801D7A98
    stw r3, 0x14(r1)
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f31, f0, f2
    b lbl_801D7A9C
lbl_801D7A98:
    fmr f31, f30
lbl_801D7A9C:
    rlwinm. r0, r5, 0, 2, 2
    lwz r0, 0x18(r31)
    extrwi r30, r5, 1, 1
    srwi r29, r5, 31
    stw r0, 0x0(r4)
    beq lbl_801D7ABC
    lfs f1, 0x1c(r31)
    b lbl_801D7AD0
lbl_801D7ABC:
    lwz r0, 0x1c(r31)
    fmr f1, f30
    add r3, r31, r0
    addi r3, r3, 0x1c
    bl fn_801D4B44
lbl_801D7AD0:
    cmpwi r30, 0x0
    stfs f1, 0x4(r28)
    beq lbl_801D7AE4
    lfs f1, 0x20(r31)
    b lbl_801D7AF8
lbl_801D7AE4:
    lwz r0, 0x20(r31)
    fmr f1, f30
    add r3, r31, r0
    addi r3, r3, 0x20
    bl fn_801D4B44
lbl_801D7AF8:
    cmpwi r29, 0x0
    stfs f1, 0x8(r28)
    beq lbl_801D7B0C
    lwz r3, 0x24(r31)
    b lbl_801D7B20
lbl_801D7B0C:
    lwz r0, 0x24(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x24
    bl fn_801D4C70
lbl_801D7B20:
    stw r3, 0xc(r28)
    opword 0xE3E10048
    lfd f31, 0x40(r1)
    opword 0xE3C10038
    lfd f30, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_801D7B54
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D7B54() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_23
    lwz r31, 0x0(r3)
    fmr f31, f1
    mr r26, r4
    lwz r30, 0x18(r31)
    clrlwi r3, r30, 30
    rlwinm. r0, r30, 0, 14, 14
    stw r3, 0x0(r4)
    extrwi r25, r30, 1, 13
    extrwi r24, r30, 1, 12
    extrwi r23, r30, 1, 11
    lwz r0, 0x14(r31)
    extrwi r29, r30, 1, 10
    extrwi r28, r30, 1, 9
    clrlwi r27, r30, 31
    stw r0, 0x4(r4)
    beq lbl_801D7BB8
    lfs f1, 0x20(r31)
    b lbl_801D7BC8
lbl_801D7BB8:
    lwz r0, 0x20(r31)
    add r3, r31, r0
    addi r3, r3, 0x20
    bl fn_801D4B44
lbl_801D7BC8:
    cmpwi r25, 0x0
    stfs f1, 0x8(r26)
    beq lbl_801D7BDC
    lfs f1, 0x24(r31)
    b lbl_801D7BF0
lbl_801D7BDC:
    lwz r0, 0x24(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x24
    bl fn_801D4B44
lbl_801D7BF0:
    cmpwi r24, 0x0
    stfs f1, 0xc(r26)
    beq lbl_801D7C04
    lfs f1, 0x28(r31)
    b lbl_801D7C18
lbl_801D7C04:
    lwz r0, 0x28(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x28
    bl fn_801D4B44
lbl_801D7C18:
    cmpwi r23, 0x0
    stfs f1, 0x10(r26)
    beq lbl_801D7C2C
    lfs f1, 0x2c(r31)
    b lbl_801D7C40
lbl_801D7C2C:
    lwz r0, 0x2c(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x2c
    bl fn_801D4B44
lbl_801D7C40:
    cmpwi r29, 0x0
    stfs f1, 0x14(r26)
    beq lbl_801D7C54
    lfs f1, 0x30(r31)
    b lbl_801D7C68
lbl_801D7C54:
    lwz r0, 0x30(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x30
    bl fn_801D4B44
lbl_801D7C68:
    cmpwi r28, 0x0
    stfs f1, 0x18(r26)
    beq lbl_801D7C7C
    lfs f1, 0x34(r31)
    b lbl_801D7C90
lbl_801D7C7C:
    lwz r0, 0x34(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x34
    bl fn_801D4B44
lbl_801D7C90:
    cmpwi r27, 0x1
    stfs f1, 0x1c(r26)
    beq lbl_801D7D30
    bge lbl_801D7DDC
    cmpwi r27, 0x0
    bge lbl_801D7CAC
    b lbl_801D7DDC
lbl_801D7CAC:
    rlwinm. r0, r30, 0, 2, 2
    extrwi r23, r30, 1, 1
    srwi r24, r30, 31
    beq lbl_801D7CC4
    lfs f1, 0x38(r31)
    b lbl_801D7CD8
lbl_801D7CC4:
    lwz r0, 0x38(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x38
    bl fn_801D4B44
lbl_801D7CD8:
    cmpwi r23, 0x0
    stfs f1, 0x20(r26)
    beq lbl_801D7CEC
    lfs f1, 0x3c(r31)
    b lbl_801D7D00
lbl_801D7CEC:
    lwz r0, 0x3c(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x3c
    bl fn_801D4B44
lbl_801D7D00:
    cmpwi r24, 0x0
    stfs f1, 0x24(r26)
    beq lbl_801D7D14
    lfs f1, 0x40(r31)
    b lbl_801D7D28
lbl_801D7D14:
    lwz r0, 0x40(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x40
    bl fn_801D4B44
lbl_801D7D28:
    stfs f1, 0x28(r26)
    b lbl_801D7DDC
lbl_801D7D30:
    rlwinm. r0, r30, 0, 6, 6
    extrwi r23, r30, 1, 5
    extrwi r24, r30, 1, 4
    extrwi r25, r30, 1, 3
    beq lbl_801D7D4C
    lfs f1, 0x44(r31)
    b lbl_801D7D60
lbl_801D7D4C:
    lwz r0, 0x44(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x44
    bl fn_801D4B44
lbl_801D7D60:
    cmpwi r23, 0x0
    stfs f1, 0x20(r26)
    beq lbl_801D7D74
    lfs f1, 0x48(r31)
    b lbl_801D7D88
lbl_801D7D74:
    lwz r0, 0x48(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x48
    bl fn_801D4B44
lbl_801D7D88:
    cmpwi r24, 0x0
    stfs f1, 0x24(r26)
    beq lbl_801D7D9C
    lfs f1, 0x4c(r31)
    b lbl_801D7DB0
lbl_801D7D9C:
    lwz r0, 0x4c(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x4c
    bl fn_801D4B44
lbl_801D7DB0:
    cmpwi r25, 0x0
    stfs f1, 0x28(r26)
    beq lbl_801D7DC4
    lfs f1, 0x50(r31)
    b lbl_801D7DD8
lbl_801D7DC4:
    lwz r0, 0x50(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x50
    bl fn_801D4B44
lbl_801D7DD8:
    stfs f1, 0x2c(r26)
lbl_801D7DDC:
    lwz r0, 0x14(r31)
    cmpwi r0, 0x1
    beq lbl_801D7E24
    bge lbl_801D7E4C
    cmpwi r0, 0x0
    bge lbl_801D7DF8
    b lbl_801D7E4C
lbl_801D7DF8:
    rlwinm. r0, r30, 0, 8, 8
    beq lbl_801D7E08
    lfs f1, 0x54(r31)
    b lbl_801D7E1C
lbl_801D7E08:
    lwz r0, 0x54(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x54
    bl fn_801D4B44
lbl_801D7E1C:
    stfs f1, 0x30(r26)
    b lbl_801D7E4C
lbl_801D7E24:
    rlwinm. r0, r30, 0, 7, 7
    beq lbl_801D7E34
    lfs f1, 0x58(r31)
    b lbl_801D7E48
lbl_801D7E34:
    lwz r0, 0x58(r31)
    fmr f1, f31
    add r3, r31, r0
    addi r3, r3, 0x58
    bl fn_801D4B44
lbl_801D7E48:
    stfs f1, 0x30(r26)
lbl_801D7E4C:
    opword 0xE3E10038
    addi r11, r1, 0x30
    lfd f31, 0x30(r1)
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_801D7E6C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D7E6C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x14(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801D7E90
    add r0, r3, r0
    b lbl_801D7E94
lbl_801D7E90:
    li r0, 0x0
lbl_801D7E94:
    lis r3, lbl_80360C60@ha
    stw r0, 0xc(r1)
    addi r3, r3, lbl_80360C60@l
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D7ED8
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D7ED0
    lwz r3, 0x4(r3)
    b lbl_801D7EDC
lbl_801D7ED0:
    li r3, 0x0
    b lbl_801D7EDC
lbl_801D7ED8:
    li r3, 0x0
lbl_801D7EDC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801D7EEC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D7EEC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801D7F18
    add r0, r3, r0
    b lbl_801D7F1C
lbl_801D7F18:
    li r0, 0x0
lbl_801D7F1C:
    lis r3, lbl_80360C80@ha
    stw r0, 0x8(r1)
    addi r3, r3, lbl_80360C80@l
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x8
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D7F80
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D7F78
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D7F70
    add r3, r3, r0
    b lbl_801D7F84
lbl_801D7F70:
    li r3, 0x0
    b lbl_801D7F84
lbl_801D7F78:
    li r3, 0x0
    b lbl_801D7F84
lbl_801D7F80:
    li r3, 0x0
lbl_801D7F84:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801D7F98
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D7F98() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x14(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801D7FBC
    add r0, r3, r0
    b lbl_801D7FC0
lbl_801D7FBC:
    li r0, 0x0
lbl_801D7FC0:
    lis r3, lbl_80360C80@ha
    stw r0, 0xc(r1)
    addi r3, r3, lbl_80360C80@l
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D8004
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D7FFC
    lwz r3, 0x4(r3)
    b lbl_801D8008
lbl_801D7FFC:
    li r3, 0x0
    b lbl_801D8008
lbl_801D8004:
    li r3, 0x0
lbl_801D8008:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801D8018
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D8018() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801D8044
    add r0, r3, r0
    b lbl_801D8048
lbl_801D8044:
    li r0, 0x0
lbl_801D8048:
    lis r3, lbl_80360CA0@ha
    stw r0, 0x8(r1)
    addi r3, r3, lbl_80360CA0@l
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x8
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D80AC
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D80A4
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D809C
    add r3, r3, r0
    b lbl_801D80B0
lbl_801D809C:
    li r3, 0x0
    b lbl_801D80B0
lbl_801D80A4:
    li r3, 0x0
    b lbl_801D80B0
lbl_801D80AC:
    li r3, 0x0
lbl_801D80B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801D80C4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D80C4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x14(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801D80E8
    add r0, r3, r0
    b lbl_801D80EC
lbl_801D80E8:
    li r0, 0x0
lbl_801D80EC:
    lis r3, lbl_80360CA0@ha
    stw r0, 0xc(r1)
    addi r3, r3, lbl_80360CA0@l
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D8130
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D8128
    lwz r3, 0x4(r3)
    b lbl_801D8134
lbl_801D8128:
    li r3, 0x0
    b lbl_801D8134
lbl_801D8130:
    li r3, 0x0
lbl_801D8134:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801D8144
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D8144() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801D8170
    add r0, r3, r0
    b lbl_801D8174
lbl_801D8170:
    li r0, 0x0
lbl_801D8174:
    lis r3, lbl_80360CC0@ha
    stw r0, 0x8(r1)
    addi r3, r3, lbl_80360CC0@l
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x8
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D81D8
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D81D0
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D81C8
    add r3, r3, r0
    b lbl_801D81DC
lbl_801D81C8:
    li r3, 0x0
    b lbl_801D81DC
lbl_801D81D0:
    li r3, 0x0
    b lbl_801D81DC
lbl_801D81D8:
    li r3, 0x0
lbl_801D81DC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801D81F0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D81F0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x14(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801D8214
    add r0, r3, r0
    b lbl_801D8218
lbl_801D8214:
    li r0, 0x0
lbl_801D8218:
    lis r3, lbl_80360CC0@ha
    stw r0, 0xc(r1)
    addi r3, r3, lbl_80360CC0@l
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D825C
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D8254
    lwz r3, 0x4(r3)
    b lbl_801D8260
lbl_801D8254:
    li r3, 0x0
    b lbl_801D8260
lbl_801D825C:
    li r3, 0x0
lbl_801D8260:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// ConfigMEM1_48MB
// ----------------------------------------------------------------------------
extern "C" asm void ConfigMEM1_48MB() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801D829C
    add r0, r3, r0
    b lbl_801D82A0
lbl_801D829C:
    li r0, 0x0
lbl_801D82A0:
    lis r3, lbl_80360CE0@ha
    stw r0, 0x10(r1)
    addi r3, r3, lbl_80360CE0@l
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x10
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D82D8
    stw r3, 0x8(r1)
    mr r4, r31
    addi r3, r1, 0x8
    bl __vc__Q34nw4r3g3d6ResDicCFPCc
    b lbl_801D82DC
lbl_801D82D8:
    li r3, 0x0
lbl_801D82DC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801D82F0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D82F0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801D831C
    add r0, r3, r0
    b lbl_801D8320
lbl_801D831C:
    li r0, 0x0
lbl_801D8320:
    lis r3, lbl_80360CE0@ha
    stw r0, 0xc(r1)
    addi r3, r3, lbl_80360CE0@l
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D8384
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D837C
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D8374
    add r3, r3, r0
    b lbl_801D8388
lbl_801D8374:
    li r3, 0x0
    b lbl_801D8388
lbl_801D837C:
    li r3, 0x0
    b lbl_801D8388
lbl_801D8384:
    li r3, 0x0
lbl_801D8388:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801D839C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D839C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801D83C8
    add r0, r3, r0
    b lbl_801D83CC
lbl_801D83C8:
    li r0, 0x0
lbl_801D83CC:
    lis r3, lbl_80360CE0@ha
    stw r0, 0x8(r1)
    addi r3, r3, lbl_80360CE0@l
    addi r4, r1, 0xc
    stw r3, 0xc(r1)
    addi r3, r1, 0x8
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D8430
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D8428
    addi r0, r31, 0x1
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r0, 0x14(r4)
    cmpwi r0, 0x0
    beq lbl_801D8420
    add r3, r3, r0
    b lbl_801D8434
lbl_801D8420:
    li r3, 0x0
    b lbl_801D8434
lbl_801D8428:
    li r3, 0x0
    b lbl_801D8434
lbl_801D8430:
    li r3, 0x0
lbl_801D8434:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801D8448
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D8448() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x14(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801D846C
    add r0, r3, r0
    b lbl_801D8470
lbl_801D846C:
    li r0, 0x0
lbl_801D8470:
    lis r3, lbl_80360CE0@ha
    stw r0, 0xc(r1)
    addi r3, r3, lbl_80360CE0@l
    addi r4, r1, 0x8
    stw r3, 0x8(r1)
    addi r3, r1, 0xc
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D84B4
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801D84AC
    lwz r3, 0x4(r3)
    b lbl_801D84B8
lbl_801D84AC:
    li r3, 0x0
    b lbl_801D84B8
lbl_801D84B4:
    li r3, 0x0
lbl_801D84B8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801D84C8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D84C8() {
    nofralloc
    lwz r3, 0x0(r3)
    lhz r5, 0x3c(r3)
    cmplw r5, r4
    bgt lbl_801D84E0
    li r3, 0x0
    blr
lbl_801D84E0:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_801D84F4
    add r3, r3, r0
    b lbl_801D84F8
lbl_801D84F4:
    li r3, 0x0
lbl_801D84F8:
    mulli r0, r4, 0x4c
    add r3, r3, r0
    lwz r0, 0xc(r3)
    cmplw r0, r5
    bltlr
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_801D8514
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D8514() {
    nofralloc
    lwz r3, 0x0(r3)
    lhz r5, 0x3e(r3)
    cmplw r5, r4
    bgt lbl_801D852C
    li r3, 0x0
    blr
lbl_801D852C:
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_801D8540
    add r3, r3, r0
    b lbl_801D8544
lbl_801D8540:
    li r3, 0x0
lbl_801D8544:
    mulli r0, r4, 0x1c
    add r3, r3, r0
    lwz r0, 0xc(r3)
    cmplw r0, r5
    bltlr
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_801D8560
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D8560() {
    nofralloc
    lwz r3, 0x0(r3)
    lhz r5, 0x40(r3)
    cmplw r5, r4
    bgt lbl_801D8578
    li r3, 0x0
    blr
lbl_801D8578:
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_801D858C
    add r3, r3, r0
    b lbl_801D8590
lbl_801D858C:
    li r3, 0x0
lbl_801D8590:
    mulli r0, r4, 0x5c
    add r3, r3, r0
    lwz r0, 0xc(r3)
    cmplw r0, r5
    bltlr
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_801D85AC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D85AC() {
    nofralloc
    lwz r3, 0x0(r3)
    lhz r5, 0x42(r3)
    cmplw r5, r4
    bgt lbl_801D85C4
    li r3, 0x0
    blr
lbl_801D85C4:
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_801D85D8
    add r3, r3, r0
    b lbl_801D85DC
lbl_801D85D8:
    li r3, 0x0
lbl_801D85DC:
    mulli r0, r4, 0x28
    add r3, r3, r0
    lwz r0, 0xc(r3)
    cmplw r0, r5
    bltlr
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_801D85F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D85F8() {
    nofralloc
    lwz r3, 0x0(r3)
    lhz r5, 0x44(r3)
    cmplw r5, r4
    bgt lbl_801D8610
    li r3, 0x0
    blr
lbl_801D8610:
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_801D8624
    add r3, r3, r0
    b lbl_801D8628
lbl_801D8624:
    li r3, 0x0
lbl_801D8628:
    mulli r0, r4, 0x5c
    add r3, r3, r0
    lwz r0, 0xc(r3)
    cmplw r0, r5
    bltlr
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_801D8644
// ----------------------------------------------------------------------------
extern "C" asm void fn_801D8644() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_22
    lwz r3, 0x0(r3)
    fmr f31, f1
    mr r23, r4
    mr r24, r6
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_801D8684
    add r0, r3, r0
    b lbl_801D8688
lbl_801D8684:
    li r0, 0x0
lbl_801D8688:
    cmpwi r0, 0x0
    beq lbl_801D86B8
    addi r3, r5, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D86B0
    add r31, r0, r3
    b lbl_801D86BC
lbl_801D86B0:
    li r31, 0x0
    b lbl_801D86BC
lbl_801D86B8:
    li r31, 0x0
lbl_801D86BC:
    lwz r3, 0x10(r31)
    mr r28, r31
    lwz r26, 0xc(r31)
    addi r30, r4, 0x18
    lwz r0, 0x0(r31)
    add r29, r3, r31
    lfs f0, lbl_804A1C88
    addi r27, r31, 0x14
    stw r0, 0x0(r4)
    li r25, 0x0
    lhz r0, 0xa(r31)
    stw r0, 0x4(r4)
    lhz r0, 0x8(r31)
    mulli r0, r0, 0xc
    stfs f0, 0x14(r4)
    lwzux r5, r6, r0
    lwz r3, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r5, 0x8(r4)
    stw r3, 0xc(r4)
    stw r0, 0x10(r4)
    b lbl_801D8780
lbl_801D8714:
    clrlwi. r0, r26, 31
    lhz r22, 0x0(r29)
    beq lbl_801D8728
    lfs f1, 0x14(r28)
    b lbl_801D8738
lbl_801D8728:
    lwz r0, 0x14(r28)
    fmr f1, f31
    add r3, r27, r0
    bl fn_801D4B44
lbl_801D8738:
    mulli r0, r22, 0xc
    srwi r26, r26, 1
    addi r29, r29, 0x2
    addi r28, r28, 0x4
    add r4, r24, r0
    lwzx r0, r24, r0
    lwz r3, 0x4(r4)
    addi r27, r27, 0x4
    stw r0, 0x0(r30)
    addi r25, r25, 0x1
    lwz r0, 0x8(r4)
    stw r3, 0x4(r30)
    stw r0, 0x8(r30)
    stfs f1, 0xc(r30)
    addi r30, r30, 0x10
    lfs f0, 0x14(r23)
    fsubs f0, f0, f1
    stfs f0, 0x14(r23)
lbl_801D8780:
    lhz r0, 0xa(r31)
    cmpw r25, r0
    blt lbl_801D8714
    opword 0xE3E10038
    addi r11, r1, 0x30
    lfd f31, 0x30(r1)
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

