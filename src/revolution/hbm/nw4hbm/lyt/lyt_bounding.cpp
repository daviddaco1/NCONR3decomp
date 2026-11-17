#include <nw4hbm/lyt.h>

namespace nw4hbm {
namespace lyt {

NW4R_UT_RTTI_DEF_DERIVED(Bounding, Pane);

Bounding::Bounding(const res::Bounding* pRes, const ResBlockSet& rBlockSet)
    : Pane(pRes) {

#pragma unused(rBlockSet)
}

Bounding::~Bounding() {}

} // namespace lyt
} // namespace nw4hbm

extern "C" void DrawSelf__Q36nw4hbm3lyt8BoundingFRCQ36nw4hbm3lyt8DrawInfo();

