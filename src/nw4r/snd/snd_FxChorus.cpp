#include "types.h"

// Translation unit: src/nw4r/snd/unk_8020CCD0.cpp
// Total functions: 10

// Small Data symbols (@sda21)
extern "C" float lbl_804A20C0;
extern "C" float lbl_804A20C4;
extern "C" float lbl_804A20C8;
extern "C" float lbl_804A20CC;
extern "C" float lbl_804A20D0;
extern "C" float lbl_804A20D4;
extern "C" float lbl_804A20D8;
extern "C" float lbl_804A20DC;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_803624B8[];

// Forward declarations
extern "C" void AXFXChorusExpCallback();
extern "C" void AXFXChorusExpGetMemSize();
extern "C" void AXFXChorusExpInit();
extern "C" void AXFXChorusExpSettingsUpdate();
extern "C" void AXFXChorusExpShutdown();
extern "C" void CreateHeap__Q44nw4r3snd6detail8AxfxImplFPvUl();
extern "C" void DestroyHeap__Q44nw4r3snd6detail8AxfxImplFv();
extern "C" void HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v();
extern "C" void RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v();
extern "C" void fn_8020CCD0();
extern "C" void fn_8020CCD4();
extern "C" void fn_8020CD64();
extern "C" void fn_8020CD90();
extern "C" void fn_8020CD98();
extern "C" void fn_8020CDA0();
extern "C" void fn_8020CE54();
extern "C" void fn_8020CEB8();
extern "C" void fn_8020D05C();
extern "C" void fn_8020D064();

// ----------------------------------------------------------------------------
// fn_8020CCD0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020CCD0() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8020CCD4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020CCD4() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, lbl_803624B8@ha
    lfs f1, lbl_804A20C8
    stw r0, 0x34(r1)
    li r0, 0x0
    lfs f3, lbl_804A20C0
    addi r5, r5, lbl_803624B8@l
    stw r31, 0x2c(r1)
    mr r31, r3
    lfs f2, lbl_804A20C4
    addi r4, r1, 0x8
    lfs f0, lbl_804A20CC
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r5, 0x0(r3)
    stb r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stfs f3, 0x18(r3)
    stfs f2, 0x1c(r3)
    stfs f1, 0x20(r3)
    stfs f0, 0x24(r3)
    stfs f1, 0x28(r3)
    stfs f3, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    bl fn_8020CEB8
    mr r3, r31
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8020CD64
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020CD64() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x2c
    stw r0, 0x14(r1)
    bl AXFXChorusExpGetMemSize
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8020CD90
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020CD90() {
    nofralloc
    addi r3, r3, 0x10
    b CreateHeap__Q44nw4r3snd6detail8AxfxImplFPvUl
}

// ----------------------------------------------------------------------------
// fn_8020CD98
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020CD98() {
    nofralloc
    addi r3, r3, 0x10
    b DestroyHeap__Q44nw4r3snd6detail8AxfxImplFv
}

// ----------------------------------------------------------------------------
// fn_8020CDA0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020CDA0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0x2c
    bl AXFXChorusExpGetMemSize
    lwz r4, 0x10(r30)
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmpwi r4, 0x0
    bne lbl_8020CDDC
    li r0, 0x0
    b lbl_8020CDE4
lbl_8020CDDC:
    lwz r0, 0x1c(r4)
    subf r0, r4, r0
lbl_8020CDE4:
    cmplw r3, r0
    ble lbl_8020CDF4
    li r3, 0x0
    b lbl_8020CE3C
lbl_8020CDF4:
    addi r3, r30, 0x10
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
    addi r3, r30, 0x2c
    bl AXFXChorusExpInit
    lwz r4, 0xc(r1)
    mr r31, r3
    lwz r5, 0x8(r1)
    addi r3, r30, 0x10
    bl RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v
    addi r3, r30, 0x2c
    bl AXFXChorusExpGetMemSize
    neg r0, r31
    li r3, 0x1
    or r0, r0, r31
    stb r3, 0xc(r30)
    srwi r3, r0, 31
lbl_8020CE3C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020CE54
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020CE54() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8020CEA4
    li r0, 0x0
    addi r4, r1, 0xc
    stb r0, 0xc(r3)
    addi r3, r3, 0x10
    addi r5, r1, 0x8
    bl HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
    addi r3, r31, 0x2c
    bl AXFXChorusExpShutdown
    lwz r4, 0xc(r1)
    addi r3, r31, 0x10
    lwz r5, 0x8(r1)
    bl RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v
lbl_8020CEA4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020CEB8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020CEB8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f4, 0x0(r4)
    stw r0, 0x14(r1)
    lfs f5, lbl_804A20D0
    stw r31, 0xc(r1)
    lfs f3, 0x4(r4)
    fcmpo cr0, f4, f5
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f2, 0x8(r4)
    lfs f1, 0xc(r4)
    lfs f0, 0x10(r4)
    stfs f4, 0x18(r3)
    stfs f3, 0x1c(r3)
    stfs f2, 0x20(r3)
    stfs f1, 0x24(r3)
    stfs f0, 0x28(r3)
    ble lbl_8020CF08
    b lbl_8020CF1C
lbl_8020CF08:
    lfs f5, lbl_804A20D4
    fcmpo cr0, f4, f5
    bge lbl_8020CF18
    b lbl_8020CF1C
lbl_8020CF18:
    fmr f5, f4
lbl_8020CF1C:
    lfs f0, 0x4(r4)
    lfs f1, lbl_804A20C8
    stfs f5, 0xac(r3)
    fcmpo cr0, f0, f1
    ble lbl_8020CF34
    b lbl_8020CF48
lbl_8020CF34:
    lfs f1, lbl_804A20CC
    fcmpo cr0, f0, f1
    bge lbl_8020CF44
    b lbl_8020CF48
lbl_8020CF44:
    fmr f1, f0
lbl_8020CF48:
    lfs f0, 0x8(r4)
    lfs f2, lbl_804A20D8
    stfs f1, 0xb0(r3)
    fcmpo cr0, f0, f2
    ble lbl_8020CF60
    b lbl_8020CF74
lbl_8020CF60:
    lfs f2, lbl_804A20D4
    fcmpo cr0, f0, f2
    bge lbl_8020CF70
    b lbl_8020CF74
lbl_8020CF70:
    fmr f2, f0
lbl_8020CF74:
    lfs f0, 0xc(r4)
    lfs f1, lbl_804A20DC
    stfs f2, 0xb4(r3)
    fcmpo cr0, f0, f1
    ble lbl_8020CF8C
    b lbl_8020CFA0
lbl_8020CF8C:
    lfs f1, lbl_804A20CC
    fcmpo cr0, f0, f1
    bge lbl_8020CF9C
    b lbl_8020CFA0
lbl_8020CF9C:
    fmr f1, f0
lbl_8020CFA0:
    lfs f0, 0x10(r4)
    lfs f2, lbl_804A20C8
    stfs f1, 0xb8(r3)
    fcmpo cr0, f0, f2
    ble lbl_8020CFB8
    b lbl_8020CFCC
lbl_8020CFB8:
    lfs f2, lbl_804A20CC
    fcmpo cr0, f0, f2
    bge lbl_8020CFC8
    b lbl_8020CFCC
lbl_8020CFC8:
    fmr f2, f0
lbl_8020CFCC:
    lbz r0, 0xc(r3)
    li r31, 0x0
    lfs f0, lbl_804A20CC
    cmpwi r0, 0x0
    stfs f2, 0xc4(r3)
    stw r31, 0xbc(r3)
    stw r31, 0xc0(r3)
    stfs f0, 0xc8(r3)
    bne lbl_8020CFF8
    li r3, 0x1
    b lbl_8020D044
lbl_8020CFF8:
    addi r3, r3, 0x2c
    bl AXFXChorusExpGetMemSize
    lwz r4, 0x10(r30)
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmpwi r4, 0x0
    bne lbl_8020D018
    b lbl_8020D020
lbl_8020D018:
    lwz r0, 0x1c(r4)
    subf r31, r4, r0
lbl_8020D020:
    cmplw r3, r31
    ble lbl_8020D030
    li r3, 0x0
    b lbl_8020D044
lbl_8020D030:
    addi r3, r30, 0x2c
    bl AXFXChorusExpSettingsUpdate
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_8020D044:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8020D05C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020D05C() {
    nofralloc
    addi r3, r3, 0x18
    blr
}

// ----------------------------------------------------------------------------
// fn_8020D064
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020D064() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r4, r3
    stw r0, 0x24(r1)
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8020D0AC
    cmpwi r8, 0x2
    beq lbl_8020D0AC
    lwz r0, 0x0(r5)
    addi r3, r1, 0x8
    addi r4, r4, 0x2c
    stw r0, 0x8(r1)
    lwz r0, 0x4(r5)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x10(r1)
    bl AXFXChorusExpCallback
lbl_8020D0AC:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

