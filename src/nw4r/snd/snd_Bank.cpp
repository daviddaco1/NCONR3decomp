#include <nw4r/snd.h>
#include <nw4r/ut.h>

namespace nw4r {
namespace snd {
namespace detail {

Bank::Bank(const void* pBankBin)
    : mBankReader(pBankBin), mWaveDataAddress(NULL) {}

Bank::~Bank() {}

// NoteOn__Q44nw4r3snd6detail4BankCFRCQ44nw4r3snd6detail10NoteOnInfo: definicion C reemplazada por asm (ver abajo)


} // namespace detail
} // namespace snd
} // namespace nw4r

// ---- Funciones aun sin C que matchee (asm generado) ----
extern "C" float lbl_804A2018;
extern "C" float lbl_804A201C;
extern "C" float lbl_804A2020;
extern "C" float lbl_804A2028;
extern "C" float lbl_804A2030;
extern "C" void AllocChannel__Q44nw4r3snd6detail7ChannelFiiiPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl();
extern "C" void NoteOn__Q44nw4r3snd6detail4BankCFRCQ44nw4r3snd6detail10NoteOnInfo();
extern "C" void ReadInstInfo__Q44nw4r3snd6detail14BankFileReaderCFPQ44nw4r3snd6detail8InstInfoiii();
extern "C" void ReadWaveInfo__Q44nw4r3snd6detail14BankFileReaderCFPQ44nw4r3snd6detail8WaveInfoRCQ54nw4r3snd6detail8InstInfo16WaveDataLocationPCvPPCQ44nw4r3snd6detail8WaveInfo();
extern "C" void Start__Q44nw4r3snd6detail7ChannelFRCQ44nw4r3snd6detail8WaveInfoiUl();
extern "C" void fn_8020C018();
extern "C" void fn_8020C030();
extern "C" void fn_8020C048();
extern "C" void fn_8020C0E8();
extern "C" void fn_8020C0F0();

// asm_to_cpp: NoteOn__Q44nw4r3snd6detail4BankCFRCQ44nw4r3snd6detail10NoteOnInfo
extern "C" asm void NoteOn__Q44nw4r3snd6detail4BankCFRCQ44nw4r3snd6detail10NoteOnInfo() {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    lwz r5, 0x0(r4)
    stw r0, 0xc4(r1)
    lis r0, 0x4330
    stw r31, 0xbc(r1)
    mr r31, r3
    stw r30, 0xb8(r1)
    mr r30, r4
    lwz r6, 0x4(r30)
    addi r4, r1, 0xc
    stw r0, 0xa8(r1)
    lwz r7, 0x8(r30)
    stw r0, 0xb0(r1)
    bl ReadInstInfo__Q44nw4r3snd6detail14BankFileReaderCFPQ44nw4r3snd6detail8InstInfoiii
    cmpwi r3, 0x0
    bne lbl_80207C4C
    li r3, 0x0
    b lbl_80207DE0
lbl_80207C4C:
    lwz r6, 0xc(r31)
    mr r3, r31
    addi r4, r1, 0x28
    addi r5, r1, 0xc
    addi r7, r1, 0x8
    bl ReadWaveInfo__Q44nw4r3snd6detail14BankFileReaderCFPQ44nw4r3snd6detail8WaveInfoRCQ54nw4r3snd6detail8InstInfo16WaveDataLocationPCvPPCQ44nw4r3snd6detail8WaveInfo
    cmpwi r3, 0x0
    bne lbl_80207C74
    li r3, 0x0
    b lbl_80207DE0
lbl_80207C74:
    lwz r0, 0x30(r1)
    li r3, 0x2
    cmpwi r0, 0x2
    bgt lbl_80207C88
    mr r3, r0
lbl_80207C88:
    lwz r4, 0x18(r30)
    lwz r5, 0x14(r30)
    lwz r6, 0x1c(r30)
    lwz r7, 0x20(r30)
    bl AllocChannel__Q44nw4r3snd6detail7ChannelFiiiPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_80207CB0
    li r3, 0x0
    b lbl_80207DE0
lbl_80207CB0:
    lwz r4, 0x4(r30)
    lwz r0, 0x8(r30)
    stw r4, 0xc8(r3)
    xoris r0, r0, 0x8000
    lfd f1, lbl_804A2028
    lbz r4, 0x21(r1)
    stw r0, 0xac(r1)
    lfs f2, lbl_804A2018
    stw r4, 0xcc(r3)
    lfd f0, 0xa8(r1)
    lbz r0, 0x23(r1)
    fsubs f3, f0, f1
    lfd f1, lbl_804A2030
    stw r0, 0xb4(r1)
    lfd f0, 0xb0(r1)
    fdivs f3, f3, f2
    fsubs f0, f0, f1
    fmuls f3, f3, f3
    fdivs f0, f0, f2
    fmuls f3, f3, f0
    stfs f3, 0xb0(r3)
    lfs f0, 0x24(r1)
    stfs f0, 0xbc(r3)
    lbz r4, 0x14(r1)
    bl fn_8020C018
    lbz r4, 0x15(r1)
    mr r3, r31
    bl fn_8020C030
    lbz r4, 0x16(r1)
    mr r3, r31
    bl fn_8020C048
    lbz r4, 0x17(r1)
    mr r3, r31
    bl fn_8020C0E8
    lbz r4, 0x18(r1)
    mr r3, r31
    bl fn_8020C0F0
    lbz r3, 0x22(r1)
    lwz r0, 0x10(r30)
    subi r3, r3, 0x40
    lfd f4, lbl_804A2028
    xoris r3, r3, 0x8000
    xoris r0, r0, 0x8000
    stw r3, 0xac(r1)
    lfs f2, lbl_804A201C
    stw r0, 0xb4(r1)
    lfd f0, 0xa8(r1)
    lfd f1, 0xb0(r1)
    fsubs f3, f0, f4
    lfs f0, lbl_804A2020
    fsubs f1, f1, f4
    fdivs f3, f3, f2
    fdivs f1, f1, f2
    fadds f3, f3, f1
    stfs f3, 0xb4(r31)
    stfs f0, 0xb8(r31)
    lbz r0, 0x20(r1)
    stw r0, 0xdc(r31)
    lwz r3, 0x1c(r1)
    subi r0, r3, 0x1
    cntlzw r0, r0
    extrwi r0, r0, 8, 19
    stb r0, 0x3a(r31)
    lwz r0, 0xc(r1)
    cmpwi r0, 0x2
    bne lbl_80207DC8
    lwz r3, 0x8(r1)
    lwz r0, 0x10(r1)
    stw r0, 0xe8(r31)
    stw r3, 0xec(r31)
lbl_80207DC8:
    lwz r5, 0xc(r30)
    mr r3, r31
    addi r4, r1, 0x28
    li r6, 0x0
    bl Start__Q44nw4r3snd6detail7ChannelFRCQ44nw4r3snd6detail8WaveInfoiUl
    mr r3, r31
lbl_80207DE0:
    lwz r0, 0xc4(r1)
    lwz r31, 0xbc(r1)
    lwz r30, 0xb8(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}
