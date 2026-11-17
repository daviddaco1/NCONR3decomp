#include <nw4hbm/lyt/lyt_common.h>
#include <nw4hbm/lyt.h>
#include <nw4hbm/math.h>
#include <nw4hbm/ut.h>

#include <revolution/GX.h>

#include <cstddef>
#include <cstring>

namespace nw4hbm {
namespace lyt {
namespace detail {

/******************************************************************************
 *
 * Utility functions
 *
 ******************************************************************************/
bool EqualsResName(const char* pLhs, const char* pRhs) {
    return std::strncmp(pLhs, pRhs, NW4R_LYT_RES_NAME_LEN) == 0;
}

bool EqualsPaneName(const char* pLhs, const char* pRhs) {
    return std::strncmp(pLhs, pRhs, NW4R_LYT_RES_NAME_LEN) == 0;
}

bool EqualsMaterialName(const char* pLhs, const char* pRhs) {
    return std::strncmp(pLhs, pRhs, NW4R_LYT_MATERIAL_NAME_LEN) == 0;
}

/******************************************************************************
 *
 * TexCoordAry
 *
 ******************************************************************************/
TexCoordAry::TexCoordAry() : mCap(0), mNum(0), mpData(NULL) {}

void TexCoordAry::SetCoord(u32 idx, const math::VEC2* coord) {
    for(int i = 0; i < VERTEXCOLOR_MAX; i++)
    {
        mpData[idx][i] = coord[i];
    }
}

void TexCoordAry::Copy(const void* pSrc, u8 num) {
    mNum = ut::Max<u8>(mNum, num);
    const TexCoord* pSrcCoords = static_cast<const TexCoord*>(pSrc);

    for (int j = 0; j < num; j++) {
        for (int i = 0; i < VERTEXCOLOR_MAX; i++) {
            mpData[j][i] = pSrcCoords[j][i];
        }
    }
}

//unused
void DrawLine(const math::VEC2 &pos, const Size &size, ut::Color &color) {
}

/******************************************************************************
 *
 * Utility functions
 *
 ******************************************************************************/
bool IsModulateVertexColor(ut::Color* pColors, u8 glbAlpha) {
    if (glbAlpha != 255) {
        return true;
    }

    if (pColors != NULL && (pColors[VERTEXCOLOR_LT] != ut::Color::WHITE ||
                            pColors[VERTEXCOLOR_RT] != ut::Color::WHITE ||
                            pColors[VERTEXCOLOR_LB] != ut::Color::WHITE ||
                            pColors[VERTEXCOLOR_RB] != ut::Color::WHITE)) {
        return true;
    }

    return false;
}

ut::Color MultipleAlpha(ut::Color color, u8 alpha) {
    ut::Color result = color;

    if (alpha != 255) {
        result.a = color.a * alpha / 255;
    }

    return result;
}

void MultipleAlpha(ut::Color* pDst, const ut::Color* pSrc, u8 alpha) {
    for (int i = 0; i < VERTEXCOLOR_MAX; i++) {
        pDst[i] = MultipleAlpha(pSrc[i], alpha);
    }
}

void SetVertexFormat(bool modulate, u8 numCoord) {
    GXClearVtxDesc();

    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);

    if (modulate) {
        GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
    }

    for (int i = 0; i < numCoord; i++) {
        GXSetVtxDesc(static_cast<GXAttr>(GX_VA_TEX0 + i), GX_DIRECT);
    }

    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XY, GX_F32, 0);

    if (modulate) {
        GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);
    }

    for (int i = 0; i < numCoord; i++) {
        GXSetVtxAttrFmt(GX_VTXFMT0, static_cast<GXAttr>(GX_VA_TEX0 + i),
                        GX_TEX_ST, GX_F32, 0);
    }
}

void DrawQuad(const math::VEC2& rBase, const Size& rSize, u8 num,
              const TexCoord* pCoords, const ut::Color* pColors) {

    GXBegin(GX_QUADS, GX_VTXFMT0, 4);
    {
        GXPosition2f32(rBase.x, rBase.y);
        if (pColors != NULL) {
            GXColor1u32(pColors[VERTEXCOLOR_LT]);
        }
        for (int i = 0; i < num; i++) {
            GXTexCoord2f32(pCoords[i][VERTEXCOLOR_LT].x,
                           pCoords[i][VERTEXCOLOR_LT].y);
        }

        GXPosition2f32(rBase.x + rSize.width, rBase.y);
        if (pColors != NULL) {
            GXColor1u32(pColors[VERTEXCOLOR_RT]);
        }
        for (int i = 0; i < num; i++) {
            GXTexCoord2f32(pCoords[i][VERTEXCOLOR_RT].x,
                           pCoords[i][VERTEXCOLOR_RT].y);
        }

        GXPosition2f32(rBase.x + rSize.width, rBase.y + rSize.height);
        if (pColors != NULL) {
            GXColor1u32(pColors[VERTEXCOLOR_RB]);
        }
        for (int i = 0; i < num; i++) {
            GXTexCoord2f32(pCoords[i][VERTEXCOLOR_RB].x,
                           pCoords[i][VERTEXCOLOR_RB].y);
        }

        GXPosition2f32(rBase.x, rBase.y + rSize.height);
        if (pColors != NULL) {
            GXColor1u32(pColors[VERTEXCOLOR_LB]);
        }
        for (int i = 0; i < num; i++) {
            GXTexCoord2f32(pCoords[i][VERTEXCOLOR_LB].x,
                           pCoords[i][VERTEXCOLOR_LB].y);
        }
    }
    GXEnd();
}

} // namespace detail
} // namespace lyt
} // namespace nw4hbm

extern "C" void DrawQuad__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeUcPA4_CQ36nw4hbm4math4VEC2PCQ36nw4hbm2ut5Color();
extern "C" void Free__Q46nw4hbm3lyt6detail11TexCoordAryFv();
extern "C" void Reserve__Q46nw4hbm3lyt6detail11TexCoordAryFUc();
extern "C" void SetSize__Q46nw4hbm3lyt6detail11TexCoordAryFUc();
extern "C" void TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeader();

