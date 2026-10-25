#include <nw4r/snd.h>
#include <nw4r/ut.h>

#include <cstring>

namespace nw4r {
namespace snd {
namespace detail {

SoundArchiveFileReader::SoundArchiveFileReader()
    : mInfo(NULL),
      mStringBase(NULL),
      mStringTable(NULL),
      mStringTreeSound(NULL),
      mStringTreePlayer(NULL),
      mStringTreeGroup(NULL),
      mStringTreeBank(NULL) {}

void SoundArchiveFileReader::Init(const void* pSoundArchiveBin) {
    if (!IsValidFileHeader(pSoundArchiveBin)) {
        return;
    }

    mHeader = *static_cast<const SoundArchiveFile::Header*>(pSoundArchiveBin);
}

bool SoundArchiveFileReader::IsValidFileHeader(const void* pSoundArchiveBin) {
    const ut::BinaryFileHeader* pFileHeader =
        static_cast<const ut::BinaryFileHeader*>(pSoundArchiveBin);

    if (pFileHeader->signature != SIGNATURE) {
        return false;
    }

    if (pFileHeader->version < NW4R_VERSION(1, 0)) {
        return false;
    }

    if (pFileHeader->version > VERSION) {
        return false;
    }

    return true;
}

void SoundArchiveFileReader::SetStringChunk(const void* pChunk, u32 size) {
#pragma unused(size)

    const SoundArchiveFile::SymbolBlock* pSymbolBlock =
        static_cast<const SoundArchiveFile::SymbolBlock*>(pChunk);

    const SoundArchiveFile::StringBlock* pStringBlock =
        &pSymbolBlock->stringBlock;

    mStringBase = pStringBlock;

    mStringTable = static_cast<const SoundArchiveFile::StringTable*>(
        GetPtrConst(mStringBase, pStringBlock->stringChunk.tableOffset));

    mStringTreeSound = static_cast<const SoundArchiveFile::StringTree*>(
        GetPtrConst(mStringBase, pStringBlock->stringChunk.soundTreeOffset));

    mStringTreePlayer = static_cast<const SoundArchiveFile::StringTree*>(
        GetPtrConst(mStringBase, pStringBlock->stringChunk.playerTreeOffset));

    mStringTreeGroup = static_cast<const SoundArchiveFile::StringTree*>(
        GetPtrConst(mStringBase, pStringBlock->stringChunk.groupTreeOffset));

    mStringTreeBank = static_cast<const SoundArchiveFile::StringTree*>(
        GetPtrConst(mStringBase, pStringBlock->stringChunk.bankTreeOffset));
}

void SoundArchiveFileReader::SetInfoChunk(const void* pChunk, u32 size) {
#pragma unused(size)

    const SoundArchiveFile::InfoBlock* pInfoBlock =
        static_cast<const SoundArchiveFile::InfoBlock*>(pChunk);

    mInfo = &pInfoBlock->info;
}

SoundType SoundArchiveFileReader::GetSoundType(u32 id) const {
    SoundType soundType;

    const SoundArchiveFile::SoundCommonTable* pTable =
        Util::GetDataRefAddress0(mInfo->soundTableRef, mInfo);

    if (pTable == NULL) {
        return SOUND_TYPE_INVALID;
    }

    if (id >= pTable->count) {
        return SOUND_TYPE_INVALID;
    }

    if (GetVersion() >= NW4R_VERSION(1, 1)) {
        const SoundArchiveFile::SoundCommonInfo* pCmnInfo =
            Util::GetDataRefAddress0(pTable->items[id], mInfo);

        if (pCmnInfo == NULL) {
            return SOUND_TYPE_INVALID;
        }

        soundType = static_cast<SoundType>(pCmnInfo->soundType);
    } else {
        soundType = static_cast<SoundType>(pTable->items[id].dataType);
    }

    switch (soundType) {
    case SOUND_TYPE_SEQ: {
        return SOUND_TYPE_SEQ;
    }

    case SOUND_TYPE_STRM: {
        return SOUND_TYPE_STRM;
    }

    case SOUND_TYPE_WAVE: {
        return SOUND_TYPE_WAVE;
    }

    default: {
        return SOUND_TYPE_INVALID;
    }
    }
}

bool SoundArchiveFileReader::ReadSoundInfo(
    u32 id, SoundArchive::SoundInfo* pSoundInfo) const {

    const SoundArchiveFile::SoundCommonInfo* pCmnInfo = impl_GetSoundInfo(id);

    if (pCmnInfo == NULL) {
        return false;
    }

    pSoundInfo->fileId = pCmnInfo->fileId;
    pSoundInfo->playerId = pCmnInfo->playerId;
    pSoundInfo->playerPriority = pCmnInfo->playerPriority;
    pSoundInfo->volume = pCmnInfo->volume;
    pSoundInfo->remoteFilter = pCmnInfo->remoteFilter;

    if (GetVersion() >= NW4R_VERSION(1, 2)) {
        pSoundInfo->panMode = static_cast<detail::PanMode>(pCmnInfo->panMode);
        pSoundInfo->panCurve =
            static_cast<detail::PanCurve>(pCmnInfo->panCurve);
    } else {
        pSoundInfo->panMode = detail::PAN_MODE_BALANCE;
        pSoundInfo->panCurve = detail::PAN_CURVE_SQRT;
    }

    return true;
}

bool SoundArchiveFileReader::ReadSound3DParam(
    u32 id, SoundArchive::Sound3DParam* pParam) const {

    const SoundArchiveFile::SoundCommonInfo* pCmnInfo = impl_GetSoundInfo(id);

    if (pCmnInfo == NULL) {
        return false;
    }

    const SoundArchiveFile::Sound3DParam* pSrc =
        Util::GetDataRefAddress0(pCmnInfo->param3dRef, mInfo);

    if (pSrc == NULL) {
        return false;
    }

    pParam->flags = pSrc->flags;
    pParam->decayCurve = pSrc->decayCurve;
    pParam->decayRatio = pSrc->decayRatio;

    return true;
}

bool SoundArchiveFileReader::ReadSeqSoundInfo(
    u32 id, SoundArchive::SeqSoundInfo* pInfo) const {

    const SoundArchiveFile::SeqSoundInfo* pSrc = impl_GetSeqSoundInfo(id);

    if (pSrc == NULL) {
        return false;
    }

    pInfo->dataOffset = pSrc->dataOffset;
    pInfo->bankId = pSrc->bankId;
    pInfo->channelPriority = pSrc->channelPriority;
    pInfo->allocTrack = pSrc->allocTrack;

    if (GetVersion() >= NW4R_VERSION(1, 3)) {
        pInfo->releasePriorityFixFlag = pSrc->releasePriorityFix;
    } else {
        pInfo->releasePriorityFixFlag = false;
    }

    return true;
}

bool SoundArchiveFileReader::ReadStrmSoundInfo(
    u32 id, SoundArchive::StrmSoundInfo* pInfo) const {
#pragma unused(pInfo)

    const SoundArchiveFile::StrmSoundInfo* pSrc = impl_GetStrmSoundInfo(id);

    if (pSrc == NULL) {
        return false;
    }

    // StrmSoundInfo is empty in this version of NW4R
    return true;
}

bool SoundArchiveFileReader::ReadWaveSoundInfo(
    u32 id, SoundArchive::WaveSoundInfo* pInfo) const {

    const SoundArchiveFile::WaveSoundInfo* pSrc = impl_GetWaveSoundInfo(id);

    if (pSrc == NULL) {
        return false;
    }

    pInfo->subNo = pSrc->subNo;
    pInfo->channelPriority = pSrc->channelPriority;

    if (GetVersion() >= NW4R_VERSION(1, 3)) {
        pInfo->releasePriorityFixFlag = pSrc->releasePriorityFix;
    } else {
        pInfo->releasePriorityFixFlag = false;
    }

    return true;
}

bool SoundArchiveFileReader::ReadBankInfo(u32 id,
                                          SoundArchive::BankInfo* pInfo) const {

    const SoundArchiveFile::BankInfo* pSrc = impl_GetBankInfo(id);

    if (pSrc == NULL) {
        return false;
    }

    pInfo->fileId = pSrc->fileId;

    return true;
}

bool SoundArchiveFileReader::ReadPlayerInfo(
    u32 id, SoundArchive::PlayerInfo* pInfo) const {

    const SoundArchiveFile::PlayerInfo* pSrc = impl_GetPlayerInfo(id);

    if (pSrc == NULL) {
        return false;
    }

    pInfo->playableSoundCount = pSrc->playableSoundCount;
    pInfo->heapSize = pSrc->heapSize;

    return true;
}

bool SoundArchiveFileReader::ReadGroupInfo(
    u32 id, SoundArchive::GroupInfo* pInfo) const {

    const SoundArchiveFile::GroupInfo* pSrc = impl_GetGroupInfo(id);

    if (pSrc == NULL) {
        return false;
    }

    const SoundArchiveFile::GroupItemTable* pTable =
        Util::GetDataRefAddress0(pSrc->itemTableRef, mInfo);

    if (pTable == NULL) {
        return false;
    }

    pInfo->extFilePath = Util::GetDataRefAddress0(pSrc->extFilePathRef, mInfo);
    pInfo->offset = pSrc->offset;
    pInfo->size = pSrc->size;
    pInfo->waveDataOffset = pSrc->waveDataOffset;
    pInfo->waveDataSize = pSrc->waveDataSize;
    pInfo->itemCount = pTable->count;

    return true;
}

bool SoundArchiveFileReader::ReadGroupItemInfo(
    u32 groupId, u32 itemId, SoundArchive::GroupItemInfo* pInfo) const {

    const SoundArchiveFile::GroupInfo* pGroup = impl_GetGroupInfo(groupId);

    if (pGroup == NULL) {
        return false;
    }

    const SoundArchiveFile::GroupItemTable* pTable =
        Util::GetDataRefAddress0(pGroup->itemTableRef, mInfo);

    if (pTable == NULL) {
        return false;
    }

    if (itemId >= pTable->count) {
        return false;
    }

    const SoundArchiveFile::GroupItemInfo* pSrc =
        Util::GetDataRefAddress0(pTable->items[itemId], mInfo);

    if (pSrc == NULL) {
        return false;
    }

    pInfo->fileId = pSrc->fileId;
    pInfo->offset = pSrc->offset;
    pInfo->size = pSrc->size;
    pInfo->waveDataOffset = pSrc->waveDataOffset;
    pInfo->waveDataSize = pSrc->waveDataSize;

    return true;
}

bool SoundArchiveFileReader::ReadSoundArchivePlayerInfo(
    SoundArchive::SoundArchivePlayerInfo* pInfo) const {

    const SoundArchiveFile::SoundArchivePlayerInfo* pSrc =
        Util::GetDataRefAddress0(mInfo->soundArchivePlayerInfoRef, mInfo);

    // @bug Doesn't check dataref result
    if (pInfo == NULL) {
        return false;
    }

    pInfo->seqSoundCount = pSrc->seqSoundCount;
    pInfo->seqTrackCount = pSrc->seqTrackCount;
    pInfo->strmSoundCount = pSrc->strmSoundCount;
    pInfo->strmTrackCount = pSrc->strmTrackCount;
    pInfo->strmChannelCount = pSrc->strmChannelCount;
    pInfo->waveSoundCount = pSrc->waveSoundCount;
    pInfo->waveTrackCount = pSrc->waveTrackCount;

    return true;
}

u32 SoundArchiveFileReader::GetSoundStringId(u32 id) const {
    const SoundArchiveFile::SoundCommonInfo* pInfo = impl_GetSoundInfo(id);

    if (pInfo == NULL) {
        return SoundArchive::INVALID_ID;
    }

    return pInfo->stringId;
}

u32 SoundArchiveFileReader::GetPlayerCount() const {
    const SoundArchiveFile::PlayerTable* pTable =
        Util::GetDataRefAddress0(mInfo->playerTableRef, mInfo);

    if (pTable == NULL) {
        return 0;
    }

    return pTable->count;
}

u32 SoundArchiveFileReader::GetGroupCount() const {
    const SoundArchiveFile::GroupTable* pTable =
        Util::GetDataRefAddress0(mInfo->groupTableRef, mInfo);

    if (pTable == NULL) {
        return 0;
    }

    return pTable->count - 1;
}

const char* SoundArchiveFileReader::GetSoundLabelString(u32 id) const {
    return GetString(GetSoundStringId(id));
}

u32 SoundArchiveFileReader::GetSoundUserParam(u32 id) const {
    const SoundArchiveFile::SoundCommonInfo* pInfo = impl_GetSoundInfo(id);

    if (pInfo == NULL) {
        return 0;
    }

    return pInfo->userParam[0];
}

bool SoundArchiveFileReader::ReadFileInfo(u32 id,
                                          SoundArchive::FileInfo* pInfo) const {

    const SoundArchiveFile::FileTable* pFileTable =
        Util::GetDataRefAddress0(mInfo->fileTableRef, mInfo);

    if (pFileTable == NULL) {
        return false;
    }

    if (id >= pFileTable->count) {
        return false;
    }

    const SoundArchiveFile::FileInfo* pFile =
        Util::GetDataRefAddress0(pFileTable->items[id], mInfo);

    if (pFile == NULL) {
        return false;
    }

    const SoundArchiveFile::FilePosTable* pPosTable =
        Util::GetDataRefAddress0(pFile->filePosTableRef, mInfo);

    if (pPosTable == NULL) {
        return false;
    }

    pInfo->fileSize = pFile->fileSize;
    pInfo->waveDataFileSize = pFile->waveDataSize;
    pInfo->extFilePath = Util::GetDataRefAddress0(pFile->extFilePathRef, mInfo);
    pInfo->filePosCount = pPosTable->count;

    return true;
}

bool SoundArchiveFileReader::ReadFilePos(u32 fileId, u32 id,
                                         SoundArchive::FilePos* pPos) const {

    const SoundArchiveFile::FileTable* pFileTable =
        Util::GetDataRefAddress0(mInfo->fileTableRef, mInfo);

    if (pFileTable == NULL) {
        return false;
    }

    if (fileId >= pFileTable->count) {
        return false;
    }

    const SoundArchiveFile::FileInfo* pInfo =
        Util::GetDataRefAddress0(pFileTable->items[fileId], mInfo);

    if (pInfo == NULL) {
        return false;
    }

    const SoundArchiveFile::FilePosTable* pPosTable =
        Util::GetDataRefAddress0(pInfo->filePosTableRef, mInfo);

    if (pPosTable == NULL) {
        return false;
    }

    if (id >= pPosTable->count) {
        return false;
    }

    const SoundArchive::FilePos* pSrc =
        Util::GetDataRefAddress0(pPosTable->items[id], mInfo);

    if (pSrc == NULL) {
        return false;
    }

    *pPos = *pSrc;

    return true;
}

const char* SoundArchiveFileReader::GetString(u32 id) const {
    if (id == SoundArchive::INVALID_ID) {
        return NULL;
    }

    if (mStringTable == NULL) {
        return NULL;
    }

    return static_cast<const char*>(
        GetPtrConst(mStringBase, mStringTable->offsetTable.items[id]));
}

u32 SoundArchiveFileReader::ConvertLabelStringToId(
    const SoundArchiveFile::StringTree* pTree, const char* pLabel) const {

    if (pTree == NULL) {
        return SoundArchive::INVALID_ID;
    }

    if (pTree->rootIdx >= pTree->nodeTable.count) {
        return SoundArchive::INVALID_ID;
    }

    const SoundArchiveFile::StringTreeNode* pNode =
        &pTree->nodeTable.items[pTree->rootIdx];

    int length = std::strlen(pLabel);

    while (!(pNode->flags & 1)) {
        int pos = pNode->bit >> 3;
        int bit = pNode->bit & 7;

        u32 nodeIndex;
        if (pos < length && (1 << (7 - bit)) & pLabel[pos]) {
            nodeIndex = pNode->rightIdx;
        } else {
            nodeIndex = pNode->leftIdx;
        }

        pNode = &pTree->nodeTable.items[nodeIndex];
    }

    const char* pExpected = GetString(pNode->strIdx);

    if (std::strcmp(pLabel, pExpected) == 0) {
        return pNode->id;
    }

    return SoundArchive::INVALID_ID;
}

const SoundArchiveFile::SoundCommonInfo*
SoundArchiveFileReader::impl_GetSoundInfo(u32 id) const {

    const SoundArchiveFile::SoundCommonTable* pTable =
        Util::GetDataRefAddress0(mInfo->soundTableRef, mInfo);

    if (pTable == NULL) {
        return NULL;
    }

    if (id >= pTable->count) {
        return NULL;
    }

    if (GetVersion() >= NW4R_VERSION(1, 1)) {
        return Util::GetDataRefAddress0(pTable->items[id], mInfo);
    } else {
        return static_cast<const SoundArchiveFile::SoundCommonInfo*>(
            ut::AddOffsetToPtr(mInfo, pTable->items[id].value));
    }
}

SoundArchiveFile::SoundInfoOffset
SoundArchiveFileReader::impl_GetSoundInfoOffset(u32 id) const {
    static SoundArchiveFile::SoundInfoOffset INVALID_DATA_REF;

    const SoundArchiveFile::SoundCommonTable* pTable =
        Util::GetDataRefAddress0(mInfo->soundTableRef, mInfo);

    if (pTable == NULL) {
        return INVALID_DATA_REF;
    }

    if (id >= pTable->count) {
        return INVALID_DATA_REF;
    }

    if (GetVersion() >= NW4R_VERSION(1, 1)) {
        const SoundArchiveFile::SoundCommonInfo* pInfo =
            Util::GetDataRefAddress0(pTable->items[id], mInfo);

        if (pInfo == NULL) {
            return INVALID_DATA_REF;
        }

        return pInfo->soundInfoRef;
    }

    SoundArchiveFile::SoundInfoOffset ref;

    // TODO(kiwi) Why is the offset changed?
    ref.refType = pTable->items[id].refType;
    ref.dataType = pTable->items[id].dataType;
    ref.value = pTable->items[id].value + 0x1C;

    return ref;
}

const SoundArchiveFile::SeqSoundInfo*
SoundArchiveFileReader::impl_GetSeqSoundInfo(u32 id) const {

    SoundArchiveFile::SoundInfoOffset offset = impl_GetSoundInfoOffset(id);
    return Util::GetDataRefAddress1(offset, mInfo);
}

const SoundArchiveFile::StrmSoundInfo*
SoundArchiveFileReader::impl_GetStrmSoundInfo(u32 id) const {

    SoundArchiveFile::SoundInfoOffset offset = impl_GetSoundInfoOffset(id);
    return Util::GetDataRefAddress2(offset, mInfo);
}

const SoundArchiveFile::WaveSoundInfo*
SoundArchiveFileReader::impl_GetWaveSoundInfo(u32 id) const {

    SoundArchiveFile::SoundInfoOffset offset = impl_GetSoundInfoOffset(id);
    return Util::GetDataRefAddress3(offset, mInfo);
}

const SoundArchiveFile::BankInfo*
SoundArchiveFileReader::impl_GetBankInfo(u32 id) const {

    const SoundArchiveFile::BankTable* pTable =
        Util::GetDataRefAddress0(mInfo->bankTableRef, mInfo);

    if (pTable == NULL) {
        return NULL;
    }

    if (id >= pTable->count) {
        return NULL;
    }

    return Util::GetDataRefAddress0(pTable->items[id], mInfo);
}

const SoundArchiveFile::PlayerInfo*
SoundArchiveFileReader::impl_GetPlayerInfo(u32 id) const {

    const SoundArchiveFile::PlayerTable* pTable =
        Util::GetDataRefAddress0(mInfo->playerTableRef, mInfo);

    if (pTable == NULL) {
        return NULL;
    }

    if (id >= pTable->count) {
        return NULL;
    }

    return Util::GetDataRefAddress0(pTable->items[id], mInfo);
}

const SoundArchiveFile::GroupInfo*
SoundArchiveFileReader::impl_GetGroupInfo(u32 id) const {

    const SoundArchiveFile::GroupTable* pTable =
        Util::GetDataRefAddress0(mInfo->groupTableRef, mInfo);

    if (pTable == NULL) {
        return NULL;
    }

    if (id >= pTable->count) {
        return NULL;
    }

    return Util::GetDataRefAddress0(pTable->items[id], mInfo);
}

} // namespace detail
} // namespace snd
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" void GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv();
extern "C" void GetFileCount__Q44nw4r3snd6detail22SoundArchiveFileReaderCFv();
extern "C" void GetSoundCount__Q44nw4r3snd6detail22SoundArchiveFileReaderCFv();
extern "C" void GetSoundType__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUl();
extern "C" void Init__Q44nw4r3snd6detail22SoundArchiveFileReaderFPCv();
extern "C" void ReadSeqSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive12SeqSoundInfo();
extern "C" void ReadSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive9SoundInfo();
extern "C" void ReadStrmSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive13StrmSoundInfo();
extern "C" void ReadWaveSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive13WaveSoundInfo();
extern "C" void fn_80214BBC();

// asm_to_cpp: Init__Q44nw4r3snd6detail22SoundArchiveFileReaderFPCv
extern "C" asm void Init__Q44nw4r3snd6detail22SoundArchiveFileReaderFPCv() {
    nofralloc
    lwz r5, 0x0(r4)
    stwu r1, -0x10(r1)
    subis r0, r5, 0x5253
    cmplwi r0, 0x4152
    stw r31, 0xc(r1)
    beq lbl_80213D48
    li r0, 0x0
    b lbl_80213D74
lbl_80213D48:
    lhz r6, 0x6(r4)
    cmplwi r6, 0x100
    bge lbl_80213D5C
    li r0, 0x0
    b lbl_80213D74
lbl_80213D5C:
    subfic r0, r6, 0x104
    li r5, 0x104
    orc r5, r5, r6
    srwi r0, r0, 1
    subf r0, r0, r5
    srwi r0, r0, 31
lbl_80213D74:
    cmpwi r0, 0x0
    beq lbl_80213DCC
    lwz r31, 0x0(r4)
    lwz r12, 0x4(r4)
    lwz r11, 0x8(r4)
    lwz r10, 0xc(r4)
    lwz r9, 0x10(r4)
    lwz r8, 0x14(r4)
    lwz r7, 0x18(r4)
    lwz r6, 0x1c(r4)
    lwz r5, 0x20(r4)
    lwz r0, 0x24(r4)
    stw r31, 0x0(r3)
    stw r12, 0x4(r3)
    stw r11, 0x8(r3)
    stw r10, 0xc(r3)
    stw r9, 0x10(r3)
    stw r8, 0x14(r3)
    stw r7, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
lbl_80213DCC:
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: ReadSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive9SoundInfo
extern "C" asm void ReadSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive9SoundInfo() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x28(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    mr r5, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r3, 0x0(r6)
    lwz r4, 0x4(r6)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    cmpwi r3, 0x0
    bne lbl_80213FC4
    li r3, 0x0
    b lbl_80214014
lbl_80213FC4:
    lwz r0, 0x0(r3)
    cmplw r30, r0
    blt lbl_80213FD8
    li r3, 0x0
    b lbl_80214014
lbl_80213FD8:
    lhz r0, 0x6(r29)
    cmplwi r0, 0x101
    blt lbl_80214000
    slwi r0, r30, 3
    lwz r5, 0x28(r29)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    b lbl_80214014
lbl_80214000:
    slwi r4, r30, 3
    lwz r0, 0x28(r29)
    add r3, r3, r4
    lwz r3, 0x8(r3)
    add r3, r3, r0
lbl_80214014:
    cmpwi r3, 0x0
    bne lbl_80214024
    li r3, 0x0
    b lbl_80214088
lbl_80214024:
    lwz r4, 0x4(r3)
    lhz r0, 0x6(r29)
    stw r4, 0x0(r31)
    cmplwi r0, 0x102
    lwz r0, 0x8(r3)
    stw r0, 0x4(r31)
    lbz r0, 0x2a(r3)
    stw r0, 0x8(r31)
    lbz r0, 0x15(r3)
    stw r0, 0xc(r31)
    lbz r0, 0x14(r3)
    stw r0, 0x10(r31)
    lbz r0, 0x17(r3)
    stw r0, 0x14(r31)
    blt lbl_80214074
    lbz r0, 0x28(r3)
    stw r0, 0x18(r31)
    lbz r0, 0x29(r3)
    stw r0, 0x1c(r31)
    b lbl_80214084
lbl_80214074:
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x18(r31)
    stw r0, 0x1c(r31)
lbl_80214084:
    li r3, 0x1
lbl_80214088:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: ReadSeqSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive12SeqSoundInfo
extern "C" asm void ReadSeqSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive12SeqSoundInfo() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl GetSoundType__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUl
    cmpwi r3, 0x1
    beq lbl_802140DC
    li r3, 0x0
    b lbl_8021410C
lbl_802140DC:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80214BBC
    cmpwi r3, 0x0
    bne lbl_802140FC
    li r3, 0x0
    b lbl_8021410C
lbl_802140FC:
    lbz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    lwz r5, 0x28(r29)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
lbl_8021410C:
    cmpwi r3, 0x0
    bne lbl_8021411C
    li r3, 0x0
    b lbl_8021416C
lbl_8021411C:
    lwz r4, 0x0(r3)
    lhz r0, 0x6(r29)
    stw r4, 0x0(r31)
    cmplwi r0, 0x103
    lwz r0, 0x4(r3)
    stw r0, 0x4(r31)
    lbz r0, 0xc(r3)
    stw r0, 0xc(r31)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r31)
    blt lbl_80214160
    lbz r3, 0xd(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x10(r31)
    b lbl_80214168
lbl_80214160:
    li r0, 0x0
    stb r0, 0x10(r31)
lbl_80214168:
    li r3, 0x1
lbl_8021416C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: ReadStrmSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive13StrmSoundInfo
extern "C" asm void ReadStrmSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive13StrmSoundInfo() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl GetSoundType__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUl
    cmpwi r3, 0x2
    beq lbl_802141C0
    li r3, 0x0
    b lbl_802141F0
lbl_802141C0:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80214BBC
    cmpwi r3, 0x0
    bne lbl_802141E0
    li r3, 0x0
    b lbl_802141F0
lbl_802141E0:
    lbz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    lwz r5, 0x28(r29)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
lbl_802141F0:
    cmpwi r3, 0x0
    bne lbl_80214200
    li r3, 0x0
    b lbl_80214270
lbl_80214200:
    lwz r4, 0x0(r3)
    lhz r0, 0x6(r29)
    stw r4, 0x0(r31)
    cmplwi r0, 0x104
    lhz r0, 0x6(r3)
    sth r0, 0x6(r31)
    blt lbl_80214228
    lhz r0, 0x4(r3)
    sth r0, 0x4(r31)
    b lbl_8021426C
lbl_80214228:
    li r0, 0x0
    sth r0, 0x4(r31)
    lhz r4, 0x4(r3)
    b lbl_80214264
lbl_80214238:
    clrlwi. r0, r4, 31
    beq lbl_80214250
    lhz r3, 0x4(r31)
    addi r0, r3, 0x1
    sth r0, 0x4(r31)
    b lbl_80214260
lbl_80214250:
    clrlwi. r0, r4, 16
    beq lbl_80214260
    li r3, 0x0
    b lbl_80214270
lbl_80214260:
    extrwi r4, r4, 15, 16
lbl_80214264:
    clrlwi. r0, r4, 16
    bne lbl_80214238
lbl_8021426C:
    li r3, 0x1
lbl_80214270:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: ReadWaveSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive13WaveSoundInfo
extern "C" asm void ReadWaveSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive13WaveSoundInfo() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl GetSoundType__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUl
    cmpwi r3, 0x3
    beq lbl_802142C4
    li r3, 0x0
    b lbl_802142F4
lbl_802142C4:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80214BBC
    cmpwi r3, 0x0
    bne lbl_802142E4
    li r3, 0x0
    b lbl_802142F4
lbl_802142E4:
    lbz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    lwz r5, 0x28(r29)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
lbl_802142F4:
    cmpwi r3, 0x0
    bne lbl_80214304
    li r3, 0x0
    b lbl_80214344
lbl_80214304:
    lwz r4, 0x0(r3)
    lhz r0, 0x6(r29)
    stw r4, 0x0(r31)
    cmplwi r0, 0x103
    lbz r0, 0x8(r3)
    stw r0, 0x4(r31)
    blt lbl_80214338
    lbz r3, 0x9(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x8(r31)
    b lbl_80214340
lbl_80214338:
    li r0, 0x0
    stb r0, 0x8(r31)
lbl_80214340:
    li r3, 0x1
lbl_80214344:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: GetSoundCount__Q44nw4r3snd6detail22SoundArchiveFileReaderCFv
extern "C" asm void GetSoundCount__Q44nw4r3snd6detail22SoundArchiveFileReaderCFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x28(r3)
    stw r0, 0x14(r1)
    lbz r3, 0x10(r5)
    lwz r4, 0x14(r5)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    cmpwi r3, 0x0
    bne lbl_802147BC
    li r3, 0x0
    b lbl_802147C0
lbl_802147BC:
    lwz r3, 0x0(r3)
lbl_802147C0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: GetFileCount__Q44nw4r3snd6detail22SoundArchiveFileReaderCFv
extern "C" asm void GetFileCount__Q44nw4r3snd6detail22SoundArchiveFileReaderCFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x28(r3)
    stw r0, 0x14(r1)
    lbz r3, 0x18(r5)
    lwz r4, 0x1c(r5)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    cmpwi r3, 0x0
    bne lbl_80214840
    li r3, 0x0
    b lbl_80214844
lbl_80214840:
    lwz r3, 0x0(r3)
lbl_80214844:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80214BBC
extern "C" asm void fn_80214BBC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x28(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    mr r5, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r3, 0x0(r6)
    lwz r4, 0x4(r6)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    cmpwi r3, 0x0
    bne lbl_80214C04
    li r3, 0x0
    b lbl_80214CA0
lbl_80214C04:
    lwz r0, 0x0(r3)
    cmplw r30, r0
    blt lbl_80214C18
    li r3, 0x0
    b lbl_80214CA0
lbl_80214C18:
    lhz r0, 0x6(r29)
    cmplwi r0, 0x101
    blt lbl_80214C74
    slwi r0, r30, 3
    lwz r5, 0x28(r29)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    cmpwi r3, 0x0
    bne lbl_80214C4C
    li r3, 0x0
    b lbl_80214CA0
lbl_80214C4C:
    lbz r0, 0x18(r3)
    stb r0, 0x0(r31)
    lbz r0, 0x19(r3)
    stb r0, 0x1(r31)
    lhz r0, 0x1a(r3)
    sth r0, 0x2(r31)
    lwz r0, 0x1c(r3)
    li r3, 0x1
    stw r0, 0x4(r31)
    b lbl_80214CA0
lbl_80214C74:
    slwi r0, r30, 3
    add r6, r3, r0
    li r3, 0x1
    lwz r4, 0x8(r6)
    lbz r5, 0x5(r6)
    lbz r0, 0x4(r6)
    addi r4, r4, 0x1c
    stb r0, 0x0(r31)
    stb r5, 0x1(r31)
    sth r7, 0x2(r31)
    stw r4, 0x4(r31)
lbl_80214CA0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
