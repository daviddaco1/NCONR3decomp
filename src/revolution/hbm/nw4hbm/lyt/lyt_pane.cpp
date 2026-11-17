#include "hbm_pane_compat.h"
extern "C" unsigned char lbl_80341E78[];
#include <nw4hbm/lyt.h>
#include <nw4hbm/math.h>
#include <nw4hbm/ut.h>

#include <revolution/GX.h>
#include <revolution/MTX.h>

#include <cstring>

/******************************************************************************
 *
 * Utility functions
 *
 ******************************************************************************/
namespace {

using namespace nw4hbm;
using namespace nw4hbm::lyt;

void ReverseYAxis(math::MTX34* pMtx) {
    pMtx->m[0][1] = -pMtx->m[0][1];
    pMtx->m[1][1] = -pMtx->m[1][1];
    pMtx->m[2][1] = -pMtx->m[2][1];
}

} // namespace

namespace nw4hbm {
namespace lyt {

NW4R_UT_RTTI_DEF_BASE(Pane);

namespace detail {

/******************************************************************************
 *
 * PaneBase
 *
 ******************************************************************************/
PaneBase::PaneBase() {}

PaneBase::~PaneBase() {}

} // namespace detail

/******************************************************************************
 *
 * Pane
 *
 ******************************************************************************/
Pane::Pane() {
    Init();

    mBasePosition = HORIZONTALPOSITION_MAX + 1;

    std::memset(mName, 0, sizeof(mName));
    std::memset(mUserData, 0, sizeof(mUserData));

    mTranslate = math::VEC3(0,0,0);
    mRotate = math::VEC3(0,0,0);
    mScale = math::VEC2(1,1);
    mSize = Size(0,0);

    mAlpha = -1;
    mGlbAlpha = -1;
    mFlag = false;
    SetVisible(true);
}

Pane::Pane(const res::Pane* pRes) {
    Init();

    mBasePosition = pRes->basePosition;

    SetName(pRes->name);
    SetUserData(pRes->userData);

    mTranslate = pRes->translate;
    mRotate = pRes->rotate;
    mScale = pRes->scale;
    mSize = pRes->size;

    mAlpha = pRes->alpha;
    mGlbAlpha = mAlpha;
    mFlag = pRes->flag;
}

void Pane::Init() {
    mpParent = NULL;
    mpMaterial = NULL;
    mbUserAllocated = false;

}

void Pane::SetName(const char* pName) {
    std::strncpy(mName, pName, NW4R_LYT_RES_NAME_LEN);
    // RNEPDA guarda un campo fijo de 16 bytes, sin byte adicional.
}

void Pane::SetUserData(const char* pUserData) {
    std::strncpy(mUserData, pUserData, NW4R_LYT_PANE_USERDATA_LEN);
    // RNEPDA guarda un campo fijo de 8 bytes, sin byte adicional.
}

void Pane::AppendChild(Pane* pChild) {
    InsertChild(mChildList.GetEndIter(), pChild);
}

void Pane::InsertChild(PaneList::Iterator next, Pane* pChild) {
    mChildList.Insert(next, pChild);
    pChild->mpParent = this;
}

void Pane::PrependChild(Pane* pChild) {
    mChildList.Insert( mChildList.GetBeginIter(), pChild);
    pChild->mpParent = this;
}

void Pane::RemoveChild(Pane* pChild) {
    mChildList.Erase(pChild);
    pChild->mpParent = NULL;
}

ut::Rect Pane::GetPaneRect(const DrawInfo& rInfo) const {
    ut::Rect rect;
    math::VEC2 base = GetVtxPos();

    rect.left = base.x;
    rect.top = base.y;
    rect.right = base.x + mSize.width;
    rect.bottom = base.y + mSize.height;

    if (rInfo.IsYAxisUp()) {
        rect.top = -rect.top;
        rect.bottom = -rect.bottom;
    }

    return rect;
}

ut::Color Pane::GetVtxColor(u32 idx) const {
#pragma unused(idx)

    return ut::Color::WHITE;
}

void Pane::SetVtxColor(u32 idx, ut::Color color) {
#pragma unused(idx)
#pragma unused(color)
}

u8 Pane::GetVtxColorElement(u32 idx) const {
#pragma unused(idx)

    return 0xFF;
}

void Pane::SetVtxColorElement(u32 idx, u8 value) {
#pragma unused(idx)
#pragma unused(value)
}

void Pane::CalculateMtxChild(const DrawInfo& rInfo) {
    NW4R_UT_LINKLIST_FOREACH (it, mChildList, { it->CalculateMtx(rInfo); })
}

void Pane::Draw(const DrawInfo& rInfo) {
    if (!IsVisible()) {
        return;
    }

    DrawSelf(rInfo);
    NW4R_UT_LINKLIST_FOREACH (it, mChildList, { it->Draw(rInfo); })
}

void Pane::DrawSelf(const DrawInfo& rInfo) {
#pragma unused(rInfo)
    // Debug draw stripped out
}

void Pane::Animate(u32 option) {
    AnimateSelf(option);

    if (IsVisible() || !(option & ANIMOPTION_SKIP_INVISIBLE)) {
        NW4R_UT_LINKLIST_FOREACH (it, mChildList, { it->Animate(option); })
    }
}

void Pane::UnbindAnimation(AnimTransform* pAnimTrans, bool recursive) {
    UnbindAnimationSelf(pAnimTrans);

    if (recursive) {
        NW4R_UT_LINKLIST_FOREACH (it, mChildList,
            { it->UnbindAnimation(pAnimTrans, recursive); })
    }
}

void Pane::UnbindAllAnimation(bool recursive) {
    UnbindAnimation(NULL, recursive);
}

void Pane::AddAnimationLink(AnimationLink* pAnimLink) {
    mAnimList.PushBack(pAnimLink);
}

math::VEC2 Pane::GetVtxPos() const {
    math::VEC2 base(0.0f, 0.0f);

    switch (mBasePosition % HORIZONTALPOSITION_MAX) {
    default:
    case HORIZONTALPOSITION_LEFT: {
        base.x = 0.0f;
        break;
    }

    case HORIZONTALPOSITION_CENTER: {
        base.x = -mSize.width * *(const f32*)lbl_80341E78;
        break;
    }

    case HORIZONTALPOSITION_RIGHT: {
        base.x = -mSize.width;
        break;
    }
    }

    switch (mBasePosition / HORIZONTALPOSITION_MAX) {
    default:
    case VERTICALPOSITION_TOP: {
        base.y = 0.0f;
        break;
    }

    case HORIZONTALPOSITION_CENTER: {
        base.y = mSize.height * *(const f32*)lbl_80341E78;
        break;
    }

    case HORIZONTALPOSITION_RIGHT: {
        base.y = mSize.height;
        break;
    }
    }

    return base;
}

u8 Pane::GetMaterialNum() const {
    return mpMaterial != NULL ? 1 : 0;
}

Material* Pane::GetMaterial() const {
    return mpMaterial;
}

Material* Pane::GetMaterial(u32 index) const {
    if(index == 0) return GetMaterial();
    return NULL;
}

} // namespace lyt
} // namespace nw4hbm

class HbmPaneTransformDispatch { public:
 virtual void reserved0();virtual void reserved1();virtual void bind(void* pane,bool recursive);virtual void reserved3();virtual void animate(u32 index,void* pane);
};
struct HbmPaneLinkView { HbmPaneLinkView* next;HbmPaneLinkView* prev;HbmPaneTransformDispatch* transform;u16 index;bool disabled;u8 padding; };
class HbmPaneMaterialDispatch { public:
 virtual void reserved0();virtual void reserved1();virtual void reserved2();virtual void unbind(void*);virtual void reserved4();virtual void animate();virtual HbmPaneLinkView* find(void*);virtual void enable(void*,bool);
};
struct HbmPaneAnimView { u8 opaque[0x1C];u32 count;HbmPaneLinkView* next;HbmPaneLinkView* prev;HbmPaneMaterialDispatch* material;u8 rest[0xA3];u8 flags; };
class HbmPaneChildEnableDispatch { public:
virtual void reserved0();
virtual void reserved1();
virtual void reserved2();
virtual void reserved3();
virtual void reserved4();
virtual void enable(void*,bool,bool);
};

extern "C" u8 lbl_80341E60[];
extern "C" u8 lbl_80341E78[];
extern "C" void AnimateSelf__Q36nw4hbm3lyt4PaneFUl(HbmPaneAnimView* p,u32 option);
extern "C" void BindAnimation__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformb(HbmPaneAnimView* p,HbmPaneTransformDispatch* transform,bool recursive);
extern "C" void CalculateMtx__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo();
extern "C" bool EqualsPaneName__Q36nw4hbm3lyt6detailFPCcPCc(const char*,const char*);
extern "C" HbmPaneLinkView* FindAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform(HbmPaneAnimView* p,void* transform);
extern "C" void FindMaterialByName__Q36nw4hbm3lyt4PaneFPCcb();
extern "C" void FindPaneByName__Q36nw4hbm3lyt4PaneFPCcb();
extern "C" void GetColorElement__Q36nw4hbm3lyt4PaneCFUl();
extern "C" void LoadMtx__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo();
extern "C" void SetAnimationEnable__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformbb();
extern "C" void SetColorElement__Q36nw4hbm3lyt4PaneFUlUc();
extern "C" void UnbindAnimationSelf__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform();
extern "C" void __dt__Q36nw4hbm3lyt4PaneFv();
extern "C" HbmPaneLinkView* fn_802F2A34(void*,void*);
extern "C" nw4hbm::ut::Rect fn_802F84E0(const nw4hbm::lyt::Pane* p,const nw4hbm::lyt::DrawInfo& info);
extern "C" nw4hbm::math::VEC2 fn_802F9090(const void*);
extern "C" void fn_802FF2A0(void*,nw4hbm::lyt::AnimationLinkList::Iterator);

extern "C" void AnimateSelf__Q36nw4hbm3lyt4PaneFUl(HbmPaneAnimView* p,u32 option) {
 HbmPaneLinkView* it=p->next;
 HbmPaneLinkView* end=(HbmPaneLinkView*)&p->next;
 for (;it!=end;it=it->next) if(!it->disabled)it->transform->animate(it->index,p);
 if((p->flags&1)||!(option&1))if(p->material!=NULL)p->material->animate();
}

extern "C" void BindAnimation__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransformb(HbmPaneAnimView* p,HbmPaneTransformDispatch* transform,bool recursive) {
transform->bind(p,recursive);
}

void nw4hbm::lyt::Pane::CalculateMtx(const DrawInfo& rInfo) {

    if (!IsVisible() && !rInfo.IsInvisiblePaneCalculateMtx()) {
        return;
    }

    math::MTX34 mtx1, mtx2;
    math::MTX34 rotateMtx;

    math::VEC2 scale = mScale;
    if (rInfo.IsLocationAdjust() && IsLocationAdjust()) {
        scale.x *= rInfo.GetLocationAdjustScale().x;
        scale.y *= rInfo.GetLocationAdjustScale().y;
    }

    PSMTXScale(mtx2, scale.x, scale.y, 1.0f);

    PSMTXRotRad(rotateMtx, 'x', NW4R_MATH_DEG_TO_RAD(mRotate.x));
    PSMTXConcat(rotateMtx, mtx2, mtx1);

    PSMTXRotRad(rotateMtx, 'y', NW4R_MATH_DEG_TO_RAD(mRotate.y));
    PSMTXConcat(rotateMtx, mtx1, mtx2);

    PSMTXRotRad(rotateMtx, 'z', NW4R_MATH_DEG_TO_RAD(mRotate.z));
    PSMTXConcat(rotateMtx, mtx2, mtx1);

    PSMTXTransApply(mtx1, mMtx, mTranslate.x, mTranslate.y, mTranslate.z);

    if (mpParent != NULL) {
        math::MTX34Mult(&mGlbMtx, &mpParent->mGlbMtx, &mMtx);
    } else if (rInfo.IsMultipleViewMtxOnDraw()) {
        mGlbMtx = mMtx;
    } else {
        math::MTX34Mult(&mGlbMtx, &rInfo.GetViewMtx(), &mMtx);
    }

    if (rInfo.IsInfluencedAlpha() && mpParent != NULL) {
        mGlbAlpha = static_cast<u8>(mAlpha * rInfo.GetGlobalAlpha());
    } else {
        mGlbAlpha = mAlpha;
    }

    f32 glbAlpha = rInfo.GetGlobalAlpha();
    bool influenced = rInfo.IsInfluencedAlpha();
    bool modifyInfo = IsInfluencedAlpha() && mAlpha != 255;

    if (modifyInfo) {
        DrawInfo& rMtInfo = const_cast<DrawInfo&>(rInfo);
        rMtInfo.SetGlobalAlpha(glbAlpha * mAlpha * ((1.0f/255.0f)));
        rMtInfo.SetInfluencedAlpha(true);
    }

    for(PaneList::Iterator it=mChildList.GetBeginIter();it!=mChildList.GetEndIter();++it)it->CalculateMtx(rInfo);

    if (modifyInfo) {
        DrawInfo& rMtInfo = const_cast<DrawInfo&>(rInfo);
        rMtInfo.SetGlobalAlpha(glbAlpha);
        rMtInfo.SetInfluencedAlpha(influenced);
    }
}

extern "C" HbmPaneLinkView* FindAnimationLink__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt13AnimTransform(HbmPaneAnimView* p,void* transform) {
 HbmPaneLinkView* link=fn_802F2A34((u8*)p+0x1C,transform);
 if(link!=NULL)return link;
 if(p->material!=NULL) {
  link=p->material->find(transform);
  if(link!=NULL)return link;
 }
 return NULL;
}

nw4hbm::lyt::Material* nw4hbm::lyt::Pane::FindMaterialByName(const char* name,bool recursive) {
 if(mpMaterial!=NULL && detail::EqualsMaterialName((const char*)mpMaterial+4,name)) return mpMaterial;
 if(recursive) {
  for(PaneList::Iterator it=mChildList.GetBeginIter();it!=mChildList.GetEndIter();++it) {
   Material* result=it->FindMaterialByName(name,true);
   if(result!=NULL)return result;
  }
 }
 return NULL;
}

nw4hbm::lyt::Pane* nw4hbm::lyt::Pane::FindPaneByName(const char* name,bool recursive) {
 if(EqualsPaneName__Q36nw4hbm3lyt6detailFPCcPCc((const char*)this+0xB4,name)) return this;
 if(recursive) {
  for(PaneList::Iterator it=mChildList.GetBeginIter();it!=mChildList.GetEndIter();++it) {
   Pane* result=it->FindPaneByName(name,true);
   if(result!=NULL)return result;
  }
 }
 return NULL;
}

inline bool HbmPaneYAxisUp(const nw4hbm::lyt::DrawInfo& info) { return info.GetViewRect().bottom-info.GetViewRect().top < *(const f32*)lbl_80341E60; }
void nw4hbm::lyt::Pane::LoadMtx(const DrawInfo& rInfo) {

    math::MTX34 mtx;
    math::MTX34* pMtx = NULL;

    if (rInfo.IsMultipleViewMtxOnDraw()) {
        math::MTX34Mult(&mtx, &rInfo.GetViewMtx(), &mGlbMtx);

        if (HbmPaneYAxisUp(rInfo)) {
            ReverseYAxis(&mtx);
        }

        pMtx = &mtx;
    } else if (HbmPaneYAxisUp(rInfo)) {
        math::MTX34Copy(&mtx, &mGlbMtx);
        pMtx = &mtx;

        ReverseYAxis(&mtx);
    } else {
        pMtx = &mGlbMtx;
    }

    GXLoadPosMtxImm(*pMtx, GX_PNMTX0);
    GXSetCurrentMtx(GX_PNMTX0);
}

void nw4hbm::lyt::Pane::SetAnimationEnable(AnimTransform* transform,bool enabled,bool recursive) {
 HbmPaneLinkView* link=fn_802F2A34(&mAnimList,transform);
 if(link!=NULL)link->disabled=!enabled;
 if(mpMaterial!=NULL)((HbmPaneMaterialDispatch*)mpMaterial)->enable(transform,enabled);
 if(recursive) {
  for(PaneList::Iterator it=mChildList.GetBeginIter();it!=mChildList.GetEndIter();++it)it->SetAnimationEnable(transform,enabled,recursive);
 }
}

void nw4hbm::lyt::Pane::UnbindAnimationSelf(AnimTransform* transform) {
 if(mpMaterial!=NULL)mpMaterial->UnbindAnimation(transform);
 for(AnimationLinkList::Iterator it=mAnimList.GetBeginIter();it!=mAnimList.GetEndIter();) {
  AnimationLinkList::Iterator current=it++;
  if(transform!=NULL && current->GetAnimTransform()!=transform)continue;
  fn_802FF2A0(&mAnimList,current);
  HbmPaneLinkView* link=(HbmPaneLinkView*)&*current;
  link->transform=NULL;link->index=0;
 }
}

extern "C" nw4hbm::ut::Rect fn_802F84E0(const nw4hbm::lyt::Pane* p,const nw4hbm::lyt::DrawInfo& info) {
 nw4hbm::ut::Rect rect;
 nw4hbm::math::VEC2 base=fn_802F9090(p);
 rect.left=base.x;rect.top=base.y;
 rect.right=base.x+p->GetSize().width;
 rect.bottom=base.y+p->GetSize().height;
 if(info.IsYAxisUp()){rect.top=-rect.top;rect.bottom=-rect.bottom;}
 return rect;
}
