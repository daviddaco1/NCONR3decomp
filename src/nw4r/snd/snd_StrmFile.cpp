#include <nw4r/snd.h>
#include <nw4r/ut.h>

namespace nw4r {
namespace snd {
namespace detail {

bool StrmFileReader::IsValidFileHeader(const void* pStrmBin) {
    const ut::BinaryFileHeader* pFileHeader =
        static_cast<const ut::BinaryFileHeader*>(pStrmBin);

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

StrmFileReader::StrmFileReader() : mHeader(NULL), mHeadBlock(NULL) {}

void StrmFileReader::Setup(const void* pStrmBin) {
    if (!IsValidFileHeader(pStrmBin)) {
        return;
    }

    mHeader = static_cast<const StrmFile::Header*>(pStrmBin);

    mHeadBlock = static_cast<const StrmFile::HeadBlock*>(
        ut::AddOffsetToPtr(mHeader, mHeader->headBlockOffset));

    (void)Util::GetDataRefAddress0(
        mHeadBlock->refDataHeader,
        &mHeadBlock->refDataHeader); // debug leftover
}

bool StrmFileReader::ReadStrmInfo(StrmInfo* pStrmInfo) const {
    const StrmFile::StrmDataInfo* pStrmData = Util::GetDataRefAddress0(
        mHeadBlock->refDataHeader, &mHeadBlock->refDataHeader);

    pStrmInfo->format = pStrmData->format;
    pStrmInfo->loopFlag = pStrmData->loopFlag;
    pStrmInfo->numChannels = pStrmData->numChannels;
    pStrmInfo->sampleRate =
        (pStrmData->sampleRate24 << 16) + pStrmData->sampleRate;
    pStrmInfo->blockHeaderOffset = pStrmData->blockHeaderOffset;
    pStrmInfo->loopStart = pStrmData->loopStart;
    pStrmInfo->loopEnd = pStrmData->loopEnd;
    pStrmInfo->dataOffset = pStrmData->dataOffset;
    pStrmInfo->numBlocks = pStrmData->numBlocks;
    pStrmInfo->blockSize = pStrmData->blockSize;
    pStrmInfo->blockSamples = pStrmData->blockSamples;
    pStrmInfo->lastBlockSize = pStrmData->lastBlockSize;
    pStrmInfo->lastBlockSamples = pStrmData->lastBlockSamples;
    pStrmInfo->lastBlockPaddedSize = pStrmData->lastBlockPaddedSize;
    pStrmInfo->adpcmDataInterval = pStrmData->adpcmDataInterval;
    pStrmInfo->adpcmDataSize = pStrmData->adpcmDataSize;

    return true;
}

bool StrmFileReader::ReadAdpcmInfo(AdpcmInfo* pAdpcmInfo, int channels) const {
    const StrmFile::StrmDataInfo* pStrmData = Util::GetDataRefAddress0(
        mHeadBlock->refDataHeader, &mHeadBlock->refDataHeader);

    if (pStrmData->format != WaveFile::FORMAT_ADPCM) {
        return false;
    }

    const StrmFile::ChannelTable* pChannelTable = Util::GetDataRefAddress0(
        mHeadBlock->refChannelTable, &mHeadBlock->refDataHeader);

    if (channels >= pChannelTable->channelCount) {
        return false;
    }

    const StrmFile::ChannelInfo* pChannelInfo = Util::GetDataRefAddress0(
        pChannelTable->refChannelHeader[channels], &mHeadBlock->refDataHeader);

    const AdpcmInfo* pSrcInfo = Util::GetDataRefAddress0(
        pChannelInfo->refAdpcmInfo, &mHeadBlock->refDataHeader);

    *pAdpcmInfo = *pSrcInfo;
    return true;
}

bool StrmFileLoader::LoadFileHeader(void* pStrmBin, u32 size) {
    u8 headerArea[HEADER_ALIGNED_SIZE + 32];
    u32 bytesRead;

    mStream.Seek(0, ut::FileStream::SEEK_ORIGIN_BEG);
    bytesRead = mStream.Read(ut::RoundUp(headerArea, 32), HEADER_ALIGNED_SIZE);
    if (bytesRead != HEADER_ALIGNED_SIZE) {
        return false;
    }

    StrmFile::Header* pHeader =
        static_cast<StrmFile::Header*>(ut::RoundUp(headerArea, 32));

    StrmFileReader reader;
    if (!reader.IsValidFileHeader(pHeader)) {
        return false;
    }

    if (pHeader->adpcBlockOffset > size) {
        return false;
    }

    u32 loadSize = pHeader->headBlockOffset + pHeader->headBlockSize;

    mStream.Seek(0, ut::FileStream::SEEK_ORIGIN_BEG);
    bytesRead = mStream.Read(pStrmBin, loadSize);
    if (bytesRead != loadSize) {
        return false;
    }

    mReader.Setup(pStrmBin);
    return true;
}

bool StrmFileLoader::ReadAdpcBlockData(u16* pYN1, u16* pYN2, int block,
                                       int channels) {
    if (!mReader.IsAvailable()) {
        return false;
    }

    s32 offset = mReader.GetAdpcBlockOffset() +
                 block * channels * (2 * sizeof(u16)) +
                 sizeof(ut::BinaryBlockHeader);

    mStream.Seek(offset, ut::FileStream::SEEK_ORIGIN_BEG);

    u16 buffer[StrmPlayer::StrmHeader::STRM_CHANNEL_MAX * 2] ALIGN(32);
    // @bug Read size not validated
    mStream.Read(buffer, sizeof(buffer));

    for (int i = 0; i < channels; i++) {
        pYN1[i] = buffer[i * 2];
        pYN2[i] = buffer[i * 2 + 1];
    }

    return true;
}

} // namespace detail
} // namespace snd
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" void GetChannelCount__Q44nw4r3snd6detail14StrmFileLoaderCFv();
extern "C" void GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv();
extern "C" void ReadAdpcBlockData__Q44nw4r3snd6detail14StrmFileLoaderFPUsPUsii();
extern "C" void ReadAdpcmInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ44nw4r3snd6detail10AdpcmParamPQ44nw4r3snd6detail14AdpcmLoopParami();
extern "C" void ReadStrmInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ54nw4r3snd6detail14StrmFileReader8StrmInfo();
extern "C" void ReadStrmInfo__Q44nw4r3snd6detail14StrmFileReaderCFPQ54nw4r3snd6detail14StrmFileReader8StrmInfo();
extern "C" void ReadStrmTrackInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ54nw4r3snd6detail14StrmFileReader13StrmTrackInfoi();
extern "C" void ReadStrmTrackInfo__Q44nw4r3snd6detail14StrmFileReaderCFPQ54nw4r3snd6detail14StrmFileReader13StrmTrackInfoi();

// asm_to_cpp: ReadStrmInfo__Q44nw4r3snd6detail14StrmFileReaderCFPQ54nw4r3snd6detail14StrmFileReader8StrmInfo
extern "C" asm void ReadStrmInfo__Q44nw4r3snd6detail14StrmFileReaderCFPQ54nw4r3snd6detail14StrmFileReader8StrmInfo() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x4(r3)
    stw r0, 0x14(r1)
    addi r5, r3, 0x8
    stw r31, 0xc(r1)
    mr r31, r4
    lbz r3, 0x8(r3)
    lwz r4, 0x4(r5)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    lbz r0, 0x0(r3)
    cmpwi r0, 0x1
    beq lbl_80219604
    bge lbl_802195F4
    cmpwi r0, 0x0
    bge lbl_8021960C
    b lbl_80219614
lbl_802195F4:
    cmpwi r0, 0x3
    bge lbl_80219614
    li r0, 0x3
    b lbl_80219618
lbl_80219604:
    li r0, 0x1
    b lbl_80219618
lbl_8021960C:
    li r0, 0x2
    b lbl_80219618
lbl_80219614:
    li r0, 0x3
lbl_80219618:
    stw r0, 0x0(r31)
    lbz r4, 0x1(r3)
    neg r0, r4
    or r0, r0, r4
    srwi r0, r0, 31
    stb r0, 0x4(r31)
    lbz r0, 0x2(r3)
    stw r0, 0x8(r31)
    lbz r4, 0x3(r3)
    lhz r0, 0x4(r3)
    slwi r4, r4, 16
    add r0, r4, r0
    stw r0, 0xc(r31)
    lhz r0, 0x6(r3)
    sth r0, 0x10(r31)
    lwz r0, 0x8(r3)
    stw r0, 0x14(r31)
    lwz r0, 0xc(r3)
    stw r0, 0x18(r31)
    lwz r0, 0x10(r3)
    stw r0, 0x1c(r31)
    lwz r0, 0x14(r3)
    stw r0, 0x20(r31)
    lwz r0, 0x18(r3)
    stw r0, 0x24(r31)
    lwz r0, 0x1c(r3)
    stw r0, 0x28(r31)
    lwz r0, 0x20(r3)
    stw r0, 0x2c(r31)
    lwz r0, 0x24(r3)
    stw r0, 0x30(r31)
    lwz r0, 0x28(r3)
    stw r0, 0x34(r31)
    lwz r0, 0x2c(r3)
    stw r0, 0x38(r31)
    lwz r0, 0x30(r3)
    li r3, 0x1
    stw r0, 0x3c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: ReadStrmTrackInfo__Q44nw4r3snd6detail14StrmFileReaderCFPQ54nw4r3snd6detail14StrmFileReader13StrmTrackInfoi
extern "C" asm void ReadStrmTrackInfo__Q44nw4r3snd6detail14StrmFileReaderCFPQ54nw4r3snd6detail14StrmFileReader13StrmTrackInfoi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x4(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r5
    addi r5, r6, 0x8
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r3, 0x10(r6)
    lwz r4, 0x14(r6)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    lbz r0, 0x0(r3)
    cmpw r30, r0
    blt lbl_80219710
    li r3, 0x0
    b lbl_8021996C
lbl_80219710:
    lbz r0, 0x1(r3)
    cmpwi r0, 0x1
    beq lbl_8021984C
    bge lbl_80219968
    cmpwi r0, 0x0
    bge lbl_8021972C
    b lbl_80219968
lbl_8021972C:
    slwi r0, r30, 3
    lwz r4, 0x4(r29)
    add r6, r3, r0
    addi r5, r4, 0x8
    lbz r3, 0x4(r6)
    lwz r4, 0x8(r6)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    cmpwi r3, 0x0
    bne lbl_80219758
    li r3, 0x0
    b lbl_8021996C
lbl_80219758:
    li r4, 0x7f
    li r0, 0x40
    stb r4, 0x0(r31)
    li r5, 0x20
    stb r0, 0x1(r31)
    lbz r0, 0x0(r3)
    cmpwi r0, 0x20
    stw r0, 0x4(r31)
    bgt lbl_80219780
    mr r5, r0
lbl_80219780:
    cmpwi cr1, r5, 0x0
    li r8, 0x0
    ble cr1, lbl_80219968
    cmpwi r5, 0x8
    subi r6, r5, 0x8
    ble lbl_80219820
    li r7, 0x0
    blt cr1, lbl_802197B4
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r5, r0
    bgt lbl_802197B4
    li r7, 0x1
lbl_802197B4:
    cmpwi r7, 0x0
    beq lbl_80219820
    addi r0, r6, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_80219820
lbl_802197D0:
    add r4, r3, r8
    add r6, r31, r8
    lbz r0, 0x1(r4)
    addi r8, r8, 0x8
    stb r0, 0x8(r6)
    lbz r0, 0x2(r4)
    stb r0, 0x9(r6)
    lbz r0, 0x3(r4)
    stb r0, 0xa(r6)
    lbz r0, 0x4(r4)
    stb r0, 0xb(r6)
    lbz r0, 0x5(r4)
    stb r0, 0xc(r6)
    lbz r0, 0x6(r4)
    stb r0, 0xd(r6)
    lbz r0, 0x7(r4)
    stb r0, 0xe(r6)
    lbz r0, 0x8(r4)
    stb r0, 0xf(r6)
    bdnz lbl_802197D0
lbl_80219820:
    subf r0, r8, r5
    mtctr r0
    cmpw r8, r5
    bge lbl_80219968
lbl_80219830:
    add r5, r3, r8
    add r4, r31, r8
    lbz r0, 0x1(r5)
    addi r8, r8, 0x1
    stb r0, 0x8(r4)
    bdnz lbl_80219830
    b lbl_80219968
lbl_8021984C:
    slwi r0, r30, 3
    lwz r4, 0x4(r29)
    add r6, r3, r0
    addi r5, r4, 0x8
    lbz r3, 0x4(r6)
    lwz r4, 0x8(r6)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    cmpwi r3, 0x0
    bne lbl_80219878
    li r3, 0x0
    b lbl_8021996C
lbl_80219878:
    lbz r0, 0x0(r3)
    li r5, 0x20
    stb r0, 0x0(r31)
    lbz r0, 0x1(r3)
    stb r0, 0x1(r31)
    lbz r0, 0x8(r3)
    cmpwi r0, 0x20
    stw r0, 0x4(r31)
    bgt lbl_802198A0
    mr r5, r0
lbl_802198A0:
    cmpwi cr1, r5, 0x0
    li r8, 0x0
    ble cr1, lbl_80219968
    cmpwi r5, 0x8
    subi r6, r5, 0x8
    ble lbl_80219940
    li r7, 0x0
    blt cr1, lbl_802198D4
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r5, r0
    bgt lbl_802198D4
    li r7, 0x1
lbl_802198D4:
    cmpwi r7, 0x0
    beq lbl_80219940
    addi r0, r6, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_80219940
lbl_802198F0:
    add r4, r3, r8
    add r6, r31, r8
    lbz r0, 0x9(r4)
    addi r8, r8, 0x8
    stb r0, 0x8(r6)
    lbz r0, 0xa(r4)
    stb r0, 0x9(r6)
    lbz r0, 0xb(r4)
    stb r0, 0xa(r6)
    lbz r0, 0xc(r4)
    stb r0, 0xb(r6)
    lbz r0, 0xd(r4)
    stb r0, 0xc(r6)
    lbz r0, 0xe(r4)
    stb r0, 0xd(r6)
    lbz r0, 0xf(r4)
    stb r0, 0xe(r6)
    lbz r0, 0x10(r4)
    stb r0, 0xf(r6)
    bdnz lbl_802198F0
lbl_80219940:
    subf r0, r8, r5
    mtctr r0
    cmpw r8, r5
    bge lbl_80219968
lbl_80219950:
    add r5, r3, r8
    add r4, r31, r8
    lbz r0, 0x9(r5)
    addi r8, r8, 0x1
    stb r0, 0x8(r4)
    bdnz lbl_80219950
lbl_80219968:
    li r3, 0x1
lbl_8021996C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: GetChannelCount__Q44nw4r3snd6detail14StrmFileLoaderCFv
extern "C" asm void GetChannelCount__Q44nw4r3snd6detail14StrmFileLoaderCFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_80219B6C
    li r3, 0x0
    b lbl_80219B84
lbl_80219B6C:
    lwz r4, 0x8(r3)
    lbz r3, 0x18(r4)
    addi r5, r4, 0x8
    lwz r4, 0x1c(r4)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    lbz r3, 0x0(r3)
lbl_80219B84:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: ReadStrmInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ54nw4r3snd6detail14StrmFileReader8StrmInfo
extern "C" asm void ReadStrmInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ54nw4r3snd6detail14StrmFileReader8StrmInfo() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_80219BB4
    li r3, 0x0
    b lbl_80219BC0
lbl_80219BB4:
    addi r3, r3, 0x4
    bl ReadStrmInfo__Q44nw4r3snd6detail14StrmFileReaderCFPQ54nw4r3snd6detail14StrmFileReader8StrmInfo
    li r3, 0x1
lbl_80219BC0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: ReadStrmTrackInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ54nw4r3snd6detail14StrmFileReader13StrmTrackInfoi
extern "C" asm void ReadStrmTrackInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ54nw4r3snd6detail14StrmFileReader13StrmTrackInfoi() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_80219BF0
    li r3, 0x0
    b lbl_80219BFC
lbl_80219BF0:
    addi r3, r3, 0x4
    bl ReadStrmTrackInfo__Q44nw4r3snd6detail14StrmFileReaderCFPQ54nw4r3snd6detail14StrmFileReader13StrmTrackInfoi
    li r3, 0x1
lbl_80219BFC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: ReadAdpcmInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ44nw4r3snd6detail10AdpcmParamPQ44nw4r3snd6detail14AdpcmLoopParami
extern "C" asm void ReadAdpcmInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ44nw4r3snd6detail10AdpcmParamPQ44nw4r3snd6detail14AdpcmLoopParami() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x4(r3)
    stw r31, 0x1c(r1)
    mr r31, r5
    cmpwi r0, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r6
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_80219C4C
    li r3, 0x0
    b lbl_80219D7C
lbl_80219C4C:
    lwz r3, 0x8(r3)
    addi r5, r3, 0x8
    lbz r3, 0x8(r3)
    lwz r4, 0x4(r5)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    lbz r0, 0x0(r3)
    cmplwi r0, 0x2
    bne lbl_80219D78
    lwz r4, 0x8(r28)
    lbz r3, 0x18(r4)
    addi r5, r4, 0x8
    lwz r4, 0x1c(r4)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    lbz r0, 0x0(r3)
    cmpw r29, r0
    bge lbl_80219D78
    slwi r0, r29, 3
    lwz r4, 0x8(r28)
    add r6, r3, r0
    addi r5, r4, 0x8
    lbz r3, 0x4(r6)
    lwz r4, 0x8(r6)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    mr r4, r3
    lwz r5, 0x8(r28)
    lbz r3, 0x0(r3)
    lwz r4, 0x4(r4)
    addi r5, r5, 0x8
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
    lhz r4, 0x0(r3)
    lhz r0, 0x2(r3)
    sth r4, 0x0(r30)
    sth r0, 0x2(r30)
    lhz r4, 0x4(r3)
    lhz r0, 0x6(r3)
    sth r4, 0x4(r30)
    sth r0, 0x6(r30)
    lhz r4, 0x8(r3)
    lhz r0, 0xa(r3)
    sth r4, 0x8(r30)
    sth r0, 0xa(r30)
    lhz r4, 0xc(r3)
    lhz r0, 0xe(r3)
    sth r4, 0xc(r30)
    sth r0, 0xe(r30)
    lhz r4, 0x10(r3)
    lhz r0, 0x12(r3)
    sth r4, 0x10(r30)
    sth r0, 0x12(r30)
    lhz r4, 0x14(r3)
    lhz r0, 0x16(r3)
    sth r4, 0x14(r30)
    sth r0, 0x16(r30)
    lhz r4, 0x18(r3)
    lhz r0, 0x1a(r3)
    sth r4, 0x18(r30)
    sth r0, 0x1a(r30)
    lhz r4, 0x1c(r3)
    lhz r0, 0x1e(r3)
    sth r4, 0x1c(r30)
    sth r0, 0x1e(r30)
    lhz r0, 0x20(r3)
    sth r0, 0x20(r30)
    lhz r0, 0x22(r3)
    sth r0, 0x22(r30)
    lhz r0, 0x24(r3)
    sth r0, 0x24(r30)
    lhz r0, 0x26(r3)
    sth r0, 0x26(r30)
    lhz r0, 0x28(r3)
    sth r0, 0x0(r31)
    lhz r0, 0x2a(r3)
    sth r0, 0x2(r31)
    lhz r0, 0x2c(r3)
    sth r0, 0x4(r31)
lbl_80219D78:
    li r3, 0x1
lbl_80219D7C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: ReadAdpcBlockData__Q44nw4r3snd6detail14StrmFileLoaderFPUsPUsii
extern "C" asm void ReadAdpcBlockData__Q44nw4r3snd6detail14StrmFileLoaderFPUsPUsii() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x60
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    mr r31, r7
    stw r30, -0x8(r12)
    mr r30, r5
    stw r29, -0xc(r12)
    mr r29, r4
    stw r28, -0x10(r12)
    mr r28, r3
    lwz r8, 0x4(r3)
    neg r0, r8
    or r0, r0, r8
    srwi. r0, r0, 31
    bne lbl_80219DF0
    li r3, 0x0
    b lbl_80219F2C
lbl_80219DF0:
    beq lbl_80219DFC
    lwz r4, 0x18(r8)
    b lbl_80219E00
lbl_80219DFC:
    li r4, 0x0
lbl_80219E00:
    mullw r0, r6, r7
    lwz r3, 0x0(r3)
    li r5, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x44(r12)
    slwi r0, r0, 2
    add r4, r4, r0
    addi r4, r4, 0x8
    mtctr r12
    bctrl
    lwz r3, 0x0(r28)
    addi r4, r1, 0x20
    li r5, 0x20
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplwi r3, 0x20
    beq lbl_80219E54
    li r3, 0x0
    b lbl_80219F2C
lbl_80219E54:
    cmpwi r31, 0x0
    addi r6, r1, 0x20
    li r3, 0x0
    li r4, 0x0
    ble lbl_80219F28
    srwi. r0, r31, 2
    mtctr r0
    beq lbl_80219F00
lbl_80219E74:
    lhzx r5, r6, r3
    addi r0, r4, 0x1
    slwi r0, r0, 1
    addi r3, r3, 0x4
    sthx r5, r29, r4
    lhzx r0, r6, r0
    sthx r0, r30, r4
    addi r0, r4, 0x3
    addi r4, r4, 0x2
    lhzx r5, r6, r3
    slwi r0, r0, 1
    addi r3, r3, 0x4
    sthx r5, r29, r4
    lhzx r0, r6, r0
    sthx r0, r30, r4
    addi r0, r4, 0x3
    addi r4, r4, 0x2
    lhzx r5, r6, r3
    slwi r0, r0, 1
    addi r3, r3, 0x4
    sthx r5, r29, r4
    lhzx r0, r6, r0
    sthx r0, r30, r4
    addi r0, r4, 0x3
    addi r4, r4, 0x2
    lhzx r5, r6, r3
    slwi r0, r0, 1
    addi r3, r3, 0x4
    sthx r5, r29, r4
    lhzx r0, r6, r0
    sthx r0, r30, r4
    addi r4, r4, 0x2
    bdnz lbl_80219E74
    andi. r31, r31, 0x3
    beq lbl_80219F28
lbl_80219F00:
    mtctr r31
lbl_80219F04:
    lhzx r5, r6, r3
    addi r0, r4, 0x1
    slwi r0, r0, 1
    addi r3, r3, 0x4
    sthx r5, r29, r4
    lhzx r0, r6, r0
    sthx r0, r30, r4
    addi r4, r4, 0x2
    bdnz lbl_80219F04
lbl_80219F28:
    li r3, 0x1
lbl_80219F2C:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    lwz r28, -0x10(r10)
    mtlr r0
    mr r1, r10
    blr
}
