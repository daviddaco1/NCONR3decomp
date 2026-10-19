#include "types.h"

// Translation unit: src/revolution/hbm/synsample.cpp
// Total functions: 3

// Forward declarations
extern void __HBMSYNSetupAdpcm__FP11HBMSYNVOICE();
extern void __HBMSYNSetupPcm16__FP11HBMSYNVOICE();
extern void __HBMSYNSetupPcm8__FP11HBMSYNVOICE();

// ----------------------------------------------------------------------------
// __HBMSYNSetupAdpcm__FP11HBMSYNVOICE
// ----------------------------------------------------------------------------
asm void __HBMSYNSetupAdpcm__FP11HBMSYNVOICE() {
    nofralloc
    lwz r6, 0x10(r3)
    lwz r4, 0x4(r3)
    lwz r5, 0x8(r6)
    lwz r0, 0xc(r6)
    add. r0, r5, r0
    beq lbl_80304A50
    li r0, 0x1
    lis r5, 0x2492
    stw r0, 0x20(r3)
    addi r5, r5, 0x4925
    lwz r10, 0x8(r3)
    lis r8, 0x1
    lwz r0, 0x8(r6)
    lwz r7, 0xc(r6)
    mulhwu r6, r5, r0
    lwz r9, 0x18(r3)
    add r7, r0, r7
    lwz r10, 0x24(r10)
    lwz r9, 0x4(r9)
    subi r11, r7, 0x1
    mulhwu r7, r5, r11
    subf r5, r6, r0
    lwz r3, 0x1c(r3)
    add r10, r10, r9
    srwi r5, r5, 1
    stw r8, 0x96(r4)
    add r8, r5, r6
    subf r6, r7, r11
    srwi r9, r8, 3
    addi r5, r10, 0x2
    srwi r6, r6, 1
    extlwi r8, r8, 28, 1
    add r6, r6, r7
    srwi r7, r6, 3
    mulli r9, r9, 0xe
    extlwi r6, r6, 28, 1
    subf r0, r9, r0
    add r0, r0, r10
    mulli r7, r7, 0xe
    add r8, r0, r8
    subf r0, r7, r11
    addi r7, r8, 0x2
    add r0, r0, r10
    stw r7, 0x9a(r4)
    add r6, r0, r6
    addi r0, r6, 0x2
    stw r0, 0x9e(r4)
    stw r5, 0xa2(r4)
    lwz r0, 0x0(r3)
    stw r0, 0xa6(r4)
    lwz r0, 0x4(r3)
    stw r0, 0xaa(r4)
    lwz r0, 0x8(r3)
    stw r0, 0xae(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xb2(r4)
    lwz r0, 0x10(r3)
    stw r0, 0xb6(r4)
    lwz r0, 0x14(r3)
    stw r0, 0xba(r4)
    lwz r0, 0x18(r3)
    stw r0, 0xbe(r4)
    lwz r0, 0x1c(r3)
    stw r0, 0xc2(r4)
    lwz r0, 0x20(r3)
    stw r0, 0xc6(r4)
    lwz r0, 0x24(r3)
    stw r0, 0xca(r4)
    lhz r0, 0x28(r3)
    sth r0, 0xdc(r4)
    lhz r0, 0x2a(r3)
    sth r0, 0xde(r4)
    lhz r0, 0x2c(r3)
    sth r0, 0xe0(r4)
    lwz r0, 0x1c(r4)
    rlwinm r0, r0, 0, 21, 16
    oris r0, r0, 0x4
    ori r0, r0, 0x8400
    stw r0, 0x1c(r4)
    blr
lbl_80304A50:
    li r7, 0x0
    lis r5, 0x2492
    stw r7, 0x20(r3)
    addi r0, r5, 0x4925
    lwz r9, 0x18(r3)
    lwz r6, 0x8(r3)
    lwz r5, 0x8(r9)
    lwz r3, 0x1c(r3)
    subi r8, r5, 0x1
    lwz r5, 0x24(r6)
    mulhwu r6, r0, r8
    lwz r0, 0x4(r9)
    add r9, r5, r0
    stw r7, 0x96(r4)
    stw r9, 0x9a(r4)
    addi r0, r9, 0x2
    subf r5, r6, r8
    srwi r5, r5, 1
    add r6, r5, r6
    srwi r5, r6, 3
    mulli r7, r5, 0xe
    extlwi r5, r6, 28, 1
    subf r6, r7, r8
    add r6, r6, r9
    add r5, r6, r5
    addi r5, r5, 0x2
    stw r5, 0x9e(r4)
    stw r0, 0xa2(r4)
    lwz r0, 0x0(r3)
    stw r0, 0xa6(r4)
    lwz r0, 0x4(r3)
    stw r0, 0xaa(r4)
    lwz r0, 0x8(r3)
    stw r0, 0xae(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xb2(r4)
    lwz r0, 0x10(r3)
    stw r0, 0xb6(r4)
    lwz r0, 0x14(r3)
    stw r0, 0xba(r4)
    lwz r0, 0x18(r3)
    stw r0, 0xbe(r4)
    lwz r0, 0x1c(r3)
    stw r0, 0xc2(r4)
    lwz r0, 0x20(r3)
    stw r0, 0xc6(r4)
    lwz r0, 0x24(r3)
    stw r0, 0xca(r4)
    lwz r0, 0x1c(r4)
    rlwinm r0, r0, 0, 21, 16
    ori r0, r0, 0x8400
    stw r0, 0x1c(r4)
    blr
}

// ----------------------------------------------------------------------------
// __HBMSYNSetupPcm16__FP11HBMSYNVOICE
// ----------------------------------------------------------------------------
asm void __HBMSYNSetupPcm16__FP11HBMSYNVOICE() {
    nofralloc
    lwz r10, 0x10(r3)
    lwz r4, 0x4(r3)
    lwz r5, 0x8(r10)
    lwz r0, 0xc(r10)
    add. r0, r5, r0
    beq lbl_80304BB8
    li r0, 0x1
    lis r5, 0x1
    stw r0, 0x20(r3)
    addi r6, r5, 0xa
    lwz r7, 0x8(r3)
    li r5, 0x0
    lwz r3, 0x18(r3)
    lis r0, 0x800
    lwz r9, 0x1c(r7)
    lwz r8, 0x4(r3)
    lwz r7, 0x8(r10)
    lwz r3, 0xc(r10)
    add r8, r9, r8
    add r7, r8, r7
    stw r6, 0x96(r4)
    add r3, r7, r3
    subi r3, r3, 0x1
    stw r7, 0x9a(r4)
    stw r3, 0x9e(r4)
    stw r8, 0xa2(r4)
    stw r5, 0xa6(r4)
    stw r5, 0xaa(r4)
    stw r5, 0xae(r4)
    stw r5, 0xb2(r4)
    stw r5, 0xb6(r4)
    stw r5, 0xba(r4)
    stw r5, 0xbe(r4)
    stw r5, 0xc2(r4)
    stw r0, 0xc6(r4)
    stw r5, 0xca(r4)
    b lbl_80304C20
lbl_80304BB8:
    li r8, 0x0
    lwz r9, 0x18(r3)
    stw r8, 0x20(r3)
    li r5, 0xa
    lwz r3, 0x8(r3)
    lis r0, 0x800
    lwz r6, 0x4(r9)
    lwz r7, 0x1c(r3)
    lwz r3, 0x8(r9)
    add r6, r7, r6
    stw r5, 0x96(r4)
    add r3, r6, r3
    subi r3, r3, 0x1
    stw r6, 0x9a(r4)
    stw r3, 0x9e(r4)
    stw r6, 0xa2(r4)
    stw r8, 0xa6(r4)
    stw r8, 0xaa(r4)
    stw r8, 0xae(r4)
    stw r8, 0xb2(r4)
    stw r8, 0xb6(r4)
    stw r8, 0xba(r4)
    stw r8, 0xbe(r4)
    stw r8, 0xc2(r4)
    stw r0, 0xc6(r4)
    stw r8, 0xca(r4)
lbl_80304C20:
    lwz r0, 0x1c(r4)
    rlwinm r0, r0, 0, 21, 16
    ori r0, r0, 0x8400
    stw r0, 0x1c(r4)
    blr
}

// ----------------------------------------------------------------------------
// __HBMSYNSetupPcm8__FP11HBMSYNVOICE
// ----------------------------------------------------------------------------
asm void __HBMSYNSetupPcm8__FP11HBMSYNVOICE() {
    nofralloc
    lwz r10, 0x10(r3)
    lwz r4, 0x4(r3)
    lwz r5, 0x8(r10)
    lwz r0, 0xc(r10)
    add. r0, r5, r0
    beq lbl_80304CC8
    li r0, 0x1
    lis r5, 0x1
    stw r0, 0x20(r3)
    addi r6, r5, 0x19
    lwz r7, 0x8(r3)
    li r5, 0x0
    lwz r3, 0x18(r3)
    lis r0, 0x100
    lwz r9, 0x20(r7)
    lwz r8, 0x4(r3)
    lwz r7, 0x8(r10)
    lwz r3, 0xc(r10)
    add r8, r9, r8
    add r7, r8, r7
    stw r6, 0x96(r4)
    add r3, r7, r3
    subi r3, r3, 0x1
    stw r7, 0x9a(r4)
    stw r3, 0x9e(r4)
    stw r8, 0xa2(r4)
    stw r5, 0xa6(r4)
    stw r5, 0xaa(r4)
    stw r5, 0xae(r4)
    stw r5, 0xb2(r4)
    stw r5, 0xb6(r4)
    stw r5, 0xba(r4)
    stw r5, 0xbe(r4)
    stw r5, 0xc2(r4)
    stw r0, 0xc6(r4)
    stw r5, 0xca(r4)
    b lbl_80304D30
lbl_80304CC8:
    li r8, 0x0
    lwz r9, 0x18(r3)
    stw r8, 0x20(r3)
    li r5, 0x19
    lwz r3, 0x8(r3)
    lis r0, 0x100
    lwz r6, 0x4(r9)
    lwz r7, 0x20(r3)
    lwz r3, 0x8(r9)
    add r6, r7, r6
    stw r5, 0x96(r4)
    add r3, r6, r3
    subi r3, r3, 0x1
    stw r6, 0x9a(r4)
    stw r3, 0x9e(r4)
    stw r6, 0xa2(r4)
    stw r8, 0xa6(r4)
    stw r8, 0xaa(r4)
    stw r8, 0xae(r4)
    stw r8, 0xb2(r4)
    stw r8, 0xb6(r4)
    stw r8, 0xba(r4)
    stw r8, 0xbe(r4)
    stw r8, 0xc2(r4)
    stw r0, 0xc6(r4)
    stw r8, 0xca(r4)
lbl_80304D30:
    lwz r0, 0x1c(r4)
    rlwinm r0, r0, 0, 21, 16
    ori r0, r0, 0x8400
    stw r0, 0x1c(r4)
    blr
}

