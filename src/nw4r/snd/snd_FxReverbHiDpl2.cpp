#include "types.h"

// Translation unit: src/nw4r/snd/unk_8020D488.cpp
// Total functions: 19

// Small Data symbols (@sda21)
extern "C" float lbl_804A20F8;
extern "C" float lbl_804A20FC;
extern "C" float lbl_804A2100;
extern "C" float lbl_804A2104;
extern "C" float lbl_804A2108;
extern "C" float lbl_804A210C;
extern "C" float lbl_804A2110;
extern "C" float lbl_804A2118;
extern "C" float lbl_804A211C;
extern "C" float lbl_804A2120;
extern "C" float lbl_804A2124;
extern "C" float lbl_804A2128;
extern "C" float lbl_804A212C;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80362508[];
extern "C" u8 lbl_80362530[];

// Forward declarations
extern "C" void AXFXReverbHiExpCallback();
extern "C" void AXFXReverbHiExpGetMemSize();
extern "C" void AXFXReverbHiExpInit();
extern "C" void AXFXReverbHiExpSettings();
extern "C" void AXFXReverbHiExpSettingsUpdate();
extern "C" void AXFXReverbHiExpShutdown();
extern "C" void AXFXReverbStdExpCallback();
extern "C" void AXFXReverbStdExpGetMemSize();
extern "C" void AXFXReverbStdExpInit();
extern "C" void AXFXReverbStdExpSettings();
extern "C" void AXFXReverbStdExpSettingsUpdate();
extern "C" void AXFXReverbStdExpShutdown();
extern "C" void CreateHeap__Q44nw4r3snd6detail8AxfxImplFPvUl();
extern "C" void DestroyHeap__Q44nw4r3snd6detail8AxfxImplFv();
extern "C" void HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v();
extern "C" void RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v();
extern "C" void fn_8020D488();
extern "C" void fn_8020D490();
extern "C" void fn_8020D4E8();
extern "C" void fn_8020D5B8();
extern "C" void fn_8020D5E4();
extern "C" void fn_8020D5EC();
extern "C" void fn_8020D5F4();
extern "C" void fn_8020D6A8();
extern "C" void fn_8020D70C();
extern "C" void fn_8020D9D8();
extern "C" void fn_8020DA30();
extern "C" void fn_8020DAF4();
extern "C" void fn_8020DB20();
extern "C" void fn_8020DB28();
extern "C" void fn_8020DB30();
extern "C" void fn_8020DBE4();
extern "C" void fn_8020DC48();
extern "C" void fn_8020DEE0();
extern "C" void fn_8020DEE8();
extern "C" void fn_802A04F8();

// ----------------------------------------------------------------------------
// fn_8020D488
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020D488() {
    nofralloc
    addi r3, r3, 0x18
    blr
}

// ----------------------------------------------------------------------------
// fn_8020D490
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020D490() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r4, r3
    stw r0, 0x24(r1)
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8020D4D8
    cmpwi r8, 0x2
    beq lbl_8020D4D8
    lwz r0, 0x0(r5)
    addi r3, r1, 0x8
    addi r4, r4, 0x2c
    stw r0, 0x8(r1)
    lwz r0, 0x4(r5)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x10(r1)
    bl fn_802A04F8
lbl_8020D4D8:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020D4E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020D4E8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_80362508@ha
    lfs f6, lbl_804A20F8
    stw r0, 0x44(r1)
    li r6, 0x0
    lfs f1, lbl_804A210C
    addi r5, r5, lbl_80362508@l
    stw r31, 0x3c(r1)
    li r0, 0x5
    lfs f5, lbl_804A20FC
    mr r31, r3
    lfs f4, lbl_804A2100
    addi r4, r1, 0x8
    lfs f3, lbl_804A2104
    lfs f2, lbl_804A2108
    lfs f0, lbl_804A2110
    stw r6, 0x4(r3)
    stw r6, 0x8(r3)
    stw r5, 0x0(r3)
    stb r6, 0xc(r3)
    stw r6, 0x10(r3)
    stw r6, 0x14(r3)
    stfs f6, 0x18(r3)
    stfs f5, 0x1c(r3)
    stfs f4, 0x20(r3)
    stfs f3, 0x24(r3)
    stfs f2, 0x28(r3)
    stfs f1, 0x2c(r3)
    stw r0, 0x30(r3)
    stfs f6, 0x34(r3)
    stw r6, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f1, 0x40(r3)
    stfs f6, 0x8(r1)
    stfs f5, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f3, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x20(r1)
    stfs f6, 0x24(r1)
    stw r6, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f1, 0x30(r1)
    bl fn_8020D70C
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8020D5B8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020D5B8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x44
    stw r0, 0x14(r1)
    bl AXFXReverbHiExpGetMemSize
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8020D5E4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020D5E4() {
    nofralloc
    addi r3, r3, 0x10
    b CreateHeap__Q44nw4r3snd6detail8AxfxImplFPvUl
}

// ----------------------------------------------------------------------------
// fn_8020D5EC
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020D5EC() {
    nofralloc
    addi r3, r3, 0x10
    b DestroyHeap__Q44nw4r3snd6detail8AxfxImplFv
}

// ----------------------------------------------------------------------------
// fn_8020D5F4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020D5F4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0x44
    bl AXFXReverbHiExpGetMemSize
    lwz r4, 0x10(r30)
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmpwi r4, 0x0
    bne lbl_8020D630
    li r0, 0x0
    b lbl_8020D638
lbl_8020D630:
    lwz r0, 0x1c(r4)
    subf r0, r4, r0
lbl_8020D638:
    cmplw r3, r0
    ble lbl_8020D648
    li r3, 0x0
    b lbl_8020D690
lbl_8020D648:
    addi r3, r30, 0x10
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
    addi r3, r30, 0x44
    bl AXFXReverbHiExpInit
    lwz r4, 0xc(r1)
    mr r31, r3
    lwz r5, 0x8(r1)
    addi r3, r30, 0x10
    bl RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v
    addi r3, r30, 0x44
    bl AXFXReverbHiExpGetMemSize
    neg r0, r31
    li r3, 0x1
    or r0, r0, r31
    stb r3, 0xc(r30)
    srwi r3, r0, 31
lbl_8020D690:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020D6A8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020D6A8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8020D6F8
    li r0, 0x0
    addi r4, r1, 0xc
    stb r0, 0xc(r3)
    addi r3, r3, 0x10
    addi r5, r1, 0x8
    bl HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
    addi r3, r31, 0x44
    bl AXFXReverbHiExpShutdown
    lwz r4, 0xc(r1)
    addi r3, r31, 0x10
    lwz r5, 0x8(r1)
    bl RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v
lbl_8020D6F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020D70C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020D70C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f2, 0x1c(r4)
    stw r0, 0x24(r1)
    lfs f9, lbl_804A2110
    stw r31, 0x1c(r1)
    lfs f8, 0x0(r4)
    fcmpo cr0, f2, f9
    stw r30, 0x18(r1)
    lfs f7, 0x4(r4)
    stw r29, 0x14(r1)
    mr r29, r3
    lfs f6, 0x8(r4)
    lfs f5, 0xc(r4)
    lfs f4, 0x10(r4)
    lfs f3, 0x14(r4)
    lwz r5, 0x18(r4)
    lwz r0, 0x20(r4)
    lfs f1, 0x24(r4)
    lfs f0, 0x28(r4)
    stfs f8, 0x18(r3)
    stfs f7, 0x1c(r3)
    stfs f6, 0x20(r3)
    stfs f5, 0x24(r3)
    stfs f4, 0x28(r3)
    stfs f3, 0x2c(r3)
    stw r5, 0x30(r3)
    stfs f2, 0x34(r3)
    stw r0, 0x38(r3)
    stfs f1, 0x3c(r3)
    stfs f0, 0x40(r3)
    bge lbl_8020D790
    b lbl_8020D794
lbl_8020D790:
    fmr f9, f2
lbl_8020D794:
    lfs f0, 0x158(r3)
    fcmpu cr0, f9, f0
    mfcr r0
    lfs f1, 0x1c(r4)
    extrwi r0, r0, 1, 2
    lfs f0, 0x0(r4)
    xori r30, r0, 0x1
    lwz r0, 0x18(r4)
    fcmpo cr0, f0, f1
    stfs f9, 0x158(r3)
    stw r0, 0x154(r3)
    ble lbl_8020D7C8
    b lbl_8020D7DC
lbl_8020D7C8:
    lfs f1, lbl_804A2110
    fcmpo cr0, f0, f1
    bge lbl_8020D7D8
    b lbl_8020D7DC
lbl_8020D7D8:
    fmr f1, f0
lbl_8020D7DC:
    lfs f0, 0x4(r4)
    lfs f2, lbl_804A2110
    lwz r0, 0x20(r4)
    fcmpo cr0, f0, f2
    stfs f1, 0x15c(r3)
    stw r0, 0x160(r3)
    bge lbl_8020D7FC
    b lbl_8020D800
lbl_8020D7FC:
    fmr f2, f0
lbl_8020D800:
    lfs f0, 0x8(r4)
    lfs f1, lbl_804A210C
    stfs f2, 0x164(r3)
    fcmpo cr0, f0, f1
    ble lbl_8020D818
    b lbl_8020D82C
lbl_8020D818:
    lfs f1, lbl_804A2110
    fcmpo cr0, f0, f1
    bge lbl_8020D828
    b lbl_8020D82C
lbl_8020D828:
    fmr f1, f0
lbl_8020D82C:
    lfs f0, 0xc(r4)
    lfs f2, lbl_804A210C
    stfs f1, 0x168(r3)
    fcmpo cr0, f0, f2
    ble lbl_8020D844
    b lbl_8020D858
lbl_8020D844:
    lfs f2, lbl_804A2110
    fcmpo cr0, f0, f2
    bge lbl_8020D854
    b lbl_8020D858
lbl_8020D854:
    fmr f2, f0
lbl_8020D858:
    lfs f0, 0x10(r4)
    lfs f1, lbl_804A210C
    stfs f2, 0x16c(r3)
    fcmpo cr0, f0, f1
    ble lbl_8020D870
    b lbl_8020D884
lbl_8020D870:
    lfs f1, lbl_804A2110
    fcmpo cr0, f0, f1
    bge lbl_8020D880
    b lbl_8020D884
lbl_8020D880:
    fmr f1, f0
lbl_8020D884:
    lfs f0, 0x24(r4)
    lfs f2, lbl_804A210C
    stfs f1, 0x170(r3)
    fcmpo cr0, f0, f2
    ble lbl_8020D89C
    b lbl_8020D8B0
lbl_8020D89C:
    lfs f2, lbl_804A2110
    fcmpo cr0, f0, f2
    bge lbl_8020D8AC
    b lbl_8020D8B0
lbl_8020D8AC:
    fmr f2, f0
lbl_8020D8B0:
    lfs f0, 0x28(r4)
    lfs f1, lbl_804A210C
    stfs f2, 0x174(r3)
    fcmpo cr0, f0, f1
    ble lbl_8020D8C8
    b lbl_8020D8DC
lbl_8020D8C8:
    lfs f1, lbl_804A2110
    fcmpo cr0, f0, f1
    bge lbl_8020D8D8
    b lbl_8020D8DC
lbl_8020D8D8:
    fmr f1, f0
lbl_8020D8DC:
    lfs f0, 0x14(r4)
    lfs f2, lbl_804A210C
    stfs f1, 0x178(r3)
    fcmpo cr0, f0, f2
    ble lbl_8020D8F4
    b lbl_8020D908
lbl_8020D8F4:
    lfs f2, lbl_804A2110
    fcmpo cr0, f0, f2
    bge lbl_8020D904
    b lbl_8020D908
lbl_8020D904:
    fmr f2, f0
lbl_8020D908:
    lbz r0, 0xc(r3)
    li r31, 0x0
    lfs f0, lbl_804A2110
    cmpwi r0, 0x0
    stfs f2, 0x184(r3)
    stw r31, 0x17c(r3)
    stw r31, 0x180(r3)
    stfs f0, 0x188(r3)
    bne lbl_8020D934
    li r3, 0x1
    b lbl_8020D9BC
lbl_8020D934:
    addi r3, r3, 0x44
    bl AXFXReverbHiExpGetMemSize
    lwz r4, 0x10(r29)
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmpwi r4, 0x0
    bne lbl_8020D954
    b lbl_8020D95C
lbl_8020D954:
    lwz r0, 0x1c(r4)
    subf r31, r4, r0
lbl_8020D95C:
    cmplw r3, r31
    ble lbl_8020D96C
    li r3, 0x0
    b lbl_8020D9BC
lbl_8020D96C:
    cmpwi r30, 0x0
    beq lbl_8020D9A4
    addi r3, r29, 0x10
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
    addi r3, r29, 0x44
    bl AXFXReverbHiExpSettings
    lwz r4, 0xc(r1)
    mr r30, r3
    lwz r5, 0x8(r1)
    addi r3, r29, 0x10
    bl RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v
    b lbl_8020D9B0
lbl_8020D9A4:
    addi r3, r29, 0x44
    bl AXFXReverbHiExpSettingsUpdate
    mr r30, r3
lbl_8020D9B0:
    neg r0, r30
    or r0, r0, r30
    srwi r3, r0, 31
lbl_8020D9BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020D9D8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020D9D8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r4, r3
    stw r0, 0x24(r1)
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8020DA20
    cmpwi r8, 0x2
    beq lbl_8020DA20
    lwz r0, 0x0(r5)
    addi r3, r1, 0x8
    addi r4, r4, 0x44
    stw r0, 0x8(r1)
    lwz r0, 0x4(r5)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x10(r1)
    bl AXFXReverbHiExpCallback
lbl_8020DA20:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020DA30
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020DA30() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_80362530@ha
    lfs f5, lbl_804A2118
    stw r0, 0x44(r1)
    li r6, 0x0
    lfs f1, lbl_804A2128
    addi r5, r5, lbl_80362530@l
    stw r31, 0x3c(r1)
    li r0, 0x5
    lfs f4, lbl_804A211C
    mr r31, r3
    lfs f3, lbl_804A2120
    addi r4, r1, 0x8
    lfs f2, lbl_804A2124
    lfs f0, lbl_804A212C
    stw r6, 0x4(r3)
    stw r6, 0x8(r3)
    stw r5, 0x0(r3)
    stb r6, 0xc(r3)
    stw r6, 0x10(r3)
    stw r6, 0x14(r3)
    stfs f5, 0x18(r3)
    stfs f4, 0x1c(r3)
    stfs f3, 0x20(r3)
    stfs f2, 0x24(r3)
    stfs f1, 0x28(r3)
    stw r0, 0x2c(r3)
    stfs f5, 0x30(r3)
    stw r6, 0x34(r3)
    stfs f0, 0x38(r3)
    stfs f1, 0x3c(r3)
    stfs f5, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f2, 0x14(r1)
    stfs f1, 0x18(r1)
    stw r0, 0x1c(r1)
    stfs f5, 0x20(r1)
    stw r6, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f1, 0x2c(r1)
    bl fn_8020DC48
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8020DAF4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020DAF4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x40
    stw r0, 0x14(r1)
    bl AXFXReverbStdExpGetMemSize
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8020DB20
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020DB20() {
    nofralloc
    addi r3, r3, 0x10
    b CreateHeap__Q44nw4r3snd6detail8AxfxImplFPvUl
}

// ----------------------------------------------------------------------------
// fn_8020DB28
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020DB28() {
    nofralloc
    addi r3, r3, 0x10
    b DestroyHeap__Q44nw4r3snd6detail8AxfxImplFv
}

// ----------------------------------------------------------------------------
// fn_8020DB30
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020DB30() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r3, 0x40
    bl AXFXReverbStdExpGetMemSize
    lwz r4, 0x10(r30)
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmpwi r4, 0x0
    bne lbl_8020DB6C
    li r0, 0x0
    b lbl_8020DB74
lbl_8020DB6C:
    lwz r0, 0x1c(r4)
    subf r0, r4, r0
lbl_8020DB74:
    cmplw r3, r0
    ble lbl_8020DB84
    li r3, 0x0
    b lbl_8020DBCC
lbl_8020DB84:
    addi r3, r30, 0x10
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
    addi r3, r30, 0x40
    bl AXFXReverbStdExpInit
    lwz r4, 0xc(r1)
    mr r31, r3
    lwz r5, 0x8(r1)
    addi r3, r30, 0x10
    bl RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v
    addi r3, r30, 0x40
    bl AXFXReverbStdExpGetMemSize
    neg r0, r31
    li r3, 0x1
    or r0, r0, r31
    stb r3, 0xc(r30)
    srwi r3, r0, 31
lbl_8020DBCC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020DBE4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020DBE4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8020DC34
    li r0, 0x0
    addi r4, r1, 0xc
    stb r0, 0xc(r3)
    addi r3, r3, 0x10
    addi r5, r1, 0x8
    bl HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
    addi r3, r31, 0x40
    bl AXFXReverbStdExpShutdown
    lwz r4, 0xc(r1)
    addi r3, r31, 0x10
    lwz r5, 0x8(r1)
    bl RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v
lbl_8020DC34:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020DC48
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020DC48() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f2, 0x18(r4)
    stw r0, 0x24(r1)
    lfs f8, lbl_804A212C
    stw r31, 0x1c(r1)
    lfs f7, 0x0(r4)
    fcmpo cr0, f2, f8
    stw r30, 0x18(r1)
    lfs f6, 0x4(r4)
    stw r29, 0x14(r1)
    mr r29, r3
    lfs f5, 0x8(r4)
    lfs f4, 0xc(r4)
    lfs f3, 0x10(r4)
    lwz r5, 0x14(r4)
    lwz r0, 0x1c(r4)
    lfs f1, 0x20(r4)
    lfs f0, 0x24(r4)
    stfs f7, 0x18(r3)
    stfs f6, 0x1c(r3)
    stfs f5, 0x20(r3)
    stfs f4, 0x24(r3)
    stfs f3, 0x28(r3)
    stw r5, 0x2c(r3)
    stfs f2, 0x30(r3)
    stw r0, 0x34(r3)
    stfs f1, 0x38(r3)
    stfs f0, 0x3c(r3)
    bge lbl_8020DCC4
    b lbl_8020DCC8
lbl_8020DCC4:
    fmr f8, f2
lbl_8020DCC8:
    lfs f0, 0xf8(r3)
    fcmpu cr0, f8, f0
    mfcr r0
    lfs f1, 0x18(r4)
    extrwi r0, r0, 1, 2
    lfs f0, 0x0(r4)
    xori r30, r0, 0x1
    lwz r0, 0x14(r4)
    fcmpo cr0, f0, f1
    stfs f8, 0xf8(r3)
    stw r0, 0xf4(r3)
    ble lbl_8020DCFC
    b lbl_8020DD10
lbl_8020DCFC:
    lfs f1, lbl_804A212C
    fcmpo cr0, f0, f1
    bge lbl_8020DD0C
    b lbl_8020DD10
lbl_8020DD0C:
    fmr f1, f0
lbl_8020DD10:
    lfs f0, 0x4(r4)
    lfs f2, lbl_804A212C
    lwz r0, 0x1c(r4)
    fcmpo cr0, f0, f2
    stfs f1, 0xfc(r3)
    stw r0, 0x100(r3)
    bge lbl_8020DD30
    b lbl_8020DD34
lbl_8020DD30:
    fmr f2, f0
lbl_8020DD34:
    lfs f0, 0x8(r4)
    lfs f1, lbl_804A2128
    stfs f2, 0x104(r3)
    fcmpo cr0, f0, f1
    ble lbl_8020DD4C
    b lbl_8020DD60
lbl_8020DD4C:
    lfs f1, lbl_804A212C
    fcmpo cr0, f0, f1
    bge lbl_8020DD5C
    b lbl_8020DD60
lbl_8020DD5C:
    fmr f1, f0
lbl_8020DD60:
    lfs f0, 0xc(r4)
    lfs f2, lbl_804A2128
    stfs f1, 0x108(r3)
    fcmpo cr0, f0, f2
    ble lbl_8020DD78
    b lbl_8020DD8C
lbl_8020DD78:
    lfs f2, lbl_804A212C
    fcmpo cr0, f0, f2
    bge lbl_8020DD88
    b lbl_8020DD8C
lbl_8020DD88:
    fmr f2, f0
lbl_8020DD8C:
    lfs f0, 0x20(r4)
    lfs f1, lbl_804A2128
    stfs f2, 0x10c(r3)
    fcmpo cr0, f0, f1
    ble lbl_8020DDA4
    b lbl_8020DDB8
lbl_8020DDA4:
    lfs f1, lbl_804A212C
    fcmpo cr0, f0, f1
    bge lbl_8020DDB4
    b lbl_8020DDB8
lbl_8020DDB4:
    fmr f1, f0
lbl_8020DDB8:
    lfs f0, 0x24(r4)
    lfs f2, lbl_804A2128
    stfs f1, 0x110(r3)
    fcmpo cr0, f0, f2
    ble lbl_8020DDD0
    b lbl_8020DDE4
lbl_8020DDD0:
    lfs f2, lbl_804A212C
    fcmpo cr0, f0, f2
    bge lbl_8020DDE0
    b lbl_8020DDE4
lbl_8020DDE0:
    fmr f2, f0
lbl_8020DDE4:
    lfs f0, 0x10(r4)
    lfs f1, lbl_804A2128
    stfs f2, 0x114(r3)
    fcmpo cr0, f0, f1
    ble lbl_8020DDFC
    b lbl_8020DE10
lbl_8020DDFC:
    lfs f1, lbl_804A212C
    fcmpo cr0, f0, f1
    bge lbl_8020DE0C
    b lbl_8020DE10
lbl_8020DE0C:
    fmr f1, f0
lbl_8020DE10:
    lbz r0, 0xc(r3)
    li r31, 0x0
    lfs f0, lbl_804A212C
    cmpwi r0, 0x0
    stfs f1, 0x120(r3)
    stw r31, 0x118(r3)
    stw r31, 0x11c(r3)
    stfs f0, 0x124(r3)
    bne lbl_8020DE3C
    li r3, 0x1
    b lbl_8020DEC4
lbl_8020DE3C:
    addi r3, r3, 0x40
    bl AXFXReverbStdExpGetMemSize
    lwz r4, 0x10(r29)
    addi r0, r3, 0x87
    clrrwi r3, r0, 5
    cmpwi r4, 0x0
    bne lbl_8020DE5C
    b lbl_8020DE64
lbl_8020DE5C:
    lwz r0, 0x1c(r4)
    subf r31, r4, r0
lbl_8020DE64:
    cmplw r3, r31
    ble lbl_8020DE74
    li r3, 0x0
    b lbl_8020DEC4
lbl_8020DE74:
    cmpwi r30, 0x0
    beq lbl_8020DEAC
    addi r3, r29, 0x10
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
    addi r3, r29, 0x40
    bl AXFXReverbStdExpSettings
    lwz r4, 0xc(r1)
    mr r30, r3
    lwz r5, 0x8(r1)
    addi r3, r29, 0x10
    bl RestoreAlloc__Q44nw4r3snd6detail8AxfxImplFPFUl_PvPFPv_v
    b lbl_8020DEB8
lbl_8020DEAC:
    addi r3, r29, 0x40
    bl AXFXReverbStdExpSettingsUpdate
    mr r30, r3
lbl_8020DEB8:
    neg r0, r30
    or r0, r0, r30
    srwi r3, r0, 31
lbl_8020DEC4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020DEE0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020DEE0() {
    nofralloc
    addi r3, r3, 0x18
    blr
}

// ----------------------------------------------------------------------------
// fn_8020DEE8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020DEE8() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r4, r3
    stw r0, 0x24(r1)
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8020DF30
    cmpwi r8, 0x2
    beq lbl_8020DF30
    lwz r0, 0x0(r5)
    addi r3, r1, 0x8
    addi r4, r4, 0x40
    stw r0, 0x8(r1)
    lwz r0, 0x4(r5)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x10(r1)
    bl AXFXReverbStdExpCallback
lbl_8020DF30:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

