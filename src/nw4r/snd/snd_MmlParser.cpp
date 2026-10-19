#include <nw4r/snd.h>
#include <nw4r/ut.h>

#include <revolution/OS.h>

namespace nw4r {
namespace snd {
namespace detail {

bool MmlParser::mPrintVarEnabledFlag = false;

// Parse__Q44nw4r3snd6detail9MmlParserCFPQ44nw4r3snd6detail11MmlSeqTrackb: definicion C reemplazada por asm (ver abajo)


// CommandProc__Q44nw4r3snd6detail9MmlParserCFPQ44nw4r3snd6detail11MmlSeqTrackUlll: definicion C reemplazada por asm (ver abajo)


Channel* MmlParser::NoteOnCommandProc(MmlSeqTrack* pTrack, int key,
                                      int velocity, s32 length,
                                      bool tie) const {
    return pTrack->NoteOn(key, velocity, length, tie);
}

u16 MmlParser::Read16(const u8** ppData) const {
    u16 val = ReadByte(ppData);

    val <<= 8;
    val |= ReadByte(ppData);

    return val;
}

u32 MmlParser::Read24(const u8** ppData) const {
    u32 val = ReadByte(ppData);

    val <<= 8;
    val |= ReadByte(ppData);

    val <<= 8;
    val |= ReadByte(ppData);

    return val;
}

s32 MmlParser::ReadVar(const u8** ppData) const {
    u32 val = 0;
    u8 b;

    do {
        b = ReadByte(ppData);
        val <<= 7;
        val |= b & 0x7F;
    } while (b & 0x80);

    return val;
}

// ReadArg__Q44nw4r3snd6detail9MmlParserCFPPCUcPQ44nw4r3snd6detail9SeqPlayerPQ44nw4r3snd6detail8SeqTrackQ54nw4r3snd6detail9MmlParser10SeqArgType: definicion C reemplazada por asm (ver abajo)


volatile s16* MmlParser::GetVariablePtr(SeqPlayer* pPlayer, SeqTrack* pTrack,
                                        int idx) const {
    if (idx < SeqPlayer::VARIABLE_NUM) {
        return pPlayer->GetVariablePtr(idx);
    }

    if (idx < SeqPlayer::VARIABLE_NUM + SeqTrack::VARIABLE_NUM) {
        return pTrack->GetVariablePtr(idx - SeqPlayer::VARIABLE_NUM);
    }

    return NULL;
}

} // namespace detail
} // namespace snd
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_8049C520;
extern "C" float lbl_8049C524;
extern "C" float lbl_8049C528;
extern "C" float lbl_8049DA48;
extern "C" float lbl_804A2160;
extern "C" float lbl_804A2164;
extern "C" float lbl_804A2168;
extern "C" float lbl_804A216C;
extern "C" float lbl_804A2170;
extern "C" float lbl_804A2178;
extern "C" u8 jumptable_80362580[];
extern "C" u8 lbl_80362558[];
extern "C" void CalcRandom__Q44nw4r3snd6detail4UtilFv();
extern "C" void CallSeqUserprocCallback__Q44nw4r3snd6detail9SeqPlayerFUsPQ44nw4r3snd6detail8SeqTrack();
extern "C" void Close__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void CommandProc__Q44nw4r3snd6detail9MmlParserCFPQ44nw4r3snd6detail11MmlSeqTrackUlll();
extern "C" void FreeAllChannel__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void GetPlayerTrack__Q44nw4r3snd6detail9SeqPlayerFi();
extern "C" void GetVariablePtr__Q44nw4r3snd6detail8SeqTrackFi();
extern "C" void GetVariablePtr__Q44nw4r3snd6detail9SeqPlayerFi();
extern "C" void Open__Q44nw4r3snd6detail8SeqTrackFv();
extern "C" void ParseAllocTrack__Q44nw4r3snd6detail9MmlParserFPCvUlPUl();
extern "C" void Parse__Q44nw4r3snd6detail9MmlParserCFPQ44nw4r3snd6detail11MmlSeqTrackb();
extern "C" void ReadArg__Q44nw4r3snd6detail9MmlParserCFPPCUcPQ44nw4r3snd6detail9SeqPlayerPQ44nw4r3snd6detail8SeqTrackQ54nw4r3snd6detail9MmlParser10SeqArgType();
extern "C" void ReleaseAllChannel__Q44nw4r3snd6detail8SeqTrackFi();
extern "C" void SetMute__Q44nw4r3snd6detail8SeqTrackFQ34nw4r3snd7SeqMute();
extern "C" void SetSeqData__Q44nw4r3snd6detail8SeqTrackFPCvl();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();

// asm_to_cpp: Parse__Q44nw4r3snd6detail9MmlParserCFPQ44nw4r3snd6detail11MmlSeqTrackb
extern "C" asm void Parse__Q44nw4r3snd6detail9MmlParserCFPQ44nw4r3snd6detail11MmlSeqTrackb() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lwz r7, 0x20(r4)
    mr r25, r3
    lwz r31, 0xc0(r4)
    mr r26, r4
    addi r6, r7, 0x1
    mr r27, r5
    stw r6, 0x20(r4)
    li r30, 0x0
    li r3, 0x0
    li r29, 0x1
    lbz r28, 0x0(r7)
    cmplwi r28, 0xa2
    bne lbl_8020E4A0
    addi r0, r6, 0x1
    lbz r5, 0x24(r4)
    stw r0, 0x20(r4)
    neg r0, r5
    or r0, r0, r5
    lbz r28, 0x0(r6)
    srwi r29, r0, 31
lbl_8020E4A0:
    cmplwi r28, 0xa3
    bne lbl_8020E4C0
    lwz r6, 0x20(r4)
    li r30, 0x2
    addi r5, r6, 0x1
    stw r5, 0x20(r4)
    lbz r28, 0x0(r6)
    b lbl_8020E4FC
lbl_8020E4C0:
    cmplwi r28, 0xa4
    bne lbl_8020E4E0
    lwz r6, 0x20(r4)
    li r30, 0x4
    addi r5, r6, 0x1
    stw r5, 0x20(r4)
    lbz r28, 0x0(r6)
    b lbl_8020E4FC
lbl_8020E4E0:
    cmplwi r28, 0xa5
    bne lbl_8020E4FC
    lwz r6, 0x20(r4)
    li r30, 0x5
    addi r5, r6, 0x1
    stw r5, 0x20(r4)
    lbz r28, 0x0(r6)
lbl_8020E4FC:
    cmplwi r28, 0xa0
    bne lbl_8020E520
    lwz r6, 0x20(r4)
    li r0, 0x4
    li r3, 0x1
    addi r5, r6, 0x1
    stw r5, 0x20(r4)
    lbz r28, 0x0(r6)
    b lbl_8020E540
lbl_8020E520:
    cmplwi r28, 0xa1
    bne lbl_8020E540
    lwz r6, 0x20(r4)
    li r0, 0x5
    li r3, 0x1
    addi r5, r6, 0x1
    stw r5, 0x20(r4)
    lbz r28, 0x0(r6)
lbl_8020E540:
    rlwinm. r5, r28, 0, 24, 24
    bne lbl_8020E618
    lwz r8, 0x20(r4)
    cmpwi r3, 0x0
    mr r3, r25
    mr r5, r31
    addi r7, r8, 0x1
    mr r6, r26
    stwu r7, 0x20(r4)
    li r7, 0x3
    lbz r24, 0x0(r8)
    beq lbl_8020E574
    mr r7, r0
lbl_8020E574:
    bl ReadArg__Q44nw4r3snd6detail9MmlParserCFPPCUcPQ44nw4r3snd6detail9SeqPlayerPQ44nw4r3snd6detail8SeqTrackQ54nw4r3snd6detail9MmlParser10SeqArgType
    lbz r0, 0x87(r26)
    cmpwi r29, 0x0
    mr r23, r3
    extsb r0, r0
    add r3, r28, r0
    bne lbl_8020E598
    li r3, 0x0
    b lbl_8020EAF4
lbl_8020E598:
    cmpwi r3, 0x7f
    ble lbl_8020E5A8
    li r5, 0x7f
    b lbl_8020E5B0
lbl_8020E5A8:
    srawi r0, r3, 31
    andc r5, r3, r0
lbl_8020E5B0:
    lbz r0, 0x48(r26)
    cmpwi r0, 0x0
    bne lbl_8020E5F4
    cmpwi r27, 0x0
    beq lbl_8020E5F4
    cmpwi r23, 0x0
    mr r3, r25
    mr r4, r26
    mr r6, r24
    li r7, -0x1
    ble lbl_8020E5E0
    mr r7, r23
lbl_8020E5E0:
    lwz r12, 0x0(r3)
    lbz r8, 0x26(r26)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_8020E5F4:
    lbz r0, 0x25(r26)
    cmpwi r0, 0x0
    beq lbl_8020EAF0
    cmpwi r23, 0x0
    stw r23, 0x44(r26)
    bne lbl_8020EAF0
    li r0, 0x1
    stb r0, 0x4a(r26)
    b lbl_8020EAF0
lbl_8020E618:
    rlwinm r5, r28, 0, 24, 27
    li r23, 0x0
    cmpwi r5, 0xc0
    li r27, 0x0
    beq lbl_8020E868
    bge lbl_8020E660
    cmpwi r5, 0xa0
    beq lbl_8020EAF0
    bge lbl_8020E654
    cmpwi r5, 0x90
    beq lbl_8020E904
    bge lbl_8020EAF0
    cmpwi r5, 0x80
    beq lbl_8020E684
    b lbl_8020EAF0
lbl_8020E654:
    cmpwi r5, 0xb0
    beq lbl_8020E868
    b lbl_8020EAF0
lbl_8020E660:
    cmpwi r5, 0xe0
    beq lbl_8020E934
    bge lbl_8020E678
    cmpwi r5, 0xd0
    beq lbl_8020E868
    b lbl_8020EAF0
lbl_8020E678:
    cmpwi r5, 0xf0
    beq lbl_8020E988
    b lbl_8020EAF0
lbl_8020E684:
    cmpwi r28, 0x88
    beq lbl_8020E740
    bge lbl_8020E6A8
    cmpwi r28, 0x81
    beq lbl_8020E6EC
    bge lbl_8020EAF0
    cmpwi r28, 0x80
    bge lbl_8020E6B8
    b lbl_8020EAF0
lbl_8020E6A8:
    cmpwi r28, 0x8a
    beq lbl_8020E808
    bge lbl_8020EAF0
    b lbl_8020E7A8
lbl_8020E6B8:
    cmpwi r3, 0x0
    mr r3, r25
    mr r5, r31
    mr r6, r26
    li r7, 0x3
    addi r4, r4, 0x20
    beq lbl_8020E6D8
    mr r7, r0
lbl_8020E6D8:
    bl ReadArg__Q44nw4r3snd6detail9MmlParserCFPPCUcPQ44nw4r3snd6detail9SeqPlayerPQ44nw4r3snd6detail8SeqTrackQ54nw4r3snd6detail9MmlParser10SeqArgType
    cmpwi r29, 0x0
    beq lbl_8020EAF0
    stw r3, 0x44(r26)
    b lbl_8020EAF0
lbl_8020E6EC:
    cmpwi r3, 0x0
    mr r3, r25
    mr r5, r31
    mr r6, r26
    li r7, 0x3
    addi r4, r4, 0x20
    beq lbl_8020E70C
    mr r7, r0
lbl_8020E70C:
    bl ReadArg__Q44nw4r3snd6detail9MmlParserCFPPCUcPQ44nw4r3snd6detail9SeqPlayerPQ44nw4r3snd6detail8SeqTrackQ54nw4r3snd6detail9MmlParser10SeqArgType
    cmpwi r29, 0x0
    mr r6, r3
    beq lbl_8020EAF0
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_8020EAF0
lbl_8020E740:
    lwz r6, 0x20(r4)
    cmpwi r29, 0x0
    addi r5, r6, 0x1
    stw r5, 0x20(r4)
    addi r7, r5, 0x1
    addi r3, r7, 0x1
    lbz r6, 0x0(r6)
    addi r0, r3, 0x1
    stw r7, 0x20(r4)
    lbz r5, 0x0(r5)
    stw r3, 0x20(r4)
    lbz r7, 0x0(r7)
    rlwimi r7, r5, 8, 16, 23
    stw r0, 0x20(r4)
    slwi r7, r7, 8
    lbz r0, 0x0(r3)
    or r7, r7, r0
    beq lbl_8020EAF0
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_8020EAF0
lbl_8020E7A8:
    lwz r5, 0x20(r4)
    cmpwi r29, 0x0
    addi r6, r5, 0x1
    stw r6, 0x20(r4)
    addi r3, r6, 0x1
    addi r0, r3, 0x1
    lbz r5, 0x0(r5)
    stw r3, 0x20(r4)
    lbz r6, 0x0(r6)
    rlwimi r6, r5, 8, 16, 23
    stw r0, 0x20(r4)
    slwi r6, r6, 8
    lbz r0, 0x0(r3)
    or r6, r6, r0
    beq lbl_8020EAF0
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_8020EAF0
lbl_8020E808:
    lwz r5, 0x20(r4)
    cmpwi r29, 0x0
    addi r6, r5, 0x1
    stw r6, 0x20(r4)
    addi r3, r6, 0x1
    addi r0, r3, 0x1
    lbz r5, 0x0(r5)
    stw r3, 0x20(r4)
    lbz r6, 0x0(r6)
    rlwimi r6, r5, 8, 16, 23
    stw r0, 0x20(r4)
    slwi r6, r6, 8
    lbz r0, 0x0(r3)
    or r6, r6, r0
    beq lbl_8020EAF0
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_8020EAF0
lbl_8020E868:
    cmpwi r3, 0x0
    mr r3, r25
    mr r5, r31
    mr r6, r26
    li r7, 0x1
    addi r4, r4, 0x20
    beq lbl_8020E888
    mr r7, r0
lbl_8020E888:
    bl ReadArg__Q44nw4r3snd6detail9MmlParserCFPPCUcPQ44nw4r3snd6detail9SeqPlayerPQ44nw4r3snd6detail8SeqTrackQ54nw4r3snd6detail9MmlParser10SeqArgType
    cmpwi r30, 0x0
    mr r24, r3
    beq lbl_8020E8B4
    mr r3, r25
    mr r5, r31
    mr r6, r26
    mr r7, r30
    addi r4, r26, 0x20
    bl ReadArg__Q44nw4r3snd6detail9MmlParserCFPPCUcPQ44nw4r3snd6detail9SeqPlayerPQ44nw4r3snd6detail8SeqTrackQ54nw4r3snd6detail9MmlParser10SeqArgType
    mr r27, r3
lbl_8020E8B4:
    cmpwi r29, 0x0
    beq lbl_8020EAF0
    cmpwi r28, 0xc5
    bge lbl_8020E8DC
    cmpwi r28, 0xc3
    bge lbl_8020E8D0
    b lbl_8020E8DC
lbl_8020E8D0:
    clrlwi r6, r24, 24
    extsb r6, r6
    b lbl_8020E8E0
lbl_8020E8DC:
    clrlwi r6, r24, 24
lbl_8020E8E0:
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    mr r7, r27
    mtctr r12
    bctrl
    b lbl_8020EAF0
lbl_8020E904:
    cmpwi r29, 0x0
    beq lbl_8020EAF0
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    li r6, 0x0
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_8020EAF0
lbl_8020E934:
    cmpwi r3, 0x0
    mr r3, r25
    mr r5, r31
    mr r6, r26
    li r7, 0x2
    addi r4, r4, 0x20
    beq lbl_8020E954
    mr r7, r0
lbl_8020E954:
    bl ReadArg__Q44nw4r3snd6detail9MmlParserCFPPCUcPQ44nw4r3snd6detail9SeqPlayerPQ44nw4r3snd6detail8SeqTrackQ54nw4r3snd6detail9MmlParser10SeqArgType
    cmpwi r29, 0x0
    extsh r6, r3
    beq lbl_8020EAF0
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_8020EAF0
lbl_8020E988:
    cmpwi r28, 0xfe
    beq lbl_8020E9AC
    bge lbl_8020E9A0
    cmpwi r28, 0xf0
    beq lbl_8020E9CC
    b lbl_8020EAC4
lbl_8020E9A0:
    cmpwi r28, 0x100
    bge lbl_8020EAC4
    b lbl_8020E9BC
lbl_8020E9AC:
    lwz r3, 0x20(r4)
    addi r0, r3, 0x2
    stw r0, 0x20(r4)
    b lbl_8020EAF0
lbl_8020E9BC:
    cmpwi r29, 0x0
    beq lbl_8020EAF0
    li r3, 0x1
    b lbl_8020EAF4
lbl_8020E9CC:
    lwz r6, 0x20(r4)
    addi r5, r6, 0x1
    stw r5, 0x20(r4)
    lbz r24, 0x0(r6)
    rlwinm r5, r24, 0, 24, 27
    cmpwi r5, 0x90
    beq lbl_8020EA60
    bge lbl_8020E9F8
    cmpwi r5, 0x80
    beq lbl_8020EA60
    b lbl_8020EAC4
lbl_8020E9F8:
    cmpwi r5, 0xe0
    beq lbl_8020EA04
    b lbl_8020EAC4
lbl_8020EA04:
    cmpwi r3, 0x0
    mr r3, r25
    mr r5, r31
    mr r6, r26
    li r7, 0x2
    addi r4, r4, 0x20
    beq lbl_8020EA24
    mr r7, r0
lbl_8020EA24:
    bl ReadArg__Q44nw4r3snd6detail9MmlParserCFPPCUcPQ44nw4r3snd6detail9SeqPlayerPQ44nw4r3snd6detail8SeqTrackQ54nw4r3snd6detail9MmlParser10SeqArgType
    cmpwi r29, 0x0
    clrlwi r23, r3, 16
    beq lbl_8020EAC4
    lwz r12, 0x0(r25)
    slwi r0, r28, 8
    mr r3, r25
    mr r4, r26
    lwz r12, 0x8(r12)
    mr r6, r23
    add r5, r0, r24
    li r7, 0x0
    mtctr r12
    bctrl
    b lbl_8020EAC4
lbl_8020EA60:
    lwz r8, 0x20(r4)
    cmpwi r3, 0x0
    mr r3, r25
    mr r5, r31
    addi r7, r8, 0x1
    mr r6, r26
    stwu r7, 0x20(r4)
    li r7, 0x2
    lbz r23, 0x0(r8)
    beq lbl_8020EA8C
    mr r7, r0
lbl_8020EA8C:
    bl ReadArg__Q44nw4r3snd6detail9MmlParserCFPPCUcPQ44nw4r3snd6detail9SeqPlayerPQ44nw4r3snd6detail8SeqTrackQ54nw4r3snd6detail9MmlParser10SeqArgType
    cmpwi r29, 0x0
    extsh r27, r3
    beq lbl_8020EAC4
    lwz r12, 0x0(r25)
    slwi r0, r28, 8
    mr r3, r25
    mr r4, r26
    lwz r12, 0x8(r12)
    mr r6, r23
    mr r7, r27
    add r5, r0, r24
    mtctr r12
    bctrl
lbl_8020EAC4:
    cmpwi r29, 0x0
    beq lbl_8020EAF0
    lwz r12, 0x0(r25)
    mr r3, r25
    mr r4, r26
    mr r5, r28
    lwz r12, 0x8(r12)
    mr r6, r23
    mr r7, r27
    mtctr r12
    bctrl
lbl_8020EAF0:
    li r3, 0x0
lbl_8020EAF4:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: CommandProc__Q44nw4r3snd6detail9MmlParserCFPQ44nw4r3snd6detail11MmlSeqTrackUlll
extern "C" asm void CommandProc__Q44nw4r3snd6detail9MmlParserCFPQ44nw4r3snd6detail11MmlSeqTrackUlll() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lis r0, 0x4330
    cmplwi r5, 0xff
    stw r0, 0x8(r1)
    mr r28, r4
    lwz r27, 0xc0(r4)
    mr r25, r6
    stw r0, 0x10(r1)
    mr r29, r7
    addi r31, r4, 0x1c
    bgt lbl_8020F120
    subi r0, r5, 0x81
    cmplwi r0, 0x7c
    bgt lbl_8020F408
    lis r3, jumptable_80362580@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80362580@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    cmpwi r6, 0x3ff
    ble lbl_8020EB7C
    li r0, 0x3ff
    b lbl_8020EB84
lbl_8020EB7C:
    srawi r0, r6, 31
    andc r0, r6, r0
lbl_8020EB84:
    sth r0, 0x10c(r27)
    b lbl_8020F408
    stb r6, 0x10a(r27)
    b lbl_8020F408
    lis r0, 0x1
    cmpw r6, r0
    bge lbl_8020F408
    clrlwi r0, r6, 16
    stw r0, 0x38(r31)
    b lbl_8020F408
    mr r3, r28
    mr r4, r25
    bl SetMute__Q44nw4r3snd6detail8SeqTrackFQ34nw4r3snd7SeqMute
    b lbl_8020F408
    lha r4, 0x56(r31)
    lha r3, 0x58(r31)
    cmpw r3, r4
    blt lbl_8020EBD4
    lbz r3, 0x55(r31)
    b lbl_8020EBF0
lbl_8020EBD4:
    lbz r5, 0x54(r31)
    lbz r0, 0x55(r31)
    subf r0, r5, r0
    mullw r0, r3, r0
    divw r0, r0, r4
    add r0, r5, r0
    clrlwi r3, r0, 24
lbl_8020EBF0:
    li r0, 0x0
    stb r3, 0x54(r31)
    stb r6, 0x55(r31)
    sth r7, 0x56(r31)
    sth r0, 0x58(r31)
    b lbl_8020F408
    stb r6, 0x66(r31)
    b lbl_8020F408
    stb r6, 0x67(r31)
    b lbl_8020F408
    stb r6, 0x108(r27)
    b lbl_8020F408
    stb r6, 0x6b(r31)
    b lbl_8020F408
    stb r6, 0x68(r31)
    b lbl_8020F408
    stb r6, 0x69(r31)
    b lbl_8020F408
    lha r5, 0x5c(r31)
    lha r4, 0x5e(r31)
    cmpw r4, r5
    blt lbl_8020EC54
    lbz r0, 0x5b(r31)
    extsb r4, r0
    b lbl_8020EC78
lbl_8020EC54:
    lbz r8, 0x5a(r31)
    lbz r0, 0x5b(r31)
    extsb r3, r8
    extsb r0, r0
    subf r0, r3, r0
    mullw r0, r4, r0
    divw r0, r0, r5
    add r0, r8, r0
    extsb r4, r0
lbl_8020EC78:
    subi r3, r6, 0x40
    li r0, 0x0
    stb r4, 0x5a(r31)
    stb r3, 0x5b(r31)
    sth r7, 0x5c(r31)
    sth r0, 0x5e(r31)
    b lbl_8020F408
    subi r0, r6, 0x40
    stb r0, 0x6a(r31)
    b lbl_8020F408
    lha r5, 0x62(r31)
    lha r4, 0x64(r31)
    cmpw r4, r5
    blt lbl_8020ECBC
    lbz r0, 0x61(r31)
    extsb r3, r0
    b lbl_8020ECE0
lbl_8020ECBC:
    lbz r8, 0x60(r31)
    lbz r0, 0x61(r31)
    extsb r3, r8
    extsb r0, r0
    subf r0, r3, r0
    mullw r0, r4, r0
    divw r0, r0, r5
    add r0, r8, r0
    extsb r3, r0
lbl_8020ECE0:
    li r0, 0x0
    stb r3, 0x60(r31)
    stb r6, 0x61(r31)
    sth r7, 0x62(r31)
    sth r0, 0x64(r31)
    b lbl_8020F408
    stb r6, 0x6c(r31)
    b lbl_8020F408
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stb r0, 0x9(r31)
    b lbl_8020F408
    stb r6, 0x6e(r31)
    b lbl_8020F408
    clrlwi r0, r6, 24
    lfd f2, lbl_804A2170
    stw r0, 0xc(r1)
    lfs f0, lbl_804A2160
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    stfs f0, 0x3c(r31)
    b lbl_8020F408
    clrlwi r0, r6, 24
    lfd f2, lbl_804A2170
    stw r0, 0x14(r1)
    lfs f0, lbl_804A2164
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fmuls f0, f0, f1
    stfs f0, 0x40(r31)
    b lbl_8020F408
    stb r6, 0x4c(r31)
    b lbl_8020F408
    stb r6, 0x48(r31)
    b lbl_8020F408
    slwi r0, r6, 2
    add r0, r0, r6
    stw r0, 0x44(r31)
    b lbl_8020F408
    xoris r0, r6, 0x8000
    lfd f2, lbl_804A2178
    stw r0, 0xc(r1)
    lfs f0, lbl_804A2168
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    stfs f0, 0x50(r31)
    b lbl_8020F408
    stb r6, 0x6f(r31)
    b lbl_8020F408
    stb r6, 0x70(r31)
    b lbl_8020F408
    stb r6, 0x71(r31)
    b lbl_8020F408
    stb r6, 0x72(r31)
    b lbl_8020F408
    clrlwi r0, r6, 24
    sth r0, 0x74(r31)
    b lbl_8020F408
    li r0, 0xff
    stb r0, 0x6f(r31)
    stb r0, 0x70(r31)
    stb r0, 0x71(r31)
    stb r0, 0x72(r31)
    sth r0, 0x74(r31)
    b lbl_8020F408
    clrlwi r4, r6, 24
    li r3, 0x40
    subi r0, r4, 0x40
    orc r3, r4, r3
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x30(r31)
    b lbl_8020F408
    neg r0, r6
    mr r3, r28
    or r0, r0, r6
    li r4, -0x1
    srwi r0, r0, 31
    stb r0, 0xa(r31)
    bl ReleaseAllChannel__Q44nw4r3snd6detail8SeqTrackFi
    mr r3, r28
    bl FreeAllChannel__Q44nw4r3snd6detail8SeqTrackFv
    b lbl_8020F408
    neg r0, r6
    or r0, r0, r6
    srwi. r0, r0, 31
    stb r0, 0xb(r31)
    beq lbl_8020F408
    mr r3, r28
    li r4, -0x1
    bl ReleaseAllChannel__Q44nw4r3snd6detail8SeqTrackFi
    mr r3, r28
    bl FreeAllChannel__Q44nw4r3snd6detail8SeqTrackFv
    b lbl_8020F408
    lbz r3, 0x6b(r31)
    li r0, 0x1
    stb r0, 0x2f(r31)
    add r0, r6, r3
    stb r0, 0x6d(r31)
    b lbl_8020F408
    neg r0, r6
    or r0, r0, r6
    srwi r0, r0, 31
    stb r0, 0x2f(r31)
    b lbl_8020F408
    subi r0, r6, 0x40
    lfd f2, lbl_804A2178
    xoris r0, r0, 0x8000
    lfs f0, lbl_804A2168
    stw r0, 0x14(r1)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fmuls f0, f1, f0
    stfs f0, 0x7c(r31)
    b lbl_8020F408
    stb r6, 0x7a(r31)
    b lbl_8020F408
    xoris r0, r6, 0x8000
    lfd f2, lbl_804A2178
    stw r0, 0xc(r1)
    lfs f0, lbl_804A216C
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    stfs f0, 0x80(r31)
    b lbl_8020F408
    stb r6, 0x77(r31)
    b lbl_8020F408
    stb r6, 0x78(r31)
    b lbl_8020F408
    stb r6, 0x79(r31)
    b lbl_8020F408
    stb r6, 0x76(r31)
    b lbl_8020F408
    lbz r0, lbl_8049DA48
    cmpwi r0, 0x0
    beq lbl_8020F408
    cmpwi r6, 0x20
    bge lbl_8020EF30
    mr r3, r27
    mr r4, r25
    bl GetVariablePtr__Q44nw4r3snd6detail9SeqPlayerFi
    mr r4, r3
    b lbl_8020EF50
lbl_8020EF30:
    cmpwi r6, 0x30
    bge lbl_8020EF48
    mr r3, r28
    subi r4, r6, 0x20
    bl GetVariablePtr__Q44nw4r3snd6detail8SeqTrackFi
    b lbl_8020EF4C
lbl_8020EF48:
    li r3, 0x0
lbl_8020EF4C:
    mr r4, r3
lbl_8020EF50:
    cmpwi r25, 0x20
    blt lbl_8020EF60
    subi r7, r25, 0x20
    b lbl_8020EF70
lbl_8020EF60:
    cmpwi r25, 0x10
    mr r7, r25
    blt lbl_8020EF70
    subi r7, r25, 0x10
lbl_8020EF70:
    cmpwi r25, 0x20
    blt lbl_8020EF80
    la r6, lbl_8049C520
    b lbl_8020EF90
lbl_8020EF80:
    cmpwi r25, 0x10
    la r6, lbl_8049C528
    blt lbl_8020EF90
    la r6, lbl_8049C524
lbl_8020EF90:
    lis r3, lbl_80362558@ha
    lha r9, 0x0(r4)
    lbz r5, 0x4(r28)
    mr r4, r27
    mr r8, r25
    addi r3, r3, lbl_80362558@l
    opword 0x4CC63182
    bl OSReport
    b lbl_8020F408
    mr r3, r27
    mr r4, r25
    bl GetPlayerTrack__Q44nw4r3snd6detail9SeqPlayerFi
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_8020F408
    cmplw r3, r28
    beq lbl_8020F408
    bl Close__Q44nw4r3snd6detail8SeqTrackFv
    lwz r4, 0x0(r31)
    mr r3, r27
    mr r5, r29
    bl SetSeqData__Q44nw4r3snd6detail8SeqTrackFPCvl
    mr r3, r27
    bl Open__Q44nw4r3snd6detail8SeqTrackFv
    b lbl_8020F408
    lwz r0, 0x0(r31)
    add r0, r0, r6
    stw r0, 0x4(r31)
    b lbl_8020F408
    lbz r0, 0x24(r31)
    cmplwi r0, 0x3
    bge lbl_8020F408
    clrlslwi r0, r0, 24, 3
    lwz r3, 0x4(r31)
    add r4, r31, r0
    stw r3, 0x10(r4)
    li r0, 0x0
    stb r0, 0xc(r4)
    lbz r3, 0x24(r31)
    lwz r0, 0x0(r31)
    addi r3, r3, 0x1
    add r0, r0, r6
    stb r3, 0x24(r31)
    stw r0, 0x4(r31)
    b lbl_8020F408
    li r4, 0x0
    b lbl_8020F074
lbl_8020F04C:
    lbz r3, 0x24(r31)
    subi r3, r3, 0x1
    clrlslwi r0, r3, 24, 3
    stb r3, 0x24(r31)
    add r3, r31, r0
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_8020F074
    addi r4, r3, 0xc
    b lbl_8020F080
lbl_8020F074:
    lbz r0, 0x24(r31)
    cmpwi r0, 0x0
    bne lbl_8020F04C
lbl_8020F080:
    cmpwi r4, 0x0
    beq lbl_8020F408
    lwz r0, 0x4(r4)
    stw r0, 0x4(r31)
    b lbl_8020F408
    lbz r0, 0x24(r31)
    cmplwi r0, 0x3
    bge lbl_8020F408
    clrlslwi r0, r0, 24, 3
    lwz r3, 0x4(r31)
    add r4, r31, r0
    stw r3, 0x10(r4)
    li r0, 0x1
    stb r6, 0xd(r4)
    stb r0, 0xc(r4)
    lbz r3, 0x24(r31)
    addi r0, r3, 0x1
    stb r0, 0x24(r31)
    b lbl_8020F408
    lbz r3, 0x24(r31)
    cmpwi r3, 0x0
    beq lbl_8020F408
    subi r4, r3, 0x1
    slwi r0, r4, 3
    add r3, r31, r0
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_8020F408
    lbz r5, 0xd(r3)
    cmpwi r5, 0x0
    beq lbl_8020F110
    subi r5, r5, 0x1
    clrlwi. r0, r5, 24
    bne lbl_8020F110
    stb r4, 0x24(r31)
    b lbl_8020F408
lbl_8020F110:
    stb r5, 0xd(r3)
    lwz r0, 0x10(r3)
    stw r0, 0x4(r31)
    b lbl_8020F408
lbl_8020F120:
    cmplwi r5, 0xffff
    bgt lbl_8020F408
    rlwinm r0, r5, 0, 24, 27
    clrlwi r26, r5, 24
    cmplwi r0, 0x80
    li r30, 0x0
    beq lbl_8020F144
    cmplwi r0, 0x90
    bne lbl_8020F184
lbl_8020F144:
    cmpwi r6, 0x20
    bge lbl_8020F15C
    mr r3, r27
    mr r4, r25
    bl GetVariablePtr__Q44nw4r3snd6detail9SeqPlayerFi
    b lbl_8020F178
lbl_8020F15C:
    cmpwi r6, 0x30
    bge lbl_8020F174
    mr r3, r28
    subi r4, r6, 0x20
    bl GetVariablePtr__Q44nw4r3snd6detail8SeqTrackFi
    b lbl_8020F178
lbl_8020F174:
    li r3, 0x0
lbl_8020F178:
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_8020F408
lbl_8020F184:
    cmpwi r26, 0x8a
    beq lbl_8020F31C
    bge lbl_8020F1E4
    cmpwi r26, 0x84
    beq lbl_8020F268
    bge lbl_8020F1C0
    cmpwi r26, 0x81
    beq lbl_8020F238
    bge lbl_8020F1B4
    cmpwi r26, 0x80
    bge lbl_8020F230
    b lbl_8020F408
lbl_8020F1B4:
    cmpwi r26, 0x83
    bge lbl_8020F258
    b lbl_8020F248
lbl_8020F1C0:
    cmpwi r26, 0x87
    beq lbl_8020F2EC
    bge lbl_8020F1D8
    cmpwi r26, 0x86
    bge lbl_8020F2AC
    b lbl_8020F280
lbl_8020F1D8:
    cmpwi r26, 0x89
    bge lbl_8020F30C
    b lbl_8020F2FC
lbl_8020F1E4:
    cmpwi r26, 0x93
    beq lbl_8020F3A0
    bge lbl_8020F214
    cmpwi r26, 0x90
    beq lbl_8020F34C
    bge lbl_8020F208
    cmpwi r26, 0x8c
    bge lbl_8020F408
    b lbl_8020F32C
lbl_8020F208:
    cmpwi r26, 0x92
    bge lbl_8020F380
    b lbl_8020F364
lbl_8020F214:
    cmpwi r26, 0xe0
    beq lbl_8020F3F8
    bge lbl_8020F408
    cmpwi r26, 0x95
    beq lbl_8020F3DC
    bge lbl_8020F408
    b lbl_8020F3BC
lbl_8020F230:
    sth r29, 0x0(r30)
    b lbl_8020F408
lbl_8020F238:
    lha r0, 0x0(r30)
    add r0, r0, r29
    sth r0, 0x0(r30)
    b lbl_8020F408
lbl_8020F248:
    lha r0, 0x0(r30)
    subf r0, r29, r0
    sth r0, 0x0(r30)
    b lbl_8020F408
lbl_8020F258:
    lha r0, 0x0(r30)
    mullw r0, r0, r29
    sth r0, 0x0(r30)
    b lbl_8020F408
lbl_8020F268:
    cmpwi r29, 0x0
    beq lbl_8020F408
    lha r0, 0x0(r30)
    divw r0, r0, r29
    sth r0, 0x0(r30)
    b lbl_8020F408
lbl_8020F280:
    cmpwi r29, 0x0
    blt lbl_8020F298
    lha r0, 0x0(r30)
    slw r0, r0, r29
    sth r0, 0x0(r30)
    b lbl_8020F408
lbl_8020F298:
    lha r3, 0x0(r30)
    neg r0, r29
    sraw r0, r3, r0
    sth r0, 0x0(r30)
    b lbl_8020F408
lbl_8020F2AC:
    cmpwi r29, 0x0
    li r26, 0x0
    bge lbl_8020F2C4
    neg r0, r29
    li r26, 0x1
    extsh r29, r0
lbl_8020F2C4:
    bl CalcRandom__Q44nw4r3snd6detail4UtilFv
    clrlwi r3, r3, 16
    addi r0, r29, 0x1
    mullw r3, r3, r0
    cmpwi r26, 0x0
    srawi r3, r3, 16
    beq lbl_8020F2E4
    neg r3, r3
lbl_8020F2E4:
    sth r3, 0x0(r30)
    b lbl_8020F408
lbl_8020F2EC:
    lha r0, 0x0(r30)
    and r0, r0, r29
    sth r0, 0x0(r30)
    b lbl_8020F408
lbl_8020F2FC:
    lha r0, 0x0(r30)
    or r0, r0, r29
    sth r0, 0x0(r30)
    b lbl_8020F408
lbl_8020F30C:
    lha r0, 0x0(r30)
    xor r0, r0, r29
    sth r0, 0x0(r30)
    b lbl_8020F408
lbl_8020F31C:
    clrlwi r0, r29, 16
    nor r0, r0, r0
    sth r0, 0x0(r30)
    b lbl_8020F408
lbl_8020F32C:
    cmpwi r29, 0x0
    beq lbl_8020F408
    lha r3, 0x0(r30)
    divw r0, r3, r29
    mullw r0, r0, r29
    subf r0, r0, r3
    sth r0, 0x0(r30)
    b lbl_8020F408
lbl_8020F34C:
    lha r0, 0x0(r30)
    subf r0, r0, r29
    cntlzw r0, r0
    srwi r0, r0, 5
    stb r0, 0x8(r31)
    b lbl_8020F408
lbl_8020F364:
    lha r0, 0x0(r30)
    srwi r3, r29, 31
    srawi r4, r0, 31
    subfc r0, r29, r0
    adde r0, r4, r3
    stb r0, 0x8(r31)
    b lbl_8020F408
lbl_8020F380:
    lha r4, 0x0(r30)
    xor r0, r4, r29
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x8(r31)
    b lbl_8020F408
lbl_8020F3A0:
    lha r0, 0x0(r30)
    srawi r4, r29, 31
    srwi r3, r0, 31
    subfc r0, r0, r29
    adde r0, r4, r3
    stb r0, 0x8(r31)
    b lbl_8020F408
lbl_8020F3BC:
    lha r0, 0x0(r30)
    xor r0, r29, r0
    srawi r3, r0, 1
    and r0, r0, r29
    subf r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x8(r31)
    b lbl_8020F408
lbl_8020F3DC:
    lha r0, 0x0(r30)
    subf r3, r0, r29
    subf r0, r29, r0
    or r0, r3, r0
    srwi r0, r0, 31
    stb r0, 0x8(r31)
    b lbl_8020F408
lbl_8020F3F8:
    mr r3, r27
    mr r5, r28
    clrlwi r4, r25, 16
    bl CallSeqUserprocCallback__Q44nw4r3snd6detail9SeqPlayerFUsPQ44nw4r3snd6detail8SeqTrack
lbl_8020F408:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: ReadArg__Q44nw4r3snd6detail9MmlParserCFPPCUcPQ44nw4r3snd6detail9SeqPlayerPQ44nw4r3snd6detail8SeqTrackQ54nw4r3snd6detail9MmlParser10SeqArgType
extern "C" asm void ReadArg__Q44nw4r3snd6detail9MmlParserCFPPCUcPQ44nw4r3snd6detail9SeqPlayerPQ44nw4r3snd6detail8SeqTrackQ54nw4r3snd6detail9MmlParser10SeqArgType() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r7, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    beq lbl_8020F4B0
    bge lbl_8020F468
    cmpwi r7, 0x1
    beq lbl_8020F478
    bge lbl_8020F48C
    b lbl_8020F58C
lbl_8020F468:
    cmpwi r7, 0x5
    beq lbl_8020F4DC
    bge lbl_8020F58C
    b lbl_8020F52C
lbl_8020F478:
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
    lbz r3, 0x0(r3)
    b lbl_8020F58C
lbl_8020F48C:
    lwz r5, 0x0(r4)
    addi r3, r5, 0x1
    stw r3, 0x0(r4)
    addi r0, r3, 0x1
    lbz r5, 0x0(r5)
    stw r0, 0x0(r4)
    lbz r3, 0x0(r3)
    rlwimi r3, r5, 8, 16, 23
    b lbl_8020F58C
lbl_8020F4B0:
    li r3, 0x0
lbl_8020F4B4:
    lwz r5, 0x0(r4)
    slwi r3, r3, 7
    addi r0, r5, 0x1
    stw r0, 0x0(r4)
    lbz r5, 0x0(r5)
    rlwinm. r0, r5, 0, 24, 24
    clrlwi r0, r5, 25
    or r3, r3, r0
    bne lbl_8020F4B4
    b lbl_8020F58C
lbl_8020F4DC:
    lwz r3, 0x0(r4)
    addi r0, r3, 0x1
    stw r0, 0x0(r4)
    lbz r4, 0x0(r3)
    cmpwi r4, 0x20
    bge lbl_8020F500
    mr r3, r5
    bl GetVariablePtr__Q44nw4r3snd6detail9SeqPlayerFi
    b lbl_8020F51C
lbl_8020F500:
    cmpwi r4, 0x30
    bge lbl_8020F518
    mr r3, r6
    subi r4, r4, 0x20
    bl GetVariablePtr__Q44nw4r3snd6detail8SeqTrackFi
    b lbl_8020F51C
lbl_8020F518:
    li r3, 0x0
lbl_8020F51C:
    cmpwi r3, 0x0
    beq lbl_8020F58C
    lha r3, 0x0(r3)
    b lbl_8020F58C
lbl_8020F52C:
    lwz r6, 0x0(r4)
    addi r7, r6, 0x1
    stw r7, 0x0(r4)
    addi r3, r7, 0x1
    addi r5, r3, 0x1
    lbz r6, 0x0(r6)
    addi r0, r5, 0x1
    stw r3, 0x0(r4)
    lbz r7, 0x0(r7)
    rlwimi r7, r6, 8, 16, 23
    stw r5, 0x0(r4)
    extsh r30, r7
    lbz r3, 0x0(r3)
    stw r0, 0x0(r4)
    lbz r31, 0x0(r5)
    rlwimi r31, r3, 8, 16, 23
    bl CalcRandom__Q44nw4r3snd6detail4UtilFv
    extsh r0, r31
    clrlwi r4, r3, 16
    subf r3, r30, r0
    addi r0, r3, 0x1
    mullw r4, r4, r0
    srawi r4, r4, 16
    add r3, r4, r30
lbl_8020F58C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: ParseAllocTrack__Q44nw4r3snd6detail9MmlParserFPCvUlPUl
extern "C" asm void ParseAllocTrack__Q44nw4r3snd6detail9MmlParserFPCvUlPUl() {
    nofralloc
    lbzx r0, r4, r3
    add r6, r4, r3
    cmplwi r0, 0xfe
    beq lbl_8020F5C4
    li r0, 0x1
    mr r3, r4
    stw r0, 0x0(r5)
    blr
lbl_8020F5C4:
    lbz r7, 0x1(r6)
    addi r3, r4, 0x3
    lbz r0, 0x2(r6)
    slwi r7, r7, 8
    or r7, r7, r0
    stw r7, 0x0(r5)
    blr
}
