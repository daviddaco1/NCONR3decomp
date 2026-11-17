#include <nw4hbm/lyt.h>
#include <nw4hbm/ut.h>

/******************************************************************************
 *
 * Utility functions
 *
 ******************************************************************************/
extern "C" u8 lbl_80462438[];
extern "C" void* fn_8030CAF0(void*,u32);
template<class T> inline T* NconHbmNewObj(){void* p=fn_8030CAF0(*reinterpret_cast<void**>(lbl_80462438),sizeof(T));if(p)return new(p) T();return NULL;}
template<class T,class A,class B> inline T* NconHbmNewObj(A a,B b){void* p=fn_8030CAF0(*reinterpret_cast<void**>(lbl_80462438),sizeof(T));if(p)return new(p) T(a,b);return NULL;}
namespace {

using namespace nw4hbm;
using namespace nw4hbm::lyt;

void SetTagProcessorImpl(Pane* pPane, ut::WideTagProcessor* pProcessor) {
    TextBox* pTextBox = ut::DynamicCast<TextBox*>(pPane);
    if (pTextBox != NULL) {
        pTextBox->SetTagProcessor(pProcessor);
    }

    NW4R_UT_LINKLIST_FOREACH (it, pPane->GetChildList(),
                              { SetTagProcessorImpl(&*it, pProcessor); })
}

} // namespace

namespace nw4hbm {
namespace lyt {

MEMAllocator* Layout::mspAllocator = NULL;

/******************************************************************************
 *
 * Layout
 *
 ******************************************************************************/

Layout::Layout()
    : mpRootPane(NULL),
      mpGroupContainer(NULL),
      mLayoutSize(0.0f, 0.0f),
      mOriginType(ORIGINTYPE_TOPLEFT) {}

bool Layout::Build(const void* pLytBinary, ResourceAccessor* pAccessor) {
    const res::BinaryFileHeader* const pHeader =
        static_cast<const res::BinaryFileHeader*>(pLytBinary);

    if (!detail::TestFileHeader(*pHeader, SIGNATURE)) {
        return false;
    }

    ResBlockSet blockSet = {
        NULL,     // pTextureList
        NULL,     // pFontList
        NULL,     // pMaterialList
        pAccessor // pResAccessor
    };

    Pane* pParentPane = NULL;
    Pane* pPrevPane = NULL;

    bool readRootGroup = false;
    int groupDepth = 0;

    const void* pBlockData =
        static_cast<const u8*>(pLytBinary) + pHeader->headerSize;

    for (int i = 0; i < pHeader->dataBlocks; i++) {
        const res::DataBlockHeader* pBlockHeader =
            static_cast<const res::DataBlockHeader*>(pBlockData);

        switch (detail::GetSignatureInt(pBlockHeader->kind)) {
        case res::Layout::SIGNATURE: {
            const res::Layout* pRes =
                static_cast<const res::Layout*>(pBlockData);

            mOriginType =
                pRes->originType != 0 ? ORIGINTYPE_CENTER : ORIGINTYPE_TOPLEFT;

            mLayoutSize = pRes->layoutSize;
            break;
        }

        case SIGNATURE_TEXTURELIST: {
            blockSet.pTextureList =
                static_cast<const res::TextureList*>(pBlockData);
            break;
        }

        case SIGNATURE_FONTLIST: {
            blockSet.pFontList = static_cast<const res::FontList*>(pBlockData);
            break;
        }

        case SIGNATURE_MATERIALLIST: {
            blockSet.pMaterialList =
                static_cast<const res::MaterialList*>(pBlockData);
            break;
        }

        case res::Pane::SIGNATURE:
        case res::Picture::SIGNATURE:
        case res::TextBox::SIGNATURE:
        case res::Window::SIGNATURE:
        case res::Bounding::SIGNATURE: {
            Pane* pPane =
                BuildPaneObj(detail::GetSignatureInt(pBlockHeader->kind),
                             pBlockData, blockSet);

            if (pPane != NULL) {
                if (mpRootPane == NULL) {
                    mpRootPane = pPane;
                }

                if (pParentPane != NULL) {
                    pParentPane->AppendChild(pPane);
                }

                pPrevPane = pPane;
            }

            break;
        }

        case SIGNATURE_PANESTART: {
            pParentPane = pPrevPane;
            break;
        }

        case SIGNATURE_PANEEND: {
            pPrevPane = pParentPane;
            pParentPane = pPrevPane->GetParent();
            break;
        }

        case res::Group::SIGNATURE: {
            if (!readRootGroup) {
                readRootGroup = true;
                mpGroupContainer = NconHbmNewObj<GroupContainer>();
                break;
            }

            if (mpGroupContainer != NULL && groupDepth == 1) {
                Group* pGroup = NconHbmNewObj<Group>(
                    reinterpret_cast<const res::Group*>(pBlockHeader),
                    mpRootPane);

                if (pGroup != NULL) {
                    mpGroupContainer->AppendGroup(pGroup);
                }
            }

            break;
        }

        case SIGNATURE_GROUPSTART: {
            groupDepth++;
            break;
        }

        case SIGNATURE_GROUPEND: {
            groupDepth--;
            break;
        }
        }

        pBlockData = static_cast<const u8*>(pBlockData) + pBlockHeader->size;
    }

    return true;
}

AnimTransform* Layout::CreateAnimTransform(const void* pAnmBinary,
                                           ResourceAccessor* pAccessor) {

    const res::BinaryFileHeader* const pHeader =
        static_cast<const res::BinaryFileHeader*>(pAnmBinary);

    if (!detail::TestFileHeader(*pHeader)) {
        return NULL;
    }

    const res::AnimationBlock* pAnimBlock = NULL;

    const res::DataBlockHeader* pBlockHeader =
        detail::ConvertOffsToPtr<res::DataBlockHeader>(pHeader,
                                                       pHeader->headerSize);

    AnimTransform* pResult = NULL;

    for (int i = 0; i < pHeader->dataBlocks; i++) {
        switch (detail::GetSignatureInt(pBlockHeader->kind)) {
        case SIGNATURE_ANIMATIONINFO: {

            switch (detail::GetSignatureInt(pHeader->signature)) {
            case SIGNATURE_ANIMATION:
            case res::AnimationInfo::SIGNATURE_ANMPANESRT:
            case res::AnimationInfo::SIGNATURE_ANMPANEVIS:
            case res::AnimationInfo::SIGNATURE_ANMVTXCLR:
            case res::AnimationInfo::SIGNATURE_ANMMATCLR:
            case res::AnimationInfo::SIGNATURE_ANMTEXSRT:
            case res::AnimationInfo::SIGNATURE_ANMTEXPAT: {
                AnimTransformBasic* pAnimTrans =
                    Layout::NewObj<AnimTransformBasic>();

                if (pAnimTrans != NULL) {
                    pAnimBlock = reinterpret_cast<const res::AnimationBlock*>(
                        pBlockHeader);

                    pAnimTrans->SetResource(pAnimBlock, pAccessor);
                    pResult = pAnimTrans;
                }

                break;
            }
            }

            if (pResult != NULL) {
                mAnimTransList.PushBack(pResult);
            }

            break;
        }
        }

        pBlockHeader = detail::ConvertOffsToPtr<res::DataBlockHeader>(
            pBlockHeader, pBlockHeader->size);
    }

    return pResult;
}

void Layout::BindAnimation(AnimTransform* pAnimTrans) {
    if (mpRootPane == NULL) {
        return;
    }

    mpRootPane->BindAnimation(pAnimTrans, true);
}

void Layout::UnbindAnimation(AnimTransform* pAnimTrans) {
    if (mpRootPane == NULL) {
        return;
    }

    mpRootPane->UnbindAnimation(pAnimTrans, true);
}

void Layout::SetAnimationEnable(AnimTransform* pAnimTrans, bool enable) {
    if (mpRootPane == NULL) {
        return;
    }

    mpRootPane->SetAnimationEnable(pAnimTrans, enable, true);
}

void Layout::CalculateMtx(const DrawInfo& rInfo) {
    if (mpRootPane == NULL) {
        return;
    }

    mpRootPane->CalculateMtx(rInfo);
}

void Layout::Draw(const DrawInfo& rInfo) {
    if (mpRootPane == NULL) {
        return;
    }

    mpRootPane->Draw(rInfo);
}

void Layout::Animate(u32 option) {
    if (mpRootPane == NULL) {
        return;
    }

    mpRootPane->Animate(option);
}

void Layout::SetTagProcessor(ut::WideTagProcessor* pProcessor) {
    SetTagProcessorImpl(mpRootPane, pProcessor);
}

Pane* Layout::BuildPaneObj(s32 kind, const void* pBinary,
                           const ResBlockSet& rBlockSet) {

    switch (kind) {
    case res::Pane::SIGNATURE: {
        const res::Pane* pRes = static_cast<const res::Pane*>(pBinary);
        return Layout::NewObj<Pane>(pRes);
    }

    case res::Picture::SIGNATURE: {
        const res::Picture* pRes = static_cast<const res::Picture*>(pBinary);
        return Layout::NewObj<Picture>(pRes, rBlockSet);
    }

    case res::TextBox::SIGNATURE: {
        const res::TextBox* pRes = static_cast<const res::TextBox*>(pBinary);
        return Layout::NewObj<TextBox>(pRes, rBlockSet);
    }

    case res::Window::SIGNATURE: {
        const res::Window* pRes = static_cast<const res::Window*>(pBinary);
        return Layout::NewObj<Window>(pRes, rBlockSet);
    }

    case res::Bounding::SIGNATURE: {
        const res::Bounding* pRes = static_cast<const res::Bounding*>(pBinary);
        return Layout::NewObj<Bounding>(pRes, rBlockSet);
    }

    default: {
        return NULL;
    }
    }
}

} // namespace lyt
} // namespace nw4hbm

extern "C" u8 lbl_80462438[];
extern "C" void GetLayoutRect__Q36nw4hbm3lyt6LayoutCFv();
extern "C" void UnbindAllAnimation__Q36nw4hbm3lyt6LayoutFv();
extern "C" void __dt__Q36nw4hbm3lyt6LayoutFv();

