#include "mtx.h"

#include <math.h>

#ifdef __CWCC__

void PSQUATMultiply(const register Quaternion* quat1,
                    const register Quaternion* quat2,
                    register Quaternion* out) {
  register f32 vv1, vv2, vv3, vv4;
  register f32 vv5, vv6, vv7, vv8;
  register f32 vv9, vvA, vvB, vvC;
  asm
  {
    psq_l vv1, 0(quat1), 0, 0;
    psq_l vv2, 8(quat1), 0, 0;
    psq_l vv3, 0(quat2), 0, 0;
    ps_neg vv7, vv1;
    psq_l vv4, 8(quat2), 0, 0;
    ps_neg vv8, vv2;
    ps_merge01 vv5, vv7, vv1;
    ps_muls0 vv9, vv2, vv3;
    ps_muls0 vvA, vv7, vv3;
    ps_merge01 vv6, vv8, vv2;
    ps_muls1 vvC, vv5, vv3;
    ps_madds0 vv9, vv5, vv4, vv9;
    ps_muls1 vvB, vv6, vv3;
    ps_madds0 vvA, vv6, vv4, vvA;
    ps_madds1 vvC, vv8, vv4, vvC;
    ps_merge10 vv9, vv9, vv9;
    ps_madds1 vvB, vv1, vv4, vvB;
    ps_merge10 vvA, vvA, vvA;
    ps_add vv9, vv9, vvB;
    psq_st vv9, 0(out), 0, 0;
    ps_sub vvA, vvA, vvC;
    psq_st vvA, 8(out), 0, 0;
  }
}

// PSQUATScale: definicion C reemplazada por asm (ver abajo)
void PSQUATScale(const register Quaternion* quat1, register Quaternion* quat2,
                 register f32 ff1);


// PSQUATDotProduct: definicion C reemplazada por asm (ver abajo)
f32 PSQUATDotProduct(const register Quaternion* quat1,
                     const register Quaternion* quat2);


void PSQUATNormalize(const register Quaternion* src,
                     register Quaternion* unit) {
  // sdata2
  (void)0.00001f;
  (void)1.0f;
  (void)0.0f;
  (void)0.5f;
  (void)3.0f;

  register f32 vv1, vv2, vv3;
  register f32 vv4, vv5, vv6;
  register f32 vv7, vv8;
  register f32 vv9 = 0.00001f;
  register f32 vvA = 0.5F;
  register f32 vvB = 3.0F;
  asm
  {
    psq_l    vv1, 0(src), 0, 0;
    ps_mul   vv3, vv1, vv1;
    psq_l    vv2, 8(src), 0, 0;
    ps_sub   vv6, vv9, vv9;
    ps_madd  vv3, vv2, vv2, vv3;
    ps_sum0  vv3, vv3, vv3, vv3;
    frsqrte  vv4, vv3;
    ps_sub   vv5, vv3, vv9;
    fmul     vv7, vv4, vv4;
    fmul     vv8, vv4, vvA;
    fnmsub   vv7, vv7, vv3, vvB;
    fmul     vv4, vv7, vv8;
    ps_sel   vv4, vv5, vv4, vv6;
    ps_muls0 vv1, vv1, vv4;
    ps_muls0 vv2, vv2, vv4;
    psq_st   vv1, 0(unit), 0, 0;
    psq_st   vv2, 8(unit), 0, 0;
  }
}

void PSQUATInverse(const register Quaternion* src, register Quaternion* inv) {
  register f32 vv1, vv2, vv3, vv4;
  register f32 vv5, vv6, vv7, vv8, vv9, vvA, vvB;
  register f32 vvC = 1.0F;
  asm {
    psq_l       vv1, 0(src), 0, 0;
    ps_mul      vv5, vv1, vv1;
    ps_sub      vvB, vvC, vvC;
    psq_l       vv2, 8(src), 0, 0;
    ps_madd     vv5, vv2, vv2, vv5;
    ps_add      vvA, vvC, vvC;
    ps_sum0     vv5, vv5, vv5, vv5;
    fcmpu       cr0, vv5, vvB;
    beq-        loc0;
    fres        vv7, vv5;
    ps_neg      vv6, vv5;
    ps_nmsub    vv9, vv5, vv7, vvA;
    ps_mul      vv7, vv7, vv9;
    b           loc1;
loc0:
    fmr         vv7, vvC;
loc1:
    ps_neg      vv8, vv7;
    ps_muls1    vv4, vv7, vv2;
    ps_muls0    vv1, vv1, vv8;
    psq_st      vv4, 12(inv), 1, 0;
    ps_muls0    vv3, vv2, vv8;
    psq_st      vv1, 0(inv), 0, 0;
    psq_st      vv3, 8(inv), 1, 0;
  }
}

#endif

void C_QUATMtx(Quaternion* r, const Mtx m) {
  f32 vv0, vv1;
  s32 i, j, k;
  s32 idx[3] = {1, 2, 0};
  f32 vec[3];
  vv0 = m[0][0] + m[1][1] + m[2][2];
  if (vv0 > 0.0f) {
    vv1 = (f32)sqrtf(vv0 + 1.0f);
    r->w = vv1 * 0.5f;
    vv1 = 0.5f / vv1;
    r->x = (m[2][1] - m[1][2]) * vv1;
    r->y = (m[0][2] - m[2][0]) * vv1;
    r->z = (m[1][0] - m[0][1]) * vv1;
  } else {
    i = 0;
    if (m[1][1] > m[0][0])
      i = 1;
    if (m[2][2] > m[i][i])
      i = 2;
    j = idx[i];
    k = idx[j];
    vv1 = (f32)sqrtf((m[i][i] - (m[j][j] + m[k][k])) + 1.0f);
    vec[i] = vv1 * 0.5f;
    if (vv1 != 0.0f)
      vv1 = 0.5f / vv1;
    r->w = (m[k][j] - m[j][k]) * vv1;
    vec[j] = (m[i][j] + m[j][i]) * vv1;
    vec[k] = (m[i][k] + m[k][i]) * vv1;
    r->x = vec[0];
    r->y = vec[1];
    r->z = vec[2];
  }
}

void C_QUATLerp(const Quaternion* quat1, const Quaternion* quat2,
                Quaternion* out, f32 f) {
  out->x = f * (quat2->x - quat1->x) + quat1->x;
  out->y = f * (quat2->y - quat1->y) + quat1->y;
  out->z = f * (quat2->z - quat1->z) + quat1->z;
  out->w = f * (quat2->w - quat1->w) + quat1->w;
}

void C_QUATSlerp(const Quaternion* quat1, const Quaternion* quat2,
                 Quaternion* out, f32 f) {
  f32 vv1, vv2, vv3, vv4, vv5;

  vv3 = quat1->x * quat2->x + quat1->y * quat2->y + quat1->z * quat2->z +
        quat1->w * quat2->w;
  vv5 = 1.0F;

  if (vv3 < 0.0F) {
    vv3 = -vv3;
    vv5 = -vv5;
  }

  if (vv3 <= 1.0F - 0.00001f) {
    vv1 = acosf(vv3);
    vv2 = sinf(vv1);
    vv4 = sinf((1.0F - f) * vv1) / vv2;
    vv5 *= sinf(f * vv1) / vv2;
  } else {
    vv4 = 1.0F - f;
    vv5 = vv5 * f;
  }

  out->x = vv4 * quat1->x + vv5 * quat2->x;
  out->y = vv4 * quat1->y + vv5 * quat2->y;
  out->z = vv4 * quat1->z + vv5 * quat2->z;
  out->w = vv4 * quat1->w + vv5 * quat2->w;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_804A2738;
extern float lbl_804A273C;
extern float lbl_804A2740;
extern int PSQUATAdd();
f32 PSQUATDotProduct(const register Quaternion* quat1,
                     const register Quaternion* quat2);
void PSQUATScale(const register Quaternion* quat1, register Quaternion* quat2,
                 register f32 ff1);
extern int fn_8030DE44();
extern int fn_8030DE88();
extern int fn_8030DEEC();
extern int fn_8030DF28();
extern int fn_8030E000();

// asm_to_cpp: PSQUATAdd
asm int PSQUATAdd() {
    nofralloc
    opword 0xE0430000
    opword 0xE0840000
    opword 0x10C2202A
    opword 0xF0C50000
    opword 0xE0638008
    opword 0xE0A48008
    opword 0x10E3282A
    opword 0xF0E58008
    blr
}

// asm_to_cpp: PSQUATDotProduct
asm f32 PSQUATDotProduct(const register Quaternion* quat1,
                     const register Quaternion* quat2) {
    nofralloc
    opword 0xE0430004
    opword 0xE0640004
    opword 0x104200F2
    opword 0xE0A30000
    opword 0xE0840000
    opword 0x1065113A
    opword 0x10231094
    blr
}

// asm_to_cpp: PSQUATScale
asm void PSQUATScale(const register Quaternion* quat1, register Quaternion* quat2,
                 register f32 ff1) {
    nofralloc
    opword 0xE0030000
    opword 0xE0438008
    opword 0x10000058
    opword 0x10220058
    opword 0xF0040000
    opword 0xF0248008
    blr
}

// asm_to_cpp: fn_8030DE44
asm int fn_8030DE44() {
    nofralloc
    opword 0xE0430000
    opword 0xE0638008
    opword 0x10A200B2
    lfs f0, lbl_804A2738
    lfs f1, lbl_804A273C
    opword 0x108328FA
    opword 0x108428D4
    frsqrte f5, f4
    fmuls f6, f5, f5
    fmuls f0, f5, f0
    fnmsubs f6, f6, f4, f1
    fmuls f5, f6, f0
    opword 0x10420158
    opword 0x10630158
    opword 0xF0440000
    opword 0xF0648008
    blr
}

// asm_to_cpp: fn_8030DE88
asm int fn_8030DE88() {
    nofralloc
    opword 0xE0030000
    lfs f4, lbl_804A2738
    opword 0x10000032
    lfs f1, 0x8(r3)
    fsubs f2, f4, f4
    opword 0x1021007A
    opword 0x10210014
    fcmpu cr0, f1, f2
    beqlr
    frsqrte f0, f1
    lfs f3, lbl_804A273C
    fmuls f2, f0, f0
    fmuls f0, f0, f4
    fnmsubs f2, f2, f1, f3
    fmuls f0, f2, f0
    fmuls f1, f1, f0
    blr
}

// asm_to_cpp: fn_8030DEEC
asm int fn_8030DEEC() {
    nofralloc
    opword 0xE0240000
    lfs f2, 0x8(r3)
    opword 0xE0030000
    opword 0x10C10CA0
    lfs f3, 0x8(r4)
    opword 0x108100B2
    opword 0x10E10018
    opword 0x10A020F8
    opword 0x110039B8
    opword 0x11252CE0
    opword 0x11454460
    opword 0xF1258000
    opword 0x11405050
    opword 0xF1450004
    blr
}

// asm_to_cpp: fn_8030DF28
asm int fn_8030DF28() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f2, 0x0(r3)
    lfs f1, 0x4(r3)
    lfs f0, 0x8(r3)
    fneg f5, f2
    lfs f2, 0x0(r4)
    fneg f4, f1
    lfs f1, 0x4(r4)
    fneg f3, f0
    lfs f0, 0x8(r4)
    stw r0, 0x44(r1)
    addi r3, r1, 0x20
    fneg f2, f2
    mr r4, r3
    stw r31, 0x3c(r1)
    fneg f1, f1
    fneg f0, f0
    mr r31, r5
    stfs f5, 0x20(r1)
    stfs f4, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f2, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    bl fn_8030DE44
    addi r3, r1, 0x14
    mr r4, r3
    bl fn_8030DE44
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl PSQUATAdd
    addi r3, r1, 0x8
    mr r4, r3
    bl PSQUATDotProduct
    lfs f0, lbl_804A2740
    fcmpo cr0, f1, f0
    ble lbl_8030DFD4
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_8030DE44
    b lbl_8030DFEC
lbl_8030DFD4:
    lwz r3, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r3, 0x0(r31)
    stw r0, 0x4(r31)
    lwz r0, 0x10(r1)
    stw r0, 0x8(r31)
lbl_8030DFEC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_8030E000
asm int fn_8030E000() {
    nofralloc
    opword 0xE0030004
    opword 0xE0240004
    opword 0xE0430000
    opword 0x10600828
    opword 0xE0040000
    opword 0x10020028
    opword 0x106300F2
    opword 0x1020183A
    opword 0x102118D4
    blr
}
