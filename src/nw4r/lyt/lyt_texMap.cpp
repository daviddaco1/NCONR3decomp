#include "nw4r/lyt/lyt_texMap.h"

// NOTICE: This file seems to have been reworked. Not sure if all functions exist anymore, ReplaceImage doesnt even
// appear stripped in BBA, but is in tokyo friend park 2 DWARF. In NSMBW there seems to be more parameters for
// ReplaceImage as well. BBA map also shows calls to SetNoWrap from Set (GXTexObj variant), but the actual function
// shows no sign

namespace nw4r {
namespace lyt {

namespace {

// CountLeadingZeros__24@unnamed@lyt_texMap_cpp@FUl

} // namespace

// Get__Q34nw4r3lyt6TexMapCFP9_GXTexObj
void TexMap::Get(GXTexObj *pTexObj) const {
    if (detail::IsCITexelFormat(GetTexelFormat())) {
        u32 tlutName = GXGetTexObjTlut(pTexObj);
        GXInitTexObjCI(
            pTexObj, GetImage(), GetWidth(), GetHeight(), (GXCITexFmt)GetTexelFormat(), GetWrapModeS(), GetWrapModeT(),
            IsMipMap(), tlutName
        );
    } else {
        GXInitTexObj(
            pTexObj, GetImage(), GetWidth(), GetHeight(), GetTexelFormat(), GetWrapModeS(), GetWrapModeT(), IsMipMap()
        );
    }

    GXInitTexObjLOD(
        pTexObj, GetMinFilter(), GetMagFilter(), GetMinLOD(), GetMaxLOD(), GetLODBias(), IsBiasClampEnable(),
        IsEdgeLODEnable(), GetAnisotropy()
    );
}

// Get__Q34nw4r3lyt6TexMapCFP10_GXTlutObj
void TexMap::Get(GXTlutObj *pTLUTObj) const {
    GXInitTlutObj(pTLUTObj, GetPalette(), GetPaletteFormat(), GetPaletteEntryNum());
}

// Set__Q34nw4r3lyt6TexMapFRC9_GXTexObj
void TexMap::Set(const GXTexObj &pTexObj) {
    void *pImage;
    u16 width, height;
    GXTexFmt format;
    GXTexWrapMode wrapS, wrapT;
    u8 mipmap;
    GXGetTexObjAll(&pTexObj, &pImage, &width, &height, &format, &wrapS, &wrapT, &mipmap);
    SetImage(pImage);
    SetSize(width, height);
    SetTexelFormat(format);
    SetWrapMode(wrapS, wrapT);
    SetMipMap(mipmap);

    GXTexFilter minFilter, magFilter;
    f32 minLOD, maxLOD, LODBias;
    u8 biasClampEnable, edgeLODEnable;
    GXAnisotropy anisotropy;
    GXGetTexObjLODAll(
        &pTexObj, &minFilter, &magFilter, &minLOD, &maxLOD, &LODBias, &biasClampEnable, &edgeLODEnable, &anisotropy
    );
    SetFilter(minFilter, magFilter);
    SetLOD(minLOD, maxLOD);
    SetLODBias(LODBias);
    SetBiasClampEnable(biasClampEnable);
    SetEdgeLODEnable(edgeLODEnable);
    SetAnisotropy(anisotropy);
}

// Set__Q34nw4r3lyt6TexMapFRC10_GXTlutObj

// Set__Q34nw4r3lyt6TexMapFP10TPLPaletteUl
void TexMap::Set(TPLPalette *pal, u32 id) {
    // Not yet converted from offset to pointer (unbound)
    if ((unsigned int)pal->descriptors < 0x80000000) {
        TPLBind(pal);
    }

    Set(TPLGet(pal, id));
}

// Set__Q34nw4r3lyt6TexMapFPC13TPLDescriptor
void TexMap::Set(const TPLDescriptor *pTPLDesc) {
    TPLHeader *tplHead = pTPLDesc->texHeader;
    SetImage(tplHead->data);
    SetSize(tplHead->width, tplHead->height);
    SetTexelFormat(static_cast<GXTexFmt>(tplHead->format));

    bool bMipMap = (tplHead->minLod != tplHead->maxLod);
    SetMipMap(bMipMap);

    SetFilter(tplHead->minFilt, tplHead->magFilt);
    SetLOD(tplHead->minLod, tplHead->maxLod);
    SetLODBias(tplHead->lodBias);
    SetEdgeLODEnable(tplHead->edgeLodEnable);

    TPLClutHeader *pTPLCLUTHeader = pTPLDesc->clutHeader;
    if (pTPLCLUTHeader != NULL) {
        SetPalette(pTPLCLUTHeader->data);
        SetPaletteFormat(pTPLCLUTHeader->format);
        SetPaletteEntryNum(pTPLCLUTHeader->numEntries);
    } else {
        SetPalette(NULL);
        SetPaletteFormat(GX_TL_IA8);
        SetPaletteEntryNum(0);
    }
}

// ReplaceImage__Q34nw4r3lyt6TexMapFRC10_GXTlutObj
void TexMap::ReplaceImage(const GXTexObj &pTexObj) {
    void *pImage;
    u16 width, height;
    GXTexFmt format;
    GXTexWrapMode wrapS, wrapT;
    u8 mipmap;
    GXGetTexObjAll(&pTexObj, &pImage, &width, &height, &format, &wrapS, &wrapT, &mipmap);
    SetImage(pImage);
    SetSize(width, height);
    SetTexelFormat(format);
}

// ReplaceImage__Q34nw4r3lyt6TexMapFP10TPLPaletteUl
void TexMap::ReplaceImage(TPLPalette *pal, u32 id) {
    // Not yet converted from offset to pointer (unbound)
    if ((unsigned int)pal->descriptors < 0x80000000) {
        TPLBind(pal);
    }

    ReplaceImage(TPLGet(pal, id));
}

// ReplaceImage__Q34nw4r3lyt6TexMapFPC13TPLDescriptor
void TexMap::ReplaceImage(const TPLDescriptor *pTPLDesc) {
    TPLHeader *tplHead = pTPLDesc->texHeader;
    SetImage(tplHead->data);
    SetSize(tplHead->width, tplHead->height);
    SetTexelFormat(static_cast<GXTexFmt>(tplHead->format));

    TPLClutHeader *pTPLCLUTHeader = pTPLDesc->clutHeader;
    if (pTPLCLUTHeader != NULL) {
        SetPalette(pTPLCLUTHeader->data);
        SetPaletteFormat(pTPLCLUTHeader->format);
        SetPaletteEntryNum(pTPLCLUTHeader->numEntries);
    } else {
        SetPalette(NULL);
        SetPaletteFormat(GX_TL_IA8);
        SetPaletteEntryNum(0);
    }
}

// SetNoWrap__Q34nw4r3lyt6TexMapFRCQ34nw4r3lyt6TexMap
void TexMap::SetNoWrap(const TexMap &map) {
    GXTexWrapMode wrapS = GetWrapModeS();
    GXTexWrapMode wrapT = GetWrapModeT();

    Set(map);
    SetWrapMode(wrapS, wrapT);
}

// SetNoWrap__Q34nw4r3lyt6TexMapFRC9_GXTexObj
void TexMap::SetNoWrap(const GXTexObj &pTexObj) {
    void *pImage;
    u16 width, height;
    GXTexFmt format;
    GXTexWrapMode wrapS, wrapT;
    u8 mipmap;
    GXGetTexObjAll(&pTexObj, &pImage, &width, &height, &format, &wrapS, &wrapT, &mipmap);
    SetImage(pImage);
    SetSize(width, height);
    SetTexelFormat(format);
}

// SetNoWrap__Q34nw4r3lyt6TexMapFP10TPLPaletteUl
void TexMap::SetNoWrap(TPLPalette *pal, u32 id) {}

// SetNoWrap__Q34nw4r3lyt6TexMapFPC13TPLDescriptor
void TexMap::SetNoWrap(const TPLDescriptor *pDescriptor) {
    TPLHeader *tex = pDescriptor->texHeader;
    SetImage(tex->data);
    SetSize(tex->width, tex->height);
    SetTexelFormat(static_cast<GXTexFmt>(tex->format));

    bool bMipMap = (tex->minLod != tex->maxLod);
    SetMipMap(bMipMap);

    SetFilter(tex->minFilt, tex->magFilt);
    SetLOD(tex->minLod, tex->maxLod);
    SetLODBias(tex->lodBias);
    SetEdgeLODEnable(tex->edgeLodEnable);

    TPLClutHeader *clut = pDescriptor->clutHeader;
    if (clut != NULL) {
        SetPalette(clut->data);
        SetPaletteFormat(clut->format);
        SetPaletteEntryNum(clut->numEntries);
    } else {
        SetPalette(NULL);
        SetPaletteFormat(GX_TL_IA8);
        SetPaletteEntryNum(0);
    }
}

// SetTexParam__Q34nw4r3lyt6TexMapFPvUsUs9_GXTexFmt14_GXTexWrapMode14_GXTexWrapModeb

// SetLODParam__Q34nw4r3lyt6TexMapF12_GXTexFilter12_GXTexFilterfffbb13_GXAnisotropy

// SetPaletteParam__Q34nw4r3lyt6TexMapFPv10_GXTlutFmtUs

} // namespace lyt
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_804A1F28;
extern "C" float lbl_804A1F30;
extern "C" void Set__Q34nw4r3lyt6TexMapFPC13TPLDescriptor();

// asm_to_cpp: Set__Q34nw4r3lyt6TexMapFPC13TPLDescriptor
extern "C" asm void Set__Q34nw4r3lyt6TexMapFPC13TPLDescriptor() {
    nofralloc
    stwu r1, -0x20(r1)
    lis r0, 0x4330
    lwz r7, 0x0(r4)
    lwz r8, 0x4(r4)
    lwz r4, 0x8(r7)
    lwz r6, 0x18(r3)
    cmpwi r8, 0x0
    stw r4, 0x0(r3)
    lfd f3, lbl_804A1F28
    lhz r5, 0x0(r7)
    lhz r4, 0x2(r7)
    stw r0, 0x8(r1)
    lfs f0, lbl_804A1F30
    sth r4, 0x8(r3)
    sth r5, 0xa(r3)
    lwz r4, 0x4(r7)
    stw r0, 0x10(r1)
    rlwimi r6, r4, 28, 0, 3
    stw r6, 0x18(r3)
    lwz r0, 0xc(r7)
    lwz r4, 0x10(r7)
    rlwimi r6, r0, 25, 5, 6
    rlwimi r6, r4, 23, 7, 8
    stw r6, 0x18(r3)
    lbz r5, 0x21(r7)
    lbz r0, 0x22(r7)
    subf r4, r5, r0
    subf r0, r0, r5
    or r0, r4, r0
    rlwimi r6, r0, 28, 4, 4
    stw r6, 0x18(r3)
    lwz r0, 0x14(r7)
    lwz r4, 0x18(r7)
    rlwimi r6, r0, 20, 9, 11
    rlwimi r6, r4, 19, 12, 12
    stw r6, 0x18(r3)
    lbz r4, 0x22(r7)
    lbz r0, 0x21(r7)
    stw r4, 0xc(r1)
    stw r0, 0x14(r1)
    lfd f2, 0x8(r1)
    lfd f1, 0x10(r1)
    fsubs f2, f2, f3
    fsubs f1, f1, f3
    stfs f2, 0x10(r3)
    stfs f1, 0xc(r3)
    lfs f1, 0x1c(r7)
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    sth r0, 0x14(r3)
    lbz r4, 0x20(r7)
    neg r0, r4
    or r0, r0, r4
    rlwimi r6, r0, 18, 14, 14
    stw r6, 0x18(r3)
    beq lbl_801FEEEC
    lwz r0, 0x8(r8)
    stw r0, 0x4(r3)
    lwz r0, 0x4(r8)
    rlwimi r6, r0, 13, 17, 18
    stw r6, 0x18(r3)
    lhz r0, 0x0(r8)
    sth r0, 0x16(r3)
    b lbl_801FEF00
lbl_801FEEEC:
    li r4, 0x0
    rlwinm r0, r6, 0, 19, 16
    stw r4, 0x4(r3)
    stw r0, 0x18(r3)
    sth r4, 0x16(r3)
lbl_801FEF00:
    addi r1, r1, 0x20
    blr
}
