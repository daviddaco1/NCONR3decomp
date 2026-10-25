#include "types.h"

// Translation unit: src/nw4r/snd/snd_Channel.cpp
// Total functions: 17

// Small Data symbols (@sda21)
extern "C" float lbl_8049DA38;
extern "C" float lbl_804A2068;
extern "C" float lbl_804A206C;
extern "C" float lbl_804A2070;
extern "C" float lbl_804A2074;
extern "C" float lbl_804A2078;
extern "C" float lbl_804A2080;
extern "C" float lbl_804A2088;
extern "C" float lbl_804A2090;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_804040A0[];
extern "C" u8 lbl_804040B0[];

// Forward declarations
extern "C" void AllocChannel__Q44nw4r3snd6detail7ChannelFiiiPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl();
extern "C" void AllocImpl__Q44nw4r3snd6detail8PoolImplFv();
extern "C" void AllocVoice__Q44nw4r3snd6detail12VoiceManagerFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv();
extern "C" void CalcPitchRatio__Q44nw4r3snd6detail4UtilFi();
extern "C" void CalcVolumeRatio__Q44nw4r3snd6detail4UtilFf();
extern "C" void CreateImpl__Q44nw4r3snd6detail8PoolImplFPvUlUl();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode();
extern "C" void FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel();
extern "C" void FreeImpl__Q44nw4r3snd6detail8PoolImplFPv();
extern "C" void Free__Q44nw4r3snd6detail5VoiceFv();
extern "C" void GetInstance__Q44nw4r3snd6detail12VoiceManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail14ChannelManagerFv();
extern "C" void GetRequiredMemSize__Q44nw4r3snd6detail14ChannelManagerFi();
extern "C" void GetValue__Q44nw4r3snd6detail3LfoCFv();
extern "C" void InitParam__Q44nw4r3snd6detail7ChannelFPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl();
extern "C" void Init__Q44nw4r3snd6detail8LfoParamFv();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void NoteOff__Q44nw4r3snd6detail7ChannelFv();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void Release__Q44nw4r3snd6detail7ChannelFv();
extern "C" void Reset__Q44nw4r3snd6detail3LfoFv();
extern "C" void SetBiquadFilter__Q44nw4r3snd6detail5VoiceFif();
extern "C" void SetBiquadFilter__Q44nw4r3snd6detail7ChannelFif();
extern "C" void SetFxSend__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd6AuxBusf();
extern "C" void SetLpfFreq__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetMainOutVolume__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetMainSend__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetOutputLine__Q44nw4r3snd6detail5VoiceFi();
extern "C" void SetPanCurve__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd8PanCurve();
extern "C" void SetPanMode__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd7PanMode();
extern "C" void SetPan__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetPitch__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetPriority__Q44nw4r3snd6detail5VoiceFi();
extern "C" void SetRemoteFilter__Q44nw4r3snd6detail5VoiceFi();
extern "C" void SetRemoteFxSend__Q44nw4r3snd6detail5VoiceFif();
extern "C" void SetRemoteOutVolume__Q44nw4r3snd6detail5VoiceFif();
extern "C" void SetRemoteSend__Q44nw4r3snd6detail5VoiceFif();
extern "C" void SetSurroundPan__Q44nw4r3snd6detail5VoiceFf();
extern "C" void SetSweepParam__Q44nw4r3snd6detail7ChannelFfib();
extern "C" void SetVeVolume__Q44nw4r3snd6detail5VoiceFff();
extern "C" void SetVolume__Q44nw4r3snd6detail5VoiceFf();
extern "C" void Setup__Q44nw4r3snd6detail14ChannelManagerFPvUl();
extern "C" void Setup__Q44nw4r3snd6detail5VoiceFRCQ44nw4r3snd6detail8WaveInfoUl();
extern "C" void Start__Q44nw4r3snd6detail5VoiceFv();
extern "C" void Start__Q44nw4r3snd6detail7ChannelFRCQ44nw4r3snd6detail8WaveInfoiUl();
extern "C" void Stop__Q44nw4r3snd6detail5VoiceFv();
extern "C" void Stop__Q44nw4r3snd6detail7ChannelFv();
extern "C" void UpdateAllChannel__Q44nw4r3snd6detail14ChannelManagerFv();
extern "C" void UpdateSweep__Q44nw4r3snd6detail7ChannelFi();
extern "C" void Update__Q44nw4r3snd6detail3LfoFi();
extern "C" void Update__Q44nw4r3snd6detail7ChannelFb();
extern "C" void VoiceCallbackFunc__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv();
extern "C" void __dt__Q44nw4r2ut6detail12LinkListImplFv();
extern "C" void __dt__Q44nw4r3snd6detail14ChannelManagerFv();
extern "C" void __register_global_object();
extern "C" void _restgpr_24();
extern "C" void _savegpr_24();
extern "C" void dtor_80136CFC();
extern "C" void fn_8020BDF4();
extern "C" void fn_8020BE38();
extern "C" void fn_8020BE78();
extern "C" void fn_8020BE90();
extern "C" void fn_8020BEBC();

// ----------------------------------------------------------------------------
// GetInstance__Q44nw4r3snd6detail14ChannelManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void GetInstance__Q44nw4r3snd6detail14ChannelManagerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, lbl_8049DA38
    extsb. r0, r0
    bne lbl_8020A374
    lis r6, lbl_804040B0@ha
    li r0, 0x0
    addi r3, r6, lbl_804040B0@l
    lis r4, __dt__Q44nw4r3snd6detail14ChannelManagerFv@ha
    stw r0, 0x8(r3)
    addi r7, r3, 0x8
    lis r5, lbl_804040A0@ha
    addi r4, r4, __dt__Q44nw4r3snd6detail14ChannelManagerFv@l
    stw r0, 0xc(r3)
    addi r5, r5, lbl_804040A0@l
    stw r0, lbl_804040B0@l(r6)
    stw r0, 0x4(r3)
    stw r7, 0x8(r3)
    stw r7, 0xc(r3)
    stb r0, 0x10(r3)
    stw r0, 0x14(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA38
lbl_8020A374:
    lwz r0, 0x14(r1)
    lis r3, lbl_804040B0@ha
    addi r3, r3, lbl_804040B0@l
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail14ChannelManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail14ChannelManagerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_8020A3D0
    addic. r3, r3, 0x4
    beq lbl_8020A3C0
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_8020A3C0:
    cmpwi r31, 0x0
    ble lbl_8020A3D0
    mr r3, r30
    bl dtor_80136CFC
lbl_8020A3D0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetRequiredMemSize__Q44nw4r3snd6detail14ChannelManagerFi
// ----------------------------------------------------------------------------
extern "C" asm void GetRequiredMemSize__Q44nw4r3snd6detail14ChannelManagerFi() {
    nofralloc
    addi r0, r4, 0x1
    slwi r3, r0, 8
    blr
}

// ----------------------------------------------------------------------------
// Setup__Q44nw4r3snd6detail14ChannelManagerFPvUl
// ----------------------------------------------------------------------------
extern "C" asm void Setup__Q44nw4r3snd6detail14ChannelManagerFPvUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lbz r0, 0x10(r28)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_8020A43C
    bl OSRestoreInterrupts
    b lbl_8020A46C
lbl_8020A43C:
    mr r3, r28
    mr r4, r29
    mr r5, r30
    li r6, 0x100
    bl CreateImpl__Q44nw4r3snd6detail8PoolImplFPvUlUl
    li r0, 0x1
    stw r3, 0x14(r28)
    mr r3, r31
    stw r29, 0x18(r28)
    stw r30, 0x1c(r28)
    stb r0, 0x10(r28)
    bl OSRestoreInterrupts
lbl_8020A46C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// UpdateAllChannel__Q44nw4r3snd6detail14ChannelManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateAllChannel__Q44nw4r3snd6detail14ChannelManagerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    addi r30, r3, 0x8
    lwz r31, 0x8(r3)
    b lbl_8020A4C0
lbl_8020A4AC:
    mr r3, r31
    lwz r31, 0x0(r31)
    subi r3, r3, 0xf8
    li r4, 0x1
    bl Update__Q44nw4r3snd6detail7ChannelFb
lbl_8020A4C0:
    cmplw r31, r30
    bne lbl_8020A4AC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// InitParam__Q44nw4r3snd6detail7ChannelFPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl
// ----------------------------------------------------------------------------
extern "C" asm void InitParam__Q44nw4r3snd6detail7ChannelFPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_804A2068
    li r7, 0x1
    stw r0, 0x14(r1)
    li r6, 0x3c
    lfs f2, lbl_804A206C
    li r0, 0xff
    stw r31, 0xc(r1)
    li r31, 0x0
    lfs f1, lbl_804A2090
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0xf4(r3)
    stw r4, 0xe0(r3)
    stw r5, 0xe4(r3)
    stw r31, 0xe8(r3)
    stw r31, 0xec(r3)
    stb r31, 0x35(r3)
    stb r7, 0x38(r3)
    stb r31, 0x39(r3)
    stb r31, 0x3a(r3)
    stw r31, 0xd0(r3)
    stw r6, 0xc8(r3)
    stw r6, 0xcc(r3)
    stfs f2, 0xb0(r3)
    stfs f0, 0xb4(r3)
    stfs f0, 0xb8(r3)
    stfs f2, 0xbc(r3)
    stfs f2, 0x40(r3)
    stfs f0, 0xa0(r3)
    stfs f2, 0x44(r3)
    stfs f0, 0x48(r3)
    stfs f0, 0x4c(r3)
    stfs f0, 0x50(r3)
    stb r31, 0x3b(r3)
    stfs f0, 0x54(r3)
    stb r31, 0x3c(r3)
    stw r7, 0x58(r3)
    stfs f2, 0x5c(r3)
    stfs f0, 0x60(r3)
    stfs f0, 0x64(r3)
    stfs f0, 0x68(r3)
    stfs f0, 0x6c(r3)
    stfs f2, 0x70(r3)
    stfs f0, 0x80(r3)
    stfs f0, 0x90(r3)
    stfs f2, 0x74(r3)
    stfs f0, 0x84(r3)
    stfs f0, 0x94(r3)
    stfs f2, 0x78(r3)
    stfs f0, 0x88(r3)
    stfs f0, 0x98(r3)
    stfs f2, 0x7c(r3)
    stfs f0, 0x8c(r3)
    stfs f0, 0x9c(r3)
    stb r0, 0xc0(r3)
    stb r0, 0xc1(r3)
    sth r31, 0xc2(r3)
    sth r31, 0xc4(r3)
    stfs f0, 0xa4(r3)
    stw r31, 0xac(r3)
    stw r31, 0xa8(r3)
    bl fn_8020BE38
    addi r3, r30, 0x1c
    bl Init__Q44nw4r3snd6detail8LfoParamFv
    stb r31, 0x34(r30)
    stw r31, 0xd4(r30)
    stw r31, 0xd8(r30)
    stw r31, 0xdc(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Update__Q44nw4r3snd6detail7ChannelFb
// ----------------------------------------------------------------------------
extern "C" asm void Update__Q44nw4r3snd6detail7ChannelFb() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stfd f31, 0x120(r1)
    opword 0xF3E10128
    stfd f30, 0x110(r1)
    opword 0xF3C10118
    stfd f29, 0x100(r1)
    opword 0xF3A10108
    stfd f28, 0xf0(r1)
    opword 0xF38100F8
    stfd f27, 0xe0(r1)
    opword 0xF36100E8
    stfd f26, 0xd0(r1)
    opword 0xF34100D8
    stfd f25, 0xc0(r1)
    opword 0xF32100C8
    stfd f24, 0xb0(r1)
    opword 0xF30100B8
    stfd f23, 0xa0(r1)
    opword 0xF2E100A8
    stfd f22, 0x90(r1)
    opword 0xF2C10098
    stfd f21, 0x80(r1)
    opword 0xF2A10088
    stfd f20, 0x70(r1)
    opword 0xF2810078
    lis r5, 0x4330
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    lbz r0, 0x36(r3)
    stw r5, 0x48(r1)
    cmpwi r0, 0x0
    stw r5, 0x50(r1)
    beq lbl_8020AD3C
    lbz r0, 0x35(r3)
    cmpwi r0, 0x0
    beq lbl_8020A6BC
    li r31, 0x0
lbl_8020A6BC:
    addi r3, r3, 0x1c
    bl GetValue__Q44nw4r3snd6detail3LfoCFv
    lhz r3, 0xc4(r30)
    fmr f31, f1
    lhz r0, 0xc2(r30)
    cmplw r3, r0
    bge lbl_8020A6E0
    addi r0, r3, 0x1
    sth r0, 0xc4(r30)
lbl_8020A6E0:
    lfs f30, lbl_804A206C
    lfs f1, 0xb0(r30)
    lfs f0, 0x40(r30)
    fmuls f30, f30, f1
    lhz r4, 0xc2(r30)
    lhz r3, 0xc4(r30)
    cmplw r3, r4
    fmuls f30, f30, f0
    blt lbl_8020A70C
    lbz r0, 0xc1(r30)
    b lbl_8020A728
lbl_8020A70C:
    lbz r5, 0xc0(r30)
    lbz r0, 0xc1(r30)
    subf r0, r5, r0
    mullw r0, r3, r0
    divw r0, r0, r4
    add r0, r5, r0
    clrlwi r0, r0, 24
lbl_8020A728:
    stw r0, 0x4c(r1)
    mr r3, r30
    lfd f2, lbl_804A2080
    lfd f1, 0x48(r1)
    lfs f0, lbl_804A2070
    fsubs f1, f1, f2
    lfs f29, lbl_804A206C
    fdivs f0, f1, f0
    fmuls f30, f30, f0
    bl fn_8020BE90
    bl CalcVolumeRatio__Q44nw4r3snd6detail4UtilFf
    lbz r0, 0x34(r30)
    fmuls f29, f29, f1
    cmplwi r0, 0x1
    bne lbl_8020A774
    lfs f0, lbl_804A2074
    fmuls f1, f0, f31
    bl CalcVolumeRatio__Q44nw4r3snd6detail4UtilFf
    fmuls f29, f29, f1
lbl_8020A774:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x4
    bne lbl_8020A9A0
    lwz r0, 0xe0(r30)
    cmpwi r0, 0x0
    beq lbl_8020A894
    lfs f0, lbl_804A2068
    fcmpu cr0, f0, f29
    bne lbl_8020A9A0
    lwz r3, 0xf0(r30)
    cmpwi r3, 0x0
    beq lbl_8020AD3C
    bl Stop__Q44nw4r3snd6detail5VoiceFv
    lwz r3, 0xf0(r30)
    bl Free__Q44nw4r3snd6detail5VoiceFv
    lwz r12, 0xe0(r30)
    li r0, 0x0
    stw r0, 0xf0(r30)
    cmpwi r12, 0x0
    stb r0, 0x35(r30)
    stb r0, 0x36(r30)
    beq lbl_8020A7E0
    mr r3, r30
    lwz r5, 0xe4(r30)
    li r4, 0x0
    mtctr r12
    bctrl
lbl_8020A7E0:
    lwz r3, 0xe8(r30)
    cmpwi r3, 0x0
    beq lbl_8020A800
    lwz r12, 0x0(r3)
    lwz r4, 0xec(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_8020A800:
    lbz r0, 0x37(r30)
    cmpwi r0, 0x0
    beq lbl_8020AD3C
    li r7, 0x0
    stb r7, 0x37(r30)
    lbz r0, lbl_8049DA38
    extsb. r0, r0
    bne lbl_8020A868
    lis r6, lbl_804040B0@ha
    lis r4, __dt__Q44nw4r3snd6detail14ChannelManagerFv@ha
    addi r3, r6, lbl_804040B0@l
    lis r5, lbl_804040A0@ha
    stw r7, 0x8(r3)
    addi r8, r3, 0x8
    addi r4, r4, __dt__Q44nw4r3snd6detail14ChannelManagerFv@l
    addi r5, r5, lbl_804040A0@l
    stw r7, 0xc(r3)
    stw r7, lbl_804040B0@l(r6)
    stw r7, 0x4(r3)
    stw r8, 0x8(r3)
    stw r8, 0xc(r3)
    stb r7, 0x10(r3)
    stw r7, 0x14(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA38
lbl_8020A868:
    lis r31, lbl_804040B0@ha
    addi r4, r30, 0xf8
    addi r31, r31, lbl_804040B0@l
    addi r3, r31, 0x4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    cmpwi r30, 0x0
    beq lbl_8020AD3C
    mr r3, r31
    mr r4, r30
    bl FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
    b lbl_8020AD3C
lbl_8020A894:
    fmuls f0, f30, f29
    lfs f1, lbl_804A2068
    fcmpu cr0, f1, f0
    bne lbl_8020A9A0
    lwz r3, 0xf0(r30)
    cmpwi r3, 0x0
    beq lbl_8020AD3C
    bl Stop__Q44nw4r3snd6detail5VoiceFv
    lwz r3, 0xf0(r30)
    bl Free__Q44nw4r3snd6detail5VoiceFv
    lwz r12, 0xe0(r30)
    li r0, 0x0
    stw r0, 0xf0(r30)
    cmpwi r12, 0x0
    stb r0, 0x35(r30)
    stb r0, 0x36(r30)
    beq lbl_8020A8EC
    mr r3, r30
    lwz r5, 0xe4(r30)
    li r4, 0x0
    mtctr r12
    bctrl
lbl_8020A8EC:
    lwz r3, 0xe8(r30)
    cmpwi r3, 0x0
    beq lbl_8020A90C
    lwz r12, 0x0(r3)
    lwz r4, 0xec(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_8020A90C:
    lbz r0, 0x37(r30)
    cmpwi r0, 0x0
    beq lbl_8020AD3C
    li r7, 0x0
    stb r7, 0x37(r30)
    lbz r0, lbl_8049DA38
    extsb. r0, r0
    bne lbl_8020A974
    lis r6, lbl_804040B0@ha
    lis r4, __dt__Q44nw4r3snd6detail14ChannelManagerFv@ha
    addi r3, r6, lbl_804040B0@l
    lis r5, lbl_804040A0@ha
    stw r7, 0x8(r3)
    addi r8, r3, 0x8
    addi r4, r4, __dt__Q44nw4r3snd6detail14ChannelManagerFv@l
    addi r5, r5, lbl_804040A0@l
    stw r7, 0xc(r3)
    stw r7, lbl_804040B0@l(r6)
    stw r7, 0x4(r3)
    stw r8, 0x8(r3)
    stw r8, 0xc(r3)
    stb r7, 0x10(r3)
    stw r7, 0x14(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA38
lbl_8020A974:
    lis r31, lbl_804040B0@ha
    addi r4, r30, 0xf8
    addi r31, r31, lbl_804040B0@l
    addi r3, r31, 0x4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    cmpwi r30, 0x0
    beq lbl_8020AD3C
    mr r3, r31
    mr r4, r30
    bl FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
    b lbl_8020AD3C
lbl_8020A9A0:
    lwz r3, 0xcc(r30)
    lwz r0, 0xc8(r30)
    lfd f3, lbl_804A2088
    subf r0, r3, r0
    lfs f4, lbl_804A2068
    xoris r0, r0, 0x8000
    lfs f1, lbl_804A2068
    stw r0, 0x54(r1)
    lfs f2, 0xa4(r30)
    lfd f0, 0x50(r1)
    fcmpu cr0, f1, f2
    fsubs f0, f0, f3
    fadds f4, f4, f0
    bne lbl_8020A9DC
    b lbl_8020AA1C
lbl_8020A9DC:
    lwz r0, 0xa8(r30)
    lwz r4, 0xac(r30)
    cmpw r0, r4
    blt lbl_8020A9F0
    b lbl_8020AA1C
lbl_8020A9F0:
    subf r3, r0, r4
    xoris r0, r4, 0x8000
    xoris r3, r3, 0x8000
    stw r0, 0x54(r1)
    stw r3, 0x4c(r1)
    lfd f0, 0x50(r1)
    lfd f1, 0x48(r1)
    fsubs f0, f0, f3
    fsubs f1, f1, f3
    fmuls f1, f2, f1
    fdivs f1, f1, f0
lbl_8020AA1C:
    fadds f4, f4, f1
    lfs f0, 0xa0(r30)
    lbz r0, 0x34(r30)
    cmpwi r0, 0x0
    fadds f4, f4, f0
    bne lbl_8020AA38
    fadds f4, f4, f31
lbl_8020AA38:
    lfs f0, lbl_804A2078
    lfs f20, lbl_804A206C
    fmuls f0, f0, f4
    lfs f2, 0xbc(r30)
    lfs f1, 0x44(r30)
    fmuls f20, f20, f2
    fctiwz f0, f0
    fmuls f20, f20, f1
    stfd f0, 0x58(r1)
    lwz r3, 0x5c(r1)
    bl CalcPitchRatio__Q44nw4r3snd6detail4UtilFi
    lfs f27, lbl_804A2068
    fmuls f28, f1, f20
    lfs f0, 0xb4(r30)
    lbz r0, 0x34(r30)
    fadds f27, f27, f0
    lfs f0, 0x48(r30)
    cmplwi r0, 0x2
    fadds f27, f27, f0
    bne lbl_8020AA8C
    fadds f27, f27, f31
lbl_8020AA8C:
    lfs f31, lbl_804A2068
    cmpwi r31, 0x0
    lfs f0, 0xb8(r30)
    fmr f8, f31
    lfs f4, lbl_804A206C
    lfs f2, 0x64(r30)
    fadds f31, f31, f0
    lfs f1, 0x68(r30)
    fmr f26, f4
    lfs f0, 0x6c(r30)
    fadds f7, f8, f2
    lfs f10, 0x84(r30)
    fadds f6, f8, f1
    lfs f9, 0x94(r30)
    fadds f5, f8, f0
    fadds f21, f8, f10
    fadds f22, f8, f9
    lfs f3, 0x70(r30)
    lfs f2, 0x80(r30)
    fmr f25, f4
    lfs f1, 0x90(r30)
    lfs f0, 0x74(r30)
    lfs f23, 0x78(r30)
    fadds f2, f8, f2
    lfs f13, 0x88(r30)
    fadds f1, f8, f1
    lfs f12, 0x98(r30)
    fmuls f0, f4, f0
    lfs f11, 0x7c(r30)
    lfs f10, 0x8c(r30)
    fmuls f23, f4, f23
    lfs f24, 0x50(r30)
    fadds f13, f8, f13
    lfs f20, 0x4c(r30)
    fadds f12, f8, f12
    stfs f8, 0x38(r1)
    fmuls f11, f4, f11
    lfs f9, 0x9c(r30)
    stfs f8, 0x3c(r1)
    fadds f10, f8, f10
    fadds f26, f26, f24
    lfs f24, lbl_804A2068
    stfs f8, 0x40(r1)
    fadds f8, f8, f9
    lfs f9, 0x5c(r30)
    fmuls f3, f4, f3
    stfs f4, 0x28(r1)
    fadds f31, f31, f20
    lfs f4, 0x60(r30)
    fmuls f25, f25, f9
    lbz r29, 0x3c(r30)
    fadds f24, f24, f4
    stfs f7, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f3, 0x28(r1)
    stfs f2, 0x18(r1)
    stfs f1, 0x8(r1)
    stfs f0, 0x2c(r1)
    stfs f21, 0x1c(r1)
    stfs f22, 0xc(r1)
    stfs f23, 0x30(r1)
    stfs f13, 0x20(r1)
    stfs f12, 0x10(r1)
    stfs f11, 0x34(r1)
    stfs f10, 0x24(r1)
    stfs f8, 0x14(r1)
    beq lbl_8020ABDC
    lbz r0, 0x38(r30)
    cmpwi r0, 0x0
    beq lbl_8020ABC4
    lwz r3, 0xa8(r30)
    lwz r4, 0xac(r30)
    addi r0, r3, 0x3
    cmpw r0, r4
    stw r0, 0xa8(r30)
    ble lbl_8020ABC4
    stw r4, 0xa8(r30)
lbl_8020ABC4:
    addi r3, r30, 0x1c
    li r4, 0x3
    bl Update__Q44nw4r3snd6detail3LfoFi
    mr r3, r30
    li r4, 0x3
    bl fn_8020BEBC
lbl_8020ABDC:
    addi r3, r30, 0x1c
    bl GetValue__Q44nw4r3snd6detail3LfoCFv
    fmr f23, f1
    lfs f20, lbl_804A206C
    mr r3, r30
    bl fn_8020BE90
    bl CalcVolumeRatio__Q44nw4r3snd6detail4UtilFf
    lbz r0, 0x34(r30)
    fmuls f20, f20, f1
    cmplwi r0, 0x1
    bne lbl_8020AC18
    lfs f0, lbl_804A2074
    fmuls f1, f0, f23
    bl CalcVolumeRatio__Q44nw4r3snd6detail4UtilFf
    fmuls f20, f20, f1
lbl_8020AC18:
    lwz r3, 0xf0(r30)
    cmpwi r3, 0x0
    beq lbl_8020AD3C
    lwz r4, 0xd4(r30)
    bl SetPanMode__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd7PanMode
    lwz r3, 0xf0(r30)
    lwz r4, 0xd8(r30)
    bl SetPanCurve__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd8PanCurve
    fmr f1, f30
    lwz r3, 0xf0(r30)
    bl SetVolume__Q44nw4r3snd6detail5VoiceFf
    fmr f1, f20
    lwz r3, 0xf0(r30)
    fmr f2, f29
    bl SetVeVolume__Q44nw4r3snd6detail5VoiceFff
    fmr f1, f28
    lwz r3, 0xf0(r30)
    bl SetPitch__Q44nw4r3snd6detail5VoiceFf
    fmr f1, f27
    lwz r3, 0xf0(r30)
    bl SetPan__Q44nw4r3snd6detail5VoiceFf
    fmr f1, f31
    lwz r3, 0xf0(r30)
    bl SetSurroundPan__Q44nw4r3snd6detail5VoiceFf
    fmr f1, f26
    lwz r3, 0xf0(r30)
    bl SetLpfFreq__Q44nw4r3snd6detail5VoiceFf
    lwz r3, 0xf0(r30)
    lbz r4, 0x3b(r30)
    lfs f1, 0x54(r30)
    bl SetBiquadFilter__Q44nw4r3snd6detail5VoiceFif
    lwz r3, 0xf0(r30)
    mr r4, r29
    bl SetRemoteFilter__Q44nw4r3snd6detail5VoiceFi
    lwz r3, 0xf0(r30)
    lwz r4, 0x58(r30)
    bl SetOutputLine__Q44nw4r3snd6detail5VoiceFi
    fmr f1, f25
    lwz r3, 0xf0(r30)
    bl SetMainOutVolume__Q44nw4r3snd6detail5VoiceFf
    fmr f1, f24
    lwz r3, 0xf0(r30)
    bl SetMainSend__Q44nw4r3snd6detail5VoiceFf
    addi r29, r1, 0x38
    li r31, 0x0
lbl_8020ACCC:
    lwz r3, 0xf0(r30)
    mr r4, r31
    lfs f1, 0x0(r29)
    bl SetFxSend__Q44nw4r3snd6detail5VoiceFQ34nw4r3snd6AuxBusf
    addi r31, r31, 0x1
    addi r29, r29, 0x4
    cmpwi r31, 0x3
    blt lbl_8020ACCC
    addi r31, r1, 0x28
    addi r29, r1, 0x18
    li r28, 0x0
lbl_8020ACF8:
    lwz r3, 0xf0(r30)
    mr r4, r28
    lfs f1, 0x0(r31)
    bl SetRemoteOutVolume__Q44nw4r3snd6detail5VoiceFif
    lwz r3, 0xf0(r30)
    mr r4, r28
    lfs f1, 0x0(r29)
    bl SetRemoteSend__Q44nw4r3snd6detail5VoiceFif
    lwz r3, 0xf0(r30)
    mr r4, r28
    lfs f1, 0x0(r29)
    bl SetRemoteFxSend__Q44nw4r3snd6detail5VoiceFif
    addi r28, r28, 0x1
    addi r29, r29, 0x4
    cmpwi r28, 0x4
    addi r31, r31, 0x4
    blt lbl_8020ACF8
lbl_8020AD3C:
    opword 0xE3E10128
    lfd f31, 0x120(r1)
    opword 0xE3C10118
    lfd f30, 0x110(r1)
    opword 0xE3A10108
    lfd f29, 0x100(r1)
    opword 0xE38100F8
    lfd f28, 0xf0(r1)
    opword 0xE36100E8
    lfd f27, 0xe0(r1)
    opword 0xE34100D8
    lfd f26, 0xd0(r1)
    opword 0xE32100C8
    lfd f25, 0xc0(r1)
    opword 0xE30100B8
    lfd f24, 0xb0(r1)
    opword 0xE2E100A8
    lfd f23, 0xa0(r1)
    opword 0xE2C10098
    lfd f22, 0x90(r1)
    opword 0xE2A10088
    lfd f21, 0x80(r1)
    opword 0xE2810078
    lfd f20, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r0, 0x134(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// ----------------------------------------------------------------------------
// Start__Q44nw4r3snd6detail7ChannelFRCQ44nw4r3snd6detail8WaveInfoiUl
// ----------------------------------------------------------------------------
extern "C" asm void Start__Q44nw4r3snd6detail7ChannelFRCQ44nw4r3snd6detail8WaveInfoiUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r5, 0xd0(r3)
    addi r3, r3, 0x1c
    bl Reset__Q44nw4r3snd6detail3LfoFv
    lfs f1, lbl_804A2090
    mr r3, r29
    bl fn_8020BE78
    li r0, 0x0
    lwz r3, 0xf0(r29)
    stw r0, 0xa8(r29)
    mr r4, r30
    mr r5, r31
    bl Setup__Q44nw4r3snd6detail5VoiceFRCQ44nw4r3snd6detail8WaveInfoUl
    lwz r3, 0xf0(r29)
    bl Start__Q44nw4r3snd6detail5VoiceFv
    li r0, 0x1
    stb r0, 0x36(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Release__Q44nw4r3snd6detail7ChannelFv
// ----------------------------------------------------------------------------
extern "C" asm void Release__Q44nw4r3snd6detail7ChannelFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    beq lbl_8020AE88
    lwz r4, 0xf0(r3)
    cmpwi r4, 0x0
    beq lbl_8020AE80
    lbz r0, 0x39(r3)
    cmpwi r0, 0x0
    bne lbl_8020AE80
    mr r3, r4
    li r4, 0x1
    bl SetPriority__Q44nw4r3snd6detail5VoiceFi
lbl_8020AE80:
    li r0, 0x4
    stw r0, 0x0(r31)
lbl_8020AE88:
    li r0, 0x0
    stb r0, 0x35(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// NoteOff__Q44nw4r3snd6detail7ChannelFv
// ----------------------------------------------------------------------------
extern "C" asm void NoteOff__Q44nw4r3snd6detail7ChannelFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x3a(r3)
    cmpwi r0, 0x0
    bne lbl_8020AF04
    lwz r0, 0x0(r3)
    cmpwi r0, 0x4
    beq lbl_8020AEFC
    lwz r4, 0xf0(r3)
    cmpwi r4, 0x0
    beq lbl_8020AEF4
    lbz r0, 0x39(r3)
    cmpwi r0, 0x0
    bne lbl_8020AEF4
    mr r3, r4
    li r4, 0x1
    bl SetPriority__Q44nw4r3snd6detail5VoiceFi
lbl_8020AEF4:
    li r0, 0x4
    stw r0, 0x0(r31)
lbl_8020AEFC:
    li r0, 0x0
    stb r0, 0x35(r31)
lbl_8020AF04:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Stop__Q44nw4r3snd6detail7ChannelFv
// ----------------------------------------------------------------------------
extern "C" asm void Stop__Q44nw4r3snd6detail7ChannelFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_8020B02C
    mr r3, r0
    bl Stop__Q44nw4r3snd6detail5VoiceFv
    lwz r3, 0xf0(r30)
    bl Free__Q44nw4r3snd6detail5VoiceFv
    lwz r12, 0xe0(r30)
    li r0, 0x0
    stw r0, 0xf0(r30)
    cmpwi r12, 0x0
    stb r0, 0x35(r30)
    stb r0, 0x36(r30)
    beq lbl_8020AF7C
    mr r3, r30
    lwz r5, 0xe4(r30)
    li r4, 0x0
    mtctr r12
    bctrl
lbl_8020AF7C:
    lwz r3, 0xe8(r30)
    cmpwi r3, 0x0
    beq lbl_8020AF9C
    lwz r12, 0x0(r3)
    lwz r4, 0xec(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_8020AF9C:
    lbz r0, 0x37(r30)
    cmpwi r0, 0x0
    beq lbl_8020B02C
    li r7, 0x0
    stb r7, 0x37(r30)
    lbz r0, lbl_8049DA38
    extsb. r0, r0
    bne lbl_8020B004
    lis r6, lbl_804040B0@ha
    lis r4, __dt__Q44nw4r3snd6detail14ChannelManagerFv@ha
    addi r3, r6, lbl_804040B0@l
    lis r5, lbl_804040A0@ha
    stw r7, 0x8(r3)
    addi r8, r3, 0x8
    addi r4, r4, __dt__Q44nw4r3snd6detail14ChannelManagerFv@l
    addi r5, r5, lbl_804040A0@l
    stw r7, 0xc(r3)
    stw r7, lbl_804040B0@l(r6)
    stw r7, 0x4(r3)
    stw r8, 0x8(r3)
    stw r8, 0xc(r3)
    stb r7, 0x10(r3)
    stw r7, 0x14(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA38
lbl_8020B004:
    lis r31, lbl_804040B0@ha
    addi r4, r30, 0xf8
    addi r31, r31, lbl_804040B0@l
    addi r3, r31, 0x4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    cmpwi r30, 0x0
    beq lbl_8020B02C
    mr r3, r31
    mr r4, r30
    bl FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
lbl_8020B02C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// UpdateSweep__Q44nw4r3snd6detail7ChannelFi
// ----------------------------------------------------------------------------
extern "C" asm void UpdateSweep__Q44nw4r3snd6detail7ChannelFi() {
    nofralloc
    lwz r0, 0xa8(r3)
    lwz r5, 0xac(r3)
    add r0, r0, r4
    cmpw r0, r5
    stw r0, 0xa8(r3)
    blelr
    stw r5, 0xa8(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetSweepParam__Q44nw4r3snd6detail7ChannelFfib
// ----------------------------------------------------------------------------
extern "C" asm void SetSweepParam__Q44nw4r3snd6detail7ChannelFfib() {
    nofralloc
    li r0, 0x0
    stfs f1, 0xa4(r3)
    stw r4, 0xac(r3)
    stb r5, 0x38(r3)
    stw r0, 0xa8(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetBiquadFilter__Q44nw4r3snd6detail7ChannelFif
// ----------------------------------------------------------------------------
extern "C" asm void SetBiquadFilter__Q44nw4r3snd6detail7ChannelFif() {
    nofralloc
    stb r4, 0x3b(r3)
    stfs f1, 0x54(r3)
    blr
}

// ----------------------------------------------------------------------------
// VoiceCallbackFunc__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv
// ----------------------------------------------------------------------------
extern "C" asm void VoiceCallbackFunc__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x2
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r5
    beq lbl_8020B0E0
    bge lbl_8020B0BC
    cmpwi r4, 0x0
    beq lbl_8020B0C8
    bge lbl_8020B0D4
    b lbl_8020B0EC
lbl_8020B0BC:
    cmpwi r4, 0x4
    bge lbl_8020B0EC
    b lbl_8020B0E8
lbl_8020B0C8:
    li r31, 0x2
    bl Free__Q44nw4r3snd6detail5VoiceFv
    b lbl_8020B0EC
lbl_8020B0D4:
    li r31, 0x3
    bl Free__Q44nw4r3snd6detail5VoiceFv
    b lbl_8020B0EC
lbl_8020B0E0:
    li r31, 0x1
    b lbl_8020B0EC
lbl_8020B0E8:
    li r31, 0x1
lbl_8020B0EC:
    lwz r12, 0xe0(r30)
    cmpwi r12, 0x0
    beq lbl_8020B10C
    mr r3, r30
    mr r4, r31
    lwz r5, 0xe4(r30)
    mtctr r12
    bctrl
lbl_8020B10C:
    lwz r3, 0xe8(r30)
    cmpwi r3, 0x0
    beq lbl_8020B12C
    lwz r12, 0x0(r3)
    lwz r4, 0xec(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_8020B12C:
    li r7, 0x0
    stw r7, 0xf0(r30)
    stb r7, 0x35(r30)
    stb r7, 0x36(r30)
    stb r7, 0x37(r30)
    lbz r0, lbl_8049DA38
    extsb. r0, r0
    bne lbl_8020B194
    lis r6, lbl_804040B0@ha
    lis r4, __dt__Q44nw4r3snd6detail14ChannelManagerFv@ha
    addi r3, r6, lbl_804040B0@l
    lis r5, lbl_804040A0@ha
    stw r7, 0x8(r3)
    addi r8, r3, 0x8
    addi r4, r4, __dt__Q44nw4r3snd6detail14ChannelManagerFv@l
    addi r5, r5, lbl_804040A0@l
    stw r7, 0xc(r3)
    stw r7, lbl_804040B0@l(r6)
    stw r7, 0x4(r3)
    stw r8, 0x8(r3)
    stw r8, 0xc(r3)
    stb r7, 0x10(r3)
    stw r7, 0x14(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA38
lbl_8020B194:
    lis r31, lbl_804040B0@ha
    addi r4, r30, 0xf8
    addi r31, r31, lbl_804040B0@l
    addi r3, r31, 0x4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    cmpwi r30, 0x0
    beq lbl_8020B1BC
    mr r3, r31
    mr r4, r30
    bl FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
lbl_8020B1BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// AllocChannel__Q44nw4r3snd6detail7ChannelFiiiPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl
// ----------------------------------------------------------------------------
extern "C" asm void AllocChannel__Q44nw4r3snd6detail7ChannelFiiiPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lbz r0, lbl_8049DA38
    mr r24, r3
    mr r25, r4
    mr r26, r5
    extsb. r0, r0
    mr r27, r6
    mr r28, r7
    bne lbl_8020B254
    lis r6, lbl_804040B0@ha
    li r0, 0x0
    addi r3, r6, lbl_804040B0@l
    lis r4, __dt__Q44nw4r3snd6detail14ChannelManagerFv@ha
    stw r0, 0x8(r3)
    addi r7, r3, 0x8
    lis r5, lbl_804040A0@ha
    addi r4, r4, __dt__Q44nw4r3snd6detail14ChannelManagerFv@l
    stw r0, 0xc(r3)
    addi r5, r5, lbl_804040A0@l
    stw r0, lbl_804040B0@l(r6)
    stw r0, 0x4(r3)
    stw r7, 0x8(r3)
    stw r7, 0xc(r3)
    stb r0, 0x10(r3)
    stw r0, 0x14(r3)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA38
lbl_8020B254:
    lis r31, lbl_804040B0@ha
    addi r31, r31, lbl_804040B0@l
    mr r3, r31
    bl AllocImpl__Q44nw4r3snd6detail8PoolImplFv
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8020B278
    li r30, 0x0
    b lbl_8020B2C0
lbl_8020B278:
    beq lbl_8020B2C0
    bl fn_8020BDF4
    addi r3, r30, 0x1c
    bl Init__Q44nw4r3snd6detail8LfoParamFv
    li r0, 0x0
    lfs f0, lbl_804A2068
    stw r0, 0x2c(r30)
    stfs f0, 0x30(r30)
    stb r0, 0x35(r30)
    stb r0, 0x36(r30)
    stb r0, 0x37(r30)
    stb r0, 0xc0(r30)
    stb r0, 0xc1(r30)
    sth r0, 0xc2(r30)
    sth r0, 0xc4(r30)
    stw r0, 0xf0(r30)
    stw r0, 0xf8(r30)
    stw r0, 0xfc(r30)
lbl_8020B2C0:
    addi r0, r31, 0x8
    addi r29, r30, 0xf8
    stw r0, 0x8(r1)
    mr r5, r29
    addi r3, r31, 0x4
    addi r4, r1, 0x8
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    cmpwi r30, 0x0
    bne lbl_8020B2EC
    li r3, 0x0
    b lbl_8020B3B8
lbl_8020B2EC:
    li r31, 0x1
    stb r31, 0x37(r30)
    bl GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
    lis r7, VoiceCallbackFunc__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv@ha
    mr r4, r24
    mr r5, r25
    mr r6, r26
    mr r8, r30
    addi r7, r7, VoiceCallbackFunc__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv@l
    bl AllocVoice__Q44nw4r3snd6detail12VoiceManagerFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv
    cmpwi r3, 0x0
    bne lbl_8020B3A0
    lbz r0, lbl_8049DA38
    extsb. r0, r0
    bne lbl_8020B370
    lis r6, lbl_804040B0@ha
    li r0, 0x0
    addi r3, r6, lbl_804040B0@l
    lis r4, __dt__Q44nw4r3snd6detail14ChannelManagerFv@ha
    stw r0, 0x8(r3)
    addi r7, r3, 0x8
    lis r5, lbl_804040A0@ha
    addi r4, r4, __dt__Q44nw4r3snd6detail14ChannelManagerFv@l
    stw r0, 0xc(r3)
    addi r5, r5, lbl_804040A0@l
    stw r0, lbl_804040B0@l(r6)
    stw r0, 0x4(r3)
    stw r7, 0x8(r3)
    stw r7, 0xc(r3)
    stb r0, 0x10(r3)
    stw r0, 0x14(r3)
    bl __register_global_object
    stb r31, lbl_8049DA38
lbl_8020B370:
    lis r31, lbl_804040B0@ha
    mr r4, r29
    addi r31, r31, lbl_804040B0@l
    addi r3, r31, 0x4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    cmpwi r30, 0x0
    beq lbl_8020B398
    mr r3, r31
    mr r4, r30
    bl FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
lbl_8020B398:
    li r3, 0x0
    b lbl_8020B3B8
lbl_8020B3A0:
    stw r3, 0xf0(r30)
    mr r3, r30
    mr r4, r27
    mr r5, r28
    bl InitParam__Q44nw4r3snd6detail7ChannelFPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl
    mr r3, r30
lbl_8020B3B8:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
// ----------------------------------------------------------------------------
extern "C" asm void FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0xe0(r3)
    stw r0, 0xe4(r3)
    blr
}

