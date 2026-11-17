#ifndef NW4R_G3D_OBJ_H
#define NW4R_G3D_OBJ_H

#include "types.h"

/*
 * Declaraciones de nw4r::g3d usadas por el game code (glib_*), con el orden de
 * virtuales de libs/forecast/include/nw4r/g3d/g3d_obj.h, g3d_anmobj.h y
 * g3d_anmchr.h. El vptr esta en 0x0. Solo interfaz: las clases se implementan
 * en las unidades de NW4R.
 */
namespace nw4r {
namespace g3d {

class ResMdl;
class AnmObjChrRes;
struct ChrAnmResult;

class G3dObj {
public:
    class TypeObj {
    public:
        const void* mName; // at 0x0
    };

    virtual bool IsDerivedFrom(TypeObj other) const;      // at 0x8
    virtual void G3dProc(u32 task, u32 param, void* pInfo); // at 0xC
    virtual ~G3dObj();                                     // at 0x10
    virtual const TypeObj GetTypeObj() const;              // at 0x14
    virtual const char* GetTypeName() const;               // at 0x18
};

class AnmObj : public G3dObj {
public:
    virtual void SetFrame(f32 frame);     // at 0x1C
    virtual f32 GetFrame() const;         // at 0x20
    virtual void UpdateFrame();           // at 0x24
    virtual void SetUpdateRate(f32 rate); // at 0x28
    virtual f32 GetUpdateRate() const;    // at 0x2C
    virtual bool Bind(const ResMdl* mdl); // at 0x30 (ResMdl se pasa por referencia)
    virtual void Release();               // at 0x34
};

class ScnObj : public G3dObj {
public:
    virtual int ForEach(void* pFunc, void* pInfo, bool postOrder);    // at 0x1C
    virtual bool SetScnObjOption(u32 option, u32 value);             // at 0x20
    virtual bool GetScnObjOption(u32 option, u32* pValue) const;     // at 0x24
    virtual f32 GetValueForSortOpa() const;                          // at 0x28
    virtual f32 GetValueForSortXlu() const;                          // at 0x2C
    virtual void CalcWorldMtx(const void* pParent, u32* pParam);     // at 0x30
};

class ScnLeaf : public ScnObj {};

class ScnGroup : public ScnObj {
public:
    virtual bool Insert(u32 idx, ScnObj* pObj); // at 0x34
    virtual ScnObj* Remove(u32 idx);            // at 0x38
    virtual bool Remove(ScnObj* pObj);          // at 0x3C
};

class ScnMdlSimple : public ScnLeaf {
public:
    enum AnmObjType {
        ANMOBJTYPE_CHR,
        ANMOBJTYPE_VIS,
        ANMOBJTYPE_MATCLR,
        ANMOBJTYPE_TEXPAT,
        ANMOBJTYPE_TEXSRT,
        ANMOBJTYPE_SHP,
        ANMOBJTYPE_NOT_SPECIFIED
    };

    virtual bool SetAnmObj(AnmObj* pObj, AnmObjType type); // at 0x34
    virtual bool RemoveAnmObj(AnmObj* pObj);               // at 0x38
    virtual AnmObj* RemoveAnmObj(AnmObjType type);         // at 0x3C
};

class AnmScn : public G3dObj {
public:
    virtual void SetFrame(f32 frame);     // at 0x1C
    virtual f32 GetFrame() const;         // at 0x20
    virtual void SetUpdateRate(f32 rate); // at 0x24
    virtual f32 GetUpdateRate() const;    // at 0x28
    virtual void UpdateFrame();           // at 0x2C
};

class AnmObjChr : public AnmObj {
public:
    virtual const ChrAnmResult* GetResult(ChrAnmResult* pResult, u32 idx); // at 0x38
    virtual AnmObjChrRes* Attach(int idx, AnmObjChrRes* pRes);              // at 0x3C
    virtual AnmObjChrRes* Detach(int idx);                                  // at 0x40
    virtual void DetachAll();                                               // at 0x44
    virtual void SetWeight(int idx, f32 weight);                            // at 0x48
    virtual f32 GetWeight(int idx) const;                                   // at 0x4C
};

} // namespace g3d
} // namespace nw4r

#endif
