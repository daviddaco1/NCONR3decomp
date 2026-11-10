#include <nw4r/g3d.h>

namespace nw4r {
namespace g3d {

NW4R_G3D_RTTI_DEF(ScnProc);

ScnProc* ScnProc::Construct(MEMAllocator* pAllocator, u32* pSize,
                            DrawProc pProc, bool opa, bool xlu,
                            u32 userDataSize) {
    ScnProc* pScnProc = NULL;
    u32 scnProcSize = sizeof(ScnProc);

    userDataSize = align4(userDataSize);
    u32 userDataOfs = align4(scnProcSize);

    u32 size = align4(userDataOfs + userDataSize);
    if (pSize != NULL) {
        *pSize = size;
    }

    if (pAllocator != NULL) {
        u8* pBuffer = reinterpret_cast<u8*>(Alloc(pAllocator, size));

        if (pBuffer != NULL) {
            void* pUserData = userDataSize != 0 ? pBuffer + userDataOfs : NULL;

            pScnProc =
                new (pBuffer) ScnProc(pAllocator, pProc, pUserData, opa, xlu);
        }
    }

    return pScnProc;
}

void ScnProc::G3dProc(u32 task, u32 param, void* pInfo) {
    if (IsG3dProcDisabled(task)) {
        return;
    }

    switch (task) {
    case G3DPROC_GATHER_SCNOBJ: {
        IScnObjGather* pCollection = static_cast<IScnObjGather*>(pInfo);
        pCollection->Add(this, (mFlag & SCNPROCFLAG_DRAW_OPA) ? true : false,
                         (mFlag & SCNPROCFLAG_DRAW_XLU) ? true : false);
        break;
    }

    case G3DPROC_DRAW_OPA: {
        if (mpDrawProc != NULL) {
            G3DState::Invalidate();
            mpDrawProc(this, true);
        }
        break;
    }

    case G3DPROC_DRAW_XLU: {
        if (mpDrawProc != NULL) {
            G3DState::Invalidate();
            mpDrawProc(this, false);
        }
        break;
    }

    default: {
        DefG3dProcScnLeaf(task, param, pInfo);
    }
    }
}

} // namespace g3d
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049C500;
extern "C" u8 lbl_8037ADA8[];
extern "C" u8 lbl_8037ADE4[];
extern "C" u8 lbl_8037AE20[];
extern "C" u8 lbl_8037AE5C[];
extern "C" void ApplyClrAnmResult__Q24nw4r3g3dFQ34nw4r3g3d10ResMatChanQ34nw4r3g3d14ResMatTevColorPCQ34nw4r3g3d12ClrAnmResult();
extern "C" void ApplyTexPatAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexObjQ34nw4r3g3d10ResTlutObjPCQ34nw4r3g3d15TexPatAnmResult();
extern "C" void ApplyTexSrtAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexSrtQ34nw4r3g3d20ResMatIndMtxAndScalePCQ34nw4r3g3d15TexSrtAnmResult();
extern "C" void DCStore__Q34nw4r3g3d14ResMatTevColorFb();
extern "C" void DCStore__Q34nw4r3g3d20ResMatIndMtxAndScaleFb();
extern "C" void Disable__Q34nw4r2ut2LCFv();
extern "C" void Enable__Q34nw4r2ut2LCFv();
extern "C" void GetResMatNumEntries__Q34nw4r3g3d6ResMdlCFv();
extern "C" void GetResMat__Q34nw4r3g3d6ResMdlCFUl();
extern "C" void Invalidate__Q34nw4r3g3d8G3DStateFUl();
extern "C" void SetRenderModeObj__Q34nw4r3g3d8G3DStateFRC16_GXRenderModeObj();
extern "C" void TestExistence__Q34nw4r3g3d12AnmObjMatClrCFUl();
extern "C" void TestExistence__Q34nw4r3g3d12AnmObjTexPatCFUl();
extern "C" void TestExistence__Q34nw4r3g3d12AnmObjTexSrtCFUl();
extern "C" void VIGetTvFormat();
extern "C" void _restgpr_14();
extern "C" void _savegpr_14();
extern "C" void fn_801F3CE4();
extern "C" void fn_801F40F4();
extern "C" void fn_801F41E8();

// asm_to_cpp: fn_801F3CE4
extern "C" asm void fn_801F3CE4() {
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    addi r11, r1, 0x210
    bl _savegpr_14
    mr r15, r3
    mr r16, r4
    mr r17, r5
    mr r18, r6
    bl GetResMatNumEntries__Q34nw4r3g3d6ResMdlCFv
    addi r27, r1, 0xa8
    addi r0, r1, 0x8c
    subf r4, r0, r27
    addi r28, r1, 0xc8
    addi r0, r1, 0xac
    stw r3, 0x1b8(r1)
    subf r6, r0, r28
    addi r5, r4, 0x3
    clrrwi r0, r4, 31
    li r19, 0x0
    srawi r3, r5, 2
    addi r7, r6, 0x3
    addze r4, r3
    stw r0, 0x1b4(r1)
    srawi r3, r7, 2
    clrrwi r0, r5, 31
    addze r3, r3
    addi r26, r4, 0x1
    addi r24, r3, 0x1
    stw r0, 0x1b0(r1)
    clrrwi r25, r4, 31
    clrrwi r14, r26, 31
    clrrwi r23, r6, 31
    clrrwi r22, r7, 31
    clrrwi r21, r3, 31
    clrrwi r20, r24, 31
    li r29, 0x0
    b lbl_801F40D0
lbl_801F3D7C:
    mr r3, r15
    mr r4, r19
    bl GetResMat__Q34nw4r3g3d6ResMdlCFUl
    cmpwi r16, 0x0
    mr r31, r3
    beq lbl_801F3FC4
    mr r3, r16
    mr r4, r19
    bl TestExistence__Q34nw4r3g3d12AnmObjTexPatCFUl
    cmpwi r3, 0x0
    beq lbl_801F3FC4
    addi r4, r1, 0x8c
    stw r29, 0x88(r1)
    cmplw r4, r27
    bge lbl_801F3EA0
    cmpwi r26, 0x8
    ble lbl_801F3E7C
    mr r0, r4
    li r3, 0x0
    cmplw r0, r27
    li r5, 0x0
    bgt lbl_801F3E00
    lwz r0, 0x1b4(r1)
    li r6, 0x1
    cmpwi r0, 0x0
    bne lbl_801F3DF4
    lwz r0, 0x1b0(r1)
    cmpwi r0, 0x0
    beq lbl_801F3DF4
    li r6, 0x0
lbl_801F3DF4:
    cmpwi r6, 0x0
    beq lbl_801F3E00
    li r5, 0x1
lbl_801F3E00:
    cmpwi r5, 0x0
    beq lbl_801F3E2C
    cmpwi r25, 0x0
    li r0, 0x1
    bne lbl_801F3E20
    cmpw r25, r14
    beq lbl_801F3E20
    li r0, 0x0
lbl_801F3E20:
    cmpwi r0, 0x0
    beq lbl_801F3E2C
    li r3, 0x1
lbl_801F3E2C:
    cmpwi r3, 0x0
    beq lbl_801F3E7C
    addi r3, r1, 0x88
    addi r0, r3, 0x1f
    subf r0, r4, r0
    srwi r0, r0, 5
    mtctr r0
    mr r0, r3
    cmplw r4, r0
    bge lbl_801F3E7C
lbl_801F3E54:
    stw r29, 0x0(r4)
    stw r29, 0x4(r4)
    stw r29, 0x8(r4)
    stw r29, 0xc(r4)
    stw r29, 0x10(r4)
    stw r29, 0x14(r4)
    stw r29, 0x18(r4)
    stw r29, 0x1c(r4)
    addi r4, r4, 0x20
    bdnz lbl_801F3E54
lbl_801F3E7C:
    addi r0, r27, 0x3
    subf r0, r4, r0
    srwi r0, r0, 2
    mtctr r0
    cmplw r4, r27
    bge lbl_801F3EA0
lbl_801F3E94:
    stw r29, 0x0(r4)
    addi r4, r4, 0x4
    bdnz lbl_801F3E94
lbl_801F3EA0:
    addi r3, r1, 0xac
    stw r29, 0xa8(r1)
    cmplw r3, r28
    bge lbl_801F3F88
    cmpwi r24, 0x8
    ble lbl_801F3F64
    mr r0, r3
    li r4, 0x0
    cmplw r0, r28
    li r0, 0x0
    bgt lbl_801F3EF0
    cmpwi r23, 0x0
    li r5, 0x1
    bne lbl_801F3EE4
    cmpwi r22, 0x0
    beq lbl_801F3EE4
    li r5, 0x0
lbl_801F3EE4:
    cmpwi r5, 0x0
    beq lbl_801F3EF0
    li r4, 0x1
lbl_801F3EF0:
    cmpwi r4, 0x0
    beq lbl_801F3F1C
    cmpwi r21, 0x0
    li r4, 0x1
    bne lbl_801F3F10
    cmpw r21, r20
    beq lbl_801F3F10
    li r4, 0x0
lbl_801F3F10:
    cmpwi r4, 0x0
    beq lbl_801F3F1C
    li r0, 0x1
lbl_801F3F1C:
    cmpwi r0, 0x0
    beq lbl_801F3F64
    addi r0, r27, 0x1f
    subf r0, r3, r0
    srwi r0, r0, 5
    mtctr r0
    cmplw r3, r27
    bge lbl_801F3F64
lbl_801F3F3C:
    stw r29, 0x0(r3)
    stw r29, 0x4(r3)
    stw r29, 0x8(r3)
    stw r29, 0xc(r3)
    stw r29, 0x10(r3)
    stw r29, 0x14(r3)
    stw r29, 0x18(r3)
    stw r29, 0x1c(r3)
    addi r3, r3, 0x20
    bdnz lbl_801F3F3C
lbl_801F3F64:
    addi r0, r28, 0x3
    subf r0, r3, r0
    srwi r0, r0, 2
    mtctr r0
    cmplw r3, r28
    bge lbl_801F3F88
lbl_801F3F7C:
    stw r29, 0x0(r3)
    addi r3, r3, 0x4
    bdnz lbl_801F3F7C
lbl_801F3F88:
    lwz r12, 0x0(r16)
    mr r3, r16
    mr r5, r19
    addi r4, r1, 0x84
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    addi r4, r31, 0x144
    addi r0, r31, 0x40
    stw r4, 0x18(r1)
    mr r5, r3
    addi r3, r1, 0x1c
    addi r4, r1, 0x18
    stw r0, 0x1c(r1)
    bl ApplyTexPatAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexObjQ34nw4r3g3d10ResTlutObjPCQ34nw4r3g3d15TexPatAnmResult
lbl_801F3FC4:
    cmpwi r17, 0x0
    beq lbl_801F4048
    mr r3, r17
    mr r4, r19
    bl TestExistence__Q34nw4r3g3d12AnmObjTexSrtCFUl
    cmpwi r3, 0x0
    beq lbl_801F4048
    lwz r0, 0x3c(r31)
    addi r30, r31, 0x1a8
    cmpwi r0, 0x0
    beq lbl_801F3FF8
    add r3, r31, r0
    b lbl_801F3FFC
lbl_801F3FF8:
    li r3, 0x0
lbl_801F3FFC:
    addi r0, r3, 0xa0
    mr r3, r17
    stw r0, 0x24(r1)
    mr r5, r19
    addi r4, r1, 0xc8
    lwz r12, 0x0(r17)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    mr r5, r3
    stw r30, 0x14(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r0, 0x10(r1)
    bl ApplyTexSrtAnmResult__Q24nw4r3g3dFQ34nw4r3g3d9ResTexSrtQ34nw4r3g3d20ResMatIndMtxAndScalePCQ34nw4r3g3d15TexSrtAnmResult
    addi r3, r1, 0x24
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d20ResMatIndMtxAndScaleFb
lbl_801F4048:
    cmpwi r18, 0x0
    beq lbl_801F40CC
    mr r3, r18
    mr r4, r19
    bl TestExistence__Q34nw4r3g3d12AnmObjMatClrCFUl
    cmpwi r3, 0x0
    beq lbl_801F40CC
    lwz r0, 0x3c(r31)
    cmpwi r0, 0x0
    beq lbl_801F4078
    add r3, r31, r0
    b lbl_801F407C
lbl_801F4078:
    li r3, 0x0
lbl_801F407C:
    addi r0, r3, 0x20
    mr r3, r18
    stw r0, 0x20(r1)
    mr r5, r19
    addi r30, r31, 0x3f0
    addi r4, r1, 0x28
    lwz r12, 0x0(r18)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    lwz r0, 0x20(r1)
    mr r5, r3
    stw r30, 0xc(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    bl ApplyClrAnmResult__Q24nw4r3g3dFQ34nw4r3g3d10ResMatChanQ34nw4r3g3d14ResMatTevColorPCQ34nw4r3g3d12ClrAnmResult
    addi r3, r1, 0x20
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d14ResMatTevColorFb
lbl_801F40CC:
    addi r19, r19, 0x1
lbl_801F40D0:
    lwz r0, 0x1b8(r1)
    cmplw r19, r0
    blt lbl_801F3D7C
    addi r11, r1, 0x210
    bl _restgpr_14
    lwz r0, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

// asm_to_cpp: fn_801F40F4
extern "C" asm void fn_801F40F4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, lbl_8049C500
    bl OSRegisterVersion
    cmpwi r31, 0x0
    beq lbl_801F4120
    bl Enable__Q34nw4r2ut2LCFv
    b lbl_801F4124
lbl_801F4120:
    bl Disable__Q34nw4r2ut2LCFv
lbl_801F4124:
    li r3, 0x4
    oris r3, r3, 0x4
    mtspr GQR2, r3
    li r3, 0x5
    oris r3, r3, 0x5
    mtspr GQR3, r3
    li r3, 0x6
    oris r3, r3, 0x6
    mtspr GQR4, r3
    li r3, 0x7
    oris r3, r3, 0x7
    mtspr GQR5, r3
    lis r4, 0x507
    addi r0, r4, 0x507
    mtspr GQR6, r0
    lis r4, 0x807
    addi r0, r4, 0x807
    mtspr GQR7, r0
    bl VIGetTvFormat
    cmpwi r3, 0x2
    beq lbl_801F41BC
    bge lbl_801F418C
    cmpwi r3, 0x0
    beq lbl_801F4198
    bge lbl_801F41A4
    b lbl_801F41C8
lbl_801F418C:
    cmpwi r3, 0x5
    beq lbl_801F41B0
    b lbl_801F41C8
lbl_801F4198:
    lis r3, lbl_8037ADA8@ha
    addi r3, r3, lbl_8037ADA8@l
    b lbl_801F41D0
lbl_801F41A4:
    lis r3, lbl_8037AE20@ha
    addi r3, r3, lbl_8037AE20@l
    b lbl_801F41D0
lbl_801F41B0:
    lis r3, lbl_8037AE5C@ha
    addi r3, r3, lbl_8037AE5C@l
    b lbl_801F41D0
lbl_801F41BC:
    lis r3, lbl_8037ADE4@ha
    addi r3, r3, lbl_8037ADE4@l
    b lbl_801F41D0
lbl_801F41C8:
    lis r3, lbl_8037ADA8@ha
    addi r3, r3, lbl_8037ADA8@l
lbl_801F41D0:
    bl SetRenderModeObj__Q34nw4r3g3d8G3DStateFRC16_GXRenderModeObj
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801F41E8
extern "C" asm void fn_801F41E8() {
    nofralloc
    li r3, 0x7ff
    b Invalidate__Q34nw4r3g3d8G3DStateFUl
}
