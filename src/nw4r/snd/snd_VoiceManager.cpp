#include <ncon_voice_compat.h>
// Adaptado de zeldaret/ss, CC0, commit 96f2dd5497c4ceb595de76fd897fbb1542b27323.
#include <nw4r_ss_compat/snd_version.h>
#include "nw4r/snd/snd_VoiceManager.h"

/* Original source:
 * kiwi515/ogws
 * src/nw4r/snd/snd_VoiceManager.cpp
 */

/*******************************************************************************
 * headers
 */

#include <new>

#include "common.h"

#include "nw4r/snd/snd_DisposeCallbackManager.h"
#include "nw4r/snd/snd_Voice.h"

#include "nw4r/ut/ut_Lock.h" // ut::AutoInterruptLock

#include "nw4r/NW4RAssert.hpp"

/*******************************************************************************
 * functions
 */

namespace nw4r { namespace snd { namespace detail {

VoiceManager &VoiceManager::GetInstance()
{
	static VoiceManager instance;

	return instance;
}

VoiceManager::VoiceManager() :
	mInitialized(false)
{
}

u32 VoiceManager::GetRequiredMemSize(int voiceCount)
{
	return sizeof(Voice) * voiceCount;
}

void VoiceManager::Setup(void *mem, u32 memSize)
{
	if (mInitialized)
		return;

	u32 voiceCount = memSize / sizeof(Voice);
	byte_t *ptr = static_cast<byte_t *>(mem);

	for (int i = 0; i < voiceCount; i++)
	{
		mFreeVoiceList.PushBack(new (ptr) Voice);

		ptr += sizeof(Voice);
	}

	NW4RAssert_Line(64, ptr <= reinterpret_cast<u8*>( mem ) + memSize);

	mInitialized = true;
}

void VoiceManager::Shutdown()
{
	if (!mInitialized)
		return;

	StopAllVoices();

	while (!mFreeVoiceList.IsEmpty())
	{
		Voice &voice = mFreeVoiceList.GetFront();
		mFreeVoiceList.PopFront();

		voice.~Voice();
	}

	mInitialized = false;
}

void VoiceManager::StopAllVoices()
{
	ut::AutoInterruptLock lock;

	while (!mPrioVoiceList.IsEmpty())
	{
		Voice &voice = mPrioVoiceList.GetFront();

		voice.Stop();

		if (voice.mCallback)
		{
			(*voice.mCallback)(&voice, Voice::CALLBACK_STATUS_CANCEL,
			                   voice.mCallbackData);
		}

		voice.Free();
	}
}

Voice *VoiceManager::AllocVoice(int voiceChannelCount, int voiceOutCount,
                                int priority, Voice::Callback *callback,
                                void *callbackData)
{
	ut::AutoInterruptLock lock;

	if (mFreeVoiceList.IsEmpty() && !DropLowestPriorityVoice(priority))
		return nullptr;

	Voice &voice = mFreeVoiceList.GetFront();
	if (!voice.Acquire(voiceChannelCount, voiceOutCount, priority, callback,
	                   callbackData))
	{
		NW4RWarningMessage_Line(128, "Voice Acquisition failed!\n");
		return nullptr;
	}

	voice.mPriority = priority & Voice::PRIORITY_MAX;
	AppendVoiceList(&voice);
	UpdateEachVoicePriority(mPrioVoiceList.GetIteratorFromPointer(&voice),
	                        mPrioVoiceList.GetEndIter());
	DisposeCallbackManager::GetInstance().RegisterDisposeCallback(&voice);

	return &voice;
}

void VoiceManager::FreeVoice(Voice *voice)
{
	NW4RAssertPointerNonnull_Line(148, voice);

	ut::AutoInterruptLock lock;

	DisposeCallbackManager::GetInstance().UnregisterDisposeCallback(voice);
	RemoveVoiceList(voice);
}

void VoiceManager::UpdateAllVoices()
{
	NW4R_RANGE_FOR_NO_AUTO_INC(itr, mPrioVoiceList)
	{
		decltype(itr) curItr = itr++;

		curItr->StopFinished();
	}

	NW4R_RANGE_FOR_NO_AUTO_INC(itr, mPrioVoiceList)
	{
		decltype(itr) curItr = itr++;

		curItr->Calc();
	}

	ut::AutoInterruptLock lock;

	NW4R_RANGE_FOR_NO_AUTO_INC(itr, mPrioVoiceList)
	{
		decltype(itr) curItr = itr++;

		curItr->Update();
	}
}

void VoiceManager::NotifyVoiceUpdate()
{
	ut::AutoInterruptLock lock;

	NW4R_RANGE_FOR_NO_AUTO_INC(itr, mPrioVoiceList)
	{
		decltype(itr) curItr = itr++;

		curItr->ResetDelta();
	}
}

void VoiceManager::AppendVoiceList(Voice *voice)
{
	ut::AutoInterruptLock lock;

	mFreeVoiceList.Erase(voice);

	Voice::LinkList::ReverseIterator it = mPrioVoiceList.GetEndReverseIter();
	for (; it != mPrioVoiceList.GetBeginReverseIter(); ++it)
	{
		if (it->GetPriority() <= voice->GetPriority())
			break;
	}

	mPrioVoiceList.Insert(it.GetBase(), voice);
}

void VoiceManager::RemoveVoiceList(Voice *voice)
{
	ut::AutoInterruptLock lock;

	mPrioVoiceList.Erase(voice);
	mFreeVoiceList.PushBack(voice);
}

void VoiceManager::ChangeVoicePriority(Voice *voice)
{
	ut::AutoInterruptLock lock;

	RemoveVoiceList(voice);
	AppendVoiceList(voice);

	UpdateEachVoicePriority(mPrioVoiceList.GetIteratorFromPointer(voice),
	                        mPrioVoiceList.GetEndIter());
}

void VoiceManager::UpdateEachVoicePriority(
	Voice::LinkList::Iterator const &beginItr,
	Voice::LinkList::Iterator const &endItr)
{
	for (Voice::LinkList::Iterator it = beginItr; it != endItr; ++it)
	{
		if (it->GetPriority() <= 1)
			return;

		if (it->GetPriority() != Voice::PRIORITY_MAX)
			it->UpdateVoicesPriority();
	}
}

void VoiceManager::UpdateAllVoicesSync(u32 syncFlag)
{
	ut::AutoInterruptLock lock;

	NW4R_RANGE_FOR_NO_AUTO_INC(itr, mPrioVoiceList)
	{
		decltype(itr) curItr = itr++;

		if (curItr->mActiveFlag)
			curItr->mSyncFlag |= syncFlag;
	}
}

int VoiceManager::DropLowestPriorityVoice(int priority)
{
	int dropCount = 0;

	if (mFreeVoiceList.IsEmpty())
	{
		Voice &dropVoice = mPrioVoiceList.GetFront();

		if (dropVoice.GetPriority() > priority)
			return 0;

		dropCount = dropVoice.GetPhysicalVoiceCount();

		dropVoice.Stop();
		dropVoice.Free();

		if (dropVoice.mCallback)
		{
			(*dropVoice.mCallback)(&dropVoice,
			                       Voice::CALLBACK_STATUS_DROP_VOICE,
			                       dropVoice.mCallbackData);
		}
	}

	return dropCount;
}

}}} // namespace nw4r::snd::detail

extern "C" void Acquire__Q44nw4r3snd6detail5VoiceFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv();
extern "C" void AllocVoice__Q44nw4r3snd6detail12VoiceManagerFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv();
extern "C" void Calc__Q44nw4r3snd6detail5VoiceFv();
extern "C" void ChangeVoicePriority__Q44nw4r3snd6detail12VoiceManagerFPQ44nw4r3snd6detail5Voice();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode();
extern "C" void FreeVoice__Q44nw4r3snd6detail12VoiceManagerFPQ44nw4r3snd6detail5Voice();
extern "C" void Free__Q44nw4r3snd6detail5VoiceFv();
extern "C" void GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv();
extern "C" void GetRequiredMemSize__Q44nw4r3snd6detail12VoiceManagerFi();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void NotifyVoiceUpdate__Q44nw4r3snd6detail12VoiceManagerFv();
extern "C" void RegisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback();
extern "C" void ResetDelta__Q44nw4r3snd6detail5VoiceFv();
extern "C" void Setup__Q44nw4r3snd6detail12VoiceManagerFPvUl();
extern "C" void StopFinished__Q44nw4r3snd6detail5VoiceFv();
extern "C" void Stop__Q44nw4r3snd6detail5VoiceFv();
extern "C" void UnregisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback();
extern "C" void UpdateAllVoicesSync__Q44nw4r3snd6detail12VoiceManagerFUl();
extern "C" void UpdateAllVoices__Q44nw4r3snd6detail12VoiceManagerFv();
extern "C" void UpdateVoicesPriority__Q44nw4r3snd6detail5VoiceFv();
extern "C" void Update__Q44nw4r3snd6detail5VoiceFv();
extern "C" void __ct__Q44nw4r3snd6detail5VoiceFv();
extern "C" void _restgpr_23();
extern "C" void _restgpr_27();
extern "C" void _savegpr_23();
extern "C" void _savegpr_27();

