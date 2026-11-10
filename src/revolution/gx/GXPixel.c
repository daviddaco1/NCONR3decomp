#include <revolution/GX.h>

#include <cmath>

// GXSetFog: definicion C reemplazada por asm (ver abajo)
void GXSetFog(GXFogType type, GXColor color, f32 start, f32 end, f32 near,
              f32 far);


void GXInitFogAdjTable(GXFogAdjTable* table, u16 width, const Mtx44 proj) {
    f32 f31, f30, f29, f28, f27;
    u32 i;

    if (proj[3][3] == 0.0l) {
        f30 = proj[2][3] / (proj[2][2] - 1.0f);
        f28 = f30 / proj[0][0];
    } else {
        f28 = 1.0f / proj[0][0];
        f30 = M_SQRT3 * f28;
    }

    f29 = 2.0f / width;

    for (i = 0; i < ARRAY_SIZE(table->r); i++) {
        f31 = (i + 1) * 32;
        f31 *= f29;
        f31 *= f28;
        f27 = sqrtf(1.0f + (f31 * f31) / (f30 * f30));
        table->r[i] = (u32)(f27 * 256) & 0xFFF;
    }
}

void GXSetFogRangeAdj(GXBool enable, u16 center, const GXFogAdjTable* table) {
    u32 fogRangeReg;
    u32 fogRangeRegK;
    int i;

    if (enable) {
        for (i = 0; i < ARRAY_SIZE(table->r); i += 2) {
            fogRangeRegK = 0;
            GX_BP_SET_FOGRANGEK_HI(fogRangeRegK, table->r[i]);
            GX_BP_SET_FOGRANGEK_LO(fogRangeRegK, table->r[i + 1]);
            GX_BP_SET_OPCODE(fogRangeRegK, GX_BP_REG_FOGRANGEK0 + (i / 2));
            GX_BP_LOAD_REG(fogRangeRegK);
        }
    }

    fogRangeReg = 0;
    GX_BP_SET_FOGRANGE_CENTER(fogRangeReg, center + 342);
    GX_BP_SET_FOGRANGE_ENABLED(fogRangeReg, enable);
    GX_BP_SET_OPCODE(fogRangeReg, GX_BP_REG_FOGRANGE);
    GX_BP_LOAD_REG(fogRangeReg);

    gxdt->lastWriteWasXF = FALSE;
}

void GXSetBlendMode(GXBlendMode mode, GXBlendFactor src, GXBlendFactor dst,
                    GXLogicOp op) {
    u32 blendModeReg = gxdt->blendMode;
    GX_BP_SET_BLENDMODE_SUBTRACT(blendModeReg, mode == GX_BM_SUBTRACT);
    GX_BP_SET_BLENDMODE_BLEND_ENABLE(blendModeReg, mode);
    GX_BP_SET_BLENDMODE_LOGIC_OP_ENABLE(blendModeReg, mode == GX_BM_LOGIC);
    GX_BP_SET_BLENDMODE_LOGIC_MODE(blendModeReg, op);
    GX_BP_SET_BLENDMODE_SRC_FACTOR(blendModeReg, src);
    GX_BP_SET_BLENDMODE_DST_FACTOR(blendModeReg, dst);

    GX_BP_LOAD_REG(blendModeReg);
    gxdt->blendMode = blendModeReg;

    gxdt->lastWriteWasXF = FALSE;
}

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

void GXSetPixelFmt(GXPixelFmt pixelFmt, GXZFmt16 zFmt) {
    static u32 p2f[GX_MAX_PIXELFMT] = {
        GX_PF_RGB8_Z24, GX_PF_RGBA6_Z24, GX_PF_RGBA565_Z16, GX_PF_Z24,
        GX_PF_Y8,       GX_PF_Y8,        GX_PF_Y8,          GX_PF_U8};

    u32 zControlRegOld = gxdt->zControl;

    GX_BP_SET_ZCONTROL_PIXEL_FMT(gxdt->zControl, p2f[pixelFmt]);
    GX_BP_SET_ZCONTROL_Z_FMT(gxdt->zControl, zFmt);

    if (zControlRegOld != gxdt->zControl) {
        GX_BP_LOAD_REG(gxdt->zControl);
        GX_BP_SET_GENMODE_MULTISAMPLE(gxdt->genMode,
                                      pixelFmt == GX_PF_RGBA565_Z16);
        gxdt->gxDirtyFlags |= GX_DIRTY_GEN_MODE;
    }

    if (p2f[pixelFmt] == GX_PF_Y8) {
        GX_BP_SET_DSTALPHA_YUV_FMT(gxdt->dstAlpha, pixelFmt - GX_PF_Y8);
        GX_BP_SET_OPCODE(gxdt->dstAlpha, GX_BP_REG_DSTALPHA);
        GX_BP_LOAD_REG(gxdt->dstAlpha);
    }

    gxdt->lastWriteWasXF = FALSE;
}

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

void GXSetFieldMask(GXBool enableEven, GXBool enableOdd) {
    u32 fieldMaskReg = 0;
    GX_BP_SET_FIELDMASK_ODD(fieldMaskReg, enableOdd);
    GX_BP_SET_FIELDMASK_EVEN(fieldMaskReg, enableEven);
    GX_BP_SET_OPCODE(fieldMaskReg, GX_BP_REG_FIELDMASK);

    GX_BP_LOAD_REG(fieldMaskReg);
    gxdt->lastWriteWasXF = FALSE;
}

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
void GXSetFog(GXFogType type, GXColor color, f32 start, f32 end, f32 near,
              f32 far);
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
