#define GXSetTevOp fn_802E43CC
#define GXSetTevColorIn fn_802E4460
#define GXSetTevAlphaIn fn_802E44A0
#define GXSetTevColorOp fn_802E44E0
#define GXSetTevAlphaOp fn_802E4538
#define GXSetTevColor fn_802E4590
#define GXSetTevKColor fn_802E4654
#define GXSetTevKColorSel fn_802E46B0
#define GXSetTevKAlphaSel fn_802E4700
#define GXSetTevSwapMode fn_802E4750
#define GXSetTevIndirect fn_802E3F80
#define GXSetIndTexMtx fn_802E3FE8
#define GXSetIndTexCoordScale fn_802E413C
#define GXSetIndTexOrder fn_802E4240
#define GXSetNumIndStages fn_802E430C
#define GXSetTevDirect fn_802E432C
#define __GXUpdateBPMask fn_802E4374
#include "private/ra_gen.h"
#include "revolution/gx/GXCommandList.h"
#include "revolution/gx/GXTypes.h"
#include "revolution/gx/shortcut_tx_reg.h"
#include <mem.h>
#include "revolution/gx.h"
#include "revolution/gx/GXRegs.h"

#define __GX_FLUSH_TEX_STATE() __GXFlushTextureState()

#define IsCITexFmt(fmt) (fmt == GX_TF_C4 || fmt == GX_TF_C8 || fmt == GX_TF_C14X2)

#define NumLeadingZeros(d) __cntlzw((u32)d)

static u8 GXTexMode0Ids[8] = {
    TX_SETMODE0_I0_ID, TX_SETMODE0_I1_ID, TX_SETMODE0_I2_ID, TX_SETMODE0_I3_ID,
    TX_SETMODE0_I4_ID, TX_SETMODE0_I5_ID, TX_SETMODE0_I6_ID, TX_SETMODE0_I7_ID,
};

static u8 GXTexMode1Ids[8] = {
    TX_SETMODE1_I0_ID, TX_SETMODE1_I1_ID, TX_SETMODE1_I2_ID, TX_SETMODE1_I3_ID,
    TX_SETMODE1_I4_ID, TX_SETMODE1_I5_ID, TX_SETMODE1_I6_ID, TX_SETMODE1_I7_ID,
};

static u8 GXTexImage0Ids[8] = {
    TX_SETIMAGE0_I0_ID, TX_SETIMAGE0_I1_ID, TX_SETIMAGE0_I2_ID, TX_SETIMAGE0_I3_ID,
    TX_SETIMAGE0_I4_ID, TX_SETIMAGE0_I5_ID, TX_SETIMAGE0_I6_ID, TX_SETIMAGE0_I7_ID,
};

static u8 GXTexImage1Ids[8] = {
    TX_SETIMAGE1_I0_ID, TX_SETIMAGE1_I1_ID, TX_SETIMAGE1_I2_ID, TX_SETIMAGE1_I3_ID,
    TX_SETIMAGE1_I4_ID, TX_SETIMAGE1_I5_ID, TX_SETIMAGE1_I6_ID, TX_SETIMAGE1_I7_ID,
};

static u8 GXTexImage2Ids[8] = {
    TX_SETIMAGE2_I0_ID, TX_SETIMAGE2_I1_ID, TX_SETIMAGE2_I2_ID, TX_SETIMAGE2_I3_ID,
    TX_SETIMAGE2_I4_ID, TX_SETIMAGE2_I5_ID, TX_SETIMAGE2_I6_ID, TX_SETIMAGE2_I7_ID,
};

static u8 GXTexImage3Ids[8] = {
    TX_SETIMAGE3_I0_ID, TX_SETIMAGE3_I1_ID, TX_SETIMAGE3_I2_ID, TX_SETIMAGE3_I3_ID,
    TX_SETIMAGE3_I4_ID, TX_SETIMAGE3_I5_ID, TX_SETIMAGE3_I6_ID, TX_SETIMAGE3_I7_ID,
};

static u8 GXTexTlutIds[8] = {
    TX_SETTLUT_I0_ID, TX_SETTLUT_I1_ID, TX_SETTLUT_I2_ID, TX_SETTLUT_I3_ID, TX_SETTLUT_I4_ID, TX_SETTLUT_I5_ID, TX_SETTLUT_I6_ID, TX_SETTLUT_I7_ID,
};

static u8 GX2HWFiltConv[] = {
    TX_MIN_NEAREST,                 // GX_NEAR,
    TX_MIN_LINEAR,                  // GX_LINEAR,
    TX_MIN_NEAREST_MIPMAP_NEAREST,  // GX_NEAR_MIP_NEAR,
    TX_MIN_LINEAR_MIPMAP_NEAREST,   // GX_LIN_MIP_NEAR,
    TX_MIN_NEAREST_MIPMAP_LINEAR,   // GX_NEAR_MIP_LIN,
    TX_MIN_LINEAR_MIPMAP_LINEAR,    // GX_LIN_MIP_LIN
};

static u8 HW2GXFiltConv[] = {
    GX_NEAR,           // TX_MIN_NEAREST
    GX_NEAR_MIP_NEAR,  // TX_MIN_NEAREST_MIPMAP_NEAREST
    GX_NEAR_MIP_LIN,   // TX_MIN_NEAREST_MIPMAP_LINEAR
    0,                 // (NA)
    GX_LINEAR,         // TX_MIN_LINEAR
    GX_LIN_MIP_NEAR,   // TX_MIN_LINEAR_MIPMAP_NEAREST
    GX_LIN_MIP_LIN,    // TX_MIN_LINEAR_MIPMAP_LINEAR
    0,                 // (NA)
};

static void __GXGetTexTileShift(GXTexFmt fmt, u32* rowTileS, u32* colTileS) {
    switch (fmt) {
    case GX_TF_C4:
    case GX_TF_I4:
    case GX_TF_CMPR:
    case GX_CTF_R4:
    case GX_CTF_Z4:
        *rowTileS = 3;
        *colTileS = 3;
        break;

    case GX_TF_C8:
    case GX_TF_I8:
    case GX_TF_IA4:
    case GX_TF_A8:
    case GX_TF_Z8:
    case GX_CTF_RA4:
    case GX_CTF_R8:
    case GX_CTF_G8:
    case GX_CTF_B8:
    case GX_CTF_Z8M:
    case GX_CTF_Z8L:
        *rowTileS = 3;
        *colTileS = 2;
        break;

    // 16-bit+ formats:
    case GX_TF_C14X2:
    case GX_TF_IA8:
    case GX_TF_RGB565:
    case GX_TF_RGB5A3:
    case GX_TF_RGBA8:
    case GX_TF_Z16:
    case GX_TF_Z24X8:
    case GX_CTF_RA8:
    case GX_CTF_RG8:
    case GX_CTF_GB8:
    case GX_CTF_Z16L:
        *rowTileS = 2;
        *colTileS = 2;
        break;
    default:
        *rowTileS = *colTileS = 0;
        break;
    }
    return;
}

u32 GXGetTexBufferSize(u16 width, u16 height, u32 format, GXBool mipmap, u8 max_lod) {
    u32 tileShiftX, tileShiftY, tileBytes;
    u32 bufferSize, nx, ny, level;

    __GXGetTexTileShift((GXTexFmt)format, &tileShiftX, &tileShiftY);

    if (format == GX_TF_RGBA8 || format == GX_TF_Z24X8) {
        tileBytes = 64;
    } else {
        tileBytes = 32;
    }

    if (mipmap == GX_TRUE) {
        bufferSize = 0;

        for (level = 0; level < max_lod; level++) {
            nx = (u32)((width + (1 << tileShiftX) - 1) >> tileShiftX);
            ny = (u32)((height + (1 << tileShiftY) - 1) >> tileShiftY);

            bufferSize += nx * ny * tileBytes;

            if (width == 1 && height == 1)
                break;

            width = (u16)((width > 1) ? (width >> 1) : 1);
            height = (u16)((height > 1) ? (height >> 1) : 1);
        }
    } else {
        nx = (u32)((width + (1 << tileShiftX) - 1) >> tileShiftX);
        ny = (u32)((height + (1 << tileShiftY) - 1) >> tileShiftY);

        bufferSize = nx * ny * tileBytes;
    }

    return bufferSize;
}

void __GetImageTileCount(GXTexFmt fmt, u16 wd, u16 ht, u32* rowTiles, u32* colTiles, u32* cmpTiles) {
    u32 texRowShift, texColShift;

    __GXGetTexTileShift(fmt, &texRowShift, &texColShift);

    if (wd == 0)
        wd = 1;
    if (ht == 0)
        ht = 1;
    *rowTiles = (u32)((wd + (1 << texRowShift) - 1) >> texRowShift);
    *colTiles = (u32)((ht + (1 << texColShift) - 1) >> texColShift);
    *cmpTiles = (fmt == GX_TF_RGBA8 || fmt == GX_TF_Z24X8) ? 2U : 1U;

    return;
}

void GXInitTexObj(GXTexObj* obj, void* image_ptr, u16 width, u16 height, GXTexFmt format, GXTexWrapMode wrap_s, GXTexWrapMode wrap_t, GXBool mipmap) {
    u32 imageBase;
    u32 maxLOD;
    u16 rowT, colT;
    u32 rowC, colC;

    GX_SETUP_TEXOBJ(t, obj)

    memset(t, 0, sizeof(GXTexObjInt));

    SC_TX_SETMODE0_SET_WRAP_S(t->mode0, wrap_s);
    SC_TX_SETMODE0_SET_WRAP_T(t->mode0, wrap_t);
    SC_TX_SETMODE0_SET_MAG_FILTER(t->mode0, 1);

    if (mipmap) {
        u8 lmax;

        t->flags |= 1;
        if (IsCITexFmt(format)) {
            SC_TX_SETMODE0_SET_MIN_FILTER(t->mode0, 5);
        } else {
            SC_TX_SETMODE0_SET_MIN_FILTER(t->mode0, 6);
        }

        if (width > height) {
            maxLOD = (u32)(31 - NumLeadingZeros(width));
        } else {
            maxLOD = (u32)(31 - NumLeadingZeros(height));
        }
        lmax = (u8)(maxLOD * 16.0f);
        SC_TX_SETMODE1_SET_MAXLOD(t->mode1, lmax);
    } else {
        SC_TX_SETMODE0_SET_MIN_FILTER(t->mode0, 4);
    }

    t->fmt = format;
    SC_TX_SETIMAGE0_SET_IMAGE_WIDTH(t->image0, (width - 1));
    SC_TX_SETIMAGE0_SET_IMAGE_HEIGHT(t->image0, (height - 1));
    SC_TX_SETIMAGE0_SET_FORMAT(t->image0, (format & 0xf));

    imageBase = (GX_PHY_ADDR(image_ptr)) >> 5;
    SC_TX_SETIMAGE3_SET_IMAGE_BASE(t->image3, imageBase);

    switch (format & 0xf) {
    case GX_TF_I4:
    case GX_TF_C4:
        t->loadFmt = 1;
        rowT = 3;
        colT = 3;
        break;

    case GX_TF_I8:
    case GX_TF_IA4:
    case GX_TF_C8:
        t->loadFmt = 2;
        rowT = 3;
        colT = 2;
        break;

    case GX_TF_IA8:
    case GX_TF_C14X2:
    case GX_TF_RGB565:
    case GX_TF_RGB5A3:
        t->loadFmt = 2;
        rowT = 2;
        colT = 2;
        break;

    case GX_TF_RGBA8:
        t->loadFmt = 3;
        rowT = 2;
        colT = 2;
        break;

    case GX_TF_CMPR:
        t->loadFmt = 0;
        rowT = 3;
        colT = 3;
        break;

    default:
        t->loadFmt = 2;
        rowT = 2;
        colT = 2;
        break;
    }

    rowC = (u32)((width + (1 << rowT) - 1) >> rowT);
    colC = (u32)((height + (1 << colT) - 1) >> colT);
    t->loadCnt = (u16)((rowC * colC) & TX_LOADBLOCK3_COUNT_MASK);
    t->flags |= 2;
}

void GXInitTexObjCI(GXTexObj* obj, void* image_ptr, u16 width, u16 height, GXCITexFmt format, GXTexWrapMode wrap_s, GXTexWrapMode wrap_t,
                    GXBool mipmap, u32 tlut_name) {
    GX_SETUP_TEXOBJ(t, obj)

    GXInitTexObj(obj, image_ptr, width, height, (GXTexFmt)format, wrap_s, wrap_t, mipmap);

    t->flags &= ~2;
    t->tlutName = tlut_name;
}

void GXInitTexObjLOD(GXTexObj* obj, GXTexFilter min_filt, GXTexFilter mag_filt, f32 min_lod, f32 max_lod, f32 lod_bias, GXBool bias_clamp,
                     GXBool do_edge_lod, GXAnisotropy max_aniso) {
    u8 lbias;
    u8 lmin, lmax;
    GX_SETUP_TEXOBJ(t, obj)

    if (lod_bias < -4.0f)
        lod_bias = -4.0f;
    else if (lod_bias >= 4.0f)
        lod_bias = 3.99f;
    lbias = (u8)((s8)(lod_bias * 32.0f));

    SC_TX_SETMODE0_SET_LODBIAS(t->mode0, lbias);

    SC_TX_SETMODE0_SET_MAG_FILTER(t->mode0, ((mag_filt == GX_LINEAR) ? 1 : 0));
    SC_TX_SETMODE0_SET_MIN_FILTER(t->mode0, GX2HWFiltConv[min_filt]);

    SC_TX_SETMODE0_SET_DIAGLOD_ENABLE(t->mode0, ((do_edge_lod) ? 0 : 1));
    SC_TX_SETMODE0_SET_ROUND(t->mode0, 0);
    SC_TX_SETMODE0_SET_FIELD_PREDICT(t->mode0, 0);
    SC_TX_SETMODE0_SET_MAXANISO(t->mode0, max_aniso);
    SC_TX_SETMODE0_SET_LODCLAMP(t->mode0, bias_clamp);

    if (min_lod < 0)
        min_lod = 0;
    else if (min_lod > 10.0f)
        min_lod = 10.0f;
    lmin = (u8)(min_lod * 16.0f);

    if (max_lod < 0)
        max_lod = 0;
    else if (max_lod > 10.0f)
        max_lod = 10.0f;
    lmax = (u8)(max_lod * 16.0f);

    SC_TX_SETMODE1_SET_MINLOD(t->mode1, lmin);
    SC_TX_SETMODE1_SET_MAXLOD(t->mode1, lmax);
}

// These SDK entry points are retained in the retail binary for the product.sel export symbol table.
#pragma push
#pragma force_active on
void GXInitTexObjWrapMode(GXTexObj* obj, GXTexWrapMode sm, GXTexWrapMode tm) {
    GX_SETUP_TEXOBJ(t, obj)
    SC_TX_SETMODE0_SET_WRAP_S(t->mode0, sm);
    SC_TX_SETMODE0_SET_WRAP_T(t->mode0, tm);
}
#pragma pop

void GXInitTexObjTlut(GXTexObj* obj, u32 tlut_name) {
    GX_SETUP_TEXOBJ(t, obj)
    t->tlutName = tlut_name;
}

// These SDK entry points are retained in the retail binary for the product.sel export symbol table.
#pragma push
#pragma force_active on
void GXInitTexObjUserData(GXTexObj* obj, void* user_data) {
    GX_SETUP_TEXOBJ(t, obj)
    t->userData = user_data;
}

void* GXGetTexObjUserData(const GXTexObj* obj) {
    GX_SETUP_TEXOBJ(t, obj)
    return t->userData;
}
#pragma pop

void GXGetTexObjAll(const GXTexObj* obj, void** image_ptr, u16* width, u16* height, GXTexFmt* format, GXTexWrapMode* wrap_s, GXTexWrapMode* wrap_t,
                    GXBool* mipmap) {
    GX_SETUP_TEXOBJ(t, obj)

    *image_ptr = (void*)((TX_SETIMAGE3_GET_IMAGE_BASE(t->image3)) << 5);
    *width = (u16)(TX_SETIMAGE0_GET_IMAGE_WIDTH(t->image0) + 1);
    *height = (u16)(TX_SETIMAGE0_GET_IMAGE_HEIGHT(t->image0) + 1);
    *format = t->fmt;
    *wrap_s = (GXTexWrapMode)TX_SETMODE0_GET_WRAP_S(t->mode0);
    *wrap_t = (GXTexWrapMode)TX_SETMODE0_GET_WRAP_T(t->mode0);
    *mipmap = (GXBool)((t->flags & 1) == 1);
}

// These SDK entry points are retained in the retail binary for the product.sel export symbol table.
#pragma push
#pragma force_active on
u16 GXGetTexObjWidth(const GXTexObj* to) {
    GX_SETUP_TEXOBJ(t, to)
    return (u16)(TX_SETIMAGE0_GET_IMAGE_WIDTH(t->image0) + 1);
}

u16 GXGetTexObjHeight(const GXTexObj* to) {
    GX_SETUP_TEXOBJ(t, to)
    return (u16)(TX_SETIMAGE0_GET_IMAGE_HEIGHT(t->image0) + 1);
}
#pragma pop

GXTexFmt GXGetTexObjFmt(const GXTexObj* to) {
    GX_SETUP_TEXOBJ(t, to)
    return (t->fmt);
}

// These SDK entry points are retained in the retail binary for the product.sel export symbol table.
#pragma push
#pragma force_active on
GXTexWrapMode GXGetTexObjWrapS(const GXTexObj* to) {
    GX_SETUP_TEXOBJ(t, to)
    return (GXTexWrapMode)TX_SETMODE0_GET_WRAP_S(t->mode0);
}

GXTexWrapMode GXGetTexObjWrapT(const GXTexObj* to) {
    GX_SETUP_TEXOBJ(t, to)
    return (GXTexWrapMode)TX_SETMODE0_GET_WRAP_T(t->mode0);
}
#pragma pop

GXBool GXGetTexObjMipMap(const GXTexObj* to) {
    GX_SETUP_TEXOBJ(t, to)
    return (GXBool)((t->flags & 1) == 1);
}

void GXGetTexObjLODAll(const GXTexObj* tex_obj, GXTexFilter* min_filt, GXTexFilter* mag_filt, f32* min_lod, f32* max_lod, f32* lod_bias,
                       GXBool* bias_clamp, GXBool* do_edge_lod, GXAnisotropy* max_aniso) {
    s16 tmp;
    GX_SETUP_TEXOBJ(t, tex_obj)

    *min_filt = (GXTexFilter)HW2GXFiltConv[TX_SETMODE0_GET_MIN_FILTER(t->mode0)];
    *mag_filt = (GXTexFilter)TX_SETMODE0_GET_MAG_FILTER(t->mode0);
    *min_lod = TX_SETMODE1_GET_MINLOD(t->mode1) / 16.0f;
    *max_lod = TX_SETMODE1_GET_MAXLOD(t->mode1) / 16.0f;
    tmp = (s16)TX_SETMODE0_GET_LODBIAS(t->mode0);
    *lod_bias = ((f32)((s8)tmp) / 32.0f);
    *bias_clamp = (GXBool)TX_SETMODE0_GET_LODCLAMP(t->mode0);
    *do_edge_lod = (GXBool)!TX_SETMODE0_GET_DIAGLOD_ENABLE(t->mode0);
    *max_aniso = (GXAnisotropy)TX_SETMODE0_GET_MAXANISO(t->mode0);
}

u32 GXGetTexObjTlut(const GXTexObj* tex_obj) {
    GX_SETUP_TEXOBJ(t, tex_obj)
    return t->tlutName;
}

void GXLoadTexObjPreLoaded(const GXTexObj* obj, const GXTexRegion* region, GXTexMapID id) {
    GXTlutRegionInt* tlr;
    u32 m0, m1, img0, img1, img2, img3;
    GX_SETUP_ALL_TEXOBJS(t, obj, r, region)

    m0 = t->mode0;
    m1 = t->mode1;
    img0 = t->image0;
    img1 = r->image1;
    img2 = r->image2;
    img3 = t->image3;

    SC_TX_SETMODE0_SET_RID(t->mode0, GXTexMode0Ids[id]);
    SC_TX_SETMODE1_SET_RID(t->mode1, GXTexMode1Ids[id]);
    SC_TX_SETIMAGE0_SET_RID(t->image0, GXTexImage0Ids[id]);
    SC_TX_SETIMAGE1_SET_RID(r->image1, GXTexImage1Ids[id]);
    SC_TX_SETIMAGE2_SET_RID(r->image2, GXTexImage2Ids[id]);
    SC_TX_SETIMAGE3_SET_RID(t->image3, GXTexImage3Ids[id]);
    GX_WRITE_RA_REG(t->mode0);
    GX_WRITE_RA_REG(t->mode1);
    GX_WRITE_RA_REG(t->image0);
    GX_WRITE_RA_REG(r->image1);
    GX_WRITE_RA_REG(r->image2);
    GX_WRITE_RA_REG(t->image3);

    if (!(t->flags & 2)) {
        tlr = (GXTlutRegionInt*)(gx->tlutRegionCallback)(t->tlutName);

        SC_TX_SETTLUT_SET_RID(tlr->tlutObj.tlut, GXTexTlutIds[id]);
        GX_WRITE_RA_REG(tlr->tlutObj.tlut);
    }

    gx->tImage0[id] = t->image0;
    gx->tMode0[id] = t->mode0;
    gx->dirtyState |= 1;
    BP_SENT();
}

void GXLoadTexObj(const GXTexObj* obj, GXTexMapID id) {
    GXTexRegion* r;
    r = (gx->texRegionCallback)(obj, id);
    GXLoadTexObjPreLoaded(obj, r, id);
}

void GXInitTlutObj(GXTlutObj* tlut_obj, void* lut, GXTlutFmt fmt, u16 n_entries) {
    GX_SETUP_TLUTOBJ(t, tlut_obj);
    t->tlut = 0;
    SC_TX_SETTLUT_SET_FORMAT(t->tlut, fmt);
    SC_TX_LOADTLUT0_SET_TLUT_BASE(t->loadTlut0, (GX_PHY_ADDR(lut) >> 5));
    SC_TX_LOADTLUT0_SET_RID(t->loadTlut0, 0x64);
    t->numEntries = n_entries;
}

#pragma dont_inline on
void GXLoadTlut(const GXTlutObj* tlut_obj, u32 tlut_name) {
    GXTlutRegionInt* r;
    u32 tlut_offset;
    GX_SETUP_TLUTOBJ(t, tlut_obj);

    r = (GXTlutRegionInt*)(gx->tlutRegionCallback)(tlut_name);

    __GX_FLUSH_TEX_STATE();

    GX_WRITE_RA_REG(t->loadTlut0);
    GX_WRITE_RA_REG(r->loadTlut1);

    __GX_FLUSH_TEX_STATE();

    tlut_offset = TX_LOADTLUT1_GET_TMEM_OFFSET(r->loadTlut1);
    SC_TX_SETTLUT_SET_TMEM_OFFSET(t->tlut, tlut_offset);
    r->tlutObj = *t;
}
#pragma dont_inline reset

void GXInitTexCacheRegion(GXTexRegion* region, GXBool is_32b_mipmap, u32 tmem_even, GXTexCacheSize size_even, u32 tmem_odd, GXTexCacheSize size_odd) {
    u32 WidthExp2;
    GX_SETUP_TREGOBJ(t, region)

    switch (size_even) {
    case GX_TEXCACHE_32K:
        WidthExp2 = 3;
        break;
    case GX_TEXCACHE_128K:
        WidthExp2 = 4;
        break;
    case GX_TEXCACHE_512K:
        WidthExp2 = 5;
        break;
    default:

        break;
    }

    t->image1 = 0;
    SC_TX_SETIMAGE1_SET_TMEM_OFFSET(t->image1, ((u32)tmem_even >> 5));
    SC_TX_SETIMAGE1_SET_CACHE_WIDTH(t->image1, WidthExp2);
    SC_TX_SETIMAGE1_SET_CACHE_HEIGHT(t->image1, WidthExp2);
    SC_TX_SETIMAGE1_SET_IMAGE_TYPE(t->image1, 0);

    switch (size_odd) {
    case GX_TEXCACHE_32K:
        WidthExp2 = 3;
        break;
    case GX_TEXCACHE_128K:
        WidthExp2 = 4;
        break;
    case GX_TEXCACHE_512K:
        WidthExp2 = 5;
        break;
    case GX_TEXCACHE_NONE:
        WidthExp2 = 0;
        break;
    default:
        break;
    }

    t->image2 = 0;
    SC_TX_SETIMAGE2_SET_TMEM_OFFSET(t->image2, ((u32)tmem_odd >> 5));
    SC_TX_SETIMAGE2_SET_CACHE_WIDTH(t->image2, WidthExp2);
    SC_TX_SETIMAGE2_SET_CACHE_HEIGHT(t->image2, WidthExp2);

    t->is32bMipmap = (u8)is_32b_mipmap;
    t->isCached = GX_TRUE;
}

void GXInitTexPreLoadRegion(GXTexRegion* region, u32 tmem_even, u32 size_even, u32 tmem_odd, u32 size_odd) {
    GX_SETUP_TREGOBJ(t, region)

    t->image1 = 0;
    SC_TX_SETIMAGE1_SET_TMEM_OFFSET(t->image1, ((u32)tmem_even >> 5));
    SC_TX_SETIMAGE1_SET_CACHE_WIDTH(t->image1, 0);
    SC_TX_SETIMAGE1_SET_CACHE_HEIGHT(t->image1, 0);
    SC_TX_SETIMAGE1_SET_IMAGE_TYPE(t->image1, 1);

    t->image2 = 0;
    SC_TX_SETIMAGE2_SET_TMEM_OFFSET(t->image2, ((u32)tmem_odd >> 5));
    SC_TX_SETIMAGE2_SET_CACHE_WIDTH(t->image2, 0);
    SC_TX_SETIMAGE2_SET_CACHE_HEIGHT(t->image2, 0);

    t->is32bMipmap = 0;
    t->isCached = GX_FALSE;
    t->sizeEven = (u16)(size_even >> 5);
    t->sizeOdd = (u16)(size_odd >> 5);
}

void GXInitTlutRegion(GXTlutRegion* region, u32 tmem_addr, GXTlutSize tlut_size) {
    GX_SETUP_TLUTREGOBJ(t, region)

    t->loadTlut1 = 0;
    tmem_addr -= 0x80000;
    SC_TX_LOADTLUT1_SET_TMEM_OFFSET(t->loadTlut1, (tmem_addr >> 9));
    SC_TX_LOADTLUT1_SET_COUNT(t->loadTlut1, tlut_size);
    SC_TX_LOADTLUT1_SET_RID(t->loadTlut1, 0x65);
}

#pragma dont_inline on
void GXInvalidateTexAll(void) {
    u32 reg0, reg1;
    reg0 = TX_INVALTAGS(0, 8, 0x66);
    reg1 = TX_INVALTAGS(256, 8, 0x66);
    __GX_FLUSH_TEX_STATE();
    GX_WRITE_RA_REG(reg0);
    GX_WRITE_RA_REG(reg1);
    __GX_FLUSH_TEX_STATE();
}
#pragma dont_inline reset

GXTexRegionCallback GXSetTexRegionCallback(GXTexRegionCallback f) {
    GXTexRegionCallback oldcb = gx->texRegionCallback;
    gx->texRegionCallback = f;
    return oldcb;
}

GXTlutRegionCallback GXSetTlutRegionCallback(GXTlutRegionCallback f) {
    GXTlutRegionCallback oldcb = gx->tlutRegionCallback;
    gx->tlutRegionCallback = f;
    return oldcb;
}

void GXSetTexCoordScaleManually(GXTexCoordID coord, GXBool enable, u16 ss, u16 ts) {
    gx->tcsManEnab = gx->tcsManEnab & ~(1 << coord) | (enable << coord);

    if (enable) {
        SC_SU_TS0_SET_SSIZE(gx->suTs0[coord], (u16)(ss - 1));
        SC_SU_TS1_SET_TSIZE(gx->suTs1[coord], (u16)(ts - 1));

        GX_WRITE_RA_REG(gx->suTs0[coord]);
        GX_WRITE_RA_REG(gx->suTs1[coord]);
        BP_SENT();
    }
}

void __SetSURegs(u32 tmap, u32 tcoord) NO_INLINE {
    u32 w, h;
    GXBool s_bias, t_bias;

    w = ((gx->tImage0[tmap] & 0x3FF));
    h = ((gx->tImage0[tmap] & 0xFFC00) >> 10);
    FAST_FLAG_SET(gx->suTs0[tcoord], w, 0, 16);
    FAST_FLAG_SET(gx->suTs1[tcoord], h, 0, 16);

    s_bias = ((gx->tMode0[tmap] & 0x3)) == GX_REPEAT;
    t_bias = ((gx->tMode0[tmap] & 0xC) >> 2) == GX_REPEAT;
    FAST_FLAG_SET(gx->suTs0[tcoord], s_bias, 16, 1);
    FAST_FLAG_SET(gx->suTs1[tcoord], t_bias, 16, 1);

    GX_WRITE_RA_REG(gx->suTs0[tcoord]);
    GX_WRITE_RA_REG(gx->suTs1[tcoord]);
    gx->bpSentNot = GX_FALSE;
}

void __GXSetSUTexRegs(void) {
    u32 nStages, nIndStages, i, map, tmap, coord;
    u32* ptref;

    if (gx->tcsManEnab == 0xFF) {
        return;
    }

    nStages = ((gx->genMode & 0x3C00) >> 10) + 1;
    nIndStages = ((gx->genMode & 0x70000) >> 16);

    for (i = 0; i < nIndStages; i++) {
        switch (i + GX_INDTEXSTAGE0) {
        case GX_INDTEXSTAGE0:
            tmap = (gx->iref) & 0x7;
            coord = ((gx->iref & 0x38) >> 3);
            break;
        case GX_INDTEXSTAGE1:
            tmap = ((gx->iref & 0x1C0) >> 6);
            coord = ((gx->iref & 0xE00) >> 9);
            break;
        case GX_INDTEXSTAGE2:
            tmap = ((gx->iref & 0x7000) >> 12);
            coord = ((gx->iref & 0x38000) >> 15);
            break;
        case GX_INDTEXSTAGE3:
            tmap = ((gx->iref & 0x1C0000) >> 18);
            coord = ((gx->iref & 0xE00000) >> 21);
            break;
        }

        if (!(gx->tcsManEnab & (1 << coord))) {
            __SetSURegs(tmap, coord);
        }
    }

    for (i = 0; i < nStages; i++) {
        ptref = &gx->tref[i / 2];
        map = gx->texmapId[i];
        tmap = map & ~256;

        if (i & 1) {
            coord = ((*ptref & 0x38000) >> 15);
        } else {
            coord = ((*ptref & 0x38) >> 3);
        }

        if ((tmap != GX_TEXMAP_NULL) && !(gx->tcsManEnab & (1 << coord)) && (gx->tevTcEnab & (1 << i))) {
            __SetSURegs(tmap, coord);
        }
    }
}

void __GXSetTmemConfig(u32 config) {
    switch (config) {
    case 2:
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x00000 >> 5, 3, 3, 0, TX_SETIMAGE1_I0_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0x80000 >> 5, 3, 3, TX_SETIMAGE2_I0_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x10000 >> 5, 3, 3, 0, TX_SETIMAGE1_I1_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0x90000 >> 5, 3, 3, TX_SETIMAGE2_I1_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x20000 >> 5, 3, 3, 0, TX_SETIMAGE1_I2_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0xA0000 >> 5, 3, 3, TX_SETIMAGE2_I2_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x30000 >> 5, 3, 3, 0, TX_SETIMAGE1_I3_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0xB0000 >> 5, 3, 3, TX_SETIMAGE2_I3_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x40000 >> 5, 3, 3, 0, TX_SETIMAGE1_I4_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0x88000 >> 5, 3, 3, TX_SETIMAGE2_I4_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x50000 >> 5, 3, 3, 0, TX_SETIMAGE1_I5_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0x98000 >> 5, 3, 3, TX_SETIMAGE2_I5_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x60000 >> 5, 3, 3, 0, TX_SETIMAGE1_I6_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0xA8000 >> 5, 3, 3, TX_SETIMAGE2_I6_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x70000 >> 5, 3, 3, 0, TX_SETIMAGE1_I7_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0xB8000 >> 5, 3, 3, TX_SETIMAGE2_I7_ID));
        break;
    case 1:
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x00000 >> 5, 3, 3, 0, TX_SETIMAGE1_I0_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0x80000 >> 5, 3, 3, TX_SETIMAGE2_I0_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x10000 >> 5, 3, 3, 0, TX_SETIMAGE1_I1_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0x90000 >> 5, 3, 3, TX_SETIMAGE2_I1_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x20000 >> 5, 3, 3, 0, TX_SETIMAGE1_I2_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0xa0000 >> 5, 3, 3, TX_SETIMAGE2_I2_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x30000 >> 5, 3, 3, 0, TX_SETIMAGE1_I3_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0xb0000 >> 5, 3, 3, TX_SETIMAGE2_I3_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x40000 >> 5, 3, 3, 0, TX_SETIMAGE1_I4_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0xc0000 >> 5, 3, 3, TX_SETIMAGE2_I4_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x50000 >> 5, 3, 3, 0, TX_SETIMAGE1_I5_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0xd0000 >> 5, 3, 3, TX_SETIMAGE2_I5_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x60000 >> 5, 3, 3, 0, TX_SETIMAGE1_I6_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0xe0000 >> 5, 3, 3, TX_SETIMAGE2_I6_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x70000 >> 5, 3, 3, 0, TX_SETIMAGE1_I7_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0xf0000 >> 5, 3, 3, TX_SETIMAGE2_I7_ID));
        break;

    default:
    case 0:
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x00000 >> 5, 3, 3, 0, TX_SETIMAGE1_I0_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0x80000 >> 5, 3, 3, TX_SETIMAGE2_I0_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x08000 >> 5, 3, 3, 0, TX_SETIMAGE1_I1_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0x88000 >> 5, 3, 3, TX_SETIMAGE2_I1_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x10000 >> 5, 3, 3, 0, TX_SETIMAGE1_I2_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0x90000 >> 5, 3, 3, TX_SETIMAGE2_I2_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x18000 >> 5, 3, 3, 0, TX_SETIMAGE1_I3_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0x98000 >> 5, 3, 3, TX_SETIMAGE2_I3_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x20000 >> 5, 3, 3, 0, TX_SETIMAGE1_I4_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0xa0000 >> 5, 3, 3, TX_SETIMAGE2_I4_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x28000 >> 5, 3, 3, 0, TX_SETIMAGE1_I5_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0xa8000 >> 5, 3, 3, TX_SETIMAGE2_I5_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x30000 >> 5, 3, 3, 0, TX_SETIMAGE1_I6_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0xb0000 >> 5, 3, 3, TX_SETIMAGE2_I6_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE1(0x38000 >> 5, 3, 3, 0, TX_SETIMAGE1_I7_ID));
        GX_WRITE_RA_REG(TX_SETIMAGE2(0xb8000 >> 5, 3, 3, TX_SETIMAGE2_I7_ID));
        break;
    }
}

#include "revolution/gx/GXTev.h"
#include "revolution/gx/GXEnum.h"
#include "revolution/gx/GXRegs.h"
#include "revolution/gx.h"

static tev_color_env_t TEVCOpTableST0[] = {
    {
        0xC0,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CC_ZERO,
        GX_CC_TEXC,
        GX_CC_RASC,
        GX_CC_ZERO  
    },
    {
        0xC0,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CC_RASC,
        GX_CC_TEXC,
        GX_CC_TEXA,
        GX_CC_ZERO  
    },
    {
        0xC0,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CC_RASC,
        GX_CC_ONE, 
        GX_CC_TEXC,
        GX_CC_ZERO  
    },
    {
        0xC0,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CC_ZERO,
        GX_CC_ZERO,
        GX_CC_ZERO,
        GX_CC_TEXC  
    },
    {
        0xC0,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CC_ZERO,
        GX_CC_ZERO,
        GX_CC_ZERO,
        GX_CC_RASC  
    },
};

static tev_color_env_t TEVCOpTableST1[] =
{
    {
        0xC0,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CC_ZERO,
        GX_CC_TEXC,
        GX_CC_CPREV,
        GX_CC_ZERO  
    },
    {
        0xC0,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CC_CPREV,
        GX_CC_TEXC,
        GX_CC_TEXA,
        GX_CC_ZERO  
    },
    {
        0xC0,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CC_CPREV,
        GX_CC_ONE, 
        GX_CC_TEXC,
        GX_CC_ZERO  
    },
    {
        0xC0,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CC_ZERO,
        GX_CC_ZERO,
        GX_CC_ZERO,
        GX_CC_TEXC  
    },
    {
        0xC0,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CC_ZERO,
        GX_CC_ZERO,
        GX_CC_ZERO,
        GX_CC_CPREV 
    },
};

static tev_alpha_env_t TEVAOpTableST0[] =
{
    {
        0xC1,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CA_ZERO,
        GX_CA_TEXA,
        GX_CA_RASA,
        GX_CA_ZERO, 
        GX_TEV_SWAP0,
        GX_TEV_SWAP0,
    },
    {
        0xC1,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CA_ZERO,
        GX_CA_ZERO,
        GX_CA_ZERO,
        GX_CA_RASA, 
        GX_TEV_SWAP0,
        GX_TEV_SWAP0,
    },
    {
        0xC1,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CA_ZERO,
        GX_CA_TEXA,
        GX_CA_RASA,
        GX_CA_ZERO, 
        GX_TEV_SWAP0,
        GX_TEV_SWAP0,
    },
    {
        0xC1,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CA_ZERO,
        GX_CA_ZERO,
        GX_CA_ZERO,
        GX_CA_TEXA, 
        GX_TEV_SWAP0,
        GX_TEV_SWAP0,
    },
    {
        0xC1,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CA_ZERO,
        GX_CA_ZERO,
        GX_CA_ZERO,
        GX_CA_RASA, 
        GX_TEV_SWAP0,
        GX_TEV_SWAP0,
    },
};

static tev_alpha_env_t TEVAOpTableST1[] =
{
    {
        0xC1,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CA_ZERO,
        GX_CA_TEXA,
        GX_CA_APREV,
        GX_CA_ZERO, 
        GX_TEV_SWAP0,
        GX_TEV_SWAP0,
    },
    {
        0xC1,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CA_ZERO,
        GX_CA_ZERO,
        GX_CA_ZERO,
        GX_CA_APREV,
        GX_TEV_SWAP0,
        GX_TEV_SWAP0,
    },
    {
        0xC1,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CA_ZERO,
        GX_CA_TEXA,
        GX_CA_APREV,
        GX_CA_ZERO, 
        GX_TEV_SWAP0,
        GX_TEV_SWAP0,
    },
    {
        0xC1,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CA_ZERO,
        GX_CA_ZERO,
        GX_CA_ZERO,
        GX_CA_TEXA, 
        GX_TEV_SWAP0,
        GX_TEV_SWAP0,
    },
    {
        0xC1,
        GX_TEVPREV,
        GX_CS_SCALE_1,
        GX_TRUE,
        GX_TEV_ADD,
        GX_TB_ZERO,
        GX_CA_ZERO,
        GX_CA_ZERO,
        GX_CA_ZERO,
        GX_CA_APREV,
        GX_TEV_SWAP0,
        GX_TEV_SWAP0,
    },
};

void fn_802E43CC(GXTevStageID id, GXTevMode mode) {
    u32 *ctmp, *atmp, tevReg;

    if (id == GX_TEVSTAGE0) {
        ctmp = (u32*)&TEVCOpTableST0[mode];
        atmp = (u32*)&TEVAOpTableST0[mode];
    }
    else {
        ctmp = (u32*)&TEVCOpTableST1[mode];
        atmp = (u32*)&TEVAOpTableST1[mode];
    }

    tevReg = gx->tevc[id];
    tevReg = ((*ctmp & ~0xFF000000) | (tevReg & 0xFF000000));
    GX_WRITE_RA_REG(tevReg);
    gx->tevc[id] = tevReg;

    tevReg = gx->teva[id];
    tevReg = ((*atmp & ~0xFF00000F) | (tevReg & 0xFF00000F));
    GX_WRITE_RA_REG(tevReg);
    gx->teva[id] = tevReg;
    gx->bpSentNot = GX_FALSE;
}

void fn_802E4460( GXTevStageID stage, GXTevColorArg a, GXTevColorArg b, GXTevColorArg c, GXTevColorArg d ) {
    u32 tevReg = gx->tevc[stage];
    SC_TEV_COLOR_ENV_SET_SELA(tevReg, a);
    SC_TEV_COLOR_ENV_SET_SELB(tevReg, b);
    SC_TEV_COLOR_ENV_SET_SELC(tevReg, c);
    SC_TEV_COLOR_ENV_SET_SELD(tevReg, d);
    GX_WRITE_RA_REG(tevReg);
    gx->tevc[stage] = tevReg;
    gx->bpSentNot = GX_FALSE;
}

void fn_802E44A0(GXTevStageID stage, GXTevAlphaArg a, GXTevAlphaArg b, GXTevAlphaArg c, GXTevAlphaArg d) {
    u32 tevReg = gx->teva[stage];
    SC_TEV_ALPHA_ENV_SET_SELA(tevReg, a);
    SC_TEV_ALPHA_ENV_SET_SELB(tevReg, b);
    SC_TEV_ALPHA_ENV_SET_SELC(tevReg, c);
    SC_TEV_ALPHA_ENV_SET_SELD(tevReg, d);
    GX_WRITE_RA_REG(tevReg);
    gx->teva[stage] = tevReg;
    gx->bpSentNot = GX_FALSE;
}

void fn_802E44E0(GXTevStageID stage, GXTevOp op, GXTevBias bias, GXTevScale scale, GXBool clamp, GXTevRegID out_reg ) {
    u32 tevReg = gx->tevc[stage];
    SC_TEV_COLOR_ENV_SET_SUB(tevReg, (op & 1));

    if (op <= GX_TEV_SUB) {
        SC_TEV_COLOR_ENV_SET_SHIFT(tevReg, scale);
        SC_TEV_COLOR_ENV_SET_BIAS(tevReg, bias);
    } else {
        SC_TEV_COLOR_ENV_SET_SHIFT(tevReg, ((op >> 1) & 3));
        SC_TEV_COLOR_ENV_SET_BIAS(tevReg, GX_MAX_TEVBIAS);
    }

    SC_TEV_COLOR_ENV_SET_CLAMP(tevReg, clamp);
    SC_TEV_COLOR_ENV_SET_DEST(tevReg, out_reg);
    GX_WRITE_RA_REG(tevReg);
    gx->tevc[stage] = tevReg;
    gx->bpSentNot = GX_FALSE;
}

void fn_802E4538(GXTevStageID stage, GXTevOp op, GXTevBias bias, GXTevScale scale, GXBool clamp, GXTevRegID out_reg) {
    u32 tevReg = gx->teva[stage];
    SC_TEV_ALPHA_ENV_SET_SUB(tevReg, (op & 1));
    if (op <= GX_TEV_SUB) {
        SC_TEV_ALPHA_ENV_SET_SHIFT(tevReg, scale);
        SC_TEV_ALPHA_ENV_SET_BIAS(tevReg, bias);
    } else {
        SC_TEV_ALPHA_ENV_SET_SHIFT(tevReg, ((op >> 1) & 3));
        SC_TEV_ALPHA_ENV_SET_BIAS(tevReg, GX_MAX_TEVBIAS);
    }

    SC_TEV_ALPHA_ENV_SET_CLAMP(tevReg, clamp);
    SC_TEV_ALPHA_ENV_SET_DEST(tevReg, out_reg);
    GX_WRITE_RA_REG(tevReg);
    gx->teva[stage] = tevReg;
    gx->bpSentNot = GX_FALSE;
}

void fn_802E4590(GXTevRegID id, GXColor color) {
    u32 rgba, regRA, regBG;
    rgba = *(u32*)(&color);
    regRA = TEV_REGISTERL(0, 0, (0xE0 + id * 2));
    SC_TEV_REGISTERL_SET_R8(regRA, (rgba >> 24) & 0xFF);
    SC_TEV_REGISTERL_SET_A8(regRA, rgba & 0xFF);

    regBG = TEV_REGISTERH(0, 0, (0xE1 + id * 2));
    SC_TEV_REGISTERH_SET_B8(regBG, (rgba >> 8) & 0xFF);
    SC_TEV_REGISTERH_SET_G8(regBG, (rgba >> 16) & 0xFF);

    GX_WRITE_RA_REG(regRA);
    GX_WRITE_RA_REG(regBG);
    GX_WRITE_RA_REG(regBG);
    GX_WRITE_RA_REG(regBG);
    gx->bpSentNot = GX_FALSE;
}

void GXSetTevColorS10(GXTevRegID id, GXColorS10 color) {
    u32 sRG, sBA, regRA, regBG;
    sRG = *(u32*)(&color);
    sBA = *((u32*)(&color) + 1);
    regRA = TEV_REGISTERL(0, 0, (0xE0 + id * 2));
    SC_TEV_REGISTERL_SET_R(regRA, (sRG >> 16) & ((1 << TEV_REGISTERL_R_SIZE) - 1));
    SC_TEV_REGISTERL_SET_A(regRA, sBA & ((1 << TEV_REGISTERL_A_SIZE) - 1));

    regBG = TEV_REGISTERH(0, 0, (0xE1 + id * 2));
    SC_TEV_REGISTERH_SET_B(regBG, (sBA >> 16) & ((1 << TEV_REGISTERH_B_SIZE) - 1));
    SC_TEV_REGISTERH_SET_G(regBG, sRG & ((1 << TEV_REGISTERH_G_SIZE) - 1));

    GX_WRITE_RA_REG(regRA);
    GX_WRITE_RA_REG(regBG);
    GX_WRITE_RA_REG(regBG);
    GX_WRITE_RA_REG(regBG);
    gx->bpSentNot = GX_FALSE;
}

void fn_802E4654(GXTevKColorID id, GXColor color) {
    u32 rgba, regRA, regBG;
    rgba = *(u32*)(&color);
    regRA = TEV_KREGISTERL(0, 0, (0xE0 + id * 2));
    SC_TEV_KREGISTERL_SET_R(regRA, (rgba >> 24) & 0xFF);
    SC_TEV_KREGISTERL_SET_A(regRA, rgba & 0xFF);
    SC_TEV_KREGISTERL_SET_PAD1(regRA, 0x08);

    regBG = TEV_KREGISTERH(0, 0, (0xE1 + id * 2));
    SC_TEV_KREGISTERH_SET_B(regBG, (rgba >> 8) & 0xFF);
    SC_TEV_KREGISTERH_SET_G(regBG, (rgba >> 16) & 0xFF);
    SC_TEV_KREGISTERH_SET_PAD1(regBG, 0x08);

    GX_WRITE_RA_REG(regRA);
    GX_WRITE_RA_REG(regBG); 
    gx->bpSentNot = GX_FALSE;
}

void fn_802E46B0(GXTevStageID stage, GXTevKColorSel sel) {
    u32* reg = &gx->tevKsel[stage >> 1];
    if (stage & 1) {
        SC_TEV_KSEL_SET_KCSEL1((*reg), sel);
    }
    else {
        SC_TEV_KSEL_SET_KCSEL0((*reg), sel);
    }

    GX_WRITE_RA_REG((*reg));
    gx->bpSentNot = GX_FALSE;
}

void fn_802E4700(GXTevStageID stage, GXTevKAlphaSel sel) {
    u32* reg = &gx->tevKsel[stage >> 1];
    if (stage & 1) {
        SC_TEV_KSEL_SET_KASEL1((*reg), sel);
    }
    else {
        SC_TEV_KSEL_SET_KASEL0((*reg), sel);
    }

    GX_WRITE_RA_REG((*reg));
    gx->bpSentNot = GX_FALSE;
}

void fn_802E4750(GXTevStageID stage, GXTevSwapSel ras_sel, GXTevSwapSel tex_sel) {
    u32* reg = &gx->teva[stage];
    SC_TEV_ALPHA_ENV_SET_MODE((*reg), ras_sel);
    SC_TEV_ALPHA_ENV_SET_SWAP((*reg), tex_sel);
    GX_WRITE_RA_REG((*reg));
    gx->bpSentNot = GX_FALSE;
}

void GXSetTevSwapModeTable(GXTevSwapSel table, GXTevColorChan red, GXTevColorChan green, GXTevColorChan blue, GXTevColorChan alpha) {
    u32* reg = &gx->tevKsel[table << 1];
    SC_TEV_KSEL_SET_XRB((*reg), red);
    SC_TEV_KSEL_SET_XGA((*reg), green);
    GX_WRITE_RA_REG((*reg));

    reg = &gx->tevKsel[(table << 1) + 1];
    SC_TEV_KSEL_SET_XRB((*reg), blue);
    SC_TEV_KSEL_SET_XGA((*reg), alpha);
    GX_WRITE_RA_REG((*reg));
    gx->bpSentNot = GX_FALSE;
}

void GXSetAlphaCompare(GXCompare comp0, u8 ref0, GXAlphaOp op, GXCompare comp1, u8 ref1) {
    u32 reg = 0xF3000000;
    SC_TEV_ALPHAFUNC_SET_A0(reg, ref0);
    SC_TEV_ALPHAFUNC_SET_A1(reg, ref1);
    SC_TEV_ALPHAFUNC_SET_OP0(reg, comp0);
    SC_TEV_ALPHAFUNC_SET_OP1(reg, comp1);
    SC_TEV_ALPHAFUNC_SET_LOGIC(reg, op);
    GX_WRITE_RA_REG(reg);
    gx->bpSentNot = GX_FALSE;
}

void GXSetZTexture(GXZTexOp op, GXTexFmt fmt, u32 bias) {
    u32 zenv0, zenv1, type;
    zenv0 = 0;
    SC_TEV_Z_ENV_0_SET_ZOFF(zenv0, bias);
    SC_TEV_Z_ENV_0_SET_RID(zenv0, 0xF4);

    zenv1 = 0;
    switch (fmt) {
        case GX_TF_Z8:
            type = 0;
            break;
        case GX_TF_Z16:
            type = 1;
            break;
        case GX_TF_Z24X8:
            type = 2;
            break;
        default:
            type = 2;
            break;
    }

    SC_TEV_Z_ENV_1_SET_TYPE(zenv1, type);
    SC_TEV_Z_ENV_1_SET_OP(zenv1, op);
    SC_TEV_Z_ENV_1_SET_RID(zenv1, 0xF5);
   
    GX_WRITE_RA_REG(zenv0);
    GX_WRITE_RA_REG(zenv1);
    gx->bpSentNot = GX_FALSE;
}

void GXSetTevOrder(GXTevStageID stage, GXTexCoordID coord, GXTexMapID map, GXChannelID color) {
    u32* ptref, tmap, tcoord;
    static u32 c2r[] = {0,1,0,1,0,1,7,5,6};
    ptref = &gx->tref[stage / 2];
    gx->texmapId[stage] = map;
    tmap = (u32)(map & ~GX_TEX_DISABLE);
    tmap = (tmap >= GX_MAX_TEXMAP) ? GX_TEXMAP0 : tmap;

    if (coord >= GX_MAX_TEXCOORD) {
        tcoord = GX_TEXCOORD0;
        gx->tevTcEnab = gx->tevTcEnab & ~(1 << stage);
    }
    else {
        tcoord = coord;
        gx->tevTcEnab = gx->tevTcEnab | (1 << stage);
    }

    if (stage & 1) {
        SC_RAS1_TREF_SET_TI1(*ptref, tmap);
        SC_RAS1_TREF_SET_TC1(*ptref, tcoord);
        SC_RAS1_TREF_SET_CC1(*ptref, ((color == GX_COLOR_NULL) ? 7 : c2r[color]));
        SC_RAS1_TREF_SET_TE1(*ptref, ((map != GX_TEXMAP_NULL) && !(map & GX_TEX_DISABLE)));
    }
    else {
        SC_RAS1_TREF_SET_TI0(*ptref, tmap);
        SC_RAS1_TREF_SET_TC0(*ptref, tcoord);
        SC_RAS1_TREF_SET_CC0(*ptref, ((color == GX_COLOR_NULL) ? 7 : c2r[color]));
        SC_RAS1_TREF_SET_TE0(*ptref, ((map != GX_TEXMAP_NULL) && !(map & GX_TEX_DISABLE)));
    }

    GX_WRITE_RA_REG(*ptref);
    gx->bpSentNot = GX_FALSE;
    gx->dirtyState |= 1;
}

void GXSetNumTevStages(u8 nStages) {
    SC_GEN_MODE_SET_NTEV(gx->genMode, (nStages - 1));
    gx->dirtyState |= 4;
}

#include "revolution/gx.h"
#include "revolution/gx/GXRegs.h"
#include "revolution/os.h"

void fn_802E3F80(GXTevStageID tev_stage, GXIndTexStageID ind_stage, GXIndTexFormat format, GXIndTexBiasSel bias_sel, GXIndTexMtxID matrix_sel,
                      GXIndTexWrap wrap_s, GXIndTexWrap wrap_t, GXBool add_prev, GXBool utc_lod, GXIndTexAlphaSel alpha_sel) {
    u32 reg;

    CHECK_IN_BGN(GXInitIndTexture);
    reg = 0;
    SC_BP_CMD_SET_BT(reg, ind_stage);
    SC_BP_CMD_SET_FMT(reg, format);
    SC_BP_CMD_SET_BIAS(reg, bias_sel);
    SC_BP_CMD_SET_BS(reg, alpha_sel);
    SC_BP_CMD_SET_M(reg, matrix_sel);
    SC_BP_CMD_SET_SW(reg, wrap_s);
    SC_BP_CMD_SET_TW(reg, wrap_t);
    SC_BP_CMD_SET_LB(reg, utc_lod);
    SC_BP_CMD_SET_FB(reg, add_prev);
    SC_BP_CMD_SET_RID(reg, (0x10 + tev_stage));
    GX_WRITE_RA_REG(reg);
    gx->bpSentNot = GX_FALSE;
}

void fn_802E3FE8(GXIndTexMtxID mtx_id, const f32 offset[2][3], s8 scale_exp) {
    s32 mtx[6];
    u32 reg, id;

    switch (mtx_id) {
    case GX_ITM_0:
    case GX_ITM_1:
    case GX_ITM_2:
        id = (u32)(mtx_id - GX_ITM_0);
        break;
    case GX_ITM_S0:
    case GX_ITM_S1:
    case GX_ITM_S2:
        id = (u32)(mtx_id - GX_ITM_S0);
        break;
    case GX_ITM_T0:
    case GX_ITM_T1:
    case GX_ITM_T2:
        id = (u32)(mtx_id - GX_ITM_T0);
        break;
    default:
        id = 0;
        break;
    }

    mtx[0] = ((s32)(offset[0][0] * (f32)(1 << 10))) & 0x7FF;
    mtx[1] = ((s32)(offset[1][0] * (f32)(1 << 10))) & 0x7FF;
    scale_exp += 0x11;

    reg = 0;
    SC_BP_MTXA_SET_MA(reg, mtx[0]);
    SC_BP_MTXA_SET_MB(reg, mtx[1]);
    SC_BP_MTXA_SET_S(reg, (scale_exp & 0x3));
    SC_BP_MTXA_SET_RID(reg, 0x6 + id * 3);
    GX_WRITE_RA_REG(reg);

    mtx[2] = ((s32)(offset[0][1] * (f32)(1 << 10))) & 0x7FF;
    mtx[3] = ((s32)(offset[1][1] * (f32)(1 << 10))) & 0x7FF;
    reg = 0;
    SC_BP_MTXB_SET_MC(reg, mtx[2]);
    SC_BP_MTXB_SET_MD(reg, mtx[3]);
    SC_BP_MTXB_SET_S(reg, ((scale_exp >> 2) & 0x3));
    SC_BP_MTXB_SET_RID(reg, 0x7 + id * 3);
    GX_WRITE_RA_REG(reg);

    mtx[4] = ((s32)(offset[0][2] * (f32)(1 << 10))) & 0x7FF;
    mtx[5] = ((s32)(offset[1][2] * (f32)(1 << 10))) & 0x7FF;
    reg = 0;
    SC_BP_MTXC_SET_ME(reg, mtx[4]);
    SC_BP_MTXC_SET_MF(reg, mtx[5]);
    SC_BP_MTXC_SET_S(reg, ((scale_exp >> 4) & 0x3));
    SC_BP_MTXC_SET_RID(reg, 0x8 + id * 3);
    GX_WRITE_RA_REG(reg);
    gx->bpSentNot = GX_FALSE;
}

void fn_802E413C(GXIndTexStageID ind_state, GXIndTexScale scale_s, GXIndTexScale scale_t) {
    switch (ind_state) {
    case GX_INDTEXSTAGE0:
        SC_RAS1_SS_SET_SS0(gx->IndTexScale0, scale_s);
        SC_RAS1_SS_SET_TS0(gx->IndTexScale0, scale_t);
        SC_RAS1_SS_SET_RID(gx->IndTexScale0, 0x25);
        GX_WRITE_RA_REG(gx->IndTexScale0);
        break;
    case GX_INDTEXSTAGE1:
        SC_RAS1_SS_SET_SS1(gx->IndTexScale0, scale_s);
        SC_RAS1_SS_SET_TS1(gx->IndTexScale0, scale_t);
        SC_RAS1_SS_SET_RID(gx->IndTexScale0, 0x25);
        GX_WRITE_RA_REG(gx->IndTexScale0);
        break;
    case GX_INDTEXSTAGE2:
        SC_RAS1_SS_SET_SS0(gx->IndTexScale1, scale_s);
        SC_RAS1_SS_SET_TS0(gx->IndTexScale1, scale_t);
        SC_RAS1_SS_SET_RID(gx->IndTexScale1, 0x26);
        GX_WRITE_RA_REG(gx->IndTexScale1);
        break;
    case GX_INDTEXSTAGE3:
        SC_RAS1_SS_SET_SS1(gx->IndTexScale1, scale_s);
        SC_RAS1_SS_SET_TS1(gx->IndTexScale1, scale_t);
        SC_RAS1_SS_SET_RID(gx->IndTexScale1, 0x26);
        GX_WRITE_RA_REG(gx->IndTexScale1);
        break;
    default:
        break;
    }
    BP_SENT();
}

void fn_802E4240(GXIndTexStageID ind_stage, GXTexCoordID tex_coord, GXTexMapID tex_map) {
    if (tex_map == GX_TEXMAP_NULL) {
        tex_map = GX_TEXMAP0;
    }

    if (tex_coord == GX_TEXCOORD_NULL) {
        tex_coord = GX_TEXCOORD0;
    }

    switch (ind_stage) {
    case GX_INDTEXSTAGE0:
        SC_RAS1_IREF_SET_BI0(gx->iref, tex_map);
        SC_RAS1_IREF_SET_BC0(gx->iref, tex_coord);
        break;
    case GX_INDTEXSTAGE1:
        SC_RAS1_IREF_SET_BI1(gx->iref, tex_map);
        SC_RAS1_IREF_SET_BC1(gx->iref, tex_coord);
        break;
    case GX_INDTEXSTAGE2:
        SC_RAS1_IREF_SET_BI2(gx->iref, tex_map);
        SC_RAS1_IREF_SET_BC2(gx->iref, tex_coord);
        break;
    case GX_INDTEXSTAGE3:
        SC_RAS1_IREF_SET_BI3(gx->iref, tex_map);
        SC_RAS1_IREF_SET_BC3(gx->iref, tex_coord);
        break;
    default:
        break;
    }

    GX_WRITE_RA_REG(gx->iref);

    gx->dirtyState |= 3;
    BP_SENT();
}

void fn_802E430C(u8 nIndStages) {
    SC_GEN_MODE_SET_NBMP(gx->genMode, nIndStages);
    gx->dirtyState |= 6;
}

void fn_802E432C(GXTevStageID tev_stage) {
    CHECK_IN_BGN(fn_802E432C);
    fn_802E3F80(tev_stage, GX_INDTEXSTAGE0, GX_ITF_8, GX_ITB_NONE, GX_ITM_OFF, GX_ITW_OFF, GX_ITW_OFF, FALSE, FALSE, GX_ITBA_OFF);
}

void GXSetTevIndWarp(GXTevStageID tev_stage, GXIndTexStageID ind_stage, GXBool signed_offset, GXBool replace_mode, GXIndTexMtxID matrix_sel) {
    GXIndTexWrap wrap = (replace_mode) ? GX_ITW_0 : GX_ITW_OFF;

    CHECK_IN_BGN(GXSetTevIndWarp);
    fn_802E3F80(tev_stage, ind_stage, GX_ITF_8, (signed_offset) ? GX_ITB_STU : GX_ITB_NONE, matrix_sel, wrap, wrap, FALSE, FALSE, GX_ITBA_OFF);
}

void fn_802E4374(void) {
    return;
}

void __GXSetIndirectMask(u32 mask) {
    SC_BP_IMASK_SET_IMASK(gx->bpMask, mask);
    GX_WRITE_RA_REG(gx->bpMask);
    BP_SENT();
}

void __GXFlushTextureState() {
    GX_WRITE_RA_REG(gx->bpMask);
    BP_SENT();
}
s32 GXGetTexObjData(s8* p) { return (*(s32*)(p+0xc) << 5) & 0x1fffffe0; }

extern float lbl_8049D0B0;
extern u8 lbl_8037B0E0[];
void GXInitTexObjFilter(GXTexObj* obj, GXTexFilter min_filt, GXTexFilter mag_filt) {
    GX_SETUP_TEXOBJ(t, obj);
    SC_TX_SETMODE0_SET_MAG_FILTER(t->mode0, ((mag_filt == GX_LINEAR) ? 1 : 0));
    SC_TX_SETMODE0_SET_MIN_FILTER(t->mode0, GX2HWFiltConv[min_filt]);
}

