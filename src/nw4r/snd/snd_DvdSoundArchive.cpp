#include <nw4r/snd.h>
#include <nw4r/ut.h>

#include <revolution/DVD.h>

#include <cstring>

namespace nw4r {
namespace snd {

class DvdSoundArchive::DvdFileStream : public ut::DvdLockedFileStream {
public:
    DvdFileStream(const DVDFileInfo* pFileInfo, u32 offset, u32 size);
    DvdFileStream(s32 entrynum, u32 offset, u32 size);

    virtual s32 Read(void* pDst, u32 size);    // at 0x14
    virtual void Seek(s32 offset, u32 origin); // at 0x44

    virtual u32 Tell() const {
        return ut::DvdFileStream::Tell() - mOffset;
    } // at 0x58

    virtual u32 GetSize() const {
        return mSize;
    } // at 0x40

private:
    s32 mOffset; // at 0x70
    s32 mSize;   // at 0x74
};

DvdSoundArchive::DvdSoundArchive() : mOpen(false) {}

// __dt__Q34nw4r3snd15DvdSoundArchiveFv: definicion C reemplazada por asm (ver abajo)


bool DvdSoundArchive::Open(s32 entrynum) {
    if (!DVDFastOpen(entrynum, &mFileInfo)) {
        return false;
    }

    mOpen = true;
    return LoadFileHeader();
}

bool DvdSoundArchive::Open(const char* pPath) {
    s32 entrynum = DVDConvertPathToEntrynum(pPath);
    if (entrynum < 0) {
        return false;
    }

    if (!Open(entrynum)) {
        return false;
    }

    char extRoot[FILE_PATH_MAX];
    for (int i = std::strlen(pPath) - 1; i >= 0; i--) {
        if (pPath[i] == '/' || pPath[i] == '\\') {
            // @bug Long path can overflow extRoot buffer
            std::strncpy(extRoot, pPath, i);
            extRoot[i] = '\0';

            SetExternalFileRoot(extRoot);
            break;
        }
    }

    return true;
}

// Close__Q34nw4r3snd15DvdSoundArchiveFv: definicion C reemplazada por asm (ver abajo)


// OpenStream__Q34nw4r3snd15DvdSoundArchiveCFPviUlUl: definicion C reemplazada por asm (ver abajo)


// OpenExtStream__Q34nw4r3snd15DvdSoundArchiveCFPviPCcUlUl: definicion C reemplazada por asm (ver abajo)


int DvdSoundArchive::detail_GetRequiredStreamBufferSize() const {
    return sizeof(DvdFileStream);
}

bool DvdSoundArchive::LoadFileHeader() {
    u8 headerArea[detail::SoundArchiveFile::HEADER_AREA_SIZE];

    static const u32 headerAlignSize =
        ut::RoundUp(sizeof(detail::SoundArchiveFile::Header), 32);

    void* pFile = ut::RoundUp<u8>(headerArea, 32);

    s32 bytesRead =
        DVDReadPrio(&mFileInfo, pFile, headerAlignSize, 0, DVD_PRIO_MEDIUM);

    if (bytesRead != headerAlignSize) {
        return false;
    }

    mFileReader.Init(pFile);
    Setup(&mFileReader);

    return true;
}

bool DvdSoundArchive::LoadHeader(void* pBuffer, u32 size) {
    u32 infoSize = mFileReader.GetInfoChunkSize();
    s32 infoOffset = mFileReader.GetInfoChunkOffset();

    if (size < infoSize) {
        return false;
    }

    s32 bytesRead =
        DVDReadPrio(&mFileInfo, pBuffer, infoSize, infoOffset, DVD_PRIO_MEDIUM);

    if (bytesRead != infoSize) {
        return false;
    }

    mFileReader.SetInfoChunk(pBuffer, infoSize);
    return true;
}

bool DvdSoundArchive::LoadLabelStringData(void* pBuffer, u32 size) {
    u32 labelSize = mFileReader.GetLabelStringChunkSize();
    s32 labelOffset = mFileReader.GetLabelStringChunkOffset();

    if (size < labelSize) {
        return false;
    }

    s32 bytesRead = DVDReadPrio(&mFileInfo, pBuffer, labelSize, labelOffset,
                                DVD_PRIO_MEDIUM);

    if (bytesRead != labelSize) {
        return false;
    }

    mFileReader.SetStringChunk(pBuffer, labelSize);
    return true;
}

DvdSoundArchive::DvdFileStream::DvdFileStream(const DVDFileInfo* pFileInfo,
                                              u32 offset, u32 size)
    : DvdLockedFileStream(pFileInfo, false), mOffset(offset), mSize(size) {
    if (mSize == 0) {
        mSize = ut::DvdFileStream::GetSize();
    }

    ut::DvdFileStream::Seek(mOffset, SEEK_ORIGIN_BEG);
}

DvdSoundArchive::DvdFileStream::DvdFileStream(s32 entrynum, u32 offset,
                                              u32 size)
    : DvdLockedFileStream(entrynum), mOffset(offset), mSize(size) {
    if (mSize == 0) {
        mSize = ut::DvdFileStream::GetSize();
    }

    ut::DvdFileStream::Seek(mOffset, SEEK_ORIGIN_BEG);
}

s32 DvdSoundArchive::DvdFileStream::Read(void* pDst, u32 size) {
    u32 endOffset = mOffset + mSize;
    u32 startOffset = ut::DvdFileStream::Tell();

    if (startOffset + size > endOffset) {
        size = ut::RoundUp(endOffset - ut::DvdFileStream::Tell(), 32);
    }

    return DvdLockedFileStream::Read(pDst, size);
}

void DvdSoundArchive::DvdFileStream::Seek(s32 offset, u32 origin) {
    switch (origin) {
    case SEEK_ORIGIN_BEG: {
        offset += mOffset;
        break;
    }

    case SEEK_ORIGIN_CUR: {
        offset += ut::DvdFileStream::Tell();
        break;
    }

    case SEEK_ORIGIN_END: {
        offset = mOffset + mSize - offset;
        break;
    }

    default: {
        return;
    }
    }

    if (offset < mOffset) {
        offset = mOffset;
    } else if (offset > mOffset + mSize) {
        offset = mOffset + mSize;
    }

    ut::DvdFileStream::Seek(offset, SEEK_ORIGIN_BEG);
}

} // namespace snd
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049DAB8;
extern "C" u8 lbl_80362430[];
extern "C" u8 lbl_80362498[];
extern "C" void Close__Q34nw4r3snd15DvdSoundArchiveFv();
extern "C" void Init__Q44nw4r3snd6detail22SoundArchiveFileReaderFPCv();
extern "C" void OpenExtStream__Q34nw4r3snd15DvdSoundArchiveCFPviPCcUlUl();
extern "C" void OpenStream__Q34nw4r3snd15DvdSoundArchiveCFPviUlUl();
extern "C" void Open__Q34nw4r3snd15DvdSoundArchiveFPCc();
extern "C" void Seek__Q34nw4r2ut13DvdFileStreamFlUl();
extern "C" void SetExternalFileRoot__Q34nw4r3snd12SoundArchiveFPCc();
extern "C" void Setup__Q34nw4r3snd12SoundArchiveFPQ44nw4r3snd6detail22SoundArchiveFileReader();
extern "C" void Shutdown__Q34nw4r3snd12SoundArchiveFv();
extern "C" void __ct__Q34nw4r2ut19DvdLockedFileStreamFPC11DVDFileInfob();
extern "C" void __ct__Q34nw4r2ut19DvdLockedFileStreamFl();
extern "C" void __dt__Q34nw4r3snd12SoundArchiveFv();
extern "C" void __dt__Q34nw4r3snd15DvdSoundArchiveFv();
extern "C" void dtor_80136CFC();
extern "C" void fn_8020BC8C();
extern "C" u32 fn_8020BD14();
extern "C" u32 fn_8020BD1C();
extern "C" u32 fn_8020BD24();
extern "C" u32 fn_8020BD2C();
extern "C" u32 fn_8020BD34();
extern "C" u32 fn_8020BD3C();
extern "C" u32 fn_8020BD44();
extern "C" u8 fn_8020BD4C(const u8 *self);
extern "C" u32 fn_8020BD54();
extern "C" u32 fn_8020BD5C();
extern "C" u32 fn_8020BD64();
extern "C" const void *fn_8020BD6C();

// asm_to_cpp: __dt__Q34nw4r3snd15DvdSoundArchiveFv
extern "C" asm void __dt__Q34nw4r3snd15DvdSoundArchiveFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_8020B834
    lbz r0, 0x188(r3)
    lis r4, lbl_80362498@ha
    addi r4, r4, lbl_80362498@l
    cmpwi r0, 0x0
    stw r4, 0x0(r3)
    beq lbl_8020B810
    addi r3, r3, 0x14c
    bl DVDClose
    li r0, 0x0
    stb r0, 0x188(r30)
lbl_8020B810:
    mr r3, r30
    bl Shutdown__Q34nw4r3snd12SoundArchiveFv
    mr r3, r30
    li r4, 0x0
    bl __dt__Q34nw4r3snd12SoundArchiveFv
    cmpwi r31, 0x0
    ble lbl_8020B834
    mr r3, r30
    bl dtor_80136CFC
lbl_8020B834:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: Open__Q34nw4r3snd15DvdSoundArchiveFPCc
extern "C" asm void Open__Q34nw4r3snd15DvdSoundArchiveFPCc() {
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    stw r31, 0x17c(r1)
    stw r30, 0x178(r1)
    mr r30, r4
    stw r29, 0x174(r1)
    mr r29, r3
    mr r3, r30
    bl DVDConvertPathToEntrynum
    cmpwi r3, 0x0
    bge lbl_8020B888
    li r3, 0x0
    b lbl_8020B980
lbl_8020B888:
    addi r4, r29, 0x14c
    bl DVDFastOpen
    cmpwi r3, 0x0
    bne lbl_8020B8A0
    li r0, 0x0
    b lbl_8020B8F4
lbl_8020B8A0:
    addi r0, r1, 0x27
    li r3, 0x1
    clrrwi r31, r0, 5
    stb r3, 0x188(r29)
    mr r4, r31
    addi r3, r29, 0x14c
    li r5, 0x40
    li r6, 0x0
    li r7, 0x2
    bl DVDReadPrio
    cmplwi r3, 0x40
    beq lbl_8020B8D8
    li r0, 0x0
    b lbl_8020B8F4
lbl_8020B8D8:
    mr r4, r31
    addi r3, r29, 0x108
    bl Init__Q44nw4r3snd6detail22SoundArchiveFileReaderFPCv
    mr r3, r29
    addi r4, r29, 0x108
    bl Setup__Q34nw4r3snd12SoundArchiveFPQ44nw4r3snd6detail22SoundArchiveFileReader
    li r0, 0x1
lbl_8020B8F4:
    cmpwi r0, 0x0
    bne lbl_8020B904
    li r3, 0x0
    b lbl_8020B980
lbl_8020B904:
    mr r3, r30
    bl strlen
    subic. r31, r3, 0x1
    addi r0, r31, 0x1
    add r3, r30, r31
    mtctr r0
    blt lbl_8020B97C
lbl_8020B920:
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x2f
    beq lbl_8020B938
    cmpwi r0, 0x5c
    bne lbl_8020B970
lbl_8020B938:
    cmpwi r31, 0x100
    blt lbl_8020B948
    li r3, 0x0
    b lbl_8020B980
lbl_8020B948:
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x70
    bl strncpy
    addi r4, r1, 0x70
    li r0, 0x0
    stbx r0, r4, r31
    mr r3, r29
    bl SetExternalFileRoot__Q34nw4r3snd12SoundArchiveFPCc
    b lbl_8020B97C
lbl_8020B970:
    subi r31, r31, 0x1
    subi r3, r3, 0x1
    bdnz lbl_8020B920
lbl_8020B97C:
    li r3, 0x1
lbl_8020B980:
    lwz r0, 0x184(r1)
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    lwz r29, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

// asm_to_cpp: Close__Q34nw4r3snd15DvdSoundArchiveFv
extern "C" asm void Close__Q34nw4r3snd15DvdSoundArchiveFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x188(r3)
    cmpwi r0, 0x0
    beq lbl_8020B9CC
    addi r3, r3, 0x14c
    bl DVDClose
    li r0, 0x0
    stb r0, 0x188(r31)
lbl_8020B9CC:
    mr r3, r31
    bl Shutdown__Q34nw4r3snd12SoundArchiveFv
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: OpenStream__Q34nw4r3snd15DvdSoundArchiveCFPviUlUl
extern "C" asm void OpenStream__Q34nw4r3snd15DvdSoundArchiveCFPviUlUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r8, r3
    stw r0, 0x24(r1)
    lbz r0, 0x188(r3)
    stw r31, 0x1c(r1)
    mr r31, r7
    cmpwi r0, 0x0
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_8020BA24
    li r3, 0x0
    b lbl_8020BA74
lbl_8020BA24:
    cmplwi r5, 0x78
    bge lbl_8020BA34
    li r3, 0x0
    b lbl_8020BA74
lbl_8020BA34:
    cmpwi r4, 0x0
    beq lbl_8020BA70
    mr r3, r29
    addi r4, r8, 0x14c
    li r5, 0x0
    bl __ct__Q34nw4r2ut19DvdLockedFileStreamFPC11DVDFileInfob
    lis r4, lbl_80362430@ha
    stw r30, 0x70(r29)
    addi r4, r4, lbl_80362430@l
    mr r3, r29
    stw r4, 0x0(r29)
    mr r4, r30
    li r5, 0x0
    stw r31, 0x74(r29)
    bl Seek__Q34nw4r2ut13DvdFileStreamFlUl
lbl_8020BA70:
    mr r3, r29
lbl_8020BA74:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: OpenExtStream__Q34nw4r3snd15DvdSoundArchiveCFPviPCcUlUl
extern "C" asm void OpenExtStream__Q34nw4r3snd15DvdSoundArchiveCFPviPCcUlUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lbz r0, 0x188(r3)
    stw r31, 0x1c(r1)
    mr r31, r8
    cmpwi r0, 0x0
    stw r30, 0x18(r1)
    mr r30, r7
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_8020BAC8
    li r3, 0x0
    b lbl_8020BB2C
lbl_8020BAC8:
    cmplwi r5, 0x78
    bge lbl_8020BAD8
    li r3, 0x0
    b lbl_8020BB2C
lbl_8020BAD8:
    mr r3, r6
    bl DVDConvertPathToEntrynum
    cmpwi r3, 0x0
    mr r4, r3
    bge lbl_8020BAF4
    li r3, 0x0
    b lbl_8020BB2C
lbl_8020BAF4:
    cmpwi r29, 0x0
    beq lbl_8020BB28
    mr r3, r29
    bl __ct__Q34nw4r2ut19DvdLockedFileStreamFl
    lis r4, lbl_80362430@ha
    stw r30, 0x70(r29)
    addi r4, r4, lbl_80362430@l
    mr r3, r29
    stw r4, 0x0(r29)
    mr r4, r30
    li r5, 0x0
    stw r31, 0x74(r29)
    bl Seek__Q34nw4r2ut13DvdFileStreamFlUl
lbl_8020BB28:
    mr r3, r29
lbl_8020BB2C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8020BC8C
extern "C" asm void fn_8020BC8C() {
    nofralloc
    cmpwi r5, 0x1
    beq lbl_8020BCBC
    bge lbl_8020BCA4
    cmpwi r5, 0x0
    bge lbl_8020BCB0
    blr
lbl_8020BCA4:
    cmpwi r5, 0x3
    bgelr
    b lbl_8020BCC8
lbl_8020BCB0:
    lwz r0, 0x70(r3)
    add r4, r4, r0
    b lbl_8020BCE0
lbl_8020BCBC:
    lwz r0, 0x18(r3)
    add r4, r4, r0
    b lbl_8020BCE0
lbl_8020BCC8:
    lwz r5, 0x70(r3)
    lwz r0, 0x74(r3)
    add r0, r5, r0
    subf r4, r4, r0
    b lbl_8020BCE0
    blr
lbl_8020BCE0:
    lwz r5, 0x70(r3)
    cmpw r4, r5
    bge lbl_8020BCF4
    mr r4, r5
    b lbl_8020BD08
lbl_8020BCF4:
    lwz r0, 0x74(r3)
    add r0, r5, r0
    cmpw r4, r0
    ble lbl_8020BD08
    mr r4, r0
lbl_8020BD08:
    li r5, 0x0
    b Seek__Q34nw4r2ut13DvdFileStreamFlUl
    blr
}

extern "C" u32 fn_8020BD14() {
    return 0x20;
}

extern "C" u32 fn_8020BD1C() {
    return 0x20;
}

extern "C" u32 fn_8020BD24() {
    return 4;
}

extern "C" u32 fn_8020BD2C() {
    return 1;
}

extern "C" u32 fn_8020BD34() {
    return 0;
}

extern "C" u32 fn_8020BD3C() {
    return 1;
}

extern "C" u32 fn_8020BD44() {
    return 1;
}

extern "C" u8 fn_8020BD4C(const u8 *self) {
    return self[0x6C];
}

extern "C" u32 fn_8020BD54() {
    return 0;
}

extern "C" u32 fn_8020BD5C() {
    return 0;
}

extern "C" u32 fn_8020BD64() {
    return 0;
}

extern "C" const void *fn_8020BD6C() {
    return &lbl_8049DAB8;
}
