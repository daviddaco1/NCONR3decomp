#include "types.h"

// Translation unit: src/nw4r/snd/snd_MidiSeqPlayer.cpp
// Total functions: 11

// Forward declarations
extern "C" void InvalidateData__Q44nw4r3snd6detail9SeqPlayerFPCvPCv();
extern "C" void InvalidateWaveData__Q44nw4r3snd6detail9SeqPlayerFPCvPCv();
extern "C" void IsActive__Q44nw4r3snd6detail9SeqPlayerCFv();
extern "C" void IsPause__Q44nw4r3snd6detail9SeqPlayerCFv();
extern "C" void IsStarted__Q44nw4r3snd6detail9SeqPlayerCFv();
extern "C" void OnShutdownSoundThread__Q44nw4r3snd6detail9SeqPlayerFv();
extern "C" void OnUpdateFrameSoundThread__Q44nw4r3snd6detail9SeqPlayerFv();
extern "C" void OnUpdateVoiceSoundThread__Q54nw4r3snd6detail11SoundThread14PlayerCallbackFv();
extern "C" void Update__Q44nw4r3snd6detail9SeqPlayerFv();
extern "C" void fn_8020E41C();
extern "C" void fn_8020E424();
extern "C" void fn_8020E42C();
extern "C" void fn_8020E434();

// ----------------------------------------------------------------------------
// OnUpdateFrameSoundThread__Q44nw4r3snd6detail9SeqPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void OnUpdateFrameSoundThread__Q44nw4r3snd6detail9SeqPlayerFv() {
    nofralloc
    b Update__Q44nw4r3snd6detail9SeqPlayerFv
}

// ----------------------------------------------------------------------------
// OnShutdownSoundThread__Q44nw4r3snd6detail9SeqPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void OnShutdownSoundThread__Q44nw4r3snd6detail9SeqPlayerFv() {
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// InvalidateWaveData__Q44nw4r3snd6detail9SeqPlayerFPCvPCv
// ----------------------------------------------------------------------------
extern "C" asm void InvalidateWaveData__Q44nw4r3snd6detail9SeqPlayerFPCvPCv() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// OnUpdateVoiceSoundThread__Q54nw4r3snd6detail11SoundThread14PlayerCallbackFv
// ----------------------------------------------------------------------------
extern "C" asm void OnUpdateVoiceSoundThread__Q54nw4r3snd6detail11SoundThread14PlayerCallbackFv() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// IsPause__Q44nw4r3snd6detail9SeqPlayerCFv
// ----------------------------------------------------------------------------
extern "C" asm void IsPause__Q44nw4r3snd6detail9SeqPlayerCFv() {
    nofralloc
    lbz r3, 0xee(r3)
    blr
}

// ----------------------------------------------------------------------------
// IsStarted__Q44nw4r3snd6detail9SeqPlayerCFv
// ----------------------------------------------------------------------------
extern "C" asm void IsStarted__Q44nw4r3snd6detail9SeqPlayerCFv() {
    nofralloc
    lbz r3, 0xed(r3)
    blr
}

// ----------------------------------------------------------------------------
// IsActive__Q44nw4r3snd6detail9SeqPlayerCFv
// ----------------------------------------------------------------------------
extern "C" asm void IsActive__Q44nw4r3snd6detail9SeqPlayerCFv() {
    nofralloc
    lbz r3, 0xec(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8020E41C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020E41C() {
    nofralloc
    subi r3, r3, 0xd4
    b InvalidateWaveData__Q44nw4r3snd6detail9SeqPlayerFPCvPCv
}

// ----------------------------------------------------------------------------
// fn_8020E424
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020E424() {
    nofralloc
    subi r3, r3, 0xd4
    b InvalidateData__Q44nw4r3snd6detail9SeqPlayerFPCvPCv
}

// ----------------------------------------------------------------------------
// fn_8020E42C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020E42C() {
    nofralloc
    subi r3, r3, 0xe0
    b OnShutdownSoundThread__Q44nw4r3snd6detail9SeqPlayerFv
}

// ----------------------------------------------------------------------------
// fn_8020E434
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020E434() {
    nofralloc
    subi r3, r3, 0xe0
    b OnUpdateFrameSoundThread__Q44nw4r3snd6detail9SeqPlayerFv
}

