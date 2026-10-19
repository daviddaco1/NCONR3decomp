#include "types.h"

// Translation unit: src/nw4r/g3d/unk_801E635C.cpp
// Total functions: 3

// Small Data symbols (@sda21)
extern "C" float lbl_8049C4C8;
extern "C" float lbl_804A1DB0;
extern "C" float lbl_804A1DB4;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_80361290[];

// Forward declarations
extern "C" void CalcWorldMtx_Maya_SSC_Apply__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult();
extern "C" void CalcWorldMtx_Xsi__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult();
extern "C" void GetMtxIDTemporary__Q44nw4r3g3d6detail7workmemFv();
extern "C" void GetResByteCode__Q34nw4r3g3d6ResMdlCFPCc();
extern "C" void GetScaleTemporary__Q44nw4r3g3d6detail7workmemFv();
extern "C" void GetSkinningMtxTemporary__Q44nw4r3g3d6detail7workmemFv();
extern "C" void MTX34Scale__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3();
extern "C" void PSMTXConcat();
extern "C" void PSMTXCopy();
extern "C" void _restgpr_14();
extern "C" void _restgpr_25();
extern "C" void _savegpr_14();
extern "C" void _savegpr_25();
extern "C" void fn_801D0D24();
extern "C" void fn_801D0D78();
extern "C" void fn_801D4798();
extern "C" void fn_801D4934();
extern "C" void fn_801E635C();
extern "C" void fn_801E63DC();
extern "C" void fn_801E69A0();
extern "C" void fn_801E9D30();

// ----------------------------------------------------------------------------
// fn_801E635C
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E635C() {
    nofralloc
    lwz r4, 0x4(r3)
    fcmpu cr0, f1, f2
    stfs f1, 0x0(r4)
    lwz r4, 0x4(r3)
    stfs f2, 0x4(r4)
    lwz r4, 0x4(r3)
    stfs f3, 0x8(r4)
    bne lbl_801E63C8
    fcmpu cr0, f1, f3
    bne lbl_801E63C8
    lfs f0, lbl_804A1DB0
    fcmpu cr0, f0, f1
    bne lbl_801E63A4
    lwz r3, 0x8(r3)
    lwz r0, 0x0(r3)
    oris r0, r0, 0x4000
    stw r0, 0x0(r3)
    blr
lbl_801E63A4:
    lwz r4, 0x8(r3)
    lwz r0, 0x0(r4)
    oris r0, r0, 0x1000
    stw r0, 0x0(r4)
    lwz r3, 0x8(r3)
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 2
    stw r0, 0x0(r3)
    blr
lbl_801E63C8:
    lwz r3, 0x8(r3)
    lwz r0, 0x0(r3)
    clrlwi r0, r0, 4
    stw r0, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_801E63DC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E63DC() {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stfd f31, 0xc0(r1)
    opword 0xF3E100C8
    addi r11, r1, 0xc0
    bl _savegpr_14
    cmpwi r5, 0x0
    mr r18, r3
    mr r19, r4
    mr r20, r5
    mr r17, r6
    mr r21, r7
    mr r14, r8
    mr r22, r9
    mr r15, r10
    li r31, 0x0
    bne lbl_801E6440
    lis r4, lbl_80361290@ha
    mr r3, r21
    addi r4, r4, lbl_80361290@l
    bl GetResByteCode__Q34nw4r3g3d6ResMdlCFPCc
    cmpwi r3, 0x0
    mr r20, r3
    beq lbl_801E6980
lbl_801E6440:
    lwz r3, 0x0(r21)
    extrwi r0, r15, 1, 4
    stw r0, 0x74(r1)
    addi r3, r3, 0x4c
    lwz r3, 0x8(r3)
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    stb r0, 0x70(r1)
    bl GetScaleTemporary__Q44nw4r3g3d6detail7workmemFv
    lfs f0, lbl_804A1DB0
    mr r16, r3
    mr r4, r18
    stfs f0, 0x8(r3)
    stfs f0, 0x4(r3)
    stfs f0, 0x0(r3)
    mr r3, r17
    bl PSMTXCopy
    bl GetMtxIDTemporary__Q44nw4r3g3d6detail7workmemFv
    stw r15, 0x0(r19)
    mr r30, r3
    li r29, 0x0
    li r17, 0x0
    b lbl_801E68D8
lbl_801E64A0:
    cmplwi r0, 0x2
    bne lbl_801E6860
    lbz r0, 0x1(r20)
    mr r3, r21
    lbz r4, 0x3(r20)
    slwi r7, r0, 8
    lbz r6, 0x2(r20)
    lbz r0, 0x4(r20)
    slwi r5, r4, 8
    add r28, r7, r6
    mr r4, r28
    add r24, r5, r0
    bl fn_801D0D24
    cmpwi r3, 0x0
    stw r3, 0x14(r1)
    beq lbl_801E64E8
    lwz r15, 0x10(r3)
    b lbl_801E64EC
lbl_801E64E8:
    li r15, 0x0
lbl_801E64EC:
    stwx r15, r30, r17
    slwi r0, r24, 2
    mulli r3, r15, 0x30
    cmpwi r14, 0x0
    lwzx r23, r19, r0
    addi r29, r29, 0x1
    addi r17, r17, 0x4
    mulli r0, r15, 0xc
    add r27, r18, r3
    mulli r3, r24, 0x30
    add r26, r16, r0
    mulli r0, r24, 0xc
    add r25, r18, r3
    add r24, r16, r0
    beq lbl_801E655C
    lwz r5, 0x14(r1)
    mr r3, r14
    addi r4, r1, 0x24
    cmpwi r5, 0x0
    beq lbl_801E6544
    lwz r5, 0xc(r5)
    b lbl_801E6548
lbl_801E6544:
    li r5, 0x0
lbl_801E6548:
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r31, r3
lbl_801E655C:
    cmpwi r14, 0x0
    beq lbl_801E6570
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_801E6580
lbl_801E6570:
    addi r3, r1, 0x14
    addi r4, r1, 0x24
    bl fn_801D4934
    addi r31, r1, 0x24
lbl_801E6580:
    cmpwi r28, 0x0
    beq lbl_801E6654
    lwz r0, 0x74(r1)
    cmpwi r0, 0x0
    beq lbl_801E6654
    addi r0, r1, 0x24
    cmplw r31, r0
    beq lbl_801E663C
    lwz r0, 0x0(r31)
    stw r0, 0x24(r1)
    lwz r3, 0x4(r31)
    lwz r0, 0x8(r31)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    lwz r0, 0xc(r31)
    stw r0, 0x30(r1)
    lwz r3, 0x10(r31)
    lwz r0, 0x14(r31)
    stw r3, 0x34(r1)
    stw r0, 0x38(r1)
    lwz r0, 0x18(r31)
    stw r0, 0x3c(r1)
    lwz r3, 0x1c(r31)
    lwz r0, 0x20(r31)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x24(r31)
    lwz r0, 0x28(r31)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    lwz r3, 0x2c(r31)
    lwz r0, 0x30(r31)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0x34(r31)
    lwz r0, 0x38(r31)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    lwz r3, 0x3c(r31)
    lwz r0, 0x40(r31)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x44(r31)
    lwz r0, 0x48(r31)
    addi r31, r1, 0x24
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
lbl_801E663C:
    lwz r0, 0x24(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x24
    ori r0, r0, 0x200
    stw r0, 0x24(r1)
    bl fn_801D4798
lbl_801E6654:
    cmpwi r22, 0x0
    beq lbl_801E6744
    addi r0, r1, 0x24
    cmplw r31, r0
    beq lbl_801E6704
    lwz r0, 0x0(r31)
    stw r0, 0x24(r1)
    lwz r3, 0x4(r31)
    lwz r0, 0x8(r31)
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    lwz r0, 0xc(r31)
    stw r0, 0x30(r1)
    lwz r3, 0x10(r31)
    lwz r0, 0x14(r31)
    stw r3, 0x34(r1)
    stw r0, 0x38(r1)
    lwz r0, 0x18(r31)
    stw r0, 0x3c(r1)
    lwz r3, 0x1c(r31)
    lwz r0, 0x20(r31)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    lwz r3, 0x24(r31)
    lwz r0, 0x28(r31)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    lwz r3, 0x2c(r31)
    lwz r0, 0x30(r31)
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    lwz r3, 0x34(r31)
    lwz r0, 0x38(r31)
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    lwz r3, 0x3c(r31)
    lwz r0, 0x40(r31)
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    lwz r3, 0x44(r31)
    lwz r0, 0x48(r31)
    addi r31, r1, 0x24
    stw r3, 0x68(r1)
    stw r0, 0x6c(r1)
lbl_801E6704:
    lhz r0, 0x6(r22)
    lwz r3, 0x0(r21)
    cmplw r28, r0
    bne lbl_801E6744
    lbz r0, 0x4(r22)
    clrlwi. r0, r0, 31
    beq lbl_801E6744
    stw r3, 0x10(r1)
    mr r6, r22
    addi r4, r1, 0x24
    addi r5, r1, 0x10
    lwz r3, 0x0(r22)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_801E6744:
    lbz r0, 0x70(r1)
    cmpwi r0, 0x0
    beq lbl_801E677C
    slwi r0, r15, 2
    mr r3, r27
    add r15, r19, r0
    mr r4, r26
    mr r5, r25
    mr r6, r24
    mr r7, r23
    mr r8, r31
    bl CalcWorldMtx_Xsi__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult
    stw r3, 0x0(r15)
    b lbl_801E67DC
lbl_801E677C:
    lwz r0, 0x0(r31)
    rlwinm. r0, r0, 0, 21, 21
    beq lbl_801E67B4
    slwi r0, r15, 2
    mr r3, r27
    add r15, r19, r0
    mr r4, r26
    mr r5, r25
    mr r6, r24
    mr r7, r23
    mr r8, r31
    bl CalcWorldMtx_Maya_SSC_Apply__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult
    stw r3, 0x0(r15)
    b lbl_801E67DC
lbl_801E67B4:
    slwi r0, r15, 2
    mr r3, r27
    add r15, r19, r0
    mr r4, r26
    mr r5, r25
    mr r6, r24
    mr r7, r23
    mr r8, r31
    bl fn_801E9D30
    stw r3, 0x0(r15)
lbl_801E67DC:
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_801E67F0
    lwz r3, 0x18(r3)
    b lbl_801E67F4
lbl_801E67F0:
    li r3, 0x0
lbl_801E67F4:
    lwz r0, 0x0(r15)
    cmpwi r22, 0x0
    clrrwi r0, r0, 8
    or r0, r0, r3
    stw r0, 0x0(r15)
    beq lbl_801E6858
    lhz r0, 0x6(r22)
    lwz r3, 0x0(r21)
    cmplw r28, r0
    bne lbl_801E6858
    lbz r0, 0x4(r22)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_801E6858
    stw r27, 0x18(r1)
    mr r6, r22
    addi r4, r1, 0x18
    addi r5, r1, 0xc
    stw r26, 0x1c(r1)
    stw r15, 0x20(r1)
    stw r3, 0xc(r1)
    lwz r3, 0x0(r22)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_801E6858:
    addi r20, r20, 0x5
    b lbl_801E68D8
lbl_801E6860:
    lbz r0, 0x1(r20)
    addi r29, r29, 0x1
    lbz r3, 0x3(r20)
    slwi r5, r0, 8
    lbz r4, 0x2(r20)
    lbz r0, 0x4(r20)
    slwi r3, r3, 8
    add r15, r5, r4
    add r23, r3, r0
    stwx r15, r30, r17
    slwi r4, r23, 2
    slwi r0, r15, 2
    lwzx r4, r19, r4
    mulli r3, r23, 0x30
    addi r17, r17, 0x4
    stwx r4, r19, r0
    mulli r0, r15, 0x30
    add r3, r18, r3
    add r4, r18, r0
    bl PSMTXCopy
    mulli r0, r15, 0xc
    addi r20, r20, 0x5
    mulli r3, r23, 0xc
    lfsux f0, r3, r16
    add r4, r16, r0
    stfsx f0, r16, r0
    lfs f0, 0x4(r3)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r3)
    stfs f0, 0x8(r4)
lbl_801E68D8:
    lbz r0, 0x0(r20)
    cmplwi r0, 0x1
    bne lbl_801E64A0
    lfs f31, lbl_804A1DB0
    li r14, 0x0
    b lbl_801E693C
lbl_801E68F0:
    lwz r4, 0x0(r30)
    mulli r0, r4, 0xc
    lfsx f0, r16, r0
    add r3, r16, r0
    fcmpu cr0, f31, f0
    bne lbl_801E6920
    lfs f0, 0x4(r3)
    fcmpu cr0, f31, f0
    bne lbl_801E6920
    lfs f0, 0x8(r3)
    fcmpu cr0, f31, f0
    beq lbl_801E6934
lbl_801E6920:
    mulli r3, r4, 0x30
    add r5, r16, r0
    add r3, r18, r3
    mr r4, r3
    bl MTX34Scale__Q24nw4r4mathFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3
lbl_801E6934:
    addi r30, r30, 0x4
    addi r14, r14, 0x1
lbl_801E693C:
    cmplw r14, r29
    blt lbl_801E68F0
    cmpwi r22, 0x0
    beq lbl_801E6980
    lbz r0, 0x4(r22)
    lwz r3, 0x0(r21)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_801E6980
    stw r3, 0x8(r1)
    mr r4, r18
    mr r6, r22
    addi r5, r1, 0x8
    lwz r3, 0x0(r22)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_801E6980:
    opword 0xE3E100C8
    addi r11, r1, 0xc0
    lfd f31, 0xc0(r1)
    bl _restgpr_14
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// ----------------------------------------------------------------------------
// fn_801E69A0
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E69A0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r6, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    bne lbl_801E69E4
    mr r3, r28
    la r4, lbl_8049C4C8
    bl GetResByteCode__Q34nw4r3g3d6ResMdlCFPCc
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_801E6E7C
lbl_801E69E4:
    bl GetSkinningMtxTemporary__Q44nw4r3g3d6detail7workmemFv
    mr r30, r3
    lis r31, 0xf000
    b lbl_801E6C58
lbl_801E69F4:
    cmplwi r0, 0x3
    bne lbl_801E6C18
    lfs f0, lbl_804A1DB4
    lbz r3, 0x1(r29)
    opword 0x10000420
    lbz r0, 0x2(r29)
    lbz r11, 0x3(r29)
    slwi r3, r3, 8
    add r10, r3, r0
    addi r29, r29, 0x4
    slwi r9, r10, 2
    opword 0x10200420
    opword 0x10400420
    cmplwi r11, 0x0
    opword 0x10600420
    stwx r31, r27, r9
    opword 0x10800420
    opword 0x10A00420
    ble lbl_801E6BF4
    srwi. r0, r11, 1
    mtctr r0
    beq lbl_801E6B64
lbl_801E6A4C:
    lbz r3, 0x0(r29)
    lbz r0, 0x1(r29)
    slwi r3, r3, 8
    lbz r5, 0x3(r29)
    add r0, r3, r0
    lwzx r3, r27, r9
    mulli r4, r0, 0x30
    lbz r7, 0x5(r29)
    slwi r0, r0, 2
    lbz r8, 0x4(r29)
    lwzx r0, r27, r0
    slwi r5, r5, 16
    add r12, r30, r4
    lbz r6, 0x2(r29)
    opword 0xE0EC0000
    and r0, r3, r0
    opword 0xE10C0008
    rlwimi r7, r8, 8, 16, 23
    opword 0xE12C0010
    rlwimi r5, r6, 24, 0, 7
    opword 0xE14C0018
    or r4, r7, r5
    opword 0xE16C0020
    opword 0xE18C0028
    stw r4, 0x8(r1)
    stwx r0, r27, r9
    lfs f6, 0x8(r1)
    lbz r3, 0x6(r29)
    lbz r5, 0x9(r29)
    opword 0x1007019C
    lbz r0, 0x7(r29)
    slwi r3, r3, 8
    lbz r8, 0xa(r29)
    slwi r5, r5, 16
    add r0, r3, r0
    mulli r4, r0, 0x30
    lbz r6, 0x8(r29)
    lbz r7, 0xb(r29)
    slwi r0, r0, 2
    rlwimi r7, r8, 8, 16, 23
    opword 0x1028099C
    add r12, r30, r4
    rlwimi r5, r6, 24, 0, 7
    or r4, r7, r5
    opword 0x1049119C
    opword 0x106A199C
    stw r4, 0x8(r1)
    opword 0x108B219C
    opword 0xE0EC0000
    opword 0x10AC299C
    lfs f6, 0x8(r1)
    opword 0xE10C0008
    addi r29, r29, 0xc
    opword 0xE12C0010
    opword 0x1007019C
    opword 0xE14C0018
    opword 0x1028099C
    opword 0xE16C0020
    opword 0x1049119C
    opword 0xE18C0028
    lwzx r3, r27, r9
    opword 0x106A199C
    lwzx r0, r27, r0
    opword 0x108B219C
    opword 0x10AC299C
    and r0, r3, r0
    stwx r0, r27, r9
    bdnz lbl_801E6A4C
    andi. r11, r11, 0x1
    beq lbl_801E6BF4
lbl_801E6B64:
    mtctr r11
lbl_801E6B68:
    lbz r3, 0x0(r29)
    lbz r0, 0x1(r29)
    slwi r3, r3, 8
    lbz r5, 0x3(r29)
    add r0, r3, r0
    lbz r8, 0x4(r29)
    mulli r4, r0, 0x30
    lbz r6, 0x2(r29)
    lbz r7, 0x5(r29)
    slwi r5, r5, 16
    rlwimi r7, r8, 8, 16, 23
    lwzx r3, r27, r9
    add r12, r30, r4
    rlwimi r5, r6, 24, 0, 7
    or r4, r7, r5
    slwi r0, r0, 2
    stw r4, 0x8(r1)
    addi r29, r29, 0x6
    lwzx r0, r27, r0
    opword 0xE0EC0000
    lfs f6, 0x8(r1)
    and r0, r3, r0
    opword 0xE10C0008
    opword 0xE12C0010
    opword 0x1007019C
    opword 0xE14C0018
    opword 0x1028099C
    opword 0xE16C0020
    opword 0x1049119C
    opword 0xE18C0028
    opword 0x106A199C
    opword 0x108B219C
    stwx r0, r27, r9
    opword 0x10AC299C
    bdnz lbl_801E6B68
lbl_801E6BF4:
    mulli r0, r10, 0x30
    add r3, r26, r0
    opword 0xF0030000
    opword 0xF0230008
    opword 0xF0430010
    opword 0xF0630018
    opword 0xF0830020
    opword 0xF0A30028
    b lbl_801E6C58
lbl_801E6C18:
    lbz r0, 0x1(r29)
    mr r3, r28
    lbz r4, 0x3(r29)
    slwi r6, r0, 8
    lbz r5, 0x2(r29)
    lbz r0, 0x4(r29)
    slwi r4, r4, 8
    add r25, r6, r5
    add r4, r4, r0
    bl fn_801D0D24
    mulli r0, r25, 0x30
    addi r4, r3, 0xa0
    add r3, r26, r0
    add r5, r30, r0
    bl PSMTXConcat
    addi r29, r29, 0x5
lbl_801E6C58:
    lbz r0, 0x0(r29)
    cmplwi r0, 0x1
    bne lbl_801E69F4
    lwz r3, 0x0(r28)
    lbz r0, 0x6f(r3)
    addi r26, r3, 0x4c
    cmpwi r0, 0x1
    beq lbl_801E6C98
    bge lbl_801E6C88
    cmpwi r0, 0x0
    bge lbl_801E6E7C
    b lbl_801E6E7C
lbl_801E6C88:
    cmpwi r0, 0x3
    bge lbl_801E6E7C
    b lbl_801E6D8C
    b lbl_801E6E7C
lbl_801E6C98:
    lwz r0, 0x24(r26)
    mr r3, r28
    lwzx r28, r26, r0
    bl fn_801D0D78
    lwz r4, 0x1c(r26)
    subf r0, r3, r28
    subf r6, r0, r4
    cmplw cr1, r6, r4
    bge cr1, lbl_801E6E7C
    subf r0, r6, r4
    subi r5, r4, 0x8
    cmplwi r0, 0x8
    ble lbl_801E6D5C
    bgt cr1, lbl_801E6D5C
    addi r0, r5, 0x7
    slwi r3, r6, 2
    subf r0, r6, r0
    srwi r0, r0, 3
    add r3, r27, r3
    mtctr r0
    cmplw r6, r5
    bge lbl_801E6D5C
lbl_801E6CF0:
    lwz r0, 0x0(r3)
    addi r6, r6, 0x8
    oris r0, r0, 0x3000
    stw r0, 0x0(r3)
    lwz r0, 0x4(r3)
    oris r0, r0, 0x3000
    stw r0, 0x4(r3)
    lwz r0, 0x8(r3)
    oris r0, r0, 0x3000
    stw r0, 0x8(r3)
    lwz r0, 0xc(r3)
    oris r0, r0, 0x3000
    stw r0, 0xc(r3)
    lwz r0, 0x10(r3)
    oris r0, r0, 0x3000
    stw r0, 0x10(r3)
    lwz r0, 0x14(r3)
    oris r0, r0, 0x3000
    stw r0, 0x14(r3)
    lwz r0, 0x18(r3)
    oris r0, r0, 0x3000
    stw r0, 0x18(r3)
    lwz r0, 0x1c(r3)
    oris r0, r0, 0x3000
    stw r0, 0x1c(r3)
    addi r3, r3, 0x20
    bdnz lbl_801E6CF0
lbl_801E6D5C:
    slwi r3, r6, 2
    subf r0, r6, r4
    add r3, r27, r3
    mtctr r0
    cmplw r6, r4
    bge lbl_801E6E7C
lbl_801E6D74:
    lwz r0, 0x0(r3)
    oris r0, r0, 0x3000
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
    bdnz lbl_801E6D74
    b lbl_801E6E7C
lbl_801E6D8C:
    lwz r0, 0x24(r26)
    mr r3, r28
    lwzx r28, r26, r0
    bl fn_801D0D78
    lwz r4, 0x1c(r26)
    subf r0, r3, r28
    subf r6, r0, r4
    cmplw cr1, r6, r4
    bge cr1, lbl_801E6E7C
    subf r0, r6, r4
    subi r5, r4, 0x8
    cmplwi r0, 0x8
    ble lbl_801E6E50
    bgt cr1, lbl_801E6E50
    addi r0, r5, 0x7
    slwi r3, r6, 2
    subf r0, r6, r0
    srwi r0, r0, 3
    add r3, r27, r3
    mtctr r0
    cmplw r6, r5
    bge lbl_801E6E50
lbl_801E6DE4:
    lwz r0, 0x0(r3)
    addi r6, r6, 0x8
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x0(r3)
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x4(r3)
    lwz r0, 0x8(r3)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x8(r3)
    lwz r0, 0xc(r3)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0xc(r3)
    lwz r0, 0x10(r3)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x10(r3)
    lwz r0, 0x14(r3)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x14(r3)
    lwz r0, 0x18(r3)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x18(r3)
    lwz r0, 0x1c(r3)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x1c(r3)
    addi r3, r3, 0x20
    bdnz lbl_801E6DE4
lbl_801E6E50:
    slwi r3, r6, 2
    subf r0, r6, r4
    add r3, r27, r3
    mtctr r0
    cmplw r6, r4
    bge lbl_801E6E7C
lbl_801E6E68:
    lwz r0, 0x0(r3)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x0(r3)
    addi r3, r3, 0x4
    bdnz lbl_801E6E68
lbl_801E6E7C:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

