#include <nw4r/g3d.h>

namespace nw4r {
namespace g3d {
namespace {

NW4R_G3D_RESFILE_NAME_DEF(LightSet, "LightSet(NW4R)");
NW4R_G3D_RESFILE_NAME_DEF(AmbLights, "AmbLights(NW4R)");
NW4R_G3D_RESFILE_NAME_DEF(Lights, "Lights(NW4R)");
NW4R_G3D_RESFILE_NAME_DEF(Fogs, "Fogs(NW4R)");
NW4R_G3D_RESFILE_NAME_DEF(Cameras, "Cameras(NW4R)");

} // namespace

extern "C" u32 fn_801D7E6C(const ResAnmScn* self) {
    void* data = ResDic(self->ofs_to_obj<ResDic>(self->ref().toScnTopLevelDic))[ResName(&ResNameData_LightSet)];
    if (data != NULL) return ResDic(data).GetNumData();
    return 0;
}

extern "C" u32 fn_801D7F98(const ResAnmScn* self) {
    void* data = ResDic(self->ofs_to_obj<ResDic>(self->ref().toScnTopLevelDic))[ResName(&ResNameData_AmbLights)];
    if (data != NULL) return ResDic(data).GetNumData();
    return 0;
}

extern "C" u32 fn_801D80C4(const ResAnmScn* self) {
    void* data = ResDic(self->ofs_to_obj<ResDic>(self->ref().toScnTopLevelDic))[ResName(&ResNameData_Lights)];
    if (data != NULL) return ResDic(data).GetNumData();
    return 0;
}

extern "C" u32 fn_801D81F0(const ResAnmScn* self) {
    void* data = ResDic(self->ofs_to_obj<ResDic>(self->ref().toScnTopLevelDic))[ResName(&ResNameData_Fogs)];
    if (data != NULL) return ResDic(data).GetNumData();
    return 0;
}

extern "C" u32 fn_801D8448(const ResAnmScn* self) {
    void* data = ResDic(self->ofs_to_obj<ResDic>(self->ref().toScnTopLevelDic))[ResName(&ResNameData_Cameras)];
    if (data != NULL) return ResDic(data).GetNumData();
    return 0;
}

bool ResAnmScn::HasResAnmAmbLight() const {
    return ResDic(ofs_to_obj<ResDic>(
               ref().toScnTopLevelDic))[ResName(&ResNameData_AmbLights)] !=
           NULL;
}

bool ResAnmScn::HasResAnmLight() const {
    return ResDic(ofs_to_obj<ResDic>(
               ref().toScnTopLevelDic))[ResName(&ResNameData_Lights)] != NULL;
}

ResLightSet ResAnmScn::GetResLightSet(int idx) const {
    void* pResLightSetDicData = ResDic(ofs_to_obj<ResDic>(
        ref().toScnTopLevelDic))[ResName(&ResNameData_LightSet)];

    if (pResLightSetDicData != NULL) {
        return ResLightSet(ResDic(pResLightSetDicData)[idx]);
    }

    return ResLightSet(NULL);
}

ResLightSet ResAnmScn::GetResLightSet(u32 idx) const {
    return GetResLightSet(static_cast<int>(idx));
}

u32 ResAnmScn::GetResLightSetNumEntries() const {
    void* pResLightSetDicData = ResDic(ofs_to_obj<ResDic>(
        ref().toScnTopLevelDic))[ResName(&ResNameData_LightSet)];

    if (pResLightSetDicData != NULL) {
        return ResDic(pResLightSetDicData).GetNumData();
    }

    return 0;
}

ResAnmAmbLight ResAnmScn::GetResAnmAmbLight(const ResName name) const {
    void* pResAnmAmbLightDicData = ResDic(ofs_to_obj<ResDic>(
        ref().toScnTopLevelDic))[ResName(&ResNameData_AmbLights)];

    if (pResAnmAmbLightDicData != NULL) {
        return ResAnmAmbLight(ResDic(pResAnmAmbLightDicData)[name]);
    }

    return ResAnmAmbLight(NULL);
}

ResAnmAmbLight ResAnmScn::GetResAnmAmbLight(int idx) const {
    void* pResAnmAmbLightDicData = ResDic(ofs_to_obj<ResDic>(
        ref().toScnTopLevelDic))[ResName(&ResNameData_AmbLights)];

    if (pResAnmAmbLightDicData != NULL) {
        return ResAnmAmbLight(ResDic(pResAnmAmbLightDicData)[idx]);
    }

    return ResAnmAmbLight(NULL);
}

ResAnmAmbLight ResAnmScn::GetResAnmAmbLight(u32 idx) const {
    return GetResAnmAmbLight(static_cast<int>(idx));
}

ResAnmLight ResAnmScn::GetResAnmLight(const ResName name) const {
    void* pResAnmLightDicData = ResDic(ofs_to_obj<ResDic>(
        ref().toScnTopLevelDic))[ResName(&ResNameData_Lights)];

    if (pResAnmLightDicData != NULL) {
        return ResAnmLight(ResDic(pResAnmLightDicData)[name]);
    }

    return ResAnmLight(NULL);
}

ResAnmLight ResAnmScn::GetResAnmLight(int idx) const {
    void* pResAnmLightDicData = ResDic(ofs_to_obj<ResDic>(
        ref().toScnTopLevelDic))[ResName(&ResNameData_Lights)];

    if (pResAnmLightDicData != NULL) {
        return ResAnmLight(ResDic(pResAnmLightDicData)[idx]);
    }

    return ResAnmLight(NULL);
}

ResAnmLight ResAnmScn::GetResAnmLight(u32 idx) const {
    return GetResAnmLight(static_cast<int>(idx));
}

ResLightSet ResAnmScn::GetResLightSetByRefNumber(u32 refNumber) const {
    const ResAnmScnInfoData& rInfoData = ref().info;

    if (rInfoData.numResLightSetData <= refNumber) {
        return ResLightSet(NULL);
    }

    const ResLightSetData* pArray =
        ofs_to_ptr<ResLightSetData>(ref().toResLightSetDataArray);

    ResLightSetData* pTarget = const_cast<ResLightSetData*>(&pArray[refNumber]);

    return ResLightSet(pTarget->id < rInfoData.numResLightSetData ? pTarget
                                                                  : NULL);
}

ResAnmAmbLight ResAnmScn::GetResAnmAmbLightByRefNumber(u32 refNumber) const {
    const ResAnmScnInfoData& rInfoData = ref().info;

    if (rInfoData.numResAnmAmbLightData <= refNumber) {
        return ResAnmAmbLight(NULL);
    }

    const ResAnmAmbLightData* pArray =
        ofs_to_ptr<ResAnmAmbLightData>(ref().toResAnmAmbLightDataArray);

    ResAnmAmbLightData* pTarget =
        const_cast<ResAnmAmbLightData*>(&pArray[refNumber]);

    return ResAnmAmbLight(
        pTarget->id < rInfoData.numResAnmAmbLightData ? pTarget : NULL);
}

ResAnmLight ResAnmScn::GetResAnmLightByRefNumber(u32 refNumber) const {
    const ResAnmScnInfoData& rInfoData = ref().info;

    if (rInfoData.numResAnmLightData <= refNumber) {
        return ResAnmLight(NULL);
    }

    const ResAnmLightData* pArray =
        ofs_to_ptr<ResAnmLightData>(ref().toResAnmLightDataArray);

    ResAnmLightData* pTarget = const_cast<ResAnmLightData*>(&pArray[refNumber]);

    return ResAnmLight(pTarget->id < rInfoData.numResAnmLightData ? pTarget
                                                                  : NULL);
}

ResAnmFog ResAnmScn::GetResAnmFogByRefNumber(u32 refNumber) const {
    const ResAnmScnInfoData& rInfoData = ref().info;

    if (rInfoData.numResAnmFogData <= refNumber) {
        return ResAnmFog(NULL);
    }

    const ResAnmFogData* pArray =
        ofs_to_ptr<ResAnmFogData>(ref().toResAnmFogDataArray);

    ResAnmFogData* pTarget = const_cast<ResAnmFogData*>(&pArray[refNumber]);

    return ResAnmFog(pTarget->id < rInfoData.numResAnmFogData ? pTarget : NULL);
}

ResAnmCamera ResAnmScn::GetResAnmCameraByRefNumber(u32 refNumber) const {
    const ResAnmScnInfoData& rInfoData = ref().info;

    if (rInfoData.numResAnmCameraData <= refNumber) {
        return ResAnmCamera(NULL);
    }

    const ResAnmCameraData* pArray =
        ofs_to_ptr<ResAnmCameraData>(ref().toResAnmCameraDataArray);

    ResAnmCameraData* pTarget =
        const_cast<ResAnmCameraData*>(&pArray[refNumber]);

    return ResAnmCamera(pTarget->id < rInfoData.numResAnmCameraData ? pTarget
                                                                    : NULL);
}

bool ResAnmScn::Bind(const ResAnmScn scene) {
    u32 lightSetNum = GetResLightSetNumEntries();
    bool success = true;

    for (u32 i = 0; i < lightSetNum; i++) {
        ResLightSet set = GetResLightSet(i);
        success = set.Bind(scene) && success;
    }

    return success;
}

} // namespace g3d
} // namespace nw4r

using namespace nw4r;
using namespace nw4r::g3d;
extern "C" void fn_801D75FC(const ResAnmLight* self, LightAnmResult* pResult, f32 frame) {
    const ResAnmLightData& r = self->ref();
    u32 flags = r.flags;

    const ResAnmScnInfoData& rInfoData =
        self->ofs_to_ptr<ResAnmScnData>(r.toResAnmScnData)->info;

    f32 clippedFrame = detail::ClipFrame(rInfoData, frame);

    pResult->flags = flags & (LightAnmResult::FLAG_LIGHT_TYPE_MASK |
                              LightAnmResult::FLAG_LIGHT_ENABLE |
                              LightAnmResult::FLAG_SPECULAR_ENABLE |
                              LightAnmResult::FLAG_COLOR_ENABLE |
                              LightAnmResult::FLAG_ALPHA_ENABLE);

    bool enableConstant = (flags & ResAnmLightData::FLAG_ENABLE_CONST) != 0;
    if (!enableConstant) {
        int iClippedFrame = static_cast<int>(math::FFloor(clippedFrame));

        bool enable = detail::GetResBoolAnmResult(&r.enable, iClippedFrame);
        if (enable) {
            pResult->flags |= ResAnmLightData::FLAG_LIGHT_ENABLE;
        }
    }

    if (pResult->flags & ResAnmLightData::FLAG_LIGHT_ENABLE) {
        ResAnmLight::LightType type = static_cast<ResAnmLight::LightType>(
            flags & ResAnmLightData::FLAG_LIGHT_TYPE_MASK);

        bool hasSpecular = (flags & ResAnmLightData::FLAG_SPECULAR_ENABLE) != 0;
        bool hasAim = type != ResAnmLight::LIGHTTYPE_POINT || hasSpecular;

        bool constantPosX = (flags & ResAnmLightData::FLAG_POS_X_CONST) != 0;
        bool constantPosY = (flags & ResAnmLightData::FLAG_POS_Y_CONST) != 0;
        bool constantPosZ = (flags & ResAnmLightData::FLAG_POS_Z_CONST) != 0;
        bool constantColor = (flags & ResAnmLightData::FLAG_COLOR_CONST) != 0;

        pResult->pos.x = detail::GetResAnmResult(&r.posX, frame, constantPosX);
        pResult->pos.y = detail::GetResAnmResult(&r.posY, frame, constantPosY);
        pResult->pos.z = detail::GetResAnmResult(&r.posZ, frame, constantPosZ);
        pResult->color =
            detail::GetResColorAnmResult(&r.color, clippedFrame, constantColor);

        if (hasAim) {
            bool constantAimX =
                (flags & ResAnmLightData::FLAG_AIM_X_CONST) != 0;
            bool constantAimY =
                (flags & ResAnmLightData::FLAG_AIM_Y_CONST) != 0;
            bool constantAimZ =
                (flags & ResAnmLightData::FLAG_AIM_Z_CONST) != 0;

            pResult->aim.x =
                detail::GetResAnmResult(&r.aimX, frame, constantAimX);
            pResult->aim.y =
                detail::GetResAnmResult(&r.aimY, frame, constantAimY);
            pResult->aim.z =
                detail::GetResAnmResult(&r.aimZ, frame, constantAimZ);
        }

        switch (type) {
        case ResAnmLight::LIGHTTYPE_POINT: {
            bool refDistanceConstant =
                (flags & ResAnmLightData::FLAG_REF_DISTANCE_CONST) != 0;
            bool refBrightnessConstant =
                (flags & ResAnmLightData::FLAG_REF_BRIGHTNESS_CONST) != 0;

            pResult->distFunc = r.distFunc;

            pResult->refDistance = detail::GetResAnmResult(
                &r.refDistance, frame, refDistanceConstant);

            pResult->refBrightness = detail::GetResAnmResult(
                &r.refBrightness, frame, refBrightnessConstant);
            break;
        }

        case ResAnmLight::LIGHTTYPE_DIRECTIONAL: {
            break;
        }

        case ResAnmLight::LIGHTTYPE_SPOT: {
            bool cutoffConstant =
                (flags & ResAnmLightData::FLAG_CUTOFF_CONST) != 0;
            bool refDistanceConstant =
                (flags & ResAnmLightData::FLAG_REF_DISTANCE_CONST) != 0;
            bool refBrightnessConstant =
                (flags & ResAnmLightData::FLAG_REF_BRIGHTNESS_CONST) != 0;

            pResult->distFunc = r.distFunc;
            pResult->spotFunc = r.spotFunc;

            pResult->cutoff =
                detail::GetResAnmResult(&r.cutoff, frame, cutoffConstant);

            pResult->refDistance = detail::GetResAnmResult(
                &r.refDistance, frame, refDistanceConstant);

            pResult->refBrightness = detail::GetResAnmResult(
                &r.refBrightness, frame, refBrightnessConstant);
            break;
        }

        default: {
            break;
        }
        }

        if (hasSpecular) {
            bool specColorConstant =
                (flags & ResAnmLightData::FLAG_SPEC_COLOR_CONST) != 0;
            bool shininessConstant =
                (flags & ResAnmLightData::FLAG_SHININESS_CONST) != 0;

            pResult->specColor = detail::GetResColorAnmResult(
                &r.specColor, clippedFrame, specColorConstant);

            pResult->shininess =
                detail::GetResAnmResult(&r.shininess, frame, shininessConstant);

            pResult->specIdx = r.specLightObjIdx;
        }
    }
}

extern "C" void fn_801D7B54(const ResAnmCamera* self, CameraAnmResult* pResult, f32 frame) {
    const ResAnmCameraData& r = self->ref();
    u32 flags = r.flags;

    bool constantPosX = (flags & ResAnmCameraData::FLAG_POS_X_CONST) != 0;
    bool constantPosY = (flags & ResAnmCameraData::FLAG_POS_Y_CONST) != 0;
    bool constantPosZ = (flags & ResAnmCameraData::FLAG_POS_Z_CONST) != 0;

    bool constantAspect = (flags & ResAnmCameraData::FLAG_ASPECT_CONST) != 0;
    bool constantNear = (flags & ResAnmCameraData::FLAG_NEAR_CONST) != 0;
    bool constantFar = (flags & ResAnmCameraData::FLAG_FAR_CONST) != 0;

    ResAnmCamera::CameraType type = static_cast<ResAnmCamera::CameraType>(
        flags & ResAnmCameraData::FLAG_CAMERA_TYPE_MASK);

    pResult->flags = flags & (CameraAnmResult::FLAG_CAMERA_TYPE_MASK |
                              CameraAnmResult::FLAG_ANM_EXISTS);

    pResult->projType = r.projType;

    pResult->pos.x = detail::GetResAnmResult(&r.posX, frame, constantPosX);
    pResult->pos.y = detail::GetResAnmResult(&r.posY, frame, constantPosY);
    pResult->pos.z = detail::GetResAnmResult(&r.posZ, frame, constantPosZ);

    pResult->aspect = detail::GetResAnmResult(&r.aspect, frame, constantAspect);
    pResult->near = detail::GetResAnmResult(&r.near, frame, constantNear);
    pResult->far = detail::GetResAnmResult(&r.far, frame, constantFar);

    switch (type) {
    case ResAnmCamera::CAMERATYPE_ROTATE: {
        bool constantRotX = (flags & ResAnmCameraData::FLAG_ROT_X_CONST) != 0;
        bool constantRotY = (flags & ResAnmCameraData::FLAG_ROT_Y_CONST) != 0;
        bool constantRotZ = (flags & ResAnmCameraData::FLAG_ROT_Z_CONST) != 0;

        pResult->rotate.rot.x =
            detail::GetResAnmResult(&r.rotX, frame, constantRotX);
        pResult->rotate.rot.y =
            detail::GetResAnmResult(&r.rotY, frame, constantRotY);
        pResult->rotate.rot.z =
            detail::GetResAnmResult(&r.rotZ, frame, constantRotZ);
        break;
    }

    case ResAnmCamera::CAMERATYPE_AIM: {
        bool constantAimX = (flags & ResAnmCameraData::FLAG_AIM_X_CONST) != 0;
        bool constantAimY = (flags & ResAnmCameraData::FLAG_AIM_Y_CONST) != 0;
        bool constantAimZ = (flags & ResAnmCameraData::FLAG_AIM_Z_CONST) != 0;
        bool constantTwist = (flags & ResAnmCameraData::FLAG_TWIST_CONST) != 0;

        pResult->aim.aim.x =
            detail::GetResAnmResult(&r.aimX, frame, constantAimX);
        pResult->aim.aim.y =
            detail::GetResAnmResult(&r.aimY, frame, constantAimY);
        pResult->aim.aim.z =
            detail::GetResAnmResult(&r.aimZ, frame, constantAimZ);
        pResult->aim.twist =
            detail::GetResAnmResult(&r.twist, frame, constantTwist);
        break;
    }

    default: {
        break;
    }
    }

    switch (r.projType) {
    case GX_PERSPECTIVE: {
        bool constantFovy =
            (flags & ResAnmCameraData::FLAG_PERSP_FOVY_CONST) != 0;

        pResult->perspFovy =
            detail::GetResAnmResult(&r.perspFovy, frame, constantFovy);
        break;
    }

    case GX_ORTHOGRAPHIC: {
        bool constantHeight =
            (flags & ResAnmCameraData::FLAG_ORTHO_HEIGHT_CONST) != 0;

        pResult->orthoHeight =
            detail::GetResAnmResult(&r.orthoHeight, frame, constantHeight);
        break;
    }

    default: {
        break;
    }
    }
}

extern "C" void fn_801D79F4(const ResAnmFog* self, FogAnmResult* pResult, f32 frame) {
    const ResAnmFogData& r = self->ref();
    u32 flags = r.flags;

    const ResAnmScnInfoData& rInfoData =
        self->ofs_to_ptr<ResAnmScnData>(r.toResAnmScnData)->info;

    f32 clippedFrame = detail::ClipFrame(rInfoData, frame);

    bool startZConstant = (flags & ResAnmFogData::FLAG_START_CONST) != 0;
    bool endZConstant = (flags & ResAnmFogData::FLAG_END_CONST) != 0;
    bool colorConstant = (flags & ResAnmFogData::FLAG_COLOR_CONST) != 0;

    pResult->type = r.type;
    pResult->startz = detail::GetResAnmResult(&r.startz, frame, startZConstant);
    pResult->endz = detail::GetResAnmResult(&r.endz, frame, endZConstant);
    pResult->color =
        detail::GetResColorAnmResult(&r.color, clippedFrame, colorConstant);
}

extern "C" void fn_801D752C(const ResAnmAmbLight* self, AmbLightAnmResult* pResult, f32 frame) {
    const ResAnmAmbLightData& r = self->ref();

    u32 flags = r.flags;
    bool constant = (flags & ResAnmAmbLightData::FLAG_CONST) != 0;

    const ResAnmScnInfoData& rInfoData =
        self->ofs_to_ptr<ResAnmScnData>(r.toResAnmScnData)->info;

    f32 clippedFrame = detail::ClipFrame(rInfoData, frame);

    pResult->flags = flags & (AmbLightAnmResult::FLAG_COLOR_ENABLE |
                              AmbLightAnmResult::FLAG_ALPHA_ENABLE);

    pResult->color =
        detail::GetResColorAnmResult(&r.color, clippedFrame, constant);
}

extern "C" nw4r::g3d::ResAnmAmbLight fn_801D7EEC(const nw4r::g3d::ResAnmScn* self, u32 idx) {
    return self->GetResAnmAmbLight(static_cast<int>(idx));
}

extern "C" nw4r::g3d::ResAnmLight fn_801D8018(const nw4r::g3d::ResAnmScn* self, u32 idx) {
    return self->GetResAnmLight(static_cast<int>(idx));
}

extern "C" u8 lbl_80360CC0[];
static inline nw4r::g3d::ResAnmFog GetSceneAnmFogByIndex(const nw4r::g3d::ResAnmScn* self, int idx) {
    using namespace nw4r::g3d;
    void* data = ResDic(self->ofs_to_obj<ResDic>(self->ref().toScnTopLevelDic))[ResName(&nw4r::g3d::ResNameData_Fogs)];
    if (data != NULL) {
        return ResAnmFog(ResDic(data)[static_cast<int>(idx)]);
    }
    return ResAnmFog(NULL);
}

extern "C" nw4r::g3d::ResAnmFog fn_801D8144(const nw4r::g3d::ResAnmScn* self, u32 idx) {
    return GetSceneAnmFogByIndex(self, static_cast<int>(idx));
}

extern "C" u8 lbl_80360CE0[];
static inline nw4r::g3d::ResAnmCamera GetSceneAnmCameraByIndex(const nw4r::g3d::ResAnmScn* self, int idx) {
    using namespace nw4r::g3d;
    void* data = ResDic(self->ofs_to_obj<ResDic>(self->ref().toScnTopLevelDic))[ResName(&nw4r::g3d::ResNameData_Cameras)];
    if (data != NULL) {
        return ResAnmCamera(ResDic(data)[static_cast<int>(idx)]);
    }
    return ResAnmCamera(NULL);
}

extern "C" nw4r::g3d::ResAnmCamera fn_801D839C(const nw4r::g3d::ResAnmScn* self, u32 idx) {
    return GetSceneAnmCameraByIndex(self, static_cast<int>(idx));
}

extern "C" u8 lbl_80360CC0[];
extern "C" u8 lbl_80360CE0[];

