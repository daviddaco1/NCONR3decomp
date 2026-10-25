#include <revolution/MTX.h>

#include <math.h>

#define MTXDegToRad(a) ((a)*0.01745329252f)

static f32 Unit01[] = { 0.0f, 1.0f };

DECOMP_FORCELITERAL(mtx_c, 1.0f, 0.0f);

//unused
void C_MTXIdentity(){
}

void PSMTXIdentity(register Mtx m) {
    register f32 c_zero = 0.0f;
    register f32 c_one = 1.0f;
    register f32 c_01;
    register f32 c_10;

    ASM (
        psq_st     c_zero, 8(m),  0, 0   // m[0][2] = 0, m[0][3] = 0;
        ps_merge01 c_01, c_zero,  c_one  // c_01 = (0,0)
        psq_st     c_zero, 24(m), 0, 0   // m[]
        ps_merge10 c_10, c_one,   c_zero // c_10 = (0,0)
        psq_st     c_zero, 32(m), 0, 0
        psq_st     c_01, 16(m),   0, 0
        psq_st     c_10, 0(m),    0, 0
        psq_st     c_10, 40(m),   0, 0
    )
}

//unused
void C_MTXCopy(){
}

asm void PSMTXCopy(const register Mtx src, register Mtx dst) {
    // clang-format off
    nofralloc
    psq_l  fp0, 0(src),  0, 0
    psq_st fp0, 0(dst),  0, 0
    psq_l  fp1, 8(src),  0, 0
    psq_st fp1, 8(dst),  0, 0
    psq_l  fp2, 16(src), 0, 0
    psq_st fp2, 16(dst), 0, 0
    psq_l  fp3, 24(src), 0, 0
    psq_st fp3, 24(dst), 0, 0
    psq_l  fp4, 32(src), 0, 0
    psq_st fp4, 32(dst), 0, 0
    psq_l  fp5, 40(src), 0, 0
    psq_st fp5, 40(dst), 0, 0
    blr
    // clang-format on
}

//unused
void C_MTXConcat(){
}

asm void PSMTXConcat(const register Mtx mA, const register Mtx mB,
                     register Mtx mAB) {
    // clang-format off
    nofralloc
    stwu r1, -64(r1)
    psq_l fp0, 0(mA), 0, 0
    stfd fp14, 8(r1)
    psq_l fp6, 0(mB), 0, 0
    addis r6, 0, Unit01 @ha
    psq_l fp7, 8(mB), 0, 0
    stfd fp15, 16(r1)
    addi r6, r6, Unit01 @l
    stfd fp31, 40(r1)
    psq_l fp8, 16(mB), 0, 0
    ps_muls0 fp12, fp6, fp0
    psq_l fp2, 16(mA), 0, 0
    ps_muls0 fp13, fp7, fp0
    psq_l fp31, 0(r6), 0, 0
    ps_muls0 fp14, fp6, fp2
    psq_l fp9, 24(mB), 0, 0
    ps_muls0 fp15, fp7, fp2
    psq_l fp1, 8(mA), 0, 0
    ps_madds1 fp12, fp8, fp0, fp12
    psq_l fp3, 24(mA), 0, 0
    ps_madds1 fp14, fp8, fp2, fp14
    psq_l fp10, 32(mB), 0, 0
    ps_madds1 fp13, fp9, fp0, fp13
    psq_l fp11, 40(mB), 0, 0
    ps_madds1 fp15, fp9, fp2, fp15
    psq_l fp4, 32(mA), 0, 0
    psq_l fp5, 40(mA), 0, 0
    ps_madds0 fp12, fp10, fp1, fp12
    ps_madds0 fp13, fp11, fp1, fp13
    ps_madds0 fp14, fp10, fp3, fp14
    ps_madds0 fp15, fp11, fp3, fp15
    psq_st fp12, 0(mAB), 0, 0
    ps_muls0 fp2, fp6, fp4
    ps_madds1 fp13, fp31, fp1, fp13
    ps_muls0 fp0, fp7, fp4
    psq_st fp14, 16(mAB), 0, 0
    ps_madds1 fp15, fp31, fp3, fp15
    psq_st fp13, 8(mAB), 0, 0
    ps_madds1 fp2, fp8, fp4, fp2
    ps_madds1 fp0, fp9, fp4, fp0
    ps_madds0 fp2, fp10, fp5, fp2
    lfd fp14, 8(r1)
    psq_st fp15, 24(mAB), 0, 0
    ps_madds0 fp0, fp11, fp5, fp0
    psq_st fp2, 32(mAB), 0, 0
    ps_madds1 fp0, fp31, fp5, fp0
    lfd fp15, 16(r1)
    psq_st fp0, 40(mAB), 0, 0
    lfd fp31, 40(r1)
    addi r1, r1, 64
    blr
    // clang-format on
}

//unused
void C_MTXConcatArray(){
}

// PSMTXConcatArray: definicion C reemplazada por asm (ver abajo)


//unused
void C_MTXTranspose(){
}

void PSMTXTranspose(const register Mtx src, register Mtx xPose) {
    register f32 c_zero = 0.0f;
    register f32 row0a, row1a, row0b, row1b;
    register f32 trns0, trns1, trns2;

    ASM (
        psq_l       row0a, 0(src),  0, 0
        stfs        c_zero, 44(xPose)
        psq_l       row1a, 16(src), 0, 0
        ps_merge00  trns0, row0a, row1a
        psq_l       row0b, 8(src),  1, 0
        ps_merge11  trns1, row0a, row1a
        psq_l       row1b, 24(src), 1, 0
        psq_st      trns0, 0(xPose),  0, 0
        psq_l       row0a, 32(src), 0, 0
        ps_merge00  trns2, row0b, row1b
        psq_st      trns1, 16(xPose), 0, 0
        ps_merge00  trns0, row0a, c_zero
        psq_st      trns2, 32(xPose), 0, 0
        ps_merge10  trns1, row0a, c_zero
        psq_st      trns0, 8(xPose),  0, 0
        lfs         row0b, 40(src)
        psq_st      trns1, 24(xPose), 0, 0
        stfs        row0b, 40(xPose)
    )
}

//unused
void C_MTXInverse(){
}

asm u32 PSMTXInverse(const register Mtx src, register Mtx inv) {
    // clang-format off
    nofralloc
    psq_l fp0, 0(src), 1, 0
    psq_l fp1, 4(src), 0, 0
    psq_l fp2, 16(src), 1, 0
    ps_merge10 fp6, fp1, fp0
    psq_l fp3, 20(src), 0, 0
    psq_l fp4, 32(src), 1, 0
    ps_merge10 fp7, fp3, fp2
    psq_l fp5, 36(src), 0, 0
    ps_mul fp11, fp3, fp6
    ps_merge10 fp8, fp5, fp4
    ps_mul fp13, fp5, fp7
    ps_msub fp11, fp1, fp7, fp11
    ps_mul fp12, fp1, fp8
    ps_msub fp13, fp3, fp8, fp13
    ps_mul fp10, fp3, fp4
    ps_msub fp12, fp5, fp6, fp12
    ps_mul fp7, fp0, fp13
    ps_mul fp9, fp0, fp5
    ps_mul fp8, fp1, fp2
    ps_madd fp7, fp2, fp12, fp7
    ps_sub fp6, fp6, fp6
    ps_msub fp10, fp2, fp5, fp10
    ps_madd fp7, fp4, fp11, fp7
    ps_msub fp9, fp1, fp4, fp9
    ps_msub fp8, fp0, fp3, fp8
    ps_cmpo0 cr0, fp7, fp6
    bne loc0
    addi r3, 0, 0
    blr
loc0:
    fres fp0, fp7
    ps_add fp6, fp0, fp0
    ps_mul fp5, fp7, fp0
    ps_nmsub fp0, fp0, fp5, fp6
    lfs fp1, 12(src)
    ps_muls0 fp13, fp13, fp0
    lfs fp2, 28(src)
    ps_muls0 fp12, fp12, fp0
    lfs fp3, 44(src)
    ps_muls0 fp11, fp11, fp0
    ps_merge00 fp5, fp13, fp12
    ps_merge11 fp4, fp13, fp12
    ps_mul fp6, fp13, fp1
    psq_st fp5, 0(inv), 0, 0
    psq_st fp4, 16(inv), 0, 0
    ps_muls0 fp10, fp10, fp0
    ps_muls0 fp9, fp9, fp0
    ps_madd fp6, fp12, fp2, fp6
    psq_st fp10, 32(inv), 1, 0
    ps_muls0 fp8, fp8, fp0
    ps_nmadd fp6, fp11, fp3, fp6
    psq_st fp9, 36(inv), 1, 0
    ps_mul fp7, fp10, fp1
    ps_merge00 fp5, fp11, fp6
    psq_st fp8, 40(inv), 1, 0
    ps_madd fp7, fp9, fp2, fp7
    ps_merge11 fp4, fp11, fp6
    psq_st fp5, 8(inv), 0, 0
    ps_nmadd fp7, fp8, fp3, fp7
    psq_st fp4, 24(inv), 0, 0
    psq_st fp7, 44(inv), 1, 0
    addi r3, 0, 1
    blr
    // clang-format on
}

//unused
void C_MTXRotRad(){
}

// PSMTXRotRad: definicion C reemplazada por asm (ver abajo)


//unused
void C_MTXRotTrig(){
}

// PSMTXRotTrig: definicion C reemplazada por asm (ver abajo)


//unused
void C_MTXRotAxisRad(){
}

// __PSMTXRotAxisRadInternal: definicion C reemplazada por asm (ver abajo)


// PSMTXRotAxisRad: definicion C reemplazada por asm (ver abajo)


//unused
void C_MTXTrans(){
}

void PSMTXTrans(register Mtx m, register f32 xT, register f32 yT,
                register f32 zT) {
    register f32 c0 = 0.0f;
    register f32 c1 = 1.0f;

    ASM (
        stfs xT, 12(m)
        stfs yT, 28(m)
        psq_st c0, 4(m), 0, 0
        psq_st c0, 32(m), 0, 0
        stfs c0, 16(m)
        stfs c1, 20(m)
        stfs c0, 24(m)
        stfs c1, 40(m)
        stfs zT, 44(m)
        stfs c1, 0(m)
    )
}

//unused
void C_MTXTransApply(){
}

asm void PSMTXTransApply(const register Mtx src, register Mtx dst,
                         register f32 xT, register f32 yT, register f32 zT) {
    // clang-format off
    nofralloc
    psq_l fp4, 0(src), 0, 0
    frsp xT, xT
    psq_l fp5, 8(src), 0, 0
    frsp yT, yT
    psq_l fp7, 24(src), 0, 0
    frsp zT, zT

    psq_l fp8, 40(src), 0, 0
    psq_st fp4, 0(dst), 0, 0
    ps_sum1 fp5, xT, fp5, fp5

    psq_l fp6, 16(src), 0, 0
    psq_st fp5, 8(dst), 0, 0
    ps_sum1 fp7, yT, fp7, fp7

    psq_l fp9, 32(src), 0, 0
    psq_st fp6, 16(dst), 0, 0
    ps_sum1 fp8, zT, fp8, fp8

    psq_st fp7, 24(dst), 0, 0
    psq_st fp9, 32(dst), 0, 0
    psq_st fp8, 40(dst), 0, 0
    blr
    // clang-format on
}

//unused
void C_MTXScale(){
}

void PSMTXScale(register Mtx m, register f32 xS, register f32 yS,
                register f32 zS) {
    register f32 c0 = 0.0f;

    ASM (
        stfs xS, 0(m)
        psq_st c0, 4(m), 0, 0
        psq_st c0, 12(m), 0, 0
        stfs yS, 20(m)
        psq_st c0, 24(m), 0, 0
        psq_st c0, 32(m), 0, 0
        stfs zS, 40(m)
        stfs c0, 44(m)
    )
}

//unused
void C_MTXScaleApply(){
}

asm void PSMTXScaleApply(const register Mtx src, register Mtx dst,
                         register f32 xS, register f32 yS, register f32 zS) {
    // clang-format off
    nofralloc
    frsp xS, xS
    psq_l fp4, 0(src), 0, 0
    frsp yS, yS
    psq_l fp5, 8(src), 0, 0
    frsp zS, zS

    ps_muls0 fp4, fp4, xS
    psq_l fp6, 16(src), 0, 0
    ps_muls0 fp5, fp5, xS
    psq_l fp7, 24(src), 0, 0

    ps_muls0 fp6, fp6, yS
    psq_l fp8, 32(src), 0, 0
    psq_st fp4, 0(dst), 0, 0
    ps_muls0 fp7, fp7, yS
    psq_l fp2, 40(src), 0, 0
    psq_st fp5, 8(dst), 0, 0
    ps_muls0 fp8, fp8, zS
    psq_st fp6, 16(dst), 0, 0
    ps_muls0 fp2, fp2, zS
    psq_st fp7, 24(dst), 0, 0
    psq_st fp8, 32(dst), 0, 0
    psq_st fp2, 40(dst), 0, 0
    blr
    // clang-format on
}

//unused
void C_MTXQuat(){
}

// PSMTXQuat: definicion C reemplazada por asm (ver abajo)


//unused
void C_MTXReflect(){
}

//unused
void PSMTXReflect(){
}

// C_MTXLookAt: definicion C reemplazada por asm (ver abajo)


// C_MTXLightFrustum: definicion C reemplazada por asm (ver abajo)


// C_MTXLightPerspective: definicion C reemplazada por asm (ver abajo)


// C_MTXLightOrtho: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049D148;
extern float lbl_804A2700;
extern float lbl_804A2704;
extern float lbl_804A2708;
extern float lbl_804A270C;
extern float lbl_804A2710;
extern float lbl_804A2714;
extern float lbl_804A2718;
extern void fn_8030DE44();
extern void fn_8030DEEC();

// asm_to_cpp: PSMTXConcatArray
asm void PSMTXConcatArray(const register Mtx mtx1, const register Mtx mtx2,
                      register Mtx mtx3, register u32 vv4) {
    nofralloc
    stwu r1, -0x60(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stfd f29, 0x30(r1)
    opword 0xF3A10038
    stfd f28, 0x20(r1)
    opword 0xF3810028
    stfd f27, 0x10(r1)
    opword 0xF3610018
    subi r0, r6, 0x1
    opword 0xE0030000
    opword 0xE0230008
    la r6, lbl_8049D148
    opword 0xE0430010
    opword 0xE0630018
    opword 0xE0830020
    opword 0xE0A30028
    mtctr r0
    opword 0xE0C40000
    opword 0xE0E40008
    opword 0x11860018
    opword 0xE1040010
    opword 0x13E60098
    opword 0xE1440020
    opword 0x13A60118
    opword 0xE1240018
    opword 0x1188601E
    opword 0xE3660000
    opword 0x13E8F89E
    opword 0xE1640028
    opword 0x13A8E91E
    opword 0x11A70018
    opword 0x13C70098
    opword 0x13870118
    opword 0x118A605C
    opword 0x13EAF8DC
    opword 0x13AAE95C
    opword 0x11A9681E
    opword 0xF1850000
    opword 0x13C9F09E
    opword 0x1389E11E
    opword 0xF3E50010
lbl_8030CE1C:
    opword 0x11AB685C
    opword 0xE0C40030
    opword 0x13CBF0DC
    opword 0xF3A50020
    opword 0x138BE15C
    opword 0xE1040040
    opword 0x11BB687A
    opword 0xE1440050
    opword 0x11860018
    opword 0xE0E40038
    opword 0x13E60098
    opword 0xE1240048
    opword 0xF1A50008
    opword 0x13DBF0FA
    opword 0x1188601E
    opword 0xE1640058
    opword 0x13A60118
    addi r4, r4, 0x30
    opword 0xF3C50018
    opword 0x139BE17A
    opword 0x13E8F89E
    opword 0x13A8E91E
    opword 0xF3850028
    opword 0x118A605C
    opword 0x11A70018
    opword 0x13C70098
    opword 0x13870118
    opword 0xF1850030
    opword 0x13EAF8DC
    opword 0x13AAE95C
    opword 0x11A9681E
    opword 0xF3E50040
    opword 0x13C9F09E
    opword 0x1389E11E
    addi r5, r5, 0x30
    bdnz lbl_8030CE1C
    opword 0x11AB685C
    opword 0xF3A50020
    opword 0x13CBF0DC
    opword 0x138BE15C
    opword 0x11BB687A
    opword 0x13DBF0FA
    opword 0x139BE17A
    opword 0xF1A50008
    opword 0xF3C50018
    opword 0xF3850028
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    lfd f30, 0x40(r1)
    opword 0xE3A10038
    lfd f29, 0x30(r1)
    opword 0xE3810028
    lfd f28, 0x20(r1)
    opword 0xE3610018
    lfd f27, 0x10(r1)
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: PSMTXRotRad
asm void PSMTXRotRad(Mtx m, char axis, f32 rad) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stfd f30, 0x10(r1)
    opword 0xF3C10018
    fmr f30, f1
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl sin
    frsp f31, f1
    fmr f1, f30
    bl cos
    frsp f2, f1
    mr r3, r30
    fmr f1, f31
    extsb r4, r31
    bl PSMTXRotTrig
    opword 0xE3E10028
    lfd f31, 0x20(r1)
    opword 0xE3C10018
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x34(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: PSMTXRotTrig
asm void PSMTXRotTrig(register Mtx m, register f32 sinA, register f32 cosA,
                  register char arg2) {
    nofralloc
    frsp f5, f1
    ori r0, r4, 0x20
    frsp f4, f2
    cmplwi r0, 0x78
    lfs f0, lbl_804A2704
    opword 0x10402850
    lfs f1, lbl_804A2700
    beq lbl_8030D0FC
    cmplwi r0, 0x79
    beq lbl_8030D124
    cmplwi r0, 0x7a
    beq lbl_8030D150
    blr
lbl_8030D0FC:
    opword 0x10652420
    opword 0xF0238000
    opword 0x10241420
    opword 0xF0030004
    opword 0xF003000C
    opword 0xF003001C
    opword 0xF003802C
    opword 0xF0630024
    opword 0xF0230014
    blr
lbl_8030D124:
    opword 0x10640420
    opword 0xF0030018
    opword 0x10200C20
    opword 0x10420420
    opword 0x10050420
    opword 0xF0630000
    opword 0xF0630028
    opword 0xF0230010
    opword 0xF0030008
    opword 0xF0430020
    blr
lbl_8030D150:
    opword 0x10652420
    opword 0xF0030008
    opword 0x10441420
    opword 0x10210420
    opword 0xF0030018
    opword 0xF0030020
    opword 0xF0630010
    opword 0xF0430000
    opword 0xF0230028
    blr
}

// asm_to_cpp: __PSMTXRotAxisRadInternal
asm void __PSMTXRotAxisRadInternal(register Mtx m, const register Vec* axis,
                               register f32 sT, register f32 cT) {
    nofralloc
    opword 0xE0640000
    frsp f11, f2
    lfs f10, lbl_804A2708
    frsp f12, f1
    opword 0x108300F2
    lfs f2, 0x8(r4)
    fadds f8, f10, f10
    lfs f9, lbl_804A270C
    fsubs f1, f10, f10
    opword 0x10A220BA
    fsubs f0, f8, f11
    opword 0x116B5C20
    opword 0x10C52094
    frsqrte f7, f6
    fmuls f4, f7, f7
    fmuls f5, f7, f10
    fnmsubs f4, f4, f6, f9
    fmuls f7, f4, f5
    opword 0x106301D8
    opword 0x104201D8
    opword 0x10C30018
    opword 0x10E20018
    opword 0x11430318
    opword 0x10A600DA
    opword 0x108600D8
    opword 0x10C60098
    fnmsubs f0, f2, f12, f5
    opword 0x10605050
    fmadds f8, f2, f12, f5
    opword 0x10845814
    opword 0x10033054
    opword 0x10E70098
    opword 0x11265054
    opword 0xF0830000
    opword 0x10661994
    opword 0x10AB2A16
    opword 0xF0030018
    opword 0x10E75854
    opword 0x10CA30D6
    opword 0xF1230008
    opword 0xF0A30010
    opword 0xF0C30020
    opword 0xF0E30028
    blr
}

// asm_to_cpp: PSMTXRotAxisRad
asm void PSMTXRotAxisRad(Mtx m, const Vec* axis, f32 rad) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stfd f30, 0x10(r1)
    opword 0xF3C10018
    fmr f30, f1
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl sin
    frsp f31, f1
    fmr f1, f30
    bl cos
    frsp f2, f1
    mr r3, r30
    fmr f1, f31
    mr r4, r31
    bl __PSMTXRotAxisRadInternal
    opword 0xE3E10028
    lfd f31, 0x20(r1)
    opword 0xE3C10018
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x34(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: PSMTXQuat
asm void PSMTXQuat(register Mtx m, const register Quaternion* q) {
    nofralloc
    opword 0xE0840000
    opword 0xE0A40008
    opword 0x10C40132
    lfs f1, lbl_804A2700
    opword 0x112424A0
    fsubs f0, f1, f1
    opword 0x1105317A
    opword 0x1145015A
    fadds f2, f1, f1
    opword 0xF003800C
    opword 0x10684214
    opword 0x10E50172
    opword 0xF003802C
    opword 0x1184527A
    fres f13, f3
    opword 0x1063137C
    opword 0x1169015A
    opword 0x11445278
    opword 0x106D00F2
    opword 0x1124595C
    opword 0x11073216
    fmuls f3, f3, f2
    opword 0x116B48BC
    opword 0x10C63194
    opword 0x112900F2
    opword 0x116B00F2
    opword 0x110808FC
    opword 0x118C00F2
    opword 0xF1238008
    opword 0x114A00F2
    opword 0x10EB04A0
    opword 0x10AC4420
    opword 0x108854A0
    opword 0x11AB4C60
    opword 0xF0E30018
    opword 0x10C608FC
    opword 0xF0A30010
    opword 0xF0C38028
    opword 0xF0830000
    opword 0xF1A30020
    blr
}

// asm_to_cpp: C_MTXLookAt
asm void C_MTXLookAt(Mtx m, const Vec* camPos, const Vec* camUp, const Vec* target) {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f1, 0x0(r4)
    stw r0, 0x44(r1)
    lfs f0, 0x0(r6)
    stw r31, 0x3c(r1)
    mr r31, r5
    fsubs f4, f1, f0
    lfs f3, 0x4(r4)
    stw r30, 0x38(r1)
    mr r30, r4
    lfs f2, 0x4(r6)
    stw r29, 0x34(r1)
    fsubs f2, f3, f2
    lfs f1, 0x8(r4)
    lfs f0, 0x8(r6)
    mr r29, r3
    addi r3, r1, 0x20
    stfs f4, 0x20(r1)
    fsubs f0, f1, f0
    stfs f2, 0x24(r1)
    mr r4, r3
    stfs f0, 0x28(r1)
    bl fn_8030DE44
    mr r3, r31
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_8030DEEC
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8030DE44
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_8030DEEC
    lfs f0, 0x14(r1)
    lfs f4, 0x0(r30)
    stfs f0, 0x0(r29)
    lfs f3, 0x4(r30)
    lfs f0, 0x18(r1)
    lfs f5, 0x8(r30)
    stfs f0, 0x4(r29)
    lfs f0, 0x1c(r1)
    stfs f0, 0x8(r29)
    lfs f1, 0x14(r1)
    lfs f0, 0x18(r1)
    fmuls f1, f4, f1
    lfs f2, 0x1c(r1)
    fmuls f0, f3, f0
    fmuls f2, f5, f2
    fadds f0, f1, f0
    fadds f0, f2, f0
    fneg f0, f0
    stfs f0, 0xc(r29)
    lfs f0, 0x8(r1)
    stfs f0, 0x10(r29)
    lfs f0, 0xc(r1)
    stfs f0, 0x14(r29)
    lfs f0, 0x10(r1)
    stfs f0, 0x18(r29)
    lfs f1, 0x8(r1)
    lfs f0, 0xc(r1)
    lfs f2, 0x10(r1)
    fmuls f1, f4, f1
    fmuls f0, f3, f0
    fmuls f2, f5, f2
    fadds f0, f1, f0
    fadds f0, f2, f0
    fneg f0, f0
    stfs f0, 0x1c(r29)
    lfs f0, 0x20(r1)
    stfs f0, 0x20(r29)
    lfs f0, 0x24(r1)
    stfs f0, 0x24(r29)
    lfs f0, 0x28(r1)
    stfs f0, 0x28(r29)
    lfs f1, 0x20(r1)
    lfs f0, 0x24(r1)
    lfs f2, 0x28(r1)
    fmuls f1, f4, f1
    fmuls f0, f3, f0
    fmuls f2, f5, f2
    fadds f0, f1, f0
    fadds f0, f2, f0
    fneg f0, f0
    stfs f0, 0x2c(r29)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: C_MTXLightFrustum
asm void C_MTXLightFrustum(Mtx m, f32 t, f32 b, f32 l, f32 r, f32 n,
                       f32 scaleS, f32 scaleT, f32 transS, f32 transT) {
    nofralloc
    stwu r1, -0x20(r1)
    stfd f31, 0x10(r1)
    opword 0xF3E10018
    fsubs f0, f4, f3
    lfs f10, lbl_804A2704
    lfs f12, lbl_804A2700
    fsubs f9, f1, f2
    lfs f11, lbl_804A2710
    fadds f3, f4, f3
    fdivs f13, f12, f0
    lfs f0, lbl_804A2714
    lfs f31, 0x28(r1)
    stfs f0, 0x28(r3)
    stfs f10, 0x4(r3)
    stfs f10, 0xc(r3)
    fmuls f4, f11, f5
    stfs f10, 0x10(r3)
    fadds f0, f1, f2
    fmuls f1, f13, f3
    stfs f10, 0x1c(r3)
    fdivs f5, f12, f9
    stfs f10, 0x20(r3)
    stfs f10, 0x24(r3)
    stfs f10, 0x2c(r3)
    fmuls f2, f6, f1
    fmuls f0, f5, f0
    fmuls f3, f4, f13
    fmuls f1, f4, f5
    fmuls f0, f7, f0
    fmuls f3, f6, f3
    fsubs f2, f2, f8
    fmuls f1, f7, f1
    fsubs f0, f0, f31
    stfs f3, 0x0(r3)
    stfs f2, 0x8(r3)
    stfs f1, 0x14(r3)
    stfs f0, 0x18(r3)
    opword 0xE3E10018
    lfd f31, 0x10(r1)
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: C_MTXLightPerspective
asm void C_MTXLightPerspective(Mtx m, f32 fovY, f32 aspect, f32 scaleS, f32 scaleT,
                           f32 transS, f32 transT) {
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
    stfd f28, 0x20(r1)
    opword 0xF3810028
    stfd f27, 0x10(r1)
    opword 0xF3610018
    fmr f27, f2
    lfs f7, lbl_804A2708
    fmr f28, f3
    stw r31, 0xc(r1)
    fmr f29, f4
    fmuls f1, f7, f1
    lfs f0, lbl_804A2718
    fmr f30, f5
    fmr f31, f6
    mr r31, r3
    fmuls f1, f0, f1
    bl tan
    frsp f5, f1
    lfs f3, lbl_804A2704
    lfs f4, lbl_804A2700
    fneg f1, f31
    lfs f0, lbl_804A2714
    fneg f2, f30
    fdivs f4, f4, f5
    stfs f1, 0x18(r31)
    stfs f0, 0x28(r31)
    stfs f3, 0x4(r31)
    stfs f2, 0x8(r31)
    stfs f3, 0xc(r31)
    fdivs f1, f4, f27
    stfs f3, 0x10(r31)
    stfs f3, 0x1c(r31)
    stfs f3, 0x20(r31)
    stfs f3, 0x24(r31)
    stfs f3, 0x2c(r31)
    fmuls f1, f28, f1
    fmuls f0, f4, f29
    stfs f1, 0x0(r31)
    stfs f0, 0x14(r31)
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    lfd f30, 0x40(r1)
    opword 0xE3A10038
    lfd f29, 0x30(r1)
    opword 0xE3810028
    lfd f28, 0x20(r1)
    opword 0xE3610018
    lfd f27, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: C_MTXLightOrtho
asm void C_MTXLightOrtho(Mtx m, f32 t, f32 b, f32 l, f32 r, f32 scaleS,
                     f32 scaleT, f32 transS, f32 transT) {
    nofralloc
    fsubs f11, f4, f3
    lfs f9, lbl_804A2704
    lfs f10, lbl_804A2700
    fsubs f0, f1, f2
    fadds f3, f4, f3
    lfs f4, lbl_804A2710
    fdivs f12, f10, f11
    stfs f9, 0x4(r3)
    stfs f9, 0x8(r3)
    stfs f9, 0x10(r3)
    stfs f9, 0x18(r3)
    stfs f9, 0x20(r3)
    fdivs f11, f10, f0
    stfs f9, 0x24(r3)
    stfs f9, 0x28(r3)
    stfs f10, 0x2c(r3)
    fadds f0, f1, f2
    fneg f1, f3
    fmuls f3, f4, f12
    fneg f0, f0
    fmuls f2, f12, f1
    fmuls f1, f4, f11
    fmuls f0, f11, f0
    fmuls f2, f5, f2
    fmuls f3, f3, f5
    fmuls f0, f6, f0
    fadds f2, f7, f2
    fmuls f1, f1, f6
    stfs f3, 0x0(r3)
    fadds f0, f8, f0
    stfs f2, 0xc(r3)
    stfs f1, 0x14(r3)
    stfs f0, 0x1c(r3)
    blr
}
