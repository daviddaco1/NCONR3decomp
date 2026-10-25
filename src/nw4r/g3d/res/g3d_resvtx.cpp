#include <nw4r/g3d.h>

namespace nw4r {
namespace g3d {

/******************************************************************************
 *
 * ResVtxPos
 *
 ******************************************************************************/
void ResVtxPos::SetArray() {
    if (IsValid()) {
        GXSetArray(GX_VA_POS, GetData(), ref().stride);
    }
}

void ResVtxPos::GetArray(const void** ppBase, u8* pStride) const {
    if (ppBase != NULL) {
        *ppBase = GetData();
    }

    if (pStride) {
        *pStride = ref().stride;
    }
}

void ResVtxPos::CopyTo(void* pDst) const {
    if (!IsValid()) {
        return;
    }

    u32 size = GetSize();
    detail::Copy32ByteBlocks(pDst, ptr(), size);
    DCStoreRange(pDst, size);
}

/******************************************************************************
 *
 * ResVtxNrm
 *
 ******************************************************************************/
void ResVtxNrm::SetArray() {
    if (IsValid()) {
        GXSetArray(GX_VA_NRM, GetData(), ref().stride);
    }
}

void ResVtxNrm::GetArray(const void** ppBase, u8* pStride) const {
    if (ppBase != NULL) {
        *ppBase = GetData();
    }

    if (pStride) {
        *pStride = ref().stride;
    }
}

void ResVtxNrm::CopyTo(void* pDst) const {
    if (!IsValid()) {
        return;
    }

    u32 size = GetSize();
    detail::Copy32ByteBlocks(pDst, ptr(), size);
    DCStoreRange(pDst, size);
}

/******************************************************************************
 *
 * ResVtxClr
 *
 ******************************************************************************/
void ResVtxClr::SetArray(GXAttr attr) {
    if (IsValid() && (attr == GX_VA_CLR0 || attr == GX_VA_CLR1)) {
        GXSetArray(attr, GetData(), ref().stride);
    }
}

void ResVtxClr::GetArray(const void** ppBase, u8* pStride) const {
    if (ppBase != NULL) {
        *ppBase = GetData();
    }

    if (pStride) {
        *pStride = ref().stride;
    }
}

void ResVtxClr::CopyTo(void* pDst) const {
    if (!IsValid()) {
        return;
    }

    u32 size = GetSize();
    detail::Copy32ByteBlocks(pDst, ptr(), size);
    DCStoreRange(pDst, size);
}

/******************************************************************************
 *
 * ResVtxTexCoord
 *
 ******************************************************************************/
void ResVtxTexCoord::GetArray(const void** ppBase, u8* pStride) const {
    if (ppBase != NULL) {
        *ppBase = GetData();
    }

    if (pStride) {
        *pStride = ref().stride;
    }
}

/******************************************************************************
 *
 * DCStore
 *
 ******************************************************************************/
void ResVtxPos::DCStore(bool sync) {
    void* pBase = &ref();
    u32 size = GetSize();

    if (sync) {
        DC::StoreRange(pBase, size);
    } else {
        DC::StoreRangeNoSync(pBase, size);
    }
}

void ResVtxNrm::DCStore(bool sync) {
    void* pBase = &ref();
    u32 size = GetSize();

    if (sync) {
        DC::StoreRange(pBase, size);
    } else {
        DC::StoreRangeNoSync(pBase, size);
    }
}

void ResVtxClr::DCStore(bool sync) {
    void* pBase = &ref();
    u32 size = GetSize();

    if (sync) {
        DC::StoreRange(pBase, size);
    } else {
        DC::StoreRangeNoSync(pBase, size);
    }
}

void ResVtxTexCoord::DCStore(bool sync) {
    void* pBase = &ref();
    u32 size = GetSize();

    if (sync) {
        DC::StoreRange(pBase, size);
    } else {
        DC::StoreRangeNoSync(pBase, size);
    }
}

} // namespace g3d
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" void DCStore__Q34nw4r3g3d12ResVtxFurPosFb();
extern "C" void DCStore__Q34nw4r3g3d12ResVtxFurVecFb();
extern "C" void SetArray__Q34nw4r3g3d12ResVtxFurPosFUs();
extern "C" void fn_803150C4();
extern "C" void fn_80315120();

// asm_to_cpp: SetArray__Q34nw4r3g3d12ResVtxFurPosFUs
extern "C" asm void SetArray__Q34nw4r3g3d12ResVtxFurPosFUs() {
    nofralloc
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    beqlr
    lwz r7, 0x8(r6)
    li r3, 0x0
    li r5, 0x0
    cmpwi r7, 0x0
    beq lbl_801D44E0
    lwz r0, 0x20(r6)
    cmpw r4, r0
    bge lbl_801D44E0
    li r5, 0x1
lbl_801D44E0:
    cmpwi r5, 0x0
    beq lbl_801D44F4
    cmpwi r4, 0x0
    blt lbl_801D44F4
    li r3, 0x1
lbl_801D44F4:
    cmpwi r3, 0x0
    li r3, 0x9
    beq lbl_801D4514
    lwz r5, 0x24(r6)
    add r0, r6, r7
    mullw r4, r4, r5
    add r4, r4, r0
    b lbl_801D4518
lbl_801D4514:
    li r4, 0x0
lbl_801D4518:
    lbz r5, 0x1d(r6)
    b GXSetArray
    blr
}

// asm_to_cpp: DCStore__Q34nw4r3g3d12ResVtxFurVecFb
extern "C" asm void DCStore__Q34nw4r3g3d12ResVtxFurVecFb() {
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r4, 0x0
    lwz r4, 0x0(r3)
    beq lbl_801D4598
    b fn_803150C4
lbl_801D4598:
    b fn_80315120
}

// asm_to_cpp: DCStore__Q34nw4r3g3d12ResVtxFurPosFb
extern "C" asm void DCStore__Q34nw4r3g3d12ResVtxFurPosFb() {
    nofralloc
    lwz r3, 0x0(r3)
    cmpwi r4, 0x0
    lwz r4, 0x0(r3)
    beq lbl_801D45B0
    b fn_803150C4
lbl_801D45B0:
    b fn_80315120
}
