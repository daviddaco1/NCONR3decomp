#include <nw4r/ef.h>
#include <nw4r/math.h>
#include <nw4r/ut.h>

#include <cmath>

namespace nw4r {
namespace ef {

u16 UtlistToArray(const ut::List* pList, void** ppArray, int maxlen) {
    u16 num = 0;

    NW4R_UT_LIST_FOREACH (void, it, *pList, {
        ppArray[num++] = it;

        if (num >= maxlen) {
            break;
        }
    })

    return num;
}

math::VEC3& Rotation2VecY(const nw4r::math::VEC3& rRot,
                          nw4r::math::VEC3* pVec) {

    f32 sx = std::sinf(rRot.x);
    f32 cx = std::cosf(rRot.x);

    f32 sy = std::sinf(rRot.y);
    f32 cy = std::cosf(rRot.y);

    f32 sz = std::sinf(rRot.z);
    f32 cz = std::cosf(rRot.z);

    pVec->x = sx * sy * cz - cx * sz;
    pVec->y = sx * sy * sz + cx * cz;
    pVec->z = sx * cy;

    return *pVec;
}

void GetDirMtxY(math::MTX34* pMtx, const math::VEC3& rVec) {
    f32 sx, cx;
    f32 sz, cz;

    sx = rVec.z;
    cx = math::FSqrt(1.0f - sx * sx);

    if (cx > NW4R_MATH_FLT_EPSILON) {
        cz = rVec.y / cx;
        sz = rVec.x / -cx;
    } else {
        sz = 0.0f;
        cz = 1.0f;
    }

    pMtx->_00 = cz;
    pMtx->_01 = rVec.x;
    pMtx->_02 = sx * sz;
    pMtx->_03 = 0.0f;

    pMtx->_10 = sz;
    pMtx->_11 = rVec.y;
    pMtx->_12 = -cz * sx;
    pMtx->_13 = 0.0f;

    pMtx->_20 = 0.0f;
    pMtx->_21 = rVec.z;
    pMtx->_22 = cx;
    pMtx->_23 = 0.0f;
}

void MtxGetRotationMtx(const math::MTX34& rMtx, math::MTX34* pDst) {
    math::VEC3 x, y, z;

    MtxColVec(&rMtx, 0, &x);
    if (x.x != 0.0f || x.y != 0.0f || x.z != 0.0f) {
        math::VEC3Normalize(&x, &x);
    } else {
        x.x = 1.0f;
    }

    MtxColVec(&rMtx, 1, &y);
    if (y.x != 0.0f || y.y != 0.0f || y.z != 0.0f) {
        math::VEC3Normalize(&y, &y);
    } else {
        y.y = 1.0f;
    }

    math::VEC3Cross(&z, &x, &y);
    math::VEC3Cross(&y, &z, &x);

    MtxSetColVec(pDst, 0, &x);
    MtxSetColVec(pDst, 1, &y);
    MtxSetColVec(pDst, 2, &z);

    pDst->_03 = 0.0f;
    pDst->_13 = 0.0f;
    pDst->_23 = 0.0f;
}

void MtxSetColVec(math::MTX34* pMtx, int col, const math::VEC3* pVec) {
    pMtx->m[0][col] = pVec->x;
    pMtx->m[1][col] = pVec->y;
    pMtx->m[2][col] = pVec->z;
}

math::VEC3* MtxColVec(const math::MTX34* pMtx, int col, math::VEC3* pVec) {
    pVec->x = pMtx->m[0][col];
    pVec->y = pMtx->m[1][col];
    pVec->z = pMtx->m[2][col];

    return pVec;
}

void MtxGetRotation(const math::MTX34& rMtx, math::VEC3* pRot) {
    f32 C;
    f32 sx, sy, sz;
    f32 f;

    if (!((sx = std::sqrtf(rMtx._00 * rMtx._00 + rMtx._10 * rMtx._10 +
                           rMtx._20 * rMtx._20)) < NW4R_MATH_FLT_MIN) &&
        !((sy = std::sqrtf(rMtx._01 * rMtx._01 + rMtx._11 * rMtx._11 +
                           rMtx._21 * rMtx._21)) < NW4R_MATH_FLT_MIN) &&
        !((sz = std::sqrtf(rMtx._02 * rMtx._02 + rMtx._12 * rMtx._12 +
                           rMtx._22 * rMtx._22)) < NW4R_MATH_FLT_MIN)) {

        f = -rMtx._20 / sx;
        pRot->y = std::asinf(f);
        C = std::cosf(pRot->y);

        if (C >= NW4R_MATH_FLT_MIN) {
            pRot->x = std::atan2f(rMtx._21 / sy, rMtx._22 / sz);
            pRot->z = std::atan2f(rMtx._10, rMtx._00);
        } else {
            pRot->x = std::atan2f(rMtx._01, rMtx._11);
            pRot->z = 0.0f;
        }
    } else {
        pRot->x = 0.0f;
        pRot->y = 0.0f;
        pRot->z = 0.0f;
    }
}

void MtxGetTranslate(const math::MTX34& rMtx, math::VEC3* pTrans) {
    pTrans->x = rMtx._03;
    pTrans->y = rMtx._13;
    pTrans->z = rMtx._23;
}

void MtxGetScale(const math::MTX34& rMtx, math::VEC3* pScale) {
    f32 sh[3];
    math::VEC3 v0, v1, v2, v;
    f32 mag;

    MtxColVec(&rMtx, 0, &v0);
    mag = math::VEC3LenSq(&v0);

    if (mag > NW4R_MATH_FLT_EPSILON) {
        mag = math::FrSqrt(mag);
        pScale->x = 1.0f / mag;

        math::VEC3Scale(&v0, &v0, mag);
        MtxColVec(&rMtx, 1, &v1);

        sh[0] = math::VEC3Dot(&v0, &v1);
        math::VEC3Scale(&v, &v0, sh[0]);
        math::VEC3Sub(&v1, &v1, &v);

        mag = math::VEC3LenSq(&v1);

        if (mag > NW4R_MATH_FLT_EPSILON) {
            mag = math::FrSqrt(mag);
            pScale->y = 1.0f / mag;

            sh[0] *= mag;
            math::VEC3Scale(&v1, &v1, mag);
            MtxColVec(&rMtx, 2, &v2);

            sh[2] = math::VEC3Dot(&v1, &v2);
            math::VEC3Scale(&v, &v1, sh[2]);
            math::VEC3Sub(&v2, &v2, &v);

            sh[1] = math::VEC3Dot(&v0, &v2);
            math::VEC3Scale(&v, &v0, sh[1]);
            math::VEC3Sub(&v2, &v2, &v);

            mag = math::VEC3LenSq(&v2);

            if (mag > NW4R_MATH_FLT_EPSILON) {
                pScale->z = std::sqrtf(mag);
                math::VEC3Cross(&v, &v1, &v2);

                if (math::VEC3Dot(&v0, &v) < 0.0f) {
                    // Double precision
                    pScale->x *= -1.0;
                    pScale->y *= -1.0;
                    pScale->z *= -1.0;
                }
            } else {
                pScale->z = 0.0f;
            }
        } else {
            pScale->y = 0.0f;
            MtxColVec(&rMtx, 2, &v2);

            sh[1] = math::VEC3Dot(&v0, &v2);
            math::VEC3Scale(&v, &v0, sh[1]);
            math::VEC3Sub(&v2, &v2, &v);

            mag = math::VEC3LenSq(&v2);

            if (mag > NW4R_MATH_FLT_EPSILON) {
                pScale->z = std::sqrtf(mag);
            } else {
                pScale->z = 0.0f;
            }
        }

    } else {
        pScale->x = 0.0f;

        MtxColVec(&rMtx, 1, &v1);
        mag = math::VEC3LenSq(&v1);

        if (mag > NW4R_MATH_FLT_EPSILON) {
            mag = math::FrSqrt(mag);
            pScale->y = 1.0f / mag;

            math::VEC3Scale(&v1, &v1, mag);
            MtxColVec(&rMtx, 2, &v2);

            sh[2] = math::VEC3Dot(&v1, &v2);
            math::VEC3Scale(&v, &v1, sh[2]);
            math::VEC3Sub(&v2, &v2, &v);
            pScale->z = math::VEC3Len(&v2);
        } else {
            pScale->y = 0.0f;

            MtxColVec(&rMtx, 2, &v2);
            pScale->z = math::VEC3Len(&v2);
        }
    }
}

} // namespace ef
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_804A1848;
extern "C" float lbl_804A184C;
extern "C" float lbl_804A1850;
extern "C" float lbl_804A1858;
extern "C" float lbl_804A185C;
extern "C" float lbl_804A1860;
extern "C" float lbl_804A1868;
extern "C" float lbl_804A1870;
extern "C" float lbl_804A1874;
extern "C" u8 lbl_803E5EA0[];
extern "C" void CosFIdx__Q24nw4r4mathFf();
extern "C" void FrSqrt__Q24nw4r4mathFf();
extern "C" void List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv();
extern "C" void List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs();
extern "C" void List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv();
extern "C" void fn_801B920C();
extern "C" void fn_801B9270();
extern "C" void fn_801B9344();
extern "C" void fn_801B9448();
extern "C" void fn_801B955C();
extern "C" void fn_801B96E4();
extern "C" void fn_801B9B90();
extern "C" void fn_801BA138();
extern "C" void fn_8030DE88();
extern "C" void fn_8030DEEC();

// asm_to_cpp: fn_801B920C
extern "C" asm void fn_801B920C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    b lbl_801B923C
lbl_801B9224:
    addi r3, r31, 0x10
    li r4, 0x0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r4, r3
    addi r3, r31, 0x10
    bl List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv
lbl_801B923C:
    addi r3, r31, 0x10
    li r4, 0x0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    bne lbl_801B9224
    li r0, 0x0
    li r3, 0x1
    stw r0, 0x1c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801B9270
extern "C" asm void fn_801B9270() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_803E5EA0@ha
    addi r3, r31, lbl_803E5EA0@l
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    addi r31, r31, lbl_803E5EA0@l
    li r4, 0x4
    addi r3, r31, 0x10
    bl List_Init__Q24nw4r2utFPQ34nw4r2ut4ListUs
    li r0, 0x0
    stw r0, 0xc(r31)
    stw r0, 0x1c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801B9344
extern "C" asm void fn_801B9344() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stfd f30, 0x10(r1)
    opword 0xF3C10018
    lfs f31, 0x8(r4)
    stw r31, 0xc(r1)
    mr r31, r4
    fabs f1, f31
    lfs f8, lbl_804A1850
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f0, lbl_804A185C
    fsubs f1, f8, f1
    fcmpo cr0, f1, f0
    bge lbl_801B9398
    lfs f6, lbl_804A184C
    fmr f7, f6
    b lbl_801B93D4
lbl_801B9398:
    fmuls f0, f31, f31
    lfs f6, lbl_804A184C
    fsubs f30, f8, f0
    fcmpo cr0, f30, f6
    opword 0x4C401382
    bne lbl_801B93B4
    b lbl_801B93C0
lbl_801B93B4:
    fmr f1, f30
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f6, f30, f1
lbl_801B93C0:
    fneg f1, f6
    lfs f2, 0x4(r31)
    lfs f0, 0x0(r31)
    fdivs f8, f2, f6
    fdivs f7, f0, f1
lbl_801B93D4:
    fneg f0, f8
    lfs f3, lbl_804A184C
    fmuls f4, f31, f7
    lfs f5, 0x0(r31)
    lfs f2, 0x4(r31)
    fmuls f1, f0, f31
    lfs f0, 0x8(r31)
    stfs f8, 0x0(r30)
    stfs f5, 0x4(r30)
    stfs f4, 0x8(r30)
    stfs f3, 0xc(r30)
    stfs f7, 0x10(r30)
    stfs f2, 0x14(r30)
    stfs f1, 0x18(r30)
    stfs f3, 0x1c(r30)
    stfs f3, 0x20(r30)
    stfs f0, 0x24(r30)
    stfs f6, 0x28(r30)
    stfs f3, 0x2c(r30)
    opword 0xE3E10028
    lfd f31, 0x20(r1)
    opword 0xE3C10018
    lfd f30, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801B9448
extern "C" asm void fn_801B9448() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f2, 0x0(r3)
    stw r0, 0x44(r1)
    lfs f1, 0x10(r3)
    stw r31, 0x3c(r1)
    mr r31, r4
    lfs f0, 0x20(r3)
    stw r30, 0x38(r1)
    mr r30, r3
    addi r3, r1, 0x20
    stfs f2, 0x20(r1)
    mr r4, r3
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    bl fn_801B9B90
    cmpwi r3, 0x0
    bne lbl_801B9498
    lfs f0, lbl_804A1850
    stfs f0, 0x20(r1)
lbl_801B9498:
    lfs f2, 0x4(r30)
    addi r3, r1, 0x14
    lfs f1, 0x14(r30)
    mr r4, r3
    lfs f0, 0x24(r30)
    stfs f2, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_801B9B90
    cmpwi r3, 0x0
    bne lbl_801B94CC
    lfs f0, lbl_804A1850
    stfs f0, 0x18(r1)
lbl_801B94CC:
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_8030DEEC
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_8030DEEC
    lfs f1, 0x20(r1)
    lfs f0, lbl_804A184C
    stfs f1, 0x0(r31)
    lfs f1, 0x24(r1)
    stfs f1, 0x10(r31)
    lfs f1, 0x28(r1)
    stfs f1, 0x20(r31)
    lfs f1, 0x14(r1)
    stfs f1, 0x4(r31)
    lfs f1, 0x18(r1)
    stfs f1, 0x14(r31)
    lfs f1, 0x1c(r1)
    stfs f1, 0x24(r31)
    lfs f1, 0x8(r1)
    stfs f1, 0x8(r31)
    lfs f1, 0xc(r1)
    stfs f1, 0x18(r31)
    lfs f1, 0x10(r1)
    stfs f1, 0x28(r31)
    stfs f0, 0xc(r31)
    stfs f0, 0x1c(r31)
    stfs f0, 0x2c(r31)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801B955C
extern "C" asm void fn_801B955C() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    stfd f30, 0x20(r1)
    opword 0xF3C10028
    stfd f29, 0x10(r1)
    opword 0xF3A10018
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_801BA138
    lfs f0, lbl_804A1860
    fmr f29, f1
    fcmpo cr0, f1, f0
    blt lbl_801B9688
    mr r3, r30
    li r4, 0x1
    bl fn_801BA138
    lfs f0, lbl_804A1860
    fmr f30, f1
    fcmpo cr0, f1, f0
    blt lbl_801B9688
    mr r3, r30
    li r4, 0x2
    bl fn_801BA138
    lfs f0, lbl_804A1860
    fmr f31, f1
    fcmpo cr0, f1, f0
    blt lbl_801B9688
    lfs f1, 0x20(r30)
    lfs f0, lbl_804A1850
    fneg f1, f1
    fdivs f1, f1, f29
    fcmpo cr0, f1, f0
    ble lbl_801B95FC
    fmr f1, f0
lbl_801B95FC:
    lfs f0, lbl_804A1858
    fcmpo cr0, f1, f0
    bge lbl_801B960C
    fmr f1, f0
lbl_801B960C:
    bl asin
    frsp f2, f1
    lfs f0, lbl_804A1848
    fmuls f1, f0, f2
    stfs f2, 0x4(r31)
    bl CosFIdx__Q24nw4r4mathFf
    lfs f0, lbl_804A1860
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801B9668
    lfs f1, 0x28(r30)
    lfs f0, 0x24(r30)
    fdivs f2, f1, f31
    fdivs f1, f0, f30
    bl atan2
    frsp f0, f1
    lfs f2, 0x0(r30)
    lfs f1, 0x10(r30)
    stfs f0, 0x0(r31)
    bl atan2
    frsp f0, f1
    stfs f0, 0x8(r31)
    b lbl_801B9698
lbl_801B9668:
    lfs f2, 0x14(r30)
    lfs f1, 0x4(r30)
    bl atan2
    frsp f1, f1
    lfs f0, lbl_804A184C
    stfs f0, 0x8(r31)
    stfs f1, 0x0(r31)
    b lbl_801B9698
lbl_801B9688:
    lfs f0, lbl_804A184C
    stfs f0, 0x0(r31)
    stfs f0, 0x4(r31)
    stfs f0, 0x8(r31)
lbl_801B9698:
    opword 0xE3E10038
    lfd f31, 0x30(r1)
    opword 0xE3C10028
    lfd f30, 0x20(r1)
    opword 0xE3A10018
    lfd f29, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r0, 0x44(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801B96E4
extern "C" asm void fn_801B96E4() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    lfs f0, 0x0(r3)
    lfs f1, 0x10(r3)
    stfs f0, 0x2c(r1)
    lfs f0, 0x20(r3)
    stfs f1, 0x30(r1)
    lfs f3, lbl_804A185C
    opword 0xE041002C
    stw r31, 0x4c(r1)
    mr r31, r4
    opword 0x104200B2
    stw r30, 0x48(r1)
    mr r30, r3
    opword 0x1020103A
    stfs f0, 0x34(r1)
    opword 0x10211094
    fcmpo cr0, f1, f3
    ble lbl_801B9A64
    bl FrSqrt__Q24nw4r4mathFf
    fres f5, f1
    opword 0xE101002C
    lfs f2, 0x14(r30)
    lfs f0, 0x24(r30)
    lfs f4, 0x4(r30)
    lfs f3, lbl_804A185C
    opword 0x10E80058
    opword 0xE1018034
    opword 0x10C5282A
    opword 0x10A50172
    opword 0xF0E1002C
    opword 0x10E80058
    opword 0x10A1317C
    opword 0xE0C1802C
    opword 0xF0E18034
    opword 0xE101002C
    stfs f5, 0x0(r31)
    opword 0xE0A10030
    stfs f4, 0x20(r1)
    stfs f2, 0x24(r1)
    opword 0xE0218020
    stfs f0, 0x28(r1)
    opword 0xE0410020
    opword 0xE0010024
    opword 0x10A50032
    opword 0x1006287A
    opword 0x10002954
    frsp f1, f0
    stfs f0, 0x38(r1)
    opword 0x10080058
    opword 0xF0010008
    opword 0x10070058
    opword 0xE0210008
    opword 0xF0018010
    opword 0x10220828
    opword 0xE0418028
    opword 0xF0210020
    opword 0x10220028
    opword 0xE0410020
    opword 0xF0218028
    opword 0x104200B2
    lfs f0, 0x28(r1)
    opword 0x1020103A
    opword 0x10211094
    fcmpo cr0, f1, f3
    ble lbl_801B99B0
    bl FrSqrt__Q24nw4r4mathFf
    fres f6, f1
    lfs f0, 0x38(r1)
    lfs f4, 0x8(r30)
    lfs f3, 0x18(r30)
    lfs f2, 0x28(r30)
    opword 0xE1210030
    opword 0x10E6302A
    opword 0xE101802C
    opword 0x10C601B2
    opword 0xE141002C
    fmuls f5, f0, f1
    lfs f0, lbl_804A185C
    opword 0x10C139BC
    stfs f5, 0x38(r1)
    stfs f6, 0x4(r31)
    opword 0xE0A10020
    stfs f4, 0x14(r1)
    opword 0x10850058
    opword 0xE0A18028
    stfs f3, 0x18(r1)
    opword 0xE0618014
    opword 0xF0810020
    opword 0x10850058
    opword 0xE0E10014
    stfs f2, 0x1c(r1)
    opword 0xE0218020
    opword 0xF0818028
    opword 0xE0410018
    opword 0xE0A10024
    opword 0xE0C10020
    opword 0x10A500B2
    opword 0x104128FA
    opword 0x10222954
    frsp f2, f1
    stfs f1, 0x40(r1)
    opword 0x10260098
    opword 0xF0210008
    opword 0x10240098
    opword 0xE0410008
    opword 0x10471028
    opword 0xE0E1801C
    opword 0xF0410014
    opword 0x10470828
    opword 0xE0218014
    opword 0xF041801C
    opword 0xE0810014
    opword 0xE0610018
    opword 0x112900F2
    opword 0x1068487A
    opword 0x10234A54
    frsp f3, f1
    stfs f1, 0x3c(r1)
    opword 0x102A00D8
    opword 0xE1418034
    opword 0xF0210008
    opword 0x102A00D8
    opword 0xE0610008
    opword 0xF0218010
    opword 0x10641828
    opword 0xF0610014
    opword 0x10620828
    opword 0xE0410014
    opword 0xF061801C
    opword 0x104200B2
    lfs f1, 0x1c(r1)
    opword 0x13E1107A
    opword 0x13FF1094
    fcmpo cr0, f31, f0
    ble lbl_801B99A4
    lfs f0, lbl_804A184C
    fcmpo cr0, f31, f0
    opword 0x4C401382
    bne lbl_801B9924
    b lbl_801B9930
lbl_801B9924:
    fmr f1, f31
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f31, f1
lbl_801B9930:
    stfs f0, 0x8(r31)
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_8030DEEC
    opword 0xE0610030
    opword 0xE041000C
    opword 0xE021802C
    opword 0x106300B2
    opword 0xE0418008
    lfs f0, lbl_804A184C
    opword 0x104118BA
    opword 0x102218D4
    fcmpo cr0, f1, f0
    bge lbl_801B9B70
    lfs f2, 0x0(r31)
    lfd f3, lbl_804A1868
    lfs f1, 0x4(r31)
    lfs f0, 0x8(r31)
    fmul f2, f2, f3
    fmul f1, f1, f3
    fmul f0, f0, f3
    frsp f2, f2
    frsp f1, f1
    frsp f0, f0
    stfs f2, 0x0(r31)
    stfs f1, 0x4(r31)
    stfs f0, 0x8(r31)
    b lbl_801B9B70
lbl_801B99A4:
    lfs f0, lbl_804A184C
    stfs f0, 0x8(r31)
    b lbl_801B9B70
lbl_801B99B0:
    lfs f2, lbl_804A184C
    lfs f1, 0x18(r30)
    stfs f2, 0x4(r31)
    lfs f0, 0x28(r30)
    stfs f1, 0x18(r1)
    lfs f1, 0x8(r30)
    stfs f0, 0x1c(r1)
    opword 0xE0810030
    stfs f1, 0x14(r1)
    opword 0xE0210018
    opword 0xE0018014
    opword 0x10840072
    opword 0xE0A10014
    opword 0x1026203A
    opword 0x10012114
    frsp f1, f0
    stfs f0, 0x3c(r1)
    opword 0x10080058
    opword 0xF0010008
    opword 0x10070058
    opword 0xE0210008
    opword 0xF0018010
    opword 0x10250828
    opword 0xE0A1801C
    opword 0xF0210014
    opword 0x10250028
    opword 0xE0810014
    opword 0xF021801C
    opword 0x10840132
    lfs f0, 0x1c(r1)
    opword 0x13E0203A
    opword 0x13FF2114
    fcmpo cr0, f31, f3
    ble lbl_801B9A5C
    fcmpo cr0, f31, f2
    opword 0x4C401382
    bne lbl_801B9A48
    b lbl_801B9A54
lbl_801B9A48:
    fmr f1, f31
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f2, f31, f1
lbl_801B9A54:
    stfs f2, 0x8(r31)
    b lbl_801B9B70
lbl_801B9A5C:
    stfs f2, 0x8(r31)
    b lbl_801B9B70
lbl_801B9A64:
    lfs f2, lbl_804A184C
    lfs f0, 0x4(r3)
    stfs f2, 0x0(r4)
    lfs f1, 0x14(r3)
    stfs f0, 0x20(r1)
    lfs f0, 0x24(r3)
    stfs f1, 0x24(r1)
    opword 0xE0810020
    stfs f0, 0x28(r1)
    opword 0x10840132
    opword 0x1020203A
    opword 0x10212114
    fcmpo cr0, f1, f3
    ble lbl_801B9B48
    bl FrSqrt__Q24nw4r4mathFf
    fres f4, f1
    lfs f3, 0x8(r30)
    lfs f2, 0x18(r30)
    addi r3, r1, 0x14
    lfs f0, 0x28(r30)
    opword 0x10A4202A
    opword 0x10840132
    opword 0x1081293C
    stfs f4, 0x4(r31)
    opword 0xE0810020
    stfs f3, 0x14(r1)
    opword 0x10640058
    opword 0xE0818028
    stfs f2, 0x18(r1)
    opword 0xE0438000
    opword 0xF0610020
    opword 0x10640058
    opword 0xE0C30000
    stfs f0, 0x1c(r1)
    opword 0xE0018020
    opword 0xF0618028
    opword 0xE0230004
    opword 0xE0810024
    opword 0xE0A10020
    opword 0x10840072
    opword 0x102020BA
    opword 0x10012114
    frsp f1, f0
    stfs f0, 0x40(r1)
    opword 0x10050058
    opword 0xF0010008
    opword 0x10030058
    opword 0xE0210008
    opword 0xF0018010
    opword 0x10260828
    opword 0xE0C38008
    opword 0xF0230000
    opword 0x10260028
    opword 0xF0238008
    bl fn_8030DE88
    stfs f1, 0x8(r31)
    b lbl_801B9B70
lbl_801B9B48:
    stfs f2, 0x4(r4)
    lfs f2, 0x8(r3)
    lfs f1, 0x18(r3)
    lfs f0, 0x28(r3)
    addi r3, r1, 0x14
    stfs f2, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_8030DE88
    stfs f1, 0x8(r31)
lbl_801B9B70:
    opword 0xE3E10058
    lwz r0, 0x64(r1)
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: fn_801B9B90
extern "C" asm void fn_801B9B90() {
    nofralloc
    opword 0xE0640000
    lfs f0, lbl_804A1870
    opword 0x10C300F2
    opword 0xE0848008
    fsubs f2, f0, f0
    lfs f1, lbl_804A1874
    opword 0x10A4313A
    opword 0x10A53114
    fcmpu cr0, f5, f2
    beq lbl_801B9BE4
    frsqrte f2, f5
    fmuls f6, f2, f2
    fmuls f0, f2, f0
    fnmsubs f6, f6, f5, f1
    fmuls f2, f6, f0
    opword 0x10630098
    opword 0x10840098
    opword 0xF0630000
    opword 0xF0838008
    li r3, 0x1
    blr
lbl_801B9BE4:
    opword 0xF0630000
    opword 0xF0838008
    li r3, 0x0
    blr
}
