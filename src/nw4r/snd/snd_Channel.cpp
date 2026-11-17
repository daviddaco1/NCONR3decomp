// Adaptado de zeldaret/ss, CC0, commit 96f2dd5497c4ceb595de76fd897fbb1542b27323.
#include <nw4r_ss_compat/snd_version.h>
#include "nw4r/snd/snd_Channel.h"

/* Original source:
 * kiwi515/ogws
 * src/nw4r/snd/snd_Channel.cpp
 */

/*******************************************************************************
 * headers
 */

#include "common.h"

#include "nw4r/snd/snd_EnvGenerator.h"
#include "nw4r/snd/snd_global.h"
#include "nw4r/snd/snd_InstancePool.h"
#include "nw4r/snd/snd_Lfo.h"
#include "nw4r/snd/snd_MoveValue.h"
#include "nw4r/snd/snd_Util.h"
#include "nw4r/snd/snd_Voice.h"
#include "nw4r/snd/snd_VoiceManager.h"
#include "nw4r/snd/snd_WaveFile.h"

#include "nw4r/ut/ut_Lock.h"

#include "nw4r/NW4RAssert.hpp"

/*******************************************************************************
 * functions
 */

namespace nw4r { namespace snd { namespace detail {

ChannelManager &ChannelManager::GetInstance()
{
	static ChannelManager instance;

	return instance;
}

ChannelManager::ChannelManager() :
	mInitialized	(false),
	mChannelCount	(0)
{
}

u32 ChannelManager::GetRequiredMemSize(int channelCount)
{
	return sizeof(Channel) * (1 + channelCount);
}

void ChannelManager::Setup(void *mem, u32 memSize)
{
	ut::AutoInterruptLock lock;

	if (mInitialized)
		return;

	mChannelCount	= mPool.Create(mem, memSize);
	mMem			= mem;
	mMemSize		= memSize;
	mInitialized	= true;
}

void ChannelManager::Shutdown()
{
	ut::AutoInterruptLock lock;

	if (!mInitialized)
		return;

	NW4R_RANGE_FOR_NO_AUTO_INC(itr, mChannelList)
	{
		decltype(itr) curItr = itr++;

		curItr->Stop();
	}

	NW4RAssert_Line(78, mChannelList.IsEmpty());

	mPool.Destroy(mMem, mMemSize);
	mInitialized = false;
}

Channel *ChannelManager::Alloc()
{
	Channel *channel = mPool.Alloc();

	mChannelList.PushBack(channel);
	return channel;
}

void ChannelManager::Free(Channel *channel)
{
	mChannelList.Erase(channel);
	mPool.Free(channel);
}

void ChannelManager::UpdateAllChannel()
{
	NW4R_RANGE_FOR_NO_AUTO_INC(itr, mChannelList)
	{
		decltype(itr) curItr = itr++;

		curItr->Update(true);
	}
}

Channel::Channel() :
	mPauseFlag	(false),
	mActiveFlag	(false),
	mAllocFlag	(false),
	mVoice		(nullptr)
{
}

Channel::~Channel() {}

void Channel::InitParam(Callback *callback, u32 callbackData)
{
	mNextLink					= nullptr;
	mCallback					= callback;
	mCallbackData				= callbackData;
	mWaveDataLocationCallback	= nullptr;
	mWaveInfo					= nullptr;
	mPauseFlag					= false;
	mAutoSweep					= true;
	mReleasePriorityFixFlag		= false;
	mReleaseIgnoreFlag			= false;
	mLength						= 0;
	mKey						= KEY_INIT;
	mOriginalKey				= ORIGINAL_KEY_INIT;
	mInitVolume					= 1.0f;
	mInitPan					= 0.0f;
	mInitSurroundPan			= 0.0f;
	mTune						= 1.0f;
	mUserVolume					= 1.0f;
	mUserPitch					= 0.0f;
	mUserPitchRatio				= 1.0f;
	mUserPan					= 0.0f;
	mUserSurroundPan			= 0.0f;
	mUserLpfFreq				= 0.0f;
	mBiquadType					= 0;
	mBiquadValue				= 0.0f;
	mRemoteFilter				= 0;
	mOutputLineFlag				= OUTPUT_LINE_MAIN;
	mMainOutVolume				= 1.0f;
	mMainSend					= 0.0f;

	for (int i = 0; i < AUX_BUS_NUM; i++)
		mFxSend[i] = 0.0f;

	for (int i = 0; i < 4; i++) {
        mRemoteOutVolume[i] = 1.0f;
        mRemoteSend[i] = 0.0f;
        mRemoteFxSend[i] = 0.0f;
    }

	mSilenceVolume.InitValue(SILENCE_VOLUME_MAX);

	mSweepPitch					= 0.0f;
	mSweepLength				= 0;
	mSweepCounter				= 0;

	mEnvelope.Init(EnvGenerator::VOLUME_INIT);
	mLfo.GetParam().Init();

	mLfoTarget					= LFO_TARGET_PITCH;
	mPanMode					= PAN_MODE_DUAL;
	mPanCurve					= PAN_CURVE_SQRT;
	mAlternateAssign			= 0;
}

extern "C" void SetRemoteSend__Q44nw4r3snd6detail5VoiceFif(Voice*, int, f32);
extern "C" void SetRemoteFxSend__Q44nw4r3snd6detail5VoiceFif(Voice*, int, f32);
inline void Channel::Stop()
{
	if (!mVoice)
		return;

	mVoice->Stop();
	mVoice->Free();

	mVoice = nullptr;

	mPauseFlag = false;
	mActiveFlag = false;

	if (mCallback)
		(*mCallback)(this, CALLBACK_STATUS_STOPPED, mCallbackData);

	if (mWaveDataLocationCallback)
		mWaveDataLocationCallback->at_0x0c(mWaveInfo);

	if (mAllocFlag)
	{
		mAllocFlag = false;
		ChannelManager::GetInstance().Free(this);
	}
}
DECOMP_FORCEACTIVE(ncon_channel_stop, Channel::Stop);

void Channel::Update(bool doPeriodicProc)
{
	if (!mActiveFlag)
		return;

	if (mPauseFlag)
		doPeriodicProc = false;

	f32 lfoValue = mLfo.GetValue();

	mSilenceVolume.Update();

	f32 volume = 1.0f;
	volume *= mInitVolume;
	volume *= mUserVolume;
	volume *=
		mSilenceVolume.GetValue() / static_cast<float>(SILENCE_VOLUME_MAX);

	f32 veInitVolume = 1.0f;
	veInitVolume *= Util::CalcVolumeRatio(mEnvelope.GetValue());

	if (mLfoTarget == LFO_TARGET_VOLUME)
		veInitVolume *= Util::CalcVolumeRatio(lfoValue * 6.0f);

	if (mEnvelope.GetStatus() == EnvGenerator::STATUS_RELEASE)
	{
		if (mCallback)
		{
			if (veInitVolume == 0.0f)
			{
				Stop();
				return;
			}
		}
		else
		{
			if (volume * veInitVolume == 0.0f)
			{
				Stop();
				return;
			}
		}
	}

	f32 cent = 0.0f;
	cent += mKey - mOriginalKey;
	cent += GetSweepValue();
	cent += mUserPitch;
	if (mLfoTarget == LFO_TARGET_PITCH)
		cent += lfoValue;

	f32 pitchRatio = 1.0f;
	pitchRatio *= mTune;
	pitchRatio *= mUserPitchRatio;

	f32 pitch = Util::CalcPitchRatio(cent * 256.0f);
	pitch *= pitchRatio;

	f32 pan = 0.0f;
	pan += mInitPan;
	pan += mUserPan;
	if (mLfoTarget == LFO_TARGET_PAN)
		pan += lfoValue;

	f32 surroundPan = 0.0f;
	surroundPan += mInitSurroundPan;
	surroundPan += mUserSurroundPan;

	f32 lpfFreq = 1.0f;
	lpfFreq += mUserLpfFreq;

	int remoteFilter = 0;
	remoteFilter += mRemoteFilter;

	f32 mainOutVolume = 1.0f;
	mainOutVolume *= mMainOutVolume;

	f32 mainSend = 0.0f;
	mainSend += mMainSend;

	f32 fxSend[AUX_BUS_NUM];
	for (int i = 0; i < AUX_BUS_NUM; i++)
	{
		fxSend[i] = 0.0f;
		fxSend[i] += mFxSend[i];
	}

	f32 remoteOutVolume[4];
    f32 remoteSend[4];
    f32 remoteFxSend[4];
	for (int i = 0; i < 4; i++) {
		remoteOutVolume[i] = 1.0f;
		remoteOutVolume[i] *= mRemoteOutVolume[i];
        remoteSend[i] = 0.0f;
        remoteSend[i] += mRemoteSend[i];
        remoteFxSend[i] = 0.0f;
        remoteFxSend[i] += mRemoteFxSend[i];
	}

	if (doPeriodicProc)
	{
		if (mAutoSweep)
			UpdateSweep(3);

		mLfo.Update(3);
		mEnvelope.Update(3);
	}

	f32 nextLfoValue = mLfo.GetValue();

	f32 veTargetVolume = 1.0f;
	veTargetVolume *= Util::CalcVolumeRatio(mEnvelope.GetValue());

	if (mLfoTarget == LFO_TARGET_VOLUME)
		veTargetVolume *= Util::CalcVolumeRatio(nextLfoValue * 6.0f);

	if (mVoice)
	{
		mVoice->SetPanMode(mPanMode);
		mVoice->SetPanCurve(mPanCurve);
		mVoice->SetVolume(volume);
		mVoice->SetVeVolume(veTargetVolume, veInitVolume);
		mVoice->SetPitch(pitch);
		mVoice->SetPan(pan);
		mVoice->SetSurroundPan(surroundPan);
		mVoice->SetLpfFreq(lpfFreq);
		mVoice->SetBiquadFilter(mBiquadType, mBiquadValue);
		mVoice->SetRemoteFilter(remoteFilter);
		mVoice->SetOutputLine(mOutputLineFlag);
		mVoice->SetMainOutVolume(mainOutVolume);
		mVoice->SetMainSend(mainSend);

		for (int i = 0; i < AUX_BUS_NUM; i++)
			mVoice->SetFxSend(static_cast<AuxBus>(i), fxSend[i]);
		
		for (int i = 0; i < 4; i++) {
			mVoice->SetRemoteOutVolume(i, remoteOutVolume[i]);
            SetRemoteSend__Q44nw4r3snd6detail5VoiceFif(mVoice, i, remoteSend[i]);
            SetRemoteFxSend__Q44nw4r3snd6detail5VoiceFif(mVoice, i, remoteSend[i]);
		}
	}
}

void Channel::Start(WaveInfo const &waveParam, int length, u32 startOffset)
{
	mLength = length;

	mLfo.Reset();
	mEnvelope.Reset(EnvGenerator::VOLUME_INIT);
	mSweepCounter = 0;

	mVoice->Setup(waveParam, startOffset);
	mVoice->Start();
	mActiveFlag = true;
}

void Channel::Release()
{
	if (mEnvelope.GetStatus() != EnvGenerator::STATUS_RELEASE)
	{
		if (mVoice && !mReleasePriorityFixFlag)
			mVoice->SetPriority(PRIORITY_RELEASE);

		mEnvelope.SetStatus(EnvGenerator::STATUS_RELEASE);
	}

	mPauseFlag = false;
}

void Channel::NoteOff()
{
	if (!mReleaseIgnoreFlag)
		Release();
}

void Channel::UpdateSweep(int count)
{
	mSweepCounter += count;

	if (mSweepCounter > mSweepLength)
		mSweepCounter = mSweepLength;
}

void Channel::SetSweepParam(f32 sweepPitch, int sweepTime, bool autoUpdate)
{
	mSweepPitch		= sweepPitch;
	mSweepLength	= sweepTime;
	mAutoSweep		= autoUpdate;
	mSweepCounter	= 0;
}

f32 Channel::GetSweepValue() const
{
	if (mSweepPitch == 0.0f)
		return 0.0f;

	if (mSweepCounter >= mSweepLength)
		return 0.0f;

	f32 sweep = mSweepPitch * (mSweepLength - mSweepCounter);

	NW4RAssert_Line(520, mSweepLength != 0);

	sweep /= mSweepLength;

	return sweep;
}

void Channel::SetBiquadFilter(int type, f32 value)
{
	mBiquadType		= type;
	mBiquadValue	= value;
}

void Channel::VoiceCallbackFunc(Voice *voice, Voice::VoiceCallbackStatus status,
                                void *arg)
{
	NW4RAssertPointerNonnull_Line(547, arg);

	ChannelCallbackStatus chStatus;
	switch (status)
	{
	case Voice::CALLBACK_STATUS_FINISH_WAVE:
		chStatus = CALLBACK_STATUS_FINISH;
		voice->Free();
		break;

	case Voice::CALLBACK_STATUS_CANCEL:
		chStatus = CALLBACK_STATUS_CANCEL;
		voice->Free();
		break;

	case Voice::CALLBACK_STATUS_DROP_VOICE:
		chStatus = CALLBACK_STATUS_DROP;
		break;

	case Voice::CALLBACK_STATUS_DROP_DSP:
		chStatus = CALLBACK_STATUS_DROP;
		break;
	}

	Channel *channel = static_cast<Channel *>(arg);

	if (channel->mCallback)
		(*channel->mCallback)(channel, chStatus, channel->mCallbackData);

	if (channel->mWaveDataLocationCallback)
		channel->mWaveDataLocationCallback->at_0x0c(channel->mWaveInfo);

	channel->mVoice = nullptr;
	channel->mPauseFlag = false;
	channel->mActiveFlag = false;
	channel->mAllocFlag = false;

	ChannelManager::GetInstance().Free(channel);
}

Channel *Channel::AllocChannel(int voiceChannelCount, int voiceOutCount,
                               int priority, Callback *callback,
                               u32 callbackData)
{
	NW4RAssertHeaderClampedLRValue_Line(606, priority, 0, 255);

	Channel *channel = ChannelManager::GetInstance().Alloc();
	if (!channel)
	{
		NW4RCheckMessage_Line(611, channel, "Channel Allocation failed!");
		return nullptr;
	}

	channel->mAllocFlag = true;

	Voice *voice = VoiceManager::GetInstance().AllocVoice(
		voiceChannelCount, voiceOutCount, priority, VoiceCallbackFunc, channel);
	if (!voice)
	{
		ChannelManager::GetInstance().Free(channel);
		return nullptr;
	}

	channel->mVoice = voice;
	channel->InitParam(callback, callbackData);

	return channel;
}

void Channel::FreeChannel(Channel *channel)
{
	if (channel)
	{
		channel->mCallback = nullptr;
		channel->mCallbackData = 0;
	}
}

}}} // namespace nw4r::snd::detail

extern "C" float lbl_8049DA38;
extern "C" float lbl_804A2068;
extern "C" float lbl_804A206C;
extern "C" float lbl_804A2070;
extern "C" float lbl_804A2074;
extern "C" float lbl_804A2078;
extern "C" float lbl_804A2080;
extern "C" float lbl_804A2088;
extern "C" float lbl_804A2090;
extern "C" u8 lbl_804040A0[];
extern "C" u8 lbl_804040B0[];
extern "C" void AllocChannel__Q44nw4r3snd6detail7ChannelFiiiPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl();
extern "C" void AllocImpl__Q44nw4r3snd6detail8PoolImplFv();
extern "C" void AllocVoice__Q44nw4r3snd6detail12VoiceManagerFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv();
extern "C" void CalcPitchRatio__Q44nw4r3snd6detail4UtilFi();
extern "C" void CalcVolumeRatio__Q44nw4r3snd6detail4UtilFf();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode();
extern "C" void FreeImpl__Q44nw4r3snd6detail8PoolImplFPv();
extern "C" void Free__Q44nw4r3snd6detail5VoiceFv();
extern "C" void GetInstance__Q44nw4r3snd6detail12VoiceManagerFv();
extern "C" void GetValue__Q44nw4r3snd6detail12EnvGeneratorCFv();
extern "C" void GetValue__Q44nw4r3snd6detail3LfoCFv();
extern "C" void InitParam__Q44nw4r3snd6detail7ChannelFPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl();
extern "C" void Init__Q44nw4r3snd6detail8LfoParamFv();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void SetBiquadFilter__Q44nw4r3snd6detail5VoiceFif();
extern "C" void SetFxSend__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd6AuxBusf();
extern "C" void SetLpfFreq__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetMainOutVolume__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetMainSend__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetOutputLine__Q44nw4r3snd6detail5VoiceFi();
extern "C" void SetPanCurve__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd8PanCurve();
extern "C" void SetPanMode__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd7PanMode();
extern "C" void SetPan__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetPitch__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetRemoteFilter__Q44nw4r3snd6detail5VoiceFi();

extern "C" void SetRemoteOutVolume__Q44nw4r3snd6detail5VoiceFif();

extern "C" void SetSurroundPan__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetVeVolume__Q44nw4r3snd6detail5VoiceFff();
extern "C" void SetVolume__Q44nw4r3snd6detail5VoiceFf();
extern "C" void Stop__Q44nw4r3snd6detail5VoiceFv();
extern "C" void Stop__Q44nw4r3snd6detail7ChannelFv();
extern "C" void UpdateAllChannel__Q44nw4r3snd6detail14ChannelManagerFv();
extern "C" void Update__Q44nw4r3snd6detail3LfoFi();
extern "C" void Update__Q44nw4r3snd6detail7ChannelFb();
extern "C" void VoiceCallbackFunc__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv();
extern "C" void __dt__Q44nw4r3snd6detail14ChannelManagerFv();
extern "C" void __register_global_object();
extern "C" void _restgpr_24();
extern "C" void _savegpr_24();
extern "C" void __ct__Q44nw4r3snd6detail12EnvGeneratorFv();
extern "C" void Init__Q44nw4r3snd6detail12EnvGeneratorFf();
extern "C" void fn_8020BEBC();

