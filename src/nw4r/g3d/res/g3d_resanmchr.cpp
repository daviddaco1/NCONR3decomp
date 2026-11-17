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

extern "C" f32 fn_801D5EA0(const nw4r::g3d::ResAnmChrFVSData*, f32);
extern "C" f32 fn_801D5D30(const nw4r::g3d::ResAnmChrFVSData*, f32);
extern "C" f32 fn_801D5C04(const nw4r::g3d::ResAnmChrFVSData*, f32);

#pragma fp_contract on
extern "C" f32 fn_801D5EA0(const nw4r::g3d::ResAnmChrFVSData* pFVSData, f32 frame) {
    nw4r::g3d::CResAnmChrFrm<nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS32Data>::TFrmData> first =
        nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS32Data>::GetKeyFrame(pFVSData, 0);
    nw4r::g3d::CResAnmChrFrm<nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS32Data>::TFrmData> last =
        nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS32Data>::GetKeyFrame(pFVSData, pFVSData->numFrameValues - 1);

    if (frame <= first.GetFrameF32()) {
        return first.GetValue(pFVSData);
    }

    if (last.GetFrameF32() <= frame) {
        return last.GetValue(pFVSData);
    }

    f32 frameOffset = frame - first.GetFrameF32();
    f32 numKeyFrame = nw4r::math::U16ToF32(pFVSData->numFrameValues);

    f32 f_estimatePos = frameOffset * numKeyFrame * pFVSData->invKeyFrameRange;
    u16 i_estimatePos = nw4r::math::F32ToU16(f_estimatePos);

    nw4r::g3d::CResAnmChrFrm<nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS32Data>::TFrmData> left =
        nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS32Data>::GetKeyFrame(pFVSData, i_estimatePos);

    const nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS32Data>::TFrame quantized = nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS32Data>::QuantizeFrame(frame);

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

    nw4r::g3d::CResAnmChrFrm<nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS32Data>::TFrmData> right = left + 1;

    f32 v0 = left.GetValue(pFVSData);
    f32 t0 = left.GetSlope();
    f32 v1 = right.GetValue(pFVSData);
    f32 t1 = right.GetSlope();

    f32 f0 = left.GetFrameF32();
    f32 f1 = right.GetFrameF32();

    f32 frameDelta = frame - f0;
    f32 keyFrameDelta = f1 - f0;
    f32 keyFrameDeltaInv = nw4r::math::FInv(keyFrameDelta);

    return nw4r::g3d::HermiteInterpolation(v0, t0, v1, t1, frameDelta * keyFrameDeltaInv,
                                frameDelta);
}

extern "C" f32 fn_801D5D30(const nw4r::g3d::ResAnmChrFVSData* pFVSData, f32 frame) {
    nw4r::g3d::CResAnmChrFrm<nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS48Data>::TFrmData> first =
        nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS48Data>::GetKeyFrame(pFVSData, 0);
    nw4r::g3d::CResAnmChrFrm<nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS48Data>::TFrmData> last =
        nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS48Data>::GetKeyFrame(pFVSData, pFVSData->numFrameValues - 1);

    if (frame <= first.GetFrameF32()) {
        return first.GetValue(pFVSData);
    }

    if (last.GetFrameF32() <= frame) {
        return last.GetValue(pFVSData);
    }

    f32 frameOffset = frame - first.GetFrameF32();
    f32 numKeyFrame = nw4r::math::U16ToF32(pFVSData->numFrameValues);

    f32 f_estimatePos = frameOffset * numKeyFrame * pFVSData->invKeyFrameRange;
    u16 i_estimatePos = nw4r::math::F32ToU16(f_estimatePos);

    nw4r::g3d::CResAnmChrFrm<nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS48Data>::TFrmData> left =
        nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS48Data>::GetKeyFrame(pFVSData, i_estimatePos);

    const nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS48Data>::TFrame quantized = nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS48Data>::QuantizeFrame(frame);

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

    nw4r::g3d::CResAnmChrFrm<nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS48Data>::TFrmData> right = left + 1;

    f32 v0 = left.GetValue(pFVSData);
    f32 t0 = left.GetSlope();
    f32 v1 = right.GetValue(pFVSData);
    f32 t1 = right.GetSlope();

    f32 f0 = left.GetFrameF32();
    f32 f1 = right.GetFrameF32();

    f32 frameDelta = frame - f0;
    f32 keyFrameDelta = f1 - f0;
    f32 keyFrameDeltaInv = nw4r::math::FInv(keyFrameDelta);

    return nw4r::g3d::HermiteInterpolation(v0, t0, v1, t1, frameDelta * keyFrameDeltaInv,
                                frameDelta);
}

extern "C" f32 fn_801D5C04(const nw4r::g3d::ResAnmChrFVSData* pFVSData, f32 frame) {
    nw4r::g3d::CResAnmChrFrm<nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS96Data>::TFrmData> first =
        nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS96Data>::GetKeyFrame(pFVSData, 0);
    nw4r::g3d::CResAnmChrFrm<nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS96Data>::TFrmData> last =
        nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS96Data>::GetKeyFrame(pFVSData, pFVSData->numFrameValues - 1);

    if (frame <= first.GetFrameF32()) {
        return first.GetValue(pFVSData);
    }

    if (last.GetFrameF32() <= frame) {
        return last.GetValue(pFVSData);
    }

    f32 frameOffset = frame - first.GetFrameF32();
    f32 numKeyFrame = nw4r::math::U16ToF32(pFVSData->numFrameValues);

    f32 f_estimatePos = frameOffset * numKeyFrame * pFVSData->invKeyFrameRange;
    u16 i_estimatePos = nw4r::math::F32ToU16(f_estimatePos);

    nw4r::g3d::CResAnmChrFrm<nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS96Data>::TFrmData> left =
        nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS96Data>::GetKeyFrame(pFVSData, i_estimatePos);

    const nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS96Data>::TFrame quantized = nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS96Data>::QuantizeFrame(frame);

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

    nw4r::g3d::CResAnmChrFrm<nw4r::g3d::CAnmFmtTraits<nw4r::g3d::ResAnmChrFVS96Data>::TFrmData> right = left + 1;

    f32 v0 = left.GetValue(pFVSData);
    f32 t0 = left.GetSlope();
    f32 v1 = right.GetValue(pFVSData);
    f32 t1 = right.GetSlope();

    f32 f0 = left.GetFrameF32();
    f32 f1 = right.GetFrameF32();

    f32 frameDelta = frame - f0;
    f32 keyFrameDelta = f1 - f0;
    f32 keyFrameDeltaInv = nw4r::math::FInv(keyFrameDelta);

    return nw4r::g3d::HermiteInterpolation(v0, t0, v1, t1, frameDelta * keyFrameDeltaInv,
                                frameDelta);
}
#pragma fp_contract on

extern "C" const nw4r::g3d::ResAnmChrNodeData::AnmData*
fn_801D594C(nw4r::math::VEC3* pResult, const nw4r::g3d::ResAnmChrNodeData* pNodeData,
            const nw4r::g3d::ResAnmChrNodeData::AnmData* pAnmData, f32 frame) {

    u32 flags = pNodeData->flags;
    f32 x, y, z;

    switch (flags & nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_FMT_MASK) {
    case 0: {
        x = pAnmData++->constValue;

        if (flags & nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_UNIFORM) {
            y = x;
            z = x;
        } else {
            y = pAnmData++->constValue;
            z = pAnmData++->constValue;
        }

        break;
    }

    case nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_FVS32_FMT: {
        x = nw4r::g3d::CalcResult32(pNodeData, pAnmData++, frame,
                         flags & nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_X_CONST);

        if (flags & nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_UNIFORM) {
            y = x;
            z = x;
        } else {
            y = nw4r::g3d::CalcResult32(pNodeData, pAnmData++, frame,
                             flags & nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_Y_CONST);
            z = nw4r::g3d::CalcResult32(pNodeData, pAnmData++, frame,
                             flags & nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_Z_CONST);
        }

        break;
    }

    case nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_FVS48_FMT: {
        x = nw4r::g3d::CalcResult48(pNodeData, pAnmData++, frame,
                         flags & nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_X_CONST);

        if (flags & nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_UNIFORM) {
            y = x;
            z = x;
        } else {
            y = nw4r::g3d::CalcResult48(pNodeData, pAnmData++, frame,
                             flags & nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_Y_CONST);
            z = nw4r::g3d::CalcResult48(pNodeData, pAnmData++, frame,
                             flags & nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_Z_CONST);
        }

        break;
    }

    case nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_FVS96_FMT: {
        x = nw4r::g3d::CalcResult96(pNodeData, pAnmData++, frame,
                         flags & nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_X_CONST);

        if (flags & nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_UNIFORM) {
            y = x;
            z = x;
        } else {
            y = nw4r::g3d::CalcResult96(pNodeData, pAnmData++, frame,
                             flags & nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_Y_CONST);
            z = nw4r::g3d::CalcResult96(pNodeData, pAnmData++, frame,
                             flags & nw4r::g3d::ResAnmChrNodeData::FLAG_SCALE_Z_CONST);
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

extern "C" const nw4r::g3d::ResAnmChrNodeData::AnmData*
fn_801D6060(nw4r::math::MTX34* pResult, nw4r::math::VEC3* pRawResult,
               const nw4r::g3d::ResAnmChrInfoData& rInfoData,
               const nw4r::g3d::ResAnmChrNodeData* pNodeData,
               const nw4r::g3d::ResAnmChrNodeData::AnmData* pAnmData, f32 frame) {

    u32 flags = pNodeData->flags;
    f32 x, y, z;

    switch (flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_FMT_MASK) {
    case 0: {
        x = pAnmData++->constValue;
        y = pAnmData++->constValue;
        z = pAnmData++->constValue;
        break;
    }

    case nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_FVS32_FMT: {
        x = nw4r::g3d::CalcResult32(pNodeData, pAnmData++, frame,
                         flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_X_CONST);
        y = nw4r::g3d::CalcResult32(pNodeData, pAnmData++, frame,
                         flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_Y_CONST);
        z = nw4r::g3d::CalcResult32(pNodeData, pAnmData++, frame,
                         flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_Z_CONST);
        break;
    }

    case nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_FVS48_FMT: {
        x = nw4r::g3d::CalcResult48(pNodeData, pAnmData++, frame,
                         flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_X_CONST);
        y = nw4r::g3d::CalcResult48(pNodeData, pAnmData++, frame,
                         flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_Y_CONST);
        z = nw4r::g3d::CalcResult48(pNodeData, pAnmData++, frame,
                         flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_Z_CONST);
        break;
    }

    case nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_FVS96_FMT: {
        x = nw4r::g3d::CalcResult96(pNodeData, pAnmData++, frame,
                         flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_X_CONST);
        y = nw4r::g3d::CalcResult96(pNodeData, pAnmData++, frame,
                         flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_Y_CONST);
        z = nw4r::g3d::CalcResult96(pNodeData, pAnmData++, frame,
                         flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_Z_CONST);
        break;
    }

    case nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_CV8_FMT: {
        x = nw4r::g3d::CalcResultFrm8(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                           flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_X_CONST);
        y = nw4r::g3d::CalcResultFrm8(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                           flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_Y_CONST);
        z = nw4r::g3d::CalcResultFrm8(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                           flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_Z_CONST);
        break;
    }

    case nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_CV16_FMT: {
        x = nw4r::g3d::CalcResultFrm16(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                            flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_X_CONST);
        y = nw4r::g3d::CalcResultFrm16(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                            flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_Y_CONST);
        z = nw4r::g3d::CalcResultFrm16(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                            flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_Z_CONST);
        break;
    }

    case nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_CV32_FMT: {
        x = nw4r::g3d::CalcResultFrm32(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                            flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_X_CONST);
        y = nw4r::g3d::CalcResultFrm32(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                            flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_Y_CONST);
        z = nw4r::g3d::CalcResultFrm32(pNodeData, pAnmData++, rInfoData.numFrame, frame,
                            flags & nw4r::g3d::ResAnmChrNodeData::FLAG_ROT_Z_CONST);
        break;
    }

    default: {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    }
    }

    nw4r::math::MTX34RotXYZDeg(pResult, x, y, z);

    pRawResult->x = x;
    pRawResult->y = y;
    pRawResult->z = z;

    return pAnmData;
}

#include <nw4r/g3d.h>
#include <nw4r/math.h>
#include <nw4r/ut.h>

namespace nw4r {
namespace g3d {
namespace {

inline u32 MakeResult(TexSrt* pSrt, const ResAnmTexSrtTexData* pTexData,
                      f32 frame) {
    int anmIdx = 0;
    u32 flags = pTexData->flags;
    TexSrt& rSrt = *pSrt;

    if (!(flags & ResAnmTexSrtTexData::FLAG_SCALE_ONE)) {
        bool suConstant = flags & ResAnmTexSrtTexData::FLAG_SCALE_U_CONST;

        rSrt.Su = detail::GetResAnmResult(&pTexData->anms[anmIdx++], frame,
                                          suConstant);

        if (flags & ResAnmTexSrtTexData::FLAG_SCALE_UNIFORM) {
            rSrt.Sv = rSrt.Su;
        } else {
            bool svConstant = flags & ResAnmTexSrtTexData::FLAG_SCALE_V_CONST;

            rSrt.Sv = detail::GetResAnmResult(&pTexData->anms[anmIdx++], frame,
                                              svConstant);
        }
    } else {
        rSrt.Su = 1.0f;
        rSrt.Sv = 1.0f;
    }

    if (!(flags & ResAnmTexSrtTexData::FLAG_ROT_ZERO)) {
        bool rConstant = flags & ResAnmTexSrtTexData::FLAG_ROT_CONST;

        rSrt.R = detail::GetResAnmResult(&pTexData->anms[anmIdx++], frame,
                                         rConstant);
    } else {
        rSrt.R = 0.0f;
    }

    if (!(flags & ResAnmTexSrtTexData::FLAG_TRANS_ZERO)) {
        bool tuConstant = flags & ResAnmTexSrtTexData::FLAG_TRANS_U_CONST;
        bool tvConstant = flags & ResAnmTexSrtTexData::FLAG_TRANS_V_CONST;

        rSrt.Tu = detail::GetResAnmResult(&pTexData->anms[anmIdx++], frame,
                                          tuConstant);
        rSrt.Tv = detail::GetResAnmResult(&pTexData->anms[anmIdx++], frame,
                                          tvConstant);
    } else {
        rSrt.Tu = 0.0f;
        rSrt.Tv = 0.0f;
    }

    return flags & (ResAnmTexSrtTexData::FLAG_ANM_EXISTS |
                    ResAnmTexSrtTexData::FLAG_SCALE_ONE |
                    ResAnmTexSrtTexData::FLAG_ROT_ZERO |
                    ResAnmTexSrtTexData::FLAG_TRANS_ZERO);
}

} // namespace

void ResAnmTexSrt::GetAnmResult(TexSrtAnmResult* pResult, u32 idx,
                                f32 frame) const {
    const ResAnmTexSrtMatData* pMatData = GetMatAnm(idx);
    const s32* pToTexData = pMatData->toResAnmTexSrtTexData;
    u32 flags = pMatData->flags;
    u32 indFlags = pMatData->indFlags;

    pResult->flags = 0;
    pResult->indFlags = 0;
    pResult->texMtxMode = ref().info.texMtxMode;

    int index;

    for (index = 0; flags != 0;
         flags >>= ResAnmTexSrtMatData::NUM_OF_FLAGS, index++) {

        if (!(flags & ResAnmTexSrtMatData::FLAG_ANM_EXISTS)) {
            continue;
        }

        int srtIndex = index;

        const ResAnmTexSrtTexData* pTexData =
            reinterpret_cast<const ResAnmTexSrtTexData*>(
                ut::AddOffsetToPtr(pMatData, *pToTexData++));

        u32 result = MakeResult(&pResult->srt[srtIndex], pTexData, frame);
        pResult->flags |= result << (index * TexSrtAnmResult::NUM_OF_FLAGS);
    }

    for (index = 0; indFlags != 0;
         indFlags >>= ResAnmTexSrtMatData::NUM_OF_FLAGS, index++) {

        if (!(indFlags & ResAnmTexSrtMatData::FLAG_ANM_EXISTS)) {
            continue;
        }

        int srtIndex = index + TexSrtAnmResult::NUM_OF_MAT_TEX_MTX;

        const ResAnmTexSrtTexData* pTexData =
            reinterpret_cast<const ResAnmTexSrtTexData*>(
                ut::AddOffsetToPtr(pMatData, *pToTexData++));

        u32 result = MakeResult(&pResult->srt[srtIndex], pTexData, frame);
        pResult->indFlags |= result << (index * TexSrtAnmResult::NUM_OF_FLAGS);
    }
}

} // namespace g3d
} // namespace nw4r

#include <nw4r/g3d.h>
#include <nw4r/math.h>
#include <nw4r/ut.h>

namespace nw4r {
namespace g3d {

ResFile ResAnmTexPat::GetParent() const {
    return ofs_to_obj<ResFile>(ref().toResFileData);
}

namespace {

const ResAnmTexPatFrmData* SearchFrame(const ResAnmTexPatAnmData* pAnmData,
                                       f32 frame) {
    const ResAnmTexPatFrmData& rFirst = pAnmData->frameValues[0];
    const ResAnmTexPatFrmData& rLast =
        pAnmData->frameValues[pAnmData->numFrameValues - 1];

    if (frame <= rFirst.frame) {
        return &rFirst;
    }

    if (rLast.frame <= frame) {
        return &rLast;
    }

    f32 frameOffset = frame - rFirst.frame;
    f32 numKeyFrame = math::U16ToF32(pAnmData->numFrameValues);

    f32 fEstimate = frameOffset * numKeyFrame * pAnmData->invKeyFrameRange;
    u16 iEstimate = math::F32ToU16(fEstimate);

    const ResAnmTexPatFrmData* pFrmData = &pAnmData->frameValues[iEstimate];

    if (frame < pFrmData->frame) {
        do {
            pFrmData--;
        } while (frame < pFrmData->frame);
    } else {
        do {
            pFrmData++;
        } while (pFrmData->frame <= frame);

        pFrmData--;
    }

    return pFrmData;
}

inline ResName GetResNameFromOffsetArray(s32* pStringArray, int idx) {
    s32 offset = pStringArray[idx];
    return NW4R_G3D_OFS_TO_RESNAME(pStringArray, offset);
}

} // namespace

void ResAnmTexPat::GetAnmResult(TexPatAnmResult* pResult, u32 idx,
                                f32 frame) const {
    (void)GetParent(); // unused

    const ResAnmTexPatMatData* pMatData = GetMatAnm(idx);
    const ResAnmTexPatMatData::AnmData* pAnmDataImpl = pMatData->anms;
    u32 flags = pMatData->flags;

    const ResAnmTexPatData& r = ref();
    const ResTex* pResTexArray = ofs_to_ptr<ResTex>(r.toResTexArray);
    const ResPltt* pResPlttArray = ofs_to_ptr<ResPltt>(r.toResPlttArray);

    pResult->bTexExist = 0;
    pResult->bPlttExist = 0;

    for (int i = 0; i < TexPatAnmResult::NUM_OF_ANMS;
         flags >>= ResAnmTexPatMatData::NUM_OF_FLAGS, i++) {

        if (!(flags & ResAnmTexPatMatData::FLAG_ANM_EXISTS)) {
            continue;
        }

        int texIndex, plttIndex;
        if (flags & ResAnmTexPatMatData::FLAG_ANM_CONST) {
            texIndex = pAnmDataImpl->constValue.texIndex;
            plttIndex = pAnmDataImpl->constValue.plttIndex;
        } else {
            const ResAnmTexPatAnmData* pAnmData =
                static_cast<const ResAnmTexPatAnmData*>(ut::AddOffsetToPtr(
                    pMatData, pAnmDataImpl->toResAnmTexPatAnmData));

            const ResAnmTexPatFrmData* pFrmData = SearchFrame(pAnmData, frame);
            texIndex = pFrmData->texIndex;
            plttIndex = pFrmData->plttIndex;
        }

        u32 targetBit = 1 << i;

        if (flags & ResAnmTexPatMatData::FLAG_ANM_TEX) {
            ResTex tex(pResTexArray[texIndex]);

            if (tex.IsValid()) {
                pResult->tex[i] = tex;
                pResult->bTexExist |= targetBit;
            }
        }

        if (flags & ResAnmTexPatMatData::FLAG_ANM_PLTT) {
            ResPltt pltt(pResPlttArray[plttIndex]);

            if (pltt.IsValid()) {
                pResult->pltt[i] = pltt;
                pResult->bPlttExist |= targetBit;
            }
        }

        pAnmDataImpl++;
    }
}

bool ResAnmTexPat::Bind(const ResFile file) {
    const ResAnmTexPatInfoData& rInfoData = ref().info;
    int numTexture = rInfoData.numTexture;
    int numPalette = rInfoData.numPalette;

    s32* pTexNameArray = ofs_to_ptr<s32>(ref().toTexNameArray);
    s32* pPlttNameArray = ofs_to_ptr<s32>(ref().toPlttNameArray);

    ResTex* pResTexArray = ofs_to_ptr<ResTex>(ref().toResTexArray);
    ResPltt* pResPlttArray = ofs_to_ptr<ResPltt>(ref().toResPlttArray);

    int numBound = 0;

    for (int i = 0; i < numTexture; i++) {
        ResTex tex(pResTexArray[i]);

        if (tex.IsValid()) {
            numBound++;
        } else {
            ResTex found =
                file.GetResTex(GetResNameFromOffsetArray(pTexNameArray, i));

            if (found.IsValid()) {
                pResTexArray[i] = found;
                numBound++;
            }
        }
    }

    for (int i = 0; i < numPalette; i++) {
        ResPltt pltt(pResPlttArray[i]);

        if (pltt.IsValid()) {
            numBound++;
        } else {
            ResPltt found =
                file.GetResPltt(GetResNameFromOffsetArray(pPlttNameArray, i));

            if (found.IsValid()) {
                pResPlttArray[i] = found;
                numBound++;
            }
        }
    }

    return numBound == numTexture + numPalette;
}

void ResAnmTexPat::Release() {
    const ResAnmTexPatInfoData& rInfoData = ref().info;
    int numTexture = rInfoData.numTexture;
    int numPalette = rInfoData.numPalette;

    ResTex* pResTexArray = ofs_to_ptr<ResTex>(ref().toResTexArray);
    ResPltt* pResPlttArray = ofs_to_ptr<ResPltt>(ref().toResPlttArray);

    for (int i = 0; i < numTexture; i++) {
        pResTexArray[i] = ResTex(NULL);
    }

    for (int i = 0; i < numPalette; i++) {
        pResPlttArray[i] = ResPltt(NULL);
    }
}

} // namespace g3d
} // namespace nw4r

#include <nw4r/g3d.h>

namespace nw4r {
namespace g3d {

void ResAnmClr::GetAnmResult(ClrAnmResult* pResult, u32 idx, f32 frame) const {
    const ResAnmClrMatData* pMatData = GetMatAnm(idx);
    const ResAnmClrAnmData* pAnmData = pMatData->anms;
    const ResAnmClrInfoData& rInfoData = ref().info;

    u32 flags = pMatData->flags;
    pResult->bRgbaExist = 0;

    if (flags == 0) {
        return;
    }

    f32 clippedFrame = detail::ClipFrame(rInfoData, frame);

    for (int i = 0; i < ClrAnmResult::CLA_MAX;
         flags >>= ResAnmClrMatData::NUM_OF_FLAGS, i++) {

        if (!(flags & ResAnmClrMatData::FLAG_ANM_EXISTS)) {
            continue;
        }

        bool constant = flags & ResAnmClrMatData::FLAG_ANM_CONSTANT;

        pResult->bRgbaExist |= 1 << i;
        pResult->rgbaMask[i] = pAnmData->mask;
        pResult->rgba[i] = detail::GetResColorAnmResult(&pAnmData->color,
                                                        clippedFrame, constant);

        pAnmData++;
    }
}

} // namespace g3d
} // namespace nw4r

using namespace nw4r;
using namespace nw4r::g3d;
extern "C" void fn_801D5538(const ResAnmTexSrt* self, TexSrtAnmResult* pResult, u32 idx,
                                f32 frame) {
    const ResAnmTexSrtMatData* pMatData = self->GetMatAnm(idx);
    const s32* pToTexData = pMatData->toResAnmTexSrtTexData;
    u32 flags = pMatData->flags;
    u32 indFlags = pMatData->indFlags;

    pResult->flags = 0;
    pResult->indFlags = 0;
    pResult->texMtxMode = self->ref().info.texMtxMode;

    int index;

    for (index = 0; flags != 0;
         flags >>= ResAnmTexSrtMatData::NUM_OF_FLAGS, index++) {

        if (!(flags & ResAnmTexSrtMatData::FLAG_ANM_EXISTS)) {
            continue;
        }

        int srtIndex = index;

        const ResAnmTexSrtTexData* pTexData =
            reinterpret_cast<const ResAnmTexSrtTexData*>(
                ut::AddOffsetToPtr(pMatData, *pToTexData++));

        u32 result = MakeResult(&pResult->srt[srtIndex], pTexData, frame);
        pResult->flags |= result << (index * TexSrtAnmResult::NUM_OF_FLAGS);
    }

    for (index = 0; indFlags != 0;
         indFlags >>= ResAnmTexSrtMatData::NUM_OF_FLAGS, index++) {

        if (!(indFlags & ResAnmTexSrtMatData::FLAG_ANM_EXISTS)) {
            continue;
        }

        int srtIndex = index + TexSrtAnmResult::NUM_OF_MAT_TEX_MTX;

        const ResAnmTexSrtTexData* pTexData =
            reinterpret_cast<const ResAnmTexSrtTexData*>(
                ut::AddOffsetToPtr(pMatData, *pToTexData++));

        u32 result = MakeResult(&pResult->srt[srtIndex], pTexData, frame);
        pResult->indFlags |= result << (index * TexSrtAnmResult::NUM_OF_FLAGS);
    }
}

extern "C" void fn_801D50A8(const ResAnmTexPat* self, TexPatAnmResult* pResult, u32 idx,
                                f32 frame) {
    (void)self->GetParent(); // unused

    const ResAnmTexPatMatData* pMatData = self->GetMatAnm(idx);
    const ResAnmTexPatMatData::AnmData* pAnmDataImpl = pMatData->anms;
    u32 flags = pMatData->flags;

    const ResAnmTexPatData& r = self->ref();
    const ResTex* pResTexArray = self->ofs_to_ptr<ResTex>(r.toResTexArray);
    const ResPltt* pResPlttArray = self->ofs_to_ptr<ResPltt>(r.toResPlttArray);

    pResult->bTexExist = 0;
    pResult->bPlttExist = 0;

    for (int i = 0; i < TexPatAnmResult::NUM_OF_ANMS;
         flags >>= ResAnmTexPatMatData::NUM_OF_FLAGS, i++) {

        if (!(flags & ResAnmTexPatMatData::FLAG_ANM_EXISTS)) {
            continue;
        }

        int texIndex, plttIndex;
        if (flags & ResAnmTexPatMatData::FLAG_ANM_CONST) {
            texIndex = pAnmDataImpl->constValue.texIndex;
            plttIndex = pAnmDataImpl->constValue.plttIndex;
        } else {
            const ResAnmTexPatAnmData* pAnmData =
                static_cast<const ResAnmTexPatAnmData*>(ut::AddOffsetToPtr(
                    pMatData, pAnmDataImpl->toResAnmTexPatAnmData));

            const ResAnmTexPatFrmData* pFrmData = SearchFrame(pAnmData, frame);
            texIndex = pFrmData->texIndex;
            plttIndex = pFrmData->plttIndex;
        }

        u32 targetBit = 1 << i;

        if (flags & ResAnmTexPatMatData::FLAG_ANM_TEX) {
            ResTex tex(pResTexArray[texIndex]);

            if (tex.IsValid()) {
                pResult->tex[i] = tex;
                pResult->bTexExist |= targetBit;
            }
        }

        if (flags & ResAnmTexPatMatData::FLAG_ANM_PLTT) {
            ResPltt pltt(pResPlttArray[plttIndex]);

            if (pltt.IsValid()) {
                pResult->pltt[i] = pltt;
                pResult->bPlttExist |= targetBit;
            }
        }

        pAnmDataImpl++;
    }
}

extern "C" bool fn_801D5228(ResAnmTexPat* self, const ResFile file) {
    const ResAnmTexPatInfoData& rInfoData = self->ref().info;
    int numTexture = rInfoData.numTexture;
    int numPalette = rInfoData.numPalette;

    s32* pTexNameArray = self->ofs_to_ptr<s32>(self->ref().toTexNameArray);
    s32* pPlttNameArray = self->ofs_to_ptr<s32>(self->ref().toPlttNameArray);

    ResTex* pResTexArray = self->ofs_to_ptr<ResTex>(self->ref().toResTexArray);
    ResPltt* pResPlttArray = self->ofs_to_ptr<ResPltt>(self->ref().toResPlttArray);

    int numBound = 0;

    for (int i = 0; i < numTexture; i++) {
        ResTex tex(pResTexArray[i]);

        if (tex.IsValid()) {
            numBound++;
        } else {
            ResTex found =
                file.GetResTex(GetResNameFromOffsetArray(pTexNameArray, i));

            if (found.IsValid()) {
                pResTexArray[i] = found;
                numBound++;
            }
        }
    }

    for (int i = 0; i < numPalette; i++) {
        ResPltt pltt(pResPlttArray[i]);

        if (pltt.IsValid()) {
            numBound++;
        } else {
            ResPltt found =
                file.GetResPltt(GetResNameFromOffsetArray(pPlttNameArray, i));

            if (found.IsValid()) {
                pResPlttArray[i] = found;
                numBound++;
            }
        }
    }

    return numBound == numTexture + numPalette;
}

extern "C" void fn_801D5398(ResAnmTexPat* self) {
    const ResAnmTexPatInfoData& rInfoData = self->ref().info;
    int numTexture = rInfoData.numTexture;
    int numPalette = rInfoData.numPalette;

    ResTex* pResTexArray = self->ofs_to_ptr<ResTex>(self->ref().toResTexArray);
    ResPltt* pResPlttArray = self->ofs_to_ptr<ResPltt>(self->ref().toResPlttArray);

    for (int i = 0; i < numTexture; i++) {
        pResTexArray[i] = ResTex(NULL);
    }

    for (int i = 0; i < numPalette; i++) {
        pResPlttArray[i] = ResPltt(NULL);
    }
}

extern "C" void fn_801D4E90(const ResAnmClr* self, ClrAnmResult* pResult, u32 idx, f32 frame) {
    const ResAnmClrMatData* pMatData = self->GetMatAnm(idx);
    const ResAnmClrAnmData* pAnmData = pMatData->anms;
    const ResAnmClrInfoData& rInfoData = self->ref().info;

    u32 flags = pMatData->flags;
    pResult->bRgbaExist = 0;

    if (flags == 0) {
        return;
    }

    f32 clippedFrame = detail::ClipFrame(rInfoData, frame);

    for (int i = 0; i < ClrAnmResult::CLA_MAX;
         flags >>= ResAnmClrMatData::NUM_OF_FLAGS, i++) {

        if (!(flags & ResAnmClrMatData::FLAG_ANM_EXISTS)) {
            continue;
        }

        bool constant = flags & ResAnmClrMatData::FLAG_ANM_CONSTANT;

        pResult->bRgbaExist |= 1 << i;
        pResult->rgbaMask[i] = pAnmData->mask;
        pResult->rgba[i] = detail::GetResColorAnmResult(&pAnmData->color,
                                                        clippedFrame, constant);

        pAnmData++;
    }
}

#include <nw4r/g3d.h>
#pragma fp_contract off
#include <nw4r/math.h>
#include <nw4r/ut.h>

namespace nw4r {
namespace g3d {
namespace detail {
namespace {

/**
 * The Hermite interpolating polynomial f satisfies the following conditions:
 *        f(0)  = v0
 *        f(d)  = v1
 *        f'(0) = t0
 *        f'(d) = t1
 *
 * The value returned is f(p).
 */
inline f32 HermiteInterpolation(f32 v0, f32 t0, f32 v1, f32 t1, f32 p, f32 d) {
    f32 invd = math::FInv(d);

    // Linear factors
    f32 s = p * invd;   // p / d
    f32 s_1 = s - 1.0f; // (p - d) / d

    return v0 + s * (s * ((2.0f * s - 3.0f) * (v0 - v1))) +
           p * s_1 * (s_1 * t0 + s * t1);
}

/**
 * The linear interpolating function f satisfies the following conditions:
 *        f(0)      = a
 *        f(0x8000) = b
 *
 * The value returned is f(ratio).
 */
inline u8 LinearInterpColorElem(u8 a, u8 b, s16 ratio) {
    return a + ((b - a) * ratio >> 15);
}

} // namespace

f32 GetResKeyFrameAnmResult(const ResKeyFrameAnmData* pData, f32 frame) {
    const ResKeyFrameData& rFirst = pData->keyFrames[0];
    const ResKeyFrameData& rLast = pData->keyFrames[pData->numKeyFrame - 1];

    if (frame <= rFirst.frame) {
        return rFirst.value;
    }

    if (rLast.frame <= frame) {
        return rLast.value;
    }

    f32 frameOffset = frame - rFirst.frame;
    f32 numKeyFrame = math::U16ToF32(pData->numKeyFrame);

    f32 fEstimate = frameOffset * numKeyFrame * pData->invKeyFrameRange;
    u16 iEstimate = math::F32ToU16(fEstimate);

    const ResKeyFrameData* pLeft = &pData->keyFrames[iEstimate];

    if (frame < pLeft->frame) {
        do {
            pLeft--;
        } while (frame < pLeft->frame);
    } else {
        do {
            pLeft++;
        } while (pLeft->frame <= frame);

        pLeft--;
    }

    if (pLeft->frame == frame) {
        return pLeft->value;
    }

    const ResKeyFrameData* pRight = pLeft + 1;
    f32 curFrameDelta = frame - pLeft->frame;
    f32 keyFrameDelta = pRight->frame - pLeft->frame;

    return HermiteInterpolation(pLeft->value, pLeft->slope, pRight->value,
                                pRight->slope, curFrameDelta, keyFrameDelta);
}

u32 GetResColorAnmResult(const ResColorAnmFramesData* pData, f32 frame) {
    const u32* pColorArray = pData->frameColors;

    f32 intPart;
    f32 fracPart = math::FModf(frame, &intPart);
    int intFrame = static_cast<int>(intPart);

    if (fracPart == 0.0f) {
        return pColorArray[intFrame];
    }

    ut::Color left(pColorArray[intFrame]);
    ut::Color right(pColorArray[intFrame + 1]);

    f32 biasedRatio = 32768 * fracPart;
    s16 fpRatio = math::F32ToS16(biasedRatio);

    return ut::Color(LinearInterpColorElem(left.r, right.r, fpRatio),
                     LinearInterpColorElem(left.g, right.g, fpRatio),
                     LinearInterpColorElem(left.b, right.b, fpRatio),
                     LinearInterpColorElem(left.a, right.a, fpRatio));
}

} // namespace detail
} // namespace g3d
} // namespace nw4r

extern "C" f32 fn_801D4B44(const ResKeyFrameAnmData* pData, f32 frame) {
    const ResKeyFrameData& rFirst = pData->keyFrames[0];
    const ResKeyFrameData& rLast = pData->keyFrames[pData->numKeyFrame - 1];

    if (frame <= rFirst.frame) {
        return rFirst.value;
    }

    if (rLast.frame <= frame) {
        return rLast.value;
    }

    f32 frameOffset = frame - rFirst.frame;
    f32 numKeyFrame = math::U16ToF32(pData->numKeyFrame);

    f32 fEstimate = frameOffset * numKeyFrame * pData->invKeyFrameRange;
    u16 iEstimate = math::F32ToU16(fEstimate);

    const ResKeyFrameData* pLeft = &pData->keyFrames[iEstimate];

    if (frame < pLeft->frame) {
        do {
            pLeft--;
        } while (frame < pLeft->frame);
    } else {
        do {
            pLeft++;
        } while (pLeft->frame <= frame);

        pLeft--;
    }

    if (pLeft->frame == frame) {
        return pLeft->value;
    }

    const ResKeyFrameData* pRight = pLeft + 1;
    f32 curFrameDelta = frame - pLeft->frame;
    f32 keyFrameDelta = pRight->frame - pLeft->frame;

    return nw4r::g3d::detail::HermiteInterpolation(pLeft->value, pLeft->slope, pRight->value,
                                pRight->slope, curFrameDelta, keyFrameDelta);
}

#pragma fp_contract on

// fn_801D594C: C recuperado arriba.

// fn_801D5C04: C recuperado arriba.

// fn_801D5D30: C recuperado arriba.

// fn_801D5EA0: C recuperado arriba.

// fn_801D6060: C recuperado arriba.

