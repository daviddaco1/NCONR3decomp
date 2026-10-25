#include "types.h"

// Translation unit: src/nw4r/snd/snd_BasicPlayer.cpp
// Total functions: 12

// Small Data symbols (@sda21)
extern "C" float lbl_804A2040;
extern "C" float lbl_804A2044;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80362380[];

// Forward declarations
extern "C" void GetFxSend__Q44nw4r3snd6detail11BasicPlayerCFQ34nw4r3snd6AuxBus();
extern "C" void GetRemoteFxSend__Q44nw4r3snd6detail11BasicPlayerCFi();
extern "C" void GetRemoteOutVolume__Q44nw4r3snd6detail11BasicPlayerCFi();
extern "C" void GetRemoteSend__Q44nw4r3snd6detail11BasicPlayerCFi();
extern "C" void InitParam__Q44nw4r3snd6detail11BasicPlayerFv();
extern "C" void Init__Q44nw4r3snd6detail14PlayerParamSetFv();
extern "C" void SetBiquadFilter__Q44nw4r3snd6detail11BasicPlayerFif();
extern "C" void SetFxSend__Q44nw4r3snd6detail11BasicPlayerFQ34nw4r3snd6AuxBusf();
extern "C" void SetRemoteFilter__Q44nw4r3snd6detail11BasicPlayerFi();
extern "C" void SetRemoteOutVolume__Q44nw4r3snd6detail11BasicPlayerFif();
extern "C" void __ct__Q44nw4r3snd6detail11BasicPlayerFv();
extern "C" void __dt__Q44nw4r3snd6detail11BasicPlayerFv();
extern "C" void dtor_80136CFC();

// ----------------------------------------------------------------------------
// Init__Q44nw4r3snd6detail14PlayerParamSetFv
// ----------------------------------------------------------------------------
extern "C" asm void Init__Q44nw4r3snd6detail14PlayerParamSetFv() {
    nofralloc
    lfs f0, lbl_804A2044
    li r4, 0x0
    lfs f1, lbl_804A2040
    li r0, 0x1
    stfs f0, 0x8(r3)
    stfs f1, 0x0(r3)
    stfs f1, 0x4(r3)
    stfs f0, 0xc(r3)
    stfs f0, 0x10(r3)
    stb r4, 0x18(r3)
    stfs f0, 0x14(r3)
    stb r4, 0x19(r3)
    stw r0, 0x1c(r3)
    stfs f1, 0x20(r3)
    stfs f0, 0x24(r3)
    stw r4, 0x28(r3)
    stw r4, 0x2c(r3)
    stfs f0, 0x30(r3)
    stfs f0, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f1, 0x3c(r3)
    stfs f0, 0x4c(r3)
    stfs f0, 0x5c(r3)
    stfs f1, 0x40(r3)
    stfs f0, 0x50(r3)
    stfs f0, 0x60(r3)
    stfs f1, 0x44(r3)
    stfs f0, 0x54(r3)
    stfs f0, 0x64(r3)
    stfs f1, 0x48(r3)
    stfs f0, 0x58(r3)
    stfs f0, 0x68(r3)
    stfs f1, 0x6c(r3)
    stfs f1, 0x70(r3)
    stfs f0, 0x74(r3)
    stfs f0, 0x78(r3)
    stfs f0, 0x7c(r3)
    stfs f0, 0x80(r3)
    stfs f1, 0x84(r3)
    stfs f1, 0x88(r3)
    stfs f0, 0x8c(r3)
    stfs f0, 0x90(r3)
    stfs f0, 0x94(r3)
    stfs f0, 0x98(r3)
    stfs f1, 0x9c(r3)
    stfs f1, 0xa0(r3)
    stfs f0, 0xa4(r3)
    stfs f0, 0xa8(r3)
    stfs f0, 0xac(r3)
    stfs f0, 0xb0(r3)
    stfs f1, 0xb4(r3)
    stfs f1, 0xb8(r3)
    stfs f0, 0xbc(r3)
    stfs f0, 0xc0(r3)
    stfs f0, 0xc4(r3)
    stfs f0, 0xc8(r3)
    blr
}

// ----------------------------------------------------------------------------
// __ct__Q44nw4r3snd6detail11BasicPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q44nw4r3snd6detail11BasicPlayerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80362380@ha
    lfs f0, lbl_804A2044
    stw r0, 0x14(r1)
    addi r6, r3, 0x88
    addi r5, r3, 0xd0
    lfs f1, lbl_804A2040
    stw r31, 0xc(r1)
    addi r4, r4, lbl_80362380@l
    cmplw r6, r5
    mr r31, r3
    stw r4, 0x0(r3)
    stfs f1, 0x70(r3)
    stfs f1, 0x74(r3)
    stfs f0, 0x78(r3)
    stfs f0, 0x7c(r3)
    stfs f0, 0x80(r3)
    stfs f0, 0x84(r3)
    bge lbl_802087BC
    addi r8, r3, 0x88
    lis r4, 0x2aab
    subf r9, r8, r5
    addi r7, r3, 0x10
    addi r10, r9, 0x17
    subi r0, r4, 0x5555
    mulhw r0, r0, r10
    srawi r0, r0, 2
    srwi r4, r0, 31
    add r11, r0, r4
    addi r12, r11, 0x1
    cmpwi r12, 0x8
    ble lbl_80208774
    cmplw r8, r5
    li r4, 0x0
    li r5, 0x0
    bgt lbl_80208650
    clrrwi. r0, r9, 31
    li r8, 0x1
    bne lbl_80208644
    clrrwi. r0, r10, 31
    beq lbl_80208644
    li r8, 0x0
lbl_80208644:
    cmpwi r8, 0x0
    beq lbl_80208650
    li r5, 0x1
lbl_80208650:
    cmpwi r5, 0x0
    beq lbl_80208680
    clrrwi. r8, r11, 31
    li r5, 0x1
    bne lbl_80208674
    clrrwi r0, r12, 31
    cmpw r8, r0
    beq lbl_80208674
    li r5, 0x0
lbl_80208674:
    cmpwi r5, 0x0
    beq lbl_80208680
    li r4, 0x1
lbl_80208680:
    cmpwi r4, 0x0
    beq lbl_80208774
    addi r4, r7, 0xbf
    li r0, 0xc0
    subf r4, r6, r4
    lfs f1, lbl_804A2040
    divwu r4, r4, r0
    lfs f0, lbl_804A2044
    mtctr r4
    cmplw r6, r7
    bge lbl_80208774
lbl_802086AC:
    stfs f1, 0x0(r6)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f0, 0x14(r6)
    stfs f1, 0x18(r6)
    stfs f1, 0x1c(r6)
    stfs f0, 0x20(r6)
    stfs f0, 0x24(r6)
    stfs f0, 0x28(r6)
    stfs f0, 0x2c(r6)
    stfs f1, 0x30(r6)
    stfs f1, 0x34(r6)
    stfs f0, 0x38(r6)
    stfs f0, 0x3c(r6)
    stfs f0, 0x40(r6)
    stfs f0, 0x44(r6)
    stfs f1, 0x48(r6)
    stfs f1, 0x4c(r6)
    stfs f0, 0x50(r6)
    stfs f0, 0x54(r6)
    stfs f0, 0x58(r6)
    stfs f0, 0x5c(r6)
    stfs f1, 0x60(r6)
    stfs f1, 0x64(r6)
    stfs f0, 0x68(r6)
    stfs f0, 0x6c(r6)
    stfs f0, 0x70(r6)
    stfs f0, 0x74(r6)
    stfs f1, 0x78(r6)
    stfs f1, 0x7c(r6)
    stfs f0, 0x80(r6)
    stfs f0, 0x84(r6)
    stfs f0, 0x88(r6)
    stfs f0, 0x8c(r6)
    stfs f1, 0x90(r6)
    stfs f1, 0x94(r6)
    stfs f0, 0x98(r6)
    stfs f0, 0x9c(r6)
    stfs f0, 0xa0(r6)
    stfs f0, 0xa4(r6)
    stfs f1, 0xa8(r6)
    stfs f1, 0xac(r6)
    stfs f0, 0xb0(r6)
    stfs f0, 0xb4(r6)
    stfs f0, 0xb8(r6)
    stfs f0, 0xbc(r6)
    addi r6, r6, 0xc0
    bdnz lbl_802086AC
lbl_80208774:
    addi r5, r3, 0xd0
    li r0, 0x18
    addi r4, r5, 0x17
    lfs f1, lbl_804A2040
    subf r4, r6, r4
    lfs f0, lbl_804A2044
    divwu r4, r4, r0
    mtctr r4
    cmplw r6, r5
    bge lbl_802087BC
lbl_8020879C:
    stfs f1, 0x0(r6)
    stfs f1, 0x4(r6)
    stfs f0, 0x8(r6)
    stfs f0, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f0, 0x14(r6)
    addi r6, r6, 0x18
    bdnz lbl_8020879C
lbl_802087BC:
    addi r3, r3, 0x4
    bl Init__Q44nw4r3snd6detail14PlayerParamSetFv
    li r0, -0x1
    addi r3, r31, 0x4
    stw r0, 0xd0(r31)
    bl Init__Q44nw4r3snd6detail14PlayerParamSetFv
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// InitParam__Q44nw4r3snd6detail11BasicPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void InitParam__Q44nw4r3snd6detail11BasicPlayerFv() {
    nofralloc
    addi r3, r3, 0x4
    b Init__Q44nw4r3snd6detail14PlayerParamSetFv
}

// ----------------------------------------------------------------------------
// SetFxSend__Q44nw4r3snd6detail11BasicPlayerFQ34nw4r3snd6AuxBusf
// ----------------------------------------------------------------------------
extern "C" asm void SetFxSend__Q44nw4r3snd6detail11BasicPlayerFQ34nw4r3snd6AuxBusf() {
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    stfs f1, 0x34(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetFxSend__Q44nw4r3snd6detail11BasicPlayerCFQ34nw4r3snd6AuxBus
// ----------------------------------------------------------------------------
extern "C" asm void GetFxSend__Q44nw4r3snd6detail11BasicPlayerCFQ34nw4r3snd6AuxBus() {
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    lfs f1, 0x34(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetBiquadFilter__Q44nw4r3snd6detail11BasicPlayerFif
// ----------------------------------------------------------------------------
extern "C" asm void SetBiquadFilter__Q44nw4r3snd6detail11BasicPlayerFif() {
    nofralloc
    stb r4, 0x1c(r3)
    stfs f1, 0x18(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetRemoteFilter__Q44nw4r3snd6detail11BasicPlayerFi
// ----------------------------------------------------------------------------
extern "C" asm void SetRemoteFilter__Q44nw4r3snd6detail11BasicPlayerFi() {
    nofralloc
    stb r4, 0x1d(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetRemoteOutVolume__Q44nw4r3snd6detail11BasicPlayerFif
// ----------------------------------------------------------------------------
extern "C" asm void SetRemoteOutVolume__Q44nw4r3snd6detail11BasicPlayerFif() {
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    stfs f1, 0x40(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetRemoteOutVolume__Q44nw4r3snd6detail11BasicPlayerCFi
// ----------------------------------------------------------------------------
extern "C" asm void GetRemoteOutVolume__Q44nw4r3snd6detail11BasicPlayerCFi() {
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    lfs f1, 0x40(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetRemoteSend__Q44nw4r3snd6detail11BasicPlayerCFi
// ----------------------------------------------------------------------------
extern "C" asm void GetRemoteSend__Q44nw4r3snd6detail11BasicPlayerCFi() {
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    lfs f1, 0x50(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetRemoteFxSend__Q44nw4r3snd6detail11BasicPlayerCFi
// ----------------------------------------------------------------------------
extern "C" asm void GetRemoteFxSend__Q44nw4r3snd6detail11BasicPlayerCFi() {
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    lfs f1, 0x60(r3)
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail11BasicPlayerFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail11BasicPlayerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_80208890
    cmpwi r4, 0x0
    ble lbl_80208890
    bl dtor_80136CFC
lbl_80208890:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

