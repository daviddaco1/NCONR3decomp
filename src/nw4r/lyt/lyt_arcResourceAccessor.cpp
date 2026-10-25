#include <nw4r/lyt.h>

#include <revolution/ARC.h>

#include <cstring>

/******************************************************************************
 *
 * Utility functions
 *
 ******************************************************************************/
namespace {

s32 FindNameResource(ARCHandle* pHandle, const char* pName) {
    s32 entrynum = -1;

    ARCDir dir;
    ARCOpenDir(pHandle, ".", &dir);

    ARCDirEntry ent;
    while (ARCReadDir(&dir, &ent)) {
        if (ent.isDir) {
            ARCChangeDir(pHandle, ent.name);
            entrynum = FindNameResource(pHandle, pName);
            ARCChangeDir(pHandle, "..");

            if (entrynum != -1) {
                break;
            }
        } else {
            if (std::stricmp(pName, ent.name) == 0) {
                entrynum = ent.entryNum;
                break;
            }
        }
    }

    ARCCloseDir(&dir);
    return entrynum;
}

void* GetResourceSub(ARCHandle* pHandle, const char* pRootDir, u32 type,
                     const char* pName, unsigned long* pSize) {

    s32 entrynum = -1;

    if (ARCConvertPathToEntrynum(pHandle, pRootDir) != -1) {
        if (ARCChangeDir(pHandle, pRootDir)) {
            if (type == 0) {
                entrynum = FindNameResource(pHandle, pName);
            } else {
                char resDir[4 + 1];
                resDir[0] = type >> 24;
                resDir[1] = type >> 16;
                resDir[2] = type >> 8;
                resDir[3] = type >> 0;
                resDir[4] = '\0';

                if (ARCConvertPathToEntrynum(pHandle, resDir) != -1 &&
                    ARCChangeDir(pHandle, resDir)) {

                    entrynum = ARCConvertPathToEntrynum(pHandle, pName);
                    ARCChangeDir(pHandle, "..");
                }
            }

            ARCChangeDir(pHandle, "..");
        }
    }

    if (entrynum != -1) {
        ARCFileInfo info;
        ARCFastOpen(pHandle, entrynum, &info);

        void* pResource = ARCGetStartAddrInMem(&info);

        if (pSize != NULL) {
            *pSize = ARCGetLength(&info);
        }

        ARCClose(&info);
        return pResource;
    }

    return NULL;
}

} // namespace

namespace nw4r {
namespace lyt {

/******************************************************************************
 *
 * Implementation details
 *
 ******************************************************************************/
namespace detail {

ut::Font* FindFont(FontRefLinkList* pFontList, const char* pName) {
    NW4R_UT_LINKLIST_FOREACH (it, *pFontList, {
        if (std::strcmp(pName, it->GetFontName()) == 0) {
            return it->GetFont();
        }
    })

    return NULL;
}

} // namespace detail

/******************************************************************************
 *
 * ArcResourceAccessor
 *
 ******************************************************************************/
ArcResourceAccessor::ArcResourceAccessor() : mArcBuf(NULL) {}

bool ArcResourceAccessor::Attach(void* pArchive, const char* pRootDir) {
    BOOL success = ARCInitHandle(pArchive, &mArcHandle);
    if (!success) {
        return false;
    }

    mArcBuf = pArchive;

    std::strncpy(mResRootDir, pRootDir, ROOTPATH_MAX - 1);
    mResRootDir[ROOTPATH_MAX - 1] = '\0';

    return true;
}

void* ArcResourceAccessor::Detach() {
    void *old = mArcBuf;
    mArcBuf = NULL;
        
    return old;
}

void* ArcResourceAccessor::GetResource(u32 type, const char* pName,
                                       u32* pSize) {

    return GetResourceSub(&mArcHandle, mResRootDir, type, pName, pSize);
}

ut::Font* ArcResourceAccessor::GetFont(const char* pName) {
    return detail::FindFont(&mFontList, pName);
}

} // namespace lyt
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049C518;
extern "C" float lbl_8049C51C;
extern "C" void _restgpr_26();
extern "C" void _savegpr_26();
extern "C" void fn_802005F8();
extern "C" void fn_802006C4();
extern "C" void fn_8029B4EC();
extern "C" void fn_8029B968();

// asm_to_cpp: fn_802005F8
extern "C" asm void fn_802005F8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r5, r1, 0x18
    stw r31, 0x3c(r1)
    li r31, -0x1
    stw r30, 0x38(r1)
    mr r30, r4
    la r4, lbl_8049C518
    stw r29, 0x34(r1)
    mr r29, r3
    bl ARCOpenDir
    b lbl_80200688
lbl_8020062C:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_8020066C
    lwz r4, 0x14(r1)
    mr r3, r29
    bl ARCChangeDir
    mr r3, r29
    mr r4, r30
    bl fn_802005F8
    mr r31, r3
    mr r3, r29
    la r4, lbl_8049C51C
    bl ARCChangeDir
    cmpwi r31, -0x1
    bne lbl_8020069C
    b lbl_80200688
lbl_8020066C:
    lwz r4, 0x14(r1)
    mr r3, r30
    bl stricmp
    cmpwi r3, 0x0
    bne lbl_80200688
    lwz r31, 0xc(r1)
    b lbl_8020069C
lbl_80200688:
    addi r3, r1, 0x18
    addi r4, r1, 0x8
    bl ARCReadDir
    cmpwi r3, 0x0
    bne lbl_8020062C
lbl_8020069C:
    addi r3, r1, 0x18
    bl ARCCloseDir
    mr r3, r31
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_802006C4
extern "C" asm void fn_802006C4() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    li r31, -0x1
    bl ARCConvertPathToEntrynum
    cmpwi r3, -0x1
    beq lbl_802007A0
    mr r3, r26
    mr r4, r27
    bl ARCChangeDir
    cmpwi r3, 0x0
    beq lbl_802007A0
    cmpwi r28, 0x0
    bne lbl_8020072C
    mr r3, r26
    mr r4, r29
    bl fn_802005F8
    mr r31, r3
    b lbl_80200794
lbl_8020072C:
    srwi r3, r28, 24
    srwi r6, r28, 16
    srwi r5, r28, 8
    li r0, 0x0
    stb r3, 0x8(r1)
    mr r3, r26
    addi r4, r1, 0x8
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r28, 0xb(r1)
    stb r0, 0xc(r1)
    bl ARCConvertPathToEntrynum
    cmpwi r3, -0x1
    beq lbl_80200794
    mr r3, r26
    addi r4, r1, 0x8
    bl ARCChangeDir
    cmpwi r3, 0x0
    beq lbl_80200794
    mr r3, r26
    mr r4, r29
    bl ARCConvertPathToEntrynum
    mr r31, r3
    mr r3, r26
    la r4, lbl_8049C51C
    bl ARCChangeDir
lbl_80200794:
    mr r3, r26
    la r4, lbl_8049C51C
    bl ARCChangeDir
lbl_802007A0:
    cmpwi r31, -0x1
    beq lbl_802007E8
    mr r3, r26
    mr r4, r31
    addi r5, r1, 0x10
    bl fn_8029B4EC
    addi r3, r1, 0x10
    bl fn_8029B968
    cmpwi r30, 0x0
    mr r31, r3
    beq lbl_802007D8
    addi r3, r1, 0x10
    bl ARCGetStartOffset
    stw r3, 0x0(r30)
lbl_802007D8:
    addi r3, r1, 0x10
    bl ARCGetLength
    mr r3, r31
    b lbl_802007EC
lbl_802007E8:
    li r3, 0x0
lbl_802007EC:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
