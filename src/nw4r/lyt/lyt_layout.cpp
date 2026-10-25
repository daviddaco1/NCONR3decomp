#include <nw4r/lyt.h>
#include <nw4r/ut.h>

/******************************************************************************
 *
 * Utility functions
 *
 ******************************************************************************/
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

// __ct__Q34nw4r3lyt6LayoutFv: definicion C reemplazada por asm (ver abajo)


// __dt__Q34nw4r3lyt6LayoutFv: definicion C reemplazada por asm (ver abajo)


// Build__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor: definicion C reemplazada por asm (ver abajo)


// CreateAnimTransform__Q34nw4r3lyt6LayoutFv: definicion C reemplazada por asm (ver abajo)


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

// GetLayoutRect__Q34nw4r3lyt6LayoutCFv: definicion C reemplazada por asm (ver abajo)


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

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049D9D8;
extern "C" float lbl_8049D9E8;
extern "C" float lbl_804A1EC0;
extern "C" float lbl_804A1EC4;
extern "C" u8 lbl_80361610[];
extern "C" void AppendChild__Q34nw4r3lyt4PaneFPQ34nw4r3lyt4Pane();
extern "C" void AppendGroup__Q34nw4r3lyt14GroupContainerFPQ34nw4r3lyt5Group();
extern "C" void BindAnimationAuto__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt12AnimResourcePQ34nw4r3lyt16ResourceAccessor();
extern "C" void Bind__Q44nw4r3lyt6detail12AnimPaneTreeCFPQ34nw4r3lyt6LayoutPQ34nw4r3lyt4PanePQ34nw4r3lyt16ResourceAccessor();
extern "C" void BuildPaneObj__Q34nw4r3lyt6LayoutFlPCvRCQ34nw4r3lyt11ResBlockSet();
extern "C" void Build__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor();
extern "C" void CalcAnimationNum__Q34nw4r3lyt12AnimResourceCFPQ34nw4r3lyt5Groupb();
extern "C" void CreateAnimTransform__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor();
extern "C" void CreateAnimTransform__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt12AnimResourcePQ34nw4r3lyt16ResourceAccessor();
extern "C" void CreateAnimTransform__Q34nw4r3lyt6LayoutFv();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8Iterator();
extern "C" void FindGroupByName__Q34nw4r3lyt14GroupContainerFPCc();
extern "C" void GetAnimationShareInfoArray__Q34nw4r3lyt12AnimResourceCFv();
extern "C" void GetAnimationShareInfoNum__Q34nw4r3lyt12AnimResourceCFv();
extern "C" void GetGroupArray__Q34nw4r3lyt12AnimResourceCFv();
extern "C" void GetGroupNum__Q34nw4r3lyt12AnimResourceCFv();
extern "C" void GetLayoutRect__Q34nw4r3lyt6LayoutCFv();
extern "C" void Init__Q44nw4r3lyt6detail12AnimPaneTreeFv();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void IsDescendingBind__Q34nw4r3lyt12AnimResourceCFv();
extern "C" void Set__Q34nw4r3lyt12AnimResourceFPCv();
extern "C" void Set__Q44nw4r3lyt6detail12AnimPaneTreeFPQ34nw4r3lyt4PaneRCQ34nw4r3lyt12AnimResource();
extern "C" void TestFileHeader__Q34nw4r3lyt6detailFRCQ44nw4r3lyt3res16BinaryFileHeaderUl();
extern "C" void __ct__Q34nw4r3lyt12AnimResourceFv();
extern "C" void __ct__Q34nw4r3lyt18AnimTransformBasicFv();
extern "C" void __ct__Q34nw4r3lyt5GroupFPCQ44nw4r3lyt3res5GroupPQ34nw4r3lyt4Pane();
extern "C" void __ct__Q34nw4r3lyt6LayoutFv();
extern "C" void __dt__Q34nw4r3lyt14GroupContainerFv();
extern "C" void __dt__Q34nw4r3lyt6LayoutFv();
extern "C" void __dt__Q44nw4r2ut6detail12LinkListImplFv();
extern "C" void _restgpr_14();
extern "C" void _restgpr_20();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_14();
extern "C" void _savegpr_20();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_801F6A8C();
extern "C" void fn_801F6C38();
extern "C" void fn_801F76BC();
extern "C" void fn_80201510();
extern "C" void fn_8030CAF0();
extern "C" void fn_8030CB00();

// asm_to_cpp: fn_801F6A8C
extern "C" asm void fn_801F6A8C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    cmpwi r3, 0x0
    mr r23, r3
    mr r31, r4
    la r25, lbl_8049D9E8
    beq lbl_801F6AF8
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_801F6ADC
lbl_801F6AC8:
    cmplw r3, r25
    bne lbl_801F6AD8
    li r0, 0x1
    b lbl_801F6AE8
lbl_801F6AD8:
    lwz r3, 0x0(r3)
lbl_801F6ADC:
    cmpwi r3, 0x0
    bne lbl_801F6AC8
    li r0, 0x0
lbl_801F6AE8:
    cmpwi r0, 0x0
    beq lbl_801F6AF8
    mr r3, r23
    b lbl_801F6AFC
lbl_801F6AF8:
    li r3, 0x0
lbl_801F6AFC:
    cmpwi r3, 0x0
    beq lbl_801F6B08
    stw r31, 0xf8(r3)
lbl_801F6B08:
    lwz r30, 0x14(r23)
    addi r27, r23, 0x14
    la r23, lbl_8049D9E8
    la r24, lbl_8049D9E8
    b lbl_801F6C18
lbl_801F6B1C:
    subic. r25, r30, 0x4
    beq lbl_801F6B6C
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_801F6B50
lbl_801F6B3C:
    cmplw r3, r24
    bne lbl_801F6B4C
    li r0, 0x1
    b lbl_801F6B5C
lbl_801F6B4C:
    lwz r3, 0x0(r3)
lbl_801F6B50:
    cmpwi r3, 0x0
    bne lbl_801F6B3C
    li r0, 0x0
lbl_801F6B5C:
    cmpwi r0, 0x0
    beq lbl_801F6B6C
    mr r3, r25
    b lbl_801F6B70
lbl_801F6B6C:
    li r3, 0x0
lbl_801F6B70:
    cmpwi r3, 0x0
    beq lbl_801F6B7C
    stw r31, 0xf8(r3)
lbl_801F6B7C:
    lwz r29, 0x14(r25)
    addi r26, r25, 0x14
    b lbl_801F6C0C
lbl_801F6B88:
    subic. r25, r29, 0x4
    beq lbl_801F6BD8
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_801F6BBC
lbl_801F6BA8:
    cmplw r3, r23
    bne lbl_801F6BB8
    li r0, 0x1
    b lbl_801F6BC8
lbl_801F6BB8:
    lwz r3, 0x0(r3)
lbl_801F6BBC:
    cmpwi r3, 0x0
    bne lbl_801F6BA8
    li r0, 0x0
lbl_801F6BC8:
    cmpwi r0, 0x0
    beq lbl_801F6BD8
    mr r3, r25
    b lbl_801F6BDC
lbl_801F6BD8:
    li r3, 0x0
lbl_801F6BDC:
    cmpwi r3, 0x0
    beq lbl_801F6BE8
    stw r31, 0xf8(r3)
lbl_801F6BE8:
    lwzu r28, 0x14(r25)
    b lbl_801F6C00
lbl_801F6BF0:
    mr r4, r31
    subi r3, r28, 0x4
    bl fn_801F6A8C
    lwz r28, 0x0(r28)
lbl_801F6C00:
    cmplw r28, r25
    bne lbl_801F6BF0
    lwz r29, 0x0(r29)
lbl_801F6C0C:
    cmplw r29, r26
    bne lbl_801F6B88
    lwz r30, 0x0(r30)
lbl_801F6C18:
    cmplw r30, r27
    bne lbl_801F6B1C
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801F6C38
extern "C" asm void fn_801F6C38() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r31, 0x0
    b lbl_801F6CD8
lbl_801F6C68:
    clrlwi r0, r31, 16
    mr r3, r26
    mulli r0, r0, 0x14
    add r4, r27, r0
    bl FindGroupByName__Q34nw4r3lyt14GroupContainerFPCc
    lwz r4, 0x10(r3)
    addi r0, r3, 0x10
    b lbl_801F6CCC
lbl_801F6C88:
    lwz r3, 0x8(r4)
    cmplw r3, r30
    bne lbl_801F6C9C
    li r3, 0x1
    b lbl_801F6CE8
lbl_801F6C9C:
    cmpwi r29, 0x0
    beq lbl_801F6CC8
    lwz r5, 0xc(r30)
    b lbl_801F6CC0
lbl_801F6CAC:
    cmplw r3, r5
    bne lbl_801F6CBC
    li r3, 0x1
    b lbl_801F6CE8
lbl_801F6CBC:
    lwz r5, 0xc(r5)
lbl_801F6CC0:
    cmpwi r5, 0x0
    bne lbl_801F6CAC
lbl_801F6CC8:
    lwz r4, 0x0(r4)
lbl_801F6CCC:
    cmplw r4, r0
    bne lbl_801F6C88
    addi r31, r31, 0x1
lbl_801F6CD8:
    clrlwi r0, r31, 16
    cmplw r0, r28
    blt lbl_801F6C68
    li r3, 0x0
lbl_801F6CE8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __ct__Q34nw4r3lyt6LayoutFv
extern "C" asm void __ct__Q34nw4r3lyt6LayoutFv() {
    nofralloc
    li r0, 0x0
    lfs f0, lbl_804A1EC0
    lis r4, lbl_80361610@ha
    stw r0, 0x8(r3)
    addi r5, r3, 0x8
    stw r0, 0xc(r3)
    addi r4, r4, lbl_80361610@l
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r5, 0x8(r3)
    stw r5, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    blr
}

// asm_to_cpp: __dt__Q34nw4r3lyt6LayoutFv
extern "C" asm void __dt__Q34nw4r3lyt6LayoutFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    beq lbl_801F6E4C
    lwz r29, 0x14(r3)
    lis r4, lbl_80361610@ha
    addi r4, r4, lbl_80361610@l
    cmpwi r29, 0x0
    stw r4, 0x0(r3)
    beq lbl_801F6D94
    mr r3, r29
    li r4, -0x1
    bl __dt__Q34nw4r3lyt14GroupContainerFv
    lwz r3, lbl_8049D9D8
    mr r4, r29
    bl fn_8030CB00
lbl_801F6D94:
    lwz r29, 0x10(r27)
    cmpwi cr1, r29, 0x0
    beq cr1, lbl_801F6DD4
    lbz r0, 0xd6(r29)
    cmpwi r0, 0x0
    bne lbl_801F6DD4
    beq cr1, lbl_801F6DD4
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8049D9D8
    mr r4, r29
    bl fn_8030CB00
lbl_801F6DD4:
    lwz r31, 0x8(r27)
    addi r30, r27, 0x8
    b lbl_801F6E24
lbl_801F6DE0:
    mr r29, r31
    lwz r31, 0x0(r31)
    addi r3, r27, 0x4
    addi r4, r1, 0x8
    stw r29, 0x8(r1)
    bl Erase__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8Iterator
    subic. r29, r29, 0x4
    beq lbl_801F6E24
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, -0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8049D9D8
    mr r4, r29
    bl fn_8030CB00
lbl_801F6E24:
    cmplw r31, r30
    bne lbl_801F6DE0
    addic. r3, r27, 0x4
    beq lbl_801F6E3C
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_801F6E3C:
    cmpwi r28, 0x0
    ble lbl_801F6E4C
    mr r3, r27
    bl dtor_80136CFC
lbl_801F6E4C:
    addi r11, r1, 0x30
    mr r3, r27
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: Build__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor
extern "C" asm void Build__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_14
    mr r31, r4
    lis r4, 0x524c
    mr r30, r3
    mr r14, r5
    addi r4, r4, 0x5954
    mr r3, r31
    bl TestFileHeader__Q34nw4r3lyt6detailFRCQ44nw4r3lyt3res16BinaryFileHeaderUl
    cmpwi r3, 0x0
    bne lbl_801F6EA8
    li r3, 0x0
    b lbl_801F7190
lbl_801F6EA8:
    lhz r4, 0x6(r31)
    li r3, 0x0
    extrwi. r0, r4, 8, 16
    clrlwi r0, r4, 24
    bne lbl_801F6ED0
    cmplwi r0, 0x8
    blt lbl_801F6ED0
    cmplwi r0, 0xa
    bgt lbl_801F6ED0
    li r3, 0x1
lbl_801F6ED0:
    cmpwi r3, 0x0
    bne lbl_801F6EE0
    li r3, 0x0
    b lbl_801F7190
lbl_801F6EE0:
    li r22, 0x0
    lhz r0, 0xc(r31)
    lis r28, 0x7061
    stw r14, 0x14(r1)
    add r16, r31, r0
    li r20, 0x0
    stw r22, 0x8(r1)
    addi r23, r28, 0x6531
    li r19, 0x0
    li r18, 0x0
    stw r22, 0xc(r1)
    li r17, 0x0
    li r15, 0x0
    lis r14, 0x6d61
    stw r22, 0x10(r1)
    lis r29, 0x7478
    lis r25, 0x626e
    lis r26, 0x6c79
    lis r27, 0x6772
    lis r24, 0x666e
    b lbl_801F7180
lbl_801F6F34:
    lwz r3, 0x0(r16)
    cmpw r3, r23
    beq lbl_801F70B0
    bge lbl_801F6FB4
    addi r0, r27, 0x7031
    cmpw r3, r0
    beq lbl_801F70BC
    bge lbl_801F6F84
    addi r0, r24, 0x6c31
    cmpw r3, r0
    beq lbl_801F704C
    bge lbl_801F6F74
    addi r0, r25, 0x6431
    cmpw r3, r0
    beq lbl_801F705C
    b lbl_801F7174
lbl_801F6F74:
    addi r0, r27, 0x6531
    cmpw r3, r0
    beq lbl_801F7170
    b lbl_801F7174
lbl_801F6F84:
    addi r0, r26, 0x7431
    cmpw r3, r0
    beq lbl_801F7030
    bge lbl_801F6FA4
    addi r0, r27, 0x7331
    cmpw r3, r0
    beq lbl_801F7168
    b lbl_801F7174
lbl_801F6FA4:
    addi r0, r14, 0x7431
    cmpw r3, r0
    beq lbl_801F7054
    b lbl_801F7174
lbl_801F6FB4:
    addi r0, r29, 0x6c31
    cmpw r3, r0
    beq lbl_801F7044
    bge lbl_801F6FF8
    addi r0, r28, 0x7331
    cmpw r3, r0
    beq lbl_801F70A8
    bge lbl_801F6FE4
    addi r0, r28, 0x6e31
    cmpw r3, r0
    beq lbl_801F705C
    b lbl_801F7174
lbl_801F6FE4:
    lis r4, 0x7069
    addi r0, r4, 0x6331
    cmpw r3, r0
    beq lbl_801F705C
    b lbl_801F7174
lbl_801F6FF8:
    lis r4, 0x7573
    addi r0, r4, 0x6431
    cmpw r3, r0
    beq lbl_801F70A0
    bge lbl_801F701C
    addi r0, r29, 0x7431
    cmpw r3, r0
    beq lbl_801F705C
    b lbl_801F7174
lbl_801F701C:
    lis r4, 0x776e
    addi r0, r4, 0x6431
    cmpw r3, r0
    beq lbl_801F705C
    b lbl_801F7174
lbl_801F7030:
    lfs f1, 0xc(r16)
    lfs f0, 0x10(r16)
    stfs f1, 0x18(r30)
    stfs f0, 0x1c(r30)
    b lbl_801F7174
lbl_801F7044:
    stw r16, 0x8(r1)
    b lbl_801F7174
lbl_801F704C:
    stw r16, 0xc(r1)
    b lbl_801F7174
lbl_801F7054:
    stw r16, 0x10(r1)
    b lbl_801F7174
lbl_801F705C:
    mr r4, r16
    addi r5, r1, 0x8
    bl BuildPaneObj__Q34nw4r3lyt6LayoutFlPCvRCQ34nw4r3lyt11ResBlockSet
    cmpwi r3, 0x0
    mr r21, r3
    beq lbl_801F7174
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    bne lbl_801F7084
    stw r3, 0x10(r30)
lbl_801F7084:
    cmpwi r20, 0x0
    beq lbl_801F7098
    mr r3, r20
    mr r4, r21
    bl AppendChild__Q34nw4r3lyt4PaneFPQ34nw4r3lyt4Pane
lbl_801F7098:
    mr r19, r21
    b lbl_801F7174
lbl_801F70A0:
    stw r16, 0xb4(r19)
    b lbl_801F7174
lbl_801F70A8:
    mr r20, r19
    b lbl_801F7174
lbl_801F70B0:
    mr r19, r20
    lwz r20, 0xc(r20)
    b lbl_801F7174
lbl_801F70BC:
    cmpwi r18, 0x0
    bne lbl_801F7108
    lwz r3, lbl_8049D9D8
    li r18, 0x1
    li r4, 0xc
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_801F70FC
    beq lbl_801F7100
    stw r22, 0x4(r3)
    addi r4, r3, 0x4
    stw r22, 0x8(r3)
    stw r22, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    b lbl_801F7100
lbl_801F70FC:
    li r3, 0x0
lbl_801F7100:
    stw r3, 0x14(r30)
    b lbl_801F7174
lbl_801F7108:
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_801F7174
    cmpwi r17, 0x1
    bne lbl_801F7174
    lwz r21, 0x10(r30)
    li r4, 0x2c
    lwz r3, lbl_8049D9D8
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_801F7150
    mr r4, r3
    beq lbl_801F7154
    mr r4, r16
    mr r5, r21
    bl __ct__Q34nw4r3lyt5GroupFPCQ44nw4r3lyt3res5GroupPQ34nw4r3lyt4Pane
    mr r4, r3
    b lbl_801F7154
lbl_801F7150:
    li r4, 0x0
lbl_801F7154:
    cmpwi r4, 0x0
    beq lbl_801F7174
    lwz r3, 0x14(r30)
    bl AppendGroup__Q34nw4r3lyt14GroupContainerFPQ34nw4r3lyt5Group
    b lbl_801F7174
lbl_801F7168:
    addi r17, r17, 0x1
    b lbl_801F7174
lbl_801F7170:
    subi r17, r17, 0x1
lbl_801F7174:
    lwz r0, 0x4(r16)
    addi r15, r15, 0x1
    add r16, r16, r0
lbl_801F7180:
    lhz r0, 0xe(r31)
    cmpw r15, r0
    blt lbl_801F6F34
    li r3, 0x1
lbl_801F7190:
    addi r11, r1, 0x60
    bl _restgpr_14
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: CreateAnimTransform__Q34nw4r3lyt6LayoutFv
extern "C" asm void CreateAnimTransform__Q34nw4r3lyt6LayoutFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x20
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r3, lbl_8049D9D8
    bl fn_8030CAF0
    cmpwi r3, 0x0
    beq lbl_801F71E8
    mr r31, r3
    beq lbl_801F71EC
    bl __ct__Q34nw4r3lyt18AnimTransformBasicFv
    mr r31, r3
    b lbl_801F71EC
lbl_801F71E8:
    li r31, 0x0
lbl_801F71EC:
    cmpwi r31, 0x0
    beq lbl_801F720C
    addi r0, r30, 0x8
    addi r3, r30, 0x4
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    addi r5, r31, 0x4
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
lbl_801F720C:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: CreateAnimTransform__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor
extern "C" asm void CreateAnimTransform__Q34nw4r3lyt6LayoutFPCvPQ34nw4r3lyt16ResourceAccessor() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r1, 0x8
    bl Set__Q34nw4r3lyt12AnimResourceFPCv
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x8
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: CreateAnimTransform__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt12AnimResourcePQ34nw4r3lyt16ResourceAccessor
extern "C" asm void CreateAnimTransform__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt12AnimResourcePQ34nw4r3lyt16ResourceAccessor() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r31, 0x4(r4)
    stw r30, 0x18(r1)
    cmpwi r31, 0x0
    stw r29, 0x14(r1)
    mr r29, r5
    bne lbl_801F72B0
    li r3, 0x0
    b lbl_801F72E8
lbl_801F72B0:
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_801F72E4
    lwz r12, 0x0(r3)
    mr r4, r31
    mr r5, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_801F72E4:
    mr r3, r30
lbl_801F72E8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: BindAnimationAuto__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt12AnimResourcePQ34nw4r3lyt16ResourceAccessor
extern "C" asm void BindAnimationAuto__Q34nw4r3lyt6LayoutFRCQ34nw4r3lyt12AnimResourcePQ34nw4r3lyt16ResourceAccessor() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_20
    lwz r0, 0x10(r3)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    cmpwi r0, 0x0
    bne lbl_801F7398
    li r3, 0x0
    b lbl_801F75E8
lbl_801F7398:
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    bne lbl_801F73AC
    li r3, 0x0
    b lbl_801F75E8
lbl_801F73AC:
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    mr r22, r3
    mr r3, r30
    bl GetGroupNum__Q34nw4r3lyt12AnimResourceCFv
    clrlwi. r0, r3, 16
    mr r24, r3
    li r26, 0x0
    bne lbl_801F741C
    lwz r12, 0x0(r22)
    mr r3, r22
    lwz r4, 0x4(r30)
    mr r5, r31
    lwz r12, 0x10(r12)
    lhz r6, 0xe(r4)
    mtctr r12
    bctrl
    lwz r3, 0x10(r29)
    mr r4, r22
    li r5, 0x1
    li r6, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    mtctr r12
    bctrl
    b lbl_801F74DC
lbl_801F741C:
    mr r3, r30
    bl GetGroupArray__Q34nw4r3lyt12AnimResourceCFv
    mr r27, r3
    clrlwi r25, r24, 16
    mr r23, r27
    li r28, 0x0
    b lbl_801F746C
lbl_801F7438:
    lwz r3, 0x14(r29)
    mr r4, r23
    bl FindGroupByName__Q34nw4r3lyt14GroupContainerFPCc
    mr r21, r3
    mr r3, r30
    bl IsDescendingBind__Q34nw4r3lyt12AnimResourceCFv
    mr r5, r3
    mr r3, r30
    mr r4, r21
    bl CalcAnimationNum__Q34nw4r3lyt12AnimResourceCFPQ34nw4r3lyt5Groupb
    add r26, r26, r3
    addi r23, r23, 0x14
    addi r28, r28, 0x1
lbl_801F746C:
    cmpw r28, r25
    blt lbl_801F7438
    lwz r12, 0x0(r22)
    mr r3, r22
    mr r5, r31
    clrlwi r6, r26, 16
    lwz r12, 0x10(r12)
    lwz r4, 0x4(r30)
    mtctr r12
    bctrl
    clrlwi r25, r24, 16
    li r21, 0x0
    b lbl_801F74D4
lbl_801F74A0:
    lwz r3, 0x14(r29)
    mr r4, r27
    bl FindGroupByName__Q34nw4r3lyt14GroupContainerFPCc
    mr r23, r3
    mr r3, r30
    bl IsDescendingBind__Q34nw4r3lyt12AnimResourceCFv
    mr r5, r3
    mr r3, r23
    mr r4, r22
    li r6, 0x1
    bl fn_80201510
    addi r27, r27, 0x14
    addi r21, r21, 0x1
lbl_801F74D4:
    cmpw r21, r25
    blt lbl_801F74A0
lbl_801F74DC:
    mr r3, r30
    bl GetAnimationShareInfoNum__Q34nw4r3lyt12AnimResourceCFv
    clrlwi. r0, r3, 16
    mr r25, r3
    beq lbl_801F75E4
    mr r3, r30
    bl GetAnimationShareInfoArray__Q34nw4r3lyt12AnimResourceCFv
    mr r23, r3
    clrlwi r26, r25, 16
    li r21, 0x0
    b lbl_801F75DC
lbl_801F7508:
    lwz r3, 0x10(r29)
    mr r4, r23
    li r5, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    mr r20, r3
    addi r3, r1, 0x8
    bl __ct__Q34nw4r3lyt12AnimResourceFv
    addi r3, r1, 0x8
    bl Init__Q44nw4r3lyt6detail12AnimPaneTreeFv
    mr r4, r20
    mr r5, r30
    addi r3, r1, 0x8
    bl Set__Q44nw4r3lyt6detail12AnimPaneTreeFPQ34nw4r3lyt4PaneRCQ34nw4r3lyt12AnimResource
    lhz r0, 0x1a(r1)
    cmpwi r0, 0x0
    beq lbl_801F75D4
    lwz r3, 0x14(r29)
    addi r4, r23, 0x11
    bl FindGroupByName__Q34nw4r3lyt14GroupContainerFPCc
    lwz r28, 0x10(r3)
    addi r27, r3, 0x10
    b lbl_801F75CC
lbl_801F756C:
    lwz r22, 0x8(r28)
    cmplw r22, r20
    beq lbl_801F75C8
    clrlwi. r0, r24, 16
    beq lbl_801F75B4
    mr r3, r30
    bl IsDescendingBind__Q34nw4r3lyt12AnimResourceCFv
    mr r25, r3
    mr r3, r30
    bl GetGroupArray__Q34nw4r3lyt12AnimResourceCFv
    mr r4, r3
    lwz r3, 0x14(r29)
    mr r6, r25
    mr r7, r22
    clrlwi r5, r24, 16
    bl fn_801F6C38
    cmpwi r3, 0x0
    beq lbl_801F75C8
lbl_801F75B4:
    lwz r5, 0x8(r28)
    mr r4, r29
    mr r6, r31
    addi r3, r1, 0x8
    bl Bind__Q44nw4r3lyt6detail12AnimPaneTreeCFPQ34nw4r3lyt6LayoutPQ34nw4r3lyt4PanePQ34nw4r3lyt16ResourceAccessor
lbl_801F75C8:
    lwz r28, 0x0(r28)
lbl_801F75CC:
    cmplw r28, r27
    bne lbl_801F756C
lbl_801F75D4:
    addi r23, r23, 0x24
    addi r21, r21, 0x1
lbl_801F75DC:
    cmpw r21, r26
    blt lbl_801F7508
lbl_801F75E4:
    li r3, 0x1
lbl_801F75E8:
    addi r11, r1, 0x60
    bl _restgpr_20
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// asm_to_cpp: GetLayoutRect__Q34nw4r3lyt6LayoutCFv
extern "C" asm void GetLayoutRect__Q34nw4r3lyt6LayoutCFv() {
    nofralloc
    lfs f4, 0x1c(r4)
    lfs f1, 0x18(r4)
    fneg f3, f4
    lfs f2, lbl_804A1EC4
    fneg f0, f1
    fmuls f5, f1, f2
    fmuls f3, f3, f2
    fmuls f1, f4, f2
    fmuls f0, f0, f2
    stfs f5, 0x8(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0x0(r3)
    stfs f3, 0xc(r3)
    blr
}

// asm_to_cpp: fn_801F76BC
extern "C" asm void fn_801F76BC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lwz r25, 0x10(r3)
    mr r31, r4
    la r23, lbl_8049D9E8
    cmpwi r25, 0x0
    beq lbl_801F772C
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_801F7710
lbl_801F76FC:
    cmplw r3, r23
    bne lbl_801F770C
    li r0, 0x1
    b lbl_801F771C
lbl_801F770C:
    lwz r3, 0x0(r3)
lbl_801F7710:
    cmpwi r3, 0x0
    bne lbl_801F76FC
    li r0, 0x0
lbl_801F771C:
    cmpwi r0, 0x0
    beq lbl_801F772C
    mr r3, r25
    b lbl_801F7730
lbl_801F772C:
    li r3, 0x0
lbl_801F7730:
    cmpwi r3, 0x0
    beq lbl_801F773C
    stw r31, 0xf8(r3)
lbl_801F773C:
    lwz r30, 0x14(r25)
    addi r27, r25, 0x14
    la r24, lbl_8049D9E8
    la r23, lbl_8049D9E8
    b lbl_801F784C
lbl_801F7750:
    subic. r25, r30, 0x4
    beq lbl_801F77A0
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_801F7784
lbl_801F7770:
    cmplw r3, r23
    bne lbl_801F7780
    li r0, 0x1
    b lbl_801F7790
lbl_801F7780:
    lwz r3, 0x0(r3)
lbl_801F7784:
    cmpwi r3, 0x0
    bne lbl_801F7770
    li r0, 0x0
lbl_801F7790:
    cmpwi r0, 0x0
    beq lbl_801F77A0
    mr r3, r25
    b lbl_801F77A4
lbl_801F77A0:
    li r3, 0x0
lbl_801F77A4:
    cmpwi r3, 0x0
    beq lbl_801F77B0
    stw r31, 0xf8(r3)
lbl_801F77B0:
    lwz r29, 0x14(r25)
    addi r26, r25, 0x14
    b lbl_801F7840
lbl_801F77BC:
    subic. r25, r29, 0x4
    beq lbl_801F780C
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_801F77F0
lbl_801F77DC:
    cmplw r3, r24
    bne lbl_801F77EC
    li r0, 0x1
    b lbl_801F77FC
lbl_801F77EC:
    lwz r3, 0x0(r3)
lbl_801F77F0:
    cmpwi r3, 0x0
    bne lbl_801F77DC
    li r0, 0x0
lbl_801F77FC:
    cmpwi r0, 0x0
    beq lbl_801F780C
    mr r3, r25
    b lbl_801F7810
lbl_801F780C:
    li r3, 0x0
lbl_801F7810:
    cmpwi r3, 0x0
    beq lbl_801F781C
    stw r31, 0xf8(r3)
lbl_801F781C:
    lwzu r28, 0x14(r25)
    b lbl_801F7834
lbl_801F7824:
    mr r4, r31
    subi r3, r28, 0x4
    bl fn_801F6A8C
    lwz r28, 0x0(r28)
lbl_801F7834:
    cmplw r28, r25
    bne lbl_801F7824
    lwz r29, 0x0(r29)
lbl_801F7840:
    cmplw r29, r26
    bne lbl_801F77BC
    lwz r30, 0x0(r30)
lbl_801F784C:
    cmplw r30, r27
    bne lbl_801F7750
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
