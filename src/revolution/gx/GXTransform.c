#include <revolution/GX.h>

// TODO(kiwi) Fake inline
inline void LoadProjPS(register f32* dst) {
    register f32 ps_0, ps_1, ps_2;
    register GXData* src;

    ASM_VOLATILE (
        lwz src, gxdt
        psq_l  ps_0,  0  + GXData.proj(src), 0, 0
        psq_l  ps_1,  8  + GXData.proj(src), 0, 0
        psq_l  ps_2,  16 + GXData.proj(src), 0, 0
        psq_st ps_0,  0(dst),                0, 0
        psq_st ps_1,  8(dst),                0, 0
        psq_st ps_2, 16(dst),                0, 0
    )
}

inline void WriteProjPS(register volatile void* dst, register const f32* src) {
    register f32 ps_0, ps_1, ps_2;

    ASM_VOLATILE (
        psq_l  ps_0,  0(src), 0, 0
        psq_l  ps_1,  8(src), 0, 0
        psq_l  ps_2, 16(src), 0, 0
        psq_st ps_0,  0(dst), 0, 0
        psq_st ps_1,  0(dst), 0, 0
        psq_st ps_2,  0(dst), 0, 0
    )
}

inline void Copy6Floats(register f32* dst, register const f32* src) {
    register f32 ps_0, ps_1, ps_2;

    ASM_VOLATILE (
        psq_l  ps_0,  0(src), 0, 0
        psq_l  ps_1,  8(src), 0, 0
        psq_l  ps_2, 16(src), 0, 0
        psq_st ps_0,  0(dst), 0, 0
        psq_st ps_1,  8(dst), 0, 0
        psq_st ps_2, 16(dst), 0, 0
    )
}

// __GXSetProjection: definicion C reemplazada por asm (ver abajo)


// GXSetProjection: definicion C reemplazada por asm (ver abajo)


void GXSetProjectionv(const f32 proj[GX_PROJECTION_SZ]) {
    gxdt->projType = proj[0] == 0.0f ? GX_PERSPECTIVE : GX_ORTHOGRAPHIC;
    Copy6Floats(gxdt->proj, proj + 1);
    gxdt->gxDirtyFlags |= GX_DIRTY_PROJECTION;
}

//unused
void GXGetProjectionv(f32 proj[GX_PROJECTION_SZ]) {
    proj[0] = gxdt->projType != GX_PERSPECTIVE ? 1.0f : 0.0f;
    LoadProjPS(proj + 1);
}

inline void WriteMTXPS4x3(register volatile void* dst, register const Mtx src) {
    register f32 ps_0, ps_1, ps_2, ps_3, ps_4, ps_5;

    ASM_VOLATILE (
        psq_l  ps_0,  0(src), 0, 0
        psq_l  ps_1,  8(src), 0, 0
        psq_l  ps_2, 16(src), 0, 0
        psq_l  ps_3, 24(src), 0, 0
        psq_l  ps_4, 32(src), 0, 0
        psq_l  ps_5, 40(src), 0, 0

        psq_st ps_0, 0(dst),  0, 0
        psq_st ps_1, 0(dst),  0, 0
        psq_st ps_2, 0(dst),  0, 0
        psq_st ps_3, 0(dst),  0, 0
        psq_st ps_4, 0(dst),  0, 0
        psq_st ps_5, 0(dst),  0, 0
    )
}

inline void WriteMTXPS3x3(register volatile void* dst, register const Mtx src) {
    register f32 ps_0, ps_1, ps_2, ps_3, ps_4, ps_5;

    ASM_VOLATILE (
        psq_l  ps_0,  0(src), 0, 0
        lfs    ps_1,  8(src)
        psq_l  ps_2, 16(src), 0, 0
        lfs    ps_3, 24(src)
        psq_l  ps_4, 32(src), 0, 0
        lfs    ps_5, 40(src)

        psq_st ps_0, 0(dst),  0, 0
        stfs   ps_1, 0(dst)
        psq_st ps_2, 0(dst),  0, 0
        stfs   ps_3, 0(dst)
        psq_st ps_4, 0(dst),  0, 0
        stfs   ps_5, 0(dst)
    )
}

inline void WriteMTXPS4x2(register volatile void* dst, register const Mtx src) {
    register f32 ps_0, ps_1, ps_2, ps_3;

    ASM_VOLATILE (
        psq_l  ps_0,  0(src), 0, 0
        psq_l  ps_1,  8(src), 0, 0
        psq_l  ps_2, 16(src), 0, 0
        psq_l  ps_3, 24(src), 0, 0

        psq_st ps_0, 0(dst),  0, 0
        psq_st ps_1, 0(dst),  0, 0
        psq_st ps_2, 0(dst),  0, 0
        psq_st ps_3, 0(dst),  0, 0
    )
}

// GXLoadPosMtxImm: definicion C reemplazada por asm (ver abajo)


// GXLoadPosMtxIndx: definicion C reemplazada por asm (ver abajo)


// GXLoadNrmMtxImm: definicion C reemplazada por asm (ver abajo)


//unused
void GXLoadNrmMtxImm3x3(){
}

// GXLoadNrmMtxIndx3x3: definicion C reemplazada por asm (ver abajo)


void GXSetCurrentMtx(u32 id) {
    GX_XF_SET_MATRIXINDEX0_GEOM(gxdt->matrixIndex0, id);
    gxdt->gxDirtyFlags |= GX_DIRTY_MTX_IDX;
}

// GXLoadTexMtxImm: definicion C reemplazada por asm (ver abajo)


//unused
void GXLoadTexMtxIndx(){
}

// __GXSetViewport: definicion C reemplazada por asm (ver abajo)


void GXSetViewportJitter(f32 ox, f32 oy, f32 sx, f32 sy, f32 near, f32 far,
                         u32 nextField) {
    if (nextField == GX_FIELD_EVEN) {
        oy -= 0.5f;
    }

    gxdt->vpOx = ox;
    gxdt->vpOy = oy;
    gxdt->vpSx = sx;
    gxdt->vpSy = sy;
    gxdt->vpNear = near;
    gxdt->vpFar = far;
    gxdt->gxDirtyFlags |= GX_DIRTY_VIEWPORT;
}

void GXSetViewport(f32 ox, f32 oy, f32 sx, f32 sy, f32 near, f32 far) {
    gxdt->vpOx = ox;
    gxdt->vpOy = oy;
    gxdt->vpSx = sx;
    gxdt->vpSy = sy;
    gxdt->vpNear = near;
    gxdt->vpFar = far;
    gxdt->gxDirtyFlags |= GX_DIRTY_VIEWPORT;
}

//unused
void GXGetViewportv(f32 view[GX_VIEWPORT_SZ]) {
    Copy6Floats(view, gxdt->view);
}

//unused
void GXSetZScaleOffset(f32 scale, f32 offset) {
    gxdt->offsetZ = (f32)0xFFFFFF * offset;      // ???
    gxdt->scaleZ = 1.0f + (f32)0xFFFFFF * scale; // ???
    gxdt->gxDirtyFlags |= GX_DIRTY_VIEWPORT;
}

// GXSetScissor: definicion C reemplazada por asm (ver abajo)


//unused
void GXGetScissor(u32* x, u32* y, u32* w, u32* h) {
    u32 y2, y1;
    u32 x2, x1;

    x1 = GX_BP_GET_SCISSORTL_LEFT(gxdt->scissorTL);
    y1 = GX_BP_GET_SCISSORTL_TOP(gxdt->scissorTL);
    x2 = GX_BP_GET_SCISSORBR_RIGHT(gxdt->scissorBR);
    y2 = GX_BP_GET_SCISSORBR_BOT(gxdt->scissorBR);

    *x = x1 - 342;
    *y = y1 - 342;
    *w = x2 - x1 + 1;
    *h = y2 - y1 + 1;
}

// GXSetScissorBoxOffset: definicion C reemplazada por asm (ver abajo)


void GXSetClipMode(GXClipMode mode) {
    GX_XF_LOAD_REG(GX_XF_REG_CLIPDISABLE, mode);
    gxdt->lastWriteWasXF = TRUE;
}

void __GXSetMatrixIndex(GXAttr index) {
    // Tex4 and after is stored in XF MatrixIndex1
    if (index < GX_VA_TEX4MTXIDX) {
        GX_CP_LOAD_REG(GX_CP_REG_MATRIXINDEXA, gxdt->matrixIndex0);
        GX_XF_LOAD_REG(GX_XF_REG_MATRIXINDEX0, gxdt->matrixIndex0);
    } else {
        GX_CP_LOAD_REG(GX_CP_REG_MATRIXINDEXB, gxdt->matrixIndex1);
        GX_XF_LOAD_REG(GX_XF_REG_MATRIXINDEX1, gxdt->matrixIndex1);
    }

    gxdt->lastWriteWasXF = TRUE;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_804A2670;
extern float lbl_804A2674;
extern float lbl_804A2678;
extern float lbl_804A267C;
extern void GXProject();

// asm_to_cpp: GXProject
asm void GXProject() {
    nofralloc
    lfs f5, 0x0(r3)
    lfs f4, 0x4(r3)
    lfs f0, 0x10(r3)
    fmuls f12, f5, f1
    lfs f5, 0x14(r3)
    fmuls f7, f4, f2
    fmuls f9, f0, f1
    lfs f4, 0x20(r3)
    fmuls f8, f5, f2
    fmuls f5, f4, f1
    lfs f0, 0x24(r3)
    lfs f11, 0x8(r3)
    fmuls f4, f0, f2
    lfs f10, 0x18(r3)
    lfs f6, 0x28(r3)
    fmuls f13, f11, f3
    lfs f11, 0xc(r3)
    fadds f0, f12, f7
    fadds f8, f9, f8
    lfs f7, 0x1c(r3)
    fmuls f10, f10, f3
    fadds f9, f13, f0
    lfs f2, 0x2c(r3)
    fmuls f6, f6, f3
    fadds f3, f5, f4
    lfs f1, lbl_804A2670
    fadds f4, f10, f8
    lfs f0, 0x0(r4)
    fadds f9, f11, f9
    stwu r1, -0x20(r1)
    fadds f8, f7, f4
    fadds f3, f6, f3
    stfs f9, 0x8(r1)
    fcmpu cr0, f1, f0
    stfs f8, 0xc(r1)
    fadds f7, f2, f3
    stfs f7, 0x10(r1)
    bne lbl_802E5468
    fneg f1, f7
    lfs f0, lbl_804A2674
    lfs f6, 0x4(r4)
    lfs f5, 0x8(r4)
    fdivs f0, f0, f1
    lfs f4, 0xc(r4)
    lfs f3, 0x10(r4)
    lfs f2, 0x14(r4)
    lfs f1, 0x18(r4)
    fmuls f2, f7, f2
    fmuls f6, f9, f6
    fmuls f5, f7, f5
    fmuls f3, f7, f3
    fmuls f4, f8, f4
    fadds f7, f6, f5
    fadds f10, f1, f2
    fadds f3, f4, f3
    b lbl_802E549C
lbl_802E5468:
    lfs f2, 0x4(r4)
    lfs f1, 0xc(r4)
    lfs f0, 0x14(r4)
    fmuls f6, f9, f2
    fmuls f4, f8, f1
    lfs f3, 0x10(r4)
    fmuls f2, f7, f0
    lfs f5, 0x8(r4)
    lfs f1, 0x18(r4)
    fadds f7, f5, f6
    fadds f3, f3, f4
    lfs f0, lbl_804A2674
    fadds f10, f1, f2
lbl_802E549C:
    lfs f6, 0x8(r5)
    fneg f1, f3
    lfs f5, 0xc(r5)
    fmuls f4, f7, f6
    lfs f9, lbl_804A2678
    fmuls f3, f1, f5
    lfs f2, 0x14(r5)
    lfs f1, 0x10(r5)
    fmuls f8, f6, f9
    fmuls f7, f4, f9
    lfs f6, 0x0(r5)
    fmuls f4, f3, f9
    lfs f3, 0x4(r5)
    fsubs f1, f2, f1
    fmuls f7, f0, f7
    fmuls f4, f0, f4
    fmuls f1, f10, f1
    fadds f6, f6, f7
    fadds f3, f3, f4
    fmuls f5, f5, f9
    fmuls f0, f0, f1
    fadds f4, f8, f6
    fadds f1, f5, f3
    fadds f0, f2, f0
    stfs f4, 0x0(r6)
    stfs f1, 0x0(r7)
    stfs f0, 0x0(r8)
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __GXSetProjection
asm void __GXSetProjection(void) {
    nofralloc
    lis r4, 0xcc01
    li r0, 0x10
    lis r3, 0x6
    stb r0, -0x8000(r4)
    addi r0, r3, 0x1020
    lwz r3, __GXData
    stw r0, -0x8000(r4)
    addi r5, r4, -0x8000
    opword 0xE043052C
    opword 0xE0230534
    opword 0xE003053C
    opword 0xF0450000
    opword 0xF0250000
    opword 0xF0050000
    lwz r0, 0x528(r3)
    stw r0, -0x8000(r4)
    blr
}

// asm_to_cpp: GXSetProjection
asm void GXSetProjection(const Mtx44 proj, GXProjectionType type) {
    nofralloc
    lwz r5, __GXData
    cmpwi r4, 0x1
    lfs f1, 0x0(r3)
    stw r4, 0x528(r5)
    lfs f0, 0x14(r3)
    stfs f1, 0x52c(r5)
    lfs f1, 0x28(r3)
    stfs f0, 0x534(r5)
    lfs f0, 0x2c(r3)
    stfs f1, 0x53c(r5)
    stfs f0, 0x540(r5)
    bne lbl_802E5598
    lfs f1, 0xc(r3)
    lfs f0, 0x1c(r3)
    stfs f1, 0x530(r5)
    stfs f0, 0x538(r5)
    b lbl_802E55A8
lbl_802E5598:
    lfs f1, 0x8(r3)
    lfs f0, 0x18(r3)
    stfs f1, 0x530(r5)
    stfs f0, 0x538(r5)
lbl_802E55A8:
    lwz r0, 0x5fc(r5)
    oris r0, r0, 0x800
    stw r0, 0x5fc(r5)
    blr
}

// asm_to_cpp: GXLoadPosMtxImm
asm void GXLoadPosMtxImm(const Mtx mtx, u32 id) {
    nofralloc
    lis r5, 0xcc01
    li r0, 0x10
    slwi r4, r4, 2
    stb r0, -0x8000(r5)
    oris r0, r4, 0xb
    stw r0, -0x8000(r5)
    addi r4, r5, -0x8000
    opword 0xE0A30000
    opword 0xE0830008
    opword 0xE0630010
    opword 0xE0430018
    opword 0xE0230020
    opword 0xE0030028
    opword 0xF0A40000
    opword 0xF0840000
    opword 0xF0640000
    opword 0xF0440000
    opword 0xF0240000
    opword 0xF0040000
    blr
}

// asm_to_cpp: GXLoadPosMtxIndx
asm void GXLoadPosMtxIndx(u16 index, u32 id) {
    nofralloc
    slwi r0, r4, 2
    li r6, 0x0
    rlwimi r6, r0, 0, 20, 31
    lis r4, 0xcc01
    li r0, 0x20
    li r5, 0xb
    rlwimi r6, r5, 12, 16, 19
    stb r0, -0x8000(r4)
    rlwimi r6, r3, 16, 0, 15
    stw r6, -0x8000(r4)
    blr
}

// asm_to_cpp: GXLoadNrmMtxImm
asm void GXLoadNrmMtxImm(const Mtx mtx, u32 id) {
    nofralloc
    slwi r0, r4, 2
    lis r5, 0xcc01
    subf r4, r4, r0
    li r0, 0x10
    addi r4, r4, 0x400
    stb r0, -0x8000(r5)
    oris r0, r4, 0x8
    stw r0, -0x8000(r5)
    addi r4, r5, -0x8000
    opword 0xE0A30000
    lfs f4, 0x8(r3)
    opword 0xE0630010
    lfs f2, 0x18(r3)
    opword 0xE0230020
    lfs f0, 0x28(r3)
    opword 0xF0A40000
    stfs f4, -0x8000(r5)
    opword 0xF0640000
    stfs f2, -0x8000(r5)
    opword 0xF0240000
    stfs f0, -0x8000(r5)
    blr
}

// asm_to_cpp: GXLoadNrmMtxIndx3x3
asm void GXLoadNrmMtxIndx3x3(u16 index, u32 id) {
    nofralloc
    slwi r0, r4, 2
    lis r5, 0xcc01
    subf r4, r4, r0
    li r6, 0x0
    li r0, 0x28
    addi r4, r4, 0x400
    stb r0, -0x8000(r5)
    rlwimi r6, r4, 0, 20, 31
    li r4, 0x8
    rlwimi r6, r4, 12, 16, 19
    rlwimi r6, r3, 16, 0, 15
    stw r6, -0x8000(r5)
    blr
}

// asm_to_cpp: GXLoadTexMtxImm
asm void GXLoadTexMtxImm(const Mtx mtx, u32 id, GXMtxType type) {
    nofralloc
    cmplwi r4, 0x40
    blt lbl_802E5784
    subi r0, r4, 0x40
    slwi r4, r0, 2
    addi r7, r4, 0x500
    b lbl_802E5788
lbl_802E5784:
    slwi r7, r4, 2
lbl_802E5788:
    cmpwi r5, 0x1
    bne lbl_802E5798
    li r4, 0x8
    b lbl_802E579C
lbl_802E5798:
    li r4, 0xc
lbl_802E579C:
    subi r6, r4, 0x1
    lis r4, 0xcc01
    li r0, 0x10
    cmpwi r5, 0x0
    slwi r5, r6, 16
    stb r0, -0x8000(r4)
    or r0, r7, r5
    stw r0, -0x8000(r4)
    bne lbl_802E57F8
    addi r4, r4, -0x8000
    opword 0xE0A30000
    opword 0xE0830008
    opword 0xE0630010
    opword 0xE0430018
    opword 0xE0230020
    opword 0xE0030028
    opword 0xF0A40000
    opword 0xF0840000
    opword 0xF0640000
    opword 0xF0440000
    opword 0xF0240000
    opword 0xF0040000
    blr
lbl_802E57F8:
    addi r4, r4, -0x8000
    opword 0xE0630000
    opword 0xE0430008
    opword 0xE0230010
    opword 0xE0030018
    opword 0xF0640000
    opword 0xF0440000
    opword 0xF0240000
    opword 0xF0040000
    blr
}

// asm_to_cpp: __GXSetViewport
asm void __GXSetViewport(void) {
    nofralloc
    lwz r6, __GXData
    lis r3, 0x5
    lfs f6, lbl_804A2678
    lis r4, 0xcc01
    lfs f2, 0x550(r6)
    li r5, 0x10
    lfs f3, 0x54c(r6)
    addi r0, r3, 0x101a
    fneg f1, f2
    lfs f0, 0x544(r6)
    fmuls f7, f3, f6
    lfs f4, 0x548(r6)
    fmuls f5, f2, f6
    lfs f3, 0x554(r6)
    fmuls f8, f1, f6
    lfs f2, 0x560(r6)
    lfs f1, 0x558(r6)
    fadds f6, f0, f7
    lfs f0, 0x55c(r6)
    fmuls f3, f3, f2
    fmuls f9, f1, f2
    stb r5, -0x8000(r4)
    lfs f2, lbl_804A267C
    fadds f1, f4, f5
    stw r0, -0x8000(r4)
    fsubs f3, f9, f3
    stfs f7, -0x8000(r4)
    fadds f4, f2, f6
    fadds f1, f2, f1
    stfs f8, -0x8000(r4)
    fadds f0, f9, f0
    stfs f3, -0x8000(r4)
    stfs f4, -0x8000(r4)
    stfs f1, -0x8000(r4)
    stfs f0, -0x8000(r4)
    blr
}

// asm_to_cpp: GXSetScissor
asm void GXSetScissor(u32 x, u32 y, u32 w, u32 h) {
    nofralloc
    lwz r8, __GXData
    addi r4, r4, 0x156
    addi r9, r3, 0x156
    lis r7, 0xcc01
    lwz r0, 0x148(r8)
    rlwimi r0, r4, 0, 21, 31
    rlwimi r0, r9, 12, 9, 19
    add r6, r4, r6
    stw r0, 0x148(r8)
    add r3, r9, r5
    subi r5, r6, 0x1
    li r4, 0x61
    lwz r6, 0x14c(r8)
    subi r3, r3, 0x1
    rlwimi r6, r5, 0, 21, 31
    li r0, 0x0
    rlwimi r6, r3, 12, 9, 19
    stw r6, 0x14c(r8)
    stb r4, -0x8000(r7)
    lwz r3, 0x148(r8)
    stw r3, -0x8000(r7)
    stb r4, -0x8000(r7)
    lwz r3, 0x14c(r8)
    stw r3, -0x8000(r7)
    sth r0, 0x2(r8)
    blr
}

// asm_to_cpp: GXSetScissorBoxOffset
asm void GXSetScissorBoxOffset(u32 ox, u32 oy) {
    nofralloc
    addi r0, r3, 0x156
    li r6, 0x0
    rlwimi r6, r0, 31, 22, 31
    lis r5, 0xcc01
    li r0, 0x61
    addi r3, r4, 0x156
    stb r0, -0x8000(r5)
    rlwimi r6, r3, 9, 12, 21
    li r0, 0x59
    lwz r3, __GXData
    rlwimi r6, r0, 24, 0, 7
    stw r6, -0x8000(r5)
    li r0, 0x0
    sth r0, 0x2(r3)
    blr
}
