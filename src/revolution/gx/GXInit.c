#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK GXSetBreakPtCallback();              /* extern */
s32 OSGetTime();                                    /* extern */
M2C_UNK fn_802E1654();                       /* extern */
M2C_UNK fn_802E171C();                       /* extern */
extern s32 FifoObj_80461460;
extern M2C_UNK GXShutdownFuncInfo_8037AAF0;
extern M2C_UNK GXTexRegionAddrTable_8037AA30;
extern s8 *__GXData;
extern s32 __GXVersion;
extern s8 *__cpReg;
extern s8 *__memReg;
extern s32 __peReg;
extern s32 __piReg;
extern u32 lbl_8049E198;
extern s32 lbl_8049E1A0;
extern u32 lbl_8049E1A4;
extern s32 lbl_8049E1A8;

s8 * __GXDefaultTexRegionCallback();
s8 * __GXDefaultTlutRegionCallback();
s32 __GXShutdown();
void __GXInitRevisionBits();
s32 * GXInit();

// __GXDefaultTexRegionCallback: definicion C reemplazada por asm (ver abajo)


s8 *__GXDefaultTlutRegionCallback(u32 arg0) {
    if (arg0 >= 0x14U) {
        return NULL;
    }
    return __GXData + (arg0 * 0x10) + 0x3D8;
}

// __GXShutdown: definicion C reemplazada por asm (ver abajo)


// __GXInitRevisionBits: definicion C reemplazada por asm (ver abajo)


s32 *GXInit(s32 arg0, s32 arg1, M2C_UNK arg_sp0);

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float at_2811_804A2574;
extern float at_2812_804A2578;
extern float shutdownFuncRegistered_2355_8049E1AC;
s32 * GXInit();
extern void GXInitFifoBase();
extern void GXInitTexCacheRegion();
extern void GXInitTlutRegion();
extern void GXSetCPUFifo();
extern void GXSetGPFifo();
extern void GXSetMisc();
extern void OSRegisterShutdownFunction();
extern void OSRegisterVersion();
extern void PPCMthid2();
extern void PPCMtwpar();
extern void PPCSync();
s8 *__GXDefaultTexRegionCallback(s32 arg0, u32 arg1);
extern void __GXFifoInit();
extern void __GXFlushTextureState();
extern void __GXInitGX();
void __GXInitRevisionBits(void);
extern void __GXPEInit();
extern void __GXSetIndirectMask();
extern void __GXSetTmemConfig();
s32 __GXShutdown(s32 arg0);
extern void _restgpr_26();
extern void _savegpr_26();
extern void fn_802E1138();

// asm_to_cpp: __GXDefaultTexRegionCallback
asm s8 *__GXDefaultTexRegionCallback(s32 arg0, u32 arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl GXGetTexObjFmt
    mr r31, r3
    mr r3, r29
    bl GXGetTexObjMipMap
    slwi r0, r30, 29
    srwi r4, r30, 31
    subf r0, r4, r0
    cmpwi r31, 0x7
    rotlwi r0, r0, 3
    add r30, r0, r4
    beq lbl_802DE17C
    bge lbl_802DE12C
    cmpwi r31, 0x6
    bge lbl_802DE138
    b lbl_802DE17C
lbl_802DE12C:
    cmpwi r31, 0xb
    bge lbl_802DE17C
    b lbl_802DE168
lbl_802DE138:
    clrlwi. r0, r3, 24
    beq lbl_802DE154
    lwz r3, __GXData
    slwi r0, r30, 4
    add r3, r3, r0
    addi r3, r3, 0x358
    b lbl_802DE1A8
lbl_802DE154:
    lwz r3, __GXData
    slwi r0, r30, 4
    add r3, r3, r0
    addi r3, r3, 0x2d8
    b lbl_802DE1A8
lbl_802DE168:
    lwz r3, __GXData
    slwi r0, r30, 4
    add r3, r3, r0
    addi r3, r3, 0x258
    b lbl_802DE1A8
lbl_802DE17C:
    clrlwi. r0, r3, 24
    beq lbl_802DE198
    lwz r3, __GXData
    slwi r0, r30, 4
    add r3, r3, r0
    addi r3, r3, 0x2d8
    b lbl_802DE1A8
lbl_802DE198:
    lwz r3, __GXData
    slwi r0, r30, 4
    add r3, r3, r0
    addi r3, r3, 0x258
lbl_802DE1A8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __GXShutdown
asm s32 __GXShutdown(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bne lbl_802DE2D4
    lwz r0, lbl_8049E1A8
    cmpwi r0, 0x0
    bne lbl_802DE250
    lwz r5, __memReg
    lhz r4, 0x4e(r5)
lbl_802DE214:
    mr r0, r4
    lhz r3, 0x50(r5)
    lhz r4, 0x4e(r5)
    cmplw r4, r0
    bne lbl_802DE214
    slwi r0, r4, 16
    or r0, r0, r3
    stw r0, lbl_8049E198
    bl OSGetTime
    li r0, 0x1
    stw r3, lbl_8049E1A0
    li r3, 0x0
    stw r4, lbl_8049E1A4
    stw r0, lbl_8049E1A8
    b lbl_802DE340
lbl_802DE250:
    bl OSGetTime
    lwz r5, __memReg
    lhz r7, 0x4e(r5)
lbl_802DE25C:
    mr r0, r7
    lhz r10, 0x50(r5)
    lhz r7, 0x4e(r5)
    cmplw r7, r0
    bne lbl_802DE25C
    lwz r5, lbl_8049E1A4
    li r0, 0x0
    lwz r6, lbl_8049E1A0
    slwi r9, r7, 16
    subfc r8, r5, r4
    li r5, 0xa
    subfe r7, r6, r3
    xoris r6, r0, 0x8000
    subfc r5, r5, r8
    xoris r0, r7, 0x8000
    subfe r6, r6, r0
    or r5, r9, r10
    subfe r6, r0, r0
    neg. r6, r6
    beq lbl_802DE2B4
    li r3, 0x0
    b lbl_802DE340
lbl_802DE2B4:
    lwz r0, lbl_8049E198
    cmplw r5, r0
    beq lbl_802DE33C
    stw r3, lbl_8049E1A0
    li r3, 0x0
    stw r5, lbl_8049E198
    stw r4, lbl_8049E1A4
    b lbl_802DE340
lbl_802DE2D4:
    li r3, 0x0
    bl GXSetBreakPtCallback
    li r3, 0x0
    bl fn_802E1654
    li r3, 0x0
    bl fn_802E171C
    li r31, 0x0
    lis r3, 0xcc01
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    stw r31, -0x8000(r3)
    bl PPCSync
    lwz r4, __cpReg
    li r5, 0x3
    lwz r3, __GXData
    li r0, 0x1
    sth r31, 0x2(r4)
    lwz r4, __cpReg
    sth r5, 0x4(r4)
    stb r0, 0x5fa(r3)
    bl fn_802E1138
lbl_802DE33C:
    li r3, 0x1
lbl_802DE340:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __GXInitRevisionBits
asm void __GXInitRevisionBits(void) {
    nofralloc
    li r0, 0x2
    lwz r6, __GXData
    li r7, 0x0
    li r5, 0x8
    lis r4, 0xcc01
    mtctr r0
lbl_802DE36C:
    lwz r0, 0x1c(r6)
    ori r3, r7, 0x80
    addi r7, r7, 0x1
    oris r0, r0, 0x4000
    stw r0, 0x1c(r6)
    lwz r0, 0x3c(r6)
    oris r0, r0, 0x8000
    stw r0, 0x3c(r6)
    stb r5, -0x8000(r4)
    stb r3, -0x8000(r4)
    ori r3, r7, 0x80
    addi r7, r7, 0x1
    lwz r0, 0x3c(r6)
    stw r0, -0x8000(r4)
    lwz r0, 0x20(r6)
    oris r0, r0, 0x4000
    stw r0, 0x20(r6)
    lwz r0, 0x40(r6)
    oris r0, r0, 0x8000
    stw r0, 0x40(r6)
    stb r5, -0x8000(r4)
    stb r3, -0x8000(r4)
    ori r3, r7, 0x80
    addi r7, r7, 0x1
    lwz r0, 0x40(r6)
    stw r0, -0x8000(r4)
    lwz r0, 0x24(r6)
    oris r0, r0, 0x4000
    stw r0, 0x24(r6)
    lwz r0, 0x44(r6)
    oris r0, r0, 0x8000
    stw r0, 0x44(r6)
    stb r5, -0x8000(r4)
    stb r3, -0x8000(r4)
    ori r3, r7, 0x80
    addi r7, r7, 0x1
    lwz r0, 0x44(r6)
    stw r0, -0x8000(r4)
    lwz r0, 0x28(r6)
    oris r0, r0, 0x4000
    stw r0, 0x28(r6)
    lwz r0, 0x48(r6)
    oris r0, r0, 0x8000
    stw r0, 0x48(r6)
    stb r5, -0x8000(r4)
    stb r3, -0x8000(r4)
    lwz r0, 0x48(r6)
    addi r6, r6, 0x10
    stw r0, -0x8000(r4)
    bdnz lbl_802DE36C
    lis r7, 0xcc01
    li r8, 0x10
    stb r8, -0x8000(r7)
    li r4, 0x0
    li r0, 0x1000
    li r5, 0x1012
    stw r0, -0x8000(r7)
    ori r3, r4, 0x3f
    ori r6, r4, 0x1
    li r0, 0x61
    stw r3, -0x8000(r7)
    li r3, 0x58
    ori r4, r4, 0xf
    stb r8, -0x8000(r7)
    rlwimi r4, r3, 24, 0, 7
    stw r5, -0x8000(r7)
    stw r6, -0x8000(r7)
    stb r0, -0x8000(r7)
    stw r4, -0x8000(r7)
    blr
}

// asm_to_cpp: GXInit
asm s32 * GXInit() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r27, r3
    lwz r3, __GXVersion
    mr r26, r4
    bl OSRegisterVersion
    lwz r31, __GXData
    li r0, 0x0
    li r29, 0x1
    li r3, 0x1
    stb r0, 0x5f8(r31)
    li r4, 0x0
    stb r29, 0x5f9(r31)
    stb r29, 0x5fa(r31)
    stw r0, 0x5e4(r31)
    stw r0, 0x5e8(r31)
    bl GXSetMisc
    lis r4, 0xcc00
    addi r5, r4, 0x3000
    stw r4, __cpReg
    addi r3, r4, 0x1000
    addi r0, r4, 0x4000
    stw r5, __piReg
    stw r3, __peReg
    stw r0, __memReg
    bl __GXFifoInit
    lis r28, FifoObj_80461460@ha
    mr r4, r27
    mr r5, r26
    addi r3, r28, FifoObj_80461460@l
    bl GXInitFifoBase
    addi r3, r28, FifoObj_80461460@l
    bl GXSetCPUFifo
    addi r3, r28, FifoObj_80461460@l
    bl GXSetGPFifo
    lwz r0, shutdownFuncRegistered_2355_8049E1AC
    cmpwi r0, 0x0
    bne lbl_802DE538
    lis r3, GXShutdownFuncInfo_8037AAF0@ha
    addi r3, r3, GXShutdownFuncInfo_8037AAF0@l
    bl OSRegisterShutdownFunction
    stw r29, shutdownFuncRegistered_2355_8049E1AC
lbl_802DE538:
    bl __GXPEInit
    bl PPCMfhid2
    lis r4, 0xc01
    mr r28, r3
    addi r3, r4, -0x8000
    bl PPCMtwpar
    oris r3, r28, 0x4000
    bl PPCMthid2
    lwz r3, __GXData
    li r8, 0x0
    li r0, 0xf
    li r5, 0xff
    stw r8, 0x254(r3)
    rlwimi r5, r0, 24, 0, 7
    li r0, 0x22
    li r4, 0x0
    stw r5, 0x174(r3)
    rlwimi r4, r0, 24, 0, 7
    li r0, 0x8
    mr r9, r3
    stw r4, 0x7c(r3)
    li r26, 0x0
    li r10, 0xc0
    li r6, 0xff
    mtctr r0
lbl_802DE59C:
    stw r8, 0x180(r9)
    srwi r12, r26, 1
    extlwi r7, r26, 30, 1
    addi r11, r10, 0x1
    stw r8, 0x1c0(r9)
    add r27, r3, r7
    addi r26, r26, 0x1
    addi r5, r12, 0xf6
    stw r8, 0x150(r27)
    addi r0, r12, 0x28
    extlwi r7, r26, 30, 1
    srwi r12, r26, 1
    stw r6, 0x5a4(r9)
    addi r26, r26, 0x1
    lwz r4, 0x180(r9)
    rlwimi r4, r10, 24, 0, 7
    stw r4, 0x180(r9)
    lwz r4, 0x1c0(r9)
    rlwimi r4, r11, 24, 0, 7
    addi r11, r10, 0x3
    addi r10, r10, 0x2
    stw r4, 0x1c0(r9)
    lwz r4, 0x200(r27)
    rlwimi r4, r5, 24, 0, 7
    addi r5, r12, 0xf6
    stw r4, 0x200(r27)
    lwz r4, 0x150(r27)
    rlwimi r4, r0, 24, 0, 7
    addi r0, r12, 0x28
    stw r4, 0x150(r27)
    add r27, r3, r7
    stw r8, 0x184(r9)
    stw r8, 0x1c4(r9)
    stw r8, 0x150(r27)
    stw r6, 0x5a8(r9)
    lwz r4, 0x184(r9)
    rlwimi r4, r10, 24, 0, 7
    addi r10, r10, 0x2
    stw r4, 0x184(r9)
    lwz r4, 0x1c4(r9)
    rlwimi r4, r11, 24, 0, 7
    stw r4, 0x1c4(r9)
    addi r9, r9, 0x8
    lwz r4, 0x200(r27)
    rlwimi r4, r5, 24, 0, 7
    stw r4, 0x200(r27)
    lwz r4, 0x150(r27)
    rlwimi r4, r0, 24, 0, 7
    stw r4, 0x150(r27)
    bdnz lbl_802DE59C
    li r0, 0x27
    li r4, 0x0
    rlwimi r4, r0, 24, 0, 7
    li r5, 0x30
    li r0, 0x2
    stw r4, 0x170(r31)
    mtctr r0
lbl_802DE680:
    li r4, 0x0
    addi r6, r5, 0x1
    rlwimi r4, r5, 24, 0, 7
    li r0, 0x0
    stw r4, 0x108(r3)
    rlwimi r0, r6, 24, 0, 7
    addi r6, r5, 0x3
    addi r5, r5, 0x2
    stw r0, 0x128(r3)
    li r4, 0x0
    rlwimi r4, r5, 24, 0, 7
    li r0, 0x0
    stw r4, 0x10c(r3)
    rlwimi r0, r6, 24, 0, 7
    addi r6, r5, 0x3
    addi r5, r5, 0x2
    stw r0, 0x12c(r3)
    li r4, 0x0
    rlwimi r4, r5, 24, 0, 7
    li r0, 0x0
    stw r4, 0x110(r3)
    rlwimi r0, r6, 24, 0, 7
    addi r6, r5, 0x3
    addi r5, r5, 0x2
    stw r0, 0x130(r3)
    li r4, 0x0
    rlwimi r4, r5, 24, 0, 7
    li r0, 0x0
    stw r4, 0x114(r3)
    rlwimi r0, r6, 24, 0, 7
    addi r5, r5, 0x2
    stw r0, 0x134(r3)
    addi r3, r3, 0x10
    bdnz lbl_802DE680
    lwz r30, __GXData
    lis r3, 0x1062
    li r4, 0x20
    li r0, 0x21
    lwz r5, 0x148(r30)
    rlwimi r5, r4, 24, 0, 7
    li r8, 0x41
    li r7, 0x42
    stw r5, 0x148(r30)
    li r6, 0x40
    li r5, 0x43
    lfs f1, at_2811_804A2574
    lwz r4, 0x14c(r30)
    rlwimi r4, r0, 24, 0, 7
    lfs f0, at_2812_804A2578
    li r0, 0x0
    stw r4, 0x14c(r30)
    lis r4, 0x8000
    addi r3, r3, 0x4dd3
    lwz r9, 0x220(r30)
    rlwimi r9, r8, 24, 0, 7
    stw r9, 0x220(r30)
    lwz r8, 0x224(r30)
    rlwimi r8, r7, 24, 0, 7
    stw r8, 0x224(r30)
    lwz r7, 0x228(r30)
    rlwimi r7, r6, 24, 0, 7
    stw r7, 0x228(r30)
    lwz r6, 0x22c(r30)
    rlwimi r6, r5, 24, 0, 7
    stw r6, 0x22c(r30)
    lwz r5, 0x24c(r30)
    rlwinm r5, r5, 0, 25, 22
    stw r5, 0x24c(r30)
    stfs f1, 0x560(r30)
    stfs f0, 0x55c(r30)
    stw r0, 0x5fc(r30)
    stb r0, 0x5fb(r30)
    lwz r0, 0xf8(r4)
    mulhwu r0, r3, r0
    srwi r26, r0, 5
    bl __GXFlushTextureState
    srwi r0, r26, 11
    lis r29, 0xcc01
    li r28, 0x61
    oris r0, r0, 0x6900
    stb r28, -0x8000(r29)
    ori r0, r0, 0x400
    stw r0, -0x8000(r29)
    bl __GXFlushTextureState
    lis r3, 0x3e10
    stb r28, -0x8000(r29)
    subi r0, r3, 0x7c1f
    mulhwu r0, r0, r26
    srwi r0, r0, 10
    oris r0, r0, 0x4600
    ori r0, r0, 0x200
    stw r0, -0x8000(r29)
    bl __GXInitRevisionBits
    lis r28, GXTexRegionAddrTable_8037AA30@ha
    addi r29, r30, 0x258
    addi r27, r30, 0x2d8
    addi r30, r30, 0x358
    addi r28, r28, GXTexRegionAddrTable_8037AA30@l
    li r26, 0x0
lbl_802DE80C:
    lwz r5, 0x0(r28)
    mr r3, r29
    lwz r7, 0x20(r28)
    li r4, 0x0
    li r6, 0x0
    li r8, 0x0
    bl GXInitTexCacheRegion
    lwz r5, 0x40(r28)
    mr r3, r27
    lwz r7, 0x60(r28)
    li r4, 0x0
    li r6, 0x0
    li r8, 0x0
    bl GXInitTexCacheRegion
    lwz r5, 0x80(r28)
    mr r3, r30
    lwz r7, 0xa0(r28)
    li r4, 0x1
    li r6, 0x0
    li r8, 0x0
    bl GXInitTexCacheRegion
    addi r26, r26, 0x1
    addi r29, r29, 0x10
    cmplwi r26, 0x8
    addi r27, r27, 0x10
    addi r30, r30, 0x10
    addi r28, r28, 0x4
    blt lbl_802DE80C
    addi r29, r31, 0x3d8
    li r27, 0x0
    lis r28, 0xc
lbl_802DE888:
    mr r3, r29
    mr r4, r28
    li r5, 0x10
    bl GXInitTlutRegion
    addi r27, r27, 0x1
    addi r29, r29, 0x10
    cmplwi r27, 0x10
    addi r28, r28, 0x2000
    blt lbl_802DE888
    addi r29, r31, 0x3d8
    li r27, 0x0
    lis r28, 0xe
lbl_802DE8B8:
    addi r0, r27, 0x10
    mr r4, r28
    slwi r0, r0, 4
    li r5, 0x40
    add r3, r29, r0
    bl GXInitTlutRegion
    addi r27, r27, 0x1
    addis r28, r28, 0x1
    cmplwi r27, 0x4
    addi r28, r28, -0x8000
    blt lbl_802DE8B8
    lwz r3, __cpReg
    li r12, 0x0
    lis r9, 0xcc01
    li r10, 0x8
    sth r12, 0x6(r3)
    li r3, 0x20
    li r8, 0x10
    li r7, 0x1006
    lwz r0, 0x5f4(r31)
    li r6, 0x61
    lis r5, 0x2300
    lis r4, 0x2400
    rlwinm r11, r0, 0, 28, 23
    lis r0, 0x6700
    stw r11, 0x5f4(r31)
    stb r10, -0x8000(r9)
    stb r3, -0x8000(r9)
    lwz r3, 0x5f4(r31)
    stw r3, -0x8000(r9)
    li r3, 0x0
    stb r8, -0x8000(r9)
    stw r7, -0x8000(r9)
    stw r12, -0x8000(r9)
    stb r6, -0x8000(r9)
    stw r5, -0x8000(r9)
    stb r6, -0x8000(r9)
    stw r4, -0x8000(r9)
    stb r6, -0x8000(r9)
    stw r0, -0x8000(r9)
    bl __GXSetIndirectMask
    li r3, 0x2
    bl __GXSetTmemConfig
    bl __GXInitGX
    lis r3, FifoObj_80461460@ha
    addi r11, r1, 0x20
    addi r3, r3, FifoObj_80461460@l
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
