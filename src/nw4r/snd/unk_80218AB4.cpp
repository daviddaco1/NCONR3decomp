#include "types.h"

// Translation unit: src/nw4r/snd/unk_80218AB4.cpp
// Total functions: 5

// Small Data symbols (@sda21)
extern "C" float lbl_8049C530;
extern "C" float lbl_8049DA68;
extern "C" float lbl_8049DA6C;

// Global data symbols (@ha/@l)
extern "C" u8 __dt__Q44nw4r3snd6detail10TaskThreadFv[];
extern "C" u8 lbl_80404A00[];
extern "C" u8 lbl_80404A10[];

// Forward declarations
extern "C" void AXGetMaxVoices();
extern "C" void Create__Q44nw4r3snd6detail10TaskThreadFlPvUl();
extern "C" void Create__Q44nw4r3snd6detail11SoundThreadFlPvUl();
extern "C" void GetInstance__Q44nw4r3snd6detail11SoundThreadFv();
extern "C" void GetInstance__Q44nw4r3snd6detail12VoiceManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail14ChannelManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void GetRequiredMemSize__Q44nw4r3snd6detail12VoiceManagerFi();
extern "C" void GetRequiredMemSize__Q44nw4r3snd6detail14AxVoiceManagerFi();
extern "C" void GetRequiredMemSize__Q44nw4r3snd6detail14ChannelManagerFi();
extern "C" void InitSeqPlayer__Q44nw4r3snd6detail9SeqPlayerFv();
extern "C" void Init__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void OSRegisterVersion();
extern "C" void SCCheckStatus();
extern "C" void SCGetSoundMode();
extern "C" void SCInit();
extern "C" void SetOutputMode__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd10OutputMode();
extern "C" void Setup__Q44nw4r3snd6detail12VoiceManagerFPvUl();
extern "C" void Setup__Q44nw4r3snd6detail14AxVoiceManagerFPvUl();
extern "C" void Setup__Q44nw4r3snd6detail14ChannelManagerFPvUl();
extern "C" void Setup__Q44nw4r3snd6detail20RemoteSpeakerManagerFv();
extern "C" void StartPrepared__Q44nw4r3snd6detail10BasicSoundFv();
extern "C" void __ct__Q44nw4r3snd6detail10TaskThreadFv();
extern "C" void __register_global_object();
extern "C" void _restgpr_26();
extern "C" void _savegpr_26();
extern "C" void fn_80218AB4();
extern "C" void fn_80218B14();
extern "C" void fn_80218B94();
extern "C" void fn_80218D4C();
extern "C" void fn_80218D54();

// ----------------------------------------------------------------------------
// fn_80218AB4
// ----------------------------------------------------------------------------
extern "C" asm void fn_80218AB4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r7, r6
    li r6, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_80218AEC
    b lbl_80218B00
lbl_80218AEC:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_80218AFC
    bl StartPrepared__Q44nw4r3snd6detail10BasicSoundFv
lbl_80218AFC:
    li r3, 0x0
lbl_80218B00:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80218B14
// ----------------------------------------------------------------------------
extern "C" asm void fn_80218B14() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    bl AXGetMaxVoices
    mr r29, r3
    bl GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
    mr r4, r29
    bl GetRequiredMemSize__Q44nw4r3snd6detail12VoiceManagerFi
    mr r31, r3
    bl GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
    mr r4, r29
    bl GetRequiredMemSize__Q44nw4r3snd6detail14AxVoiceManagerFi
    lwz r0, 0xc(r30)
    lwz r4, 0x4(r30)
    add r31, r31, r0
    add r30, r3, r4
    bl GetInstance__Q44nw4r3snd6detail14ChannelManagerFv
    mr r4, r29
    bl GetRequiredMemSize__Q44nw4r3snd6detail14ChannelManagerFi
    add r0, r30, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    add r3, r3, r0
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80218B94
// ----------------------------------------------------------------------------
extern "C" asm void fn_80218B94() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lbz r0, lbl_8049DA68
    mr r26, r3
    mr r27, r4
    cmpwi r0, 0x0
    bne lbl_80218D34
    li r0, 0x1
    lwz r3, lbl_8049C530
    stb r0, lbl_8049DA68
    bl OSRegisterVersion
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    bl Init__Q44nw4r3snd6detail9AxManagerFv
    bl SCInit
lbl_80218BD8:
    bl SCCheckStatus
    cmplwi r3, 0x1
    beq lbl_80218BD8
    bl SCGetSoundMode
    clrlwi r0, r3, 24
    cmpwi r0, 0x1
    beq lbl_80218C20
    bge lbl_80218C04
    cmpwi r0, 0x0
    bge lbl_80218C10
    b lbl_80218C40
lbl_80218C04:
    cmpwi r0, 0x3
    bge lbl_80218C40
    b lbl_80218C30
lbl_80218C10:
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    li r4, 0x3
    bl SetOutputMode__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd10OutputMode
    b lbl_80218C4C
lbl_80218C20:
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    li r4, 0x0
    bl SetOutputMode__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd10OutputMode
    b lbl_80218C4C
lbl_80218C30:
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    li r4, 0x2
    bl SetOutputMode__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd10OutputMode
    b lbl_80218C4C
lbl_80218C40:
    bl GetInstance__Q44nw4r3snd6detail9AxManagerFv
    li r4, 0x0
    bl SetOutputMode__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd10OutputMode
lbl_80218C4C:
    bl GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
    bl Setup__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
    lwz r3, 0xc(r26)
    lwz r0, 0x4(r26)
    add r30, r27, r3
    mr r29, r30
    add r30, r30, r0
    bl AXGetMaxVoices
    stw r3, lbl_8049DA6C
    mr r28, r30
    bl GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
    lwz r4, lbl_8049DA6C
    bl GetRequiredMemSize__Q44nw4r3snd6detail14AxVoiceManagerFi
    add r30, r30, r3
    bl GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
    lwz r4, lbl_8049DA6C
    bl GetRequiredMemSize__Q44nw4r3snd6detail14AxVoiceManagerFi
    mr r31, r3
    bl GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
    mr r4, r28
    mr r5, r31
    bl Setup__Q44nw4r3snd6detail14AxVoiceManagerFPvUl
    mr r28, r30
    bl GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
    lwz r4, lbl_8049DA6C
    bl GetRequiredMemSize__Q44nw4r3snd6detail12VoiceManagerFi
    add r30, r30, r3
    bl GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
    lwz r4, lbl_8049DA6C
    bl GetRequiredMemSize__Q44nw4r3snd6detail12VoiceManagerFi
    mr r31, r3
    bl GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
    mr r4, r28
    mr r5, r31
    bl Setup__Q44nw4r3snd6detail12VoiceManagerFPvUl
    bl GetInstance__Q44nw4r3snd6detail14ChannelManagerFv
    lwz r4, lbl_8049DA6C
    bl GetRequiredMemSize__Q44nw4r3snd6detail14ChannelManagerFi
    bl GetInstance__Q44nw4r3snd6detail14ChannelManagerFv
    lwz r4, lbl_8049DA6C
    bl GetRequiredMemSize__Q44nw4r3snd6detail14ChannelManagerFi
    mr r31, r3
    bl GetInstance__Q44nw4r3snd6detail14ChannelManagerFv
    mr r4, r30
    mr r5, r31
    bl Setup__Q44nw4r3snd6detail14ChannelManagerFPvUl
    bl InitSeqPlayer__Q44nw4r3snd6detail9SeqPlayerFv
    lis r3, lbl_80404A10@ha
    lwz r4, 0x8(r26)
    lwz r6, 0xc(r26)
    mr r5, r27
    addi r3, r3, lbl_80404A10@l
    bl Create__Q44nw4r3snd6detail10TaskThreadFlPvUl
    bl GetInstance__Q44nw4r3snd6detail11SoundThreadFv
    lwz r4, 0x0(r26)
    mr r5, r29
    lwz r6, 0x4(r26)
    bl Create__Q44nw4r3snd6detail11SoundThreadFlPvUl
lbl_80218D34:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80218D4C
// ----------------------------------------------------------------------------
extern "C" asm void fn_80218D4C() {
    nofralloc
    lbz r3, lbl_8049DA68
    blr
}

// ----------------------------------------------------------------------------
// fn_80218D54
// ----------------------------------------------------------------------------
extern "C" asm void fn_80218D54() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80404A10@ha
    addi r3, r31, lbl_80404A10@l
    bl __ct__Q44nw4r3snd6detail10TaskThreadFv
    lis r4, __dt__Q44nw4r3snd6detail10TaskThreadFv@ha
    lis r5, lbl_80404A00@ha
    addi r3, r31, lbl_80404A10@l
    addi r4, r4, __dt__Q44nw4r3snd6detail10TaskThreadFv@l
    addi r5, r5, lbl_80404A00@l
    bl __register_global_object
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

