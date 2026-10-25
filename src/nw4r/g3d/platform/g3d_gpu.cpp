#include "nw4r/g3d.h" // IWYU pragma: export

namespace nw4r {
namespace g3d {
namespace fifo {

// GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode: definicion C reemplazada por asm (ver abajo)


// GDSetCullMode__Q34nw4r3g3d4fifoF11_GXCullMode: definicion C reemplazada por asm (ver abajo)


// GDSetTexCoordScale2__Q34nw4r3g3d4fifoF13_GXTexCoordIDUsUcUcUsUcUc: definicion C reemplazada por asm (ver abajo)


// GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34: definicion C reemplazada por asm (ver abajo)


void GDResetCurrentMtx() {
    u32 regA = GX_PNMTX0 << GX_CP_MATRIXINDEXA_POSNRM_SHIFT | GX_IDENTITY << GX_CP_MATRIXINDEXA_TEX0_SHIFT |
               GX_IDENTITY << GX_CP_MATRIXINDEXA_TEX1_SHIFT | GX_IDENTITY << GX_CP_MATRIXINDEXA_TEX2_SHIFT |
               GX_IDENTITY << GX_CP_MATRIXINDEXA_TEX3_SHIFT;

    u32 regB = GX_IDENTITY << GX_CP_MATRIXINDEXB_TEX4_SHIFT | GX_IDENTITY << GX_CP_MATRIXINDEXB_TEX5_SHIFT |
               GX_IDENTITY << GX_CP_MATRIXINDEXB_TEX6_SHIFT | GX_IDENTITY << GX_CP_MATRIXINDEXB_TEX7_SHIFT;

    LoadCPCmd(GX_CP_REG_MATRIXINDEXA, regA);
    LoadCPCmd(GX_CP_REG_MATRIXINDEXB, regB);

    LoadXFCmdHdr(GX_XF_REG_MATRIXINDEX0, 2);
    GXCmd1u32(regA);
    GXCmd1u32(regB);
}

// GDSetCurrentMtx__Q34nw4r3g3d4fifoFPCUl: definicion C reemplazada por asm (ver abajo)


void GDLoadTexMtxImm3x3(const math::MTX33 &rMtx, u32 id) {
    math::MTX34 mtx;
    const math::MTX33 *pMtx = &rMtx;

    mtx._00 = pMtx->_00;
    mtx._01 = pMtx->_01;
    mtx._02 = pMtx->_02;
    mtx._03 = 0.0f;

    mtx._10 = pMtx->_10;
    mtx._11 = pMtx->_11;
    mtx._12 = pMtx->_12;
    mtx._13 = 0.0f;

    mtx._20 = pMtx->_20;
    mtx._21 = pMtx->_21;
    mtx._22 = pMtx->_22;
    mtx._23 = 0.0f;

    GXLoadTexMtxImm(mtx, id, GX_MTX3x4);
}

} // namespace fifo
} // namespace g3d
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_804A1D38;
extern "C" float lbl_804A1D3C;
extern "C" float lbl_804A1D40;
extern "C" float lbl_804A1D44;
extern "C" float lbl_804A1D48;
extern "C" void GDSetCullMode__Q34nw4r3g3d4fifoF11_GXCullMode();
extern "C" void GDSetCurrentMtx__Q34nw4r3g3d4fifoFPCUl();
extern "C" void GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode();
extern "C" void GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34();
extern "C" void GDSetTexCoordScale2__Q34nw4r3g3d4fifoF13_GXTexCoordIDUsUcUcUsUcUc();

// asm_to_cpp: GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode
extern "C" asm void GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode() {
    nofralloc
    lis r10, 0xcc01
    li r11, 0x61
    lis r9, 0xfe08
    la r8, lbl_804A1D38
    lbzx r7, r8, r7
    subi r9, r9, 0x3c1
    stb r11, -0x8000(r10)
    subi r5, r5, 0x1
    clrlslwi r0, r4, 24, 4
    clrlslwi r8, r6, 24, 16
    slwi r6, r7, 14
    stw r9, -0x8000(r10)
    slwi r5, r5, 10
    or r0, r3, r0
    or r0, r5, r0
    or r6, r8, r6
    or r0, r6, r0
    stb r11, -0x8000(r10)
    li r7, 0x10
    li r6, 0x0
    stw r0, -0x8000(r10)
    li r5, 0x1009
    li r0, 0x103f
    stb r7, -0x8000(r10)
    sth r6, -0x8000(r10)
    sth r5, -0x8000(r10)
    stw r4, -0x8000(r10)
    stb r7, -0x8000(r10)
    sth r6, -0x8000(r10)
    sth r0, -0x8000(r10)
    stw r3, -0x8000(r10)
    blr
}

// asm_to_cpp: GDSetCullMode__Q34nw4r3g3d4fifoF11_GXCullMode
extern "C" asm void GDSetCullMode__Q34nw4r3g3d4fifoF11_GXCullMode() {
    nofralloc
    lis r5, 0xcc01
    li r6, 0x61
    lis r4, 0xfe01
    stb r6, -0x8000(r5)
    subi r0, r4, 0x4000
    stw r0, -0x8000(r5)
    la r4, lbl_804A1D38
    lbzx r0, r4, r3
    stb r6, -0x8000(r5)
    slwi r0, r0, 14
    stw r0, -0x8000(r5)
    blr
}

// asm_to_cpp: GDSetTexCoordScale2__Q34nw4r3g3d4fifoF13_GXTexCoordIDUsUcUcUsUcUc
extern "C" asm void GDSetTexCoordScale2__Q34nw4r3g3d4fifoF13_GXTexCoordIDUsUcUcUsUcUc() {
    nofralloc
    lis r11, 0xcc01
    li r12, 0x61
    lis r10, 0xfe04
    stb r12, -0x8000(r11)
    subi r0, r10, 0x1
    subi r4, r4, 0x1
    slwi r10, r3, 1
    stw r0, -0x8000(r11)
    clrlslwi r3, r5, 24, 16
    clrlslwi r5, r6, 24, 17
    or r3, r4, r3
    addi r0, r10, 0x30
    or r3, r5, r3
    stb r12, -0x8000(r11)
    slwi r0, r0, 24
    subi r4, r7, 0x1
    or r0, r3, r0
    clrlslwi r3, r8, 24, 16
    stw r0, -0x8000(r11)
    addi r0, r10, 0x31
    clrlslwi r5, r9, 24, 17
    or r3, r4, r3
    stb r12, -0x8000(r11)
    or r3, r5, r3
    slwi r0, r0, 24
    or r0, r3, r0
    stw r0, -0x8000(r11)
    blr
}

// asm_to_cpp: GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34
extern "C" asm void GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34() {
    nofralloc
    lfs f2, 0x0(r4)
    li r5, 0x0
    lfs f3, 0x4(r4)
    fabs f5, f2
    lfs f0, lbl_804A1D3C
    lfs f6, 0x8(r4)
    fabs f9, f3
    lfs f4, 0x10(r4)
    lfs f7, 0x14(r4)
    lfs f8, 0x18(r4)
    fcmpo cr0, f5, f0
    fabs f10, f6
    stwu r1, -0x40(r1)
    fabs f11, f4
    fabs f12, f7
    fabs f13, f8
    opword 0x4C411382
    beq lbl_801DF4C4
    fcmpo cr0, f9, f0
    opword 0x4C411382
    beq lbl_801DF4C4
    fcmpo cr0, f10, f0
    opword 0x4C411382
    beq lbl_801DF4C4
    fcmpo cr0, f11, f0
    opword 0x4C411382
    beq lbl_801DF4C4
    fcmpo cr0, f12, f0
    opword 0x4C411382
    beq lbl_801DF4C4
    fcmpo cr0, f13, f0
    opword 0x4C411382
    bne lbl_801DF558
lbl_801DF4C4:
    lfs f1, lbl_804A1D40
    lfs f0, lbl_804A1D3C
lbl_801DF4CC:
    extsb r0, r5
    cmpwi r0, 0x2e
    bge lbl_801DF600
    fmuls f5, f5, f1
    fmuls f2, f2, f1
    fmuls f3, f3, f1
    fcmpo cr0, f5, f0
    fmuls f6, f6, f1
    fmuls f4, f4, f1
    fmuls f7, f7, f1
    fmuls f8, f8, f1
    fmuls f9, f9, f1
    fmuls f10, f10, f1
    fmuls f11, f11, f1
    fmuls f12, f12, f1
    fmuls f13, f13, f1
    opword 0x4C411382
    addi r5, r5, 0x1
    beq lbl_801DF4CC
    fcmpo cr0, f9, f0
    opword 0x4C411382
    beq lbl_801DF4CC
    fcmpo cr0, f10, f0
    opword 0x4C411382
    beq lbl_801DF4CC
    fcmpo cr0, f11, f0
    opword 0x4C411382
    beq lbl_801DF4CC
    fcmpo cr0, f12, f0
    opword 0x4C411382
    beq lbl_801DF4CC
    fcmpo cr0, f13, f0
    opword 0x4C411382
    beq lbl_801DF4CC
    b lbl_801DF600
lbl_801DF558:
    lfs f1, lbl_804A1D40
    fcmpo cr0, f5, f1
    bge lbl_801DF600
    fcmpo cr0, f9, f1
    bge lbl_801DF600
    fcmpo cr0, f10, f1
    bge lbl_801DF600
    fcmpo cr0, f11, f1
    bge lbl_801DF600
    fcmpo cr0, f12, f1
    bge lbl_801DF600
    fcmpo cr0, f13, f1
    bge lbl_801DF600
    lfs f0, lbl_804A1D44
lbl_801DF590:
    fmuls f5, f5, f0
    subi r5, r5, 0x1
    fmuls f2, f2, f0
    fmuls f3, f3, f0
    fcmpo cr0, f5, f1
    fmuls f6, f6, f0
    fmuls f4, f4, f0
    fmuls f7, f7, f0
    fmuls f8, f8, f0
    fmuls f9, f9, f0
    fmuls f10, f10, f0
    fmuls f11, f11, f0
    fmuls f12, f12, f0
    fmuls f13, f13, f0
    bge lbl_801DF600
    fcmpo cr0, f9, f1
    bge lbl_801DF600
    fcmpo cr0, f10, f1
    bge lbl_801DF600
    fcmpo cr0, f11, f1
    bge lbl_801DF600
    fcmpo cr0, f12, f1
    bge lbl_801DF600
    fcmpo cr0, f13, f1
    bge lbl_801DF600
    extsb r0, r5
    cmpwi r0, -0x11
    bgt lbl_801DF590
lbl_801DF600:
    lfs f5, lbl_804A1D48
    addi r9, r5, 0x11
    addi r0, r3, 0x6
    lis r7, 0xcc01
    fmuls f2, f5, f2
    clrlslwi r5, r9, 30, 22
    fmuls f0, f5, f4
    rlwimi r5, r0, 24, 0, 7
    fmuls f1, f5, f3
    li r8, 0x61
    fctiwz f4, f0
    addi r0, r3, 0x7
    fctiwz f2, f2
    rlwinm r6, r9, 20, 8, 9
    fmuls f0, f5, f7
    rlwimi r6, r0, 24, 0, 7
    stfd f2, 0x8(r1)
    fctiwz f3, f1
    fctiwz f2, f0
    stfd f4, 0x10(r1)
    fmuls f1, f5, f6
    fmuls f0, f5, f8
    lwz r4, 0xc(r1)
    lwz r0, 0x14(r1)
    fctiwz f1, f1
    stb r8, -0x8000(r7)
    clrlslwi r0, r0, 21, 11
    rlwimi r0, r4, 0, 21, 31
    fctiwz f0, f0
    or r0, r5, r0
    stw r0, -0x8000(r7)
    addi r0, r3, 0x8
    rlwinm r4, r9, 18, 8, 9
    stfd f2, 0x20(r1)
    rlwimi r4, r0, 24, 0, 7
    stfd f3, 0x18(r1)
    lwz r3, 0x24(r1)
    lwz r0, 0x1c(r1)
    clrlslwi r5, r3, 21, 11
    stfd f1, 0x28(r1)
    rlwimi r5, r0, 0, 21, 31
    stfd f0, 0x30(r1)
    or r5, r6, r5
    lwz r3, 0x2c(r1)
    stb r8, -0x8000(r7)
    lwz r0, 0x34(r1)
    stw r5, -0x8000(r7)
    clrlslwi r0, r0, 21, 11
    rlwimi r0, r3, 0, 21, 31
    stb r8, -0x8000(r7)
    or r0, r4, r0
    stw r0, -0x8000(r7)
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: GDSetCurrentMtx__Q34nw4r3g3d4fifoFPCUl
extern "C" asm void GDSetCurrentMtx__Q34nw4r3g3d4fifoFPCUl() {
    nofralloc
    lwz r7, 0x0(r3)
    lis r5, 0xcc01
    li r0, 0x10
    lwz r6, 0x4(r3)
    stb r0, -0x8000(r5)
    li r4, 0x1
    lwz r8, 0x8(r3)
    slwi r7, r7, 6
    slwi r6, r6, 12
    lwz r9, 0xc(r3)
    sth r4, -0x8000(r5)
    or r6, r7, r6
    li r0, 0x1018
    slwi r8, r8, 18
    slwi r10, r9, 24
    lwz r4, 0x14(r3)
    or r9, r8, r6
    lwz r7, 0x18(r3)
    lwz r6, 0x10(r3)
    or r9, r10, r9
    lwz r8, 0x1c(r3)
    slwi r3, r4, 6
    sth r0, -0x8000(r5)
    or r0, r6, r3
    slwi r4, r7, 12
    slwi r3, r8, 18
    or r0, r4, r0
    stw r9, -0x8000(r5)
    or r0, r3, r0
    stw r0, -0x8000(r5)
    blr
}
