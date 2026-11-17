#include <nw4r/lyt.h>
#include <nw4r/ut.h>
inline bool NconCheckLayoutVersion(u32 major,u32 minor){bool valid=false;if(major==0 && minor>=8 && minor<=10)valid=true;return valid;}

/******************************************************************************
 *
 * Utility functions
 *
 ******************************************************************************/

// Vistas de los prefijos RNEPDA: AnimResource de cuatro punteros y slots de Layout.
struct LayoutResourceView;
extern "C" void Set__Q34nw4r3lyt12AnimResourceFPCv(LayoutResourceView*,const void*);
struct LayoutResourceView {
    const void* file;
    const nw4r::lyt::res::AnimationBlock* block;
    const void* tag;
    const void* share;
    explicit LayoutResourceView(const void* data) { Set__Q34nw4r3lyt12AnimResourceFPCv(this,data); }
};
struct LayoutListView { u32 size; void* next; void* prev; };
class LayoutCreateView { public:
    virtual void reservedDestructor();
    virtual void reservedBuild();
    virtual nw4r::lyt::AnimTransform* create();
    virtual nw4r::lyt::AnimTransform* create(const void*,nw4r::lyt::ResourceAccessor*);
    virtual nw4r::lyt::AnimTransform* create(const LayoutResourceView&,nw4r::lyt::ResourceAccessor*);
    LayoutListView animations;
};
extern "C" void* lbl_8049D9D8;
extern "C" void* fn_8030CAF0(void*,u32);
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode(void*,void**,void*);

template<class T> inline T* NconLayoutNewObj(){void* p=fn_8030CAF0(lbl_8049D9D8,sizeof(T));if(p)return new(p) T();return NULL;}
template<class T,class A,class B> inline T* NconLayoutNewObj(A a,B b){void* p=fn_8030CAF0(lbl_8049D9D8,sizeof(T));if(p)return new(p) T(a,b);return NULL;}
namespace {

using namespace nw4r;
using namespace nw4r::lyt;

void SetTagProcessorImpl(Pane* pPane, ut::WideTagProcessor* pProcessor) {
    TextBox* pTextBox = ut::DynamicCast<TextBox*>(pPane);
    if (pTextBox != NULL) {
        pTextBox->SetTagProcessor(pProcessor);
    }

    NW4R_UT_LINKLIST_FOREACH (it, pPane->GetChildList(),
                              { SetTagProcessorImpl(&*it, pProcessor); })
}

} // namespace

namespace nw4r {
namespace lyt {

MEMAllocator* Layout::mspAllocator = NULL;

/******************************************************************************
 *
 * Layout
 *
 ******************************************************************************/

bool Layout::Build(const void* pLytBinary, ResourceAccessor* pAccessor) {
    const res::BinaryFileHeader* const pHeader =
        static_cast<const res::BinaryFileHeader*>(pLytBinary);

    if (!detail::TestFileHeader(*pHeader, SIGNATURE)) {
        return false;
    }

    if(!NconCheckLayoutVersion((pHeader->version >> 8)&255,pHeader->version & 255))return false;
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

        case 0x75736431: { *reinterpret_cast<const void**>(reinterpret_cast<u8*>(pPrevPane)+0xb4)=pBlockData; break; }
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
                mpGroupContainer = NconLayoutNewObj<GroupContainer>();
                break;
            }

            if (mpGroupContainer != NULL && groupDepth == 1) {
                Group* pGroup = NconLayoutNewObj<Group>(
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

void Layout::BindAnimation(AnimTransform* pAnimTrans) {
    if (mpRootPane == NULL) {
        return;
    }

    mpRootPane->BindAnimation(pAnimTrans, true, false);
}

void Layout::UnbindAnimation(AnimTransform* pAnimTrans) {
    if (mpRootPane == NULL) {
        return;
    }

    mpRootPane->UnbindAnimation(pAnimTrans, true);
}

void Layout::UnbindAllAnimation() {
    UnbindAnimation(NULL);
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

ut::Rect Layout::GetLayoutRect() const {

        return ut::Rect(-mLayoutSize.width / 2, mLayoutSize.height / 2,
                        mLayoutSize.width / 2, -mLayoutSize.height / 2);
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
} // namespace nw4r

extern "C" nw4r::lyt::AnimTransform* CreateAnimTransform__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor(LayoutCreateView* p,const void* data,nw4r::lyt::ResourceAccessor* accessor);
extern "C" nw4r::lyt::AnimTransform* CreateAnimTransform__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt12AnimResourcePQ34nw4r3lyt16ResourceAccessor(LayoutCreateView* p,const LayoutResourceView& resource,nw4r::lyt::ResourceAccessor* accessor);
extern "C" nw4r::lyt::AnimTransform* CreateAnimTransform__Q34nw4r3lyt6LayoutFv(LayoutCreateView* p);

extern "C" void __ct__Q34nw4r3lyt6LayoutFv();
extern "C" void __dt__Q34nw4r3lyt6LayoutFv();

extern "C" nw4r::lyt::AnimTransform* CreateAnimTransform__Q34nw4r3lyt6LayoutFv(LayoutCreateView* p) {
    void* memory=fn_8030CAF0(lbl_8049D9D8,sizeof(nw4r::lyt::AnimTransformBasic));
    nw4r::lyt::AnimTransformBasic* transform;
    if (memory != NULL) transform=new (memory) nw4r::lyt::AnimTransformBasic();
    else transform=NULL;
    if (transform != NULL) {
        void* end=&p->animations.next;
        Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode(&p->animations,&end,(u8*)transform+4);
    }
    return transform;
}

extern "C" nw4r::lyt::AnimTransform* CreateAnimTransform__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor(LayoutCreateView* p,const void* data,nw4r::lyt::ResourceAccessor* accessor) {
    return p->create(LayoutResourceView(data),accessor);
}

extern "C" nw4r::lyt::AnimTransform* CreateAnimTransform__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt12AnimResourcePQ34nw4r3lyt16ResourceAccessor(LayoutCreateView* p,const LayoutResourceView& resource,nw4r::lyt::ResourceAccessor* accessor) {
    const nw4r::lyt::res::AnimationBlock* const block=resource.block;
    if (block == NULL) return NULL;
    nw4r::lyt::AnimTransform* const transform=p->create();
    if (transform != NULL) transform->SetResource(block,accessor);
    return transform;
}

