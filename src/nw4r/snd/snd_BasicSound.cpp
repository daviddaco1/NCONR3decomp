#include "types.h"

// Translation unit: src/nw4r/snd/snd_BasicSound.cpp
// Total functions: 39

// Small Data symbols (@sda21)
extern "C" float lbl_8049DA30;
extern "C" float lbl_804A2048;
extern "C" float lbl_804A204C;
extern "C" float lbl_804A2050;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_803623A8[];

// Forward declarations
extern "C" void AttachExternalSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail19ExternalSoundPlayer();
extern "C" void AttachPlayerHeap__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail10PlayerHeap();
extern "C" void AttachSoundActor__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd10SoundActor();
extern "C" void AttachSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd11SoundPlayer();
extern "C" void DetachExternalSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail19ExternalSoundPlayer();
extern "C" void DetachPlayerHeap__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail10PlayerHeap();
extern "C" void DetachSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd11SoundPlayer();
extern "C" void DetachTempGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void GetRuntimeTypeInfo__Q44nw4r3snd6detail10BasicSoundCFv();
extern "C" void GetVoiceOutCount__Q44nw4r3snd6detail10BasicSoundCFv();
extern "C" void InitParam__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void IsAttachedGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void OnUpdatePlayerPriority__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void Pause__Q44nw4r3snd6detail10BasicSoundFbi();
extern "C" void SetAmbientInfo__Q44nw4r3snd6detail10BasicSoundFRCQ54nw4r3snd6detail10BasicSound11AmbientInfo();
extern "C" void SetBiquadFilter__Q44nw4r3snd6detail11BasicPlayerFif();
extern "C" void SetFxSend__Q34nw4r3snd11SoundPlayerFQ34nw4r3snd6AuxBusf();
extern "C" void SetFxSend__Q44nw4r3snd6detail11BasicPlayerFQ34nw4r3snd6AuxBusf();
extern "C" void SetId__Q44nw4r3snd6detail10BasicSoundFUl();
extern "C" void SetInitialVolume__Q44nw4r3snd6detail10BasicSoundFf();
extern "C" void SetPanCurve__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd8PanCurve();
extern "C" void SetPanMode__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd7PanMode();
extern "C" void SetPan__Q44nw4r3snd6detail10BasicSoundFf();
extern "C" void SetPlayerPriority__Q44nw4r3snd6detail10BasicSoundFi();
extern "C" void SetRemoteFilter__Q44nw4r3snd6detail10BasicSoundFi();
extern "C" void SetRemoteFilter__Q44nw4r3snd6detail11BasicPlayerFi();
extern "C" void SetRemoteOutVolume__Q44nw4r3snd6detail11BasicPlayerFif();
extern "C" void SetVolume__Q44nw4r3snd6detail10BasicSoundFfi();
extern "C" void Shutdown__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void StartPrepared__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void Stop__Q44nw4r3snd6detail10BasicSoundFi();
extern "C" void UpdateMoveValue__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void UpdateParam__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void Update__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void __ct__Q44nw4r3snd6detail10BasicSoundFii();
extern "C" void __dt__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void _restgpr_26();
extern "C" void _savegpr_26();
extern "C" void detail_FreePlayerHeap__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound();
extern "C" void detail_RemoveSound__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound();
extern "C" void detail_SortPriorityList__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound();
extern "C" void dtor_80136CFC();
extern "C" void fn_80208F3C();
extern "C" void fn_80209040();
extern "C" void fn_80209DB8();
extern "C" void fn_80209DC0();
extern "C" void fn_80209DC8();
extern "C" void fn_80209F5C();
extern "C" void fn_80209F90();
extern "C" void fn_8020A038();
extern "C" void fn_8020C330();
extern "C" void fn_80217CD4();
extern "C" void memcpy();

// ----------------------------------------------------------------------------
// __ct__Q44nw4r3snd6detail10BasicSoundFii
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q44nw4r3snd6detail10BasicSoundFii() {
    nofralloc
    lfs f0, lbl_804A204C
    lis r8, lbl_803623A8@ha
    li r7, 0x0
    lfs f1, lbl_804A2048
    addi r8, r8, lbl_803623A8@l
    li r6, -0x1
    li r0, 0x1
    stw r8, 0x0(r3)
    stw r7, 0x4(r3)
    stw r7, 0x8(r3)
    stw r7, 0xc(r3)
    stw r7, 0x10(r3)
    stw r7, 0x14(r3)
    stw r7, 0x18(r3)
    stfs f1, 0x30(r3)
    stfs f1, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x48(r3)
    stw r7, 0x4c(r3)
    stfs f1, 0x54(r3)
    stfs f1, 0x58(r3)
    stfs f0, 0x5c(r3)
    stfs f0, 0x60(r3)
    stfs f0, 0x64(r3)
    stw r7, 0x68(r3)
    stw r7, 0x6c(r3)
    stfs f0, 0x70(r3)
    stfs f0, 0x74(r3)
    stw r7, 0x78(r3)
    stw r7, 0x7c(r3)
    stw r6, 0x98(r3)
    stfs f0, 0x9c(r3)
    stfs f0, 0xa0(r3)
    stw r7, 0xa4(r3)
    stw r7, 0xa8(r3)
    stw r7, 0xec(r3)
    stw r7, 0xf0(r3)
    stw r7, 0xf4(r3)
    stw r7, 0xf8(r3)
    stw r7, 0xfc(r3)
    stw r7, 0x100(r3)
    stw r7, 0x104(r3)
    stw r7, 0x108(r3)
    stw r7, 0x1c(r3)
    stw r7, 0x20(r3)
    stw r7, 0x24(r3)
    stw r7, 0x28(r3)
    stw r7, 0x2c(r3)
    stb r0, 0x95(r3)
    stb r4, 0x94(r3)
    stw r5, 0x50(r3)
    blr
}

// ----------------------------------------------------------------------------
// InitParam__Q44nw4r3snd6detail10BasicSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void InitParam__Q44nw4r3snd6detail10BasicSoundFv() {
    nofralloc
    li r0, 0x0
    stwu r1, -0x20(r1)
    lfs f4, lbl_804A204C
    cmpw r0, r0
    lfs f0, lbl_804A2048
    stw r0, 0x84(r3)
    stb r0, 0x88(r3)
    stb r0, 0x80(r3)
    stb r0, 0x81(r3)
    stb r0, 0x82(r3)
    stb r0, 0x83(r3)
    stw r0, 0x8c(r3)
    stw r0, 0x90(r3)
    stfs f4, 0x60(r3)
    stfs f4, 0x64(r3)
    stw r0, 0x68(r3)
    stw r0, 0x6c(r3)
    stfs f0, 0x70(r3)
    stfs f0, 0x74(r3)
    stw r0, 0x78(r3)
    stw r0, 0x7c(r3)
    blt lbl_802089E0
    b lbl_80208A1C
lbl_802089E0:
    xoris r4, r0, 0x8000
    lis r0, 0x4330
    stw r4, 0xc(r1)
    fsubs f1, f4, f4
    lfd f3, lbl_804A2050
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    stw r4, 0x14(r1)
    fsubs f2, f0, f3
    stw r0, 0x10(r1)
    lfd f0, 0x10(r1)
    fmuls f1, f2, f1
    fsubs f0, f0, f3
    fdivs f0, f1, f0
    fadds f4, f4, f0
lbl_80208A1C:
    lwz r5, 0x10(r3)
    li r0, 0x0
    lfs f1, lbl_804A2048
    li r4, 0x1
    lfs f0, lbl_804A204C
    cmpwi r5, 0x0
    stfs f4, 0x60(r3)
    stfs f1, 0x64(r3)
    stw r4, 0x68(r3)
    stw r0, 0x6c(r3)
    stfs f1, 0xac(r3)
    stfs f1, 0xb8(r3)
    stfs f0, 0xb0(r3)
    stfs f0, 0xb4(r3)
    stfs f1, 0x9c(r3)
    stfs f1, 0xa0(r3)
    stw r0, 0xa4(r3)
    stw r0, 0xa8(r3)
    stfs f0, 0xbc(r3)
    stb r0, 0x96(r3)
    stfs f0, 0xc0(r3)
    beq lbl_80208A78
    lwz r4, 0x34(r5)
lbl_80208A78:
    lfs f0, lbl_804A204C
    li r0, 0x0
    lfs f1, lbl_804A2048
    stw r4, 0xc4(r3)
    stfs f1, 0xc8(r3)
    stfs f0, 0xcc(r3)
    stfs f0, 0xd0(r3)
    stfs f0, 0xd4(r3)
    stfs f0, 0xd8(r3)
    stfs f1, 0xdc(r3)
    stfs f1, 0xe0(r3)
    stfs f1, 0xe4(r3)
    stfs f1, 0xe8(r3)
    stfs f1, 0x30(r3)
    stfs f1, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    stfs f0, 0x44(r3)
    stfs f0, 0x48(r3)
    stw r0, 0x4c(r3)
    stw r0, 0x50(r3)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// StartPrepared__Q44nw4r3snd6detail10BasicSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void StartPrepared__Q44nw4r3snd6detail10BasicSoundFv() {
    nofralloc
    lbz r0, 0x81(r3)
    cmpwi r0, 0x0
    bnelr
    li r0, 0x1
    stb r0, 0x80(r3)
    blr
}

// ----------------------------------------------------------------------------
// Stop__Q44nw4r3snd6detail10BasicSoundFi
// ----------------------------------------------------------------------------
extern "C" asm void Stop__Q44nw4r3snd6detail10BasicSoundFi() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lis r0, 0x4330
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r12, 0x0(r3)
    stw r0, 0x8(r1)
    lwz r12, 0x24(r12)
    stw r0, 0x10(r1)
    mtctr r12
    bctrl
    cmpwi r30, 0x0
    mr r31, r3
    beq lbl_80208B88
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80208B88
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80208B88
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80208BA0
lbl_80208B88:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_80208CBC
lbl_80208BA0:
    lwz r5, 0x68(r29)
    lwz r4, 0x6c(r29)
    cmpw r4, r5
    blt lbl_80208BB8
    lfs f1, 0x64(r29)
    b lbl_80208BF4
lbl_80208BB8:
    xoris r3, r4, 0x8000
    xoris r0, r5, 0x8000
    stw r3, 0xc(r1)
    lfd f4, lbl_804A2050
    lfd f0, 0x8(r1)
    lfs f1, 0x64(r29)
    lfs f2, 0x60(r29)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_80208BF4:
    xoris r0, r30, 0x8000
    lfd f4, lbl_804A2050
    stw r0, 0xc(r1)
    cmpw r4, r5
    lfd f0, 0x8(r1)
    fsubs f0, f0, f4
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r6, 0x1c(r1)
    blt lbl_80208C28
    lfs f1, 0x64(r29)
    b lbl_80208C60
lbl_80208C28:
    xoris r3, r4, 0x8000
    xoris r0, r5, 0x8000
    stw r3, 0x14(r1)
    lfs f0, 0x64(r29)
    lfd f1, 0x10(r1)
    lfs f2, 0x60(r29)
    fsubs f3, f1, f4
    stw r0, 0xc(r1)
    fsubs f1, f0, f2
    lfd f0, 0x8(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f4
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_80208C60:
    lwz r3, 0x10(r29)
    li r0, 0x0
    lfs f0, lbl_804A204C
    cmpwi r3, 0x0
    stfs f1, 0x60(r29)
    stfs f0, 0x64(r29)
    stw r6, 0x68(r29)
    stw r0, 0x6c(r29)
    stb r0, 0x94(r29)
    beq lbl_80208C90
    mr r4, r29
    bl detail_SortPriorityList__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound
lbl_80208C90:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    li r0, 0x1
    stb r3, 0x82(r29)
    stw r3, 0x84(r29)
    stb r3, 0x88(r29)
    stb r0, 0x83(r29)
lbl_80208CBC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// Pause__Q44nw4r3snd6detail10BasicSoundFbi
// ----------------------------------------------------------------------------
extern "C" asm void Pause__Q44nw4r3snd6detail10BasicSoundFbi() {
    nofralloc
    stwu r1, -0x20(r1)
    lis r0, 0x4330
    cmpwi r4, 0x0
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    beq lbl_80208E14
    lwz r0, 0x84(r3)
    cmpwi r0, 0x2
    beq lbl_80208F34
    bge lbl_80208D0C
    cmpwi r0, 0x0
    bge lbl_80208D14
    b lbl_80208F34
lbl_80208D0C:
    cmpwi r0, 0x4
    bge lbl_80208F34
lbl_80208D14:
    lwz r7, 0x78(r3)
    lwz r6, 0x7c(r3)
    cmpw r6, r7
    blt lbl_80208D2C
    lfs f2, 0x74(r3)
    b lbl_80208D68
lbl_80208D2C:
    xoris r4, r6, 0x8000
    xoris r0, r7, 0x8000
    stw r4, 0xc(r1)
    lfd f4, lbl_804A2050
    lfd f0, 0x8(r1)
    lfs f1, 0x74(r3)
    lfs f2, 0x70(r3)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f2, f2, f0
lbl_80208D68:
    xoris r0, r5, 0x8000
    lfd f1, lbl_804A2050
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r5, 0x1c(r1)
    cmpwi r5, 0x0
    bgt lbl_80208D98
    li r5, 0x1
lbl_80208D98:
    cmpw r6, r7
    blt lbl_80208DA8
    lfs f1, 0x74(r3)
    b lbl_80208DE4
lbl_80208DA8:
    xoris r4, r6, 0x8000
    xoris r0, r7, 0x8000
    stw r4, 0x14(r1)
    lfd f4, lbl_804A2050
    lfd f0, 0x10(r1)
    lfs f1, 0x74(r3)
    lfs f2, 0x70(r3)
    fsubs f3, f0, f4
    stw r0, 0xc(r1)
    fsubs f1, f1, f2
    lfd f0, 0x8(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_80208DE4:
    lfs f0, lbl_804A204C
    li r4, 0x0
    li r0, 0x1
    stfs f1, 0x70(r3)
    stfs f0, 0x74(r3)
    stw r5, 0x78(r3)
    stw r4, 0x7c(r3)
    stw r0, 0x84(r3)
    stb r4, 0x88(r3)
    b lbl_80208F34
    b lbl_80208F34
    b lbl_80208F34
lbl_80208E14:
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    beq lbl_80208F34
    blt lbl_80208F34
    cmpwi r0, 0x4
    bge lbl_80208F34
    b lbl_80208E34
    b lbl_80208F34
lbl_80208E34:
    lwz r7, 0x78(r3)
    lwz r6, 0x7c(r3)
    cmpw r6, r7
    blt lbl_80208E4C
    lfs f1, 0x74(r3)
    b lbl_80208E88
lbl_80208E4C:
    xoris r4, r6, 0x8000
    xoris r0, r7, 0x8000
    stw r4, 0x14(r1)
    lfd f4, lbl_804A2050
    lfd f0, 0x10(r1)
    lfs f1, 0x74(r3)
    lfs f2, 0x70(r3)
    fsubs f3, f0, f4
    stw r0, 0xc(r1)
    fsubs f1, f1, f2
    lfd f0, 0x8(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_80208E88:
    xoris r0, r5, 0x8000
    lfs f0, lbl_804A2048
    stw r0, 0x14(r1)
    fsubs f0, f0, f1
    lfd f2, lbl_804A2050
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r8, 0x1c(r1)
    cmpwi r8, 0x0
    bgt lbl_80208EC0
    li r8, 0x1
lbl_80208EC0:
    cmpw r6, r7
    blt lbl_80208ED0
    lfs f1, 0x74(r3)
    b lbl_80208F0C
lbl_80208ED0:
    xoris r4, r6, 0x8000
    xoris r0, r7, 0x8000
    stw r4, 0xc(r1)
    lfd f4, lbl_804A2050
    lfd f0, 0x8(r1)
    lfs f1, 0x74(r3)
    lfs f2, 0x70(r3)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_80208F0C:
    lfs f0, lbl_804A2048
    li r5, 0x0
    li r4, 0x3
    li r0, 0x1
    stfs f1, 0x70(r3)
    stfs f0, 0x74(r3)
    stw r8, 0x78(r3)
    stw r5, 0x7c(r3)
    stw r4, 0x84(r3)
    stb r0, 0x88(r3)
lbl_80208F34:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80208F3C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80208F3C() {
    nofralloc
    stwu r1, -0x20(r1)
    lis r5, 0x4330
    lbz r0, 0x83(r3)
    stw r5, 0x8(r1)
    cmpwi r0, 0x0
    stw r5, 0x10(r1)
    bne lbl_80209038
    lwz r7, 0x68(r3)
    lwz r6, 0x6c(r3)
    cmpw r6, r7
    blt lbl_80208F70
    lfs f1, 0x64(r3)
    b lbl_80208FAC
lbl_80208F70:
    xoris r5, r6, 0x8000
    xoris r0, r7, 0x8000
    stw r5, 0xc(r1)
    lfd f4, lbl_804A2050
    lfd f0, 0x8(r1)
    lfs f1, 0x64(r3)
    lfs f2, 0x60(r3)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_80208FAC:
    xoris r0, r4, 0x8000
    lfs f0, lbl_804A2048
    stw r0, 0xc(r1)
    cmpw r6, r7
    fsubs f0, f0, f1
    lfd f4, lbl_804A2050
    lfd f1, 0x8(r1)
    fsubs f1, f1, f4
    fmuls f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r5, 0x1c(r1)
    blt lbl_80208FE8
    lfs f1, 0x64(r3)
    b lbl_80209020
lbl_80208FE8:
    xoris r4, r6, 0x8000
    xoris r0, r7, 0x8000
    stw r4, 0x14(r1)
    lfs f0, 0x64(r3)
    lfd f1, 0x10(r1)
    lfs f2, 0x60(r3)
    fsubs f3, f1, f4
    stw r0, 0xc(r1)
    fsubs f1, f0, f2
    lfd f0, 0x8(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f4
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_80209020:
    lfs f0, lbl_804A2048
    li r0, 0x0
    stfs f1, 0x60(r3)
    stfs f0, 0x64(r3)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
lbl_80209038:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80209040
// ----------------------------------------------------------------------------
extern "C" asm void fn_80209040() {
    nofralloc
    lwz r0, 0x84(r3)
    li r3, 0x1
    cmpwi r0, 0x1
    beqlr
    cmpwi r0, 0x2
    beqlr
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// Update__Q44nw4r3snd6detail10BasicSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void Update__Q44nw4r3snd6detail10BasicSoundFv() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    mr r29, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lbz r0, 0x82(r29)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_80209108
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80209108
    lwz r3, 0x8c(r29)
    cmpwi r3, 0x0
    bne lbl_80209100
    lwz r0, 0x84(r29)
    cmpwi r0, 0x0
    beq lbl_802090D4
    cmpwi r0, 0x3
    bne lbl_80209108
lbl_802090D4:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_802096A0
lbl_80209100:
    subi r0, r3, 0x1
    stw r0, 0x8c(r29)
lbl_80209108:
    lbz r0, 0x81(r29)
    li r30, 0x0
    cmpwi r0, 0x0
    bne lbl_80209144
    lbz r0, 0x80(r29)
    cmpwi r0, 0x0
    beq lbl_802096A0
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802096A0
    li r30, 0x1
lbl_80209144:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80209178
    lwz r3, 0x90(r29)
    li r0, -0x1
    cmplw r3, r0
    bge lbl_80209178
    addi r0, r3, 0x1
    stw r0, 0x90(r29)
lbl_80209178:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_802091AC
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_802096A0
lbl_802091AC:
    lwz r0, 0x84(r29)
    cmpwi r0, 0x2
    beq lbl_80209238
    bge lbl_802091CC
    cmpwi r0, 0x0
    beq lbl_80209224
    bge lbl_802091D8
    b lbl_80209238
lbl_802091CC:
    cmpwi r0, 0x4
    bge lbl_80209238
    b lbl_802091F4
lbl_802091D8:
    lwz r3, 0x7c(r29)
    lwz r0, 0x78(r29)
    cmpw r3, r0
    bge lbl_80209238
    addi r0, r3, 0x1
    stw r0, 0x7c(r29)
    b lbl_80209238
lbl_802091F4:
    lwz r3, 0x7c(r29)
    lwz r0, 0x78(r29)
    cmpw r3, r0
    bge lbl_8020920C
    addi r0, r3, 0x1
    stw r0, 0x7c(r29)
lbl_8020920C:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    b lbl_80209238
lbl_80209224:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
lbl_80209238:
    lwz r3, 0x20(r29)
    cmpwi r3, 0x0
    beq lbl_8020925C
    lwz r12, 0x0(r3)
    mr r5, r29
    lwz r4, 0x28(r29)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_8020925C:
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x0
    beq lbl_80209550
    lfs f0, lbl_804A204C
    addi r5, r1, 0x44
    lfs f1, lbl_804A2048
    li r3, 0x0
    addi r0, r1, 0x8c
    stfs f0, 0x10(r1)
    cmplw cr1, r5, r0
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stw r3, 0x24(r1)
    stw r3, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    bge cr1, lbl_8020948C
    subf r7, r5, r0
    lis r3, 0x2aab
    addi r8, r7, 0x17
    subi r4, r1, 0x34
    subi r0, r3, 0x5555
    mulhw r0, r0, r8
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r9, r0, r3
    addi r10, r9, 0x1
    cmpwi r10, 0x8
    ble lbl_80209444
    li r3, 0x0
    li r6, 0x0
    bgt cr1, lbl_80209320
    clrrwi. r0, r7, 31
    li r7, 0x1
    bne lbl_80209314
    clrrwi. r0, r8, 31
    beq lbl_80209314
    li r7, 0x0
lbl_80209314:
    cmpwi r7, 0x0
    beq lbl_80209320
    li r6, 0x1
lbl_80209320:
    cmpwi r6, 0x0
    beq lbl_80209350
    clrrwi. r7, r9, 31
    li r6, 0x1
    bne lbl_80209344
    clrrwi r0, r10, 31
    cmpw r7, r0
    beq lbl_80209344
    li r6, 0x0
lbl_80209344:
    cmpwi r6, 0x0
    beq lbl_80209350
    li r3, 0x1
lbl_80209350:
    cmpwi r3, 0x0
    beq lbl_80209444
    addi r3, r4, 0xbf
    li r0, 0xc0
    subf r3, r5, r3
    lfs f1, lbl_804A2048
    divwu r3, r3, r0
    lfs f0, lbl_804A204C
    mtctr r3
    cmplw r5, r4
    bge lbl_80209444
lbl_8020937C:
    stfs f1, 0x0(r5)
    stfs f1, 0x4(r5)
    stfs f0, 0x8(r5)
    stfs f0, 0xc(r5)
    stfs f0, 0x10(r5)
    stfs f0, 0x14(r5)
    stfs f1, 0x18(r5)
    stfs f1, 0x1c(r5)
    stfs f0, 0x20(r5)
    stfs f0, 0x24(r5)
    stfs f0, 0x28(r5)
    stfs f0, 0x2c(r5)
    stfs f1, 0x30(r5)
    stfs f1, 0x34(r5)
    stfs f0, 0x38(r5)
    stfs f0, 0x3c(r5)
    stfs f0, 0x40(r5)
    stfs f0, 0x44(r5)
    stfs f1, 0x48(r5)
    stfs f1, 0x4c(r5)
    stfs f0, 0x50(r5)
    stfs f0, 0x54(r5)
    stfs f0, 0x58(r5)
    stfs f0, 0x5c(r5)
    stfs f1, 0x60(r5)
    stfs f1, 0x64(r5)
    stfs f0, 0x68(r5)
    stfs f0, 0x6c(r5)
    stfs f0, 0x70(r5)
    stfs f0, 0x74(r5)
    stfs f1, 0x78(r5)
    stfs f1, 0x7c(r5)
    stfs f0, 0x80(r5)
    stfs f0, 0x84(r5)
    stfs f0, 0x88(r5)
    stfs f0, 0x8c(r5)
    stfs f1, 0x90(r5)
    stfs f1, 0x94(r5)
    stfs f0, 0x98(r5)
    stfs f0, 0x9c(r5)
    stfs f0, 0xa0(r5)
    stfs f0, 0xa4(r5)
    stfs f1, 0xa8(r5)
    stfs f1, 0xac(r5)
    stfs f0, 0xb0(r5)
    stfs f0, 0xb4(r5)
    stfs f0, 0xb8(r5)
    stfs f0, 0xbc(r5)
    addi r5, r5, 0xc0
    bdnz lbl_8020937C
lbl_80209444:
    addi r4, r1, 0x8c
    li r0, 0x18
    addi r3, r4, 0x17
    lfs f1, lbl_804A2048
    subf r3, r5, r3
    lfs f0, lbl_804A204C
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r4
    bge lbl_8020948C
lbl_8020946C:
    stfs f1, 0x0(r5)
    stfs f1, 0x4(r5)
    stfs f0, 0x8(r5)
    stfs f0, 0xc(r5)
    stfs f0, 0x10(r5)
    stfs f0, 0x14(r5)
    addi r5, r5, 0x18
    bdnz lbl_8020946C
lbl_8020948C:
    lwz r3, 0x1c(r29)
    addi r7, r1, 0x8
    lwz r4, 0x28(r29)
    lwz r12, 0x0(r3)
    lwz r5, 0x98(r29)
    lwz r12, 0xc(r12)
    lbz r6, 0x95(r29)
    mtctr r12
    bctrl
    lfs f0, 0x8(r1)
    mr r4, r31
    addi r3, r1, 0x8
    li r5, 0x0
    stfs f0, 0x30(r29)
    lfs f0, 0xc(r1)
    stfs f0, 0x34(r29)
    lfs f0, 0x10(r1)
    stfs f0, 0x38(r29)
    lfs f0, 0x14(r1)
    stfs f0, 0x3c(r29)
    lfs f0, 0x18(r1)
    stfs f0, 0x40(r29)
    lfs f0, 0x1c(r1)
    stfs f0, 0x44(r29)
    lfs f0, 0x20(r1)
    stfs f0, 0x48(r29)
    lwz r0, 0x24(r1)
    stw r0, 0x4c(r29)
    lwz r0, 0x28(r1)
    stw r0, 0x50(r29)
    b lbl_80209544
lbl_80209508:
    lfs f0, 0x24(r3)
    addi r5, r5, 0x1
    stfs f0, 0x70(r4)
    lfs f0, 0x28(r3)
    stfs f0, 0x74(r4)
    lfs f0, 0x2c(r3)
    stfs f0, 0x78(r4)
    lfs f0, 0x30(r3)
    stfs f0, 0x7c(r4)
    lfs f0, 0x34(r3)
    stfs f0, 0x80(r4)
    lfs f0, 0x38(r3)
    addi r3, r3, 0x18
    stfs f0, 0x84(r4)
    addi r4, r4, 0x18
lbl_80209544:
    lbz r0, 0x95(r29)
    cmpw r5, r0
    blt lbl_80209508
lbl_80209550:
    lwz r3, 0x14(r29)
    cmpwi r3, 0x0
    beq lbl_80209574
    lfs f0, 0x48(r3)
    stfs f0, 0x54(r29)
    lfs f0, 0x4c(r3)
    stfs f0, 0x58(r29)
    lfs f0, 0x50(r3)
    stfs f0, 0x5c(r29)
lbl_80209574:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lbz r0, 0x83(r29)
    cmpwi r0, 0x0
    beq lbl_802095C4
    lwz r3, 0x6c(r29)
    lwz r0, 0x68(r29)
    cmpw r3, r0
    blt lbl_802095C4
    li r0, 0x0
    mr r3, r29
    stb r0, 0x83(r29)
    lwz r12, 0x0(r29)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_802096A0
lbl_802095C4:
    cmpwi r30, 0x0
    beq lbl_80209614
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_802095FC
    li r3, 0x1
    li r0, 0x0
    stb r3, 0x81(r29)
    stb r0, 0x80(r29)
    b lbl_80209614
lbl_802095FC:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_802096A0
lbl_80209614:
    lwz r0, 0x84(r29)
    cmpwi r0, 0x1
    bne lbl_80209654
    lwz r3, 0x7c(r29)
    lwz r0, 0x78(r29)
    cmpw r3, r0
    blt lbl_80209674
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    li r0, 0x2
    stw r0, 0x84(r29)
    b lbl_80209674
lbl_80209654:
    cmpwi r0, 0x3
    bne lbl_80209674
    lwz r3, 0x7c(r29)
    lwz r0, 0x78(r29)
    cmpw r3, r0
    blt lbl_80209674
    li r0, 0x0
    stw r0, 0x84(r29)
lbl_80209674:
    lbz r0, 0x88(r29)
    cmpwi r0, 0x0
    beq lbl_802096A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stb r0, 0x88(r29)
lbl_802096A0:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// UpdateMoveValue__Q44nw4r3snd6detail10BasicSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateMoveValue__Q44nw4r3snd6detail10BasicSoundFv() {
    nofralloc
    lwz r4, 0x6c(r3)
    lwz r0, 0x68(r3)
    cmpw r4, r0
    bge lbl_802096D4
    addi r0, r4, 0x1
    stw r0, 0x6c(r3)
lbl_802096D4:
    lwz r4, 0xa8(r3)
    lwz r0, 0xa4(r3)
    cmpw r4, r0
    bgelr
    addi r0, r4, 0x1
    stw r0, 0xa8(r3)
    blr
}

// ----------------------------------------------------------------------------
// UpdateParam__Q44nw4r3snd6detail10BasicSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateParam__Q44nw4r3snd6detail10BasicSoundFv() {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    opword 0xF3E100C8
    stfd f30, 0xb0(r1)
    opword 0xF3C100B8
    stfd f29, 0xa0(r1)
    opword 0xF3A100A8
    stfd f28, 0x90(r1)
    opword 0xF3810098
    stfd f27, 0x80(r1)
    opword 0xF3610088
    stfd f26, 0x70(r1)
    opword 0xF3410078
    stfd f25, 0x60(r1)
    opword 0xF3210068
    stfd f24, 0x50(r1)
    opword 0xF3010058
    addi r11, r1, 0x50
    bl _savegpr_26
    lfs f31, lbl_804A2048
    lis r0, 0x4330
    lfs f0, 0xac(r3)
    mr r31, r3
    lwz r6, 0x10(r3)
    fmuls f31, f31, f0
    lwz r5, 0xa4(r3)
    lfs f0, 0x2c(r6)
    lwz r4, 0xa8(r3)
    fmuls f31, f31, f0
    stw r0, 0x28(r1)
    cmpw r4, r5
    stw r0, 0x30(r1)
    blt lbl_80209784
    lfs f0, 0xa0(r3)
    b lbl_802097C0
lbl_80209784:
    xoris r4, r4, 0x8000
    xoris r0, r5, 0x8000
    stw r4, 0x2c(r1)
    lfd f4, lbl_804A2050
    lfd f0, 0x28(r1)
    lfs f1, 0xa0(r3)
    lfs f2, 0x9c(r3)
    fsubs f3, f0, f4
    stw r0, 0x34(r1)
    fsubs f1, f1, f2
    lfd f0, 0x30(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_802097C0:
    lwz r5, 0x68(r3)
    fmuls f31, f31, f0
    lwz r0, 0x6c(r3)
    cmpw r0, r5
    blt lbl_802097DC
    lfs f0, 0x64(r3)
    b lbl_80209818
lbl_802097DC:
    xoris r4, r0, 0x8000
    xoris r0, r5, 0x8000
    stw r4, 0x2c(r1)
    lfd f4, lbl_804A2050
    lfd f0, 0x28(r1)
    lfs f1, 0x64(r3)
    lfs f2, 0x60(r3)
    fsubs f3, f0, f4
    stw r0, 0x34(r1)
    fsubs f1, f1, f2
    lfd f0, 0x30(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_80209818:
    lwz r5, 0x78(r3)
    fmuls f31, f31, f0
    lwz r0, 0x7c(r3)
    cmpw r0, r5
    blt lbl_80209834
    lfs f0, 0x74(r3)
    b lbl_80209870
lbl_80209834:
    xoris r4, r0, 0x8000
    xoris r0, r5, 0x8000
    stw r4, 0x2c(r1)
    lfd f4, lbl_804A2050
    lfd f0, 0x28(r1)
    lfs f1, 0x74(r3)
    lfs f2, 0x70(r3)
    fsubs f3, f0, f4
    stw r0, 0x34(r1)
    fsubs f1, f1, f2
    lfd f0, 0x30(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_80209870:
    fmuls f31, f31, f0
    lfs f2, 0x30(r3)
    lfs f28, lbl_804A2048
    lfs f0, 0xb8(r3)
    fmuls f31, f31, f2
    lfs f30, lbl_804A204C
    lfs f1, 0xb0(r3)
    fmuls f28, f28, f0
    lfs f0, 0x34(r3)
    lfs f2, 0x54(r3)
    fadds f30, f30, f1
    lfs f1, 0x38(r3)
    fmuls f28, f28, f0
    lfs f29, lbl_804A204C
    fmuls f31, f31, f2
    lfs f2, 0xb4(r3)
    fadds f30, f30, f1
    lfs f3, 0x5c(r3)
    fadds f29, f29, f2
    lbz r28, 0x96(r3)
    lfs f1, 0x58(r3)
    lfs f2, 0x3c(r3)
    lfs f27, 0xbc(r3)
    cmpwi r28, 0x0
    lfs f0, 0x44(r3)
    fadds f30, f30, f3
    fmuls f28, f28, f1
    lfs f26, 0xc0(r3)
    fadds f27, f27, f0
    lfs f0, 0x30(r6)
    fadds f29, f29, f2
    fadds f27, f27, f0
    bne lbl_8020990C
    lwz r28, 0x3c(r6)
    lfs f26, 0x40(r6)
    cmpwi r28, 0x0
    bne lbl_8020990C
    lwz r28, 0x4c(r3)
    lfs f26, 0x48(r3)
lbl_8020990C:
    lfs f25, lbl_804A2048
    mr r29, r31
    lfs f0, 0xc8(r3)
    addi r30, r1, 0x18
    lfs f1, 0x38(r6)
    li r26, 0x0
    fmuls f25, f25, f0
    lwz r27, 0xc4(r3)
    lfs f24, lbl_804A2048
    fmuls f25, f25, f1
lbl_80209934:
    stfs f24, 0x0(r30)
    mr r4, r26
    lwz r3, 0x10(r31)
    bl SetFxSend__Q34nw4r3snd11SoundPlayerFQ34nw4r3snd6AuxBusf
    lfs f2, 0x0(r30)
    addi r26, r26, 0x1
    lfs f0, 0xdc(r29)
    cmpwi r26, 0x4
    fmuls f1, f2, f1
    addi r29, r29, 0x4
    fmuls f0, f1, f0
    stfs f0, 0x0(r30)
    addi r30, r30, 0x4
    blt lbl_80209934
    lfs f5, lbl_804A204C
    mr r3, r31
    lwz r4, 0x10(r31)
    lfs f2, 0xd0(r31)
    fmr f24, f5
    lfs f1, 0xd4(r31)
    fadds f4, f5, f2
    lfs f3, 0x58(r4)
    stfs f5, 0x8(r1)
    fadds f2, f5, f1
    lfs f0, 0xd8(r31)
    lfs f7, 0x5c(r4)
    fadds f1, f5, f0
    lfs f6, 0x60(r4)
    lwz r12, 0x0(r31)
    fadds f3, f4, f3
    stfs f4, 0x8(r1)
    fadds f2, f2, f7
    lfs f4, 0xcc(r31)
    fadds f1, f1, f6
    lfs f0, 0x40(r31)
    fadds f24, f24, f4
    lfs f4, 0x54(r4)
    stfs f5, 0xc(r1)
    fadds f0, f3, f0
    lwz r12, 0x24(r12)
    stfs f5, 0x10(r1)
    fadds f24, f24, f4
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x8(r1)
    mtctr r12
    bctrl
    stfs f31, 0x4(r3)
    fmr f1, f26
    mr r26, r3
    mr r4, r28
    stfs f30, 0xc(r3)
    stfs f29, 0x10(r3)
    stfs f28, 0x8(r3)
    stfs f27, 0x14(r3)
    bl SetBiquadFilter__Q44nw4r3snd6detail11BasicPlayerFif
    stw r27, 0x20(r26)
    addi r31, r1, 0x18
    li r27, 0x0
    stfs f25, 0x24(r26)
lbl_80209A28:
    lfs f1, 0x0(r31)
    mr r3, r26
    mr r4, r27
    bl SetRemoteOutVolume__Q44nw4r3snd6detail11BasicPlayerFif
    addi r27, r27, 0x1
    addi r31, r31, 0x4
    cmpwi r27, 0x4
    blt lbl_80209A28
    stfs f24, 0x28(r26)
    addi r31, r1, 0x8
    li r27, 0x0
lbl_80209A54:
    lfs f1, 0x0(r31)
    mr r3, r26
    mr r4, r27
    bl SetFxSend__Q44nw4r3snd6detail11BasicPlayerFQ34nw4r3snd6AuxBusf
    addi r27, r27, 0x1
    addi r31, r31, 0x4
    cmpwi r27, 0x3
    blt lbl_80209A54
    opword 0xE3E100C8
    lfd f31, 0xc0(r1)
    opword 0xE3C100B8
    lfd f30, 0xb0(r1)
    opword 0xE3A100A8
    lfd f29, 0xa0(r1)
    opword 0xE3810098
    lfd f28, 0x90(r1)
    opword 0xE3610088
    lfd f27, 0x80(r1)
    opword 0xE3410078
    lfd f26, 0x70(r1)
    opword 0xE3210068
    lfd f25, 0x60(r1)
    opword 0xE3010058
    addi r11, r1, 0x50
    lfd f24, 0x50(r1)
    bl _restgpr_26
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// ----------------------------------------------------------------------------
// Shutdown__Q44nw4r3snd6detail10BasicSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void Shutdown__Q44nw4r3snd6detail10BasicSoundFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r3)
    mr r31, r3
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80209B38
    lbz r0, 0x83(r30)
    cmpwi r0, 0x0
    beq lbl_80209B24
    lfs f0, lbl_804A204C
    stfs f0, 0x4(r31)
lbl_80209B24:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_80209B38:
    li r31, -0x1
    mr r3, r30
    stw r31, 0x98(r30)
    lwz r12, 0x0(r30)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    stw r31, 0xd0(r3)
    lwz r3, 0x8(r30)
    cmpwi r3, 0x0
    beq lbl_80209B68
    bl fn_80217CD4
lbl_80209B68:
    lwz r3, 0xc(r30)
    cmpwi r3, 0x0
    beq lbl_80209B78
    bl fn_80217CD4
lbl_80209B78:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80209BA8
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
lbl_80209BA8:
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_80209BC0
    lwz r3, 0x10(r30)
    mr r4, r30
    bl detail_FreePlayerHeap__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound
lbl_80209BC0:
    lwz r3, 0x10(r30)
    cmpwi r3, 0x0
    beq lbl_80209BD4
    mr r4, r30
    bl detail_RemoveSound__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound
lbl_80209BD4:
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_80209BE8
    mr r4, r30
    bl fn_8020C330
lbl_80209BE8:
    lwz r3, 0x24(r30)
    cmpwi r3, 0x0
    beq lbl_80209C14
    lwz r12, 0x0(r3)
    mr r5, r30
    lwz r4, 0x28(r30)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x28(r30)
lbl_80209C14:
    li r0, 0x0
    stb r0, 0x81(r30)
    stb r0, 0x83(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// AttachPlayerHeap__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail10PlayerHeap
// ----------------------------------------------------------------------------
extern "C" asm void AttachPlayerHeap__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail10PlayerHeap() {
    nofralloc
    stw r4, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// DetachPlayerHeap__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail10PlayerHeap
// ----------------------------------------------------------------------------
extern "C" asm void DetachPlayerHeap__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail10PlayerHeap() {
    nofralloc
    li r0, 0x0
    stw r0, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// AttachSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd11SoundPlayer
// ----------------------------------------------------------------------------
extern "C" asm void AttachSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd11SoundPlayer() {
    nofralloc
    stw r4, 0x10(r3)
    blr
}

// ----------------------------------------------------------------------------
// DetachSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd11SoundPlayer
// ----------------------------------------------------------------------------
extern "C" asm void DetachSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd11SoundPlayer() {
    nofralloc
    li r0, 0x0
    stw r0, 0x10(r3)
    blr
}

// ----------------------------------------------------------------------------
// AttachSoundActor__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd10SoundActor
// ----------------------------------------------------------------------------
extern "C" asm void AttachSoundActor__Q44nw4r3snd6detail10BasicSoundFPQ34nw4r3snd10SoundActor() {
    nofralloc
    stw r4, 0x14(r3)
    blr
}

// ----------------------------------------------------------------------------
// AttachExternalSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail19ExternalSoundPlayer
// ----------------------------------------------------------------------------
extern "C" asm void AttachExternalSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail19ExternalSoundPlayer() {
    nofralloc
    stw r4, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// DetachExternalSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail19ExternalSoundPlayer
// ----------------------------------------------------------------------------
extern "C" asm void DetachExternalSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail19ExternalSoundPlayer() {
    nofralloc
    li r0, 0x0
    stw r0, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetVoiceOutCount__Q44nw4r3snd6detail10BasicSoundCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetVoiceOutCount__Q44nw4r3snd6detail10BasicSoundCFv() {
    nofralloc
    lbz r3, 0x95(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetPlayerPriority__Q44nw4r3snd6detail10BasicSoundFi
// ----------------------------------------------------------------------------
extern "C" asm void SetPlayerPriority__Q44nw4r3snd6detail10BasicSoundFi() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x10(r3)
    stb r4, 0x94(r3)
    cmpwi r0, 0x0
    beq lbl_80209CB4
    mr r3, r0
    mr r4, r31
    bl detail_SortPriorityList__Q34nw4r3snd11SoundPlayerFPQ44nw4r3snd6detail10BasicSound
lbl_80209CB4:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// OnUpdatePlayerPriority__Q44nw4r3snd6detail10BasicSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void OnUpdatePlayerPriority__Q44nw4r3snd6detail10BasicSoundFv() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// SetInitialVolume__Q44nw4r3snd6detail10BasicSoundFf
// ----------------------------------------------------------------------------
extern "C" asm void SetInitialVolume__Q44nw4r3snd6detail10BasicSoundFf() {
    nofralloc
    lfs f0, lbl_804A2048
    fcmpo cr0, f1, f0
    ble lbl_80209CF0
    b lbl_80209D04
lbl_80209CF0:
    lfs f0, lbl_804A204C
    fcmpo cr0, f1, f0
    bge lbl_80209D00
    b lbl_80209D04
lbl_80209D00:
    fmr f0, f1
lbl_80209D04:
    stfs f0, 0xac(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetVolume__Q44nw4r3snd6detail10BasicSoundFfi
// ----------------------------------------------------------------------------
extern "C" asm void SetVolume__Q44nw4r3snd6detail10BasicSoundFfi() {
    nofralloc
    lfs f5, lbl_804A2048
    stwu r1, -0x20(r1)
    fcmpo cr0, f1, f5
    ble lbl_80209D20
    b lbl_80209D34
lbl_80209D20:
    lfs f5, lbl_804A204C
    fcmpo cr0, f1, f5
    bge lbl_80209D30
    b lbl_80209D34
lbl_80209D30:
    fmr f5, f1
lbl_80209D34:
    lwz r6, 0xa4(r3)
    lwz r0, 0xa8(r3)
    cmpw r0, r6
    blt lbl_80209D4C
    lfs f0, 0xa0(r3)
    b lbl_80209D94
lbl_80209D4C:
    lis r5, 0x4330
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r6, 0x8000
    lfd f4, lbl_804A2050
    stw r5, 0x8(r1)
    lfs f0, 0xa0(r3)
    lfd f1, 0x8(r1)
    lfs f2, 0x9c(r3)
    fsubs f3, f1, f4
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    stw r5, 0x10(r1)
    lfd f0, 0x10(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f4
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_80209D94:
    li r0, 0x0
    stfs f0, 0x9c(r3)
    stfs f5, 0xa0(r3)
    stw r4, 0xa4(r3)
    stw r0, 0xa8(r3)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetPan__Q44nw4r3snd6detail10BasicSoundFf
// ----------------------------------------------------------------------------
extern "C" asm void SetPan__Q44nw4r3snd6detail10BasicSoundFf() {
    nofralloc
    stfs f1, 0xb8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80209DB8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80209DB8() {
    nofralloc
    stfs f1, 0xb0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80209DC0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80209DC0() {
    nofralloc
    stw r4, 0xc4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80209DC8
// ----------------------------------------------------------------------------
extern "C" asm void fn_80209DC8() {
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    stfs f1, 0xd0(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetRemoteFilter__Q44nw4r3snd6detail10BasicSoundFi
// ----------------------------------------------------------------------------
extern "C" asm void SetRemoteFilter__Q44nw4r3snd6detail10BasicSoundFi() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    mr r4, r31
    bl SetRemoteFilter__Q44nw4r3snd6detail11BasicPlayerFi
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetPanMode__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd7PanMode
// ----------------------------------------------------------------------------
extern "C" asm void SetPanMode__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd7PanMode() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    stw r31, 0x2c(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetPanCurve__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd8PanCurve
// ----------------------------------------------------------------------------
extern "C" asm void SetPanCurve__Q44nw4r3snd6detail10BasicSoundFQ34nw4r3snd8PanCurve() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    stw r31, 0x30(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// SetAmbientInfo__Q44nw4r3snd6detail10BasicSoundFRCQ54nw4r3snd6detail10BasicSound11AmbientInfo
// ----------------------------------------------------------------------------
extern "C" asm void SetAmbientInfo__Q44nw4r3snd6detail10BasicSoundFRCQ54nw4r3snd6detail10BasicSound11AmbientInfo() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r3, 0x8(r4)
    lwz r4, 0x10(r4)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_80209F40
    lwz r4, 0xc(r30)
    lwz r5, 0x10(r30)
    bl memcpy
    lwz r3, 0xc(r30)
    lwz r0, 0x0(r30)
    stw r3, 0x28(r29)
    lwz r3, 0x0(r30)
    cmpwi r0, 0x0
    lwz r5, 0x4(r30)
    lwz r4, 0x8(r30)
    lwz r0, 0x10(r30)
    stw r3, 0x1c(r29)
    stw r5, 0x20(r29)
    stw r4, 0x24(r29)
    stw r0, 0x2c(r29)
    stw r31, 0x28(r29)
    beq lbl_80209F40
    lwz r12, 0x0(r3)
    mr r4, r31
    lwz r5, 0x98(r29)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x4
    ble lbl_80209F3C
    li r3, 0x4
lbl_80209F3C:
    stb r3, 0x95(r29)
lbl_80209F40:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80209F5C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80209F5C() {
    nofralloc
    lwz r0, 0x0(r3)
    mr r6, r3
    cmpwi r0, 0x0
    bne lbl_80209F74
    li r3, 0x0
    blr
lbl_80209F74:
    mr r3, r0
    mr r5, r4
    lwz r12, 0x0(r3)
    lwz r4, 0xc(r6)
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_80209F90
// ----------------------------------------------------------------------------
extern "C" asm void fn_80209F90() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// IsAttachedGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void IsAttachedGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv() {
    nofralloc
    lwz r3, 0x8(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// DetachTempGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void DetachTempGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv() {
    nofralloc
    lwz r3, 0x8(r3)
    b fn_80217CD4
}

// ----------------------------------------------------------------------------
// SetId__Q44nw4r3snd6detail10BasicSoundFUl
// ----------------------------------------------------------------------------
extern "C" asm void SetId__Q44nw4r3snd6detail10BasicSoundFUl() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r4, 0x98(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    stw r31, 0xd0(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail10BasicSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail10BasicSoundFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_8020A018
    cmpwi r4, 0x0
    ble lbl_8020A018
    bl dtor_80136CFC
lbl_8020A018:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetRuntimeTypeInfo__Q44nw4r3snd6detail10BasicSoundCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetRuntimeTypeInfo__Q44nw4r3snd6detail10BasicSoundCFv() {
    nofralloc
    la r3, lbl_8049DA30
    blr
}

// ----------------------------------------------------------------------------
// fn_8020A038
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020A038() {
    nofralloc
    li r0, 0x0
    stw r0, lbl_8049DA30
    blr
}

