#include "types.h"

// Translation unit: src/nw4r/snd/snd_SoundStartable.cpp
// Total functions: 4

// Forward declarations
extern "C" void detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo();
extern "C" void detail_PrepareSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandleUlPCQ44nw4r3snd14SoundStartable9StartInfo();
extern "C" void detail_StartSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo();
extern "C" void fn_8019B3E8();
extern "C" void fn_80253AD0();
extern "C" void memcpy();
extern "C" void memmove();

// ----------------------------------------------------------------------------
// detail_StartSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo
// ----------------------------------------------------------------------------
extern "C" asm void detail_StartSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r7, 0x0(r3)
    subi r8, r7, 0x1
    cmpw r4, r8
    bge lbl_802539C0
    cmpwi r4, 0x0
    blt lbl_80253968
    cmpw r4, r7
    blt lbl_80253970
lbl_80253968:
    li r6, 0x0
    b lbl_80253980
lbl_80253970:
    lwz r0, 0x8(r3)
    lwz r5, 0x14(r3)
    mullw r0, r0, r4
    add r6, r5, r0
lbl_80253980:
    addic. r5, r4, 0x1
    blt lbl_80253990
    cmpw r5, r7
    blt lbl_80253998
lbl_80253990:
    li r7, 0x0
    b lbl_802539A8
lbl_80253998:
    lwz r0, 0x8(r3)
    lwz r3, 0x14(r3)
    mullw r0, r0, r5
    add r7, r3, r0
lbl_802539A8:
    lwz r5, 0x8(r31)
    subf r0, r4, r8
    mr r3, r6
    mr r4, r7
    mullw r5, r5, r0
    bl memmove
lbl_802539C0:
    lwz r3, 0x0(r31)
    subi r0, r3, 0x1
    stw r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo
// ----------------------------------------------------------------------------
extern "C" asm void detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r12, 0x10(r3)
    cmpwi r12, 0x0
    beq lbl_80253A3C
    cmpwi r4, 0x0
    blt lbl_80253A1C
    lwz r0, 0x0(r3)
    cmpw r4, r0
    blt lbl_80253A24
lbl_80253A1C:
    li r3, 0x0
    b lbl_80253A34
lbl_80253A24:
    lwz r0, 0x8(r3)
    lwz r3, 0x14(r3)
    mullw r0, r0, r4
    add r3, r3, r0
lbl_80253A34:
    mtctr r12
    bctrl
lbl_80253A3C:
    lwz r4, 0x0(r31)
    subi r6, r4, 0x1
    cmpw r30, r6
    bge lbl_80253AAC
    cmpwi r30, 0x0
    blt lbl_80253A5C
    cmpw r30, r4
    blt lbl_80253A64
lbl_80253A5C:
    li r3, 0x0
    b lbl_80253A74
lbl_80253A64:
    lwz r0, 0x8(r31)
    lwz r3, 0x14(r31)
    mullw r0, r0, r30
    add r3, r3, r0
lbl_80253A74:
    addic. r5, r30, 0x1
    blt lbl_80253A84
    cmpw r5, r4
    blt lbl_80253A8C
lbl_80253A84:
    li r4, 0x0
    b lbl_80253A9C
lbl_80253A8C:
    lwz r0, 0x8(r31)
    lwz r4, 0x14(r31)
    mullw r0, r0, r5
    add r4, r4, r0
lbl_80253A9C:
    lwz r5, 0x8(r31)
    subf r0, r30, r6
    mullw r5, r5, r0
    bl memmove
lbl_80253AAC:
    lwz r3, 0x0(r31)
    subi r0, r3, 0x1
    stw r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80253AD0
// ----------------------------------------------------------------------------
extern "C" asm void fn_80253AD0() {
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
    lwz r12, 0x10(r3)
    cmpwi r12, 0x0
    beq lbl_80253B34
    cmpwi r5, 0x0
    blt lbl_80253B14
    lwz r0, 0x0(r3)
    cmpw r5, r0
    blt lbl_80253B1C
lbl_80253B14:
    li r3, 0x0
    b lbl_80253B2C
lbl_80253B1C:
    lwz r0, 0x8(r3)
    lwz r3, 0x14(r3)
    mullw r0, r0, r5
    add r3, r3, r0
lbl_80253B2C:
    mtctr r12
    bctrl
lbl_80253B34:
    cmpwi r31, 0x0
    blt lbl_80253B48
    lwz r0, 0x0(r29)
    cmpw r31, r0
    blt lbl_80253B50
lbl_80253B48:
    li r3, 0x0
    b lbl_80253B60
lbl_80253B50:
    lwz r0, 0x8(r29)
    lwz r3, 0x14(r29)
    mullw r0, r0, r31
    add r3, r3, r0
lbl_80253B60:
    lwz r5, 0x8(r29)
    mr r4, r30
    bl memcpy
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// detail_PrepareSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandleUlPCQ44nw4r3snd14SoundStartable9StartInfo
// ----------------------------------------------------------------------------
extern "C" asm void detail_PrepareSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandleUlPCQ44nw4r3snd14SoundStartable9StartInfo() {
    nofralloc
    mr r5, r3
    mr r6, r4
    lwz r4, 0x0(r5)
    lwz r3, 0x14(r3)
    lwz r5, 0x8(r5)
    b fn_8019B3E8
}

