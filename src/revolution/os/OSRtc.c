#include "types.h"

// Translation unit: src/revolution/os/OSRtc.cpp
// Total functions: 9

// Global data symbols (@ha/@l)
extern u8 Scb_80465000[];

// Forward declarations
extern void DCInvalidateRange();
extern void EXIDeselect();
extern void EXIDma();
extern void EXIImm();
extern void EXIImmEx();
extern void EXILock();
extern void EXISelect();
extern void EXISync();
extern void EXIUnlock();
extern void OSDisableInterrupts();
extern void OSGetWirelessID();
extern void OSRestoreInterrupts();
extern void OSSetWirelessID();
extern void UnlockSram();
extern void WriteSramCallback();
extern void __OSClearRTCFlags();
extern void __OSGetRTCFlags();
extern void __OSInitSram();
extern void __OSReadROM();
extern void __OSSyncSram();

// ----------------------------------------------------------------------------
// WriteSramCallback
// ----------------------------------------------------------------------------
asm void WriteSramCallback() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, Scb_80465000@ha
    lis r5, WriteSramCallback@ha
    stw r0, 0x24(r1)
    addi r6, r6, Scb_80465000@l
    li r3, 0x0
    addi r5, r5, WriteSramCallback@l
    stw r31, 0x1c(r1)
    li r4, 0x1
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r31, 0x40(r6)
    subfic r29, r31, 0x40
    add r30, r6, r31
    bl EXILock
    cmpwi r3, 0x0
    bne lbl_8031BAC8
    li r0, 0x0
    b lbl_8031BB78
lbl_8031BAC8:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x3
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl_8031BAF0
    li r3, 0x0
    bl EXIUnlock
    li r0, 0x0
    b lbl_8031BB78
lbl_8031BAF0:
    slwi r3, r31, 6
    addi r4, r1, 0x8
    addi r0, r3, 0x100
    li r5, 0x4
    oris r0, r0, 0xa000
    li r3, 0x0
    stw r0, 0x8(r1)
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r31, r0, 5
    bl EXISync
    cntlzw r0, r3
    mr r4, r30
    srwi r0, r0, 5
    mr r5, r29
    or r29, r31, r0
    li r3, 0x0
    li r6, 0x1
    bl EXIImmEx
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r29, r29, r0
    bl EXIDeselect
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r29, r29, r0
    bl EXIUnlock
    cntlzw r0, r29
    srwi r0, r0, 5
lbl_8031BB78:
    lis r3, Scb_80465000@ha
    cmpwi r0, 0x0
    addi r3, r3, Scb_80465000@l
    stw r0, 0x4c(r3)
    beq lbl_8031BB94
    li r0, 0x40
    stw r0, 0x40(r3)
lbl_8031BB94:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __OSInitSram
// ----------------------------------------------------------------------------
asm void __OSInitSram() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x40
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, Scb_80465000@ha
    addi r30, r30, Scb_80465000@l
    stw r0, 0x44(r30)
    mr r3, r30
    stw r0, 0x48(r30)
    bl DCInvalidateRange
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    bl EXILock
    cmpwi r3, 0x0
    bne lbl_8031BC04
    li r3, 0x0
    b lbl_8031BCC8
lbl_8031BC04:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x3
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl_8031BC2C
    li r3, 0x0
    bl EXIUnlock
    li r3, 0x0
    b lbl_8031BCC8
lbl_8031BC2C:
    lis r3, 0x2000
    addi r4, r1, 0x8
    addi r0, r3, 0x100
    li r5, 0x4
    stw r0, 0x8(r1)
    li r3, 0x0
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r31, r0, 5
    bl EXISync
    cntlzw r0, r3
    mr r4, r30
    srwi r0, r0, 5
    li r3, 0x0
    or r30, r31, r0
    li r5, 0x40
    li r6, 0x0
    li r7, 0x0
    bl EXIDma
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r30, r30, r0
    bl EXISync
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r30, r30, r0
    bl EXIDeselect
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r30, r30, r0
    bl EXIUnlock
    cntlzw r0, r30
    srwi r3, r0, 5
lbl_8031BCC8:
    lis r31, Scb_80465000@ha
    li r0, 0x40
    addi r31, r31, Scb_80465000@l
    stw r3, 0x4c(r31)
    stw r0, 0x40(r31)
    bl OSDisableInterrupts
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_8031BCF8
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8031BD08
lbl_8031BCF8:
    li r0, 0x1
    stw r3, 0x44(r31)
    addi r3, r31, 0x14
    stw r0, 0x48(r31)
lbl_8031BD08:
    lhz r30, 0x28(r3)
    li r3, 0x0
    li r4, 0x14
    bl UnlockSram
    rlwinm r0, r30, 0, 17, 21
    cmplwi r0, 0x5000
    beq lbl_8031BD30
    rlwinm r0, r30, 0, 24, 25
    cmplwi r0, 0xc0
    bne lbl_8031BD34
lbl_8031BD30:
    li r30, 0x0
lbl_8031BD34:
    bl OSDisableInterrupts
    lis r4, Scb_80465000@ha
    addi r4, r4, Scb_80465000@l
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_8031BD58
    bl OSRestoreInterrupts
    li r5, 0x0
    b lbl_8031BD68
lbl_8031BD58:
    li r0, 0x1
    stw r3, 0x44(r4)
    addi r5, r4, 0x14
    stw r0, 0x48(r4)
lbl_8031BD68:
    lhz r0, 0x28(r5)
    clrlwi r3, r30, 16
    cmplw r3, r0
    bne lbl_8031BD88
    li r3, 0x0
    li r4, 0x14
    bl UnlockSram
    b lbl_8031BD98
lbl_8031BD88:
    sth r30, 0x28(r5)
    li r3, 0x1
    li r4, 0x14
    bl UnlockSram
lbl_8031BD98:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// UnlockSram
// ----------------------------------------------------------------------------
asm void UnlockSram() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    beq lbl_8031C058
    cmpwi r4, 0x0
    bne lbl_8031BF04
    lis r8, Scb_80465000@ha
    addi r8, r8, Scb_80465000@l
    lbz r3, 0x13(r8)
    clrlwi r0, r3, 30
    cmplwi r0, 0x2
    ble lbl_8031BDF8
    rlwinm r0, r3, 0, 24, 29
    stb r0, 0x13(r8)
lbl_8031BDF8:
    lis r3, Scb_80465000@ha
    li r0, 0x0
    addi r3, r3, Scb_80465000@l
    addi r7, r8, 0xc
    addi r5, r3, 0x14
    sth r0, 0x2(r8)
    addi r3, r5, 0x1
    subf r3, r7, r3
    cmplw r7, r5
    sth r0, 0x0(r8)
    srwi r3, r3, 1
    bge lbl_8031BF04
    srwi. r0, r3, 2
    mtctr r0
    beq lbl_8031BED4
lbl_8031BE34:
    lhz r6, 0x0(r8)
    lhz r0, 0x0(r7)
    lhz r5, 0x2(r8)
    add r0, r6, r0
    sth r0, 0x0(r8)
    clrlwi r6, r0, 16
    lhz r0, 0x0(r7)
    nor r0, r0, r0
    add r0, r5, r0
    sth r0, 0x2(r8)
    clrlwi r5, r0, 16
    lhz r0, 0x2(r7)
    add r0, r6, r0
    sth r0, 0x0(r8)
    clrlwi r6, r0, 16
    lhz r0, 0x2(r7)
    nor r0, r0, r0
    add r0, r5, r0
    sth r0, 0x2(r8)
    clrlwi r5, r0, 16
    lhz r0, 0x4(r7)
    add r0, r6, r0
    sth r0, 0x0(r8)
    clrlwi r6, r0, 16
    lhz r0, 0x4(r7)
    nor r0, r0, r0
    add r0, r5, r0
    sth r0, 0x2(r8)
    clrlwi r5, r0, 16
    lhz r0, 0x6(r7)
    add r0, r6, r0
    sth r0, 0x0(r8)
    lhz r0, 0x6(r7)
    addi r7, r7, 0x8
    nor r0, r0, r0
    add r0, r5, r0
    sth r0, 0x2(r8)
    bdnz lbl_8031BE34
    andi. r3, r3, 0x3
    beq lbl_8031BF04
lbl_8031BED4:
    mtctr r3
lbl_8031BED8:
    lhz r6, 0x0(r8)
    lhz r0, 0x0(r7)
    lhz r5, 0x2(r8)
    add r0, r6, r0
    sth r0, 0x0(r8)
    lhz r0, 0x0(r7)
    addi r7, r7, 0x2
    nor r0, r0, r0
    add r0, r5, r0
    sth r0, 0x2(r8)
    bdnz lbl_8031BED8
lbl_8031BF04:
    lis r3, Scb_80465000@ha
    addi r3, r3, Scb_80465000@l
    lwz r0, 0x40(r3)
    cmplw r4, r0
    bge lbl_8031BF1C
    stw r4, 0x40(r3)
lbl_8031BF1C:
    lis r4, Scb_80465000@ha
    addi r4, r4, Scb_80465000@l
    lwz r0, 0x40(r4)
    cmplwi r0, 0x14
    bgt lbl_8031BF54
    lhz r3, 0x3c(r4)
    rlwinm r0, r3, 0, 17, 21
    cmplwi r0, 0x5000
    beq lbl_8031BF4C
    rlwinm r0, r3, 0, 24, 25
    cmplwi r0, 0xc0
    bne lbl_8031BF54
lbl_8031BF4C:
    li r0, 0x0
    sth r0, 0x3c(r4)
lbl_8031BF54:
    lis r6, Scb_80465000@ha
    lis r5, WriteSramCallback@ha
    addi r6, r6, Scb_80465000@l
    li r3, 0x0
    lwz r31, 0x40(r6)
    addi r5, r5, WriteSramCallback@l
    li r4, 0x1
    subfic r29, r31, 0x40
    add r30, r6, r31
    bl EXILock
    cmpwi r3, 0x0
    bne lbl_8031BF8C
    li r0, 0x0
    b lbl_8031C03C
lbl_8031BF8C:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x3
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl_8031BFB4
    li r3, 0x0
    bl EXIUnlock
    li r0, 0x0
    b lbl_8031C03C
lbl_8031BFB4:
    slwi r3, r31, 6
    addi r4, r1, 0x8
    addi r0, r3, 0x100
    li r5, 0x4
    oris r0, r0, 0xa000
    li r3, 0x0
    stw r0, 0x8(r1)
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r31, r0, 5
    bl EXISync
    cntlzw r0, r3
    mr r4, r30
    srwi r0, r0, 5
    mr r5, r29
    or r29, r31, r0
    li r3, 0x0
    li r6, 0x1
    bl EXIImmEx
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r29, r29, r0
    bl EXIDeselect
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r29, r29, r0
    bl EXIUnlock
    cntlzw r0, r29
    srwi r0, r0, 5
lbl_8031C03C:
    lis r3, Scb_80465000@ha
    cmpwi r0, 0x0
    addi r3, r3, Scb_80465000@l
    stw r0, 0x4c(r3)
    beq lbl_8031C058
    li r0, 0x40
    stw r0, 0x40(r3)
lbl_8031C058:
    lis r31, Scb_80465000@ha
    li r0, 0x0
    addi r31, r31, Scb_80465000@l
    stw r0, 0x48(r31)
    lwz r3, 0x44(r31)
    bl OSRestoreInterrupts
    lwz r3, 0x4c(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __OSSyncSram
// ----------------------------------------------------------------------------
asm void __OSSyncSram() {
    nofralloc
    lis r3, Scb_80465000@ha
    addi r3, r3, Scb_80465000@l
    lwz r3, 0x4c(r3)
    blr
}

// ----------------------------------------------------------------------------
// __OSReadROM
// ----------------------------------------------------------------------------
asm void __OSReadROM() {
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
    bl DCInvalidateRange
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    bl EXILock
    cmpwi r3, 0x0
    bne lbl_8031C0E8
    li r3, 0x0
    b lbl_8031C1A8
lbl_8031C0E8:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x3
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl_8031C110
    li r3, 0x0
    bl EXIUnlock
    li r3, 0x0
    b lbl_8031C1A8
lbl_8031C110:
    slwi r0, r31, 6
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    li r3, 0x0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r31, r0, 5
    bl EXISync
    cntlzw r0, r3
    mr r4, r29
    srwi r0, r0, 5
    mr r5, r30
    or r31, r31, r0
    li r3, 0x0
    li r6, 0x0
    li r7, 0x0
    bl EXIDma
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXISync
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXIDeselect
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXIUnlock
    cntlzw r0, r31
    srwi r3, r0, 5
lbl_8031C1A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// OSGetWirelessID
// ----------------------------------------------------------------------------
asm void OSGetWirelessID() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lis r4, Scb_80465000@ha
    addi r4, r4, Scb_80465000@l
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_8031C1FC
    bl OSRestoreInterrupts
    li r5, 0x0
    b lbl_8031C20C
lbl_8031C1FC:
    li r0, 0x1
    stw r3, 0x44(r4)
    addi r5, r4, 0x14
    stw r0, 0x48(r4)
lbl_8031C20C:
    slwi r0, r31, 1
    li r3, 0x0
    add r5, r5, r0
    li r4, 0x14
    lhz r31, 0x1c(r5)
    bl UnlockSram
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// OSSetWirelessID
// ----------------------------------------------------------------------------
asm void OSSetWirelessID() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r4, Scb_80465000@ha
    addi r4, r4, Scb_80465000@l
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_8031C27C
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_8031C28C
lbl_8031C27C:
    li r0, 0x1
    stw r3, 0x44(r4)
    addi r3, r4, 0x14
    stw r0, 0x48(r4)
lbl_8031C28C:
    slwi r0, r30, 1
    add r3, r3, r0
    lhz r0, 0x1c(r3)
    cmplw r31, r0
    beq lbl_8031C2B4
    sth r31, 0x1c(r3)
    li r3, 0x1
    li r4, 0x14
    bl UnlockSram
    b lbl_8031C2C0
lbl_8031C2B4:
    li r3, 0x0
    li r4, 0x14
    bl UnlockSram
lbl_8031C2C0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __OSGetRTCFlags
// ----------------------------------------------------------------------------
asm void __OSGetRTCFlags() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x1
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    li r3, 0x0
    bl EXILock
    cmpwi r3, 0x0
    bne lbl_8031C310
    li r3, 0x0
    b lbl_8031C3DC
lbl_8031C310:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x3
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl_8031C338
    li r3, 0x0
    bl EXIUnlock
    li r3, 0x0
    b lbl_8031C3DC
lbl_8031C338:
    lis r3, 0x2100
    addi r4, r1, 0x8
    addi r0, r3, 0x800
    li r5, 0x4
    stw r0, 0x8(r1)
    li r3, 0x0
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r31, r0, 5
    bl EXISync
    cntlzw r0, r3
    addi r4, r1, 0x8
    srwi r0, r0, 5
    li r3, 0x0
    or r31, r31, r0
    li r5, 0x4
    li r6, 0x0
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXISync
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXIDeselect
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXIUnlock
    lwz r4, 0x8(r1)
    cntlzw r0, r31
    srwi r3, r0, 5
    stw r4, 0x0(r30)
lbl_8031C3DC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// __OSClearRTCFlags
// ----------------------------------------------------------------------------
asm void __OSClearRTCFlags() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r3, 0x0
    li r4, 0x1
    stw r0, 0x24(r1)
    li r0, 0x0
    li r5, 0x0
    stw r31, 0x1c(r1)
    stw r0, 0x8(r1)
    bl EXILock
    cmpwi r3, 0x0
    bne lbl_8031C42C
    li r3, 0x0
    b lbl_8031C4F0
lbl_8031C42C:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x3
    bl EXISelect
    cmpwi r3, 0x0
    bne lbl_8031C454
    li r3, 0x0
    bl EXIUnlock
    li r3, 0x0
    b lbl_8031C4F0
lbl_8031C454:
    lis r3, 0xa100
    addi r4, r1, 0xc
    addi r0, r3, 0x800
    li r5, 0x4
    stw r0, 0xc(r1)
    li r3, 0x0
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r31, r0, 5
    bl EXISync
    cntlzw r0, r3
    addi r4, r1, 0x8
    srwi r0, r0, 5
    li r3, 0x0
    or r31, r31, r0
    li r5, 0x4
    li r6, 0x1
    li r7, 0x0
    bl EXIImm
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXISync
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXIDeselect
    cntlzw r0, r3
    li r3, 0x0
    srwi r0, r0, 5
    or r31, r31, r0
    bl EXIUnlock
    cntlzw r0, r31
    srwi r3, r0, 5
lbl_8031C4F0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

