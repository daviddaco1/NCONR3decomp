#include "nw4r/g3d.h" // IWYU pragma: export

namespace nw4r {
namespace g3d {
namespace detail {
namespace dcc {
namespace {

void MakeTexSrtMtx_S(math::MTX34 *pMtx, const TexSrt &rSrt) {
    pMtx->_00 = rSrt.Su;
    pMtx->_01 = 0.0f;
    pMtx->_02 = 0.0f;
    pMtx->_03 = 0.5f * (1.0f - rSrt.Su);

    pMtx->_10 = 0.0f;
    pMtx->_11 = rSrt.Sv;
    pMtx->_12 = 0.0f;
    pMtx->_13 = 0.5f * (1.0f - rSrt.Sv);
}

void MakeTexSrtMtx_R(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    pMtx->_00 = cosR;
    pMtx->_01 = sinR;
    pMtx->_02 = 0.0f;
    pMtx->_03 = -0.5f * (cosR + sinR - 1.0f);

    pMtx->_10 = -sinR;
    pMtx->_11 = cosR;
    pMtx->_12 = 0.0f;
    pMtx->_13 = -0.5f * (-sinR + cosR - 1.0f);
}

void MakeTexSrtMtx_T(math::MTX34 *pMtx, const TexSrt &rSrt) {
    pMtx->_00 = 1.0f;
    pMtx->_01 = 0.0f;
    pMtx->_02 = 0.0f;
    pMtx->_03 = -rSrt.Tu;

    pMtx->_10 = 0.0f;
    pMtx->_11 = 1.0f;
    pMtx->_12 = 0.0f;
    pMtx->_13 = rSrt.Tv;
}

void MakeTexSrtMtx_SR(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    f32 sucr = rSrt.Su * cosR;
    f32 susr = rSrt.Su * sinR;
    f32 svcr = rSrt.Sv * cosR;
    f32 svsr = rSrt.Sv * sinR;

    pMtx->_00 = sucr;
    pMtx->_01 = susr;
    pMtx->_02 = 0.0f;
    pMtx->_03 = -0.5f * (sucr + susr - 1.0f);

    pMtx->_10 = -svsr;
    pMtx->_11 = svcr;
    pMtx->_12 = 0.0f;
    pMtx->_13 = -0.5f * (-svsr + svcr - 1.0f);
}

void MakeTexSrtMtx_RT(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    pMtx->_00 = cosR;
    pMtx->_01 = sinR;
    pMtx->_02 = 0.0f;
    pMtx->_03 = -cosR * (0.5f + rSrt.Tu) + sinR * (rSrt.Tv - 0.5f) + 0.5f;

    pMtx->_10 = -sinR;
    pMtx->_11 = cosR;
    pMtx->_12 = 0.0f;
    pMtx->_13 = sinR * (0.5f + rSrt.Tu) + cosR * (rSrt.Tv - 0.5f) + 0.5f;
}

void MakeTexSrtMtx_ST(math::MTX34 *pMtx, const TexSrt &rSrt) {
    pMtx->_00 = rSrt.Su;
    pMtx->_01 = 0.0f;
    pMtx->_02 = 0.0f;
    pMtx->_03 = -rSrt.Su * (0.5f + rSrt.Tu) + 0.5f;

    pMtx->_10 = 0.0f;
    pMtx->_11 = rSrt.Sv;
    pMtx->_12 = 0.0f;
    pMtx->_13 = rSrt.Sv * (rSrt.Tv - 0.5f) + 0.5f;
}

void MakeTexSrtMtx_SRT(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    f32 sucr = rSrt.Su * cosR;
    f32 susr = rSrt.Su * sinR;
    f32 svcr = rSrt.Sv * cosR;
    f32 svsr = rSrt.Sv * sinR;

    pMtx->_00 = sucr;
    pMtx->_01 = susr;
    pMtx->_02 = 0.0f;
    pMtx->_03 = -sucr * (0.5f + rSrt.Tu) + susr * (rSrt.Tv - 0.5f) + 0.5f;

    pMtx->_10 = -svsr;
    pMtx->_11 = svcr;
    pMtx->_12 = 0.0f;
    pMtx->_13 = svsr * (0.5f + rSrt.Tu) + svcr * (rSrt.Tv - 0.5f) + 0.5f;
}

void ProductTexSrtMtx_S(math::MTX34 *pMtx, const TexSrt &rSrt) {
    pMtx->_00 *= rSrt.Su;
    pMtx->_01 *= rSrt.Su;
    pMtx->_02 *= rSrt.Su;
    pMtx->_03 = rSrt.Su * (pMtx->_03 - 0.5f) + 0.5f;

    pMtx->_10 *= rSrt.Sv;
    pMtx->_11 *= rSrt.Sv;
    pMtx->_12 *= rSrt.Sv;
    pMtx->_13 = rSrt.Sv * (pMtx->_13 - 0.5f) + 0.5f;
}

void ProductTexSrtMtx_R(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    f32 _0x, _1x;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    _0x = cosR * pMtx->_00 + sinR * pMtx->_10;
    _1x = -sinR * pMtx->_00 + cosR * pMtx->_10;
    pMtx->_00 = _0x;
    pMtx->_10 = _1x;

    _0x = cosR * pMtx->_01 + sinR * pMtx->_11;
    _1x = -sinR * pMtx->_01 + cosR * pMtx->_11;
    pMtx->_01 = _0x;
    pMtx->_11 = _1x;

    _0x = cosR * pMtx->_02 + sinR * pMtx->_12;
    _1x = -sinR * pMtx->_02 + cosR * pMtx->_12;
    pMtx->_02 = _0x;
    pMtx->_12 = _1x;

    _0x = cosR * (pMtx->_03 - 0.5f) + sinR * (pMtx->_13 - 0.5f) + 0.5f;
    _1x = -sinR * (pMtx->_03 - 0.5f) + cosR * (pMtx->_13 - 0.5f) + 0.5f;
    pMtx->_03 = _0x;
    pMtx->_13 = _1x;
}

void ProductTexSrtMtx_T(math::MTX34 *pMtx, const TexSrt &rSrt) {
    pMtx->_03 -= rSrt.Tu;
    pMtx->_13 += rSrt.Tv;
}

void ProductTexSrtMtx_SR(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    f32 _0x, _1x;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    f32 sucr = rSrt.Su * cosR;
    f32 susr = rSrt.Su * sinR;
    f32 svcr = rSrt.Sv * cosR;
    f32 svsr = rSrt.Sv * sinR;

    _0x = sucr * pMtx->_00 + susr * pMtx->_10;
    _1x = -svsr * pMtx->_00 + svcr * pMtx->_10;
    pMtx->_00 = _0x;
    pMtx->_10 = _1x;

    _0x = sucr * pMtx->_01 + susr * pMtx->_11;
    _1x = -svsr * pMtx->_01 + svcr * pMtx->_11;
    pMtx->_01 = _0x;
    pMtx->_11 = _1x;

    _0x = sucr * pMtx->_02 + susr * pMtx->_12;
    _1x = -svsr * pMtx->_02 + svcr * pMtx->_12;
    pMtx->_02 = _0x;
    pMtx->_12 = _1x;

    _0x = sucr * (pMtx->_03 - 0.5f) + susr * (pMtx->_13 - 0.5f) + 0.5f;
    _1x = -svsr * (pMtx->_03 - 0.5f) + svcr * (pMtx->_13 - 0.5f) + 0.5f;

    pMtx->_03 = _0x;
    pMtx->_13 = _1x;
}

void ProductTexSrtMtx_RT(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    f32 _0x, _1x;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    _0x = cosR * pMtx->_00 + sinR * pMtx->_10;
    _1x = -sinR * pMtx->_00 + cosR * pMtx->_10;
    pMtx->_00 = _0x;
    pMtx->_10 = _1x;

    _0x = cosR * pMtx->_01 + sinR * pMtx->_11;
    _1x = -sinR * pMtx->_01 + cosR * pMtx->_11;
    pMtx->_01 = _0x;
    pMtx->_11 = _1x;

    _0x = cosR * pMtx->_02 + sinR * pMtx->_12;
    _1x = -sinR * pMtx->_02 + cosR * pMtx->_12;
    pMtx->_02 = _0x;
    pMtx->_12 = _1x;

    _0x = cosR * (pMtx->_03 - rSrt.Tu - 0.5f) + sinR * (pMtx->_13 + rSrt.Tv - 0.5f) + 0.5f;

    _1x = -sinR * (pMtx->_03 - rSrt.Tu - 0.5f) + cosR * (pMtx->_13 + rSrt.Tv - 0.5f) + 0.5f;

    pMtx->_03 = _0x;
    pMtx->_13 = _1x;
}

void ProductTexSrtMtx_ST(math::MTX34 *pMtx, const TexSrt &rSrt) {
    pMtx->_00 *= rSrt.Su;
    pMtx->_01 *= rSrt.Su;
    pMtx->_02 *= rSrt.Su;
    pMtx->_03 = rSrt.Su * (pMtx->_03 - rSrt.Tu - 0.5f) + 0.5f;

    pMtx->_10 *= rSrt.Sv;
    pMtx->_11 *= rSrt.Sv;
    pMtx->_12 *= rSrt.Sv;
    pMtx->_13 *= rSrt.Sv * (pMtx->_13 + rSrt.Tv - 0.5f) + 0.5f;
}

void ProductTexSrtMtx_SRT(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    f32 _0x, _1x;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    f32 sucr = rSrt.Su * cosR;
    f32 susr = rSrt.Su * sinR;
    f32 svcr = rSrt.Sv * cosR;
    f32 svsr = rSrt.Sv * sinR;

    _0x = sucr * pMtx->_00 + susr * pMtx->_10;
    _1x = -svsr * pMtx->_00 + svcr * pMtx->_10;
    pMtx->_00 = _0x;
    pMtx->_10 = _1x;

    _0x = sucr * pMtx->_01 + susr * pMtx->_11;
    _1x = -svsr * pMtx->_01 + svcr * pMtx->_11;
    pMtx->_01 = _0x;
    pMtx->_11 = _1x;

    _0x = sucr * pMtx->_02 + susr * pMtx->_12;
    _1x = -svsr * pMtx->_02 + svcr * pMtx->_12;
    pMtx->_02 = _0x;
    pMtx->_12 = _1x;

    _0x = sucr * (pMtx->_03 - rSrt.Tu - 0.5f) + susr * (pMtx->_13 + rSrt.Tv - 0.5f) + 0.5f;

    _1x = -svsr * (pMtx->_03 - rSrt.Tu - 0.5f) + svcr * (pMtx->_13 + rSrt.Tv - 0.5f) + 0.5f;

    pMtx->_03 = _0x;
    pMtx->_13 = _1x;
}

} // namespace

typedef void (*CalcTexMtxFunc)(math::MTX34 *pMtx, const TexSrt &rSrt);

bool CalcTexMtx_3dsmax(math::MTX34 *pMtx, bool set, const TexSrt &rSrt, TexSrt::Flag flag) {
    // Extract S/R/T flags
    u32 index = flag >> 1 & 0b111;

    // Scale-one, no rotate/trans
    if (index == 0b111) {
        return false;
    }

    if (set) {
        static const CalcTexMtxFunc funcTable[] = {
            MakeTexSrtMtx_SRT, // 0 0 0
            MakeTexSrtMtx_RT,  // 0 0 1
            MakeTexSrtMtx_ST,  // 0 1 0
            MakeTexSrtMtx_T,   // 0 1 1
            MakeTexSrtMtx_SR,  // 1 0 0
            MakeTexSrtMtx_R,   // 1 0 1
            MakeTexSrtMtx_S    // 1 1 0
        };

        funcTable[index](pMtx, rSrt);
    } else {
        static const CalcTexMtxFunc funcTable[] = {
            ProductTexSrtMtx_SRT, // 0 0 0
            ProductTexSrtMtx_RT,  // 0 0 1
            ProductTexSrtMtx_ST,  // 0 1 0
            ProductTexSrtMtx_T,   // 0 1 1
            ProductTexSrtMtx_SR,  // 1 0 0
            ProductTexSrtMtx_R,   // 1 0 1
            ProductTexSrtMtx_S    // 1 1 0
        };

        funcTable[index](pMtx, rSrt);
    }

    pMtx->_20 = 0.0f;
    pMtx->_21 = 0.0f;
    pMtx->_22 = 1.0f;
    pMtx->_23 = 0.0f;

    return true;
}

} // namespace dcc
} // namespace detail
} // namespace g3d
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_804A1E30;
extern "C" float lbl_804A1E34;
extern "C" float lbl_804A1E38;
extern "C" float lbl_804A1E3C;
extern "C" float lbl_804A1E40;
extern "C" void SinCosFIdx__Q24nw4r4mathFPfPff();
extern "C" void fn_801EB718();
extern "C" void fn_801EB760();
extern "C" void fn_801EB80C();
extern "C" void fn_801EB844();
extern "C" void fn_801EB8F8();
extern "C" void fn_801EB9C4();
extern "C" void fn_801EBA1C();
extern "C" void fn_801EBAE8();
extern "C" void fn_801EBB68();
extern "C" void fn_801EBC8C();
extern "C" void fn_801EBCB0();
extern "C" void fn_801EBDF4();
extern "C" void fn_801EBF34();
extern "C" void fn_801EBFC8();

// asm_to_cpp: fn_801EB718
extern "C" asm void fn_801EB718() {
    nofralloc
    lfs f5, 0x0(r4)
    lfs f0, lbl_804A1E38
    lfs f1, 0x4(r4)
    fsubs f2, f0, f5
    lfs f3, lbl_804A1E34
    fsubs f0, f0, f1
    lfs f4, lbl_804A1E30
    stfs f5, 0x0(r3)
    fmuls f2, f3, f2
    fmuls f0, f3, f0
    stfs f4, 0x4(r3)
    stfs f4, 0x8(r3)
    stfs f2, 0xc(r3)
    stfs f4, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f4, 0x18(r3)
    stfs f0, 0x1c(r3)
    blr
}

// asm_to_cpp: fn_801EB760
extern "C" asm void fn_801EB760() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    lfs f0, lbl_804A1E3C
    addi r4, r1, 0x8
    stw r0, 0x24(r1)
    fmuls f1, f0, f1
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f0, 0x8(r1)
    lfs f4, lbl_804A1E30
    stfs f0, 0x0(r31)
    lfs f3, lbl_804A1E38
    lfs f0, 0xc(r1)
    lfs f2, lbl_804A1E40
    stfs f0, 0x4(r31)
    stfs f4, 0x8(r31)
    lfs f1, 0x8(r1)
    lfs f0, 0xc(r1)
    fadds f0, f1, f0
    fsubs f0, f0, f3
    fmuls f0, f2, f0
    stfs f0, 0xc(r31)
    lfs f0, 0xc(r1)
    fneg f0, f0
    stfs f0, 0x10(r31)
    lfs f0, 0x8(r1)
    stfs f0, 0x14(r31)
    stfs f4, 0x18(r31)
    lfs f1, 0xc(r1)
    lfs f0, 0x8(r1)
    fneg f1, f1
    fadds f0, f1, f0
    fsubs f0, f0, f3
    fmuls f0, f2, f0
    stfs f0, 0x1c(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EB80C
extern "C" asm void fn_801EB80C() {
    nofralloc
    lfs f0, 0xc(r4)
    lfs f2, lbl_804A1E30
    fneg f1, f0
    lfs f3, lbl_804A1E38
    lfs f0, 0x10(r4)
    stfs f3, 0x0(r3)
    stfs f2, 0x4(r3)
    stfs f2, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f2, 0x10(r3)
    stfs f3, 0x14(r3)
    stfs f2, 0x18(r3)
    stfs f0, 0x1c(r3)
    blr
}

// asm_to_cpp: fn_801EB844
extern "C" asm void fn_801EB844() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    stw r0, 0x24(r1)
    lfs f0, lbl_804A1E3C
    stw r31, 0x1c(r1)
    mr r31, r4
    fmuls f1, f0, f1
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f1, 0xc(r1)
    lfs f0, 0x4(r31)
    lfs f3, 0x0(r31)
    lfs f2, 0x8(r1)
    fmuls f9, f0, f1
    fmuls f7, f3, f1
    lfs f5, lbl_804A1E30
    fmuls f6, f3, f2
    lfs f4, lbl_804A1E38
    fmuls f8, f0, f2
    fneg f1, f9
    fadds f2, f6, f7
    lfs f3, lbl_804A1E40
    stfs f6, 0x0(r30)
    fadds f0, f1, f8
    fsubs f2, f2, f4
    stfs f7, 0x4(r30)
    fsubs f0, f0, f4
    stfs f5, 0x8(r30)
    fmuls f2, f3, f2
    stfs f1, 0x10(r30)
    fmuls f0, f3, f0
    stfs f2, 0xc(r30)
    stfs f8, 0x14(r30)
    stfs f5, 0x18(r30)
    stfs f0, 0x1c(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EB8F8
extern "C" asm void fn_801EB8F8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    stw r0, 0x24(r1)
    lfs f0, lbl_804A1E3C
    stw r31, 0x1c(r1)
    mr r31, r4
    fmuls f1, f0, f1
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f0, 0x8(r1)
    lfs f5, lbl_804A1E30
    stfs f0, 0x0(r30)
    lfs f4, lbl_804A1E34
    lfs f0, 0xc(r1)
    lfs f1, 0xc(r31)
    stfs f0, 0x4(r30)
    lfs f0, 0x10(r31)
    fadds f3, f4, f1
    stfs f5, 0x8(r30)
    fsubs f2, f0, f4
    lfs f1, 0x8(r1)
    lfs f0, 0xc(r1)
    fneg f1, f1
    fmuls f0, f0, f2
    fmuls f1, f1, f3
    fadds f0, f1, f0
    fadds f0, f4, f0
    stfs f0, 0xc(r30)
    lfs f0, 0xc(r1)
    fneg f0, f0
    stfs f0, 0x10(r30)
    lfs f0, 0x8(r1)
    stfs f0, 0x14(r30)
    stfs f5, 0x18(r30)
    lfs f1, 0xc(r1)
    lfs f0, 0x8(r1)
    fmuls f1, f1, f3
    fmuls f0, f0, f2
    fadds f0, f1, f0
    fadds f0, f4, f0
    stfs f0, 0x1c(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EB9C4
extern "C" asm void fn_801EB9C4() {
    nofralloc
    lfs f6, 0x0(r4)
    lfs f3, lbl_804A1E34
    lfs f1, 0xc(r4)
    fneg f4, f6
    lfs f0, 0x10(r4)
    fadds f2, f3, f1
    lfs f1, 0x4(r4)
    fsubs f0, f0, f3
    lfs f5, lbl_804A1E30
    stfs f6, 0x0(r3)
    fmuls f2, f4, f2
    fmuls f0, f1, f0
    stfs f5, 0x4(r3)
    fadds f2, f3, f2
    stfs f5, 0x8(r3)
    fadds f0, f3, f0
    stfs f5, 0x10(r3)
    stfs f2, 0xc(r3)
    stfs f1, 0x14(r3)
    stfs f5, 0x18(r3)
    stfs f0, 0x1c(r3)
    blr
}

// asm_to_cpp: fn_801EBA1C
extern "C" asm void fn_801EBA1C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    stw r0, 0x24(r1)
    lfs f0, lbl_804A1E3C
    stw r31, 0x1c(r1)
    mr r31, r4
    fmuls f1, f0, f1
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f1, 0x0(r31)
    lfs f0, 0x8(r1)
    lfs f3, 0xc(r1)
    lfs f2, 0x4(r31)
    fmuls f5, f1, f0
    fmuls f7, f1, f3
    lfs f4, lbl_804A1E34
    fmuls f8, f2, f0
    lfs f1, 0xc(r31)
    fmuls f9, f2, f3
    lfs f0, 0x10(r31)
    fadds f3, f4, f1
    stfs f5, 0x0(r30)
    fsubs f2, f0, f4
    lfs f6, lbl_804A1E30
    fneg f5, f5
    stfs f7, 0x4(r30)
    fmuls f1, f9, f3
    stfs f6, 0x8(r30)
    fmuls f0, f8, f2
    fmuls f3, f5, f3
    stfs f8, 0x14(r30)
    fmuls f2, f7, f2
    fadds f0, f1, f0
    stfs f6, 0x18(r30)
    fneg f1, f9
    fadds f2, f3, f2
    fadds f0, f4, f0
    stfs f1, 0x10(r30)
    fadds f2, f4, f2
    stfs f0, 0x1c(r30)
    stfs f2, 0xc(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EBAE8
extern "C" asm void fn_801EBAE8() {
    nofralloc
    lfs f1, 0xc(r3)
    lfs f6, lbl_804A1E34
    lfs f0, 0x1c(r3)
    fsubs f1, f1, f6
    lfs f10, 0x0(r4)
    lfs f2, 0x0(r3)
    fsubs f0, f0, f6
    lfs f4, 0x4(r4)
    fmuls f5, f10, f1
    fmuls f9, f2, f10
    lfs f8, 0x4(r3)
    fmuls f0, f4, f0
    lfs f7, 0x8(r3)
    lfs f3, 0x10(r3)
    lfs f2, 0x14(r3)
    lfs f1, 0x18(r3)
    fmuls f8, f8, f10
    fmuls f7, f7, f10
    stfs f9, 0x0(r3)
    fadds f5, f6, f5
    fmuls f3, f3, f4
    stfs f8, 0x4(r3)
    fmuls f2, f2, f4
    fmuls f1, f1, f4
    stfs f7, 0x8(r3)
    fadds f0, f6, f0
    stfs f5, 0xc(r3)
    stfs f3, 0x10(r3)
    stfs f2, 0x14(r3)
    stfs f1, 0x18(r3)
    stfs f0, 0x1c(r3)
    blr
}

// asm_to_cpp: fn_801EBB68
extern "C" asm void fn_801EBB68() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    lfs f0, lbl_804A1E3C
    addi r4, r1, 0x8
    stw r0, 0x24(r1)
    fmuls f1, f0, f1
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f2, 0xc(r1)
    lfs f0, 0x10(r31)
    fneg f1, f2
    lfs f4, 0x0(r31)
    lfs f3, 0x8(r1)
    fmuls f2, f2, f0
    lfs f7, lbl_804A1E34
    fmuls f0, f3, f0
    fmuls f3, f3, f4
    lfs f10, 0x4(r31)
    fmuls f1, f1, f4
    lfs f5, 0x14(r31)
    lfs f8, 0x8(r31)
    fadds f2, f3, f2
    fadds f3, f1, f0
    lfs f1, 0xc(r31)
    lfs f0, 0x1c(r31)
    stfs f2, 0x0(r31)
    fsubs f6, f1, f7
    lfs f4, 0x18(r31)
    stfs f3, 0x10(r31)
    fsubs f3, f0, f7
    lfs f1, 0xc(r1)
    lfs f11, 0x8(r1)
    fneg f0, f1
    fmuls f2, f1, f5
    fmuls f9, f11, f10
    fmuls f1, f0, f10
    fmuls f0, f11, f5
    fadds f2, f9, f2
    fadds f0, f1, f0
    stfs f2, 0x4(r31)
    stfs f0, 0x14(r31)
    lfs f1, 0xc(r1)
    lfs f9, 0x8(r1)
    fneg f0, f1
    fmuls f2, f1, f4
    fmuls f5, f9, f8
    fmuls f1, f0, f8
    fmuls f0, f9, f4
    fadds f2, f5, f2
    fadds f0, f1, f0
    stfs f2, 0x8(r31)
    stfs f0, 0x18(r31)
    lfs f1, 0xc(r1)
    lfs f5, 0x8(r1)
    fneg f0, f1
    fmuls f2, f1, f3
    fmuls f4, f5, f6
    fmuls f1, f0, f6
    fmuls f0, f5, f3
    fadds f2, f4, f2
    fadds f0, f1, f0
    fadds f1, f7, f2
    fadds f0, f7, f0
    stfs f1, 0xc(r31)
    stfs f0, 0x1c(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EBC8C
extern "C" asm void fn_801EBC8C() {
    nofralloc
    lfs f3, 0xc(r3)
    lfs f2, 0xc(r4)
    lfs f1, 0x1c(r3)
    lfs f0, 0x10(r4)
    fsubs f2, f3, f2
    fadds f0, f1, f0
    stfs f2, 0xc(r3)
    stfs f0, 0x1c(r3)
    blr
}

// asm_to_cpp: fn_801EBCB0
extern "C" asm void fn_801EBCB0() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    lfs f1, 0x8(r4)
    stw r31, 0x1c(r1)
    mr r31, r4
    lfs f0, lbl_804A1E3C
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    fmuls f1, f0, f1
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f0, 0xc(r1)
    lfs f5, 0x4(r31)
    lfs f2, 0x0(r31)
    fmuls f8, f5, f0
    lfs f6, 0x8(r1)
    fmuls f1, f2, f0
    lfs f3, 0xc(r30)
    lfs f7, lbl_804A1E34
    fmuls f0, f2, f6
    fneg f12, f8
    lfs f2, 0x1c(r30)
    fsubs f4, f3, f7
    lfs f30, 0x0(r30)
    fsubs f3, f2, f7
    lfs f13, 0x10(r30)
    fmuls f2, f5, f6
    lfs f11, 0x4(r30)
    fmuls f6, f0, f4
    lfs f10, 0x14(r30)
    fmuls f5, f1, f3
    lfs f9, 0x8(r30)
    fmuls f4, f12, f4
    lfs f8, 0x18(r30)
    fmuls f3, f2, f3
    fadds f5, f6, f5
    fmuls f31, f0, f30
    fmuls f6, f1, f13
    fadds f3, f4, f3
    fadds f4, f7, f5
    fadds f31, f31, f6
    fadds f7, f7, f3
    stfs f4, 0xc(r30)
    fmuls f6, f12, f30
    fmuls f5, f2, f13
    fmuls f4, f0, f11
    stfs f7, 0x1c(r30)
    fmuls f3, f1, f10
    fadds f13, f6, f5
    stfs f31, 0x0(r30)
    fmuls f6, f12, f11
    fadds f7, f4, f3
    fmuls f5, f2, f10
    stfs f13, 0x10(r30)
    fmuls f4, f0, f9
    fmuls f3, f1, f8
    stfs f7, 0x4(r30)
    fmuls f0, f2, f8
    fmuls f1, f12, f9
    fadds f5, f6, f5
    fadds f2, f4, f3
    fadds f0, f1, f0
    stfs f5, 0x14(r30)
    stfs f2, 0x8(r30)
    stfs f0, 0x18(r30)
    opword 0xE3E10038
    lfd f31, 0x30(r1)
    opword 0xE3C10028
    lfd f30, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801EBDF4
extern "C" asm void fn_801EBDF4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    stw r0, 0x24(r1)
    lfs f0, lbl_804A1E3C
    stw r31, 0x1c(r1)
    mr r31, r4
    fmuls f1, f0, f1
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f2, 0xc(r1)
    lfs f0, 0x10(r30)
    fneg f1, f2
    lfs f4, 0x0(r30)
    lfs f3, 0x8(r1)
    fmuls f2, f2, f0
    lfs f10, 0x4(r30)
    fmuls f0, f3, f0
    fmuls f3, f3, f4
    lfs f6, 0x14(r30)
    fmuls f1, f1, f4
    lfs f7, lbl_804A1E34
    lfs f8, 0x8(r30)
    fadds f3, f3, f2
    fadds f5, f1, f0
    lfs f2, 0xc(r30)
    lfs f0, 0xc(r31)
    stfs f3, 0x0(r30)
    fsubs f2, f2, f0
    lfs f1, 0x1c(r30)
    stfs f5, 0x10(r30)
    lfs f0, 0x10(r31)
    lfs f3, 0xc(r1)
    fadds f0, f1, f0
    lfs f11, 0x8(r1)
    fneg f1, f3
    lfs f4, 0x18(r30)
    fmuls f5, f3, f6
    fmuls f9, f11, f10
    fmuls f3, f1, f10
    fmuls f1, f11, f6
    fadds f5, f9, f5
    fsubs f6, f2, f7
    fadds f1, f3, f1
    stfs f5, 0x4(r30)
    fsubs f3, f0, f7
    stfs f1, 0x14(r30)
    lfs f1, 0xc(r1)
    lfs f9, 0x8(r1)
    fneg f0, f1
    fmuls f2, f1, f4
    fmuls f5, f9, f8
    fmuls f1, f0, f8
    fmuls f0, f9, f4
    fadds f2, f5, f2
    fadds f0, f1, f0
    stfs f2, 0x8(r30)
    stfs f0, 0x18(r30)
    lfs f1, 0xc(r1)
    lfs f5, 0x8(r1)
    fneg f0, f1
    fmuls f2, f1, f3
    fmuls f4, f5, f6
    fmuls f1, f0, f6
    fmuls f0, f5, f3
    fadds f2, f4, f2
    fadds f0, f1, f0
    fadds f1, f7, f2
    fadds f0, f7, f0
    stfs f1, 0xc(r30)
    stfs f0, 0x1c(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EBF34
extern "C" asm void fn_801EBF34() {
    nofralloc
    lfs f1, 0x1c(r3)
    lfs f0, 0x10(r4)
    lfs f3, 0xc(r3)
    lfs f2, 0xc(r4)
    fadds f0, f1, f0
    lfs f7, lbl_804A1E34
    fsubs f4, f3, f2
    lfs f5, 0x4(r4)
    fsubs f0, f0, f7
    lfs f3, 0x14(r3)
    lfs f2, 0x10(r3)
    fsubs f6, f4, f7
    fmuls f0, f5, f0
    lfs f11, 0x0(r4)
    fmuls f4, f2, f5
    lfs f8, 0x0(r3)
    fmuls f2, f11, f6
    fmuls f10, f8, f11
    fadds f0, f7, f0
    lfs f9, 0x4(r3)
    fadds f6, f7, f2
    lfs f8, 0x8(r3)
    lfs f2, 0x18(r3)
    fmuls f9, f9, f11
    fmuls f7, f8, f11
    stfs f10, 0x0(r3)
    fmuls f3, f3, f5
    fmuls f2, f2, f5
    stfs f6, 0xc(r3)
    fmuls f0, f1, f0
    stfs f9, 0x4(r3)
    stfs f7, 0x8(r3)
    stfs f4, 0x10(r3)
    stfs f3, 0x14(r3)
    stfs f2, 0x18(r3)
    stfs f0, 0x1c(r3)
    blr
}

// asm_to_cpp: fn_801EBFC8
extern "C" asm void fn_801EBFC8() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    stfd f29, 0x20(r1)
    opword 0xF3A10028
    lfs f1, 0x8(r4)
    stw r31, 0x1c(r1)
    mr r31, r4
    lfs f0, lbl_804A1E3C
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    fmuls f1, f0, f1
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f2, 0xc(r1)
    lfs f5, 0x4(r31)
    lfs f1, 0xc(r30)
    lfs f0, 0xc(r31)
    fmuls f9, f5, f2
    lfs f8, 0x0(r31)
    fsubs f4, f1, f0
    lfs f6, 0x8(r1)
    fmuls f1, f8, f2
    lfs f7, lbl_804A1E34
    fmuls f0, f8, f6
    lfs f3, 0x1c(r30)
    lfs f2, 0x10(r31)
    fneg f12, f9
    lfs f29, 0x0(r30)
    fsubs f4, f4, f7
    fadds f3, f3, f2
    lfs f31, 0x10(r30)
    fmuls f2, f5, f6
    fmuls f6, f0, f4
    lfs f11, 0x4(r30)
    fsubs f3, f3, f7
    fmuls f4, f12, f4
    lfs f10, 0x14(r30)
    fmuls f30, f0, f29
    fmuls f5, f1, f3
    lfs f9, 0x8(r30)
    fmuls f3, f2, f3
    fmuls f13, f1, f31
    lfs f8, 0x18(r30)
    fadds f5, f6, f5
    fadds f3, f4, f3
    fadds f4, f30, f13
    fadds f13, f7, f5
    fadds f7, f7, f3
    stfs f4, 0x0(r30)
    fmuls f6, f12, f29
    fmuls f5, f2, f31
    stfs f13, 0xc(r30)
    fmuls f4, f0, f11
    fmuls f3, f1, f10
    fadds f13, f6, f5
    stfs f7, 0x1c(r30)
    fmuls f6, f12, f11
    fadds f7, f4, f3
    fmuls f5, f2, f10
    stfs f13, 0x10(r30)
    fmuls f4, f0, f9
    fmuls f3, f1, f8
    stfs f7, 0x4(r30)
    fmuls f0, f2, f8
    fmuls f1, f12, f9
    fadds f5, f6, f5
    fadds f2, f4, f3
    fadds f0, f1, f0
    stfs f5, 0x14(r30)
    stfs f2, 0x8(r30)
    stfs f0, 0x18(r30)
    opword 0xE3E10048
    lfd f31, 0x40(r1)
    opword 0xE3C10038
    lfd f30, 0x30(r1)
    opword 0xE3A10028
    lfd f29, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
