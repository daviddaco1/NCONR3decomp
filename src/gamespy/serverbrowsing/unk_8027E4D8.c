#include "types.h"

// Translation unit: src/gamespy/serverbrowsing/unk_8027E4D8.cpp
// Total functions: 33

// Small Data symbols (@sda21)
extern float lbl_8049CE80;
extern float lbl_8049CE84;
extern float lbl_8049CE88;
extern float lbl_8049DBB8;
extern float lbl_8049DCA8;
extern float lbl_8049DCB0;
extern float lbl_8049DCB4;
extern float lbl_804A2330;
extern float lbl_804A2338;

// Global data symbols (@ha/@l)
extern u8 lbl_8035FBD8[];
extern u8 lbl_8036B610[];

// Forward declarations
extern void GOACryptInit();
extern void GOADecrypt();
extern void SBAllocServer();
extern void SBIsNullServer();
extern void SBRefStrHash();
extern void SBRefStrHashCleanup();
extern void SBServerAddIntKeyValue();
extern void SBServerAddKeyValue();
extern void SBServerFree();
extern void SBServerGetNext();
extern void SBServerGetPublicInetAddress();
extern void SBServerGetPublicQueryPortNBO();
extern void SBServerGetState();
extern void SBServerSetFlags();
extern void SBServerSetICMPIP();
extern void SBServerSetNext();
extern void SBServerSetPrivateAddr();
extern void SBServerSetState();
extern void TableEnter();
extern void TableLookup();
extern void TableRemove();
extern void _restgpr_19();
extern void _restgpr_22();
extern void _restgpr_23();
extern void _restgpr_24();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_19();
extern void _savegpr_22();
extern void _savegpr_23();
extern void _savegpr_24();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void closesocket();
extern void connect();
extern void detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo();
extern void detail_PrepareSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandleUlPCQ44nw4r3snd14SoundStartable9StartInfo();
extern void fn_8019B578();
extern void fn_801A341C();
extern void fn_80253528();
extern void fn_802535C4();
extern void fn_80253658();
extern void fn_80253660();
extern void fn_80253690();
extern void fn_80253E78();
extern void fn_802557FC();
extern void fn_80255E4C();
extern void fn_8025651C();
extern void fn_802565E8();
extern void fn_802565F0();
extern void fn_80256C4C();
extern void fn_80256C70();
extern void fn_8027D1D0();
extern void fn_8027D248();
extern void fn_8027D37C();
extern void fn_8027E4D8();
extern void fn_8027E668();
extern void fn_8027E704();
extern void fn_8027E7DC();
extern void fn_8027E880();
extern void fn_8027E924();
extern void fn_8027EA90();
extern void fn_8027EB18();
extern void fn_8027EBB0();
extern void fn_8027EBB8();
extern void fn_8027EBE0();
extern void fn_8027ECBC();
extern void fn_8027ED44();
extern void fn_8027EDA4();
extern void fn_8027EDDC();
extern void fn_8027EEF4();
extern void fn_8027F080();
extern void fn_8027F41C();
extern void fn_8027F91C();
extern void fn_8027FA88();
extern void fn_8027FCB8();
extern void fn_8027FD90();
extern void fn_8027FEC8();
extern void fn_80280198();
extern void fn_80280354();
extern void fn_80280C78();
extern void fn_80280E50();
extern void fn_80281014();
extern void fn_802811E4();
extern void fn_80281394();
extern void fn_802817E4();
extern void fn_80281ABC();
extern void fn_80281BC0();
extern void fn_80336B1C();
extern void fn_80336B20();
extern void fn_80336B28();
extern void fn_80336B2C();
extern void inet_addr();
extern void memcmp();
extern void memcpy();
extern void memmove();
extern void rand();
extern void recv();
extern void send();
extern void socket();
extern void sprintf();
extern void strcmp();
extern void strcpy();
extern void strlen();
extern void strncmp();

// ----------------------------------------------------------------------------
// fn_8027E4D8
// ----------------------------------------------------------------------------
asm void fn_8027E4D8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r5, lbl_8049DCB4
    lwz r0, 0x69c(r5)
    addi r30, r5, 0x59c
    cmpwi r0, 0x2
    beq lbl_8027E5C4
    bge lbl_8027E52C
    cmpwi r0, 0x0
    beq lbl_8027E538
    bge lbl_8027E560
    b lbl_8027E624
lbl_8027E52C:
    cmpwi r0, 0x4
    bge lbl_8027E624
    b lbl_8027E5F4
lbl_8027E538:
    mr r4, r30
    li r5, 0x0
    bl fn_8027D248
    mr r31, r3
    mr r3, r29
    mr r4, r30
    li r5, 0x0
    bl fn_8027D248
    subf r3, r3, r31
    b lbl_8027E62C
lbl_8027E560:
    lfd f1, lbl_804A2330
    mr r3, r29
    mr r4, r30
    bl fn_8027D37C
    fmr f31, f1
    lfd f1, lbl_804A2330
    mr r3, r28
    mr r4, r30
    bl fn_8027D37C
    lwz r3, lbl_8049DCB4
    fsub f0, f1, f31
    lwz r0, 0x6a0(r3)
    cmpwi r0, 0x0
    bne lbl_8027E59C
    fneg f0, f0
lbl_8027E59C:
    frsp f1, f0
    lfs f0, lbl_804A2338
    fcmpo cr0, f1, f0
    ble lbl_8027E5B4
    li r3, 0x1
    b lbl_8027E640
lbl_8027E5B4:
    mfcr r0
    srwi r0, r0, 31
    neg r3, r0
    b lbl_8027E640
lbl_8027E5C4:
    mr r3, r29
    mr r4, r30
    la r5, lbl_8049CE80
    bl fn_8027D1D0
    mr r31, r3
    mr r3, r28
    mr r4, r30
    la r5, lbl_8049CE80
    bl fn_8027D1D0
    mr r4, r31
    bl strcmp
    b lbl_8027E62C
lbl_8027E5F4:
    mr r3, r29
    mr r4, r30
    la r5, lbl_8049CE80
    bl fn_8027D1D0
    mr r31, r3
    mr r3, r28
    mr r4, r30
    la r5, lbl_8049CE80
    bl fn_8027D1D0
    mr r4, r31
    bl fn_801A341C
    b lbl_8027E62C
lbl_8027E624:
    li r3, 0x0
    b lbl_8027E640
lbl_8027E62C:
    lwz r4, lbl_8049DCB4
    lwz r0, 0x6a0(r4)
    cmpwi r0, 0x0
    bne lbl_8027E640
    neg r3, r3
lbl_8027E640:
    opword 0xE3E10028
    lwz r0, 0x34(r1)
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8027E668
// ----------------------------------------------------------------------------
asm void fn_8027E668() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r30, 0x0(r3)
    stw r29, 0x14(r1)
    lwz r29, 0x0(r4)
    mr r3, r30
    stw r28, 0x10(r1)
    lwz r6, lbl_8049DCB4
    addi r28, r6, 0x498
    mr r4, r28
    bl fn_8027D248
    mr r31, r3
    mr r3, r29
    mr r4, r28
    li r5, 0x0
    bl fn_8027D248
    subf. r3, r3, r31
    bne lbl_8027E6D0
    mr r3, r30
    mr r4, r29
    bl fn_8027E4D8
    b lbl_8027E6E4
lbl_8027E6D0:
    lwz r4, lbl_8049DCB4
    lwz r0, 0x6a0(r4)
    cmpwi r0, 0x0
    bne lbl_8027E6E4
    neg r3, r3
lbl_8027E6E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8027E704
// ----------------------------------------------------------------------------
asm void fn_8027E704() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lfd f1, lbl_804A2330
    stw r31, 0x1c(r1)
    lwz r31, 0x0(r3)
    stw r30, 0x18(r1)
    lwz r30, 0x0(r4)
    stw r29, 0x14(r1)
    mr r3, r30
    lwz r5, lbl_8049DCB4
    addi r29, r5, 0x498
    mr r4, r29
    bl fn_8027D37C
    fmr f31, f1
    lfd f1, lbl_804A2330
    mr r3, r31
    mr r4, r29
    bl fn_8027D37C
    fsub f2, f1, f31
    lfs f0, lbl_804A2338
    frsp f1, f2
    fcmpo cr0, f1, f0
    bgt lbl_8027E780
    blt lbl_8027E780
    mr r3, r31
    mr r4, r30
    bl fn_8027E4D8
    b lbl_8027E7B8
lbl_8027E780:
    lwz r3, lbl_8049DCB4
    lwz r0, 0x6a0(r3)
    cmpwi r0, 0x0
    bne lbl_8027E794
    fneg f2, f2
lbl_8027E794:
    frsp f1, f2
    lfs f0, lbl_804A2338
    fcmpo cr0, f1, f0
    ble lbl_8027E7AC
    li r3, 0x1
    b lbl_8027E7B8
lbl_8027E7AC:
    mfcr r0
    srwi r0, r0, 31
    neg r3, r0
lbl_8027E7B8:
    opword 0xE3E10028
    lwz r0, 0x34(r1)
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8027E7DC
// ----------------------------------------------------------------------------
asm void fn_8027E7DC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    la r5, lbl_8049CE80
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r30, 0x0(r3)
    stw r29, 0x14(r1)
    lwz r29, 0x0(r4)
    stw r28, 0x10(r1)
    mr r3, r29
    lwz r6, lbl_8049DCB4
    addi r28, r6, 0x498
    mr r4, r28
    bl fn_8027D1D0
    mr r31, r3
    mr r3, r30
    mr r4, r28
    la r5, lbl_8049CE80
    bl fn_8027D1D0
    mr r4, r31
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8027E84C
    mr r3, r30
    mr r4, r29
    bl fn_8027E4D8
    b lbl_8027E860
lbl_8027E84C:
    lwz r4, lbl_8049DCB4
    lwz r0, 0x6a0(r4)
    cmpwi r0, 0x0
    bne lbl_8027E860
    neg r3, r3
lbl_8027E860:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8027E880
// ----------------------------------------------------------------------------
asm void fn_8027E880() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    la r5, lbl_8049CE80
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r30, 0x0(r3)
    stw r29, 0x14(r1)
    lwz r29, 0x0(r4)
    stw r28, 0x10(r1)
    mr r3, r29
    lwz r6, lbl_8049DCB4
    addi r28, r6, 0x498
    mr r4, r28
    bl fn_8027D1D0
    mr r31, r3
    mr r3, r30
    mr r4, r28
    la r5, lbl_8049CE80
    bl fn_8027D1D0
    mr r4, r31
    bl fn_801A341C
    cmpwi r3, 0x0
    bne lbl_8027E8F0
    mr r3, r30
    mr r4, r29
    bl fn_8027E4D8
    b lbl_8027E904
lbl_8027E8F0:
    lwz r4, lbl_8049DCB4
    lwz r0, 0x6a0(r4)
    cmpwi r0, 0x0
    bne lbl_8027E904
    neg r3, r3
lbl_8027E904:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8027E924
// ----------------------------------------------------------------------------
asm void fn_8027E924() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x100(r5)
    cmpwi r0, 0x2
    beq lbl_8027E990
    bge lbl_8027E96C
    cmpwi r0, 0x0
    beq lbl_8027E978
    bge lbl_8027E984
    b lbl_8027E9A8
lbl_8027E96C:
    cmpwi r0, 0x4
    bge lbl_8027E9A8
    b lbl_8027E99C
lbl_8027E978:
    lis r31, fn_8027E668@ha
    addi r31, r31, fn_8027E668@l
    b lbl_8027E9B0
lbl_8027E984:
    lis r31, fn_8027E704@ha
    addi r31, r31, fn_8027E704@l
    b lbl_8027E9B0
lbl_8027E990:
    lis r31, fn_8027E7DC@ha
    addi r31, r31, fn_8027E7DC@l
    b lbl_8027E9B0
lbl_8027E99C:
    lis r31, fn_8027E880@ha
    addi r31, r31, fn_8027E880@l
    b lbl_8027E9B0
lbl_8027E9A8:
    lis r31, fn_8027E880@ha
    addi r31, r31, fn_8027E880@l
lbl_8027E9B0:
    addi r3, r3, 0x59c
    bl strlen
    cmpwi r3, 0x0
    bne lbl_8027E9F0
    li r0, 0x20
    addi r5, r28, 0x598
    subi r4, r30, 0x4
    mtctr r0
lbl_8027E9D0:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_8027E9D0
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
    b lbl_8027EA30
lbl_8027E9F0:
    mr r3, r30
    addi r4, r28, 0x498
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_8027EA30
    li r0, 0x20
    addi r5, r28, 0x598
    addi r4, r28, 0x494
    mtctr r0
lbl_8027EA14:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_8027EA14
    lwz r0, 0x4(r4)
    stw r0, 0x4(r5)
lbl_8027EA30:
    li r0, 0x20
    addi r5, r28, 0x494
    subi r4, r30, 0x4
    mtctr r0
lbl_8027EA40:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_8027EA40
    lwz r0, 0x4(r4)
    mr r4, r31
    stw r0, 0x4(r5)
    stw r29, 0x6a0(r28)
    stw r28, lbl_8049DCB4
    lwz r3, 0x4(r28)
    bl detail_PrepareSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandleUlPCQ44nw4r3snd14SoundStartable9StartInfo
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8027EA90
// ----------------------------------------------------------------------------
asm void fn_8027EA90() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r3, 0x4(r3)
    bl fn_80253658
    mr r31, r3
    li r30, 0x0
    b lbl_8027EAEC
lbl_8027EAC8:
    lwz r3, 0x4(r28)
    mr r4, r30
    bl fn_80253660
    lwz r0, 0x0(r3)
    cmplw r29, r0
    bne lbl_8027EAE8
    mr r3, r30
    b lbl_8027EAF8
lbl_8027EAE8:
    addi r30, r30, 0x1
lbl_8027EAEC:
    cmpw r30, r31
    blt lbl_8027EAC8
    li r3, -0x1
lbl_8027EAF8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8027EB18
// ----------------------------------------------------------------------------
asm void fn_8027EB18() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r3, 0x4(r3)
    bl fn_80253660
    lwz r31, 0x0(r3)
    mr r3, r29
    lwz r12, 0x488(r29)
    li r4, 0x2
    mr r5, r31
    lwz r6, 0x494(r29)
    mtctr r12
    bctrl
    lwz r3, 0x4(r29)
    mr r4, r30
    bl detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo
    lwz r4, 0x7d8(r29)
    cmpwi r4, 0x0
    bne lbl_8027EB88
    mr r3, r31
    li r4, 0x0
    bl SBServerSetNext
    b lbl_8027EB90
lbl_8027EB88:
    mr r3, r31
    bl SBServerSetNext
lbl_8027EB90:
    stw r31, 0x7d8(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8027EBB0
// ----------------------------------------------------------------------------
asm void fn_8027EBB0() {
    nofralloc
    lwz r3, 0x4(r3)
    b fn_80253658
}

// ----------------------------------------------------------------------------
// fn_8027EBB8
// ----------------------------------------------------------------------------
asm void fn_8027EBB8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0x4(r3)
    bl fn_80253660
    lwz r0, 0x14(r1)
    lwz r3, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8027EBE0
// ----------------------------------------------------------------------------
asm void fn_8027EBE0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r3, 0x4(r3)
    bl fn_80253658
    mr r31, r3
    li r29, 0x0
    b lbl_8027EC50
lbl_8027EC14:
    lwz r3, 0x4(r28)
    mr r4, r29
    bl fn_80253660
    lwz r4, 0x7d8(r28)
    lwz r30, 0x0(r3)
    cmpwi r4, 0x0
    bne lbl_8027EC40
    mr r3, r30
    li r4, 0x0
    bl SBServerSetNext
    b lbl_8027EC48
lbl_8027EC40:
    mr r3, r30
    bl SBServerSetNext
lbl_8027EC48:
    stw r30, 0x7d8(r28)
    addi r29, r29, 0x1
lbl_8027EC50:
    cmpw r29, r31
    blt lbl_8027EC14
    lwz r3, 0x4(r28)
    bl fn_80253E78
    lwz r30, 0x7d8(r28)
    cmpwi r30, 0x0
    beq lbl_8027EC9C
    stw r30, 0x8(r1)
    b lbl_8027EC88
lbl_8027EC74:
    bl SBServerGetNext
    mr r30, r3
    addi r3, r1, 0x8
    bl SBServerFree
    stw r30, 0x8(r1)
lbl_8027EC88:
    cmpwi r30, 0x0
    mr r3, r30
    bne lbl_8027EC74
    li r0, 0x0
    stw r0, 0x7d8(r28)
lbl_8027EC9C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8027ECBC
// ----------------------------------------------------------------------------
asm void fn_8027ECBC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r4, 0x8(r1)
    bl SBRefStrHash
    addi r4, r1, 0x8
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_8027ED04
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    b lbl_8027ED2C
lbl_8027ED04:
    mr r3, r31
    bl fn_8025651C
    li r0, 0x1
    stw r3, 0x8(r1)
    mr r3, r30
    stw r0, 0xc(r1)
    bl SBRefStrHash
    addi r4, r1, 0x8
    bl TableEnter
    lwz r3, 0x8(r1)
lbl_8027ED2C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8027ED44
// ----------------------------------------------------------------------------
asm void fn_8027ED44() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r4, 0x8(r1)
    bl SBRefStrHash
    addi r4, r1, 0x8
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_8027ED90
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_8027ED90
    mr r3, r31
    bl SBRefStrHash
    addi r4, r1, 0x8
    bl TableRemove
lbl_8027ED90:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8027EDA4
// ----------------------------------------------------------------------------
asm void fn_8027EDA4() {
    nofralloc
    li r5, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_8027EDD4
lbl_8027EDB4:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_8027EDC8
    addi r3, r5, 0x1
    blr
lbl_8027EDC8:
    addi r5, r5, 0x1
    addi r3, r3, 0x1
    bdnz lbl_8027EDB4
lbl_8027EDD4:
    li r3, -0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_8027EDDC
// ----------------------------------------------------------------------------
asm void fn_8027EDDC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    cmpwi r8, 0x0
    mr r24, r3
    mr r25, r4
    mr r26, r5
    mr r27, r6
    mr r28, r7
    mr r29, r9
    mr r30, r10
    bne lbl_8027EE20
    lwz r0, lbl_8049DBB8
    cmpwi r0, 0x1
    bne lbl_8027EEDC
lbl_8027EE20:
    li r0, 0x1
    li r4, 0x64
    stw r0, 0x0(r3)
    li r3, 0x4
    li r5, 0x0
    bl fn_80253528
    li r31, 0x0
    stw r3, 0x4(r24)
    mr r3, r24
    stw r31, 0x7d8(r24)
    bl SBRefStrHash
    mr r4, r25
    addi r3, r24, 0xc
    bl strcpy
    mr r4, r26
    addi r3, r24, 0x30
    bl strcpy
    mr r4, r27
    addi r3, r24, 0x54
    bl strcpy
    li r0, -0x1
    stw r29, 0x488(r24)
    addi r3, r24, 0x498
    la r4, lbl_8049CE80
    stw r31, 0x48c(r24)
    stw r30, 0x494(r24)
    stw r31, 0x6a4(r24)
    stw r0, 0x6b4(r24)
    stw r31, 0x7c(r24)
    stw r31, 0x80(r24)
    stw r31, 0x8(r24)
    stw r0, 0x484(r24)
    stw r31, 0x480(r24)
    stw r31, 0x6a8(r24)
    stw r28, 0x6bc(r24)
    bl strcpy
    addi r3, r24, 0x59c
    la r4, lbl_8049CE80
    bl strcpy
    la r3, lbl_8049CE80
    li r0, 0x80
    stw r3, 0x6b0(r24)
    stw r31, 0x7d4(r24)
    sth r0, 0x7d0(r24)
    bl fn_802565F0
    bl fn_8019B578
    bl fn_802565E8
lbl_8027EEDC:
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8027EEF4
// ----------------------------------------------------------------------------
asm void fn_8027EEF4() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r5, lbl_8035FBD8@ha
    lis r4, 0x9cd0
    stw r0, 0xa4(r1)
    addi r5, r5, lbl_8035FBD8@l
    addi r7, r3, 0xc
    li r8, 0x0
    stw r31, 0x9c(r1)
    mr r31, r3
    lwz r6, 0x38(r5)
    subi r5, r4, 0x6ce7
    b lbl_8027EF60
lbl_8027EF28:
    mullw r4, r8, r5
    extsb. r8, r3
    li r0, 0x0
    blt lbl_8027EF40
    cmpwi r8, 0x100
    blt lbl_8027EF44
lbl_8027EF40:
    li r0, 0x1
lbl_8027EF44:
    cmpwi r0, 0x0
    beq lbl_8027EF50
    b lbl_8027EF58
lbl_8027EF50:
    lwz r3, 0x10(r6)
    lbzx r8, r3, r8
lbl_8027EF58:
    add r8, r4, r8
    addi r7, r7, 0x1
lbl_8027EF60:
    lbz r3, 0x0(r7)
    extsb. r0, r3
    bne lbl_8027EF28
    lis r3, 0xcccd
    lwz r4, lbl_8049DCB0
    subi r0, r3, 0x3333
    mulhwu r0, r0, r8
    cmpwi r4, 0x0
    srwi r0, r0, 4
    mulli r0, r0, 0x14
    subf r6, r0, r8
    beq lbl_8027EF9C
    addi r3, r1, 0x10
    bl strcpy
    b lbl_8027EFB4
lbl_8027EF9C:
    lis r4, lbl_8036B610@ha
    addi r3, r1, 0x10
    addi r5, r31, 0xc
    addi r4, r4, lbl_8036B610@l
    opword 0x4CC63182
    bl sprintf
lbl_8027EFB4:
    li r0, 0x2
    li r3, 0x70ee
    stb r0, 0x9(r1)
    bl fn_80336B2C
    sth r3, 0xa(r1)
    addi r3, r1, 0x10
    bl inet_addr
    addis r0, r3, 0x1
    stw r3, 0xc(r1)
    cmplwi r0, 0xffff
    bne lbl_8027F00C
    addi r3, r1, 0x10
    bl fn_802557FC
    cmpwi r3, 0x0
    bne lbl_8027EFF8
    li r3, 0x2
    b lbl_8027F06C
lbl_8027EFF8:
    lwz r4, 0xc(r3)
    addi r3, r1, 0xc
    li r5, 0x4
    lwz r4, 0x0(r4)
    bl memcpy
lbl_8027F00C:
    lwz r3, 0x6b4(r31)
    cmpwi r3, -0x1
    bne lbl_8027F03C
    li r3, 0x2
    li r4, 0x1
    li r5, 0x6
    bl socket
    cmpwi r3, -0x1
    stw r3, 0x6b4(r31)
    bne lbl_8027F03C
    li r3, 0x1
    b lbl_8027F06C
lbl_8027F03C:
    addi r4, r1, 0x8
    li r5, 0x8
    bl connect
    cmpwi r3, 0x0
    beq lbl_8027F068
    lwz r3, 0x6b4(r31)
    bl closesocket
    li r0, -0x1
    li r3, 0x3
    stw r0, 0x6b4(r31)
    b lbl_8027F06C
lbl_8027F068:
    li r3, 0x0
lbl_8027F06C:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// fn_8027F080
// ----------------------------------------------------------------------------
asm void fn_8027F080() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_22
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r29, 0x1
    li r23, 0x0
    li r24, -0x1
    li r25, 0x1
lbl_8027F0B0:
    lwz r3, 0x6b4(r26)
    mr r4, r27
    mr r5, r28
    li r6, 0x0
    subi r29, r29, 0x1
    bl send
    cmpwi r3, 0x0
    mr r30, r3
    bgt lbl_8027F3F4
    cmpwi r29, 0x0
    blt lbl_8027F3F4
    lwz r0, 0x80(r26)
    cmpwi r0, 0x0
    bgt lbl_8027F3F4
    lwz r3, 0x7c(r26)
    cmpwi r3, 0x0
    beq lbl_8027F0F8
    bl fn_80256C70
lbl_8027F0F8:
    lwz r3, 0x6b4(r26)
    stw r23, 0x7c(r26)
    cmpwi r3, -0x1
    stw r23, 0x80(r26)
    beq lbl_8027F110
    bl closesocket
lbl_8027F110:
    lwz r0, 0x8(r26)
    stw r24, 0x6b4(r26)
    cmpwi r0, 0x0
    stw r25, 0x0(r26)
    beq lbl_8027F198
    li r31, 0x0
    b lbl_8027F17C
lbl_8027F12C:
    lwz r3, 0x8(r26)
    mr r4, r31
    bl fn_80253660
    lwz r0, 0x0(r3)
    mr r3, r26
    stw r0, 0x18(r1)
    bl SBRefStrHash
    addi r4, r1, 0x18
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_8027F178
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_8027F178
    mr r3, r26
    bl SBRefStrHash
    addi r4, r1, 0x18
    bl TableRemove
lbl_8027F178:
    addi r31, r31, 0x1
lbl_8027F17C:
    lwz r3, 0x8(r26)
    bl fn_80253658
    cmpw r31, r3
    blt lbl_8027F12C
    lwz r3, 0x8(r26)
    bl fn_802535C4
    stw r23, 0x8(r26)
lbl_8027F198:
    stw r24, 0x484(r26)
    mr r22, r26
    li r31, 0x0
    b lbl_8027F1F0
lbl_8027F1A8:
    lwz r0, 0x84(r22)
    mr r3, r26
    stw r0, 0x20(r1)
    bl SBRefStrHash
    addi r4, r1, 0x20
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_8027F1E8
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_8027F1E8
    mr r3, r26
    bl SBRefStrHash
    addi r4, r1, 0x20
    bl TableRemove
lbl_8027F1E8:
    addi r22, r22, 0x4
    addi r31, r31, 0x1
lbl_8027F1F0:
    lwz r0, 0x480(r26)
    cmpw r31, r0
    blt lbl_8027F1A8
    stw r23, 0x480(r26)
    mr r3, r26
    li r4, 0x0
    li r5, 0x0
    li r6, 0x2
    li r7, 0x0
    bl fn_8027F41C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_8027F3EC
    lwz r22, 0x80(r26)
    cmpwi r22, 0x0
    ble lbl_8027F298
    lwz r23, lbl_8049CE84
    mr r3, r23
    bl strlen
    cmplw r22, r3
    ble lbl_8027F298
    lwz r24, lbl_8049CE84
    lwz r22, 0x7c(r26)
    mr r3, r24
    bl strlen
    mr r5, r3
    mr r3, r22
    mr r4, r24
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_8027F298
    mr r3, r23
    bl strlen
    add r0, r22, r3
    lwz r12, 0x488(r26)
    stw r0, 0x6b0(r26)
    mr r3, r26
    lwz r6, 0x494(r26)
    li r4, 0x5
    lwz r5, lbl_8049DCA8
    mtctr r12
    bctrl
lbl_8027F298:
    lwz r12, 0x488(r26)
    mr r3, r26
    lwz r5, lbl_8049DCA8
    li r4, 0x4
    lwz r6, 0x494(r26)
    mtctr r12
    bctrl
    lwz r3, 0x7c(r26)
    cmpwi r3, 0x0
    beq lbl_8027F2C4
    bl fn_80256C70
lbl_8027F2C4:
    lwz r3, 0x6b4(r26)
    li r0, 0x0
    stw r0, 0x7c(r26)
    cmpwi r3, -0x1
    stw r0, 0x80(r26)
    beq lbl_8027F2E0
    bl closesocket
lbl_8027F2E0:
    lwz r0, 0x8(r26)
    li r4, -0x1
    li r3, 0x1
    stw r4, 0x6b4(r26)
    cmpwi r0, 0x0
    stw r3, 0x0(r26)
    beq lbl_8027F374
    li r23, 0x0
    b lbl_8027F354
lbl_8027F304:
    lwz r3, 0x8(r26)
    mr r4, r23
    bl fn_80253660
    lwz r0, 0x0(r3)
    mr r3, r26
    stw r0, 0x10(r1)
    bl SBRefStrHash
    addi r4, r1, 0x10
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_8027F350
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_8027F350
    mr r3, r26
    bl SBRefStrHash
    addi r4, r1, 0x10
    bl TableRemove
lbl_8027F350:
    addi r23, r23, 0x1
lbl_8027F354:
    lwz r3, 0x8(r26)
    bl fn_80253658
    cmpw r23, r3
    blt lbl_8027F304
    lwz r3, 0x8(r26)
    bl fn_802535C4
    li r0, 0x0
    stw r0, 0x8(r26)
lbl_8027F374:
    li r0, -0x1
    mr r24, r26
    stw r0, 0x484(r26)
    li r23, 0x0
    b lbl_8027F3D0
lbl_8027F388:
    lwz r0, 0x84(r24)
    mr r3, r26
    stw r0, 0x8(r1)
    bl SBRefStrHash
    addi r4, r1, 0x8
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_8027F3C8
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_8027F3C8
    mr r3, r26
    bl SBRefStrHash
    addi r4, r1, 0x8
    bl TableRemove
lbl_8027F3C8:
    addi r24, r24, 0x4
    addi r23, r23, 0x1
lbl_8027F3D0:
    lwz r0, 0x480(r26)
    cmpw r23, r0
    blt lbl_8027F388
    li r0, 0x0
    mr r3, r31
    stw r0, 0x480(r26)
    b lbl_8027F404
lbl_8027F3EC:
    cmpwi r29, 0x0
    bge lbl_8027F0B0
lbl_8027F3F4:
    cmpwi r30, 0x0
    li r3, 0x0
    bgt lbl_8027F404
    li r3, 0x3
lbl_8027F404:
    addi r11, r1, 0x50
    bl _restgpr_22
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_8027F41C
// ----------------------------------------------------------------------------
asm void fn_8027F41C() {
    nofralloc
    stwu r1, -0x360(r1)
    mflr r0
    stw r0, 0x364(r1)
    addi r11, r1, 0x360
    bl _savegpr_23
    cmpwi r4, 0x0
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    bne lbl_8027F450
    la r24, lbl_8049CE80
lbl_8027F450:
    cmpwi r5, 0x0
    bne lbl_8027F45C
    la r25, lbl_8049CE80
lbl_8027F45C:
    mr r3, r24
    bl strlen
    cmplwi r3, 0x100
    ble lbl_8027F474
    li r3, 0x6
    b lbl_8027F904
lbl_8027F474:
    mr r3, r25
    bl strlen
    cmplwi r3, 0x100
    ble lbl_8027F48C
    li r3, 0x6
    b lbl_8027F904
lbl_8027F48C:
    mr r3, r23
    bl fn_8027EEF4
    cmpwi r3, 0x0
    beq lbl_8027F4A0
    b lbl_8027F904
lbl_8027F4A0:
    stw r26, 0x7c8(r23)
    bl rand
    lis r4, 0x2c0b
    li r30, 0x0
    addi r31, r4, 0x2c1
    li r29, 0x1
    mulhw r0, r31, r3
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5d
    subf r3, r0, r3
    addi r0, r3, 0x21
    stb r0, 0x74(r23)
lbl_8027F4D8:
    lbz r0, 0x74(r23)
    add r28, r23, r29
    lbz r3, 0x73(r28)
    extsb r8, r0
    clrlwi r5, r0, 31
    extsb r0, r3
    xor r6, r8, r0
    xori r3, r8, 0x4f
    xor r4, r29, r0
    xor r5, r5, r30
    srawi r7, r6, 1
    andi. r0, r3, 0x4f
    srawi r3, r3, 1
    and r6, r6, r8
    clrlwi r4, r4, 31
    subf r0, r0, r3
    subf r6, r6, r7
    xor r3, r5, r4
    srwi r0, r0, 31
    srwi r4, r6, 31
    xor r0, r3, r0
    xor r30, r0, r4
    bl rand
    mulhw r0, r31, r3
    cmpwi r30, 0x0
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5d
    subf r3, r0, r3
    addi r0, r3, 0x21
    stb r0, 0x74(r28)
    beq lbl_8027F568
    lbz r0, 0x74(r28)
    clrlwi. r0, r0, 31
    beq lbl_8027F580
lbl_8027F568:
    cmpwi r30, 0x0
    bne lbl_8027F58C
    lbz r0, 0x74(r28)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_8027F58C
lbl_8027F580:
    lbz r3, 0x74(r28)
    addi r0, r3, 0x1
    stb r0, 0x74(r28)
lbl_8027F58C:
    addi r29, r29, 0x1
    cmpwi r29, 0x8
    blt lbl_8027F4D8
    li r4, 0x0
    li r3, 0x1
    li r0, 0x3
    stb r4, 0x32(r1)
    stb r3, 0x33(r1)
    stb r0, 0x34(r1)
    lwz r3, 0x6bc(r23)
    bl fn_80336B28
    rlwinm r5, r3, 8, 8, 15
    rlwinm r4, r3, 24, 16, 23
    rlwimi r5, r3, 24, 0, 7
    srwi r0, r3, 24
    or r5, r5, r4
    addi r3, r1, 0x35
    or r5, r5, r0
    addi r4, r1, 0x18
    stw r5, 0x18(r1)
    li r5, 0x4
    bl memcpy
    addic. r28, r23, 0xc
    addi r29, r1, 0x39
    bne lbl_8027F5F4
    la r28, lbl_8049CE80
lbl_8027F5F4:
    mr r3, r28
    bl strlen
    addi r30, r3, 0x1
    mr r3, r29
    mr r4, r28
    mr r5, r30
    bl memcpy
    addic. r31, r23, 0x30
    addi r28, r30, 0x9
    add r29, r29, r30
    bne lbl_8027F624
    la r31, lbl_8049CE80
lbl_8027F624:
    mr r3, r31
    bl strlen
    addi r30, r3, 0x1
    mr r3, r29
    mr r4, r31
    mr r5, r30
    bl memcpy
    add r29, r29, r30
    add r28, r28, r30
    mr r3, r29
    addi r4, r23, 0x74
    li r5, 0x8
    bl memcpy
    cmpwi r25, 0x0
    addi r28, r28, 0x8
    addi r29, r29, 0x8
    bne lbl_8027F66C
    la r25, lbl_8049CE80
lbl_8027F66C:
    mr r3, r25
    bl strlen
    addi r30, r3, 0x1
    mr r3, r29
    mr r4, r25
    mr r5, r30
    bl memcpy
    cmpwi r24, 0x0
    add r28, r28, r30
    add r29, r29, r30
    bne lbl_8027F69C
    la r24, lbl_8049CE80
lbl_8027F69C:
    mr r3, r24
    bl strlen
    addi r25, r3, 0x1
    mr r3, r29
    mr r4, r24
    mr r5, r25
    bl memcpy
    mr r3, r26
    add r28, r28, r25
    add r29, r29, r25
    bl fn_80336B28
    stw r3, 0x14(r1)
    mr r3, r29
    addi r4, r1, 0x14
    li r5, 0x4
    bl memcpy
    lwz r0, 0x7c8(r23)
    addi r28, r28, 0x4
    addi r29, r29, 0x4
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_8027F710
    lwz r0, 0x6a8(r23)
    mr r3, r29
    addi r4, r1, 0x10
    li r5, 0x4
    stw r0, 0x10(r1)
    bl memcpy
    addi r28, r28, 0x4
    addi r29, r29, 0x4
lbl_8027F710:
    lwz r0, 0x7c8(r23)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_8027F754
    mr r3, r27
    bl fn_80336B28
    rlwinm r5, r3, 8, 8, 15
    rlwinm r4, r3, 24, 16, 23
    rlwimi r5, r3, 24, 0, 7
    srwi r0, r3, 24
    or r5, r5, r4
    mr r3, r29
    or r5, r5, r0
    addi r4, r1, 0xc
    stw r5, 0xc(r1)
    li r5, 0x4
    bl memcpy
    addi r28, r28, 0x4
lbl_8027F754:
    clrlwi r3, r28, 16
    bl fn_80336B2C
    sth r3, 0x8(r1)
    addi r3, r1, 0x30
    addi r4, r1, 0x8
    li r5, 0x2
    bl memcpy
    lwz r3, 0x6b4(r23)
    mr r5, r28
    addi r4, r1, 0x30
    li r6, 0x0
    bl send
    cmpwi r3, 0x0
    bgt lbl_8027F8C4
    lwz r3, 0x7c(r23)
    cmpwi r3, 0x0
    beq lbl_8027F79C
    bl fn_80256C70
lbl_8027F79C:
    lwz r3, 0x6b4(r23)
    li r0, 0x0
    stw r0, 0x7c(r23)
    cmpwi r3, -0x1
    stw r0, 0x80(r23)
    beq lbl_8027F7B8
    bl closesocket
lbl_8027F7B8:
    lwz r0, 0x8(r23)
    li r4, -0x1
    li r3, 0x1
    stw r4, 0x6b4(r23)
    cmpwi r0, 0x0
    stw r3, 0x0(r23)
    beq lbl_8027F84C
    li r24, 0x0
    b lbl_8027F82C
lbl_8027F7DC:
    lwz r3, 0x8(r23)
    mr r4, r24
    bl fn_80253660
    lwz r0, 0x0(r3)
    mr r3, r23
    stw r0, 0x20(r1)
    bl SBRefStrHash
    addi r4, r1, 0x20
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_8027F828
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_8027F828
    mr r3, r23
    bl SBRefStrHash
    addi r4, r1, 0x20
    bl TableRemove
lbl_8027F828:
    addi r24, r24, 0x1
lbl_8027F82C:
    lwz r3, 0x8(r23)
    bl fn_80253658
    cmpw r24, r3
    blt lbl_8027F7DC
    lwz r3, 0x8(r23)
    bl fn_802535C4
    li r0, 0x0
    stw r0, 0x8(r23)
lbl_8027F84C:
    li r0, -0x1
    mr r25, r23
    stw r0, 0x484(r23)
    li r24, 0x0
    b lbl_8027F8A8
lbl_8027F860:
    lwz r0, 0x84(r25)
    mr r3, r23
    stw r0, 0x28(r1)
    bl SBRefStrHash
    addi r4, r1, 0x28
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_8027F8A0
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_8027F8A0
    mr r3, r23
    bl SBRefStrHash
    addi r4, r1, 0x28
    bl TableRemove
lbl_8027F8A0:
    addi r25, r25, 0x4
    addi r24, r24, 0x1
lbl_8027F8A8:
    lwz r0, 0x480(r23)
    cmpw r24, r0
    blt lbl_8027F860
    li r0, 0x0
    li r3, 0x3
    stw r0, 0x480(r23)
    b lbl_8027F904
lbl_8027F8C4:
    lwz r0, 0x7c(r23)
    li r3, 0x3
    li r24, 0x0
    stw r3, 0x0(r23)
    cmpwi r0, 0x0
    stw r24, 0x7cc(r23)
    bne lbl_8027F900
    li r3, 0x1000
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, 0x7c(r23)
    bne lbl_8027F8FC
    li r3, 0x5
    b lbl_8027F904
lbl_8027F8FC:
    stw r24, 0x80(r23)
lbl_8027F900:
    li r3, 0x0
lbl_8027F904:
    addi r11, r1, 0x360
    bl _restgpr_23
    lwz r0, 0x364(r1)
    mtlr r0
    addi r1, r1, 0x360
    blr
}

// ----------------------------------------------------------------------------
// fn_8027F91C
// ----------------------------------------------------------------------------
asm void fn_8027F91C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_8027F94C
    mr r3, r0
    bl fn_80256C70
lbl_8027F94C:
    lwz r3, 0x6b4(r31)
    li r0, 0x0
    stw r0, 0x7c(r31)
    cmpwi r3, -0x1
    stw r0, 0x80(r31)
    beq lbl_8027F968
    bl closesocket
lbl_8027F968:
    lwz r0, 0x8(r31)
    li r4, -0x1
    li r3, 0x1
    stw r4, 0x6b4(r31)
    cmpwi r0, 0x0
    stw r3, 0x0(r31)
    beq lbl_8027F9FC
    li r30, 0x0
    b lbl_8027F9DC
lbl_8027F98C:
    lwz r3, 0x8(r31)
    mr r4, r30
    bl fn_80253660
    lwz r0, 0x0(r3)
    mr r3, r31
    stw r0, 0x10(r1)
    bl SBRefStrHash
    addi r4, r1, 0x10
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_8027F9D8
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_8027F9D8
    mr r3, r31
    bl SBRefStrHash
    addi r4, r1, 0x10
    bl TableRemove
lbl_8027F9D8:
    addi r30, r30, 0x1
lbl_8027F9DC:
    lwz r3, 0x8(r31)
    bl fn_80253658
    cmpw r30, r3
    blt lbl_8027F98C
    lwz r3, 0x8(r31)
    bl fn_802535C4
    li r0, 0x0
    stw r0, 0x8(r31)
lbl_8027F9FC:
    li r0, -0x1
    mr r29, r31
    stw r0, 0x484(r31)
    li r30, 0x0
    b lbl_8027FA58
lbl_8027FA10:
    lwz r0, 0x84(r29)
    mr r3, r31
    stw r0, 0x8(r1)
    bl SBRefStrHash
    addi r4, r1, 0x8
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_8027FA50
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_8027FA50
    mr r3, r31
    bl SBRefStrHash
    addi r4, r1, 0x8
    bl TableRemove
lbl_8027FA50:
    addi r29, r29, 0x4
    addi r30, r30, 0x1
lbl_8027FA58:
    lwz r0, 0x480(r31)
    cmpw r30, r0
    blt lbl_8027FA10
    li r0, 0x0
    stw r0, 0x480(r31)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8027FA88
// ----------------------------------------------------------------------------
asm void fn_8027FA88() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_8027FABC
    mr r3, r0
    bl fn_80256C70
lbl_8027FABC:
    lwz r3, 0x6b4(r31)
    li r0, 0x0
    stw r0, 0x7c(r31)
    cmpwi r3, -0x1
    stw r0, 0x80(r31)
    beq lbl_8027FAD8
    bl closesocket
lbl_8027FAD8:
    lwz r0, 0x8(r31)
    li r4, -0x1
    li r3, 0x1
    stw r4, 0x6b4(r31)
    cmpwi r0, 0x0
    stw r3, 0x0(r31)
    beq lbl_8027FB6C
    li r30, 0x0
    b lbl_8027FB4C
lbl_8027FAFC:
    lwz r3, 0x8(r31)
    mr r4, r30
    bl fn_80253660
    lwz r0, 0x0(r3)
    mr r3, r31
    stw r0, 0x10(r1)
    bl SBRefStrHash
    addi r4, r1, 0x10
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_8027FB48
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_8027FB48
    mr r3, r31
    bl SBRefStrHash
    addi r4, r1, 0x10
    bl TableRemove
lbl_8027FB48:
    addi r30, r30, 0x1
lbl_8027FB4C:
    lwz r3, 0x8(r31)
    bl fn_80253658
    cmpw r30, r3
    blt lbl_8027FAFC
    lwz r3, 0x8(r31)
    bl fn_802535C4
    li r0, 0x0
    stw r0, 0x8(r31)
lbl_8027FB6C:
    li r0, -0x1
    mr r28, r31
    stw r0, 0x484(r31)
    li r30, 0x0
    b lbl_8027FBC8
lbl_8027FB80:
    lwz r0, 0x84(r28)
    mr r3, r31
    stw r0, 0x18(r1)
    bl SBRefStrHash
    addi r4, r1, 0x18
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_8027FBC0
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_8027FBC0
    mr r3, r31
    bl SBRefStrHash
    addi r4, r1, 0x18
    bl TableRemove
lbl_8027FBC0:
    addi r28, r28, 0x4
    addi r30, r30, 0x1
lbl_8027FBC8:
    lwz r0, 0x480(r31)
    cmpw r30, r0
    blt lbl_8027FB80
    li r0, 0x0
    lwz r3, 0x4(r31)
    stw r0, 0x480(r31)
    bl fn_80253658
    mr r30, r3
    li r28, 0x0
    b lbl_8027FC2C
lbl_8027FBF0:
    lwz r3, 0x4(r31)
    mr r4, r28
    bl fn_80253660
    lwz r4, 0x7d8(r31)
    lwz r29, 0x0(r3)
    cmpwi r4, 0x0
    bne lbl_8027FC1C
    mr r3, r29
    li r4, 0x0
    bl SBServerSetNext
    b lbl_8027FC24
lbl_8027FC1C:
    mr r3, r29
    bl SBServerSetNext
lbl_8027FC24:
    stw r29, 0x7d8(r31)
    addi r28, r28, 0x1
lbl_8027FC2C:
    cmpw r28, r30
    blt lbl_8027FBF0
    lwz r3, 0x4(r31)
    bl fn_80253E78
    lwz r28, 0x7d8(r31)
    cmpwi r28, 0x0
    beq lbl_8027FC78
    stw r28, 0x8(r1)
    b lbl_8027FC64
lbl_8027FC50:
    bl SBServerGetNext
    mr r28, r3
    addi r3, r1, 0x8
    bl SBServerFree
    stw r28, 0x8(r1)
lbl_8027FC64:
    cmpwi r28, 0x0
    mr r3, r28
    bne lbl_8027FC50
    li r0, 0x0
    stw r0, 0x7d8(r31)
lbl_8027FC78:
    mr r3, r31
    bl SBRefStrHashCleanup
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_8027FC90
    bl fn_802535C4
lbl_8027FC90:
    li r0, 0x0
    stw r0, 0x4(r31)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8027FCB8
// ----------------------------------------------------------------------------
asm void fn_8027FCB8() {
    nofralloc
    b lbl_8027FD58
lbl_8027FCBC:
    mr r5, r3
    li r6, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_8027FCF0
lbl_8027FCD0:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_8027FCE4
    addi r0, r6, 0x1
    b lbl_8027FCF4
lbl_8027FCE4:
    addi r6, r6, 0x1
    addi r5, r5, 0x1
    bdnz lbl_8027FCD0
lbl_8027FCF0:
    li r0, -0x1
lbl_8027FCF4:
    cmpwi r0, 0x0
    bge lbl_8027FD04
    li r3, 0x0
    blr
lbl_8027FD04:
    subf. r4, r0, r4
    add r3, r3, r0
    mr r5, r3
    li r6, 0x0
    mtctr r4
    ble lbl_8027FD3C
lbl_8027FD1C:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_8027FD30
    addi r0, r6, 0x1
    b lbl_8027FD40
lbl_8027FD30:
    addi r6, r6, 0x1
    addi r5, r5, 0x1
    bdnz lbl_8027FD1C
lbl_8027FD3C:
    li r0, -0x1
lbl_8027FD40:
    cmpwi r0, 0x0
    bge lbl_8027FD50
    li r3, 0x0
    blr
lbl_8027FD50:
    add r3, r3, r0
    subf r4, r0, r4
lbl_8027FD58:
    cmpwi r4, 0x0
    ble lbl_8027FD6C
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_8027FCBC
lbl_8027FD6C:
    cmpwi r4, 0x0
    bne lbl_8027FD7C
    li r3, 0x0
    blr
lbl_8027FD7C:
    lbz r0, 0x0(r3)
    extsb r0, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

// ----------------------------------------------------------------------------
// fn_8027FD90
// ----------------------------------------------------------------------------
asm void fn_8027FD90() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    lwz r3, 0x8(r3)
    mr r28, r4
    mr r29, r5
    bl fn_80253658
    mr r31, r3
    li r30, 0x0
    b lbl_8027FEA4
lbl_8027FDC4:
    lwz r3, 0x8(r27)
    mr r4, r30
    bl fn_80253660
    lwz r0, 0x4(r3)
    cmpwi r0, 0x1
    beq lbl_8027FDF8
    bge lbl_8027FDEC
    cmpwi r0, 0x0
    bge lbl_8027FE10
    b lbl_8027FE88
lbl_8027FDEC:
    cmpwi r0, 0x3
    bge lbl_8027FE88
    b lbl_8027FE04
lbl_8027FDF8:
    addi r28, r28, 0x1
    subi r29, r29, 0x1
    b lbl_8027FE90
lbl_8027FE04:
    addi r28, r28, 0x2
    subi r29, r29, 0x2
    b lbl_8027FE90
lbl_8027FE10:
    cmpwi r29, 0x1
    bge lbl_8027FE20
    li r3, 0x0
    b lbl_8027FEB0
lbl_8027FE20:
    lbz r0, 0x0(r28)
    addi r28, r28, 0x1
    subi r29, r29, 0x1
    cmpwi r0, 0xff
    bne lbl_8027FE90
    mr r3, r28
    li r4, 0x0
    mtctr r29
    cmpwi r29, 0x0
    ble lbl_8027FE68
lbl_8027FE48:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_8027FE5C
    addi r0, r4, 0x1
    b lbl_8027FE6C
lbl_8027FE5C:
    addi r4, r4, 0x1
    addi r3, r3, 0x1
    bdnz lbl_8027FE48
lbl_8027FE68:
    li r0, -0x1
lbl_8027FE6C:
    cmpwi r0, -0x1
    bne lbl_8027FE7C
    li r3, 0x0
    b lbl_8027FEB0
lbl_8027FE7C:
    add r28, r28, r0
    subf r29, r0, r29
    b lbl_8027FE90
lbl_8027FE88:
    li r3, 0x0
    b lbl_8027FEB0
lbl_8027FE90:
    cmpwi r29, 0x0
    bge lbl_8027FEA0
    li r3, 0x0
    b lbl_8027FEB0
lbl_8027FEA0:
    addi r30, r30, 0x1
lbl_8027FEA4:
    cmpw r30, r31
    blt lbl_8027FDC4
    li r3, 0x1
lbl_8027FEB0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8027FEC8
// ----------------------------------------------------------------------------
asm void fn_8027FEC8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_22
    lbz r30, 0x0(r5)
    mr r26, r4
    mr r28, r6
    mr r25, r3
    mr r27, r5
    mr r29, r7
    mr r31, r28
    mr r3, r26
    mr r4, r30
    bl SBServerSetFlags
    rlwinm. r0, r30, 0, 27, 27
    subi r28, r28, 0x5
    addi r27, r27, 0x5
    beq lbl_8027FF1C
    addi r27, r27, 0x2
    subi r28, r28, 0x2
lbl_8027FF1C:
    rlwinm. r0, r30, 0, 30, 30
    beq lbl_8027FF40
    mr r4, r27
    addi r3, r1, 0xc
    li r5, 0x4
    bl memcpy
    addi r27, r27, 0x4
    subi r28, r28, 0x4
    b lbl_8027FF48
lbl_8027FF40:
    li r0, 0x0
    stw r0, 0xc(r1)
lbl_8027FF48:
    rlwinm. r0, r30, 0, 26, 26
    beq lbl_8027FF6C
    mr r4, r27
    addi r3, r1, 0x8
    li r5, 0x2
    bl memcpy
    addi r27, r27, 0x2
    subi r28, r28, 0x2
    b lbl_8027FF74
lbl_8027FF6C:
    lhz r0, 0x6ac(r25)
    sth r0, 0x8(r1)
lbl_8027FF74:
    lwz r4, 0xc(r1)
    mr r3, r26
    lhz r5, 0x8(r1)
    bl SBServerSetPrivateAddr
    rlwinm. r0, r30, 0, 28, 28
    beq lbl_8027FFB0
    mr r4, r27
    addi r3, r1, 0xc
    li r5, 0x4
    bl memcpy
    lwz r4, 0xc(r1)
    mr r3, r26
    addi r27, r27, 0x4
    subi r28, r28, 0x4
    bl SBServerSetICMPIP
lbl_8027FFB0:
    rlwinm. r0, r30, 0, 25, 25
    beq lbl_802800DC
    lwz r3, 0x8(r25)
    bl fn_80253658
    mr r23, r3
    li r22, 0x0
    b lbl_802800BC
lbl_8027FFCC:
    lwz r3, 0x8(r25)
    mr r4, r22
    bl fn_80253660
    lwz r0, 0x4(r3)
    mr r24, r3
    cmpwi r0, 0x1
    beq lbl_80280004
    bge lbl_8027FFF8
    cmpwi r0, 0x0
    bge lbl_80280054
    b lbl_802800B8
lbl_8027FFF8:
    cmpwi r0, 0x3
    bge lbl_802800B8
    b lbl_80280020
lbl_80280004:
    lwz r4, 0x0(r24)
    mr r3, r26
    lbz r5, 0x0(r27)
    bl SBServerAddIntKeyValue
    addi r27, r27, 0x1
    subi r28, r28, 0x1
    b lbl_802800B8
lbl_80280020:
    mr r4, r27
    addi r3, r1, 0xa
    li r5, 0x2
    bl memcpy
    lhz r3, 0xa(r1)
    bl fn_80336B20
    lwz r4, 0x0(r24)
    clrlwi r5, r3, 16
    mr r3, r26
    bl SBServerAddIntKeyValue
    addi r27, r27, 0x2
    subi r28, r28, 0x2
    b lbl_802800B8
lbl_80280054:
    cmpwi r29, 0x0
    beq lbl_8028006C
    lbz r0, 0x0(r27)
    addi r27, r27, 0x1
    subi r28, r28, 0x1
    b lbl_80280070
lbl_8028006C:
    li r0, 0xff
lbl_80280070:
    cmpwi r0, 0xff
    bne lbl_802800A0
    lwz r4, 0x0(r24)
    mr r3, r26
    mr r5, r27
    bl SBServerAddKeyValue
    mr r3, r27
    bl strlen
    addi r0, r3, 0x1
    add r27, r27, r0
    subf r28, r0, r28
    b lbl_802800B8
lbl_802800A0:
    slwi r0, r0, 2
    lwz r4, 0x0(r24)
    add r5, r25, r0
    mr r3, r26
    lwz r5, 0x84(r5)
    bl SBServerAddKeyValue
lbl_802800B8:
    addi r22, r22, 0x1
lbl_802800BC:
    cmpw r22, r23
    blt lbl_8027FFCC
    mr r3, r26
    bl SBServerGetState
    ori r0, r3, 0x1
    mr r3, r26
    clrlwi r4, r0, 24
    bl SBServerSetState
lbl_802800DC:
    rlwinm. r0, r30, 0, 24, 24
    beq lbl_80280154
    b lbl_80280124
lbl_802800E8:
    mr r22, r27
    mr r3, r27
    bl strlen
    addi r0, r3, 0x1
    mr r3, r26
    add r27, r27, r0
    mr r4, r22
    mr r5, r27
    subf r28, r0, r28
    bl SBServerAddKeyValue
    mr r3, r27
    bl strlen
    addi r0, r3, 0x1
    add r27, r27, r0
    subf r28, r0, r28
lbl_80280124:
    lbz r0, 0x0(r27)
    extsb. r0, r0
    beq lbl_80280138
    cmpwi r28, 0x0
    bgt lbl_802800E8
lbl_80280138:
    mr r3, r26
    subi r28, r28, 0x1
    bl SBServerGetState
    ori r0, r3, 0x2
    mr r3, r26
    clrlwi r4, r0, 24
    bl SBServerSetState
lbl_80280154:
    mr r3, r26
    bl SBServerGetState
    rlwinm. r0, r30, 0, 24, 25
    mr r4, r3
    bne lbl_8028017C
    clrlwi. r0, r3, 30
    beq lbl_8028017C
    mr r3, r26
    rlwinm r4, r4, 0, 24, 29
    bl SBServerSetState
lbl_8028017C:
    addi r11, r1, 0x40
    subf r3, r28, r31
    bl _restgpr_22
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80280198
// ----------------------------------------------------------------------------
asm void fn_80280198() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r5, 0x1
    mr r27, r3
    mr r28, r4
    mr r29, r5
    bge lbl_802801C8
    li r3, 0x0
    b lbl_8028033C
lbl_802801C8:
    lbz r31, 0x0(r4)
    li r30, 0x5
    rlwinm. r0, r31, 0, 30, 30
    beq lbl_802801DC
    li r30, 0x9
lbl_802801DC:
    rlwinm. r0, r31, 0, 28, 28
    beq lbl_802801E8
    addi r30, r30, 0x4
lbl_802801E8:
    rlwinm. r0, r31, 0, 27, 27
    beq lbl_802801F4
    addi r30, r30, 0x2
lbl_802801F4:
    rlwinm. r0, r31, 0, 26, 26
    beq lbl_80280200
    addi r30, r30, 0x2
lbl_80280200:
    cmpw r5, r30
    bge lbl_80280210
    li r3, 0x0
    b lbl_8028033C
lbl_80280210:
    rlwinm. r0, r31, 0, 25, 25
    beq lbl_80280238
    mr r3, r27
    add r4, r4, r30
    subf r5, r30, r5
    bl fn_8027FD90
    cmpwi r3, 0x0
    bne lbl_80280238
    li r3, 0x0
    b lbl_8028033C
lbl_80280238:
    rlwinm. r0, r31, 0, 24, 24
    beq lbl_8028025C
    add r3, r28, r30
    subf r4, r30, r29
    bl fn_8027FCB8
    cmpwi r3, 0x0
    bne lbl_8028025C
    li r3, 0x0
    b lbl_8028033C
lbl_8028025C:
    addi r3, r28, 0x1
    la r4, lbl_8049CE88
    li r5, 0x4
    bl memcmp
    cmpwi r3, 0x0
    bne lbl_8028027C
    li r3, -0x1
    b lbl_8028033C
lbl_8028027C:
    cmpwi r29, 0x5
    blt lbl_802802C8
    lbz r31, 0x0(r28)
    addi r3, r1, 0x10
    addi r4, r28, 0x1
    li r5, 0x4
    bl memcpy
    rlwinm. r0, r31, 0, 27, 27
    beq lbl_802802C0
    subi r0, r29, 0x5
    cmpwi r0, 0x2
    blt lbl_802802C8
    addi r3, r1, 0x8
    addi r4, r28, 0x5
    li r5, 0x2
    bl memcpy
    b lbl_802802C8
lbl_802802C0:
    lhz r0, 0x6ac(r27)
    sth r0, 0x8(r1)
lbl_802802C8:
    lwz r4, 0x10(r1)
    mr r3, r27
    lhz r5, 0x8(r1)
    bl SBAllocServer
    mr r30, r3
    bl SBIsNullServer
    cmpwi r3, 0x0
    beq lbl_802802F0
    li r3, -0x2
    b lbl_8028033C
lbl_802802F0:
    mr r3, r27
    mr r4, r30
    mr r5, r28
    mr r6, r29
    li r7, 0x1
    bl fn_8027FEC8
    stw r30, 0xc(r1)
    mr r30, r3
    addi r4, r1, 0xc
    lwz r3, 0x4(r27)
    bl fn_80253690
    lwz r12, 0x488(r27)
    mr r3, r27
    lwz r5, 0xc(r1)
    li r4, 0x0
    lwz r6, 0x494(r27)
    mtctr r12
    bctrl
    mr r3, r30
lbl_8028033C:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80280354
// ----------------------------------------------------------------------------
asm void fn_80280354() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_19
    lwz r0, 0x7cc(r3)
    mr r26, r3
    lwz r28, 0x7c(r3)
    cmpwi r0, 0x2
    lwz r27, 0x80(r3)
    beq lbl_80280958
    bge lbl_80280394
    cmpwi r0, 0x0
    beq lbl_802803A4
    bge lbl_80280858
    b lbl_80280C30
lbl_80280394:
    cmpwi r0, 0x4
    beq lbl_80280BA8
    bge lbl_80280C30
    b lbl_80280AA0
lbl_802803A4:
    cmpwi r27, 0x1
    blt lbl_80280C30
    lbz r0, 0x0(r28)
    xori r4, r0, 0xec
    addi r31, r4, 0x2
    cmpw r27, r31
    blt lbl_80280C30
    add r4, r31, r28
    mr r30, r31
    lbz r0, -0x1(r4)
    xori r29, r0, 0xea
    add r31, r31, r29
    cmpw r27, r31
    blt lbl_80280C30
    addi r3, r3, 0x54
    bl strlen
    cmpwi cr1, r29, 0x0
    addi r11, r26, 0x54
    li r12, 0x0
    ble cr1, lbl_8028080C
    cmpwi r29, 0x8
    subi r5, r29, 0x8
    ble lbl_80280784
    li r6, 0x0
    blt cr1, lbl_8028041C
    lis r4, 0x8000
    subi r0, r4, 0x2
    cmpw r29, r0
    bgt lbl_8028041C
    li r6, 0x1
lbl_8028041C:
    cmpwi r6, 0x0
    beq lbl_80280784
    addi r0, r5, 0x7
    add r25, r28, r30
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_80280784
lbl_8028043C:
    divw r19, r12, r3
    addi r7, r12, 0x1
    addi r5, r12, 0x2
    lbz r8, 0x0(r25)
    slwi r6, r12, 29
    srwi r10, r12, 31
    divw r21, r7, r3
    subf r6, r10, r6
    slwi r4, r7, 29
    rotlwi r6, r6, 3
    srwi r9, r7, 31
    add r6, r6, r10
    add r6, r26, r6
    subf r4, r9, r4
    lbz r10, 0x74(r6)
    rotlwi r6, r4, 3
    add r6, r6, r9
    slwi r9, r5, 29
    mullw r19, r19, r3
    xor r8, r10, r8
    srwi r20, r5, 31
    addi r0, r12, 0x3
    extsb r8, r8
    add r6, r26, r6
    subf r4, r19, r12
    lbzx r10, r11, r4
    divw r4, r5, r3
    extsb r10, r10
    mullw r22, r12, r10
    subf r10, r20, r9
    slwi r9, r0, 29
    rotlwi r19, r10, 3
    srwi r10, r0, 31
    add r19, r19, r20
    slwi r23, r22, 29
    subf r9, r10, r9
    mullw r21, r21, r3
    srwi r22, r22, 31
    add r20, r26, r19
    subf r19, r22, r23
    rotlwi r9, r9, 3
    rotlwi r19, r19, 3
    add r19, r19, r22
    subf r21, r21, r7
    add r23, r26, r19
    lbz r22, 0x74(r23)
    divw r19, r0, r3
    xor r8, r22, r8
    stb r8, 0x74(r23)
    add r8, r9, r10
    lbzx r9, r11, r21
    extsb r10, r9
    mullw r10, r7, r10
    lbz r9, 0x74(r6)
    lbz r7, 0x1(r25)
    add r6, r26, r8
    xor r7, r9, r7
    extsb r8, r7
    slwi r7, r10, 29
    srwi r9, r10, 31
    subf r7, r9, r7
    rotlwi r7, r7, 3
    add r9, r7, r9
    mullw r4, r4, r3
    add r10, r26, r9
    lbz r9, 0x74(r10)
    xor r8, r9, r8
    stb r8, 0x74(r10)
    subf r7, r4, r5
    mullw r4, r19, r3
    lbzx r7, r11, r7
    lbz r8, 0x74(r20)
    extsb r9, r7
    lbz r7, 0x2(r25)
    mullw r9, r5, r9
    xor r5, r8, r7
    subf r4, r4, r0
    extsb r5, r5
    slwi r7, r9, 29
    srwi r8, r9, 31
    subf r7, r8, r7
    rotlwi r7, r7, 3
    add r7, r7, r8
    add r8, r26, r7
    lbz r7, 0x74(r8)
    xor r5, r7, r5
    stb r5, 0x74(r8)
    lbzx r4, r11, r4
    lbz r5, 0x74(r6)
    extsb r6, r4
    lbz r4, 0x3(r25)
    mullw r6, r0, r6
    xor r0, r5, r4
    extsb r0, r0
    slwi r4, r6, 29
    srwi r5, r6, 31
    subf r4, r5, r4
    rotlwi r4, r4, 3
    add r4, r4, r5
    add r5, r26, r4
    lbz r4, 0x74(r5)
    xor r0, r4, r0
    stb r0, 0x74(r5)
    addi r10, r12, 0x4
    addi r8, r12, 0x5
    divw r19, r10, r3
    addi r5, r12, 0x6
    addi r0, r12, 0x7
    lbz r9, 0x4(r25)
    slwi r4, r10, 29
    srwi r21, r10, 31
    mullw r19, r19, r3
    subf r6, r21, r4
    slwi r4, r8, 29
    rotlwi r6, r6, 3
    srwi r22, r8, 31
    add r6, r6, r21
    subf r19, r19, r10
    add r6, r26, r6
    lbzx r19, r11, r19
    divw r7, r8, r3
    lbz r21, 0x74(r6)
    subf r6, r22, r4
    extsb r19, r19
    xor r4, r21, r9
    rotlwi r6, r6, 3
    add r6, r6, r22
    extsb r9, r4
    divw r4, r5, r3
    slwi r23, r5, 29
    srwi r22, r5, 31
    slwi r24, r0, 29
    add r6, r26, r6
    mullw r19, r10, r19
    subf r10, r22, r23
    rotlwi r23, r10, 3
    srwi r10, r0, 31
    mullw r21, r7, r3
    add r22, r23, r22
    slwi r7, r19, 29
    srwi r19, r19, 31
    add r23, r26, r22
    subf r20, r19, r7
    subf r7, r10, r24
    rotlwi r20, r20, 3
    add r19, r20, r19
    subf r22, r21, r8
    add r20, r26, r19
    rotlwi r7, r7, 3
    lbz r21, 0x74(r20)
    add r7, r7, r10
    divw r24, r0, r3
    xor r9, r21, r9
    stb r9, 0x74(r20)
    add r7, r26, r7
    lbzx r9, r11, r22
    extsb r10, r9
    lbz r9, 0x74(r6)
    mullw r10, r8, r10
    lbz r6, 0x5(r25)
    xor r6, r9, r6
    extsb r8, r6
    slwi r6, r10, 29
    srwi r9, r10, 31
    subf r6, r9, r6
    rotlwi r6, r6, 3
    add r9, r6, r9
    mullw r4, r4, r3
    add r10, r26, r9
    lbz r9, 0x74(r10)
    xor r8, r9, r8
    stb r8, 0x74(r10)
    subf r6, r4, r5
    mullw r4, r24, r3
    lbzx r6, r11, r6
    lbz r8, 0x74(r23)
    extsb r9, r6
    lbz r6, 0x6(r25)
    mullw r9, r5, r9
    xor r5, r8, r6
    subf r4, r4, r0
    extsb r5, r5
    slwi r6, r9, 29
    srwi r8, r9, 31
    subf r6, r8, r6
    rotlwi r6, r6, 3
    add r6, r6, r8
    add r8, r26, r6
    lbz r6, 0x74(r8)
    xor r5, r6, r5
    stb r5, 0x74(r8)
    lbzx r4, r11, r4
    lbz r5, 0x74(r7)
    extsb r6, r4
    lbz r4, 0x7(r25)
    mullw r6, r0, r6
    xor r0, r5, r4
    extsb r0, r0
    slwi r4, r6, 29
    srwi r5, r6, 31
    subf r4, r5, r4
    rotlwi r4, r4, 3
    add r4, r4, r5
    add r5, r26, r4
    lbz r4, 0x74(r5)
    xor r0, r4, r0
    stb r0, 0x74(r5)
    addi r25, r25, 0x8
    addi r12, r12, 0x8
    bdnz lbl_8028043C
lbl_80280784:
    add r4, r28, r30
    subf r0, r12, r29
    add r4, r12, r4
    mtctr r0
    cmpw r12, r29
    bge lbl_8028080C
lbl_8028079C:
    divw r7, r12, r3
    lbz r0, 0x0(r4)
    slwi r5, r12, 29
    srwi r6, r12, 31
    addi r4, r4, 0x1
    subf r5, r6, r5
    mullw r7, r7, r3
    rotlwi r5, r5, 3
    add r5, r5, r6
    add r5, r26, r5
    subf r6, r7, r12
    lbz r5, 0x74(r5)
    lbzx r6, r11, r6
    xor r0, r5, r0
    extsb r5, r6
    mullw r6, r12, r5
    extsb r0, r0
    addi r12, r12, 0x1
    slwi r5, r6, 29
    srwi r6, r6, 31
    subf r5, r6, r5
    rotlwi r5, r5, 3
    add r5, r5, r6
    add r6, r26, r5
    lbz r5, 0x74(r6)
    xor r0, r5, r0
    stb r0, 0x74(r6)
    bdnz lbl_8028079C
lbl_8028080C:
    addi r3, r26, 0x6c0
    addi r4, r26, 0x74
    li r5, 0x8
    bl GOACryptInit
    li r0, 0x1
    addi r3, r26, 0x7d0
    stw r0, 0x7cc(r26)
    addi r4, r28, 0x1
    li r5, 0x2
    bl memcpy
    lhz r3, 0x7d0(r26)
    bl fn_80336B20
    sth r3, 0x7d0(r26)
    add r28, r28, r31
    subf r27, r31, r27
    addi r3, r26, 0x6c0
    mr r4, r28
    mr r5, r27
    bl GOADecrypt
lbl_80280858:
    cmpwi r27, 0x6
    blt lbl_80280C30
    mr r4, r28
    addi r3, r26, 0x6a4
    li r5, 0x4
    bl memcpy
    lwz r12, 0x488(r26)
    mr r3, r26
    lwz r5, lbl_8049DCA8
    li r4, 0x6
    lwz r6, 0x494(r26)
    mtctr r12
    bctrl
    addi r3, r26, 0x6ac
    addi r4, r28, 0x4
    li r5, 0x2
    bl memcpy
    lhz r0, 0x6ac(r26)
    cmplwi r0, 0xffff
    bne lbl_80280914
    subic. r0, r27, 0x6
    li r4, 0x0
    mtctr r0
    ble lbl_802808D8
lbl_802808B8:
    add r3, r28, r4
    lbz r0, 0x6(r3)
    extsb. r0, r0
    bne lbl_802808D0
    addi r0, r4, 0x1
    b lbl_802808DC
lbl_802808D0:
    addi r4, r4, 0x1
    bdnz lbl_802808B8
lbl_802808D8:
    li r0, -0x1
lbl_802808DC:
    cmpwi r0, -0x1
    beq lbl_80280C30
    addi r0, r28, 0x6
    lwz r12, 0x488(r26)
    stw r0, 0x6b0(r26)
    mr r3, r26
    lwz r6, 0x494(r26)
    li r4, 0x5
    lwz r5, lbl_8049DCA8
    mtctr r12
    bctrl
    lwz r0, 0x7c(r26)
    cmpwi r0, 0x0
    beq lbl_80280C30
lbl_80280914:
    lwz r0, 0x7c8(r26)
    addi r28, r28, 0x6
    subi r27, r27, 0x6
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_80280934
    lhz r0, 0x6ac(r26)
    cmplwi r0, 0xffff
    bne lbl_80280948
lbl_80280934:
    li r3, 0x5
    li r0, 0x2
    stw r3, 0x7cc(r26)
    stw r0, 0x0(r26)
    b lbl_80280C30
lbl_80280948:
    li r3, 0x2
    li r0, -0x1
    stw r3, 0x7cc(r26)
    stw r0, 0x484(r26)
lbl_80280958:
    lwz r0, 0x484(r26)
    cmpwi r0, -0x1
    bne lbl_8028099C
    cmpwi r27, 0x1
    blt lbl_80280C30
    lbz r4, 0x0(r28)
    li r3, 0x8
    li r5, 0x0
    stw r4, 0x484(r26)
    bl fn_80253528
    cmpwi r3, 0x0
    stw r3, 0x8(r26)
    bne lbl_80280994
    li r3, 0x5
    b lbl_80280C60
lbl_80280994:
    addi r28, r28, 0x1
    subi r27, r27, 0x1
lbl_8028099C:
    li r25, 0x1
    b lbl_80280A68
lbl_802809A4:
    cmpwi r27, 0x2
    blt lbl_80280A7C
    subic. r0, r27, 0x1
    li r4, 0x0
    mtctr r0
    ble lbl_802809DC
lbl_802809BC:
    add r3, r28, r4
    lbz r0, 0x1(r3)
    extsb. r0, r0
    bne lbl_802809D4
    addi r19, r4, 0x1
    b lbl_802809E0
lbl_802809D4:
    addi r4, r4, 0x1
    bdnz lbl_802809BC
lbl_802809DC:
    li r19, -0x1
lbl_802809E0:
    cmpwi r19, -0x1
    beq lbl_80280A7C
    lbz r4, 0x0(r28)
    addi r0, r28, 0x1
    mr r3, r26
    stw r4, 0x1c(r1)
    stw r0, 0x10(r1)
    bl SBRefStrHash
    addi r4, r1, 0x10
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_80280A24
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    lwz r0, 0x0(r3)
    b lbl_80280A48
lbl_80280A24:
    addi r3, r28, 0x1
    bl fn_8025651C
    stw r3, 0x10(r1)
    mr r3, r26
    stw r25, 0x14(r1)
    bl SBRefStrHash
    addi r4, r1, 0x10
    bl TableEnter
    lwz r0, 0x10(r1)
lbl_80280A48:
    stw r0, 0x18(r1)
    addi r4, r1, 0x18
    lwz r3, 0x8(r26)
    bl fn_80253690
    add r3, r19, r28
    addi r0, r19, 0x1
    addi r28, r3, 0x1
    subf r27, r0, r27
lbl_80280A68:
    lwz r3, 0x8(r26)
    bl fn_80253658
    lwz r0, 0x484(r26)
    cmpw r0, r3
    bgt lbl_802809A4
lbl_80280A7C:
    lwz r3, 0x8(r26)
    bl fn_80253658
    lwz r0, 0x484(r26)
    cmpw r0, r3
    bgt lbl_80280C30
    li r3, 0x3
    li r0, -0x1
    stw r3, 0x7cc(r26)
    stw r0, 0x484(r26)
lbl_80280AA0:
    lwz r0, 0x484(r26)
    cmpwi r0, -0x1
    bne lbl_80280ACC
    cmpwi r27, 0x1
    blt lbl_80280C30
    lbz r3, 0x0(r28)
    li r0, 0x0
    addi r28, r28, 0x1
    subi r27, r27, 0x1
    stw r3, 0x484(r26)
    stw r0, 0x480(r26)
lbl_80280ACC:
    li r25, 0x1
    b lbl_80280B88
lbl_80280AD4:
    mr r3, r28
    li r4, 0x0
    mtctr r27
    cmpwi r27, 0x0
    ble lbl_80280B08
lbl_80280AE8:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_80280AFC
    addi r19, r4, 0x1
    b lbl_80280B0C
lbl_80280AFC:
    addi r4, r4, 0x1
    addi r3, r3, 0x1
    bdnz lbl_80280AE8
lbl_80280B08:
    li r19, -0x1
lbl_80280B0C:
    cmpwi r19, -0x1
    beq lbl_80280B98
    stw r28, 0x8(r1)
    mr r3, r26
    bl SBRefStrHash
    addi r4, r1, 0x8
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_80280B44
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    lwz r5, 0x0(r3)
    b lbl_80280B68
lbl_80280B44:
    mr r3, r28
    bl fn_8025651C
    stw r3, 0x8(r1)
    mr r3, r26
    stw r25, 0xc(r1)
    bl SBRefStrHash
    addi r4, r1, 0x8
    bl TableEnter
    lwz r5, 0x8(r1)
lbl_80280B68:
    lwz r3, 0x480(r26)
    add r28, r28, r19
    subf r27, r19, r27
    slwi r0, r3, 2
    addi r4, r3, 0x1
    add r3, r26, r0
    stw r5, 0x84(r3)
    stw r4, 0x480(r26)
lbl_80280B88:
    lwz r5, 0x480(r26)
    lwz r6, 0x484(r26)
    cmpw r6, r5
    bgt lbl_80280AD4
lbl_80280B98:
    cmpw r6, r5
    bgt lbl_80280C30
    li r0, 0x4
    stw r0, 0x7cc(r26)
lbl_80280BA8:
    cmpwi r27, 0x5
    blt lbl_80280C30
lbl_80280BB0:
    mr r3, r26
    mr r4, r28
    mr r5, r27
    bl fn_80280198
    cmpwi r3, -0x2
    bne lbl_80280BD0
    li r3, 0x5
    b lbl_80280C60
lbl_80280BD0:
    cmpwi r3, -0x1
    bne lbl_80280C10
    li r3, 0x5
    li r0, 0x2
    stw r3, 0x7cc(r26)
    mr r3, r26
    lwz r12, 0x488(r26)
    li r4, 0x3
    stw r0, 0x0(r26)
    lwz r6, 0x494(r26)
    lwz r5, lbl_8049DCA8
    mtctr r12
    subi r27, r27, 0x5
    addi r28, r28, 0x5
    bctrl
    b lbl_80280C30
lbl_80280C10:
    lwz r0, 0x7c(r26)
    add r28, r28, r3
    subf r27, r3, r27
    cmpwi r0, 0x0
    bne lbl_80280C28
    li r3, 0x0
lbl_80280C28:
    cmpwi r3, 0x0
    bne lbl_80280BB0
lbl_80280C30:
    lwz r3, 0x7c(r26)
    cmpwi r3, 0x0
    bne lbl_80280C44
    li r3, 0x0
    b lbl_80280C60
lbl_80280C44:
    cmpwi r27, 0x0
    beq lbl_80280C58
    mr r4, r28
    mr r5, r27
    bl memmove
lbl_80280C58:
    stw r27, 0x80(r26)
    li r3, 0x0
lbl_80280C60:
    addi r11, r1, 0x60
    bl _restgpr_19
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// fn_80280C78
// ----------------------------------------------------------------------------
asm void fn_80280C78() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lwz r0, 0x8(r3)
    mr r27, r3
    lbz r30, 0x0(r4)
    addi r28, r4, 0x1
    cmpwi r0, 0x0
    subi r29, r5, 0x1
    beq lbl_80280D24
    beq lbl_80280D24
    li r26, 0x0
    b lbl_80280D04
lbl_80280CB4:
    lwz r3, 0x8(r27)
    mr r4, r26
    bl fn_80253660
    lwz r0, 0x0(r3)
    mr r3, r27
    stw r0, 0x10(r1)
    bl SBRefStrHash
    addi r4, r1, 0x10
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_80280D00
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_80280D00
    mr r3, r27
    bl SBRefStrHash
    addi r4, r1, 0x10
    bl TableRemove
lbl_80280D00:
    addi r26, r26, 0x1
lbl_80280D04:
    lwz r3, 0x8(r27)
    bl fn_80253658
    cmpw r26, r3
    blt lbl_80280CB4
    lwz r3, 0x8(r27)
    bl fn_802535C4
    li r0, 0x0
    stw r0, 0x8(r27)
lbl_80280D24:
    mr r4, r30
    li r3, 0x8
    li r5, 0x0
    bl fn_80253528
    cmpwi r3, 0x0
    stw r3, 0x8(r27)
    bne lbl_80280D48
    li r3, 0x5
    b lbl_80280E38
lbl_80280D48:
    li r31, 0x0
    li r26, 0x1
    b lbl_80280E2C
lbl_80280D54:
    cmpwi r29, 0x2
    bge lbl_80280D64
    li r3, 0x4
    b lbl_80280E38
lbl_80280D64:
    subic. r0, r29, 0x1
    li r4, 0x0
    mtctr r0
    ble lbl_80280D94
lbl_80280D74:
    add r3, r28, r4
    lbz r0, 0x1(r3)
    extsb. r0, r0
    bne lbl_80280D8C
    addi r25, r4, 0x1
    b lbl_80280D98
lbl_80280D8C:
    addi r4, r4, 0x1
    bdnz lbl_80280D74
lbl_80280D94:
    li r25, -0x1
lbl_80280D98:
    cmpwi r25, -0x1
    bne lbl_80280DA8
    li r3, 0x4
    b lbl_80280E38
lbl_80280DA8:
    lbz r4, 0x0(r28)
    addi r0, r28, 0x1
    mr r3, r27
    stw r4, 0x1c(r1)
    stw r0, 0x8(r1)
    bl SBRefStrHash
    addi r4, r1, 0x8
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_80280DE4
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    lwz r0, 0x0(r3)
    b lbl_80280E08
lbl_80280DE4:
    addi r3, r28, 0x1
    bl fn_8025651C
    stw r3, 0x8(r1)
    mr r3, r27
    stw r26, 0xc(r1)
    bl SBRefStrHash
    addi r4, r1, 0x8
    bl TableEnter
    lwz r0, 0x8(r1)
lbl_80280E08:
    stw r0, 0x18(r1)
    addi r4, r1, 0x18
    lwz r3, 0x8(r27)
    bl fn_80253690
    add r3, r25, r28
    addi r0, r25, 0x1
    addi r28, r3, 0x1
    addi r31, r31, 0x1
    subf r29, r0, r29
lbl_80280E2C:
    cmpw r31, r30
    blt lbl_80280D54
    li r3, 0x0
lbl_80280E38:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80280E50
// ----------------------------------------------------------------------------
asm void fn_80280E50() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_23
    cmpwi r5, 0x2
    mr r27, r3
    bge lbl_80280E78
    li r3, 0x4
    b lbl_80280FFC
lbl_80280E78:
    lbz r24, 0x0(r4)
    addi r28, r4, 0x2
    lbz r25, 0x1(r4)
    subi r29, r5, 0x2
    li r30, 0x0
    li r26, 0x0
    b lbl_80280FBC
lbl_80280E94:
    mr r31, r28
    mr r3, r28
    li r4, 0x0
    mtctr r29
    cmpwi r29, 0x0
    ble lbl_80280ECC
lbl_80280EAC:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_80280EC0
    addi r0, r4, 0x1
    b lbl_80280ED0
lbl_80280EC0:
    addi r4, r4, 0x1
    addi r3, r3, 0x1
    bdnz lbl_80280EAC
lbl_80280ECC:
    li r0, -0x1
lbl_80280ED0:
    cmpwi r0, -0x1
    bne lbl_80280EE0
    li r3, 0x4
    b lbl_80280FFC
lbl_80280EE0:
    subf r29, r0, r29
    add r28, r28, r0
    cmpwi r29, 0xb
    bge lbl_80280EF8
    li r3, 0x4
    b lbl_80280FFC
lbl_80280EF8:
    mr r4, r28
    addi r3, r1, 0xc
    li r5, 0x4
    bl memcpy
    addi r3, r1, 0x8
    addi r4, r28, 0x4
    li r5, 0x2
    bl memcpy
    addi r3, r1, 0x10
    addi r4, r28, 0x6
    li r5, 0x4
    bl memcpy
    lwz r3, 0x14(r1)
    bl fn_80336B1C
    subic. r29, r29, 0xa
    addi r28, r28, 0xa
    stw r3, 0x14(r1)
    mr r4, r28
    li r3, 0x0
    stw r26, 0x10(r1)
    mtctr r29
    ble lbl_80280F70
lbl_80280F50:
    lbz r0, 0x0(r4)
    extsb. r0, r0
    bne lbl_80280F64
    addi r23, r3, 0x1
    b lbl_80280F74
lbl_80280F64:
    addi r3, r3, 0x1
    addi r4, r4, 0x1
    bdnz lbl_80280F50
lbl_80280F70:
    li r23, -0x1
lbl_80280F74:
    cmpwi r23, -0x1
    bne lbl_80280F84
    li r3, 0x4
    b lbl_80280FFC
lbl_80280F84:
    lwz r12, 0x490(r27)
    mr r3, r27
    mr r4, r31
    mr r9, r28
    lwz r5, 0xc(r1)
    lhz r6, 0x8(r1)
    lwz r7, 0x10(r1)
    lwz r8, 0x14(r1)
    lwz r10, 0x494(r27)
    mtctr r12
    bctrl
    add r28, r28, r23
    subf r29, r23, r29
    addi r30, r30, 0x1
lbl_80280FBC:
    cmpw r30, r25
    blt lbl_80280E94
    cmpwi r24, 0x0
    beq lbl_80280FF8
    lwz r12, 0x490(r27)
    mr r3, r27
    lwz r10, 0x494(r27)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r8, 0x0
    li r7, 0x0
    li r9, 0x0
    mtctr r12
    bctrl
lbl_80280FF8:
    li r3, 0x0
lbl_80280FFC:
    addi r11, r1, 0x40
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80281014
// ----------------------------------------------------------------------------
asm void fn_80281014() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_24
    cmpwi r5, 0xb
    mr r29, r3
    mr r30, r4
    mr r31, r5
    bge lbl_80281044
    li r3, 0x4
    b lbl_802811CC
lbl_80281044:
    addi r3, r1, 0xc
    li r5, 0x4
    bl memcpy
    addi r3, r1, 0x8
    addi r4, r30, 0x4
    li r5, 0x2
    bl memcpy
    lhz r26, 0x8(r1)
    lwz r27, 0xc(r1)
    lwz r3, 0x4(r29)
    bl fn_80253658
    mr r28, r3
    li r25, 0x0
    b lbl_802810B8
lbl_8028107C:
    lwz r3, 0x4(r29)
    mr r4, r25
    bl fn_80253660
    lwz r24, 0x0(r3)
    mr r3, r24
    bl SBServerGetPublicInetAddress
    cmplw r27, r3
    bne lbl_802810B4
    mr r3, r24
    bl SBServerGetPublicQueryPortNBO
    clrlwi r0, r3, 16
    cmplw r26, r0
    bne lbl_802810B4
    b lbl_802810C4
lbl_802810B4:
    addi r25, r25, 0x1
lbl_802810B8:
    cmpw r25, r28
    blt lbl_8028107C
    li r25, -0x1
lbl_802810C4:
    cmpwi r25, -0x1
    bne lbl_802810D4
    li r3, 0x0
    b lbl_802811CC
lbl_802810D4:
    lwz r3, 0x4(r29)
    mr r4, r25
    bl fn_80253660
    lwz r24, 0x0(r3)
    addi r3, r1, 0x10
    addi r4, r30, 0x6
    li r5, 0x4
    bl memcpy
    lwz r3, 0x14(r1)
    bl fn_80336B1C
    li r0, 0x0
    stw r3, 0x14(r1)
    addi r6, r1, 0x18
    li r7, 0x0
    stw r0, 0x10(r1)
    subi r31, r31, 0xb
    lbz r4, 0xa(r30)
    addi r30, r30, 0xb
    b lbl_80281184
lbl_80281120:
    cmpwi r31, 0x1
    blt lbl_80281194
    mr r3, r30
    li r5, 0x0
    mtctr r31
    cmpwi r31, 0x0
    ble lbl_8028115C
lbl_8028113C:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_80281150
    addi r0, r5, 0x1
    b lbl_80281160
lbl_80281150:
    addi r5, r5, 0x1
    addi r3, r3, 0x1
    bdnz lbl_8028113C
lbl_8028115C:
    li r0, -0x1
lbl_80281160:
    cmpwi r0, -0x1
    bne lbl_80281170
    li r3, 0x4
    b lbl_802811CC
lbl_80281170:
    stw r30, 0x0(r6)
    add r30, r30, r0
    subf r31, r0, r31
    addi r6, r6, 0x4
    addi r7, r7, 0x1
lbl_80281184:
    cmpw r7, r4
    bge lbl_80281194
    cmpwi r7, 0x10
    blt lbl_80281120
lbl_80281194:
    lwz r12, 0x48c(r29)
    cmpwi r12, 0x0
    bne lbl_802811A8
    li r3, 0x0
    b lbl_802811CC
lbl_802811A8:
    mr r3, r29
    mr r4, r24
    addi r8, r1, 0x18
    lwz r5, 0x10(r1)
    lwz r6, 0x14(r1)
    lwz r9, 0x494(r29)
    mtctr r12
    bctrl
    li r3, 0x0
lbl_802811CC:
    addi r11, r1, 0x80
    bl _restgpr_24
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_802811E4
// ----------------------------------------------------------------------------
asm void fn_802811E4() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    cmpwi r5, 0x5
    mr r24, r3
    mr r25, r4
    mr r26, r5
    bge lbl_80281214
    li r3, 0x4
    b lbl_8028137C
lbl_80281214:
    blt lbl_8028125C
    lbz r31, 0x0(r4)
    addi r3, r1, 0x10
    li r5, 0x4
    addi r4, r4, 0x1
    bl memcpy
    rlwinm. r0, r31, 0, 27, 27
    beq lbl_80281254
    subi r0, r26, 0x5
    cmpwi r0, 0x2
    blt lbl_8028125C
    addi r3, r1, 0x8
    addi r4, r25, 0x5
    li r5, 0x2
    bl memcpy
    b lbl_8028125C
lbl_80281254:
    lhz r0, 0x6ac(r24)
    sth r0, 0x8(r1)
lbl_8028125C:
    lhz r29, 0x8(r1)
    lwz r30, 0x10(r1)
    lwz r3, 0x4(r24)
    bl fn_80253658
    mr r31, r3
    li r28, 0x0
    b lbl_802812B4
lbl_80281278:
    lwz r3, 0x4(r24)
    mr r4, r28
    bl fn_80253660
    lwz r27, 0x0(r3)
    mr r3, r27
    bl SBServerGetPublicInetAddress
    cmplw r30, r3
    bne lbl_802812B0
    mr r3, r27
    bl SBServerGetPublicQueryPortNBO
    clrlwi r0, r3, 16
    cmplw r29, r0
    bne lbl_802812B0
    b lbl_802812C0
lbl_802812B0:
    addi r28, r28, 0x1
lbl_802812B4:
    cmpw r28, r31
    blt lbl_80281278
    li r28, -0x1
lbl_802812C0:
    cmpwi r28, -0x1
    bne lbl_802812F0
    lwz r4, 0x10(r1)
    mr r3, r24
    lhz r5, 0x8(r1)
    bl SBAllocServer
    mr r27, r3
    bl SBIsNullServer
    cmpwi r3, 0x0
    beq lbl_80281300
    li r3, 0x5
    b lbl_8028137C
lbl_802812F0:
    lwz r3, 0x4(r24)
    mr r4, r28
    bl fn_80253660
    lwz r27, 0x0(r3)
lbl_80281300:
    mr r3, r24
    mr r4, r27
    mr r5, r25
    mr r6, r26
    li r7, 0x0
    bl fn_8027FEC8
    cmpwi r3, 0x0
    bge lbl_80281328
    li r3, 0x4
    b lbl_8028137C
lbl_80281328:
    cmpwi r28, -0x1
    bne lbl_8028135C
    stw r27, 0xc(r1)
    addi r4, r1, 0xc
    lwz r3, 0x4(r24)
    bl fn_80253690
    lwz r12, 0x488(r24)
    mr r3, r24
    lwz r5, 0xc(r1)
    li r4, 0x0
    lwz r6, 0x494(r24)
    mtctr r12
    bctrl
lbl_8028135C:
    lwz r12, 0x488(r24)
    mr r3, r24
    mr r5, r27
    lwz r6, 0x494(r24)
    li r4, 0x1
    mtctr r12
    bctrl
    li r3, 0x0
lbl_8028137C:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_80281394
// ----------------------------------------------------------------------------
asm void fn_80281394() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r30, r3
    li r31, 0x0
    b lbl_802815F4
lbl_802813B4:
    lwz r4, 0x7c(r30)
    addi r3, r1, 0xa
    li r5, 0x2
    bl memcpy
    lhz r3, 0xa(r1)
    bl fn_80336B20
    clrlwi r5, r3, 16
    sth r3, 0xa(r1)
    cmplwi r5, 0x1000
    ble lbl_802813E4
    li r31, 0x4
    b lbl_80281600
lbl_802813E4:
    lwz r0, 0x80(r30)
    cmpw r0, r5
    bge lbl_802813F8
    li r3, 0x0
    b lbl_802817CC
lbl_802813F8:
    lwz r4, 0x7c(r30)
    lbz r0, 0x2(r4)
    extsb r0, r0
    cmpwi r0, 0x4
    beq lbl_80281484
    bge lbl_80281428
    cmpwi r0, 0x2
    beq lbl_80281450
    bge lbl_80281468
    cmpwi r0, 0x1
    bge lbl_80281438
    b lbl_802815C4
lbl_80281428:
    cmpwi r0, 0x6
    beq lbl_802815B0
    bge lbl_802815C4
    b lbl_80281598
lbl_80281438:
    mr r3, r30
    addi r4, r4, 0x3
    subi r5, r5, 0x3
    bl fn_80280C78
    mr r31, r3
    b lbl_802815C4
lbl_80281450:
    mr r3, r30
    addi r4, r4, 0x3
    subi r5, r5, 0x3
    bl fn_802811E4
    mr r31, r3
    b lbl_802815C4
lbl_80281468:
    lwz r3, 0x6b4(r30)
    li r6, 0x0
    bl send
    cmpwi r3, 0x0
    bgt lbl_802815C4
    li r3, 0x3
    b lbl_802817CC
lbl_80281484:
    subi r0, r5, 0x3
    addi r31, r4, 0x3
    cmpwi r0, 0x6
    bge lbl_8028149C
    li r31, 0x4
    b lbl_802815C4
lbl_8028149C:
    mr r4, r31
    addi r3, r1, 0xc
    li r5, 0x4
    bl memcpy
    addi r3, r1, 0x8
    addi r4, r31, 0x4
    li r5, 0x2
    bl memcpy
    lhz r28, 0x8(r1)
    lwz r27, 0xc(r1)
    lwz r3, 0x4(r30)
    bl fn_80253658
    mr r31, r3
    li r26, 0x0
    b lbl_80281514
lbl_802814D8:
    lwz r3, 0x4(r30)
    mr r4, r26
    bl fn_80253660
    lwz r29, 0x0(r3)
    mr r3, r29
    bl SBServerGetPublicInetAddress
    cmplw r27, r3
    bne lbl_80281510
    mr r3, r29
    bl SBServerGetPublicQueryPortNBO
    clrlwi r0, r3, 16
    cmplw r28, r0
    bne lbl_80281510
    b lbl_80281520
lbl_80281510:
    addi r26, r26, 0x1
lbl_80281514:
    cmpw r26, r31
    blt lbl_802814D8
    li r26, -0x1
lbl_80281520:
    cmpwi r26, -0x1
    bne lbl_80281530
    li r31, 0x0
    b lbl_802815C4
lbl_80281530:
    lwz r3, 0x4(r30)
    mr r4, r26
    bl fn_80253660
    lwz r31, 0x0(r3)
    mr r3, r30
    lwz r12, 0x488(r30)
    li r4, 0x2
    mr r5, r31
    lwz r6, 0x494(r30)
    mtctr r12
    bctrl
    lwz r3, 0x4(r30)
    mr r4, r26
    bl detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo
    lwz r4, 0x7d8(r30)
    cmpwi r4, 0x0
    bne lbl_80281584
    mr r3, r31
    li r4, 0x0
    bl SBServerSetNext
    b lbl_8028158C
lbl_80281584:
    mr r3, r31
    bl SBServerSetNext
lbl_8028158C:
    stw r31, 0x7d8(r30)
    li r31, 0x0
    b lbl_802815C4
lbl_80281598:
    mr r3, r30
    addi r4, r4, 0x3
    subi r5, r5, 0x3
    bl fn_80281014
    mr r31, r3
    b lbl_802815C4
lbl_802815B0:
    mr r3, r30
    addi r4, r4, 0x3
    subi r5, r5, 0x3
    bl fn_80280E50
    mr r31, r3
lbl_802815C4:
    lhz r4, 0xa(r1)
    lwz r0, 0x80(r30)
    subf. r5, r4, r0
    stw r5, 0x80(r30)
    beq lbl_802815EC
    lwz r3, 0x7c(r30)
    cmpwi r3, 0x0
    beq lbl_802815EC
    add r4, r3, r4
    bl memmove
lbl_802815EC:
    cmpwi r31, 0x0
    bne lbl_80281600
lbl_802815F4:
    lwz r0, 0x80(r30)
    cmpwi r0, 0x3
    bge lbl_802813B4
lbl_80281600:
    cmpwi r31, 0x0
    beq lbl_802817C8
    lwz r26, 0x80(r30)
    cmpwi r26, 0x0
    ble lbl_8028167C
    lwz r27, lbl_8049CE84
    mr r3, r27
    bl strlen
    cmplw r26, r3
    ble lbl_8028167C
    lwz r28, lbl_8049CE84
    lwz r26, 0x7c(r30)
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r3, r26
    mr r4, r28
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_8028167C
    mr r3, r27
    bl strlen
    add r0, r26, r3
    lwz r12, 0x488(r30)
    stw r0, 0x6b0(r30)
    mr r3, r30
    lwz r6, 0x494(r30)
    li r4, 0x5
    lwz r5, lbl_8049DCA8
    mtctr r12
    bctrl
lbl_8028167C:
    lwz r12, 0x488(r30)
    mr r3, r30
    lwz r5, lbl_8049DCA8
    li r4, 0x4
    lwz r6, 0x494(r30)
    mtctr r12
    bctrl
    lwz r3, 0x7c(r30)
    cmpwi r3, 0x0
    beq lbl_802816A8
    bl fn_80256C70
lbl_802816A8:
    lwz r3, 0x6b4(r30)
    li r0, 0x0
    stw r0, 0x7c(r30)
    cmpwi r3, -0x1
    stw r0, 0x80(r30)
    beq lbl_802816C4
    bl closesocket
lbl_802816C4:
    lwz r0, 0x8(r30)
    li r4, -0x1
    li r3, 0x1
    stw r4, 0x6b4(r30)
    cmpwi r0, 0x0
    stw r3, 0x0(r30)
    beq lbl_80281758
    li r26, 0x0
    b lbl_80281738
lbl_802816E8:
    lwz r3, 0x8(r30)
    mr r4, r26
    bl fn_80253660
    lwz r0, 0x0(r3)
    mr r3, r30
    stw r0, 0x18(r1)
    bl SBRefStrHash
    addi r4, r1, 0x18
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_80281734
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_80281734
    mr r3, r30
    bl SBRefStrHash
    addi r4, r1, 0x18
    bl TableRemove
lbl_80281734:
    addi r26, r26, 0x1
lbl_80281738:
    lwz r3, 0x8(r30)
    bl fn_80253658
    cmpw r26, r3
    blt lbl_802816E8
    lwz r3, 0x8(r30)
    bl fn_802535C4
    li r0, 0x0
    stw r0, 0x8(r30)
lbl_80281758:
    li r0, -0x1
    mr r27, r30
    stw r0, 0x484(r30)
    li r26, 0x0
    b lbl_802817B4
lbl_8028176C:
    lwz r0, 0x84(r27)
    mr r3, r30
    stw r0, 0x10(r1)
    bl SBRefStrHash
    addi r4, r1, 0x10
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_802817AC
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_802817AC
    mr r3, r30
    bl SBRefStrHash
    addi r4, r1, 0x10
    bl TableRemove
lbl_802817AC:
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_802817B4:
    lwz r0, 0x480(r30)
    cmpw r26, r0
    blt lbl_8028176C
    li r0, 0x0
    stw r0, 0x480(r30)
lbl_802817C8:
    mr r3, r31
lbl_802817CC:
    addi r11, r1, 0x40
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_802817E4
// ----------------------------------------------------------------------------
asm void fn_802817E4() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r3, 0x6b4(r3)
    bl fn_80255E4C
    cmpwi r3, 0x0
    bne lbl_8028181C
    li r3, 0x0
    b lbl_80281A9C
lbl_8028181C:
    lwz r29, 0x80(r31)
    li r6, 0x0
    lwz r0, 0x7c(r31)
    lwz r3, 0x6b4(r31)
    subfic r5, r29, 0x1000
    add r4, r0, r29
    bl recv
    addi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_80281A0C
    lwz r29, 0x80(r31)
    cmpwi r29, 0x0
    ble lbl_802818B8
    lwz r30, lbl_8049CE84
    mr r3, r30
    bl strlen
    cmplw r29, r3
    ble lbl_802818B8
    lwz r28, lbl_8049CE84
    lwz r29, 0x7c(r31)
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r3, r29
    mr r4, r28
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_802818B8
    mr r3, r30
    bl strlen
    add r0, r29, r3
    lwz r12, 0x488(r31)
    stw r0, 0x6b0(r31)
    mr r3, r31
    lwz r6, 0x494(r31)
    li r4, 0x5
    lwz r5, lbl_8049DCA8
    mtctr r12
    bctrl
lbl_802818B8:
    lwz r12, 0x488(r31)
    mr r3, r31
    lwz r5, lbl_8049DCA8
    li r4, 0x4
    lwz r6, 0x494(r31)
    mtctr r12
    bctrl
    lwz r3, 0x7c(r31)
    cmpwi r3, 0x0
    beq lbl_802818E4
    bl fn_80256C70
lbl_802818E4:
    lwz r3, 0x6b4(r31)
    li r0, 0x0
    stw r0, 0x7c(r31)
    cmpwi r3, -0x1
    stw r0, 0x80(r31)
    beq lbl_80281900
    bl closesocket
lbl_80281900:
    lwz r0, 0x8(r31)
    li r4, -0x1
    li r3, 0x1
    stw r4, 0x6b4(r31)
    cmpwi r0, 0x0
    stw r3, 0x0(r31)
    beq lbl_80281994
    li r30, 0x0
    b lbl_80281974
lbl_80281924:
    lwz r3, 0x8(r31)
    mr r4, r30
    bl fn_80253660
    lwz r0, 0x0(r3)
    mr r3, r31
    stw r0, 0x10(r1)
    bl SBRefStrHash
    addi r4, r1, 0x10
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_80281970
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_80281970
    mr r3, r31
    bl SBRefStrHash
    addi r4, r1, 0x10
    bl TableRemove
lbl_80281970:
    addi r30, r30, 0x1
lbl_80281974:
    lwz r3, 0x8(r31)
    bl fn_80253658
    cmpw r30, r3
    blt lbl_80281924
    lwz r3, 0x8(r31)
    bl fn_802535C4
    li r0, 0x0
    stw r0, 0x8(r31)
lbl_80281994:
    li r0, -0x1
    mr r29, r31
    stw r0, 0x484(r31)
    li r30, 0x0
    b lbl_802819F0
lbl_802819A8:
    lwz r0, 0x84(r29)
    mr r3, r31
    stw r0, 0x8(r1)
    bl SBRefStrHash
    addi r4, r1, 0x8
    bl TableLookup
    cmpwi r3, 0x0
    beq lbl_802819E8
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_802819E8
    mr r3, r31
    bl SBRefStrHash
    addi r4, r1, 0x8
    bl TableRemove
lbl_802819E8:
    addi r29, r29, 0x4
    addi r30, r30, 0x1
lbl_802819F0:
    lwz r0, 0x480(r31)
    cmpw r30, r0
    blt lbl_802819A8
    li r0, 0x0
    li r3, 0x3
    stw r0, 0x480(r31)
    b lbl_80281A9C
lbl_80281A0C:
    lwz r4, 0x80(r31)
    li r28, 0x0
    lwz r0, 0x0(r31)
    add r3, r4, r3
    cmpwi r0, 0x2
    stw r3, 0x80(r31)
    beq lbl_80281A34
    lwz r0, 0x7cc(r31)
    cmpwi r0, 0x0
    ble lbl_80281A4C
lbl_80281A34:
    lwz r4, 0x7c(r31)
    addi r3, r31, 0x6c0
    lwz r0, 0x80(r31)
    add r4, r4, r29
    subf r5, r29, r0
    bl GOADecrypt
lbl_80281A4C:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x3
    bne lbl_80281A64
    mr r3, r31
    bl fn_80280354
    mr r28, r3
lbl_80281A64:
    cmpwi r28, 0x0
    beq lbl_80281A74
    mr r3, r28
    b lbl_80281A9C
lbl_80281A74:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x2
    bne lbl_80281A98
    lwz r0, 0x80(r31)
    cmpwi r0, 0x0
    ble lbl_80281A98
    mr r3, r31
    bl fn_80281394
    b lbl_80281A9C
lbl_80281A98:
    li r3, 0x0
lbl_80281A9C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80281ABC
// ----------------------------------------------------------------------------
asm void fn_80281ABC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r7
    stw r30, 0x28(r1)
    mr r30, r6
    stw r29, 0x24(r1)
    mr r29, r3
    stw r4, 0x8(r1)
    sth r5, 0xc(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_80281B08
    li r4, 0x0
    li r5, 0x0
    li r6, 0x2
    li r7, 0x0
    bl fn_8027F41C
lbl_80281B08:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x1
    bne lbl_80281B1C
    li r3, 0x3
    b lbl_80281BA4
lbl_80281B1C:
    addi r0, r31, 0x9
    clrlwi r3, r0, 16
    bl fn_80336B2C
    sth r3, 0xe(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0xe
    li r5, 0x2
    bl memcpy
    li r0, 0x2
    addi r3, r1, 0x13
    stb r0, 0x12(r1)
    addi r4, r1, 0x8
    li r5, 0x4
    bl memcpy
    addi r3, r1, 0x17
    addi r4, r1, 0xc
    li r5, 0x2
    bl memcpy
    mr r3, r29
    addi r4, r1, 0x10
    li r5, 0x9
    bl fn_8027F080
    cmpwi r3, 0x0
    beq lbl_80281B80
    b lbl_80281BA4
lbl_80281B80:
    lwz r3, 0x6b4(r29)
    mr r4, r30
    mr r5, r31
    li r6, 0x0
    bl send
    cmpwi r3, 0x0
    li r3, 0x0
    bge lbl_80281BA4
    li r3, 0x3
lbl_80281BA4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80281BC0
// ----------------------------------------------------------------------------
asm void fn_80281BC0() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r11, 0xfd
    li r10, 0xfc
    stw r0, 0x34(r1)
    li r9, 0x1e
    li r8, 0x66
    li r7, 0x6a
    stw r31, 0x2c(r1)
    li r0, 0xb2
    mr r31, r5
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    mr r3, r6
    stw r6, 0x8(r1)
    stb r11, 0xc(r1)
    stb r10, 0xd(r1)
    stb r9, 0xe(r1)
    stb r8, 0xf(r1)
    stb r7, 0x10(r1)
    stb r0, 0x11(r1)
    bl fn_80336B28
    stw r3, 0x8(r1)
    addi r3, r1, 0x12
    addi r4, r1, 0x8
    li r5, 0x4
    bl memcpy
    mr r3, r29
    mr r4, r30
    mr r5, r31
    addi r6, r1, 0xc
    li r7, 0xa
    bl fn_80281ABC
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

