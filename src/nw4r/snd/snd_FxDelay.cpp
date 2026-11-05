#include "types.h"

// Translation unit: src/nw4r/snd/unk_8020BD8C.cpp
// Total functions: 18

// Small Data symbols (@sda21)
extern "C" float lbl_804A2090;
extern "C" float lbl_804A2094;
extern "C" float lbl_804A2098;
extern "C" float lbl_804A209C;
extern "C" float lbl_804A20A0;
extern "C" float lbl_804A20A8;
extern "C" float lbl_804A20B0;
extern "C" float lbl_804A20B4;
extern "C" float lbl_804A20B8;
extern "C" float lbl_804A20BC;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8033EBF8[];
extern "C" u8 lbl_8033ECF8[];

// Forward declarations
extern "C" void AttachExternalSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail19ExternalSoundPlayer();
extern "C" void DetachExternalSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail19ExternalSoundPlayer();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode();
extern "C" void GetInstance__Q44nw4r3snd6detail11SoundThreadFv();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void OSLockMutex();
extern "C" void OSUnlockMutex();
extern "C" void __ct__Q44nw4r3snd6detail9FrameHeapFv();
extern "C" void __dt__Q34nw4r2ut19DvdLockedFileStreamFv();
extern "C" void __dt__Q44nw4r2ut6detail12LinkListImplFv();
extern "C" void __dt__Q44nw4r3snd6detail9FrameHeapFv();
extern "C" void _restgpr_27();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_8020BD8C();
extern "C" void fn_8020BD94();
extern "C" void fn_8020BD9C();
extern "C" void fn_8020BDF4();
extern "C" void fn_8020BE38();
extern "C" void fn_8020BE78();
extern "C" void fn_8020BE90();
extern "C" void fn_8020BEBC();
extern "C" void fn_8020C018();
extern "C" void fn_8020C030();
extern "C" void fn_8020C048();
extern "C" void fn_8020C0E8();
extern "C" void fn_8020C0F0();
extern "C" void fn_8020C190();
extern "C" void fn_8020C330();
extern "C" void fn_8020C378();
extern "C" void fn_8030C6F0();
extern "C" void fn_8030C840();

// ----------------------------------------------------------------------------
// fn_8020BD8C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020BD8C() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_8020BD94
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020BD94() {
    nofralloc
    li r3, 0x0
    blr
}

// ----------------------------------------------------------------------------
// fn_8020BD9C
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020BD9C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_8020BDD8
    li r4, 0x0
    bl __dt__Q34nw4r2ut19DvdLockedFileStreamFv
    cmpwi r31, 0x0
    ble lbl_8020BDD8
    mr r3, r30
    bl dtor_80136CFC
lbl_8020BDD8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8020BDF4
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020BDF4() {
    nofralloc
    lfs f1, lbl_804A2090
    li r4, 0x0
    lfs f0, lbl_804A2098
    lis r5, lbl_8033ECF8@ha
    addi r5, r5, lbl_8033ECF8@l
    lfs f2, lbl_804A2094
    fmuls f0, f0, f1
    lfs f1, 0x1fc(r5)
    li r0, 0x7f
    sth r4, 0x16(r3)
    stfs f1, 0x10(r3)
    stfs f2, 0x8(r3)
    stb r0, 0x14(r3)
    stfs f2, 0xc(r3)
    stfs f0, 0x4(r3)
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8020BE38
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020BE38() {
    nofralloc
    lfs f0, lbl_804A2098
    li r4, 0x0
    lis r5, lbl_8033ECF8@ha
    lfs f2, lbl_804A2094
    fmuls f0, f0, f1
    addi r5, r5, lbl_8033ECF8@l
    lfs f1, 0x1fc(r5)
    li r0, 0x7f
    sth r4, 0x16(r3)
    stfs f1, 0x10(r3)
    stfs f2, 0x8(r3)
    stb r0, 0x14(r3)
    stfs f2, 0xc(r3)
    stfs f0, 0x4(r3)
    stw r4, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8020BE78
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020BE78() {
    nofralloc
    lfs f0, lbl_804A2098
    li r0, 0x0
    stw r0, 0x0(r3)
    fmuls f0, f0, f1
    stfs f0, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8020BE90
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020BE90() {
    nofralloc
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_8020BEAC
    lfs f1, lbl_804A209C
    lfs f0, 0x10(r3)
    fcmpu cr0, f1, f0
    beqlr
lbl_8020BEAC:
    lfs f1, 0x4(r3)
    lfs f0, lbl_804A2098
    fdivs f1, f1, f0
    blr
}

// ----------------------------------------------------------------------------
// fn_8020BEBC
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020BEBC() {
    nofralloc
    stwu r1, -0x20(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x2
    beq lbl_8020BF70
    bge lbl_8020BEE0
    cmpwi r0, 0x0
    beq lbl_8020BEEC
    bge lbl_8020BF38
    b lbl_8020C010
lbl_8020BEE0:
    cmpwi r0, 0x4
    beq lbl_8020BFE0
    b lbl_8020C010
lbl_8020BEEC:
    lfs f0, lbl_804A20A0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_8020C010
lbl_8020BEFC:
    lfs f2, 0x4(r3)
    lfs f1, 0x10(r3)
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    stfs f1, 0x4(r3)
    ble lbl_8020BF30
    lfs f0, lbl_804A209C
    li r4, 0x1
    lhz r0, 0x16(r3)
    stfs f0, 0x4(r3)
    stw r4, 0x0(r3)
    sth r0, 0x18(r3)
    b lbl_8020C010
lbl_8020BF30:
    bdnz lbl_8020BEFC
    b lbl_8020C010
lbl_8020BF38:
    lhz r6, 0x18(r3)
    cmpw r4, r6
    bge lbl_8020BF50
    subf r0, r4, r6
    sth r0, 0x18(r3)
    b lbl_8020BF64
lbl_8020BF50:
    li r5, 0x0
    li r0, 0x2
    sth r5, 0x18(r3)
    subf r4, r6, r4
    stw r0, 0x0(r3)
lbl_8020BF64:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x2
    bne lbl_8020C010
lbl_8020BF70:
    lis r5, 0x4330
    xoris r0, r4, 0x8000
    lbz r6, 0x14(r3)
    lis r4, lbl_8033EBF8@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_8033EBF8@l
    slwi r0, r6, 1
    lfd f3, lbl_804A20A8
    stw r5, 0x10(r1)
    lhax r0, r4, r0
    lfd f0, 0x10(r1)
    xoris r0, r0, 0x8000
    lfs f1, 0x8(r3)
    fsubs f2, f0, f3
    stw r0, 0xc(r1)
    lfs f0, 0x4(r3)
    stw r5, 0x8(r1)
    fmuls f1, f1, f2
    lfd f2, 0x8(r1)
    fsubs f0, f0, f1
    fsubs f1, f2, f3
    stfs f0, 0x4(r3)
    fcmpo cr0, f0, f1
    bge lbl_8020C010
    li r0, 0x3
    stfs f1, 0x4(r3)
    stw r0, 0x0(r3)
    b lbl_8020C010
lbl_8020BFE0:
    xoris r4, r4, 0x8000
    lis r0, 0x4330
    stw r4, 0x14(r1)
    lfd f3, lbl_804A20A8
    stw r0, 0x10(r1)
    lfs f1, 0xc(r3)
    lfd f2, 0x10(r1)
    lfs f0, 0x4(r3)
    fsubs f2, f2, f3
    fmuls f1, f1, f2
    fsubs f0, f0, f1
    stfs f0, 0x4(r3)
lbl_8020C010:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020C018
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020C018() {
    nofralloc
    lis r5, lbl_8033ECF8@ha
    slwi r0, r4, 2
    addi r5, r5, lbl_8033ECF8@l
    lfsx f0, r5, r0
    stfs f0, 0x10(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8020C030
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020C030() {
    nofralloc
    addi r0, r4, 0x1
    mullw r0, r0, r0
    srawi r0, r0, 2
    addze r0, r0
    sth r0, 0x16(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8020C048
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020C048() {
    nofralloc
    cmpwi r4, 0x7f
    stwu r1, -0x20(r1)
    bne lbl_8020C05C
    lfs f0, lbl_804A2094
    b lbl_8020C0DC
lbl_8020C05C:
    cmpwi r4, 0x7e
    bne lbl_8020C06C
    lfs f0, lbl_804A20B0
    b lbl_8020C0DC
lbl_8020C06C:
    cmpwi r4, 0x32
    bge lbl_8020C0AC
    slwi r4, r4, 1
    lis r0, 0x4330
    addi r4, r4, 0x1
    stw r0, 0x8(r1)
    xoris r0, r4, 0x8000
    lfd f3, lbl_804A20A8
    stw r0, 0xc(r1)
    lfs f1, lbl_804A20B4
    lfd f2, 0x8(r1)
    lfs f0, lbl_804A20B8
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fdivs f0, f1, f0
    b lbl_8020C0DC
lbl_8020C0AC:
    subfic r4, r4, 0x7e
    lis r0, 0x4330
    xoris r4, r4, 0x8000
    stw r0, 0x10(r1)
    lfd f3, lbl_804A20A8
    stw r4, 0x14(r1)
    lfs f1, lbl_804A20BC
    lfd f2, 0x10(r1)
    lfs f0, lbl_804A20B8
    fsubs f2, f2, f3
    fdivs f1, f1, f2
    fdivs f0, f1, f0
lbl_8020C0DC:
    stfs f0, 0x8(r3)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020C0E8
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020C0E8() {
    nofralloc
    stb r4, 0x14(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_8020C0F0
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020C0F0() {
    nofralloc
    cmpwi r4, 0x7f
    stwu r1, -0x20(r1)
    bne lbl_8020C104
    lfs f0, lbl_804A2094
    b lbl_8020C184
lbl_8020C104:
    cmpwi r4, 0x7e
    bne lbl_8020C114
    lfs f0, lbl_804A20B0
    b lbl_8020C184
lbl_8020C114:
    cmpwi r4, 0x32
    bge lbl_8020C154
    slwi r4, r4, 1
    lis r0, 0x4330
    addi r4, r4, 0x1
    stw r0, 0x8(r1)
    xoris r0, r4, 0x8000
    lfd f3, lbl_804A20A8
    stw r0, 0xc(r1)
    lfs f1, lbl_804A20B4
    lfd f2, 0x8(r1)
    lfs f0, lbl_804A20B8
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fdivs f0, f1, f0
    b lbl_8020C184
lbl_8020C154:
    subfic r4, r4, 0x7e
    lis r0, 0x4330
    xoris r4, r4, 0x8000
    stw r0, 0x10(r1)
    lfd f3, lbl_804A20A8
    stw r4, 0x14(r1)
    lfs f1, lbl_804A20BC
    lfd f2, 0x10(r1)
    lfs f0, lbl_804A20B8
    fsubs f2, f2, f3
    fdivs f1, f1, f2
    fdivs f0, f1, f0
lbl_8020C184:
    stfs f0, 0xc(r3)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8020C190
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020C190() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSLockMutex
    lbz r3, 0x94(r30)
    lwz r0, 0x50(r30)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_8020C1DC
    li r31, 0x7f
    b lbl_8020C1E4
lbl_8020C1DC:
    srawi r0, r3, 31
    andc r31, r3, r0
lbl_8020C1E4:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_8020C204
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8020C310
lbl_8020C204:
    addi r28, r29, 0x4
    b lbl_8020C2CC
lbl_8020C20C:
    lwz r4, 0x4(r29)
    li r6, 0x80
    li r3, 0x0
    b lbl_8020C258
lbl_8020C21C:
    lbz r5, -0x70(r4)
    subi r7, r4, 0x104
    lwz r0, -0xb4(r4)
    add r5, r5, r0
    cmpwi r5, 0x7f
    ble lbl_8020C23C
    li r0, 0x7f
    b lbl_8020C244
lbl_8020C23C:
    srawi r0, r5, 31
    andc r0, r5, r0
lbl_8020C244:
    cmpw r6, r0
    ble lbl_8020C254
    mr r3, r7
    mr r6, r0
lbl_8020C254:
    lwz r4, 0x0(r4)
lbl_8020C258:
    cmplw r4, r28
    bne lbl_8020C21C
    cmpwi r3, 0x0
    bne lbl_8020C27C
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8020C310
lbl_8020C27C:
    lbz r4, 0x94(r3)
    lwz r0, 0x50(r3)
    add r4, r4, r0
    cmpwi r4, 0x7f
    ble lbl_8020C298
    li r0, 0x7f
    b lbl_8020C2A0
lbl_8020C298:
    srawi r0, r4, 31
    andc r0, r4, r0
lbl_8020C2A0:
    cmpw r31, r0
    bge lbl_8020C2BC
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x0
    b lbl_8020C310
lbl_8020C2BC:
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_8020C2CC:
    lwz r3, 0x0(r29)
    lwz r0, 0xc(r29)
    cmpw r3, r0
    bge lbl_8020C20C
    addi r0, r29, 0x4
    mr r3, r29
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    addi r5, r30, 0x104
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    mr r3, r30
    mr r4, r29
    bl AttachExternalSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail19ExternalSoundPlayer
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    addi r3, r3, 0x354
    bl OSUnlockMutex
    li r3, 0x1
lbl_8020C310:
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
// fn_8020C330
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020C330() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    addi r4, r4, 0x104
    stw r30, 0x8(r1)
    mr r30, r3
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    mr r3, r31
    mr r4, r30
    bl DetachExternalSoundPlayer__Q44nw4r3snd6detail10BasicSoundFPQ44nw4r3snd6detail19ExternalSoundPlayer
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8020C378
// ----------------------------------------------------------------------------
extern "C" asm void fn_8020C378() {
    nofralloc
    lwz r5, 0xc(r3)
    cmpwi r5, 0x0
    bne lbl_8020C38C
    li r3, 0x0
    blr
lbl_8020C38C:
    lwz r0, 0x0(r3)
    cmpw r0, r5
    blt lbl_8020C434
    lwz r5, 0x4(r3)
    addi r0, r3, 0x4
    li r8, 0x80
    li r7, 0x0
    b lbl_8020C3E8
lbl_8020C3AC:
    lbz r6, -0x70(r5)
    subi r9, r5, 0x104
    lwz r3, -0xb4(r5)
    add r6, r6, r3
    cmpwi r6, 0x7f
    ble lbl_8020C3CC
    li r3, 0x7f
    b lbl_8020C3D4
lbl_8020C3CC:
    srawi r3, r6, 31
    andc r3, r6, r3
lbl_8020C3D4:
    cmpw r8, r3
    ble lbl_8020C3E4
    mr r7, r9
    mr r8, r3
lbl_8020C3E4:
    lwz r5, 0x0(r5)
lbl_8020C3E8:
    cmplw r5, r0
    bne lbl_8020C3AC
    cmpwi r7, 0x0
    bne lbl_8020C400
    li r3, 0x0
    blr
lbl_8020C400:
    lbz r3, 0x94(r7)
    lwz r0, 0x50(r7)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_8020C41C
    li r0, 0x7f
    b lbl_8020C424
lbl_8020C41C:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_8020C424:
    cmpw r4, r0
    bge lbl_8020C434
    li r3, 0x0
    blr
lbl_8020C434:
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// __ct__Q44nw4r3snd6detail9FrameHeapFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q44nw4r3snd6detail9FrameHeapFv() {
    nofralloc
    li r0, 0x0
    addi r4, r3, 0x8
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail9FrameHeapFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail9FrameHeapFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    beq lbl_8020C558
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8020C538
    beq lbl_8020C538
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_8020C51C
    addi r31, r3, 0x8
    b lbl_8020C510
lbl_8020C4A8:
    lwz r29, 0x4(r31)
    cmpwi r29, 0x0
    beq lbl_8020C504
    addi r30, r29, 0xc
    b lbl_8020C4E8
lbl_8020C4BC:
    lwz r30, 0x4(r30)
    cmpwi r30, 0x0
    beq lbl_8020C4E8
    lwz r12, 0x10(r30)
    cmpwi r12, 0x0
    beq lbl_8020C4E8
    lwz r3, 0x8(r30)
    lwz r4, 0xc(r30)
    lwz r5, 0x14(r30)
    mtctr r12
    bctrl
lbl_8020C4E8:
    lwz r0, 0xc(r29)
    cmplw r30, r0
    bne lbl_8020C4BC
    addic. r3, r29, 0x8
    beq lbl_8020C504
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_8020C504:
    mr r4, r29
    addi r3, r27, 0x4
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
lbl_8020C510:
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    bne lbl_8020C4A8
lbl_8020C51C:
    lwz r3, 0x0(r27)
    li r4, 0x3
    bl fn_8030C840
    lwz r3, 0x0(r27)
    bl fn_8030C6F0
    li r0, 0x0
    stw r0, 0x0(r27)
lbl_8020C538:
    addic. r3, r27, 0x4
    beq lbl_8020C548
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_8020C548:
    cmpwi r28, 0x0
    ble lbl_8020C558
    mr r3, r27
    bl dtor_80136CFC
lbl_8020C558:
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

