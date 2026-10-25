#include <nw4r/snd.h>
#include <nw4r/ut.h>

namespace nw4r {
namespace snd {
namespace detail {

void SeqTrack::SetPlayerTrackNo(int no) {
    mPlayerTrackNo = no;
}

// __ct__Q44nw4r3snd6detail8SeqTrackFv: definicion C reemplazada por asm (ver abajo)


// __dt__Q44nw4r3snd6detail8SeqTrackFv: definicion C reemplazada por asm (ver abajo)


// InitParam__Q44nw4r3snd6detail8SeqTrackFv: definicion C reemplazada por asm (ver abajo)


// SetSeqData__Q44nw4r3snd6detail8SeqTrackFPCvl: definicion C reemplazada por asm (ver abajo)


// Open__Q44nw4r3snd6detail8SeqTrackFv: definicion C reemplazada por asm (ver abajo)


// Close__Q44nw4r3snd6detail8SeqTrackFv: definicion C reemplazada por asm (ver abajo)


// UpdateChannelLength__Q44nw4r3snd6detail8SeqTrackFv: definicion C reemplazada por asm (ver abajo)


void SeqTrack::UpdateChannelRelease(Channel* pChannel) {
    SoundThread::AutoLock lock;

    if (pChannel->GetLength() == 0 && !pChannel->IsRelease() &&
        !mParserTrackParam.damperFlag) {

        pChannel->Release();
    }
}

// ParseNextTick__Q44nw4r3snd6detail8SeqTrackFb: definicion C reemplazada por asm (ver abajo)


void SeqTrack::StopAllChannel() {
    SoundThread::AutoLock lock;

    for (Channel* pIt = mChannelList; pIt != NULL;
         pIt = pIt->GetNextTrackChannel()) {

        Channel::FreeChannel(pIt);
        pIt->Stop();
    }

    mChannelList = NULL;
}

// ReleaseAllChannel__Q44nw4r3snd6detail8SeqTrackFi: definicion C reemplazada por asm (ver abajo)


// PauseAllChannel__Q44nw4r3snd6detail8SeqTrackFb: definicion C reemplazada por asm (ver abajo)


void SeqTrack::AddChannel(Channel* pChannel) {
    SoundThread::AutoLock lock;

    pChannel->SetNextTrackChannel(mChannelList);
    mChannelList = pChannel;
}

// UpdateChannelParam__Q44nw4r3snd6detail8SeqTrackFv: definicion C reemplazada por asm (ver abajo)


// FreeAllChannel__Q44nw4r3snd6detail8SeqTrackFv: definicion C reemplazada por asm (ver abajo)


// ChannelCallbackFunc__Q44nw4r3snd6detail8SeqTrackFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl: definicion C reemplazada por asm (ver abajo)


// SetMute__Q44nw4r3snd6detail8SeqTrackFQ34nw4r3snd7SeqMute: definicion C reemplazada por asm (ver abajo)


void SeqTrack::SetVolume(f32 volume) {
    mExtVolume = volume;
}

void SeqTrack::SetPitch(f32 pitch) {
    mExtPitch = pitch;
}

// GetVariablePtr__Q44nw4r3snd6detail8SeqTrackFi: definicion C reemplazada por asm (ver abajo)


// NoteOn__Q44nw4r3snd6detail8SeqTrackFiilb: definicion C reemplazada por asm (ver abajo)


} // namespace detail
} // namespace snd
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_804A2198;
extern "C" float lbl_804A219C;
extern "C" float lbl_804A21A0;
extern "C" float lbl_804A21A4;
extern "C" float lbl_804A21A8;
extern "C" float lbl_804A21AC;
extern "C" float lbl_804A21B0;
extern "C" float lbl_804A21B8;
extern "C" float lbl_804A21C0;
extern "C" u8 lbl_8033EF20[];
extern "C" u8 lbl_80362878[];
extern "C" void ChannelCallbackFunc__Q44nw4r3snd6detail8SeqTrackFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl();
extern "C" void Close__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void ConvertLabelStringToSoundId__Q34nw4r3snd12SoundArchiveCFPCc();
extern "C" void FreeAllChannel__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel();
extern "C" void GetFxSend__Q44nw4r3snd6detail11BasicPlayerCFQ34nw4r3snd6AuxBus();
extern "C" void GetInstance__Q44nw4r3snd6detail11SoundThreadFv();
extern "C" void GetRemoteFxSend__Q44nw4r3snd6detail11BasicPlayerCFi();
extern "C" void GetRemoteOutVolume__Q44nw4r3snd6detail11BasicPlayerCFi();
extern "C" void GetRemoteSend__Q44nw4r3snd6detail11BasicPlayerCFi();
extern "C" void GetVariablePtr__Q44nw4r3snd6detail8SeqTrackFi();
extern "C" void InitParam__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void Init__Q44nw4r3snd6detail8LfoParamFv();
extern "C" void NoteOff__Q44nw4r3snd6detail7ChannelFv();
extern "C" void NoteOn__Q44nw4r3snd6detail8SeqTrackFiilb();
extern "C" void NoteOn__Q44nw4r3snd6detail9SeqPlayerFiRCQ44nw4r3snd6detail10NoteOnInfo();
extern "C" void Open__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void ParseNextTick__Q44nw4r3snd6detail8SeqTrackFb();
extern "C" void PauseAllChannel__Q44nw4r3snd6detail8SeqTrackFb();
extern "C" void Pause__Q44nw4r3snd6detail5VoiceFb();
extern "C" void ReleaseAllChannel__Q44nw4r3snd6detail8SeqTrackFi();
extern "C" void Release__Q44nw4r3snd6detail7ChannelFv();
extern "C" void SetBiquadFilter__Q44nw4r3snd6detail7ChannelFif();
extern "C" void SetMute__Q44nw4r3snd6detail8SeqTrackFQ34nw4r3snd7SeqMute();
extern "C" void SetSeqData__Q44nw4r3snd6detail8SeqTrackFPCvl();
extern "C" void SetSweepParam__Q44nw4r3snd6detail7ChannelFfib();
extern "C" void SetVoiceOutParam__Q44nw4r3snd6detail5VoiceFiRCQ34nw4r3snd13VoiceOutParam();
extern "C" void Stop__Q44nw4r3snd6detail7ChannelFv();
extern "C" void UpdateChannelLength__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void UpdateChannelParam__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void UpdateSweep__Q44nw4r3snd6detail7ChannelFi();
extern "C" void __ct__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void __dt__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void detail_ConvertLabelStringToSoundId__Q34nw4r3snd18SoundArchivePlayerFPCc();
extern "C" void dtor_80136CFC();
extern "C" void fn_8020C018();
extern "C" void fn_8020C030();
extern "C" void fn_8020C048();
extern "C" void fn_8020C0E8();
extern "C" void fn_8020C0F0();

// asm_to_cpp: __ct__Q44nw4r3snd6detail8SeqTrackFv
extern "C" asm void __ct__Q44nw4r3snd6detail8SeqTrackFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80362878@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80362878@l
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stb r31, 0x5(r3)
    stw r4, 0x0(r3)
    addi r3, r3, 0x58
    bl Init__Q44nw4r3snd6detail8LfoParamFv
    stb r31, 0x70(r30)
    mr r3, r30
    stb r31, 0x71(r30)
    sth r31, 0x72(r30)
    sth r31, 0x74(r30)
    stb r31, 0x76(r30)
    stb r31, 0x77(r30)
    sth r31, 0x78(r30)
    sth r31, 0x7a(r30)
    stb r31, 0x7c(r30)
    stb r31, 0x7d(r30)
    sth r31, 0x7e(r30)
    sth r31, 0x80(r30)
    stw r31, 0xc0(r30)
    stw r31, 0xc4(r30)
    bl InitParam__Q44nw4r3snd6detail8SeqTrackFv
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __dt__Q44nw4r3snd6detail8SeqTrackFv
extern "C" asm void __dt__Q44nw4r3snd6detail8SeqTrackFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_8021244C
    lis r4, lbl_80362878@ha
    addi r4, r4, lbl_80362878@l
    stw r4, 0x0(r3)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    mr r3, r29
    bl UpdateChannelParam__Q44nw4r3snd6detail8SeqTrackFv
    lwz r31, 0xc4(r29)
    b lbl_802123DC
lbl_802123C4:
    lbz r0, 0x36(r31)
    cmpwi r0, 0x0
    beq lbl_802123D8
    mr r3, r31
    bl Release__Q44nw4r3snd6detail7ChannelFv
lbl_802123D8:
    lwz r31, 0xf4(r31)
lbl_802123DC:
    cmpwi r31, 0x0
    bne lbl_802123C4
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r31, 0xc4(r29)
    b lbl_80212410
lbl_80212404:
    mr r3, r31
    bl FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
    lwz r31, 0xf4(r31)
lbl_80212410:
    cmpwi r31, 0x0
    bne lbl_80212404
    li r31, 0x0
    stw r31, 0xc4(r29)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    stb r31, 0x5(r29)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    cmpwi r30, 0x0
    ble lbl_8021244C
    mr r3, r29
    bl dtor_80136CFC
lbl_8021244C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: InitParam__Q44nw4r3snd6detail8SeqTrackFv
extern "C" asm void InitParam__Q44nw4r3snd6detail8SeqTrackFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f1, lbl_804A2198
    stw r0, 0x14(r1)
    li r0, 0x1
    lfs f0, lbl_804A219C
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stfs f1, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f1, 0x18(r3)
    stw r31, 0x1c(r3)
    stw r31, 0x20(r3)
    stb r0, 0x24(r3)
    stb r0, 0x25(r3)
    stb r31, 0x26(r3)
    stb r31, 0x27(r3)
    stb r31, 0x40(r3)
    stw r31, 0x44(r3)
    stb r31, 0x48(r3)
    stb r31, 0x49(r3)
    stb r31, 0x4a(r3)
    stb r31, 0x4b(r3)
    stb r31, 0x4c(r3)
    stw r31, 0x50(r3)
    stw r31, 0x54(r3)
    addi r3, r3, 0x58
    bl Init__Q44nw4r3snd6detail8LfoParamFv
    lfs f0, lbl_804A219C
    li r7, 0x7f
    li r3, 0xff
    li r6, 0x2
    li r5, 0x40
    li r4, 0x3c
    stb r31, 0x68(r30)
    li r0, -0x1
    stfs f0, 0x6c(r30)
    stb r7, 0x70(r30)
    stb r7, 0x71(r30)
    sth r31, 0x72(r30)
    sth r31, 0x74(r30)
    stb r31, 0x76(r30)
    stb r31, 0x77(r30)
    sth r31, 0x78(r30)
    sth r31, 0x7a(r30)
    stb r31, 0x7c(r30)
    stb r31, 0x7d(r30)
    sth r31, 0x7e(r30)
    sth r31, 0x80(r30)
    stb r7, 0x82(r30)
    stb r7, 0x83(r30)
    stb r31, 0x84(r30)
    stb r6, 0x85(r30)
    stb r31, 0x86(r30)
    stb r31, 0x87(r30)
    stb r5, 0x88(r30)
    stb r4, 0x89(r30)
    stb r31, 0x8a(r30)
    stb r3, 0x8b(r30)
    stb r3, 0x8c(r30)
    stb r3, 0x8d(r30)
    stb r3, 0x8e(r30)
    sth r3, 0x90(r30)
    stb r7, 0x92(r30)
    stb r31, 0x93(r30)
    stb r31, 0x94(r30)
    stb r31, 0x95(r30)
    stfs f0, 0x98(r30)
    stb r31, 0x96(r30)
    stfs f0, 0x9c(r30)
    sth r0, 0xa0(r30)
    sth r0, 0xa2(r30)
    sth r0, 0xa4(r30)
    sth r0, 0xa6(r30)
    sth r0, 0xa8(r30)
    sth r0, 0xaa(r30)
    sth r0, 0xac(r30)
    sth r0, 0xae(r30)
    sth r0, 0xb0(r30)
    sth r0, 0xb2(r30)
    sth r0, 0xb4(r30)
    sth r0, 0xb6(r30)
    sth r0, 0xb8(r30)
    sth r0, 0xba(r30)
    sth r0, 0xbc(r30)
    sth r0, 0xbe(r30)
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: SetSeqData__Q44nw4r3snd6detail8SeqTrackFPCvl
extern "C" asm void SetSeqData__Q44nw4r3snd6detail8SeqTrackFPCvl() {
    nofralloc
    add r0, r4, r5
    stw r4, 0x1c(r3)
    stw r0, 0x20(r3)
    blr
}

// asm_to_cpp: Open__Q44nw4r3snd6detail8SeqTrackFv
extern "C" asm void Open__Q44nw4r3snd6detail8SeqTrackFv() {
    nofralloc
    li r4, 0x0
    li r0, 0x1
    stb r4, 0x4a(r3)
    stb r4, 0x40(r3)
    stw r4, 0x44(r3)
    stb r0, 0x5(r3)
    blr
}

// asm_to_cpp: Close__Q44nw4r3snd6detail8SeqTrackFv
extern "C" asm void Close__Q44nw4r3snd6detail8SeqTrackFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    mr r3, r30
    bl UpdateChannelParam__Q44nw4r3snd6detail8SeqTrackFv
    lwz r31, 0xc4(r30)
    b lbl_80212670
lbl_80212658:
    lbz r0, 0x36(r31)
    cmpwi r0, 0x0
    beq lbl_8021266C
    mr r3, r31
    bl Release__Q44nw4r3snd6detail7ChannelFv
lbl_8021266C:
    lwz r31, 0xf4(r31)
lbl_80212670:
    cmpwi r31, 0x0
    bne lbl_80212658
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r31, 0xc4(r30)
    b lbl_802126A4
lbl_80212698:
    mr r3, r31
    bl FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
    lwz r31, 0xf4(r31)
lbl_802126A4:
    cmpwi r31, 0x0
    bne lbl_80212698
    li r31, 0x0
    stw r31, 0xc4(r30)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    stb r31, 0x5(r30)
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

// asm_to_cpp: UpdateChannelLength__Q44nw4r3snd6detail8SeqTrackFv
extern "C" asm void UpdateChannelLength__Q44nw4r3snd6detail8SeqTrackFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_80212728
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_802127A0
lbl_80212728:
    lwz r31, 0xc4(r30)
    b lbl_8021278C
lbl_80212730:
    lwz r3, 0xd0(r31)
    cmpwi r3, 0x0
    ble lbl_80212744
    subi r0, r3, 0x1
    stw r0, 0xd0(r31)
lbl_80212744:
    lwz r0, 0xd0(r31)
    cmpwi r0, 0x0
    bne lbl_80212770
    lwz r0, 0x0(r31)
    cmpwi r0, 0x4
    beq lbl_80212770
    lbz r0, 0x4c(r30)
    cmpwi r0, 0x0
    bne lbl_80212770
    mr r3, r31
    bl NoteOff__Q44nw4r3snd6detail7ChannelFv
lbl_80212770:
    lbz r0, 0x38(r31)
    cmpwi r0, 0x0
    bne lbl_80212788
    mr r3, r31
    li r4, 0x1
    bl UpdateSweep__Q44nw4r3snd6detail7ChannelFi
lbl_80212788:
    lwz r31, 0xf4(r31)
lbl_8021278C:
    cmpwi r31, 0x0
    bne lbl_80212730
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_802127A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: ParseNextTick__Q44nw4r3snd6detail8SeqTrackFb
extern "C" asm void ParseNextTick__Q44nw4r3snd6detail8SeqTrackFb() {
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
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_80212800
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_80212914
lbl_80212800:
    lha r3, 0x74(r30)
    lha r0, 0x72(r30)
    cmpw r3, r0
    bge lbl_80212818
    addi r0, r3, 0x1
    sth r0, 0x74(r30)
lbl_80212818:
    lha r3, 0x7a(r30)
    lha r0, 0x78(r30)
    cmpw r3, r0
    bge lbl_80212830
    addi r0, r3, 0x1
    sth r0, 0x7a(r30)
lbl_80212830:
    lha r3, 0x80(r30)
    lha r0, 0x7e(r30)
    cmpw r3, r0
    bge lbl_80212848
    addi r0, r3, 0x1
    sth r0, 0x80(r30)
lbl_80212848:
    lbz r0, 0x4a(r30)
    cmpwi r0, 0x0
    beq lbl_8021287C
    lwz r0, 0xc4(r30)
    cmpwi r0, 0x0
    beq lbl_80212874
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x1
    b lbl_80212914
lbl_80212874:
    li r0, 0x0
    stb r0, 0x4a(r30)
lbl_8021287C:
    lwz r3, 0x44(r30)
    cmpwi r3, 0x0
    ble lbl_802128A8
    subic. r0, r3, 0x1
    stw r0, 0x44(r30)
    ble lbl_802128A8
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x1
    b lbl_80212914
lbl_802128A8:
    lwz r0, 0x20(r30)
    cmpwi r0, 0x0
    beq lbl_80212904
    b lbl_802128EC
lbl_802128B8:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x1
    bne lbl_802128EC
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, -0x1
    b lbl_80212914
lbl_802128EC:
    lwz r0, 0x44(r30)
    cmpwi r0, 0x0
    bne lbl_80212904
    lbz r0, 0x4a(r30)
    cmpwi r0, 0x0
    beq lbl_802128B8
lbl_80212904:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x1
lbl_80212914:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: ReleaseAllChannel__Q44nw4r3snd6detail8SeqTrackFi
extern "C" asm void ReleaseAllChannel__Q44nw4r3snd6detail8SeqTrackFi() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    mr r3, r31
    bl UpdateChannelParam__Q44nw4r3snd6detail8SeqTrackFv
    lwz r31, 0xc4(r31)
    b lbl_80212990
lbl_80212964:
    lbz r0, 0x36(r31)
    cmpwi r0, 0x0
    beq lbl_8021298C
    cmpwi r30, 0x0
    blt lbl_80212984
    mr r3, r31
    clrlwi r4, r30, 24
    bl fn_8020C0F0
lbl_80212984:
    mr r3, r31
    bl Release__Q44nw4r3snd6detail7ChannelFv
lbl_8021298C:
    lwz r31, 0xf4(r31)
lbl_80212990:
    cmpwi r31, 0x0
    bne lbl_80212964
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

// asm_to_cpp: PauseAllChannel__Q44nw4r3snd6detail8SeqTrackFb
extern "C" asm void PauseAllChannel__Q44nw4r3snd6detail8SeqTrackFb() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r31, 0xc4(r31)
    b lbl_80212A24
lbl_802129EC:
    lbz r0, 0x36(r31)
    cmpwi r0, 0x0
    beq lbl_80212A20
    lbz r3, 0x35(r31)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    cmplw r30, r0
    beq lbl_80212A20
    stb r30, 0x35(r31)
    mr r4, r30
    lwz r3, 0xf0(r31)
    bl Pause__Q44nw4r3snd6detail5VoiceFb
lbl_80212A20:
    lwz r31, 0xf4(r31)
lbl_80212A24:
    cmpwi r31, 0x0
    bne lbl_802129EC
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

// asm_to_cpp: UpdateChannelParam__Q44nw4r3snd6detail8SeqTrackFv
extern "C" asm void UpdateChannelParam__Q44nw4r3snd6detail8SeqTrackFv() {
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stfd f31, 0x110(r1)
    opword 0xF3E10118
    stfd f30, 0x100(r1)
    opword 0xF3C10108
    stfd f29, 0xf0(r1)
    opword 0xF3A100F8
    stfd f28, 0xe0(r1)
    opword 0xF38100E8
    stfd f27, 0xd0(r1)
    opword 0xF36100D8
    stfd f26, 0xc0(r1)
    opword 0xF34100C8
    stfd f25, 0xb0(r1)
    opword 0xF32100B8
    stfd f24, 0xa0(r1)
    opword 0xF30100A8
    stfd f23, 0x90(r1)
    opword 0xF2E10098
    stfd f22, 0x80(r1)
    opword 0xF2C10088
    stfd f21, 0x70(r1)
    opword 0xF2A10078
    addi r11, r1, 0x70
    bl _savegpr_24
    lis r0, 0x4330
    mr r29, r3
    stw r0, 0x38(r1)
    stw r0, 0x40(r1)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0x5(r29)
    cmpwi r0, 0x0
    bne lbl_80212AF4
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_80212FA0
lbl_80212AF4:
    lwz r0, 0xc4(r29)
    cmpwi r0, 0x0
    bne lbl_80212B10
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_80212FA0
lbl_80212B10:
    lha r4, 0x72(r29)
    lha r3, 0x74(r29)
    lfs f29, lbl_804A2198
    cmpw r3, r4
    blt lbl_80212B2C
    lbz r0, 0x71(r29)
    b lbl_80212B48
lbl_80212B2C:
    lbz r5, 0x70(r29)
    lbz r0, 0x71(r29)
    subf r0, r5, r0
    mullw r0, r3, r0
    divw r0, r0, r4
    add r0, r5, r0
    clrlwi r0, r0, 24
lbl_80212B48:
    stw r0, 0x3c(r1)
    lbz r0, 0x82(r29)
    lwz r3, 0xc0(r29)
    stw r0, 0x44(r1)
    lfd f8, lbl_804A21B8
    lfd f1, 0x38(r1)
    lbz r0, 0x108(r3)
    lfd f0, 0x40(r1)
    fsubs f1, f1, f8
    lfs f7, lbl_804A21A0
    stw r0, 0x3c(r1)
    fsubs f0, f0, f8
    fdivs f2, f1, f7
    lbz r0, 0x84(r29)
    lfd f1, 0x38(r1)
    extsb r4, r0
    lbz r0, 0x85(r29)
    xoris r4, r4, 0x8000
    fmuls f5, f2, f2
    lfs f27, lbl_804A2198
    fsubs f6, f1, f8
    stw r4, 0x44(r1)
    fdivs f9, f0, f7
    lfd f3, lbl_804A21C0
    lfd f0, 0x40(r1)
    stw r0, 0x3c(r1)
    lfs f4, 0x8(r29)
    lfd f1, 0x38(r1)
    fdivs f10, f6, f7
    lfs f6, 0x8(r3)
    lfs f2, lbl_804A21A4
    lfs f7, 0x4(r3)
    lha r6, 0x78(r29)
    lha r5, 0x7a(r29)
    fsubs f3, f0, f3
    lfs f0, 0xc(r29)
    fmuls f27, f27, f6
    cmpw r5, r6
    fmuls f29, f29, f5
    lfs f26, lbl_804A219C
    fmuls f6, f9, f9
    fmuls f5, f10, f10
    fmuls f2, f3, f2
    fmuls f29, f29, f6
    fsubs f1, f1, f8
    fmuls f27, f27, f0
    fmuls f29, f29, f5
    fmuls f28, f2, f1
    fmuls f29, f29, f4
    fmuls f29, f29, f7
    blt lbl_80212C20
    lbz r0, 0x77(r29)
    extsb r0, r0
    b lbl_80212C44
lbl_80212C20:
    lbz r7, 0x76(r29)
    lbz r0, 0x77(r29)
    extsb r4, r7
    extsb r0, r0
    subf r0, r4, r0
    mullw r0, r5, r0
    divw r0, r0, r6
    add r0, r7, r0
    extsb r0, r0
lbl_80212C44:
    xoris r0, r0, 0x8000
    lfd f2, lbl_804A21C0
    stw r0, 0x44(r1)
    lfs f0, lbl_804A21A8
    lfd f1, 0x40(r1)
    lfs f3, lbl_804A2198
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fcmpo cr0, f0, f3
    ble lbl_80212C70
    b lbl_80212C84
lbl_80212C70:
    lfs f3, lbl_804A21AC
    fcmpo cr0, f0, f3
    bge lbl_80212C80
    b lbl_80212C84
lbl_80212C80:
    fmr f3, f0
lbl_80212C84:
    fadds f26, f26, f3
    lfs f1, 0x18(r29)
    lfs f2, 0xf0(r3)
    lfs f0, 0x10(r29)
    fmuls f26, f26, f1
    lfs f1, 0xc(r3)
    lha r6, 0x7e(r29)
    lha r5, 0x80(r29)
    fmuls f26, f26, f2
    lfs f25, lbl_804A219C
    cmpw r5, r6
    fadds f26, f26, f0
    fadds f26, f26, f1
    blt lbl_80212CC8
    lbz r0, 0x7d(r29)
    extsb r0, r0
    b lbl_80212CEC
lbl_80212CC8:
    lbz r7, 0x7c(r29)
    lbz r0, 0x7d(r29)
    extsb r4, r7
    extsb r0, r0
    subf r0, r4, r0
    mullw r0, r5, r0
    divw r0, r0, r6
    add r0, r7, r0
    extsb r0, r0
lbl_80212CEC:
    xoris r0, r0, 0x8000
    lfd f2, lbl_804A21C0
    stw r0, 0x3c(r1)
    lfs f0, lbl_804A21A8
    lfd f1, 0x38(r1)
    lfs f3, lbl_804A21B0
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fcmpo cr0, f0, f3
    ble lbl_80212D18
    b lbl_80212D2C
lbl_80212D18:
    lfs f3, lbl_804A219C
    fcmpo cr0, f0, f3
    bge lbl_80212D28
    b lbl_80212D2C
lbl_80212D28:
    fmr f3, f0
lbl_80212D2C:
    fadds f25, f25, f3
    lfs f1, 0x14(r29)
    lfs f24, lbl_804A219C
    lfs f0, 0x98(r29)
    fadds f25, f25, f1
    lfs f1, 0x10(r3)
    fadds f24, f24, f0
    lbz r0, 0x1c(r3)
    lfs f0, 0x14(r3)
    cmpwi r0, 0x0
    fadds f25, f25, f1
    lbz r31, 0x96(r29)
    fadds f24, f24, f0
    lfs f23, 0x9c(r29)
    beq lbl_80212D70
    lfs f23, 0x18(r3)
    mr r31, r0
lbl_80212D70:
    lbz r0, 0x92(r29)
    addi r25, r1, 0x28
    lfs f22, lbl_804A219C
    li r26, 0x0
    stw r0, 0x44(r1)
    lfd f30, lbl_804A21B8
    fmr f21, f22
    lfd f1, 0x40(r1)
    lfs f31, lbl_804A21A0
    fsubs f1, f1, f30
    lfs f0, lbl_804A2198
    lfs f2, 0x28(r3)
    lbz r28, 0x1d(r3)
    fdivs f1, f1, f31
    fsubs f0, f1, f0
    fadds f22, f22, f0
    fadds f22, f22, f2
lbl_80212DB4:
    add r3, r29, r26
    frsp f0, f21
    lbz r0, 0x93(r3)
    mr r4, r26
    stfs f21, 0x0(r25)
    lwz r3, 0xc0(r29)
    stw r0, 0x3c(r1)
    lfd f1, 0x38(r1)
    fsubs f1, f1, f30
    fdivs f1, f1, f31
    fadds f0, f0, f1
    stfs f0, 0x0(r25)
    bl GetFxSend__Q44nw4r3snd6detail11BasicPlayerCFQ34nw4r3snd6AuxBus
    lfs f0, 0x0(r25)
    addi r26, r26, 0x1
    cmpwi r26, 0x3
    fadds f0, f0, f1
    stfs f0, 0x0(r25)
    addi r25, r25, 0x4
    blt lbl_80212DB4
    lfs f30, lbl_804A219C
    addi r25, r1, 0x18
    addi r26, r1, 0x8
    li r27, 0x0
lbl_80212E14:
    stfs f30, 0x0(r25)
    mr r4, r27
    lwz r3, 0xc0(r29)
    bl GetRemoteSend__Q44nw4r3snd6detail11BasicPlayerCFi
    lfs f0, 0x0(r25)
    mr r4, r27
    stfs f30, 0x0(r26)
    fadds f0, f0, f1
    lwz r3, 0xc0(r29)
    stfs f0, 0x0(r25)
    bl GetRemoteFxSend__Q44nw4r3snd6detail11BasicPlayerCFi
    lfs f0, 0x0(r26)
    addi r27, r27, 0x1
    cmpwi r27, 0x4
    addi r25, r25, 0x4
    fadds f0, f0, f1
    stfs f0, 0x0(r26)
    addi r26, r26, 0x4
    blt lbl_80212E14
    lwz r30, 0xc4(r29)
    lfs f21, 0x28(r1)
    lfs f31, 0x2c(r1)
    lfs f30, 0x30(r1)
    b lbl_80212F8C
lbl_80212E74:
    stfs f29, 0x40(r30)
    fmr f1, f23
    mr r3, r30
    mr r4, r31
    stfs f28, 0xa0(r30)
    stfs f27, 0x44(r30)
    stfs f26, 0x48(r30)
    stfs f25, 0x4c(r30)
    stfs f24, 0x50(r30)
    bl SetBiquadFilter__Q44nw4r3snd6detail7ChannelFif
    stb r28, 0x3c(r30)
    mr r27, r30
    addi r26, r1, 0x18
    addi r25, r1, 0x8
    lwz r3, 0xc0(r29)
    li r24, 0x0
    lwz r0, 0x20(r3)
    stw r0, 0x58(r30)
    lwz r3, 0xc0(r29)
    lfs f0, 0x24(r3)
    stfs f0, 0x5c(r30)
    stfs f22, 0x60(r30)
    stfs f21, 0x64(r30)
    stfs f31, 0x68(r30)
    stfs f30, 0x6c(r30)
lbl_80212ED8:
    lwz r3, 0xc0(r29)
    mr r4, r24
    bl GetRemoteOutVolume__Q44nw4r3snd6detail11BasicPlayerCFi
    lfs f0, 0x0(r26)
    addi r24, r24, 0x1
    stfs f1, 0x70(r27)
    cmpwi r24, 0x4
    lfs f1, 0x0(r25)
    addi r26, r26, 0x4
    stfs f0, 0x80(r27)
    addi r25, r25, 0x4
    stfs f1, 0x90(r27)
    addi r27, r27, 0x4
    blt lbl_80212ED8
    li r24, 0x0
    li r27, 0x0
    b lbl_80212F38
lbl_80212F1C:
    add r5, r3, r27
    lwz r3, 0xf0(r30)
    mr r4, r24
    addi r5, r5, 0x70
    bl SetVoiceOutParam__Q44nw4r3snd6detail5VoiceFiRCQ34nw4r3snd13VoiceOutParam
    addi r27, r27, 0x18
    addi r24, r24, 0x1
lbl_80212F38:
    lwz r3, 0xc0(r29)
    lwz r0, 0x104(r3)
    cmpw r24, r0
    blt lbl_80212F1C
    lfs f0, 0x58(r29)
    stfs f0, 0x1c(r30)
    lfs f0, 0x5c(r29)
    stfs f0, 0x20(r30)
    lwz r0, 0x60(r29)
    stw r0, 0x24(r30)
    lbz r0, 0x64(r29)
    stb r0, 0x28(r30)
    lbz r0, 0x65(r29)
    stb r0, 0x29(r30)
    lbz r0, 0x66(r29)
    stb r0, 0x2a(r30)
    lbz r0, 0x67(r29)
    stb r0, 0x2b(r30)
    lbz r0, 0x68(r29)
    stb r0, 0x34(r30)
    lwz r30, 0xf4(r30)
lbl_80212F8C:
    cmpwi r30, 0x0
    bne lbl_80212E74
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_80212FA0:
    opword 0xE3E10118
    lfd f31, 0x110(r1)
    opword 0xE3C10108
    lfd f30, 0x100(r1)
    opword 0xE3A100F8
    lfd f29, 0xf0(r1)
    opword 0xE38100E8
    lfd f28, 0xe0(r1)
    opword 0xE36100D8
    lfd f27, 0xd0(r1)
    opword 0xE34100C8
    lfd f26, 0xc0(r1)
    opword 0xE32100B8
    lfd f25, 0xb0(r1)
    opword 0xE30100A8
    lfd f24, 0xa0(r1)
    opword 0xE2E10098
    lfd f23, 0x90(r1)
    opword 0xE2C10088
    lfd f22, 0x80(r1)
    opword 0xE2A10078
    addi r11, r1, 0x70
    lfd f21, 0x70(r1)
    bl _restgpr_24
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

// asm_to_cpp: FreeAllChannel__Q44nw4r3snd6detail8SeqTrackFv
extern "C" asm void FreeAllChannel__Q44nw4r3snd6detail8SeqTrackFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r31, 0xc4(r30)
    b lbl_80213048
lbl_8021303C:
    mr r3, r31
    bl FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
    lwz r31, 0xf4(r31)
lbl_80213048:
    cmpwi r31, 0x0
    bne lbl_8021303C
    li r0, 0x0
    stw r0, 0xc4(r30)
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

// asm_to_cpp: ChannelCallbackFunc__Q44nw4r3snd6detail8SeqTrackFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl
extern "C" asm void ChannelCallbackFunc__Q44nw4r3snd6detail8SeqTrackFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    cmpwi r30, 0x1
    beq lbl_802130D4
    bge lbl_802130C4
    cmpwi r30, 0x0
    bge lbl_802130CC
    b lbl_802130D4
lbl_802130C4:
    cmpwi r30, 0x3
    bge lbl_802130D4
lbl_802130CC:
    mr r3, r29
    bl FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
lbl_802130D4:
    lwz r3, 0xc0(r31)
    cmpwi r3, 0x0
    beq lbl_802130F4
    lwz r12, 0x0(r3)
    mr r4, r29
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
lbl_802130F4:
    lwz r3, 0xc4(r31)
    cmplw r3, r29
    bne lbl_80213140
    lwz r0, 0xf4(r29)
    stw r0, 0xc4(r31)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_80213158
    b lbl_80213140
lbl_8021311C:
    cmplw r0, r29
    bne lbl_8021313C
    lwz r0, 0xf4(r29)
    stw r0, 0xf4(r3)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    b lbl_80213158
lbl_8021313C:
    mr r3, r0
lbl_80213140:
    lwz r0, 0xf4(r3)
    cmpwi r0, 0x0
    bne lbl_8021311C
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_80213158:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: SetMute__Q44nw4r3snd6detail8SeqTrackFQ34nw4r3snd7SeqMute
extern "C" asm void SetMute__Q44nw4r3snd6detail8SeqTrackFQ34nw4r3snd7SeqMute() {
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
    cmpwi r31, 0x2
    beq lbl_80213220
    bge lbl_802131B8
    cmpwi r31, 0x0
    beq lbl_802131C4
    bge lbl_802132B0
    b lbl_802132B8
lbl_802131B8:
    cmpwi r31, 0x4
    bge lbl_802132B8
    b lbl_802131D0
lbl_802131C4:
    li r0, 0x0
    stb r0, 0x48(r30)
    b lbl_802132B8
lbl_802131D0:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r31, 0xc4(r30)
    b lbl_802131F8
lbl_802131E4:
    mr r3, r31
    bl FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
    mr r3, r31
    bl Stop__Q44nw4r3snd6detail7ChannelFv
    lwz r31, 0xf4(r31)
lbl_802131F8:
    cmpwi r31, 0x0
    bne lbl_802131E4
    li r0, 0x0
    stw r0, 0xc4(r30)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r0, 0x1
    stb r0, 0x48(r30)
    b lbl_802132B8
lbl_80213220:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    mr r3, r30
    bl UpdateChannelParam__Q44nw4r3snd6detail8SeqTrackFv
    lwz r31, 0xc4(r30)
    b lbl_80213254
lbl_8021323C:
    lbz r0, 0x36(r31)
    cmpwi r0, 0x0
    beq lbl_80213250
    mr r3, r31
    bl Release__Q44nw4r3snd6detail7ChannelFv
lbl_80213250:
    lwz r31, 0xf4(r31)
lbl_80213254:
    cmpwi r31, 0x0
    bne lbl_8021323C
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r31, 0xc4(r30)
    b lbl_80213288
lbl_8021327C:
    mr r3, r31
    bl FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
    lwz r31, 0xf4(r31)
lbl_80213288:
    cmpwi r31, 0x0
    bne lbl_8021327C
    li r0, 0x0
    stw r0, 0xc4(r30)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r0, 0x1
    stb r0, 0x48(r30)
    b lbl_802132B8
lbl_802132B0:
    li r0, 0x1
    stb r0, 0x48(r30)
lbl_802132B8:
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

// asm_to_cpp: GetVariablePtr__Q44nw4r3snd6detail8SeqTrackFi
extern "C" asm void GetVariablePtr__Q44nw4r3snd6detail8SeqTrackFi() {
    nofralloc
    cmpwi r4, 0x10
    bge lbl_802132F4
    slwi r0, r4, 1
    add r3, r3, r0
    addi r3, r3, 0xa0
    blr
lbl_802132F4:
    li r3, 0x0
    blr
}

// asm_to_cpp: NoteOn__Q44nw4r3snd6detail8SeqTrackFiilb
extern "C" asm void NoteOn__Q44nw4r3snd6detail8SeqTrackFiilb() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_25
    lis r0, 0x4330
    mr r25, r3
    stw r0, 0x30(r1)
    mr r26, r4
    mr r27, r5
    mr r28, r6
    stw r0, 0x38(r1)
    mr r29, r7
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r0, 0x83(r25)
    lis r3, 0x8102
    addi r3, r3, 0x409
    cmpwi r29, 0x0
    mullw r0, r27, r0
    lwz r31, 0xc0(r25)
    li r30, 0x0
    mulhw r3, r3, r0
    add r0, r3, r0
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r27, r0, r3
    beq lbl_802133A8
    lwz r30, 0xc4(r25)
    cmpwi r30, 0x0
    beq lbl_802133A8
    xoris r0, r27, 0x8000
    clrlwi r3, r26, 24
    stw r0, 0x34(r1)
    lfd f2, lbl_804A21C0
    lfd f1, 0x30(r1)
    lfs f0, lbl_804A21A0
    fsubs f1, f1, f2
    stw r3, 0xc8(r30)
    fdivs f0, f1, f0
    fmuls f0, f0, f0
    stfs f0, 0xb0(r30)
lbl_802133A8:
    lbz r0, 0x27(r25)
    cmpwi r0, 0x0
    beq lbl_8021340C
    lwz r30, 0xc4(r25)
    cmpwi r30, 0x0
    beq lbl_8021340C
    lwz r0, 0x0(r30)
    cmpwi r0, 0x4
    bne lbl_802133DC
    mr r3, r30
    bl Stop__Q44nw4r3snd6detail7ChannelFv
    li r30, 0x0
    b lbl_8021340C
lbl_802133DC:
    xoris r0, r27, 0x8000
    clrlwi r3, r26, 24
    stw r0, 0x3c(r1)
    lfd f2, lbl_804A21C0
    lfd f1, 0x38(r1)
    lfs f0, lbl_804A21A0
    fsubs f1, f1, f2
    stw r3, 0xc8(r30)
    fdivs f0, f1, f0
    fmuls f0, f0, f0
    stfs f0, 0xb0(r30)
    stw r28, 0xd0(r30)
lbl_8021340C:
    cmpwi r30, 0x0
    bne lbl_8021353C
    lis r3, lbl_8033EF20@ha
    lwzu r11, lbl_8033EF20@l(r3)
    cmpwi r29, 0x0
    li r0, -0x1
    lwz r10, 0x4(r3)
    lwz r9, 0x8(r3)
    lwz r8, 0xc(r3)
    lwz r7, 0x10(r3)
    lwz r6, 0x14(r3)
    lwz r5, 0x18(r3)
    lwz r4, 0x1c(r3)
    lwz r3, 0x20(r3)
    stw r11, 0x8(r1)
    stw r10, 0xc(r1)
    stw r9, 0x10(r1)
    stw r8, 0x14(r1)
    stw r7, 0x18(r1)
    stw r6, 0x1c(r1)
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r3, 0x28(r1)
    lwz r3, 0x54(r25)
    stw r3, 0x8(r1)
    stw r26, 0xc(r1)
    stw r27, 0x10(r1)
    bne lbl_80213480
    mr r0, r28
lbl_80213480:
    stw r0, 0x14(r1)
    addi r5, r1, 0x8
    lbz r0, 0x86(r25)
    extsb r0, r0
    stw r0, 0x18(r1)
    lbz r3, 0x109(r31)
    lbz r0, 0x88(r25)
    add r0, r3, r0
    stw r0, 0x1c(r1)
    lwz r3, 0xc0(r25)
    lwz r0, 0x104(r3)
    stw r0, 0x20(r1)
    stw r25, 0x28(r1)
    lwz r3, 0xc0(r25)
    lwz r4, 0x50(r25)
    bl NoteOn__Q44nw4r3snd6detail9SeqPlayerFiRCQ44nw4r3snd6detail10NoteOnInfo
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802134E0
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_802136F0
lbl_802134E0:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    ble lbl_80213518
    lwz r27, 0xc4(r25)
    b lbl_80213510
lbl_802134F4:
    lwz r3, 0xdc(r27)
    lwz r0, 0xdc(r30)
    cmpw r3, r0
    bne lbl_8021350C
    mr r3, r27
    bl Release__Q44nw4r3snd6detail7ChannelFv
lbl_8021350C:
    lwz r27, 0xf4(r27)
lbl_80213510:
    cmpwi r27, 0x0
    bne lbl_802134F4
lbl_80213518:
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lwz r0, 0xc4(r25)
    stw r0, 0xf4(r30)
    stw r30, 0xc4(r25)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
lbl_8021353C:
    lbz r4, 0x8b(r25)
    cmplwi r4, 0x7f
    bgt lbl_80213550
    mr r3, r30
    bl fn_8020C018
lbl_80213550:
    lbz r4, 0x8c(r25)
    cmplwi r4, 0x7f
    bgt lbl_80213564
    mr r3, r30
    bl fn_8020C048
lbl_80213564:
    lbz r4, 0x8d(r25)
    cmplwi r4, 0x7f
    bgt lbl_80213578
    mr r3, r30
    bl fn_8020C0E8
lbl_80213578:
    lbz r4, 0x8e(r25)
    cmplwi r4, 0x7f
    bgt lbl_8021358C
    mr r3, r30
    bl fn_8020C0F0
lbl_8021358C:
    lha r4, 0x90(r25)
    cmpwi r4, 0x7f
    bgt lbl_802135A0
    mr r3, r30
    bl fn_8020C030
lbl_802135A0:
    lbz r0, 0x4b(r25)
    lfs f1, 0x6c(r25)
    cmpwi r0, 0x0
    beq lbl_802135D0
    lbz r0, 0x89(r25)
    lfd f2, lbl_804A21C0
    subf r0, r26, r0
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsubs f0, f0, f2
    fadds f1, f1, f0
lbl_802135D0:
    lbz r0, 0x8a(r25)
    cmpwi r0, 0x0
    bne lbl_802135F0
    mr r3, r30
    mr r4, r28
    li r5, 0x0
    bl SetSweepParam__Q44nw4r3snd6detail7ChannelFfib
    b lbl_8021364C
lbl_802135F0:
    lfs f0, lbl_804A219C
    mullw r0, r0, r0
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_8021360C
    fmr f3, f1
    b lbl_80213610
lbl_8021360C:
    fneg f3, f1
lbl_80213610:
    xoris r0, r0, 0x8000
    lfd f2, lbl_804A21C0
    stw r0, 0x3c(r1)
    mr r3, r30
    li r5, 0x1
    lfd f0, 0x38(r1)
    fsubs f0, f0, f2
    fmuls f0, f0, f3
    fctiwz f0, f0
    stfd f0, 0x40(r1)
    lwz r0, 0x44(r1)
    srawi r4, r0, 5
    slwi r0, r4, 2
    add r4, r0, r4
    bl SetSweepParam__Q44nw4r3snd6detail7ChannelFfib
lbl_8021364C:
    stb r26, 0x89(r25)
    lbz r3, 0x49(r25)
    lhz r5, 0xc2(r30)
    lhz r4, 0xc4(r30)
    neg r0, r3
    or r0, r0, r3
    cmplw r4, r5
    srwi r3, r0, 31
    blt lbl_80213678
    lbz r4, 0xc1(r30)
    b lbl_80213694
lbl_80213678:
    lbz r6, 0xc0(r30)
    lbz r0, 0xc1(r30)
    subf r0, r6, r0
    mullw r0, r4, r0
    divw r0, r0, r5
    add r0, r6, r0
    clrlwi r4, r0, 24
lbl_80213694:
    neg r0, r3
    stb r4, 0xc0(r30)
    or r0, r0, r3
    li r3, 0xff
    srawi r4, r0, 31
    andc r3, r3, r4
    li r0, 0x0
    stb r3, 0xc1(r30)
    sth r0, 0xc2(r30)
    sth r0, 0xc4(r30)
    lwz r3, 0xc0(r25)
    lbz r0, 0xef(r3)
    stb r0, 0x39(r30)
    lwz r3, 0xc0(r25)
    lwz r0, 0x2c(r3)
    stw r0, 0xd4(r30)
    lwz r3, 0xc0(r25)
    lwz r0, 0x30(r3)
    stw r0, 0xd8(r30)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    mr r3, r30
lbl_802136F0:
    addi r11, r1, 0x70
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: detail_ConvertLabelStringToSoundId__Q34nw4r3snd18SoundArchivePlayerFPCc
extern "C" asm void detail_ConvertLabelStringToSoundId__Q34nw4r3snd18SoundArchivePlayerFPCc() {
    nofralloc
    lwz r3, 0x10(r3)
    b ConvertLabelStringToSoundId__Q34nw4r3snd12SoundArchiveCFPCc
}
