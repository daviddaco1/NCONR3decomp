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
    pMtx->_03 = 0.0f;

    pMtx->_10 = 0.0f;
    pMtx->_11 = rSrt.Sv;
    pMtx->_12 = 0.0f;
    pMtx->_13 = 1.0f - rSrt.Sv;
}

void MakeTexSrtMtx_R(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    f32 sinPart = 0.5f * sinR;
    f32 cosPart = 0.5f - 0.5f * cosR;

    pMtx->_00 = cosR;
    pMtx->_01 = sinR;
    pMtx->_02 = 0.0f;
    pMtx->_03 = cosPart - sinPart;

    pMtx->_10 = -sinR;
    pMtx->_11 = cosR;
    pMtx->_12 = 0.0f;
    pMtx->_13 = cosPart + sinPart;
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
    pMtx->_03 = -0.5f * (susr + sucr - rSrt.Su);

    pMtx->_10 = -svsr;
    pMtx->_11 = svcr;
    pMtx->_12 = 0.0f;
    pMtx->_13 = 0.5f * (svsr - svcr - rSrt.Sv) + 1.0f;
}

void MakeTexSrtMtx_RT(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    f32 sinPart = 0.5f * sinR;
    f32 cosPart = 0.5f - 0.5f * cosR;

    pMtx->_00 = cosR;
    pMtx->_01 = sinR;
    pMtx->_02 = 0.0f;
    pMtx->_03 = cosPart - sinPart - rSrt.Tu;

    pMtx->_10 = -sinR;
    pMtx->_11 = cosR;
    pMtx->_12 = 0.0f;
    pMtx->_13 = cosPart + sinPart + rSrt.Tv;
}

void MakeTexSrtMtx_ST(math::MTX34 *pMtx, const TexSrt &rSrt) {
    pMtx->_00 = rSrt.Su;
    pMtx->_01 = 0.0f;
    pMtx->_02 = 0.0f;
    pMtx->_03 = -rSrt.Su * rSrt.Tu;

    pMtx->_10 = 0.0f;
    pMtx->_11 = rSrt.Sv;
    pMtx->_12 = 0.0f;
    pMtx->_13 = rSrt.Sv * (rSrt.Tv - 1.0f) + 1.0f;
}

void MakeTexSrtMtx_SRT(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    f32 sinPart = 0.5f * sinR - 0.5f;
    f32 cosPart = -0.5f * cosR;

    pMtx->_00 = rSrt.Su * cosR;
    pMtx->_01 = rSrt.Su * sinR;
    pMtx->_02 = 0.0f;
    pMtx->_03 = rSrt.Su * (cosPart - sinPart - rSrt.Tu);

    pMtx->_10 = -rSrt.Sv * sinR;
    pMtx->_11 = rSrt.Sv * cosR;
    pMtx->_12 = 0.0f;
    pMtx->_13 = rSrt.Sv * (cosPart + sinPart + rSrt.Tv) + 1.0f;
}

void ProductTexSrtMtx_S(math::MTX34 *pMtx, const TexSrt &rSrt) {
    pMtx->_00 *= rSrt.Su;
    pMtx->_01 *= rSrt.Su;
    pMtx->_02 *= rSrt.Su;
    pMtx->_03 *= rSrt.Su;

    pMtx->_10 *= rSrt.Sv;
    pMtx->_11 *= rSrt.Sv;
    pMtx->_12 *= rSrt.Sv;
    pMtx->_13 = 1.0f + pMtx->_13 * rSrt.Sv - rSrt.Sv;
}

void ProductTexSrtMtx_R(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    f32 _0x, _1x;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    f32 sinPart = 0.5f * sinR;
    f32 cosPart = 0.5f - 0.5f * cosR;

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

    _0x = cosR * pMtx->_03 + sinR * pMtx->_13 + cosPart - sinPart;
    _1x = -sinR * pMtx->_03 + cosR * pMtx->_13 + cosPart + sinPart;
    pMtx->_03 = _0x;
    pMtx->_13 = _1x;
}

void ProductTexSrtMtx_T(math::MTX34 *pMtx, const TexSrt &rSrt) {
    pMtx->_03 += -rSrt.Tu;
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

    // clang-format off
    _0x = sucr * (pMtx->_03 - 0.5f)
        + susr * (pMtx->_13 - 0.5f)
        + 0.5f * rSrt.Su;

    _1x = -svsr * (pMtx->_03 - 0.5f)
        +  svcr * (pMtx->_13 - 0.5f)
        -  0.5f * rSrt.Sv + 1.0f;
    // clang-format on

    pMtx->_03 = _0x;
    pMtx->_13 = _1x;
}

void ProductTexSrtMtx_RT(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    f32 _0x, _1x;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    f32 sinPart = 0.5f * sinR - 0.5f;
    f32 cosPart = -0.5f * cosR;

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

    _0x = cosR * pMtx->_03 + sinR * pMtx->_13 + cosPart - sinPart - rSrt.Tu;
    _1x = -sinR * pMtx->_03 + cosR * pMtx->_13 + cosPart + sinPart + rSrt.Tv;
    pMtx->_03 = _0x;
    pMtx->_13 = _1x;
}

void ProductTexSrtMtx_ST(math::MTX34 *pMtx, const TexSrt &rSrt) {
    pMtx->_00 *= rSrt.Su;
    pMtx->_01 *= rSrt.Su;
    pMtx->_02 *= rSrt.Su;
    pMtx->_03 = rSrt.Su * (pMtx->_03 - rSrt.Tu);

    pMtx->_10 *= rSrt.Sv;
    pMtx->_11 *= rSrt.Sv;
    pMtx->_12 *= rSrt.Sv;
    pMtx->_13 = rSrt.Sv * (pMtx->_13 + rSrt.Tv - 1.0f) + 1.0f;
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

    _0x = sucr * (pMtx->_03 - 0.5f) + susr * (pMtx->_13 - 0.5f) + (0.5f - rSrt.Tu) * rSrt.Su;

    _1x = -svsr * (0.5f + pMtx->_03) + svcr * (pMtx->_13 - 0.5f) - (0.5f - rSrt.Tv) * rSrt.Sv + 1.0f;

    pMtx->_03 = _0x;
    pMtx->_13 = _1x;
}

} // namespace

typedef void (*CalcTexMtxFunc)(math::MTX34 *pMtx, const TexSrt &rSrt);

bool CalcTexMtx_Maya(math::MTX34 *pMtx, bool set, const TexSrt &rSrt, TexSrt::Flag flag) {
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

// CalcWorldMtx_Maya_SSC_Apply__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult: definicion C reemplazada por asm (ver abajo)


} // namespace dcc
} // namespace detail
} // namespace g3d
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_804A1E08;
extern "C" float lbl_804A1E0C;
extern "C" float lbl_804A1E10;
extern "C" float lbl_804A1E14;
extern "C" float lbl_804A1E18;
extern "C" void CalcWorldMtx_Maya_SSC_Apply__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult();
extern "C" void MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void SinCosFIdx__Q24nw4r4mathFPfPff();
extern "C" void _restgpr_25();
extern "C" void _savegpr_25();
extern "C" void fn_801E9E98();
extern "C" void fn_801E9ED0();
extern "C" void fn_801E9F64();
extern "C" void fn_801E9F9C();
extern "C" void fn_801EA058();
extern "C" void fn_801EA108();
extern "C" void fn_801EA158();
extern "C" void fn_801EA234();
extern "C" void fn_801EA2AC();
extern "C" void fn_801EA3DC();
extern "C" void fn_801EA404();
extern "C" void fn_801EA598();
extern "C" void fn_801EA6F8();
extern "C" void fn_801EA780();

// asm_to_cpp: fn_801E9E98
extern "C" asm void fn_801E9E98() {
    nofralloc
    lfs f1, 0x4(r4)
    lfs f0, lbl_804A1E0C
    lfs f2, lbl_804A1E08
    fsubs f0, f0, f1
    lfs f3, 0x0(r4)
    stfs f2, 0x4(r3)
    stfs f3, 0x0(r3)
    stfs f2, 0x8(r3)
    stfs f2, 0xc(r3)
    stfs f2, 0x10(r3)
    stfs f1, 0x14(r3)
    stfs f2, 0x18(r3)
    stfs f0, 0x1c(r3)
    blr
}

// asm_to_cpp: fn_801E9ED0
extern "C" asm void fn_801E9ED0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    lfs f0, lbl_804A1E10
    addi r4, r1, 0x8
    stw r0, 0x24(r1)
    fmuls f1, f0, f1
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f4, lbl_804A1E14
    lfs f1, 0x8(r1)
    lfs f3, 0xc(r1)
    fmuls f0, f4, f1
    lfs f2, lbl_804A1E08
    fmuls f3, f4, f3
    stfs f1, 0x0(r31)
    fsubs f4, f4, f0
    lfs f0, 0xc(r1)
    stfs f0, 0x4(r31)
    fsubs f1, f4, f3
    stfs f2, 0x8(r31)
    fadds f0, f4, f3
    stfs f1, 0xc(r31)
    lfs f1, 0xc(r1)
    fneg f1, f1
    stfs f1, 0x10(r31)
    lfs f1, 0x8(r1)
    stfs f1, 0x14(r31)
    stfs f2, 0x18(r31)
    stfs f0, 0x1c(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801E9F64
extern "C" asm void fn_801E9F64() {
    nofralloc
    lfs f0, 0xc(r4)
    lfs f2, lbl_804A1E08
    fneg f1, f0
    lfs f3, lbl_804A1E0C
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

// asm_to_cpp: fn_801E9F9C
extern "C" asm void fn_801E9F9C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    stw r0, 0x24(r1)
    lfs f0, lbl_804A1E10
    stw r31, 0x1c(r1)
    mr r31, r4
    fmuls f1, f0, f1
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f1, 0x8(r1)
    lfs f7, 0x4(r31)
    lfs f0, 0xc(r1)
    lfs f8, 0x0(r31)
    fmuls f11, f7, f1
    fmuls f3, f7, f0
    lfs f6, lbl_804A1E08
    fmuls f9, f8, f1
    lfs f1, lbl_804A1E14
    fmuls f10, f8, f0
    fsubs f2, f3, f11
    fneg f3, f3
    lfs f4, lbl_804A1E18
    fadds f5, f10, f9
    lfs f0, lbl_804A1E0C
    fsubs f2, f2, f7
    stfs f9, 0x0(r30)
    fsubs f5, f5, f8
    fmuls f1, f1, f2
    stfs f10, 0x4(r30)
    fmuls f2, f4, f5
    stfs f6, 0x8(r30)
    fadds f0, f0, f1
    stfs f3, 0x10(r30)
    stfs f2, 0xc(r30)
    stfs f11, 0x14(r30)
    stfs f6, 0x18(r30)
    stfs f0, 0x1c(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EA058
extern "C" asm void fn_801EA058() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    stw r0, 0x24(r1)
    lfs f0, lbl_804A1E10
    stw r31, 0x1c(r1)
    mr r31, r4
    fmuls f1, f0, f1
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f5, lbl_804A1E14
    lfs f1, 0x8(r1)
    lfs f3, 0xc(r1)
    fmuls f0, f5, f1
    lfs f2, 0xc(r31)
    fmuls f6, f5, f3
    stfs f1, 0x0(r30)
    lfs f4, lbl_804A1E08
    fsubs f5, f5, f0
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r31)
    fsubs f3, f5, f6
    stfs f1, 0x4(r30)
    fadds f1, f5, f6
    stfs f4, 0x8(r30)
    fsubs f2, f3, f2
    fadds f0, f0, f1
    stfs f2, 0xc(r30)
    lfs f1, 0xc(r1)
    fneg f1, f1
    stfs f1, 0x10(r30)
    lfs f1, 0x8(r1)
    stfs f1, 0x14(r30)
    stfs f4, 0x18(r30)
    stfs f0, 0x1c(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EA108
extern "C" asm void fn_801EA108() {
    nofralloc
    lfs f0, 0x10(r4)
    lfs f1, lbl_804A1E0C
    lfs f5, lbl_804A1E08
    lfs f6, 0x0(r4)
    fsubs f0, f0, f1
    lfs f2, 0x4(r4)
    fneg f4, f6
    lfs f3, 0xc(r4)
    fmuls f0, f2, f0
    stfs f6, 0x0(r3)
    fmuls f3, f4, f3
    stfs f5, 0x4(r3)
    fadds f0, f1, f0
    stfs f5, 0x8(r3)
    stfs f3, 0xc(r3)
    stfs f5, 0x10(r3)
    stfs f2, 0x14(r3)
    stfs f5, 0x18(r3)
    stfs f0, 0x1c(r3)
    blr
}

// asm_to_cpp: fn_801EA158
extern "C" asm void fn_801EA158() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    stw r0, 0x24(r1)
    lfs f0, lbl_804A1E10
    stw r31, 0x1c(r1)
    mr r31, r4
    fmuls f1, f0, f1
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f5, lbl_804A1E14
    lfs f0, 0xc(r1)
    lfs f4, 0x4(r31)
    fmuls f2, f5, f0
    lfs f1, lbl_804A1E18
    lfs f0, 0x8(r1)
    fneg f3, f4
    lfs f9, 0x0(r31)
    fmuls f8, f1, f0
    fsubs f2, f2, f5
    lfs f5, 0xc(r31)
    fmuls f0, f9, f0
    lfs f1, 0x10(r31)
    lfs f7, lbl_804A1E08
    fsubs f6, f8, f2
    stfs f0, 0x0(r30)
    fadds f2, f8, f2
    lfs f0, lbl_804A1E0C
    lfs f8, 0xc(r1)
    fsubs f5, f6, f5
    fadds f1, f1, f2
    fmuls f6, f9, f8
    stfs f7, 0x8(r30)
    fmuls f2, f9, f5
    fmuls f1, f4, f1
    stfs f6, 0x4(r30)
    stfs f2, 0xc(r30)
    fadds f0, f0, f1
    lfs f1, 0xc(r1)
    fmuls f1, f3, f1
    stfs f1, 0x10(r30)
    lfs f1, 0x8(r1)
    fmuls f1, f4, f1
    stfs f7, 0x18(r30)
    stfs f0, 0x1c(r30)
    stfs f1, 0x14(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EA234
extern "C" asm void fn_801EA234() {
    nofralloc
    lfs f5, 0x4(r4)
    lfs f0, 0x1c(r3)
    lfs f2, 0x10(r3)
    fmuls f1, f0, f5
    lfs f0, lbl_804A1E0C
    fmuls f4, f2, f5
    lfs f2, 0x18(r3)
    lfs f3, 0x14(r3)
    fadds f0, f0, f1
    fmuls f1, f2, f5
    lfs f8, 0x0(r3)
    lfs f9, 0x0(r4)
    fmuls f3, f3, f5
    lfs f7, 0x4(r3)
    lfs f6, 0x8(r3)
    lfs f2, 0xc(r3)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    stfs f4, 0x10(r3)
    fmuls f6, f6, f9
    fmuls f2, f2, f9
    stfs f8, 0x0(r3)
    fsubs f0, f0, f5
    stfs f7, 0x4(r3)
    stfs f6, 0x8(r3)
    stfs f2, 0xc(r3)
    stfs f3, 0x14(r3)
    stfs f1, 0x18(r3)
    stfs f0, 0x1c(r3)
    blr
}

// asm_to_cpp: fn_801EA2AC
extern "C" asm void fn_801EA2AC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    lfs f0, lbl_804A1E10
    addi r4, r1, 0x8
    stw r0, 0x24(r1)
    fmuls f1, f0, f1
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f10, 0xc(r1)
    lfs f0, 0x10(r31)
    fneg f1, f10
    lfs f4, 0x0(r31)
    lfs f5, 0x8(r1)
    fmuls f2, f10, f0
    lfs f12, lbl_804A1E14
    fmuls f3, f5, f4
    fmuls f1, f1, f4
    lfs f11, 0x4(r31)
    fmuls f0, f5, f0
    lfs f8, 0x14(r31)
    fadds f2, f3, f2
    fmuls f4, f12, f5
    fadds f3, f1, f0
    lfs f9, 0x8(r31)
    stfs f2, 0x0(r31)
    fmuls f0, f12, f10
    fsubs f1, f12, f4
    stfs f3, 0x10(r31)
    lfs f6, 0x18(r31)
    lfs f3, 0xc(r1)
    lfs f12, 0x8(r1)
    fneg f2, f3
    lfs f7, 0xc(r31)
    fmuls f4, f3, f8
    lfs f5, 0x1c(r31)
    fmuls f10, f12, f11
    fmuls f3, f2, f11
    fmuls f2, f12, f8
    fadds f4, f10, f4
    fadds f2, f3, f2
    stfs f4, 0x4(r31)
    stfs f2, 0x14(r31)
    lfs f3, 0xc(r1)
    lfs f10, 0x8(r1)
    fneg f2, f3
    fmuls f4, f3, f6
    fmuls f8, f10, f9
    fmuls f3, f2, f9
    fmuls f2, f10, f6
    fadds f4, f8, f4
    fadds f2, f3, f2
    stfs f4, 0x8(r31)
    stfs f2, 0x18(r31)
    lfs f3, 0xc(r1)
    lfs f8, 0x8(r1)
    fneg f2, f3
    fmuls f4, f3, f5
    fmuls f6, f8, f7
    fmuls f3, f2, f7
    fmuls f2, f8, f5
    fadds f4, f6, f4
    fadds f2, f3, f2
    fadds f3, f1, f4
    fadds f1, f1, f2
    fsubs f2, f3, f0
    fadds f0, f0, f1
    stfs f2, 0xc(r31)
    stfs f0, 0x1c(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EA3DC
extern "C" asm void fn_801EA3DC() {
    nofralloc
    lfs f0, 0xc(r4)
    lfs f2, 0xc(r3)
    fneg f3, f0
    lfs f1, 0x1c(r3)
    lfs f0, 0x10(r4)
    fadds f2, f2, f3
    fadds f0, f1, f0
    stfs f2, 0xc(r3)
    stfs f0, 0x1c(r3)
    blr
}

// asm_to_cpp: fn_801EA404
extern "C" asm void fn_801EA404() {
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
    lfs f1, 0x8(r4)
    stw r31, 0x1c(r1)
    mr r31, r4
    lfs f0, lbl_804A1E10
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    fmuls f1, f0, f1
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f6, 0xc(r1)
    lfs f0, 0x4(r31)
    lfs f7, 0x8(r1)
    fmuls f8, f0, f6
    lfs f10, lbl_804A1E14
    lfs f1, 0x1c(r30)
    fmuls f3, f0, f7
    lfs f2, 0xc(r30)
    fmuls f5, f10, f0
    fneg f30, f8
    lfs f0, 0x0(r31)
    fsubs f4, f1, f10
    lfs f26, 0x0(r30)
    fsubs f8, f2, f10
    lfs f28, 0x10(r30)
    fmuls f1, f0, f7
    lfs f31, 0x4(r30)
    fmuls f2, f0, f6
    lfs f13, 0x14(r30)
    fmuls f7, f30, f8
    lfs f12, 0x8(r30)
    fmuls f6, f3, f4
    lfs f11, 0x18(r30)
    fmuls f9, f1, f8
    fmuls f8, f2, f4
    lfs f4, lbl_804A1E0C
    fadds f6, f7, f6
    fmuls f7, f30, f26
    fmuls f27, f1, f26
    fsubs f5, f6, f5
    fmuls f6, f3, f28
    fmuls f29, f2, f28
    fadds f26, f4, f5
    fadds f4, f7, f6
    fadds f27, f27, f29
    fmuls f7, f1, f31
    stfs f26, 0x1c(r30)
    fmuls f5, f2, f13
    stfs f4, 0x10(r30)
    fmuls f6, f30, f31
    fmuls f4, f3, f13
    fadds f7, f7, f5
    stfs f27, 0x0(r30)
    fmuls f5, f1, f12
    fadds f6, f6, f4
    fmuls f1, f2, f11
    stfs f7, 0x4(r30)
    fmuls f2, f3, f11
    fmuls f4, f30, f12
    stfs f6, 0x14(r30)
    fadds f3, f5, f1
    fmuls f1, f10, f0
    fadds f0, f9, f8
    fadds f2, f4, f2
    stfs f3, 0x8(r30)
    fadds f0, f1, f0
    stfs f2, 0x18(r30)
    stfs f0, 0xc(r30)
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
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_801EA598
extern "C" asm void fn_801EA598() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lfs f1, 0x8(r4)
    stw r31, 0x1c(r1)
    mr r31, r4
    lfs f0, lbl_804A1E10
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    fmuls f1, f0, f1
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f7, 0xc(r1)
    lfs f0, 0x10(r30)
    fneg f1, f7
    lfs f4, 0x0(r30)
    lfs f5, 0x8(r1)
    fmuls f2, f7, f0
    lfs f12, lbl_804A1E14
    fmuls f3, f5, f4
    fmuls f1, f1, f4
    lfs f6, lbl_804A1E18
    fmuls f0, f5, f0
    lfs f13, 0x4(r30)
    fadds f2, f3, f2
    fmuls f4, f12, f7
    fadds f3, f1, f0
    lfs f10, 0x14(r30)
    stfs f2, 0x0(r30)
    fmuls f1, f6, f5
    fsubs f0, f4, f12
    stfs f3, 0x10(r30)
    lfs f11, 0x8(r30)
    lfs f4, 0xc(r1)
    lfs f31, 0x8(r1)
    fneg f3, f4
    lfs f8, 0x18(r30)
    fmuls f6, f4, f10
    lfs f9, 0xc(r30)
    fmuls f12, f31, f13
    lfs f7, 0x1c(r30)
    fmuls f4, f3, f13
    lfs f5, 0xc(r31)
    fmuls f3, f31, f10
    lfs f2, 0x10(r31)
    fadds f6, f12, f6
    fadds f3, f4, f3
    stfs f6, 0x4(r30)
    stfs f3, 0x14(r30)
    lfs f4, 0xc(r1)
    lfs f12, 0x8(r1)
    fneg f3, f4
    fmuls f6, f4, f8
    fmuls f10, f12, f11
    fmuls f4, f3, f11
    fmuls f3, f12, f8
    fadds f6, f10, f6
    fadds f3, f4, f3
    stfs f6, 0x8(r30)
    stfs f3, 0x18(r30)
    lfs f4, 0xc(r1)
    lfs f10, 0x8(r1)
    fneg f3, f4
    fmuls f6, f4, f7
    fmuls f8, f10, f9
    fmuls f4, f3, f9
    fmuls f3, f10, f7
    fadds f6, f8, f6
    fadds f3, f4, f3
    fadds f4, f1, f6
    fadds f1, f1, f3
    fsubs f3, f4, f0
    fadds f0, f0, f1
    fsubs f1, f3, f5
    fadds f0, f2, f0
    stfs f1, 0xc(r30)
    stfs f0, 0x1c(r30)
    opword 0xE3E10028
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801EA6F8
extern "C" asm void fn_801EA6F8() {
    nofralloc
    lfs f2, 0x1c(r3)
    lfs f0, 0x10(r4)
    lfs f1, lbl_804A1E0C
    fadds f0, f2, f0
    lfs f6, 0xc(r3)
    lfs f4, 0xc(r4)
    lfs f5, 0x4(r4)
    fsubs f0, f0, f1
    lfs f2, 0x10(r3)
    fsubs f6, f6, f4
    lfs f10, 0x0(r4)
    fmuls f4, f2, f5
    lfs f2, 0x0(r3)
    fmuls f9, f2, f10
    lfs f3, 0x14(r3)
    fmuls f0, f5, f0
    lfs f8, 0x4(r3)
    lfs f7, 0x8(r3)
    fmuls f6, f10, f6
    lfs f2, 0x18(r3)
    fmuls f8, f8, f10
    fmuls f7, f7, f10
    stfs f9, 0x0(r3)
    fmuls f3, f3, f5
    fmuls f2, f2, f5
    stfs f8, 0x4(r3)
    fadds f0, f1, f0
    stfs f7, 0x8(r3)
    stfs f6, 0xc(r3)
    stfs f4, 0x10(r3)
    stfs f3, 0x14(r3)
    stfs f2, 0x18(r3)
    stfs f0, 0x1c(r3)
    blr
}

// asm_to_cpp: fn_801EA780
extern "C" asm void fn_801EA780() {
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
    lfs f1, 0x8(r4)
    stw r31, 0x1c(r1)
    mr r31, r4
    lfs f0, lbl_804A1E10
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    fmuls f1, f0, f1
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f2, 0xc(r1)
    lfs f27, 0x4(r31)
    lfs f7, lbl_804A1E14
    fmuls f4, f27, f2
    lfs f1, 0x1c(r30)
    lfs f9, 0x8(r1)
    fsubs f8, f1, f7
    lfs f1, 0x10(r31)
    lfs f0, 0x0(r31)
    fsubs f5, f7, f1
    lfs f1, 0xc(r31)
    lfs f6, 0xc(r30)
    fneg f30, f4
    lfs f28, 0x10(r30)
    fsubs f10, f7, f1
    fmuls f3, f27, f9
    lfs f26, 0x0(r30)
    fmuls f1, f0, f9
    fsubs f9, f6, f7
    lfs f13, 0x14(r30)
    fadds f4, f7, f6
    fmuls f5, f5, f27
    lfs f31, 0x4(r30)
    fmuls f2, f0, f2
    fmuls f7, f30, f4
    lfs f4, lbl_804A1E0C
    fmuls f6, f3, f8
    fmuls f27, f1, f26
    lfs f11, 0x18(r30)
    lfs f12, 0x8(r30)
    fadds f6, f7, f6
    fmuls f7, f30, f26
    fmuls f29, f2, f28
    fsubs f5, f6, f5
    fmuls f6, f3, f28
    fadds f27, f27, f29
    fadds f26, f4, f5
    fadds f4, f7, f6
    fmuls f7, f1, f31
    stfs f27, 0x0(r30)
    fmuls f5, f2, f13
    stfs f4, 0x10(r30)
    fmuls f9, f1, f9
    fmuls f8, f2, f8
    fadds f7, f7, f5
    stfs f26, 0x1c(r30)
    fmuls f5, f1, f12
    fmuls f1, f2, f11
    fmuls f6, f30, f31
    stfs f7, 0x4(r30)
    fmuls f4, f3, f13
    fmuls f2, f3, f11
    fadds f3, f5, f1
    fadds f6, f6, f4
    fmuls f4, f30, f12
    fmuls f1, f10, f0
    stfs f3, 0x8(r30)
    fadds f0, f9, f8
    fadds f2, f4, f2
    stfs f6, 0x14(r30)
    fadds f0, f1, f0
    stfs f2, 0x18(r30)
    stfs f0, 0xc(r30)
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
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: CalcWorldMtx_Maya_SSC_Apply__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult
extern "C" asm void CalcWorldMtx_Maya_SSC_Apply__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_25
    lwz r31, 0x0(r8)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    rlwinm. r0, r31, 0, 30, 30
    mr r28, r6
    mr r29, r7
    mr r30, r8
    bne lbl_801EAA04
    rlwinm. r0, r31, 0, 29, 29
    beq lbl_801EAA14
lbl_801EAA04:
    mr r3, r27
    mr r4, r25
    bl PSMTXCopy
    b lbl_801EAAF4
lbl_801EAA14:
    rlwinm. r0, r31, 0, 26, 26
    beq lbl_801EAA8C
    rlwinm. r0, r7, 0, 1, 1
    beq lbl_801EAA4C
    lfs f2, 0x48(r8)
    mr r4, r27
    lfs f1, 0x38(r8)
    addi r5, r1, 0x14
    lfs f0, 0x28(r8)
    stfs f1, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f2, 0x1c(r1)
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801EAAF4
lbl_801EAA4C:
    lfs f1, 0x8(r6)
    mr r4, r27
    lfs f0, 0x48(r8)
    addi r5, r1, 0x8
    lfs f3, 0x4(r6)
    fmuls f4, f1, f0
    lfs f2, 0x38(r8)
    lfs f1, 0x0(r6)
    lfs f0, 0x28(r8)
    fmuls f2, f3, f2
    stfs f4, 0x10(r1)
    fmuls f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801EAAF4
lbl_801EAA8C:
    rlwinm. r0, r7, 0, 1, 1
    beq lbl_801EAAA8
    mr r3, r27
    mr r5, r25
    addi r4, r8, 0x1c
    bl PSMTXConcat
    b lbl_801EAAF4
lbl_801EAAA8:
    addi r3, r8, 0x1c
    addi r4, r1, 0x20
    bl PSMTXCopy
    lfs f1, 0x2c(r1)
    mr r3, r27
    lfs f0, 0x0(r28)
    mr r5, r25
    lfs f3, 0x3c(r1)
    addi r4, r1, 0x20
    fmuls f4, f1, f0
    lfs f2, 0x4(r28)
    lfs f1, 0x4c(r1)
    lfs f0, 0x8(r28)
    fmuls f2, f3, f2
    stfs f4, 0x2c(r1)
    fmuls f0, f1, f0
    stfs f2, 0x3c(r1)
    stfs f0, 0x4c(r1)
    bl PSMTXConcat
lbl_801EAAF4:
    rlwinm. r0, r31, 0, 28, 28
    beq lbl_801EAB14
    lfs f0, lbl_804A1E0C
    oris r4, r29, 0x4000
    stfs f0, 0x8(r26)
    stfs f0, 0x4(r26)
    stfs f0, 0x0(r26)
    b lbl_801EAB30
lbl_801EAB14:
    lfs f2, 0x4(r30)
    clrlwi r4, r29, 2
    lfs f1, 0x8(r30)
    lfs f0, 0xc(r30)
    stfs f2, 0x0(r26)
    stfs f1, 0x4(r26)
    stfs f0, 0x8(r26)
lbl_801EAB30:
    rlwinm. r0, r31, 0, 27, 27
    clrlwi r3, r4, 4
    beq lbl_801EAB40
    oris r3, r4, 0x1000
lbl_801EAB40:
    addi r11, r1, 0x70
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
