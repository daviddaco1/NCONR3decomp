#include <nw4r/lyt.h>
#include <nw4r/ut.h>

#include <cstring>

namespace nw4r {
namespace lyt {

DrawInfo::DrawInfo() : mLocationAdjustScale(1.0f, 1.0f), mGlobalAlpha(1.0f) {
    std::memset(&mFlag, 0, sizeof(mFlag));
    math::MTX34Identity(&mViewMtx);
}

DrawInfo::~DrawInfo() {}

} // namespace lyt
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" void dtor_80136CFC();
extern "C" void dtor_801FF04C();

// asm_to_cpp: dtor_801FF04C
extern "C" asm void dtor_801FF04C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_801FF074
    cmpwi r4, 0x0
    ble lbl_801FF074
    bl dtor_80136CFC
lbl_801FF074:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
