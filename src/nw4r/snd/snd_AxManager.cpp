#include "types.h"

// Translation unit: src/nw4r/snd/snd_AxManager.cpp
// Total functions: 25

// Small Data symbols (@sda21)
extern "C" float lbl_8049DA08;
extern "C" float lbl_8049DA0C;
extern "C" float lbl_8049DA10;
extern "C" float lbl_8049DA14;
extern "C" float lbl_8049DA18;
extern "C" float lbl_8049DA1C;
extern "C" float lbl_804A1FD8;
extern "C" float lbl_804A1FDC;
extern "C" float lbl_804A1FE0;
extern "C" float lbl_804A1FE8;
extern "C" float lbl_804A1FEC;

// Global data symbols (@ha/@l)
extern "C" u8 lbl_803623E0[];
extern "C" u8 lbl_803623F0[];
extern "C" u8 lbl_80362400[];
extern "C" u8 lbl_80362410[];
extern "C" u8 lbl_80362420[];
extern "C" u8 lbl_80403C20[];
extern "C" u8 lbl_80403D20[];
extern "C" u8 lbl_80403F5C[];
extern "C" u8 lbl_80403F68[];

// Forward declarations
extern "C" void AXGetAuxACallback();
extern "C" void AXGetAuxBCallback();
extern "C" void AXGetAuxCCallback();
extern "C" void AXRegisterAuxACallback();
extern "C" void AXRegisterAuxBCallback();
extern "C" void AXRegisterAuxCCallback();
extern "C" void AXRegisterCallback();
extern "C" void AppendEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBusPQ34nw4r3snd6FxBase();
extern "C" void AuxCallbackFunc__Q44nw4r3snd6detail9AxManagerFPvPv();
extern "C" void AxCallbackFunc__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void ClearEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBusi();
extern "C" void Clear__Q44nw4r2ut6detail12LinkListImplFv();
extern "C" void DCFlushRange();
extern "C" void Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode();
extern "C" void GetInstance__Q44nw4r3snd6detail12VoiceManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void GetOutputMode__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void GetOutputVolume__Q44nw4r3snd6detail9AxManagerCFv();
extern "C" void GetZeroBufferAddress__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void Init__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode();
extern "C" void OSDisableInterrupts();
extern "C" void OSGetTick();
extern "C" void OSRestoreInterrupts();
extern "C" void RegisterCallback__Q44nw4r3snd6detail9AxManagerFPQ54nw4r3snd6detail9AxManager16CallbackListNodePFv_v();
extern "C" void SetMasterVolume__Q44nw4r3snd6detail9AxManagerFfi();
extern "C" void SetOutputMode__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd10OutputMode();
extern "C" void ShutdownEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBus();
extern "C" void UnregisterCallback__Q44nw4r3snd6detail9AxManagerFPQ54nw4r3snd6detail9AxManager16CallbackListNode();
extern "C" void UpdateAllVoicesSync__Q44nw4r3snd6detail12VoiceManagerFUl();
extern "C" void Update__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void __construct_array();
extern "C" void __ct__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void __destroy_arr();
extern "C" void __dt__Q44nw4r2ut6detail12LinkListImplFv();
extern "C" void __dt__Q44nw4r3snd6detail15BiquadFilterHpfFv();
extern "C" void __dt__Q44nw4r3snd6detail15BiquadFilterLpfFv();
extern "C" void __dt__Q44nw4r3snd6detail18BiquadFilterBpf512Fv();
extern "C" void __dt__Q44nw4r3snd6detail19BiquadFilterBpf1024Fv();
extern "C" void __dt__Q44nw4r3snd6detail19BiquadFilterBpf2048Fv();
extern "C" void __dt__Q44nw4r3snd6detail9AxManagerFv();
extern "C" void __register_global_object();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void dtor_80136CFC();
extern "C" void fn_80203050();
extern "C" void fn_80203070();
extern "C" void fn_80204350();
extern "C" void fn_8029D3A8();
extern "C" void fn_8029D3C8();
extern "C" void fn_8029D3E0();
extern "C" void fn_8029D3E8();
extern "C" void fn_8029D3F0();
extern "C" void memset();

// ----------------------------------------------------------------------------
// __ct__Q44nw4r3snd6detail9AxManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q44nw4r3snd6detail9AxManagerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r6, 0x0
    lfs f0, lbl_804A1FD8
    stw r0, 0x14(r1)
    addi r7, r3, 0x64
    addi r4, r3, 0x84
    addi r8, r3, 0xc
    stw r31, 0xc(r1)
    li r5, 0x1
    li r0, -0x1
    cmplw r7, r4
    stw r6, 0xc(r3)
    mr r31, r3
    stw r6, 0x10(r3)
    stw r6, 0x0(r3)
    stw r6, 0x4(r3)
    stw r6, 0x8(r3)
    stw r8, 0xc(r3)
    stw r8, 0x10(r3)
    stb r6, 0x18(r3)
    stb r5, 0x19(r3)
    stfs f0, 0x1c(r3)
    stfs f0, 0x20(r3)
    stw r6, 0x24(r3)
    stw r6, 0x28(r3)
    stfs f0, 0x2c(r3)
    stfs f0, 0x30(r3)
    stw r6, 0x34(r3)
    stw r6, 0x38(r3)
    stfs f0, 0x3c(r3)
    stfs f0, 0x40(r3)
    stw r6, 0x44(r3)
    stw r6, 0x48(r3)
    stw r6, 0x4c(r3)
    stw r0, 0x50(r3)
    stfs f0, 0x54(r3)
    stfs f0, 0x58(r3)
    stw r6, 0x5c(r3)
    stw r6, 0x60(r3)
    bge lbl_80202DC0
    addi r6, r3, 0x64
    addi r5, r3, 0x4
    subf r8, r6, r4
    addi r9, r8, 0xf
    srawi r0, r9, 4
    addze r10, r0
    addi r11, r10, 0x1
    cmpwi r11, 0x8
    ble lbl_80202D84
    cmplw r6, r4
    li r4, 0x0
    li r6, 0x0
    bgt lbl_80202CA4
    clrrwi. r0, r8, 31
    li r8, 0x1
    bne lbl_80202C98
    clrrwi. r0, r9, 31
    beq lbl_80202C98
    li r8, 0x0
lbl_80202C98:
    cmpwi r8, 0x0
    beq lbl_80202CA4
    li r6, 0x1
lbl_80202CA4:
    cmpwi r6, 0x0
    beq lbl_80202CD4
    clrrwi. r8, r10, 31
    li r6, 0x1
    bne lbl_80202CC8
    clrrwi r0, r11, 31
    cmpw r8, r0
    beq lbl_80202CC8
    li r6, 0x0
lbl_80202CC8:
    cmpwi r6, 0x0
    beq lbl_80202CD4
    li r4, 0x1
lbl_80202CD4:
    cmpwi r4, 0x0
    beq lbl_80202D84
    addi r0, r5, 0x7f
    lfs f0, lbl_804A1FD8
    subf r0, r7, r0
    li r4, 0x0
    srwi r0, r0, 7
    mtctr r0
    cmplw r7, r5
    bge lbl_80202D84
lbl_80202CFC:
    stfs f0, 0x0(r7)
    stfs f0, 0x4(r7)
    stw r4, 0x8(r7)
    stw r4, 0xc(r7)
    stfs f0, 0x10(r7)
    stfs f0, 0x14(r7)
    stw r4, 0x18(r7)
    stw r4, 0x1c(r7)
    stfs f0, 0x20(r7)
    stfs f0, 0x24(r7)
    stw r4, 0x28(r7)
    stw r4, 0x2c(r7)
    stfs f0, 0x30(r7)
    stfs f0, 0x34(r7)
    stw r4, 0x38(r7)
    stw r4, 0x3c(r7)
    stfs f0, 0x40(r7)
    stfs f0, 0x44(r7)
    stw r4, 0x48(r7)
    stw r4, 0x4c(r7)
    stfs f0, 0x50(r7)
    stfs f0, 0x54(r7)
    stw r4, 0x58(r7)
    stw r4, 0x5c(r7)
    stfs f0, 0x60(r7)
    stfs f0, 0x64(r7)
    stw r4, 0x68(r7)
    stw r4, 0x6c(r7)
    stfs f0, 0x70(r7)
    stfs f0, 0x74(r7)
    stw r4, 0x78(r7)
    stw r4, 0x7c(r7)
    addi r7, r7, 0x80
    bdnz lbl_80202CFC
lbl_80202D84:
    addi r4, r3, 0x84
    lfs f0, lbl_804A1FD8
    addi r0, r4, 0xf
    li r5, 0x0
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r7, r4
    bge lbl_80202DC0
lbl_80202DA8:
    stfs f0, 0x0(r7)
    stfs f0, 0x4(r7)
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    addi r7, r7, 0x10
    bdnz lbl_80202DA8
lbl_80202DC0:
    lfs f0, lbl_804A1FD8
    addi r6, r3, 0x94
    li r0, 0x0
    addi r4, r3, 0xb4
    cmplw r6, r4
    stfs f0, 0x84(r3)
    stfs f0, 0x88(r3)
    stw r0, 0x8c(r3)
    stw r0, 0x90(r3)
    bge lbl_80202F5C
    addi r7, r3, 0x94
    addi r5, r3, 0x34
    subf r8, r7, r4
    addi r9, r8, 0xf
    srawi r0, r9, 4
    addze r10, r0
    addi r11, r10, 0x1
    cmpwi r11, 0x8
    ble lbl_80202F20
    cmplw r7, r4
    li r4, 0x0
    li r7, 0x0
    bgt lbl_80202E40
    clrrwi. r0, r8, 31
    li r8, 0x1
    bne lbl_80202E34
    clrrwi. r0, r9, 31
    beq lbl_80202E34
    li r8, 0x0
lbl_80202E34:
    cmpwi r8, 0x0
    beq lbl_80202E40
    li r7, 0x1
lbl_80202E40:
    cmpwi r7, 0x0
    beq lbl_80202E70
    clrrwi. r8, r10, 31
    li r7, 0x1
    bne lbl_80202E64
    clrrwi r0, r11, 31
    cmpw r8, r0
    beq lbl_80202E64
    li r7, 0x0
lbl_80202E64:
    cmpwi r7, 0x0
    beq lbl_80202E70
    li r4, 0x1
lbl_80202E70:
    cmpwi r4, 0x0
    beq lbl_80202F20
    addi r0, r5, 0x7f
    lfs f0, lbl_804A1FD8
    subf r0, r6, r0
    li r4, 0x0
    srwi r0, r0, 7
    mtctr r0
    cmplw r6, r5
    bge lbl_80202F20
lbl_80202E98:
    stfs f0, 0x0(r6)
    stfs f0, 0x4(r6)
    stw r4, 0x8(r6)
    stw r4, 0xc(r6)
    stfs f0, 0x10(r6)
    stfs f0, 0x14(r6)
    stw r4, 0x18(r6)
    stw r4, 0x1c(r6)
    stfs f0, 0x20(r6)
    stfs f0, 0x24(r6)
    stw r4, 0x28(r6)
    stw r4, 0x2c(r6)
    stfs f0, 0x30(r6)
    stfs f0, 0x34(r6)
    stw r4, 0x38(r6)
    stw r4, 0x3c(r6)
    stfs f0, 0x40(r6)
    stfs f0, 0x44(r6)
    stw r4, 0x48(r6)
    stw r4, 0x4c(r6)
    stfs f0, 0x50(r6)
    stfs f0, 0x54(r6)
    stw r4, 0x58(r6)
    stw r4, 0x5c(r6)
    stfs f0, 0x60(r6)
    stfs f0, 0x64(r6)
    stw r4, 0x68(r6)
    stw r4, 0x6c(r6)
    stfs f0, 0x70(r6)
    stfs f0, 0x74(r6)
    stw r4, 0x78(r6)
    stw r4, 0x7c(r6)
    addi r6, r6, 0x80
    bdnz lbl_80202E98
lbl_80202F20:
    addi r4, r3, 0xb4
    lfs f0, lbl_804A1FD8
    addi r0, r4, 0xf
    li r5, 0x0
    subf r0, r6, r0
    srwi r0, r0, 4
    mtctr r0
    cmplw r6, r4
    bge lbl_80202F5C
lbl_80202F44:
    stfs f0, 0x0(r6)
    stfs f0, 0x4(r6)
    stw r5, 0x8(r6)
    stw r5, 0xc(r6)
    addi r6, r6, 0x10
    bdnz lbl_80202F44
lbl_80202F5C:
    lis r4, fn_80203050@ha
    lis r5, fn_80203070@ha
    addi r4, r4, fn_80203050@l
    li r6, 0xc
    addi r5, r5, fn_80203070@l
    li r7, 0x3
    addi r3, r3, 0xb4
    bl __construct_array
    lfs f0, lbl_804A1FDC
    li r0, 0x0
    stw r0, 0x34(r31)
    mr r3, r31
    stfs f0, 0x2c(r31)
    stfs f0, 0x30(r31)
    stw r0, 0x38(r31)
    stfs f0, 0x1c(r31)
    stfs f0, 0x20(r31)
    stw r0, 0x24(r31)
    stw r0, 0x28(r31)
    stfs f0, 0x3c(r31)
    stfs f0, 0x40(r31)
    stw r0, 0x44(r31)
    stw r0, 0x48(r31)
    stfs f0, 0x54(r31)
    stfs f0, 0x58(r31)
    stw r0, 0x5c(r31)
    stw r0, 0x60(r31)
    stfs f0, 0x84(r31)
    stfs f0, 0x88(r31)
    stw r0, 0x8c(r31)
    stw r0, 0x90(r31)
    stw r0, 0xd8(r31)
    stw r0, 0xe4(r31)
    stw r0, 0xf4(r31)
    stfs f0, 0x64(r31)
    stfs f0, 0x68(r31)
    stw r0, 0x6c(r31)
    stw r0, 0x70(r31)
    stfs f0, 0x94(r31)
    stfs f0, 0x98(r31)
    stw r0, 0x9c(r31)
    stw r0, 0xa0(r31)
    stw r0, 0xdc(r31)
    stw r0, 0xe8(r31)
    stw r0, 0xf8(r31)
    stfs f0, 0x74(r31)
    stfs f0, 0x78(r31)
    stw r0, 0x7c(r31)
    stw r0, 0x80(r31)
    stfs f0, 0xa4(r31)
    stfs f0, 0xa8(r31)
    stw r0, 0xac(r31)
    stw r0, 0xb0(r31)
    stw r0, 0xe0(r31)
    stw r0, 0xec(r31)
    stw r0, 0xfc(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80203050
// ----------------------------------------------------------------------------
extern "C" asm void fn_80203050() {
    nofralloc
    li r0, 0x0
    addi r4, r3, 0x4
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    blr
}

// ----------------------------------------------------------------------------
// fn_80203070
// ----------------------------------------------------------------------------
extern "C" asm void fn_80203070() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_802030AC
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
    cmpwi r31, 0x0
    ble lbl_802030AC
    mr r3, r30
    bl dtor_80136CFC
lbl_802030AC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GetInstance__Q44nw4r3snd6detail9AxManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void GetInstance__Q44nw4r3snd6detail9AxManagerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lbz r0, lbl_8049DA1C
    extsb. r0, r0
    bne lbl_80203110
    lis r31, lbl_80403F68@ha
    addi r3, r31, lbl_80403F68@l
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    lis r4, __dt__Q44nw4r3snd6detail9AxManagerFv@ha
    lis r5, lbl_80403F5C@ha
    addi r3, r31, lbl_80403F68@l
    addi r4, r4, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r5, lbl_80403F5C@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA1C
lbl_80203110:
    lwz r31, 0xc(r1)
    lis r3, lbl_80403F68@ha
    lwz r0, 0x14(r1)
    addi r3, r3, lbl_80403F68@l
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail9AxManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail9AxManagerFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_80203188
    lis r4, fn_80203070@ha
    li r5, 0xc
    addi r4, r4, fn_80203070@l
    li r6, 0x3
    addi r3, r3, 0xb4
    bl __destroy_arr
    addic. r3, r30, 0x8
    beq lbl_80203178
    li r4, 0x0
    bl __dt__Q44nw4r2ut6detail12LinkListImplFv
lbl_80203178:
    cmpwi r31, 0x0
    ble lbl_80203188
    mr r3, r30
    bl dtor_80136CFC
lbl_80203188:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Init__Q44nw4r3snd6detail9AxManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void Init__Q44nw4r3snd6detail9AxManagerFv() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_802032A4
    lis r30, lbl_80403C20@ha
    li r4, 0x0
    addi r3, r30, lbl_80403C20@l
    li r5, 0x100
    bl memset
    addi r3, r30, lbl_80403C20@l
    li r4, 0x100
    bl DCFlushRange
    addi r0, r30, lbl_80403C20@l
    stw r0, 0x4(r29)
    bl OSDisableInterrupts
    mr r31, r3
    addi r3, r29, 0xd8
    addi r4, r29, 0xe4
    bl AXGetAuxACallback
    addi r3, r29, 0xdc
    addi r4, r29, 0xe8
    bl AXGetAuxBCallback
    addi r3, r29, 0xe0
    addi r4, r29, 0xec
    bl AXGetAuxCCallback
    li r3, 0x0
    li r4, 0x0
    bl AXRegisterAuxACallback
    li r3, 0x0
    li r4, 0x0
    bl AXRegisterAuxBCallback
    li r3, 0x0
    li r4, 0x0
    bl AXRegisterAuxCCallback
    lis r3, AxCallbackFunc__Q44nw4r3snd6detail9AxManagerFv@ha
    addi r3, r3, AxCallbackFunc__Q44nw4r3snd6detail9AxManagerFv@l
    bl AXRegisterCallback
    stw r3, 0x14(r29)
    lis r30, lbl_80403D20@ha
    addi r3, r30, lbl_80403D20@l
    li r4, 0x0
    li r5, 0x200
    bl memset
    addi r8, r30, lbl_80403D20@l
    la r0, lbl_8049DA08
    la r7, lbl_8049DA0C
    la r6, lbl_8049DA10
    la r5, lbl_8049DA14
    la r4, lbl_8049DA18
    stw r0, 0x4(r8)
    li r0, 0x1
    mr r3, r31
    stw r7, 0x8(r8)
    stw r6, 0xc(r8)
    stw r5, 0x10(r8)
    stw r4, 0x14(r8)
    stb r0, 0x18(r29)
    bl OSRestoreInterrupts
lbl_802032A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// GetOutputVolume__Q44nw4r3snd6detail9AxManagerCFv
// ----------------------------------------------------------------------------
extern "C" asm void GetOutputVolume__Q44nw4r3snd6detail9AxManagerCFv() {
    nofralloc
    lwz r5, 0x24(r3)
    lwz r0, 0x28(r3)
    stwu r1, -0x20(r1)
    cmpw r0, r5
    blt lbl_802032DC
    lfs f1, 0x20(r3)
    b lbl_80203324
lbl_802032DC:
    lis r4, 0x4330
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r5, 0x8000
    lfd f4, lbl_804A1FE0
    stw r4, 0x8(r1)
    lfs f0, 0x20(r3)
    lfd f1, 0x8(r1)
    lfs f2, 0x1c(r3)
    fsubs f3, f1, f4
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    stw r4, 0x10(r1)
    lfd f0, 0x10(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f4
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_80203324:
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// Update__Q44nw4r3snd6detail9AxManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void Update__Q44nw4r3snd6detail9AxManagerFv() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    opword 0xF3E10068
    stfd f30, 0x50(r1)
    opword 0xF3C10058
    stfd f29, 0x40(r1)
    opword 0xF3A10048
    stfd f28, 0x30(r1)
    opword 0xF3810038
    lis r0, 0x4330
    lfs f28, lbl_804A1FDC
    stw r31, 0x2c(r1)
    lfs f29, lbl_804A1FD8
    stw r30, 0x28(r1)
    li r30, 0x0
    lfd f31, lbl_804A1FE0
    stw r29, 0x24(r1)
    mr r29, r3
    lfs f30, lbl_804A1FE8
    mr r31, r29
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
lbl_8020338C:
    lwz r3, 0x90(r31)
    li r4, 0x0
    lwz r0, 0x8c(r31)
    cmpw r3, r0
    bge lbl_802033BC
    lwz r3, 0x90(r31)
    lwz r0, 0x8c(r31)
    cmpw r3, r0
    bge lbl_802033B8
    addi r0, r3, 0x1
    stw r0, 0x90(r31)
lbl_802033B8:
    li r4, 0x1
lbl_802033BC:
    lwz r3, 0x60(r31)
    lwz r0, 0x5c(r31)
    cmpw r3, r0
    bge lbl_80203404
    lwz r3, 0x60(r31)
    lwz r0, 0x5c(r31)
    cmpw r3, r0
    bge lbl_802033E4
    addi r0, r3, 0x1
    stw r0, 0x60(r31)
lbl_802033E4:
    lwz r3, 0x60(r31)
    lwz r0, 0x5c(r31)
    cmpw r3, r0
    blt lbl_80203400
    mr r3, r29
    mr r4, r30
    bl ShutdownEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBus
lbl_80203400:
    li r4, 0x1
lbl_80203404:
    cmpwi r4, 0x0
    beq lbl_80203544
    lwz r4, 0x8c(r31)
    lwz r0, 0x90(r31)
    lfs f4, lbl_804A1FDC
    cmpw r0, r4
    blt lbl_80203428
    lfs f0, 0x88(r31)
    b lbl_80203460
lbl_80203428:
    xoris r3, r0, 0x8000
    xoris r0, r4, 0x8000
    stw r3, 0xc(r1)
    lfs f0, 0x88(r31)
    lfd f1, 0x8(r1)
    lfs f2, 0x84(r31)
    fsubs f3, f1, f31
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    lfd f0, 0x10(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f31
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_80203460:
    fcmpo cr0, f0, f28
    ble lbl_80203470
    fmr f0, f28
    b lbl_8020347C
lbl_80203470:
    fcmpo cr0, f0, f29
    bge lbl_8020347C
    fmr f0, f29
lbl_8020347C:
    lwz r4, 0x5c(r31)
    fmuls f4, f4, f0
    lwz r0, 0x60(r31)
    cmpw r0, r4
    blt lbl_80203498
    lfs f0, 0x58(r31)
    b lbl_802034D0
lbl_80203498:
    xoris r3, r0, 0x8000
    xoris r0, r4, 0x8000
    stw r3, 0xc(r1)
    lfs f0, 0x58(r31)
    lfd f1, 0x8(r1)
    lfs f2, 0x54(r31)
    fsubs f3, f1, f31
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    lfd f0, 0x10(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f31
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_802034D0:
    fcmpo cr0, f0, f28
    ble lbl_802034E0
    fmr f0, f28
    b lbl_802034EC
lbl_802034E0:
    fcmpo cr0, f0, f29
    bge lbl_802034EC
    fmr f0, f29
lbl_802034EC:
    fmuls f4, f4, f0
    cmpwi r30, 0x1
    fmuls f0, f30, f4
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    beq lbl_80203530
    bge lbl_80203518
    cmpwi r30, 0x0
    bge lbl_80203524
    b lbl_80203544
lbl_80203518:
    cmpwi r30, 0x3
    bge lbl_80203544
    b lbl_8020353C
lbl_80203524:
    clrlwi r3, r0, 16
    bl fn_8029D3E0
    b lbl_80203544
lbl_80203530:
    clrlwi r3, r0, 16
    bl fn_8029D3E8
    b lbl_80203544
lbl_8020353C:
    clrlwi r3, r0, 16
    bl fn_8029D3F0
lbl_80203544:
    addi r30, r30, 0x1
    addi r31, r31, 0x10
    cmpwi r30, 0x3
    blt lbl_8020338C
    lwz r3, 0x28(r29)
    lwz r0, 0x24(r29)
    cmpw r3, r0
    bge lbl_80203588
    lwz r3, 0x28(r29)
    lwz r0, 0x24(r29)
    cmpw r3, r0
    bge lbl_8020357C
    addi r0, r3, 0x1
    stw r0, 0x28(r29)
lbl_8020357C:
    bl GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
    li r4, 0x8
    bl UpdateAllVoicesSync__Q44nw4r3snd6detail12VoiceManagerFUl
lbl_80203588:
    lwz r3, 0x48(r29)
    lwz r0, 0x44(r29)
    cmpw r3, r0
    bge lbl_802035B0
    lwz r3, 0x48(r29)
    lwz r0, 0x44(r29)
    cmpw r3, r0
    bge lbl_802035B0
    addi r0, r3, 0x1
    stw r0, 0x48(r29)
lbl_802035B0:
    lwz r3, 0x38(r29)
    lwz r0, 0x34(r29)
    cmpw r3, r0
    bge lbl_802035D8
    lwz r3, 0x38(r29)
    lwz r0, 0x34(r29)
    cmpw r3, r0
    bge lbl_802035D8
    addi r0, r3, 0x1
    stw r0, 0x38(r29)
lbl_802035D8:
    lwz r4, 0x34(r29)
    lwz r0, 0x38(r29)
    cmpw r0, r4
    blt lbl_802035F0
    lfs f5, 0x30(r29)
    b lbl_8020362C
lbl_802035F0:
    xoris r3, r0, 0x8000
    xoris r0, r4, 0x8000
    stw r3, 0xc(r1)
    lfd f4, lbl_804A1FE0
    lfd f0, 0x8(r1)
    lfs f1, 0x30(r29)
    lfs f2, 0x2c(r29)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f5, f2, f0
lbl_8020362C:
    lwz r4, 0x44(r29)
    lwz r0, 0x48(r29)
    cmpw r0, r4
    blt lbl_80203644
    lfs f0, 0x40(r29)
    b lbl_80203680
lbl_80203644:
    xoris r3, r0, 0x8000
    xoris r0, r4, 0x8000
    stw r3, 0xc(r1)
    lfd f4, lbl_804A1FE0
    lfd f0, 0x8(r1)
    lfs f1, 0x40(r29)
    lfs f2, 0x3c(r29)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_80203680:
    fmuls f0, f5, f0
    lfs f1, lbl_804A1FDC
    fcmpo cr0, f0, f1
    ble lbl_80203694
    b lbl_802036A8
lbl_80203694:
    lfs f1, lbl_804A1FD8
    fcmpo cr0, f0, f1
    bge lbl_802036A4
    b lbl_802036A8
lbl_802036A4:
    fmr f1, f0
lbl_802036A8:
    lfs f0, lbl_804A1FE8
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
    clrlwi r3, r3, 16
    bl fn_8029D3C8
    opword 0xE3E10068
    lfd f31, 0x60(r1)
    opword 0xE3C10058
    lfd f30, 0x50(r1)
    opword 0xE3A10048
    lfd f29, 0x40(r1)
    opword 0xE3810038
    lfd f28, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x74(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// GetZeroBufferAddress__Q44nw4r3snd6detail9AxManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void GetZeroBufferAddress__Q44nw4r3snd6detail9AxManagerFv() {
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// RegisterCallback__Q44nw4r3snd6detail9AxManagerFPQ54nw4r3snd6detail9AxManager16CallbackListNodePFv_v
// ----------------------------------------------------------------------------
extern "C" asm void RegisterCallback__Q44nw4r3snd6detail9AxManagerFPQ54nw4r3snd6detail9AxManager16CallbackListNodePFv_v() {
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
    bl OSDisableInterrupts
    stw r31, 0x8(r30)
    addi r0, r29, 0xc
    mr r31, r3
    mr r5, r30
    stw r0, 0x8(r1)
    addi r3, r29, 0x8
    addi r4, r1, 0x8
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// UnregisterCallback__Q44nw4r3snd6detail9AxManagerFPQ54nw4r3snd6detail9AxManager16CallbackListNode
// ----------------------------------------------------------------------------
extern "C" asm void UnregisterCallback__Q44nw4r3snd6detail9AxManagerFPQ54nw4r3snd6detail9AxManager16CallbackListNode() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    mr r31, r3
    mr r4, r30
    addi r3, r29, 0x8
    bl Erase__Q44nw4r2ut6detail12LinkListImplFPQ34nw4r2ut12LinkListNode
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// SetOutputMode__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd10OutputMode
// ----------------------------------------------------------------------------
extern "C" asm void SetOutputMode__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd10OutputMode() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r0, 0x0(r3)
    mr r25, r3
    mr r26, r4
    cmpw r0, r4
    beq lbl_802038BC
    bl OSDisableInterrupts
    cmpwi r26, 0x2
    stw r26, 0x0(r25)
    mr r31, r3
    beq lbl_80203840
    bge lbl_8020381C
    cmpwi r26, 0x0
    beq lbl_80203828
    bge lbl_80203834
    b lbl_80203854
lbl_8020381C:
    cmpwi r26, 0x4
    bge lbl_80203854
    b lbl_8020384C
lbl_80203828:
    li r3, 0x0
    bl fn_8029D3A8
    b lbl_80203854
lbl_80203834:
    li r3, 0x1
    bl fn_8029D3A8
    b lbl_80203854
lbl_80203840:
    li r3, 0x2
    bl fn_8029D3A8
    b lbl_80203854
lbl_8020384C:
    li r3, 0x0
    bl fn_8029D3A8
lbl_80203854:
    bl GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
    li r4, 0x10
    bl UpdateAllVoicesSync__Q44nw4r3snd6detail12VoiceManagerFUl
    addi r28, r25, 0xb4
    li r27, 0x0
lbl_80203868:
    lwz r30, 0x4(r28)
    addi r29, r28, 0x4
    b lbl_8020388C
lbl_80203874:
    lwz r12, -0x4(r30)
    subi r3, r30, 0x4
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r30, 0x0(r30)
lbl_8020388C:
    cmplw r30, r29
    bne lbl_80203874
    addi r27, r27, 0x1
    addi r28, r28, 0xc
    cmpwi r27, 0x3
    blt lbl_80203868
    cmpwi r26, 0x2
    bne lbl_802038B4
    li r0, 0x0
    stw r0, 0xfc(r25)
lbl_802038B4:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_802038BC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// GetOutputMode__Q44nw4r3snd6detail9AxManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void GetOutputMode__Q44nw4r3snd6detail9AxManagerFv() {
    nofralloc
    lwz r3, 0x0(r3)
    blr
}

// ----------------------------------------------------------------------------
// SetMasterVolume__Q44nw4r3snd6detail9AxManagerFfi
// ----------------------------------------------------------------------------
extern "C" asm void SetMasterVolume__Q44nw4r3snd6detail9AxManagerFfi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lfs f5, lbl_804A1FDC
    stw r0, 0x24(r1)
    fcmpo cr0, f1, f5
    ble lbl_802038F8
    b lbl_8020390C
lbl_802038F8:
    lfs f5, lbl_804A1FD8
    fcmpo cr0, f1, f5
    bge lbl_80203908
    b lbl_8020390C
lbl_80203908:
    fmr f5, f1
lbl_8020390C:
    lwz r6, 0x24(r3)
    lwz r0, 0x28(r3)
    cmpw r0, r6
    blt lbl_80203924
    lfs f0, 0x20(r3)
    b lbl_8020396C
lbl_80203924:
    lis r5, 0x4330
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    xoris r0, r6, 0x8000
    lfd f4, lbl_804A1FE0
    stw r5, 0x8(r1)
    lfs f0, 0x20(r3)
    lfd f1, 0x8(r1)
    lfs f2, 0x1c(r3)
    fsubs f3, f1, f4
    stw r0, 0x14(r1)
    fsubs f1, f0, f2
    stw r5, 0x10(r1)
    lfd f0, 0x10(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f4
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_8020396C:
    lis r5, 0x5555
    li r0, 0x0
    addi r6, r4, 0x2
    cmpwi r4, 0x0
    addi r4, r5, 0x5556
    stw r0, 0x28(r3)
    mulhw r4, r4, r6
    stfs f0, 0x1c(r3)
    stfs f5, 0x20(r3)
    srwi r0, r4, 31
    add r0, r4, r0
    stw r0, 0x24(r3)
    bne lbl_802039AC
    bl GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
    li r4, 0x8
    bl UpdateAllVoicesSync__Q44nw4r3snd6detail12VoiceManagerFUl
lbl_802039AC:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// AxCallbackFunc__Q44nw4r3snd6detail9AxManagerFv
// ----------------------------------------------------------------------------
extern "C" asm void AxCallbackFunc__Q44nw4r3snd6detail9AxManagerFv() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lbz r0, lbl_8049DA1C
    extsb. r0, r0
    bne lbl_80203A08
    lis r25, lbl_80403F68@ha
    addi r3, r25, lbl_80403F68@l
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    lis r4, __dt__Q44nw4r3snd6detail9AxManagerFv@ha
    lis r5, lbl_80403F5C@ha
    addi r3, r25, lbl_80403F68@l
    addi r4, r4, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r5, lbl_80403F5C@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA1C
lbl_80203A08:
    lis r25, lbl_80403F68@ha
    lis r27, __dt__Q44nw4r3snd6detail9AxManagerFv@ha
    addi r26, r25, lbl_80403F68@l
    lis r28, lbl_80403F5C@ha
    lwz r31, 0xc(r26)
    addi r30, r26, 0xc
    li r29, 0x1
    b lbl_80203A3C
lbl_80203A28:
    mr r3, r31
    lwz r31, 0x0(r31)
    lwz r12, 0x8(r3)
    mtctr r12
    bctrl
lbl_80203A3C:
    lbz r0, lbl_8049DA1C
    extsb. r0, r0
    bne lbl_80203A64
    addi r3, r25, lbl_80403F68@l
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    addi r3, r25, lbl_80403F68@l
    addi r4, r27, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r28, lbl_80403F5C@l
    bl __register_global_object
    stb r29, lbl_8049DA1C
lbl_80203A64:
    cmplw r31, r30
    bne lbl_80203A28
    lbz r0, lbl_8049DA1C
    extsb. r0, r0
    bne lbl_80203AA0
    mr r3, r26
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    lis r4, __dt__Q44nw4r3snd6detail9AxManagerFv@ha
    lis r5, lbl_80403F5C@ha
    mr r3, r26
    addi r4, r4, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r5, lbl_80403F5C@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA1C
lbl_80203AA0:
    lis r31, lbl_80403F68@ha
    addi r31, r31, lbl_80403F68@l
    lwz r0, 0x14(r31)
    cmpwi r0, 0x0
    beq lbl_80203AFC
    lbz r0, lbl_8049DA1C
    extsb. r0, r0
    bne lbl_80203AE8
    mr r3, r31
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    lis r4, __dt__Q44nw4r3snd6detail9AxManagerFv@ha
    lis r5, lbl_80403F5C@ha
    mr r3, r31
    addi r4, r4, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r5, lbl_80403F5C@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA1C
lbl_80203AE8:
    lis r3, lbl_80403F68@ha
    addi r3, r3, lbl_80403F68@l
    lwz r12, 0x14(r3)
    mtctr r12
    bctrl
lbl_80203AFC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// AppendEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBusPQ34nw4r3snd6FxBase
// ----------------------------------------------------------------------------
extern "C" asm void AppendEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBusPQ34nw4r3snd6FxBase() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    slwi r27, r4, 4
    mr r29, r3
    add r28, r3, r27
    mr r30, r4
    lwz r6, 0x60(r28)
    mr r31, r5
    lwz r0, 0x5c(r28)
    cmpw r6, r0
    bge lbl_80203B50
    bl ShutdownEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBus
lbl_80203B50:
    lwz r5, 0x5c(r28)
    lwz r0, 0x60(r28)
    cmpw r0, r5
    blt lbl_80203B6C
    add r3, r29, r27
    lfs f1, 0x58(r3)
    b lbl_80203BB8
lbl_80203B6C:
    lis r3, 0x4330
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    add r4, r29, r27
    xoris r0, r5, 0x8000
    lfd f4, lbl_804A1FE0
    stw r3, 0x10(r1)
    lfs f0, 0x58(r4)
    lfd f1, 0x10(r1)
    lfs f2, 0x54(r4)
    fsubs f3, f1, f4
    stw r0, 0x1c(r1)
    fsubs f1, f0, f2
    stw r3, 0x18(r1)
    lfd f0, 0x18(r1)
    fmuls f1, f3, f1
    fsubs f0, f0, f4
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_80203BB8:
    add r3, r29, r27
    lfs f0, lbl_804A1FDC
    stfs f1, 0x54(r3)
    li r0, 0x0
    cmpwi r30, 0x1
    stfs f0, 0x58(r3)
    stw r0, 0x5c(r3)
    stw r0, 0x60(r3)
    beq lbl_80203C0C
    bge lbl_80203BEC
    cmpwi r30, 0x0
    bge lbl_80203BF8
    b lbl_80203C30
lbl_80203BEC:
    cmpwi r30, 0x3
    bge lbl_80203C30
    b lbl_80203C20
lbl_80203BF8:
    lis r3, 0x1
    addi r0, r3, -0x8000
    clrlwi r3, r0, 16
    bl fn_8029D3E0
    b lbl_80203C30
lbl_80203C0C:
    lis r3, 0x1
    addi r0, r3, -0x8000
    clrlwi r3, r0, 16
    bl fn_8029D3E8
    b lbl_80203C30
lbl_80203C20:
    lis r3, 0x1
    addi r0, r3, -0x8000
    clrlwi r3, r0, 16
    bl fn_8029D3F0
lbl_80203C30:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80203C54
    li r3, 0x0
    b lbl_80203D00
lbl_80203C54:
    bl OSDisableInterrupts
    mulli r0, r30, 0xc
    mr r28, r3
    add r3, r29, r0
    lwz r0, 0xb4(r3)
    addi r27, r3, 0xb4
    cmpwi r0, 0x0
    bne lbl_80203CDC
    cmpwi r30, 0x1
    beq lbl_80203CAC
    bge lbl_80203C8C
    cmpwi r30, 0x0
    bge lbl_80203C98
    b lbl_80203CD0
lbl_80203C8C:
    cmpwi r30, 0x3
    bge lbl_80203CD0
    b lbl_80203CC0
lbl_80203C98:
    lis r3, AuxCallbackFunc__Q44nw4r3snd6detail9AxManagerFPvPv@ha
    mr r4, r30
    addi r3, r3, AuxCallbackFunc__Q44nw4r3snd6detail9AxManagerFPvPv@l
    bl AXRegisterAuxACallback
    b lbl_80203CD0
lbl_80203CAC:
    lis r3, AuxCallbackFunc__Q44nw4r3snd6detail9AxManagerFPvPv@ha
    mr r4, r30
    addi r3, r3, AuxCallbackFunc__Q44nw4r3snd6detail9AxManagerFPvPv@l
    bl AXRegisterAuxBCallback
    b lbl_80203CD0
lbl_80203CC0:
    lis r3, AuxCallbackFunc__Q44nw4r3snd6detail9AxManagerFPvPv@ha
    mr r4, r30
    addi r3, r3, AuxCallbackFunc__Q44nw4r3snd6detail9AxManagerFPvPv@l
    bl AXRegisterAuxCCallback
lbl_80203CD0:
    add r3, r29, r30
    li r0, 0x2
    stb r0, 0xf0(r3)
lbl_80203CDC:
    addi r0, r27, 0x4
    mr r3, r27
    stw r0, 0x8(r1)
    addi r4, r1, 0x8
    addi r5, r31, 0x4
    bl Insert__Q44nw4r2ut6detail12LinkListImplFQ54nw4r2ut6detail12LinkListImpl8IteratorPQ34nw4r2ut12LinkListNode
    mr r3, r28
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_80203D00:
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// ClearEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBusi
// ----------------------------------------------------------------------------
extern "C" asm void ClearEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBusi() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    lis r0, 0x4330
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r0, 0x8(r1)
    stw r0, 0x10(r1)
    bne lbl_80203DCC
    bl ShutdownEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBus
    slwi r5, r31, 4
    add r4, r30, r5
    lwz r0, 0x5c(r4)
    lwz r3, 0x60(r4)
    cmpw r3, r0
    bge lbl_80203E5C
    blt lbl_80203D70
    lfs f1, 0x58(r4)
    b lbl_80203DAC
lbl_80203D70:
    xoris r3, r3, 0x8000
    xoris r0, r0, 0x8000
    stw r3, 0xc(r1)
    lfd f4, lbl_804A1FE0
    lfd f0, 0x8(r1)
    lfs f1, 0x58(r4)
    lfs f2, 0x54(r4)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f1, f2, f0
lbl_80203DAC:
    add r3, r30, r5
    lfs f0, lbl_804A1FD8
    stfs f1, 0x54(r3)
    li r0, 0x0
    stfs f0, 0x58(r3)
    stw r0, 0x5c(r3)
    stw r0, 0x60(r3)
    b lbl_80203E5C
lbl_80203DCC:
    slwi r8, r4, 4
    add r6, r3, r8
    lwz r7, 0x5c(r6)
    lwz r0, 0x60(r6)
    cmpw r0, r7
    blt lbl_80203DEC
    lfs f0, 0x58(r6)
    b lbl_80203E28
lbl_80203DEC:
    xoris r4, r0, 0x8000
    xoris r0, r7, 0x8000
    stw r4, 0xc(r1)
    lfd f4, lbl_804A1FE0
    lfd f0, 0x8(r1)
    lfs f1, 0x58(r6)
    lfs f2, 0x54(r6)
    fsubs f3, f0, f4
    stw r0, 0x14(r1)
    fsubs f1, f1, f2
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fmuls f1, f3, f1
    fdivs f0, f1, f0
    fadds f0, f2, f0
lbl_80203E28:
    lis r4, 0x5555
    add r6, r3, r8
    addi r0, r5, 0x2
    stfs f0, 0x54(r6)
    addi r3, r4, 0x5556
    lfs f0, lbl_804A1FD8
    mulhw r4, r3, r0
    li r0, 0x0
    stfs f0, 0x58(r6)
    srwi r3, r4, 31
    add r3, r4, r3
    stw r3, 0x5c(r6)
    stw r0, 0x60(r6)
lbl_80203E5C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ShutdownEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBus
// ----------------------------------------------------------------------------
extern "C" asm void ShutdownEffect__Q44nw4r3snd6detail9AxManagerFQ34nw4r3snd6AuxBus() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r26, r3
    mr r27, r4
    bl OSDisableInterrupts
    mulli r0, r27, 0xc
    mr r31, r3
    add r4, r26, r0
    lwz r0, 0xb4(r4)
    addi r28, r4, 0xb4
    cmpwi r0, 0x0
    bne lbl_80203EB8
    bl OSRestoreInterrupts
    b lbl_80203F5C
lbl_80203EB8:
    lwz r30, 0x4(r28)
    addi r29, r28, 0x4
    b lbl_80203EDC
lbl_80203EC4:
    lwz r12, -0x4(r30)
    subi r3, r30, 0x4
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r30, 0x0(r30)
lbl_80203EDC:
    cmplw r30, r29
    bne lbl_80203EC4
    mr r3, r28
    bl Clear__Q44nw4r2ut6detail12LinkListImplFv
    cmpwi r27, 0x1
    beq lbl_80203F28
    bge lbl_80203F04
    cmpwi r27, 0x0
    bge lbl_80203F10
    b lbl_80203F54
lbl_80203F04:
    cmpwi r27, 0x3
    bge lbl_80203F54
    b lbl_80203F40
lbl_80203F10:
    li r3, 0x0
    li r4, 0x0
    bl AXRegisterAuxACallback
    li r0, 0x0
    stw r0, 0xf4(r26)
    b lbl_80203F54
lbl_80203F28:
    li r3, 0x0
    li r4, 0x0
    bl AXRegisterAuxBCallback
    li r0, 0x0
    stw r0, 0xf8(r26)
    b lbl_80203F54
lbl_80203F40:
    li r3, 0x0
    li r4, 0x0
    bl AXRegisterAuxCCallback
    li r0, 0x0
    stw r0, 0xfc(r26)
lbl_80203F54:
    mr r3, r31
    bl OSRestoreInterrupts
lbl_80203F5C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// AuxCallbackFunc__Q44nw4r3snd6detail9AxManagerFPvPv
// ----------------------------------------------------------------------------
extern "C" asm void AuxCallbackFunc__Q44nw4r3snd6detail9AxManagerFPvPv() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    mr r24, r3
    mr r29, r4
    bl OSGetTick
    lbz r0, lbl_8049DA1C
    mr r31, r3
    extsb. r0, r0
    bne lbl_80203FD0
    lis r23, lbl_80403F68@ha
    addi r3, r23, lbl_80403F68@l
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    lis r4, __dt__Q44nw4r3snd6detail9AxManagerFv@ha
    lis r5, lbl_80403F5C@ha
    addi r3, r23, lbl_80403F68@l
    addi r4, r4, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r5, lbl_80403F5C@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA1C
lbl_80203FD0:
    lis r3, lbl_80403F68@ha
    lwz r0, lbl_80403F68@l(r3)
    cmpwi r0, 0x2
    bne lbl_80204008
    lwz r0, 0x0(r24)
    li r30, 0x4
    stw r0, 0x8(r1)
    lwz r0, 0x4(r24)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r24)
    stw r0, 0x10(r1)
    lwz r0, 0xc(r24)
    stw r0, 0x14(r1)
    b lbl_80204024
lbl_80204008:
    lwz r0, 0x0(r24)
    li r30, 0x3
    stw r0, 0x8(r1)
    lwz r0, 0x4(r24)
    stw r0, 0xc(r1)
    lwz r0, 0x8(r24)
    stw r0, 0x10(r1)
lbl_80204024:
    lbz r0, lbl_8049DA1C
    extsb. r0, r0
    bne lbl_8020405C
    lis r23, lbl_80403F68@ha
    addi r3, r23, lbl_80403F68@l
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    lis r4, __dt__Q44nw4r3snd6detail9AxManagerFv@ha
    lis r5, lbl_80403F5C@ha
    addi r3, r23, lbl_80403F68@l
    addi r4, r4, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r5, lbl_80403F5C@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA1C
lbl_8020405C:
    lis r24, lbl_80403F68@ha
    addi r24, r24, lbl_80403F68@l
    add r23, r24, r29
    lbz r0, 0xf0(r23)
    cmpwi r0, 0x0
    beq lbl_80204138
    lbz r0, lbl_8049DA1C
    extsb. r0, r0
    bne lbl_802040A8
    mr r3, r24
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    lis r4, __dt__Q44nw4r3snd6detail9AxManagerFv@ha
    lis r5, lbl_80403F5C@ha
    mr r3, r24
    addi r4, r4, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r5, lbl_80403F5C@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA1C
lbl_802040A8:
    lbz r3, 0xf0(r23)
    addi r24, r1, 0x8
    li r25, 0x0
    subi r0, r3, 0x1
    stb r0, 0xf0(r23)
    b lbl_802040D8
lbl_802040C0:
    lwz r3, 0x0(r24)
    li r4, 0x0
    li r5, 0x180
    bl memset
    addi r24, r24, 0x4
    addi r25, r25, 0x1
lbl_802040D8:
    cmpw r25, r30
    blt lbl_802040C0
    lbz r0, lbl_8049DA1C
    extsb. r0, r0
    bne lbl_80204118
    lis r23, lbl_80403F68@ha
    addi r3, r23, lbl_80403F68@l
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    lis r4, __dt__Q44nw4r3snd6detail9AxManagerFv@ha
    lis r5, lbl_80403F5C@ha
    addi r3, r23, lbl_80403F68@l
    addi r4, r4, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r5, lbl_80403F5C@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA1C
lbl_80204118:
    bl OSGetTick
    lis r4, lbl_80403F68@ha
    slwi r0, r29, 2
    addi r4, r4, lbl_80403F68@l
    subf r5, r31, r3
    add r3, r4, r0
    stw r5, 0xf4(r3)
    b lbl_80204338
lbl_80204138:
    lbz r0, lbl_8049DA1C
    extsb. r0, r0
    bne lbl_8020416C
    mr r3, r24
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    lis r4, __dt__Q44nw4r3snd6detail9AxManagerFv@ha
    lis r5, lbl_80403F5C@ha
    mr r3, r24
    addi r4, r4, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r5, lbl_80403F5C@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA1C
lbl_8020416C:
    mulli r0, r29, 0xc
    lis r24, lbl_80403F68@ha
    addi r24, r24, lbl_80403F68@l
    add r23, r24, r0
    lwz r0, 0xb4(r23)
    cmpwi r0, 0x0
    bne lbl_8020420C
    addi r23, r1, 0x8
    li r24, 0x0
    b lbl_802041AC
lbl_80204194:
    lwz r3, 0x0(r23)
    li r4, 0x0
    li r5, 0x180
    bl memset
    addi r23, r23, 0x4
    addi r24, r24, 0x1
lbl_802041AC:
    cmpw r24, r30
    blt lbl_80204194
    lbz r0, lbl_8049DA1C
    extsb. r0, r0
    bne lbl_802041EC
    lis r23, lbl_80403F68@ha
    addi r3, r23, lbl_80403F68@l
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    lis r4, __dt__Q44nw4r3snd6detail9AxManagerFv@ha
    lis r5, lbl_80403F5C@ha
    addi r3, r23, lbl_80403F68@l
    addi r4, r4, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r5, lbl_80403F5C@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA1C
lbl_802041EC:
    bl OSGetTick
    lis r4, lbl_80403F68@ha
    slwi r0, r29, 2
    addi r4, r4, lbl_80403F68@l
    subf r5, r31, r3
    add r3, r4, r0
    stw r5, 0xf4(r3)
    b lbl_80204338
lbl_8020420C:
    lbz r0, lbl_8049DA1C
    extsb. r0, r0
    bne lbl_80204240
    mr r3, r24
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    lis r4, __dt__Q44nw4r3snd6detail9AxManagerFv@ha
    lis r5, lbl_80403F5C@ha
    mr r3, r24
    addi r4, r4, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r5, lbl_80403F5C@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA1C
lbl_80204240:
    lwz r28, 0xb8(r23)
    addi r27, r23, 0xb8
    lis r23, lbl_80403F68@ha
    lis r24, __dt__Q44nw4r3snd6detail9AxManagerFv@ha
    lis r25, lbl_80403F5C@ha
    li r26, 0x1
    b lbl_802042B4
lbl_8020425C:
    lbz r0, lbl_8049DA1C
    extsb. r0, r0
    bne lbl_80204284
    addi r3, r23, lbl_80403F68@l
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    addi r3, r23, lbl_80403F68@l
    addi r4, r24, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r25, lbl_80403F5C@l
    bl __register_global_object
    stb r26, lbl_8049DA1C
lbl_80204284:
    lwz r12, -0x4(r28)
    subi r3, r28, 0x4
    mr r4, r30
    addi r5, r1, 0x8
    lwz r12, 0x14(r12)
    li r6, 0x180
    lfs f1, lbl_804A1FEC
    li r7, 0x0
    lwz r8, lbl_80403F68@l(r23)
    mtctr r12
    bctrl
    lwz r28, 0x0(r28)
lbl_802042B4:
    lbz r0, lbl_8049DA1C
    extsb. r0, r0
    bne lbl_802042DC
    addi r3, r23, lbl_80403F68@l
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    addi r3, r23, lbl_80403F68@l
    addi r4, r24, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r25, lbl_80403F5C@l
    bl __register_global_object
    stb r26, lbl_8049DA1C
lbl_802042DC:
    cmplw r28, r27
    bne lbl_8020425C
    lbz r0, lbl_8049DA1C
    extsb. r0, r0
    bne lbl_8020431C
    lis r28, lbl_80403F68@ha
    addi r3, r28, lbl_80403F68@l
    bl __ct__Q44nw4r3snd6detail9AxManagerFv
    lis r4, __dt__Q44nw4r3snd6detail9AxManagerFv@ha
    lis r5, lbl_80403F5C@ha
    addi r3, r28, lbl_80403F68@l
    addi r4, r4, __dt__Q44nw4r3snd6detail9AxManagerFv@l
    addi r5, r5, lbl_80403F5C@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8049DA1C
lbl_8020431C:
    bl OSGetTick
    lis r4, lbl_80403F68@ha
    slwi r0, r29, 2
    addi r4, r4, lbl_80403F68@l
    subf r5, r31, r3
    add r3, r4, r0
    stw r5, 0xf4(r3)
lbl_80204338:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80204350
// ----------------------------------------------------------------------------
extern "C" asm void fn_80204350() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80362420@ha
    lis r4, __dt__Q44nw4r3snd6detail15BiquadFilterLpfFv@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80362420@l
    addi r4, r4, __dt__Q44nw4r3snd6detail15BiquadFilterLpfFv@l
    stw r31, 0xc(r1)
    lis r31, lbl_80403C20@ha
    addi r31, r31, lbl_80403C20@l
    stw r3, lbl_8049DA08
    la r3, lbl_8049DA08
    addi r5, r31, 0x300
    bl __register_global_object
    lis r3, lbl_80362410@ha
    lis r4, __dt__Q44nw4r3snd6detail15BiquadFilterHpfFv@ha
    addi r3, r3, lbl_80362410@l
    addi r5, r31, 0x30c
    stw r3, lbl_8049DA0C
    addi r4, r4, __dt__Q44nw4r3snd6detail15BiquadFilterHpfFv@l
    la r3, lbl_8049DA0C
    bl __register_global_object
    lis r3, lbl_80362400@ha
    lis r4, __dt__Q44nw4r3snd6detail18BiquadFilterBpf512Fv@ha
    addi r3, r3, lbl_80362400@l
    addi r5, r31, 0x318
    stw r3, lbl_8049DA10
    addi r4, r4, __dt__Q44nw4r3snd6detail18BiquadFilterBpf512Fv@l
    la r3, lbl_8049DA10
    bl __register_global_object
    lis r3, lbl_803623F0@ha
    lis r4, __dt__Q44nw4r3snd6detail19BiquadFilterBpf1024Fv@ha
    addi r3, r3, lbl_803623F0@l
    addi r5, r31, 0x324
    stw r3, lbl_8049DA14
    addi r4, r4, __dt__Q44nw4r3snd6detail19BiquadFilterBpf1024Fv@l
    la r3, lbl_8049DA14
    bl __register_global_object
    lis r3, lbl_803623E0@ha
    lis r4, __dt__Q44nw4r3snd6detail19BiquadFilterBpf2048Fv@ha
    addi r3, r3, lbl_803623E0@l
    addi r5, r31, 0x330
    stw r3, lbl_8049DA18
    addi r4, r4, __dt__Q44nw4r3snd6detail19BiquadFilterBpf2048Fv@l
    la r3, lbl_8049DA18
    bl __register_global_object
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail15BiquadFilterLpfFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail15BiquadFilterLpfFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_80204444
    cmpwi r4, 0x0
    ble lbl_80204444
    bl dtor_80136CFC
lbl_80204444:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail15BiquadFilterHpfFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail15BiquadFilterHpfFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_80204484
    cmpwi r4, 0x0
    ble lbl_80204484
    bl dtor_80136CFC
lbl_80204484:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail18BiquadFilterBpf512Fv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail18BiquadFilterBpf512Fv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_802044C4
    cmpwi r4, 0x0
    ble lbl_802044C4
    bl dtor_80136CFC
lbl_802044C4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail19BiquadFilterBpf1024Fv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail19BiquadFilterBpf1024Fv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_80204504
    cmpwi r4, 0x0
    ble lbl_80204504
    bl dtor_80136CFC
lbl_80204504:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail19BiquadFilterBpf2048Fv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail19BiquadFilterBpf2048Fv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_80204544
    cmpwi r4, 0x0
    ble lbl_80204544
    bl dtor_80136CFC
lbl_80204544:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

