#include <nw4r/snd.h>
#include <nw4r/ut.h>

#include <cstring>

namespace nw4r {
namespace snd {

SoundArchive::SoundArchive() : mFileReader(NULL) {
    mExtFileRoot[0] = '/';
    mExtFileRoot[1] = '\0';
}

SoundArchive::~SoundArchive() {}

bool SoundArchive::IsAvailable() const {
    return mFileReader;
}

void SoundArchive::Setup(detail::SoundArchiveFileReader* pReader) {
    mFileReader = pReader;
}

void SoundArchive::Shutdown() {
    mFileReader = NULL;
    mExtFileRoot[0] = '/';
    mExtFileRoot[1] = '\0';
}

u32 SoundArchive::GetPlayerCount() const {
    return mFileReader->GetPlayerCount();
}

u32 SoundArchive::GetGroupCount() const {
    return mFileReader->GetGroupCount();
}

const char* SoundArchive::GetSoundLabelString(u32 id) const {
    return mFileReader->GetSoundLabelString(id);
}

u32 SoundArchive::ConvertLabelStringToSoundId(const char* pLabel) const {
    return mFileReader->ConvertLabelStringToSoundId(pLabel);
}

u32 SoundArchive::ConvertLabelStringToPlayerId(const char* pLabel) const {
    return mFileReader->ConvertLabelStringToPlayerId(pLabel);
}

u32 SoundArchive::ConvertLabelStringToGroupId(const char* pLabel) const {
    return mFileReader->ConvertLabelStringToGroupId(pLabel);
}

u32 SoundArchive::GetSoundUserParam(u32 id) const {
    return mFileReader->GetSoundUserParam(id);
}

SoundType SoundArchive::GetSoundType(u32 id) const {
    return mFileReader->GetSoundType(id);
}

bool SoundArchive::ReadSoundInfo(u32 id, SoundInfo* pInfo) const {
    return mFileReader->ReadSoundInfo(id, pInfo);
}

bool SoundArchive::detail_ReadSeqSoundInfo(u32 id, SeqSoundInfo* pInfo) const {
    return mFileReader->ReadSeqSoundInfo(id, pInfo);
}

bool SoundArchive::detail_ReadStrmSoundInfo(u32 id,
                                            StrmSoundInfo* pInfo) const {
    return mFileReader->ReadStrmSoundInfo(id, pInfo);
}

bool SoundArchive::detail_ReadWaveSoundInfo(u32 id,
                                            WaveSoundInfo* pInfo) const {
    return mFileReader->ReadWaveSoundInfo(id, pInfo);
}

bool SoundArchive::ReadPlayerInfo(u32 id, PlayerInfo* pInfo) const {
    return mFileReader->ReadPlayerInfo(id, pInfo);
}

bool SoundArchive::ReadSoundArchivePlayerInfo(
    SoundArchivePlayerInfo* pInfo) const {
    return mFileReader->ReadSoundArchivePlayerInfo(pInfo);
}

bool SoundArchive::detail_ReadSound3DParam(u32 id, Sound3DParam* pParam) const {
    return mFileReader->ReadSound3DParam(id, pParam);
}

bool SoundArchive::detail_ReadBankInfo(u32 id, BankInfo* pInfo) const {
    return mFileReader->ReadBankInfo(id, pInfo);
}

bool SoundArchive::detail_ReadGroupInfo(u32 id, GroupInfo* pInfo) const {
    return mFileReader->ReadGroupInfo(id, pInfo);
}

bool SoundArchive::detail_ReadGroupItemInfo(u32 groupId, u32 itemId,
                                            GroupItemInfo* pInfo) const {
    return mFileReader->ReadGroupItemInfo(groupId, itemId, pInfo);
}

bool SoundArchive::detail_ReadFileInfo(u32 id, FileInfo* pInfo) const {
    return mFileReader->ReadFileInfo(id, pInfo);
}

bool SoundArchive::detail_ReadFilePos(u32 fileId, u32 posId,
                                      FilePos* pPos) const {
    return mFileReader->ReadFilePos(fileId, posId, pPos);
}

// detail_OpenFileStream__Q34nw4r3snd12SoundArchiveCFUlPvi: definicion C reemplazada por asm (ver abajo)


ut::FileStream* SoundArchive::detail_OpenGroupStream(u32 id, void* pBuffer,
                                                     int bufferSize) const {
    GroupInfo groupInfo;
    if (!detail_ReadGroupInfo(id, &groupInfo)) {
        return NULL;
    }

    if (groupInfo.extFilePath != NULL) {
        return OpenExtStreamImpl(pBuffer, bufferSize, groupInfo.extFilePath,
                                 groupInfo.offset, groupInfo.size);
    }

    return OpenStream(pBuffer, bufferSize, groupInfo.offset, groupInfo.size);
}

ut::FileStream*
SoundArchive::detail_OpenGroupWaveDataStream(u32 id, void* pBuffer,
                                             int bufferSize) const {
    GroupInfo groupInfo;
    if (!detail_ReadGroupInfo(id, &groupInfo)) {
        return NULL;
    }

    if (groupInfo.extFilePath != NULL) {
        return OpenExtStreamImpl(pBuffer, bufferSize, groupInfo.extFilePath,
                                 groupInfo.waveDataOffset,
                                 groupInfo.waveDataSize);
    }

    return OpenStream(pBuffer, bufferSize, groupInfo.waveDataOffset,
                      groupInfo.waveDataSize);
}

ut::FileStream* SoundArchive::OpenExtStreamImpl(void* pBuffer, int bufferSize,
                                                const char* pExtPath,
                                                u32 offset, u32 size) const {
    char pathBuffer[FILE_PATH_MAX];
    const char* pFullPath;

    if (pExtPath[0] == '/') {
        pFullPath = pExtPath;
    } else {
        u32 fileLen = std::strlen(pExtPath);
        u32 dirLen = std::strlen(mExtFileRoot);

        if (fileLen + dirLen >= FILE_PATH_MAX) {
            return NULL;
        }

        std::strncpy(pathBuffer, mExtFileRoot, dirLen + 1);
        std::strncat(pathBuffer, pExtPath, fileLen + 1);

        pFullPath = pathBuffer;
    }

    return OpenExtStream(pBuffer, bufferSize, pFullPath, offset, size);
}

void SoundArchive::SetExternalFileRoot(const char* pExtFileRoot) {
    u32 len = std::strlen(pExtFileRoot);
    u32 nullPos = len;

    if (pExtFileRoot[len - 1] != '/') {
        mExtFileRoot[len] = '/';
        nullPos++;
    }

    mExtFileRoot[nullPos] = '\0';

    // @bug Long path can overflow mExtFileRoot buffer
    std::strncpy(mExtFileRoot, pExtFileRoot, len);
}

} // namespace snd
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" void ReadBankInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive8BankInfo();
extern "C" void ReadFileInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive8FileInfo();
extern "C" void ReadFilePos__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlUlPQ44nw4r3snd12SoundArchive7FilePos();
extern "C" void ReadGroupInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive9GroupInfo();
extern "C" void ReadGroupItemInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlUlPQ44nw4r3snd12SoundArchive13GroupItemInfo();
extern "C" void ReadSeqSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive12SeqSoundInfo();
extern "C" void ReadStrmSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive13StrmSoundInfo();
extern "C" void _restgpr_25();
extern "C" void _savegpr_25();
extern "C" void detail_GetFileCount__Q34nw4r3snd12SoundArchiveCFv();
extern "C" void detail_OpenFileStream__Q34nw4r3snd12SoundArchiveCFUlPvi();

// asm_to_cpp: ReadSeqSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive12SeqSoundInfo
extern "C" asm void ReadSeqSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive12SeqSoundInfo() {
    nofralloc
    lwz r3, 0x4(r3)
    b ReadStrmSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive13StrmSoundInfo
}

// asm_to_cpp: ReadBankInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive8BankInfo
extern "C" asm void ReadBankInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive8BankInfo() {
    nofralloc
    lwz r3, 0x4(r3)
    b ReadGroupInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive9GroupInfo
}

// asm_to_cpp: detail_GetFileCount__Q34nw4r3snd12SoundArchiveCFv
extern "C" asm void detail_GetFileCount__Q34nw4r3snd12SoundArchiveCFv() {
    nofralloc
    lwz r3, 0x4(r3)
    b ReadFileInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive8FileInfo
}

// asm_to_cpp: detail_OpenFileStream__Q34nw4r3snd12SoundArchiveCFUlPvi
extern "C" asm void detail_OpenFileStream__Q34nw4r3snd12SoundArchiveCFUlPvi() {
    nofralloc
    stwu r1, -0x270(r1)
    mflr r0
    stw r0, 0x274(r1)
    addi r11, r1, 0x270
    bl _savegpr_25
    mr r29, r3
    lwz r3, 0x4(r3)
    mr r30, r5
    mr r25, r4
    mr r31, r6
    addi r5, r1, 0x10
    bl ReadFileInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive8FileInfo
    cmpwi r3, 0x0
    bne lbl_80213870
    li r3, 0x0
    b lbl_80213A40
lbl_80213870:
    lwz r26, 0x18(r1)
    cmpwi r26, 0x0
    beq lbl_8021390C
    lbz r0, 0x0(r26)
    lwz r27, 0x10(r1)
    cmpwi r0, 0x2f
    bne lbl_80213890
    b lbl_802138E0
lbl_80213890:
    mr r3, r26
    bl strlen
    mr r28, r3
    addi r3, r29, 0x8
    bl strlen
    add r0, r28, r3
    mr r5, r3
    cmplwi r0, 0x100
    blt lbl_802138BC
    li r3, 0x0
    b lbl_80213A40
lbl_802138BC:
    addi r3, r1, 0x150
    addi r4, r29, 0x8
    addi r5, r5, 0x1
    bl strncpy
    mr r4, r26
    addi r3, r1, 0x150
    addi r5, r28, 0x1
    bl strncat
    addi r26, r1, 0x150
lbl_802138E0:
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r30
    mr r5, r31
    lwz r12, 0x1c(r12)
    mr r6, r26
    mr r8, r27
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_80213A40
lbl_8021390C:
    lwz r3, 0x4(r29)
    mr r4, r25
    addi r6, r1, 0x8
    li r5, 0x0
    bl ReadFilePos__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlUlPQ44nw4r3snd12SoundArchive7FilePos
    cmpwi r3, 0x0
    bne lbl_80213930
    li r3, 0x0
    b lbl_80213A40
lbl_80213930:
    lwz r3, 0x4(r29)
    addi r5, r1, 0x38
    lwz r4, 0x8(r1)
    bl ReadGroupInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive9GroupInfo
    cmpwi r3, 0x0
    bne lbl_80213950
    li r3, 0x0
    b lbl_80213A40
lbl_80213950:
    lwz r3, 0x4(r29)
    addi r6, r1, 0x20
    lwz r4, 0x8(r1)
    lwz r5, 0xc(r1)
    bl ReadGroupItemInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlUlPQ44nw4r3snd12SoundArchive13GroupItemInfo
    cmpwi r3, 0x0
    bne lbl_80213974
    li r3, 0x0
    b lbl_80213A40
lbl_80213974:
    lwz r26, 0x3c(r1)
    lwz r3, 0x40(r1)
    lwz r0, 0x24(r1)
    cmpwi r26, 0x0
    lwz r25, 0x28(r1)
    add r27, r3, r0
    beq lbl_80213A1C
    lbz r0, 0x0(r26)
    cmpwi r0, 0x2f
    bne lbl_802139A0
    b lbl_802139F0
lbl_802139A0:
    mr r3, r26
    bl strlen
    mr r28, r3
    addi r3, r29, 0x8
    bl strlen
    add r0, r28, r3
    mr r5, r3
    cmplwi r0, 0x100
    blt lbl_802139CC
    li r3, 0x0
    b lbl_80213A40
lbl_802139CC:
    addi r3, r1, 0x50
    addi r4, r29, 0x8
    addi r5, r5, 0x1
    bl strncpy
    mr r4, r26
    addi r3, r1, 0x50
    addi r5, r28, 0x1
    bl strncat
    addi r26, r1, 0x50
lbl_802139F0:
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r30
    mr r5, r31
    lwz r12, 0x1c(r12)
    mr r6, r26
    mr r7, r27
    mr r8, r25
    mtctr r12
    bctrl
    b lbl_80213A40
lbl_80213A1C:
    lwz r12, 0x0(r29)
    mr r3, r29
    mr r4, r30
    mr r5, r31
    lwz r12, 0x18(r12)
    mr r6, r27
    mr r7, r25
    mtctr r12
    bctrl
lbl_80213A40:
    addi r11, r1, 0x270
    bl _restgpr_25
    lwz r0, 0x274(r1)
    mtlr r0
    addi r1, r1, 0x270
    blr
}
