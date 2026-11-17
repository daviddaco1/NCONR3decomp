// Adaptado de xbret/xenoblade (CC0); campos nuevos contrastados con zeldaret/ss y RNEPDA.
// RNEPDA: layout validado contra PlayerParamSet::Init y BasicPlayer.
#ifndef NW4R_SND_BASIC_PLAYER_H
#define NW4R_SND_BASIC_PLAYER_H
#include <nw4r/types_nw4r.h>

#include <nw4r/snd/snd_Types.h>

#include <nw4r/ut.h>

#include <revolution/WPAD.h>

namespace nw4r {
namespace snd {
struct VoiceOutParam {
    VoiceOutParam() : volume(1.0f), pitch(1.0f), pan(0.0f), surroundPan(0.0f), fxSend(0.0f), lpf(0.0f) {}
    f32 volume, pitch, pan, surroundPan, fxSend, lpf;
};
namespace detail {
struct PlayerParamSet {
    PlayerParamSet() { Init(); }
    void Init();
    f32 volume, pitch, pan, surroundPan, lpfFreq, biquadValue;
    u8 biquadType, remoteFilter;
    int outputLineFlag;
    f32 mainOutVolume, mainSend;
    PanMode panMode;
    PanCurve panCurve;
    f32 fxSend[AUX_BUS_NUM];
    f32 remoteOutVolume[4], remoteSend[4], remoteFxSend[4];
    VoiceOutParam voiceOutParam[4];
};


class BasicPlayer {
public:
    BasicPlayer();
    virtual ~BasicPlayer() {} // at 0x8

    virtual bool Start() = 0;           // at 0xC
    virtual void Stop() = 0;            // at 0x10
    virtual void Pause(bool flag) = 0;  // at 0x14
    virtual bool IsActive() const = 0;  // at 0x18
    virtual bool IsStarted() const = 0; // at 0x1C
    virtual bool IsPause() const = 0;   // at 0x20

    void InitParam();
    void SetBiquadFilter(int type, f32 value);
    f32 GetBiquadValue() const { return mPlayerParamSet.biquadValue; }
    int GetBiquadType() const { return mPlayerParamSet.biquadType; }

    u32 GetId() const {
        return mId;
    }
    void SetId(u32 id) {
        mId = id;
    }

    f32 GetVolume() const {
        return mPlayerParamSet.volume;
    }
    void SetVolume(f32 volume) {
        mPlayerParamSet.volume = volume;
    }

    f32 GetPitch() const {
        return mPlayerParamSet.pitch;
    }
    void SetPitch(f32 pitch) {
        mPlayerParamSet.pitch = pitch;
    }

    f32 GetPan() const {
        return mPlayerParamSet.pan;
    }
    void SetPan(f32 pan) {
        mPlayerParamSet.pan = pan;
    }

    f32 GetSurroundPan() const {
        return mPlayerParamSet.surroundPan;
    }
    void SetSurroundPan(f32 pan) {
        mPlayerParamSet.surroundPan = pan;
    }

    f32 GetLpfFreq() const {
        return mPlayerParamSet.lpfFreq;
    }
    void SetLpfFreq(f32 freq) {
        mPlayerParamSet.lpfFreq = freq;
    }

    int GetOutputLine() const {
        return mPlayerParamSet.outputLineFlag;
    }
    void SetOutputLine(int flags) {
        mPlayerParamSet.outputLineFlag = flags;
    }

    f32 GetMainOutVolume() const {
        return mPlayerParamSet.mainOutVolume;
    }
    void SetMainOutVolume(f32 volume) {
        mPlayerParamSet.mainOutVolume = volume;
    }

    f32 GetMainSend() const {
        return mPlayerParamSet.mainSend;
    }
    void SetMainSend(f32 send) {
        mPlayerParamSet.mainSend = send;
    }

    void SetFxSend(AuxBus bus, f32 send);
    f32 GetFxSend(AuxBus bus) const;

    void SetRemoteOutVolume(int remote, f32 volume);
    f32 GetRemoteOutVolume(int remote) const;

    f32 GetRemoteSend(int remote) const;
    f32 GetRemoteFxSend(int remote) const;

    int GetRemoteFilter() const {
        return mPlayerParamSet.remoteFilter;
    }
    void SetRemoteFilter(int filter);

    PanMode GetPanMode() const {
        return mPlayerParamSet.panMode;
    }
    void SetPanMode(PanMode mode) {
        mPlayerParamSet.panMode = mode;
    }

    PanCurve GetPanCurve() const {
        return mPlayerParamSet.panCurve;
    }
    void SetPanCurve(PanCurve curve) {
        mPlayerParamSet.panCurve = curve;
    }

private:
    PlayerParamSet mPlayerParamSet; // 0x04..0xCF
    u32 mId; // 0xD0
};

} // namespace detail
} // namespace snd
} // namespace nw4r

#endif
