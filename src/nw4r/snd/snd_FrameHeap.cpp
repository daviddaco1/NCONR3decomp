#include <nw4r/snd.h>

#include <revolution/MEM.h>

namespace nw4r {
namespace snd {
namespace detail {

FrameHeap::FrameHeap() : mHandle(NULL) {}

FrameHeap::~FrameHeap() {
    if (IsValid()) {
        Destroy();
    }
}

// Create__Q44nw4r3snd6detail9FrameHeapFPvUl: definicion C reemplazada por asm (ver abajo)


// Destroy__Q44nw4r3snd6detail9FrameHeapFv: definicion C reemplazada por asm (ver abajo)


// Clear__Q44nw4r3snd6detail9FrameHeapFv: definicion C reemplazada por asm (ver abajo)


// Alloc__Q44nw4r3snd6detail9FrameHeapFUlPFPvUlPv_vPv: definicion C reemplazada por asm (ver abajo)


int FrameHeap::SaveState() {
    if (!MEMRecordStateForFrmHeap(mHandle, mSectionList.GetSize())) {
        return -1;
    }

    if (!NewSection()) {
        MEMFreeByStateToFrmHeap(mHandle, 0);
        return -1;
    }

    return GetCurrentLevel();
}

// LoadState__Q44nw4r3snd6detail9FrameHeapFi: definicion C reemplazada por asm (ver abajo)


int FrameHeap::GetCurrentLevel() const {
    return mSectionList.GetSize() - 1;
}

u32 FrameHeap::GetFreeSize() const {
    u32 freeSize = MEMGetAllocatableSizeForFrmHeapEx(mHandle, HEAP_ALIGN);
    if (freeSize < BLOCK_BUFFER_SIZE) {
        return 0;
    }

    return ut::RoundDown(freeSize - BLOCK_BUFFER_SIZE, HEAP_ALIGN);
}

bool FrameHeap::NewSection() {
    void* pSection = MEMAllocFromFrmHeap(mHandle, sizeof(Section));
    if (pSection == NULL) {
        return false;
    }

    mSectionList.PushBack(new (pSection) Section());
    return true;
}

void FrameHeap::ClearSection() {
    while (!mSectionList.IsEmpty()) {
        Section& rSection = mSectionList.GetBack();
        rSection.~Section();
        mSectionList.Erase(&rSection);
    }
}

} // namespace detail
} // namespace snd
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" void Alloc__Q44nw4r3snd6detail9FrameHeapFUlPFPvUlPv_vPv();
extern "C" void Clear__Q44nw4r3snd6detail9FrameHeapFv();
extern "C" void Create__Q44nw4r3snd6detail9FrameHeapFPvUl();
extern "C" void Destroy__Q44nw4r3snd6detail9FrameHeapFv();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void LoadState__Q44nw4r3snd6detail9FrameHeapFi();
extern "C" void __dt__Q44nw4r2ut6detail12LinkListImplFv();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void fn_8030C66C();
extern "C" void fn_8030C6F0();
extern "C" void fn_8030C720();
extern "C" void fn_8030C840();
extern "C" void fn_8030C8E0();
extern "C" void fn_8030C9B4();

// asm_to_cpp: Create__Q44nw4r3snd6detail9FrameHeapFPvUl
extern "C" asm void Create__Q44nw4r3snd6detail9FrameHeapFPvUl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r0, 0x0(r3)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    cmpwi r0, 0x0
    beq lbl_8020C648
    beq lbl_8020C648
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_8020C62C
    addi r31, r3, 0x8
    b lbl_8020C620
lbl_8020C5B8:
    lwz r29, 0x4(r31)
    cmpwi r29, 0x0
    beq lbl_8020C614
    addi r30, r29, 0xc
    b lbl_8020C5F8
lbl_8020C5CC:
    lwz r30, 0x4(r30)
    cmpwi r30, 0x0
    beq lbl_8020C5F8
    lwz r12, 0x10(r30)
    cmpwi r12, 0x0
    beq lbl_8020C5F8
    lwz r3, 0x8(r30)
    lwz r4, 0xc(r30)
    lwz r5, 0x14(r30)
    mtctr r12
    bctrl
lbl_8020C5F8:
    lwz r0, 0xc(r29)
    cmplw r30, r0
    bne lbl_8020C5CC
    addic. r3, r29, 0x8
    beq lbl_8020C614
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_8020C614:
    mr r4, r29
    addi r3, r26, 0x4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
lbl_8020C620:
    lwz r0, 0x4(r26)
    cmpwi r0, 0x0
    bne lbl_8020C5B8
lbl_8020C62C:
    lwz r3, 0x0(r26)
    li r4, 0x3
    bl fn_8030C840
    lwz r3, 0x0(r26)
    bl fn_8030C6F0
    li r0, 0x0
    stw r0, 0x0(r26)
lbl_8020C648:
    addi r0, r27, 0x3
    add r4, r27, r28
    clrrwi r3, r0, 2
    cmplw r3, r4
    ble lbl_8020C664
    li r3, 0x0
    b lbl_8020C6F8
lbl_8020C664:
    subf r4, r3, r4
    li r5, 0x0
    bl fn_8030C66C
    cmpwi r3, 0x0
    stw r3, 0x0(r26)
    bne lbl_8020C684
    li r3, 0x0
    b lbl_8020C6F8
lbl_8020C684:
    li r4, 0x14
    li r5, 0x4
    bl fn_8030C720
    cmpwi r3, 0x0
    bne lbl_8020C6A0
    li r0, 0x0
    b lbl_8020C6E4
lbl_8020C6A0:
    mr r5, r3
    beq lbl_8020C6CC
    li r0, 0x0
    addi r4, r3, 0xc
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x8(r3)
    stw r4, 0xc(r3)
    stw r4, 0x10(r3)
lbl_8020C6CC:
    addi r0, r26, 0x8
    addi r3, r26, 0x4
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    li r0, 0x1
lbl_8020C6E4:
    cmpwi r0, 0x0
    bne lbl_8020C6F4
    li r3, 0x0
    b lbl_8020C6F8
lbl_8020C6F4:
    li r3, 0x1
lbl_8020C6F8:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: Destroy__Q44nw4r3snd6detail9FrameHeapFv
extern "C" asm void Destroy__Q44nw4r3snd6detail9FrameHeapFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8020C7E0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_8020C7C4
    addi r31, r3, 0x8
    b lbl_8020C7B8
lbl_8020C750:
    lwz r29, 0x4(r31)
    cmpwi r29, 0x0
    beq lbl_8020C7AC
    addi r30, r29, 0xc
    b lbl_8020C790
lbl_8020C764:
    lwz r30, 0x4(r30)
    cmpwi r30, 0x0
    beq lbl_8020C790
    lwz r12, 0x10(r30)
    cmpwi r12, 0x0
    beq lbl_8020C790
    lwz r3, 0x8(r30)
    lwz r4, 0xc(r30)
    lwz r5, 0x14(r30)
    mtctr r12
    bctrl
lbl_8020C790:
    lwz r0, 0xc(r29)
    cmplw r30, r0
    bne lbl_8020C764
    addic. r3, r29, 0x8
    beq lbl_8020C7AC
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_8020C7AC:
    mr r4, r29
    addi r3, r28, 0x4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
lbl_8020C7B8:
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_8020C750
lbl_8020C7C4:
    lwz r3, 0x0(r28)
    li r4, 0x3
    bl fn_8030C840
    lwz r3, 0x0(r28)
    bl fn_8030C6F0
    li r0, 0x0
    stw r0, 0x0(r28)
lbl_8020C7E0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: Clear__Q44nw4r3snd6detail9FrameHeapFv
extern "C" asm void Clear__Q44nw4r3snd6detail9FrameHeapFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_8020C8A8
    addi r31, r3, 0x8
    b lbl_8020C89C
lbl_8020C834:
    lwz r29, 0x4(r31)
    cmpwi r29, 0x0
    beq lbl_8020C890
    addi r30, r29, 0xc
    b lbl_8020C874
lbl_8020C848:
    lwz r30, 0x4(r30)
    cmpwi r30, 0x0
    beq lbl_8020C874
    lwz r12, 0x10(r30)
    cmpwi r12, 0x0
    beq lbl_8020C874
    lwz r3, 0x8(r30)
    lwz r4, 0xc(r30)
    lwz r5, 0x14(r30)
    mtctr r12
    bctrl
lbl_8020C874:
    lwz r0, 0xc(r29)
    cmplw r30, r0
    bne lbl_8020C848
    addic. r3, r29, 0x8
    beq lbl_8020C890
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_8020C890:
    mr r4, r29
    addi r3, r28, 0x4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
lbl_8020C89C:
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_8020C834
lbl_8020C8A8:
    lwz r3, 0x0(r28)
    li r4, 0x3
    bl fn_8030C840
    lwz r3, 0x0(r28)
    li r4, 0x14
    li r5, 0x4
    bl fn_8030C720
    cmpwi r3, 0x0
    beq lbl_8020C90C
    mr r5, r3
    beq lbl_8020C8F8
    li r0, 0x0
    addi r4, r3, 0xc
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x8(r3)
    stw r4, 0xc(r3)
    stw r4, 0x10(r3)
lbl_8020C8F8:
    addi r0, r28, 0x8
    addi r3, r28, 0x4
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
lbl_8020C90C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: Alloc__Q44nw4r3snd6detail9FrameHeapFUlPFPvUlPv_vPv
extern "C" asm void Alloc__Q44nw4r3snd6detail9FrameHeapFUlPFPvUlPv_vPv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    addi r0, r4, 0x1f
    mr r27, r3
    clrrwi r7, r0, 5
    lwz r3, 0x0(r3)
    mr r28, r4
    mr r29, r5
    mr r30, r6
    addi r4, r7, 0x20
    li r5, 0x20
    bl fn_8030C720
    cmpwi r3, 0x0
    bne lbl_8020C978
    li r3, 0x0
    b lbl_8020C9BC
lbl_8020C978:
    mr r5, r3
    addi r31, r3, 0x20
    beq lbl_8020C9A0
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r31, 0x8(r3)
    stw r28, 0xc(r3)
    stw r29, 0x10(r3)
    stw r30, 0x14(r3)
lbl_8020C9A0:
    lwz r3, 0xc(r27)
    addi r4, r1, 0x8
    addi r0, r3, 0xc
    addi r3, r3, 0x8
    stw r0, 0x8(r1)
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    mr r3, r31
lbl_8020C9BC:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: LoadState__Q44nw4r3snd6detail9FrameHeapFi
extern "C" asm void LoadState__Q44nw4r3snd6detail9FrameHeapFi() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r31, r3
    mr r27, r4
    bne lbl_8020CBB4
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_8020CB4C
    addi r30, r3, 0x8
    b lbl_8020CB40
lbl_8020CAD8:
    lwz r28, 0x4(r30)
    cmpwi r28, 0x0
    beq lbl_8020CB34
    addi r29, r28, 0xc
    b lbl_8020CB18
lbl_8020CAEC:
    lwz r29, 0x4(r29)
    cmpwi r29, 0x0
    beq lbl_8020CB18
    lwz r12, 0x10(r29)
    cmpwi r12, 0x0
    beq lbl_8020CB18
    lwz r3, 0x8(r29)
    lwz r4, 0xc(r29)
    lwz r5, 0x14(r29)
    mtctr r12
    bctrl
lbl_8020CB18:
    lwz r0, 0xc(r28)
    cmplw r29, r0
    bne lbl_8020CAEC
    addic. r3, r28, 0x8
    beq lbl_8020CB34
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_8020CB34:
    mr r4, r28
    addi r3, r31, 0x4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
lbl_8020CB40:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    bne lbl_8020CAD8
lbl_8020CB4C:
    lwz r3, 0x0(r31)
    li r4, 0x3
    bl fn_8030C840
    lwz r3, 0x0(r31)
    li r4, 0x14
    li r5, 0x4
    bl fn_8030C720
    cmpwi r3, 0x0
    beq lbl_8020CCAC
    mr r5, r3
    beq lbl_8020CB9C
    li r0, 0x0
    addi r4, r3, 0xc
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x8(r3)
    stw r4, 0xc(r3)
    stw r4, 0x10(r3)
lbl_8020CB9C:
    addi r0, r31, 0x8
    addi r3, r31, 0x4
    stw r0, 0xc(r1)
    addi r4, r1, 0xc
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    b lbl_8020CCAC
lbl_8020CBB4:
    lwz r0, 0x4(r3)
    cmpw r4, r0
    bge lbl_8020CC3C
    addi r30, r3, 0x8
    b lbl_8020CC30
lbl_8020CBC8:
    lwz r28, 0x4(r30)
    cmpwi r28, 0x0
    beq lbl_8020CC24
    addi r29, r28, 0xc
    b lbl_8020CC08
lbl_8020CBDC:
    lwz r29, 0x4(r29)
    cmpwi r29, 0x0
    beq lbl_8020CC08
    lwz r12, 0x10(r29)
    cmpwi r12, 0x0
    beq lbl_8020CC08
    lwz r3, 0x8(r29)
    lwz r4, 0xc(r29)
    lwz r5, 0x14(r29)
    mtctr r12
    bctrl
lbl_8020CC08:
    lwz r0, 0xc(r28)
    cmplw r29, r0
    bne lbl_8020CBDC
    addic. r3, r28, 0x8
    beq lbl_8020CC24
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_8020CC24:
    mr r4, r28
    addi r3, r31, 0x4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
lbl_8020CC30:
    lwz r0, 0x4(r31)
    cmpw r27, r0
    blt lbl_8020CBC8
lbl_8020CC3C:
    lwz r3, 0x0(r31)
    mr r4, r27
    bl fn_8030C9B4
    lwz r3, 0x0(r31)
    lwz r4, 0x4(r31)
    bl fn_8030C8E0
    lwz r3, 0x0(r31)
    li r4, 0x14
    li r5, 0x4
    bl fn_8030C720
    cmpwi r3, 0x0
    beq lbl_8020CCAC
    mr r5, r3
    beq lbl_8020CC98
    li r0, 0x0
    addi r4, r3, 0xc
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x8(r3)
    stw r4, 0xc(r3)
    stw r4, 0x10(r3)
lbl_8020CC98:
    addi r0, r31, 0x8
    addi r3, r31, 0x4
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
lbl_8020CCAC:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
