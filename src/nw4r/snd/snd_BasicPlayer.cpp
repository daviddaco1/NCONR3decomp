#include <nw4r/snd.h>
namespace nw4r { namespace snd { namespace detail {
void PlayerParamSet::Init() {
    volume = 1.0f;
    pan = 0.0f;
    pitch = 1.0f;
    surroundPan = 0.0f;
    lpfFreq = 0.0f;
    biquadType = 0;
    biquadValue = 0.0f;
    remoteFilter = 0;
    outputLineFlag = OUTPUT_LINE_MAIN;
    mainOutVolume = 1.0f;
    mainSend = 0.0f;
    panMode = PAN_MODE_DUAL;
    panCurve = PAN_CURVE_SQRT;
    for (int i = 0; i < AUX_BUS_NUM; ++i) fxSend[i] = 0.0f;
    for (int i = 0; i < 4; ++i) {
        remoteOutVolume[i] = 1.0f;
        remoteSend[i] = 0.0f;
        remoteFxSend[i] = 0.0f;
    }
    for (int i = 0; i < 4; ++i) {
        voiceOutParam[i].volume = 1.0f;
        voiceOutParam[i].pitch = 1.0f;
        voiceOutParam[i].pan = 0.0f;
        voiceOutParam[i].surroundPan = 0.0f;
        voiceOutParam[i].fxSend = 0.0f;
        voiceOutParam[i].lpf = 0.0f;
    }
}
BasicPlayer::BasicPlayer() : mId(BasicSound::INVALID_ID) { InitParam(); }
void BasicPlayer::InitParam() { mPlayerParamSet.Init(); }
void BasicPlayer::SetFxSend(AuxBus bus, f32 send) { mPlayerParamSet.fxSend[bus] = send; }
f32 BasicPlayer::GetFxSend(AuxBus bus) const { return mPlayerParamSet.fxSend[bus]; }
void BasicPlayer::SetBiquadFilter(int type, f32 value) { mPlayerParamSet.biquadType = type; mPlayerParamSet.biquadValue = value; }
void BasicPlayer::SetRemoteFilter(int filter) { mPlayerParamSet.remoteFilter = filter; }
void BasicPlayer::SetRemoteOutVolume(int remote, f32 volume) { mPlayerParamSet.remoteOutVolume[remote] = volume; }
f32 BasicPlayer::GetRemoteOutVolume(int remote) const { return mPlayerParamSet.remoteOutVolume[remote]; }
f32 BasicPlayer::GetRemoteSend(int remote) const { return mPlayerParamSet.remoteSend[remote]; }
f32 BasicPlayer::GetRemoteFxSend(int remote) const { return mPlayerParamSet.remoteFxSend[remote]; }
} } }

