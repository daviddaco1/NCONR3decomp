#include <nw4r/g3d.h>
#include <nw4r/math.h>

namespace nw4r {
namespace g3d {

void ResNode::PatchChrAnmResult(ChrAnmResult* pResult) const {
    if (!IsValid()) {
        return;
    }

    const ResNodeData& r = ref();
    u32 flags = pResult->flags;

    if (flags & ChrAnmResult::FLAG_PATCH_SCALE) {
        if (r.flags & ResNodeData::FLAG_SCALE_ONE) {
            flags |=
                ChrAnmResult::FLAG_SCALE_ONE | ChrAnmResult::FLAG_SCALE_UNIFORM;
        } else {
            if (r.flags & ResNodeData::FLAG_SCALE_UNIFORM) {
                flags |= ChrAnmResult::FLAG_SCALE_UNIFORM;
            }

            pResult->s = static_cast<const math::VEC3&>(r.scale);
        }
    }

    if (flags & ChrAnmResult::FLAG_PATCH_ROT) {
        if (r.flags & ResNodeData::FLAG_ROT_ZERO) {
            flags |= ChrAnmResult::FLAG_ROT_ZERO;
        } else {
            math::MTX34RotXYZDeg(&pResult->rt, r.rot.x, r.rot.y, r.rot.z);
            flags &= ~ChrAnmResult::FLAG_ROT_ZERO;
        }

        flags |= ChrAnmResult::FLAG_ROT_RAW_FMT;
    }

    if (flags & ChrAnmResult::FLAG_PATCH_TRANS) {
        if (r.flags & ResNodeData::FLAG_TRANS_ZERO) {
            flags |= ChrAnmResult::FLAG_TRANS_ZERO;
        } else {
            flags &= ~ChrAnmResult::FLAG_TRANS_ZERO;

            pResult->rt._03 = r.translate.x;
            pResult->rt._13 = r.translate.y;
            pResult->rt._23 = r.translate.z;
        }
    }

    if ((flags & ChrAnmResult::FLAG_ROT_ZERO) &&
        (flags & ChrAnmResult::FLAG_TRANS_ZERO)) {
        flags |= ChrAnmResult::FLAG_ROT_TRANS_ZERO;

        if (flags & ChrAnmResult::FLAG_SCALE_ONE) {
            flags |= ChrAnmResult::FLAG_MTX_IDENT;
        }
    }

    pResult->flags = flags & ~(ChrAnmResult::FLAG_PATCH_SCALE |
                               ChrAnmResult::FLAG_PATCH_ROT |
                               ChrAnmResult::FLAG_PATCH_TRANS);
}

void ResNode::CalcChrAnmResult(ChrAnmResult* pResult) const {
    if (!IsValid()) {
        return;
    }

    const ResNodeData& r = ref();
    u32 flags = 0;

    if (r.flags & ResNodeData::FLAG_SCALE_ONE) {
        flags |=
            ChrAnmResult::FLAG_SCALE_ONE | ChrAnmResult::FLAG_SCALE_UNIFORM;

        pResult->s.z = 1.0f;
        pResult->s.y = 1.0f;
        pResult->s.x = 1.0f;
    } else {
        if (r.flags & ResNodeData::FLAG_SCALE_UNIFORM) {
            flags |= ChrAnmResult::FLAG_SCALE_UNIFORM;
        }

        pResult->s = static_cast<const math::VEC3&>(r.scale);
    }

    if (r.flags & ResNodeData::FLAG_ROT_ZERO) {
        PSMTXIdentity(pResult->rt);
        flags |= ChrAnmResult::FLAG_ROT_ZERO;
    } else {
        pResult->rawR = math::VEC3(r.rot);
        math::MTX34RotXYZDeg(&pResult->rt, r.rot.x, r.rot.y, r.rot.z);
    }

    if (r.flags & ResNodeData::FLAG_TRANS_ZERO) {
        flags |= ChrAnmResult::FLAG_TRANS_ZERO;
    } else {
        pResult->rt._03 = r.translate.x;
        pResult->rt._13 = r.translate.y;
        pResult->rt._23 = r.translate.z;
    }

    if (flags & ChrAnmResult::FLAG_ROT_ZERO) {
        if (flags & ChrAnmResult::FLAG_TRANS_ZERO) {
            flags |= ChrAnmResult::FLAG_ROT_TRANS_ZERO;

            if (flags & ChrAnmResult::FLAG_SCALE_ONE) {
                flags |= ChrAnmResult::FLAG_MTX_IDENT;
            }
        }
    }

    flags |= ChrAnmResult::FLAG_ROT_RAW_FMT;
    flags |= ChrAnmResult::FLAG_ANM_EXISTS;

    if (r.flags & ResNodeData::FLAG_SSC_APPLY) {
        flags |= ChrAnmResult::FLAG_SSC_APPLY;
    }

    if (r.flags & ResNodeData::FLAG_SSC_PARENT) {
        flags |= ChrAnmResult::FLAG_SSC_PARENT;
    }

    pResult->flags = flags;
}

} // namespace g3d
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_804A1BE8;
extern "C" float lbl_804A1BEC;
extern "C" float lbl_804A1BF0;
extern "C" void MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff();
extern "C" void fn_801D4798();
extern "C" void fn_801D4A9C();

// asm_to_cpp: fn_801D4798
extern "C" asm void fn_801D4798() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    lwz r29, 0x0(r3)
    cmpwi r29, 0x0
    beq lbl_801D4918
    lwz r31, 0x0(r4)
    rlwinm. r0, r31, 0, 24, 24
    beq lbl_801D4820
    lwz r3, 0x14(r29)
    rlwinm. r0, r3, 0, 28, 28
    beq lbl_801D47F0
    lfs f0, lbl_804A1BE8
    ori r31, r31, 0x18
    stfs f0, 0xc(r4)
    stfs f0, 0x8(r4)
    stfs f0, 0x4(r4)
    b lbl_801D4820
lbl_801D47F0:
    rlwinm. r0, r3, 0, 27, 27
    rlwinm r3, r31, 0, 28, 26
    beq lbl_801D4800
    ori r3, r31, 0x10
lbl_801D4800:
    lfs f0, 0x20(r29)
    li r0, -0xb
    and r31, r3, r0
    stfs f0, 0x4(r4)
    lfs f0, 0x24(r29)
    stfs f0, 0x8(r4)
    lfs f0, 0x28(r29)
    stfs f0, 0xc(r4)
lbl_801D4820:
    rlwinm. r0, r31, 0, 23, 23
    beq lbl_801D48A4
    lwz r0, 0x14(r29)
    lfs f2, 0x48(r4)
    lfs f1, 0x38(r4)
    rlwinm. r0, r0, 0, 29, 29
    lfs f0, 0x28(r4)
    stfs f1, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f2, 0x10(r1)
    beq lbl_801D485C
    addi r3, r4, 0x1c
    bl PSMTXIdentity
    ori r31, r31, 0x20
    b lbl_801D4888
lbl_801D485C:
    lfs f3, 0x34(r29)
    addi r3, r4, 0x1c
    lfs f0, lbl_804A1BEC
    lfs f2, 0x30(r29)
    lfs f1, 0x2c(r29)
    fmuls f3, f0, f3
    fmuls f2, f0, f2
    fmuls f1, f0, f1
    bl MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff
    li r0, -0x27
    and r31, r31, r0
lbl_801D4888:
    lfs f2, 0x8(r1)
    oris r31, r31, 0x8000
    lfs f1, 0xc(r1)
    lfs f0, 0x10(r1)
    stfs f2, 0x28(r30)
    stfs f1, 0x38(r30)
    stfs f0, 0x48(r30)
lbl_801D48A4:
    rlwinm. r0, r31, 0, 22, 22
    beq lbl_801D48F0
    lwz r0, 0x14(r29)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801D48D0
    lfs f0, lbl_804A1BF0
    ori r31, r31, 0x40
    stfs f0, 0x48(r30)
    stfs f0, 0x38(r30)
    stfs f0, 0x28(r30)
    b lbl_801D48F0
lbl_801D48D0:
    lfs f0, 0x38(r29)
    li r0, -0x47
    and r31, r31, r0
    stfs f0, 0x28(r30)
    lfs f0, 0x3c(r29)
    stfs f0, 0x38(r30)
    lfs f0, 0x40(r29)
    stfs f0, 0x48(r30)
lbl_801D48F0:
    rlwinm. r0, r31, 0, 26, 26
    beq lbl_801D4910
    rlwinm. r0, r31, 0, 25, 25
    beq lbl_801D4910
    ori r31, r31, 0x4
    rlwinm. r0, r31, 0, 28, 28
    beq lbl_801D4910
    ori r31, r31, 0x2
lbl_801D4910:
    rlwinm r0, r31, 0, 25, 21
    stw r0, 0x0(r30)
lbl_801D4918:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801D4A9C
extern "C" asm void fn_801D4A9C() {
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beqlr
    lfs f0, lbl_804A1BF0
    fcmpu cr0, f0, f1
    bne lbl_801D4AD4
    fcmpu cr0, f0, f2
    bne lbl_801D4AD4
    fcmpu cr0, f0, f3
    bne lbl_801D4AD4
    lwz r0, 0x14(r3)
    ori r0, r0, 0x2
    stw r0, 0x14(r3)
    b lbl_801D4AE0
lbl_801D4AD4:
    lwz r0, 0x14(r3)
    rlwinm r0, r0, 0, 31, 29
    stw r0, 0x14(r3)
lbl_801D4AE0:
    lwz r4, 0x14(r3)
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_801D4B08
    rlwinm. r0, r4, 0, 29, 29
    beq lbl_801D4B08
    rlwinm. r0, r4, 0, 28, 28
    beq lbl_801D4B08
    ori r0, r4, 0x1
    stw r0, 0x14(r3)
    b lbl_801D4B14
lbl_801D4B08:
    lwz r0, 0x14(r3)
    clrrwi r0, r0, 1
    stw r0, 0x14(r3)
lbl_801D4B14:
    stfs f1, 0x38(r3)
    stfs f2, 0x3c(r3)
    stfs f3, 0x40(r3)
    blr
}
