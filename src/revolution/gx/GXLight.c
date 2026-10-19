#include <revolution/GX.h>

#include <math.h>

#define XF_MEM_LOBJ_SIZE 16

void GXInitLightAttn(GXLightObj* light, f32 aa, f32 ab, f32 ac, f32 ka, f32 kb,
                     f32 kc) {
    GXLightObjImpl* impl = (GXLightObjImpl*)light;

    impl->aa = aa;
    impl->ab = ab;
    impl->ac = ac;
    impl->ka = ka;
    impl->kb = kb;
    impl->kc = kc;
}

void GXInitLightAttnA(GXLightObj* light, f32 a, f32 b, f32 c) {
    GXLightObjImpl* impl = (GXLightObjImpl*)light;

    impl->aa = a;
    impl->ab = b;
    impl->ac = c;
}

//unused
void GXGetLightAttnA(){
}

void GXInitLightAttnK(GXLightObj* light, f32 a, f32 b, f32 c) {
    GXLightObjImpl* impl = (GXLightObjImpl*)light;

    impl->ka = a;
    impl->kb = b;
    impl->kc = c;
}

//unused
void GXGetLightAttnK(){
}

// GXInitLightSpot: definicion C reemplazada por asm (ver abajo)


// GXInitLightDistAttn: definicion C reemplazada por asm (ver abajo)


void GXInitLightPos(GXLightObj* light, f32 x, f32 y, f32 z) {
    GXLightObjImpl* impl = (GXLightObjImpl*)light;

    impl->posX = x;
    impl->posY = y;
    impl->posZ = z;
}

// GXGetLightPos: definicion C reemplazada por asm (ver abajo)


void GXInitLightDir(GXLightObj* light, f32 x, f32 y, f32 z) {
    GXLightObjImpl* impl = (GXLightObjImpl*)light;

    impl->dirX = -x;
    impl->dirY = -y;
    impl->dirZ = -z;
}

// GXGetLightDir: definicion C reemplazada por asm (ver abajo)


// GXInitSpecularDir: definicion C reemplazada por asm (ver abajo)


//unused
void GXInitSpecularDirHA(){
}


void GXInitLightColor(GXLightObj* light, GXColor color) {
    GXLightObjImpl* impl = (GXLightObjImpl*)light;
    *(u32*)&impl->color = *(u32*)&color;
}

//unused
void GXGetLightColor(){
}

// TODO(kiwi) This inline is fake, and also is a fake match (r6 hardcoded)
inline void WriteLightObj(register volatile void* dst,
                          register const GXLightObjImpl* src) {
    register u32 color;
    register f32 ps_0, ps_1, ps_2, ps_3, ps_4, ps_5;

    ASM_VOLATILE(
        lwz color, src->color
        xor r6, r6, r6 // make zero
        psq_l ps_0, GXLightObjImpl.aa(src),   0, 0
        psq_l ps_1, GXLightObjImpl.ac(src),   0, 0
        psq_l ps_2, GXLightObjImpl.kb(src),   0, 0
        psq_l ps_3, GXLightObjImpl.posX(src), 0, 0
        psq_l ps_4, GXLightObjImpl.posZ(src), 0, 0
        psq_l ps_5, GXLightObjImpl.dirY(src), 0, 0

        stw r6, 0(dst)
        stw r6, 0(dst)
        stw r6, 0(dst)
            
        stw color,   0(dst)
        psq_st ps_0, 0(dst), 0, 0
        psq_st ps_1, 0(dst), 0, 0
        psq_st ps_2, 0(dst), 0, 0
        psq_st ps_3, 0(dst), 0, 0
        psq_st ps_4, 0(dst), 0, 0
        psq_st ps_5, 0(dst), 0, 0
    )
}

// GXLoadLightObjImm: definicion C reemplazada por asm (ver abajo)


//unused
void GXLoadLightObjIndx(u16 index, GXLightID id) {
    u32 num;

    num = 31 - __cntlzw(id);
    num = (num % 8) * XF_MEM_LOBJ_SIZE;

    GX_FIFO_LOAD_INDX_D(num + GX_XF_MEM_LIGHTOBJ, XF_MEM_LOBJ_SIZE - 1, index);
    gxdt->lastWriteWasXF = TRUE;
}

// GXSetChanAmbColor: definicion C reemplazada por asm (ver abajo)


// GXSetChanMatColor: definicion C reemplazada por asm (ver abajo)


void GXSetNumChans(u8 num) {
    GX_BP_SET_GENMODE_NUMCOLORS(gxdt->genMode, num);
    gxdt->gxDirtyFlags |= GX_DIRTY_NUM_COLORS;
    gxdt->gxDirtyFlags |= GX_DIRTY_GEN_MODE;
}

// GXSetChanCtrl: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_804A25A8;
extern float lbl_804A25AC;
extern float lbl_804A25B0;
extern float lbl_804A25B4;
extern float lbl_804A25B8;
extern float lbl_804A25BC;
extern float lbl_804A25C0;
extern float lbl_804A25C4;
extern float lbl_804A25C8;
extern float lbl_804A25CC;
extern float lbl_804A25D0;
extern float lbl_804A25D4;
extern float lbl_804A25D8;
extern u8 jumptable_8037AE98[];
extern void fn_802E2CA0();

// asm_to_cpp: GXInitLightSpot
asm void GXInitLightSpot(GXLightObj* light, f32 angle, GXSpotFn fn) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_804A25A8
    stw r0, 0x14(r1)
    fcmpo cr0, f1, f0
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    opword 0x4C401382
    beq lbl_802E28F8
    lfs f0, lbl_804A25AC
    fcmpo cr0, f1, f0
    ble lbl_802E28FC
lbl_802E28F8:
    li r31, 0x0
lbl_802E28FC:
    lfs f2, lbl_804A25B0
    lfs f0, lbl_804A25B4
    fmuls f1, f2, f1
    fdivs f1, f1, f0
    bl cos
    cmplwi r31, 0x6
    frsp f5, f1
    bgt lbl_802E2A18
    lis r3, jumptable_8037AE98@ha
    slwi r0, r31, 2
    addi r3, r3, jumptable_8037AE98@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lfs f0, lbl_804A25B8
    lfs f1, lbl_804A25BC
    fmuls f3, f0, f5
    lfs f6, lbl_804A25A8
    b lbl_802E2A24
    lfs f2, lbl_804A25C0
    fneg f0, f5
    lfs f6, lbl_804A25A8
    fsubs f1, f2, f5
    fdivs f1, f2, f1
    fmuls f3, f0, f1
    b lbl_802E2A24
    lfs f2, lbl_804A25C0
    fneg f0, f5
    lfs f3, lbl_804A25A8
    fsubs f1, f2, f5
    fdivs f6, f2, f1
    fmuls f1, f0, f6
    b lbl_802E2A24
    lfs f3, lbl_804A25C0
    lfs f1, lbl_804A25C4
    fsubs f2, f3, f5
    fsubs f0, f5, f1
    fmuls f2, f2, f2
    fmuls f0, f5, f0
    fdivs f2, f3, f2
    fmuls f3, f2, f0
    fmuls f1, f1, f2
    fneg f6, f2
    b lbl_802E2A24
    lfs f4, lbl_804A25C0
    lfs f0, lbl_804A25CC
    fsubs f3, f4, f5
    lfs f2, lbl_804A25C8
    fadds f1, f4, f5
    fmuls f3, f3, f3
    fmuls f0, f0, f1
    fdivs f1, f4, f3
    fmuls f6, f2, f1
    fmuls f1, f0, f1
    fmuls f3, f6, f5
    b lbl_802E2A24
    lfs f4, lbl_804A25C0
    lfs f0, lbl_804A25C4
    fsubs f3, f4, f5
    lfs f1, lbl_804A25CC
    fmuls f2, f0, f5
    lfs f0, lbl_804A25D0
    fmuls f1, f1, f5
    fmuls f3, f3, f3
    fmuls f2, f2, f5
    fdivs f3, f4, f3
    fmuls f2, f3, f2
    fmuls f1, f1, f3
    fmuls f6, f0, f3
    fsubs f3, f4, f2
    b lbl_802E2A24
lbl_802E2A18:
    lfs f1, lbl_804A25A8
    lfs f3, lbl_804A25C0
    fmr f6, f1
lbl_802E2A24:
    stfs f3, 0x10(r30)
    stfs f1, 0x14(r30)
    stfs f6, 0x18(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: GXInitLightDistAttn
asm void GXInitLightDistAttn(GXLightObj* light, f32 distance, f32 brightness,
                         GXDistAttnFn fn) {
    nofralloc
    lfs f0, lbl_804A25A8
    fcmpo cr0, f1, f0
    bge lbl_802E2A58
    li r4, 0x0
lbl_802E2A58:
    lfs f0, lbl_804A25A8
    fcmpo cr0, f2, f0
    opword 0x4C401382
    beq lbl_802E2A78
    lfs f0, lbl_804A25C0
    fcmpo cr0, f2, f0
    opword 0x4C411382
    bne lbl_802E2A7C
lbl_802E2A78:
    li r4, 0x0
lbl_802E2A7C:
    cmpwi r4, 0x2
    beq lbl_802E2ABC
    bge lbl_802E2A98
    cmpwi r4, 0x0
    beq lbl_802E2AFC
    bge lbl_802E2AA4
    b lbl_802E2AFC
lbl_802E2A98:
    cmpwi r4, 0x4
    bge lbl_802E2AFC
    b lbl_802E2AE0
lbl_802E2AA4:
    lfs f5, lbl_804A25C0
    fmuls f0, f2, f1
    lfs f4, lbl_804A25A8
    fsubs f1, f5, f2
    fdivs f3, f1, f0
    b lbl_802E2B08
lbl_802E2ABC:
    lfs f5, lbl_804A25C0
    fmuls f3, f2, f1
    lfs f4, lbl_804A25D4
    fsubs f2, f5, f2
    fmuls f0, f1, f3
    fmuls f1, f4, f2
    fdivs f3, f1, f3
    fdivs f4, f1, f0
    b lbl_802E2B08
lbl_802E2AE0:
    fmuls f0, f2, f1
    lfs f5, lbl_804A25C0
    lfs f3, lbl_804A25A8
    fsubs f2, f5, f2
    fmuls f0, f1, f0
    fdivs f4, f2, f0
    b lbl_802E2B08
lbl_802E2AFC:
    lfs f3, lbl_804A25A8
    lfs f5, lbl_804A25C0
    fmr f4, f3
lbl_802E2B08:
    stfs f5, 0x1c(r3)
    stfs f3, 0x20(r3)
    stfs f4, 0x24(r3)
    blr
}

// asm_to_cpp: GXGetLightPos
asm void GXGetLightPos(const GXLightObj* light, f32* x, f32* y, f32* z) {
    nofralloc
    lfs f0, 0x28(r3)
    lfs f1, 0x2c(r3)
    stfs f0, 0x0(r4)
    lfs f0, 0x30(r3)
    stfs f1, 0x0(r5)
    stfs f0, 0x0(r6)
    blr
}

// asm_to_cpp: GXGetLightDir
asm void GXGetLightDir(const GXLightObj* light, f32* x, f32* y, f32* z) {
    nofralloc
    lfs f0, 0x34(r3)
    lfs f1, 0x38(r3)
    fneg f2, f0
    lfs f0, 0x3c(r3)
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0x0(r4)
    stfs f1, 0x0(r5)
    stfs f0, 0x0(r6)
    blr
}

// asm_to_cpp: GXInitSpecularDir
asm void GXInitSpecularDir(GXLightObj* light, f32 x, f32 y, f32 z) {
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
    stfd f27, 0x20(r1)
    opword 0xF3610028
    stfd f26, 0x10(r1)
    opword 0xF3410018
    fneg f31, f1
    fneg f30, f2
    lfs f4, lbl_804A25C0
    fneg f6, f3
    stw r31, 0xc(r1)
    fmuls f5, f31, f31
    fmr f26, f1
    fadds f29, f4, f6
    lfs f0, lbl_804A25A8
    fmuls f4, f30, f30
    mr r31, r3
    fmr f27, f2
    fmuls f6, f29, f29
    fadds f1, f5, f4
    fmr f28, f3
    fadds f1, f6, f1
    fcmpu cr0, f0, f1
    beq lbl_802E2C1C
    bl sqrt
    frsp f1, f1
    lfs f0, lbl_804A25C0
    fdivs f1, f0, f1
lbl_802E2C1C:
    lfs f0, lbl_804A25D8
    fmuls f5, f31, f1
    fmuls f4, f30, f1
    fmuls f3, f29, f1
    fmuls f2, f0, f26
    stfs f5, 0x34(r31)
    fmuls f1, f0, f27
    fmuls f0, f0, f28
    stfs f4, 0x38(r31)
    stfs f3, 0x3c(r31)
    stfs f2, 0x28(r31)
    stfs f1, 0x2c(r31)
    stfs f0, 0x30(r31)
    opword 0xE3E10068
    lfd f31, 0x60(r1)
    opword 0xE3C10058
    lfd f30, 0x50(r1)
    opword 0xE3A10048
    lfd f29, 0x40(r1)
    opword 0xE3810038
    lfd f28, 0x30(r1)
    opword 0xE3610028
    lfd f27, 0x20(r1)
    opword 0xE3410018
    lfd f26, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_802E2CA0
asm void fn_802E2CA0() {
    nofralloc
    lwz r0, 0xc(r3)
    stw r0, 0x0(r4)
    blr
}

// asm_to_cpp: GXLoadLightObjImm
asm void GXLoadLightObjImm(const GXLightObj* light, GXLightID id) {
    nofralloc
    cntlzw r0, r4
    lis r4, 0xcc01
    subfic r5, r0, 0x1f
    li r0, 0x10
    clrlslwi r5, r5, 29, 4
    stb r0, -0x8000(r4)
    addi r0, r5, 0x600
    oris r0, r0, 0xf
    stw r0, -0x8000(r4)
    lwz r0, 0xc(r3)
    xor r6, r6, r6
    opword 0xE0A30010
    opword 0xE0830018
    opword 0xE0630020
    opword 0xE0430028
    opword 0xE0230030
    opword 0xE0030038
    stwu r6, -0x8000(r4)
    stw r6, 0x0(r4)
    stw r6, 0x0(r4)
    stw r0, 0x0(r4)
    opword 0xF0A40000
    opword 0xF0840000
    opword 0xF0640000
    opword 0xF0440000
    opword 0xF0240000
    opword 0xF0040000
    li r0, 0x1
    lwz r3, __GXData
    sth r0, 0x2(r3)
    blr
}

// asm_to_cpp: GXSetChanAmbColor
asm void GXSetChanAmbColor(GXChannelID chan, GXColor color) {
    nofralloc
    cmpwi r3, 0x3
    beq lbl_802E2DA4
    bge lbl_802E2D4C
    cmpwi r3, 0x1
    beq lbl_802E2D74
    bge lbl_802E2D8C
    cmpwi r3, 0x0
    bge lbl_802E2D5C
    blr
lbl_802E2D4C:
    cmpwi r3, 0x5
    beq lbl_802E2DC8
    bgelr
    b lbl_802E2DBC
lbl_802E2D5C:
    lwz r3, __GXData
    li r8, 0x0
    lwz r0, 0x0(r4)
    lwz r7, 0xa8(r3)
    rlwimi r7, r0, 0, 0, 23
    b lbl_802E2DD8
lbl_802E2D74:
    lwz r3, __GXData
    li r8, 0x1
    lwz r0, 0x0(r4)
    lwz r7, 0xac(r3)
    rlwimi r7, r0, 0, 0, 23
    b lbl_802E2DD8
lbl_802E2D8C:
    lwz r3, __GXData
    li r8, 0x0
    lbz r0, 0x3(r4)
    lwz r7, 0xa8(r3)
    rlwimi r7, r0, 0, 24, 31
    b lbl_802E2DD8
lbl_802E2DA4:
    lwz r3, __GXData
    li r8, 0x1
    lbz r0, 0x3(r4)
    lwz r7, 0xac(r3)
    rlwimi r7, r0, 0, 24, 31
    b lbl_802E2DD8
lbl_802E2DBC:
    lwz r7, 0x0(r4)
    li r8, 0x0
    b lbl_802E2DD8
lbl_802E2DC8:
    lwz r7, 0x0(r4)
    li r8, 0x1
    b lbl_802E2DD8
    blr
lbl_802E2DD8:
    lwz r6, __GXData
    li r3, 0x100
    slwi r0, r8, 2
    lwz r5, 0x5fc(r6)
    slw r4, r3, r8
    add r3, r6, r0
    or r0, r5, r4
    stw r0, 0x5fc(r6)
    stw r7, 0xa8(r3)
    blr
}

// asm_to_cpp: GXSetChanMatColor
asm void GXSetChanMatColor(GXChannelID chan, GXColor color) {
    nofralloc
    cmpwi r3, 0x3
    beq lbl_802E2E7C
    bge lbl_802E2E24
    cmpwi r3, 0x1
    beq lbl_802E2E4C
    bge lbl_802E2E64
    cmpwi r3, 0x0
    bge lbl_802E2E34
    blr
lbl_802E2E24:
    cmpwi r3, 0x5
    beq lbl_802E2EA0
    bgelr
    b lbl_802E2E94
lbl_802E2E34:
    lwz r3, __GXData
    li r8, 0x0
    lwz r0, 0x0(r4)
    lwz r7, 0xb0(r3)
    rlwimi r7, r0, 0, 0, 23
    b lbl_802E2EB0
lbl_802E2E4C:
    lwz r3, __GXData
    li r8, 0x1
    lwz r0, 0x0(r4)
    lwz r7, 0xb4(r3)
    rlwimi r7, r0, 0, 0, 23
    b lbl_802E2EB0
lbl_802E2E64:
    lwz r3, __GXData
    li r8, 0x0
    lbz r0, 0x3(r4)
    lwz r7, 0xb0(r3)
    rlwimi r7, r0, 0, 24, 31
    b lbl_802E2EB0
lbl_802E2E7C:
    lwz r3, __GXData
    li r8, 0x1
    lbz r0, 0x3(r4)
    lwz r7, 0xb4(r3)
    rlwimi r7, r0, 0, 24, 31
    b lbl_802E2EB0
lbl_802E2E94:
    lwz r7, 0x0(r4)
    li r8, 0x0
    b lbl_802E2EB0
lbl_802E2EA0:
    lwz r7, 0x0(r4)
    li r8, 0x1
    b lbl_802E2EB0
    blr
lbl_802E2EB0:
    lwz r6, __GXData
    li r3, 0x400
    slwi r0, r8, 2
    lwz r5, 0x5fc(r6)
    slw r4, r3, r8
    add r3, r6, r0
    or r0, r5, r4
    stw r0, 0x5fc(r6)
    stw r7, 0xb0(r3)
    blr
}

// asm_to_cpp: GXSetChanCtrl
asm void GXSetChanCtrl(GXChannelID chan, GXBool enable, GXColorSrc ambSrc,
                   GXColorSrc matSrc, GXLightID lightMask, GXDiffuseFn diffFn,
                   GXAttnFn attnFn) {
    nofralloc
    cmpwi r9, 0x0
    li r10, 0x0
    rlwimi r10, r4, 1, 30, 30
    clrlwi r11, r3, 30
    rlwimi r10, r6, 0, 31, 31
    rlwimi r10, r5, 6, 25, 25
    bne lbl_802E2F1C
    li r8, 0x0
lbl_802E2F1C:
    subfic r5, r9, 0x2
    subi r4, r9, 0x2
    neg r0, r9
    rlwimi r10, r8, 7, 23, 24
    or r4, r5, r4
    lwz r5, __GXData
    rlwimi r10, r4, 10, 22, 22
    or r0, r0, r9
    rlwimi r10, r0, 11, 21, 21
    slwi r4, r11, 2
    rlwimi r10, r7, 2, 26, 29
    li r0, 0x1000
    add r4, r5, r4
    cmpwi r3, 0x4
    rlwimi r10, r7, 7, 17, 20
    slw r0, r0, r11
    stw r10, 0xb8(r4)
    lwz r4, 0x5fc(r5)
    or r0, r4, r0
    stw r0, 0x5fc(r5)
    bne lbl_802E2F84
    stw r10, 0xc0(r5)
    lwz r0, 0x5fc(r5)
    ori r0, r0, 0x5000
    stw r0, 0x5fc(r5)
    blr
lbl_802E2F84:
    cmpwi r3, 0x5
    bnelr
    stw r10, 0xc4(r5)
    lwz r0, 0x5fc(r5)
    ori r0, r0, 0xa000
    stw r0, 0x5fc(r5)
    blr
}
