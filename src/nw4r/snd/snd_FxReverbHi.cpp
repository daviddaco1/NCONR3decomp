#include "types.h"

// Translation unit: src/nw4r/snd/snd_FxReverbHi.cpp
// Total functions: 7

// Small Data symbols (@sda21)
extern "C" float lbl_804A20E0;
extern "C" float lbl_804A20E4;
extern "C" float lbl_804A20E8;
extern "C" float lbl_804A20EC;
extern "C" float lbl_804A20F0;
extern "C" float lbl_804A20F4;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_803624E0[];

// Forward declarations
extern "C" void AssignWorkBuffer__Q34nw4r3snd10FxReverbHiFPvUl();
extern "C" void CreateHeap__Q44nw4r3snd6detail8AxfxImplFPvUl();
extern "C" void DestroyHeap__Q44nw4r3snd6detail8AxfxImplFv();
extern "C" void GetRequiredMemSize__Q34nw4r3snd10FxReverbHiFv();
extern "C" void HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v();
extern "C" void ReleaseWorkBuffer__Q34nw4r3snd10FxReverbHiFv();
extern "C" void RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v();
extern "C" void SetParam__Q34nw4r3snd10FxReverbHiFRCQ44nw4r3snd10FxReverbHi13ReverbHiParam();
extern "C" void __ct__Q34nw4r3snd10FxReverbHiFv();
extern "C" void fn_8020D184();
extern "C" void fn_8020D238();
extern "C" void fn_8029FEDC();
extern "C" void fn_8029FF04();
extern "C" void fn_802A01C8();
extern "C" void fn_802A0348();
extern "C" void fn_802A044C();

// ----------------------------------------------------------------------------
// __ct__Q34nw4r3snd10FxReverbHiFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q34nw4r3snd10FxReverbHiFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, lbl_803624E0@ha
    lfs f2, lbl_804A20E0
    stw r0, 0x34(r1)
    li r0, 0x0
    lfs f0, lbl_804A20E8
    addi r5, r5, lbl_803624E0@l
    stw r31, 0x2c(r1)
    mr r31, r3
    lfs f1, lbl_804A20E4
    addi r4, r1, 0x8
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r5, 0x0(r3)
    stb r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stfs f2, 0x18(r3)
    stfs f1, 0x1c(r3)
    stfs f0, 0x20(r3)
    stfs f2, 0x24(r3)
    stfs f0, 0x28(r3)
    stfs f2, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f2, 0x14(r1)
    stfs f0, 0x18(r1)
    bl SetParam__Q34nw4r3snd10FxReverbHiFRCQ44nw4r3snd10FxReverbHi13ReverbHiParam
    mr r3, r31
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// GetRequiredMemSize__Q34nw4r3snd10FxReverbHiFv
// ----------------------------------------------------------------------------
extern "C" asm void GetRequiredMemSize__Q34nw4r3snd10FxReverbHiFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x2c
    stw r0, 0x14(r1)
    bl fn_8029FEDC
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// AssignWorkBuffer__Q34nw4r3snd10FxReverbHiFPvUl
// ----------------------------------------------------------------------------
extern "C" asm void AssignWorkBuffer__Q34nw4r3snd10FxReverbHiFPvUl() {
    nofralloc
    addi r3, r3, 0x10
    b CreateHeap__Q44nw4r3snd6detail8AxfxImplFPvUl
}

// ----------------------------------------------------------------------------
// ReleaseWorkBuffer__Q34nw4r3snd10FxReverbHiFv
// ----------------------------------------------------------------------------
extern "C" asm void ReleaseWorkBuffer__Q34nw4r3snd10FxReverbHiFv() {
    nofralloc
    addi r3, r3, 0x10
    b DestroyHeap__Q44nw4r3snd6detail8AxfxImplFv
}

// ----------------------------------------------------------------------------
// fn_8020D184
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020D184() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0x2c
    bl fn_8029FEDC
    lwz r4, 0x10(r30)
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmpwi r4, 0x0
    bne lbl_8020D1C0
    li r0, 0x0
    b lbl_8020D1C8
lbl_8020D1C0:
    lwz r0, 0x1c(r4)
    subf r0, r4, r0
lbl_8020D1C8:
    cmplw r3, r0
    ble lbl_8020D1D8
    li r3, 0x0
    b lbl_8020D220
lbl_8020D1D8:
    addi r3, r30, 0x10
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
    addi r3, r30, 0x2c
    bl fn_8029FF04
    lwz r4, 0xc(r1)
    mr r31, r3
    lwz r5, 0x8(r1)
    addi r3, r30, 0x10
    bl RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v
    addi r3, r30, 0x2c
    bl fn_8029FEDC
    neg r0, r31
    li r3, 0x1
    or r0, r0, r31
    stb r3, 0xc(r30)
    srwi r3, r0, 31
lbl_8020D220:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020D238
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020D238() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8020D288
    li r0, 0x0
    addi r4, r1, 0xc
    stb r0, 0xc(r3)
    addi r3, r3, 0x10
    addi r5, r1, 0x8
    bl HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
    addi r3, r31, 0x2c
    bl fn_802A044C
    lwz r4, 0xc(r1)
    addi r3, r31, 0x10
    lwz r5, 0x8(r1)
    bl RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v
lbl_8020D288:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetParam__Q34nw4r3snd10FxReverbHiFRCQ44nw4r3snd10FxReverbHi13ReverbHiParam
// ----------------------------------------------------------------------------
extern "C" asm void SetParam__Q34nw4r3snd10FxReverbHiFRCQ44nw4r3snd10FxReverbHi13ReverbHiParam() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f1, 0xc(r4)
    stw r0, 0x24(r1)
    lfs f5, lbl_804A20EC
    stw r31, 0x1c(r1)
    lfs f4, 0x0(r4)
    fcmpo cr0, f1, f5
    stw r30, 0x18(r1)
    lfs f3, 0x4(r4)
    stw r29, 0x14(r1)
    mr r29, r3
    lfs f2, 0x8(r4)
    lfs f0, 0x10(r4)
    stfs f4, 0x18(r3)
    stfs f3, 0x1c(r3)
    stfs f2, 0x20(r3)
    stfs f1, 0x24(r3)
    stfs f0, 0x28(r3)
    bge lbl_8020D2F0
    b lbl_8020D2F4
lbl_8020D2F0:
    fmr f5, f1
lbl_8020D2F4:
    lfs f0, 0x64(r3)
    fcmpu cr0, f5, f0
    mfcr r0
    lfs f1, 0xc(r4)
    lfs f0, 0x0(r4)
    extrwi r0, r0, 1, 2
    stfs f5, 0x64(r3)
    xori r30, r0, 0x1
    fcmpo cr0, f0, f1
    ble lbl_8020D320
    b lbl_8020D334
lbl_8020D320:
    lfs f1, lbl_804A20EC
    fcmpo cr0, f0, f1
    bge lbl_8020D330
    b lbl_8020D334
lbl_8020D330:
    fmr f1, f0
lbl_8020D334:
    lfs f0, 0x4(r4)
    lfs f2, lbl_804A20F0
    stfs f1, 0x68(r3)
    fcmpo cr0, f0, f2
    ble lbl_8020D34C
    b lbl_8020D360
lbl_8020D34C:
    lfs f2, lbl_804A20F4
    fcmpo cr0, f0, f2
    bge lbl_8020D35C
    b lbl_8020D360
lbl_8020D35C:
    fmr f2, f0
lbl_8020D360:
    lfs f0, 0x10(r4)
    lfs f1, lbl_804A20E8
    stfs f2, 0x6c(r3)
    fcmpo cr0, f0, f1
    ble lbl_8020D378
    b lbl_8020D38C
lbl_8020D378:
    lfs f1, lbl_804A20F4
    fcmpo cr0, f0, f1
    bge lbl_8020D388
    b lbl_8020D38C
lbl_8020D388:
    fmr f1, f0
lbl_8020D38C:
    lfs f0, 0x8(r4)
    lfs f2, lbl_804A20E8
    stfs f1, 0x70(r3)
    fcmpo cr0, f0, f2
    ble lbl_8020D3A4
    b lbl_8020D3B8
lbl_8020D3A4:
    lfs f2, lbl_804A20F4
    fcmpo cr0, f0, f2
    bge lbl_8020D3B4
    b lbl_8020D3B8
lbl_8020D3B4:
    fmr f2, f0
lbl_8020D3B8:
    lbz r0, 0xc(r3)
    li r31, 0x0
    lfs f0, lbl_804A20F4
    cmpwi r0, 0x0
    stfs f2, 0x7c(r3)
    stw r31, 0x74(r3)
    stw r31, 0x78(r3)
    stfs f0, 0x80(r3)
    bne lbl_8020D3E4
    li r3, 0x1
    b lbl_8020D46C
lbl_8020D3E4:
    addi r3, r3, 0x2c
    bl fn_8029FEDC
    lwz r4, 0x10(r29)
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmpwi r4, 0x0
    bne lbl_8020D404
    b lbl_8020D40C
lbl_8020D404:
    lwz r0, 0x1c(r4)
    subf r31, r4, r0
lbl_8020D40C:
    cmplw r3, r31
    ble lbl_8020D41C
    li r3, 0x0
    b lbl_8020D46C
lbl_8020D41C:
    cmpwi r30, 0x0
    beq lbl_8020D454
    addi r3, r29, 0x10
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
    addi r3, r29, 0x2c
    bl fn_802A01C8
    lwz r4, 0xc(r1)
    mr r30, r3
    lwz r5, 0x8(r1)
    addi r3, r29, 0x10
    bl RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v
    b lbl_8020D460
lbl_8020D454:
    addi r3, r29, 0x2c
    bl fn_802A0348
    mr r30, r3
lbl_8020D460:
    neg r0, r30
    or r0, r0, r30
    srwi r3, r0, 31
lbl_8020D46C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

