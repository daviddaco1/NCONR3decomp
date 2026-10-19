#include "types.h"

// Translation unit: src/revolution/ax/unk_8029C958.cpp
// Total functions: 13

// Small Data symbols (@sda21)
extern float lbl_8049DEE8;
extern float lbl_8049DEEA;
extern float lbl_8049DEEC;
extern float lbl_8049DEEE;
extern float lbl_8049DEF0;
extern float lbl_8049DEF4;
extern float lbl_8049DEF8;
extern float lbl_8049DEFC;
extern float lbl_8049DF00;
extern float lbl_8049DF04;
extern float lbl_8049DF08;

// Global data symbols (@ha/@l)
extern u8 lbl_8036F460[];
extern u8 lbl_80415040[];

// Forward declarations
extern void DCFlushRange();
extern void __AXGetAuxAInput();
extern void __AXGetAuxAInputDpl2();
extern void __AXGetAuxAOutput();
extern void __AXGetAuxAOutputDpl2Ls();
extern void __AXGetAuxAOutputDpl2R();
extern void __AXGetAuxAOutputDpl2Rs();
extern void __AXGetAuxBInput();
extern void __AXGetAuxBInputDpl2();
extern void __AXGetAuxBOutput();
extern void __AXGetAuxBOutputDpl2Ls();
extern void __AXGetAuxBOutputDpl2R();
extern void __AXGetAuxBOutputDpl2Rs();
extern void __AXGetAuxCInput();
extern void __AXGetAuxCOutput();
extern void __AXGetPBs();
extern void __AXGetStudio();
extern void fn_8029C958();
extern void fn_8029C960();
extern void fn_8029C990();
extern void fn_8029D354();
extern void fn_8029D3A4();
extern void fn_8029D3A8();
extern void fn_8029D3B0();
extern void fn_8029D3B8();
extern void fn_8029D3C0();
extern void fn_8029D3C8();
extern void fn_8029D3E0();
extern void fn_8029D3E8();
extern void fn_8029D3F0();

// ----------------------------------------------------------------------------
// fn_8029C958
// ----------------------------------------------------------------------------
asm void fn_8029C958() {
    nofralloc
    lwz r3, lbl_8049DEFC
    blr
}

// ----------------------------------------------------------------------------
// fn_8029C960
// ----------------------------------------------------------------------------
asm void fn_8029C960() {
    nofralloc
    lwz r4, lbl_8049DF08
    lis r5, lbl_80415040@ha
    addi r5, r5, lbl_80415040@l
    addi r3, r4, 0x1
    slwi r6, r4, 7
    clrlslwi r0, r3, 31, 7
    clrlwi r4, r3, 31
    add r3, r5, r6
    add r0, r5, r0
    stw r4, lbl_8049DF08
    stw r0, lbl_8049DF04
    blr
}

// ----------------------------------------------------------------------------
// fn_8029C990
// ----------------------------------------------------------------------------
asm void fn_8029C990() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x1e83
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, lbl_8049DF04
    stw r0, lbl_8049DEFC
    bl __AXGetStudio
    stw r3, 0x8(r1)
    li r0, 0x0
    lwz r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r4, lbl_8049DF04
    lwz r3, lbl_8049DEFC
    lwz r0, lbl_8049DF00
    addi r4, r4, 0x2
    addi r3, r3, 0x101e
    stw r4, lbl_8049DF04
    cmpwi r0, 0x1
    stw r3, lbl_8049DEFC
    beq lbl_8029CA8C
    bge lbl_8029CA38
    cmpwi r0, 0x0
    bge lbl_8029CA44
    b lbl_8029CB18
lbl_8029CA38:
    cmpwi r0, 0x3
    bge lbl_8029CB18
    b lbl_8029CAD4
lbl_8029CA44:
    li r3, 0x1
    srwi r0, r28, 16
    sth r3, 0x0(r4)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r28, 0x0(r3)
    lwz r4, lbl_8049DF04
    lwz r3, lbl_8049DEFC
    addi r5, r4, 0x2
    addi r0, r3, 0x2dd
    stw r5, lbl_8049DF04
    stw r0, lbl_8049DEFC
    b lbl_8029CB18
lbl_8029CA8C:
    li r3, 0x2
    srwi r0, r28, 16
    sth r3, 0x0(r4)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r28, 0x0(r3)
    lwz r4, lbl_8049DF04
    lwz r3, lbl_8049DEFC
    addi r5, r4, 0x2
    addi r0, r3, 0x33d
    stw r5, lbl_8049DF04
    stw r0, lbl_8049DEFC
    b lbl_8029CB18
lbl_8029CAD4:
    li r3, 0x3
    srwi r0, r28, 16
    sth r3, 0x0(r4)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r28, 0x0(r3)
    lwz r4, lbl_8049DF04
    lwz r3, lbl_8049DEFC
    addi r5, r4, 0x2
    addi r0, r3, 0x39d
    stw r5, lbl_8049DF04
    stw r0, lbl_8049DEFC
lbl_8029CB18:
    bl __AXGetPBs
    stw r3, 0x8(r1)
    li r0, 0x4
    lwz r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    lwz r0, lbl_8049DF00
    addi r5, r3, 0x2
    cmplwi r0, 0x2
    stw r5, lbl_8049DF04
    bne lbl_8029CE94
    addi r3, r1, 0x8
    bl __AXGetAuxAInput
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8029CD00
    lwz r4, lbl_8049DF04
    li r0, 0x8
    addi r3, r1, 0x8
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lhz r0, lbl_8049DEEC
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    addi r5, r4, 0x2
    stw r5, lbl_8049DF04
    bl __AXGetAuxAInputDpl2
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    addi r5, r4, 0x2
    stw r5, lbl_8049DF04
    bl __AXGetAuxAOutput
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    addi r5, r4, 0x2
    stw r5, lbl_8049DF04
    bl __AXGetAuxAOutputDpl2R
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    addi r5, r4, 0x2
    stw r5, lbl_8049DF04
    bl __AXGetAuxAOutputDpl2Ls
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    addi r5, r4, 0x2
    stw r5, lbl_8049DF04
    bl __AXGetAuxAOutputDpl2Rs
    lwz r0, 0x8(r1)
    lwz r3, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r4, lbl_8049DF04
    lwz r3, lbl_8049DEFC
    addi r5, r4, 0x2
    addi r0, r3, 0xbdc
    stw r5, lbl_8049DF04
    stw r0, lbl_8049DEFC
lbl_8029CD00:
    addi r3, r1, 0x8
    bl __AXGetAuxBInput
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8029D0A4
    lwz r4, lbl_8049DF04
    li r0, 0x9
    addi r3, r1, 0x8
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lhz r0, lbl_8049DEEA
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    addi r5, r4, 0x2
    stw r5, lbl_8049DF04
    bl __AXGetAuxBInputDpl2
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    addi r5, r4, 0x2
    stw r5, lbl_8049DF04
    bl __AXGetAuxBOutput
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    addi r5, r4, 0x2
    stw r5, lbl_8049DF04
    bl __AXGetAuxBOutputDpl2R
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    addi r5, r4, 0x2
    stw r5, lbl_8049DF04
    bl __AXGetAuxBOutputDpl2Ls
    lwz r0, 0x8(r1)
    addi r3, r1, 0x8
    lwz r4, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    addi r5, r4, 0x2
    stw r5, lbl_8049DF04
    bl __AXGetAuxBOutputDpl2Rs
    lwz r0, 0x8(r1)
    lwz r3, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r4, lbl_8049DF04
    lwz r3, lbl_8049DEFC
    addi r5, r4, 0x2
    addi r0, r3, 0xbdc
    stw r5, lbl_8049DF04
    stw r0, lbl_8049DEFC
    b lbl_8029D0A4
lbl_8029CE94:
    addi r3, r1, 0x8
    bl __AXGetAuxAInput
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8029CF44
    lwz r4, lbl_8049DF04
    li r0, 0x5
    addi r3, r1, 0x8
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lhz r0, lbl_8049DEEC
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    addi r5, r4, 0x2
    stw r5, lbl_8049DF04
    bl __AXGetAuxAOutput
    lwz r0, 0x8(r1)
    lwz r3, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r4, lbl_8049DF04
    lwz r3, lbl_8049DEFC
    addi r5, r4, 0x2
    addi r0, r3, 0x8bb
    stw r5, lbl_8049DF04
    stw r0, lbl_8049DEFC
lbl_8029CF44:
    addi r3, r1, 0x8
    bl __AXGetAuxBInput
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8029CFF4
    lwz r4, lbl_8049DF04
    li r0, 0x6
    addi r3, r1, 0x8
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lhz r0, lbl_8049DEEA
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    addi r5, r4, 0x2
    stw r5, lbl_8049DF04
    bl __AXGetAuxBOutput
    lwz r0, 0x8(r1)
    lwz r3, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r4, lbl_8049DF04
    lwz r3, lbl_8049DEFC
    addi r5, r4, 0x2
    addi r0, r3, 0x8bb
    stw r5, lbl_8049DF04
    stw r0, lbl_8049DEFC
lbl_8029CFF4:
    addi r3, r1, 0x8
    bl __AXGetAuxCInput
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_8029D0A4
    lwz r4, lbl_8049DF04
    li r0, 0x7
    addi r3, r1, 0x8
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lhz r0, lbl_8049DEE8
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r0, 0x0(r4)
    lwz r4, lbl_8049DF04
    addi r5, r4, 0x2
    stw r5, lbl_8049DF04
    bl __AXGetAuxCOutput
    lwz r0, 0x8(r1)
    lwz r3, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    lwz r0, 0x8(r1)
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r4, lbl_8049DF04
    lwz r3, lbl_8049DEFC
    addi r5, r4, 0x2
    addi r0, r3, 0x8bb
    stw r5, lbl_8049DF04
    stw r0, lbl_8049DEFC
lbl_8029D0A4:
    lwz r0, lbl_8049DEF8
    cmpwi r0, 0x0
    beq lbl_8029D12C
    lwz r4, lbl_8049DF04
    li r0, 0xa
    lis r3, 0x1
    sth r0, 0x0(r4)
    addi r0, r3, -0x8000
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    lhz r0, lbl_8049DEF0
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    lwz r0, lbl_8049DEF4
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    lwz r0, lbl_8049DEF4
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r4, lbl_8049DF04
    lwz r3, lbl_8049DEFC
    addi r5, r4, 0x2
    addi r0, r3, 0x73a
    stw r5, lbl_8049DF04
    stw r0, lbl_8049DEFC
lbl_8029D12C:
    lwz r3, lbl_8049DF04
    li r0, 0xd
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    lwz r0, 0x0(r30)
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    lwz r0, 0x0(r30)
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    lwz r0, 0x4(r30)
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    lwz r0, 0x4(r30)
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    lwz r0, 0x8(r30)
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    lwz r0, 0x8(r30)
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    lwz r0, 0xc(r30)
    srwi r0, r0, 16
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    lwz r0, 0xc(r30)
    sth r0, 0x0(r3)
    lwz r4, lbl_8049DF04
    lwz r3, lbl_8049DEFC
    lwz r0, lbl_8049DF00
    addi r4, r4, 0x2
    addi r3, r3, 0x199
    stw r4, lbl_8049DF04
    cmplwi r0, 0x2
    stw r3, lbl_8049DEFC
    bne lbl_8029D28C
    li r0, 0xc
    srwi r3, r28, 16
    sth r0, 0x0(r4)
    srwi r0, r29, 16
    lwz r5, lbl_8049DF04
    lhz r4, lbl_8049DEEE
    addi r5, r5, 0x2
    stw r5, lbl_8049DF04
    sth r4, 0x0(r5)
    lwz r4, lbl_8049DF04
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r3, 0x0(r4)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r28, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r29, 0x0(r3)
    lwz r4, lbl_8049DF04
    lwz r3, lbl_8049DEFC
    addi r5, r4, 0x2
    addi r0, r3, 0x4ab
    stw r5, lbl_8049DF04
    stw r0, lbl_8049DEFC
    b lbl_8029D308
lbl_8029D28C:
    li r0, 0xb
    srwi r3, r28, 16
    sth r0, 0x0(r4)
    srwi r0, r29, 16
    lwz r5, lbl_8049DF04
    lhz r4, lbl_8049DEEE
    addi r5, r5, 0x2
    stw r5, lbl_8049DF04
    sth r4, 0x0(r5)
    lwz r4, lbl_8049DF04
    addi r4, r4, 0x2
    stw r4, lbl_8049DF04
    sth r3, 0x0(r4)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r28, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r0, 0x0(r3)
    lwz r3, lbl_8049DF04
    addi r3, r3, 0x2
    stw r3, lbl_8049DF04
    sth r29, 0x0(r3)
    lwz r4, lbl_8049DF04
    lwz r3, lbl_8049DEFC
    addi r5, r4, 0x2
    addi r0, r3, 0x494
    stw r5, lbl_8049DF04
    stw r0, lbl_8049DEFC
lbl_8029D308:
    li r0, 0xe
    mr r3, r31
    sth r0, 0x0(r5)
    li r4, 0x80
    lwz r5, lbl_8049DF04
    lwz r6, lbl_8049DEFC
    addi r5, r5, 0x2
    addi r0, r6, 0x1e
    stw r5, lbl_8049DF04
    stw r0, lbl_8049DEFC
    bl DCFlushRange
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
// fn_8029D354
// ----------------------------------------------------------------------------
asm void fn_8029D354() {
    nofralloc
    lis r6, lbl_80415040@ha
    lis r4, lbl_8036F460@ha
    li r7, 0x0
    lis r3, 0x1
    addi r0, r3, -0x8000
    addi r6, r6, lbl_80415040@l
    addi r4, r4, lbl_8036F460@l
    li r5, 0x1
    li r3, 0xa
    stw r7, lbl_8049DF00
    stw r7, lbl_8049DF08
    stw r6, lbl_8049DF04
    stw r5, lbl_8049DEF8
    stw r4, lbl_8049DEF4
    sth r3, lbl_8049DEF0
    sth r0, lbl_8049DEEE
    sth r0, lbl_8049DEEC
    sth r0, lbl_8049DEEA
    sth r0, lbl_8049DEE8
    blr
}

// ----------------------------------------------------------------------------
// fn_8029D3A4
// ----------------------------------------------------------------------------
asm void fn_8029D3A4() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_8029D3A8
// ----------------------------------------------------------------------------
asm void fn_8029D3A8() {
    nofralloc
    stw r3, lbl_8049DF00
    blr
}

// ----------------------------------------------------------------------------
// fn_8029D3B0
// ----------------------------------------------------------------------------
asm void fn_8029D3B0() {
    nofralloc
    lhz r3, lbl_8049DEEC
    blr
}

// ----------------------------------------------------------------------------
// fn_8029D3B8
// ----------------------------------------------------------------------------
asm void fn_8029D3B8() {
    nofralloc
    lhz r3, lbl_8049DEEA
    blr
}

// ----------------------------------------------------------------------------
// fn_8029D3C0
// ----------------------------------------------------------------------------
asm void fn_8029D3C0() {
    nofralloc
    lhz r3, lbl_8049DEE8
    blr
}

// ----------------------------------------------------------------------------
// fn_8029D3C8
// ----------------------------------------------------------------------------
asm void fn_8029D3C8() {
    nofralloc
    cmplwi r3, 0x8000
    ble lbl_8029D3D8
    lis r3, 0x1
    addi r3, r3, -0x8000
lbl_8029D3D8:
    sth r3, lbl_8049DEEE
    blr
}

// ----------------------------------------------------------------------------
// fn_8029D3E0
// ----------------------------------------------------------------------------
asm void fn_8029D3E0() {
    nofralloc
    sth r3, lbl_8049DEEC
    blr
}

// ----------------------------------------------------------------------------
// fn_8029D3E8
// ----------------------------------------------------------------------------
asm void fn_8029D3E8() {
    nofralloc
    sth r3, lbl_8049DEEA
    blr
}

// ----------------------------------------------------------------------------
// fn_8029D3F0
// ----------------------------------------------------------------------------
asm void fn_8029D3F0() {
    nofralloc
    sth r3, lbl_8049DEE8
    blr
}

