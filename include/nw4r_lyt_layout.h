#ifndef NW4R_LYT_LAYOUT_H
#define NW4R_LYT_LAYOUT_H

#include "types.h"

/*
 * Interfaz de nw4r::lyt usada por el game code, con el orden de virtuales de
 * libs/ss/include/nw4r/lyt/lyt_layout.h y lyt_resourceAccessor.h (la version de
 * NW4R del juego, con las tres sobrecargas de CreateAnimTransform). vptr en 0x0.
 */
namespace nw4r {
namespace ut {
class Font;
}
namespace lyt {

class AnimTransform;
class AnimResource;
class DrawInfo;

class ResourceAccessor {
public:
    virtual ~ResourceAccessor();                                         // at 0x8
    virtual void* GetResource(u32 type, const char* pName, u32* pSize); // at 0xC
    virtual ut::Font* GetFont(const char* pName);                        // at 0x10
};

class Layout {
public:
    virtual ~Layout();                                                                       // at 0x8
    virtual bool Build(const void* lytResBuf, ResourceAccessor* pResAcsr);                   // at 0xC
    virtual AnimTransform* CreateAnimTransform();                                            // at 0x10
    virtual AnimTransform* CreateAnimTransform(const void* animResBuf, ResourceAccessor* p); // at 0x14
    virtual AnimTransform* CreateAnimTransform(const AnimResource& res, ResourceAccessor* p); // at 0x18
    virtual void BindAnimation(AnimTransform* pAnimTrans);                                   // at 0x1C
    virtual void UnbindAnimation(AnimTransform* pAnimTrans);                                 // at 0x20
    virtual void UnbindAllAnimation();                                                       // at 0x24
    virtual bool BindAnimationAuto(const AnimResource& res, ResourceAccessor* p);            // at 0x28
    virtual void SetAnimationEnable(AnimTransform* pAnimTrans, bool bEnable);                // at 0x2C
    virtual void CalculateMtx(const DrawInfo& drawInfo);                                     // at 0x30
    virtual void Draw(const DrawInfo& drawInfo);                                             // at 0x34
    virtual void Animate(u32 option);                                                        // at 0x38
};

} // namespace lyt
} // namespace nw4r

#endif
