#include <nw4r/lyt.h>

namespace nw4r {
namespace lyt {

NW4R_UT_RTTI_DEF_DERIVED(Bounding, Pane);

Bounding::Bounding(const res::Bounding* pRes, const ResBlockSet& rBlockSet)
    : Pane(pRes) {

#pragma unused(rBlockSet)
}

Bounding::~Bounding() {}

void Bounding::DrawSelf(const DrawInfo& rInfo) {
#pragma unused(rInfo)
    // Debug draw stripped out
}

} // namespace lyt
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" void *lbl_8049D9D0;
extern "C" void *lbl_8049D9F8;
extern "C" void fn_801FBEE8();

extern "C" void fn_801FBEE8() {
    lbl_8049D9F8 = &lbl_8049D9D0;
}
