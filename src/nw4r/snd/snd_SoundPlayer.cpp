#include "nw4r/snd/snd_SoundPlayer.h"

/* Original source:
 * kiwi515/ogws
 * src/nw4r/snd/snd_SoundPlayer.cpp
 */

/*******************************************************************************
 * headers
 */

#include <climits> // INT_MAX

#include <decomp.h>
#include "common.h" // nullptr

#include "nw4r/snd/snd_BasicSound.h"
#include "nw4r/snd/snd_global.h" // AUX_BUS_NUM
#include "nw4r/snd/snd_PlayerHeap.h"
#include "nw4r/snd/snd_SoundThread.h"

#include "nw4r/ut/ut_algorithm.h" // ut::Clamp

#include <nw4r/NW4RAssert.hpp>

/*******************************************************************************
 * functions
 */

namespace nw4r { namespace snd {

SoundPlayer::SoundPlayer() :
	mPlayableCount		(1),
	mPlayableLimit		(INT_MAX),
	mVolume				(1.0f),
	mLpfFreq			(0.0f),
	mOutputLineFlag		(OUTPUT_LINE_MAIN),
	mMainOutVolume		(1.0f),
	mBiquadType			(0),
	mBiquadValue		(0.0f),
	mMainSend			(0.0f)
{
	for (int i = 0; i < 4; i++)
		mRemoteOutVolume[i] = 1.0f;

	for (int i = 0; i < AUX_BUS_NUM; i++)
		mFxSend[i] = 0.0f;

}

// __dt__Q34nw4r3snd11SoundPlayerFv: definicion C reemplazada por asm (ver abajo)


// Update__Q34nw4r3snd11SoundPlayerFv: definicion C reemplazada por asm (ver abajo)


void SoundPlayer::StopAllSound(int fadeFrames)
{
	detail::SoundThread::AutoLock lock;

	NW4R_RANGE_FOR_NO_AUTO_INC(itr, mSoundList)
	{
		decltype(itr) curItr = itr++;

		curItr->Stop(fadeFrames);
	}
}

void SoundPlayer::PauseAllSound(bool flag, int fadeFrames)
{
	detail::SoundThread::AutoLock lock;

	NW4R_RANGE_FOR_NO_AUTO_INC(itr, mSoundList)
	{
		decltype(itr) curItr = itr++;

		curItr->Pause(flag, fadeFrames);
	}
}

void SoundPlayer::SetVolume(f32 volume)
{
	if (volume < 0.0f)
		volume = 0.0f;

	mVolume = volume;
}

void SoundPlayer::SetLpfFreq(f32 freq)
{
	mLpfFreq = freq;
}

f32 SoundPlayer::GetRemoteOutVolume(int remote) const
{
	return mRemoteOutVolume[remote];
}

// SetFxSend__Q34nw4r3snd11SoundPlayerFQ34nw4r3snd6AuxBusf: definicion C reemplazada por asm (ver abajo)


#if 0
// SoundPlayer::SetVolume ([R89JEL]:/bin/RVL/Debug/mainD.MAP:14397)
/* also __FILE__ because this is the first assert in the file so it needs to
 * reference that first as well
 */
DECOMP_FORCE(__FILE__);
DECOMP_FORCE(NW4RAssert_String(volume >= 0.0f));

// SoundPlayer::SetFxSend ([R89JEL]:/bin/RVL/Debug/mainD.MAP:14405)
DECOMP_FORCE(NW4RAssertHeaderClampedLValue_String(bus));
#endif

void SoundPlayer::RemoveSoundList(detail::BasicSound *sound)
{
	detail::SoundThread::AutoLock lock;

	mSoundList.Erase(sound);
	sound->DetachSoundPlayer(this);
}

void SoundPlayer::InsertPriorityList(detail::BasicSound *sound)
{
	detail::SoundThread::AutoLock lock;

	decltype(mPriorityList.GetBeginIter()) itr = mPriorityList.GetBeginIter();
	for (; itr != mPriorityList.GetEndIter(); ++itr)
	{
		if (sound->CalcCurrentPlayerPriority()
		    < itr->CalcCurrentPlayerPriority())
		{
			break;
		}
	}

	mPriorityList.Insert(itr, sound);
}

void SoundPlayer::RemovePriorityList(detail::BasicSound *sound)
{
	detail::SoundThread::AutoLock lock;

	mPriorityList.Erase(sound);
}

void SoundPlayer::detail_SortPriorityList(detail::BasicSound *sound)
{
	RemovePriorityList(sound);
	InsertPriorityList(sound);
}

void SoundPlayer::detail_SortPriorityList()
{
	detail::SoundThread::AutoLock lock;

	if (mPriorityList.GetSize() < 2)
		return;

	static detail::BasicSound::SoundPlayerPriorityLinkList
		tmplist[detail::BasicSound::PRIORITY_MAX + 1];

	while (!mPriorityList.IsEmpty())
	{
		detail::BasicSound &front = mPriorityList.GetFront();
		mPriorityList.PopFront();
		tmplist[front.CalcCurrentPlayerPriority()].PushBack(&front);
	}

	for (int i = 0; i < (int)ARRAY_LENGTH(tmplist); i++)
	{
		while (!tmplist[i].IsEmpty())
		{
			detail::BasicSound &front = tmplist[i].GetFront();

			tmplist[i].PopFront();
			mPriorityList.PushBack(&front);
		}
	}
}

// detail_AppendSound__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound: definicion C reemplazada por asm (ver abajo)


// detail_RemoveSound__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound: definicion C reemplazada por asm (ver abajo)


// SetPlayableSoundCount__Q34nw4r3snd11SoundPlayerFi: definicion C reemplazada por asm (ver abajo)


void SoundPlayer::detail_SetPlayableSoundLimit(int limit)
{
	NW4RAssert_Line(483, limit >= 0);

	mPlayableLimit = limit;
}

// detail_CanPlaySound__Q34nw4r3snd11SoundPlayerFi: definicion C reemplazada por asm (ver abajo)


void SoundPlayer::detail_AppendPlayerHeap(detail::PlayerHeap *heap)
{
	NW4RAssertPointerNonnull_Line(524, heap);

	detail::SoundThread::AutoLock lock;

	heap->AttachSoundPlayer(this);
	mHeapList.PushBack(heap);
}

detail::PlayerHeap *SoundPlayer::detail_AllocPlayerHeap(detail::BasicSound *sound)
{
	NW4RAssertPointerNonnull_Line(557, sound);

	detail::SoundThread::AutoLock lock;

	if (mHeapList.IsEmpty())
		return nullptr;

	detail::PlayerHeap &playerHeap = mHeapList.GetFront();
	mHeapList.PopFront();

	playerHeap.AttachSound(sound);
	sound->AttachPlayerHeap(&playerHeap);
	playerHeap.Clear();

	return &playerHeap;
}

void SoundPlayer::detail_FreePlayerHeap(detail::BasicSound *sound)
{
	NW4RAssertPointerNonnull_Line(587, sound);

	detail::SoundThread::AutoLock lock;

	detail::PlayerHeap *heap = sound->GetPlayerHeap();
	if (!heap)
		return;

	heap->DetachSound(sound);
	sound->DetachPlayerHeap(heap);
	mHeapList.PushBack(heap);
}

}} // namespace nw4r::snd

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049DA60;
extern "C" float lbl_804A21D8;
extern "C" float lbl_804A21DC;
extern "C" u8 lbl_804043E0[];
extern "C" u8 lbl_804043F0[];
extern "C" void AttachSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd11SoundPlayer();
extern "C" void DetachSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd11SoundPlayer();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8Iterator();
extern "C" void GetInstance__Q44nw4r3snd6detail11SoundThreadFv();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void SetFxSend__Q34nw4r3snd11SoundPlayerFQ34nw4r3snd6AuxBusf();
extern "C" void SetPlayableSoundCount__Q34nw4r3snd11SoundPlayerFi();
extern "C" void Stop__Q44nw4r3snd6detail10BasicSoundFi();
extern "C" void Update__Q34nw4r3snd11SoundPlayerFv();
extern "C" void Update__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void __construct_array();
extern "C" void __destroy_arr();
extern "C" void __dt__Q34nw4r3snd11SoundPlayerFv();
extern "C" void __dt__Q44nw4r2ut6detail12LinkListImplFv();
extern "C" void __register_global_object();
extern "C" void _restgpr_27();
extern "C" void _savegpr_27();
extern "C" void detail_AppendSound__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound();
extern "C" void detail_CanPlaySound__Q34nw4r3snd11SoundPlayerFi();
extern "C" void detail_RemoveSound__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound();
extern "C" void detail_SortPriorityList__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound();
extern "C" void detail_SortPriorityList__Q34nw4r3snd11SoundPlayerFv();
extern "C" void dtor_80136CFC();
extern "C" void fn_80218094();
extern "C" void fn_802180B4();
extern "C" void fn_8021825C();
extern "C" void fn_80218514();

// asm_to_cpp: fn_80218094
extern "C" asm void fn_80218094() {
    nofralloc
    li r0, 0x0
    addi r4, r3, 0x4
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    blr
}

// asm_to_cpp: fn_802180B4
extern "C" asm void fn_802180B4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802180F0
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
    cmpwi r31, 0x0
    ble lbl_802180F0
    mr r3, r30
    bl dtor_80136CFC
lbl_802180F0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __dt__Q34nw4r3snd11SoundPlayerFv
extern "C" asm void __dt__Q34nw4r3snd11SoundPlayerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_802181BC
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r31, 0x4(r28)
    addi r30, r28, 0x4
    b lbl_80218164
lbl_80218150:
    mr r3, r31
    lwz r31, 0x0(r31)
    subi r3, r3, 0xf4
    li r4, 0x0
    bl Stop__Q44nw4r3snd6detail10BasicSoundFi
lbl_80218164:
    cmplw r31, r30
    bne lbl_80218150
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    addic. r3, r28, 0x18
    beq lbl_80218188
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_80218188:
    addic. r3, r28, 0xc
    beq lbl_80218198
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_80218198:
    cmpwi r28, 0x0
    beq lbl_802181AC
    mr r3, r28
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_802181AC:
    cmpwi r29, 0x0
    ble lbl_802181BC
    mr r3, r28
    bl dtor_80136CFC
lbl_802181BC:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: Update__Q34nw4r3snd11SoundPlayerFv
extern "C" asm void Update__Q34nw4r3snd11SoundPlayerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r31, 0x4(r29)
    addi r30, r29, 0x4
    b lbl_80218224
lbl_80218214:
    mr r3, r31
    lwz r31, 0x0(r31)
    subi r3, r3, 0xf4
    bl Update__Q44nw4r3snd6detail10BasicSoundFv
lbl_80218224:
    cmplw r31, r30
    bne lbl_80218214
    mr r3, r29
    bl detail_SortPriorityList__Q34nw4r3snd11SoundPlayerFv
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8021825C
extern "C" asm void fn_8021825C() {
    nofralloc
    lfs f0, lbl_804A21D8
    fcmpo cr0, f1, f0
    ble lbl_8021826C
    b lbl_80218280
lbl_8021826C:
    lfs f0, lbl_804A21DC
    fcmpo cr0, f1, f0
    bge lbl_8021827C
    b lbl_80218280
lbl_8021827C:
    fmr f0, f1
lbl_80218280:
    stfs f0, 0x2c(r3)
    blr
}

// asm_to_cpp: SetFxSend__Q34nw4r3snd11SoundPlayerFQ34nw4r3snd6AuxBusf
extern "C" asm void SetFxSend__Q34nw4r3snd11SoundPlayerFQ34nw4r3snd6AuxBusf() {
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    lfs f1, 0x44(r3)
    blr
}

// asm_to_cpp: detail_SortPriorityList__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound
extern "C" asm void detail_SortPriorityList__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    addi r31, r30, 0xfc
    addi r3, r29, 0xc
    mr r4, r31
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r3, 0x10(r29)
    addi r0, r29, 0x10
    b lbl_8021834C
lbl_802182F8:
    lbz r5, -0x68(r3)
    lwz r4, -0xac(r3)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_80218314
    li r6, 0x7f
    b lbl_8021831C
lbl_80218314:
    srawi r4, r5, 31
    andc r6, r5, r4
lbl_8021831C:
    lbz r5, 0x94(r30)
    lwz r4, 0x50(r30)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_80218338
    li r4, 0x7f
    b lbl_80218340
lbl_80218338:
    srawi r4, r5, 31
    andc r4, r5, r4
lbl_80218340:
    cmpw r4, r6
    blt lbl_80218354
    lwz r3, 0x0(r3)
lbl_8021834C:
    cmplw r3, r0
    bne lbl_802182F8
lbl_80218354:
    stw r3, 0x8(r1)
    mr r5, r31
    addi r3, r29, 0xc
    addi r4, r1, 0x8
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: detail_SortPriorityList__Q34nw4r3snd11SoundPlayerFv
extern "C" asm void detail_SortPriorityList__Q34nw4r3snd11SoundPlayerFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r31, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r0, 0xc(r31)
    cmplwi r0, 0x2
    bge lbl_802183D0
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_802184FC
lbl_802183D0:
    lbz r0, lbl_8049DA60
    extsb. r0, r0
    bne lbl_80218420
    lis r3, lbl_804043F0@ha
    lis r4, fn_80218094@ha
    lis r5, fn_802180B4@ha
    li r6, 0xc
    addi r3, r3, lbl_804043F0@l
    addi r4, r4, fn_80218094@l
    addi r5, r5, fn_802180B4@l
    li r7, 0x80
    bl __construct_array
    lis r4, fn_80218514@ha
    lis r5, lbl_804043E0@ha
    addi r4, r4, fn_80218514@l
    li r3, 0x0
    addi r5, r5, lbl_804043E0@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA60
lbl_80218420:
    lis r30, lbl_804043F0@ha
    addi r30, r30, lbl_804043F0@l
    b lbl_80218480
lbl_8021842C:
    lwz r29, 0x10(r31)
    addi r3, r31, 0xc
    addi r4, r1, 0x14
    stw r29, 0x14(r1)
    bl Erase__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8Iterator
    lbz r3, -0x68(r29)
    lwz r0, -0xac(r29)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_8021845C
    li r0, 0x7f
    b lbl_80218464
lbl_8021845C:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_80218464:
    mulli r0, r0, 0xc
    mr r5, r29
    addi r4, r1, 0x10
    add r3, r30, r0
    addi r0, r3, 0x4
    stw r0, 0x10(r1)
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
lbl_80218480:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_8021842C
    lis r29, lbl_804043F0@ha
    addi r30, r31, 0x10
    addi r29, r29, lbl_804043F0@l
    li r27, 0x0
lbl_8021849C:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_802184E0
    b lbl_802184D4
lbl_802184AC:
    lwz r28, 0x4(r29)
    mr r3, r29
    addi r4, r1, 0xc
    stw r28, 0xc(r1)
    bl Erase__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8Iterator
    stw r30, 0x8(r1)
    mr r5, r28
    addi r3, r31, 0xc
    addi r4, r1, 0x8
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
lbl_802184D4:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    bne lbl_802184AC
lbl_802184E0:
    addi r27, r27, 0x1
    addi r29, r29, 0xc
    cmpwi r27, 0x80
    blt lbl_8021849C
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_802184FC:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80218514
extern "C" asm void fn_80218514() {
    nofralloc
    lis r3, lbl_804043F0@ha
    lis r4, fn_802180B4@ha
    addi r3, r3, lbl_804043F0@l
    li r5, 0xc
    addi r4, r4, fn_802180B4@l
    li r6, 0x80
    b __destroy_arr
}

// asm_to_cpp: detail_AppendSound__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound
extern "C" asm void detail_AppendSound__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r3, 0x94(r31)
    lwz r0, 0x50(r31)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_80218578
    li r29, 0x7f
    b lbl_80218580
lbl_80218578:
    srawi r0, r3, 31
    andc r29, r3, r0
lbl_80218580:
    lwz r0, 0x24(r30)
    cmpwi r0, 0x0
    bne lbl_80218614
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_802186EC
    b lbl_80218614
lbl_802185A4:
    lwz r0, 0x10(r30)
    subic. r3, r0, 0xfc
    bne lbl_802185C4
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_802186EC
lbl_802185C4:
    lbz r4, 0x94(r3)
    lwz r0, 0x50(r3)
    add r4, r4, r0
    cmpwi r4, 0x7f
    ble lbl_802185E0
    li r0, 0x7f
    b lbl_802185E8
lbl_802185E0:
    srawi r0, r4, 31
    andc r0, r4, r0
lbl_802185E8:
    cmpw r29, r0
    bge lbl_80218604
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_802186EC
lbl_80218604:
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_80218614:
    lwz r3, 0x0(r30)
    lwz r0, 0x24(r30)
    cmpw r3, r0
    bge lbl_802185A4
    addi r0, r30, 0x4
    mr r3, r30
    stw r0, 0xc(r1)
    addi r4, r1, 0xc
    addi r5, r31, 0xf4
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r3, 0x10(r30)
    addi r0, r30, 0x10
    b lbl_802186A8
lbl_80218654:
    lbz r5, -0x68(r3)
    lwz r4, -0xac(r3)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_80218670
    li r6, 0x7f
    b lbl_80218678
lbl_80218670:
    srawi r4, r5, 31
    andc r6, r5, r4
lbl_80218678:
    lbz r5, 0x94(r31)
    lwz r4, 0x50(r31)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_80218694
    li r4, 0x7f
    b lbl_8021869C
lbl_80218694:
    srawi r4, r5, 31
    andc r4, r5, r4
lbl_8021869C:
    cmpw r4, r6
    blt lbl_802186B0
    lwz r3, 0x0(r3)
lbl_802186A8:
    cmplw r3, r0
    bne lbl_80218654
lbl_802186B0:
    stw r3, 0x8(r1)
    addi r3, r30, 0xc
    addi r4, r1, 0x8
    addi r5, r31, 0xfc
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    mr r3, r31
    mr r4, r30
    bl AttachSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd11SoundPlayer
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x1
lbl_802186EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: detail_RemoveSound__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound
extern "C" asm void detail_RemoveSound__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    addi r3, r30, 0xc
    addi r4, r31, 0xfc
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    mr r3, r30
    addi r4, r31, 0xf4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    mr r3, r31
    mr r4, r30
    bl DetachSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd11SoundPlayer
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: SetPlayableSoundCount__Q34nw4r3snd11SoundPlayerFi
extern "C" asm void SetPlayableSoundCount__Q34nw4r3snd11SoundPlayerFi() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r0, 0x28(r30)
    cmpw r31, r0
    ble lbl_802187C8
    b lbl_802187D0
lbl_802187C8:
    srawi r0, r31, 31
    andc r0, r31, r0
lbl_802187D0:
    stw r0, 0x24(r30)
    b lbl_802187EC
lbl_802187D8:
    lwz r3, 0x10(r30)
    lwzu r12, -0xfc(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_802187EC:
    lwz r3, 0x0(r30)
    lwz r0, 0x24(r30)
    cmpw r3, r0
    bgt lbl_802187D8
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: detail_CanPlaySound__Q34nw4r3snd11SoundPlayerFi
extern "C" asm void detail_CanPlaySound__Q34nw4r3snd11SoundPlayerFi() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r3, 0x24(r30)
    cmpwi r3, 0x0
    bne lbl_80218870
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_802188EC
lbl_80218870:
    lwz r0, 0x0(r30)
    cmpw r0, r3
    blt lbl_802188DC
    lwz r0, 0x10(r30)
    subic. r4, r0, 0xfc
    bne lbl_8021889C
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_802188EC
lbl_8021889C:
    lbz r3, 0x94(r4)
    lwz r0, 0x50(r4)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_802188B8
    li r0, 0x7f
    b lbl_802188C0
lbl_802188B8:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_802188C0:
    cmpw r31, r0
    bge lbl_802188DC
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_802188EC
lbl_802188DC:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x1
lbl_802188EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
