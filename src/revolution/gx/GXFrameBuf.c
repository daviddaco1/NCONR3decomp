#include "types.h"

// Translation unit: src/revolution/gx/GXFrameBuf.cpp
// Total functions: 14

// Small Data symbols (@sda21)
extern float __GXData;
extern float lbl_804A2598;
extern float lbl_804A25A0;

// Forward declarations
extern void GXClearBoundingBox();
extern void GXCopyDisp();
extern void GXCopyTex();
extern void GXGetYScaleFactor();
extern void GXSetCopyClamp();
extern void GXSetCopyClear();
extern void GXSetCopyFilter();
extern void GXSetDispCopyDst();
extern void GXSetDispCopyFrame2Field();
extern void GXSetDispCopyGamma();
extern void GXSetDispCopySrc();
extern void GXSetDispCopyYScale();
extern void GXSetTexCopyDst();
extern void GXSetTexCopySrc();
extern void __GetImageTileCount();
extern void __cvt_fp2unsigned();

// ----------------------------------------------------------------------------
// GXSetDispCopySrc
// ----------------------------------------------------------------------------
asm void GXSetDispCopySrc() {
    nofralloc
    li r7, 0x0
    subi r0, r5, 0x1
    rlwimi r7, r3, 0, 22, 31
    li r3, 0x0
    rlwimi r7, r4, 10, 12, 21
    li r4, 0x49
    rlwimi r3, r0, 0, 22, 31
    subi r0, r6, 0x1
    rlwimi r3, r0, 10, 12, 21
    lwz r5, __GXData
    rlwimi r7, r4, 24, 0, 7
    li r0, 0x4a
    stw r7, 0x230(r5)
    rlwimi r3, r0, 24, 0, 7
    stw r3, 0x234(r5)
    blr
}

// ----------------------------------------------------------------------------
// GXSetTexCopySrc
// ----------------------------------------------------------------------------
asm void GXSetTexCopySrc() {
    nofralloc
    li r7, 0x0
    subi r0, r5, 0x1
    rlwimi r7, r3, 0, 22, 31
    li r3, 0x0
    rlwimi r7, r4, 10, 12, 21
    li r4, 0x49
    rlwimi r3, r0, 0, 22, 31
    subi r0, r6, 0x1
    rlwimi r3, r0, 10, 12, 21
    lwz r5, __GXData
    rlwimi r7, r4, 24, 0, 7
    li r0, 0x4a
    stw r7, 0x240(r5)
    rlwimi r3, r0, 24, 0, 7
    stw r3, 0x244(r5)
    blr
}

// ----------------------------------------------------------------------------
// GXSetDispCopyDst
// ----------------------------------------------------------------------------
asm void GXSetDispCopyDst() {
    nofralloc
    clrlslwi r0, r3, 17, 1
    lwz r4, __GXData
    srawi r0, r0, 5
    li r3, 0x0
    rlwimi r3, r0, 0, 22, 31
    li r0, 0x4d
    rlwimi r3, r0, 24, 0, 7
    stw r3, 0x238(r4)
    blr
}

// ----------------------------------------------------------------------------
// GXSetTexCopyDst
// ----------------------------------------------------------------------------
asm void GXSetTexCopyDst() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lwz r7, __GXData
    cmpwi r5, 0x13
    stw r0, 0x34(r1)
    li r0, 0x0
    mr r9, r3
    mr r8, r4
    stw r31, 0x2c(r1)
    clrlwi r31, r5, 28
    stw r30, 0x28(r1)
    mr r30, r6
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    stb r0, 0x250(r7)
    bne lbl_802E1F2C
    li r31, 0xb
lbl_802E1F2C:
    cmpwi r5, 0x26
    beq lbl_802E1F4C
    bge lbl_802E1F64
    cmpwi r5, 0x4
    bge lbl_802E1F64
    cmpwi r5, 0x0
    bge lbl_802E1F4C
    b lbl_802E1F64
lbl_802E1F4C:
    li r0, 0x3
    lwz r3, 0x24c(r7)
    rlwimi r3, r0, 15, 15, 16
    addi r29, r7, 0x24c
    stw r3, 0x24c(r7)
    b lbl_802E1F78
lbl_802E1F64:
    li r0, 0x2
    lwz r3, 0x24c(r7)
    rlwimi r3, r0, 15, 15, 16
    addi r29, r7, 0x24c
    stw r3, 0x24c(r7)
lbl_802E1F78:
    extrwi r0, r5, 1, 27
    mr r3, r5
    stb r0, 0x250(r7)
    mr r5, r8
    lwz r28, __GXData
    mr r4, r9
    lwz r0, 0x0(r29)
    rlwimi r0, r31, 0, 28, 28
    addi r6, r1, 0x10
    addi r7, r1, 0xc
    stw r0, 0x0(r29)
    addi r8, r1, 0x8
    bl __GetImageTileCount
    li r0, 0x0
    li r3, 0x0
    stw r0, 0x248(r28)
    li r0, 0x4d
    lwz r5, 0x10(r1)
    lwz r4, 0x8(r1)
    mullw r4, r5, r4
    rlwimi r3, r4, 0, 22, 31
    rlwimi r3, r0, 24, 0, 7
    stw r3, 0x248(r28)
    lwz r0, 0x0(r29)
    rlwimi r0, r30, 9, 22, 22
    rlwimi r0, r31, 4, 25, 27
    stw r0, 0x0(r29)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// GXSetDispCopyFrame2Field
// ----------------------------------------------------------------------------
asm void GXSetDispCopyFrame2Field() {
    nofralloc
    lwz r4, __GXData
    lwz r0, 0x23c(r4)
    rlwimi r0, r3, 12, 18, 19
    stw r0, 0x23c(r4)
    lwz r0, 0x24c(r4)
    rlwinm r0, r0, 0, 20, 17
    stw r0, 0x24c(r4)
    blr
}

// ----------------------------------------------------------------------------
// GXSetCopyClamp
// ----------------------------------------------------------------------------
asm void GXSetCopyClamp() {
    nofralloc
    lwz r4, __GXData
    lwz r0, 0x23c(r4)
    rlwimi r0, r3, 0, 31, 31
    rlwimi r0, r3, 0, 30, 30
    stw r0, 0x23c(r4)
    lwz r0, 0x24c(r4)
    rlwimi r0, r3, 0, 31, 31
    rlwimi r0, r3, 0, 30, 30
    stw r0, 0x24c(r4)
    blr
}

// ----------------------------------------------------------------------------
// GXGetYScaleFactor
// ----------------------------------------------------------------------------
asm void GXGetYScaleFactor() {
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
    stfd f28, 0x30(r1)
    opword 0xF3810038
    lis r0, 0x4330
    lfd f3, lbl_804A25A0
    stw r0, 0x8(r1)
    lfs f0, lbl_804A2598
    stw r4, 0xc(r1)
    lfd f1, 0x8(r1)
    stw r0, 0x10(r1)
    fsubs f2, f1, f3
    stw r3, 0x14(r1)
    lfd f1, 0x10(r1)
    stw r31, 0x2c(r1)
    fsubs f1, f1, f3
    stw r30, 0x28(r1)
    fdivs f28, f2, f1
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    mr r30, r29
    fdivs f1, f0, f28
    bl __cvt_fp2unsigned
    subi r0, r28, 0x1
    clrlwi r4, r3, 23
    slwi r31, r0, 8
    divwu r3, r31, r4
    cmplwi r4, 0x80
    addi r3, r3, 0x1
    ble lbl_802E2114
    cmplwi r4, 0x100
    bge lbl_802E2114
    b lbl_802E20F8
lbl_802E20F4:
    srwi r4, r4, 1
lbl_802E20F8:
    clrlwi. r0, r4, 31
    beq lbl_802E20F4
    divwu r0, r28, r4
    mullw r0, r0, r4
    subf. r0, r0, r28
    bne lbl_802E2114
    addi r3, r3, 0x1
lbl_802E2114:
    cmplwi r3, 0x400
    ble lbl_802E2120
    li r3, 0x400
lbl_802E2120:
    lfd f31, lbl_804A25A0
    lfs f30, lbl_804A2598
    b lbl_802E21A0
lbl_802E212C:
    subi r30, r30, 0x1
    stw r28, 0x14(r1)
    stw r30, 0xc(r1)
    lfd f0, 0x10(r1)
    lfd f1, 0x8(r1)
    fsubs f0, f0, f31
    fsubs f1, f1, f31
    fdivs f28, f1, f0
    fdivs f1, f30, f28
    bl __cvt_fp2unsigned
    clrlwi r4, r3, 23
    divwu r3, r31, r4
    cmplwi r4, 0x80
    addi r3, r3, 0x1
    ble lbl_802E2194
    cmplwi r4, 0x100
    bge lbl_802E2194
    b lbl_802E2178
lbl_802E2174:
    srwi r4, r4, 1
lbl_802E2178:
    clrlwi. r0, r4, 31
    beq lbl_802E2174
    divwu r0, r28, r4
    mullw r0, r0, r4
    subf. r0, r0, r28
    bne lbl_802E2194
    addi r3, r3, 0x1
lbl_802E2194:
    cmplwi r3, 0x400
    ble lbl_802E21A0
    li r3, 0x400
lbl_802E21A0:
    cmplw r3, r29
    bgt lbl_802E212C
    fmr f29, f28
    lfd f30, lbl_804A25A0
    lfs f31, lbl_804A2598
    b lbl_802E2230
lbl_802E21B8:
    addi r30, r30, 0x1
    stw r28, 0x14(r1)
    fmr f29, f28
    stw r30, 0xc(r1)
    lfd f0, 0x10(r1)
    lfd f1, 0x8(r1)
    fsubs f0, f0, f30
    fsubs f1, f1, f30
    fdivs f28, f1, f0
    fdivs f1, f31, f28
    bl __cvt_fp2unsigned
    clrlwi r4, r3, 23
    divwu r3, r31, r4
    cmplwi r4, 0x80
    addi r3, r3, 0x1
    ble lbl_802E2224
    cmplwi r4, 0x100
    bge lbl_802E2224
    b lbl_802E2208
lbl_802E2204:
    srwi r4, r4, 1
lbl_802E2208:
    clrlwi. r0, r4, 31
    beq lbl_802E2204
    divwu r0, r28, r4
    mullw r0, r0, r4
    subf. r0, r0, r28
    bne lbl_802E2224
    addi r3, r3, 0x1
lbl_802E2224:
    cmplwi r3, 0x400
    ble lbl_802E2230
    li r3, 0x400
lbl_802E2230:
    cmplw r3, r29
    blt lbl_802E21B8
    fmr f1, f29
    opword 0xE3E10068
    lfd f31, 0x60(r1)
    opword 0xE3C10058
    lfd f30, 0x50(r1)
    opword 0xE3A10048
    lfd f29, 0x40(r1)
    opword 0xE3810038
    lfd f28, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// GXSetDispCopyYScale
// ----------------------------------------------------------------------------
asm void GXSetDispCopyYScale() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_804A2598
    stw r0, 0x14(r1)
    fdivs f1, f0, f1
    bl __cvt_fp2unsigned
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x4e
    li r5, 0x0
    clrlwi r7, r3, 23
    rlwimi r5, r3, 0, 23, 31
    lwz r6, __GXData
    rlwimi r5, r0, 24, 0, 7
    li r0, 0x0
    stw r5, -0x8000(r4)
    subfic r3, r7, 0x100
    cmplwi r7, 0x80
    sth r0, 0x2(r6)
    subi r0, r7, 0x100
    or r3, r3, r0
    lwz r0, 0x23c(r6)
    rlwimi r0, r3, 11, 21, 21
    stw r0, 0x23c(r6)
    lwz r0, 0x234(r6)
    extrwi r3, r0, 10, 12
    addi r4, r3, 0x1
    subi r0, r4, 0x1
    slwi r0, r0, 8
    divwu r3, r0, r7
    addi r3, r3, 0x1
    ble lbl_802E232C
    cmplwi r7, 0x100
    bge lbl_802E232C
    b lbl_802E2310
lbl_802E230C:
    srwi r7, r7, 1
lbl_802E2310:
    clrlwi. r0, r7, 31
    beq lbl_802E230C
    divwu r0, r4, r7
    mullw r0, r0, r7
    subf. r0, r0, r4
    bne lbl_802E232C
    addi r3, r3, 0x1
lbl_802E232C:
    cmplwi r3, 0x400
    ble lbl_802E2338
    li r3, 0x400
lbl_802E2338:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GXSetCopyClear
// ----------------------------------------------------------------------------
asm void GXSetCopyClear() {
    nofralloc
    lbz r6, 0x0(r3)
    lis r7, 0xcc01
    li r8, 0x61
    lbz r0, 0x3(r3)
    li r10, 0x0
    stb r8, -0x8000(r7)
    rlwimi r10, r6, 0, 24, 31
    li r9, 0x4f
    rlwimi r10, r0, 8, 16, 23
    lbz r0, 0x2(r3)
    rlwimi r10, r9, 24, 0, 7
    li r6, 0x0
    stw r10, -0x8000(r7)
    rlwimi r6, r0, 0, 24, 31
    lbz r3, 0x1(r3)
    li r0, 0x50
    stb r8, -0x8000(r7)
    li r5, 0x0
    rlwimi r6, r3, 8, 16, 23
    lwz r3, __GXData
    rlwimi r6, r0, 24, 0, 7
    li r0, 0x51
    stw r6, -0x8000(r7)
    rlwimi r5, r4, 0, 8, 31
    rlwimi r5, r0, 24, 0, 7
    li r0, 0x0
    stb r8, -0x8000(r7)
    stw r5, -0x8000(r7)
    sth r0, 0x2(r3)
    blr
}

// ----------------------------------------------------------------------------
// GXSetCopyFilter
// ----------------------------------------------------------------------------
asm void GXSetCopyFilter() {
    nofralloc
    cmpwi r3, 0x0
    beq lbl_802E24BC
    lbz r8, 0x0(r4)
    li r0, 0x0
    lbz r10, 0x1(r4)
    li r3, 0x0
    rlwimi r0, r8, 0, 28, 31
    lbz r7, 0x6(r4)
    rlwimi r0, r10, 4, 24, 27
    lbz r8, 0xc(r4)
    rlwimi r3, r7, 0, 28, 31
    li r7, 0x0
    rlwimi r7, r8, 0, 28, 31
    lbz r10, 0xd(r4)
    lbz r11, 0x7(r4)
    li r8, 0x0
    rlwimi r7, r10, 4, 24, 27
    lbz r10, 0x2(r4)
    lbz r9, 0x12(r4)
    rlwimi r3, r11, 4, 24, 27
    rlwimi r0, r10, 8, 20, 23
    lbz r10, 0xe(r4)
    rlwimi r8, r9, 0, 28, 31
    lbz r9, 0x13(r4)
    rlwimi r7, r10, 8, 20, 23
    lbz r10, 0x3(r4)
    rlwimi r8, r9, 4, 24, 27
    lbz r9, 0x14(r4)
    rlwimi r0, r10, 12, 16, 19
    lbz r10, 0xf(r4)
    rlwimi r8, r9, 8, 20, 23
    lbz r9, 0x15(r4)
    rlwimi r7, r10, 12, 16, 19
    lbz r10, 0x4(r4)
    lbz r11, 0x8(r4)
    rlwimi r8, r9, 12, 16, 19
    rlwimi r0, r10, 16, 12, 15
    lbz r10, 0x10(r4)
    lbz r9, 0x16(r4)
    rlwimi r3, r11, 8, 20, 23
    lbz r11, 0x9(r4)
    rlwimi r7, r10, 16, 12, 15
    lbz r10, 0x5(r4)
    rlwimi r8, r9, 16, 12, 15
    lbz r9, 0x11(r4)
    rlwimi r3, r11, 12, 16, 19
    lbz r11, 0xa(r4)
    rlwimi r0, r10, 20, 8, 11
    lbz r10, 0xb(r4)
    rlwimi r7, r9, 20, 8, 11
    lbz r4, 0x17(r4)
    li r9, 0x1
    rlwimi r3, r11, 16, 12, 15
    rlwimi r3, r10, 20, 8, 11
    rlwimi r8, r4, 20, 8, 11
    rlwimi r0, r9, 24, 0, 7
    li r10, 0x2
    li r9, 0x3
    li r4, 0x4
    rlwimi r3, r10, 24, 0, 7
    rlwimi r7, r9, 24, 0, 7
    rlwimi r8, r4, 24, 0, 7
    b lbl_802E24DC
lbl_802E24BC:
    lis r8, 0x166
    lis r3, 0x266
    lis r7, 0x366
    lis r4, 0x466
    addi r0, r8, 0x6666
    addi r3, r3, 0x6666
    addi r7, r7, 0x6666
    addi r8, r4, 0x6666
lbl_802E24DC:
    lis r9, 0xcc01
    li r10, 0x61
    stb r10, -0x8000(r9)
    cmpwi r5, 0x0
    li r4, 0x53
    li r11, 0x0
    stw r0, -0x8000(r9)
    li r0, 0x54
    li r12, 0x0
    rlwimi r11, r4, 24, 0, 7
    stb r10, -0x8000(r9)
    rlwimi r12, r0, 24, 0, 7
    stw r3, -0x8000(r9)
    stb r10, -0x8000(r9)
    stw r7, -0x8000(r9)
    stb r10, -0x8000(r9)
    stw r8, -0x8000(r9)
    beq lbl_802E2560
    lbz r4, 0x0(r6)
    lbz r0, 0x4(r6)
    rlwimi r11, r4, 0, 26, 31
    lbz r3, 0x1(r6)
    rlwimi r12, r0, 0, 26, 31
    lbz r5, 0x2(r6)
    rlwimi r11, r3, 6, 20, 25
    lbz r3, 0x5(r6)
    lbz r4, 0x3(r6)
    rlwimi r11, r5, 12, 14, 19
    lbz r0, 0x6(r6)
    rlwimi r12, r3, 6, 20, 25
    rlwimi r11, r4, 18, 8, 13
    rlwimi r12, r0, 12, 14, 19
    b lbl_802E257C
lbl_802E2560:
    li r3, 0x15
    clrrwi r11, r11, 12
    rlwimi r12, r3, 0, 26, 31
    li r0, 0x16
    rlwimi r11, r3, 12, 14, 19
    rlwimi r11, r0, 18, 8, 13
    rlwinm r12, r12, 0, 26, 13
lbl_802E257C:
    lis r4, 0xcc01
    li r5, 0x61
    stb r5, -0x8000(r4)
    li r0, 0x0
    lwz r3, __GXData
    stw r11, -0x8000(r4)
    stb r5, -0x8000(r4)
    stw r12, -0x8000(r4)
    sth r0, 0x2(r3)
    blr
}

// ----------------------------------------------------------------------------
// GXSetDispCopyGamma
// ----------------------------------------------------------------------------
asm void GXSetDispCopyGamma() {
    nofralloc
    lwz r4, __GXData
    lwz r0, 0x23c(r4)
    rlwimi r0, r3, 7, 23, 24
    stw r0, 0x23c(r4)
    blr
}

// ----------------------------------------------------------------------------
// GXCopyDisp
// ----------------------------------------------------------------------------
asm void GXCopyDisp() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_802E25EC
    lwz r7, __GXData
    lis r5, 0xcc01
    li r0, 0x61
    lwz r6, 0x228(r7)
    stb r0, -0x8000(r5)
    ori r6, r6, 0xf
    stw r6, -0x8000(r5)
    lwz r6, 0x220(r7)
    stb r0, -0x8000(r5)
    clrrwi r0, r6, 2
    stw r0, -0x8000(r5)
lbl_802E25EC:
    cmpwi r4, 0x0
    li r12, 0x0
    bne lbl_802E2610
    lwz r5, __GXData
    lwz r0, 0x22c(r5)
    addi r10, r5, 0x22c
    clrlwi r0, r0, 29
    cmplwi r0, 0x3
    bne lbl_802E2640
lbl_802E2610:
    lwz r5, __GXData
    lwz r7, 0x22c(r5)
    addi r10, r5, 0x22c
    extrwi r0, r7, 1, 25
    cmplwi r0, 0x1
    bne lbl_802E2640
    lis r6, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r6)
    rlwinm r0, r7, 0, 26, 24
    li r12, 0x1
    stw r0, -0x8000(r6)
lbl_802E2640:
    lis r8, 0xcc01
    li r9, 0x61
    stb r9, -0x8000(r8)
    li r6, 0x0
    lwz r11, __GXData
    rlwimi r6, r3, 27, 8, 31
    li r3, 0x4b
    li r0, 0x52
    lwz r7, 0x230(r11)
    rlwimi r6, r3, 24, 0, 7
    cmpwi r4, 0x0
    stw r7, -0x8000(r8)
    stb r9, -0x8000(r8)
    lwz r3, 0x234(r11)
    stw r3, -0x8000(r8)
    stb r9, -0x8000(r8)
    lwz r3, 0x238(r11)
    stw r3, -0x8000(r8)
    stb r9, -0x8000(r8)
    stw r6, -0x8000(r8)
    lwz r3, 0x23c(r11)
    rlwimi r3, r4, 11, 20, 20
    ori r3, r3, 0x4000
    rlwimi r3, r0, 24, 0, 7
    stw r3, 0x23c(r11)
    stb r9, -0x8000(r8)
    lwz r0, 0x23c(r11)
    stw r0, -0x8000(r8)
    beq lbl_802E26CC
    stb r9, -0x8000(r8)
    lwz r0, 0x228(r11)
    stw r0, -0x8000(r8)
    stb r9, -0x8000(r8)
    lwz r0, 0x220(r11)
    stw r0, -0x8000(r8)
lbl_802E26CC:
    cmpwi r12, 0x0
    beq lbl_802E26E8
    lis r3, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r3)
    lwz r0, 0x0(r10)
    stw r0, -0x8000(r3)
lbl_802E26E8:
    li r0, 0x0
    sth r0, 0x2(r5)
    blr
}

// ----------------------------------------------------------------------------
// GXCopyTex
// ----------------------------------------------------------------------------
asm void GXCopyTex() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_802E2728
    lwz r7, __GXData
    lis r5, 0xcc01
    li r0, 0x61
    lwz r6, 0x228(r7)
    stb r0, -0x8000(r5)
    ori r6, r6, 0xf
    stw r6, -0x8000(r5)
    lwz r6, 0x220(r7)
    stb r0, -0x8000(r5)
    clrrwi r0, r6, 2
    stw r0, -0x8000(r5)
lbl_802E2728:
    lwz r9, __GXData
    li r11, 0x0
    lbz r0, 0x250(r9)
    lwz r6, 0x22c(r9)
    cmpwi r0, 0x0
    beq lbl_802E2758
    clrlwi r0, r6, 29
    cmplwi r0, 0x3
    beq lbl_802E2758
    li r0, 0x3
    li r11, 0x1
    rlwimi r6, r0, 0, 29, 31
lbl_802E2758:
    cmpwi r4, 0x0
    bne lbl_802E276C
    clrlwi r0, r6, 29
    cmplwi r0, 0x3
    bne lbl_802E2780
lbl_802E276C:
    extrwi r0, r6, 1, 25
    cmplwi r0, 0x1
    bne lbl_802E2780
    li r11, 0x1
    rlwinm r6, r6, 0, 26, 24
lbl_802E2780:
    cmpwi r11, 0x0
    beq lbl_802E2798
    lis r5, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r5)
    stw r6, -0x8000(r5)
lbl_802E2798:
    lis r7, 0xcc01
    li r8, 0x61
    stb r8, -0x8000(r7)
    li r5, 0x0
    lwz r10, __GXData
    rlwimi r5, r3, 27, 8, 31
    li r3, 0x4b
    li r0, 0x52
    lwz r6, 0x240(r10)
    rlwimi r5, r3, 24, 0, 7
    cmpwi r4, 0x0
    stw r6, -0x8000(r7)
    stb r8, -0x8000(r7)
    lwz r3, 0x244(r10)
    stw r3, -0x8000(r7)
    stb r8, -0x8000(r7)
    lwz r3, 0x248(r10)
    stw r3, -0x8000(r7)
    stb r8, -0x8000(r7)
    stw r5, -0x8000(r7)
    lwz r3, 0x24c(r10)
    rlwimi r3, r4, 11, 20, 20
    rlwinm r3, r3, 0, 18, 16
    rlwimi r3, r0, 24, 0, 7
    stw r3, 0x24c(r10)
    stb r8, -0x8000(r7)
    lwz r0, 0x24c(r10)
    stw r0, -0x8000(r7)
    beq lbl_802E2824
    stb r8, -0x8000(r7)
    lwz r0, 0x228(r10)
    stw r0, -0x8000(r7)
    stb r8, -0x8000(r7)
    lwz r0, 0x220(r10)
    stw r0, -0x8000(r7)
lbl_802E2824:
    cmpwi r11, 0x0
    beq lbl_802E2840
    lis r3, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r3)
    lwz r0, 0x22c(r9)
    stw r0, -0x8000(r3)
lbl_802E2840:
    li r0, 0x0
    sth r0, 0x2(r9)
    blr
}

// ----------------------------------------------------------------------------
// GXClearBoundingBox
// ----------------------------------------------------------------------------
asm void GXClearBoundingBox() {
    nofralloc
    lis r5, 0xcc01
    li r6, 0x61
    lis r3, 0x5500
    stb r6, -0x8000(r5)
    addi r0, r3, 0x3ff
    stw r0, -0x8000(r5)
    lis r3, 0x5600
    addi r4, r3, 0x3ff
    lwz r3, __GXData
    stb r6, -0x8000(r5)
    li r0, 0x0
    stw r4, -0x8000(r5)
    sth r0, 0x2(r3)
    blr
}

