#include <nw4r/ef.h>

#include <cstring>

namespace nw4r {
namespace ef {

Resource Resource::mResource;

// GetInstance__Q34nw4r2ef8ResourceFv: definicion C reemplazada por asm (ver abajo)


// __ct__Q34nw4r2ef8ResourceFv: definicion C reemplazada por asm (ver abajo)


// Initialize__Q34nw4r2ef8ResourceFv: definicion C reemplazada por asm (ver abajo)


/******************************************************************************
 *
 * Binary resource implementation
 *
 ******************************************************************************/
struct FileHeader {
    char signature[4]; // at 0x0
    u8 byteorder[2];   // at 0x4
    u16 version;       // at 0x6
    u32 filesize;      // at 0x8
    u16 headersize;    // at 0xC
    u16 blocknum;      // at 0xE
};

struct BlockHeader {
    char type[4];   // at 0x0
    u32 headersize; // at 0x4
};

struct NameTable {
    u32 tablesize;   // at 0x0
    u16 numEntry;    // at 0x5
    u16 PADDING_0x4; // at 0x6
};

/* static */ void breffRelocate(EffectProject* pEffProject) {
    u8* pPtr = reinterpret_cast<u8*>(pEffProject);
    pPtr += pEffProject->headersize;

    u8* pData = pPtr;
    NameTable* pNameTable = reinterpret_cast<NameTable*>(pPtr);

    pData += sizeof(NameTable);

    for (int i = 0; i < pNameTable->numEntry; i++) {
        int len = (pData[0] << 8) + pData[1];
        pData += sizeof(u16);

        char* pName = reinterpret_cast<char*>(pData);
        pData += len;

        u32 offset =
            (pData[0] << 24) + (pData[1] << 16) + (pData[2] << 8) + pData[3];
        pData += sizeof(u32);

        u32 size =
            (pData[0] << 24) + (pData[1] << 16) + (pData[2] << 8) + pData[3];
        pData += sizeof(u32);

        EmitterResource* pResource = reinterpret_cast<EmitterResource*>(
            reinterpret_cast<u8*>(pNameTable) + offset);

        // I think they really did this, the member is private...
        *reinterpret_cast<char**>(pResource) = pName;

        pResource->LocateTracks();
    }
}

static u16 breffNumEmitter(EffectProject* pEffProject) {
    u8* pPtr = reinterpret_cast<u8*>(pEffProject);
    pPtr += pEffProject->headersize;

    NameTable* pNameTable = reinterpret_cast<NameTable*>(pPtr);
    return pNameTable->numEntry;
}

static u16 breftNumTexture(TextureProject* pTexProject) {
    u8* pPtr = reinterpret_cast<u8*>(pTexProject);
    pPtr += pTexProject->headersize;

    NameTable* pNameTable = reinterpret_cast<NameTable*>(pPtr);
    return pNameTable->numEntry;
}

EmitterResource* breffSearchName(EffectProject* pEffProject,
                                        const char* pEffName) {

    u8* pPtr = reinterpret_cast<u8*>(pEffProject);
    pPtr += pEffProject->headersize;

    u8* pData = pPtr;
    NameTable* pNameTable = reinterpret_cast<NameTable*>(pPtr);

    pData += sizeof(NameTable);

    for (int i = 0; i < pNameTable->numEntry; i++) {
        int len = (pData[0] << 8) + pData[1];
        pData += sizeof(u16);

        char* pName = reinterpret_cast<char*>(pData);
        pData += len;

        u32 offset =
            (pData[0] << 24) + (pData[1] << 16) + (pData[2] << 8) + pData[3];
        pData += sizeof(u32);

        // Skip size
        pData += sizeof(u32);

        if (std::strcmp(pEffName, pName) == 0) {
            return reinterpret_cast<EmitterResource*>(
                reinterpret_cast<u8*>(pNameTable) + offset);
        }
    }

    return NULL;
}

EmitterResource* breffIndexOf(EffectProject* pEffProject, u16 idx) {
    u8* pPtr = reinterpret_cast<u8*>(pEffProject);
    pPtr += pEffProject->headersize;

    u8* pData = pPtr;
    NameTable* pNameTable = reinterpret_cast<NameTable*>(pPtr);

    if (idx >= pNameTable->numEntry) {
        return NULL;
    }

    pData += sizeof(NameTable);

    for (int i = 0; i < pNameTable->numEntry; i++) {
        int len = (pData[0] << 8) + pData[1];
        pData += sizeof(u16);

        char* pEffName = reinterpret_cast<char*>(pData);
        pData += len;

        u32 offset =
            (pData[0] << 24) + (pData[1] << 16) + (pData[2] << 8) + pData[3];
        pData += sizeof(u32);

        // Skip size
        pData += sizeof(u32);

        if (i == idx) {
            return reinterpret_cast<EmitterResource*>(
                reinterpret_cast<u8*>(pNameTable) + offset);
        }
    }

    return NULL;
}

// breftRelocate__Q24nw4r2efFPQ34nw4r2ef14TextureProject: definicion C reemplazada por asm (ver abajo)


TextureData* breftSearchName(TextureProject* pTexProject,
                                    const char* pTexName) {

    u8* pPtr = reinterpret_cast<u8*>(pTexProject);
    pPtr += pTexProject->headersize;

    u8* pData = pPtr;
    NameTable* pNameTable = reinterpret_cast<NameTable*>(pPtr);

    pData += sizeof(NameTable);

    for (int i = 0; i < pNameTable->numEntry; i++) {
        int len = (pData[0] << 8) + pData[1];
        pData += sizeof(u16);

        char* pName = reinterpret_cast<char*>(pData);
        pData += len;

        u32 offset =
            (pData[0] << 24) + (pData[1] << 16) + (pData[2] << 8) + pData[3];
        pData += sizeof(u32);

        // Skip size
        pData += sizeof(u32);

        if (std::strcmp(pTexName, pName) == 0) {
            return reinterpret_cast<TextureData*>(
                reinterpret_cast<u8*>(pNameTable) + offset);
        }
    }

    return NULL;
}

/******************************************************************************
 *
 * Resource interface
 *
 ******************************************************************************/
EffectProject* Resource::Add(u8* pData) {
    u8* pPtr = pData;

    FileHeader* pFileHeader = reinterpret_cast<FileHeader*>(pPtr);
    pPtr += pFileHeader->headersize;

    BlockHeader* pBlockHeader = reinterpret_cast<BlockHeader*>(pPtr);
    pPtr += sizeof(BlockHeader);

    EffectProject* pEffProject = reinterpret_cast<EffectProject*>(pPtr);

    memset(&pEffProject->projectlink, 0, sizeof(ut::Link));
    ut::List_Append(&mBREFFList, pEffProject);

    mNumEmitter += breffNumEmitter(pEffProject);
    breffRelocate(pEffProject);

    return pEffProject;
}

// FindEmitter__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef13EffectProject: definicion C reemplazada por asm (ver abajo)


// _FindEmitter__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef13EffectProject: definicion C reemplazada por asm (ver abajo)


// FindTexture__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef14TextureProject: definicion C reemplazada por asm (ver abajo)


// _FindTexture__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef14TextureProject: definicion C reemplazada por asm (ver abajo)


// NumEmitter__Q34nw4r2ef8ResourceCFPQ34nw4r2ef13EffectProject: definicion C reemplazada por asm (ver abajo)


// _GetEmitterIndexOf__Q34nw4r2ef8ResourceCFUlPQ34nw4r2ef13EffectProject: definicion C reemplazada por asm (ver abajo)


// AddTexture__Q34nw4r2ef8ResourceFPUc: definicion C reemplazada por asm (ver abajo)


// relocateCurveTexture__Q34nw4r2ef8ResourceFPUc: definicion C reemplazada por asm (ver abajo)


u32 Resource::relocateCurveChild(u8* pCmdList) {
    u32 error = 0;

    AnimCurveHeader* pHeader = reinterpret_cast<AnimCurveHeader*>(pCmdList);

    AnimCurveKey* pKey = reinterpret_cast<AnimCurveKey*>(
        reinterpret_cast<u8*>(pHeader) + sizeof(AnimCurveHeader));

    AnimCurveRandom* pRandom = reinterpret_cast<AnimCurveRandom*>(
        reinterpret_cast<u8*>(pKey) + pHeader->keyTable);

    AnimCurveRandomTable* pRandomTable =
        reinterpret_cast<AnimCurveRandomTable*>(reinterpret_cast<u8*>(pRandom) +
                                                pHeader->rangeTable);

    AnimCurveNameTable* pNameTable = reinterpret_cast<AnimCurveNameTable*>(
        reinterpret_cast<u8*>(pRandomTable) + pHeader->randomTable);

    u8* pName = reinterpret_cast<u8*>(pNameTable) +
                offsetof(AnimCurveNameTable, datas) +
                pNameTable->count * sizeof(AnimCurveNameTable::Name);

    for (int i = 0; i < pNameTable->count; i++) {
        int size = *reinterpret_cast<u16*>(pName);
        pName += sizeof(u16);

        pNameTable->datas[i].work = reinterpret_cast<u32>(
            _FindEmitter(reinterpret_cast<char*>(pName), NULL));

        if (pNameTable->datas[i].work == 0) {
            error++;
        }

        pName += size;
    }

    return error;
}

u32 Resource::RelocateCommand() {
    u32 error = 0;

    for (u32 idx = 0; idx < NumEmitter(NULL); idx++) {
        EmitterResource* pResource = _GetEmitterIndexOf(idx, NULL);
        if (pResource == NULL) {
            continue;
        }

        ParticleParameterDesc* pPtclDesc =
            pResource->GetParticleParameterDesc();
        TextureData** ppWork = pPtclDesc->mTexture;
        u8* pPtr = pPtclDesc->textureNames;

        for (int i = 0; i < TEX_LAYER_MAX; i++) {
            u16 size = *reinterpret_cast<u16*>(pPtr);
            pPtr += sizeof(u16);

            ppWork[i] = _FindTexture(reinterpret_cast<char*>(pPtr), NULL);

            if (pPtr[0] != 0 && ppWork[i] == NULL) {
                error++;
            }

            pPtr += size;
        }

        for (u16 pidx = 0; pidx < pResource->NumPtclTrack(); pidx++) {
            u8* pPtr = pResource->GetPtclTrack(pidx);

#define pTrackAsHeader reinterpret_cast<AnimCurveHeader*>(pPtr)

            if (pTrackAsHeader->magic != NW4R_EF_MAGIC_ANIMCURVE) {
                continue;
            }

            // Load curveFlag and kindEnable
            u16 ctrl = *reinterpret_cast<u16*>(&pTrackAsHeader->curveFlag);

            switch (ctrl) {
            case (AC_TYPE_PARTICLE_TEXTURE << 8 | 0b001): {
                error += relocateCurveTexture(pPtr);
                break;
            }

            case (AC_TYPE_CHILD << 8 | 0b001): {
                error += relocateCurveChild(pPtr);
                break;
            }

            case (AC_TYPE_PARTICLE_U8 << 8 | 0b111):
            case (AC_TYPE_PARTICLE_F32 << 8 | 0b011): {
                break;
            }
            }

#undef pTrackAsHeader
        }
    }

    return error;
}

bool Resource::RemoveEffectProject(EffectProject* pEffProject) {
    EffectProject* pIt =
        static_cast<EffectProject*>(ut::List_GetFirst(&mBREFFList));

    for (; pIt != NULL; pIt = static_cast<EffectProject*>(
                            ut::List_GetNext(&mBREFFList, pIt))) {

        if (pIt != pEffProject) {
            continue;
        }

        ut::List_Remove(&mBREFFList, pEffProject);

        mNumEmitter -=
            pEffProject != NULL ? breffNumEmitter(pEffProject) : mNumEmitter;

        return true;
    }

    return false;
}

bool Resource::RemoveTextureProject(TextureProject* pTexProject) {
    TextureProject* pIt =
        static_cast<TextureProject*>(ut::List_GetFirst(&mBREFTList));

    for (; pIt != NULL; pIt = static_cast<TextureProject*>(
                            ut::List_GetNext(&mBREFTList, pIt))) {

        if (pIt != pTexProject) {
            continue;
        }

        ut::List_Remove(&mBREFTList, pTexProject);

        mNumTexture -=
            pTexProject != NULL ? breftNumTexture(pTexProject) : mNumTexture;

        return true;
    }

    return false;
}

} // namespace ef
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" u8 lbl_803E5EA0[];
extern "C" void AddTexture__Q34nw4r2ef8ResourceFPUc();
extern "C" void FindEmitter__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef13EffectProject();
extern "C" void FindTexture__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef14TextureProject();
extern "C" void GetInstance__Q34nw4r2ef8ResourceFv();
extern "C" void Initialize__Q34nw4r2ef8ResourceFv();
extern "C" void List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv();
extern "C" void List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv();
extern "C" void List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv();
extern "C" void List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv();
extern "C" void NumEmitter__Q34nw4r2ef8ResourceCFPQ34nw4r2ef13EffectProject();
extern "C" void _FindEmitter__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef13EffectProject();
extern "C" void _FindTexture__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef14TextureProject();
extern "C" void _GetEmitterIndexOf__Q34nw4r2ef8ResourceCFUlPQ34nw4r2ef13EffectProject();
extern "C" void __ct__Q34nw4r2ef8ResourceFv();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void breffIndexOf__Q24nw4r2efFPQ34nw4r2ef13EffectProjectUs();
extern "C" void breffSearchName__Q24nw4r2efFPQ34nw4r2ef13EffectProjectPCc();
extern "C" void breftRelocate__Q24nw4r2efFPQ34nw4r2ef14TextureProject();
extern "C" void breftSearchName__Q24nw4r2efFPQ34nw4r2ef14TextureProjectPCc();
extern "C" void relocateCurveTexture__Q34nw4r2ef8ResourceFPUc();

// asm_to_cpp: GetInstance__Q34nw4r2ef8ResourceFv
extern "C" asm void GetInstance__Q34nw4r2ef8ResourceFv() {
    nofralloc
    lwz r0, 0x24(r4)
    stw r0, 0x0(r3)
    blr
}

// asm_to_cpp: __ct__Q34nw4r2ef8ResourceFv
extern "C" asm void __ct__Q34nw4r2ef8ResourceFv() {
    nofralloc
    blr
}

// asm_to_cpp: Initialize__Q34nw4r2ef8ResourceFv
extern "C" asm void Initialize__Q34nw4r2ef8ResourceFv() {
    nofralloc
    lis r3, lbl_803E5EA0@ha
    addi r3, r3, lbl_803E5EA0@l
    blr
}

// asm_to_cpp: breftRelocate__Q24nw4r2efFPQ34nw4r2ef14TextureProject
extern "C" asm void breftRelocate__Q24nw4r2efFPQ34nw4r2ef14TextureProject() {
    nofralloc
    lwz r0, 0x0(r3)
    li r9, 0x0
    add r7, r3, r0
    addi r8, r7, 0x8
    b lbl_801B89A4
lbl_801B893C:
    lbz r3, 0x0(r8)
    addi r9, r9, 0x1
    lbz r0, 0x1(r8)
    addi r8, r8, 0x2
    slwi r3, r3, 8
    add r0, r3, r0
    mr r10, r8
    add r8, r8, r0
    lbz r4, 0x2(r8)
    lbz r0, 0x1(r8)
    lbz r3, 0x0(r8)
    slwi r5, r4, 8
    lbz r6, 0x3(r8)
    slwi r0, r0, 16
    slwi r4, r3, 24
    addi r8, r8, 0x8
    add r3, r6, r5
    add r0, r4, r0
    add r0, r3, r0
    add r4, r7, r0
    stwx r10, r7, r0
    addi r3, r4, 0x40
    stw r3, 0x1c(r4)
    lwz r0, 0x8(r4)
    add r0, r3, r0
    stw r0, 0x20(r4)
lbl_801B89A4:
    lhz r0, 0x4(r7)
    cmpw r9, r0
    blt lbl_801B893C
    blr
}

// asm_to_cpp: FindEmitter__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef13EffectProject
extern "C" asm void FindEmitter__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef13EffectProject() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_801B8B28
    mr r3, r31
    bl breffSearchName__Q24nw4r2efFPQ34nw4r2ef13EffectProjectPCc
    cmpwi r3, 0x0
    beq lbl_801B8B28
    b lbl_801B8B70
lbl_801B8B28:
    mr r3, r29
    li r4, 0x0
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r31, r3
    b lbl_801B8B64
lbl_801B8B3C:
    mr r3, r31
    mr r4, r30
    bl breffSearchName__Q24nw4r2efFPQ34nw4r2ef13EffectProjectPCc
    cmpwi r3, 0x0
    beq lbl_801B8B54
    b lbl_801B8B70
lbl_801B8B54:
    mr r3, r29
    mr r4, r31
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r31, r3
lbl_801B8B64:
    cmpwi r31, 0x0
    bne lbl_801B8B3C
    li r3, 0x0
lbl_801B8B70:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: _FindEmitter__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef13EffectProject
extern "C" asm void _FindEmitter__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef13EffectProject() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lhz r0, 0xc(r4)
    add r3, r4, r0
    li r4, 0x0
    addi r31, r3, 0x8
    addi r3, r31, 0x4
    bl memset
    mr r4, r31
    addi r3, r30, 0x10
    bl List_Append__Q24nw4r2utFPQ34nw4r2ut4ListPv
    lwz r0, 0x0(r31)
    mr r3, r31
    lwz r4, 0x1c(r30)
    add r5, r31, r0
    lhz r0, 0x4(r5)
    add r0, r4, r0
    stw r0, 0x1c(r30)
    bl breftRelocate__Q24nw4r2efFPQ34nw4r2ef14TextureProject
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: FindTexture__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef14TextureProject
extern "C" asm void FindTexture__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef14TextureProject() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r6, 0xc(r4)
    mr r30, r3
    lwz r0, 0x18(r4)
    li r31, 0x0
    lwz r5, 0x10(r4)
    add r6, r4, r6
    cmpwi r0, 0x0
    lwz r3, 0x14(r4)
    add r0, r6, r5
    add r3, r0, r3
    addi r27, r3, 0x20
    bne lbl_801B8C54
    li r3, 0x0
    b lbl_801B8D10
lbl_801B8C54:
    lhz r0, 0x0(r27)
    mr r28, r27
    li r25, 0x0
    slwi r0, r0, 2
    add r3, r27, r0
    addi r26, r3, 0x4
    b lbl_801B8D00
lbl_801B8C70:
    lbz r0, 0x2(r26)
    lhz r24, 0x0(r26)
    addi r26, r26, 0x2
    extsb. r0, r0
    bne lbl_801B8C8C
    li r3, 0x0
    b lbl_801B8CD4
lbl_801B8C8C:
    addi r3, r30, 0x10
    li r4, 0x0
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r29, r3
    b lbl_801B8CC8
lbl_801B8CA0:
    mr r3, r29
    mr r4, r26
    bl breftSearchName__Q24nw4r2efFPQ34nw4r2ef14TextureProjectPCc
    cmpwi r3, 0x0
    beq lbl_801B8CB8
    b lbl_801B8CD4
lbl_801B8CB8:
    mr r4, r29
    addi r3, r30, 0x10
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r29, r3
lbl_801B8CC8:
    cmpwi r29, 0x0
    bne lbl_801B8CA0
    li r3, 0x0
lbl_801B8CD4:
    stw r3, 0x4(r28)
    lbz r0, 0x0(r26)
    cmpwi r0, 0x0
    beq lbl_801B8CF4
    lwz r0, 0x4(r28)
    cmpwi r0, 0x0
    bne lbl_801B8CF4
    addi r31, r31, 0x1
lbl_801B8CF4:
    add r26, r26, r24
    addi r28, r28, 0x4
    addi r25, r25, 0x1
lbl_801B8D00:
    lhz r0, 0x0(r27)
    cmpw r25, r0
    blt lbl_801B8C70
    mr r3, r31
lbl_801B8D10:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: _FindTexture__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef14TextureProject
extern "C" asm void _FindTexture__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef14TextureProject() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r6, 0xc(r4)
    mr r31, r3
    lwz r0, 0x18(r4)
    li r28, 0x0
    lwz r5, 0x10(r4)
    add r6, r4, r6
    cmpwi r0, 0x0
    lwz r3, 0x14(r4)
    add r0, r6, r5
    add r3, r0, r3
    addi r27, r3, 0x20
    bne lbl_801B8D74
    li r3, 0x0
    b lbl_801B8E0C
lbl_801B8D74:
    lhz r0, 0x0(r27)
    mr r29, r27
    li r25, 0x0
    slwi r0, r0, 2
    add r3, r27, r0
    addi r26, r3, 0x4
    b lbl_801B8DFC
lbl_801B8D90:
    lhz r24, 0x0(r26)
    mr r3, r31
    li r4, 0x0
    addi r26, r26, 0x2
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r30, r3
    b lbl_801B8DD4
lbl_801B8DAC:
    mr r3, r30
    mr r4, r26
    bl breffSearchName__Q24nw4r2efFPQ34nw4r2ef13EffectProjectPCc
    cmpwi r3, 0x0
    beq lbl_801B8DC4
    b lbl_801B8DE0
lbl_801B8DC4:
    mr r3, r31
    mr r4, r30
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r30, r3
lbl_801B8DD4:
    cmpwi r30, 0x0
    bne lbl_801B8DAC
    li r3, 0x0
lbl_801B8DE0:
    cmpwi r3, 0x0
    stw r3, 0x4(r29)
    bne lbl_801B8DF0
    addi r28, r28, 0x1
lbl_801B8DF0:
    add r26, r26, r24
    addi r29, r29, 0x4
    addi r25, r25, 0x1
lbl_801B8DFC:
    lhz r0, 0x0(r27)
    cmpw r25, r0
    blt lbl_801B8D90
    mr r3, r28
lbl_801B8E0C:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: NumEmitter__Q34nw4r2ef8ResourceCFPQ34nw4r2ef13EffectProject
extern "C" asm void NumEmitter__Q34nw4r2ef8ResourceCFPQ34nw4r2ef13EffectProject() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    mr r26, r3
    li r30, 0x0
    li r29, 0x0
    b lbl_801B9040
lbl_801B8E48:
    mr r27, r29
    mr r3, r26
    li r28, 0x0
    li r4, 0x0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r4, r3
    b lbl_801B8E9C
lbl_801B8E64:
    lwz r0, 0x0(r4)
    add r3, r4, r0
    lhz r0, 0x4(r3)
    cmplw r27, r0
    bge lbl_801B8E8C
    mr r3, r4
    clrlwi r4, r27, 16
    bl breffIndexOf__Q24nw4r2efFPQ34nw4r2ef13EffectProjectUs
    mr r31, r3
    b lbl_801B8EA8
lbl_801B8E8C:
    mr r3, r26
    subf r27, r0, r27
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r4, r3
lbl_801B8E9C:
    cmpwi r4, 0x0
    bne lbl_801B8E64
    li r31, 0x0
lbl_801B8EA8:
    cmpwi r31, 0x0
    beq lbl_801B903C
    lwz r0, 0x4(r31)
    li r23, 0x0
    add r3, r0, r31
    addi r24, r3, 0x94
    addi r25, r3, 0x74
lbl_801B8EC4:
    lbz r0, 0x2(r24)
    lhz r22, 0x0(r24)
    addi r24, r24, 0x2
    extsb. r0, r0
    bne lbl_801B8EE0
    li r3, 0x0
    b lbl_801B8F28
lbl_801B8EE0:
    addi r3, r26, 0x10
    li r4, 0x0
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r27, r3
    b lbl_801B8F1C
lbl_801B8EF4:
    mr r3, r27
    mr r4, r24
    bl breftSearchName__Q24nw4r2efFPQ34nw4r2ef14TextureProjectPCc
    cmpwi r3, 0x0
    beq lbl_801B8F0C
    b lbl_801B8F28
lbl_801B8F0C:
    mr r4, r27
    addi r3, r26, 0x10
    bl List_GetPrev__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r27, r3
lbl_801B8F1C:
    cmpwi r27, 0x0
    bne lbl_801B8EF4
    li r3, 0x0
lbl_801B8F28:
    stw r3, 0x0(r25)
    lbz r0, 0x0(r24)
    cmpwi r0, 0x0
    beq lbl_801B8F4C
    lwz r0, 0x0(r25)
    cmpwi r0, 0x0
    bne lbl_801B8F4C
    addi r0, r28, 0x1
    clrlwi r28, r0, 24
lbl_801B8F4C:
    addi r23, r23, 0x1
    add r24, r24, r22
    cmpwi r23, 0x3
    addi r25, r25, 0x4
    blt lbl_801B8EC4
    li r27, 0x0
    b lbl_801B8FF0
lbl_801B8F68:
    lwzx r3, r31, r5
    add r4, r31, r5
    clrlslwi r0, r27, 16, 2
    add r3, r3, r4
    addi r3, r3, 0x4
    add r3, r3, r0
    lwz r4, 0x4(r3)
    lbz r3, 0x0(r4)
    addi r0, r3, 0x55
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_801B8FEC
    lbz r0, 0x2(r4)
    cmpwi r0, 0x4
    beq lbl_801B8FC0
    bge lbl_801B8FB4
    cmpwi r0, 0x2
    beq lbl_801B8FD8
    b lbl_801B8FEC
lbl_801B8FB4:
    cmpwi r0, 0x6
    bge lbl_801B8FEC
    b lbl_801B8FD8
lbl_801B8FC0:
    mr r3, r26
    mr r5, r31
    bl FindTexture__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef14TextureProject
    add r0, r28, r3
    clrlwi r28, r0, 24
    b lbl_801B8FEC
lbl_801B8FD8:
    mr r3, r26
    mr r5, r31
    bl _FindTexture__Q34nw4r2ef8ResourceCFPCcPQ34nw4r2ef14TextureProject
    add r0, r28, r3
    clrlwi r28, r0, 24
lbl_801B8FEC:
    addi r27, r27, 0x1
lbl_801B8FF0:
    lwz r4, 0x4(r31)
    clrlwi r3, r27, 16
    addi r5, r4, 0x8
    lwzx r0, r31, r5
    add r4, r31, r5
    add r4, r0, r4
    lhz r0, 0x4(r4)
    cmplw r3, r0
    blt lbl_801B8F68
    cmpwi r28, 0x0
    beq lbl_801B902C
    lwz r0, 0x8(r31)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0x8(r31)
    b lbl_801B9038
lbl_801B902C:
    lwz r0, 0x8(r31)
    oris r0, r0, 0x4000
    stw r0, 0x8(r31)
lbl_801B9038:
    add r30, r30, r28
lbl_801B903C:
    addi r29, r29, 0x1
lbl_801B9040:
    lwz r0, 0xc(r26)
    cmplw r29, r0
    blt lbl_801B8E48
    addi r11, r1, 0x30
    mr r3, r30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: _GetEmitterIndexOf__Q34nw4r2ef8ResourceCFUlPQ34nw4r2ef13EffectProject
extern "C" asm void _GetEmitterIndexOf__Q34nw4r2ef8ResourceCFUlPQ34nw4r2ef13EffectProject() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r4, r3
    b lbl_801B90E4
lbl_801B9094:
    cmplw r4, r31
    bne lbl_801B90D8
    mr r3, r30
    mr r4, r31
    bl List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv
    cmpwi r31, 0x0
    beq lbl_801B90C0
    lwz r0, 0x0(r31)
    add r3, r31, r0
    lhz r4, 0x4(r3)
    b lbl_801B90C4
lbl_801B90C0:
    lwz r4, 0xc(r30)
lbl_801B90C4:
    lwz r0, 0xc(r30)
    li r3, 0x1
    subf r0, r4, r0
    stw r0, 0xc(r30)
    b lbl_801B90F0
lbl_801B90D8:
    mr r3, r30
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r4, r3
lbl_801B90E4:
    cmpwi r4, 0x0
    bne lbl_801B9094
    li r3, 0x0
lbl_801B90F0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: AddTexture__Q34nw4r2ef8ResourceFPUc
extern "C" asm void AddTexture__Q34nw4r2ef8ResourceFPUc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    b lbl_801B9138
lbl_801B9120:
    mr r3, r31
    li r4, 0x0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    mr r4, r3
    mr r3, r31
    bl List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv
lbl_801B9138:
    mr r3, r31
    li r4, 0x0
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    cmpwi r3, 0x0
    bne lbl_801B9120
    li r0, 0x0
    li r3, 0x1
    stw r0, 0xc(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: relocateCurveTexture__Q34nw4r2ef8ResourceFPUc
extern "C" asm void relocateCurveTexture__Q34nw4r2ef8ResourceFPUc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x10
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
    b lbl_801B91E8
lbl_801B9198:
    cmplw r3, r31
    bne lbl_801B91DC
    mr r4, r31
    addi r3, r30, 0x10
    bl List_Remove__Q24nw4r2utFPQ34nw4r2ut4ListPv
    cmpwi r31, 0x0
    beq lbl_801B91C4
    lwz r0, 0x0(r31)
    add r3, r31, r0
    lhz r4, 0x4(r3)
    b lbl_801B91C8
lbl_801B91C4:
    lwz r4, 0x1c(r30)
lbl_801B91C8:
    lwz r0, 0x1c(r30)
    li r3, 0x1
    subf r0, r4, r0
    stw r0, 0x1c(r30)
    b lbl_801B91F4
lbl_801B91DC:
    mr r4, r3
    addi r3, r30, 0x10
    bl List_GetNext__Q24nw4r2utFPCQ34nw4r2ut4ListPCv
lbl_801B91E8:
    cmpwi r3, 0x0
    bne lbl_801B9198
    li r3, 0x0
lbl_801B91F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
