#include "types.h"

// Translation unit: src/gamespy/gstats/gstats.cpp
// Total functions: 17

// Small Data symbols (@sda21)
extern float lbl_8049CD80;
extern float lbl_8049CD84;
extern float lbl_8049CD98;
extern float lbl_8049CDAC;
extern float lbl_8049CDB0;
extern float lbl_8049CDB8;
extern float lbl_8049CDC0;
extern float lbl_8049CDC4;
extern float lbl_8049CDC8;
extern float lbl_8049CDCC;
extern float lbl_8049CDD4;
extern float lbl_8049CDDC;
extern float lbl_8049CDE4;
extern float lbl_8049CDF0;
extern float lbl_8049CDF8;
extern float lbl_8049CE00;
extern float lbl_8049CE08;
extern float lbl_8049DC20;
extern float lbl_8049DC24;
extern float lbl_8049DC30;
extern float lbl_8049DC34;
extern float lbl_8049DC38;
extern float lbl_8049DC3C;
extern float lbl_8049DC48;
extern float lbl_8049DC4C;

// Global data symbols (@ha/@l)
extern u8 lbl_80341488[];
extern u8 lbl_8036B230[];
extern u8 lbl_8036B240[];
extern u8 lbl_8036B250[];
extern u8 lbl_8036B338[];
extern u8 lbl_8036B478[];
extern u8 lbl_8040B630[];

// Forward declarations
extern void BucketNew();
extern void CallReqCallback();
extern void GOAGetLastError();
extern void PersistThink();
extern void PlayerOpFloat();
extern void PlayerOpInt();
extern void PlayerOpString();
extern void ProcessGetData();
extern void ProcessStatement();
extern void ServerOpFloat();
extern void ServerOpInt();
extern void ServerOpString();
extern void TeamOpFloat();
extern void TeamOpInt();
extern void TeamOpString();
extern void _restgpr_14();
extern void _restgpr_20();
extern void _restgpr_25();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_14();
extern void _savegpr_20();
extern void _savegpr_25();
extern void _savegpr_26();
extern void _savegpr_27();
extern void atoi();
extern void closesocket();
extern void detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo();
extern void fn_80253528();
extern void fn_802535C4();
extern void fn_80253658();
extern void fn_80253660();
extern void fn_80253690();
extern void fn_802557FC();
extern void fn_80255E4C();
extern void fn_80256C4C();
extern void fn_80256C5C();
extern void fn_80256C70();
extern void fn_80277AA8();
extern void fn_80277C68();
extern void fn_80277D64();
extern void fn_80277E34();
extern void fn_80336B2C();
extern void inet_addr();
extern void memcpy();
extern void memmove();
extern void memset();
extern void recv();
extern void send();
extern void shutdown();
extern void sprintf();
extern void strcat();
extern void strcpy();
extern void strlen();
extern void strncmp();
extern void strstr();

// ----------------------------------------------------------------------------
// PersistThink
// ----------------------------------------------------------------------------
asm void PersistThink() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_20
    lwz r0, lbl_8049CD80
    cmpwi r0, -0x1
    bne lbl_8027761C
    li r3, 0x0
    b lbl_80277A90
lbl_8027761C:
    lwz r0, lbl_8049DC3C
    cmpwi r0, 0x5
    beq lbl_80277630
    li r3, 0x0
    b lbl_80277A90
lbl_80277630:
    lis r31, lbl_8036B230@ha
    li r30, 0x0
    addi r31, r31, lbl_8036B230@l
    b lbl_80277A6C
lbl_80277640:
    lwz r4, lbl_8049DC34
    lwz r0, lbl_8049DC38
    subf r0, r0, r4
    cmpwi r0, 0x80
    bge lbl_80277688
    cmpwi r4, 0x100
    li r3, 0x100
    blt lbl_80277664
    slwi r3, r4, 1
lbl_80277664:
    stw r3, lbl_8049DC34
    addi r4, r3, 0x1
    lwz r3, lbl_8049DC30
    bl fn_80256C5C
    cmpwi r3, 0x0
    stw r3, lbl_8049DC30
    bne lbl_80277688
    li r3, 0x0
    b lbl_80277A90
lbl_80277688:
    lwz r5, lbl_8049DC38
    li r6, 0x0
    lwz r4, lbl_8049DC30
    lwz r0, lbl_8049DC34
    add r4, r4, r5
    lwz r3, lbl_8049CD80
    subf r5, r5, r0
    bl recv
    cmpwi r3, 0x0
    bgt lbl_802778B4
    lwz r3, lbl_8049CD80
    cmpwi r3, -0x1
    beq lbl_802776CC
    li r4, 0x2
    bl shutdown
    lwz r3, lbl_8049CD80
    bl closesocket
lbl_802776CC:
    lwz r3, lbl_8049DC48
    li r0, -0x1
    stw r0, lbl_8049CD80
    cmpwi r3, 0x0
    beq lbl_8027788C
    bl fn_80253658
    lis r28, lbl_8036B240@ha
    lis r30, lbl_8036B478@ha
    addi r28, r28, lbl_8036B240@l
    subi r31, r3, 0x1
    addi r30, r30, lbl_8036B478@l
    li r27, 0x3
    b lbl_80277874
lbl_80277700:
    lbz r20, 0x0(r30)
    mr r3, r28
    lbz r21, 0x1(r30)
    addi r5, r1, 0x8
    lbz r22, 0x2(r30)
    li r4, 0x0
    lbz r23, 0x3(r30)
    lbz r24, 0x4(r30)
    lbz r25, 0x5(r30)
    lbz r26, 0x6(r30)
    lbz r29, 0x7(r30)
    lbz r12, 0x8(r30)
    lbz r11, 0x9(r30)
    lbz r10, 0xa(r30)
    lbz r9, 0xb(r30)
    lbz r8, 0xc(r30)
    lbz r7, 0xd(r30)
    lbz r6, 0xe(r30)
    lbz r0, 0xf(r30)
    stb r20, 0x8(r1)
    stb r21, 0x9(r1)
    stb r22, 0xa(r1)
    stb r23, 0xb(r1)
    stb r24, 0xc(r1)
    stb r25, 0xd(r1)
    stb r26, 0xe(r1)
    stb r29, 0xf(r1)
    stb r12, 0x10(r1)
    stb r11, 0x11(r1)
    stb r10, 0x12(r1)
    stb r9, 0x13(r1)
    stb r8, 0x14(r1)
    stb r7, 0x15(r1)
    stb r6, 0x16(r1)
    stb r0, 0x17(r1)
    stw r28, lbl_8049CD84
    mtctr r27
lbl_80277794:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x0(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x0(r5)
    bne lbl_802777B8
    mr r3, r28
lbl_802777B8:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x1(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x1(r5)
    bne lbl_802777DC
    mr r3, r28
lbl_802777DC:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x2(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x2(r5)
    bne lbl_80277800
    mr r3, r28
lbl_80277800:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x3(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x3(r5)
    bne lbl_80277824
    mr r3, r28
lbl_80277824:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x4(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x4(r5)
    bne lbl_80277848
    mr r3, r28
lbl_80277848:
    addi r5, r5, 0x5
    addi r4, r4, 0x4
    bdnz lbl_80277794
    mr r3, r31
    addi r7, r1, 0x8
    li r4, 0x0
    li r6, 0x0
    li r5, 0x0
    li r8, 0x0
    bl CallReqCallback
    subi r31, r31, 0x1
lbl_80277874:
    cmpwi r31, 0x0
    bge lbl_80277700
    lwz r3, lbl_8049DC48
    bl fn_802535C4
    li r0, 0x0
    stw r0, lbl_8049DC48
lbl_8027788C:
    lwz r3, lbl_8049DC30
    cmpwi r3, 0x0
    beq lbl_802778AC
    bl fn_80256C70
    li r0, 0x0
    stw r0, lbl_8049DC30
    stw r0, lbl_8049DC34
    stw r0, lbl_8049DC38
lbl_802778AC:
    li r3, 0x0
    b lbl_80277A90
lbl_802778B4:
    lwz r0, lbl_8049DC38
    lwz r4, lbl_8049DC30
    add r0, r0, r3
    stw r0, lbl_8049DC38
    stbx r30, r4, r0
    lwz r27, lbl_8049DC38
    lwz r3, lbl_8049DC30
    mr r29, r27
    subi r0, r27, 0x6
    mr r28, r3
    b lbl_8027793C
lbl_802778E0:
    lbz r4, 0x0(r28)
    cmpwi r4, 0x5c
    bne lbl_80277938
    lbz r4, 0x1(r28)
    cmpwi r4, 0x66
    bne lbl_80277938
    lbz r4, 0x2(r28)
    cmpwi r4, 0x69
    bne lbl_80277938
    lbz r4, 0x3(r28)
    cmpwi r4, 0x6e
    bne lbl_80277938
    lbz r4, 0x4(r28)
    cmpwi r4, 0x61
    bne lbl_80277938
    lbz r4, 0x5(r28)
    cmpwi r4, 0x6c
    bne lbl_80277938
    lbz r4, 0x6(r28)
    cmpwi r4, 0x5c
    bne lbl_80277938
    b lbl_80277A28
lbl_80277938:
    addi r28, r28, 0x1
lbl_8027793C:
    subf r4, r3, r28
    cmpw r4, r0
    blt lbl_802778E0
    li r28, 0x0
    b lbl_80277A28
lbl_80277950:
    subf. r20, r3, r28
    mr r7, r31
    mr r4, r3
    stw r31, lbl_8049CD84
    li r6, 0x0
    mtctr r20
    ble lbl_80277998
lbl_8027796C:
    lbz r5, 0x0(r4)
    lbz r0, 0x0(r7)
    xor r0, r5, r0
    stb r0, 0x0(r4)
    lbzu r0, 0x1(r7)
    extsb. r0, r0
    bne lbl_8027798C
    lwz r7, lbl_8049CD84
lbl_8027798C:
    addi r6, r6, 0x1
    addi r4, r4, 0x1
    bdnz lbl_8027796C
lbl_80277998:
    mr r4, r20
    bl ProcessStatement
    addi r0, r20, 0x7
    addi r3, r28, 0x7
    subf. r29, r0, r29
    ble lbl_80277A28
    mr r28, r3
    subi r0, r29, 0x6
    b lbl_80277A18
lbl_802779BC:
    lbz r4, 0x0(r28)
    cmpwi r4, 0x5c
    bne lbl_80277A14
    lbz r4, 0x1(r28)
    cmpwi r4, 0x66
    bne lbl_80277A14
    lbz r4, 0x2(r28)
    cmpwi r4, 0x69
    bne lbl_80277A14
    lbz r4, 0x3(r28)
    cmpwi r4, 0x6e
    bne lbl_80277A14
    lbz r4, 0x4(r28)
    cmpwi r4, 0x61
    bne lbl_80277A14
    lbz r4, 0x5(r28)
    cmpwi r4, 0x6c
    bne lbl_80277A14
    lbz r4, 0x6(r28)
    cmpwi r4, 0x5c
    bne lbl_80277A14
    b lbl_80277A28
lbl_80277A14:
    addi r28, r28, 0x1
lbl_80277A18:
    subf r4, r3, r28
    cmpw r4, r0
    blt lbl_802779BC
    li r28, 0x0
lbl_80277A28:
    cmpwi r29, 0x0
    ble lbl_80277A38
    cmpwi r28, 0x0
    bne lbl_80277950
lbl_80277A38:
    lwz r0, lbl_8049DC38
    subf r20, r29, r27
    cmpw r20, r0
    bne lbl_80277A50
    stw r30, lbl_8049DC38
    b lbl_80277A6C
lbl_80277A50:
    lwz r3, lbl_8049DC30
    subf r5, r20, r0
    add r4, r3, r20
    bl memmove
    lwz r0, lbl_8049DC38
    subf r0, r20, r0
    stw r0, lbl_8049DC38
lbl_80277A6C:
    lwz r3, lbl_8049CD80
    bl fn_80255E4C
    cmpwi r3, 0x0
    bne lbl_80277640
    lwz r4, lbl_8049CD80
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r3, r0, 31
lbl_80277A90:
    addi r11, r1, 0x50
    bl _restgpr_20
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_80277AA8
// ----------------------------------------------------------------------------
asm void fn_80277AA8() {
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    li r5, 0x80
    li r6, 0x0
    stw r0, 0x194(r1)
    addi r4, r1, 0x8
    stw r31, 0x18c(r1)
    lwz r3, lbl_8049CD80
    bl recv
    cmpwi r3, -0x1
    bne lbl_80277B10
    lwz r3, lbl_8049CD80
    bl GOAGetLastError
    mr r31, r3
    lwz r3, lbl_8049CD80
    bl closesocket
    cmpwi r31, -0x6
    beq lbl_80277B08
    cmpwi r31, -0x4c
    beq lbl_80277B08
    cmpwi r31, -0x1a
    beq lbl_80277B08
    li r3, 0x3
    b lbl_80277C54
lbl_80277B08:
    li r3, 0x5
    b lbl_80277C54
lbl_80277B10:
    lis r5, lbl_8036B230@ha
    addi r6, r1, 0x8
    addi r5, r5, lbl_8036B230@l
    li r0, 0x0
    mr r7, r5
    stbx r0, r6, r3
    stw r5, lbl_8049CD84
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_80277B64
lbl_80277B38:
    lbz r0, 0x1(r5)
    lbz r3, 0x0(r5)
    addi r5, r5, 0x1
    lbz r4, 0x0(r6)
    extsb. r0, r0
    xor r0, r4, r3
    stb r0, 0x0(r6)
    bne lbl_80277B5C
    mr r5, r7
lbl_80277B5C:
    addi r6, r6, 0x1
    bdnz lbl_80277B38
lbl_80277B64:
    lis r3, lbl_8036B338@ha
    li r4, 0x73
    addi r3, r3, lbl_8036B338@l
    li r0, 0x80
    stb r4, lbl_8049CDB0
    addi r5, r1, 0x87
    subi r4, r3, 0x1
    mtctr r0
lbl_80277B84:
    lbz r3, 0x1(r4)
    lbzu r0, 0x2(r4)
    stb r3, 0x1(r5)
    stbu r0, 0x2(r5)
    bdnz lbl_80277B84
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x88
    la r4, lbl_8049CDB0
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x88
    la r4, lbl_8049CD98
    bl strcat
    addi r3, r1, 0x8
    addi r4, r1, 0x88
    bl strstr
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_80277BDC
    li r3, 0x0
    b lbl_80277C30
lbl_80277BDC:
    addi r3, r1, 0x88
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r31, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_80277C14
lbl_80277C04:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_80277C14:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_80277C28
    cmpwi r0, 0x5c
    bne lbl_80277C04
lbl_80277C28:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_80277C30:
    cmpwi r3, 0x0
    bne lbl_80277C48
    lwz r3, lbl_8049CD80
    bl closesocket
    li r3, 0x5
    b lbl_80277C54
lbl_80277C48:
    bl atoi
    stw r3, lbl_8049DC24
    li r3, 0x0
lbl_80277C54:
    lwz r0, 0x194(r1)
    lwz r31, 0x18c(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

// ----------------------------------------------------------------------------
// fn_80277C68
// ----------------------------------------------------------------------------
asm void fn_80277C68() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_8036B230@ha
    mr r5, r3
    stw r0, 0x24(r1)
    addi r7, r7, lbl_8036B230@l
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    stw r7, lbl_8049CD84
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_80277CD0
lbl_80277CA8:
    lbz r6, 0x0(r5)
    lbz r0, 0x0(r7)
    xor r0, r6, r0
    stb r0, 0x0(r5)
    lbzu r0, 0x1(r7)
    extsb. r0, r0
    bne lbl_80277CC8
    lwz r7, lbl_8049CD84
lbl_80277CC8:
    addi r5, r5, 0x1
    bdnz lbl_80277CA8
lbl_80277CD0:
    lis r5, lbl_8036B250@ha
    add r3, r3, r4
    addi r4, r5, lbl_8036B250@l
    bl strcpy
    addi r31, r31, 0x7
    b lbl_80277D3C
lbl_80277CE8:
    lwz r3, lbl_8049CD80
    add r4, r29, r30
    subf r5, r30, r31
    li r6, 0x0
    bl send
    cmpwi r3, -0x1
    bne lbl_80277D28
    lwz r3, lbl_8049CD80
    bl GOAGetLastError
    cmpwi r3, -0x6
    beq lbl_80277D3C
    cmpwi r3, -0x4c
    beq lbl_80277D3C
    cmpwi r3, -0x1a
    beq lbl_80277D3C
    b lbl_80277D48
lbl_80277D28:
    cmpwi r3, 0x0
    bne lbl_80277D38
    li r3, -0x1
    b lbl_80277D48
lbl_80277D38:
    add r30, r30, r3
lbl_80277D3C:
    cmpw r30, r31
    blt lbl_80277CE8
    mr r3, r30
lbl_80277D48:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80277D64
// ----------------------------------------------------------------------------
asm void fn_80277D64() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r29, r5
    mr r27, r3
    mr r28, r4
    mr r30, r6
    mr r3, r29
    li r31, 0x0
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x2
    clrlwi r3, r28, 16
    stb r0, 0x1(r29)
    bl fn_80336B2C
    cmpwi r27, 0x0
    sth r3, 0x2(r29)
    bne lbl_80277DC4
    li r0, 0x0
    stw r0, 0x4(r29)
    b lbl_80277DD0
lbl_80277DC4:
    mr r3, r27
    bl inet_addr
    stw r3, 0x4(r29)
lbl_80277DD0:
    lwz r3, 0x4(r29)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_80277E0C
    mr r3, r27
    bl fn_802557FC
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_80277DFC
    li r3, 0x0
    b lbl_80277E1C
lbl_80277DFC:
    lwz r3, 0xc(r3)
    lwz r3, 0x0(r3)
    lwz r0, 0x0(r3)
    stw r0, 0x4(r29)
lbl_80277E0C:
    cmpwi r30, 0x0
    beq lbl_80277E18
    stw r31, 0x0(r30)
lbl_80277E18:
    li r3, 0x1
lbl_80277E1C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80277E34
// ----------------------------------------------------------------------------
asm void fn_80277E34() {
    nofralloc
    stwu r1, -0x390(r1)
    mflr r0
    stw r0, 0x394(r1)
    addi r11, r1, 0x390
    bl _savegpr_14
    lis r11, lbl_80341488@ha
    lbzu r0, lbl_80341488@l(r11)
    mr r23, r3
    mr r24, r4
    stw r0, 0x288(r1)
    mr r26, r6
    lbz r0, 0x1(r11)
    mr r15, r7
    lbz r3, 0x14(r11)
    mr r14, r8
    stw r0, 0x28c(r1)
    mr r25, r5
    lbz r0, 0x2(r11)
    mr r27, r9
    lbz r30, 0x5(r11)
    stw r0, 0x290(r1)
    lbz r0, 0x3(r11)
    lbz r29, 0x6(r11)
    stw r0, 0x294(r1)
    lbz r0, 0x4(r11)
    lbz r28, 0x7(r11)
    stw r0, 0x298(r1)
    lbz r0, 0x16(r11)
    lbz r22, 0x8(r11)
    stw r0, 0x338(r1)
    lbz r0, 0x17(r11)
    stb r3, 0x58(r1)
    lwz r3, 0x338(r1)
    stw r0, 0x29c(r1)
    lbz r0, 0x18(r11)
    stb r3, 0x5a(r1)
    lwz r3, 0x29c(r1)
    stw r0, 0x2a0(r1)
    lbz r0, 0x19(r11)
    stb r3, 0x5b(r1)
    lwz r3, 0x2a0(r1)
    stw r0, 0x2a4(r1)
    lbz r0, 0x1a(r11)
    stb r3, 0x5c(r1)
    lwz r3, 0x2a4(r1)
    stw r0, 0x2a8(r1)
    lbz r0, 0x1b(r11)
    stb r3, 0x5d(r1)
    lwz r3, 0x2a8(r1)
    stw r0, 0x2ac(r1)
    lbz r0, 0x1c(r11)
    stb r3, 0x5e(r1)
    lwz r3, 0x2ac(r1)
    stw r0, 0x2b0(r1)
    lbz r0, 0x1d(r11)
    stb r3, 0x5f(r1)
    lwz r3, 0x2b0(r1)
    stw r0, 0x2b4(r1)
    lbz r0, 0x1e(r11)
    stb r3, 0x60(r1)
    lwz r3, 0x2b4(r1)
    stw r0, 0x2b8(r1)
    lbz r0, 0x1f(r11)
    stb r3, 0x61(r1)
    lwz r3, 0x2b8(r1)
    stw r0, 0x2bc(r1)
    lbz r0, 0x20(r11)
    stb r3, 0x62(r1)
    lwz r3, 0x2bc(r1)
    stw r0, 0x2c0(r1)
    lbz r0, 0x21(r11)
    stb r3, 0x63(r1)
    lwz r3, 0x2c0(r1)
    stw r0, 0x2c4(r1)
    lbz r0, 0x22(r11)
    stb r3, 0x64(r1)
    lwz r3, 0x2c4(r1)
    stw r0, 0x2c8(r1)
    lbz r0, 0x23(r11)
    stb r3, 0x65(r1)
    lwz r3, 0x2c8(r1)
    stw r0, 0x2cc(r1)
    lbz r0, 0x24(r11)
    stb r3, 0x66(r1)
    lwz r3, 0x2cc(r1)
    stw r0, 0x2d0(r1)
    lbz r0, 0x25(r11)
    stb r3, 0x67(r1)
    lwz r3, 0x2d0(r1)
    stw r0, 0x2d4(r1)
    lbz r0, 0x26(r11)
    stb r3, 0x68(r1)
    lwz r3, 0x2d4(r1)
    stw r0, 0x2d8(r1)
    lbz r0, 0x27(r11)
    stb r3, 0x69(r1)
    lwz r3, 0x2d8(r1)
    stw r0, 0x2dc(r1)
    lbz r0, 0x28(r11)
    stb r3, 0x6a(r1)
    lwz r3, 0x2dc(r1)
    stw r0, 0x2e0(r1)
    lbz r0, 0x29(r11)
    stb r3, 0x6b(r1)
    lwz r3, 0x2e0(r1)
    stw r0, 0x2e4(r1)
    lbz r0, 0x2a(r11)
    stb r3, 0x6c(r1)
    lwz r3, 0x2e4(r1)
    stw r0, 0x2e8(r1)
    lbz r0, 0x2b(r11)
    stb r3, 0x6d(r1)
    lwz r3, 0x2e8(r1)
    stw r0, 0x2ec(r1)
    lbz r0, 0x2c(r11)
    stb r3, 0x6e(r1)
    lwz r3, 0x2ec(r1)
    stw r0, 0x2f0(r1)
    lbz r0, 0x2d(r11)
    stb r3, 0x6f(r1)
    lwz r3, 0x2f0(r1)
    stw r0, 0x2f4(r1)
    lbz r0, 0x2e(r11)
    stb r3, 0x70(r1)
    lwz r3, 0x2f4(r1)
    stw r0, 0x2f8(r1)
    lbz r0, 0x2f(r11)
    stb r3, 0x71(r1)
    lwz r3, 0x2f8(r1)
    stw r0, 0x2fc(r1)
    lbz r0, 0x30(r11)
    stb r3, 0x72(r1)
    lwz r3, 0x2fc(r1)
    stw r0, 0x300(r1)
    lbz r0, 0x31(r11)
    stb r3, 0x73(r1)
    lwz r3, 0x300(r1)
    stw r0, 0x304(r1)
    lbz r0, 0x32(r11)
    stb r3, 0x74(r1)
    lwz r3, 0x304(r1)
    stw r0, 0x308(r1)
    lbz r0, 0x33(r11)
    stb r3, 0x75(r1)
    lwz r3, 0x308(r1)
    stw r0, 0x30c(r1)
    lbz r0, 0x34(r11)
    stb r3, 0x76(r1)
    lwz r3, 0x30c(r1)
    stw r0, 0x310(r1)
    lbz r0, 0x35(r11)
    stb r3, 0x77(r1)
    lwz r3, 0x310(r1)
    stw r0, 0x314(r1)
    lbz r0, 0x36(r11)
    stb r3, 0x78(r1)
    lwz r3, 0x314(r1)
    stw r0, 0x318(r1)
    lbz r0, 0x37(r11)
    stb r3, 0x79(r1)
    lwz r3, 0x318(r1)
    stw r0, 0x31c(r1)
    lbz r0, 0x38(r11)
    stb r3, 0x7a(r1)
    lwz r3, 0x31c(r1)
    stw r0, 0x320(r1)
    lbz r0, 0x39(r11)
    stb r3, 0x7b(r1)
    lwz r3, 0x320(r1)
    stw r0, 0x324(r1)
    lbz r0, 0x3a(r11)
    lbz r21, 0x9(r11)
    stw r0, 0x328(r1)
    lbz r0, 0x3b(r11)
    lbz r20, 0xa(r11)
    stw r0, 0x32c(r1)
    lbz r0, 0x3c(r11)
    lbz r19, 0xb(r11)
    stw r0, 0x330(r1)
    lbz r0, 0x3d(r11)
    lbz r18, 0xc(r11)
    lbz r17, 0xd(r11)
    lbz r16, 0xe(r11)
    lbz r12, 0xf(r11)
    lbz r8, 0x10(r11)
    lbz r7, 0x11(r11)
    lbz r6, 0x12(r11)
    lbz r4, 0x13(r11)
    lbz r31, 0x15(r11)
    stw r0, 0x334(r1)
    lbz r0, 0x3e(r11)
    lwz r11, 0x288(r1)
    stb r3, 0x7c(r1)
    lwz r3, 0x324(r1)
    stb r11, 0x44(r1)
    lwz r11, 0x28c(r1)
    stb r3, 0x7d(r1)
    lwz r3, 0x328(r1)
    stb r11, 0x45(r1)
    lwz r11, 0x290(r1)
    stb r3, 0x7e(r1)
    lwz r3, 0x32c(r1)
    stb r11, 0x46(r1)
    lwz r11, 0x294(r1)
    stb r3, 0x7f(r1)
    lwz r3, 0x330(r1)
    stb r11, 0x47(r1)
    lwz r11, 0x298(r1)
    stb r3, 0x80(r1)
    lwz r3, 0x334(r1)
    stw r10, 0x10(r1)
    stb r11, 0x48(r1)
    stb r30, 0x49(r1)
    stb r29, 0x4a(r1)
    stb r28, 0x4b(r1)
    stb r22, 0x4c(r1)
    stb r21, 0x4d(r1)
    stb r20, 0x4e(r1)
    stb r19, 0x4f(r1)
    stb r18, 0x50(r1)
    stb r17, 0x51(r1)
    stb r16, 0x52(r1)
    stb r12, 0x53(r1)
    stb r8, 0x54(r1)
    stb r7, 0x55(r1)
    stb r6, 0x56(r1)
    stb r4, 0x57(r1)
    stb r31, 0x59(r1)
    stb r3, 0x81(r1)
    stb r0, 0x82(r1)
    lis r6, lbl_8036B240@ha
    li r0, 0x1f
    addi r6, r6, lbl_8036B240@l
    addi r8, r1, 0x44
    stw r6, lbl_8049CD84
    mr r11, r6
    li r7, 0x0
    mtctr r0
lbl_802781EC:
    lbz r0, 0x1(r6)
    lbz r3, 0x0(r6)
    addi r6, r6, 0x1
    lbz r4, 0x0(r8)
    extsb. r0, r0
    xor r0, r4, r3
    stb r0, 0x0(r8)
    bne lbl_80278210
    mr r6, r11
lbl_80278210:
    lbz r0, 0x1(r6)
    lbz r3, 0x0(r6)
    addi r6, r6, 0x1
    lbz r4, 0x1(r8)
    extsb. r0, r0
    xor r0, r4, r3
    stb r0, 0x1(r8)
    bne lbl_80278234
    mr r6, r11
lbl_80278234:
    addi r8, r8, 0x2
    addi r7, r7, 0x1
    bdnz lbl_802781EC
    cmpwi r5, 0x0
    beq lbl_80278250
    cmpwi r5, 0x2
    bne lbl_80278288
lbl_80278250:
    cmpwi r9, 0x0
    beq lbl_802785C4
    mr r12, r27
    stw r10, 0x8(r1)
    mr r3, r23
    mr r4, r24
    mr r5, r25
    mr r6, r26
    li r7, 0x0
    li r10, 0x0
    li r9, 0x0
    mtctr r12
    bctrl
    b lbl_802785C4
lbl_80278288:
    lwz r8, 0x398(r1)
    mr r5, r24
    mr r6, r25
    mr r7, r26
    mr r9, r23
    mr r10, r14
    addi r3, r1, 0x88
    addi r4, r1, 0x44
    opword 0x4CC63182
    bl sprintf
    add r16, r3, r14
    mr r17, r3
    cmpwi r16, 0x1e0
    bge lbl_802782DC
    addi r3, r1, 0x88
    mr r4, r15
    mr r5, r14
    add r3, r3, r17
    bl memcpy
    addi r28, r1, 0x88
    b lbl_80278304
lbl_802782DC:
    addi r3, r16, 0x100
    bl fn_80256C4C
    mr r28, r3
    mr r5, r17
    addi r4, r1, 0x88
    bl memcpy
    mr r4, r15
    mr r5, r14
    add r3, r28, r17
    bl memcpy
lbl_80278304:
    lwz r0, lbl_8049CD80
    cmpwi r0, -0x1
    beq lbl_80278320
    mr r3, r28
    mr r4, r16
    bl fn_80277C68
    mr r17, r3
lbl_80278320:
    cmpwi r17, 0x0
    bgt lbl_80278560
    lwz r3, lbl_8049CD80
    cmpwi r3, -0x1
    beq lbl_80278344
    li r4, 0x2
    bl shutdown
    lwz r3, lbl_8049CD80
    bl closesocket
lbl_80278344:
    lwz r3, lbl_8049DC48
    li r0, -0x1
    stw r0, lbl_8049CD80
    cmpwi r3, 0x0
    beq lbl_80278504
    bl fn_80253658
    lis r29, lbl_8036B240@ha
    lis r31, lbl_8036B478@ha
    addi r29, r29, lbl_8036B240@l
    subi r30, r3, 0x1
    addi r31, r31, lbl_8036B478@l
    li r14, 0x3
    b lbl_802784EC
lbl_80278378:
    lbz r15, 0x0(r31)
    mr r3, r29
    lbz r16, 0x1(r31)
    addi r5, r1, 0x18
    lbz r17, 0x2(r31)
    li r4, 0x0
    lbz r18, 0x3(r31)
    lbz r19, 0x4(r31)
    lbz r20, 0x5(r31)
    lbz r21, 0x6(r31)
    lbz r22, 0x7(r31)
    lbz r12, 0x8(r31)
    lbz r11, 0x9(r31)
    lbz r10, 0xa(r31)
    lbz r9, 0xb(r31)
    lbz r8, 0xc(r31)
    lbz r7, 0xd(r31)
    lbz r6, 0xe(r31)
    lbz r0, 0xf(r31)
    stb r15, 0x18(r1)
    stb r16, 0x19(r1)
    stb r17, 0x1a(r1)
    stb r18, 0x1b(r1)
    stb r19, 0x1c(r1)
    stb r20, 0x1d(r1)
    stb r21, 0x1e(r1)
    stb r22, 0x1f(r1)
    stb r12, 0x20(r1)
    stb r11, 0x21(r1)
    stb r10, 0x22(r1)
    stb r9, 0x23(r1)
    stb r8, 0x24(r1)
    stb r7, 0x25(r1)
    stb r6, 0x26(r1)
    stb r0, 0x27(r1)
    stw r29, lbl_8049CD84
    mtctr r14
lbl_8027840C:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x0(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x0(r5)
    bne lbl_80278430
    mr r3, r29
lbl_80278430:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x1(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x1(r5)
    bne lbl_80278454
    mr r3, r29
lbl_80278454:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x2(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x2(r5)
    bne lbl_80278478
    mr r3, r29
lbl_80278478:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x3(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x3(r5)
    bne lbl_8027849C
    mr r3, r29
lbl_8027849C:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x4(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x4(r5)
    bne lbl_802784C0
    mr r3, r29
lbl_802784C0:
    addi r5, r5, 0x5
    addi r4, r4, 0x4
    bdnz lbl_8027840C
    mr r3, r30
    addi r7, r1, 0x18
    li r4, 0x0
    li r6, 0x0
    li r5, 0x0
    li r8, 0x0
    bl CallReqCallback
    subi r30, r30, 0x1
lbl_802784EC:
    cmpwi r30, 0x0
    bge lbl_80278378
    lwz r3, lbl_8049DC48
    bl fn_802535C4
    li r0, 0x0
    stw r0, lbl_8049DC48
lbl_80278504:
    lwz r3, lbl_8049DC30
    cmpwi r3, 0x0
    beq lbl_80278524
    bl fn_80256C70
    li r0, 0x0
    stw r0, lbl_8049DC30
    stw r0, lbl_8049DC34
    stw r0, lbl_8049DC38
lbl_80278524:
    cmpwi r27, 0x0
    beq lbl_802785B0
    lwz r0, 0x10(r1)
    mr r12, r27
    mr r3, r23
    mr r4, r24
    mr r5, r25
    mr r6, r26
    stw r0, 0x8(r1)
    li r7, 0x0
    li r10, 0x0
    li r9, 0x0
    mtctr r12
    bctrl
    b lbl_802785B0
lbl_80278560:
    lwz r0, lbl_8049DC48
    li r3, 0x2
    stw r27, 0x40(r1)
    cmpwi r0, 0x0
    lwz r0, 0x10(r1)
    stw r23, 0x2c(r1)
    stw r0, 0x3c(r1)
    stw r3, 0x28(r1)
    stw r24, 0x30(r1)
    stw r25, 0x34(r1)
    stw r26, 0x38(r1)
    bne lbl_802785A4
    li r3, 0x1c
    li r4, 0x2
    li r5, 0x0
    bl fn_80253528
    stw r3, lbl_8049DC48
lbl_802785A4:
    lwz r3, lbl_8049DC48
    addi r4, r1, 0x28
    bl fn_80253690
lbl_802785B0:
    addi r0, r1, 0x88
    cmplw r28, r0
    beq lbl_802785C4
    mr r3, r28
    bl fn_80256C70
lbl_802785C4:
    addi r11, r1, 0x390
    bl _restgpr_14
    lwz r0, 0x394(r1)
    mtlr r0
    addi r1, r1, 0x390
    blr
}

// ----------------------------------------------------------------------------
// ProcessGetData
// ----------------------------------------------------------------------------
asm void ProcessGetData() {
    nofralloc
    stwu r1, -0x530(r1)
    mflr r0
    stw r0, 0x534(r1)
    addi r11, r1, 0x530
    bl _savegpr_25
    lis r5, lbl_8036B338@ha
    li r0, 0x80
    addi r5, r5, lbl_8036B338@l
    mr r25, r3
    addi r6, r1, 0x407
    la r4, lbl_8049CDB8
    subi r5, r5, 0x1
    mtctr r0
lbl_80278610:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_80278610
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x408
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x408
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r25
    addi r4, r1, 0x408
    bl strstr
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_80278664
    li r3, 0x0
    b lbl_802786B8
lbl_80278664:
    addi r3, r1, 0x408
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r26, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_8027869C
lbl_8027868C:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_8027869C:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_802786B0
    cmpwi r0, 0x5c
    bne lbl_8027868C
lbl_802786B0:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_802786B8:
    cmpwi r3, 0x0
    beq lbl_802786C4
    b lbl_802786C8
lbl_802786C4:
    la r3, lbl_8049CDAC
lbl_802786C8:
    bl atoi
    lis r5, lbl_8036B338@ha
    li r0, 0x80
    addi r5, r5, lbl_8036B338@l
    mr r28, r3
    addi r6, r1, 0x307
    la r4, lbl_8049CDC0
    subi r5, r5, 0x1
    mtctr r0
lbl_802786EC:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_802786EC
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x308
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x308
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r25
    addi r4, r1, 0x308
    bl strstr
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_80278740
    li r3, 0x0
    b lbl_80278794
lbl_80278740:
    addi r3, r1, 0x308
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r26, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_80278778
lbl_80278768:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_80278778:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_8027878C
    cmpwi r0, 0x5c
    bne lbl_80278768
lbl_8027878C:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_80278794:
    cmpwi r3, 0x0
    beq lbl_802787A0
    b lbl_802787A4
lbl_802787A0:
    la r3, lbl_8049CDAC
lbl_802787A4:
    bl atoi
    lis r5, lbl_8036B338@ha
    li r0, 0x80
    addi r5, r5, lbl_8036B338@l
    mr r30, r3
    addi r6, r1, 0x207
    la r4, lbl_8049CDC4
    subi r5, r5, 0x1
    mtctr r0
lbl_802787C8:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_802787C8
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x208
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x208
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r25
    addi r4, r1, 0x208
    bl strstr
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_8027881C
    li r3, 0x0
    b lbl_80278870
lbl_8027881C:
    addi r3, r1, 0x208
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r26, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_80278854
lbl_80278844:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_80278854:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_80278868
    cmpwi r0, 0x5c
    bne lbl_80278844
lbl_80278868:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_80278870:
    cmpwi r3, 0x0
    beq lbl_8027887C
    b lbl_80278880
lbl_8027887C:
    la r3, lbl_8049CDAC
lbl_80278880:
    bl atoi
    lis r5, lbl_8036B338@ha
    li r0, 0x80
    addi r5, r5, lbl_8036B338@l
    mr r31, r3
    addi r6, r1, 0x107
    la r4, lbl_8049CDC8
    subi r5, r5, 0x1
    mtctr r0
lbl_802788A4:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_802788A4
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x108
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x108
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r25
    addi r4, r1, 0x108
    bl strstr
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_802788F8
    li r3, 0x0
    b lbl_8027894C
lbl_802788F8:
    addi r3, r1, 0x108
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r26, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_80278930
lbl_80278920:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_80278930:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_80278944
    cmpwi r0, 0x5c
    bne lbl_80278920
lbl_80278944:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_8027894C:
    cmpwi r3, 0x0
    beq lbl_80278958
    b lbl_8027895C
lbl_80278958:
    la r3, lbl_8049CDAC
lbl_8027895C:
    bl atoi
    lwz r0, lbl_8049DC48
    mr r26, r3
    srawi r27, r3, 31
    cmpwi r0, 0x0
    bne lbl_8027897C
    li r29, -0x1
    b lbl_802789D0
lbl_8027897C:
    li r29, 0x0
    b lbl_802789BC
lbl_80278984:
    lwz r3, lbl_8049DC48
    mr r4, r29
    bl fn_80253660
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1
    bne lbl_802789B8
    lwz r0, 0x4(r3)
    cmpw r0, r30
    bne lbl_802789B8
    lwz r0, 0x8(r3)
    cmpw r0, r31
    bne lbl_802789B8
    b lbl_802789D0
lbl_802789B8:
    addi r29, r29, 0x1
lbl_802789BC:
    lwz r3, lbl_8049DC48
    bl fn_80253658
    cmpw r29, r3
    blt lbl_80278984
    li r29, -0x1
lbl_802789D0:
    cmpwi r29, -0x1
    beq lbl_80278AF0
    lis r3, lbl_8036B338@ha
    li r0, 0x80
    addi r3, r3, lbl_8036B338@l
    addi r6, r1, 0x7
    subi r5, r3, 0x1
    la r4, lbl_8049CDCC
    mtctr r0
lbl_802789F4:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_802789F4
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x8
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x8
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r25
    addi r4, r1, 0x8
    bl strstr
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_80278A48
    li r3, 0x0
    b lbl_80278A9C
lbl_80278A48:
    addi r3, r1, 0x8
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r30, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_80278A80
lbl_80278A70:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_80278A80:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_80278A94
    cmpwi r0, 0x5c
    bne lbl_80278A70
lbl_80278A94:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_80278A9C:
    cmpwi r3, 0x0
    beq lbl_80278AA8
    b lbl_80278AAC
lbl_80278AA8:
    la r3, lbl_8049CDAC
lbl_80278AAC:
    bl atoi
    mr r30, r3
    mr r3, r25
    la r4, lbl_8049CDD4
    bl strstr
    cmpwi r3, 0x0
    bne lbl_80278AD4
    li r30, 0x0
    la r7, lbl_8049CDAC
    b lbl_80278AD8
lbl_80278AD4:
    addi r7, r3, 0x6
lbl_80278AD8:
    mr r3, r29
    mr r4, r28
    mr r6, r26
    mr r5, r27
    mr r8, r30
    bl CallReqCallback
lbl_80278AF0:
    addi r11, r1, 0x530
    bl _restgpr_25
    lwz r0, 0x534(r1)
    mtlr r0
    addi r1, r1, 0x530
    blr
}

// ----------------------------------------------------------------------------
// ProcessStatement
// ----------------------------------------------------------------------------
asm void ProcessStatement() {
    nofralloc
    stwu r1, -0xb20(r1)
    mflr r0
    stw r0, 0xb24(r1)
    addi r11, r1, 0xb20
    bl _savegpr_27
    lis r29, lbl_8036B230@ha
    li r0, 0x0
    stbx r0, r3, r4
    addi r29, r29, lbl_8036B230@l
    mr r28, r4
    mr r27, r3
    addi r4, r29, 0x218
    li r5, 0x8
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_80278E70
    addi r3, r29, 0x108
    li r0, 0x80
    addi r6, r1, 0x807
    la r4, lbl_8049CDDC
    subi r5, r3, 0x1
    mtctr r0
lbl_80278B60:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_80278B60
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x808
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x808
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r27
    addi r4, r1, 0x808
    bl strstr
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_80278BB4
    li r3, 0x0
    b lbl_80278C08
lbl_80278BB4:
    addi r3, r1, 0x808
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r28, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_80278BEC
lbl_80278BDC:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_80278BEC:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_80278C00
    cmpwi r0, 0x5c
    bne lbl_80278BDC
lbl_80278C00:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_80278C08:
    cmpwi r3, 0x0
    beq lbl_80278C14
    b lbl_80278C18
lbl_80278C14:
    la r3, lbl_8049CDAC
lbl_80278C18:
    bl atoi
    addi r4, r29, 0x108
    li r0, 0x80
    subi r5, r4, 0x1
    mr r31, r3
    addi r6, r1, 0x907
    la r4, lbl_8049CDC0
    mtctr r0
lbl_80278C38:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_80278C38
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x908
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x908
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r27
    addi r4, r1, 0x908
    bl strstr
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_80278C8C
    li r3, 0x0
    b lbl_80278CE0
lbl_80278C8C:
    addi r3, r1, 0x908
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r28, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_80278CC4
lbl_80278CB4:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_80278CC4:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_80278CD8
    cmpwi r0, 0x5c
    bne lbl_80278CB4
lbl_80278CD8:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_80278CE0:
    cmpwi r3, 0x0
    beq lbl_80278CEC
    b lbl_80278CF0
lbl_80278CEC:
    la r3, lbl_8049CDAC
lbl_80278CF0:
    bl atoi
    addi r4, r29, 0x108
    li r0, 0x80
    subi r5, r4, 0x1
    mr r30, r3
    addi r6, r1, 0xa07
    la r4, lbl_8049CDE4
    mtctr r0
lbl_80278D10:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_80278D10
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0xa08
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0xa08
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r27
    addi r4, r1, 0xa08
    bl strstr
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_80278D64
    li r28, 0x0
    b lbl_80278DB8
lbl_80278D64:
    addi r3, r1, 0xa08
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r27, r3
    slwi r0, r0, 8
    add r28, r4, r0
    mr r3, r28
    b lbl_80278D9C
lbl_80278D8C:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
lbl_80278D9C:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_80278DB0
    cmpwi r0, 0x5c
    bne lbl_80278D8C
lbl_80278DB0:
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_80278DB8:
    cmpwi r28, 0x0
    beq lbl_80278DC4
    b lbl_80278DC8
lbl_80278DC4:
    la r28, lbl_8049CDAC
lbl_80278DC8:
    lwz r0, lbl_8049DC48
    cmpwi r0, 0x0
    bne lbl_80278DDC
    li r27, -0x1
    b lbl_80278E30
lbl_80278DDC:
    li r27, 0x0
    b lbl_80278E1C
lbl_80278DE4:
    lwz r3, lbl_8049DC48
    mr r4, r27
    bl fn_80253660
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_80278E18
    lwz r0, 0x4(r3)
    cmpw r0, r30
    bne lbl_80278E18
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_80278E18
    b lbl_80278E30
lbl_80278E18:
    addi r27, r27, 0x1
lbl_80278E1C:
    lwz r3, lbl_8049DC48
    bl fn_80253658
    cmpw r27, r3
    blt lbl_80278DE4
    li r27, -0x1
lbl_80278E30:
    cmpwi r27, -0x1
    beq lbl_8027977C
    lwz r3, lbl_8049DC48
    mr r4, r27
    bl fn_80253660
    neg r0, r31
    stw r31, 0x8(r3)
    andc r0, r0, r31
    mr r3, r27
    mr r7, r28
    li r6, 0x0
    srwi r4, r0, 31
    li r5, 0x0
    li r8, 0x0
    bl CallReqCallback
    b lbl_8027977C
lbl_80278E70:
    mr r3, r27
    addi r4, r29, 0x224
    li r5, 0x9
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_802790E0
    addi r3, r29, 0x108
    li r0, 0x80
    addi r6, r1, 0x607
    la r4, lbl_8049CDF0
    subi r5, r3, 0x1
    mtctr r0
lbl_80278EA0:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_80278EA0
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x608
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x608
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r27
    addi r4, r1, 0x608
    bl strstr
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_80278EF4
    li r3, 0x0
    b lbl_80278F48
lbl_80278EF4:
    addi r3, r1, 0x608
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r28, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_80278F2C
lbl_80278F1C:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_80278F2C:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_80278F40
    cmpwi r0, 0x5c
    bne lbl_80278F1C
lbl_80278F40:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_80278F48:
    cmpwi r3, 0x0
    beq lbl_80278F54
    b lbl_80278F58
lbl_80278F54:
    la r3, lbl_8049CDAC
lbl_80278F58:
    bl atoi
    addi r4, r29, 0x108
    li r0, 0x80
    subi r5, r4, 0x1
    mr r30, r3
    addi r6, r1, 0x707
    la r4, lbl_8049CDC0
    mtctr r0
lbl_80278F78:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_80278F78
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x708
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x708
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r27
    addi r4, r1, 0x708
    bl strstr
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_80278FCC
    li r3, 0x0
    b lbl_80279020
lbl_80278FCC:
    addi r3, r1, 0x708
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r27, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_80279004
lbl_80278FF4:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_80279004:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_80279018
    cmpwi r0, 0x5c
    bne lbl_80278FF4
lbl_80279018:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_80279020:
    cmpwi r3, 0x0
    beq lbl_8027902C
    b lbl_80279030
lbl_8027902C:
    la r3, lbl_8049CDAC
lbl_80279030:
    bl atoi
    lwz r0, lbl_8049DC48
    mr r27, r3
    cmpwi r0, 0x0
    bne lbl_8027904C
    li r28, -0x1
    b lbl_802790A0
lbl_8027904C:
    li r28, 0x0
    b lbl_8027908C
lbl_80279054:
    lwz r3, lbl_8049DC48
    mr r4, r28
    bl fn_80253660
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3
    bne lbl_80279088
    lwz r0, 0x4(r3)
    cmpw r0, r27
    bne lbl_80279088
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_80279088
    b lbl_802790A0
lbl_80279088:
    addi r28, r28, 0x1
lbl_8027908C:
    lwz r3, lbl_8049DC48
    bl fn_80253658
    cmpw r28, r3
    blt lbl_80279054
    li r28, -0x1
lbl_802790A0:
    cmpwi r28, -0x1
    beq lbl_8027977C
    lwz r3, lbl_8049DC48
    mr r4, r28
    bl fn_80253660
    neg r0, r30
    stw r30, 0x8(r3)
    andc r0, r0, r30
    mr r3, r28
    srwi r4, r0, 31
    li r6, 0x0
    li r5, 0x0
    li r7, 0x0
    li r8, 0x0
    bl CallReqCallback
    b lbl_8027977C
lbl_802790E0:
    mr r3, r27
    addi r4, r29, 0x224
    li r5, 0x9
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_80279350
    addi r3, r29, 0x108
    li r0, 0x80
    addi r6, r1, 0x407
    la r4, lbl_8049CDF0
    subi r5, r3, 0x1
    mtctr r0
lbl_80279110:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_80279110
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x408
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x408
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r27
    addi r4, r1, 0x408
    bl strstr
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_80279164
    li r3, 0x0
    b lbl_802791B8
lbl_80279164:
    addi r3, r1, 0x408
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r28, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_8027919C
lbl_8027918C:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_8027919C:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_802791B0
    cmpwi r0, 0x5c
    bne lbl_8027918C
lbl_802791B0:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_802791B8:
    cmpwi r3, 0x0
    beq lbl_802791C4
    b lbl_802791C8
lbl_802791C4:
    la r3, lbl_8049CDAC
lbl_802791C8:
    bl atoi
    addi r4, r29, 0x108
    li r0, 0x80
    subi r5, r4, 0x1
    mr r30, r3
    addi r6, r1, 0x507
    la r4, lbl_8049CDC0
    mtctr r0
lbl_802791E8:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_802791E8
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x508
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x508
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r27
    addi r4, r1, 0x508
    bl strstr
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_8027923C
    li r3, 0x0
    b lbl_80279290
lbl_8027923C:
    addi r3, r1, 0x508
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r27, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_80279274
lbl_80279264:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_80279274:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_80279288
    cmpwi r0, 0x5c
    bne lbl_80279264
lbl_80279288:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_80279290:
    cmpwi r3, 0x0
    beq lbl_8027929C
    b lbl_802792A0
lbl_8027929C:
    la r3, lbl_8049CDAC
lbl_802792A0:
    bl atoi
    lwz r0, lbl_8049DC48
    mr r27, r3
    cmpwi r0, 0x0
    bne lbl_802792BC
    li r28, -0x1
    b lbl_80279310
lbl_802792BC:
    li r28, 0x0
    b lbl_802792FC
lbl_802792C4:
    lwz r3, lbl_8049DC48
    mr r4, r28
    bl fn_80253660
    lwz r0, 0x0(r3)
    cmpwi r0, 0x3
    bne lbl_802792F8
    lwz r0, 0x4(r3)
    cmpw r0, r27
    bne lbl_802792F8
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_802792F8
    b lbl_80279310
lbl_802792F8:
    addi r28, r28, 0x1
lbl_802792FC:
    lwz r3, lbl_8049DC48
    bl fn_80253658
    cmpw r28, r3
    blt lbl_802792C4
    li r28, -0x1
lbl_80279310:
    cmpwi r28, -0x1
    beq lbl_8027977C
    lwz r3, lbl_8049DC48
    mr r4, r28
    bl fn_80253660
    neg r0, r30
    stw r30, 0x8(r3)
    andc r0, r0, r30
    mr r3, r28
    srwi r4, r0, 31
    li r6, 0x0
    li r5, 0x0
    li r7, 0x0
    li r8, 0x0
    bl CallReqCallback
    b lbl_8027977C
lbl_80279350:
    mr r3, r27
    addi r4, r29, 0x230
    li r5, 0x8
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_80279378
    mr r3, r27
    mr r4, r28
    bl ProcessGetData
    b lbl_8027977C
lbl_80279378:
    mr r3, r27
    addi r4, r29, 0x23c
    li r5, 0x8
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_8027977C
    addi r3, r29, 0x108
    li r0, 0x80
    addi r6, r1, 0x7
    la r4, lbl_8049CDF8
    subi r5, r3, 0x1
    mtctr r0
lbl_802793A8:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_802793A8
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x8
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x8
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r27
    addi r4, r1, 0x8
    bl strstr
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_802793FC
    li r3, 0x0
    b lbl_80279450
lbl_802793FC:
    addi r3, r1, 0x8
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r28, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_80279434
lbl_80279424:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_80279434:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_80279448
    cmpwi r0, 0x5c
    bne lbl_80279424
lbl_80279448:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_80279450:
    cmpwi r3, 0x0
    beq lbl_8027945C
    b lbl_80279460
lbl_8027945C:
    la r3, lbl_8049CDAC
lbl_80279460:
    bl atoi
    addi r4, r29, 0x108
    li r0, 0x80
    subi r5, r4, 0x1
    mr r28, r3
    addi r6, r1, 0x107
    la r4, lbl_8049CDC4
    mtctr r0
lbl_80279480:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_80279480
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x108
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x108
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r27
    addi r4, r1, 0x108
    bl strstr
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802794D4
    li r3, 0x0
    b lbl_80279528
lbl_802794D4:
    addi r3, r1, 0x108
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r30, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_8027950C
lbl_802794FC:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_8027950C:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_80279520
    cmpwi r0, 0x5c
    bne lbl_802794FC
lbl_80279520:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_80279528:
    cmpwi r3, 0x0
    beq lbl_80279534
    b lbl_80279538
lbl_80279534:
    la r3, lbl_8049CDAC
lbl_80279538:
    bl atoi
    addi r4, r29, 0x108
    li r0, 0x80
    subi r5, r4, 0x1
    mr r30, r3
    addi r6, r1, 0x207
    la r4, lbl_8049CDC0
    mtctr r0
lbl_80279558:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_80279558
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x208
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x208
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r27
    addi r4, r1, 0x208
    bl strstr
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802795AC
    li r3, 0x0
    b lbl_80279600
lbl_802795AC:
    addi r3, r1, 0x208
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r31, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_802795E4
lbl_802795D4:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_802795E4:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_802795F8
    cmpwi r0, 0x5c
    bne lbl_802795D4
lbl_802795F8:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_80279600:
    cmpwi r3, 0x0
    beq lbl_8027960C
    b lbl_80279610
lbl_8027960C:
    la r3, lbl_8049CDAC
lbl_80279610:
    bl atoi
    addi r4, r29, 0x108
    li r0, 0x80
    subi r5, r4, 0x1
    mr r31, r3
    addi r6, r1, 0x307
    la r4, lbl_8049CDC8
    mtctr r0
lbl_80279630:
    lbz r3, 0x1(r5)
    lbzu r0, 0x2(r5)
    stb r3, 0x1(r6)
    stbu r0, 0x2(r6)
    bdnz lbl_80279630
    lwz r0, lbl_8049DC4C
    addi r3, r1, 0x308
    xori r0, r0, 0x1
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x308
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r27
    addi r4, r1, 0x308
    bl strstr
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_80279684
    li r3, 0x0
    b lbl_802796D8
lbl_80279684:
    addi r3, r1, 0x308
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r5, r27, r3
    slwi r0, r0, 8
    add r3, r4, r0
    mr r4, r3
    b lbl_802796BC
lbl_802796AC:
    lbz r0, 0x0(r5)
    addi r5, r5, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_802796BC:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_802796D0
    cmpwi r0, 0x5c
    bne lbl_802796AC
lbl_802796D0:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_802796D8:
    cmpwi r3, 0x0
    beq lbl_802796E4
    b lbl_802796E8
lbl_802796E4:
    la r3, lbl_8049CDAC
lbl_802796E8:
    bl atoi
    lwz r0, lbl_8049DC48
    mr r29, r3
    cmpwi r0, 0x0
    bne lbl_80279704
    li r27, -0x1
    b lbl_80279758
lbl_80279704:
    li r27, 0x0
    b lbl_80279744
lbl_8027970C:
    lwz r3, lbl_8049DC48
    mr r4, r27
    bl fn_80253660
    lwz r0, 0x0(r3)
    cmpwi r0, 0x2
    bne lbl_80279740
    lwz r0, 0x4(r3)
    cmpw r0, r31
    bne lbl_80279740
    lwz r0, 0x8(r3)
    cmpw r0, r30
    bne lbl_80279740
    b lbl_80279758
lbl_80279740:
    addi r27, r27, 0x1
lbl_80279744:
    lwz r3, lbl_8049DC48
    bl fn_80253658
    cmpw r27, r3
    blt lbl_8027970C
    li r27, -0x1
lbl_80279758:
    cmpwi r27, -0x1
    beq lbl_8027977C
    mr r3, r27
    mr r4, r28
    mr r6, r29
    srawi r5, r29, 31
    li r7, 0x0
    li r8, 0x0
    bl CallReqCallback
lbl_8027977C:
    addi r11, r1, 0xb20
    bl _restgpr_27
    lwz r0, 0xb24(r1)
    mtlr r0
    addi r1, r1, 0xb20
    blr
}

// ----------------------------------------------------------------------------
// CallReqCallback
// ----------------------------------------------------------------------------
asm void CallReqCallback() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r26, r3
    mr r27, r4
    mr r29, r5
    mr r28, r6
    mr r30, r7
    mr r31, r8
    blt lbl_802798D0
    lwz r3, lbl_8049DC48
    bl fn_80253658
    cmpw r26, r3
    blt lbl_802797DC
    b lbl_802798D0
lbl_802797DC:
    lwz r3, lbl_8049DC48
    mr r4, r26
    bl fn_80253660
    lwz r12, 0x18(r3)
    mr r8, r3
    cmpwi r12, 0x0
    beq lbl_802798C4
    lwz r0, 0x0(r3)
    cmpwi r0, 0x2
    beq lbl_8027987C
    bge lbl_80279818
    cmpwi r0, 0x0
    beq lbl_80279824
    bge lbl_80279844
    b lbl_802798C4
lbl_80279818:
    cmpwi r0, 0x4
    bge lbl_802798C4
    b lbl_802798AC
lbl_80279824:
    mr r5, r27
    mr r6, r30
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r8)
    lwz r7, 0x14(r8)
    mtctr r12
    bctrl
    b lbl_802798C4
lbl_80279844:
    stw r30, 0x8(r1)
    mr r7, r27
    mr r10, r28
    mr r9, r29
    stw r31, 0xc(r1)
    lwz r0, 0x14(r3)
    stw r0, 0x10(r1)
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r8)
    lwz r5, 0xc(r8)
    lwz r6, 0x10(r8)
    mtctr r12
    bctrl
    b lbl_802798C4
lbl_8027987C:
    lwz r0, 0x14(r3)
    mr r7, r27
    mr r10, r28
    mr r9, r29
    stw r0, 0x8(r1)
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r8)
    lwz r5, 0xc(r8)
    lwz r6, 0x10(r8)
    mtctr r12
    bctrl
    b lbl_802798C4
lbl_802798AC:
    mr r5, r27
    lwz r3, 0x4(r3)
    lwz r4, 0x8(r8)
    lwz r6, 0x14(r8)
    mtctr r12
    bctrl
lbl_802798C4:
    lwz r3, lbl_8049DC48
    mr r4, r26
    bl detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo
lbl_802798D0:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// ServerOpInt
// ----------------------------------------------------------------------------
asm void ServerOpInt() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r6, 0x8(r1)
    bne lbl_80279914
    lwz r30, lbl_8049DC20
lbl_80279914:
    cmpwi r30, 0x0
    bne lbl_80279924
    addi r3, r1, 0x8
    b lbl_80279958
lbl_80279924:
    mr r12, r5
    mr r4, r31
    addi r5, r1, 0x8
    lwz r3, 0xc(r30)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80279958
    lwz r3, 0xc(r30)
    mr r4, r31
    addi r6, r1, 0x8
    li r5, 0x0
    bl BucketNew
lbl_80279958:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    lwz r3, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ServerOpFloat
// ----------------------------------------------------------------------------
asm void ServerOpFloat() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stfd f1, 0x8(r1)
    bne lbl_802799A0
    lwz r30, lbl_8049DC20
lbl_802799A0:
    cmpwi r30, 0x0
    bne lbl_802799B0
    addi r3, r1, 0x8
    b lbl_802799E4
lbl_802799B0:
    mr r12, r5
    mr r4, r31
    addi r5, r1, 0x8
    lwz r3, 0xc(r30)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_802799E4
    lwz r3, 0xc(r30)
    mr r4, r31
    addi r6, r1, 0x8
    li r5, 0x1
    bl BucketNew
lbl_802799E4:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    lfd f1, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// ServerOpString
// ----------------------------------------------------------------------------
asm void ServerOpString() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_80279A30
    lwz r29, lbl_8049DC20
lbl_80279A30:
    cmpwi r29, 0x0
    bne lbl_80279A40
    mr r3, r31
    b lbl_80279A74
lbl_80279A40:
    mr r12, r5
    mr r4, r30
    mr r5, r31
    lwz r3, 0xc(r29)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80279A74
    lwz r3, 0xc(r29)
    mr r4, r30
    mr r6, r31
    li r5, 0x2
    bl BucketNew
lbl_80279A74:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// TeamOpInt
// ----------------------------------------------------------------------------
asm void TeamOpInt() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r6
    stw r30, 0x58(r1)
    mr r30, r5
    stw r29, 0x54(r1)
    mr r29, r4
    stw r28, 0x50(r1)
    mr r28, r3
    bne lbl_80279AC8
    lwz r3, lbl_8049DC20
lbl_80279AC8:
    cmpwi r3, 0x0
    bne lbl_80279AD4
    b lbl_80279AE4
lbl_80279AD4:
    lwz r3, 0x20(r3)
    mr r4, r7
    bl fn_80253660
    lwz r7, 0x0(r3)
lbl_80279AE4:
    mr r6, r7
    mr r5, r29
    addi r3, r1, 0x10
    la r4, lbl_8049CE00
    opword 0x4CC63182
    bl sprintf
    cmpwi r28, 0x0
    stw r31, 0x8(r1)
    bne lbl_80279B0C
    lwz r28, lbl_8049DC20
lbl_80279B0C:
    cmpwi r28, 0x0
    bne lbl_80279B1C
    addi r3, r1, 0x8
    b lbl_80279B50
lbl_80279B1C:
    mr r12, r30
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    lwz r3, 0xc(r28)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80279B50
    lwz r3, 0xc(r28)
    addi r4, r1, 0x10
    addi r6, r1, 0x8
    li r5, 0x0
    bl BucketNew
lbl_80279B50:
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    lwz r0, 0x64(r1)
    lwz r3, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// TeamOpFloat
// ----------------------------------------------------------------------------
asm void TeamOpFloat() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x74(r1)
    stfd f31, 0x68(r1)
    fmr f31, f1
    stw r31, 0x64(r1)
    mr r31, r5
    stw r30, 0x60(r1)
    mr r30, r4
    stw r29, 0x5c(r1)
    mr r29, r3
    bne lbl_80279BAC
    lwz r3, lbl_8049DC20
lbl_80279BAC:
    cmpwi r3, 0x0
    bne lbl_80279BB8
    b lbl_80279BC8
lbl_80279BB8:
    lwz r3, 0x20(r3)
    mr r4, r6
    bl fn_80253660
    lwz r6, 0x0(r3)
lbl_80279BC8:
    mr r5, r30
    addi r3, r1, 0x10
    la r4, lbl_8049CE00
    opword 0x4CC63182
    bl sprintf
    cmpwi r29, 0x0
    stfd f31, 0x8(r1)
    bne lbl_80279BEC
    lwz r29, lbl_8049DC20
lbl_80279BEC:
    cmpwi r29, 0x0
    bne lbl_80279BFC
    addi r3, r1, 0x8
    b lbl_80279C30
lbl_80279BFC:
    mr r12, r31
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    lwz r3, 0xc(r29)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80279C30
    lwz r3, 0xc(r29)
    addi r4, r1, 0x10
    addi r6, r1, 0x8
    li r5, 0x1
    bl BucketNew
lbl_80279C30:
    lfd f31, 0x68(r1)
    lwz r31, 0x64(r1)
    lwz r30, 0x60(r1)
    lwz r29, 0x5c(r1)
    lwz r0, 0x74(r1)
    lfd f1, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// TeamOpString
// ----------------------------------------------------------------------------
asm void TeamOpString() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r6
    stw r30, 0x58(r1)
    mr r30, r5
    stw r29, 0x54(r1)
    mr r29, r4
    stw r28, 0x50(r1)
    mr r28, r3
    bne lbl_80279C8C
    lwz r3, lbl_8049DC20
lbl_80279C8C:
    cmpwi r3, 0x0
    bne lbl_80279C98
    b lbl_80279CA8
lbl_80279C98:
    lwz r3, 0x20(r3)
    mr r4, r7
    bl fn_80253660
    lwz r7, 0x0(r3)
lbl_80279CA8:
    mr r6, r7
    mr r5, r29
    addi r3, r1, 0x8
    la r4, lbl_8049CE00
    opword 0x4CC63182
    bl sprintf
    cmpwi r28, 0x0
    bne lbl_80279CCC
    lwz r28, lbl_8049DC20
lbl_80279CCC:
    cmpwi r28, 0x0
    bne lbl_80279CDC
    mr r3, r31
    b lbl_80279D10
lbl_80279CDC:
    mr r12, r30
    mr r5, r31
    addi r4, r1, 0x8
    lwz r3, 0xc(r28)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80279D10
    lwz r3, 0xc(r28)
    mr r6, r31
    addi r4, r1, 0x8
    li r5, 0x2
    bl BucketNew
lbl_80279D10:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// PlayerOpInt
// ----------------------------------------------------------------------------
asm void PlayerOpInt() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r6
    stw r30, 0x58(r1)
    mr r30, r5
    stw r29, 0x54(r1)
    mr r29, r4
    stw r28, 0x50(r1)
    mr r28, r3
    bne lbl_80279D68
    lwz r3, lbl_8049DC20
lbl_80279D68:
    cmpwi r3, 0x0
    bne lbl_80279D74
    b lbl_80279D84
lbl_80279D74:
    lwz r3, 0x1c(r3)
    mr r4, r7
    bl fn_80253660
    lwz r7, 0x0(r3)
lbl_80279D84:
    mr r6, r7
    mr r5, r29
    addi r3, r1, 0x10
    la r4, lbl_8049CE08
    opword 0x4CC63182
    bl sprintf
    cmpwi r28, 0x0
    stw r31, 0x8(r1)
    bne lbl_80279DAC
    lwz r28, lbl_8049DC20
lbl_80279DAC:
    cmpwi r28, 0x0
    bne lbl_80279DBC
    addi r3, r1, 0x8
    b lbl_80279DF0
lbl_80279DBC:
    mr r12, r30
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    lwz r3, 0xc(r28)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80279DF0
    lwz r3, 0xc(r28)
    addi r4, r1, 0x10
    addi r6, r1, 0x8
    li r5, 0x0
    bl BucketNew
lbl_80279DF0:
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    lwz r0, 0x64(r1)
    lwz r3, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

// ----------------------------------------------------------------------------
// PlayerOpFloat
// ----------------------------------------------------------------------------
asm void PlayerOpFloat() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x74(r1)
    stfd f31, 0x68(r1)
    fmr f31, f1
    stw r31, 0x64(r1)
    mr r31, r5
    stw r30, 0x60(r1)
    mr r30, r4
    stw r29, 0x5c(r1)
    mr r29, r3
    bne lbl_80279E4C
    lwz r3, lbl_8049DC20
lbl_80279E4C:
    cmpwi r3, 0x0
    bne lbl_80279E58
    b lbl_80279E68
lbl_80279E58:
    lwz r3, 0x1c(r3)
    mr r4, r6
    bl fn_80253660
    lwz r6, 0x0(r3)
lbl_80279E68:
    mr r5, r30
    addi r3, r1, 0x10
    la r4, lbl_8049CE08
    opword 0x4CC63182
    bl sprintf
    cmpwi r29, 0x0
    stfd f31, 0x8(r1)
    bne lbl_80279E8C
    lwz r29, lbl_8049DC20
lbl_80279E8C:
    cmpwi r29, 0x0
    bne lbl_80279E9C
    addi r3, r1, 0x8
    b lbl_80279ED0
lbl_80279E9C:
    mr r12, r31
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    lwz r3, 0xc(r29)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80279ED0
    lwz r3, 0xc(r29)
    addi r4, r1, 0x10
    addi r6, r1, 0x8
    li r5, 0x1
    bl BucketNew
lbl_80279ED0:
    lfd f31, 0x68(r1)
    lwz r31, 0x64(r1)
    lwz r30, 0x60(r1)
    lwz r29, 0x5c(r1)
    lwz r0, 0x74(r1)
    lfd f1, 0x0(r3)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

// ----------------------------------------------------------------------------
// PlayerOpString
// ----------------------------------------------------------------------------
asm void PlayerOpString() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r6
    stw r30, 0x58(r1)
    mr r30, r5
    stw r29, 0x54(r1)
    mr r29, r4
    stw r28, 0x50(r1)
    mr r28, r3
    bne lbl_80279F2C
    lwz r3, lbl_8049DC20
lbl_80279F2C:
    cmpwi r3, 0x0
    bne lbl_80279F38
    b lbl_80279F48
lbl_80279F38:
    lwz r3, 0x1c(r3)
    mr r4, r7
    bl fn_80253660
    lwz r7, 0x0(r3)
lbl_80279F48:
    mr r6, r7
    mr r5, r29
    addi r3, r1, 0x8
    la r4, lbl_8049CE08
    opword 0x4CC63182
    bl sprintf
    cmpwi r28, 0x0
    bne lbl_80279F6C
    lwz r28, lbl_8049DC20
lbl_80279F6C:
    cmpwi r28, 0x0
    bne lbl_80279F7C
    mr r3, r31
    b lbl_80279FB0
lbl_80279F7C:
    mr r12, r30
    mr r5, r31
    addi r4, r1, 0x8
    lwz r3, 0xc(r28)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_80279FB0
    lwz r3, 0xc(r28)
    mr r6, r31
    addi r4, r1, 0x8
    li r5, 0x2
    bl BucketNew
lbl_80279FB0:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

