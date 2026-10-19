#include <revolution/GX.h>

inline void __GXSetAmbMat(u32 dirtyFlags) {
    if (dirtyFlags & GX_DIRTY_AMB_COLOR0) {
        GX_XF_LOAD_REG(GX_XF_REG_AMBIENT0, *(u32*)&gxdt->ambColors[0]);
    }

    if (dirtyFlags & GX_DIRTY_AMB_COLOR1) {
        GX_XF_LOAD_REG(GX_XF_REG_AMBIENT1, *(u32*)&gxdt->ambColors[1]);
    }

    if (dirtyFlags & GX_DIRTY_MAT_COLOR0) {
        GX_XF_LOAD_REG(GX_XF_REG_MATERIAL0, *(u32*)&gxdt->matColors[0]);
    }

    if (dirtyFlags & GX_DIRTY_MAT_COLOR1) {
        GX_XF_LOAD_REG(GX_XF_REG_MATERIAL1, *(u32*)&gxdt->matColors[1]);
    }
}

inline void __GXSetLightChan(volatile s32 dirtyFlags) {
    int i;
    u32 bits;
    u32 addr = GX_XF_REG_COLOR0CNTRL;

    if (dirtyFlags & GX_DIRTY_NUM_COLORS) {
        u32 colors = GX_BP_GET_GENMODE_NUMCOLORS(gxdt->genMode);
        GX_XF_LOAD_REG(GX_XF_REG_NUMCOLORS, colors);
    }

    bits = dirtyFlags;
    bits = (bits >> 12) & 0xF;
    i = 0;
    for (; bits != 0; i++, addr++, bits >>= 1) {
        if (bits & 1) {
            GX_XF_LOAD_REG(addr, gxdt->colorControl[i]);
        }
    }
}

inline void __GXSetTexGen(volatile s32 dirtyFlags) {
    int i;
    u32 bits;
    u32 taddr = GX_XF_REG_TEX0;
    u32 dtaddr;

    if (dirtyFlags & GX_DIRTY_NUM_TEX) {
        u32 gens = GX_BP_GET_GENMODE_NUMTEX(gxdt->genMode);
        GX_XF_LOAD_REG(GX_XF_REG_NUMTEX, gens);
    }

    bits = dirtyFlags;
    bits = (bits >> 16) & 0xFF;
    i = 0;
    for (; bits != 0; taddr++, i++, bits >>= 1) {
        dtaddr = taddr + GX_XF_REG_DUALTEX0 - GX_XF_REG_TEX0;
        if (bits & 1) {
            GX_XF_LOAD_REG(taddr, gxdt->texRegs[i]);
            GX_XF_LOAD_REG(dtaddr, gxdt->dualTexRegs[i]);
        }
    }
}

void __GXSetDirtyState(void) {
    u32 tempFlags;
    u32 dirtyFlags = gxdt->gxDirtyFlags;

    if (dirtyFlags & GX_DIRTY_SU_TEX) {
        __GXSetSUTexRegs();
    }

    if (dirtyFlags & GX_DIRTY_BP_MASK) {
        __GXUpdateBPMask();
    }

    if (dirtyFlags & GX_DIRTY_GEN_MODE) {
        __GXSetGenMode();
    }

    if (dirtyFlags & GX_DIRTY_VCD) {
        __GXSetVCD();
    }

    if (dirtyFlags & GX_DIRTY_VAT) {
        __GXSetVAT();
    }

    if (dirtyFlags & (GX_DIRTY_VCD | GX_DIRTY_VAT)) {
        __GXCalculateVLim();
    }

    dirtyFlags &= ~0xFF;
    if (dirtyFlags) {
        tempFlags = dirtyFlags & GX_AMB_MAT_MASK;
        if (tempFlags != 0) {
            __GXSetAmbMat(tempFlags);
        }

        tempFlags = dirtyFlags & GX_LIGHT_CHAN_MASK;
        if (tempFlags != 0) {
            __GXSetLightChan(tempFlags);
        }

        tempFlags = dirtyFlags & GX_TEX_GEN_MASK;
        if (tempFlags != 0) {
            __GXSetTexGen(tempFlags);
        }

        tempFlags = dirtyFlags & GX_DIRTY_MTX_IDX;
        if (tempFlags != 0) {
            __GXSetMatrixIndex(GX_VA_PNMTXIDX);
            __GXSetMatrixIndex(GX_VA_TEX4MTXIDX);
        }

        tempFlags = dirtyFlags & GX_DIRTY_VIEWPORT;
        if (tempFlags != 0) {
            __GXSetViewport();
        }

        tempFlags = dirtyFlags & GX_DIRTY_PROJECTION;
        if (tempFlags != 0) {
            __GXSetProjection();
        }

        gxdt->lastWriteWasXF = TRUE;
    }

    gxdt->gxDirtyFlags = 0;
}

// GXBegin: definicion C reemplazada por asm (ver abajo)


void __GXSendFlushPrim(void) {
    u32 i;
    u32 sz = gxdt->SHORT_0x4 * gxdt->vlim;

    WGPIPE.uc = GX_TRIANGLESTRIP;
    WGPIPE.us = gxdt->SHORT_0x4;

    for (i = 0; i < sz; i += 4) {
        WGPIPE.i = 0;
    }

    gxdt->lastWriteWasXF = TRUE;
}

void GXSetLineWidth(u8 width, u32 offset) {
    GX_BP_SET_LINEPTWIDTH_LINESZ(gxdt->linePtWidth, width);
    GX_BP_SET_LINEPTWIDTH_LINEOFS(gxdt->linePtWidth, offset);
    GX_BP_LOAD_REG(gxdt->linePtWidth);
    gxdt->lastWriteWasXF = FALSE;
}

//unused
void GXGetLineWidth(){
}

void GXSetPointSize(u8 size, u32 offset) {
    GX_BP_SET_LINEPTWIDTH_POINTSZ(gxdt->linePtWidth, size);
    GX_BP_SET_LINEPTWIDTH_POINTOFS(gxdt->linePtWidth, offset);
    GX_BP_LOAD_REG(gxdt->linePtWidth);
    gxdt->lastWriteWasXF = FALSE;
}

//unused
void GXGetPointSize(){
}

void GXEnableTexOffsets(GXTexCoordID id, GXBool lineOfs, GXBool pointOfs) {
    GX_BP_SET_SU_SIZE_USELINEOFS(gxdt->txcRegs[id], lineOfs);
    GX_BP_SET_SU_SIZE_USEPOINTOFS(gxdt->txcRegs[id], pointOfs);
    GX_BP_LOAD_REG(gxdt->txcRegs[id]);
    gxdt->lastWriteWasXF = FALSE;
}

void GXSetCullMode(GXCullMode mode) {
    // Swap bits to get hardware representation
    GXCullMode bits = (GXCullMode)(mode << 1 & 2 | mode >> 1 & 1);
    GX_BP_SET_GENMODE_CULLMODE(gxdt->genMode, bits);
    gxdt->gxDirtyFlags |= GX_DIRTY_GEN_MODE;
}

//unused
void GXGetCullMode(GXCullMode* out) {
    // TODO(kiwi) Fakematch? Should use GX_BP_GET_GENMODE_CULLMODE if possible
    s32 bits = 0;
    bits |= (s32)(gxdt->genMode >> (13 + 1) & 2) >> 1;
    bits |= (s32)(gxdt->genMode >> 13 & 2);
    *out = (GXCullMode)bits;
}

void GXSetCoPlanar(GXBool coplanar) {
    u32 reg;

    GX_BP_SET_GENMODE_COPLANAR(gxdt->genMode, coplanar);

    // TODO(kiwi) GX_BP_SET_OPCODE doesn't work.
    // Did they really write this out?
    reg = 0;
    reg |= GX_BP_REG_SSMASK << 24;
    reg |= 0x80000;

    GX_BP_LOAD_REG(reg);
    GX_BP_LOAD_REG(gxdt->genMode);
    gxdt->lastWriteWasXF = FALSE;
}

void __GXSetGenMode(void) {
    GX_BP_LOAD_REG(gxdt->genMode);
    gxdt->lastWriteWasXF = FALSE;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void fn_802E1844();
extern void fn_802E1C08();
extern void fn_802E1D14();
extern void fn_802E4374();

// asm_to_cpp: fn_802E1844
asm void fn_802E1844() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, __GXData
    stw r30, 0x8(r1)
    lwz r30, 0x5fc(r31)
    clrlwi. r0, r30, 31
    beq lbl_802E186C
    bl __GXSetSUTexRegs
lbl_802E186C:
    rlwinm. r0, r30, 0, 30, 30
    beq lbl_802E1878
    bl fn_802E4374
lbl_802E1878:
    rlwinm. r0, r30, 0, 29, 29
    beq lbl_802E18A0
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r5, __GXData
    lwz r3, 0x254(r5)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r5)
lbl_802E18A0:
    rlwinm. r0, r30, 0, 28, 28
    beq lbl_802E18AC
    bl __GXSetVCD
lbl_802E18AC:
    rlwinm. r0, r30, 0, 27, 27
    beq lbl_802E18B8
    bl __GXSetVAT
lbl_802E18B8:
    rlwinm. r0, r30, 0, 27, 28
    beq lbl_802E18C4
    bl __GXCalculateVLim
lbl_802E18C4:
    clrrwi. r30, r30, 8
    beq lbl_802E1A9C
    rlwinm. r4, r30, 0, 20, 23
    beq lbl_802E1964
    rlwinm. r0, r4, 0, 23, 23
    beq lbl_802E18F8
    lis r3, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r3)
    li r0, 0x100a
    stw r0, -0x8000(r3)
    lwz r0, 0xa8(r31)
    stw r0, -0x8000(r3)
lbl_802E18F8:
    rlwinm. r0, r4, 0, 22, 22
    beq lbl_802E191C
    lis r3, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r3)
    li r0, 0x100b
    stw r0, -0x8000(r3)
    lwz r0, 0xac(r31)
    stw r0, -0x8000(r3)
lbl_802E191C:
    rlwinm. r0, r4, 0, 21, 21
    beq lbl_802E1940
    lis r3, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r3)
    li r0, 0x100c
    stw r0, -0x8000(r3)
    lwz r0, 0xb0(r31)
    stw r0, -0x8000(r3)
lbl_802E1940:
    rlwinm. r0, r4, 0, 20, 20
    beq lbl_802E1964
    lis r3, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r3)
    li r0, 0x100d
    stw r0, -0x8000(r3)
    lwz r0, 0xb4(r31)
    stw r0, -0x8000(r3)
lbl_802E1964:
    rlwinm r7, r30, 0, 7, 7
    rlwimi. r7, r30, 0, 16, 19
    beq lbl_802E19DC
    rlwinm. r0, r7, 0, 7, 7
    li r6, 0x100e
    beq lbl_802E199C
    lwz r5, 0x254(r31)
    lis r3, 0xcc01
    li r4, 0x10
    li r0, 0x1009
    stb r4, -0x8000(r3)
    extrwi r4, r5, 3, 25
    stw r0, -0x8000(r3)
    stw r4, -0x8000(r3)
lbl_802E199C:
    mr r5, r31
    extrwi r7, r7, 4, 16
    li r4, 0x10
    lis r3, 0xcc01
    b lbl_802E19D4
lbl_802E19B0:
    clrlwi. r0, r7, 31
    beq lbl_802E19C8
    stb r4, -0x8000(r3)
    stw r6, -0x8000(r3)
    lwz r0, 0xb8(r5)
    stw r0, -0x8000(r3)
lbl_802E19C8:
    srwi r7, r7, 1
    addi r5, r5, 0x4
    addi r6, r6, 0x1
lbl_802E19D4:
    cmpwi r7, 0x0
    bne lbl_802E19B0
lbl_802E19DC:
    andis. r8, r30, 0x2ff
    beq lbl_802E1A64
    rlwinm. r0, r8, 0, 6, 6
    li r6, 0x1040
    beq lbl_802E1A10
    lwz r5, 0x254(r31)
    lis r3, 0xcc01
    li r4, 0x10
    li r0, 0x103f
    stb r4, -0x8000(r3)
    clrlwi r4, r5, 28
    stw r0, -0x8000(r3)
    stw r4, -0x8000(r3)
lbl_802E1A10:
    mr r7, r31
    extrwi r8, r8, 8, 8
    li r4, 0x10
    lis r3, 0xcc01
    b lbl_802E1A5C
lbl_802E1A24:
    clrlwi. r0, r8, 31
    addi r5, r6, 0x10
    beq lbl_802E1A50
    stb r4, -0x8000(r3)
    stw r6, -0x8000(r3)
    lwz r0, 0xc8(r7)
    stw r0, -0x8000(r3)
    stb r4, -0x8000(r3)
    stw r5, -0x8000(r3)
    lwz r0, 0xe8(r7)
    stw r0, -0x8000(r3)
lbl_802E1A50:
    srwi r8, r8, 1
    addi r6, r6, 0x1
    addi r7, r7, 0x4
lbl_802E1A5C:
    cmpwi r8, 0x0
    bne lbl_802E1A24
lbl_802E1A64:
    rlwinm. r0, r30, 0, 5, 5
    beq lbl_802E1A7C
    li r3, 0x0
    bl __GXSetMatrixIndex
    li r3, 0x5
    bl __GXSetMatrixIndex
lbl_802E1A7C:
    rlwinm. r0, r30, 0, 3, 3
    beq lbl_802E1A88
    bl __GXSetViewport
lbl_802E1A88:
    rlwinm. r0, r30, 0, 4, 4
    beq lbl_802E1A94
    bl __GXSetProjection
lbl_802E1A94:
    li r0, 0x1
    sth r0, 0x2(r31)
lbl_802E1A9C:
    li r0, 0x0
    stw r0, 0x5fc(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: GXBegin
asm void GXBegin(GXPrimitive prim, GXVtxFmt fmt, u16 verts) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r31, __GXData
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x5fc(r31)
    cmpwi r0, 0x0
    beq lbl_802E1AF8
    bl fn_802E1844
lbl_802E1AF8:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_802E1BD8
    lwz r7, __GXData
    lis r3, 0xcc01
    li r0, 0x98
    li r6, 0x0
    lhz r5, 0x4(r7)
    lhz r4, 0x6(r7)
    stb r0, -0x8000(r3)
    mullw. r5, r5, r4
    lhz r0, 0x4(r7)
    sth r0, -0x8000(r3)
    beq lbl_802E1BD0
    addi r3, r5, 0x3
    subi r7, r5, 0x20
    srwi r0, r3, 2
    cmplwi r0, 0x8
    ble lbl_802E1BA8
    cmplwi r3, 0x3
    li r0, 0x0
    blt lbl_802E1B5C
    cmplw r5, r3
    bgt lbl_802E1B5C
    li r0, 0x1
lbl_802E1B5C:
    cmpwi r0, 0x0
    beq lbl_802E1BA8
    addi r0, r7, 0x1f
    li r4, 0x0
    srwi r0, r0, 5
    lis r3, 0xcc01
    mtctr r0
    cmplwi r7, 0x0
    ble lbl_802E1BA8
lbl_802E1B80:
    stw r4, -0x8000(r3)
    addi r6, r6, 0x20
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    bdnz lbl_802E1B80
lbl_802E1BA8:
    addi r0, r5, 0x3
    li r4, 0x0
    subf r0, r6, r0
    lis r3, 0xcc01
    srwi r0, r0, 2
    mtctr r0
    cmplw r6, r5
    bge lbl_802E1BD0
lbl_802E1BC8:
    stw r4, -0x8000(r3)
    bdnz lbl_802E1BC8
lbl_802E1BD0:
    li r0, 0x1
    sth r0, 0x2(r31)
lbl_802E1BD8:
    lis r3, 0xcc01
    or r0, r29, r28
    stb r0, -0x8000(r3)
    sth r30, -0x8000(r3)
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_802E1C08
asm void fn_802E1C08() {
    nofralloc
    lwz r6, __GXData
    lis r3, 0xcc01
    li r0, 0x98
    li r7, 0x0
    lhz r5, 0x4(r6)
    lhz r4, 0x6(r6)
    stb r0, -0x8000(r3)
    mullw. r8, r5, r4
    lhz r0, 0x4(r6)
    sth r0, -0x8000(r3)
    beq lbl_802E1CD4
    addi r3, r8, 0x3
    subi r5, r8, 0x20
    srwi r0, r3, 2
    cmplwi r0, 0x8
    ble lbl_802E1CAC
    cmplwi r3, 0x3
    li r0, 0x0
    blt lbl_802E1C60
    cmplw r8, r3
    bgt lbl_802E1C60
    li r0, 0x1
lbl_802E1C60:
    cmpwi r0, 0x0
    beq lbl_802E1CAC
    addi r0, r5, 0x1f
    li r4, 0x0
    srwi r0, r0, 5
    lis r3, 0xcc01
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_802E1CAC
lbl_802E1C84:
    stw r4, -0x8000(r3)
    addi r7, r7, 0x20
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    bdnz lbl_802E1C84
lbl_802E1CAC:
    addi r0, r8, 0x3
    li r4, 0x0
    subf r0, r7, r0
    lis r3, 0xcc01
    srwi r0, r0, 2
    mtctr r0
    cmplw r7, r8
    bge lbl_802E1CD4
lbl_802E1CCC:
    stw r4, -0x8000(r3)
    bdnz lbl_802E1CCC
lbl_802E1CD4:
    li r0, 0x1
    sth r0, 0x2(r6)
    blr
}

// asm_to_cpp: fn_802E1D14
asm void fn_802E1D14() {
    nofralloc
    lwz r5, __GXData
    lwz r0, 0x7c(r5)
    stb r0, 0x0(r3)
    lwz r0, 0x7c(r5)
    extrwi r0, r0, 3, 13
    stw r0, 0x0(r4)
    blr
}
