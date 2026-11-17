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

// RNEPDA: salida expandida (format +00, loopFlag +04, channels +08).
// Los tipos del lector importado corresponden a otra revision; vista local aislada.
inline int NconGetStrmFormat(u8 v) {
 switch(v) {case 2:return 3;case 1:return 1;case 0:return 2;default:return 3;}
}
struct NconStrmReader { const void* header; const nw4r::snd::detail::StrmFile::HeadBlock* head; };
struct NconStrmInfo {
 int format; bool loopFlag; int numChannels; u32 sampleRate; u16 blockHeaderOffset;
 u32 loopStart, loopEnd, dataOffset, numBlocks, blockSize, blockSamples, lastBlockSize, lastBlockSamples, lastBlockPaddedSize, adpcmDataInterval, adpcmDataSize;
};
extern "C" bool ReadStrmInfo__Q44nw4r3snd6detail14StrmFileReaderCFPQ54nw4r3snd6detail14StrmFileReader8StrmInfo(const NconStrmReader* self, NconStrmInfo* pStrmInfo) {
    const nw4r::snd::detail::StrmFile::StrmDataInfo* pStrmData = nw4r::snd::detail::Util::GetDataRefAddress0(
        self->head->refDataHeader, &self->head->refDataHeader);

    pStrmInfo->format=NconGetStrmFormat(pStrmData->format);
 pStrmInfo->loopFlag = pStrmData->loopFlag != 0;
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

struct NconStrmTrackInfo { u8 volume,pan; int channelCount; u8 channels[32]; };
struct NconStrmTrackEx {u8 volume,pan; u8 padding[2]; u32 reserved; u8 channelCount; u8 channels[];};
extern "C" bool ReadStrmTrackInfo__Q44nw4r3snd6detail14StrmFileReaderCFPQ54nw4r3snd6detail14StrmFileReader13StrmTrackInfoi(const NconStrmReader* self,void* out,int track) {
 using namespace nw4r::snd::detail;
 NconStrmTrackInfo* dest=static_cast<NconStrmTrackInfo*>(out);
 const StrmFile::TrackTable* table=Util::GetDataRefAddress0(self->head->refTrackTable,&self->head->refDataHeader);
 if(track>=table->trackCount)return false;
 switch(table->trackDataType) {
case 0: {
 const StrmFile::TrackInfo* src=Util::GetDataRefAddress0(table->refTrackHeader[track],&self->head->refDataHeader);
 if(!src)return false;
 dest->volume=127;dest->pan=64;
 dest->channelCount=src->channelCount;
 int count=nw4r::ut::Min(dest->channelCount,32);
 for(int i=0;i<count;i++)dest->channels[i]=src->channelIndexTable[i];
 break;
}
case 1: {
 const NconStrmTrackEx* src=reinterpret_cast<const NconStrmTrackEx*>(Util::GetDataRefAddress0(table->refTrackHeader[track],&self->head->refDataHeader));
 if(!src)return false;
 dest->volume=src->volume;dest->pan=src->pan;
 dest->channelCount=src->channelCount;
 int count=nw4r::ut::Min(dest->channelCount,32);
 for(int i=0;i<count;i++)dest->channels[i]=src->channels[i];
 break;
}
}
return true;
}

#pragma dont_inline on
struct NconStrmLoader {void* stream; NconStrmReader reader;};
extern "C" bool ReadStrmInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ54nw4r3snd6detail14StrmFileReader8StrmInfo(const NconStrmLoader* self, NconStrmInfo* out) {
 if (!self->reader.header) return false;
 ReadStrmInfo__Q44nw4r3snd6detail14StrmFileReaderCFPQ54nw4r3snd6detail14StrmFileReader8StrmInfo(&self->reader,out);
 return true;
}
#pragma dont_inline reset

#pragma dont_inline on
extern "C" bool ReadStrmTrackInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ54nw4r3snd6detail14StrmFileReader13StrmTrackInfoi(const NconStrmLoader* self, void* out,int track) {
 if(!self->reader.header)return false;
 typedef bool (*ReadTrack)(const NconStrmReader*,void*,int);
 reinterpret_cast<ReadTrack>(&ReadStrmTrackInfo__Q44nw4r3snd6detail14StrmFileReaderCFPQ54nw4r3snd6detail14StrmFileReader13StrmTrackInfoi)(&self->reader,out,track);
 return true;
}
#pragma dont_inline reset

struct NconAdpcmParam {u16 coef[16]; u16 gain, predScale, yn1, yn2;};
struct NconAdpcmLoop {u16 predScale, yn1, yn2;};
struct NconAdpcmInfo {NconAdpcmParam param; NconAdpcmLoop loop;};
extern "C" bool ReadAdpcmInfo__Q44nw4r3snd6detail14StrmFileLoaderCFPQ44nw4r3snd6detail10AdpcmParamPQ44nw4r3snd6detail14AdpcmLoopParami(const NconStrmLoader* self,NconAdpcmParam* param,NconAdpcmLoop* loop,int channel) {
 using namespace nw4r::snd::detail;
 if(!self->reader.header)return false;
 const StrmFile::StrmDataInfo* data=Util::GetDataRefAddress0(self->reader.head->refDataHeader,&self->reader.head->refDataHeader);
 if(data->format==2) {
 const StrmFile::ChannelTable* table=Util::GetDataRefAddress0(self->reader.head->refChannelTable,&self->reader.head->refDataHeader);
 if(channel<table->channelCount) {
 const StrmFile::ChannelInfo* info=Util::GetDataRefAddress0(table->refChannelHeader[channel],&self->reader.head->refDataHeader);
 const NconAdpcmInfo* src=reinterpret_cast<const NconAdpcmInfo*>(Util::GetDataRefAddress0(info->refAdpcmInfo,&self->reader.head->refDataHeader));
 *param=src->param; *loop=src->loop;
 }
 }
 return true;
}

extern "C" bool ReadAdpcBlockData__Q44nw4r3snd6detail14StrmFileLoaderFPUsPUsii(NconStrmLoader* self,u16* yn1,u16* yn2,int block,int channels) {
 const nw4r::snd::detail::StrmFile::Header* header=static_cast<const nw4r::snd::detail::StrmFile::Header*>(self->reader.header);
 bool available=header!=0;
 if(!available)return false;
 u32 adpcOffset=available?header->adpcBlockOffset:0;
 
 static_cast<nw4r::ut::FileStream*>(self->stream)->Seek(adpcOffset+block*channels*4+8,nw4r::ut::FileStream::SEEK_ORIGIN_BEG);
 u16 buffer[16] ALIGN(32);
 if(static_cast<nw4r::ut::FileStream*>(self->stream)->Read(buffer,sizeof(buffer))!=sizeof(buffer))return false;
 for(int i=0;i<channels;i++){yn1[i]=buffer[i*2];yn2[i]=buffer[i*2+1];}
 return true;
}
