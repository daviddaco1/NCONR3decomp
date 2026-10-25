#include <nw4r/snd.h>
#include <nw4r/ut.h>

namespace nw4r {
namespace snd {
namespace detail {

bool SeqFileReader::IsValidFileHeader(const void* pSeqBin) {
    const ut::BinaryFileHeader* pFileHeader =
        static_cast<const ut::BinaryFileHeader*>(pSeqBin);

    if (pFileHeader->signature != SIGNATURE) {
        return false;
    }

    if (Util::ReadBigEndian(pFileHeader->version) < NW4R_VERSION(1, 0)) {
        return false;
    }

    if (Util::ReadBigEndian(pFileHeader->version) > VERSION) {
        return false;
    }

    return true;
}

SeqFileReader::SeqFileReader(const void* pSeqBin)
    : mHeader(NULL), mDataBlock(NULL) {
    if (!IsValidFileHeader(pSeqBin)) {
        return;
    }

    mHeader = static_cast<const SeqFile::Header*>(pSeqBin);

    mDataBlock = static_cast<const SeqFile::DataBlock*>(ut::AddOffsetToPtr(
        mHeader, Util::ReadBigEndian(mHeader->dataBlockOffset)));
}

const void* SeqFileReader::GetBaseAddress() const {
    return ut::AddOffsetToPtr(mDataBlock,
                              Util::ReadBigEndian(mDataBlock->baseOffset));
}

} // namespace detail
} // namespace snd
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" void ReadOffsetByLabel__Q44nw4r3snd6detail13SeqFileReaderCFPCcPUl();
extern "C" void _restgpr_24();
extern "C" void _savegpr_24();

// asm_to_cpp: ReadOffsetByLabel__Q44nw4r3snd6detail13SeqFileReaderCFPCcPUl
extern "C" asm void ReadOffsetByLabel__Q44nw4r3snd6detail13SeqFileReaderCFPCcPUl() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    lwz r3, 0x0(r3)
    mr r24, r4
    mr r25, r5
    lwz r0, 0x18(r3)
    add. r28, r0, r3
    bne lbl_80210618
    li r3, 0x0
    b lbl_80210684
lbl_80210618:
    mr r3, r24
    bl strlen
    lwz r30, 0x8(r28)
    mr r27, r3
    mr r29, r28
    li r26, 0x0
    b lbl_80210678
lbl_80210634:
    lwz r0, 0xc(r29)
    add r31, r28, r0
    lwz r0, 0xc(r31)
    cmplw r27, r0
    bne lbl_80210670
    mr r3, r24
    mr r5, r27
    addi r4, r31, 0x10
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_80210670
    lwz r0, 0x8(r31)
    li r3, 0x1
    stw r0, 0x0(r25)
    b lbl_80210684
lbl_80210670:
    addi r29, r29, 0x4
    addi r26, r26, 0x1
lbl_80210678:
    cmplw r26, r30
    blt lbl_80210634
    li r3, 0x0
lbl_80210684:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
