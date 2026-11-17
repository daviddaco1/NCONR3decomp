#include "types.h"

extern "C" {

struct VEC4 {
    f32 x, y, z, w;
};

struct MTX44 {
    f32 m[4][4];
};

VEC4* fn_80201F08(VEC4* pOut, const MTX44* pMtx, const VEC4* pVec) {
    VEC4 tmp;
    tmp.x = pMtx->m[0][0] * pVec->x + pMtx->m[0][1] * pVec->y + pMtx->m[0][2] * pVec->z + pMtx->m[0][3] * pVec->w;
    tmp.y = pMtx->m[1][0] * pVec->x + pMtx->m[1][1] * pVec->y + pMtx->m[1][2] * pVec->z + pMtx->m[1][3] * pVec->w;
    tmp.z = pMtx->m[2][0] * pVec->x + pMtx->m[2][1] * pVec->y + pMtx->m[2][2] * pVec->z + pMtx->m[2][3] * pVec->w;
    tmp.w = pMtx->m[3][0] * pVec->x + pMtx->m[3][1] * pVec->y + pMtx->m[3][2] * pVec->z + pMtx->m[3][3] * pVec->w;

    *pOut = tmp;
    return pOut;
}

}
