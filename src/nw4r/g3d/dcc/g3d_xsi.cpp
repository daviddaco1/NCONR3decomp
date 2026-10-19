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

    pMtx->_00 = cosR;
    pMtx->_01 = -sinR;
    pMtx->_02 = 0.0f;
    pMtx->_03 = sinR;

    pMtx->_10 = sinR;
    pMtx->_11 = cosR;
    pMtx->_12 = 0.0f;
    pMtx->_13 = 1.0f - cosR;
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
    pMtx->_01 = -susr;
    pMtx->_02 = 0.0f;
    pMtx->_03 = susr;

    pMtx->_10 = svsr;
    pMtx->_11 = svcr;
    pMtx->_12 = 0.0f;
    pMtx->_13 = -svcr + 1.0f;
}

void MakeTexSrtMtx_RT(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    pMtx->_00 = cosR;
    pMtx->_01 = -sinR;
    pMtx->_02 = 0.0f;
    pMtx->_03 = (sinR - cosR * rSrt.Tu) - sinR * rSrt.Tv;

    pMtx->_10 = sinR;
    pMtx->_11 = cosR;
    pMtx->_12 = 0.0f;
    pMtx->_13 = (-cosR - sinR * rSrt.Tu) + cosR * rSrt.Tv + 1.0f;
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

    f32 sucr = rSrt.Su * cosR;
    f32 susr = rSrt.Su * sinR;
    f32 svcr = rSrt.Sv * cosR;
    f32 svsr = rSrt.Sv * sinR;

    pMtx->_00 = sucr;
    pMtx->_01 = -susr;
    pMtx->_02 = 0.0f;
    pMtx->_03 = (susr - sucr * rSrt.Tu) - susr * rSrt.Tv;

    pMtx->_10 = svsr;
    pMtx->_11 = svcr;
    pMtx->_12 = 0.0f;
    pMtx->_13 = (-svcr - svsr * rSrt.Tu) + svcr * rSrt.Tv + 1.0f;
}

void ProductTexSrtMtx_S(math::MTX34 *pMtx, const TexSrt &rSrt) {
    pMtx->_00 *= rSrt.Su;
    pMtx->_01 *= rSrt.Su;
    pMtx->_02 *= rSrt.Su;
    pMtx->_03 *= rSrt.Su;

    pMtx->_10 *= rSrt.Sv;
    pMtx->_11 *= rSrt.Sv;
    pMtx->_12 *= rSrt.Sv;
    pMtx->_13 = rSrt.Sv * (pMtx->_13 - 1.0f) + 1.0f;
}

void ProductTexSrtMtx_R(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    f32 _0x, _1x;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    _0x = cosR * pMtx->_00 - sinR * pMtx->_10;
    _1x = sinR * pMtx->_00 + cosR * pMtx->_10;
    pMtx->_00 = _0x;
    pMtx->_10 = _1x;

    _0x = cosR * pMtx->_01 - sinR * pMtx->_11;
    _1x = sinR * pMtx->_01 + cosR * pMtx->_11;
    pMtx->_01 = _0x;
    pMtx->_11 = _1x;

    _0x = cosR * pMtx->_02 - sinR * pMtx->_12;
    _1x = sinR * pMtx->_02 + cosR * pMtx->_12;
    pMtx->_02 = _0x;
    pMtx->_12 = _1x;

    _0x = cosR * pMtx->_03 - sinR * pMtx->_13 + sinR;
    _1x = sinR * pMtx->_03 + cosR * pMtx->_13 - cosR + 1.0f;
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

    _0x = sucr * pMtx->_00 - susr * pMtx->_10;
    _1x = svsr * pMtx->_00 + svcr * pMtx->_10;
    pMtx->_00 = _0x;
    pMtx->_10 = _1x;

    _0x = sucr * pMtx->_01 - susr * pMtx->_11;
    _1x = svsr * pMtx->_01 + svcr * pMtx->_11;
    pMtx->_01 = _0x;
    pMtx->_11 = _1x;

    _0x = sucr * pMtx->_02 - susr * pMtx->_12;
    _1x = svsr * pMtx->_02 + svcr * pMtx->_12;
    pMtx->_02 = _0x;
    pMtx->_12 = _1x;

    _0x = sucr * pMtx->_03 - susr * pMtx->_13 + susr;
    _1x = svsr * pMtx->_03 + svcr * pMtx->_13 - svcr + 1.0f;

    pMtx->_03 = _0x;
    pMtx->_13 = _1x;
}

void ProductTexSrtMtx_RT(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    f32 _0x, _1x;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    _0x = cosR * pMtx->_00 - sinR * pMtx->_10;
    _1x = sinR * pMtx->_00 + cosR * pMtx->_10;
    pMtx->_00 = _0x;
    pMtx->_10 = _1x;

    _0x = cosR * pMtx->_01 - sinR * pMtx->_11;
    _1x = sinR * pMtx->_01 + cosR * pMtx->_11;
    pMtx->_01 = _0x;
    pMtx->_11 = _1x;

    _0x = cosR * pMtx->_02 - sinR * pMtx->_12;
    _1x = sinR * pMtx->_02 + cosR * pMtx->_12;
    pMtx->_02 = _0x;
    pMtx->_12 = _1x;

    // clang-format off
    _0x = cosR * (pMtx->_03 - rSrt.Tu)
        - sinR * (pMtx->_13 + rSrt.Tv)
        + sinR;

    _1x = sinR * (pMtx->_03 - rSrt.Tu)
        + cosR * (pMtx->_13 + rSrt.Tv)
        - cosR + 1.0f;
    // clang-format on

    pMtx->_03 = _0x;
    pMtx->_13 = _1x;
}

void ProductTexSrtMtx_ST(math::MTX34 *pMtx, const TexSrt &rSrt) {
    pMtx->_00 *= rSrt.Su;
    pMtx->_01 *= rSrt.Su;
    pMtx->_02 *= rSrt.Su;
    pMtx->_03 = (pMtx->_03 - rSrt.Tu) * rSrt.Su;

    pMtx->_10 *= rSrt.Sv;
    pMtx->_11 *= rSrt.Sv;
    pMtx->_12 *= rSrt.Sv;
    pMtx->_13 = (pMtx->_13 + rSrt.Tv - 1.0f) * rSrt.Sv + 1.0f;
}

void ProductTexSrtMtx_SRT(math::MTX34 *pMtx, const TexSrt &rSrt) {
    f32 sinR, cosR;
    f32 _0x, _1x;
    math::SinCosDeg(&sinR, &cosR, rSrt.R);

    f32 sucr = rSrt.Su * cosR;
    f32 susr = rSrt.Su * sinR;
    f32 svcr = rSrt.Sv * cosR;
    f32 svsr = rSrt.Sv * sinR;

    _0x = sucr * pMtx->_00 - susr * pMtx->_10;
    _1x = svsr * pMtx->_00 + svcr * pMtx->_10;
    pMtx->_00 = _0x;
    pMtx->_10 = _1x;

    _0x = sucr * pMtx->_01 - susr * pMtx->_11;
    _1x = svsr * pMtx->_01 + svcr * pMtx->_11;
    pMtx->_01 = _0x;
    pMtx->_11 = _1x;

    _0x = sucr * pMtx->_02 - susr * pMtx->_12;
    _1x = svsr * pMtx->_02 + svcr * pMtx->_12;
    pMtx->_02 = _0x;
    pMtx->_12 = _1x;

    // clang-format off
    _0x = sucr * (pMtx->_03 - rSrt.Tu)
        - susr * (pMtx->_13 + rSrt.Tv)
        + susr;

    _1x = svsr * (pMtx->_03 - rSrt.Tu)
        + svcr * (pMtx->_13 + rSrt.Tv)
        - svcr + 1.0f;
    // clang-format on

    pMtx->_03 = _0x;
    pMtx->_13 = _1x;
}

} // namespace

typedef void (*CalcTexMtxFunc)(math::MTX34 *pMtx, const TexSrt &rSrt);

bool CalcTexMtx_Xsi(math::MTX34 *pMtx, bool set, const TexSrt &rSrt, TexSrt::Flag flag) {
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

// CalcWorldMtx_Xsi__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult: definicion C reemplazada por asm (ver abajo)


} // namespace dcc
} // namespace detail
} // namespace g3d
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_804A1E20;
extern "C" float lbl_804A1E24;
extern "C" float lbl_804A1E28;
extern "C" void CalcWorldMtx_Xsi__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult();
extern "C" void MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void SinCosFIdx__Q24nw4r4mathFPfPff();
extern "C" void _restgpr_25();
extern "C" void _savegpr_25();
extern "C" void fn_801EAB58();
extern "C" void fn_801EAB90();
extern "C" void fn_801EAC18();
extern "C" void fn_801EAC50();
extern "C" void fn_801EACF0();
extern "C" void fn_801EADB8();
extern "C" void fn_801EAE08();
extern "C" void fn_801EAED0();
extern "C" void fn_801EAF48();
extern "C" void fn_801EB058();
extern "C" void fn_801EB07C();
extern "C" void fn_801EB1B8();
extern "C" void fn_801EB2E4();
extern "C" void fn_801EB36C();

// asm_to_cpp: fn_801EAB58
extern "C" asm void fn_801EAB58() {
    nofralloc
    lfs f1, 0x4(r4)
    lfs f0, lbl_804A1E24
    lfs f2, lbl_804A1E20
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

// asm_to_cpp: fn_801EAB90
extern "C" asm void fn_801EAB90() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    lfs f0, lbl_804A1E28
    addi r4, r1, 0x8
    stw r0, 0x24(r1)
    fmuls f1, f0, f1
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f0, 0x8(r1)
    lfs f2, lbl_804A1E20
    stfs f0, 0x0(r31)
    lfs f1, lbl_804A1E24
    lfs f0, 0xc(r1)
    fneg f0, f0
    stfs f2, 0x8(r31)
    stfs f0, 0x4(r31)
    lfs f0, 0xc(r1)
    stfs f0, 0xc(r31)
    lfs f0, 0xc(r1)
    stfs f0, 0x10(r31)
    lfs f0, 0x8(r1)
    stfs f0, 0x14(r31)
    stfs f2, 0x18(r31)
    lfs f0, 0x8(r1)
    fsubs f0, f1, f0
    stfs f0, 0x1c(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EAC18
extern "C" asm void fn_801EAC18() {
    nofralloc
    lfs f0, 0xc(r4)
    lfs f2, lbl_804A1E20
    fneg f1, f0
    lfs f3, lbl_804A1E24
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

// asm_to_cpp: fn_801EAC50
extern "C" asm void fn_801EAC50() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    stw r0, 0x24(r1)
    lfs f0, lbl_804A1E28
    stw r31, 0x1c(r1)
    mr r31, r4
    fmuls f1, f0, f1
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f0, 0x8(r1)
    lfs f3, 0x4(r31)
    lfs f1, 0x0(r31)
    lfs f4, 0xc(r1)
    fmuls f7, f3, f0
    fmuls f5, f1, f0
    lfs f2, lbl_804A1E20
    fmuls f6, f1, f4
    lfs f0, lbl_804A1E24
    fneg f1, f7
    fmuls f4, f3, f4
    fneg f3, f6
    stfs f5, 0x0(r30)
    fadds f0, f0, f1
    stfs f2, 0x8(r30)
    stfs f3, 0x4(r30)
    stfs f6, 0xc(r30)
    stfs f4, 0x10(r30)
    stfs f7, 0x14(r30)
    stfs f2, 0x18(r30)
    stfs f0, 0x1c(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EACF0
extern "C" asm void fn_801EACF0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    stw r0, 0x24(r1)
    lfs f0, lbl_804A1E28
    stw r31, 0x1c(r1)
    mr r31, r4
    fmuls f1, f0, f1
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f0, 0x8(r1)
    lfs f4, lbl_804A1E20
    stfs f0, 0x0(r30)
    lfs f6, 0xc(r31)
    lfs f0, 0xc(r1)
    lfs f5, 0x10(r31)
    fneg f1, f0
    stfs f4, 0x8(r30)
    lfs f0, lbl_804A1E24
    stfs f1, 0x4(r30)
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    fmuls f3, f1, f6
    fmuls f1, f2, f5
    fsubs f2, f2, f3
    fsubs f1, f2, f1
    stfs f1, 0xc(r30)
    lfs f1, 0xc(r1)
    stfs f1, 0x10(r30)
    lfs f1, 0x8(r1)
    stfs f1, 0x14(r30)
    stfs f4, 0x18(r30)
    lfs f4, 0x8(r1)
    lfs f1, 0xc(r1)
    fneg f3, f4
    fmuls f2, f1, f6
    fmuls f1, f4, f5
    fsubs f2, f3, f2
    fadds f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x1c(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EADB8
extern "C" asm void fn_801EADB8() {
    nofralloc
    lfs f0, 0x10(r4)
    lfs f1, lbl_804A1E24
    lfs f5, lbl_804A1E20
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

// asm_to_cpp: fn_801EAE08
extern "C" asm void fn_801EAE08() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    stw r0, 0x24(r1)
    lfs f0, lbl_804A1E28
    stw r31, 0x1c(r1)
    mr r31, r4
    fmuls f1, f0, f1
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f3, 0x8(r1)
    lfs f0, 0x4(r31)
    lfs f2, 0xc(r1)
    lfs f5, 0x0(r31)
    fmuls f9, f0, f3
    fmuls f10, f0, f2
    lfs f1, 0xc(r31)
    fmuls f7, f5, f3
    lfs f6, lbl_804A1E20
    fmuls f8, f5, f2
    fneg f3, f9
    fmuls f2, f10, f1
    lfs f4, 0x10(r31)
    fmuls f5, f7, f1
    lfs f0, lbl_804A1E24
    fmuls f1, f9, f4
    fsubs f2, f3, f2
    fmuls f3, f8, f4
    stfs f7, 0x0(r30)
    fsubs f5, f8, f5
    fadds f1, f2, f1
    stfs f6, 0x8(r30)
    fneg f4, f8
    fsubs f2, f5, f3
    stfs f10, 0x10(r30)
    fadds f0, f0, f1
    stfs f9, 0x14(r30)
    stfs f6, 0x18(r30)
    stfs f4, 0x4(r30)
    stfs f2, 0xc(r30)
    stfs f0, 0x1c(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EAED0
extern "C" asm void fn_801EAED0() {
    nofralloc
    lfs f0, 0x1c(r3)
    lfs f1, lbl_804A1E24
    lfs f5, 0x4(r4)
    fsubs f0, f0, f1
    lfs f4, 0x10(r3)
    lfs f3, 0x14(r3)
    lfs f2, 0x18(r3)
    fmuls f4, f4, f5
    fmuls f0, f5, f0
    fmuls f3, f3, f5
    lfs f8, 0x0(r3)
    fmuls f2, f2, f5
    lfs f9, 0x0(r4)
    lfs f7, 0x4(r3)
    lfs f6, 0x8(r3)
    fmuls f8, f8, f9
    lfs f5, 0xc(r3)
    fmuls f7, f7, f9
    stfs f4, 0x10(r3)
    fmuls f6, f6, f9
    fmuls f4, f5, f9
    fadds f0, f1, f0
    stfs f8, 0x0(r3)
    stfs f7, 0x4(r3)
    stfs f6, 0x8(r3)
    stfs f4, 0xc(r3)
    stfs f3, 0x14(r3)
    stfs f2, 0x18(r3)
    stfs f0, 0x1c(r3)
    blr
}

// asm_to_cpp: fn_801EAF48
extern "C" asm void fn_801EAF48() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    lfs f0, lbl_804A1E28
    addi r4, r1, 0x8
    stw r0, 0x24(r1)
    fmuls f1, f0, f1
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f5, 0x8(r1)
    lfs f2, 0x0(r31)
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r31)
    fmuls f4, f5, f2
    fmuls f3, f1, f2
    lfs f9, 0x4(r31)
    fmuls f1, f1, f0
    lfs f2, 0x14(r31)
    fmuls f0, f5, f0
    lfs f7, 0x8(r31)
    fsubs f4, f4, f1
    lfs f1, 0x18(r31)
    fadds f6, f3, f0
    lfs f5, 0xc(r31)
    lfs f3, 0x1c(r31)
    stfs f4, 0x0(r31)
    lfs f0, lbl_804A1E24
    stfs f6, 0x10(r31)
    lfs f10, 0x8(r1)
    lfs f4, 0xc(r1)
    fmuls f8, f10, f9
    fmuls f6, f4, f2
    fmuls f4, f4, f9
    fmuls f2, f10, f2
    fsubs f6, f8, f6
    fadds f2, f4, f2
    stfs f6, 0x4(r31)
    stfs f2, 0x14(r31)
    lfs f8, 0x8(r1)
    lfs f2, 0xc(r1)
    fmuls f6, f8, f7
    fmuls f4, f2, f1
    fmuls f2, f2, f7
    fmuls f1, f8, f1
    fsubs f4, f6, f4
    fadds f1, f2, f1
    stfs f4, 0x8(r31)
    stfs f1, 0x18(r31)
    lfs f6, 0x8(r1)
    lfs f4, 0xc(r1)
    fmuls f1, f6, f3
    fmuls f2, f4, f5
    fmuls f5, f6, f5
    fmuls f3, f4, f3
    fadds f1, f2, f1
    fsubs f2, f5, f3
    fsubs f1, f1, f6
    fadds f2, f4, f2
    fadds f0, f0, f1
    stfs f2, 0xc(r31)
    stfs f0, 0x1c(r31)
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EB058
extern "C" asm void fn_801EB058() {
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

// asm_to_cpp: fn_801EB07C
extern "C" asm void fn_801EB07C() {
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
    lfs f0, lbl_804A1E28
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    fmuls f1, f0, f1
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f4, 0x8(r1)
    lfs f0, 0x4(r31)
    lfs f1, 0xc(r1)
    fmuls f2, f0, f4
    lfs f5, 0x0(r31)
    fmuls f3, f0, f1
    lfs f6, 0x1c(r30)
    fmuls f0, f5, f4
    lfs f7, 0xc(r30)
    fmuls f1, f5, f1
    lfs f30, 0x0(r30)
    fmuls f5, f3, f7
    lfs f13, 0x10(r30)
    fmuls f4, f2, f6
    lfs f11, 0x4(r30)
    fmuls f7, f0, f7
    lfs f10, 0x14(r30)
    fadds f5, f5, f4
    lfs f4, lbl_804A1E24
    fmuls f6, f1, f6
    lfs f9, 0x8(r30)
    fsubs f5, f5, f2
    lfs f8, 0x18(r30)
    fsubs f6, f7, f6
    fmuls f31, f0, f30
    fadds f4, f4, f5
    fmuls f12, f1, f13
    fmuls f7, f3, f30
    stfs f4, 0x1c(r30)
    fmuls f5, f0, f11
    fsubs f31, f31, f12
    fadds f12, f1, f6
    fmuls f6, f2, f13
    fmuls f4, f1, f10
    stfs f31, 0x0(r30)
    fadds f13, f7, f6
    stfs f12, 0xc(r30)
    fmuls f6, f2, f10
    fsubs f10, f5, f4
    fmuls f7, f3, f11
    stfs f13, 0x10(r30)
    fmuls f5, f0, f9
    fmuls f4, f1, f8
    stfs f10, 0x4(r30)
    fmuls f0, f2, f8
    fmuls f1, f3, f9
    fadds f6, f7, f6
    fsubs f2, f5, f4
    fadds f0, f1, f0
    stfs f6, 0x14(r30)
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

// asm_to_cpp: fn_801EB1B8
extern "C" asm void fn_801EB1B8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0x8(r4)
    stw r0, 0x24(r1)
    lfs f0, lbl_804A1E28
    stw r31, 0x1c(r1)
    mr r31, r4
    fmuls f1, f0, f1
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f4, 0x8(r1)
    lfs f1, 0x0(r30)
    lfs f2, 0xc(r1)
    fmuls f3, f4, f1
    lfs f0, 0x10(r30)
    fmuls f1, f2, f1
    lfs f10, 0x4(r30)
    fmuls f2, f2, f0
    lfs f7, 0x14(r30)
    fmuls f0, f4, f0
    lfs f8, 0x8(r30)
    fsubs f3, f3, f2
    lfs f2, 0xc(r30)
    lfs f6, 0x18(r30)
    fadds f4, f1, f0
    lfs f0, 0xc(r31)
    stfs f3, 0x0(r30)
    fsubs f5, f2, f0
    lfs f1, 0x1c(r30)
    stfs f4, 0x10(r30)
    lfs f0, 0x10(r31)
    lfs f11, 0x8(r1)
    fadds f3, f1, f0
    lfs f2, 0xc(r1)
    fmuls f9, f11, f10
    lfs f0, lbl_804A1E24
    fmuls f4, f2, f7
    fmuls f2, f2, f10
    fmuls f1, f11, f7
    fsubs f4, f9, f4
    fadds f1, f2, f1
    stfs f4, 0x4(r30)
    stfs f1, 0x14(r30)
    lfs f1, 0xc(r1)
    lfs f9, 0x8(r1)
    fmuls f4, f1, f6
    fmuls f7, f9, f8
    fmuls f2, f1, f8
    fmuls f1, f9, f6
    fsubs f4, f7, f4
    fadds f1, f2, f1
    stfs f4, 0x8(r30)
    stfs f1, 0x18(r30)
    lfs f6, 0x8(r1)
    lfs f4, 0xc(r1)
    fmuls f1, f6, f3
    fmuls f2, f4, f5
    fmuls f5, f6, f5
    fmuls f3, f4, f3
    fadds f1, f2, f1
    fsubs f2, f5, f3
    fsubs f1, f1, f6
    fadds f2, f4, f2
    fadds f0, f0, f1
    stfs f2, 0xc(r30)
    stfs f0, 0x1c(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801EB2E4
extern "C" asm void fn_801EB2E4() {
    nofralloc
    lfs f2, 0x1c(r3)
    lfs f0, 0x10(r4)
    lfs f1, lbl_804A1E24
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

// asm_to_cpp: fn_801EB36C
extern "C" asm void fn_801EB36C() {
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
    lfs f0, lbl_804A1E28
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    fmuls f1, f0, f1
    addi r3, r1, 0xc
    bl SinCosFIdx__Q24nw4r4mathFPfPff
    lfs f5, 0x8(r1)
    lfs f0, 0x4(r31)
    lfs f6, 0xc(r1)
    lfs f8, 0x0(r31)
    fmuls f2, f0, f5
    fmuls f3, f0, f6
    lfs f4, 0xc(r30)
    lfs f1, 0xc(r31)
    fmuls f0, f8, f5
    lfs f5, 0x1c(r30)
    fsubs f7, f4, f1
    fmuls f1, f8, f6
    lfs f4, 0x10(r31)
    lfs f29, 0x0(r30)
    fadds f4, f5, f4
    lfs f31, 0x10(r30)
    fmuls f6, f3, f7
    fmuls f8, f0, f7
    lfs f12, 0x4(r30)
    fmuls f5, f2, f4
    fmuls f7, f1, f4
    lfs f11, 0x14(r30)
    fmuls f30, f0, f29
    fadds f5, f6, f5
    lfs f4, lbl_804A1E24
    fsubs f6, f8, f7
    fmuls f13, f1, f31
    lfs f10, 0x8(r30)
    fsubs f5, f5, f2
    fadds f8, f1, f6
    lfs f9, 0x18(r30)
    fsubs f30, f30, f13
    fadds f13, f4, f5
    fmuls f7, f3, f29
    stfs f8, 0xc(r30)
    fmuls f6, f2, f31
    fmuls f5, f0, f12
    stfs f30, 0x0(r30)
    fmuls f4, f1, f11
    fadds f29, f7, f6
    stfs f13, 0x1c(r30)
    fmuls f7, f3, f12
    fsubs f8, f5, f4
    fmuls f6, f2, f11
    stfs f29, 0x10(r30)
    fmuls f5, f0, f10
    fmuls f4, f1, f9
    stfs f8, 0x4(r30)
    fmuls f0, f2, f9
    fmuls f1, f3, f10
    fadds f6, f7, f6
    fsubs f2, f5, f4
    fadds f0, f1, f0
    stfs f6, 0x14(r30)
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

// asm_to_cpp: CalcWorldMtx_Xsi__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult
extern "C" asm void CalcWorldMtx_Xsi__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult() {
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
    bne lbl_801EB5A4
    rlwinm. r0, r31, 0, 29, 29
    beq lbl_801EB5B4
lbl_801EB5A4:
    mr r3, r27
    mr r4, r25
    bl PSMTXCopy
    b lbl_801EB694
lbl_801EB5B4:
    rlwinm. r0, r31, 0, 26, 26
    beq lbl_801EB62C
    clrrwi. r0, r7, 31
    beq lbl_801EB5EC
    lfs f2, 0x48(r8)
    mr r4, r27
    lfs f1, 0x38(r8)
    addi r5, r1, 0x14
    lfs f0, 0x28(r8)
    stfs f1, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f2, 0x1c(r1)
    bl MTX34Trans__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
    b lbl_801EB694
lbl_801EB5EC:
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
    b lbl_801EB694
lbl_801EB62C:
    clrrwi. r0, r7, 31
    beq lbl_801EB648
    mr r3, r27
    mr r5, r25
    addi r4, r8, 0x1c
    bl PSMTXConcat
    b lbl_801EB694
lbl_801EB648:
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
lbl_801EB694:
    rlwinm. r0, r31, 0, 28, 28
    beq lbl_801EB6BC
    lfs f2, 0x0(r28)
    oris r4, r29, 0x4000
    lfs f1, 0x4(r28)
    lfs f0, 0x8(r28)
    stfs f2, 0x0(r26)
    stfs f1, 0x4(r26)
    stfs f0, 0x8(r26)
    b lbl_801EB6F0
lbl_801EB6BC:
    lfs f1, 0x0(r28)
    clrlwi r4, r29, 2
    lfs f0, 0x4(r30)
    lfs f3, 0x4(r28)
    fmuls f4, f1, f0
    lfs f2, 0x8(r30)
    lfs f1, 0x8(r28)
    lfs f0, 0xc(r30)
    fmuls f2, f3, f2
    stfs f4, 0x0(r26)
    fmuls f0, f1, f0
    stfs f2, 0x4(r26)
    stfs f0, 0x8(r26)
lbl_801EB6F0:
    rlwinm. r0, r31, 0, 27, 27
    clrlwi r3, r4, 4
    beq lbl_801EB700
    oris r3, r4, 0x1000
lbl_801EB700:
    addi r11, r1, 0x70
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
