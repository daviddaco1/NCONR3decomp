#include "mtx.h"
#include <math.h>

#ifdef __CWCC__

// ----------------------------------------------------------------------------
// Funciones C matcheadas (548 bytes)
// ----------------------------------------------------------------------------

asm void PSVECAdd(const register Vec* a, const register Vec* b,
                  register Vec* sum) {
    nofralloc;
    psq_l  f2, 0(a), 0, 0;
    psq_l  f4, 0(b), 0, 0;
    ps_add f6, f2, f4;
    psq_st f6, 0(sum), 0, 0;
    psq_l  f3, 8(a), 1, 0;
    psq_l  f5, 8(b), 1, 0;
    ps_add f7, f3, f5;
    psq_st f7, 8(sum), 1, 0;
    blr;
}

void PSVECScale(const register Vec* in, register Vec* out, register f32 scale) {
    register f32 xy, z;
    register f32 sxy, sz;
    asm {
        psq_l xy, 0(in), 0, 0;
        psq_l z,  8(in), 1, 0;
        ps_muls0 sxy, xy, scale;
        ps_muls0 sz,  z,  scale;
        psq_st sxy, 0(out), 0, 0;
        psq_st sz,  8(out), 1, 0;
    }
}

void PSVECNormalize(const register Vec* in, register Vec* out) {
    register f32 c_half, c_three;
    register f32 xy, z;
    register f32 z2;
    register f32 dot;
    register f32 work0, work1, work2;

    c_half = 0.5f;
    c_three = 3.0f;

    asm {
        psq_l xy, 0(in), 0, 0;
        psq_l z,  8(in), 1, 0;
        ps_mul  work0, xy, xy;
        ps_madd z2,    z,  z, work0;
        ps_sum0 dot,   z2, z, work0;
        frsqrte work0, dot;
        fmuls   work1, work0, work0;
        fmuls   work2, work0, c_half;
        fnmsubs work1, work1, dot, c_three;
        fmuls   work0, work1, work2;
        ps_muls0 xy, xy, work0;
        ps_muls0 z,  z,  work0;
        psq_st xy, 0(out), 0, 0;
        psq_st z,  8(out), 1, 0;
    }
}

f32 PSVECMag(const register Vec* v) {
    register f32 xy, xy2;
    register f32 z, z2;
    register f32 dot;
    register f64 rsqrt;
    register f32 work0, work1;
    register f32 c_three, c_half, c_zero;

    c_half = 0.5f;
    asm {
        psq_l xy, 0(v), 0, 0;
        lfs   z,  8(v);
        ps_mul  xy2, xy, xy;
        ps_madd z2,  z,  z,   xy2;
        ps_sum0 dot, z2, xy2, xy2;
        fsubs c_zero, c_half, c_half;
    }

    if (dot == c_zero) {
        return dot;
    }

    rsqrt = __frsqrte(dot);
    c_three = 3.0f;
    asm {
        fmuls   work0, rsqrt, rsqrt;
        fmuls   work1, rsqrt, c_half;
        fnmsubs work0, work0, dot, c_three;
        fmuls   work1, work0, work1;
        fmuls dot, dot, work1;
    }

    return dot;
}

asm f32 PSVECDotProduct(const register Vec* a, const register Vec* b) {
    nofralloc;
    psq_l  f2, 4(a), 0, 0;
    psq_l  f3, 4(b), 0, 0;
    ps_mul f2, f2, f3;
    psq_l   f5, 0(a), 0, 0;
    psq_l   f4, 0(b), 0, 0;
    ps_madd f3, f5, f4, f2;
    ps_sum0 f1, f3, f2, f2;
    blr;
}

asm void PSVECCrossProduct(const register Vec* a, const register Vec* b,
                           register Vec* prod) {
    nofralloc;
    psq_l      f1, 0(b), 0, 0;
    lfs        f2, 8(a);
    psq_l      f0, 0(a), 0, 0;
    ps_merge10 f6, f1, f1;
    lfs        f3, 8(b);
    ps_mul   f4, f1, f2;
    ps_muls0 f7, f1, f0;
    ps_msub  f5, f0, f3, f4;
    ps_msub  f8, f0, f6, f7;
    ps_merge11 f9,  f5, f5;
    ps_merge01 f10, f5, f8;
    psq_st f9, 0(prod), 1, 0;
    ps_neg f10, f10;
    psq_st f10, 4(prod), 0, 0;
    blr;
}

void C_VECHalfAngle(const register Vec* a, const register Vec* b,
                    register Vec* half) {
    Vec na, nb, ns;
    na.x = -a->x;
    na.y = -a->y;
    na.z = -a->z;
    nb.x = -b->x;
    nb.y = -b->y;
    nb.z = -b->z;
    PSVECNormalize(&na, &na);
    PSVECNormalize(&nb, &nb);
    PSVECAdd(&na, &nb, &ns);
    if (PSVECDotProduct(&ns, &ns) > 0.0f) {
        PSVECNormalize(&ns, half);
    } else {
        *half = ns;
    }
}

f32 PSVECSquareDistance(const register Vec* a, const register Vec* b) {
    register f32 ayz, byz;
    register f32 axy, bxy;
    register f32 dxy, dyz;
    register f32 dist;

    asm {
        psq_l axy, 0(a), 0, 0;
        psq_l ayz, 4(a), 0, 0;
        psq_l bxy, 0(b), 0, 0;
        psq_l byz, 4(b), 0, 0;
        ps_sub dxy, axy, bxy;
        ps_sub dyz, ayz, byz;
        ps_mul  dyz,  dyz,  dyz;
        ps_madd dist, dxy,  dxy, dyz;
        ps_sum0 dist, dist, dyz, dyz;
    }

    return dist;
}

#define MY_EPSILON 1e-5f

static inline f32 mySqrtf(f32 x) {
    return sqrt(x);
}

void C_QUATMtx(Quaternion* quat, const Mtx mtx) {
    f32 root, trace;
    u32 dmax, dnext, dlast;
    u32 next[3] = {1, 2, 0};
    f32 temp[3];

    trace = mtx[0][0] + mtx[1][1] + mtx[2][2];

    if (trace > 0.0f) {
        root = mySqrtf(1.0f + trace);
        quat->w = root * 0.5f;

        root = 0.5f / root;
        quat->x = root * (mtx[2][1] - mtx[1][2]);
        quat->y = root * (mtx[0][2] - mtx[2][0]);
        quat->z = root * (mtx[1][0] - mtx[0][1]);
    } else {
        dmax = 0;

        if (mtx[1][1] > mtx[dmax][dmax]) {
            dmax = 1;
        }

        if (mtx[2][2] > mtx[dmax][dmax]) {
            dmax = 2;
        }

        dnext = next[dmax];
        dlast = next[dnext];

        root = sqrt(mtx[dmax][dmax] - (mtx[dnext][dnext] + mtx[dlast][dlast]) + 1.0f);
        temp[dmax] = 0.5f * root;

        if (0.0f != root) {
            root = 0.5f / root;
        }

        quat->w = root * (mtx[dlast][dnext] - mtx[dnext][dlast]);
        temp[dnext] = root * (mtx[dmax][dnext] + mtx[dnext][dmax]);
        temp[dlast] = root * (mtx[dmax][dlast] + mtx[dlast][dmax]);

        quat->x = temp[0];
        quat->y = temp[1];
        quat->z = temp[2];
    }
}

void C_QUATSlerp(const Quaternion* a, const Quaternion* b, Quaternion* out, f32 t) {
    f32 dot;
    f32 coeffa, coeffb;
    f32 theta, sintheta;

    dot = a->x * b->x + a->y * b->y + a->z * b->z + a->w * b->w;
    coeffb = 1.0f;

    if (dot < 0) {
        dot = -dot;
        coeffb = -coeffb;
    }

    if (dot <= 1.0f - MY_EPSILON) {
        theta = acosf(dot);
        sintheta = sinf(theta);

        coeffa = sinf((1.0f - t) * theta) / sintheta;
        coeffb *= sinf(t * theta) / sintheta;
    } else {
        coeffa = 1.0f - t;
        coeffb *= t;
    }

    out->x = coeffa * a->x + coeffb * b->x;
    out->y = coeffa * a->y + coeffb * b->y;
    out->z = coeffa * a->z + coeffb * b->z;
    out->w = coeffa * a->w + coeffb * b->w;
}

#endif
