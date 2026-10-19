#include "types.h"

// Translation unit: src/nw4r/snd/snd_StrmSound.cpp
// Total functions: 16

// Small Data symbols (@sda21)
extern "C" float lbl_8049DA30;
extern "C" float lbl_8049DA80;
extern "C" float lbl_804A2208;
extern "C" float lbl_804A220C;
extern "C" float lbl_804A2210;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_803629C8[];

// Forward declarations
extern "C" void DetachTempSpecialHandle__Q44nw4r3snd6detail9StrmSoundFv();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode();
extern "C" void FreeImpl__Q44nw4r3snd6detail8PoolImplFPv();
extern "C" void GetBasicPlayer__Q44nw4r3snd6detail9StrmSoundCFv();
extern "C" void GetBasicPlayer__Q44nw4r3snd6detail9StrmSoundFv();
extern "C" void GetPlayerTrack__Q44nw4r3snd6detail10StrmPlayerFi();
extern "C" void GetRuntimeTypeInfo__Q44nw4r3snd6detail9StrmSoundCFv();
extern "C" void GetVoiceOutCount__Q44nw4r3snd6detail10BasicSoundCFv();
extern "C" void InitParam__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void InitParam__Q44nw4r3snd6detail9StrmSoundFv();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void IsAttachedTempSpecialHandle__Q44nw4r3snd6detail9StrmSoundFv();
extern "C" void IsPrepared__Q44nw4r3snd6detail9StrmSoundCFv();
extern "C" void OSLockMutex();
extern "C" void OSUnlockMutex();
extern "C" void OnUpdatePlayerPriority__Q44nw4r3snd6detail9StrmSoundFv();
extern "C" void Prepare__Q44nw4r3snd6detail10StrmPlayerFPQ34nw4r2ut10FileStreamQ54nw4r3snd6detail10StrmPlayer15StartOffsetTypei();
extern "C" void Prepare__Q44nw4r3snd6detail9StrmSoundFQ54nw4r3snd6detail10StrmPlayer15StartOffsetTypelPQ34nw4r2ut10FileStream();
extern "C" void SetTrackVolume__Q44nw4r3snd6detail10StrmPlayerFUlf();
extern "C" void Setup__Q44nw4r3snd6detail10StrmPlayerFPQ44nw4r3snd6detail14StrmBufferPooliUsi();
extern "C" void Setup__Q44nw4r3snd6detail9StrmSoundFPQ44nw4r3snd6detail14StrmBufferPooliUs();
extern "C" void Shutdown__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void Shutdown__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void Shutdown__Q44nw4r3snd6detail9StrmSoundFv();
extern "C" void UpdateMoveValue__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void UpdateMoveValue__Q44nw4r3snd6detail9StrmSoundFv();
extern "C" void UpdateParam__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void UpdateParam__Q44nw4r3snd6detail9StrmSoundFv();
extern "C" void __ct__Q44nw4r3snd6detail10BasicSoundFii();
extern "C" void __ct__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void __dt__Q44nw4r3snd6detail10StrmPlayerFv();
extern "C" void __dt__Q44nw4r3snd6detail9StrmSoundFv();
extern "C" void _restgpr_27();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_8021C974();
extern "C" void fn_8021D0F8();
extern "C" void fn_8021D104();

// ----------------------------------------------------------------------------
// fn_8021C974
// ----------------------------------------------------------------------------
extern "C" asm void fn_8021C974() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    mr r4, r5
    mr r5, r6
    bl __ct__Q44nw4r3snd6detail10BasicSoundFii
    lis r4, lbl_803629C8@ha
    addi r3, r31, 0x10c
    addi r4, r4, lbl_803629C8@l
    stw r4, 0x0(r31)
    bl __ct__Q44nw4r3snd6detail10StrmPlayerFv
    lfs f0, lbl_804A2208
    addi r5, r31, 0xe5c
    li r0, 0x0
    addi r3, r31, 0xecc
    cmplw r5, r3
    stw r0, 0xe44(r31)
    stw r30, 0xe48(r31)
    stfs f0, 0xe4c(r31)
    stfs f0, 0xe50(r31)
    stw r0, 0xe54(r31)
    stw r0, 0xe58(r31)
    bge lbl_8021CB54
    addi r6, r31, 0xe5c
    addi r4, r31, 0xe4c
    subf r7, r6, r3
    addi r8, r7, 0xf
    srawi r0, r8, 4
    addze r9, r0
    addi r10, r9, 0x1
    cmpwi r10, 0x8
    ble lbl_8021CB18
    cmplw r6, r3
    li r3, 0x0
    li r6, 0x0
    bgt lbl_8021CA38
    clrrwi. r0, r7, 31
    li r7, 0x1
    bne lbl_8021CA2C
    clrrwi. r0, r8, 31
    beq lbl_8021CA2C
    li r7, 0x0
lbl_8021CA2C:
    cmpwi r7, 0x0
    beq lbl_8021CA38
    li r6, 0x1
lbl_8021CA38:
    cmpwi r6, 0x0
    beq lbl_8021CA68
    clrrwi. r7, r9, 31
    li r6, 0x1
    bne lbl_8021CA5C
    clrrwi r0, r10, 31
    cmpw r7, r0
    beq lbl_8021CA5C
    li r6, 0x0
lbl_8021CA5C:
    cmpwi r6, 0x0
    beq lbl_8021CA68
    li r3, 0x1
lbl_8021CA68:
    cmpwi r3, 0x0
    beq lbl_8021CB18
    addi r0, r4, 0x7f
    lfs f0, lbl_804A2208
    subf r0, r5, r0
    li r3, 0x0
    srwi r0, r0, 7
    mtctr r0
    cmplw r5, r4
    bge lbl_8021CB18
lbl_8021CA90:
    stfs f0, 0x0(r5)
    stfs f0, 0x4(r5)
    stw r3, 0x8(r5)
    stw r3, 0xc(r5)
    stfs f0, 0x10(r5)
    stfs f0, 0x14(r5)
    stw r3, 0x18(r5)
    stw r3, 0x1c(r5)
    stfs f0, 0x20(r5)
    stfs f0, 0x24(r5)
    stw r3, 0x28(r5)
    stw r3, 0x2c(r5)
    stfs f0, 0x30(r5)
    stfs f0, 0x34(r5)
    stw r3, 0x38(r5)
    stw r3, 0x3c(r5)
    stfs f0, 0x40(r5)
    stfs f0, 0x44(r5)
    stw r3, 0x48(r5)
    stw r3, 0x4c(r5)
    stfs f0, 0x50(r5)
    stfs f0, 0x54(r5)
    stw r3, 0x58(r5)
    stw r3, 0x5c(r5)
    stfs f0, 0x60(r5)
    stfs f0, 0x64(r5)
    stw r3, 0x68(r5)
    stw r3, 0x6c(r5)
    stfs f0, 0x70(r5)
    stfs f0, 0x74(r5)
    stw r3, 0x78(r5)
    stw r3, 0x7c(r5)
    addi r5, r5, 0x80
    bdnz lbl_8021CA90
lbl_8021CB18:
    addi r3, r31, 0xecc
    lfs f0, lbl_804A2208
    addi r0, r3, 0xf
    li r4, 0x0
    subf r0, r5, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r5, r3
    bge lbl_8021CB54
lbl_8021CB3C:
    stfs f0, 0x0(r5)
    stfs f0, 0x4(r5)
    stw r4, 0x8(r5)
    stw r4, 0xc(r5)
    addi r5, r5, 0x10
    bdnz lbl_8021CB3C
lbl_8021CB54:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// InitParam__Q44nw4r3snd6detail9StrmSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void InitParam__Q44nw4r3snd6detail9StrmSoundFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl InitParam__Q44nw4r3snd6detail10BasicSoundFv
    li r0, 0x4
    lfs f6, lbl_804A2208
    li r6, 0x0
    lfd f5, lbl_804A2210
    li r5, 0x0
    lfs f0, lbl_804A220C
    lis r4, 0x4330
    li r3, 0x1
    mtctr r0
lbl_8021CBAC:
    stfs f6, 0xe4c(r31)
    cmpw r5, r5
    stfs f6, 0xe50(r31)
    stw r5, 0xe54(r31)
    stw r5, 0xe58(r31)
    blt lbl_8021CBCC
    lfs f1, 0xe50(r31)
    b lbl_8021CC08
lbl_8021CBCC:
    xoris r0, r5, 0x8000
    stw r4, 0x8(r1)
    lfs f1, 0xe50(r31)
    stw r0, 0xc(r1)
    lfs f3, 0xe4c(r31)
    lfd f4, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f2, f1, f3
    fsubs f4, f4, f5
    stw r4, 0x10(r1)
    lfd f1, 0x10(r1)
    fmuls f2, f4, f2
    fsubs f1, f1, f5
    fdivs f1, f2, f1
    fadds f1, f3, f1
lbl_8021CC08:
    stfs f1, 0xe4c(r31)
    cmpw r5, r5
    stfs f0, 0xe50(r31)
    stw r3, 0xe54(r31)
    stw r5, 0xe58(r31)
    stfs f6, 0xe5c(r31)
    stfs f6, 0xe60(r31)
    stw r5, 0xe64(r31)
    stw r5, 0xe68(r31)
    blt lbl_8021CC38
    lfs f1, 0xe60(r31)
    b lbl_8021CC74
lbl_8021CC38:
    xoris r0, r5, 0x8000
    stw r4, 0x8(r1)
    lfs f1, 0xe60(r31)
    stw r0, 0xc(r1)
    lfs f3, 0xe5c(r31)
    lfd f4, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f2, f1, f3
    fsubs f4, f4, f5
    stw r4, 0x10(r1)
    lfd f1, 0x10(r1)
    fmuls f2, f4, f2
    fsubs f1, f1, f5
    fdivs f1, f2, f1
    fadds f1, f3, f1
lbl_8021CC74:
    stfs f1, 0xe5c(r31)
    addi r6, r6, 0x1
    stfs f0, 0xe60(r31)
    stw r3, 0xe64(r31)
    stw r5, 0xe68(r31)
    addi r31, r31, 0x20
    bdnz lbl_8021CBAC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Setup__Q44nw4r3snd6detail9StrmSoundFPQ44nw4r3snd6detail14StrmBufferPooliUs
// ----------------------------------------------------------------------------
extern "C" asm void Setup__Q44nw4r3snd6detail9StrmSoundFPQ44nw4r3snd6detail14StrmBufferPooliUs() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    mr r3, r28
    bl GetVoiceOutCount__Q44nw4r3snd6detail10BasicSoundCFv
    mr r7, r3
    mr r4, r29
    mr r5, r30
    mr r6, r31
    addi r3, r28, 0x10c
    bl Setup__Q44nw4r3snd6detail10StrmPlayerFPQ44nw4r3snd6detail14StrmBufferPooliUsi
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
// Prepare__Q44nw4r3snd6detail9StrmSoundFQ54nw4r3snd6detail10StrmPlayer15StartOffsetTypelPQ34nw4r2ut10FileStream
// ----------------------------------------------------------------------------
extern "C" asm void Prepare__Q44nw4r3snd6detail9StrmSoundFQ54nw4r3snd6detail10StrmPlayer15StartOffsetTypelPQ34nw4r2ut10FileStream() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r7, r4
    mr r4, r6
    stw r0, 0x14(r1)
    mr r0, r5
    mr r5, r7
    stw r31, 0xc(r1)
    mr r31, r3
    mr r6, r0
    addi r3, r3, 0x10c
    bl Prepare__Q44nw4r3snd6detail10StrmPlayerFPQ34nw4r2ut10FileStreamQ54nw4r3snd6detail10StrmPlayer15StartOffsetTypei
    cmpwi r3, 0x0
    bne lbl_8021CD68
    addi r3, r31, 0x10c
    bl Shutdown__Q44nw4r3snd6detail10StrmPlayerFv
    li r3, 0x0
    b lbl_8021CD6C
lbl_8021CD68:
    li r3, 0x1
lbl_8021CD6C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// UpdateMoveValue__Q44nw4r3snd6detail9StrmSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateMoveValue__Q44nw4r3snd6detail9StrmSoundFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl UpdateMoveValue__Q44nw4r3snd6detail10BasicSoundFv
    mr r31, r29
    li r30, 0x0
lbl_8021CDA8:
    mr r4, r30
    addi r3, r29, 0x10c
    bl GetPlayerTrack__Q44nw4r3snd6detail10StrmPlayerFi
    cmpwi r3, 0x0
    beq lbl_8021CDD4
    lwz r3, 0xe58(r31)
    lwz r0, 0xe54(r31)
    cmpw r3, r0
    bge lbl_8021CDD4
    addi r0, r3, 0x1
    stw r0, 0xe58(r31)
lbl_8021CDD4:
    addi r30, r30, 0x1
    addi r31, r31, 0x10
    cmpwi r30, 0x8
    blt lbl_8021CDA8
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// UpdateParam__Q44nw4r3snd6detail9StrmSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void UpdateParam__Q44nw4r3snd6detail9StrmSoundFv() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    opword 0xF3E10038
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    bl UpdateParam__Q44nw4r3snd6detail10BasicSoundFv
    lfd f31, lbl_804A2210
    mr r29, r27
    li r28, 0x0
    li r30, 0x1
    lis r31, 0x4330
lbl_8021CE38:
    mr r4, r28
    addi r3, r27, 0x10c
    bl GetPlayerTrack__Q44nw4r3snd6detail10StrmPlayerFi
    cmpwi r3, 0x0
    beq lbl_8021CEB0
    lwz r6, 0xe54(r29)
    addi r3, r27, 0x10c
    lwz r0, 0xe58(r29)
    slw r4, r30, r28
    cmpw r0, r6
    blt lbl_8021CE6C
    lfs f1, 0xe50(r29)
    b lbl_8021CEAC
lbl_8021CE6C:
    xoris r5, r0, 0x8000
    xoris r0, r6, 0x8000
    stw r5, 0xc(r1)
    lfs f0, 0xe50(r29)
    stw r31, 0x8(r1)
    lfs f2, 0xe4c(r29)
    lfd f3, 0x8(r1)
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    fsubs f3, f3, f31
    stw r31, 0x10(r1)
    lfd f0, 0x10(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f31
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_8021CEAC:
    bl SetTrackVolume__Q44nw4r3snd6detail10StrmPlayerFUlf
lbl_8021CEB0:
    addi r28, r28, 0x1
    addi r29, r29, 0x10
    cmpwi r28, 0x8
    blt lbl_8021CE38
    opword 0xE3E10038
    addi r11, r1, 0x30
    lfd f31, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// Shutdown__Q44nw4r3snd6detail9StrmSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void Shutdown__Q44nw4r3snd6detail9StrmSoundFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl Shutdown__Q44nw4r3snd6detail10BasicSoundFv
    lwz r30, 0xe48(r29)
    addi r31, r30, 0x10
    mr r3, r31
    bl OSLockMutex
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_8021CF28
    mr r3, r31
    bl OSUnlockMutex
    b lbl_8021CF60
lbl_8021CF28:
    addi r3, r30, 0x4
    addi r4, r29, 0xec
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, -0x1
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r3, r30
    mr r4, r29
    bl FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
    mr r3, r31
    bl OSUnlockMutex
lbl_8021CF60:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail9StrmSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail9StrmSoundFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_8021CFBC
    li r4, -0x1
    addi r3, r3, 0x10c
    bl __dt__Q44nw4r3snd6detail10StrmPlayerFv
    cmpwi r31, 0x0
    ble lbl_8021CFBC
    mr r3, r30
    bl dtor_80136CFC
lbl_8021CFBC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// OnUpdatePlayerPriority__Q44nw4r3snd6detail9StrmSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void OnUpdatePlayerPriority__Q44nw4r3snd6detail9StrmSoundFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r4, 0x94(r3)
    lwz r0, 0x50(r3)
    add r4, r4, r0
    cmpwi r4, 0x7f
    ble lbl_8021D014
    li r29, 0x7f
    b lbl_8021D01C
lbl_8021D014:
    srawi r0, r4, 31
    andc r29, r4, r0
lbl_8021D01C:
    lwz r30, 0xe48(r3)
    addi r31, r30, 0x10
    mr r3, r31
    bl OSLockMutex
    addi r28, r28, 0xec
    addi r3, r30, 0x4
    mr r4, r28
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    lwz r3, 0x8(r30)
    addi r0, r30, 0x8
    b lbl_8021D078
lbl_8021D048:
    lbz r5, -0x58(r3)
    lwz r4, -0x9c(r3)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_8021D064
    li r4, 0x7f
    b lbl_8021D06C
lbl_8021D064:
    srawi r4, r5, 31
    andc r4, r5, r4
lbl_8021D06C:
    cmpw r29, r4
    blt lbl_8021D080
    lwz r3, 0x0(r3)
lbl_8021D078:
    cmplw r3, r0
    bne lbl_8021D048
lbl_8021D080:
    stw r3, 0x8(r1)
    mr r5, r28
    addi r3, r30, 0x4
    addi r4, r1, 0x8
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    mr r3, r31
    bl OSUnlockMutex
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
// IsAttachedTempSpecialHandle__Q44nw4r3snd6detail9StrmSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void IsAttachedTempSpecialHandle__Q44nw4r3snd6detail9StrmSoundFv() {
    nofralloc
    lwz r3, 0xe44(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// DetachTempSpecialHandle__Q44nw4r3snd6detail9StrmSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void DetachTempSpecialHandle__Q44nw4r3snd6detail9StrmSoundFv() {
    nofralloc
    lwz r3, 0xe44(r3)
    b fn_8021D104
}

// ----------------------------------------------------------------------------
// GetBasicPlayer__Q44nw4r3snd6detail9StrmSoundFv
// ----------------------------------------------------------------------------
extern "C" asm void GetBasicPlayer__Q44nw4r3snd6detail9StrmSoundFv() {
    nofralloc
    addi r3, r3, 0x10c
    blr
}

// ----------------------------------------------------------------------------
// GetBasicPlayer__Q44nw4r3snd6detail9StrmSoundCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetBasicPlayer__Q44nw4r3snd6detail9StrmSoundCFv() {
    nofralloc
    addi r3, r3, 0x10c
    blr
}

// ----------------------------------------------------------------------------
// IsPrepared__Q44nw4r3snd6detail9StrmSoundCFv
// ----------------------------------------------------------------------------
extern "C" asm void IsPrepared__Q44nw4r3snd6detail9StrmSoundCFv() {
    nofralloc
    lbz r3, 0x22f(r3)
    blr
}

// ----------------------------------------------------------------------------
// GetRuntimeTypeInfo__Q44nw4r3snd6detail9StrmSoundCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetRuntimeTypeInfo__Q44nw4r3snd6detail9StrmSoundCFv() {
    nofralloc
    la r3, lbl_8049DA80
    blr
}

// ----------------------------------------------------------------------------
// fn_8021D0F8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8021D0F8() {
    nofralloc
    la r0, lbl_8049DA30
    stw r0, lbl_8049DA80
    blr
}

