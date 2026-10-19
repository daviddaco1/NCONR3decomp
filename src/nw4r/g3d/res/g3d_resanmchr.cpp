#pragma fp_contract on

#include <nw4r/g3d.h>

namespace nw4r {
namespace g3d {
namespace {

/******************************************************************************
 *
 * Utility functions
 *
 ******************************************************************************/
inline f32 HermiteInterpolation(f32 v0, f32 t0, f32 v1, f32 t1, f32 s, f32 d) {
    f32 s_1 = s - 1.0f;

    return v0 + s * (s * ((2.0f * s - 3.0f) * (v0 - v1))) +
           d * s_1 * (s_1 * t0 + s * t1);
}

/******************************************************************************
 *
 * Animation keyframe
 *
 ******************************************************************************/
template <typename TData, typename TDerived> class CResAnmChrFrmBase {
protected:
    const TData* mPtr;

public:
    CResAnmChrFrmBase(const TData* pPtr) : mPtr(pPtr) {}

    void operator++(int) {
        mPtr++;
    }
    void operator--(int) {
        mPtr--;
    }

    TDerived operator+(int n) {
        return TDerived(mPtr + n);
    }
};

template <typename T>
class CResAnmChrFrm : public CResAnmChrFrmBase<T, CResAnmChrFrm<T> > {};

template <>
class CResAnmChrFrm<ResAnmChrFrm32Data>
    : public CResAnmChrFrmBase<ResAnmChrFrm32Data,
                               CResAnmChrFrm<ResAnmChrFrm32Data> > {
public:
    CResAnmChrFrm(const ResAnmChrFrm32Data* pPtr) : CResAnmChrFrmBase(pPtr) {}

    u8 GetFrame() const {
        return mPtr->fvs.frame;
    }

    f32 GetFrameF32() const {
        return fastcast::U8_0ToF32(&mPtr->fvs.frame);
    }

    f32 GetValue(const ResAnmChrFVSData* pFVSData) const {
        u16 value = (mPtr->fvsU32 & 0x00FFF000) >> 12;
        return pFVSData->fvs32.scale * fastcast::U16_0ToF32(&value) +
               pFVSData->fvs48.offset;
    }

    f32 GetSlope() const {
        s16 slope = static_cast<s32>((mPtr->fvsU32 & 0x00000FFF) << 20) >> 20;
        return fastcast::S10_5ToF32(&slope);
    }
};

template <>
class CResAnmChrFrm<ResAnmChrFrm48Data>
    : public CResAnmChrFrmBase<ResAnmChrFrm48Data,
                               CResAnmChrFrm<ResAnmChrFrm48Data> > {
public:
    CResAnmChrFrm(const ResAnmChrFrm48Data* pPtr) : CResAnmChrFrmBase(pPtr) {}

    s16 GetFrame() const {
        return mPtr->frame;
    }

    f32 GetFrameF32() const {
        return fastcast::S10_5ToF32(&mPtr->frame);
    }

    f32 GetValue(const ResAnmChrFVSData* pFVSData) const {
        return pFVSData->fvs48.scale * fastcast::U16_0ToF32(&mPtr->value) +
               pFVSData->fvs48.offset;
    }

    f32 GetSlope() const {
        return fastcast::S7_8ToF32(&mPtr->slope);
    }
};

template <>
class CResAnmChrFrm<ResAnmChrFrm96Data>
    : public CResAnmChrFrmBase<ResAnmChrFrm96Data,
                               CResAnmChrFrm<ResAnmChrFrm96Data> > {
public:
    CResAnmChrFrm(const ResAnmChrFrm96Data* pPtr) : CResAnmChrFrmBase(pPtr) {}

    f32 GetFrame() const {
        return mPtr->frame;
    }

    f32 GetFrameF32() const {
        return mPtr->frame;
    }

    f32 GetValue(const ResAnmChrFVSData* /* pFVSData */) const {
        return mPtr->value;
    }

    f32 GetSlope() const {
        return mPtr->slope;
    }
};

/******************************************************************************
 *
 * Animation traits
 *
 ******************************************************************************/
template <typename T> class CAnmFmtTraits {};

template <> class CAnmFmtTraits<ResAnmChrFVS32Data> {
public:
    typedef ResAnmChrFrm32Data TFrmData;
    typedef u8 TFrame;

public:
    static CResAnmChrFrm<TFrmData> GetKeyFrame(const ResAnmChrFVSData* pFVSData,
                                               int index) {
        return CResAnmChrFrm<TFrmData>(&pFVSData->fvs32.frameValues[index]);
    }

    static TFrame QuantizeFrame(f32 frame) {
        return fastcast::F32ToU8_0(frame);
    }
};

template <> class CAnmFmtTraits<ResAnmChrFVS48Data> {
public:
    typedef ResAnmChrFrm48Data TFrmData;
    typedef s16 TFrame;

public:
    static CResAnmChrFrm<TFrmData> GetKeyFrame(const ResAnmChrFVSData* pFVSData,
                                               int index) {
        return CResAnmChrFrm<TFrmData>(&pFVSData->fvs48.frameValues[index]);
    }

    static TFrame QuantizeFrame(f32 frame) {
        return fastcast::F32ToS10_5(frame);
    }
};

template <> class CAnmFmtTraits<ResAnmChrFVS96Data> {
public:
    typedef ResAnmChrFrm96Data TFrmData;
    typedef f32 TFrame;

public:
    static CResAnmChrFrm<TFrmData> GetKeyFrame(const ResAnmChrFVSData* pFVSData,
                                               int index) {
        return CResAnmChrFrm<TFrmData>(&pFVSData->fvs96.frameValues[index]);
    }

    static TFrame QuantizeFrame(f32 frame) {
        return frame;
    }
};

template <> class CAnmFmtTraits<ResAnmChrCV8Data> {
public:
    static f32 GetAt(const ResAnmChrCVData* pCVData, u16 idx) {
        const ResAnmChrCV8Data& rCV8 = pCVData->cv8;
        return rCV8.values[idx] * rCV8.scale + rCV8.offset;
    }
};

template <> class CAnmFmtTraits<ResAnmChrCV16Data> {
public:
    static f32 GetAt(const ResAnmChrCVData* pCVData, u16 idx) {
        const ResAnmChrCV16Data& rCV16 = pCVData->cv16;
        return rCV16.values[idx] * rCV16.scale + rCV16.offset;
    }
};

template <> class CAnmFmtTraits<ResAnmChrCV32Data> {
public:
    static f32 GetAt(const ResAnmChrCVData* pCVData, u16 idx) {
        const ResAnmChrCV32Data& rCV32 = pCVData->cv32;
        return rCV32.values[idx];
    }
};

/******************************************************************************
 *
 * Frame values (FVS) implementation
 *
 ******************************************************************************/
template <typename TTraits>
f32 CalcAnimationFVS(const ResAnmChrFVSData* pFVSData, f32 frame) {
    CResAnmChrFrm<typename TTraits::TFrmData> first =
        TTraits::GetKeyFrame(pFVSData, 0);
    CResAnmChrFrm<typename TTraits::TFrmData> last =
        TTraits::GetKeyFrame(pFVSData, pFVSData->numFrameValues - 1);

    if (frame <= first.GetFrameF32()) {
        return first.GetValue(pFVSData);
    }

    if (last.GetFrameF32() <= frame) {
        return last.GetValue(pFVSData);
    }

    f32 frameOffset = frame - first.GetFrameF32();
    f32 numKeyFrame = math::U16ToF32(pFVSData->numFrameValues);

    f32 f_estimatePos = frameOffset * numKeyFrame * pFVSData->invKeyFrameRange;
    u16 i_estimatePos = math::F32ToU16(f_estimatePos);

    CResAnmChrFrm<typename TTraits::TFrmData> left =
        TTraits::GetKeyFrame(pFVSData, i_estimatePos);

    const typename TTraits::TFrame quantized = TTraits::QuantizeFrame(frame);

    if (quantized < left.GetFrame()) {
        do {
            left--;
        } while (quantized < left.GetFrame());
    } else {
        do {
            left++;
        } while (left.GetFrame() <= quantized);

        left--;
    }

    if (frame == left.GetFrameF32()) {
        return left.GetValue(pFVSData);
    }

    CResAnmChrFrm<typename TTraits::TFrmData> right = left + 1;

    f32 v0 = left.GetValue(pFVSData);
    f32 t0 = left.GetSlope();
    f32 v1 = right.GetValue(pFVSData);
    f32 t1 = right.GetSlope();

    f32 f0 = left.GetFrameF32();
    f32 f1 = right.GetFrameF32();

    f32 frameDelta = frame - f0;
    f32 keyFrameDelta = f1 - f0;
    f32 keyFrameDeltaInv = math::FInv(keyFrameDelta);

    return HermiteInterpolation(v0, t0, v1, t1, frameDelta * keyFrameDeltaInv,
                                frameDelta);
}

/******************************************************************************
 *
 * Const value (CV) implementation
 *
 ******************************************************************************/
template <typename TTraits>
f32 CalcAnimationCV(const ResAnmChrCVData* pCVData, u16 numFrame, f32 frame) {
    u16 frame_i = math::F32ToU16(frame);

    if (frame <= 0.0f) {
        return TTraits::GetAt(pCVData, 0);
    }

    if (numFrame <= frame_i) {
        return TTraits::GetAt(pCVData, numFrame);
    }

    f32 r = frame - static_cast<f32>(frame_i);

    f32 v0 = TTraits::GetAt(pCVData, frame_i);
    if (r == 0.0f) {
        return v0;
    }

    f32 v1 = TTraits::GetAt(pCVData, frame_i + 1);
    return r * (v1 - v0) + v0;
}

/******************************************************************************
 *
 * Calculate frame values (FVS) result
 *
 ******************************************************************************/
template <typename T>
f32 CalcResultFVS(const ResAnmChrNodeData* pNodeData,
                  const ResAnmChrNodeData::AnmData* pAnmData, f32 frame,
                  bool constant) {
    if (constant) {
        return pAnmData->constValue;
    }

    const ResAnmChrAnmData* pFVSAnmData =
        reinterpret_cast<const ResAnmChrAnmData*>(
            ut::AddOffsetToPtr(pNodeData, pAnmData->toResAnmChrAnmData));

    return CalcAnimationFVS<CAnmFmtTraits<T> >(&pFVSAnmData->fvs, frame);
}

inline f32 CalcResult32(const ResAnmChrNodeData* pNodeData,
                        const ResAnmChrNodeData::AnmData* pAnmData, f32 frame,
                        bool constant) {
    return CalcResultFVS<ResAnmChrFVS32Data>(pNodeData, pAnmData, frame,
                                             constant);
}
inline f32 CalcResult48(const ResAnmChrNodeData* pNodeData,
                        const ResAnmChrNodeData::AnmData* pAnmData, f32 frame,
                        bool constant) {
    return CalcResultFVS<ResAnmChrFVS48Data>(pNodeData, pAnmData, frame,
                                             constant);
}
inline f32 CalcResult96(const ResAnmChrNodeData* pNodeData,
                        const ResAnmChrNodeData::AnmData* pAnmData, f32 frame,
                        bool constant) {
    return CalcResultFVS<ResAnmChrFVS96Data>(pNodeData, pAnmData, frame,
                                             constant);
}

/******************************************************************************
 *
 * Calculate const value (CV) result
 *
 ******************************************************************************/
template <typename T>
f32 CalcResultCV(const ResAnmChrNodeData* pNodeData,
                 const ResAnmChrNodeData::AnmData* pAnmData, u16 numFrame,
                 f32 frame, bool constant) {

    if (constant) {
        return pAnmData->constValue;
    }

    const ResAnmChrAnmData* pCVAnmData =
        reinterpret_cast<const ResAnmChrAnmData*>(
            ut::AddOffsetToPtr(pNodeData, pAnmData->toResAnmChrAnmData));

    return CalcAnimationCV<CAnmFmtTraits<T> >(&pCVAnmData->cv, numFrame, frame);
}

inline f32 CalcResultFrm8(const ResAnmChrNodeData* pNodeData,
                          const ResAnmChrNodeData::AnmData* pAnmData,
                          u16 numFrame, f32 frame, bool constant) {
    return CalcResultCV<ResAnmChrCV8Data>(pNodeData, pAnmData, numFrame, frame,
                                          constant);
}
inline f32 CalcResultFrm16(const ResAnmChrNodeData* pNodeData,
                           const ResAnmChrNodeData::AnmData* pAnmData,
                           u16 numFrame, f32 frame, bool constant) {
    return CalcResultCV<ResAnmChrCV16Data>(pNodeData, pAnmData, numFrame, frame,
                                           constant);
}
inline f32 CalcResultFrm32(const ResAnmChrNodeData* pNodeData,
                           const ResAnmChrNodeData::AnmData* pAnmData,
                           u16 numFrame, f32 frame, bool constant) {
    return CalcResultCV<ResAnmChrCV32Data>(pNodeData, pAnmData, numFrame, frame,
                                           constant);
}

/******************************************************************************
 *
 * Get animation component
 *
 ******************************************************************************/
const ResAnmChrNodeData::AnmData*
GetAnmScale(math::VEC3* pResult, const ResAnmChrNodeData* pNodeData,
            const ResAnmChrNodeData::AnmData* pAnmData, f32 frame) {

    u32 flags = pNodeData->flags;
    f32 x, y, z;

    switch (flags & ResAnmChrNodeData::FLAG_SCALE_FMT_MASK) {
    case 0: {
        x = pAnmData++->constValue;

        if (flags & ResAnmChrNodeData::FLAG_SCALE_UNIFORM) {
            y = x;
            z = x;
        } else {
            y = pAnmData++->constValue;
            z = pAnmData++->constValue;
        }

        break;
    }

    case ResAnmChrNodeData::FLAG_SCALE_FVS32_FMT: {
        x = CalcResult32(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_SCALE_X_CONST);

        if (flags & ResAnmChrNodeData::FLAG_SCALE_UNIFORM) {
            y = x;
            z = x;
        } else {
            y = CalcResult32(pNodeData, pAnmData++, frame,
                             flags & ResAnmChrNodeData::FLAG_SCALE_Y_CONST);
            z = CalcResult32(pNodeData, pAnmData++, frame,
                             flags & ResAnmChrNodeData::FLAG_SCALE_Z_CONST);
        }

        break;
    }

    case ResAnmChrNodeData::FLAG_SCALE_FVS48_FMT: {
        x = CalcResult48(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_SCALE_X_CONST);

        if (flags & ResAnmChrNodeData::FLAG_SCALE_UNIFORM) {
            y = x;
            z = x;
        } else {
            y = CalcResult48(pNodeData, pAnmData++, frame,
                             flags & ResAnmChrNodeData::FLAG_SCALE_Y_CONST);
            z = CalcResult48(pNodeData, pAnmData++, frame,
                             flags & ResAnmChrNodeData::FLAG_SCALE_Z_CONST);
        }

        break;
    }

    case ResAnmChrNodeData::FLAG_SCALE_FVS96_FMT: {
        x = CalcResult96(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_SCALE_X_CONST);

        if (flags & ResAnmChrNodeData::FLAG_SCALE_UNIFORM) {
            y = x;
            z = x;
        } else {
            y = CalcResult96(pNodeData, pAnmData++, frame,
                             flags & ResAnmChrNodeData::FLAG_SCALE_Y_CONST);
            z = CalcResult96(pNodeData, pAnmData++, frame,
                             flags & ResAnmChrNodeData::FLAG_SCALE_Z_CONST);
        }

        break;
    }

    default: {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
        break;
    }
    }

    pResult->x = x;
    pResult->y = y;
    pResult->z = z;

    return pAnmData;
}

const ResAnmChrNodeData::AnmData*
GetAnmRotation(math::MTX34* pResult, math::VEC3* pRawResult,
               const ResAnmChrInfoData& rInfoData,
               const ResAnmChrNodeData* pNodeData,
               const ResAnmChrNodeData::AnmData* pAnmData, f32 frame) {

    u32 flags = pNodeData->flags;
    f32 x, y, z;

    switch (flags & ResAnmChrNodeData::FLAG_ROT_FMT_MASK) {
    case 0: {
        x = pAnmData++->constValue;
        y = pAnmData++->constValue;
        z = pAnmData++->constValue;
        break;
    }

    case ResAnmChrNodeData::FLAG_ROT_FVS32_FMT: {
        x = CalcResult32(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_ROT_X_CONST);
        y = CalcResult32(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_ROT_Y_CONST);
        z = CalcResult32(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_ROT_Z_CONST);
        break;
    }

    case ResAnmChrNodeData::FLAG_ROT_FVS48_FMT: {
        x = CalcResult48(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_ROT_X_CONST);
        y = CalcResult48(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_ROT_Y_CONST);
        z = CalcResult48(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_ROT_Z_CONST);
        break;
    }

    case ResAnmChrNodeData::FLAG_ROT_FVS96_FMT: {
        x = CalcResult96(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_ROT_X_CONST);
        y = CalcResult96(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_ROT_Y_CONST);
        z = CalcResult96(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_ROT_Z_CONST);
        break;
    }

    case ResAnmChrNodeData::FLAG_ROT_CV8_FMT: {
        x = CalcResultFrm8(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                           flags & ResAnmChrNodeData::FLAG_ROT_X_CONST);
        y = CalcResultFrm8(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                           flags & ResAnmChrNodeData::FLAG_ROT_Y_CONST);
        z = CalcResultFrm8(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                           flags & ResAnmChrNodeData::FLAG_ROT_Z_CONST);
        break;
    }

    case ResAnmChrNodeData::FLAG_ROT_CV16_FMT: {
        x = CalcResultFrm16(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                            flags & ResAnmChrNodeData::FLAG_ROT_X_CONST);
        y = CalcResultFrm16(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                            flags & ResAnmChrNodeData::FLAG_ROT_Y_CONST);
        z = CalcResultFrm16(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                            flags & ResAnmChrNodeData::FLAG_ROT_Z_CONST);
        break;
    }

    case ResAnmChrNodeData::FLAG_ROT_CV32_FMT: {
        x = CalcResultFrm32(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                            flags & ResAnmChrNodeData::FLAG_ROT_X_CONST);
        y = CalcResultFrm32(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                            flags & ResAnmChrNodeData::FLAG_ROT_Y_CONST);
        z = CalcResultFrm32(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                            flags & ResAnmChrNodeData::FLAG_ROT_Z_CONST);
        break;
    }

    default: {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    }
    }

    math::MTX34RotXYZDeg(pResult, x, y, z);

    pRawResult->x = x;
    pRawResult->y = y;
    pRawResult->z = z;

    return pAnmData;
}

const ResAnmChrNodeData::AnmData*
GetAnmTranslation(math::VEC3* pTrans, const ResAnmChrNodeData* pNodeData,
                  const ResAnmChrNodeData::AnmData* pAnmData, f32 frame) {

    u32 flags = pNodeData->flags;
    f32 x, y, z;

    switch (flags & ResAnmChrNodeData::FLAG_TRANS_FMT_MASK) {
    case 0: {
        x = pAnmData++->constValue;
        y = pAnmData++->constValue;
        z = pAnmData++->constValue;
        break;
    }

    case ResAnmChrNodeData::FLAG_TRANS_FVS32_FMT: {
        x = CalcResult32(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_TRANS_X_CONST);
        y = CalcResult32(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_TRANS_Y_CONST);
        z = CalcResult32(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_TRANS_Z_CONST);
        break;
    }

    case ResAnmChrNodeData::FLAG_TRANS_FVS48_FMT: {
        x = CalcResult48(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_TRANS_X_CONST);
        y = CalcResult48(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_TRANS_Y_CONST);
        z = CalcResult48(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_TRANS_Z_CONST);
        break;
    }

    case ResAnmChrNodeData::FLAG_TRANS_FVS96_FMT: {
        x = CalcResult96(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_TRANS_X_CONST);
        y = CalcResult96(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_TRANS_Y_CONST);
        z = CalcResult96(pNodeData, pAnmData++, frame,
                         flags & ResAnmChrNodeData::FLAG_TRANS_Z_CONST);
        break;
    }

    default: {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    }
    }

    pTrans->x = x;
    pTrans->y = y;
    pTrans->z = z;

    return pAnmData;
}

/******************************************************************************
 *
 * Get animation result
 *
 ******************************************************************************/
void GetAnmResult_(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                   const ResAnmChrNodeData* pNodeData, f32 frame);
void GetAnmResult_S(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                    const ResAnmChrNodeData* pNodeData, f32 frame);
void GetAnmResult_R(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                    const ResAnmChrNodeData* pNodeData, f32 frame);
void GetAnmResult_SR(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                     const ResAnmChrNodeData* pNodeData, f32 frame);
void GetAnmResult_T(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                    const ResAnmChrNodeData* pNodeData, f32 frame);
void GetAnmResult_ST(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                     const ResAnmChrNodeData* pNodeData, f32 frame);
void GetAnmResult_RT(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                     const ResAnmChrNodeData* pNodeData, f32 frame);
void GetAnmResult_SRT(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                      const ResAnmChrNodeData* pNodeData, f32 frame);

typedef void (*GetAnmResultFunc)(ChrAnmResult* pResult,
                                 const ResAnmChrInfoData& rInfoData,
                                 const ResAnmChrNodeData* pNodeData, f32 frame);

const GetAnmResultFunc gGetAnmResultTable[] = {
    GetAnmResult_,   // 0 0 0
    GetAnmResult_S,  // 0 0 1
    GetAnmResult_R,  // 0 1 0
    GetAnmResult_SR, // 0 1 1
    GetAnmResult_T,  // 1 0 0
    GetAnmResult_ST, // 1 0 1
    GetAnmResult_RT, // 1 1 0
    GetAnmResult_SRT // 1 1 1
};

void GetAnmResult_(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                   const ResAnmChrNodeData* pNodeData, f32 frame) {
#pragma unused(rInfoData)
#pragma unused(pNodeData)
#pragma unused(frame)

    pResult->s.x = 1.0f;
    pResult->s.y = 1.0f;
    pResult->s.z = 1.0f;
    math::MTX34Identity(&pResult->rt);
}

void GetAnmResult_T(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                    const ResAnmChrNodeData* pNodeData, f32 frame) {
#pragma unused(rInfoData)

    const ResAnmChrNodeData::AnmData* pAnmData = pNodeData->anms;
    math::VEC3 t;

    pResult->s.x = 1.0f;
    pResult->s.y = 1.0f;
    pResult->s.z = 1.0f;
    math::MTX34Identity(&pResult->rt);

    GetAnmTranslation(&t, pNodeData, pAnmData, frame);
    pResult->rt._03 = t.x;
    pResult->rt._13 = t.y;
    pResult->rt._23 = t.z;
}

void GetAnmResult_R(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                    const ResAnmChrNodeData* pNodeData, f32 frame) {

    const ResAnmChrNodeData::AnmData* pAnmData = pNodeData->anms;

    pResult->s.x = 1.0f;
    pResult->s.y = 1.0f;
    pResult->s.z = 1.0f;

    GetAnmRotation(&pResult->rt, &pResult->rawR, rInfoData, pNodeData, pAnmData,
                   frame);

    pResult->flags |= ChrAnmResult::FLAG_ROT_RAW_FMT;

    pResult->rt._03 = 0.0f;
    pResult->rt._13 = 0.0f;
    pResult->rt._23 = 0.0f;
}

void GetAnmResult_S(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                    const ResAnmChrNodeData* pNodeData, f32 frame) {
#pragma unused(rInfoData)

    const ResAnmChrNodeData::AnmData* pAnmData = pNodeData->anms;

    GetAnmScale(&pResult->s, pNodeData, pAnmData, frame);
    math::MTX34Identity(&pResult->rt);
}

void GetAnmResult_RT(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                     const ResAnmChrNodeData* pNodeData, f32 frame) {

    const ResAnmChrNodeData::AnmData* pAnmData = pNodeData->anms;
    math::VEC3 t;

    pResult->s.x = 1.0f;
    pResult->s.y = 1.0f;
    pResult->s.z = 1.0f;

    pAnmData = GetAnmRotation(&pResult->rt, &pResult->rawR, rInfoData,
                              pNodeData, pAnmData, frame);

    pResult->flags |= ChrAnmResult::FLAG_ROT_RAW_FMT;

    GetAnmTranslation(&t, pNodeData, pAnmData, frame);
    pResult->rt._03 = t.x;
    pResult->rt._13 = t.y;
    pResult->rt._23 = t.z;
}

void GetAnmResult_SR(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                     const ResAnmChrNodeData* pNodeData, f32 frame) {

    const ResAnmChrNodeData::AnmData* pAnmData = pNodeData->anms;

    pAnmData = GetAnmScale(&pResult->s, pNodeData, pAnmData, frame);

    GetAnmRotation(&pResult->rt, &pResult->rawR, rInfoData, pNodeData, pAnmData,
                   frame);

    pResult->flags |= ChrAnmResult::FLAG_ROT_RAW_FMT;

    pResult->rt._03 = 0.0f;
    pResult->rt._13 = 0.0f;
    pResult->rt._23 = 0.0f;
}

void GetAnmResult_ST(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                     const ResAnmChrNodeData* pNodeData, f32 frame) {
#pragma unused(rInfoData)

    const ResAnmChrNodeData::AnmData* pAnmData = pNodeData->anms;
    math::VEC3 t;

    pAnmData = GetAnmScale(&pResult->s, pNodeData, pAnmData, frame);
    math::MTX34Identity(&pResult->rt);

    GetAnmTranslation(&t, pNodeData, pAnmData, frame);
    pResult->rt._03 = t.x;
    pResult->rt._13 = t.y;
    pResult->rt._23 = t.z;
}

void GetAnmResult_SRT(ChrAnmResult* pResult, const ResAnmChrInfoData& rInfoData,
                      const ResAnmChrNodeData* pNodeData, f32 frame) {

    const ResAnmChrNodeData::AnmData* pAnmData = pNodeData->anms;
    math::VEC3 t;

    pAnmData = GetAnmScale(&pResult->s, pNodeData, pAnmData, frame);
    pAnmData = GetAnmRotation(&pResult->rt, &pResult->rawR, rInfoData,
                              pNodeData, pAnmData, frame);
    pAnmData = GetAnmTranslation(&t, pNodeData, pAnmData, frame);

    pResult->flags |= ChrAnmResult::FLAG_ROT_RAW_FMT;

    pResult->rt._03 = t.x;
    pResult->rt._13 = t.y;
    pResult->rt._23 = t.z;
}

} // namespace

/******************************************************************************
 *
 * ResAnmChr
 *
 ******************************************************************************/
void ResAnmChr::GetAnmResult(ChrAnmResult* pResult, u32 idx, f32 frame) const {
    const ResAnmChrNodeData* pNodeData = GetNodeAnm(idx);

    u32 flags = pNodeData->flags;

    pResult->flags =
        flags &
        (ChrAnmResult::FLAG_ANM_EXISTS | ChrAnmResult::FLAG_MTX_IDENT |
         ChrAnmResult::FLAG_ROT_TRANS_ZERO | ChrAnmResult::FLAG_SCALE_ONE |
         ChrAnmResult::FLAG_SCALE_UNIFORM | ChrAnmResult::FLAG_ROT_ZERO |
         ChrAnmResult::FLAG_TRANS_ZERO | ChrAnmResult::FLAG_PATCH_SCALE |
         ChrAnmResult::FLAG_PATCH_ROT | ChrAnmResult::FLAG_PATCH_TRANS |
         ChrAnmResult::FLAG_SSC_APPLY | ChrAnmResult::FLAG_SSC_PARENT |
         ChrAnmResult::FLAG_XSI_SCALING);

    u32 index = (flags & ResAnmChrNodeData::FLAG_HAS_SRT_MASK) >> 22;
    gGetAnmResultTable[index](pResult, ref().info, pNodeData, frame);
}

/******************************************************************************
 *
 * ChrAnmResult
 *
 ******************************************************************************/
void ChrAnmResult::GetScale(math::VEC3* pScale) const {
    if (flags & FLAG_SCALE_ONE) {
        pScale->x = 1.0f;
        pScale->y = 1.0f;
        pScale->z = 1.0f;
    } else {
        pScale->x = s.x;
        pScale->y = s.y;
        pScale->z = s.z;
    }
}

bool ChrAnmResult::GetRotateDeg(math::VEC3* pRotate) const {
    if (flags & FLAG_ROT_ZERO) {
        pRotate->x = 0.0f;
        pRotate->y = 0.0f;
        pRotate->z = 0.0f;
        return true;
    }

    if (flags & FLAG_ROT_RAW_FMT) {
        pRotate->x = rawR.x;
        pRotate->y = rawR.y;
        pRotate->z = rawR.z;
        return true;
    }

    // FSqrt returns 0 when -sin(y) <= -1 or -sin(y) >= 1
    f32 y = math::FSqrt(-(rt._20 * rt._20 - 1.0f));

    if (y == 0.0f) {
        pRotate->x = math::Atan2Deg(rt._02 + rt._11, rt._12 + rt._01);
        pRotate->y = math::FSelect(rt._20, -90, 90);
        pRotate->z = math::Atan2Deg(rt._02 + rt._11, rt._12 - rt._01);
    } else {
        pRotate->x = math::Atan2Deg(rt._21, rt._22);
        pRotate->y = math::Atan2Deg(-rt._20, y);
        pRotate->z = math::Atan2Deg(rt._10, rt._00);
    }

    return false;
}

void ChrAnmResult::GetTranslate(math::VEC3* pTrans) const {
    if (flags & FLAG_TRANS_ZERO) {
        pTrans->x = 0.0f;
        pTrans->y = 0.0f;
        pTrans->z = 0.0f;
    } else {
        pTrans->x = rt._03;
        pTrans->y = rt._13;
        pTrans->z = rt._23;
    }
}

void ChrAnmResult::GetRotTrans(math::MTX34* pRotTrans) const {
    if (flags & FLAG_ROT_ZERO) {
        if (flags & FLAG_TRANS_ZERO) {
            math::MTX34Identity(pRotTrans);
        } else {
            math::MTX34Identity(pRotTrans);
            pRotTrans->_03 = rt._03;
            pRotTrans->_13 = rt._13;
            pRotTrans->_23 = rt._23;
        }
    } else if (flags & FLAG_TRANS_ZERO) {
        math::MTX34Copy(pRotTrans, &rt);
        pRotTrans->_03 = 0.0f;
        pRotTrans->_13 = 0.0f;
        pRotTrans->_23 = 0.0f;
    } else {
        math::MTX34Copy(pRotTrans, &rt);
    }
}

void ChrAnmResult::SetScale(const math::VEC3* pScale) {
    if (pScale->x == 1.0f && pScale->y == 1.0f && pScale->z == 1.0f) {
        flags |= FLAG_SCALE_ONE | FLAG_SCALE_UNIFORM;

        if (flags & FLAG_ROT_TRANS_ZERO) {
            flags |= FLAG_MTX_IDENT;
        }
    } else {
        flags &= ~(FLAG_MTX_IDENT | FLAG_SCALE_ONE | FLAG_SCALE_UNIFORM);

        if (pScale->x == pScale->y && pScale->y == pScale->z) {
            flags |= FLAG_SCALE_UNIFORM;
        }
    }

    s = *pScale;
}

void ChrAnmResult::SetRotTrans(const math::MTX34* pRotTrans) {
    bool rotZero = pRotTrans->_00 == 1.0f && pRotTrans->_01 == 0.0f &&
                   pRotTrans->_02 == 0.0f && pRotTrans->_10 == 0.0f &&
                   pRotTrans->_11 == 1.0f && pRotTrans->_12 == 0.0f &&
                   pRotTrans->_20 == 0.0f && pRotTrans->_21 == 0.0f &&
                   pRotTrans->_22 == 1.0f;

    bool transZero = pRotTrans->_03 == 0.0f && pRotTrans->_13 == 0.0f &&
                     pRotTrans->_23 == 0.0f;

    if (rotZero) {
        if (transZero) {
            flags |= FLAG_ROT_TRANS_ZERO | FLAG_ROT_ZERO | FLAG_TRANS_ZERO;

            if (flags & FLAG_SCALE_ONE) {
                flags |= FLAG_MTX_IDENT;
            }
        } else {
            flags |= FLAG_ROT_ZERO;
            flags &= ~(FLAG_MTX_IDENT | FLAG_ROT_TRANS_ZERO | FLAG_TRANS_ZERO);
        }
    } else if (transZero) {
        flags |= FLAG_TRANS_ZERO;
        flags &= ~(FLAG_MTX_IDENT | FLAG_ROT_TRANS_ZERO | FLAG_ROT_ZERO);
    } else {
        flags &= ~(FLAG_MTX_IDENT | FLAG_ROT_TRANS_ZERO | FLAG_ROT_ZERO |
                   FLAG_TRANS_ZERO);
    }

    math::MTX34Copy(&rt, pRotTrans);
    flags &= ~FLAG_ROT_RAW_FMT;
}

} // namespace g3d
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_804A1BF8;
extern "C" float lbl_804A1BFC;
extern "C" float lbl_804A1C00;
extern "C" float lbl_804A1C04;
extern "C" float lbl_804A1C08;
extern "C" float lbl_804A1C10;
extern "C" float lbl_804A1C18;
extern "C" float lbl_804A1C20;
extern "C" float lbl_804A1C28;
extern "C" float lbl_804A1C30;
extern "C" float lbl_804A1C34;
extern "C" float lbl_804A1C38;
extern "C" float lbl_804A1C3C;
extern "C" float lbl_804A1C40;
extern "C" float lbl_804A1C44;
extern "C" float lbl_804A1C48;
extern "C" float lbl_804A1C50;
extern "C" void GetMtx__Q34nw4r3g3d12ChrAnmResultCFPQ34nw4r4math5MTX34();
extern "C" void GetResPltt__Q34nw4r3g3d7ResFileCFQ34nw4r3g3d7ResName();
extern "C" void GetResTex__Q34nw4r3g3d7ResFileCFQ34nw4r3g3d7ResName();
extern "C" void GetResUserData__Q34nw4r3g3d9ResAnmChrFv();
extern "C" void GetRotTrans__Q34nw4r3g3d12ChrAnmResultCFPQ34nw4r4math5MTX34();
extern "C" void MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff();
extern "C" void MTX34Scale__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void fn_801D4B44();
extern "C" void fn_801D4C70();
extern "C" void fn_801D4D70();
extern "C" void fn_801D4E90();
extern "C" void fn_801D4FFC();
extern "C" void fn_801D50A8();
extern "C" void fn_801D5228();
extern "C" void fn_801D5398();
extern "C" void fn_801D5538();
extern "C" void fn_801D594C();
extern "C" void fn_801D5C04();
extern "C" void fn_801D5D30();
extern "C" void fn_801D5EA0();
extern "C" void fn_801D6060();
extern "C" void fn_801D6ABC();
extern "C" void fn_801D6D2C();
extern "C" void fn_801D6D44();
extern "C" void fn_801D6DD0();
extern "C" void fn_801D6E3C();
extern "C" void fn_801D6E7C();
extern "C" void fn_801D6F24();
extern "C" void fn_801D6FC0();
extern "C" void fn_801D7058();

// asm_to_cpp: GetResUserData__Q34nw4r3g3d9ResAnmChrFv
extern "C" asm void GetResUserData__Q34nw4r3g3d9ResAnmChrFv() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    beq lbl_801D4B3C
    add r3, r3, r0
    blr
lbl_801D4B3C:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801D4B44
extern "C" asm void fn_801D4B44() {
    nofralloc
    lhz r5, 0x0(r3)
    lfs f2, 0x8(r3)
    subi r0, r5, 0x1
    stwu r1, -0x10(r1)
    mulli r0, r0, 0xc
    fcmpo cr0, f1, f2
    add r4, r3, r0
    opword 0x4C401382
    bne lbl_801D4B70
    lfs f1, 0xc(r3)
    b lbl_801D4C68
lbl_801D4B70:
    lfs f0, 0x8(r4)
    fcmpo cr0, f0, f1
    opword 0x4C401382
    bne lbl_801D4B88
    lfs f1, 0xc(r4)
    b lbl_801D4C68
lbl_801D4B88:
    sth r5, 0x8(r1)
    fsubs f3, f1, f2
    opword 0xE041B008
    lfs f0, 0x4(r3)
    fmuls f2, f3, f2
    fmuls f0, f0, f2
    opword 0xF001B00C
    lhz r0, 0xc(r1)
    mulli r0, r0, 0xc
    add r3, r3, r0
    lfsu f0, 0x8(r3)
    fcmpo cr0, f1, f0
    bge lbl_801D4BCC
lbl_801D4BBC:
    lfsu f0, -0xc(r3)
    fcmpo cr0, f1, f0
    blt lbl_801D4BBC
    b lbl_801D4BE0
lbl_801D4BCC:
    lfsu f0, 0xc(r3)
    fcmpo cr0, f0, f1
    opword 0x4C401382
    beq lbl_801D4BCC
    subi r3, r3, 0xc
lbl_801D4BE0:
    lfs f3, 0x0(r3)
    fcmpu cr0, f3, f1
    bne lbl_801D4BF4
    lfs f1, 0x4(r3)
    b lbl_801D4C68
lbl_801D4BF4:
    lfs f2, 0xc(r3)
    fsubs f10, f1, f3
    lfs f0, lbl_804A1BFC
    fsubs f11, f2, f3
    lfs f2, 0x10(r3)
    lfs f5, 0x4(r3)
    lfs f1, lbl_804A1C00
    fres f8, f11
    lfs f4, lbl_804A1BF8
    lfs f7, 0x14(r3)
    lfs f6, 0x8(r3)
    opword 0x1128402A
    opword 0x11080232
    fsubs f3, f5, f2
    opword 0x110B4A3C
    fmuls f9, f10, f8
    fmuls f2, f0, f9
    fsubs f8, f9, f4
    fmuls f0, f9, f7
    fsubs f4, f2, f1
    fmuls f1, f8, f6
    fmuls f2, f10, f8
    fmuls f3, f4, f3
    fadds f0, f1, f0
    fmuls f1, f9, f3
    fmuls f0, f2, f0
    fmuls f1, f9, f1
    fadds f1, f5, f1
    fadds f1, f1, f0
lbl_801D4C68:
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801D4C70
extern "C" asm void fn_801D4C70() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    addi r3, r1, 0x18
    bl modf
    lfd f2, 0x18(r1)
    frsp f1, f1
    lfs f0, lbl_804A1C04
    frsp f2, f2
    fcmpu cr0, f0, f1
    fctiwz f0, f2
    stfd f0, 0x20(r1)
    lwz r3, 0x24(r1)
    bne lbl_801D4CBC
    slwi r0, r3, 2
    lwzx r3, r31, r0
    b lbl_801D4D5C
lbl_801D4CBC:
    addi r0, r3, 0x1
    lfs f0, lbl_804A1C08
    slwi r3, r3, 2
    slwi r0, r0, 2
    lwzx r3, r31, r3
    lwzx r0, r31, r0
    fmuls f0, f0, f1
    stw r3, 0x14(r1)
    stw r0, 0x10(r1)
    opword 0xF001D008
    lbz r10, 0x14(r1)
    lbz r0, 0x10(r1)
    lha r6, 0x8(r1)
    subf r3, r10, r0
    lbz r7, 0x15(r1)
    mullw r5, r6, r3
    lbz r0, 0x11(r1)
    lbz r8, 0x16(r1)
    subf r4, r7, r0
    lbz r3, 0x12(r1)
    lbz r9, 0x17(r1)
    lbz r0, 0x13(r1)
    subf r3, r8, r3
    srawi r5, r5, 15
    mullw r4, r6, r4
    subf r0, r9, r0
    add r5, r10, r5
    stb r5, 0xc(r1)
    srawi r4, r4, 15
    mullw r3, r6, r3
    add r4, r7, r4
    stb r4, 0xd(r1)
    srawi r3, r3, 15
    mullw r0, r6, r0
    add r3, r8, r3
    stb r3, 0xe(r1)
    srawi r0, r0, 15
    add r0, r9, r0
    stb r0, 0xf(r1)
    lwz r3, 0xc(r1)
lbl_801D4D5C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801D4D70
extern "C" asm void fn_801D4D70() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r5, 0x0(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r0, 0x10(r5)
    cmpwi r0, 0x0
    beq lbl_801D4D98
    add r0, r5, r0
    b lbl_801D4D9C
lbl_801D4D98:
    li r0, 0x0
lbl_801D4D9C:
    cmpwi r0, 0x0
    beq lbl_801D4DCC
    addi r4, r4, 0x1
    slwi r4, r4, 4
    add r4, r0, r4
    lwz r4, 0x14(r4)
    cmpwi r4, 0x0
    beq lbl_801D4DC4
    add r31, r0, r4
    b lbl_801D4DD0
lbl_801D4DC4:
    li r31, 0x0
    b lbl_801D4DD0
lbl_801D4DCC:
    li r31, 0x0
lbl_801D4DD0:
    lwz r4, 0x4(r31)
    lwz r3, 0x0(r3)
    rlwinm. r0, r4, 0, 30, 30
    beq lbl_801D4DE8
    clrlwi r3, r4, 31
    b lbl_801D4E7C
lbl_801D4DE8:
    lfs f0, lbl_804A1C10
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801D4DFC
    b lbl_801D4E3C
lbl_801D4DFC:
    lhz r3, 0x20(r3)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f2, lbl_804A1C18
    stw r3, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fcmpo cr0, f0, f1
    opword 0x4C401382
    bne lbl_801D4E38
    stw r3, 0x14(r1)
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    b lbl_801D4E3C
lbl_801D4E38:
    fmr f0, f1
lbl_801D4E3C:
    fmr f1, f0
    bl floor
    frsp f0, f1
    lis r3, 0x8000
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    rlwinm r4, r0, 29, 3, 29
    clrlwi r0, r0, 27
    add r4, r31, r4
    lwz r4, 0x8(r4)
    srw r0, r3, r0
    and r3, r4, r0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_801D4E7C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801D4E90
extern "C" asm void fn_801D4E90() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_26
    lwz r6, 0x0(r3)
    mr r30, r4
    lwz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_801D4EC8
    add r0, r6, r0
    b lbl_801D4ECC
lbl_801D4EC8:
    li r0, 0x0
lbl_801D4ECC:
    cmpwi r0, 0x0
    beq lbl_801D4EFC
    addi r5, r5, 0x1
    slwi r5, r5, 4
    add r5, r0, r5
    lwz r5, 0x14(r5)
    cmpwi r5, 0x0
    beq lbl_801D4EF4
    add r5, r0, r5
    b lbl_801D4F00
lbl_801D4EF4:
    li r5, 0x0
    b lbl_801D4F00
lbl_801D4EFC:
    li r5, 0x0
lbl_801D4F00:
    lwz r31, 0x4(r5)
    li r0, 0x0
    lwz r3, 0x0(r3)
    addi r27, r5, 0x8
    cmpwi r31, 0x0
    stw r0, 0x0(r4)
    beq lbl_801D4FDC
    lfs f31, lbl_804A1C20
    fcmpo cr0, f1, f31
    opword 0x4C401382
    bne lbl_801D4F30
    b lbl_801D4F70
lbl_801D4F30:
    lhz r3, 0x20(r3)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f2, lbl_804A1C28
    stw r3, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fcmpo cr0, f0, f1
    opword 0x4C401382
    bne lbl_801D4F6C
    stw r3, 0x14(r1)
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f31, f0, f2
    b lbl_801D4F70
lbl_801D4F6C:
    fmr f31, f1
lbl_801D4F70:
    mr r28, r30
    li r26, 0x0
    li r29, 0x1
lbl_801D4F7C:
    clrlwi. r0, r31, 31
    beq lbl_801D4FC8
    lwz r4, 0x0(r30)
    rlwinm. r0, r31, 0, 30, 30
    slw r3, r29, r26
    or r0, r4, r3
    stw r0, 0x0(r30)
    lwz r0, 0x0(r27)
    stw r0, 0x30(r28)
    beq lbl_801D4FAC
    lwz r3, 0x4(r27)
    b lbl_801D4FC0
lbl_801D4FAC:
    lwz r0, 0x4(r27)
    fmr f1, f31
    add r3, r27, r0
    addi r3, r3, 0x4
    bl fn_801D4C70
lbl_801D4FC0:
    stw r3, 0x4(r28)
    addi r27, r27, 0x8
lbl_801D4FC8:
    addi r26, r26, 0x1
    srwi r31, r31, 2
    cmpwi r26, 0xb
    addi r28, r28, 0x4
    blt lbl_801D4F7C
lbl_801D4FDC:
    opword 0xE3E10038
    addi r11, r1, 0x30
    lfd f31, 0x30(r1)
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801D4FFC
extern "C" asm void fn_801D4FFC() {
    nofralloc
    lhz r5, 0x0(r3)
    addi r6, r3, 0x8
    lfs f2, 0x8(r3)
    subi r0, r5, 0x1
    stwu r1, -0x10(r1)
    slwi r0, r0, 3
    fcmpo cr0, f1, f2
    add r4, r3, r0
    addi r4, r4, 0x8
    opword 0x4C401382
    bne lbl_801D5030
    mr r3, r6
    b lbl_801D50A0
lbl_801D5030:
    lfs f0, 0x0(r4)
    fcmpo cr0, f0, f1
    opword 0x4C401382
    bne lbl_801D5048
    mr r3, r4
    b lbl_801D50A0
lbl_801D5048:
    sth r5, 0x8(r1)
    fsubs f3, f1, f2
    opword 0xE041B008
    lfs f0, 0x4(r3)
    fmuls f2, f3, f2
    fmuls f0, f0, f2
    opword 0xF001B00C
    lhz r0, 0xc(r1)
    slwi r0, r0, 3
    add r3, r3, r0
    lfsu f0, 0x8(r3)
    fcmpo cr0, f1, f0
    bge lbl_801D508C
lbl_801D507C:
    lfsu f0, -0x8(r3)
    fcmpo cr0, f1, f0
    blt lbl_801D507C
    b lbl_801D50A0
lbl_801D508C:
    lfsu f0, 0x8(r3)
    fcmpo cr0, f0, f1
    opword 0x4C401382
    beq lbl_801D508C
    subi r3, r3, 0x8
lbl_801D50A0:
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801D50A8
extern "C" asm void fn_801D50A8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x38
    stfd f31, 0x38(r1)
    bl _savegpr_23
    lwz r6, 0x0(r3)
    fmr f31, f1
    mr r24, r4
    lwz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_801D50E0
    add r0, r6, r0
    b lbl_801D50E4
lbl_801D50E0:
    li r0, 0x0
lbl_801D50E4:
    cmpwi r0, 0x0
    beq lbl_801D5114
    addi r5, r5, 0x1
    slwi r5, r5, 4
    add r5, r0, r5
    lwz r5, 0x14(r5)
    cmpwi r5, 0x0
    beq lbl_801D510C
    add r31, r0, r5
    b lbl_801D5118
lbl_801D510C:
    li r31, 0x0
    b lbl_801D5118
lbl_801D5114:
    li r31, 0x0
lbl_801D5118:
    lwz r3, 0x0(r3)
    addi r27, r31, 0x8
    lwz r26, 0x4(r31)
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_801D5138
    add r30, r3, r0
    b lbl_801D513C
lbl_801D5138:
    li r30, 0x0
lbl_801D513C:
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_801D5150
    add r29, r3, r0
    b lbl_801D5154
lbl_801D5150:
    li r29, 0x0
lbl_801D5154:
    li r0, 0x0
    mr r28, r24
    stb r0, 0x0(r4)
    li r25, 0x0
    li r23, 0x1
    stb r0, 0x1(r4)
lbl_801D516C:
    clrlwi. r0, r26, 31
    beq lbl_801D51F8
    rlwinm. r0, r26, 0, 30, 30
    beq lbl_801D5188
    lhz r4, 0x0(r27)
    lhz r3, 0x2(r27)
    b lbl_801D51A0
lbl_801D5188:
    lwz r0, 0x0(r27)
    fmr f1, f31
    add r3, r0, r31
    bl fn_801D4FFC
    lhz r4, 0x4(r3)
    lhz r3, 0x6(r3)
lbl_801D51A0:
    rlwinm. r0, r26, 0, 29, 29
    slw r5, r23, r25
    beq lbl_801D51CC
    slwi r0, r4, 2
    lwzx r0, r30, r0
    cmpwi r0, 0x0
    beq lbl_801D51CC
    stw r0, 0x4(r28)
    lbz r0, 0x0(r24)
    or r0, r0, r5
    stb r0, 0x0(r24)
lbl_801D51CC:
    rlwinm. r0, r26, 0, 28, 28
    beq lbl_801D51F4
    slwi r0, r3, 2
    lwzx r0, r29, r0
    cmpwi r0, 0x0
    beq lbl_801D51F4
    stw r0, 0x24(r28)
    lbz r0, 0x1(r24)
    or r0, r0, r5
    stb r0, 0x1(r24)
lbl_801D51F4:
    addi r27, r27, 0x4
lbl_801D51F8:
    addi r25, r25, 0x1
    srwi r26, r26, 4
    cmpwi r25, 0x8
    addi r28, r28, 0x4
    blt lbl_801D516C
    addi r11, r1, 0x38
    lfd f31, 0x38(r1)
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801D5228
extern "C" asm void fn_801D5228() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    lwz r3, 0x0(r3)
    mr r28, r4
    lwz r0, 0x14(r3)
    lhz r31, 0x34(r3)
    cmpwi r0, 0x0
    lhz r30, 0x36(r3)
    beq lbl_801D5260
    add r27, r3, r0
    b lbl_801D5264
lbl_801D5260:
    li r27, 0x0
lbl_801D5264:
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_801D5278
    add r26, r3, r0
    b lbl_801D527C
lbl_801D5278:
    li r26, 0x0
lbl_801D527C:
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_801D5290
    add r24, r3, r0
    b lbl_801D5294
lbl_801D5290:
    li r24, 0x0
lbl_801D5294:
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_801D52A8
    add r25, r3, r0
    b lbl_801D52AC
lbl_801D52A8:
    li r25, 0x0
lbl_801D52AC:
    mr r23, r27
    li r29, 0x0
    li r22, 0x0
    b lbl_801D5308
lbl_801D52BC:
    lwz r0, 0x0(r24)
    cmpwi r0, 0x0
    beq lbl_801D52D0
    addi r29, r29, 0x1
    b lbl_801D52FC
lbl_801D52D0:
    lwz r0, 0x0(r23)
    mr r3, r28
    addi r4, r1, 0xc
    add r5, r27, r0
    subi r0, r5, 0x4
    stw r0, 0xc(r1)
    bl GetResTex__Q34nw4r3g3d7ResFileCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D52FC
    stw r3, 0x0(r24)
    addi r29, r29, 0x1
lbl_801D52FC:
    addi r24, r24, 0x4
    addi r23, r23, 0x4
    addi r22, r22, 0x1
lbl_801D5308:
    cmpw r22, r31
    blt lbl_801D52BC
    mr r27, r26
    li r22, 0x0
    b lbl_801D5368
lbl_801D531C:
    lwz r0, 0x0(r25)
    cmpwi r0, 0x0
    beq lbl_801D5330
    addi r29, r29, 0x1
    b lbl_801D535C
lbl_801D5330:
    lwz r0, 0x0(r27)
    mr r3, r28
    addi r4, r1, 0x8
    add r5, r26, r0
    subi r0, r5, 0x4
    stw r0, 0x8(r1)
    bl GetResPltt__Q34nw4r3g3d7ResFileCFQ34nw4r3g3d7ResName
    cmpwi r3, 0x0
    beq lbl_801D535C
    stw r3, 0x0(r25)
    addi r29, r29, 0x1
lbl_801D535C:
    addi r25, r25, 0x4
    addi r27, r27, 0x4
    addi r22, r22, 0x1
lbl_801D5368:
    cmpw r22, r30
    blt lbl_801D531C
    add r0, r31, r30
    addi r11, r1, 0x40
    subf r0, r29, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801D5398
extern "C" asm void fn_801D5398() {
    nofralloc
    lwz r4, 0x0(r3)
    lwz r0, 0x1c(r4)
    lhz r9, 0x34(r4)
    cmpwi r0, 0x0
    lhz r3, 0x36(r4)
    beq lbl_801D53B8
    add r5, r4, r0
    b lbl_801D53BC
lbl_801D53B8:
    li r5, 0x0
lbl_801D53BC:
    lwz r0, 0x20(r4)
    cmpwi r0, 0x0
    beq lbl_801D53D0
    add r6, r4, r0
    b lbl_801D53D4
lbl_801D53D0:
    li r6, 0x0
lbl_801D53D4:
    cmpwi cr1, r9, 0x0
    li r10, 0x0
    ble cr1, lbl_801D5484
    ble cr1, lbl_801D5484
    cmpwi r9, 0x8
    subi r7, r9, 0x8
    ble lbl_801D545C
    li r8, 0x0
    blt cr1, lbl_801D540C
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r9, r0
    bgt lbl_801D540C
    li r8, 0x1
lbl_801D540C:
    cmpwi r8, 0x0
    beq lbl_801D545C
    addi r0, r7, 0x7
    mr r8, r5
    srwi r0, r0, 3
    li r4, 0x0
    mtctr r0
    cmpwi r7, 0x0
    ble lbl_801D545C
lbl_801D5430:
    stw r4, 0x0(r8)
    addi r10, r10, 0x8
    stw r4, 0x4(r8)
    stw r4, 0x8(r8)
    stw r4, 0xc(r8)
    stw r4, 0x10(r8)
    stw r4, 0x14(r8)
    stw r4, 0x18(r8)
    stw r4, 0x1c(r8)
    addi r8, r8, 0x20
    bdnz lbl_801D5430
lbl_801D545C:
    slwi r4, r10, 2
    subf r0, r10, r9
    add r5, r5, r4
    li r4, 0x0
    mtctr r0
    cmpw r10, r9
    bge lbl_801D5484
lbl_801D5478:
    stw r4, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_801D5478
lbl_801D5484:
    cmpwi cr1, r3, 0x0
    li r8, 0x0
    blelr cr1
    blelr cr1
    cmpwi r3, 0x8
    subi r5, r3, 0x8
    ble lbl_801D550C
    li r7, 0x0
    blt cr1, lbl_801D54BC
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r3, r0
    bgt lbl_801D54BC
    li r7, 0x1
lbl_801D54BC:
    cmpwi r7, 0x0
    beq lbl_801D550C
    addi r0, r5, 0x7
    mr r7, r6
    srwi r0, r0, 3
    li r4, 0x0
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_801D550C
lbl_801D54E0:
    stw r4, 0x0(r7)
    addi r8, r8, 0x8
    stw r4, 0x4(r7)
    stw r4, 0x8(r7)
    stw r4, 0xc(r7)
    stw r4, 0x10(r7)
    stw r4, 0x14(r7)
    stw r4, 0x18(r7)
    stw r4, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_801D54E0
lbl_801D550C:
    slwi r4, r8, 2
    subf r0, r8, r3
    add r5, r6, r4
    li r4, 0x0
    mtctr r0
    cmpw r8, r3
    bgelr
lbl_801D5528:
    stw r4, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_801D5528
    blr
}

// asm_to_cpp: fn_801D5538
extern "C" asm void fn_801D5538() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    stfd f29, 0x40(r1)
    opword 0xF3A10048
    addi r11, r1, 0x40
    bl _savegpr_21
    lwz r6, 0x0(r3)
    fmr f29, f1
    mr r22, r4
    lwz r0, 0x10(r6)
    cmpwi r0, 0x0
    beq lbl_801D5584
    add r0, r6, r0
    b lbl_801D5588
lbl_801D5584:
    li r0, 0x0
lbl_801D5588:
    cmpwi r0, 0x0
    beq lbl_801D55B8
    addi r5, r5, 0x1
    slwi r5, r5, 4
    add r5, r0, r5
    lwz r5, 0x14(r5)
    cmpwi r5, 0x0
    beq lbl_801D55B0
    add r30, r0, r5
    b lbl_801D55BC
lbl_801D55B0:
    li r30, 0x0
    b lbl_801D55BC
lbl_801D55B8:
    li r30, 0x0
lbl_801D55BC:
    lwz r26, 0x4(r30)
    li r0, 0x0
    lwz r24, 0x8(r30)
    addi r25, r30, 0xc
    lwz r3, 0x0(r3)
    addi r27, r4, 0xc
    stw r0, 0x0(r4)
    li r28, 0x0
    lfs f31, lbl_804A1C30
    stw r0, 0x4(r4)
    lfs f30, lbl_804A1C34
    lwz r0, 0x24(r3)
    stw r0, 0x8(r4)
    b lbl_801D5770
lbl_801D55F4:
    clrlwi. r0, r26, 31
    beq lbl_801D5764
    lwz r0, 0x0(r25)
    li r29, 0x0
    addi r25, r25, 0x4
    lwzx r31, r30, r0
    add r23, r0, r30
    rlwinm. r0, r31, 0, 30, 30
    bne lbl_801D5688
    rlwinm. r0, r31, 0, 26, 26
    addi r3, r23, 0x4
    li r29, 0x1
    beq lbl_801D5630
    lfs f1, 0x0(r3)
    b lbl_801D5640
lbl_801D5630:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r3, r0
    bl fn_801D4B44
lbl_801D5640:
    rlwinm. r0, r31, 0, 27, 27
    stfs f1, 0x0(r27)
    beq lbl_801D5658
    lfs f0, 0x0(r27)
    stfs f0, 0x4(r27)
    b lbl_801D5690
lbl_801D5658:
    rlwinm. r0, r31, 0, 25, 25
    addi r3, r23, 0x8
    li r29, 0x2
    beq lbl_801D5670
    lfs f1, 0x0(r3)
    b lbl_801D5680
lbl_801D5670:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r3, r0
    bl fn_801D4B44
lbl_801D5680:
    stfs f1, 0x4(r27)
    b lbl_801D5690
lbl_801D5688:
    stfs f31, 0x0(r27)
    stfs f31, 0x4(r27)
lbl_801D5690:
    rlwinm. r0, r31, 0, 29, 29
    bne lbl_801D56D0
    rlwinm. r0, r31, 0, 24, 24
    slwi r0, r29, 2
    addi r29, r29, 0x1
    add r3, r23, r0
    addi r3, r3, 0x4
    beq lbl_801D56B8
    lfs f1, 0x0(r3)
    b lbl_801D56C8
lbl_801D56B8:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r3, r0
    bl fn_801D4B44
lbl_801D56C8:
    stfs f1, 0x8(r27)
    b lbl_801D56D4
lbl_801D56D0:
    stfs f30, 0x8(r27)
lbl_801D56D4:
    rlwinm. r0, r31, 0, 28, 28
    bne lbl_801D5748
    rlwinm. r0, r31, 0, 23, 23
    extrwi r21, r31, 1, 22
    slwi r0, r29, 2
    addi r29, r29, 0x1
    add r3, r23, r0
    addi r3, r3, 0x4
    beq lbl_801D5700
    lfs f1, 0x0(r3)
    b lbl_801D5710
lbl_801D5700:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r3, r0
    bl fn_801D4B44
lbl_801D5710:
    slwi r0, r29, 2
    cmpwi r21, 0x0
    add r3, r23, r0
    stfs f1, 0xc(r27)
    addi r3, r3, 0x4
    beq lbl_801D5730
    lfs f1, 0x0(r3)
    b lbl_801D5740
lbl_801D5730:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r3, r0
    bl fn_801D4B44
lbl_801D5740:
    stfs f1, 0x10(r27)
    b lbl_801D5750
lbl_801D5748:
    stfs f30, 0xc(r27)
    stfs f30, 0x10(r27)
lbl_801D5750:
    clrlwi r0, r31, 28
    lwz r3, 0x0(r22)
    slw r0, r0, r28
    or r0, r3, r0
    stw r0, 0x0(r22)
lbl_801D5764:
    srwi r26, r26, 1
    addi r27, r27, 0x14
    addi r28, r28, 0x4
lbl_801D5770:
    cmpwi r26, 0x0
    bne lbl_801D55F4
    lfs f30, lbl_804A1C30
    li r26, 0x0
    lfs f31, lbl_804A1C34
    li r27, 0x0
    b lbl_801D5914
lbl_801D578C:
    clrlwi. r0, r24, 31
    beq lbl_801D5908
    lwz r3, 0x0(r25)
    addi r0, r26, 0x8
    mulli r0, r0, 0x14
    li r28, 0x0
    lwzx r29, r3, r30
    add r23, r3, r30
    addi r25, r25, 0x4
    add r31, r22, r0
    rlwinm. r0, r29, 0, 30, 30
    bne lbl_801D582C
    rlwinm. r0, r29, 0, 26, 26
    addi r3, r23, 0x4
    li r28, 0x1
    beq lbl_801D57D4
    lfs f1, 0x0(r3)
    b lbl_801D57E4
lbl_801D57D4:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r3, r0
    bl fn_801D4B44
lbl_801D57E4:
    rlwinm. r0, r29, 0, 27, 27
    stfs f1, 0xc(r31)
    beq lbl_801D57FC
    lfs f0, 0xc(r31)
    stfs f0, 0x10(r31)
    b lbl_801D5834
lbl_801D57FC:
    rlwinm. r0, r29, 0, 25, 25
    addi r3, r23, 0x8
    li r28, 0x2
    beq lbl_801D5814
    lfs f1, 0x0(r3)
    b lbl_801D5824
lbl_801D5814:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r3, r0
    bl fn_801D4B44
lbl_801D5824:
    stfs f1, 0x10(r31)
    b lbl_801D5834
lbl_801D582C:
    stfs f30, 0xc(r31)
    stfs f30, 0x10(r31)
lbl_801D5834:
    rlwinm. r0, r29, 0, 29, 29
    bne lbl_801D5874
    rlwinm. r0, r29, 0, 24, 24
    slwi r0, r28, 2
    addi r28, r28, 0x1
    add r3, r23, r0
    addi r3, r3, 0x4
    beq lbl_801D585C
    lfs f1, 0x0(r3)
    b lbl_801D586C
lbl_801D585C:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r3, r0
    bl fn_801D4B44
lbl_801D586C:
    stfs f1, 0x14(r31)
    b lbl_801D5878
lbl_801D5874:
    stfs f31, 0x14(r31)
lbl_801D5878:
    rlwinm. r0, r29, 0, 28, 28
    bne lbl_801D58EC
    rlwinm. r0, r29, 0, 23, 23
    extrwi r21, r29, 1, 22
    slwi r0, r28, 2
    addi r28, r28, 0x1
    add r3, r23, r0
    addi r3, r3, 0x4
    beq lbl_801D58A4
    lfs f1, 0x0(r3)
    b lbl_801D58B4
lbl_801D58A4:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r3, r0
    bl fn_801D4B44
lbl_801D58B4:
    slwi r0, r28, 2
    cmpwi r21, 0x0
    add r3, r23, r0
    stfs f1, 0x18(r31)
    addi r3, r3, 0x4
    beq lbl_801D58D4
    lfs f1, 0x0(r3)
    b lbl_801D58E4
lbl_801D58D4:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r3, r0
    bl fn_801D4B44
lbl_801D58E4:
    stfs f1, 0x1c(r31)
    b lbl_801D58F4
lbl_801D58EC:
    stfs f31, 0x18(r31)
    stfs f31, 0x1c(r31)
lbl_801D58F4:
    clrlwi r0, r29, 28
    lwz r3, 0x4(r22)
    slw r0, r0, r27
    or r0, r3, r0
    stw r0, 0x4(r22)
lbl_801D5908:
    srwi r24, r24, 1
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_801D5914:
    cmpwi r24, 0x0
    bne lbl_801D578C
    opword 0xE3E10068
    lfd f31, 0x60(r1)
    opword 0xE3C10058
    lfd f30, 0x50(r1)
    opword 0xE3A10048
    addi r11, r1, 0x40
    lfd f29, 0x40(r1)
    bl _restgpr_21
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_801D594C
extern "C" asm void fn_801D594C() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    stfd f29, 0x20(r1)
    opword 0xF3A10028
    lis r0, 0x400
    fmr f29, f1
    stw r31, 0x1c(r1)
    lwz r31, 0x4(r4)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    rlwinm r3, r31, 0, 5, 6
    cmpw r3, r0
    beq lbl_801D5A90
    bge lbl_801D59C4
    lis r0, 0x200
    cmpw r3, r0
    beq lbl_801D5A00
    bge lbl_801D5BB0
    cmpwi r3, 0x0
    beq lbl_801D59D4
    b lbl_801D5BB0
lbl_801D59C4:
    lis r0, 0x600
    cmpw r3, r0
    beq lbl_801D5B20
    b lbl_801D5BB0
lbl_801D59D4:
    rlwinm. r0, r31, 0, 27, 27
    lfs f31, 0x0(r5)
    addi r30, r5, 0x4
    beq lbl_801D59F0
    fmr f30, f31
    fmr f1, f31
    b lbl_801D5BBC
lbl_801D59F0:
    lfs f30, 0x0(r30)
    lfs f1, 0x4(r30)
    addi r30, r30, 0x8
    b lbl_801D5BBC
lbl_801D5A00:
    rlwinm. r0, r31, 0, 18, 18
    mr r3, r30
    addi r30, r5, 0x4
    beq lbl_801D5A18
    lfs f1, 0x0(r3)
    b lbl_801D5A24
lbl_801D5A18:
    lwz r0, 0x0(r3)
    add r3, r0, r4
    bl fn_801D5EA0
lbl_801D5A24:
    rlwinm. r0, r31, 0, 27, 27
    fmr f31, f1
    beq lbl_801D5A38
    fmr f30, f1
    b lbl_801D5BBC
lbl_801D5A38:
    rlwinm. r0, r31, 0, 17, 17
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D5A50
    lfs f1, 0x0(r3)
    b lbl_801D5A60
lbl_801D5A50:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5EA0
lbl_801D5A60:
    rlwinm. r0, r31, 0, 16, 16
    fmr f30, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D5A7C
    lfs f1, 0x0(r3)
    b lbl_801D5BBC
lbl_801D5A7C:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5EA0
    b lbl_801D5BBC
lbl_801D5A90:
    rlwinm. r0, r31, 0, 18, 18
    mr r3, r30
    addi r30, r5, 0x4
    beq lbl_801D5AA8
    lfs f1, 0x0(r3)
    b lbl_801D5AB4
lbl_801D5AA8:
    lwz r0, 0x0(r3)
    add r3, r0, r4
    bl fn_801D5D30
lbl_801D5AB4:
    rlwinm. r0, r31, 0, 27, 27
    fmr f31, f1
    beq lbl_801D5AC8
    fmr f30, f1
    b lbl_801D5BBC
lbl_801D5AC8:
    rlwinm. r0, r31, 0, 17, 17
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D5AE0
    lfs f1, 0x0(r3)
    b lbl_801D5AF0
lbl_801D5AE0:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5D30
lbl_801D5AF0:
    rlwinm. r0, r31, 0, 16, 16
    fmr f30, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D5B0C
    lfs f1, 0x0(r3)
    b lbl_801D5BBC
lbl_801D5B0C:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5D30
    b lbl_801D5BBC
lbl_801D5B20:
    rlwinm. r0, r31, 0, 18, 18
    mr r3, r30
    addi r30, r5, 0x4
    beq lbl_801D5B38
    lfs f1, 0x0(r3)
    b lbl_801D5B44
lbl_801D5B38:
    lwz r0, 0x0(r3)
    add r3, r0, r4
    bl fn_801D5C04
lbl_801D5B44:
    rlwinm. r0, r31, 0, 27, 27
    fmr f31, f1
    beq lbl_801D5B58
    fmr f30, f1
    b lbl_801D5BBC
lbl_801D5B58:
    rlwinm. r0, r31, 0, 17, 17
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D5B70
    lfs f1, 0x0(r3)
    b lbl_801D5B80
lbl_801D5B70:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5C04
lbl_801D5B80:
    rlwinm. r0, r31, 0, 16, 16
    fmr f30, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D5B9C
    lfs f1, 0x0(r3)
    b lbl_801D5BBC
lbl_801D5B9C:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5C04
    b lbl_801D5BBC
lbl_801D5BB0:
    lfs f31, lbl_804A1C38
    fmr f30, f31
    fmr f1, f31
lbl_801D5BBC:
    stfs f31, 0x0(r28)
    mr r3, r30
    stfs f30, 0x4(r28)
    stfs f1, 0x8(r28)
    opword 0xE3E10048
    lfd f31, 0x40(r1)
    opword 0xE3C10038
    lfd f30, 0x30(r1)
    opword 0xE3A10028
    lfd f29, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_801D5C04
extern "C" asm void fn_801D5C04() {
    nofralloc
    stwu r1, -0x10(r1)
    addi r5, r3, 0x8
    lhz r6, 0x0(r3)
    lfs f0, 0x8(r3)
    subi r0, r6, 0x1
    mulli r0, r0, 0xc
    fcmpo cr0, f1, f0
    add r4, r3, r0
    addi r4, r4, 0x8
    opword 0x4C401382
    bne lbl_801D5C38
    lfs f1, 0x4(r5)
    b lbl_801D5D28
lbl_801D5C38:
    lfs f0, 0x0(r4)
    fcmpo cr0, f0, f1
    opword 0x4C401382
    bne lbl_801D5C50
    lfs f1, 0x4(r4)
    b lbl_801D5D28
lbl_801D5C50:
    lfs f0, 0x0(r5)
    sth r6, 0x8(r1)
    fsubs f3, f1, f0
    opword 0xE041B008
    lfs f0, 0x4(r3)
    fmuls f2, f3, f2
    fmuls f0, f0, f2
    opword 0xF001B00C
    lhz r0, 0xc(r1)
    mulli r0, r0, 0xc
    add r3, r3, r0
    lfs f0, 0x8(r3)
    addi r4, r3, 0x8
    fcmpo cr0, f1, f0
    bge lbl_801D5C9C
lbl_801D5C8C:
    lfsu f0, -0xc(r4)
    fcmpo cr0, f1, f0
    blt lbl_801D5C8C
    b lbl_801D5CB0
lbl_801D5C9C:
    lfsu f0, 0xc(r4)
    fcmpo cr0, f0, f1
    opword 0x4C401382
    beq lbl_801D5C9C
    subi r4, r4, 0xc
lbl_801D5CB0:
    lfs f0, 0x0(r4)
    fcmpu cr0, f1, f0
    bne lbl_801D5CC4
    lfs f1, 0x4(r4)
    b lbl_801D5D28
lbl_801D5CC4:
    fsubs f10, f1, f0
    lfs f1, 0xc(r4)
    lfs f7, 0x4(r4)
    fsubs f11, f1, f0
    lfs f0, 0x10(r4)
    lfs f2, lbl_804A1C40
    lfs f1, lbl_804A1C44
    fsubs f0, f7, f0
    fres f6, f11
    lfs f9, 0x14(r4)
    lfs f4, lbl_804A1C3C
    lfs f8, 0x8(r4)
    opword 0x10A6302A
    opword 0x106601B2
    opword 0x10CB28FC
    fmuls f3, f10, f6
    fmsubs f5, f10, f6, f4
    fmsubs f1, f2, f3, f1
    fmuls f2, f3, f9
    fmuls f4, f10, f5
    fmuls f0, f1, f0
    fmadds f1, f5, f8, f2
    fmuls f0, f3, f0
    fmadds f0, f3, f0, f7
    fmadds f1, f4, f1, f0
lbl_801D5D28:
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801D5D30
extern "C" asm void fn_801D5D30() {
    nofralloc
    stwu r1, -0x10(r1)
    addi r5, r3, 0x10
    lhz r6, 0x0(r3)
    subi r0, r6, 0x1
    mulli r0, r0, 0x6
    add r4, r3, r0
    addi r4, r4, 0x10
    opword 0xE005E000
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801D5D70
    opword 0xE045B002
    lfs f1, 0x8(r3)
    lfs f0, 0xc(r3)
    fmadds f1, f1, f2, f0
    b lbl_801D5E98
lbl_801D5D70:
    opword 0xE004E000
    fcmpo cr0, f0, f1
    opword 0x4C401382
    bne lbl_801D5D94
    opword 0xE044B002
    lfs f1, 0x8(r3)
    lfs f0, 0xc(r3)
    fmadds f1, f1, f2, f0
    b lbl_801D5E98
lbl_801D5D94:
    opword 0xE005E000
    sth r6, 0xa(r1)
    fsubs f3, f1, f0
    opword 0xE041B00A
    lfs f0, 0x4(r3)
    fmuls f2, f3, f2
    fmuls f0, f0, f2
    opword 0xF001B00C
    lhz r0, 0xc(r1)
    mulli r0, r0, 0x6
    add r4, r3, r0
    addi r5, r4, 0x10
    opword 0xF021E008
    lha r4, 0x8(r1)
    lha r0, 0x0(r5)
    lha r6, 0x8(r1)
    cmpw r4, r0
    bge lbl_801D5DEC
lbl_801D5DDC:
    lhau r0, -0x6(r5)
    cmpw r6, r0
    blt lbl_801D5DDC
    b lbl_801D5DFC
lbl_801D5DEC:
    lhau r0, 0x6(r5)
    cmpw r0, r6
    ble lbl_801D5DEC
    subi r5, r5, 0x6
lbl_801D5DFC:
    opword 0xE005E000
    fcmpu cr0, f1, f0
    bne lbl_801D5E1C
    opword 0xE045B002
    lfs f1, 0x8(r3)
    lfs f0, 0xc(r3)
    fmadds f1, f1, f2, f0
    b lbl_801D5E98
lbl_801D5E1C:
    addi r4, r5, 0x6
    opword 0xE065B002
    lfs f2, 0x8(r3)
    lfs f0, 0xc(r3)
    fmadds f5, f2, f3, f0
    opword 0xE0C5F004
    opword 0xE064B002
    fmadds f0, f2, f3, f0
    opword 0xE0E4F004
    opword 0xE065E000
    opword 0xE084E000
    fsubs f10, f1, f3
    lfs f2, lbl_804A1C40
    fsubs f11, f4, f3
    lfs f1, lbl_804A1C44
    fsubs f0, f5, f0
    lfs f4, lbl_804A1C3C
    fres f9, f11
    opword 0x1109482A
    opword 0x10690272
    opword 0x112B40FC
    fmuls f3, f10, f9
    fmsubs f8, f10, f9, f4
    fmsubs f1, f2, f3, f1
    fmuls f2, f3, f7
    fmuls f4, f10, f8
    fmuls f0, f1, f0
    fmadds f1, f8, f6, f2
    fmuls f0, f3, f0
    fmadds f0, f3, f0, f5
    fmadds f1, f4, f1, f0
lbl_801D5E98:
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801D5EA0
extern "C" asm void fn_801D5EA0() {
    nofralloc
    stwu r1, -0x20(r1)
    addi r5, r3, 0x10
    lhz r6, 0x0(r3)
    subi r0, r6, 0x1
    slwi r0, r0, 2
    add r4, r3, r0
    addi r4, r4, 0x10
    opword 0xE005A000
    fcmpo cr0, f1, f0
    opword 0x4C401382
    bne lbl_801D5EEC
    lwz r0, 0x0(r5)
    extrwi r0, r0, 12, 8
    sth r0, 0x16(r1)
    opword 0xE041B016
    lfs f1, 0x8(r3)
    lfs f0, 0xc(r3)
    fmadds f1, f1, f2, f0
    b lbl_801D6058
lbl_801D5EEC:
    opword 0xE004A000
    fcmpo cr0, f0, f1
    opword 0x4C401382
    bne lbl_801D5F1C
    lwz r0, 0x0(r4)
    extrwi r0, r0, 12, 8
    sth r0, 0x14(r1)
    opword 0xE041B014
    lfs f1, 0x8(r3)
    lfs f0, 0xc(r3)
    fmadds f1, f1, f2, f0
    b lbl_801D6058
lbl_801D5F1C:
    opword 0xE005A000
    sth r6, 0x12(r1)
    fsubs f3, f1, f0
    opword 0xE041B012
    lfs f0, 0x4(r3)
    fmuls f2, f3, f2
    fmuls f0, f0, f2
    opword 0xF001B01C
    lhz r0, 0x1c(r1)
    slwi r0, r0, 2
    add r4, r3, r0
    addi r6, r4, 0x10
    opword 0xF021A018
    lbz r4, 0x18(r1)
    lbz r0, 0x0(r6)
    cmplw r4, r0
    bge lbl_801D5F70
lbl_801D5F60:
    lbzu r0, -0x4(r6)
    cmplw r4, r0
    blt lbl_801D5F60
    b lbl_801D5F80
lbl_801D5F70:
    lbzu r0, 0x4(r6)
    cmplw r0, r4
    ble lbl_801D5F70
    subi r6, r6, 0x4
lbl_801D5F80:
    opword 0xE006A000
    fcmpu cr0, f1, f0
    bne lbl_801D5FAC
    lwz r0, 0x0(r6)
    extrwi r0, r0, 12, 8
    sth r0, 0x10(r1)
    opword 0xE041B010
    lfs f1, 0x8(r3)
    lfs f0, 0xc(r3)
    fmadds f1, f1, f2, f0
    b lbl_801D6058
lbl_801D5FAC:
    lwz r4, 0x0(r6)
    addi r5, r6, 0x4
    extrwi r0, r4, 12, 8
    sth r0, 0xe(r1)
    opword 0xE061B00E
    slwi r0, r4, 20
    lfs f2, 0x8(r3)
    srawi r0, r0, 20
    lfs f0, 0xc(r3)
    sth r0, 0xc(r1)
    fmadds f5, f2, f3, f0
    opword 0xE0C1E00C
    lwz r3, 0x4(r6)
    extrwi r0, r3, 12, 8
    sth r0, 0xa(r1)
    opword 0xE061B00A
    slwi r0, r3, 20
    srawi r0, r0, 20
    sth r0, 0x8(r1)
    fmadds f0, f2, f3, f0
    opword 0xE0E1E008
    opword 0xE066A000
    opword 0xE085A000
    fsubs f0, f5, f0
    fsubs f10, f1, f3
    lfs f2, lbl_804A1C40
    fsubs f11, f4, f3
    lfs f1, lbl_804A1C44
    lfs f4, lbl_804A1C3C
    fres f9, f11
    opword 0x1109482A
    opword 0x10690272
    opword 0x112B40FC
    fmuls f3, f10, f9
    fmsubs f8, f10, f9, f4
    fmsubs f1, f2, f3, f1
    fmuls f2, f3, f7
    fmuls f4, f10, f8
    fmuls f0, f1, f0
    fmadds f1, f8, f6, f2
    fmuls f0, f3, f0
    fmadds f0, f3, f0, f5
    fmadds f1, f4, f1, f0
lbl_801D6058:
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_801D6060
extern "C" asm void fn_801D6060() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    stfd f29, 0x60(r1)
    opword 0xF3A10068
    addi r11, r1, 0x60
    bl _savegpr_27
    lwz r31, 0x4(r6)
    lis r9, 0x4330
    lis r0, 0x1800
    fmr f29, f1
    rlwinm r8, r31, 0, 2, 4
    stw r9, 0x30(r1)
    cmpw r8, r0
    mr r27, r3
    stw r9, 0x38(r1)
    mr r28, r4
    mr r29, r6
    mr r30, r7
    beq lbl_801D623C
    bge lbl_801D60F0
    lis r0, 0x800
    cmpw r8, r0
    beq lbl_801D6134
    bge lbl_801D60E0
    cmpwi r8, 0x0
    beq lbl_801D6120
    b lbl_801D6A58
lbl_801D60E0:
    lis r0, 0x1000
    cmpw r8, r0
    beq lbl_801D61B8
    b lbl_801D6A58
lbl_801D60F0:
    lis r0, 0x2800
    cmpw r8, r0
    beq lbl_801D65A4
    bge lbl_801D6110
    lis r0, 0x2000
    cmpw r8, r0
    beq lbl_801D62C0
    b lbl_801D6A58
lbl_801D6110:
    lis r0, 0x3000
    cmpw r8, r0
    beq lbl_801D68A0
    b lbl_801D6A58
lbl_801D6120:
    lfs f31, 0x0(r7)
    addi r30, r7, 0xc
    lfs f30, 0x4(r7)
    lfs f29, 0x8(r7)
    b lbl_801D6A64
lbl_801D6134:
    rlwinm. r0, r31, 0, 15, 15
    mr r3, r30
    addi r30, r7, 0x4
    beq lbl_801D614C
    lfs f1, 0x0(r3)
    b lbl_801D6158
lbl_801D614C:
    lwz r0, 0x0(r3)
    add r3, r0, r6
    bl fn_801D5EA0
lbl_801D6158:
    rlwinm. r0, r31, 0, 14, 14
    fmr f31, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D6174
    lfs f1, 0x0(r3)
    b lbl_801D6184
lbl_801D6174:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5EA0
lbl_801D6184:
    rlwinm. r0, r31, 0, 13, 13
    fmr f30, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D61A0
    lfs f1, 0x0(r3)
    b lbl_801D61B0
lbl_801D61A0:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5EA0
lbl_801D61B0:
    fmr f29, f1
    b lbl_801D6A64
lbl_801D61B8:
    rlwinm. r0, r31, 0, 15, 15
    mr r3, r30
    addi r30, r7, 0x4
    beq lbl_801D61D0
    lfs f1, 0x0(r3)
    b lbl_801D61DC
lbl_801D61D0:
    lwz r0, 0x0(r3)
    add r3, r0, r6
    bl fn_801D5D30
lbl_801D61DC:
    rlwinm. r0, r31, 0, 14, 14
    fmr f31, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D61F8
    lfs f1, 0x0(r3)
    b lbl_801D6208
lbl_801D61F8:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5D30
lbl_801D6208:
    rlwinm. r0, r31, 0, 13, 13
    fmr f30, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D6224
    lfs f1, 0x0(r3)
    b lbl_801D6234
lbl_801D6224:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5D30
lbl_801D6234:
    fmr f29, f1
    b lbl_801D6A64
lbl_801D623C:
    rlwinm. r0, r31, 0, 15, 15
    mr r3, r30
    addi r30, r7, 0x4
    beq lbl_801D6254
    lfs f1, 0x0(r3)
    b lbl_801D6260
lbl_801D6254:
    lwz r0, 0x0(r3)
    add r3, r0, r6
    bl fn_801D5C04
lbl_801D6260:
    rlwinm. r0, r31, 0, 14, 14
    fmr f31, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D627C
    lfs f1, 0x0(r3)
    b lbl_801D628C
lbl_801D627C:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5C04
lbl_801D628C:
    rlwinm. r0, r31, 0, 13, 13
    fmr f30, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D62A8
    lfs f1, 0x0(r3)
    b lbl_801D62B8
lbl_801D62A8:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5C04
lbl_801D62B8:
    fmr f29, f1
    b lbl_801D6A64
lbl_801D62C0:
    rlwinm. r0, r31, 0, 15, 15
    mr r3, r30
    lhz r0, 0x0(r5)
    addi r30, r7, 0x4
    beq lbl_801D62DC
    lfs f31, 0x0(r3)
    b lbl_801D63B8
lbl_801D62DC:
    lwz r3, 0x0(r3)
    add r4, r3, r6
    opword 0xF3A1B028
    lfs f6, lbl_804A1C38
    lhz r5, 0x28(r1)
    fcmpo cr0, f29, f6
    opword 0x4C401382
    bne lbl_801D6320
    lbz r3, 0x8(r4)
    lfd f4, lbl_804A1C50
    stw r3, 0x34(r1)
    lfs f2, 0x0(r4)
    lfd f3, 0x30(r1)
    lfs f0, 0x4(r4)
    fsubs f3, f3, f4
    fmadds f31, f2, f3, f0
    b lbl_801D63B8
lbl_801D6320:
    cmplw r0, r5
    bgt lbl_801D6350
    add r3, r4, r0
    lfd f4, lbl_804A1C50
    lbz r3, 0x8(r3)
    lfs f2, 0x0(r4)
    stw r3, 0x3c(r1)
    lfs f0, 0x4(r4)
    lfd f3, 0x38(r1)
    fsubs f3, f3, f4
    fmadds f31, f2, f3, f0
    b lbl_801D63B8
lbl_801D6350:
    stw r5, 0x34(r1)
    add r3, r4, r5
    lbz r3, 0x8(r3)
    lfd f5, lbl_804A1C50
    lfd f0, 0x30(r1)
    stw r3, 0x3c(r1)
    fsubs f4, f0, f5
    lfs f3, 0x0(r4)
    lfd f0, 0x38(r1)
    lfs f2, 0x4(r4)
    fsubs f4, f29, f4
    fsubs f0, f0, f5
    fcmpu cr0, f6, f4
    fmadds f31, f3, f0, f2
    bne lbl_801D6390
    b lbl_801D63B8
lbl_801D6390:
    addi r3, r5, 0x1
    clrlwi r3, r3, 16
    add r3, r4, r3
    lbz r3, 0x8(r3)
    stw r3, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f5
    fmadds f0, f3, f0, f2
    fsubs f0, f0, f31
    fmadds f31, f4, f0, f31
lbl_801D63B8:
    rlwinm. r3, r31, 0, 14, 14
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D63D0
    lfs f30, 0x0(r3)
    b lbl_801D64AC
lbl_801D63D0:
    lwz r3, 0x0(r3)
    add r4, r3, r6
    opword 0xF021B024
    lfs f6, lbl_804A1C38
    lhz r5, 0x24(r1)
    fcmpo cr0, f1, f6
    opword 0x4C401382
    bne lbl_801D6414
    lbz r3, 0x8(r4)
    lfd f4, lbl_804A1C50
    stw r3, 0x3c(r1)
    lfs f2, 0x0(r4)
    lfd f3, 0x38(r1)
    lfs f0, 0x4(r4)
    fsubs f3, f3, f4
    fmadds f30, f2, f3, f0
    b lbl_801D64AC
lbl_801D6414:
    cmplw r0, r5
    bgt lbl_801D6444
    add r3, r4, r0
    lfd f4, lbl_804A1C50
    lbz r3, 0x8(r3)
    lfs f2, 0x0(r4)
    stw r3, 0x34(r1)
    lfs f0, 0x4(r4)
    lfd f3, 0x30(r1)
    fsubs f3, f3, f4
    fmadds f30, f2, f3, f0
    b lbl_801D64AC
lbl_801D6444:
    stw r5, 0x3c(r1)
    add r3, r4, r5
    lbz r3, 0x8(r3)
    lfd f5, lbl_804A1C50
    lfd f0, 0x38(r1)
    stw r3, 0x34(r1)
    fsubs f4, f0, f5
    lfs f3, 0x0(r4)
    lfd f0, 0x30(r1)
    lfs f2, 0x4(r4)
    fsubs f4, f1, f4
    fsubs f0, f0, f5
    fcmpu cr0, f6, f4
    fmadds f30, f3, f0, f2
    bne lbl_801D6484
    b lbl_801D64AC
lbl_801D6484:
    addi r3, r5, 0x1
    clrlwi r3, r3, 16
    add r3, r4, r3
    lbz r3, 0x8(r3)
    stw r3, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f5
    fmadds f0, f3, f0, f2
    fsubs f0, f0, f30
    fmadds f30, f4, f0, f30
lbl_801D64AC:
    rlwinm. r3, r31, 0, 13, 13
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D64C4
    lfs f29, 0x0(r3)
    b lbl_801D6A64
lbl_801D64C4:
    lwz r3, 0x0(r3)
    add r4, r3, r6
    opword 0xF021B020
    lfs f6, lbl_804A1C38
    lhz r5, 0x20(r1)
    fcmpo cr0, f1, f6
    opword 0x4C401382
    bne lbl_801D6508
    lbz r0, 0x8(r4)
    lfd f3, lbl_804A1C50
    stw r0, 0x34(r1)
    lfs f1, 0x0(r4)
    lfd f2, 0x30(r1)
    lfs f0, 0x4(r4)
    fsubs f2, f2, f3
    fmadds f29, f1, f2, f0
    b lbl_801D6A64
lbl_801D6508:
    cmplw r0, r5
    bgt lbl_801D6538
    add r3, r4, r0
    lfd f3, lbl_804A1C50
    lbz r0, 0x8(r3)
    lfs f1, 0x0(r4)
    stw r0, 0x3c(r1)
    lfs f0, 0x4(r4)
    lfd f2, 0x38(r1)
    fsubs f2, f2, f3
    fmadds f29, f1, f2, f0
    b lbl_801D6A64
lbl_801D6538:
    stw r5, 0x34(r1)
    add r3, r4, r5
    lbz r0, 0x8(r3)
    lfd f5, lbl_804A1C50
    lfd f0, 0x30(r1)
    stw r0, 0x3c(r1)
    fsubs f4, f0, f5
    lfs f3, 0x0(r4)
    lfd f0, 0x38(r1)
    lfs f2, 0x4(r4)
    fsubs f1, f1, f4
    fsubs f0, f0, f5
    fcmpu cr0, f6, f1
    fmadds f29, f3, f0, f2
    bne lbl_801D6578
    b lbl_801D6A64
lbl_801D6578:
    addi r0, r5, 0x1
    clrlwi r0, r0, 16
    add r3, r4, r0
    lbz r0, 0x8(r3)
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f5
    fmadds f0, f3, f0, f2
    fsubs f0, f0, f29
    fmadds f29, f1, f0, f29
    b lbl_801D6A64
lbl_801D65A4:
    rlwinm. r0, r31, 0, 15, 15
    mr r3, r30
    lhz r0, 0x0(r5)
    addi r30, r7, 0x4
    beq lbl_801D65C0
    lfs f31, 0x0(r3)
    b lbl_801D66A4
lbl_801D65C0:
    lwz r3, 0x0(r3)
    add r4, r3, r6
    opword 0xF3A1B01C
    lfs f6, lbl_804A1C38
    lhz r5, 0x1c(r1)
    fcmpo cr0, f29, f6
    opword 0x4C401382
    bne lbl_801D6604
    lhz r3, 0x8(r4)
    lfd f4, lbl_804A1C50
    stw r3, 0x3c(r1)
    lfs f2, 0x0(r4)
    lfd f3, 0x38(r1)
    lfs f0, 0x4(r4)
    fsubs f3, f3, f4
    fmadds f31, f2, f3, f0
    b lbl_801D66A4
lbl_801D6604:
    cmplw r0, r5
    bgt lbl_801D6638
    clrlslwi r3, r0, 16, 1
    lfd f4, lbl_804A1C50
    add r3, r4, r3
    lfs f2, 0x0(r4)
    lhz r3, 0x8(r3)
    lfs f0, 0x4(r4)
    stw r3, 0x34(r1)
    lfd f3, 0x30(r1)
    fsubs f3, f3, f4
    fmadds f31, f2, f3, f0
    b lbl_801D66A4
lbl_801D6638:
    clrlslwi r3, r5, 16, 1
    stw r5, 0x3c(r1)
    add r3, r4, r3
    lfd f5, lbl_804A1C50
    lhz r3, 0x8(r3)
    lfd f0, 0x38(r1)
    stw r3, 0x34(r1)
    fsubs f4, f0, f5
    lfs f3, 0x0(r4)
    lfd f0, 0x30(r1)
    lfs f2, 0x4(r4)
    fsubs f4, f29, f4
    fsubs f0, f0, f5
    fcmpu cr0, f6, f4
    fmadds f31, f3, f0, f2
    bne lbl_801D667C
    b lbl_801D66A4
lbl_801D667C:
    addi r3, r5, 0x1
    clrlslwi r3, r3, 16, 1
    add r3, r4, r3
    lhz r3, 0x8(r3)
    stw r3, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f5
    fmadds f0, f3, f0, f2
    fsubs f0, f0, f31
    fmadds f31, f4, f0, f31
lbl_801D66A4:
    rlwinm. r3, r31, 0, 14, 14
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D66BC
    lfs f30, 0x0(r3)
    b lbl_801D67A0
lbl_801D66BC:
    lwz r3, 0x0(r3)
    add r4, r3, r6
    opword 0xF021B018
    lfs f6, lbl_804A1C38
    lhz r5, 0x18(r1)
    fcmpo cr0, f1, f6
    opword 0x4C401382
    bne lbl_801D6700
    lhz r3, 0x8(r4)
    lfd f4, lbl_804A1C50
    stw r3, 0x34(r1)
    lfs f2, 0x0(r4)
    lfd f3, 0x30(r1)
    lfs f0, 0x4(r4)
    fsubs f3, f3, f4
    fmadds f30, f2, f3, f0
    b lbl_801D67A0
lbl_801D6700:
    cmplw r0, r5
    bgt lbl_801D6734
    clrlslwi r3, r0, 16, 1
    lfd f4, lbl_804A1C50
    add r3, r4, r3
    lfs f2, 0x0(r4)
    lhz r3, 0x8(r3)
    lfs f0, 0x4(r4)
    stw r3, 0x3c(r1)
    lfd f3, 0x38(r1)
    fsubs f3, f3, f4
    fmadds f30, f2, f3, f0
    b lbl_801D67A0
lbl_801D6734:
    clrlslwi r3, r5, 16, 1
    stw r5, 0x34(r1)
    add r3, r4, r3
    lfd f5, lbl_804A1C50
    lhz r3, 0x8(r3)
    lfd f0, 0x30(r1)
    stw r3, 0x3c(r1)
    fsubs f4, f0, f5
    lfs f3, 0x0(r4)
    lfd f0, 0x38(r1)
    lfs f2, 0x4(r4)
    fsubs f4, f1, f4
    fsubs f0, f0, f5
    fcmpu cr0, f6, f4
    fmadds f30, f3, f0, f2
    bne lbl_801D6778
    b lbl_801D67A0
lbl_801D6778:
    addi r3, r5, 0x1
    clrlslwi r3, r3, 16, 1
    add r3, r4, r3
    lhz r3, 0x8(r3)
    stw r3, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f5
    fmadds f0, f3, f0, f2
    fsubs f0, f0, f30
    fmadds f30, f4, f0, f30
lbl_801D67A0:
    rlwinm. r3, r31, 0, 13, 13
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D67B8
    lfs f29, 0x0(r3)
    b lbl_801D6A64
lbl_801D67B8:
    lwz r3, 0x0(r3)
    add r4, r3, r6
    opword 0xF021B014
    lfs f6, lbl_804A1C38
    lhz r5, 0x14(r1)
    fcmpo cr0, f1, f6
    opword 0x4C401382
    bne lbl_801D67FC
    lhz r0, 0x8(r4)
    lfd f3, lbl_804A1C50
    stw r0, 0x3c(r1)
    lfs f1, 0x0(r4)
    lfd f2, 0x38(r1)
    lfs f0, 0x4(r4)
    fsubs f2, f2, f3
    fmadds f29, f1, f2, f0
    b lbl_801D6A64
lbl_801D67FC:
    cmplw r0, r5
    bgt lbl_801D6830
    clrlslwi r0, r0, 16, 1
    lfd f3, lbl_804A1C50
    add r3, r4, r0
    lfs f1, 0x0(r4)
    lhz r0, 0x8(r3)
    lfs f0, 0x4(r4)
    stw r0, 0x34(r1)
    lfd f2, 0x30(r1)
    fsubs f2, f2, f3
    fmadds f29, f1, f2, f0
    b lbl_801D6A64
lbl_801D6830:
    clrlslwi r0, r5, 16, 1
    stw r5, 0x3c(r1)
    add r3, r4, r0
    lfd f5, lbl_804A1C50
    lhz r0, 0x8(r3)
    lfd f0, 0x38(r1)
    stw r0, 0x34(r1)
    fsubs f4, f0, f5
    lfs f3, 0x0(r4)
    lfd f0, 0x30(r1)
    lfs f2, 0x4(r4)
    fsubs f1, f1, f4
    fsubs f0, f0, f5
    fcmpu cr0, f6, f1
    fmadds f29, f3, f0, f2
    bne lbl_801D6874
    b lbl_801D6A64
lbl_801D6874:
    addi r0, r5, 0x1
    clrlslwi r0, r0, 16, 1
    add r3, r4, r0
    lhz r0, 0x8(r3)
    stw r0, 0x3c(r1)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f5
    fmadds f0, f3, f0, f2
    fsubs f0, f0, f29
    fmadds f29, f1, f0, f29
    b lbl_801D6A64
lbl_801D68A0:
    rlwinm. r0, r31, 0, 15, 15
    mr r3, r30
    lhz r0, 0x0(r5)
    addi r30, r7, 0x4
    beq lbl_801D68BC
    lfs f31, 0x0(r3)
    b lbl_801D6934
lbl_801D68BC:
    lwz r3, 0x0(r3)
    add r4, r3, r6
    opword 0xF3A1B010
    lfs f3, lbl_804A1C38
    lhz r5, 0x10(r1)
    fcmpo cr0, f29, f3
    opword 0x4C401382
    bne lbl_801D68E4
    lfs f31, 0x0(r4)
    b lbl_801D6934
lbl_801D68E4:
    cmplw r0, r5
    bgt lbl_801D68F8
    clrlslwi r3, r0, 16, 2
    lfsx f31, r4, r3
    b lbl_801D6934
lbl_801D68F8:
    stw r5, 0x34(r1)
    clrlslwi r3, r5, 16, 2
    lfd f2, lbl_804A1C50
    lfd f0, 0x30(r1)
    lfsx f31, r4, r3
    fsubs f0, f0, f2
    fsubs f2, f29, f0
    fcmpu cr0, f3, f2
    bne lbl_801D6920
    b lbl_801D6934
lbl_801D6920:
    addi r3, r5, 0x1
    clrlslwi r3, r3, 16, 2
    lfsx f0, r4, r3
    fsubs f0, f0, f31
    fmadds f31, f2, f0, f31
lbl_801D6934:
    rlwinm. r3, r31, 0, 14, 14
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D694C
    lfs f30, 0x0(r3)
    b lbl_801D69C4
lbl_801D694C:
    lwz r3, 0x0(r3)
    add r4, r3, r6
    opword 0xF021B00C
    lfs f3, lbl_804A1C38
    lhz r5, 0xc(r1)
    fcmpo cr0, f1, f3
    opword 0x4C401382
    bne lbl_801D6974
    lfs f30, 0x0(r4)
    b lbl_801D69C4
lbl_801D6974:
    cmplw r0, r5
    bgt lbl_801D6988
    clrlslwi r3, r0, 16, 2
    lfsx f30, r4, r3
    b lbl_801D69C4
lbl_801D6988:
    stw r5, 0x3c(r1)
    clrlslwi r3, r5, 16, 2
    lfd f2, lbl_804A1C50
    lfd f0, 0x38(r1)
    lfsx f30, r4, r3
    fsubs f0, f0, f2
    fsubs f2, f1, f0
    fcmpu cr0, f3, f2
    bne lbl_801D69B0
    b lbl_801D69C4
lbl_801D69B0:
    addi r3, r5, 0x1
    clrlslwi r3, r3, 16, 2
    lfsx f0, r4, r3
    fsubs f0, f0, f30
    fmadds f30, f2, f0, f30
lbl_801D69C4:
    rlwinm. r3, r31, 0, 13, 13
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D69DC
    lfs f29, 0x0(r3)
    b lbl_801D6A64
lbl_801D69DC:
    lwz r3, 0x0(r3)
    add r3, r3, r6
    opword 0xF021B008
    lfs f3, lbl_804A1C38
    lhz r4, 0x8(r1)
    fcmpo cr0, f1, f3
    opword 0x4C401382
    bne lbl_801D6A04
    lfs f29, 0x0(r3)
    b lbl_801D6A64
lbl_801D6A04:
    cmplw r0, r4
    bgt lbl_801D6A18
    clrlslwi r0, r0, 16, 2
    lfsx f29, r3, r0
    b lbl_801D6A64
lbl_801D6A18:
    stw r4, 0x34(r1)
    clrlslwi r0, r4, 16, 2
    lfd f2, lbl_804A1C50
    lfd f0, 0x30(r1)
    lfsx f29, r3, r0
    fsubs f0, f0, f2
    fsubs f1, f1, f0
    fcmpu cr0, f3, f1
    bne lbl_801D6A40
    b lbl_801D6A64
lbl_801D6A40:
    addi r0, r4, 0x1
    clrlslwi r0, r0, 16, 2
    lfsx f0, r3, r0
    fsubs f0, f0, f29
    fmadds f29, f1, f0, f29
    b lbl_801D6A64
lbl_801D6A58:
    lfs f31, lbl_804A1C38
    fmr f30, f31
    fmr f29, f31
lbl_801D6A64:
    lfs f0, lbl_804A1C48
    mr r3, r27
    fmuls f1, f0, f31
    fmuls f2, f0, f30
    fmuls f3, f0, f29
    bl MTX34RotXYZFIdx__Q24nw4r4mathFPQ34nw4r4math5MTX34fff
    stfs f31, 0x0(r28)
    mr r3, r30
    stfs f30, 0x4(r28)
    stfs f29, 0x8(r28)
    opword 0xE3E10088
    lfd f31, 0x80(r1)
    opword 0xE3C10078
    lfd f30, 0x70(r1)
    opword 0xE3A10068
    lfd f29, 0x60(r1)
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_801D6ABC
extern "C" asm void fn_801D6ABC() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    opword 0xF3E10048
    stfd f30, 0x30(r1)
    opword 0xF3C10038
    stfd f29, 0x20(r1)
    opword 0xF3A10028
    fmr f29, f1
    stw r31, 0x1c(r1)
    lwz r31, 0x4(r4)
    stw r30, 0x18(r1)
    mr r30, r5
    clrrwi. r6, r31, 30
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_801D6B44
    bge lbl_801D6B34
    lis r0, 0xc000
    cmpw r6, r0
    beq lbl_801D6C58
    bge lbl_801D6CD8
    lis r3, 0x8000
    addi r0, r3, 0x1
    cmpw r6, r0
    bge lbl_801D6CD8
    b lbl_801D6BD8
lbl_801D6B34:
    lis r0, 0x4000
    cmpw r6, r0
    beq lbl_801D6B58
    b lbl_801D6CD8
lbl_801D6B44:
    lfs f31, 0x0(r5)
    addi r30, r5, 0xc
    lfs f30, 0x4(r5)
    lfs f1, 0x8(r5)
    b lbl_801D6CE4
lbl_801D6B58:
    rlwinm. r0, r31, 0, 12, 12
    mr r3, r30
    addi r30, r5, 0x4
    beq lbl_801D6B70
    lfs f1, 0x0(r3)
    b lbl_801D6B7C
lbl_801D6B70:
    lwz r0, 0x0(r3)
    add r3, r0, r4
    bl fn_801D5EA0
lbl_801D6B7C:
    rlwinm. r0, r31, 0, 11, 11
    fmr f31, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D6B98
    lfs f1, 0x0(r3)
    b lbl_801D6BA8
lbl_801D6B98:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5EA0
lbl_801D6BA8:
    rlwinm. r0, r31, 0, 10, 10
    fmr f30, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D6BC4
    lfs f1, 0x0(r3)
    b lbl_801D6CE4
lbl_801D6BC4:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5EA0
    b lbl_801D6CE4
lbl_801D6BD8:
    rlwinm. r0, r31, 0, 12, 12
    mr r3, r30
    addi r30, r5, 0x4
    beq lbl_801D6BF0
    lfs f1, 0x0(r3)
    b lbl_801D6BFC
lbl_801D6BF0:
    lwz r0, 0x0(r3)
    add r3, r0, r4
    bl fn_801D5D30
lbl_801D6BFC:
    rlwinm. r0, r31, 0, 11, 11
    fmr f31, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D6C18
    lfs f1, 0x0(r3)
    b lbl_801D6C28
lbl_801D6C18:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5D30
lbl_801D6C28:
    rlwinm. r0, r31, 0, 10, 10
    fmr f30, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D6C44
    lfs f1, 0x0(r3)
    b lbl_801D6CE4
lbl_801D6C44:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5D30
    b lbl_801D6CE4
lbl_801D6C58:
    rlwinm. r0, r31, 0, 12, 12
    mr r3, r30
    addi r30, r5, 0x4
    beq lbl_801D6C70
    lfs f1, 0x0(r3)
    b lbl_801D6C7C
lbl_801D6C70:
    lwz r0, 0x0(r3)
    add r3, r0, r4
    bl fn_801D5C04
lbl_801D6C7C:
    rlwinm. r0, r31, 0, 11, 11
    fmr f31, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D6C98
    lfs f1, 0x0(r3)
    b lbl_801D6CA8
lbl_801D6C98:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5C04
lbl_801D6CA8:
    rlwinm. r0, r31, 0, 10, 10
    fmr f30, f1
    mr r3, r30
    addi r30, r30, 0x4
    beq lbl_801D6CC4
    lfs f1, 0x0(r3)
    b lbl_801D6CE4
lbl_801D6CC4:
    lwz r0, 0x0(r3)
    fmr f1, f29
    add r3, r0, r29
    bl fn_801D5C04
    b lbl_801D6CE4
lbl_801D6CD8:
    lfs f31, lbl_804A1C38
    fmr f30, f31
    fmr f1, f31
lbl_801D6CE4:
    stfs f31, 0x0(r28)
    mr r3, r30
    stfs f30, 0x4(r28)
    stfs f1, 0x8(r28)
    opword 0xE3E10048
    lfd f31, 0x40(r1)
    opword 0xE3C10038
    lfd f30, 0x30(r1)
    opword 0xE3A10028
    lfd f29, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// asm_to_cpp: fn_801D6D2C
extern "C" asm void fn_801D6D2C() {
    nofralloc
    lfs f0, lbl_804A1C3C
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    addi r3, r3, 0x1c
    b PSMTXIdentity
}

// asm_to_cpp: fn_801D6D44
extern "C" asm void fn_801D6D44() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    fmr f31, f1
    lfs f0, lbl_804A1C3C
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    addi r3, r3, 0x1c
    bl PSMTXIdentity
    fmr f1, f31
    mr r4, r31
    addi r3, r1, 0x8
    addi r5, r31, 0x8
    bl fn_801D6ABC
    lfs f0, 0x8(r1)
    stfs f0, 0x28(r30)
    lfs f0, 0xc(r1)
    stfs f0, 0x38(r30)
    lfs f0, 0x10(r1)
    stfs f0, 0x48(r30)
    opword 0xE3E10028
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801D6DD0
extern "C" asm void fn_801D6DD0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r6, r5
    mr r5, r4
    stw r0, 0x14(r1)
    addi r4, r3, 0x10
    lfs f0, lbl_804A1C3C
    addi r7, r6, 0x8
    stw r31, 0xc(r1)
    mr r31, r3
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    addi r3, r3, 0x1c
    bl fn_801D6060
    lwz r0, 0x0(r31)
    lfs f0, lbl_804A1C38
    oris r0, r0, 0x8000
    stw r0, 0x0(r31)
    stfs f0, 0x28(r31)
    stfs f0, 0x38(r31)
    stfs f0, 0x48(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801D6E3C
extern "C" asm void fn_801D6E3C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r4, r5
    addi r5, r5, 0x8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x4
    bl fn_801D594C
    addi r3, r31, 0x1c
    bl PSMTXIdentity
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801D6E7C
extern "C" asm void fn_801D6E7C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    fmr f31, f1
    lfs f0, lbl_804A1C3C
    addi r7, r5, 0x8
    stw r31, 0x1c(r1)
    mr r31, r5
    mr r5, r4
    stw r30, 0x18(r1)
    mr r30, r3
    mr r6, r31
    addi r4, r3, 0x10
    stfs f0, 0x4(r3)
    stfs f0, 0x8(r3)
    stfs f0, 0xc(r3)
    addi r3, r3, 0x1c
    bl fn_801D6060
    lwz r0, 0x0(r30)
    mr r5, r3
    fmr f1, f31
    mr r4, r31
    oris r0, r0, 0x8000
    addi r3, r1, 0x8
    stw r0, 0x0(r30)
    bl fn_801D6ABC
    lfs f0, 0x8(r1)
    stfs f0, 0x28(r30)
    lfs f0, 0xc(r1)
    stfs f0, 0x38(r30)
    lfs f0, 0x10(r1)
    stfs f0, 0x48(r30)
    opword 0xE3E10028
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801D6F24
extern "C" asm void fn_801D6F24() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    fmr f31, f1
    stw r31, 0x1c(r1)
    mr r31, r5
    addi r5, r5, 0x8
    stw r30, 0x18(r1)
    mr r30, r4
    mr r4, r31
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r3, 0x4
    bl fn_801D594C
    fmr f1, f31
    mr r7, r3
    mr r5, r30
    mr r6, r31
    addi r3, r29, 0x1c
    addi r4, r29, 0x10
    bl fn_801D6060
    lwz r0, 0x0(r29)
    lfs f0, lbl_804A1C38
    oris r0, r0, 0x8000
    stw r0, 0x0(r29)
    stfs f0, 0x28(r29)
    stfs f0, 0x38(r29)
    stfs f0, 0x48(r29)
    opword 0xE3E10028
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_801D6FC0
extern "C" asm void fn_801D6FC0() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    fmr f31, f1
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r5
    mr r4, r30
    addi r5, r5, 0x8
    stw r29, 0x24(r1)
    mr r29, r3
    addi r3, r3, 0x4
    bl fn_801D594C
    mr r31, r3
    addi r3, r29, 0x1c
    bl PSMTXIdentity
    fmr f1, f31
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x8
    bl fn_801D6ABC
    lfs f0, 0x8(r1)
    stfs f0, 0x28(r29)
    lfs f0, 0xc(r1)
    stfs f0, 0x38(r29)
    lfs f0, 0x10(r1)
    stfs f0, 0x48(r29)
    opword 0xE3E10038
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_801D7058
extern "C" asm void fn_801D7058() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    fmr f31, f1
    stw r31, 0x2c(r1)
    mr r31, r5
    addi r5, r5, 0x8
    stw r30, 0x28(r1)
    mr r30, r4
    mr r4, r31
    stw r29, 0x24(r1)
    mr r29, r3
    addi r3, r3, 0x4
    bl fn_801D594C
    fmr f1, f31
    mr r7, r3
    mr r5, r30
    mr r6, r31
    addi r3, r29, 0x1c
    addi r4, r29, 0x10
    bl fn_801D6060
    fmr f1, f31
    mr r5, r3
    mr r4, r31
    addi r3, r1, 0x8
    bl fn_801D6ABC
    lwz r0, 0x0(r29)
    oris r0, r0, 0x8000
    stw r0, 0x0(r29)
    lfs f0, 0x8(r1)
    stfs f0, 0x28(r29)
    lfs f0, 0xc(r1)
    stfs f0, 0x38(r29)
    lfs f0, 0x10(r1)
    stfs f0, 0x48(r29)
    opword 0xE3E10038
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: GetMtx__Q34nw4r3g3d12ChrAnmResultCFPQ34nw4r4math5MTX34
extern "C" asm void GetMtx__Q34nw4r3g3d12ChrAnmResultCFPQ34nw4r4math5MTX34() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl GetRotTrans__Q34nw4r3g3d12ChrAnmResultCFPQ34nw4r4math5MTX34
    lwz r0, 0x0(r30)
    rlwinm. r0, r0, 0, 28, 28
    bne lbl_801D72E8
    mr r3, r31
    mr r4, r31
    addi r5, r30, 0x4
    bl MTX34Scale__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801D72E8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
