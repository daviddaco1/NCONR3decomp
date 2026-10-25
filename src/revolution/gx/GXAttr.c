// Uses the hacky GXSetVtxAttrFmtv declaration
#define GXATTR_MATCH_HACK

#include <revolution/GX.h>

static void SETVCDATTR(GXAttr name, GXAttrType type);
static void SETVAT(u32* vatA, u32* vatB, u32* vatC, GXAttr attr,
                   GXCompCnt compCnt, GXCompType compType, u8 shift);
static u8 GetFracForNrm(GXCompType compType);

static void __GXXfVtxSpecs(void) {
    unsigned int cmd;
    u32 nrm;
    u32 clr;
    u32 txc;

    nrm = gxdt->binormal ? 2 : (gxdt->normal ? 1 : 0);

    // clang-format off

    // Both fields in one access
    clr = 32 -
          __cntlzw(GX_BITGET(gxdt->vcdLoReg, GX_CP_VCD_LO_COLORSPECULAR_B,
                             GX_CP_VCD_LO_COLORSPECULAR_SZ + GX_CP_VCD_LO_COLORDIFFUSED_SZ)) + 1;

    // All 16 bits in VCD_Hi
    txc = 32 -
          __cntlzw(GX_BITGET(gxdt->vcdHiReg, GX_CP_VCD_HI_TEX7COORD_B,
                             GX_CP_VCD_HI_TEX7COORD_SZ * 8)) + 1;

    // clang-format on

    // TODO(kiwi) Fakematch? Bitset macros don't work here
    GX_XF_LOAD_REG_HDR(GX_XF_REG_INVERTEXSPEC);
    cmd = 0;
    cmd = cmd | clr >> 1;
    cmd = (txc << 3) & ~0xF | cmd;
    WGPIPE.i = cmd | nrm << 2;

    gxdt->lastWriteWasXF = TRUE;
}

void GXSetVtxDesc(GXAttr name, GXAttrType type) {
    SETVCDATTR(name, type);

    if (gxdt->normal || gxdt->binormal) {
        GX_CP_SET_VCD_LO_NORMAL(gxdt->vcdLoReg, gxdt->normalType);
    } else {
        GX_CP_SET_VCD_LO_NORMAL(gxdt->vcdLoReg, GX_NONE);
    }

    gxdt->gxDirtyFlags |= GX_DIRTY_VCD;
}

static DECOMP_INLINE void SETVCDATTR(GXAttr name, GXAttrType type) {
    switch (name) {
    case GX_VA_PNMTXIDX: {
        GX_CP_SET_VCD_LO_POSMATIDX(gxdt->vcdLoReg, type);
        break;
    }

    case GX_VA_TEX0MTXIDX: {
        GX_CP_SET_VCD_LO_TEX0MATIDX(gxdt->vcdLoReg, type);
        break;
    }

    case GX_VA_TEX1MTXIDX: {
        GX_CP_SET_VCD_LO_TEX1MATIDX(gxdt->vcdLoReg, type);
        break;
    }

    case GX_VA_TEX2MTXIDX: {
        GX_CP_SET_VCD_LO_TEX2MATIDX(gxdt->vcdLoReg, type);
        break;
    }

    case GX_VA_TEX3MTXIDX: {
        GX_CP_SET_VCD_LO_TEX3MATIDX(gxdt->vcdLoReg, type);
        break;
    }

    case GX_VA_TEX4MTXIDX: {
        GX_CP_SET_VCD_LO_TEX4MATIDX(gxdt->vcdLoReg, type);
        break;
    }

    case GX_VA_TEX5MTXIDX: {
        GX_CP_SET_VCD_LO_TEX5MATIDX(gxdt->vcdLoReg, type);
        break;
    }

    case GX_VA_TEX6MTXIDX: {
        GX_CP_SET_VCD_LO_TEX6MATIDX(gxdt->vcdLoReg, type);
        break;
    }

    case GX_VA_TEX7MTXIDX: {
        GX_CP_SET_VCD_LO_TEX7MATIDX(gxdt->vcdLoReg, type);
        break;
    }

    case GX_VA_POS: {
        GX_CP_SET_VCD_LO_POSITION(gxdt->vcdLoReg, type);
        break;
    }

    case GX_VA_NRM: {
        if (type != GX_NONE) {
            gxdt->normal = TRUE;
            // GX_VA_NRM and GX_VA_NBT should not be enabled at the same time
            gxdt->binormal = FALSE;
            gxdt->normalType = type;
        } else {
            gxdt->normal = FALSE;
        }
        break;
    }

    case GX_VA_NBT: {
        if (type != GX_NONE) {
            gxdt->binormal = TRUE;
            // GX_VA_NRM and GX_VA_NBT should not be enabled at the same time
            gxdt->normal = FALSE;
            gxdt->normalType = type;
        } else {
            gxdt->binormal = FALSE;
        }
        break;
    }

    case GX_VA_CLR0: {
        GX_CP_SET_VCD_LO_COLORDIFFUSED(gxdt->vcdLoReg, type);
        break;
    }

    case GX_VA_CLR1: {
        GX_CP_SET_VCD_LO_COLORSPECULAR(gxdt->vcdLoReg, type);
        break;
    }

    case GX_VA_TEX0: {
        GX_CP_SET_VCD_HI_TEX0COORD(gxdt->vcdHiReg, type);
        break;
    }

    case GX_VA_TEX1: {
        GX_CP_SET_VCD_HI_TEX1COORD(gxdt->vcdHiReg, type);
        break;
    }

    case GX_VA_TEX2: {
        GX_CP_SET_VCD_HI_TEX2COORD(gxdt->vcdHiReg, type);
        break;
    }

    case GX_VA_TEX3: {
        GX_CP_SET_VCD_HI_TEX3COORD(gxdt->vcdHiReg, type);
        break;
    }

    case GX_VA_TEX4: {
        GX_CP_SET_VCD_HI_TEX4COORD(gxdt->vcdHiReg, type);
        break;
    }

    case GX_VA_TEX5: {
        GX_CP_SET_VCD_HI_TEX5COORD(gxdt->vcdHiReg, type);
        break;
    }

    case GX_VA_TEX6: {
        GX_CP_SET_VCD_HI_TEX6COORD(gxdt->vcdHiReg, type);
        break;
    }

    case GX_VA_TEX7: {
        GX_CP_SET_VCD_HI_TEX7COORD(gxdt->vcdHiReg, type);
        break;
    }

    default: {
        break;
    }
    }
}

// GXSetVtxDescv: definicion C reemplazada por asm (ver abajo)


// __GXSetVCD: definicion C reemplazada por asm (ver abajo)


void __GXCalculateVLim(void) {
    static u8 tbl1[] = {0, 4, 1, 2};
    static u8 tbl2[] = {0, 8, 1, 2};
    static u8 tbl3[] = {0, 12, 1, 2};

    u32 vlim;
    u32 vcdLo;
    u32 vcdHi;
    s32 compCnt;

    if (gxdt->SHORT_0x4 == 0) {
        return;
    }

    vcdLo = gxdt->vcdLoReg;
    vcdHi = gxdt->vcdHiReg;

    // GXCompCnt bit of normal parameters
    compCnt = gxdt->vatA[GX_VTXFMT0];
    compCnt = (compCnt & 0x200) >> 9;

    vlim = GX_CP_GET_VCD_LO_POSMATIDX(vcdLo);
    vlim += GX_CP_GET_VCD_LO_TEX0MATIDX(vcdLo);
    vlim += GX_CP_GET_VCD_LO_TEX1MATIDX(vcdLo);
    vlim += GX_CP_GET_VCD_LO_TEX2MATIDX(vcdLo);
    vlim += GX_CP_GET_VCD_LO_TEX3MATIDX(vcdLo);
    vlim += GX_CP_GET_VCD_LO_TEX4MATIDX(vcdLo);
    vlim += GX_CP_GET_VCD_LO_TEX5MATIDX(vcdLo);
    vlim += GX_CP_GET_VCD_LO_TEX6MATIDX(vcdLo);
    vlim += GX_CP_GET_VCD_LO_TEX7MATIDX(vcdLo);

    vlim += tbl3[GX_CP_GET_VCD_LO_POSITION(vcdLo)];
    vlim +=
        tbl3[GX_CP_GET_VCD_LO_NORMAL(vcdLo)] * (compCnt == GX_NRM_NBT ? 3 : 1);
    vlim += tbl1[GX_CP_GET_VCD_LO_COLORDIFFUSED(vcdLo)];
    vlim += tbl1[GX_CP_GET_VCD_LO_COLORSPECULAR(vcdLo)];

    vlim += tbl2[GX_CP_GET_VCD_HI_TEX0COORD(vcdHi)];
    vlim += tbl2[GX_CP_GET_VCD_HI_TEX1COORD(vcdHi)];
    vlim += tbl2[GX_CP_GET_VCD_HI_TEX2COORD(vcdHi)];
    vlim += tbl2[GX_CP_GET_VCD_HI_TEX3COORD(vcdHi)];
    vlim += tbl2[GX_CP_GET_VCD_HI_TEX4COORD(vcdHi)];
    vlim += tbl2[GX_CP_GET_VCD_HI_TEX5COORD(vcdHi)];
    vlim += tbl2[GX_CP_GET_VCD_HI_TEX6COORD(vcdHi)];
    vlim += tbl2[GX_CP_GET_VCD_HI_TEX7COORD(vcdHi)];

    gxdt->vlim = vlim;
}

void GXGetVtxDesc(GXAttr name, GXAttrType* type) {
    GXAttrType result;

    switch (name) {
    case GX_VA_PNMTXIDX: {
        result = GX_CP_GET_VCD_LO_POSMATIDX(gxdt->vcdLoReg);
        break;
    }

    case GX_VA_TEX0MTXIDX: {
        result = GX_CP_GET_VCD_LO_TEX0MATIDX(gxdt->vcdLoReg);
        break;
    }

    case GX_VA_TEX1MTXIDX: {
        result = GX_CP_GET_VCD_LO_TEX1MATIDX(gxdt->vcdLoReg);
        break;
    }

    case GX_VA_TEX2MTXIDX: {
        result = GX_CP_GET_VCD_LO_TEX2MATIDX(gxdt->vcdLoReg);
        break;
    }

    case GX_VA_TEX3MTXIDX: {
        result = GX_CP_GET_VCD_LO_TEX3MATIDX(gxdt->vcdLoReg);
        break;
    }

    case GX_VA_TEX4MTXIDX: {
        result = GX_CP_GET_VCD_LO_TEX4MATIDX(gxdt->vcdLoReg);
        break;
    }

    case GX_VA_TEX5MTXIDX: {
        result = GX_CP_GET_VCD_LO_TEX5MATIDX(gxdt->vcdLoReg);
        break;
    }

    case GX_VA_TEX6MTXIDX: {
        result = GX_CP_GET_VCD_LO_TEX6MATIDX(gxdt->vcdLoReg);
        break;
    }

    case GX_VA_TEX7MTXIDX: {
        result = GX_CP_GET_VCD_LO_TEX7MATIDX(gxdt->vcdLoReg);
        break;
    }

    case GX_VA_POS: {
        result = GX_CP_GET_VCD_LO_POSITION(gxdt->vcdLoReg);
        break;
    }

    case GX_VA_NRM: {
        result =
            gxdt->normal ? GX_CP_GET_VCD_LO_NORMAL(gxdt->vcdLoReg) : GX_NONE;
        break;
    }

    case GX_VA_NBT: {
        result =
            gxdt->binormal ? GX_CP_GET_VCD_LO_NORMAL(gxdt->vcdLoReg) : GX_NONE;
        break;
    }

    case GX_VA_CLR0: {
        result = GX_CP_GET_VCD_LO_COLORDIFFUSED(gxdt->vcdLoReg);
        break;
    }

    case GX_VA_CLR1: {
        result = GX_CP_GET_VCD_LO_COLORSPECULAR(gxdt->vcdLoReg);
        break;
    }

    case GX_VA_TEX0: {
        result = GX_CP_GET_VCD_HI_TEX0COORD(gxdt->vcdHiReg);
        break;
    }

    case GX_VA_TEX1: {
        result = GX_CP_GET_VCD_HI_TEX1COORD(gxdt->vcdHiReg);
        break;
    }

    case GX_VA_TEX2: {
        result = GX_CP_GET_VCD_HI_TEX2COORD(gxdt->vcdHiReg);
        break;
    }

    case GX_VA_TEX3: {
        result = GX_CP_GET_VCD_HI_TEX3COORD(gxdt->vcdHiReg);
        break;
    }

    case GX_VA_TEX4: {
        result = GX_CP_GET_VCD_HI_TEX4COORD(gxdt->vcdHiReg);
        break;
    }

    case GX_VA_TEX5: {
        result = GX_CP_GET_VCD_HI_TEX5COORD(gxdt->vcdHiReg);
        break;
    }

    case GX_VA_TEX6: {
        result = GX_CP_GET_VCD_HI_TEX6COORD(gxdt->vcdHiReg);
        break;
    }

    case GX_VA_TEX7: {
        result = GX_CP_GET_VCD_HI_TEX7COORD(gxdt->vcdHiReg);
        break;
    }

    default: {
        result = GX_NONE;
        break;
    }
    }

    *type = result;
}

void GXGetVtxDescv(GXVtxDescList* list) {
    int i;
    GXAttr attr;
    int* new_var2;

    for (i = 0; i <= GX_VA_TEX7; i++) {
        attr = (GXAttr)i;
        list[i].attr = attr;
        GXGetVtxDesc(attr, &list[i].type);
    }

    list[i].attr = GX_VA_NBT;
    GXGetVtxDesc(GX_VA_NBT, &list[i].type);

    // TODO(kiwi) Fakematch
    attr = 1;
    i = (*(new_var2 = &i)) + attr;
    list[i].attr = GX_VA_NULL;
}

void GXClearVtxDesc(void) {
    gxdt->vcdLoReg = 0;
    // GX_VA_POS is required for every vertex descriptor
    GX_CP_SET_VCD_LO_POSITION(gxdt->vcdLoReg, GX_DIRECT);
    gxdt->vcdHiReg = 0;
    gxdt->normal = FALSE;
    gxdt->binormal = FALSE;
    gxdt->gxDirtyFlags |= GX_DIRTY_VCD;
}

// GXSetVtxAttrFmt: definicion C reemplazada por asm (ver abajo)


static DECOMP_INLINE void SETVAT(u32* vatA, u32* vatB, u32* vatC, GXAttr attr,
                                 GXCompCnt compCnt, GXCompType compType,
                                 u8 shift) {
    switch (attr) {
    case GX_VA_POS: {
        GX_CP_SET_VAT_GROUP0_POS_CNT(*vatA, compCnt);
        GX_CP_SET_VAT_GROUP0_POS_TYPE(*vatA, compType);
        GX_CP_SET_VAT_GROUP0_POS_SHIFT(*vatA, shift);
        break;
    }

    case GX_VA_NRM:
    case GX_VA_NBT: {
        GX_CP_SET_VAT_GROUP0_NRM_TYPE(*vatA, compType);
        if (compCnt == GX_NRM_NBT3) {
            // Probably because the compCnt can only be one bit?
            GX_CP_SET_VAT_GROUP0_NRM_CNT(*vatA, GX_NRM_NBT);
            GX_CP_SET_VAT_GROUP0_NORMALINDEX3(*vatA, TRUE);
        } else {
            GX_CP_SET_VAT_GROUP0_NRM_CNT(*vatA, compCnt);
            GX_CP_SET_VAT_GROUP0_NORMALINDEX3(*vatA, FALSE);
        }
        break;
    }

    case GX_VA_CLR0: {
        GX_CP_SET_VAT_GROUP0_COLORDIFF_CNT(*vatA, compCnt);
        GX_CP_SET_VAT_GROUP0_COLORDIFF_TYPE(*vatA, compType);
        break;
    }

    case GX_VA_CLR1: {
        GX_CP_SET_VAT_GROUP0_COLORSPEC_CNT(*vatA, compCnt);
        GX_CP_SET_VAT_GROUP0_COLORSPEC_TYPE(*vatA, compType);
        break;
    }

    case GX_VA_TEX0: {
        GX_CP_SET_VAT_GROUP0_TXC0_CNT(*vatA, compCnt);
        GX_CP_SET_VAT_GROUP0_TXC0_TYPE(*vatA, compType);
        GX_CP_SET_VAT_GROUP0_TXC0_SHIFT(*vatA, shift);
        break;
    }

    case GX_VA_TEX1: {
        GX_CP_SET_VAT_GROUP1_TXC1_CNT(*vatB, compCnt);
        GX_CP_SET_VAT_GROUP1_TXC1_TYPE(*vatB, compType);
        GX_CP_SET_VAT_GROUP1_TXC1_SHIFT(*vatB, shift);
        break;
    }

    case GX_VA_TEX2: {
        GX_CP_SET_VAT_GROUP1_TXC2_CNT(*vatB, compCnt);
        GX_CP_SET_VAT_GROUP1_TXC2_TYPE(*vatB, compType);
        GX_CP_SET_VAT_GROUP1_TXC2_SHIFT(*vatB, shift);
        break;
    }

    case GX_VA_TEX3: {
        GX_CP_SET_VAT_GROUP1_TXC3_CNT(*vatB, compCnt);
        GX_CP_SET_VAT_GROUP1_TXC3_TYPE(*vatB, compType);
        GX_CP_SET_VAT_GROUP1_TXC3_SHIFT(*vatB, shift);
        break;
    }

    case GX_VA_TEX4: {
        GX_CP_SET_VAT_GROUP1_TXC4_CNT(*vatB, compCnt);
        GX_CP_SET_VAT_GROUP1_TXC4_TYPE(*vatB, compType);
        GX_CP_SET_VAT_GROUP2_TXC4_SHIFT(*vatC, shift);
        break;
    }

    case GX_VA_TEX5: {
        GX_CP_SET_VAT_GROUP2_TXC5_CNT(*vatC, compCnt);
        GX_CP_SET_VAT_GROUP2_TXC5_TYPE(*vatC, compType);
        GX_CP_SET_VAT_GROUP2_TXC5_SHIFT(*vatC, shift);
        break;
    }

    case GX_VA_TEX6: {
        GX_CP_SET_VAT_GROUP2_TXC6_CNT(*vatC, compCnt);
        GX_CP_SET_VAT_GROUP2_TXC6_TYPE(*vatC, compType);
        GX_CP_SET_VAT_GROUP2_TXC6_SHIFT(*vatC, shift);
        break;
    }

    case GX_VA_TEX7: {
        GX_CP_SET_VAT_GROUP2_TXC7_CNT(*vatC, compCnt);
        GX_CP_SET_VAT_GROUP2_TXC7_TYPE(*vatC, compType);
        GX_CP_SET_VAT_GROUP2_TXC7_SHIFT(*vatC, shift);
        break;
    }

    default: {
        break;
    }
    }
}

// GXSetVtxAttrFmtv: definicion C reemplazada por asm (ver abajo)


// __GXSetVAT: definicion C reemplazada por asm (ver abajo)


// GXGetVtxAttrFmt: definicion C reemplazada por asm (ver abajo)


static u8 GetFracForNrm(GXCompType compType) {
    switch (compType) {
    case GX_S8: {
        return 6;
    }

    case GX_S16: {
        return 14;
    }

    case GX_U16:
    default: {
        return 0;
    }
    }
}

void GXGetVtxAttrFmtv(GXVtxFmt fmt, GXVtxAttrFmtList* list) {
    int i;
    GXAttr attr;

    for (i = GX_VA_POS; i <= GX_VA_TEX7; i++, list++) {
        attr = (GXAttr)i;
        list->attr = attr;
        GXGetVtxAttrFmt(fmt, attr, &list->compCnt, &list->compType,
                        &list->shift);
    }

    list->attr = GX_VA_NULL;
}

// GXSetArray: definicion C reemplazada por asm (ver abajo)


// GXInvalidateVtxCache: definicion C reemplazada por asm (ver abajo)


// GXSetTexCoordGen2: definicion C reemplazada por asm (ver abajo)


void GXSetNumTexGens(u8 num) {
    GX_BP_SET_GENMODE_NUMTEX(gxdt->genMode, num);
    gxdt->gxDirtyFlags |= GX_DIRTY_NUM_TEX;
    gxdt->gxDirtyFlags |= GX_DIRTY_GEN_MODE;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 jumptable_8037AB98[];
extern u8 jumptable_8037AC68[];
extern u8 jumptable_8037ACAC[];
extern u8 jumptable_8037ACF0[];
extern u8 jumptable_8037AD34[];
extern u8 jumptable_8037AD50[];

// asm_to_cpp: GXSetVtxDescv
asm void GXSetVtxDescv(const GXVtxDescList* list) {
    nofralloc
    lwz r5, __GXData
    li r7, 0x0
    li r8, 0x1
    lis r4, jumptable_8037AB98@ha
    b lbl_802E0214
lbl_802E0070:
    lwz r6, 0x0(r3)
    lwz r0, 0x4(r3)
    cmplwi r6, 0x19
    bgt lbl_802E0210
    addi r9, r4, jumptable_8037AB98@l
    slwi r6, r6, 2
    lwzx r9, r9, r6
    mtctr r9
    bctr
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 0, 31, 31
    stw r6, 0x14(r5)
    b lbl_802E0210
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 1, 30, 30
    stw r6, 0x14(r5)
    b lbl_802E0210
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 2, 29, 29
    stw r6, 0x14(r5)
    b lbl_802E0210
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 3, 28, 28
    stw r6, 0x14(r5)
    b lbl_802E0210
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 4, 27, 27
    stw r6, 0x14(r5)
    b lbl_802E0210
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 5, 26, 26
    stw r6, 0x14(r5)
    b lbl_802E0210
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 6, 25, 25
    stw r6, 0x14(r5)
    b lbl_802E0210
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 7, 24, 24
    stw r6, 0x14(r5)
    b lbl_802E0210
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 8, 23, 23
    stw r6, 0x14(r5)
    b lbl_802E0210
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 9, 21, 22
    stw r6, 0x14(r5)
    b lbl_802E0210
    cmpwi r0, 0x0
    beq lbl_802E014C
    stb r8, 0x524(r5)
    stb r7, 0x525(r5)
    stw r0, 0x520(r5)
    b lbl_802E0210
lbl_802E014C:
    stb r7, 0x524(r5)
    b lbl_802E0210
    cmpwi r0, 0x0
    beq lbl_802E016C
    stb r8, 0x525(r5)
    stb r7, 0x524(r5)
    stw r0, 0x520(r5)
    b lbl_802E0210
lbl_802E016C:
    stb r7, 0x525(r5)
    b lbl_802E0210
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 13, 17, 18
    stw r6, 0x14(r5)
    b lbl_802E0210
    lwz r6, 0x14(r5)
    rlwimi r6, r0, 15, 15, 16
    stw r6, 0x14(r5)
    b lbl_802E0210
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 0, 30, 31
    stw r6, 0x18(r5)
    b lbl_802E0210
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 2, 28, 29
    stw r6, 0x18(r5)
    b lbl_802E0210
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 4, 26, 27
    stw r6, 0x18(r5)
    b lbl_802E0210
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 6, 24, 25
    stw r6, 0x18(r5)
    b lbl_802E0210
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 8, 22, 23
    stw r6, 0x18(r5)
    b lbl_802E0210
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 10, 20, 21
    stw r6, 0x18(r5)
    b lbl_802E0210
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 12, 18, 19
    stw r6, 0x18(r5)
    b lbl_802E0210
    lwz r6, 0x18(r5)
    rlwimi r6, r0, 14, 16, 17
    stw r6, 0x18(r5)
lbl_802E0210:
    addi r3, r3, 0x8
lbl_802E0214:
    lwz r0, 0x0(r3)
    cmpwi r0, 0xff
    bne lbl_802E0070
    lbz r0, 0x524(r5)
    cmpwi r0, 0x0
    bne lbl_802E0238
    lbz r0, 0x525(r5)
    cmpwi r0, 0x0
    beq lbl_802E024C
lbl_802E0238:
    lwz r0, 0x520(r5)
    lwz r3, 0x14(r5)
    rlwimi r3, r0, 11, 19, 20
    stw r3, 0x14(r5)
    b lbl_802E0258
lbl_802E024C:
    lwz r0, 0x14(r5)
    rlwinm r0, r0, 0, 21, 18
    stw r0, 0x14(r5)
lbl_802E0258:
    lwz r0, 0x5fc(r5)
    ori r0, r0, 0x8
    stw r0, 0x5fc(r5)
    blr
}

// asm_to_cpp: __GXSetVCD
asm void __GXSetVCD(void) {
    nofralloc
    lis r5, 0xcc01
    li r6, 0x8
    stb r6, -0x8000(r5)
    li r4, 0x50
    lwz r3, __GXData
    li r0, 0x60
    stb r4, -0x8000(r5)
    lwz r4, 0x14(r3)
    stw r4, -0x8000(r5)
    stb r6, -0x8000(r5)
    stb r0, -0x8000(r5)
    lwz r0, 0x18(r3)
    stw r0, -0x8000(r5)
    lbz r0, 0x525(r3)
    cmpwi r0, 0x0
    beq lbl_802E02B0
    li r8, 0x2
    b lbl_802E02C0
lbl_802E02B0:
    lbz r4, 0x524(r3)
    neg r0, r4
    or r0, r0, r4
    srwi r8, r0, 31
lbl_802E02C0:
    lwz r5, 0x14(r3)
    lis r6, 0xcc01
    lwz r4, 0x18(r3)
    li r0, 0x10
    extrwi r7, r5, 4, 15
    li r5, 0x1008
    cntlzw r7, r7
    clrlwi r4, r4, 16
    stb r0, -0x8000(r6)
    subfic r7, r7, 0x21
    cntlzw r0, r4
    slwi r4, r8, 2
    subfic r0, r0, 0x21
    srwi r7, r7, 1
    extlwi r0, r0, 28, 3
    stw r5, -0x8000(r6)
    or r5, r0, r7
    or r4, r5, r4
    li r0, 0x1
    stw r4, -0x8000(r6)
    sth r0, 0x2(r3)
    blr
}

// asm_to_cpp: GXSetVtxAttrFmt
asm void GXSetVtxAttrFmt(GXVtxFmt fmt, GXAttr attr, GXCompCnt compCnt,
                     GXCompType compType, u8 shift) {
    nofralloc
    subi r0, r4, 0x9
    lwz r8, __GXData
    cmplwi r0, 0x10
    slwi r4, r3, 2
    add r8, r8, r4
    bgt lbl_802E082C
    lis r4, jumptable_8037AC68@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_8037AC68@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r0, 0x1c(r8)
    rlwimi r0, r5, 0, 31, 31
    rlwimi r0, r6, 1, 28, 30
    rlwimi r0, r7, 4, 23, 27
    stw r0, 0x1c(r8)
    b lbl_802E082C
    lwz r0, 0x1c(r8)
    rlwimi r0, r6, 10, 19, 21
    cmpwi r5, 0x2
    stw r0, 0x1c(r8)
    bne lbl_802E072C
    lwz r0, 0x1c(r8)
    ori r0, r0, 0x200
    oris r0, r0, 0x8000
    stw r0, 0x1c(r8)
    b lbl_802E082C
lbl_802E072C:
    lwz r0, 0x1c(r8)
    rlwimi r0, r5, 9, 22, 22
    clrlwi r0, r0, 1
    stw r0, 0x1c(r8)
    b lbl_802E082C
    lwz r0, 0x1c(r8)
    rlwimi r0, r5, 13, 18, 18
    rlwimi r0, r6, 14, 15, 17
    stw r0, 0x1c(r8)
    b lbl_802E082C
    lwz r0, 0x1c(r8)
    rlwimi r0, r5, 17, 14, 14
    rlwimi r0, r6, 18, 11, 13
    stw r0, 0x1c(r8)
    b lbl_802E082C
    lwz r0, 0x1c(r8)
    rlwimi r0, r5, 21, 10, 10
    rlwimi r0, r6, 22, 7, 9
    rlwimi r0, r7, 25, 2, 6
    stw r0, 0x1c(r8)
    b lbl_802E082C
    lwz r0, 0x3c(r8)
    rlwimi r0, r5, 0, 31, 31
    rlwimi r0, r6, 1, 28, 30
    rlwimi r0, r7, 4, 23, 27
    stw r0, 0x3c(r8)
    b lbl_802E082C
    lwz r0, 0x3c(r8)
    rlwimi r0, r5, 9, 22, 22
    rlwimi r0, r6, 10, 19, 21
    rlwimi r0, r7, 13, 14, 18
    stw r0, 0x3c(r8)
    b lbl_802E082C
    lwz r0, 0x3c(r8)
    rlwimi r0, r5, 18, 13, 13
    rlwimi r0, r6, 19, 10, 12
    rlwimi r0, r7, 22, 5, 9
    stw r0, 0x3c(r8)
    b lbl_802E082C
    lwz r0, 0x3c(r8)
    rlwimi r0, r5, 27, 4, 4
    rlwimi r0, r6, 28, 1, 3
    stw r0, 0x3c(r8)
    lwz r0, 0x5c(r8)
    rlwimi r0, r7, 0, 27, 31
    stw r0, 0x5c(r8)
    b lbl_802E082C
    lwz r0, 0x5c(r8)
    rlwimi r0, r5, 5, 26, 26
    rlwimi r0, r6, 6, 23, 25
    rlwimi r0, r7, 9, 18, 22
    stw r0, 0x5c(r8)
    b lbl_802E082C
    lwz r0, 0x5c(r8)
    rlwimi r0, r5, 14, 17, 17
    rlwimi r0, r6, 15, 14, 16
    rlwimi r0, r7, 18, 9, 13
    stw r0, 0x5c(r8)
    b lbl_802E082C
    lwz r0, 0x5c(r8)
    rlwimi r0, r5, 23, 8, 8
    rlwimi r0, r6, 24, 5, 7
    rlwimi r0, r7, 27, 0, 4
    stw r0, 0x5c(r8)
lbl_802E082C:
    lwz r5, __GXData
    clrlwi r0, r3, 24
    li r3, 0x1
    lwz r4, 0x5fc(r5)
    slw r0, r3, r0
    clrlwi r0, r0, 24
    ori r3, r4, 0x10
    stw r3, 0x5fc(r5)
    lbz r3, 0x5fb(r5)
    or r0, r3, r0
    stb r0, 0x5fb(r5)
    blr
}

// asm_to_cpp: GXSetVtxAttrFmtv
asm void GXSetVtxAttrFmtv(s16 fmt, const GXVtxAttrFmtList* list) {
    nofralloc
    lwz r6, __GXData
    slwi r0, r3, 2
    lis r5, jumptable_8037ACAC@ha
    add r8, r6, r0
    b lbl_802E09E4
lbl_802E0870:
    lwz r6, 0x0(r4)
    lbz r7, 0xc(r4)
    subi r0, r6, 0x9
    lwz r10, 0x8(r4)
    cmplwi r0, 0x10
    lwz r9, 0x4(r4)
    bgt lbl_802E09E0
    addi r6, r5, jumptable_8037ACAC@l
    slwi r0, r0, 2
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lwz r0, 0x1c(r8)
    rlwimi r0, r9, 0, 31, 31
    rlwimi r0, r10, 1, 28, 30
    rlwimi r0, r7, 4, 23, 27
    stw r0, 0x1c(r8)
    b lbl_802E09E0
    lwz r0, 0x1c(r8)
    rlwimi r0, r10, 10, 19, 21
    cmpwi r9, 0x2
    stw r0, 0x1c(r8)
    bne lbl_802E08E0
    lwz r0, 0x1c(r8)
    ori r0, r0, 0x200
    oris r0, r0, 0x8000
    stw r0, 0x1c(r8)
    b lbl_802E09E0
lbl_802E08E0:
    lwz r0, 0x1c(r8)
    rlwimi r0, r9, 9, 22, 22
    clrlwi r0, r0, 1
    stw r0, 0x1c(r8)
    b lbl_802E09E0
    lwz r0, 0x1c(r8)
    rlwimi r0, r9, 13, 18, 18
    rlwimi r0, r10, 14, 15, 17
    stw r0, 0x1c(r8)
    b lbl_802E09E0
    lwz r0, 0x1c(r8)
    rlwimi r0, r9, 17, 14, 14
    rlwimi r0, r10, 18, 11, 13
    stw r0, 0x1c(r8)
    b lbl_802E09E0
    lwz r0, 0x1c(r8)
    rlwimi r0, r9, 21, 10, 10
    rlwimi r0, r10, 22, 7, 9
    rlwimi r0, r7, 25, 2, 6
    stw r0, 0x1c(r8)
    b lbl_802E09E0
    lwz r0, 0x3c(r8)
    rlwimi r0, r9, 0, 31, 31
    rlwimi r0, r10, 1, 28, 30
    rlwimi r0, r7, 4, 23, 27
    stw r0, 0x3c(r8)
    b lbl_802E09E0
    lwz r0, 0x3c(r8)
    rlwimi r0, r9, 9, 22, 22
    rlwimi r0, r10, 10, 19, 21
    rlwimi r0, r7, 13, 14, 18
    stw r0, 0x3c(r8)
    b lbl_802E09E0
    lwz r0, 0x3c(r8)
    rlwimi r0, r9, 18, 13, 13
    rlwimi r0, r10, 19, 10, 12
    rlwimi r0, r7, 22, 5, 9
    stw r0, 0x3c(r8)
    b lbl_802E09E0
    lwz r0, 0x3c(r8)
    rlwimi r0, r9, 27, 4, 4
    rlwimi r0, r10, 28, 1, 3
    stw r0, 0x3c(r8)
    lwz r0, 0x5c(r8)
    rlwimi r0, r7, 0, 27, 31
    stw r0, 0x5c(r8)
    b lbl_802E09E0
    lwz r0, 0x5c(r8)
    rlwimi r0, r9, 5, 26, 26
    rlwimi r0, r10, 6, 23, 25
    rlwimi r0, r7, 9, 18, 22
    stw r0, 0x5c(r8)
    b lbl_802E09E0
    lwz r0, 0x5c(r8)
    rlwimi r0, r9, 14, 17, 17
    rlwimi r0, r10, 15, 14, 16
    rlwimi r0, r7, 18, 9, 13
    stw r0, 0x5c(r8)
    b lbl_802E09E0
    lwz r0, 0x5c(r8)
    rlwimi r0, r9, 23, 8, 8
    rlwimi r0, r10, 24, 5, 7
    rlwimi r0, r7, 27, 0, 4
    stw r0, 0x5c(r8)
lbl_802E09E0:
    addi r4, r4, 0x10
lbl_802E09E4:
    lwz r0, 0x0(r4)
    cmpwi r0, 0xff
    bne lbl_802E0870
    lwz r5, __GXData
    clrlwi r0, r3, 24
    li r3, 0x1
    lwz r4, 0x5fc(r5)
    slw r0, r3, r0
    clrlwi r0, r0, 24
    ori r3, r4, 0x10
    stw r3, 0x5fc(r5)
    lbz r3, 0x5fb(r5)
    or r0, r3, r0
    stb r0, 0x5fb(r5)
    blr
}

// asm_to_cpp: __GXSetVAT
asm void __GXSetVAT(void) {
    nofralloc
    lwz r8, __GXData
    li r9, 0x0
    li r6, 0x8
    lis r5, 0xcc01
    lbz r10, 0x5fb(r8)
    mr r7, r8
lbl_802E0A38:
    clrlwi. r0, r10, 31
    beq lbl_802E0A7C
    stb r6, -0x8000(r5)
    ori r4, r9, 0x70
    ori r3, r9, 0x80
    ori r0, r9, 0x90
    stb r4, -0x8000(r5)
    lwz r4, 0x1c(r7)
    stw r4, -0x8000(r5)
    stb r6, -0x8000(r5)
    stb r3, -0x8000(r5)
    lwz r3, 0x3c(r7)
    stw r3, -0x8000(r5)
    stb r6, -0x8000(r5)
    stb r0, -0x8000(r5)
    lwz r0, 0x5c(r7)
    stw r0, -0x8000(r5)
lbl_802E0A7C:
    srwi. r10, r10, 1
    addi r9, r9, 0x1
    addi r7, r7, 0x4
    bne lbl_802E0A38
    li r0, 0x0
    lis r3, 0xcc01
    stb r0, -0x8000(r3)
    stb r0, 0x5fb(r8)
    blr
}

// asm_to_cpp: GXGetVtxAttrFmt
asm void GXGetVtxAttrFmt(GXVtxFmt fmt, GXAttr attr, GXCompCnt* compCnt,
                     GXCompType* compType, u8* shift) {
    nofralloc
    subi r0, r4, 0x9
    lwz r4, __GXData
    cmplwi r0, 0x10
    slwi r3, r3, 2
    add r3, r4, r3
    bgt lbl_802E0CF4
    lis r4, jumptable_8037ACF0@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_8037ACF0@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r0, 0x1c(r3)
    clrlwi r0, r0, 31
    stw r0, 0x0(r5)
    lwz r0, 0x1c(r3)
    extrwi r0, r0, 3, 28
    stw r0, 0x0(r6)
    lwz r0, 0x1c(r3)
    extrwi r0, r0, 5, 23
    stb r0, 0x0(r7)
    blr
    lwz r0, 0x1c(r3)
    extrwi r0, r0, 1, 22
    cmpwi r0, 0x1
    stw r0, 0x0(r5)
    bne lbl_802E0B20
    lwz r0, 0x1c(r3)
    srwi. r0, r0, 31
    beq lbl_802E0B20
    li r0, 0x2
    stw r0, 0x0(r5)
lbl_802E0B20:
    lwz r0, 0x1c(r3)
    extrwi r0, r0, 3, 19
    cmpwi r0, 0x2
    stw r0, 0x0(r6)
    beq lbl_802E0B60
    bge lbl_802E0B44
    cmpwi r0, 0x1
    bge lbl_802E0B50
    b lbl_802E0B60
lbl_802E0B44:
    cmpwi r0, 0x4
    bge lbl_802E0B60
    b lbl_802E0B58
lbl_802E0B50:
    li r0, 0x6
    b lbl_802E0B64
lbl_802E0B58:
    li r0, 0xe
    b lbl_802E0B64
lbl_802E0B60:
    li r0, 0x0
lbl_802E0B64:
    stb r0, 0x0(r7)
    blr
    lwz r4, 0x1c(r3)
    li r0, 0x0
    extrwi r4, r4, 1, 18
    stw r4, 0x0(r5)
    lwz r3, 0x1c(r3)
    extrwi r3, r3, 3, 15
    stw r3, 0x0(r6)
    stb r0, 0x0(r7)
    blr
    lwz r4, 0x1c(r3)
    li r0, 0x0
    extrwi r4, r4, 1, 14
    stw r4, 0x0(r5)
    lwz r3, 0x1c(r3)
    extrwi r3, r3, 3, 11
    stw r3, 0x0(r6)
    stb r0, 0x0(r7)
    blr
    lwz r0, 0x1c(r3)
    extrwi r0, r0, 1, 10
    stw r0, 0x0(r5)
    lwz r0, 0x1c(r3)
    extrwi r0, r0, 3, 7
    stw r0, 0x0(r6)
    lwz r0, 0x1c(r3)
    extrwi r0, r0, 5, 2
    stb r0, 0x0(r7)
    blr
    lwz r0, 0x3c(r3)
    clrlwi r0, r0, 31
    stw r0, 0x0(r5)
    lwz r0, 0x3c(r3)
    extrwi r0, r0, 3, 28
    stw r0, 0x0(r6)
    lwz r0, 0x3c(r3)
    extrwi r0, r0, 5, 23
    stb r0, 0x0(r7)
    blr
    lwz r0, 0x3c(r3)
    extrwi r0, r0, 1, 22
    stw r0, 0x0(r5)
    lwz r0, 0x3c(r3)
    extrwi r0, r0, 3, 19
    stw r0, 0x0(r6)
    lwz r0, 0x3c(r3)
    extrwi r0, r0, 5, 14
    stb r0, 0x0(r7)
    blr
    lwz r0, 0x3c(r3)
    extrwi r0, r0, 1, 13
    stw r0, 0x0(r5)
    lwz r0, 0x3c(r3)
    extrwi r0, r0, 3, 10
    stw r0, 0x0(r6)
    lwz r0, 0x3c(r3)
    extrwi r0, r0, 5, 5
    stb r0, 0x0(r7)
    blr
    lwz r0, 0x3c(r3)
    extrwi r0, r0, 1, 4
    stw r0, 0x0(r5)
    lwz r0, 0x3c(r3)
    extrwi r0, r0, 3, 1
    stw r0, 0x0(r6)
    lwz r0, 0x5c(r3)
    clrlwi r0, r0, 27
    stb r0, 0x0(r7)
    blr
    lwz r0, 0x5c(r3)
    extrwi r0, r0, 1, 26
    stw r0, 0x0(r5)
    lwz r0, 0x5c(r3)
    extrwi r0, r0, 3, 23
    stw r0, 0x0(r6)
    lwz r0, 0x5c(r3)
    extrwi r0, r0, 5, 18
    stb r0, 0x0(r7)
    blr
    lwz r0, 0x5c(r3)
    extrwi r0, r0, 1, 17
    stw r0, 0x0(r5)
    lwz r0, 0x5c(r3)
    extrwi r0, r0, 3, 14
    stw r0, 0x0(r6)
    lwz r0, 0x5c(r3)
    extrwi r0, r0, 5, 9
    stb r0, 0x0(r7)
    blr
    lwz r0, 0x5c(r3)
    extrwi r0, r0, 1, 8
    stw r0, 0x0(r5)
    lwz r0, 0x5c(r3)
    extrwi r0, r0, 3, 5
    stw r0, 0x0(r6)
    lwz r0, 0x5c(r3)
    srwi r0, r0, 27
    stb r0, 0x0(r7)
    blr
lbl_802E0CF4:
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x0(r5)
    stw r0, 0x0(r6)
    stb r0, 0x0(r7)
    blr
}

// asm_to_cpp: GXSetArray
asm void GXSetArray(GXAttr attr, const void* base, u8 stride) {
    nofralloc
    cmpwi r3, 0x19
    bne lbl_802E0D8C
    li r3, 0xa
lbl_802E0D8C:
    lis r6, 0xcc01
    li r7, 0x8
    subi r8, r3, 0x9
    stb r7, -0x8000(r6)
    ori r0, r8, 0xa0
    clrlwi r3, r4, 2
    stb r0, -0x8000(r6)
    ori r0, r8, 0xb0
    stw r3, -0x8000(r6)
    stb r7, -0x8000(r6)
    stb r0, -0x8000(r6)
    stw r5, -0x8000(r6)
    blr
}

#pragma schedule off
void GXInvalidateVtxCache(void) {
    WGPIPE.c = 0x48;
}
#pragma schedule reset

// asm_to_cpp: GXSetTexCoordGen2
asm void GXSetTexCoordGen2(GXTexCoordID id, GXTexGenType type, GXTexGenSrc src,
                       u32 texMtxIdx, GXBool normalize, u32 dualTexMtxIdx) {
    nofralloc
    cmplwi r5, 0x14
    li r11, 0x0
    li r12, 0x0
    li r10, 0x5
    bgt lbl_802E0E78
    lis r9, jumptable_8037AD50@ha
    slwi r0, r5, 2
    addi r9, r9, jumptable_8037AD50@l
    lwzx r9, r9, r0
    mtctr r9
    bctr
    li r10, 0x0
    li r12, 0x1
    b lbl_802E0E78
    li r10, 0x1
    li r12, 0x1
    b lbl_802E0E78
    li r10, 0x3
    li r12, 0x1
    b lbl_802E0E78
    li r10, 0x4
    li r12, 0x1
    b lbl_802E0E78
    li r10, 0x2
    b lbl_802E0E78
    li r10, 0x2
    b lbl_802E0E78
    li r10, 0x5
    b lbl_802E0E78
    li r10, 0x6
    b lbl_802E0E78
    li r10, 0x7
    b lbl_802E0E78
    li r10, 0x8
    b lbl_802E0E78
    li r10, 0x9
    b lbl_802E0E78
    li r10, 0xa
    b lbl_802E0E78
    li r10, 0xb
    b lbl_802E0E78
    li r10, 0xc
lbl_802E0E78:
    cmpwi r4, 0x1
    beq lbl_802E0EA0
    bge lbl_802E0E90
    cmpwi r4, 0x0
    bge lbl_802E0EB0
    b lbl_802E0F18
lbl_802E0E90:
    cmpwi r4, 0xa
    beq lbl_802E0EEC
    bge lbl_802E0F18
    b lbl_802E0EC4
lbl_802E0EA0:
    li r11, 0x0
    rlwimi r11, r12, 2, 29, 29
    rlwimi r11, r10, 7, 20, 24
    b lbl_802E0F18
lbl_802E0EB0:
    li r0, 0x0
    ori r11, r0, 0x2
    rlwimi r11, r12, 2, 29, 29
    rlwimi r11, r10, 7, 20, 24
    b lbl_802E0F18
lbl_802E0EC4:
    li r9, 0x1
    subi r5, r5, 0xc
    li r11, 0x0
    subi r0, r4, 0x2
    rlwimi r11, r12, 2, 29, 29
    rlwimi r11, r9, 4, 25, 27
    rlwimi r11, r10, 7, 20, 24
    rlwimi r11, r5, 12, 17, 19
    rlwimi r11, r0, 15, 14, 16
    b lbl_802E0F18
lbl_802E0EEC:
    cmpwi r5, 0x13
    li r11, 0x0
    rlwimi r11, r12, 2, 29, 29
    bne lbl_802E0F08
    li r0, 0x2
    rlwimi r11, r0, 4, 25, 27
    b lbl_802E0F10
lbl_802E0F08:
    li r0, 0x3
    rlwimi r11, r0, 4, 25, 27
lbl_802E0F10:
    li r0, 0x2
    rlwimi r11, r0, 7, 20, 24
lbl_802E0F18:
    lwz r10, __GXData
    slwi r9, r3, 2
    subi r0, r8, 0x40
    li r4, 0x0
    add r8, r10, r9
    lis r5, 0x1
    stw r11, 0xc8(r8)
    rlwimi r4, r0, 0, 26, 31
    slw r0, r5, r3
    cmplwi r3, 0x6
    lwz r5, 0x5fc(r10)
    rlwimi r4, r7, 8, 23, 23
    or r0, r5, r0
    stw r0, 0x5fc(r10)
    stw r4, 0xe8(r8)
    bgt lbl_802E0FDC
    lis r3, jumptable_8037AD34@ha
    addi r3, r3, jumptable_8037AD34@l
    lwzx r3, r3, r9
    mtctr r3
    bctr
    lwz r0, 0x80(r10)
    rlwimi r0, r6, 6, 20, 25
    stw r0, 0x80(r10)
    b lbl_802E0FE8
    lwz r0, 0x80(r10)
    rlwimi r0, r6, 12, 14, 19
    stw r0, 0x80(r10)
    b lbl_802E0FE8
    lwz r0, 0x80(r10)
    rlwimi r0, r6, 18, 8, 13
    stw r0, 0x80(r10)
    b lbl_802E0FE8
    lwz r0, 0x80(r10)
    rlwimi r0, r6, 24, 2, 7
    stw r0, 0x80(r10)
    b lbl_802E0FE8
    lwz r0, 0x84(r10)
    rlwimi r0, r6, 0, 26, 31
    stw r0, 0x84(r10)
    b lbl_802E0FE8
    lwz r0, 0x84(r10)
    rlwimi r0, r6, 6, 20, 25
    stw r0, 0x84(r10)
    b lbl_802E0FE8
    lwz r0, 0x84(r10)
    rlwimi r0, r6, 12, 14, 19
    stw r0, 0x84(r10)
    b lbl_802E0FE8
lbl_802E0FDC:
    lwz r0, 0x84(r10)
    rlwimi r0, r6, 18, 8, 13
    stw r0, 0x84(r10)
lbl_802E0FE8:
    lwz r0, 0x5fc(r10)
    oris r0, r0, 0x400
    stw r0, 0x5fc(r10)
    blr
}
