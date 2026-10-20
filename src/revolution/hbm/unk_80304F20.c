#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern M2C_UNK lbl_80341F58;
extern M2C_UNK lbl_8037F458;
extern s32 *lbl_80463040;
extern s32 lbl_80463044;

void fn_80304F20();
void fn_80305204();
void fn_80305320();
void fn_803053AC();
void fn_803053D4();
void fn_80305558();
void fn_803055E8();
void fn_80305680();
s32 fn_803057B8();
void fn_803057C0();

void fn_80304F20(s32 arg0, s32 *arg1);

// fn_80305204: definicion C reemplazada por asm (ver abajo)


// fn_80305320: definicion C reemplazada por asm (ver abajo)


// fn_803053AC: definicion C reemplazada por asm (ver abajo)


// fn_803053D4: definicion C reemplazada por asm (ver abajo)


// fn_80305558: definicion C reemplazada por asm (ver abajo)


// fn_803055E8: definicion C reemplazada por asm (ver abajo)


// fn_80305680: definicion C reemplazada por asm (ver abajo)


s32 fn_803057B8(s8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

void fn_803057C0(s32 arg0, s32 arg1) {
    HBMSYNSetMasterVolume(arg0 + 0x14, arg1);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern void HBMSYNInitSynth();
extern void HBMSYNMidiInput();
extern void HBMSYNQuitSynth();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _savegpr_25();
extern void _savegpr_26();
void fn_80304F20();
void fn_80305204(s8 *arg0, s8 *arg1, s32 arg2);
void fn_80305320(s32 *arg0, s8 *arg1);
void fn_803053AC(void);
void fn_803053D4(void);
void fn_80305558(s32 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_803055E8(u32 arg0, M2C_UNK arg_sp0);
void fn_80305680(s32 *arg0, s32 arg1, M2C_UNK arg_sp0);

// asm_to_cpp: fn_80304F20
asm void fn_80304F20() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r8, lbl_80341F58@ha
    stw r0, 0x34(r1)
    addi r8, r8, lbl_80341F58@l
    stw r31, 0x2c(r1)
    mr r31, r4
    lwz r5, 0xc(r4)
    lbz r6, 0x0(r5)
    cmplwi r6, 0x80
    blt lbl_80304F58
    addi r0, r5, 0x1
    stb r6, 0x10(r4)
    stw r0, 0xc(r4)
lbl_80304F58:
    lbz r0, 0x10(r4)
    cmpwi r0, 0xf7
    beq lbl_80304F80
    bge lbl_80304F74
    cmpwi r0, 0xf0
    beq lbl_80304F80
    b lbl_80305134
lbl_80304F74:
    cmpwi r0, 0xff
    beq lbl_80304FC8
    b lbl_80305134
lbl_80304F80:
    lwz r3, 0xc(r4)
    lbz r5, 0x0(r3)
    clrlwi r6, r5, 25
    b lbl_80304FAC
lbl_80304F90:
    lwz r5, 0xc(r4)
    slwi r3, r6, 7
    addi r5, r5, 0x1
    stw r5, 0xc(r4)
    lbz r5, 0x0(r5)
    clrlwi r0, r5, 25
    add r6, r3, r0
lbl_80304FAC:
    rlwinm. r0, r5, 0, 24, 24
    bne lbl_80304F90
    lwz r3, 0xc(r4)
    addi r0, r3, 0x1
    add r0, r0, r6
    stw r0, 0xc(r4)
    b lbl_803051B4
lbl_80304FC8:
    lwz r3, 0xc(r4)
    lbz r0, 0x0(r3)
    addi r3, r3, 0x1
    cmpwi r0, 0x51
    stw r3, 0xc(r4)
    beq lbl_80305020
    bge lbl_803050EC
    cmpwi r0, 0x2f
    beq lbl_80304FF0
    b lbl_803050EC
lbl_80304FF0:
    lwz r5, 0x0(r4)
    li r0, 0x0
    lwz r3, 0xc(r5)
    subi r3, r3, 0x1
    stw r3, 0xc(r5)
    stw r0, 0x24(r4)
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    bne lbl_803051B4
    li r0, 0x1
    stw r0, 0x10(r5)
    b lbl_803051B4
lbl_80305020:
    lbz r0, 0x0(r3)
    b lbl_80305038
lbl_80305028:
    lwz r3, 0xc(r4)
    addi r3, r3, 0x1
    stw r3, 0xc(r4)
    lbz r0, 0x0(r3)
lbl_80305038:
    rlwinm. r0, r0, 0, 24, 24
    bne lbl_80305028
    lwz r3, 0xc(r4)
    lis r0, 0x4330
    stw r0, 0x10(r1)
    addi r3, r3, 0x1
    lfd f6, 0x10(r8)
    stw r3, 0xc(r4)
    addi r5, r3, 0x1
    addi r6, r5, 0x1
    lfs f4, 0x0(r8)
    lbz r7, 0x0(r3)
    addi r3, r6, 0x1
    stw r0, 0x18(r1)
    slwi r7, r7, 8
    lfs f2, 0xc(r8)
    stw r5, 0xc(r4)
    lwz r9, 0x0(r4)
    lbz r5, 0x0(r5)
    lfd f3, 0x18(r8)
    add r0, r7, r5
    stw r6, 0xc(r4)
    slwi r5, r0, 8
    lfs f1, 0x8(r8)
    lbz r0, 0x0(r6)
    lfs f0, 0x4(r8)
    add r0, r5, r0
    stw r3, 0xc(r4)
    stw r0, 0x14(r1)
    lfd f5, 0x10(r1)
    fsubs f5, f5, f6
    fdivs f5, f4, f5
    fdivs f4, f2, f5
    stfs f5, 0x14(r4)
    lha r0, 0xa(r9)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f2, 0x18(r1)
    fsubs f2, f2, f3
    fdivs f2, f4, f2
    fdivs f1, f1, f2
    fmuls f1, f0, f1
    bl __cvt_fp2unsigned
    stw r3, 0x1c(r31)
    b lbl_803051B4
lbl_803050EC:
    lwz r3, 0xc(r4)
    lbz r5, 0x0(r3)
    clrlwi r6, r5, 25
    b lbl_80305118
lbl_803050FC:
    lwz r5, 0xc(r4)
    slwi r3, r6, 7
    addi r5, r5, 0x1
    stw r5, 0xc(r4)
    lbz r5, 0x0(r5)
    clrlwi r0, r5, 25
    add r6, r3, r0
lbl_80305118:
    rlwinm. r0, r5, 0, 24, 24
    bne lbl_803050FC
    lwz r3, 0xc(r4)
    addi r0, r3, 0x1
    add r0, r0, r6
    stw r0, 0xc(r4)
    b lbl_803051B4
lbl_80305134:
    lis r5, lbl_8037F458@ha
    stb r0, 0x8(r1)
    addi r5, r5, lbl_8037F458@l
    add r5, r0, r5
    lbz r0, -0x80(r5)
    cmpwi r0, 0x1
    beq lbl_80305164
    bge lbl_80305158
    b lbl_803051AC
lbl_80305158:
    cmpwi r0, 0x3
    bge lbl_803051AC
    b lbl_80305180
lbl_80305164:
    lwz r5, 0xc(r4)
    lbz r0, 0x0(r5)
    stb r0, 0x9(r1)
    lwz r5, 0xc(r4)
    addi r0, r5, 0x1
    stw r0, 0xc(r4)
    b lbl_803051AC
lbl_80305180:
    lwz r5, 0xc(r4)
    lbz r0, 0x0(r5)
    stb r0, 0x9(r1)
    lwz r5, 0xc(r4)
    addi r5, r5, 0x1
    stw r5, 0xc(r4)
    lbz r0, 0x0(r5)
    stb r0, 0xa(r1)
    lwz r5, 0xc(r4)
    addi r0, r5, 0x1
    stw r0, 0xc(r4)
lbl_803051AC:
    addi r4, r1, 0x8
    bl HBMSYNMidiInput
lbl_803051B4:
    lwz r3, 0xc(r31)
    lwz r0, 0x8(r31)
    cmplw r3, r0
    blt lbl_803051F0
    lwz r4, 0x0(r31)
    li r0, 0x0
    lwz r3, 0xc(r4)
    subi r3, r3, 0x1
    stw r3, 0xc(r4)
    stw r0, 0x24(r31)
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    bne lbl_803051F0
    li r0, 0x1
    stw r0, 0x10(r4)
lbl_803051F0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80305204
asm void fn_80305204(s8 *arg0, s8 *arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    stfd f29, 0x40(r1)
    opword 0xF3A10048
    stfd f28, 0x30(r1)
    opword 0xF3810038
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r6, lbl_80341F58@ha
    mr r25, r3
    addi r6, r6, lbl_80341F58@l
    mr r28, r4
    lfd f28, 0x18(r6)
    mr r26, r5
    lfs f29, 0x20(r6)
    addi r29, r3, 0x241c
    lfs f30, 0x8(r6)
    lis r30, 0x4330
    lfs f31, 0x4(r6)
    li r31, 0x0
    b lbl_803052E0
lbl_8030526C:
    lwz r3, 0x0(r28)
    lwz r27, 0x4(r28)
    addi r28, r28, 0x8
    subis r0, r3, 0x4d54
    cmplwi r0, 0x726b
    bne lbl_803052D0
    stw r25, 0x0(r29)
    add r0, r28, r27
    stw r28, 0x4(r29)
    stw r0, 0x8(r29)
    stw r28, 0xc(r29)
    lha r0, 0xa(r25)
    stw r30, 0x8(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f28
    fdivs f0, f29, f0
    fdivs f0, f30, f0
    fmuls f1, f31, f0
    bl __cvt_fp2unsigned
    stw r3, 0x18(r29)
    add r28, r28, r27
    stw r31, 0x24(r29)
    b lbl_803052D8
lbl_803052D0:
    add r28, r28, r27
    b lbl_8030526C
lbl_803052D8:
    subi r26, r26, 0x1
    addi r29, r29, 0x28
lbl_803052E0:
    cmpwi r26, 0x0
    bne lbl_8030526C
    opword 0xE3E10068
    lfd f31, 0x60(r1)
    opword 0xE3C10058
    lfd f30, 0x50(r1)
    opword 0xE3A10048
    lfd f29, 0x40(r1)
    opword 0xE3810038
    addi r11, r1, 0x30
    lfd f28, 0x30(r1)
    bl _restgpr_25
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// asm_to_cpp: fn_80305320
asm void fn_80305320(s32 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r6, r4, 0xe
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lhz r7, 0x8(r4)
    lwz r0, 0x4(r4)
    lhz r5, 0xa(r4)
    cmpwi r7, 0x1
    add r6, r0, r6
    sth r5, 0x8(r3)
    subi r6, r6, 0x6
    lha r0, 0xc(r4)
    sth r0, 0xa(r3)
    beq lbl_80305388
    bge lbl_80305390
    cmpwi r7, 0x0
    bge lbl_80305370
    b lbl_80305390
lbl_80305370:
    li r0, 0x1
    mr r4, r6
    sth r0, 0x8(r3)
    li r5, 0x1
    bl fn_80305204
    b lbl_80305390
lbl_80305388:
    mr r4, r6
    bl fn_80305204
lbl_80305390:
    lhz r0, 0x8(r31)
    stw r0, 0xc(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_803053AC
asm void fn_803053AC(void) {
    nofralloc
    lis r5, lbl_80463044@ha
    lwz r0, lbl_80463044@l(r5)
    cmpwi r0, 0x0
    bnelr
    li r0, 0x1
    li r4, 0x0
    lis r3, lbl_80463040@ha
    stw r0, lbl_80463044@l(r5)
    stw r4, lbl_80463040@l(r3)
    blr
}

// asm_to_cpp: fn_803053D4
asm void fn_803053D4(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_80463044@ha
    lis r4, lbl_80463040@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, lbl_80463044@l(r3)
    lwz r30, lbl_80463040@l(r4)
    cmpwi r0, 0x0
    bne lbl_80305530
    b lbl_80305538
    b lbl_80305530
lbl_80305410:
    lwz r3, 0x4(r30)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_803054EC
    addi r31, r30, 0x241c
    li r29, 0x0
    b lbl_803054E0
lbl_8030542C:
    lwz r3, 0x24(r31)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_803054D8
    lwz r28, 0x1c(r31)
    lwz r0, 0x20(r31)
    cmplw r0, r28
    ble lbl_803054C0
    subf r0, r28, r0
    stw r0, 0x20(r31)
    b lbl_803054D8
    b lbl_803054C0
lbl_8030545C:
    mr r4, r31
    subf r28, r0, r28
    addi r3, r30, 0x14
    bl fn_80304F20
    lwz r0, 0x24(r31)
    cmpwi r0, 0x0
    beq lbl_803054CC
    lwz r3, 0xc(r31)
    lbz r4, 0x0(r3)
    clrlwi r5, r4, 25
    b lbl_803054A4
lbl_80305488:
    lwz r4, 0xc(r31)
    slwi r3, r5, 7
    addi r4, r4, 0x1
    stw r4, 0xc(r31)
    lbz r4, 0x0(r4)
    clrlwi r0, r4, 25
    add r5, r3, r0
lbl_803054A4:
    rlwinm. r0, r4, 0, 24, 24
    bne lbl_80305488
    lwz r3, 0xc(r31)
    slwi r0, r5, 16
    addi r3, r3, 0x1
    stw r3, 0xc(r31)
    stw r0, 0x20(r31)
lbl_803054C0:
    lwz r0, 0x20(r31)
    cmplw r28, r0
    bge lbl_8030545C
lbl_803054CC:
    lwz r0, 0x20(r31)
    subf r0, r28, r0
    stw r0, 0x20(r31)
lbl_803054D8:
    addi r31, r31, 0x28
    addi r29, r29, 0x1
lbl_803054E0:
    lhz r0, 0x8(r30)
    cmplw r29, r0
    blt lbl_8030542C
lbl_803054EC:
    lwz r0, 0x10(r30)
    cmpwi r0, 0x0
    beq lbl_8030552C
    lwz r0, 0x4(r30)
    cmplwi r0, 0x2
    bne lbl_80305520
    mr r3, r30
    li r4, 0x0
    bl fn_80305680
    mr r3, r30
    li r4, 0x2
    bl fn_80305680
    b lbl_8030552C
lbl_80305520:
    mr r3, r30
    li r4, 0x0
    bl fn_80305680
lbl_8030552C:
    lwz r30, 0x0(r30)
lbl_80305530:
    cmpwi r30, 0x0
    bne lbl_80305410
lbl_80305538:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80305558
asm void fn_80305558(s32 *arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    mr r4, r5
    mr r5, r6
    stw r29, 0x14(r1)
    mr r29, r3
    mr r6, r7
    addi r3, r3, 0x14
    bl HBMSYNInitSynth
    li r31, 0x0
    mr r3, r29
    stw r31, 0x4(r29)
    mr r4, r30
    bl fn_80305320
    bl OSDisableInterrupts
    lis r4, lbl_80463040@ha
    lwz r0, lbl_80463040@l(r4)
    cmpwi r0, 0x0
    beq lbl_803055BC
    stw r0, 0x0(r29)
    b lbl_803055C0
lbl_803055BC:
    stw r31, 0x0(r29)
lbl_803055C0:
    lis r4, lbl_80463040@ha
    stw r29, lbl_80463040@l(r4)
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_803055E8
asm void fn_803055E8(u32 arg0, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    bl OSDisableInterrupts
    lis r30, lbl_80463040@ha
    li r31, 0x0
    lwz r28, lbl_80463040@l(r30)
    mr r27, r3
    stw r31, lbl_80463040@l(r30)
    b lbl_80305650
lbl_8030561C:
    cmplw r28, r26
    lwz r29, 0x0(r28)
    beq lbl_8030564C
    bl OSDisableInterrupts
    lwz r0, lbl_80463040@l(r30)
    cmpwi r0, 0x0
    beq lbl_80305640
    stw r0, 0x0(r28)
    b lbl_80305644
lbl_80305640:
    stw r31, 0x0(r28)
lbl_80305644:
    stw r28, lbl_80463040@l(r30)
    bl OSRestoreInterrupts
lbl_8030564C:
    mr r28, r29
lbl_80305650:
    cmpwi r28, 0x0
    bne lbl_8030561C
    mr r3, r27
    bl OSRestoreInterrupts
    addi r3, r26, 0x14
    bl HBMSYNQuitSynth
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80305680
asm void fn_80305680(s32 *arg0, s32 arg1, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r4, 0x3
    mr r30, r3
    mr r31, r4
    beq lbl_80305758
    bge lbl_8030579C
    cmpwi r4, 0x0
    beq lbl_80305758
    bge lbl_803056B8
    b lbl_8030579C
lbl_803056B8:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_8030574C
    bl OSDisableInterrupts
    addi r7, r30, 0x241c
    li r9, 0x0
    li r0, 0x1
    b lbl_80305738
lbl_803056D8:
    lwz r5, 0x4(r7)
    stw r5, 0xc(r7)
    lwz r4, 0x18(r7)
    stw r4, 0x1c(r7)
    lbz r8, 0x0(r5)
    clrlwi r6, r8, 25
    b lbl_80305710
lbl_803056F4:
    lwz r4, 0xc(r7)
    slwi r5, r6, 7
    addi r4, r4, 0x1
    stw r4, 0xc(r7)
    lbz r8, 0x0(r4)
    clrlwi r4, r8, 25
    add r6, r5, r4
lbl_80305710:
    rlwinm. r4, r8, 0, 24, 24
    bne lbl_803056F4
    lwz r5, 0xc(r7)
    slwi r4, r6, 16
    addi r9, r9, 0x1
    addi r5, r5, 0x1
    stw r5, 0xc(r7)
    stw r4, 0x20(r7)
    stw r0, 0x24(r7)
    addi r7, r7, 0x28
lbl_80305738:
    lhz r4, 0x8(r30)
    cmpw r9, r4
    blt lbl_803056D8
    stw r4, 0xc(r30)
    bl OSRestoreInterrupts
lbl_8030574C:
    li r0, 0x0
    stw r0, 0x10(r30)
    b lbl_8030579C
lbl_80305758:
    li r27, 0x0
    li r28, 0x7b
    li r29, 0x0
lbl_80305764:
    bl OSDisableInterrupts
    ori r0, r27, 0xb0
    mr r26, r3
    stb r0, 0x8(r1)
    addi r3, r30, 0x14
    addi r4, r1, 0x8
    stb r28, 0x9(r1)
    stb r29, 0xa(r1)
    bl HBMSYNMidiInput
    mr r3, r26
    bl OSRestoreInterrupts
    addi r27, r27, 0x1
    cmpwi r27, 0x10
    blt lbl_80305764
lbl_8030579C:
    stw r31, 0x4(r30)
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
