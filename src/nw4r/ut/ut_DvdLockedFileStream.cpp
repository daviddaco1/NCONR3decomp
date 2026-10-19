#include <nw4r/ut.h>

#include <revolution/OS.h>

namespace nw4r {
namespace ut {

NW4R_UT_RTTI_DEF_DERIVED(DvdLockedFileStream, DvdFileStream);

bool DvdLockedFileStream::sInitialized = false;
OSMutex DvdLockedFileStream::sMutex;

void DvdLockedFileStream::InitMutex_() {
    BOOL enabled = OSDisableInterrupts();

    if (!sInitialized) {
        OSInitMutex(&sMutex);
        sInitialized = true;
    }

    OSRestoreInterrupts(enabled);
}

DvdLockedFileStream::DvdLockedFileStream(s32 entrynum)
    : DvdFileStream(entrynum) {
    InitMutex_();
}

DvdLockedFileStream::DvdLockedFileStream(const DVDFileInfo* pInfo, bool close)
    : DvdFileStream(pInfo, close) {
    InitMutex_();
}

DvdLockedFileStream::~DvdLockedFileStream() {}

s32 DvdLockedFileStream::Read(void* pDst, u32 size) {
    OSLockMutex(&sMutex);
    s32 result = DvdFileStream::Read(pDst, size);
    OSUnlockMutex(&sMutex);
    return result;
}

s32 DvdLockedFileStream::Peek(void* pDst, u32 size) {
    OSLockMutex(&sMutex);
    s32 result = DvdFileStream::Peek(pDst, size);
    OSUnlockMutex(&sMutex);
    return result;
}

} // namespace ut
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049DAB0;
extern "C" float lbl_8049DAB8;
extern "C" float lbl_8049DAC0;
extern "C" float lbl_8049DAC8;
extern "C" u8 lbl_80362B70[];
extern "C" u8 lbl_80409168[];
extern "C" void Cancel__Q34nw4r2ut13DvdFileStreamFv();
extern "C" void Cancel__Q34nw4r2ut19DvdLockedFileStreamFv();
extern "C" void Close__Q34nw4r2ut13DvdFileStreamFv();
extern "C" void Close__Q34nw4r2ut19DvdLockedFileStreamFv();
extern "C" void Peek__Q34nw4r2ut13DvdFileStreamFPvUl();
extern "C" void Peek__Q34nw4r2ut19DvdLockedFileStreamFPvUl();
extern "C" void Read__Q34nw4r2ut13DvdFileStreamFPvUl();
extern "C" void Read__Q34nw4r2ut19DvdLockedFileStreamFPvUl();
extern "C" void __ct__Q34nw4r2ut13DvdFileStreamFPC11DVDFileInfob();
extern "C" void __ct__Q34nw4r2ut13DvdFileStreamFl();
extern "C" void __ct__Q34nw4r2ut19DvdLockedFileStreamFPC11DVDFileInfob();
extern "C" void __ct__Q34nw4r2ut19DvdLockedFileStreamFl();
extern "C" void _restgpr_27();
extern "C" void _savegpr_27();
extern "C" void fn_8022424C();
extern "C" void fn_8031D978();

// asm_to_cpp: __ct__Q34nw4r2ut19DvdLockedFileStreamFl
extern "C" asm void __ct__Q34nw4r2ut19DvdLockedFileStreamFl() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl __ct__Q34nw4r2ut13DvdFileStreamFl
    lis r3, lbl_80362B70@ha
    li r0, 0x0
    addi r3, r3, lbl_80362B70@l
    stb r0, 0x6f(r30)
    stw r3, 0x0(r30)
    bl OSDisableInterrupts
    lbz r0, lbl_8049DAC8
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_80223F18
    lis r3, lbl_80409168@ha
    addi r3, r3, lbl_80409168@l
    bl OSInitMutex
    la r3, lbl_8049DAC0
    bl OSInitThreadQueue
    li r0, 0x1
    stb r0, lbl_8049DAC8
lbl_80223F18:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __ct__Q34nw4r2ut19DvdLockedFileStreamFPC11DVDFileInfob
extern "C" asm void __ct__Q34nw4r2ut19DvdLockedFileStreamFPC11DVDFileInfob() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl __ct__Q34nw4r2ut13DvdFileStreamFPC11DVDFileInfob
    lis r3, lbl_80362B70@ha
    li r0, 0x0
    addi r3, r3, lbl_80362B70@l
    stb r0, 0x6f(r30)
    stw r3, 0x0(r30)
    bl OSDisableInterrupts
    lbz r0, lbl_8049DAC8
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_80223F9C
    lis r3, lbl_80409168@ha
    addi r3, r3, lbl_80409168@l
    bl OSInitMutex
    la r3, lbl_8049DAC0
    bl OSInitThreadQueue
    li r0, 0x1
    stb r0, lbl_8049DAC8
lbl_80223F9C:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: Close__Q34nw4r2ut19DvdLockedFileStreamFv
extern "C" asm void Close__Q34nw4r2ut19DvdLockedFileStreamFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl Close__Q34nw4r2ut13DvdFileStreamFv
    li r0, 0x0
    stb r0, 0x6f(r31)
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: Read__Q34nw4r2ut19DvdLockedFileStreamFPvUl
extern "C" asm void Read__Q34nw4r2ut19DvdLockedFileStreamFPvUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    bl OSDisableInterrupts
    mr r30, r3
    lis r31, lbl_80409168@ha
    b lbl_802240A0
lbl_8022407C:
    la r3, lbl_8049DAC0
    bl OSSleepThread
    lbz r0, 0x6f(r27)
    cmpwi r0, 0x0
    beq lbl_802240A0
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_802240BC
lbl_802240A0:
    addi r3, r31, lbl_80409168@l
    bl OSTryLockMutex
    cmpwi r3, 0x0
    beq lbl_8022407C
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_802240BC:
    cmpwi r0, 0x0
    bne lbl_802240CC
    li r3, -0x3
    b lbl_80224108
lbl_802240CC:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl Read__Q34nw4r2ut13DvdFileStreamFPvUl
    mr r31, r3
    bl OSDisableInterrupts
    lis r4, lbl_80409168@ha
    mr r30, r3
    addi r3, r4, lbl_80409168@l
    bl OSUnlockMutex
    la r3, lbl_8049DAC0
    bl fn_8031D978
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
lbl_80224108:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: Peek__Q34nw4r2ut19DvdLockedFileStreamFPvUl
extern "C" asm void Peek__Q34nw4r2ut19DvdLockedFileStreamFPvUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    bl OSDisableInterrupts
    mr r30, r3
    lis r31, lbl_80409168@ha
    b lbl_80224174
lbl_80224150:
    la r3, lbl_8049DAC0
    bl OSSleepThread
    lbz r0, 0x6f(r27)
    cmpwi r0, 0x0
    beq lbl_80224174
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x0
    b lbl_80224190
lbl_80224174:
    addi r3, r31, lbl_80409168@l
    bl OSTryLockMutex
    cmpwi r3, 0x0
    beq lbl_80224150
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x1
lbl_80224190:
    cmpwi r0, 0x0
    bne lbl_802241A0
    li r3, -0x3
    b lbl_802241DC
lbl_802241A0:
    mr r3, r27
    mr r4, r28
    mr r5, r29
    bl Peek__Q34nw4r2ut13DvdFileStreamFPvUl
    mr r31, r3
    bl OSDisableInterrupts
    lis r4, lbl_80409168@ha
    mr r30, r3
    addi r3, r4, lbl_80409168@l
    bl OSUnlockMutex
    la r3, lbl_8049DAC0
    bl fn_8031D978
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
lbl_802241DC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: Cancel__Q34nw4r2ut19DvdLockedFileStreamFv
extern "C" asm void Cancel__Q34nw4r2ut19DvdLockedFileStreamFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    li r0, 0x1
    mr r31, r3
    stb r0, 0x6f(r30)
    la r3, lbl_8049DAC0
    bl fn_8031D978
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    bl Cancel__Q34nw4r2ut13DvdFileStreamFv
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8022424C
extern "C" asm void fn_8022424C() {
    nofralloc
    la r0, lbl_8049DAB0
    stw r0, lbl_8049DAB8
    blr
}
