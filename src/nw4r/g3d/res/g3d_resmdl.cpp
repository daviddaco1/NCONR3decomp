#include <nw4r/g3d.h>

namespace nw4r {
namespace g3d {

/******************************************************************************
 *
 * ResByteCode
 *
 ******************************************************************************/
const u8* ResMdl::GetResByteCode(const char* pName) const {
    return static_cast<u8*>(ofs_to_obj<ResDic>(ref().toResByteCodeDic)[pName]);
}

/******************************************************************************
 *
 * ResNode
 *
 ******************************************************************************/
ResNode ResMdl::GetResNode(const char* pName) const {
    return ResNode(ofs_to_obj<ResDic>(ref().toResNodeDic)[pName]);
}

ResNode ResMdl::GetResNode(const ResName name) const {
    return ResNode(ofs_to_obj<ResDic>(ref().toResNodeDic)[name]);
}

ResNode ResMdl::GetResNode(int idx) const {
    return ResNode(ofs_to_obj<ResDic>(ref().toResNodeDic)[idx]);
}

ResNode ResMdl::GetResNode(u32 idx) const {
    return ResNode(ofs_to_obj<ResDic>(ref().toResNodeDic)[idx]);
}

// GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv: definicion C reemplazada por asm (ver abajo)


/******************************************************************************
 *
 * RexVtxPos
 *
 ******************************************************************************/
ResVtxPos ResMdl::GetResVtxPos(const ResName name) const {
    return ResVtxPos(ofs_to_obj<ResDic>(ref().toResVtxPosDic)[name]);
}

ResVtxPos ResMdl::GetResVtxPos(int idx) const {
    return ResVtxPos(ofs_to_obj<ResDic>(ref().toResVtxPosDic)[idx]);
}

ResVtxPos ResMdl::GetResVtxPos(u32 idx) const {
    return ResVtxPos(ofs_to_obj<ResDic>(ref().toResVtxPosDic)[idx]);
}

// GetResVtxPosNumEntries__Q34nw4r3g3d6ResMdlCFv: definicion C reemplazada por asm (ver abajo)


/******************************************************************************
 *
 * ResVtxNrm
 *
 ******************************************************************************/
ResVtxNrm ResMdl::GetResVtxNrm(const ResName name) const {
    return ResVtxNrm(ofs_to_obj<ResDic>(ref().toResVtxNrmDic)[name]);
}

ResVtxNrm ResMdl::GetResVtxNrm(int idx) const {
    return ResVtxNrm(ofs_to_obj<ResDic>(ref().toResVtxNrmDic)[idx]);
}

ResVtxNrm ResMdl::GetResVtxNrm(u32 idx) const {
    return ResVtxNrm(ofs_to_obj<ResDic>(ref().toResVtxNrmDic)[idx]);
}

u32 ResMdl::GetResVtxNrmNumEntries() const {
    return ofs_to_obj<ResDic>(ref().toResVtxNrmDic).GetNumData();
}

/******************************************************************************
 *
 * ResVtxClr
 *
 ******************************************************************************/
ResVtxClr ResMdl::GetResVtxClr(const ResName name) const {
    return ResVtxClr(ofs_to_obj<ResDic>(ref().toResVtxClrDic)[name]);
}

ResVtxClr ResMdl::GetResVtxClr(int idx) const {
    return ResVtxClr(ofs_to_obj<ResDic>(ref().toResVtxClrDic)[idx]);
}

ResVtxClr ResMdl::GetResVtxClr(u32 idx) const {
    return ResVtxClr(ofs_to_obj<ResDic>(ref().toResVtxClrDic)[idx]);
}

u32 ResMdl::GetResVtxClrNumEntries() const {
    return ofs_to_obj<ResDic>(ref().toResVtxClrDic).GetNumData();
}

/******************************************************************************
 *
 * ResVtxTexCoord
 *
 ******************************************************************************/
ResVtxTexCoord ResMdl::GetResVtxTexCoord(int idx) const {
    return ResVtxTexCoord(ofs_to_obj<ResDic>(ref().toResVtxTexCoordDic)[idx]);
}

u32 ResMdl::GetResVtxTexCoordNumEntries() const {
    return ofs_to_obj<ResDic>(ref().toResVtxTexCoordDic).GetNumData();
}

/******************************************************************************
 *
 * ResMat
 *
 ******************************************************************************/
ResMat ResMdl::GetResMat(const char* pName) const {
    return ResMat(ofs_to_obj<ResDic>(ref().toResMatDic)[pName]);
}

ResMat ResMdl::GetResMat(const ResName name) const {
    return ResMat(ofs_to_obj<ResDic>(ref().toResMatDic)[name]);
}

ResMat ResMdl::GetResMat(int idx) const {
    return ResMat(ofs_to_obj<ResDic>(ref().toResMatDic)[idx]);
}

ResMat ResMdl::GetResMat(u32 idx) const {
    return ResMat(ofs_to_obj<ResDic>(ref().toResMatDic)[idx]);
}

u32 ResMdl::GetResMatNumEntries() const {
    return ofs_to_obj<ResDic>(ref().toResMatDic).GetNumData();
}

/******************************************************************************
 *
 * ResShp
 *
 ******************************************************************************/
ResShp ResMdl::GetResShp(const char* pName) const {
    return ResShp(ofs_to_obj<ResDic>(ref().toResShpDic)[pName]);
}

ResShp ResMdl::GetResShp(int idx) const {
    return ResShp(ofs_to_obj<ResDic>(ref().toResShpDic)[idx]);
}

ResShp ResMdl::GetResShp(u32 idx) const {
    return ResShp(ofs_to_obj<ResDic>(ref().toResShpDic)[idx]);
}

u32 ResMdl::GetResShpNumEntries() const {
    return ofs_to_obj<ResDic>(ref().toResShpDic).GetNumData();
}

/******************************************************************************
 *
 * ResTexPlttInfo
 *
 ******************************************************************************/
ResTexPlttInfo ResMdl::GetResTexPlttInfoOffsetFromTexName(int idx) const {
    return ResTexPlttInfo(
        ofs_to_obj<ResDic>(ref().toResTexNameToTexPlttInfoDic)[idx]);
}

u32 ResMdl::GetResTexPlttInfoOffsetFromTexNameNumEntries() const {
    return ofs_to_obj<ResDic>(ref().toResTexNameToTexPlttInfoDic).GetNumData();
}

/******************************************************************************
 *
 * ResMdl
 *
 ******************************************************************************/
bool ResMdl::Bind(const ResFile file) {
    u32 i;
    bool success = true;

    u32 matNum = GetResMatNumEntries();
    for (i = 0; i < matNum; i++) {
        success = GetResMat(i).Bind(file) && success;
    }

    return success;
}

void ResMdl::Release() {
    u32 i;

    u32 matNum = GetResMatNumEntries();
    for (i = 0; i < matNum; i++) {
        GetResMat(i).Release();
    }
}

// Init__Q34nw4r3g3d6ResMdlFv: definicion C reemplazada por asm (ver abajo)


void ResMdl::Terminate() {
    u32 i;

    u32 shpNum = GetResShpNumEntries();
    for (i = 0; i < shpNum; i++) {
        GetResShp(i).Terminate();
    }
}

} // namespace g3d
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" void DCStore__Q34nw4r3g3d12ResVtxFurPosFb();
extern "C" void DCStore__Q34nw4r3g3d12ResVtxFurVecFb();
extern "C" void DCStore__Q34nw4r3g3d14ResVtxTexCoordFb();
extern "C" void DCStore__Q34nw4r3g3d9ResVtxClrFb();
extern "C" void DCStore__Q34nw4r3g3d9ResVtxNrmFb();
extern "C" void DCStore__Q34nw4r3g3d9ResVtxPosFb();
extern "C" void GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv();
extern "C" void GetResNode__Q34nw4r3g3d6ResMdlCFQ34nw4r3g3d7ResName();
extern "C" void GetResNode__Q34nw4r3g3d6ResMdlCFUl();
extern "C" void GetResNode__Q34nw4r3g3d6ResMdlCFi();
extern "C" void GetResVtxPosNumEntries__Q34nw4r3g3d6ResMdlCFv();
extern "C" void GetResVtxPos__Q34nw4r3g3d6ResMdlCFUl();
extern "C" void GetResVtxPos__Q34nw4r3g3d6ResMdlCFi();
extern "C" void Init__Q34nw4r3g3d6ResMatFv();
extern "C" void Init__Q34nw4r3g3d6ResMdlFv();
extern "C" void Init__Q34nw4r3g3d6ResShpFv();
extern "C" void __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName();
extern "C" void fn_801D0C80();
extern "C" void fn_801D0CD0();
extern "C" void fn_801D0D24();
extern "C" void fn_801D0D78();
extern "C" void fn_801D0DAC();
extern "C" void fn_801D0DFC();
extern "C" void fn_801D0E50();
extern "C" void fn_801D0EA4();
extern "C" void fn_801D0ED8();
extern "C" void fn_801D0F28();
extern "C" void fn_801D0F7C();
extern "C" void fn_801D0FD0();
extern "C" void fn_801D1004();
extern "C" void fn_801D1054();
extern "C" void fn_801D10A8();
extern "C" void fn_801D10FC();
extern "C" void fn_801D1130();
extern "C" void fn_801D1184();

// asm_to_cpp: fn_801D0C80
extern "C" asm void fn_801D0C80() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x14(r1)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_801D0CA4
    add r0, r3, r0
    b lbl_801D0CA8
lbl_801D0CA4:
    li r0, 0x0
lbl_801D0CA8:
    lwz r5, 0x0(r4)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    addi r4, r1, 0x8
    stw r5, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801D0CD0
extern "C" asm void fn_801D0CD0() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_801D0CE8
    add r0, r3, r0
    b lbl_801D0CEC
lbl_801D0CE8:
    li r0, 0x0
lbl_801D0CEC:
    cmpwi r0, 0x0
    beq lbl_801D0D1C
    addi r3, r4, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D0D14
    add r3, r0, r3
    blr
lbl_801D0D14:
    li r3, 0x0
    blr
lbl_801D0D1C:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801D0D24
extern "C" asm void fn_801D0D24() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_801D0D3C
    add r0, r3, r0
    b lbl_801D0D40
lbl_801D0D3C:
    li r0, 0x0
lbl_801D0D40:
    cmpwi r0, 0x0
    beq lbl_801D0D70
    addi r3, r4, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D0D68
    add r3, r0, r3
    blr
lbl_801D0D68:
    li r3, 0x0
    blr
lbl_801D0D70:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801D0D78
extern "C" asm void fn_801D0D78() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_801D0D90
    add r3, r3, r0
    b lbl_801D0D94
lbl_801D0D90:
    li r3, 0x0
lbl_801D0D94:
    cmpwi r3, 0x0
    beq lbl_801D0DA4
    lwz r3, 0x4(r3)
    blr
lbl_801D0DA4:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801D0DAC
extern "C" asm void fn_801D0DAC() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x14(r1)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_801D0DD0
    add r0, r3, r0
    b lbl_801D0DD4
lbl_801D0DD0:
    li r0, 0x0
lbl_801D0DD4:
    lwz r5, 0x0(r4)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    addi r4, r1, 0x8
    stw r5, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801D0DFC
extern "C" asm void fn_801D0DFC() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_801D0E14
    add r0, r3, r0
    b lbl_801D0E18
lbl_801D0E14:
    li r0, 0x0
lbl_801D0E18:
    cmpwi r0, 0x0
    beq lbl_801D0E48
    addi r3, r4, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D0E40
    add r3, r0, r3
    blr
lbl_801D0E40:
    li r3, 0x0
    blr
lbl_801D0E48:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801D0E50
extern "C" asm void fn_801D0E50() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_801D0E68
    add r0, r3, r0
    b lbl_801D0E6C
lbl_801D0E68:
    li r0, 0x0
lbl_801D0E6C:
    cmpwi r0, 0x0
    beq lbl_801D0E9C
    addi r3, r4, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D0E94
    add r3, r0, r3
    blr
lbl_801D0E94:
    li r3, 0x0
    blr
lbl_801D0E9C:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801D0EA4
extern "C" asm void fn_801D0EA4() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_801D0EBC
    add r3, r3, r0
    b lbl_801D0EC0
lbl_801D0EBC:
    li r3, 0x0
lbl_801D0EC0:
    cmpwi r3, 0x0
    beq lbl_801D0ED0
    lwz r3, 0x4(r3)
    blr
lbl_801D0ED0:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801D0ED8
extern "C" asm void fn_801D0ED8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x14(r1)
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_801D0EFC
    add r0, r3, r0
    b lbl_801D0F00
lbl_801D0EFC:
    li r0, 0x0
lbl_801D0F00:
    lwz r5, 0x0(r4)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    addi r4, r1, 0x8
    stw r5, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801D0F28
extern "C" asm void fn_801D0F28() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_801D0F40
    add r0, r3, r0
    b lbl_801D0F44
lbl_801D0F40:
    li r0, 0x0
lbl_801D0F44:
    cmpwi r0, 0x0
    beq lbl_801D0F74
    addi r3, r4, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D0F6C
    add r3, r0, r3
    blr
lbl_801D0F6C:
    li r3, 0x0
    blr
lbl_801D0F74:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801D0F7C
extern "C" asm void fn_801D0F7C() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_801D0F94
    add r0, r3, r0
    b lbl_801D0F98
lbl_801D0F94:
    li r0, 0x0
lbl_801D0F98:
    cmpwi r0, 0x0
    beq lbl_801D0FC8
    addi r3, r4, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D0FC0
    add r3, r0, r3
    blr
lbl_801D0FC0:
    li r3, 0x0
    blr
lbl_801D0FC8:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801D0FD0
extern "C" asm void fn_801D0FD0() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_801D0FE8
    add r3, r3, r0
    b lbl_801D0FEC
lbl_801D0FE8:
    li r3, 0x0
lbl_801D0FEC:
    cmpwi r3, 0x0
    beq lbl_801D0FFC
    lwz r3, 0x4(r3)
    blr
lbl_801D0FFC:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801D1004
extern "C" asm void fn_801D1004() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x14(r1)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_801D1028
    add r0, r3, r0
    b lbl_801D102C
lbl_801D1028:
    li r0, 0x0
lbl_801D102C:
    lwz r5, 0x0(r4)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    addi r4, r1, 0x8
    stw r5, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_801D1054
extern "C" asm void fn_801D1054() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_801D106C
    add r0, r3, r0
    b lbl_801D1070
lbl_801D106C:
    li r0, 0x0
lbl_801D1070:
    cmpwi r0, 0x0
    beq lbl_801D10A0
    addi r3, r4, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D1098
    add r3, r0, r3
    blr
lbl_801D1098:
    li r3, 0x0
    blr
lbl_801D10A0:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801D10A8
extern "C" asm void fn_801D10A8() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_801D10C0
    add r0, r3, r0
    b lbl_801D10C4
lbl_801D10C0:
    li r0, 0x0
lbl_801D10C4:
    cmpwi r0, 0x0
    beq lbl_801D10F4
    addi r3, r4, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D10EC
    add r3, r0, r3
    blr
lbl_801D10EC:
    li r3, 0x0
    blr
lbl_801D10F4:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801D10FC
extern "C" asm void fn_801D10FC() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_801D1114
    add r3, r3, r0
    b lbl_801D1118
lbl_801D1114:
    li r3, 0x0
lbl_801D1118:
    cmpwi r3, 0x0
    beq lbl_801D1128
    lwz r3, 0x4(r3)
    blr
lbl_801D1128:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801D1130
extern "C" asm void fn_801D1130() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_801D1148
    add r0, r3, r0
    b lbl_801D114C
lbl_801D1148:
    li r0, 0x0
lbl_801D114C:
    cmpwi r0, 0x0
    beq lbl_801D117C
    addi r3, r4, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D1174
    add r3, r0, r3
    blr
lbl_801D1174:
    li r3, 0x0
    blr
lbl_801D117C:
    li r3, 0x0
    blr
}

// asm_to_cpp: fn_801D1184
extern "C" asm void fn_801D1184() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_801D119C
    add r0, r3, r0
    b lbl_801D11A0
lbl_801D119C:
    li r0, 0x0
lbl_801D11A0:
    cmpwi r0, 0x0
    beq lbl_801D11D0
    addi r3, r4, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D11C8
    add r3, r0, r3
    blr
lbl_801D11C8:
    li r3, 0x0
    blr
lbl_801D11D0:
    li r3, 0x0
    blr
}

// asm_to_cpp: GetResNode__Q34nw4r3g3d6ResMdlCFQ34nw4r3g3d7ResName
extern "C" asm void GetResNode__Q34nw4r3g3d6ResMdlCFQ34nw4r3g3d7ResName() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x0(r3)
    stw r0, 0x14(r1)
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_801D11FC
    add r0, r3, r0
    b lbl_801D1200
lbl_801D11FC:
    li r0, 0x0
lbl_801D1200:
    lwz r5, 0x0(r4)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    addi r4, r1, 0x8
    stw r5, 0x8(r1)
    bl __vc__Q34nw4r3g3d6ResDicCFQ34nw4r3g3d7ResName
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: GetResNode__Q34nw4r3g3d6ResMdlCFi
extern "C" asm void GetResNode__Q34nw4r3g3d6ResMdlCFi() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_801D1240
    add r0, r3, r0
    b lbl_801D1244
lbl_801D1240:
    li r0, 0x0
lbl_801D1244:
    cmpwi r0, 0x0
    beq lbl_801D1274
    addi r3, r4, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D126C
    add r3, r0, r3
    blr
lbl_801D126C:
    li r3, 0x0
    blr
lbl_801D1274:
    li r3, 0x0
    blr
}

// asm_to_cpp: GetResNode__Q34nw4r3g3d6ResMdlCFUl
extern "C" asm void GetResNode__Q34nw4r3g3d6ResMdlCFUl() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_801D1294
    add r0, r3, r0
    b lbl_801D1298
lbl_801D1294:
    li r0, 0x0
lbl_801D1298:
    cmpwi r0, 0x0
    beq lbl_801D12C8
    addi r3, r4, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D12C0
    add r3, r0, r3
    blr
lbl_801D12C0:
    li r3, 0x0
    blr
lbl_801D12C8:
    li r3, 0x0
    blr
}

// asm_to_cpp: GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv
extern "C" asm void GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_801D12E8
    add r3, r3, r0
    b lbl_801D12EC
lbl_801D12E8:
    li r3, 0x0
lbl_801D12EC:
    cmpwi r3, 0x0
    beq lbl_801D12FC
    lwz r3, 0x4(r3)
    blr
lbl_801D12FC:
    li r3, 0x0
    blr
}

// asm_to_cpp: GetResVtxPos__Q34nw4r3g3d6ResMdlCFi
extern "C" asm void GetResVtxPos__Q34nw4r3g3d6ResMdlCFi() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_801D131C
    add r0, r3, r0
    b lbl_801D1320
lbl_801D131C:
    li r0, 0x0
lbl_801D1320:
    cmpwi r0, 0x0
    beq lbl_801D1350
    addi r3, r4, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D1348
    add r3, r0, r3
    blr
lbl_801D1348:
    li r3, 0x0
    blr
lbl_801D1350:
    li r3, 0x0
    blr
}

// asm_to_cpp: GetResVtxPos__Q34nw4r3g3d6ResMdlCFUl
extern "C" asm void GetResVtxPos__Q34nw4r3g3d6ResMdlCFUl() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_801D1370
    add r0, r3, r0
    b lbl_801D1374
lbl_801D1370:
    li r0, 0x0
lbl_801D1374:
    cmpwi r0, 0x0
    beq lbl_801D13A4
    addi r3, r4, 0x1
    slwi r3, r3, 4
    add r3, r0, r3
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beq lbl_801D139C
    add r3, r0, r3
    blr
lbl_801D139C:
    li r3, 0x0
    blr
lbl_801D13A4:
    li r3, 0x0
    blr
}

// asm_to_cpp: GetResVtxPosNumEntries__Q34nw4r3g3d6ResMdlCFv
extern "C" asm void GetResVtxPosNumEntries__Q34nw4r3g3d6ResMdlCFv() {
    nofralloc
    lwz r3, 0x0(r3)
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_801D13C4
    add r3, r3, r0
    b lbl_801D13C8
lbl_801D13C4:
    li r3, 0x0
lbl_801D13C8:
    cmpwi r3, 0x0
    beq lbl_801D13D8
    lwz r3, 0x4(r3)
    blr
lbl_801D13D8:
    li r3, 0x0
    blr
}

// asm_to_cpp: Init__Q34nw4r3g3d6ResMdlFv
extern "C" asm void Init__Q34nw4r3g3d6ResMdlFv() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    lwz r4, 0x0(r3)
    lwz r0, 0x30(r4)
    cmpwi r0, 0x0
    beq lbl_801D160C
    add r3, r4, r0
    b lbl_801D1610
lbl_801D160C:
    li r3, 0x0
lbl_801D1610:
    cmpwi r3, 0x0
    beq lbl_801D1620
    lwz r29, 0x4(r3)
    b lbl_801D1624
lbl_801D1620:
    li r29, 0x0
lbl_801D1624:
    cmpwi r29, 0x0
    li r28, 0x0
    li r30, 0x0
    beq lbl_801D169C
    b lbl_801D1694
lbl_801D1638:
    lwz r3, 0x0(r31)
    lwz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_801D1650
    add r0, r3, r0
    b lbl_801D1654
lbl_801D1650:
    li r0, 0x0
lbl_801D1654:
    cmpwi r0, 0x0
    beq lbl_801D167C
    add r3, r0, r30
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_801D1674
    add r0, r0, r3
    b lbl_801D1680
lbl_801D1674:
    li r0, 0x0
    b lbl_801D1680
lbl_801D167C:
    li r0, 0x0
lbl_801D1680:
    stw r0, 0x24(r1)
    addi r3, r1, 0x24
    bl Init__Q34nw4r3g3d6ResMatFv
    addi r28, r28, 0x1
    addi r30, r30, 0x10
lbl_801D1694:
    cmplw r28, r29
    blt lbl_801D1638
lbl_801D169C:
    lwz r3, 0x0(r31)
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_801D16B4
    add r3, r3, r0
    b lbl_801D16B8
lbl_801D16B4:
    li r3, 0x0
lbl_801D16B8:
    cmpwi r3, 0x0
    beq lbl_801D16C8
    lwz r29, 0x4(r3)
    b lbl_801D16CC
lbl_801D16C8:
    li r29, 0x0
lbl_801D16CC:
    cmpwi r29, 0x0
    li r28, 0x0
    li r30, 0x0
    beq lbl_801D1744
    b lbl_801D173C
lbl_801D16E0:
    lwz r3, 0x0(r31)
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_801D16F8
    add r0, r3, r0
    b lbl_801D16FC
lbl_801D16F8:
    li r0, 0x0
lbl_801D16FC:
    cmpwi r0, 0x0
    beq lbl_801D1724
    add r3, r0, r30
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_801D171C
    add r0, r0, r3
    b lbl_801D1728
lbl_801D171C:
    li r0, 0x0
    b lbl_801D1728
lbl_801D1724:
    li r0, 0x0
lbl_801D1728:
    stw r0, 0x20(r1)
    addi r3, r1, 0x20
    bl Init__Q34nw4r3g3d6ResShpFv
    addi r28, r28, 0x1
    addi r30, r30, 0x10
lbl_801D173C:
    cmplw r28, r29
    blt lbl_801D16E0
lbl_801D1744:
    lwz r3, 0x0(r31)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_801D175C
    add r3, r3, r0
    b lbl_801D1760
lbl_801D175C:
    li r3, 0x0
lbl_801D1760:
    cmpwi r3, 0x0
    beq lbl_801D1770
    lwz r29, 0x4(r3)
    b lbl_801D1774
lbl_801D1770:
    li r29, 0x0
lbl_801D1774:
    cmpwi r29, 0x0
    li r28, 0x0
    li r30, 0x0
    beq lbl_801D17F0
    b lbl_801D17E8
lbl_801D1788:
    lwz r3, 0x0(r31)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_801D17A0
    add r0, r3, r0
    b lbl_801D17A4
lbl_801D17A0:
    li r0, 0x0
lbl_801D17A4:
    cmpwi r0, 0x0
    beq lbl_801D17CC
    add r3, r0, r30
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_801D17C4
    add r0, r0, r3
    b lbl_801D17D0
lbl_801D17C4:
    li r0, 0x0
    b lbl_801D17D0
lbl_801D17CC:
    li r0, 0x0
lbl_801D17D0:
    stw r0, 0x1c(r1)
    addi r3, r1, 0x1c
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d9ResVtxPosFb
    addi r28, r28, 0x1
    addi r30, r30, 0x10
lbl_801D17E8:
    cmplw r28, r29
    blt lbl_801D1788
lbl_801D17F0:
    lwz r3, 0x0(r31)
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_801D1808
    add r3, r3, r0
    b lbl_801D180C
lbl_801D1808:
    li r3, 0x0
lbl_801D180C:
    cmpwi r3, 0x0
    beq lbl_801D181C
    lwz r29, 0x4(r3)
    b lbl_801D1820
lbl_801D181C:
    li r29, 0x0
lbl_801D1820:
    cmpwi r29, 0x0
    li r28, 0x0
    li r30, 0x0
    beq lbl_801D189C
    b lbl_801D1894
lbl_801D1834:
    lwz r3, 0x0(r31)
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_801D184C
    add r0, r3, r0
    b lbl_801D1850
lbl_801D184C:
    li r0, 0x0
lbl_801D1850:
    cmpwi r0, 0x0
    beq lbl_801D1878
    add r3, r0, r30
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_801D1870
    add r0, r0, r3
    b lbl_801D187C
lbl_801D1870:
    li r0, 0x0
    b lbl_801D187C
lbl_801D1878:
    li r0, 0x0
lbl_801D187C:
    stw r0, 0x18(r1)
    addi r3, r1, 0x18
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d9ResVtxNrmFb
    addi r28, r28, 0x1
    addi r30, r30, 0x10
lbl_801D1894:
    cmplw r28, r29
    blt lbl_801D1834
lbl_801D189C:
    lwz r3, 0x0(r31)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_801D18B4
    add r3, r3, r0
    b lbl_801D18B8
lbl_801D18B4:
    li r3, 0x0
lbl_801D18B8:
    cmpwi r3, 0x0
    beq lbl_801D18C8
    lwz r29, 0x4(r3)
    b lbl_801D18CC
lbl_801D18C8:
    li r29, 0x0
lbl_801D18CC:
    cmpwi r29, 0x0
    li r28, 0x0
    li r30, 0x0
    beq lbl_801D1948
    b lbl_801D1940
lbl_801D18E0:
    lwz r3, 0x0(r31)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_801D18F8
    add r0, r3, r0
    b lbl_801D18FC
lbl_801D18F8:
    li r0, 0x0
lbl_801D18FC:
    cmpwi r0, 0x0
    beq lbl_801D1924
    add r3, r0, r30
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_801D191C
    add r0, r0, r3
    b lbl_801D1928
lbl_801D191C:
    li r0, 0x0
    b lbl_801D1928
lbl_801D1924:
    li r0, 0x0
lbl_801D1928:
    stw r0, 0x14(r1)
    addi r3, r1, 0x14
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d9ResVtxClrFb
    addi r28, r28, 0x1
    addi r30, r30, 0x10
lbl_801D1940:
    cmplw r28, r29
    blt lbl_801D18E0
lbl_801D1948:
    lwz r3, 0x0(r31)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_801D1960
    add r3, r3, r0
    b lbl_801D1964
lbl_801D1960:
    li r3, 0x0
lbl_801D1964:
    cmpwi r3, 0x0
    beq lbl_801D1974
    lwz r29, 0x4(r3)
    b lbl_801D1978
lbl_801D1974:
    li r29, 0x0
lbl_801D1978:
    cmpwi r29, 0x0
    li r28, 0x0
    li r30, 0x0
    beq lbl_801D19F4
    b lbl_801D19EC
lbl_801D198C:
    lwz r3, 0x0(r31)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_801D19A4
    add r0, r3, r0
    b lbl_801D19A8
lbl_801D19A4:
    li r0, 0x0
lbl_801D19A8:
    cmpwi r0, 0x0
    beq lbl_801D19D0
    add r3, r0, r30
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_801D19C8
    add r0, r0, r3
    b lbl_801D19D4
lbl_801D19C8:
    li r0, 0x0
    b lbl_801D19D4
lbl_801D19D0:
    li r0, 0x0
lbl_801D19D4:
    stw r0, 0x10(r1)
    addi r3, r1, 0x10
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d14ResVtxTexCoordFb
    addi r28, r28, 0x1
    addi r30, r30, 0x10
lbl_801D19EC:
    cmplw r28, r29
    blt lbl_801D198C
lbl_801D19F4:
    lwz r3, 0x0(r31)
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_801D1A0C
    add r3, r3, r0
    b lbl_801D1A10
lbl_801D1A0C:
    li r3, 0x0
lbl_801D1A10:
    cmpwi r3, 0x0
    beq lbl_801D1A20
    lwz r29, 0x4(r3)
    b lbl_801D1A24
lbl_801D1A20:
    li r29, 0x0
lbl_801D1A24:
    cmpwi r29, 0x0
    li r28, 0x0
    li r30, 0x0
    beq lbl_801D1AA0
    b lbl_801D1A98
lbl_801D1A38:
    lwz r3, 0x0(r31)
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_801D1A50
    add r0, r3, r0
    b lbl_801D1A54
lbl_801D1A50:
    li r0, 0x0
lbl_801D1A54:
    cmpwi r0, 0x0
    beq lbl_801D1A7C
    add r3, r0, r30
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_801D1A74
    add r0, r0, r3
    b lbl_801D1A80
lbl_801D1A74:
    li r0, 0x0
    b lbl_801D1A80
lbl_801D1A7C:
    li r0, 0x0
lbl_801D1A80:
    stw r0, 0xc(r1)
    addi r3, r1, 0xc
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d12ResVtxFurVecFb
    addi r28, r28, 0x1
    addi r30, r30, 0x10
lbl_801D1A98:
    cmplw r28, r29
    blt lbl_801D1A38
lbl_801D1AA0:
    lwz r3, 0x0(r31)
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_801D1AB8
    add r3, r3, r0
    b lbl_801D1ABC
lbl_801D1AB8:
    li r3, 0x0
lbl_801D1ABC:
    cmpwi r3, 0x0
    beq lbl_801D1ACC
    lwz r29, 0x4(r3)
    b lbl_801D1AD0
lbl_801D1ACC:
    li r29, 0x0
lbl_801D1AD0:
    cmpwi r29, 0x0
    li r28, 0x0
    li r30, 0x0
    beq lbl_801D1B4C
    b lbl_801D1B44
lbl_801D1AE4:
    lwz r3, 0x0(r31)
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_801D1AFC
    add r0, r3, r0
    b lbl_801D1B00
lbl_801D1AFC:
    li r0, 0x0
lbl_801D1B00:
    cmpwi r0, 0x0
    beq lbl_801D1B28
    add r3, r0, r30
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_801D1B20
    add r0, r0, r3
    b lbl_801D1B2C
lbl_801D1B20:
    li r0, 0x0
    b lbl_801D1B2C
lbl_801D1B28:
    li r0, 0x0
lbl_801D1B2C:
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    li r4, 0x0
    bl DCStore__Q34nw4r3g3d12ResVtxFurPosFb
    addi r28, r28, 0x1
    addi r30, r30, 0x10
lbl_801D1B44:
    cmplw r28, r29
    blt lbl_801D1AE4
lbl_801D1B4C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
