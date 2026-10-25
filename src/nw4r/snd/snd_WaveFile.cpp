#include <nw4r/snd.h>

namespace nw4r {
namespace snd {
namespace detail {

WaveFileReader::WaveFileReader(const WaveFile::WaveInfo* pWaveInfo)
    : mWaveInfo(pWaveInfo) {}

bool WaveFileReader::ReadWaveParam(WaveData* pWaveData,
                                   const void* pWaveAddr) const {
    AxVoice::Format format =
        GetAxVoiceFormatFromWaveFileFormat(mWaveInfo->format);

    pWaveData->sampleFormat = mWaveInfo->format;
    pWaveData->numChannels = mWaveInfo->numChannels;
    pWaveData->sampleRate =
        (mWaveInfo->sampleRate24 << 16) + mWaveInfo->sampleRate;

    pWaveData->loopFlag = mWaveInfo->loopFlag;
    pWaveData->loopStart =
        AxVoice::GetSampleByDspAddress(NULL, mWaveInfo->loopStart, format);
    pWaveData->loopEnd =
        AxVoice::GetSampleByDspAddress(NULL, mWaveInfo->loopEnd, format) + 1;

    const u32* pInfoOffsetTable = static_cast<const u32*>(
        ut::AddOffsetToPtr(mWaveInfo, mWaveInfo->channelInfoTableOffset));

    for (int i = 0; i < mWaveInfo->numChannels; i++) {
        ChannelParam& rParam = pWaveData->channelParam[i];

        const WaveFile::WaveChannelInfo* pChannelInfo =
            reinterpret_cast<const WaveFile::WaveChannelInfo*>(
                ut::AddOffsetToPtr(mWaveInfo, pInfoOffsetTable[i]));

        rParam.volumeFrontLeft = pChannelInfo->volumeFrontLeft;
        rParam.volumeFrontRight = pChannelInfo->volumeFrontRight;
        rParam.volumeRearLeft = pChannelInfo->volumeRearLeft;
        rParam.volumeRearRight = pChannelInfo->volumeRearRight;

        if (pChannelInfo->adpcmOffset != 0) {
            const AdpcmInfo* pAdpcmInfo = static_cast<const AdpcmInfo*>(
                ut::AddOffsetToPtr(mWaveInfo, pChannelInfo->adpcmOffset));

            rParam.adpcmInfo = *pAdpcmInfo;
        }

        rParam.dataAddr = const_cast<void*>(
            ut::AddOffsetToPtr(pWaveAddr, mWaveInfo->dataOffset +
                                              pChannelInfo->channelDataOffset));
    }

    return true;
}

AxVoice::Format WaveFileReader::GetAxVoiceFormatFromWaveFileFormat(u32 format) {
    if (format == WaveFile::FORMAT_PCM16) {
        return AxVoice::FORMAT_PCM16;
    }

    if (format == WaveFile::FORMAT_PCM8) {
        return AxVoice::FORMAT_PCM8;
    }

    return AxVoice::FORMAT_ADPCM;
}

} // namespace detail
} // namespace snd
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" void GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv();
extern "C" void GetSampleByDspAddress__Q44nw4r3snd6detail7AxVoiceFPCvUlQ34nw4r3snd12SampleFormat();
extern "C" void GetWaveDataAddress__Q44nw4r3snd6detail14WaveFileReaderCFPCQ54nw4r3snd6detail8WaveFile15WaveChannelInfoPCv();
extern "C" void GetWaveFile__Q44nw4r3snd6detail17WaveArchiveReaderCFi();
extern "C" void ReadWaveInfo__Q44nw4r3snd6detail14WaveFileReaderCFPQ44nw4r3snd6detail8WaveInfoPCv();
extern "C" void __ct__Q44nw4r3snd6detail14WaveFileReaderFPCQ54nw4r3snd6detail8WaveFile10FileHeader();
extern "C" void __ct__Q44nw4r3snd6detail17WaveArchiveReaderFPCv();
extern "C" void _restgpr_27();
extern "C" void _savegpr_27();

// asm_to_cpp: __ct__Q44nw4r3snd6detail17WaveArchiveReaderFPCv
extern "C" asm void __ct__Q44nw4r3snd6detail17WaveArchiveReaderFPCv() {
    nofralloc
    lwz r5, 0x0(r4)
    li r6, 0x0
    stw r6, 0x0(r3)
    subis r0, r5, 0x5257
    cmplwi r0, 0x4152
    stw r6, 0x4(r3)
    beq lbl_8022100C
    li r0, 0x0
    b lbl_80221038
lbl_8022100C:
    lhz r6, 0x6(r4)
    cmplwi r6, 0x100
    bge lbl_80221020
    li r0, 0x0
    b lbl_80221038
lbl_80221020:
    subfic r0, r6, 0x100
    li r5, 0x100
    orc r5, r5, r6
    srwi r0, r0, 1
    subf r0, r0, r5
    srwi r0, r0, 31
lbl_80221038:
    cmpwi r0, 0x0
    beqlr
    lwz r5, 0x18(r4)
    lwz r0, 0x10(r4)
    add r5, r5, r4
    add r0, r0, r4
    stw r5, 0x4(r3)
    stw r0, 0x0(r3)
    blr
}

// asm_to_cpp: GetWaveFile__Q44nw4r3snd6detail17WaveArchiveReaderCFi
extern "C" asm void GetWaveFile__Q44nw4r3snd6detail17WaveArchiveReaderCFi() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r6, 0x0(r3)
    stw r0, 0x14(r1)
    cmpwi r6, 0x0
    bne lbl_8022107C
    li r3, 0x0
    b lbl_802210D4
lbl_8022107C:
    lwz r5, 0x4(r3)
    cmpwi r5, 0x0
    bne lbl_80221090
    li r3, 0x0
    b lbl_802210D4
lbl_80221090:
    cmpwi r4, 0x0
    bge lbl_802210A0
    li r3, 0x0
    b lbl_802210D4
lbl_802210A0:
    lwz r0, 0x8(r6)
    cmplw r4, r0
    blt lbl_802210B4
    li r3, 0x0
    b lbl_802210D4
lbl_802210B4:
    mulli r0, r4, 0xc
    add r3, r6, r0
    lwz r0, 0xc(r3)
    lwz r4, 0x10(r3)
    stw r0, 0x8(r1)
    stw r4, 0xc(r1)
    lbz r3, 0x8(r1)
    bl GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
lbl_802210D4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __ct__Q44nw4r3snd6detail14WaveFileReaderFPCQ54nw4r3snd6detail8WaveFile10FileHeader
extern "C" asm void __ct__Q44nw4r3snd6detail14WaveFileReaderFPCQ54nw4r3snd6detail8WaveFile10FileHeader() {
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    lwz r0, 0x10(r4)
    add. r4, r0, r4
    beqlr
    addi r0, r4, 0x8
    stw r0, 0x0(r3)
    blr
}

// asm_to_cpp: ReadWaveInfo__Q44nw4r3snd6detail14WaveFileReaderCFPQ44nw4r3snd6detail8WaveInfoPCv
extern "C" asm void ReadWaveInfo__Q44nw4r3snd6detail14WaveFileReaderCFPQ44nw4r3snd6detail8WaveInfoPCv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r6, 0x0(r3)
    mr r27, r3
    mr r29, r4
    mr r28, r5
    lbz r0, 0x0(r6)
    cmpwi r0, 0x1
    beq lbl_8022115C
    bge lbl_8022114C
    cmpwi r0, 0x0
    bge lbl_80221164
    b lbl_8022116C
lbl_8022114C:
    cmpwi r0, 0x3
    bge lbl_8022116C
    li r30, 0x3
    b lbl_80221170
lbl_8022115C:
    li r30, 0x1
    b lbl_80221170
lbl_80221164:
    li r30, 0x2
    b lbl_80221170
lbl_8022116C:
    li r30, 0x3
lbl_80221170:
    lwz r7, 0x0(r3)
    mr r5, r30
    stw r30, 0x0(r4)
    li r3, 0x0
    lbz r0, 0x2(r7)
    stw r0, 0x8(r4)
    lbz r6, 0x3(r7)
    lhz r0, 0x4(r7)
    slwi r6, r6, 16
    add r0, r6, r0
    stw r0, 0xc(r4)
    lbz r6, 0x1(r7)
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stb r0, 0x4(r4)
    lwz r4, 0x8(r7)
    bl GetSampleByDspAddress__Q44nw4r3snd6detail7AxVoiceFPCvUlQ34nw4r3snd12SampleFormat
    stw r3, 0x10(r29)
    mr r5, r30
    lwz r4, 0x0(r27)
    li r3, 0x0
    lwz r4, 0xc(r4)
    bl GetSampleByDspAddress__Q44nw4r3snd6detail7AxVoiceFPCvUlQ34nw4r3snd12SampleFormat
    addi r0, r3, 0x1
    lwz r3, 0x0(r27)
    stw r0, 0x14(r29)
    addi r31, r29, 0x18
    li r29, 0x0
    lwz r0, 0x10(r3)
    add r30, r0, r3
    b lbl_802212E0
lbl_802211F0:
    cmpwi r29, 0x2
    bge lbl_802212D4
    lwz r0, 0x0(r30)
    add r4, r0, r3
    lwz r0, 0x4(r4)
    cmpwi r0, 0x0
    beq lbl_802212C4
    lhzux r5, r3, r0
    lhz r0, 0x2(r3)
    sth r5, 0x4(r31)
    sth r0, 0x6(r31)
    lhz r5, 0x4(r3)
    lhz r0, 0x6(r3)
    sth r5, 0x8(r31)
    sth r0, 0xa(r31)
    lhz r5, 0x8(r3)
    lhz r0, 0xa(r3)
    sth r5, 0xc(r31)
    sth r0, 0xe(r31)
    lhz r5, 0xc(r3)
    lhz r0, 0xe(r3)
    sth r5, 0x10(r31)
    sth r0, 0x12(r31)
    lhz r5, 0x10(r3)
    lhz r0, 0x12(r3)
    sth r5, 0x14(r31)
    sth r0, 0x16(r31)
    lhz r5, 0x14(r3)
    lhz r0, 0x16(r3)
    sth r5, 0x18(r31)
    sth r0, 0x1a(r31)
    lhz r5, 0x18(r3)
    lhz r0, 0x1a(r3)
    sth r5, 0x1c(r31)
    sth r0, 0x1e(r31)
    lhz r5, 0x1c(r3)
    lhz r0, 0x1e(r3)
    sth r5, 0x20(r31)
    sth r0, 0x22(r31)
    lhz r0, 0x20(r3)
    sth r0, 0x24(r31)
    lhz r0, 0x22(r3)
    sth r0, 0x26(r31)
    lhz r0, 0x24(r3)
    sth r0, 0x28(r31)
    lhz r0, 0x26(r3)
    sth r0, 0x2a(r31)
    lhz r0, 0x28(r3)
    sth r0, 0x2c(r31)
    lhz r0, 0x2a(r3)
    sth r0, 0x2e(r31)
    lhz r0, 0x2c(r3)
    sth r0, 0x30(r31)
lbl_802212C4:
    mr r3, r27
    mr r5, r28
    bl GetWaveDataAddress__Q44nw4r3snd6detail14WaveFileReaderCFPCQ54nw4r3snd6detail8WaveFile15WaveChannelInfoPCv
    stw r3, 0x0(r31)
lbl_802212D4:
    addi r31, r31, 0x34
    addi r30, r30, 0x4
    addi r29, r29, 0x1
lbl_802212E0:
    lwz r3, 0x0(r27)
    lbz r0, 0x2(r3)
    cmpw r29, r0
    blt lbl_802211F0
    addi r11, r1, 0x20
    li r3, 0x1
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: GetWaveDataAddress__Q44nw4r3snd6detail14WaveFileReaderCFPCQ54nw4r3snd6detail8WaveFile15WaveChannelInfoPCv
extern "C" asm void GetWaveDataAddress__Q44nw4r3snd6detail14WaveFileReaderCFPCQ54nw4r3snd6detail8WaveFile15WaveChannelInfoPCv() {
    nofralloc
    cmpwi r5, 0x0
    cntlzw r0, r5
    srwi r6, r0, 5
    bne lbl_80221320
    lwz r5, 0x0(r3)
lbl_80221320:
    lwz r3, 0x0(r3)
    lbz r0, 0x6(r3)
    cmpwi r0, 0x1
    beq lbl_80221358
    bge lbl_80221360
    cmpwi r0, 0x0
    bge lbl_80221340
    b lbl_80221360
lbl_80221340:
    lwz r0, 0x14(r3)
    cmpwi r6, 0x0
    add r3, r0, r5
    beq lbl_80221368
    addi r3, r3, 0x8
    b lbl_80221368
lbl_80221358:
    lwz r3, 0x14(r3)
    b lbl_80221368
lbl_80221360:
    li r3, 0x0
    blr
lbl_80221368:
    lwz r0, 0x0(r4)
    add r3, r0, r3
    blr
}
