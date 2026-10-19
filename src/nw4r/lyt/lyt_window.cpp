#include <nw4r/lyt.h>

/******************************************************************************
 *
 * Texture-flip implementation
 *
 ******************************************************************************/
namespace {

using namespace nw4r;
using namespace nw4r::lyt;

/******************************************************************************
 * TextureFlipType
 ******************************************************************************/
enum TextureFlipType {
    TEXTUREFLIP_NONE,
    TEXTUREFLIP_H,
    TEXTUREFLIP_V,
    TEXTUREFLIP_90,
    TEXTUREFLIP_180,
    TEXTUREFLIP_270,

    TEXTUREFLIP_MAX
};

/******************************************************************************
 * TextureFlipIndex
 ******************************************************************************/
enum TextureFlipIndex {
    FLIPINDEX_X,
    FLIPINDEX_Y,

    FLIPINDEX_MAX
};

/******************************************************************************
 * TextureFlipInfo
 ******************************************************************************/
struct TextureFlipInfo {
    u8 coords[VERTEXCOLOR_MAX][FLIPINDEX_MAX]; // at 0x0
    u8 idx[FLIPINDEX_MAX];                     // at 0x8
};

// @typo
TextureFlipInfo& GetTexutreFlipInfo(u8 flipType) {
    static TextureFlipInfo flipInfos[TEXTUREFLIP_MAX] = {
        {{{0, 0}, {1, 0}, {0, 1}, {1, 1}}, {0, 1}}, // TEXTUREFLIP_NONE
        {{{1, 0}, {0, 0}, {1, 1}, {0, 1}}, {0, 1}}, // TEXTUREFLIP_H
        {{{0, 1}, {1, 1}, {0, 0}, {1, 0}}, {0, 1}}, // TEXTUREFLIP_V
        {{{0, 1}, {0, 0}, {1, 1}, {1, 0}}, {1, 0}}, // TEXTUREFLIP_90
        {{{1, 1}, {0, 1}, {1, 0}, {0, 0}}, {0, 1}}, // TEXTUREFLIP_180
        {{{1, 0}, {1, 1}, {0, 0}, {0, 1}}, {1, 0}}, // TEXTUREFLIP_270
    };

    return flipInfos[flipType];
}

/******************************************************************************
 * Top-left frame
 ******************************************************************************/
void GetLTFrameSize(math::VEC2* pPoint, Size* pSize, const math::VEC2& rBase,
                    const Size& rWindowSize,
                    const WindowFrameSize& rFrameSize) {

    *pPoint = rBase;

    pSize->width = rWindowSize.width - rFrameSize.r;
    pSize->height = rFrameSize.t;
}

void GetLTTexCoord(math::VEC2* pTexCoords, const Size& rSize,
                   const Size& rTexSize, u8 flipType) {

    const TextureFlipInfo& rInfo = GetTexutreFlipInfo(flipType);

    int ix = rInfo.idx[FLIPINDEX_X];
    int iy = rInfo.idx[FLIPINDEX_Y];

    math::VEC2 texSize(rTexSize.width, rTexSize.height);

    pTexCoords[VERTEXCOLOR_LT][ix] = pTexCoords[VERTEXCOLOR_LB][ix] =
        rInfo.coords[VERTEXCOLOR_LT][ix];

    pTexCoords[VERTEXCOLOR_LT][iy] = pTexCoords[VERTEXCOLOR_RT][iy] =
        rInfo.coords[VERTEXCOLOR_LT][iy];

    // clang-format off
    pTexCoords[VERTEXCOLOR_RB][ix] = pTexCoords[VERTEXCOLOR_RT][ix] =
        rInfo.coords[VERTEXCOLOR_LT][ix] + rSize.width /
        ((rInfo.coords[VERTEXCOLOR_RT][ix] - rInfo.coords[VERTEXCOLOR_LT][ix]) * texSize[ix]);
    
    pTexCoords[VERTEXCOLOR_RB][iy] = pTexCoords[VERTEXCOLOR_LB][iy] =
        rInfo.coords[VERTEXCOLOR_LT][iy] + rSize.height /
        ((rInfo.coords[VERTEXCOLOR_LB][iy] - rInfo.coords[VERTEXCOLOR_LT][iy]) * texSize[iy]);
    // clang-format on
}

/******************************************************************************
 * Top-right frame
 ******************************************************************************/
void GetRTFrameSize(math::VEC2* pPoint, Size* pSize, const math::VEC2& rBase,
                    const Size& rWindowSize,
                    const WindowFrameSize& rFrameSize) {

    *pPoint = math::VEC2(rBase.x + rWindowSize.width - rFrameSize.r, rBase.y);

    pSize->width = rFrameSize.r;
    pSize->height = rWindowSize.height - rFrameSize.b;
}

void GetRTTexCoord(math::VEC2* pTexCoords, const Size& rSize,
                   const Size& rTexSize, u8 flipType) {

    const TextureFlipInfo& rInfo = GetTexutreFlipInfo(flipType);

    int ix = rInfo.idx[FLIPINDEX_X];
    int iy = rInfo.idx[FLIPINDEX_Y];

    math::VEC2 texSize(rTexSize.width, rTexSize.height);

    pTexCoords[VERTEXCOLOR_RT][ix] = pTexCoords[VERTEXCOLOR_RB][ix] =
        rInfo.coords[VERTEXCOLOR_RT][ix];

    pTexCoords[VERTEXCOLOR_RT][iy] = pTexCoords[VERTEXCOLOR_LT][iy] =
        rInfo.coords[VERTEXCOLOR_RT][iy];

    // clang-format off
    pTexCoords[VERTEXCOLOR_LB][ix] = pTexCoords[VERTEXCOLOR_LT][ix] =
        rInfo.coords[VERTEXCOLOR_RT][ix] + rSize.width /
        ((rInfo.coords[VERTEXCOLOR_LT][ix] - rInfo.coords[VERTEXCOLOR_RT][ix]) * texSize[ix]);
    
    pTexCoords[VERTEXCOLOR_LB][iy] = pTexCoords[VERTEXCOLOR_RB][iy] =
        rInfo.coords[VERTEXCOLOR_RT][iy] + rSize.height /
        ((rInfo.coords[VERTEXCOLOR_RB][iy] - rInfo.coords[VERTEXCOLOR_RT][iy]) * texSize[iy]);
    // clang-format on
}

/******************************************************************************
 * Bottom-left frame
 ******************************************************************************/
void GetLBFrameSize(math::VEC2* pPoint, Size* pSize, const math::VEC2& rBase,
                    const Size& rWindowSize,
                    const WindowFrameSize& rFrameSize) {

    *pPoint = math::VEC2(rBase.x, rBase.y - rFrameSize.t);

    pSize->width = rFrameSize.l;
    pSize->height = rWindowSize.height - rFrameSize.t;
}

void GetLBTexCoord(math::VEC2* pTexCoords, const Size& rSize,
                   const Size& rTexSize, u8 flipType) {

    const TextureFlipInfo& rInfo = GetTexutreFlipInfo(flipType);

    int ix = rInfo.idx[FLIPINDEX_X];
    int iy = rInfo.idx[FLIPINDEX_Y];

    math::VEC2 texSize(rTexSize.width, rTexSize.height);

    pTexCoords[VERTEXCOLOR_LB][ix] = pTexCoords[VERTEXCOLOR_LT][ix] =
        rInfo.coords[VERTEXCOLOR_LB][ix];

    pTexCoords[VERTEXCOLOR_LB][iy] = pTexCoords[VERTEXCOLOR_RB][iy] =
        rInfo.coords[VERTEXCOLOR_LB][iy];

    // clang-format off
    pTexCoords[VERTEXCOLOR_RT][ix] = pTexCoords[VERTEXCOLOR_RB][ix] =
        rInfo.coords[VERTEXCOLOR_LB][ix] + rSize.width /
        ((rInfo.coords[VERTEXCOLOR_RB][ix] - rInfo.coords[VERTEXCOLOR_LB][ix]) * texSize[ix]);
    
    pTexCoords[VERTEXCOLOR_RT][iy] = pTexCoords[VERTEXCOLOR_LT][iy] =
        rInfo.coords[VERTEXCOLOR_LB][iy] + rSize.height / 
        ((rInfo.coords[VERTEXCOLOR_LT][iy] - rInfo.coords[VERTEXCOLOR_LB][iy]) * texSize[iy]);
    // clang-format on
}

/******************************************************************************
 * Bottom-right frame
 ******************************************************************************/
void GetRBFrameSize(math::VEC2* pPoint, Size* pSize, const math::VEC2& rBase,
                    const Size& rWindowSize,
                    const WindowFrameSize& rFrameSize) {

    *pPoint = math::VEC2(rBase.x + rFrameSize.l,
                         rBase.y - rWindowSize.height + rFrameSize.b);

    pSize->width = rWindowSize.width - rFrameSize.l;
    pSize->height = rFrameSize.b;
}

void GetRBTexCoord(math::VEC2* pTexCoords, const Size& rSize,
                   const Size& rTexSize, u8 flipType) {

    const TextureFlipInfo& rInfo = GetTexutreFlipInfo(flipType);

    int ix = rInfo.idx[FLIPINDEX_X];
    int iy = rInfo.idx[FLIPINDEX_Y];

    math::VEC2 texSize(rTexSize.width, rTexSize.height);

    pTexCoords[VERTEXCOLOR_RB][ix] = pTexCoords[VERTEXCOLOR_RT][ix] =
        rInfo.coords[VERTEXCOLOR_RB][ix];

    pTexCoords[VERTEXCOLOR_RB][iy] = pTexCoords[VERTEXCOLOR_LB][iy] =
        rInfo.coords[VERTEXCOLOR_RB][iy];

    // clang-format off
    pTexCoords[VERTEXCOLOR_LT][ix] = pTexCoords[VERTEXCOLOR_LB][ix] =
        rInfo.coords[VERTEXCOLOR_RB][ix] + rSize.width /
        ((rInfo.coords[VERTEXCOLOR_LB][ix] - rInfo.coords[VERTEXCOLOR_RB][ix]) * texSize[ix]);

    pTexCoords[VERTEXCOLOR_LT][iy] = pTexCoords[VERTEXCOLOR_RT][iy] =
        rInfo.coords[VERTEXCOLOR_RB][iy] + rSize.height /
        ((rInfo.coords[VERTEXCOLOR_RT][iy] - rInfo.coords[VERTEXCOLOR_RB][iy]) * texSize[iy]);
    // clang-format on
}

} // namespace

namespace nw4r {
namespace lyt {

NW4R_UT_RTTI_DEF_DERIVED(Window, Pane);

/******************************************************************************
 *
 * Window
 *
 ******************************************************************************/
Window::Window(const res::Window* pRes, const ResBlockSet& rBlockSet)
    : Pane(pRes) {

    const res::WindowContent* pResContent =
        detail::ConvertOffsToPtr<res::WindowContent>(pRes, pRes->contentOffset);
    
    u8 num = ut::Min<u8>(pResContent->texCoordNum, GX_MAX_TEXCOORD);
    InitContent(num);
    mContentInflation = pRes->inflation;

    const u32* const pMatOffsetTbl = detail::ConvertOffsToPtr<u32>(
    rBlockSet.pMaterialList, sizeof(res::MaterialList));

    for (int i = 0; i < VERTEXCOLOR_MAX; i++) {
        mContent.vtxColors[i] = pResContent->vtxCols[i];
    }

    if (num > 0 && !mContent.texCoordAry.IsEmpty()) {
        mContent.texCoordAry.Copy(reinterpret_cast<const u8*>(pResContent) +
                                  sizeof(res::WindowContent),
                                  num);
    }


    const res::Material* const pResMaterial =
        detail::ConvertOffsToPtr<res::Material>(
            rBlockSet.pMaterialList,
            pMatOffsetTbl[pResContent->materialIdx]);

    mpMaterial = Layout::NewObj<Material>(pResMaterial, rBlockSet);

    mFrameNum = 0;
    mFrames = NULL;

    if (pRes->frameNum > 0) {
        InitFrame(pRes->frameNum);

        const u32* const pFrmOffsetTbl = detail::ConvertOffsToPtr<u32>(
            pRes, pRes->frameOffsetTableOffset);

        for (int i = 0; i < mFrameNum; i++) {
            const res::WindowFrame* const pResFrame =
                detail::ConvertOffsToPtr<res::WindowFrame>(
                    pRes, pFrmOffsetTbl[i]);

            mFrames[i].textureFlip = pResFrame->textureFlip;

            const res::Material* const pResMaterial =
                detail::ConvertOffsToPtr<res::Material>(
                    rBlockSet.pMaterialList,
                    pMatOffsetTbl[pResFrame->materialIdx]);

            mFrames[i].pMaterial = Layout::NewObj<Material>(pResMaterial, rBlockSet);
        }
    }
}

void Window::InitContent(u8 texNum) {
    if (texNum > 0) {
        ReserveTexCoord(texNum);
    }
}

void Window::InitFrame(u8 frameNum) {
    mFrameNum = 0;
    mFrames = Layout::NewArray<Frame>(frameNum);
    
    if (mFrames != NULL) {
        mFrameNum = frameNum;
    }
}

Window::~Window() {
    Layout::DeleteArray(mFrames, mFrameNum);

    if (mpMaterial != NULL && !mpMaterial->IsUserAllocated()) {
        Layout::DeleteObj(mpMaterial);
        mpMaterial = NULL;
    }

    mContent.texCoordAry.Free();
}

void Window::ReserveTexCoord(u8 num) {
    mContent.texCoordAry.Reserve(num);
}

Material* Window::FindMaterialByName(const char* pName, bool recursive) {
    if (mpMaterial != NULL &&
        detail::EqualsMaterialName(mpMaterial->GetName(), pName)) {

        return mpMaterial;
    }

    for (int i = 0; i < mFrameNum; i++) {
        if (detail::EqualsMaterialName(mFrames[i].pMaterial->GetName(),
                                       pName)) {

            return mFrames[i].pMaterial;
        }
    }

    if (recursive) {
        NW4R_UT_LINKLIST_FOREACH (it, mChildList, {
            Material* pMaterial = it->FindMaterialByName(pName, recursive);
            
            if (pMaterial != NULL) {
                return pMaterial;
            }
        })
    }

    return NULL;
}

AnimationLink* Window::FindAnimationLinkSelf(AnimTransform* pAnimTrans) {
    AnimationLink* pAnimLink = Pane::FindAnimationLinkSelf(pAnimTrans);

    if (pAnimLink != NULL) {
        return pAnimLink;
    }

    for (int i = 0; i < mFrameNum; i++) {
        AnimationLink* pAnimLink =
            mFrames[i].pMaterial->FindAnimationLink(pAnimTrans);

        if (pAnimLink != NULL) {
            return pAnimLink;
        }
    }

    return NULL;
}

void Window::SetAnimationEnable(AnimTransform* pAnimTrans, bool enable,
                                bool recursive) {

    for (int i = 0; i < mFrameNum; i++) {
        mFrames[i].pMaterial->SetAnimationEnable(pAnimTrans, enable);
    }

    Pane::SetAnimationEnable(pAnimTrans, enable, recursive);
}

ut::Color Window::GetVtxColor(u32 idx) const {
    return mContent.vtxColors[idx];
}

void Window::SetVtxColor(u32 idx, ut::Color color) {
    mContent.vtxColors[idx] = color;
}

u8 Window::GetVtxColorElement(u32 idx) const {
    return detail::GetVtxColorElement(mContent.vtxColors, idx);
}

void Window::SetVtxColorElement(u32 idx, u8 value) {
    detail::SetVtxColorElement(mContent.vtxColors, idx, value);
}

void Window::DrawSelf(const DrawInfo& rInfo) {
    LoadMtx(rInfo);

    WindowFrameSize size = GetFrameSize(mFrameNum, mFrames);
    math::VEC2 base = GetVtxPos();
    DrawContent(base, size, mGlbAlpha);

    switch (mFrameNum) {
    case 1: {
        DrawFrame(base, mFrames[WINDOWFRAME_LT], size, mGlbAlpha);
        break;
    }

    case 4: {
        DrawFrame4(base, mFrames, size, mGlbAlpha);
        break;
    }

    case 8: {
        DrawFrame8(base, mFrames, size, mGlbAlpha);
        break;
    }
    }
}

void Window::AnimateSelf(u32 option) {
    Pane::AnimateSelf(option);

    if (IsVisible() || !(option & ANIMOPTION_SKIP_INVISIBLE)) {
        for (int i = 0; i < mFrameNum; i++) {
            mFrames[i].pMaterial->Animate();
        }
    }
}

void Window::UnbindAnimationSelf(AnimTransform* pAnimTrans) {
    for (int i = 0; i < mFrameNum; i++) {
        mFrames[i].pMaterial->UnbindAnimation(pAnimTrans);
    }

    Pane::UnbindAnimationSelf(pAnimTrans);
}

void Window::DrawContent(const math::VEC2& rBase,
                         const WindowFrameSize& rFrameSize, u8 alpha) {

    bool useVtxColor = mpMaterial->SetupGX(
        detail::IsModulateVertexColor(mContent.vtxColors, alpha), alpha);

    detail::SetVertexFormat(useVtxColor, mContent.texCoordAry.GetSize());

    // clang-format off
    detail::DrawQuad(
        math::VEC2(rBase.x + rFrameSize.l - mContentInflation.l,
                   rBase.y - rFrameSize.t + mContentInflation.t),

        Size(mSize.width - rFrameSize.l + mContentInflation.l - rFrameSize.r + mContentInflation.r,
             mSize.height - rFrameSize.t + mContentInflation.t - rFrameSize.b + mContentInflation.b),

        mContent.texCoordAry.GetSize(),
        mContent.texCoordAry.GetArray(),
        
        useVtxColor ? mContent.vtxColors : NULL,
        alpha);
    // clang-format on
}

// DrawFrame__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2RCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc: definicion C reemplazada por asm (ver abajo)


void Window::DrawFrame4(const math::VEC2& rBase, const Frame* pFrames,
                        const WindowFrameSize& rFrameSize, u8 alpha) {

    ut::Color vtxColors[VERTEXCOLOR_MAX];
    detail::TexCoord texCoords[1];

    math::VEC2 point;
    Size size;

    bool modVtxColor = detail::IsModulateVertexColor(NULL, alpha);

#define DRAW_FRAME(FRAME)                                                      \
    if (pFrames[WINDOWFRAME_##FRAME].pMaterial->GetTextureNum() > 0) {         \
        bool useVtxColor = pFrames[WINDOWFRAME_##FRAME].pMaterial->SetupGX(    \
            modVtxColor, alpha);                                               \
                                                                               \
        Get##FRAME##FrameSize(&point, &size, rBase, mSize, rFrameSize);        \
                                                                               \
        Get##FRAME##TexCoord(                                                  \
            texCoords[0], size,                                                \
            detail::GetTextureSize(pFrames[WINDOWFRAME_##FRAME].pMaterial, 0), \
            pFrames[WINDOWFRAME_##FRAME].textureFlip);                         \
                                                                               \
        detail::SetVertexFormat(useVtxColor, 1);                               \
        detail::DrawQuad(point, size, 1, texCoords,                            \
                         useVtxColor ? vtxColors : NULL, alpha);               \
    }

    DRAW_FRAME(LT);
    DRAW_FRAME(RT);
    DRAW_FRAME(RB);
    DRAW_FRAME(LB);

#undef DRAW_FRAME
}

void Window::DrawFrame8(const math::VEC2& rBase, const Frame* pFrames,
                        const WindowFrameSize& rFrameSize, u8 alpha) {

    ut::Color vtxColors[VERTEXCOLOR_MAX];
    detail::TexCoord texCoords[1];

    Size size;

    bool modVtxColor = detail::IsModulateVertexColor(NULL, alpha);

#define DRAW_FRAME_EX(FRAME, TEXCOORD, SIZE, POINT)                            \
    if (pFrames[WINDOWFRAME_##FRAME].pMaterial->GetTextureNum() > 0) {         \
        bool useVtxColor = pFrames[WINDOWFRAME_##FRAME].pMaterial->SetupGX(    \
            modVtxColor, alpha);                                               \
                                                                               \
        size = SIZE;                                                           \
                                                                               \
        Get##TEXCOORD##TexCoord(                                               \
            texCoords[0], size,                                                \
            detail::GetTextureSize(pFrames[WINDOWFRAME_##FRAME].pMaterial, 0), \
            pFrames[WINDOWFRAME_##FRAME].textureFlip);                         \
                                                                               \
        detail::SetVertexFormat(useVtxColor, 1);                               \
        detail::DrawQuad(POINT, size, 1, texCoords,                            \
                         useVtxColor ? vtxColors : NULL, alpha);               \
    }

#define DRAW_FRAME(FRAME, SIZE, POINT) DRAW_FRAME_EX(FRAME, FRAME, SIZE, POINT)

    // clang-format off
    DRAW_FRAME(LT,
               Size(rFrameSize.l,
                    rFrameSize.t),
               rBase);

    DRAW_FRAME_EX(T, LT,
               Size(mSize.width - rFrameSize.l - rFrameSize.r,
                    rFrameSize.t),
               math::VEC2(rBase.x + rFrameSize.l,
                          rBase.y));

    DRAW_FRAME(RT,
               Size(rFrameSize.r,
                    rFrameSize.t),
               math::VEC2(rBase.x + mSize.width - rFrameSize.r,
                          rBase.y));

    DRAW_FRAME_EX(R, RT,
               Size(rFrameSize.r,
                    mSize.height - rFrameSize.t - rFrameSize.b),
               math::VEC2(rBase.x + mSize.width - rFrameSize.r,
                          rBase.y - rFrameSize.t));

    DRAW_FRAME(RB,
               Size(rFrameSize.r,
                    rFrameSize.b),
               math::VEC2(rBase.x + mSize.width - rFrameSize.r,
                          rBase.y - mSize.height + rFrameSize.b));

    DRAW_FRAME_EX(B, RB,
               Size(mSize.width - rFrameSize.l - rFrameSize.r,
                    rFrameSize.b),
               math::VEC2(rBase.x + rFrameSize.l,
                          rBase.y - mSize.height + rFrameSize.b));

    DRAW_FRAME(LB,
               Size(rFrameSize.l,
                    rFrameSize.b),
               math::VEC2(rBase.x,
                          rBase.y - mSize.height + rFrameSize.b));

    DRAW_FRAME_EX(L, LB,
               Size(rFrameSize.l,
                    mSize.height - rFrameSize.t - rFrameSize.b),
               math::VEC2(rBase.x,
                          rBase.y - rFrameSize.t));
    // clang-format on

#undef DRAW_FRAME
#undef DRAW_FRAME_EX
}

WindowFrameSize Window::GetFrameSize(u8 frameNum, const Frame* pFrames) {
    WindowFrameSize frameSize = {0.0f, 0.0f, 0.0f, 0.0f};

    switch (frameNum) {
    case 1: {
        Size texSize =
            detail::GetTextureSize(pFrames[WINDOWFRAME_LT].pMaterial, 0);

        frameSize.l = texSize.width;
        frameSize.t = texSize.height;

        frameSize.r = texSize.width;
        frameSize.b = texSize.height;
        break;
    }

    case 4:
    case 8: {
        Size texSize =
            detail::GetTextureSize(pFrames[WINDOWFRAME_LT].pMaterial, 0);

        frameSize.l = texSize.width;
        frameSize.t = texSize.height;

        texSize = detail::GetTextureSize(pFrames[WINDOWFRAME_RB].pMaterial, 0);

        frameSize.r = texSize.width;
        frameSize.b = texSize.height;
        break;
    }
    }

    return frameSize;
}

u8 Window::GetMaterialNum() const {
    return mFrameNum + 1;
}

Material* Window::GetMaterial(u32 index) const {
    if(index == 0) {
        return GetContentMaterial();
    }

    return GetFrameMaterial(index - 1);
}

Material* Window::GetContentMaterial() const {
    return GetMaterial();
}

Material* Window::GetFrameMaterial(u32 idx) const {
    if (idx >= mFrameNum) {
        return NULL;
    }

    return mFrames[idx].pMaterial;
}

} // namespace lyt
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049D9D0;
extern "C" float lbl_8049D9F0;
extern "C" float lbl_804A1EE8;
extern "C" float lbl_804A1EF0;
extern "C" float lbl_804A1EF8;
extern "C" u8 lbl_80361750[];
extern "C" void DrawFrame__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2RCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc();
extern "C" void fn_80201418();
extern "C" void GetTextureSize__Q34nw4r3lyt6detailFPQ34nw4r3lyt8MaterialUc();
extern "C" void IsModulateVertexColor__Q34nw4r3lyt6detailFPQ34nw4r2ut5ColorUc();
extern "C" void SetVertexFormat__Q34nw4r3lyt6detailFbUc();
extern "C" void _restgpr_20();
extern "C" void _savegpr_20();
extern "C" void fn_801FBE3C();

// asm_to_cpp: DrawFrame__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2RCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc
extern "C" asm void DrawFrame__Q34nw4r3lyt6WindowFRCQ34nw4r4math4VEC2RCQ44nw4r3lyt6Window5FrameRCQ34nw4r3lyt15WindowFrameSizeUc() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    opword 0xF3E100D8
    addi r11, r1, 0xd0
    bl _savegpr_20
    lwz r8, 0x4(r5)
    lis r9, 0x4330
    stw r9, 0x88(r1)
    mr r27, r3
    lwz r0, 0x3c(r8)
    mr r28, r4
    stw r9, 0x90(r1)
    mr r20, r5
    srwi. r0, r0, 28
    mr r29, r6
    mr r30, r7
    beq lbl_801FA714
    mr r4, r30
    li r3, 0x0
    bl IsModulateVertexColor__Q34nw4r3lyt6detailFPQ34nw4r2ut5ColorUc
    mr r4, r3
    lwz r3, 0x4(r20)
    mr r5, r30
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r31, r3
    li r4, 0x1
    bl SetVertexFormat__Q34nw4r3lyt6detailFbUc
    lwz r4, 0x4(r20)
    addi r3, r1, 0x50
    li r5, 0x0
    bl GetTextureSize__Q34nw4r3lyt6detailFPQ34nw4r3lyt8MaterialUc
    lis r21, lbl_80361750@ha
    li r0, -0x1
    addi r21, r21, lbl_80361750@l
    lfs f12, lbl_804A1EE8
    lbz r6, 0x9(r21)
    neg r3, r31
    lbz r7, 0x8(r21)
    addi r9, r1, 0x38
    lbzx r12, r21, r6
    add r4, r21, r6
    add r5, r21, r7
    lbzx r11, r21, r7
    stw r12, 0x94(r1)
    slwi r10, r7, 2
    lbz r5, 0x2(r5)
    slwi r20, r6, 2
    lfd f2, 0x90(r1)
    addi r23, r1, 0x68
    subf r5, r11, r5
    lbz r4, 0x4(r4)
    xoris r5, r5, 0x8000
    lfd f3, lbl_804A1EF0
    stw r5, 0x94(r1)
    subf r4, r12, r4
    lfs f11, 0x0(r28)
    or r3, r3, r31
    lfd f0, 0x90(r1)
    xoris r4, r4, 0x8000
    lfd f1, lbl_804A1EF8
    srawi r5, r3, 31
    stw r4, 0x94(r1)
    addi r26, r1, 0x58
    fsubs f4, f0, f1
    lfs f10, 0x4(r28)
    lfd f0, 0x90(r1)
    and r7, r26, r5
    stw r11, 0x8c(r1)
    fsubs f6, f2, f3
    fsubs f1, f0, f1
    lfd f0, 0x88(r1)
    lfs f13, 0x54(r1)
    addi r22, r1, 0x78
    stw r11, 0x8c(r1)
    fsubs f7, f0, f3
    lfd f0, 0x88(r1)
    addi r24, r1, 0x70
    lfs f31, 0x50(r1)
    addi r25, r1, 0x80
    stw r12, 0x8c(r1)
    fsubs f5, f0, f3
    lfs f9, 0x4(r29)
    mr r6, r23
    lfd f0, 0x88(r1)
    mr r8, r30
    stw r0, 0x58(r1)
    fsubs f2, f0, f3
    lfs f8, 0x8(r29)
    stw r0, 0x5c(r1)
    addi r3, r1, 0x48
    addi r4, r1, 0x40
    li r5, 0x1
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    stfs f12, 0x40(r1)
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    stfs f10, 0x4c(r1)
    lfs f0, 0x4c(r27)
    stfs f31, 0x38(r1)
    fsubs f9, f0, f9
    stfs f13, 0x3c(r1)
    lfsx f3, r9, r10
    lfsx f0, r9, r20
    stfsx f7, r22, r10
    fmuls f3, f4, f3
    fmuls f0, f1, f0
    stfsx f7, r23, r10
    fdivs f1, f9, f3
    stfsx f6, r24, r20
    stfsx f6, r23, r20
    stfs f9, 0x40(r1)
    stfs f8, 0x44(r1)
    fdivs f0, f8, f0
    fadds f1, f5, f1
    fadds f0, f2, f0
    stfsx f1, r24, r10
    stfsx f1, r25, r10
    stfsx f0, r22, r20
    stfsx f0, r25, r20
    bl fn_80201418
    lbz r6, 0x13(r21)
    addi r8, r21, 0xa
    lbz r7, 0x12(r21)
    neg r0, r31
    add r4, r8, r6
    lfs f4, 0x54(r1)
    or r3, r0, r31
    lbz r0, 0x2(r4)
    add r5, r8, r7
    lfs f5, 0x50(r1)
    lbz r9, 0x2(r5)
    srawi r5, r3, 31
    lbzx r3, r8, r7
    slwi r10, r7, 2
    stw r0, 0x94(r1)
    slwi r11, r6, 2
    subf r3, r9, r3
    lfs f2, 0x0(r28)
    lfs f0, 0x4c(r27)
    xoris r3, r3, 0x8000
    lfd f1, 0x90(r1)
    and r7, r26, r5
    lfs f8, 0x4(r29)
    fadds f0, f2, f0
    stw r3, 0x94(r1)
    addi r20, r1, 0x28
    lbz r3, 0x6(r4)
    mr r6, r23
    fsubs f10, f0, f8
    lfs f9, 0x4(r28)
    subf r3, r0, r3
    xoris r12, r3, 0x8000
    lfd f0, 0x90(r1)
    lfd f3, lbl_804A1EF8
    stfs f5, 0x28(r1)
    mr r8, r30
    lfd f6, lbl_804A1EF0
    fsubs f2, f0, f3
    stfs f4, 0x2c(r1)
    addi r3, r1, 0x48
    fsubs f4, f1, f6
    lfs f7, 0xc(r29)
    stw r12, 0x94(r1)
    lfsx f1, r20, r10
    addi r4, r1, 0x40
    lfd f0, 0x90(r1)
    fmuls f2, f2, f1
    stw r9, 0x8c(r1)
    fsubs f1, f0, f3
    lfsx f0, r20, r11
    lfd f5, 0x88(r1)
    li r5, 0x1
    stfs f10, 0x48(r1)
    fdivs f2, f8, f2
    stw r9, 0x8c(r1)
    lfd f3, 0x88(r1)
    stfs f9, 0x4c(r1)
    stfs f8, 0x40(r1)
    lfs f8, 0x50(r27)
    fsubs f7, f8, f7
    stw r0, 0x8c(r1)
    fmuls f0, f1, f0
    fsubs f5, f5, f6
    lfd f1, 0x88(r1)
    fsubs f3, f3, f6
    fdivs f0, f7, f0
    stfs f10, 0x30(r1)
    stfsx f5, r25, r10
    stfsx f5, r24, r10
    stfsx f4, r23, r11
    stfsx f4, r24, r11
    fadds f2, f3, f2
    stfs f9, 0x34(r1)
    fsubs f1, f1, f6
    stfs f7, 0x44(r1)
    stfsx f2, r23, r10
    fadds f0, f1, f0
    stfsx f2, r22, r10
    stfsx f0, r25, r11
    stfsx f0, r22, r11
    bl fn_80201418
    lbz r6, 0x31(r21)
    addi r4, r21, 0x28
    lfs f1, 0x4(r28)
    neg r0, r31
    lfs f0, 0x50(r27)
    add r7, r4, r6
    lbz r8, 0x30(r21)
    or r3, r0, r31
    lbz r0, 0x6(r7)
    fsubs f0, f1, f0
    add r4, r4, r8
    lfs f8, 0xc(r29)
    srawi r5, r3, 31
    stw r0, 0x94(r1)
    fadds f9, f8, f0
    lbz r9, 0x6(r4)
    slwi r10, r8, 2
    lbz r3, 0x4(r4)
    slwi r11, r6, 2
    lfs f0, 0x0(r28)
    subf r4, r9, r3
    lbz r3, 0x2(r7)
    lfs f5, 0x0(r29)
    xoris r4, r4, 0x8000
    lfd f2, 0x90(r1)
    subf r3, r0, r3
    fadds f10, f0, f5
    lfs f11, 0x54(r1)
    stw r4, 0x94(r1)
    xoris r12, r3, 0x8000
    lfs f12, 0x50(r1)
    addi r20, r1, 0x18
    lfd f0, 0x90(r1)
    and r7, r26, r5
    lfd f1, lbl_804A1EF8
    mr r6, r23
    lfd f6, lbl_804A1EF0
    mr r8, r30
    stfs f10, 0x48(r1)
    fsubs f3, f0, f1
    fsubs f4, f2, f6
    addi r3, r1, 0x48
    stfs f9, 0x4c(r1)
    addi r4, r1, 0x40
    li r5, 0x1
    lfs f0, 0x4c(r27)
    stw r12, 0x94(r1)
    fsubs f7, f0, f5
    lfd f0, 0x90(r1)
    stfs f12, 0x18(r1)
    fsubs f1, f0, f1
    stfs f11, 0x1c(r1)
    stw r9, 0x8c(r1)
    lfsx f2, r20, r10
    lfd f0, 0x88(r1)
    fmuls f2, f3, f2
    stfs f10, 0x20(r1)
    fsubs f5, f0, f6
    lfsx f0, r20, r11
    stw r9, 0x8c(r1)
    fmuls f0, f1, f0
    lfd f3, 0x88(r1)
    fdivs f2, f7, f2
    stfsx f5, r24, r10
    stfsx f5, r25, r10
    stw r0, 0x8c(r1)
    stfsx f4, r22, r11
    lfd f1, 0x88(r1)
    fsubs f3, f3, f6
    stfsx f4, r25, r11
    fdivs f0, f8, f0
    stfs f9, 0x24(r1)
    stfs f7, 0x40(r1)
    stfs f8, 0x44(r1)
    fadds f2, f3, f2
    fsubs f1, f1, f6
    stfsx f2, r22, r10
    fadds f0, f1, f0
    stfsx f2, r23, r10
    stfsx f0, r24, r11
    stfsx f0, r23, r11
    bl fn_80201418
    lbz r6, 0x1d(r21)
    addi r7, r21, 0x14
    lfs f9, 0x0(r28)
    neg r0, r31
    add r3, r7, r6
    lbz r4, 0x1c(r21)
    lbz r11, 0x4(r3)
    or r0, r0, r31
    add r3, r7, r4
    lfs f4, 0x54(r1)
    lbz r12, 0x4(r3)
    srawi r5, r0, 31
    stw r11, 0x94(r1)
    slwi r0, r4, 2
    lbz r3, 0x6(r3)
    addi r10, r1, 0x8
    lfd f2, 0x90(r1)
    slwi r9, r6, 2
    subf r4, r12, r3
    lfs f1, 0x4(r28)
    lbzx r3, r7, r6
    xoris r4, r4, 0x8000
    stw r4, 0x94(r1)
    and r7, r26, r5
    lfs f7, 0x8(r29)
    subf r3, r11, r3
    lfs f6, 0x50(r1)
    xoris r3, r3, 0x8000
    fsubs f8, f1, f7
    lfd f0, 0x90(r1)
    lfd f1, lbl_804A1EF8
    mr r6, r23
    stfs f6, 0x8(r1)
    mr r8, r30
    stw r3, 0x94(r1)
    fsubs f3, f0, f1
    lfs f5, 0x0(r29)
    addi r3, r1, 0x48
    lfd f0, 0x90(r1)
    addi r4, r1, 0x40
    lfd f6, lbl_804A1EF0
    stfs f4, 0xc(r1)
    fsubs f1, f0, f1
    fsubs f4, f2, f6
    li r5, 0x1
    lfsx f2, r10, r0
    lfsx f0, r10, r9
    fmuls f2, f3, f2
    stw r12, 0x8c(r1)
    fmuls f0, f1, f0
    lfd f3, 0x88(r1)
    stfs f9, 0x48(r1)
    fdivs f2, f5, f2
    stw r12, 0x8c(r1)
    lfd f1, 0x88(r1)
    stfs f8, 0x4c(r1)
    stfs f5, 0x40(r1)
    lfs f5, 0x50(r27)
    fsubs f7, f5, f7
    stw r11, 0x8c(r1)
    fsubs f5, f3, f6
    fsubs f3, f1, f6
    lfd f1, 0x88(r1)
    fdivs f0, f7, f0
    stfsx f5, r23, r0
    stfsx f5, r22, r0
    stfsx f4, r25, r9
    stfsx f4, r22, r9
    stfs f9, 0x10(r1)
    fadds f2, f3, f2
    stfs f8, 0x14(r1)
    fsubs f1, f1, f6
    stfs f7, 0x44(r1)
    stfsx f2, r25, r0
    fadds f0, f1, f0
    stfsx f2, r24, r0
    stfsx f0, r23, r9
    stfsx f0, r24, r9
    bl fn_80201418
lbl_801FA714:
    opword 0xE3E100D8
    addi r11, r1, 0xd0
    lfd f31, 0xd0(r1)
    bl _restgpr_20
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// asm_to_cpp: fn_801FBE3C
extern "C" asm void fn_801FBE3C() {
    nofralloc
    la r0, lbl_8049D9D0
    stw r0, lbl_8049D9F0
    blr
}
