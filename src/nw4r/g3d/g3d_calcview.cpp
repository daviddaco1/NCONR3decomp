#include "types.h"

// Translation unit: src/nw4r/g3d/g3d_calcview.cpp
// Total functions: 11

// Small Data symbols (@sda21)
extern "C" float lbl_804A1DA0;
extern "C" float lbl_804A1DA4;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_8033C670[];
extern "C" u8 lbl_804A1DA8[];

// Forward declarations
extern "C" void CalcInvWorldMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34();
extern "C" void CalcViewNrmMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34();
extern "C" void CalcViewTexMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34();
extern "C" void CalcView_LC_DMA_ModelMtx__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34();
extern "C" void CalcView_LC__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34();
extern "C" void CalcView__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34();
extern "C" void DCFlushRangeNoSync();
extern "C" void DCInvalidateRange();
extern "C" void FrSqrt__Q24nw4r4mathFf();
extern "C" void GetBillboardMtxTemporary__Q44nw4r3g3d6detail7workmemFv();
extern "C" void LoadBlocks__Q34nw4r2ut2LCFPvPvUl();
extern "C" void MTX34ToMTX33__Q24nw4r4mathFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34();
extern "C" void MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34();
extern "C" void PSMTXConcat();
extern "C" void PSMTXConcatArray();
extern "C" void PSMTXCopy();
extern "C" void PSMTXIdentity();
extern "C" void StoreBlocks__Q34nw4r2ut2LCFPvPvUl();
extern "C" void _restgpr_14();
extern "C" void _savegpr_14();
extern "C" void fn_801D0CD0();
extern "C" void fn_801D0D24();
extern "C" void fn_801E4064();
extern "C" void fn_801E4124();
extern "C" void fn_801E41FC();
extern "C" void fn_801E4454();
extern "C" void fn_801E47A4();
extern "C" void fn_801E4AA8();
extern "C" void fn_801E4E98();
extern "C" void fn_801E5178();
extern "C" void fn_8030DE44();
extern "C" void fn_8030DEEC();
extern "C" void fn_803153E4();
extern "C" void fn_803153F0();
extern "C" void fn_8031CDB4();

// ----------------------------------------------------------------------------
// fn_801E4064
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E4064() {
    nofralloc
    opword 0xE0058000
    opword 0xE0250004
    opword 0xE0458010
    opword 0x10C104A0
    opword 0xE0650014
    opword 0xE0858020
    opword 0x10E314A0
    opword 0xE0A50024
    opword 0x116301B2
    opword 0x11A501F2
    opword 0x110524A0
    opword 0x116159F8
    opword 0x11810232
    opword 0x11A36A38
    lis r12, lbl_804A1DA8@ha
    opword 0xE0648018
    opword 0x118561B8
    addi r12, r12, lbl_804A1DA8@l
    opword 0x10E00372
    opword 0x11200172
    opword 0xE0CC8000
    opword 0x10E23B3A
    opword 0x11AD6828
    opword 0xE0448008
    opword 0x10E43AFA
    opword 0x11214938
    opword 0xE0240010
    opword 0x11003A10
    opword 0xF1A38008
    opword 0x10083040
    bge lbl_801E40E8
    opword 0xF1A30000
    blr
lbl_801E40E8:
    fres f8, f7
    opword 0xE0040000
    opword 0x1168402A
    opword 0x11470232
    opword 0x10800C20
    opword 0x11085ABC
    opword 0x10A00CE0
    opword 0x10C21C20
    opword 0x118C0218
    opword 0x11290218
    opword 0x10040318
    opword 0x1005031E
    opword 0x1006025C
    opword 0xF0030000
    blr
}

// ----------------------------------------------------------------------------
// fn_801E4124
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E4124() {
    nofralloc
    opword 0xE0058000
    opword 0xE0250004
    opword 0xE0458010
    opword 0x10C104A0
    opword 0xE0650014
    opword 0xE0858020
    opword 0x10E314A0
    opword 0xE0A50024
    opword 0x116301B2
    opword 0x11A501F2
    opword 0x110524A0
    opword 0x116159F8
    opword 0x11810232
    opword 0x11A36A38
    lis r12, lbl_804A1DA8@ha
    opword 0xE0648018
    opword 0x118561B8
    addi r12, r12, lbl_804A1DA8@l
    opword 0x10E00372
    opword 0x11200172
    opword 0xE0CC8000
    opword 0x10E23B3A
    opword 0x11AD6828
    opword 0xE0448008
    opword 0x10E43AFA
    opword 0x11214938
    opword 0xE0240010
    opword 0x11003A10
    opword 0xF1A38008
    opword 0x10083040
    bge lbl_801E41A8
    opword 0xF1A30000
    blr
lbl_801E41A8:
    fres f8, f7
    opword 0xE0040000
    opword 0x1168402A
    opword 0x11470232
    opword 0x10800C20
    opword 0x11085ABC
    opword 0x10A00CE0
    opword 0x10C21C20
    opword 0x118C0218
    opword 0xE0240020
    opword 0x11290218
    opword 0xE0448028
    opword 0x10040318
    opword 0x10210272
    opword 0x1005031E
    opword 0x10210854
    opword 0x1006025C
    fmadds f1, f2, f9, f1
    opword 0xF0030000
    opword 0xF0238008
    blr
}

// ----------------------------------------------------------------------------
// fn_801E41FC
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E41FC() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stfd f29, 0x30(r1)
    opword 0xF3A10038
    lfs f0, lbl_804A1DA4
    stw r31, 0x2c(r1)
    mr r31, r8
    lfs f1, lbl_804A1DA0
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    lfs f2, 0x4(r3)
    lfs f3, 0x14(r3)
    fabs f4, f2
    stfs f2, 0x8(r1)
    fcmpo cr0, f4, f0
    stfs f3, 0xc(r1)
    stfs f1, 0x10(r1)
    opword 0x4C411382
    beq lbl_801E427C
    fabs f1, f3
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801E4418
lbl_801E427C:
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8030DE44
    cmpwi r30, 0x0
    beq lbl_801E430C
    mulli r0, r31, 0x30
    lfs f0, lbl_804A1DA0
    add r3, r29, r0
    lfsx f2, r29, r0
    lfs f1, 0x10(r3)
    lfs f3, 0x20(r3)
    fmuls f2, f2, f2
    fmuls f1, f1, f1
    fmuls f3, f3, f3
    fadds f1, f2, f1
    fadds f30, f3, f1
    fcmpo cr0, f30, f0
    opword 0x4C401382
    bne lbl_801E42CC
    b lbl_801E42D8
lbl_801E42CC:
    fmr f1, f30
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f30, f1
lbl_801E42D8:
    opword 0xE0410008
    lfs f1, lbl_804A1DA0
    opword 0x10420018
    stfs f0, 0x28(r28)
    stfs f1, 0x8(r28)
    opword 0x100214A0
    stfs f1, 0x18(r28)
    opword 0xF01C0000
    opword 0x10001050
    opword 0xF03C0020
    opword 0x10001460
    opword 0xF01C0010
    b lbl_801E441C
lbl_801E430C:
    mulli r31, r31, 0x30
    lfs f30, lbl_804A1DA0
    add r3, r29, r31
    lfsx f1, r29, r31
    lfs f0, 0x10(r3)
    lfs f2, 0x20(r3)
    fmuls f1, f1, f1
    fmuls f0, f0, f0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f31, f2, f0
    fcmpo cr0, f31, f30
    opword 0x4C401382
    bne lbl_801E4348
    b lbl_801E4354
lbl_801E4348:
    fmr f1, f31
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f30, f31, f1
lbl_801E4354:
    add r3, r29, r31
    lfs f31, lbl_804A1DA0
    lfs f1, 0x4(r3)
    lfs f0, 0x14(r3)
    fmuls f1, f1, f1
    lfs f2, 0x24(r3)
    fmuls f0, f0, f0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f29, f2, f0
    fcmpo cr0, f29, f31
    opword 0x4C401382
    bne lbl_801E438C
    b lbl_801E4398
lbl_801E438C:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f31, f29, f1
lbl_801E4398:
    add r3, r29, r31
    lfs f0, lbl_804A1DA0
    lfs f2, 0x8(r3)
    lfs f1, 0x18(r3)
    fmuls f2, f2, f2
    lfs f3, 0x28(r3)
    fmuls f1, f1, f1
    fmuls f3, f3, f3
    fadds f1, f2, f1
    fadds f29, f3, f1
    fcmpo cr0, f29, f0
    opword 0x4C401382
    bne lbl_801E43D0
    b lbl_801E43DC
lbl_801E43D0:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f29, f1
lbl_801E43DC:
    opword 0xE0610008
    opword 0x109EFC20
    lfs f1, lbl_804A1DA0
    opword 0x10431CA0
    stfs f0, 0x28(r28)
    opword 0x10001850
    stfs f1, 0x8(r28)
    opword 0x10420132
    stfs f1, 0x18(r28)
    opword 0xF05C0000
    opword 0x10401C60
    opword 0xF03C0020
    opword 0x10420132
    opword 0xF05C0010
    b lbl_801E441C
lbl_801E4418:
    bl MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34
lbl_801E441C:
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    lfd f30, 0x40(r1)
    opword 0xE3A10038
    lfd f29, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x64(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_801E4454
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E4454() {
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
    lfs f0, lbl_804A1DA4
    stw r31, 0x3c(r1)
    mr r31, r8
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    lfs f3, 0x24(r3)
    lfs f2, 0x14(r3)
    lfs f1, 0x4(r3)
    stfs f1, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f3, 0x1c(r1)
    lfs f1, 0xc(r3)
    lfs f2, 0x2c(r3)
    fneg f3, f1
    lfs f1, 0x1c(r3)
    fneg f2, f2
    fneg f1, f1
    frsp f4, f3
    stfs f3, 0x8(r1)
    stfs f1, 0xc(r1)
    fabs f3, f4
    stfs f2, 0x10(r1)
    fcmpo cr0, f3, f0
    opword 0x4C411382
    beq lbl_801E4514
    frsp f1, f1
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_801E4514
    frsp f1, f2
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801E4764
lbl_801E4514:
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8030DE44
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    bl fn_8030DEEC
    lfs f1, 0x20(r1)
    lfs f0, lbl_804A1DA4
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_801E4570
    lfs f1, 0x24(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_801E4570
    lfs f1, 0x28(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801E4764
lbl_801E4570:
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8030DE44
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_8030DEEC
    cmpwi r30, 0x0
    beq lbl_801E4638
    mulli r0, r31, 0x30
    lfs f0, lbl_804A1DA0
    add r3, r29, r0
    lfsx f2, r29, r0
    lfs f1, 0x10(r3)
    lfs f3, 0x20(r3)
    fmuls f2, f2, f2
    fmuls f1, f1, f1
    fmuls f3, f3, f3
    fadds f1, f2, f1
    fadds f30, f3, f1
    fcmpo cr0, f30, f0
    opword 0x4C401382
    bne lbl_801E45D0
    b lbl_801E45DC
lbl_801E45D0:
    fmr f1, f30
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f30, f1
lbl_801E45DC:
    opword 0xE0610020
    opword 0xE0210014
    opword 0x10630018
    opword 0x10210018
    opword 0x10430C20
    opword 0x10230CE0
    opword 0xF05C0000
    opword 0xF03C0010
    opword 0xE0610008
    opword 0x10630018
    stfs f3, 0x8(r28)
    opword 0x10631CE0
    stfs f3, 0x18(r28)
    lfs f3, 0x28(r1)
    fmuls f3, f3, f0
    stfs f3, 0x20(r28)
    lfs f3, 0x1c(r1)
    fmuls f3, f3, f0
    stfs f3, 0x24(r28)
    lfs f3, 0x10(r1)
    fmuls f3, f3, f0
    stfs f3, 0x28(r28)
    b lbl_801E476C
lbl_801E4638:
    mulli r31, r31, 0x30
    lfs f30, lbl_804A1DA0
    add r3, r29, r31
    lfsx f1, r29, r31
    lfs f0, 0x10(r3)
    lfs f2, 0x20(r3)
    fmuls f1, f1, f1
    fmuls f0, f0, f0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f31, f2, f0
    fcmpo cr0, f31, f30
    opword 0x4C401382
    bne lbl_801E4674
    b lbl_801E4680
lbl_801E4674:
    fmr f1, f31
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f30, f31, f1
lbl_801E4680:
    add r3, r29, r31
    lfs f31, lbl_804A1DA0
    lfs f1, 0x4(r3)
    lfs f0, 0x14(r3)
    fmuls f1, f1, f1
    lfs f2, 0x24(r3)
    fmuls f0, f0, f0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f29, f2, f0
    fcmpo cr0, f29, f31
    opword 0x4C401382
    bne lbl_801E46B8
    b lbl_801E46C4
lbl_801E46B8:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f31, f29, f1
lbl_801E46C4:
    add r3, r29, r31
    lfs f0, lbl_804A1DA0
    lfs f2, 0x8(r3)
    lfs f1, 0x18(r3)
    fmuls f2, f2, f2
    lfs f3, 0x28(r3)
    fmuls f1, f1, f1
    fmuls f3, f3, f3
    fadds f1, f2, f1
    fadds f29, f3, f1
    fcmpo cr0, f29, f0
    opword 0x4C401382
    bne lbl_801E46FC
    b lbl_801E4708
lbl_801E46FC:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f29, f1
lbl_801E4708:
    opword 0xE0610020
    opword 0xE0210014
    opword 0x10630798
    opword 0x102107D8
    opword 0x10430C20
    opword 0x10230CE0
    opword 0xF05C0000
    opword 0xF03C0010
    opword 0xE0610008
    opword 0x10630018
    stfs f3, 0x8(r28)
    opword 0x10631CE0
    stfs f3, 0x18(r28)
    lfs f3, 0x28(r1)
    fmuls f3, f3, f30
    stfs f3, 0x20(r28)
    lfs f3, 0x1c(r1)
    fmuls f3, f3, f31
    stfs f3, 0x24(r28)
    lfs f3, 0x10(r1)
    fmuls f3, f3, f0
    stfs f3, 0x28(r28)
    b lbl_801E476C
lbl_801E4764:
    mr r3, r28
    bl MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34
lbl_801E476C:
    opword 0xE3E10068
    lfd f31, 0x60(r1)
    opword 0xE3C10058
    lfd f30, 0x50(r1)
    opword 0xE3A10048
    lfd f29, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x74(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_801E47A4
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E47A4() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    opword 0xF3E10058
    stfd f30, 0x40(r1)
    opword 0xF3C10048
    stfd f29, 0x30(r1)
    opword 0xF3A10038
    slwi r0, r8, 2
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    mr r29, r8
    stw r28, 0x20(r1)
    mr r28, r5
    lwz r6, 0x0(r7)
    addi r6, r6, 0x4c
    lwz r3, 0x24(r6)
    add r3, r6, r3
    add r3, r3, r0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    blt lbl_801E4888
    mr r3, r7
    mr r4, r0
    bl fn_801D0CD0
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x0
    beq lbl_801E482C
    add r3, r3, r0
    b lbl_801E4830
lbl_801E482C:
    li r3, 0x0
lbl_801E4830:
    cmpwi r3, 0x0
    beq lbl_801E4864
    beq lbl_801E4844
    lwz r0, 0x10(r3)
    b lbl_801E4848
lbl_801E4844:
    li r0, 0x0
lbl_801E4848:
    mulli r29, r29, 0x30
    addi r3, r1, 0x8
    mulli r0, r0, 0x30
    add r4, r31, r29
    add r5, r31, r0
    bl fn_801E4064
    b lbl_801E48A8
lbl_801E4864:
    mulli r29, r29, 0x30
    lfs f0, lbl_804A1DA0
    stfs f0, 0x10(r1)
    add r3, r31, r29
    lfs f1, 0x4(r3)
    lfs f0, 0x14(r3)
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    b lbl_801E48A8
lbl_801E4888:
    mulli r29, r8, 0x30
    lfs f0, lbl_804A1DA0
    stfs f0, 0x10(r1)
    add r3, r4, r29
    lfs f1, 0x4(r3)
    lfs f0, 0x14(r3)
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
lbl_801E48A8:
    lfs f1, 0x8(r1)
    lfs f0, lbl_804A1DA4
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_801E48D4
    lfs f1, 0xc(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801E4A68
lbl_801E48D4:
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8030DE44
    cmpwi r28, 0x0
    beq lbl_801E4960
    add r3, r31, r29
    lfsx f2, r31, r29
    lfs f1, 0x10(r3)
    lfs f3, 0x20(r3)
    fmuls f2, f2, f2
    fmuls f1, f1, f1
    lfs f0, lbl_804A1DA0
    fmuls f3, f3, f3
    fadds f1, f2, f1
    fadds f30, f3, f1
    fcmpo cr0, f30, f0
    opword 0x4C401382
    bne lbl_801E4920
    b lbl_801E492C
lbl_801E4920:
    fmr f1, f30
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f30, f1
lbl_801E492C:
    opword 0xE0410008
    lfs f1, lbl_804A1DA0
    opword 0x10420018
    stfs f0, 0x28(r30)
    stfs f1, 0x8(r30)
    opword 0x100214A0
    stfs f1, 0x18(r30)
    opword 0xF01E0000
    opword 0x10001050
    opword 0xF03E0020
    opword 0x10001460
    opword 0xF01E0010
    b lbl_801E4A70
lbl_801E4960:
    add r3, r31, r29
    lfsx f1, r31, r29
    lfs f0, 0x10(r3)
    lfs f2, 0x20(r3)
    fmuls f1, f1, f1
    fmuls f0, f0, f0
    lfs f30, lbl_804A1DA0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f31, f2, f0
    fcmpo cr0, f31, f30
    opword 0x4C401382
    bne lbl_801E4998
    b lbl_801E49A4
lbl_801E4998:
    fmr f1, f31
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f30, f31, f1
lbl_801E49A4:
    add r3, r31, r29
    lfs f31, lbl_804A1DA0
    lfs f1, 0x4(r3)
    lfs f0, 0x14(r3)
    fmuls f1, f1, f1
    lfs f2, 0x24(r3)
    fmuls f0, f0, f0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f29, f2, f0
    fcmpo cr0, f29, f31
    opword 0x4C401382
    bne lbl_801E49DC
    b lbl_801E49E8
lbl_801E49DC:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f31, f29, f1
lbl_801E49E8:
    add r3, r31, r29
    lfs f0, lbl_804A1DA0
    lfs f2, 0x8(r3)
    lfs f1, 0x18(r3)
    fmuls f2, f2, f2
    lfs f3, 0x28(r3)
    fmuls f1, f1, f1
    fmuls f3, f3, f3
    fadds f1, f2, f1
    fadds f29, f3, f1
    fcmpo cr0, f29, f0
    opword 0x4C401382
    bne lbl_801E4A20
    b lbl_801E4A2C
lbl_801E4A20:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f29, f1
lbl_801E4A2C:
    opword 0xE0610008
    opword 0x109EFC20
    lfs f1, lbl_804A1DA0
    opword 0x10431CA0
    stfs f0, 0x28(r30)
    opword 0x10001850
    stfs f1, 0x8(r30)
    opword 0x10420132
    stfs f1, 0x18(r30)
    opword 0xF05E0000
    opword 0x10401C60
    opword 0xF03E0020
    opword 0x10420132
    opword 0xF05E0010
    b lbl_801E4A70
lbl_801E4A68:
    mr r3, r30
    bl MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34
lbl_801E4A70:
    opword 0xE3E10058
    lfd f31, 0x50(r1)
    opword 0xE3C10048
    lfd f30, 0x40(r1)
    opword 0xE3A10038
    lfd f29, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x64(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_801E4AA8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E4AA8() {
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
    slwi r0, r8, 2
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    mr r28, r8
    lfs f2, 0x2c(r3)
    lfs f1, 0x1c(r3)
    lfs f0, 0xc(r3)
    fneg f2, f2
    fneg f1, f1
    fneg f0, f0
    stfs f2, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f1, 0xc(r1)
    lwz r3, 0x0(r7)
    addi r5, r3, 0x4c
    lwz r3, 0x70(r3)
    add r3, r5, r3
    add r3, r3, r0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    blt lbl_801E4BB0
    mr r3, r7
    mr r4, r0
    bl fn_801D0CD0
    lwz r0, 0x5c(r3)
    cmpwi r0, 0x0
    beq lbl_801E4B54
    add r3, r3, r0
    b lbl_801E4B58
lbl_801E4B54:
    li r3, 0x0
lbl_801E4B58:
    cmpwi r3, 0x0
    beq lbl_801E4B8C
    beq lbl_801E4B6C
    lwz r0, 0x10(r3)
    b lbl_801E4B70
lbl_801E4B6C:
    li r0, 0x0
lbl_801E4B70:
    mulli r28, r28, 0x30
    addi r3, r1, 0x14
    mulli r0, r0, 0x30
    add r4, r30, r28
    add r5, r30, r0
    bl fn_801E4124
    b lbl_801E4BD0
lbl_801E4B8C:
    mulli r28, r28, 0x30
    add r3, r30, r28
    lfs f2, 0x4(r3)
    lfs f1, 0x14(r3)
    lfs f0, 0x24(r3)
    stfs f2, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
    b lbl_801E4BD0
lbl_801E4BB0:
    mulli r28, r8, 0x30
    add r3, r4, r28
    lfs f2, 0x4(r3)
    lfs f1, 0x14(r3)
    lfs f0, 0x24(r3)
    stfs f2, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f0, 0x1c(r1)
lbl_801E4BD0:
    lfs f1, 0x8(r1)
    lfs f0, lbl_804A1DA4
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_801E4C10
    lfs f1, 0xc(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_801E4C10
    lfs f1, 0x10(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801E4E58
lbl_801E4C10:
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8030DE44
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    bl fn_8030DEEC
    lfs f1, 0x20(r1)
    lfs f0, lbl_804A1DA4
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_801E4C6C
    lfs f1, 0x24(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_801E4C6C
    lfs f1, 0x28(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801E4E58
lbl_801E4C6C:
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8030DE44
    addi r3, r1, 0x8
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    bl fn_8030DEEC
    cmpwi r31, 0x0
    beq lbl_801E4D30
    add r3, r30, r28
    lfsx f2, r30, r28
    lfs f1, 0x10(r3)
    lfs f3, 0x20(r3)
    fmuls f2, f2, f2
    fmuls f1, f1, f1
    lfs f0, lbl_804A1DA0
    fmuls f3, f3, f3
    fadds f1, f2, f1
    fadds f30, f3, f1
    fcmpo cr0, f30, f0
    opword 0x4C401382
    bne lbl_801E4CC8
    b lbl_801E4CD4
lbl_801E4CC8:
    fmr f1, f30
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f30, f1
lbl_801E4CD4:
    opword 0xE0610020
    opword 0xE0210014
    opword 0x10630018
    opword 0x10210018
    opword 0x10430C20
    opword 0x10230CE0
    opword 0xF05D0000
    opword 0xF03D0010
    opword 0xE0610008
    opword 0x10630018
    stfs f3, 0x8(r29)
    opword 0x10631CE0
    stfs f3, 0x18(r29)
    lfs f3, 0x28(r1)
    fmuls f3, f3, f0
    stfs f3, 0x20(r29)
    lfs f3, 0x1c(r1)
    fmuls f3, f3, f0
    stfs f3, 0x24(r29)
    lfs f3, 0x10(r1)
    fmuls f3, f3, f0
    stfs f3, 0x28(r29)
    b lbl_801E4E60
lbl_801E4D30:
    add r3, r30, r28
    lfsx f1, r30, r28
    lfs f0, 0x10(r3)
    lfs f2, 0x20(r3)
    fmuls f1, f1, f1
    fmuls f0, f0, f0
    lfs f30, lbl_804A1DA0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f31, f2, f0
    fcmpo cr0, f31, f30
    opword 0x4C401382
    bne lbl_801E4D68
    b lbl_801E4D74
lbl_801E4D68:
    fmr f1, f31
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f30, f31, f1
lbl_801E4D74:
    add r3, r30, r28
    lfs f31, lbl_804A1DA0
    lfs f1, 0x4(r3)
    lfs f0, 0x14(r3)
    fmuls f1, f1, f1
    lfs f2, 0x24(r3)
    fmuls f0, f0, f0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f29, f2, f0
    fcmpo cr0, f29, f31
    opword 0x4C401382
    bne lbl_801E4DAC
    b lbl_801E4DB8
lbl_801E4DAC:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f31, f29, f1
lbl_801E4DB8:
    add r3, r30, r28
    lfs f0, lbl_804A1DA0
    lfs f2, 0x8(r3)
    lfs f1, 0x18(r3)
    fmuls f2, f2, f2
    lfs f3, 0x28(r3)
    fmuls f1, f1, f1
    fmuls f3, f3, f3
    fadds f1, f2, f1
    fadds f29, f3, f1
    fcmpo cr0, f29, f0
    opword 0x4C401382
    bne lbl_801E4DF0
    b lbl_801E4DFC
lbl_801E4DF0:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f29, f1
lbl_801E4DFC:
    opword 0xE0610020
    opword 0xE0210014
    opword 0x10630798
    opword 0x102107D8
    opword 0x10430C20
    opword 0x10230CE0
    opword 0xF05D0000
    opword 0xF03D0010
    opword 0xE0610008
    opword 0x10630018
    stfs f3, 0x8(r29)
    opword 0x10631CE0
    stfs f3, 0x18(r29)
    lfs f3, 0x28(r1)
    fmuls f3, f3, f30
    stfs f3, 0x20(r29)
    lfs f3, 0x1c(r1)
    fmuls f3, f3, f31
    stfs f3, 0x24(r29)
    lfs f3, 0x10(r1)
    fmuls f3, f3, f0
    stfs f3, 0x28(r29)
    b lbl_801E4E60
lbl_801E4E58:
    mr r3, r29
    bl MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34
lbl_801E4E60:
    opword 0xE3E10068
    lfd f31, 0x60(r1)
    opword 0xE3C10058
    lfd f30, 0x50(r1)
    opword 0xE3A10048
    lfd f29, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x74(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_801E4E98
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E4E98() {
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
    lfs f0, lbl_804A1DA4
    stw r31, 0x3c(r1)
    lfs f1, lbl_804A1DA0
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    lfs f2, 0x4(r3)
    lfs f4, 0x24(r3)
    fabs f6, f2
    lfs f3, 0x14(r3)
    fneg f5, f2
    stfs f2, 0x14(r1)
    fcmpo cr0, f6, f0
    stfs f3, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f3, 0x8(r1)
    stfs f5, 0xc(r1)
    stfs f1, 0x10(r1)
    opword 0x4C411382
    beq lbl_801E4F38
    fabs f1, f3
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_801E4F38
    fabs f1, f4
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801E5138
lbl_801E4F38:
    mulli r31, r8, 0x30
    lfs f30, lbl_804A1DA0
    add r3, r4, r31
    lfs f1, 0x4(r3)
    lfs f0, 0x14(r3)
    fmuls f1, f1, f1
    lfs f2, 0x24(r3)
    fmuls f0, f0, f0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f31, f2, f0
    fcmpo cr0, f31, f30
    opword 0x4C401382
    bne lbl_801E4F74
    b lbl_801E4F80
lbl_801E4F74:
    fmr f1, f31
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f30, f31, f1
lbl_801E4F80:
    fres f1, f30
    lfs f4, 0x8(r1)
    opword 0xE0610014
    lfs f0, lbl_804A1DA4
    opword 0x1041082A
    opword 0x10210072
    fabs f4, f4
    opword 0x103E107C
    fcmpo cr0, f4, f0
    opword 0x10430058
    opword 0xE061801C
    opword 0xF0410014
    opword 0x10430058
    opword 0xF041801C
    opword 0x4C411382
    beq lbl_801E4FD4
    lfs f1, 0xc(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801E5138
lbl_801E4FD4:
    addi r3, r1, 0x8
    mr r4, r3
    bl fn_8030DE44
    addi r3, r1, 0x8
    addi r4, r1, 0x14
    addi r5, r1, 0x20
    bl fn_8030DEEC
    cmpwi r30, 0x0
    beq lbl_801E5054
    opword 0xE0410008
    opword 0xE0010014
    opword 0x10420798
    opword 0x10000798
    opword 0x10220420
    opword 0x100204E0
    opword 0xF03C0000
    opword 0xF01C0010
    opword 0xE0410020
    opword 0x10420798
    stfs f2, 0x8(r28)
    opword 0x104214E0
    stfs f2, 0x18(r28)
    lfs f2, 0x10(r1)
    fmuls f2, f2, f30
    stfs f2, 0x20(r28)
    lfs f2, 0x1c(r1)
    fmuls f2, f2, f30
    stfs f2, 0x24(r28)
    lfs f2, 0x28(r1)
    fmuls f2, f2, f30
    stfs f2, 0x28(r28)
    b lbl_801E5140
lbl_801E5054:
    add r3, r29, r31
    lfsx f1, r29, r31
    lfs f0, 0x10(r3)
    lfs f2, 0x20(r3)
    fmuls f1, f1, f1
    fmuls f0, f0, f0
    lfs f31, lbl_804A1DA0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f29, f2, f0
    fcmpo cr0, f29, f31
    opword 0x4C401382
    bne lbl_801E508C
    b lbl_801E5098
lbl_801E508C:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f31, f29, f1
lbl_801E5098:
    add r3, r29, r31
    lfs f0, lbl_804A1DA0
    lfs f2, 0x8(r3)
    lfs f1, 0x18(r3)
    fmuls f2, f2, f2
    lfs f3, 0x28(r3)
    fmuls f1, f1, f1
    fmuls f3, f3, f3
    fadds f1, f2, f1
    fadds f29, f3, f1
    fcmpo cr0, f29, f0
    opword 0x4C401382
    bne lbl_801E50D0
    b lbl_801E50DC
lbl_801E50D0:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f29, f1
lbl_801E50DC:
    opword 0xE0610008
    opword 0xE0210014
    opword 0x106307D8
    opword 0x10210798
    opword 0x10430C20
    opword 0x10230CE0
    opword 0xF05C0000
    opword 0xF03C0010
    opword 0xE0610020
    opword 0x10630018
    stfs f3, 0x8(r28)
    opword 0x10631CE0
    stfs f3, 0x18(r28)
    lfs f3, 0x10(r1)
    fmuls f3, f3, f31
    stfs f3, 0x20(r28)
    lfs f3, 0x1c(r1)
    fmuls f3, f3, f30
    stfs f3, 0x24(r28)
    lfs f3, 0x28(r1)
    fmuls f3, f3, f0
    stfs f3, 0x28(r28)
    b lbl_801E5140
lbl_801E5138:
    mr r3, r28
    bl MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34
lbl_801E5140:
    opword 0xE3E10068
    lfd f31, 0x60(r1)
    opword 0xE3C10058
    lfd f30, 0x50(r1)
    opword 0xE3A10048
    lfd f29, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x74(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// fn_801E5178
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E5178() {
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
    lfs f0, lbl_804A1DA4
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r5
    stw r29, 0x34(r1)
    mr r29, r4
    stw r28, 0x30(r1)
    mr r28, r3
    lfs f1, 0x4(r3)
    lfs f5, 0x24(r3)
    lfs f4, 0x14(r3)
    fabs f2, f1
    stfs f1, 0x14(r1)
    fcmpo cr0, f2, f0
    stfs f4, 0x18(r1)
    stfs f5, 0x1c(r1)
    lfs f3, 0x2c(r3)
    lfs f2, 0x1c(r3)
    lfs f1, 0xc(r3)
    fneg f3, f3
    fneg f2, f2
    fneg f1, f1
    stfs f3, 0x10(r1)
    stfs f1, 0x8(r1)
    stfs f2, 0xc(r1)
    opword 0x4C411382
    beq lbl_801E5228
    fabs f1, f4
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_801E5228
    fabs f1, f5
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801E544C
lbl_801E5228:
    mulli r31, r8, 0x30
    lfs f30, lbl_804A1DA0
    add r3, r4, r31
    lfs f1, 0x4(r3)
    lfs f0, 0x14(r3)
    fmuls f1, f1, f1
    lfs f2, 0x24(r3)
    fmuls f0, f0, f0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f31, f2, f0
    fcmpo cr0, f31, f30
    opword 0x4C401382
    bne lbl_801E5264
    b lbl_801E5270
lbl_801E5264:
    fmr f1, f31
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f30, f31, f1
lbl_801E5270:
    fres f0, f30
    addi r3, r1, 0x14
    opword 0xE0430000
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    opword 0x1020002A
    opword 0x10000032
    opword 0x101E083C
    opword 0x10220018
    opword 0xE0438008
    opword 0xF0230000
    opword 0x10220018
    opword 0xF0238008
    bl fn_8030DEEC
    lfs f1, 0x20(r1)
    lfs f0, lbl_804A1DA4
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_801E52E8
    lfs f1, 0x24(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    beq lbl_801E52E8
    lfs f1, 0x28(r1)
    fabs f1, f1
    fcmpo cr0, f1, f0
    opword 0x4C411382
    bne lbl_801E544C
lbl_801E52E8:
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_8030DE44
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    addi r5, r1, 0x8
    bl fn_8030DEEC
    cmpwi r30, 0x0
    beq lbl_801E5368
    opword 0xE0410020
    opword 0xE0010014
    opword 0x10420798
    opword 0x10000798
    opword 0x10220420
    opword 0x100204E0
    opword 0xF03C0000
    opword 0xF01C0010
    opword 0xE0410008
    opword 0x10420798
    stfs f2, 0x8(r28)
    opword 0x104214E0
    stfs f2, 0x18(r28)
    lfs f2, 0x28(r1)
    fmuls f2, f2, f30
    stfs f2, 0x20(r28)
    lfs f2, 0x1c(r1)
    fmuls f2, f2, f30
    stfs f2, 0x24(r28)
    lfs f2, 0x10(r1)
    fmuls f2, f2, f30
    stfs f2, 0x28(r28)
    b lbl_801E5454
lbl_801E5368:
    add r3, r29, r31
    lfsx f1, r29, r31
    lfs f0, 0x10(r3)
    lfs f2, 0x20(r3)
    fmuls f1, f1, f1
    fmuls f0, f0, f0
    lfs f31, lbl_804A1DA0
    fmuls f2, f2, f2
    fadds f0, f1, f0
    fadds f29, f2, f0
    fcmpo cr0, f29, f31
    opword 0x4C401382
    bne lbl_801E53A0
    b lbl_801E53AC
lbl_801E53A0:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f31, f29, f1
lbl_801E53AC:
    add r3, r29, r31
    lfs f0, lbl_804A1DA0
    lfs f2, 0x8(r3)
    lfs f1, 0x18(r3)
    fmuls f2, f2, f2
    lfs f3, 0x28(r3)
    fmuls f1, f1, f1
    fmuls f3, f3, f3
    fadds f1, f2, f1
    fadds f29, f3, f1
    fcmpo cr0, f29, f0
    opword 0x4C401382
    bne lbl_801E53E4
    b lbl_801E53F0
lbl_801E53E4:
    fmr f1, f29
    bl FrSqrt__Q24nw4r4mathFf
    fmuls f0, f29, f1
lbl_801E53F0:
    opword 0xE0610020
    opword 0xE0210014
    opword 0x106307D8
    opword 0x10210798
    opword 0x10430C20
    opword 0x10230CE0
    opword 0xF05C0000
    opword 0xF03C0010
    opword 0xE0610008
    opword 0x10630018
    stfs f3, 0x8(r28)
    opword 0x10631CE0
    stfs f3, 0x18(r28)
    lfs f3, 0x28(r1)
    fmuls f3, f3, f31
    stfs f3, 0x20(r28)
    lfs f3, 0x1c(r1)
    fmuls f3, f3, f30
    stfs f3, 0x24(r28)
    lfs f3, 0x10(r1)
    fmuls f3, f3, f0
    stfs f3, 0x28(r28)
    b lbl_801E5454
lbl_801E544C:
    mr r3, r28
    bl MTX34Zero__Q24nw4r4mathFPQ34nw4r4math5MTX34
lbl_801E5454:
    opword 0xE3E10068
    lfd f31, 0x60(r1)
    opword 0xE3C10058
    lfd f30, 0x50(r1)
    opword 0xE3A10048
    lfd f29, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x74(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// CalcView__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
// ----------------------------------------------------------------------------
extern "C" asm void CalcView__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    opword 0xF3E10098
    addi r11, r1, 0x90
    bl _savegpr_14
    cmpwi r7, 0x0
    mr r15, r3
    mr r16, r4
    mr r17, r5
    mr r18, r6
    mr r19, r7
    mr r20, r8
    mr r21, r9
    mr r22, r10
    beq lbl_801E57A8
    mulli r3, r7, 0x24
    cmplwi r7, 0x1
    mulli r4, r7, 0x30
    addi r0, r3, 0x1f
    clrrwi r0, r0, 5
    addi r4, r4, 0x1f
    stw r0, 0x40(r1)
    clrrwi r14, r4, 5
    ble lbl_801E550C
    mr r3, r20
    mr r4, r17
    mr r5, r15
    mr r6, r19
    bl PSMTXConcatArray
    b lbl_801E551C
lbl_801E550C:
    mr r3, r20
    mr r4, r17
    mr r5, r15
    bl PSMTXConcat
lbl_801E551C:
    bl GetBillboardMtxTemporary__Q44nw4r3g3d6detail7workmemFv
    mr r24, r3
    lis r31, lbl_8033C670@ha
    mr r30, r18
    mr r29, r15
    mr r27, r17
    mr r26, r24
    mr r25, r15
    addi r31, r31, lbl_8033C670@l
    li r23, 0x0
    li r28, 0x0
    b lbl_801E56BC
lbl_801E554C:
    lwz r9, 0x0(r30)
    clrlwi. r0, r9, 24
    beq lbl_801E5630
    slwi r0, r0, 2
    lwz r5, 0x0(r21)
    lwzx r12, r31, r0
    mr r3, r29
    stw r5, 0x8(r1)
    mr r4, r17
    mr r6, r20
    mr r8, r23
    addi r7, r1, 0x8
    extrwi r5, r9, 1, 2
    mtctr r12
    bctrl
    lwz r4, 0x0(r21)
    mr r3, r21
    addi r4, r4, 0x4c
    lwz r0, 0x24(r4)
    add r0, r4, r0
    add r4, r0, r28
    lwz r4, 0x4(r4)
    bl fn_801D0D24
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801E55DC
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    beq lbl_801E55CC
    add r0, r3, r0
    b lbl_801E55D0
lbl_801E55CC:
    li r0, 0x0
lbl_801E55D0:
    neg r3, r0
    or r0, r3, r0
    srwi r0, r0, 31
lbl_801E55DC:
    cmpwi r0, 0x0
    beq lbl_801E56A0
    mr r4, r27
    addi r3, r1, 0x10
    bl CalcInvWorldMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
    cmplwi r3, 0x1
    bne lbl_801E560C
    mr r3, r25
    mr r5, r26
    addi r4, r1, 0x10
    bl PSMTXConcat
    b lbl_801E56A0
lbl_801E560C:
    mr r3, r26
    bl PSMTXIdentity
    lfs f0, 0xc(r20)
    lfs f1, 0x1c(r20)
    stfs f0, 0xc(r26)
    lfs f0, 0x2c(r20)
    stfs f1, 0x1c(r26)
    stfs f0, 0x2c(r26)
    b lbl_801E56A0
lbl_801E5630:
    lwz r3, 0x0(r21)
    addi r3, r3, 0x4c
    lwz r0, 0x24(r3)
    add r0, r3, r0
    add r3, r0, r28
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    blt lbl_801E56A0
    mr r3, r21
    bl fn_801D0D24
    cmpwi r3, 0x0
    beq lbl_801E56A0
    lwz r0, 0x14(r3)
    rlwinm. r0, r0, 0, 21, 21
    beq lbl_801E56A0
    lwz r4, 0x1c(r3)
    mr r3, r21
    bl fn_801D0D24
    cmpwi r3, 0x0
    beq lbl_801E5688
    lwz r0, 0x10(r3)
    b lbl_801E568C
lbl_801E5688:
    li r0, 0x0
lbl_801E568C:
    mulli r0, r0, 0x30
    mr r4, r27
    mr r5, r29
    add r3, r24, r0
    bl PSMTXConcat
lbl_801E56A0:
    addi r30, r30, 0x4
    addi r29, r29, 0x30
    addi r28, r28, 0x4
    addi r27, r27, 0x30
    addi r26, r26, 0x30
    addi r25, r25, 0x30
    addi r23, r23, 0x1
lbl_801E56BC:
    cmplw r23, r19
    blt lbl_801E554C
    cmpwi r16, 0x0
    beq lbl_801E5774
    lfs f31, lbl_804A1DA0
    mr r17, r15
    mr r20, r16
    mr r21, r22
    mr r23, r22
    li r24, 0x0
    b lbl_801E576C
lbl_801E56E8:
    lwz r0, 0x0(r18)
    rlwinm. r0, r0, 0, 2, 2
    beq lbl_801E5724
    cmpwi r22, 0x0
    beq lbl_801E5714
    mr r3, r17
    mr r4, r21
    bl PSMTXCopy
    stfs f31, 0x2c(r21)
    stfs f31, 0x1c(r21)
    stfs f31, 0xc(r21)
lbl_801E5714:
    mr r3, r20
    mr r4, r17
    bl MTX34ToMTX33__Q24nw4r4mathFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
    b lbl_801E5754
lbl_801E5724:
    cmpwi r22, 0x0
    beq lbl_801E5748
    mr r3, r21
    mr r4, r17
    bl CalcViewTexMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
    mr r3, r20
    mr r4, r23
    bl MTX34ToMTX33__Q24nw4r4mathFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
    b lbl_801E5754
lbl_801E5748:
    mr r3, r20
    mr r4, r17
    bl CalcViewNrmMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
lbl_801E5754:
    addi r17, r17, 0x30
    addi r20, r20, 0x24
    addi r18, r18, 0x4
    addi r21, r21, 0x30
    addi r23, r23, 0x30
    addi r24, r24, 0x1
lbl_801E576C:
    cmplw r24, r19
    blt lbl_801E56E8
lbl_801E5774:
    mr r3, r15
    mr r4, r14
    bl DCFlushRangeNoSync
    cmpwi r16, 0x0
    beq lbl_801E57A8
    lwz r4, 0x40(r1)
    mr r3, r16
    bl DCFlushRangeNoSync
    cmpwi r22, 0x0
    beq lbl_801E57A8
    mr r3, r22
    mr r4, r14
    bl DCFlushRangeNoSync
lbl_801E57A8:
    opword 0xE3E10098
    addi r11, r1, 0x90
    lfd f31, 0x90(r1)
    bl _restgpr_14
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// CalcView_LC__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
// ----------------------------------------------------------------------------
extern "C" asm void CalcView_LC__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    opword 0xF3E100D8
    addi r11, r1, 0xd0
    bl _savegpr_14
    cmpwi r7, 0x0
    stw r3, 0x8(r1)
    mr r15, r5
    mr r16, r8
    stw r4, 0xc(r1)
    mr r17, r9
    mr r18, r10
    stw r6, 0x10(r1)
    stw r7, 0x14(r1)
    beq lbl_801E5C84
    lis r5, 0xe000
    addi r0, r5, 0x1000
    mulli r4, r7, 0x30
    stw r0, 0x6c(r1)
    addi r0, r5, 0x1800
    stw r0, 0x68(r1)
    addi r14, r5, 0x800
    addi r0, r5, 0x2800
    stw r0, 0x64(r1)
    addi r0, r5, 0x3000
    addi r4, r4, 0x1f
    stw r0, 0x60(r1)
    addi r0, r5, 0x3800
    clrrwi r19, r4, 5
    stw r0, 0x5c(r1)
    mr r4, r19
    bl DCInvalidateRange
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    li r0, 0x1
    stw r0, 0x58(r1)
    beq lbl_801E58A0
    lwz r0, 0x14(r1)
    lwz r3, 0xc(r1)
    mulli r4, r0, 0x24
    li r0, 0x2
    stw r0, 0x58(r1)
    addi r0, r4, 0x1f
    clrrwi r4, r0, 5
    bl DCInvalidateRange
    cmpwi r18, 0x0
    beq lbl_801E58A0
    li r0, 0x3
    mr r3, r18
    stw r0, 0x58(r1)
    mr r4, r19
    bl DCInvalidateRange
lbl_801E58A0:
    bl GetBillboardMtxTemporary__Q44nw4r3g3d6detail7workmemFv
    mr r29, r3
    li r3, 0x0
    bl fn_803153F0
    lwz r0, 0xc(r1)
    lis r30, lbl_8033C670@ha
    lfs f31, lbl_804A1DA0
    addi r30, r30, lbl_8033C670@l
    stw r0, 0x74(r1)
    li r0, 0x0
    li r21, 0x0
    li r31, 0x0
    stw r15, 0x78(r1)
    stw r18, 0x70(r1)
    stw r0, 0x7c(r1)
    b lbl_801E5C78
lbl_801E58E0:
    lwz r0, 0x14(r1)
    subf r20, r21, r0
    cmplwi r20, 0x28
    ble lbl_801E5908
    li r0, 0x3c
    li r20, 0x28
    stw r0, 0x54(r1)
    li r0, 0x2d
    stw r0, 0x50(r1)
    b lbl_801E5928
lbl_801E5908:
    mulli r4, r20, 0x30
    mulli r3, r20, 0x24
    addi r0, r4, 0x1f
    srwi r0, r0, 5
    addi r3, r3, 0x1f
    stw r0, 0x54(r1)
    srwi r0, r3, 5
    stw r0, 0x50(r1)
lbl_801E5928:
    lwz r3, 0x58(r1)
    bl fn_803153F0
    cmplwi r20, 0x1
    ble lbl_801E5950
    lwz r4, 0x78(r1)
    mr r3, r16
    mr r5, r14
    mr r6, r20
    bl PSMTXConcatArray
    b lbl_801E5960
lbl_801E5950:
    lwz r4, 0x78(r1)
    mr r3, r16
    mr r5, r14
    bl PSMTXConcat
lbl_801E5960:
    lwz r0, 0x10(r1)
    mr r27, r14
    mr r25, r14
    li r19, 0x0
    add r22, r0, r31
    lwz r0, 0x7c(r1)
    mr r28, r22
    li r26, 0x0
    add r24, r29, r0
    b lbl_801E5B0C
lbl_801E5988:
    lwz r8, 0x0(r28)
    clrlwi. r0, r8, 24
    beq lbl_801E5A78
    slwi r0, r0, 2
    lwz r5, 0x0(r17)
    lwzx r12, r30, r0
    mr r3, r27
    stw r5, 0x18(r1)
    extrwi r5, r8, 1, 2
    mr r4, r15
    mr r6, r16
    addi r7, r1, 0x18
    add r8, r21, r19
    mtctr r12
    bctrl
    lwz r4, 0x0(r17)
    mr r3, r17
    addi r4, r4, 0x4c
    lwz r0, 0x24(r4)
    add r0, r4, r0
    add r0, r0, r31
    add r4, r0, r26
    lwz r4, 0x4(r4)
    bl fn_801D0D24
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801E5A1C
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    beq lbl_801E5A0C
    add r0, r3, r0
    b lbl_801E5A10
lbl_801E5A0C:
    li r0, 0x0
lbl_801E5A10:
    neg r3, r0
    or r0, r3, r0
    srwi r0, r0, 31
lbl_801E5A1C:
    cmpwi r0, 0x0
    beq lbl_801E5AF4
    add r0, r21, r19
    addi r3, r1, 0x20
    mulli r23, r0, 0x30
    add r4, r15, r23
    bl CalcInvWorldMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
    cmplwi r3, 0x1
    bne lbl_801E5A54
    mr r3, r25
    addi r4, r1, 0x20
    add r5, r29, r23
    bl PSMTXConcat
    b lbl_801E5AF4
lbl_801E5A54:
    add r3, r29, r23
    bl PSMTXIdentity
    lfs f0, 0xc(r16)
    lfs f1, 0x1c(r16)
    stfs f0, 0xc(r24)
    lfs f0, 0x2c(r16)
    stfs f1, 0x1c(r24)
    stfs f0, 0x2c(r24)
    b lbl_801E5AF4
lbl_801E5A78:
    lwz r3, 0x0(r17)
    addi r3, r3, 0x4c
    lwz r0, 0x24(r3)
    add r0, r3, r0
    add r0, r0, r31
    add r3, r0, r26
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    blt lbl_801E5AF4
    mr r3, r17
    bl fn_801D0D24
    cmpwi r3, 0x0
    beq lbl_801E5AF4
    lwz r0, 0x14(r3)
    rlwinm. r0, r0, 0, 21, 21
    beq lbl_801E5AF4
    lwz r4, 0x1c(r3)
    mr r3, r17
    bl fn_801D0D24
    cmpwi r3, 0x0
    beq lbl_801E5AD4
    lwz r3, 0x10(r3)
    b lbl_801E5AD8
lbl_801E5AD4:
    li r3, 0x0
lbl_801E5AD8:
    add r0, r21, r19
    mr r5, r27
    mulli r3, r3, 0x30
    mulli r0, r0, 0x30
    add r3, r29, r3
    add r4, r15, r0
    bl PSMTXConcat
lbl_801E5AF4:
    addi r28, r28, 0x4
    addi r27, r27, 0x30
    addi r26, r26, 0x4
    addi r25, r25, 0x30
    addi r24, r24, 0x30
    addi r19, r19, 0x1
lbl_801E5B0C:
    cmplw r19, r20
    blt lbl_801E5988
    lwz r3, 0x8(r1)
    mr r4, r14
    lwz r5, 0x54(r1)
    bl StoreBlocks__Q34nw4r2ut2LCFPvPvUl
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_801E5BD4
    lwz r24, 0x68(r1)
    mr r19, r14
    lwz r23, 0x6c(r1)
    li r26, 0x0
    mr r25, r24
    b lbl_801E5BCC
lbl_801E5B48:
    lwz r0, 0x0(r22)
    rlwinm. r0, r0, 0, 2, 2
    beq lbl_801E5B84
    cmpwi r18, 0x0
    beq lbl_801E5B74
    mr r3, r19
    mr r4, r24
    bl PSMTXCopy
    stfs f31, 0x2c(r24)
    stfs f31, 0x1c(r24)
    stfs f31, 0xc(r24)
lbl_801E5B74:
    mr r3, r23
    mr r4, r19
    bl MTX34ToMTX33__Q24nw4r4mathFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
    b lbl_801E5BB4
lbl_801E5B84:
    cmpwi r18, 0x0
    beq lbl_801E5BA8
    mr r3, r24
    mr r4, r19
    bl CalcViewTexMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
    mr r3, r23
    mr r4, r25
    bl MTX34ToMTX33__Q24nw4r4mathFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
    b lbl_801E5BB4
lbl_801E5BA8:
    mr r3, r23
    mr r4, r19
    bl CalcViewNrmMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
lbl_801E5BB4:
    addi r19, r19, 0x30
    addi r23, r23, 0x24
    addi r22, r22, 0x4
    addi r24, r24, 0x30
    addi r25, r25, 0x30
    addi r26, r26, 0x1
lbl_801E5BCC:
    cmplw r26, r20
    blt lbl_801E5B48
lbl_801E5BD4:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_801E5C08
    lwz r3, 0x74(r1)
    lwz r4, 0x6c(r1)
    lwz r5, 0x50(r1)
    bl StoreBlocks__Q34nw4r2ut2LCFPvPvUl
    cmpwi r18, 0x0
    beq lbl_801E5C08
    lwz r3, 0x70(r1)
    lwz r4, 0x68(r1)
    lwz r5, 0x54(r1)
    bl StoreBlocks__Q34nw4r2ut2LCFPvPvUl
lbl_801E5C08:
    mr r3, r14
    lwz r14, 0x64(r1)
    lwz r4, 0x6c(r1)
    addi r21, r21, 0x28
    stw r3, 0x64(r1)
    addi r31, r31, 0xa0
    lwz r3, 0x78(r1)
    lwz r0, 0x60(r1)
    addi r3, r3, 0x780
    lwz r5, 0x68(r1)
    stw r3, 0x78(r1)
    lwz r3, 0x8(r1)
    stw r0, 0x6c(r1)
    addi r3, r3, 0x780
    lwz r0, 0x5c(r1)
    stw r3, 0x8(r1)
    lwz r3, 0x74(r1)
    stw r0, 0x68(r1)
    addi r3, r3, 0x5a0
    stw r3, 0x74(r1)
    lwz r3, 0x70(r1)
    stw r4, 0x60(r1)
    addi r3, r3, 0x780
    stw r3, 0x70(r1)
    lwz r3, 0x7c(r1)
    stw r5, 0x5c(r1)
    addi r3, r3, 0x780
    stw r3, 0x7c(r1)
lbl_801E5C78:
    lwz r0, 0x14(r1)
    cmplw r21, r0
    blt lbl_801E58E0
lbl_801E5C84:
    opword 0xE3E100D8
    addi r11, r1, 0xd0
    lfd f31, 0xd0(r1)
    bl _restgpr_14
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// ----------------------------------------------------------------------------
// CalcView_LC_DMA_ModelMtx__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
// ----------------------------------------------------------------------------
extern "C" asm void CalcView_LC_DMA_ModelMtx__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stfd f31, 0xd0(r1)
    opword 0xF3E100D8
    addi r11, r1, 0xd0
    bl _savegpr_14
    cmpwi r7, 0x0
    stw r3, 0x8(r1)
    mr r15, r5
    mr r16, r8
    stw r4, 0xc(r1)
    mr r17, r9
    mr r18, r10
    stw r6, 0x10(r1)
    stw r7, 0x14(r1)
    beq lbl_801E6220
    lis r0, 0xe000
    mulli r5, r7, 0x30
    stw r0, 0x74(r1)
    mr r4, r0
    addi r5, r5, 0x1f
    addi r0, r4, 0x1000
    addi r14, r4, 0x800
    lwz r4, 0x74(r1)
    clrrwi r19, r5, 5
    stw r0, 0x70(r1)
    addi r0, r4, 0x1800
    lwz r5, 0x74(r1)
    stw r0, 0x6c(r1)
    mr r4, r19
    addi r0, r5, 0x2000
    stw r0, 0x68(r1)
    addi r0, r5, 0x2800
    stw r0, 0x64(r1)
    addi r0, r5, 0x3000
    stw r0, 0x60(r1)
    addi r0, r5, 0x3800
    stw r0, 0x5c(r1)
    bl DCInvalidateRange
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    li r0, 0x1
    stw r0, 0x58(r1)
    beq lbl_801E5D94
    lwz r0, 0x14(r1)
    lwz r3, 0xc(r1)
    mulli r4, r0, 0x24
    li r0, 0x2
    stw r0, 0x58(r1)
    addi r0, r4, 0x1f
    clrrwi r4, r0, 5
    bl DCInvalidateRange
    cmpwi r18, 0x0
    beq lbl_801E5D94
    li r0, 0x3
    mr r3, r18
    stw r0, 0x58(r1)
    mr r4, r19
    bl DCInvalidateRange
lbl_801E5D94:
    bl GetBillboardMtxTemporary__Q44nw4r3g3d6detail7workmemFv
    mr r29, r3
    li r3, 0x0
    bl fn_803153F0
    lwz r0, 0x14(r1)
    mr r4, r15
    lis r3, 0xe000
    li r5, 0x3c
    cmplwi r0, 0x28
    bgt lbl_801E5DC0
    srwi r5, r19, 5
lbl_801E5DC0:
    bl LoadBlocks__Q34nw4r2ut2LCFPvPvUl
    lwz r0, 0x14(r1)
    cmplwi r0, 0x14
    ble lbl_801E5DE8
    b lbl_801E5DD8
lbl_801E5DD4:
    bl fn_8031CDB4
lbl_801E5DD8:
    bl fn_803153E4
    cmpwi r3, 0x0
    bne lbl_801E5DD4
    b lbl_801E5DF0
lbl_801E5DE8:
    li r3, 0x0
    bl fn_803153F0
lbl_801E5DF0:
    lwz r0, 0xc(r1)
    lis r30, lbl_8033C670@ha
    lfs f31, lbl_804A1DA0
    addi r30, r30, lbl_8033C670@l
    stw r0, 0x7c(r1)
    li r0, 0x0
    li r21, 0x0
    li r31, 0x0
    stw r0, 0x84(r1)
    li r0, 0x0
    stw r18, 0x78(r1)
    stw r0, 0x80(r1)
    b lbl_801E6214
lbl_801E5E24:
    lwz r0, 0x14(r1)
    subf r19, r21, r0
    cmplwi r19, 0x28
    mr r20, r19
    ble lbl_801E5E50
    li r0, 0x3c
    li r20, 0x28
    stw r0, 0x54(r1)
    li r0, 0x2d
    stw r0, 0x50(r1)
    b lbl_801E5E70
lbl_801E5E50:
    mulli r4, r19, 0x30
    mulli r3, r19, 0x24
    addi r0, r4, 0x1f
    srwi r0, r0, 5
    addi r3, r3, 0x1f
    stw r0, 0x54(r1)
    srwi r0, r3, 5
    stw r0, 0x50(r1)
lbl_801E5E70:
    lwz r3, 0x58(r1)
    bl fn_803153F0
    lwz r0, 0x14(r1)
    addi r3, r21, 0x28
    cmplw r3, r0
    bge lbl_801E5EBC
    subi r5, r19, 0x28
    lwz r0, 0x80(r1)
    cmplwi r5, 0x28
    lwz r3, 0x68(r1)
    add r4, r0, r15
    addi r4, r4, 0x780
    ble lbl_801E5EAC
    li r5, 0x3c
    b lbl_801E5EB8
lbl_801E5EAC:
    mulli r5, r5, 0x30
    addi r0, r5, 0x1f
    srwi r5, r0, 5
lbl_801E5EB8:
    bl LoadBlocks__Q34nw4r2ut2LCFPvPvUl
lbl_801E5EBC:
    cmplwi r20, 0x1
    ble lbl_801E5EDC
    lwz r4, 0x74(r1)
    mr r3, r16
    mr r5, r14
    mr r6, r20
    bl PSMTXConcatArray
    b lbl_801E5EEC
lbl_801E5EDC:
    lwz r4, 0x74(r1)
    mr r3, r16
    mr r5, r14
    bl PSMTXConcat
lbl_801E5EEC:
    lwz r0, 0x10(r1)
    mr r27, r14
    mr r25, r14
    li r19, 0x0
    add r22, r0, r31
    lwz r0, 0x84(r1)
    mr r28, r22
    li r26, 0x0
    add r24, r29, r0
    b lbl_801E6098
lbl_801E5F14:
    lwz r8, 0x0(r28)
    clrlwi. r0, r8, 24
    beq lbl_801E6004
    slwi r0, r0, 2
    lwz r5, 0x0(r17)
    lwzx r12, r30, r0
    mr r3, r27
    stw r5, 0x18(r1)
    extrwi r5, r8, 1, 2
    mr r4, r15
    mr r6, r16
    addi r7, r1, 0x18
    add r8, r21, r19
    mtctr r12
    bctrl
    lwz r4, 0x0(r17)
    mr r3, r17
    addi r4, r4, 0x4c
    lwz r0, 0x24(r4)
    add r0, r4, r0
    add r0, r0, r31
    add r4, r0, r26
    lwz r4, 0x4(r4)
    bl fn_801D0D24
    neg r0, r3
    or r0, r0, r3
    srwi. r0, r0, 31
    beq lbl_801E5FA8
    lwz r0, 0x60(r3)
    cmpwi r0, 0x0
    beq lbl_801E5F98
    add r0, r3, r0
    b lbl_801E5F9C
lbl_801E5F98:
    li r0, 0x0
lbl_801E5F9C:
    neg r3, r0
    or r0, r3, r0
    srwi r0, r0, 31
lbl_801E5FA8:
    cmpwi r0, 0x0
    beq lbl_801E6080
    add r0, r21, r19
    addi r3, r1, 0x20
    mulli r23, r0, 0x30
    add r4, r15, r23
    bl CalcInvWorldMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
    cmplwi r3, 0x1
    bne lbl_801E5FE0
    mr r3, r25
    addi r4, r1, 0x20
    add r5, r29, r23
    bl PSMTXConcat
    b lbl_801E6080
lbl_801E5FE0:
    add r3, r29, r23
    bl PSMTXIdentity
    lfs f0, 0xc(r16)
    lfs f1, 0x1c(r16)
    stfs f0, 0xc(r24)
    lfs f0, 0x2c(r16)
    stfs f1, 0x1c(r24)
    stfs f0, 0x2c(r24)
    b lbl_801E6080
lbl_801E6004:
    lwz r3, 0x0(r17)
    addi r3, r3, 0x4c
    lwz r0, 0x24(r3)
    add r0, r3, r0
    add r0, r0, r31
    add r3, r0, r26
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    blt lbl_801E6080
    mr r3, r17
    bl fn_801D0D24
    cmpwi r3, 0x0
    beq lbl_801E6080
    lwz r0, 0x14(r3)
    rlwinm. r0, r0, 0, 21, 21
    beq lbl_801E6080
    lwz r4, 0x1c(r3)
    mr r3, r17
    bl fn_801D0D24
    cmpwi r3, 0x0
    beq lbl_801E6060
    lwz r3, 0x10(r3)
    b lbl_801E6064
lbl_801E6060:
    li r3, 0x0
lbl_801E6064:
    add r0, r21, r19
    mr r5, r27
    mulli r3, r3, 0x30
    mulli r0, r0, 0x30
    add r3, r29, r3
    add r4, r15, r0
    bl PSMTXConcat
lbl_801E6080:
    addi r28, r28, 0x4
    addi r27, r27, 0x30
    addi r26, r26, 0x4
    addi r25, r25, 0x30
    addi r24, r24, 0x30
    addi r19, r19, 0x1
lbl_801E6098:
    cmplw r19, r20
    blt lbl_801E5F14
    lwz r3, 0x8(r1)
    mr r4, r14
    lwz r5, 0x54(r1)
    bl StoreBlocks__Q34nw4r2ut2LCFPvPvUl
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_801E6160
    lwz r24, 0x6c(r1)
    mr r19, r14
    lwz r23, 0x70(r1)
    li r26, 0x0
    mr r25, r24
    b lbl_801E6158
lbl_801E60D4:
    lwz r0, 0x0(r22)
    rlwinm. r0, r0, 0, 2, 2
    beq lbl_801E6110
    cmpwi r18, 0x0
    beq lbl_801E6100
    mr r3, r19
    mr r4, r24
    bl PSMTXCopy
    stfs f31, 0x2c(r24)
    stfs f31, 0x1c(r24)
    stfs f31, 0xc(r24)
lbl_801E6100:
    mr r3, r23
    mr r4, r19
    bl MTX34ToMTX33__Q24nw4r4mathFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
    b lbl_801E6140
lbl_801E6110:
    cmpwi r18, 0x0
    beq lbl_801E6134
    mr r3, r24
    mr r4, r19
    bl CalcViewTexMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
    mr r3, r23
    mr r4, r25
    bl MTX34ToMTX33__Q24nw4r4mathFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
    b lbl_801E6140
lbl_801E6134:
    mr r3, r23
    mr r4, r19
    bl CalcViewNrmMtx__Q34nw4r3g3d6detailFPQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
lbl_801E6140:
    addi r19, r19, 0x30
    addi r23, r23, 0x24
    addi r22, r22, 0x4
    addi r24, r24, 0x30
    addi r25, r25, 0x30
    addi r26, r26, 0x1
lbl_801E6158:
    cmplw r26, r20
    blt lbl_801E60D4
lbl_801E6160:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_801E6194
    lwz r3, 0x7c(r1)
    lwz r4, 0x70(r1)
    lwz r5, 0x50(r1)
    bl StoreBlocks__Q34nw4r2ut2LCFPvPvUl
    cmpwi r18, 0x0
    beq lbl_801E6194
    lwz r3, 0x78(r1)
    lwz r4, 0x6c(r1)
    lwz r5, 0x54(r1)
    bl StoreBlocks__Q34nw4r2ut2LCFPvPvUl
lbl_801E6194:
    lwz r3, 0x74(r1)
    mr r4, r14
    lwz r0, 0x68(r1)
    addi r21, r21, 0x28
    lwz r14, 0x64(r1)
    addi r31, r31, 0xa0
    stw r3, 0x68(r1)
    lwz r3, 0x80(r1)
    stw r0, 0x74(r1)
    addi r3, r3, 0x780
    lwz r5, 0x70(r1)
    stw r3, 0x80(r1)
    lwz r3, 0x8(r1)
    lwz r0, 0x60(r1)
    addi r3, r3, 0x780
    lwz r6, 0x6c(r1)
    stw r3, 0x8(r1)
    lwz r3, 0x7c(r1)
    stw r0, 0x70(r1)
    addi r3, r3, 0x5a0
    lwz r0, 0x5c(r1)
    stw r3, 0x7c(r1)
    lwz r3, 0x78(r1)
    stw r0, 0x6c(r1)
    addi r3, r3, 0x780
    stw r3, 0x78(r1)
    lwz r3, 0x84(r1)
    stw r4, 0x64(r1)
    addi r3, r3, 0x780
    stw r5, 0x60(r1)
    stw r6, 0x5c(r1)
    stw r3, 0x84(r1)
lbl_801E6214:
    lwz r0, 0x14(r1)
    cmplw r21, r0
    blt lbl_801E5E24
lbl_801E6220:
    opword 0xE3E100D8
    addi r11, r1, 0xd0
    lfd f31, 0xd0(r1)
    bl _restgpr_14
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

