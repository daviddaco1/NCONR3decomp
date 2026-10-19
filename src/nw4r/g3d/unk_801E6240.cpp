#include "types.h"

// Translation unit: src/nw4r/g3d/unk_801E6240.cpp
// Total functions: 2

// Forward declarations
extern "C" void CalcTexMtx_3dsmax__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag();
extern "C" void CalcTexMtx_Maya__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag();
extern "C" void CalcTexMtx_Xsi__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag();
extern "C" void PSMTXIdentity();
extern "C" void fn_801E6240();
extern "C" void fn_801E62C8();
extern "C" void fn_801E9BD4();

// ----------------------------------------------------------------------------
// fn_801E6240
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E6240() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r7, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_801E6274
    bl CalcTexMtx_Maya__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
    cntlzw r0, r3
    srwi r0, r0, 5
    b lbl_801E6298
lbl_801E6274:
    cmpwi r7, 0x1
    bne lbl_801E628C
    bl CalcTexMtx_Xsi__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
    cntlzw r0, r3
    srwi r0, r0, 5
    b lbl_801E6298
lbl_801E628C:
    bl CalcTexMtx_3dsmax__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_801E6298:
    cmpwi r0, 0x0
    beq lbl_801E62B0
    cmpwi r31, 0x0
    beq lbl_801E62B0
    mr r3, r30
    bl PSMTXIdentity
lbl_801E62B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_801E62C8
// ----------------------------------------------------------------------------
extern "C" asm void fn_801E62C8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_801E9BD4
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_801E6304
    cmpwi r31, 0x0
    beq lbl_801E6304
    mr r3, r30
    bl PSMTXIdentity
lbl_801E6304:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

