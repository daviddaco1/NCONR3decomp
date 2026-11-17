#include <nw4r/g3d.h>

namespace nw4r {
namespace g3d {

NW4R_G3D_RTTI_DEF(ScnProc);

ScnProc* ScnProc::Construct(MEMAllocator* pAllocator, u32* pSize,
                            DrawProc pProc, bool opa, bool xlu,
                            u32 userDataSize) {
    ScnProc* pScnProc = NULL;
    u32 scnProcSize = sizeof(ScnProc);

    userDataSize = align4(userDataSize);
    u32 userDataOfs = align4(scnProcSize);

    u32 size = align4(userDataOfs + userDataSize);
    if (pSize != NULL) {
        *pSize = size;
    }

    if (pAllocator != NULL) {
        u8* pBuffer = reinterpret_cast<u8*>(Alloc(pAllocator, size));

        if (pBuffer != NULL) {
            void* pUserData = userDataSize != 0 ? pBuffer + userDataOfs : NULL;

            pScnProc =
                new (pBuffer) ScnProc(pAllocator, pProc, pUserData, opa, xlu);
        }
    }

    return pScnProc;
}

void ScnProc::G3dProc(u32 task, u32 param, void* pInfo) {
    if (IsG3dProcDisabled(task)) {
        return;
    }

    switch (task) {
    case G3DPROC_GATHER_SCNOBJ: {
        IScnObjGather* pCollection = static_cast<IScnObjGather*>(pInfo);
        pCollection->Add(this, (mFlag & SCNPROCFLAG_DRAW_OPA) ? true : false,
                         (mFlag & SCNPROCFLAG_DRAW_XLU) ? true : false);
        break;
    }

    case G3DPROC_DRAW_OPA: {
        if (mpDrawProc != NULL) {
            G3DState::Invalidate();
            mpDrawProc(this, true);
        }
        break;
    }

    case G3DPROC_DRAW_XLU: {
        if (mpDrawProc != NULL) {
            G3DState::Invalidate();
            mpDrawProc(this, false);
        }
        break;
    }

    default: {
        DefG3dProcScnLeaf(task, param, pInfo);
    }
    }
}

} // namespace g3d
} // namespace nw4r

#include <nw4r/g3d.h>
#include <nw4r/ut.h>

#include <revolution/GX.h>
#include <revolution/OS.h>
#include <revolution/VI.h>

namespace {

NW4R_LIB_VERSION(G3D, "Nov 20 2008", "03:23:14", "0x4199_60831");

} // namespace

namespace nw4r {
namespace g3d {

void G3dInit(bool enableLockedCache) {
    OSRegisterVersion(NW4R_G3D_Version_);

    if (enableLockedCache) {
        ut::LC::Enable();
    } else {
        ut::LC::Disable();
    }

    InitFastCast();

    GXRenderModeObj* pMode;
    switch (VIGetTvFormat()) {
    case VI_TVFORMAT_NTSC: {
        pMode = &GXNtsc480IntDf;
        break;
    }

    case VI_TVFORMAT_PAL: {
        pMode = &GXPal528IntDf;
        break;
    }

    case VI_TVFORMAT_EURGB60: {
        pMode = &GXEurgb60Hz480IntDf;
        break;
    }

    case VI_TVFORMAT_MPAL: {
        pMode = &GXMpal480IntDf;
        break;
    }

    default: {
        pMode = &GXNtsc480IntDf;
        break;
    }
    }

    G3DState::SetRenderModeObj(*pMode);
}

void G3dReset() {
    G3DState::Invalidate();
}

} // namespace g3d
} // namespace nw4r

using namespace nw4r;
using namespace nw4r::g3d;
extern "C" void fn_801F40F4(bool enableLockedCache) {
    OSRegisterVersion(NW4R_G3D_Version_);

    if (enableLockedCache) {
        ut::LC::Enable();
    } else {
        ut::LC::Disable();
    }

    InitFastCast();

    GXRenderModeObj* pMode;
    switch (VIGetTvFormat()) {
    case VI_TVFORMAT_NTSC: {
        pMode = &GXNtsc480IntDf;
        break;
    }

    case VI_TVFORMAT_PAL: {
        pMode = &GXPal528IntDf;
        break;
    }

    case VI_TVFORMAT_EURGB60: {
        pMode = &GXEurgb60Hz480IntDf;
        break;
    }

    case VI_TVFORMAT_MPAL: {
        pMode = &GXMpal480IntDf;
        break;
    }

    default: {
        pMode = &GXNtsc480IntDf;
        break;
    }
    }

    G3DState::SetRenderModeObj(*pMode);
}

