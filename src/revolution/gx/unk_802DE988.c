#include "types.h"

// Translation unit: src/revolution/gx/unk_802DE988.cpp
// Total functions: 1

// Small Data symbols (@sda21)
extern float __GXData;
extern float at_2812_804A2578;
extern float lbl_804A257C;
extern float lbl_804A257D;
extern float lbl_804A257E;
extern float lbl_804A257F;
extern float lbl_804A2580;
extern float lbl_804A2581;
extern float lbl_804A2582;
extern float lbl_804A2583;
extern float lbl_804A2584;
extern float lbl_804A2588;
extern float lbl_804A2590;

// Global data symbols (@ha/@l)
extern u8 __GXDefaultTexRegionCallback[];
extern u8 __GXDefaultTlutRegionCallback[];
extern u8 lbl_8037A8C0[];
extern u8 lbl_8037ADA8[];
extern u8 lbl_8037ADE4[];
extern u8 lbl_8037AE20[];
extern u8 lbl_8037AE5C[];

// Forward declarations
extern void GXClearBoundingBox();
extern void GXClearVtxDesc();
extern void GXEnableTexOffsets();
extern void GXInitTexObj();
extern void GXInvalidateTexAll();
extern void GXInvalidateVtxCache();
extern void GXLoadNrmMtxImm();
extern void GXLoadPosMtxImm();
extern void GXLoadTexMtxImm();
extern void GXLoadTexObj();
extern void GXSetAlphaUpdate();
extern void GXSetArray();
extern void GXSetBlendMode();
extern void GXSetChanAmbColor();
extern void GXSetChanCtrl();
extern void GXSetChanMatColor();
extern void GXSetClipMode();
extern void GXSetColorUpdate();
extern void GXSetCopyClamp();
extern void GXSetCopyClear();
extern void GXSetCopyFilter();
extern void GXSetCullMode();
extern void GXSetCurrentMtx();
extern void GXSetDispCopyDst();
extern void GXSetDispCopyFrame2Field();
extern void GXSetDispCopyGamma();
extern void GXSetDispCopySrc();
extern void GXSetDispCopyYScale();
extern void GXSetDither();
extern void GXSetDstAlpha();
extern void GXSetFieldMask();
extern void GXSetFieldMode();
extern void GXSetFog();
extern void GXSetFogRangeAdj();
extern void GXSetLineWidth();
extern void GXSetNumChans();
extern void GXSetNumTexGens();
extern void GXSetPixelFmt();
extern void GXSetPointSize();
extern void GXSetProjectionv();
extern void GXSetScissor();
extern void GXSetScissorBoxOffset();
extern void GXSetTexCoordGen2();
extern void GXSetTexCoordScaleManually();
extern void GXSetTexRegionCallback();
extern void GXSetTlutRegionCallback();
extern void GXSetViewport();
extern void GXSetVtxAttrFmtv();
extern void GXSetZCompLoc();
extern void GXSetZMode();
extern void VIGetTvFormat();
extern void __DVDGetAutoFatalMessaging();
extern void __GXInitGX();
extern void fn_802E1540();
extern void fn_802E1550();
extern void fn_802E1568();
extern void fn_802E157C();
extern void fn_802E15EC();
extern void fn_802E1604();
extern void fn_802E1618();
extern void fn_802E1DE4();
extern void fn_802E1E20();
extern void fn_802E413C();
extern void fn_802E430C();
extern void fn_802E432C();
extern void fn_802E43CC();
extern void fn_802E46B0();
extern void fn_802E4700();
extern void fn_802E4750();
extern void fn_802E4808();
extern void fn_802E4840();
extern void fn_802E48CC();
extern void fn_802E4A28();
extern void fn_802E5A8C();
extern void fn_802E62B8();

// ----------------------------------------------------------------------------
// __GXInitGX
// ----------------------------------------------------------------------------
asm void __GXInitGX() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r10, 0x4330
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    li r31, 0x0
    stw r30, 0x98(r1)
    lis r30, lbl_8037A8C0@ha
    addi r30, r30, lbl_8037A8C0@l
    stw r29, 0x94(r1)
    stw r28, 0x90(r1)
    lbz r9, lbl_804A257C
    lbz r8, lbl_804A257D
    lbz r7, lbl_804A257E
    lbz r6, lbl_804A257F
    lbz r5, lbl_804A2580
    lbz r4, lbl_804A2581
    lbz r3, lbl_804A2582
    lbz r0, lbl_804A2583
    stw r10, 0x78(r1)
    stw r10, 0x80(r1)
    stb r9, 0x24(r1)
    stb r8, 0x25(r1)
    stb r7, 0x26(r1)
    stb r6, 0x27(r1)
    stb r5, 0x20(r1)
    stb r4, 0x21(r1)
    stb r3, 0x22(r1)
    stb r0, 0x23(r1)
    bl VIGetTvFormat
    cmpwi r3, 0x2
    beq lbl_802DEA4C
    bge lbl_802DEA1C
    cmpwi r3, 0x0
    beq lbl_802DEA28
    bge lbl_802DEA34
    b lbl_802DEA58
lbl_802DEA1C:
    cmpwi r3, 0x5
    beq lbl_802DEA40
    b lbl_802DEA58
lbl_802DEA28:
    lis r29, lbl_8037ADA8@ha
    addi r29, r29, lbl_8037ADA8@l
    b lbl_802DEA60
lbl_802DEA34:
    lis r29, lbl_8037AE20@ha
    addi r29, r29, lbl_8037AE20@l
    b lbl_802DEA60
lbl_802DEA40:
    lis r29, lbl_8037AE5C@ha
    addi r29, r29, lbl_8037AE5C@l
    b lbl_802DEA60
lbl_802DEA4C:
    lis r29, lbl_8037ADE4@ha
    addi r29, r29, lbl_8037ADE4@l
    b lbl_802DEA60
lbl_802DEA58:
    lis r29, lbl_8037ADA8@ha
    addi r29, r29, lbl_8037ADA8@l
lbl_802DEA60:
    lwz r0, 0x24(r1)
    lis r4, 0x100
    addi r3, r1, 0x1c
    stw r0, 0x1c(r1)
    subi r4, r4, 0x1
    bl GXSetCopyClear
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    li r3, 0x1
    li r4, 0x1
    li r5, 0x5
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    li r3, 0x2
    li r4, 0x1
    li r5, 0x6
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    li r3, 0x3
    li r4, 0x1
    li r5, 0x7
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    li r3, 0x4
    li r4, 0x1
    li r5, 0x8
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    li r3, 0x5
    li r4, 0x1
    li r5, 0x9
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    li r3, 0x6
    li r4, 0x1
    li r5, 0xa
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    li r3, 0x7
    li r4, 0x1
    li r5, 0xb
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl GXSetTexCoordGen2
    li r3, 0x1
    bl GXSetNumTexGens
    bl GXClearVtxDesc
    bl GXInvalidateVtxCache
    li r28, 0x9
lbl_802DEB6C:
    lwz r4, __GXData
    mr r3, r28
    li r5, 0x0
    bl GXSetArray
    addi r28, r28, 0x1
    cmplwi r28, 0x18
    ble lbl_802DEB6C
    li r28, 0x0
lbl_802DEB8C:
    mr r3, r28
    addi r4, r30, 0x80
    bl GXSetVtxAttrFmtv
    addi r28, r28, 0x1
    cmplwi r28, 0x8
    blt lbl_802DEB8C
    li r3, 0x6
    li r4, 0x0
    bl GXSetLineWidth
    li r3, 0x6
    li r4, 0x0
    bl GXSetPointSize
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl GXEnableTexOffsets
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl GXEnableTexOffsets
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl GXEnableTexOffsets
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl GXEnableTexOffsets
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    bl GXEnableTexOffsets
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    bl GXEnableTexOffsets
    li r3, 0x6
    li r4, 0x0
    li r5, 0x0
    bl GXEnableTexOffsets
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    bl GXEnableTexOffsets
    lfs f0, at_2812_804A2578
    addi r3, r1, 0x48
    lfs f1, lbl_804A2584
    li r4, 0x0
    stfs f0, 0x4c(r1)
    stfs f1, 0x48(r1)
    stfs f0, 0x50(r1)
    stfs f0, 0x54(r1)
    stfs f0, 0x58(r1)
    stfs f1, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f0, 0x6c(r1)
    stfs f1, 0x70(r1)
    stfs f0, 0x74(r1)
    bl GXLoadPosMtxImm
    addi r3, r1, 0x48
    li r4, 0x0
    bl GXLoadNrmMtxImm
    li r3, 0x0
    bl GXSetCurrentMtx
    addi r3, r1, 0x48
    li r4, 0x3c
    li r5, 0x0
    bl GXLoadTexMtxImm
    addi r3, r1, 0x48
    li r4, 0x7d
    li r5, 0x0
    bl GXLoadTexMtxImm
    lhz r3, 0x4(r29)
    lhz r0, 0x8(r29)
    stw r3, 0x7c(r1)
    lfs f1, at_2812_804A2578
    stw r0, 0x84(r1)
    lfd f4, lbl_804A2590
    fmr f2, f1
    lfd f3, 0x78(r1)
    fmr f5, f1
    lfd f0, 0x80(r1)
    fsubs f3, f3, f4
    lfs f6, lbl_804A2584
    fsubs f4, f0, f4
    bl GXSetViewport
    addi r3, r30, 0x150
    bl GXSetProjectionv
    bl fn_802E1E20
    li r3, 0x0
    bl fn_802E1DE4
    li r3, 0x2
    bl GXSetCullMode
    li r3, 0x0
    bl GXSetClipMode
    lhz r5, 0x4(r29)
    li r3, 0x0
    lhz r6, 0x6(r29)
    li r4, 0x0
    bl GXSetScissor
    li r3, 0x0
    li r4, 0x0
    bl GXSetScissorBoxOffset
    li r3, 0x0
    bl GXSetNumChans
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    stw r31, 0x18(r1)
    addi r4, r1, 0x18
    li r3, 0x4
    bl GXSetChanAmbColor
    lwz r0, 0x20(r1)
    addi r4, r1, 0x14
    li r3, 0x4
    stw r0, 0x14(r1)
    bl GXSetChanMatColor
    li r3, 0x5
    li r4, 0x0
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x2
    bl GXSetChanCtrl
    stw r31, 0x10(r1)
    addi r4, r1, 0x10
    li r3, 0x5
    bl GXSetChanAmbColor
    lwz r0, 0x20(r1)
    addi r4, r1, 0xc
    li r3, 0x5
    stw r0, 0xc(r1)
    bl GXSetChanMatColor
    bl GXInvalidateTexAll
    lis r3, __GXDefaultTexRegionCallback@ha
    addi r3, r3, __GXDefaultTexRegionCallback@l
    bl GXSetTexRegionCallback
    lis r3, __GXDefaultTlutRegionCallback@ha
    addi r3, r3, __GXDefaultTlutRegionCallback@l
    bl GXSetTlutRegionCallback
    addi r3, r1, 0x28
    addi r4, r30, 0x60
    li r5, 0x4
    li r6, 0x4
    li r7, 0x3
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl GXInitTexObj
    addi r3, r1, 0x28
    li r4, 0x0
    bl GXLoadTexObj
    addi r3, r1, 0x28
    li r4, 0x1
    bl GXLoadTexObj
    addi r3, r1, 0x28
    li r4, 0x2
    bl GXLoadTexObj
    addi r3, r1, 0x28
    li r4, 0x3
    bl GXLoadTexObj
    addi r3, r1, 0x28
    li r4, 0x4
    bl GXLoadTexObj
    addi r3, r1, 0x28
    li r4, 0x5
    bl GXLoadTexObj
    addi r3, r1, 0x28
    li r4, 0x6
    bl GXLoadTexObj
    addi r3, r1, 0x28
    li r4, 0x7
    bl GXLoadTexObj
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x1
    li r4, 0x1
    li r5, 0x1
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x2
    li r4, 0x2
    li r5, 0x2
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x3
    li r4, 0x3
    li r5, 0x3
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x4
    li r4, 0x4
    li r5, 0x4
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x5
    li r4, 0x5
    li r5, 0x5
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x6
    li r4, 0x6
    li r5, 0x6
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x7
    li r4, 0x7
    li r5, 0x7
    li r6, 0x4
    bl fn_802E48CC
    li r3, 0x8
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x9
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0xa
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0xb
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0xc
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0xd
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0xe
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0xf
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_802E48CC
    li r3, 0x1
    bl fn_802E4A28
    li r3, 0x0
    li r4, 0x3
    bl fn_802E43CC
    li r3, 0x7
    li r4, 0x0
    li r5, 0x0
    li r6, 0x7
    li r7, 0x0
    bl fn_802E4808
    li r3, 0x0
    li r4, 0x11
    li r5, 0x0
    bl fn_802E4840
    li r28, 0x0
lbl_802DEFE0:
    mr r3, r28
    li r4, 0x6
    bl fn_802E46B0
    mr r3, r28
    li r4, 0x0
    bl fn_802E4700
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    bl fn_802E4750
    addi r28, r28, 0x1
    cmplwi r28, 0x10
    blt lbl_802DEFE0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x2
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r3, 0x3
    li r4, 0x2
    li r5, 0x2
    li r6, 0x2
    li r7, 0x3
    bl GXSetTexCoordScaleManually
    li r28, 0x0
lbl_802DF078:
    mr r3, r28
    bl fn_802E432C
    addi r28, r28, 0x1
    cmplwi r28, 0x10
    blt lbl_802DF078
    li r3, 0x0
    bl fn_802E430C
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_802E413C
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    bl fn_802E413C
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    bl fn_802E413C
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_802E413C
    lfs f2, lbl_804A2584
    addi r4, r1, 0x8
    stw r31, 0x8(r1)
    li r3, 0x0
    fmr f4, f2
    lfs f1, at_2812_804A2578
    lfs f3, lbl_804A2588
    bl GXSetFog
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl GXSetFogRangeAdj
    li r3, 0x0
    li r4, 0x4
    li r5, 0x5
    li r6, 0x0
    bl GXSetBlendMode
    li r3, 0x1
    bl GXSetColorUpdate
    li r3, 0x1
    bl GXSetAlphaUpdate
    li r3, 0x1
    li r4, 0x3
    li r5, 0x1
    bl GXSetZMode
    li r3, 0x1
    bl GXSetZCompLoc
    li r3, 0x1
    bl GXSetDither
    li r3, 0x0
    li r4, 0x0
    bl GXSetDstAlpha
    li r3, 0x0
    li r4, 0x0
    bl GXSetPixelFmt
    li r3, 0x1
    li r4, 0x1
    bl GXSetFieldMask
    lhz r0, 0x8(r29)
    lhz r3, 0x10(r29)
    slwi r0, r0, 1
    cmpw r3, r0
    bne lbl_802DF188
    li r4, 0x1
    b lbl_802DF18C
lbl_802DF188:
    li r4, 0x0
lbl_802DF18C:
    lbz r3, 0x18(r29)
    bl GXSetFieldMode
    lhz r5, 0x4(r29)
    li r3, 0x0
    lhz r6, 0x6(r29)
    li r4, 0x0
    bl GXSetDispCopySrc
    lhz r3, 0x4(r29)
    lhz r4, 0x6(r29)
    bl GXSetDispCopyDst
    lhz r3, 0x8(r29)
    lhz r0, 0x6(r29)
    stw r3, 0x7c(r1)
    lfd f2, lbl_804A2590
    stw r0, 0x84(r1)
    lfd f1, 0x78(r1)
    lfd f0, 0x80(r1)
    fsubs f1, f1, f2
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    bl GXSetDispCopyYScale
    li r3, 0x3
    bl GXSetCopyClamp
    lbz r3, 0x19(r29)
    addi r4, r29, 0x1a
    addi r6, r29, 0x32
    li r5, 0x1
    bl GXSetCopyFilter
    li r3, 0x0
    bl GXSetDispCopyGamma
    li r3, 0x0
    bl GXSetDispCopyFrame2Field
    bl GXClearBoundingBox
    li r3, 0x1
    bl __DVDGetAutoFatalMessaging
    li r3, 0x1
    bl fn_802E1568
    li r3, 0x0
    bl fn_802E1604
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0xf
    bl fn_802E157C
    li r3, 0x7
    li r4, 0x0
    bl fn_802E1540
    li r3, 0x1
    bl fn_802E1550
    li r3, 0x0
    li r4, 0x0
    bl fn_802E15EC
    li r3, 0x1
    li r4, 0x7
    li r5, 0x1
    bl fn_802E1618
    li r3, 0x23
    li r4, 0x16
    bl fn_802E5A8C
    bl fn_802E62B8
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

