#include <nw4r/ut.h>

namespace nw4r {
namespace ut {
namespace {

template <typename T> inline void ResolveOffset(T*& rpPtr, void* pBase) {
    rpPtr = reinterpret_cast<T*>(static_cast<char*>(pBase) +
                                 reinterpret_cast<s32>(rpPtr));
}

} // namespace

ResFont::ResFont() {}

ResFont::~ResFont() {}

bool ResFont::SetResource(void* pBuffer) {
    BinaryFileHeader* pHeader = static_cast<BinaryFileHeader*>(pBuffer);
    FontInformation* pInfo = NULL;

    if (!IsManaging(NULL)) {
        return false;
    }

    if (pHeader->signature == SIGNATURE_UNPACKED) {
        BinaryBlockHeader* pBlock = reinterpret_cast<BinaryBlockHeader*>(
            reinterpret_cast<char*>(pHeader) + pHeader->headerSize);

        for (int i = 0; i < pHeader->dataBlocks; i++) {
            if (pBlock->kind == SIGNATURE_FONTINFO) {
                pInfo = reinterpret_cast<FontInformation*>(pBlock + 1);
                break;
            }

            pBlock = reinterpret_cast<BinaryBlockHeader*>(
                reinterpret_cast<char*>(pBlock) + pBlock->size);
        }
    } else {
        if (pHeader->version == NW4R_VERSION(1, 4)) {
            if (!IsValidBinaryFile(pHeader, SIGNATURE, NW4R_VERSION(1, 4), 2)) {
                return false;
            }
        } else if (!IsValidBinaryFile(pHeader, SIGNATURE, NW4R_VERSION(1, 2),
                                      2)) {
            return false;
        }

        pInfo = Rebuild(pHeader);
    }

    if (pInfo == NULL) {
        return false;
    }

    SetResourceBuffer(pHeader, pInfo);
    InitReaderFunc(GetEncoding());

    return true;
}

FontInformation* ResFont::Rebuild(BinaryFileHeader* pHeader) {
    BinaryBlockHeader* pBlock = reinterpret_cast<BinaryBlockHeader*>(
        reinterpret_cast<char*>(pHeader) + pHeader->headerSize);

    FontInformation* pInfo = NULL;

    for (int i = 0; i < pHeader->dataBlocks; i++) {
        switch (pBlock->kind) {
        case SIGNATURE_FONTINFO: {
            pInfo = reinterpret_cast<FontInformation*>(pBlock + 1);
            ResolveOffset<FontTextureGlyph>(pInfo->pGlyph, pHeader);

            if (pInfo->pWidth != 0) {
                ResolveOffset<FontWidth>(pInfo->pWidth, pHeader);
            }

            if (pInfo->pMap != 0) {
                ResolveOffset<FontCodeMap>(pInfo->pMap, pHeader);
            }
            break;
        }

        case SIGNATURE_TEXGLYPH: {
            ResolveOffset<u8>(
                reinterpret_cast<FontTextureGlyph*>(pBlock + 1)->sheetImage,
                pHeader);
            break;
        }

        case SIGNATURE_CHARWIDTH: {
            FontWidth* pWidth = reinterpret_cast<FontWidth*>(pBlock + 1);
            if (pWidth->pNext != 0) {
                ResolveOffset<FontWidth>(pWidth->pNext, pHeader);
            }
            break;
        }

        case SIGNATURE_CHARMAP: {
            FontCodeMap* pMap = reinterpret_cast<FontCodeMap*>(pBlock + 1);
            if (pMap->pNext != 0) {
                ResolveOffset<FontCodeMap>(pMap->pNext, pHeader);
            }
            break;
        }

        case SIGNATURE_GLGR: {
            break;
        }

        default: {
            return NULL;
        }
        }

        pBlock = reinterpret_cast<BinaryBlockHeader*>(
            reinterpret_cast<char*>(pBlock) + pBlock->size);
    }

    pHeader->signature = SIGNATURE_UNPACKED;
    return pInfo;
}

} // namespace ut
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" void Rebuild__Q34nw4r2ut7ResFontFPQ34nw4r2ut16BinaryFileHeader();
extern "C" void SetResourceBuffer__Q46nw4hbm2ut6detail11ResFontBaseFPvPQ36nw4hbm2ut15FontInformation();
extern "C" void SetResource__Q34nw4r2ut7ResFontFPv();
extern "C" void fn_802FD500();
extern "C" void fn_802FF174();

// asm_to_cpp: SetResource__Q34nw4r2ut7ResFontFPv
extern "C" asm void SetResource__Q34nw4r2ut7ResFontFPv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_802FF53C
    li r3, 0x0
    b lbl_802FF634
lbl_802FF53C:
    lwz r3, 0x0(r4)
    subis r0, r3, 0x5246
    cmplwi r0, 0x4e55
    bne lbl_802FF58C
    lhz r0, 0xc(r4)
    lhz r3, 0xe(r4)
    add r4, r4, r0
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_802FF5F4
lbl_802FF564:
    lwz r3, 0x0(r4)
    subis r0, r3, 0x4649
    cmplwi r0, 0x4e46
    bne lbl_802FF57C
    addi r5, r4, 0x8
    b lbl_802FF5F4
lbl_802FF57C:
    lwz r0, 0x4(r4)
    add r4, r4, r0
    bdnz lbl_802FF564
    b lbl_802FF5F4
lbl_802FF58C:
    lhz r0, 0x6(r4)
    cmplwi r0, 0x104
    bne lbl_802FF5C0
    lis r4, 0x5246
    mr r3, r31
    addi r4, r4, 0x4e54
    li r5, 0x104
    li r6, 0x2
    bl fn_802FD500
    cmpwi r3, 0x0
    bne lbl_802FF5E8
    li r3, 0x0
    b lbl_802FF634
lbl_802FF5C0:
    lis r4, 0x5246
    mr r3, r31
    addi r4, r4, 0x4e54
    li r5, 0x102
    li r6, 0x2
    bl fn_802FD500
    cmpwi r3, 0x0
    bne lbl_802FF5E8
    li r3, 0x0
    b lbl_802FF634
lbl_802FF5E8:
    mr r3, r31
    bl Rebuild__Q34nw4r2ut7ResFontFPQ34nw4r2ut16BinaryFileHeader
    mr r5, r3
lbl_802FF5F4:
    cmpwi r5, 0x0
    bne lbl_802FF604
    li r3, 0x0
    b lbl_802FF634
lbl_802FF604:
    mr r3, r30
    mr r4, r31
    bl SetResourceBuffer__Q46nw4hbm2ut6detail11ResFontBaseFPvPQ36nw4hbm2ut15FontInformation
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x54(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    bl fn_802FF174
    li r3, 0x1
lbl_802FF634:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
