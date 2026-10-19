#include "types.h"

// Translation unit: src/revolution/ndevexi2ad/unk_801A9044.cpp
// Total functions: 10

// Small Data symbols (@sda21)
extern float lbl_8049C430;
extern float lbl_8049C434;
extern float lbl_8049D950;
extern float lbl_8049D954;
extern float lbl_8049D958;

// Global data symbols (@ha/@l)
extern u8 lbl_803603A8[];
extern u8 lbl_80360408[];
extern u8 lbl_80360418[];
extern u8 lbl_803D9D28[];

// Forward declarations
extern void OSCancelAlarm();
extern void OSCreateAlarm();
extern void OSDisableInterrupts();
extern void OSDisableScheduler();
extern void OSReport();
extern void OSRestoreInterrupts();
extern void OSSetAlarm();
extern void PPCHalt();
extern void UpdateVertexColor__Q34nw4r2ut10CharWriterFv();
extern void VISetPostRetraceCallback();
extern void VISetPreRetraceCallback();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_801A9044();
extern void fn_801A90AC();
extern void fn_801A9118();
extern void fn_801A913C();
extern void fn_801A91D4();
extern void fn_801A9280();
extern void fn_801A9384();
extern void fn_801A9418();
extern void fn_801A95B4();
extern void fn_801A95CC();
extern void fn_80315F98();

// ----------------------------------------------------------------------------
// fn_801A9044
// ----------------------------------------------------------------------------
asm void fn_801A9044() {
    nofralloc
    stwu r1, -0x80(r1)
    bne cr1, lbl_801A906C
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_801A906C:
    addi r11, r1, 0x88
    addi r0, r1, 0x8
    lis r12, 0x200
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_801A90AC
// ----------------------------------------------------------------------------
asm void fn_801A90AC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lhz r4, 0x10(r31)
    lhz r0, 0xc(r31)
    subf. r4, r4, r0
    bge lbl_801A90DC
    lhz r0, 0x6(r31)
    add r4, r4, r0
lbl_801A90DC:
    lhz r0, 0xe(r31)
    clrlwi r4, r4, 16
    cmpwi r0, 0x0
    beq lbl_801A90F4
    addi r0, r4, 0x1
    clrlwi r4, r0, 16
lbl_801A90F4:
    lwz r0, 0x14(r31)
    add r31, r0, r4
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801A9118
// ----------------------------------------------------------------------------
asm void fn_801A9118() {
    nofralloc
    lbz r7, 0x0(r4)
    lbz r6, 0x1(r4)
    lbz r5, 0x2(r4)
    lbz r0, 0x3(r4)
    stb r7, 0x18(r3)
    stb r6, 0x19(r3)
    stb r5, 0x1a(r3)
    stb r0, 0x1b(r3)
    b UpdateVertexColor__Q34nw4r2ut10CharWriterFv
}

// ----------------------------------------------------------------------------
// fn_801A913C
// ----------------------------------------------------------------------------
asm void fn_801A913C() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    bne cr1, lbl_801A9170
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_801A9170:
    lwz r0, lbl_8049D954
    addi r12, r1, 0x88
    addi r11, r1, 0x8
    lis r31, 0x100
    cmpwi r0, 0x0
    stw r3, 0x8(r1)
    addi r0, r1, 0x68
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r31, 0x68(r1)
    stw r12, 0x6c(r1)
    stw r11, 0x70(r1)
    bne lbl_801A91C0
    mr r4, r0
    bl fn_80315F98
lbl_801A91C0:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_801A91D4
// ----------------------------------------------------------------------------
asm void fn_801A91D4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_803603A8@ha
    addi r31, r31, lbl_803603A8@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r31, 0x0
    opword 0x4CC63182
    bl fn_801A913C
    addi r3, r31, 0x28
    opword 0x4CC63182
    bl fn_801A913C
    li r30, 0x0
lbl_801A9214:
    cmpwi r29, 0x0
    beq lbl_801A9264
    addis r0, r29, 0x1
    cmplwi r0, 0xffff
    beq lbl_801A9264
    clrrwi. r0, r29, 31
    beq lbl_801A9264
    lwz r5, 0x0(r29)
    mr r4, r29
    lwz r6, 0x4(r29)
    addi r3, r31, 0x48
    opword 0x4CC63182
    bl fn_801A913C
    la r3, lbl_8049C434
    opword 0x4CC63182
    bl fn_801A913C
    addi r30, r30, 0x1
    lwz r29, 0x0(r29)
    cmplwi r30, 0x10
    blt lbl_801A9214
lbl_801A9264:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A9280
// ----------------------------------------------------------------------------
asm void fn_801A9280() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r30, 0x0(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r31, r6
    mr r29, r7
    bl OSDisableInterrupts
    bl OSDisableScheduler
    li r3, 0x0
    bl VISetPreRetraceCallback
    li r3, 0x0
    bl VISetPostRetraceCallback
    mr r3, r30
    bl fn_801A91D4
    lwz r3, lbl_8049D954
    cmpwi r3, 0x0
    beq lbl_801A9330
    lis r4, lbl_80360408@ha
    mr r5, r26
    mr r6, r27
    addi r4, r4, lbl_80360408@l
    opword 0x4CC63182
    bl fn_801A9044
    lwz r3, lbl_8049D954
    la r4, lbl_8049C434
    opword 0x4CC63182
    bl fn_801A9044
    lwz r30, lbl_8049D954
    lhz r31, 0x20(r30)
    mr r3, r30
    bl fn_801A90AC
    subf. r0, r31, r3
    bge lbl_801A931C
    li r0, 0x0
lbl_801A931C:
    stw r0, 0x18(r30)
    li r0, 0x1
    lwz r3, lbl_8049D954
    stb r0, 0x22(r3)
    b lbl_801A9360
lbl_801A9330:
    lis r3, lbl_80360408@ha
    mr r4, r26
    mr r5, r27
    addi r3, r3, lbl_80360408@l
    opword 0x4CC63182
    bl OSReport
    mr r3, r28
    mr r4, r31
    bl fn_80315F98
    la r3, lbl_8049C434
    opword 0x4CC63182
    bl OSReport
lbl_801A9360:
    cmpwi r29, 0x0
    beq lbl_801A936C
    bl PPCHalt
lbl_801A936C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_801A9384
// ----------------------------------------------------------------------------
asm void fn_801A9384() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    bne cr1, lbl_801A93B8
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_801A93B8:
    addi r11, r1, 0x88
    addi r0, r1, 0x8
    lis r12, 0x300
    stw r7, 0x18(r1)
    addi r31, r1, 0x68
    li r7, 0x1
    stw r6, 0x14(r1)
    mr r6, r31
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    bl fn_801A9280
    bl PPCHalt
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_801A9418
// ----------------------------------------------------------------------------
asm void fn_801A9418() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    bne cr1, lbl_801A945C
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_801A945C:
    lwz r30, lbl_8049D954
    addi r11, r1, 0x98
    addi r0, r1, 0x8
    lis r12, 0x300
    cmpwi r30, 0x0
    stw r3, 0x8(r1)
    addi r31, r1, 0x68
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x68(r1)
    stw r11, 0x6c(r1)
    stw r0, 0x70(r1)
    beq lbl_801A956C
    lis r4, lbl_80360418@ha
    mr r3, r30
    mr r5, r27
    mr r6, r28
    addi r4, r4, lbl_80360418@l
    opword 0x4CC63182
    bl fn_801A9044
    lwz r3, lbl_8049D954
    la r4, lbl_8049C434
    opword 0x4CC63182
    bl fn_801A9044
    lwz r31, lbl_8049D954
    lhz r30, 0x20(r31)
    mr r3, r31
    bl fn_801A90AC
    subf. r0, r30, r3
    bge lbl_801A94EC
    li r0, 0x0
lbl_801A94EC:
    stw r0, 0x18(r31)
    lbz r0, lbl_8049C430
    cmpwi r0, 0x0
    beq lbl_801A959C
    lwz r0, lbl_8049D954
    lwz r30, lbl_8049D950
    cmpwi r0, 0x0
    beq lbl_801A959C
    lbz r0, lbl_8049D958
    cmpwi r0, 0x0
    bne lbl_801A952C
    lis r3, lbl_803D9D28@ha
    addi r3, r3, lbl_803D9D28@l
    bl OSCreateAlarm
    li r0, 0x1
    stb r0, lbl_8049D958
lbl_801A952C:
    lis r31, lbl_803D9D28@ha
    addi r31, r31, lbl_803D9D28@l
    mr r3, r31
    bl OSCancelAlarm
    lwz r3, lbl_8049D954
    li r0, 0x1
    cmpwi r30, 0x0
    stb r0, 0x22(r3)
    beq lbl_801A959C
    lis r7, fn_801A95B4@ha
    mr r3, r31
    mr r6, r30
    li r5, 0x0
    addi r7, r7, fn_801A95B4@l
    bl OSSetAlarm
    b lbl_801A959C
lbl_801A956C:
    lis r3, lbl_80360418@ha
    mr r4, r27
    mr r5, r28
    addi r3, r3, lbl_80360418@l
    opword 0x4CC63182
    bl OSReport
    mr r3, r29
    mr r4, r31
    bl fn_80315F98
    la r3, lbl_8049C434
    opword 0x4CC63182
    bl OSReport
lbl_801A959C:
    addi r11, r1, 0x90
    bl _restgpr_27
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_801A95B4
// ----------------------------------------------------------------------------
asm void fn_801A95B4() {
    nofralloc
    lwz r3, lbl_8049D954
    cmpwi r3, 0x0
    beqlr
    li r0, 0x0
    stb r0, 0x22(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801A95CC
// ----------------------------------------------------------------------------
asm void fn_801A95CC() {
    nofralloc
    lbz r11, 0x0(r4)
    lbz r10, 0x1(r4)
    lbz r9, 0x2(r4)
    lbz r8, 0x3(r4)
    lbz r7, 0x0(r5)
    lbz r6, 0x1(r5)
    lbz r4, 0x2(r5)
    lbz r0, 0x3(r5)
    stb r11, 0x18(r3)
    stb r10, 0x19(r3)
    stb r9, 0x1a(r3)
    stb r8, 0x1b(r3)
    stb r7, 0x1c(r3)
    stb r6, 0x1d(r3)
    stb r4, 0x1e(r3)
    stb r0, 0x1f(r3)
    b UpdateVertexColor__Q34nw4r2ut10CharWriterFv
}

