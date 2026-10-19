#include <revolution/GX.h>

#include <math.h>

// GXSetFog: definicion C reemplazada por asm (ver abajo)


// GXInitFogAdjTable: definicion C reemplazada por asm (ver abajo)


// GXSetFogRangeAdj: definicion C reemplazada por asm (ver abajo)


// GXSetBlendMode: definicion C reemplazada por asm (ver abajo)


void GXSetColorUpdate(GXBool enable) {
    u32 blendModeReg = gxdt->blendMode;
    GX_BP_SET_BLENDMODE_COLOR_UPDATE(blendModeReg, enable);

    GX_BP_LOAD_REG(blendModeReg);
    gxdt->blendMode = blendModeReg;

    gxdt->lastWriteWasXF = FALSE;
}

void GXSetAlphaUpdate(GXBool enable) {
    u32 blendModeReg = gxdt->blendMode;
    GX_BP_SET_BLENDMODE_ALPHA_UPDATE(blendModeReg, enable);

    GX_BP_LOAD_REG(blendModeReg);
    gxdt->blendMode = blendModeReg;

    gxdt->lastWriteWasXF = FALSE;
}

void GXSetZMode(GXBool enableTest, GXCompare func, GXBool enableUpdate) {
    u32 zModeReg = gxdt->zMode;
    GX_BP_SET_ZMODE_TEST_ENABLE(zModeReg, enableTest);
    GX_BP_SET_ZMODE_COMPARE(zModeReg, func);
    GX_BP_SET_ZMODE_UPDATE_ENABLE(zModeReg, enableUpdate);

    GX_BP_LOAD_REG(zModeReg);
    gxdt->zMode = zModeReg;

    gxdt->lastWriteWasXF = FALSE;
}

void GXSetZCompLoc(GXBool beforeTex) {
    GX_BP_SET_ZCONTROL_BEFORE_TEX(gxdt->zControl, beforeTex);
    GX_BP_LOAD_REG(gxdt->zControl);
    gxdt->lastWriteWasXF = FALSE;
}

// GXSetPixelFmt: definicion C reemplazada por asm (ver abajo)


void GXSetDither(GXBool enable) {
    u32 blendModeReg = gxdt->blendMode;
    GX_BP_SET_BLENDMODE_DITHER(blendModeReg, enable);

    GX_BP_LOAD_REG(blendModeReg);
    gxdt->blendMode = blendModeReg;

    gxdt->lastWriteWasXF = FALSE;
}

void GXSetDstAlpha(GXBool enable, u8 alpha) {
    u32 dstAlphaReg = gxdt->dstAlpha;
    GX_BP_SET_DSTALPHA_ALPHA(dstAlphaReg, alpha);
    GX_BP_SET_DSTALPHA_ENABLE(dstAlphaReg, enable);

    GX_BP_LOAD_REG(dstAlphaReg);
    gxdt->dstAlpha = dstAlphaReg;

    gxdt->lastWriteWasXF = FALSE;
}

// GXSetFieldMask: definicion C reemplazada por asm (ver abajo)


void GXSetFieldMode(GXBool texLOD, GXBool adjustAR) {
    GX_BP_SET_LINEPTWIDTH_ADJUST_AR(gxdt->linePtWidth, adjustAR);
    GX_BP_LOAD_REG(gxdt->linePtWidth);

    __GXFlushTextureState();
    GX_BP_LOAD_REG(GX_BP_REG_FIELDMODE << 24 | texLOD);
    __GXFlushTextureState();
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_804A2620;
extern float lbl_804A2624;
extern float lbl_804A2628;
extern float lbl_804A2630;
extern float lbl_804A2638;
extern float lbl_804A2640;
extern float lbl_804A2648;
extern float lbl_804A2650;
extern float lbl_804A2658;
extern float lbl_804A2660;
extern float lbl_804A2664;
extern float lbl_804A2668;
extern u8 lbl_8037B158[];
extern void __cvt_fp2unsigned();

// asm_to_cpp: GXSetFog
asm void GXSetFog(GXFogType type, GXColor color, f32 start, f32 end, f32 near,
              f32 far) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stw r31, 0x2c(r1)
    clrlwi r31, r3, 29
    stw r30, 0x28(r1)
    extrwi. r30, r3, 1, 28
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    beq lbl_802E4AC8
    fcmpu cr0, f4, f3
    beq lbl_802E4A90
    fcmpu cr0, f2, f1
    bne lbl_802E4AA0
lbl_802E4A90:
    lfs f0, lbl_804A2620
    stfs f0, 0xc(r1)
    stfs f0, 0x8(r1)
    b lbl_802E4BD0
lbl_802E4AA0:
    fsubs f6, f2, f1
    lfs f5, lbl_804A2624
    fsubs f2, f4, f3
    fsubs f0, f1, f3
    fdivs f3, f5, f6
    fmuls f1, f3, f2
    fmuls f0, f3, f0
    stfs f1, 0xc(r1)
    stfs f0, 0x8(r1)
    b lbl_802E4BD0
lbl_802E4AC8:
    fcmpu cr0, f4, f3
    beq lbl_802E4AD8
    fcmpu cr0, f2, f1
    bne lbl_802E4AE8
lbl_802E4AD8:
    lfs f3, lbl_804A2620
    lfs f4, lbl_804A2628
    fmr f31, f3
    b lbl_802E4B04
lbl_802E4AE8:
    fsubs f0, f4, f3
    fsubs f2, f2, f1
    fmuls f3, f4, f3
    fdivs f4, f4, f0
    fmuls f0, f0, f2
    fdivs f31, f1, f2
    fdivs f3, f3, f0
lbl_802E4B04:
    lfs f1, lbl_804A2628
    li r28, 0x0
    lfd f0, lbl_804A2630
    b lbl_802E4B1C
lbl_802E4B14:
    fmuls f4, f4, f1
    addi r28, r28, 0x1
lbl_802E4B1C:
    fcmpo cr0, f4, f0
    bgt lbl_802E4B14
    lfd f0, lbl_804A2640
    lfs f2, lbl_804A2638
    lfs f1, lbl_804A2620
    b lbl_802E4B3C
lbl_802E4B34:
    fmuls f4, f4, f2
    subi r28, r28, 0x1
lbl_802E4B3C:
    fcmpo cr0, f4, f1
    mfcr r0
    extrwi. r0, r0, 1, 1
    beq lbl_802E4B54
    fcmpo cr0, f4, f0
    blt lbl_802E4B34
lbl_802E4B54:
    addi r0, r28, 0x1
    li r3, 0x1
    slw r3, r3, r0
    lfs f0, lbl_804A2648
    lis r0, 0x4330
    lfd f2, lbl_804A2650
    xoris r3, r3, 0x8000
    stw r0, 0x10(r1)
    fmuls f1, f0, f4
    stw r3, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f0, f3, f0
    stfs f0, 0xc(r1)
    bl __cvt_fp2unsigned
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r5, 0xef
    li r6, 0x0
    rlwimi r6, r3, 0, 8, 31
    addi r3, r28, 0x1
    rlwimi r6, r5, 24, 0, 7
    li r5, 0x0
    stw r6, -0x8000(r4)
    rlwimi r5, r3, 0, 27, 31
    li r3, 0xf0
    stb r0, -0x8000(r4)
    rlwimi r5, r3, 24, 0, 7
    stfs f31, 0x8(r1)
    stw r5, -0x8000(r4)
lbl_802E4BD0:
    lwz r0, 0xc(r1)
    li r3, 0x0
    lis r4, 0xcc01
    li r5, 0x61
    rlwimi r3, r0, 20, 21, 31
    stb r5, -0x8000(r4)
    rlwimi r3, r0, 20, 13, 20
    lwz r6, 0x8(r1)
    rlwimi r3, r0, 20, 12, 12
    li r0, 0xee
    rlwimi r3, r0, 24, 0, 7
    li r9, 0x0
    stw r3, -0x8000(r4)
    li r8, 0xf1
    rlwimi r9, r6, 20, 21, 31
    lwz r0, 0x0(r29)
    rlwimi r9, r6, 20, 13, 20
    stb r5, -0x8000(r4)
    rlwimi r9, r6, 20, 12, 12
    li r7, 0x0
    rlwimi r9, r30, 20, 11, 11
    li r6, 0xf2
    rlwimi r7, r0, 24, 8, 31
    lwz r3, __GXData
    rlwimi r9, r31, 21, 8, 10
    li r0, 0x0
    rlwimi r9, r8, 24, 0, 7
    rlwimi r7, r6, 24, 0, 7
    stw r9, -0x8000(r4)
    stb r5, -0x8000(r4)
    stw r7, -0x8000(r4)
    sth r0, 0x2(r3)
    opword 0xE3E10038
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: GXInitFogAdjTable
asm void GXInitFogAdjTable(GXFogAdjTable* table, u16 width, const Mtx44 proj) {
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
    stfd f26, 0x20(r1)
    opword 0xF3410028
    lfd f1, lbl_804A2658
    stw r31, 0x1c(r1)
    lfs f0, 0x3c(r5)
    stw r30, 0x18(r1)
    fcmpu cr0, f1, f0
    stw r29, 0x14(r1)
    bne lbl_802E4CF0
    lfs f2, 0x28(r5)
    lfs f0, lbl_804A2624
    lfs f1, 0x2c(r5)
    fsubs f2, f2, f0
    lfs f0, 0x0(r5)
    fdivs f1, f1, f2
    fdivs f26, f1, f0
    b lbl_802E4D04
lbl_802E4CF0:
    lfs f2, lbl_804A2624
    lfs f1, 0x0(r5)
    lfs f0, lbl_804A2660
    fdivs f26, f2, f1
    fmuls f1, f0, f26
lbl_802E4D04:
    lis r31, 0x4330
    stw r4, 0xc(r1)
    lfd f28, lbl_804A2668
    fmuls f29, f1, f1
    stw r31, 0x8(r1)
    mr r30, r3
    lfs f0, lbl_804A2638
    li r29, 0x0
    lfd f1, 0x8(r1)
    lfs f30, lbl_804A2624
    fsubs f1, f1, f28
    lfs f31, lbl_804A2664
    fdivs f27, f0, f1
lbl_802E4D38:
    addi r0, r29, 0x1
    stw r31, 0x8(r1)
    slwi r0, r0, 5
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f28
    fmuls f0, f0, f27
    fmuls f0, f0, f26
    fmuls f0, f0, f0
    fdivs f0, f0, f29
    fadds f1, f30, f0
    bl sqrt
    frsp f0, f1
    fmuls f1, f31, f0
    bl __cvt_fp2unsigned
    addi r29, r29, 0x1
    clrlwi r0, r3, 20
    cmplwi r29, 0xa
    sth r0, 0x0(r30)
    addi r30, r30, 0x2
    blt lbl_802E4D38
    opword 0xE3E10078
    lfd f31, 0x70(r1)
    opword 0xE3C10068
    lfd f30, 0x60(r1)
    opword 0xE3A10058
    lfd f29, 0x50(r1)
    opword 0xE3810048
    lfd f28, 0x40(r1)
    opword 0xE3610038
    lfd f27, 0x30(r1)
    opword 0xE3410028
    lfd f26, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x84(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: GXSetFogRangeAdj
asm void GXSetFogRangeAdj(GXBool enable, u16 center, const GXFogAdjTable* table) {
    nofralloc
    cmpwi r3, 0x0
    beq lbl_802E4EC4
    lhz r12, 0x0(r5)
    li r11, 0x0
    lhz r10, 0x2(r5)
    lis r6, 0xcc01
    rlwimi r11, r12, 0, 20, 31
    li r0, 0x61
    mr r9, r11
    stb r0, -0x8000(r6)
    rlwimi r9, r10, 12, 8, 19
    li r7, 0xe9
    mr r8, r9
    lhz r12, 0x4(r5)
    rlwimi r8, r7, 24, 0, 7
    li r11, 0x0
    rlwimi r11, r12, 0, 20, 31
    stw r8, -0x8000(r6)
    mr r9, r11
    lhz r10, 0x6(r5)
    li r7, 0xea
    stb r0, -0x8000(r6)
    rlwimi r9, r10, 12, 8, 19
    lhz r12, 0x8(r5)
    mr r8, r9
    li r11, 0x0
    rlwimi r8, r7, 24, 0, 7
    lhz r10, 0xa(r5)
    rlwimi r11, r12, 0, 20, 31
    stw r8, -0x8000(r6)
    mr r9, r11
    li r7, 0xeb
    rlwimi r9, r10, 12, 8, 19
    stb r0, -0x8000(r6)
    mr r8, r9
    lhz r12, 0xc(r5)
    rlwimi r8, r7, 24, 0, 7
    li r11, 0x0
    rlwimi r11, r12, 0, 20, 31
    stw r8, -0x8000(r6)
    mr r9, r11
    lhz r10, 0xe(r5)
    li r7, 0xec
    stb r0, -0x8000(r6)
    rlwimi r9, r10, 12, 8, 19
    lhz r12, 0x10(r5)
    mr r8, r9
    li r11, 0x0
    rlwimi r8, r7, 24, 0, 7
    lhz r10, 0x12(r5)
    stw r8, -0x8000(r6)
    rlwimi r11, r12, 0, 20, 31
    mr r9, r11
    li r7, 0xed
    rlwimi r9, r10, 12, 8, 19
    stb r0, -0x8000(r6)
    mr r8, r9
    rlwimi r8, r7, 24, 0, 7
    stw r8, -0x8000(r6)
lbl_802E4EC4:
    addi r0, r4, 0x156
    li r6, 0x0
    rlwimi r6, r0, 0, 22, 31
    lis r4, 0xcc01
    li r0, 0x61
    li r5, 0xe8
    rlwimi r6, r3, 10, 21, 21
    stb r0, -0x8000(r4)
    rlwimi r6, r5, 24, 0, 7
    lwz r3, __GXData
    stw r6, -0x8000(r4)
    li r0, 0x0
    sth r0, 0x2(r3)
    blr
}

// asm_to_cpp: GXSetBlendMode
asm void GXSetBlendMode(GXBlendMode mode, GXBlendFactor src, GXBlendFactor dst,
                    GXLogicOp op) {
    nofralloc
    lwz r10, __GXData
    subi r0, r3, 0x3
    subi r8, r3, 0x2
    lis r7, 0xcc01
    cntlzw r0, r0
    lwz r9, 0x220(r10)
    rlwimi r9, r0, 6, 20, 20
    cntlzw r8, r8
    li r0, 0x61
    stb r0, -0x8000(r7)
    rlwimi r9, r3, 0, 31, 31
    rlwimi r9, r8, 28, 30, 30
    li r0, 0x0
    rlwimi r9, r6, 12, 16, 19
    rlwimi r9, r4, 8, 21, 23
    rlwimi r9, r5, 5, 24, 26
    stw r9, -0x8000(r7)
    stw r9, 0x220(r10)
    sth r0, 0x2(r10)
    blr
}

// asm_to_cpp: GXSetPixelFmt
asm void GXSetPixelFmt(GXPixelFmt pixelFmt, GXZFmt16 zFmt) {
    nofralloc
    lwz r9, __GXData
    lis r6, lbl_8037B158@ha
    slwi r7, r3, 2
    addi r6, r6, lbl_8037B158@l
    lwz r8, 0x22c(r9)
    lwzx r0, r6, r7
    mr r5, r8
    rlwimi r5, r0, 0, 29, 31
    rlwimi r5, r4, 3, 26, 28
    cmplw r8, r5
    stw r5, 0x22c(r9)
    beq lbl_802E506C
    lis r5, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r5)
    subi r0, r3, 0x2
    cntlzw r4, r0
    lwz r0, 0x22c(r9)
    stw r0, -0x8000(r5)
    lwz r0, 0x254(r9)
    rlwimi r0, r4, 4, 22, 22
    stw r0, 0x254(r9)
    lwz r0, 0x5fc(r9)
    ori r0, r0, 0x4
    stw r0, 0x5fc(r9)
lbl_802E506C:
    lwzx r0, r6, r7
    cmplwi r0, 0x4
    bne lbl_802E50A4
    subi r0, r3, 0x4
    lwz r4, 0x224(r9)
    rlwimi r4, r0, 9, 21, 22
    lis r3, 0xcc01
    li r0, 0x42
    rlwimi r4, r0, 24, 0, 7
    stw r4, 0x224(r9)
    li r0, 0x61
    stb r0, -0x8000(r3)
    lwz r0, 0x224(r9)
    stw r0, -0x8000(r3)
lbl_802E50A4:
    li r0, 0x0
    sth r0, 0x2(r9)
    blr
}

// asm_to_cpp: GXSetFieldMask
asm void GXSetFieldMask(GXBool enableEven, GXBool enableOdd) {
    nofralloc
    lis r5, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r5)
    li r0, 0x44
    li r6, 0x0
    rlwimi r6, r4, 0, 31, 31
    rlwimi r6, r3, 1, 30, 30
    lwz r3, __GXData
    rlwimi r6, r0, 24, 0, 7
    li r0, 0x0
    stw r6, -0x8000(r5)
    sth r0, 0x2(r3)
    blr
}
