#include "types.h"

// Translation unit: src/gamespy/gstats/unk_80274A58.cpp
// Total functions: 11

// Small Data symbols (@sda21)
extern float lbl_8049CD80;
extern float lbl_8049CD84;
extern float lbl_8049CD88;
extern float lbl_8049CD8C;
extern float lbl_8049CD94;
extern float lbl_8049CD98;
extern float lbl_8049CD9C;
extern float lbl_8049CDA4;
extern float lbl_8049CDAC;
extern float lbl_8049DBB8;
extern float lbl_8049DC20;
extern float lbl_8049DC24;
extern float lbl_8049DC28;
extern float lbl_8049DC2C;
extern float lbl_8049DC30;
extern float lbl_8049DC34;
extern float lbl_8049DC38;
extern float lbl_8049DC3C;
extern float lbl_8049DC40;
extern float lbl_8049DC44;
extern float lbl_8049DC48;
extern float lbl_8049DC4C;
extern float lbl_804A2320;
extern float lbl_804A2321;
extern float lbl_804A2322;
extern float lbl_804A2323;
extern float lbl_804A2324;
extern float lbl_804A2325;
extern float lbl_804A2326;
extern float lbl_804A2327;

// Global data symbols (@ha/@l)
extern u8 lbl_80341430[];
extern u8 lbl_80341454[];
extern u8 lbl_8036B230[];
extern u8 lbl_8036B240[];
extern u8 lbl_8036B2E0[];
extern u8 lbl_8036B300[];
extern u8 lbl_8036B30C[];
extern u8 lbl_8036B338[];
extern u8 lbl_8036B438[];
extern u8 lbl_8036B478[];
extern u8 lbl_8040B420[];
extern u8 lbl_8040B520[];
extern u8 lbl_8040B620[];
extern u8 lbl_8040B630[];

// Forward declarations
extern void CallReqCallback();
extern void GOAGetLastError();
extern void GSISocketSelect();
extern void MD5Digest();
extern void _restgpr_14();
extern void _restgpr_19();
extern void _restgpr_20();
extern void _restgpr_25();
extern void _savegpr_14();
extern void _savegpr_19();
extern void _savegpr_20();
extern void _savegpr_25();
extern void closesocket();
extern void connect();
extern void fn_80253528();
extern void fn_802535C4();
extern void fn_80253658();
extern void fn_80253690();
extern void fn_80255D78();
extern void fn_80255E4C();
extern void fn_802565E8();
extern void fn_802565F0();
extern void fn_80256638();
extern void fn_80256C4C();
extern void fn_80256C70();
extern void fn_80274A58();
extern void fn_80274B0C();
extern void fn_80274ECC();
extern void fn_80276440();
extern void fn_80276490();
extern void fn_802766B8();
extern void fn_802766D0();
extern void fn_80276768();
extern void fn_80276E44();
extern void fn_80277540();
extern void fn_80277574();
extern void fn_80277AA8();
extern void fn_80277C68();
extern void fn_80277D64();
extern void fn_80277E34();
extern void inet_addr();
extern void memset();
extern void recv();
extern void shutdown();
extern void socket();
extern void sprintf();
extern void strcat();
extern void strcpy();
extern void strlen();
extern void strstr();

// ----------------------------------------------------------------------------
// fn_80274A58
// ----------------------------------------------------------------------------
asm void fn_80274A58() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    mr r30, r5
    stw r29, 0x94(r1)
    mr r29, r4
    stw r28, 0x90(r1)
    mr r28, r3
    bl strlen
    mr r31, r3
    mr r3, r29
    bl strlen
    add r3, r3, r31
    addi r0, r3, 0x14
    cmplwi r0, 0x80
    blt lbl_80274AB8
    lis r4, lbl_8036B2E0@ha
    mr r3, r30
    addi r4, r4, lbl_8036B2E0@l
    bl strcpy
    mr r3, r30
    b lbl_80274AEC
lbl_80274AB8:
    mr r5, r29
    mr r6, r28
    addi r3, r1, 0x8
    la r4, lbl_8049CD8C
    opword 0x4CC63182
    bl sprintf
    addi r3, r1, 0x8
    bl strlen
    mr r4, r3
    mr r5, r30
    addi r3, r1, 0x8
    bl MD5Digest
    mr r3, r30
lbl_80274AEC:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// fn_80274B0C
// ----------------------------------------------------------------------------
asm void fn_80274B0C() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xe0
    bl _savegpr_19
    cmpwi r4, 0x0
    lis r30, lbl_8036B230@ha
    stw r3, lbl_8049DC40
    addi r30, r30, lbl_8036B230@l
    beq lbl_80274B38
    stw r4, lbl_8049CD88
lbl_80274B38:
    lwz r0, lbl_8049DBB8
    cmpwi r0, 0x1
    beq lbl_80274B4C
    li r3, 0x1
    b lbl_80274EB4
lbl_80274B4C:
    lwz r0, lbl_8049DC2C
    cmpwi r0, 0x0
    bne lbl_80274B78
    li r5, 0x1
    li r4, 0x47
    li r3, 0x50
    li r0, 0x5c
    stw r5, lbl_8049DC2C
    stb r4, 0x0(r30)
    stb r3, 0x10(r30)
    stb r0, 0x20(r30)
lbl_80274B78:
    bl fn_802565E8
    bl fn_802565F0
    lwz r0, lbl_8049CD80
    stw r3, lbl_8049DC28
    cmpwi r0, -0x1
    beq lbl_80274D80
    beq lbl_80274BA8
    mr r3, r0
    li r4, 0x2
    bl shutdown
    lwz r3, lbl_8049CD80
    bl closesocket
lbl_80274BA8:
    lwz r3, lbl_8049DC48
    li r0, -0x1
    stw r0, lbl_8049CD80
    cmpwi r3, 0x0
    beq lbl_80274D64
    bl fn_80253658
    lis r31, lbl_8036B478@ha
    addi r28, r30, 0x10
    subi r29, r3, 0x1
    li r27, 0x3
    addi r31, r31, lbl_8036B478@l
    b lbl_80274D4C
lbl_80274BD8:
    lbz r19, 0x0(r31)
    mr r3, r28
    lbz r20, 0x1(r31)
    addi r5, r1, 0x10
    lbz r21, 0x2(r31)
    li r4, 0x0
    lbz r22, 0x3(r31)
    lbz r23, 0x4(r31)
    lbz r24, 0x5(r31)
    lbz r25, 0x6(r31)
    lbz r26, 0x7(r31)
    lbz r12, 0x8(r31)
    lbz r11, 0x9(r31)
    lbz r10, 0xa(r31)
    lbz r9, 0xb(r31)
    lbz r8, 0xc(r31)
    lbz r7, 0xd(r31)
    lbz r6, 0xe(r31)
    lbz r0, 0xf(r31)
    stb r19, 0x10(r1)
    stb r20, 0x11(r1)
    stb r21, 0x12(r1)
    stb r22, 0x13(r1)
    stb r23, 0x14(r1)
    stb r24, 0x15(r1)
    stb r25, 0x16(r1)
    stb r26, 0x17(r1)
    stb r12, 0x18(r1)
    stb r11, 0x19(r1)
    stb r10, 0x1a(r1)
    stb r9, 0x1b(r1)
    stb r8, 0x1c(r1)
    stb r7, 0x1d(r1)
    stb r6, 0x1e(r1)
    stb r0, 0x1f(r1)
    stw r28, lbl_8049CD84
    mtctr r27
lbl_80274C6C:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x0(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x0(r5)
    bne lbl_80274C90
    mr r3, r28
lbl_80274C90:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x1(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x1(r5)
    bne lbl_80274CB4
    mr r3, r28
lbl_80274CB4:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x2(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x2(r5)
    bne lbl_80274CD8
    mr r3, r28
lbl_80274CD8:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x3(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x3(r5)
    bne lbl_80274CFC
    mr r3, r28
lbl_80274CFC:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x4(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x4(r5)
    bne lbl_80274D20
    mr r3, r28
lbl_80274D20:
    addi r5, r5, 0x5
    addi r4, r4, 0x4
    bdnz lbl_80274C6C
    mr r3, r29
    addi r7, r1, 0x10
    li r4, 0x0
    li r6, 0x0
    li r5, 0x0
    li r8, 0x0
    bl CallReqCallback
    subi r29, r29, 0x1
lbl_80274D4C:
    cmpwi r29, 0x0
    bge lbl_80274BD8
    lwz r3, lbl_8049DC48
    bl fn_802535C4
    li r0, 0x0
    stw r0, lbl_8049DC48
lbl_80274D64:
    lwz r3, lbl_8049DC30
    cmpwi r3, 0x0
    beq lbl_80274D80
    bl fn_80256C70
    li r0, 0x0
    stw r0, lbl_8049DC30
    stw r0, lbl_8049DC34
lbl_80274D80:
    li r0, 0x0
    addi r3, r30, 0x30
    stw r0, lbl_8049DC38
    bl inet_addr
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_80274DC8
    lis r4, lbl_8040B420@ha
    addi r3, r1, 0x20
    addi r4, r4, lbl_8040B420@l
    bl strcpy
    addi r3, r1, 0x20
    la r4, lbl_8049CD94
    bl strcat
    addi r3, r1, 0x20
    addi r4, r30, 0x30
    bl strcat
    b lbl_80274DD4
lbl_80274DC8:
    addi r3, r1, 0x20
    addi r4, r30, 0x30
    bl strcpy
lbl_80274DD4:
    addi r3, r1, 0x20
    addi r5, r1, 0x8
    li r4, 0x74e0
    li r6, 0x0
    bl fn_80277D64
    cmpwi r3, 0x0
    bne lbl_80274DF8
    li r3, 0x2
    b lbl_80274EB4
lbl_80274DF8:
    li r3, 0x2
    li r4, 0x1
    li r5, 0x6
    bl socket
    cmpwi r3, -0x1
    stw r3, lbl_8049CD80
    bne lbl_80274E1C
    li r3, 0x1
    b lbl_80274EB4
lbl_80274E1C:
    li r4, 0x0
    bl fn_80255D78
    lwz r3, lbl_8049CD80
    addi r4, r1, 0x8
    li r5, 0x8
    bl connect
    cmpwi r3, -0x1
    bne lbl_80274E74
    lwz r3, lbl_8049CD80
    bl GOAGetLastError
    cmpwi r3, -0x6
    beq lbl_80274E74
    cmpwi r3, -0x4c
    beq lbl_80274E74
    cmpwi r3, -0x1a
    beq lbl_80274E74
    li r0, 0x1
    lwz r3, lbl_8049CD80
    stw r0, lbl_8049DC3C
    bl closesocket
    li r3, 0x3
    b lbl_80274EB4
lbl_80274E74:
    li r3, 0x40
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, lbl_8049DC30
    bne lbl_80274E90
    li r3, 0x3
    b lbl_80274EB4
lbl_80274E90:
    li r3, 0x40
    li r0, 0x0
    stw r3, lbl_8049DC34
    stw r0, lbl_8049DC38
    bl fn_802565F0
    li r0, 0x2
    stw r3, lbl_8049DC44
    li r3, 0x6
    stw r0, lbl_8049DC3C
lbl_80274EB4:
    addi r11, r1, 0xe0
    bl _restgpr_19
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// ----------------------------------------------------------------------------
// fn_80274ECC
// ----------------------------------------------------------------------------
asm void fn_80274ECC() {
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    addi r11, r1, 0x2f0
    bl _savegpr_14
    lwz r0, lbl_8049DC3C
    cmpwi r0, 0x3
    beq lbl_8027539C
    bge lbl_80274F00
    cmpwi r0, 0x1
    beq lbl_80274F10
    bge lbl_80274F18
    b lbl_80276424
lbl_80274F00:
    cmpwi r0, 0x5
    beq lbl_8027641C
    bge lbl_80276424
    b lbl_80275F98
lbl_80274F10:
    li r3, 0x3
    b lbl_80276428
lbl_80274F18:
    li r0, 0x0
    lwz r3, lbl_8049CD80
    stw r0, 0xc(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x8
    li r4, 0x0
    stw r0, 0x8(r1)
    bl GSISocketSelect
    cmpwi r3, -0x1
    beq lbl_80274F54
    cmpwi r3, 0x1
    bne lbl_80275160
    lwz r0, 0x8(r1)
    cmpwi r0, 0x1
    bne lbl_80275160
lbl_80274F54:
    lwz r3, lbl_8049CD80
    li r0, 0x1
    stw r0, lbl_8049DC3C
    cmpwi r3, -0x1
    beq lbl_80274F78
    li r4, 0x2
    bl shutdown
    lwz r3, lbl_8049CD80
    bl closesocket
lbl_80274F78:
    lwz r3, lbl_8049DC48
    li r0, -0x1
    stw r0, lbl_8049CD80
    cmpwi r3, 0x0
    beq lbl_80275138
    bl fn_80253658
    lis r16, lbl_8036B240@ha
    lis r14, lbl_8036B478@ha
    addi r16, r16, lbl_8036B240@l
    subi r15, r3, 0x1
    addi r14, r14, lbl_8036B478@l
    li r17, 0x3
    b lbl_80275120
lbl_80274FAC:
    lbz r25, 0x0(r14)
    mr r3, r16
    lbz r24, 0x1(r14)
    addi r5, r1, 0x70
    lbz r23, 0x2(r14)
    li r4, 0x0
    lbz r22, 0x3(r14)
    lbz r21, 0x4(r14)
    lbz r20, 0x5(r14)
    lbz r19, 0x6(r14)
    lbz r18, 0x7(r14)
    lbz r12, 0x8(r14)
    lbz r11, 0x9(r14)
    lbz r10, 0xa(r14)
    lbz r9, 0xb(r14)
    lbz r8, 0xc(r14)
    lbz r7, 0xd(r14)
    lbz r6, 0xe(r14)
    lbz r0, 0xf(r14)
    stb r25, 0x70(r1)
    stb r24, 0x71(r1)
    stb r23, 0x72(r1)
    stb r22, 0x73(r1)
    stb r21, 0x74(r1)
    stb r20, 0x75(r1)
    stb r19, 0x76(r1)
    stb r18, 0x77(r1)
    stb r12, 0x78(r1)
    stb r11, 0x79(r1)
    stb r10, 0x7a(r1)
    stb r9, 0x7b(r1)
    stb r8, 0x7c(r1)
    stb r7, 0x7d(r1)
    stb r6, 0x7e(r1)
    stb r0, 0x7f(r1)
    stw r16, lbl_8049CD84
    mtctr r17
lbl_80275040:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x0(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x0(r5)
    bne lbl_80275064
    mr r3, r16
lbl_80275064:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x1(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x1(r5)
    bne lbl_80275088
    mr r3, r16
lbl_80275088:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x2(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x2(r5)
    bne lbl_802750AC
    mr r3, r16
lbl_802750AC:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x3(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x3(r5)
    bne lbl_802750D0
    mr r3, r16
lbl_802750D0:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x4(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x4(r5)
    bne lbl_802750F4
    mr r3, r16
lbl_802750F4:
    addi r5, r5, 0x5
    addi r4, r4, 0x4
    bdnz lbl_80275040
    mr r3, r15
    addi r7, r1, 0x70
    li r4, 0x0
    li r6, 0x0
    li r5, 0x0
    li r8, 0x0
    bl CallReqCallback
    subi r15, r15, 0x1
lbl_80275120:
    cmpwi r15, 0x0
    bge lbl_80274FAC
    lwz r3, lbl_8049DC48
    bl fn_802535C4
    li r0, 0x0
    stw r0, lbl_8049DC48
lbl_80275138:
    lwz r3, lbl_8049DC30
    cmpwi r3, 0x0
    beq lbl_80275158
    bl fn_80256C70
    li r0, 0x0
    stw r0, lbl_8049DC30
    stw r0, lbl_8049DC34
    stw r0, lbl_8049DC38
lbl_80275158:
    li r3, 0x3
    b lbl_80276428
lbl_80275160:
    cmpwi r3, 0x0
    bne lbl_80275394
    bl fn_802565F0
    lwz r4, lbl_8049DC44
    lwz r0, lbl_8049CD88
    subf r3, r4, r3
    cmplw r3, r0
    ble lbl_8027538C
    lwz r3, lbl_8049CD80
    li r0, 0x1
    stw r0, lbl_8049DC3C
    cmpwi r3, -0x1
    beq lbl_802751A4
    li r4, 0x2
    bl shutdown
    lwz r3, lbl_8049CD80
    bl closesocket
lbl_802751A4:
    lwz r3, lbl_8049DC48
    li r0, -0x1
    stw r0, lbl_8049CD80
    cmpwi r3, 0x0
    beq lbl_80275364
    bl fn_80253658
    lis r16, lbl_8036B240@ha
    lis r14, lbl_8036B478@ha
    addi r16, r16, lbl_8036B240@l
    subi r15, r3, 0x1
    addi r14, r14, lbl_8036B478@l
    li r17, 0x3
    b lbl_8027534C
lbl_802751D8:
    lbz r25, 0x0(r14)
    mr r3, r16
    lbz r24, 0x1(r14)
    addi r5, r1, 0x60
    lbz r23, 0x2(r14)
    li r4, 0x0
    lbz r22, 0x3(r14)
    lbz r21, 0x4(r14)
    lbz r20, 0x5(r14)
    lbz r19, 0x6(r14)
    lbz r18, 0x7(r14)
    lbz r12, 0x8(r14)
    lbz r11, 0x9(r14)
    lbz r10, 0xa(r14)
    lbz r9, 0xb(r14)
    lbz r8, 0xc(r14)
    lbz r7, 0xd(r14)
    lbz r6, 0xe(r14)
    lbz r0, 0xf(r14)
    stb r25, 0x60(r1)
    stb r24, 0x61(r1)
    stb r23, 0x62(r1)
    stb r22, 0x63(r1)
    stb r21, 0x64(r1)
    stb r20, 0x65(r1)
    stb r19, 0x66(r1)
    stb r18, 0x67(r1)
    stb r12, 0x68(r1)
    stb r11, 0x69(r1)
    stb r10, 0x6a(r1)
    stb r9, 0x6b(r1)
    stb r8, 0x6c(r1)
    stb r7, 0x6d(r1)
    stb r6, 0x6e(r1)
    stb r0, 0x6f(r1)
    stw r16, lbl_8049CD84
    mtctr r17
lbl_8027526C:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x0(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x0(r5)
    bne lbl_80275290
    mr r3, r16
lbl_80275290:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x1(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x1(r5)
    bne lbl_802752B4
    mr r3, r16
lbl_802752B4:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x2(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x2(r5)
    bne lbl_802752D8
    mr r3, r16
lbl_802752D8:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x3(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x3(r5)
    bne lbl_802752FC
    mr r3, r16
lbl_802752FC:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x4(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x4(r5)
    bne lbl_80275320
    mr r3, r16
lbl_80275320:
    addi r5, r5, 0x5
    addi r4, r4, 0x4
    bdnz lbl_8027526C
    mr r3, r15
    addi r7, r1, 0x60
    li r4, 0x0
    li r6, 0x0
    li r5, 0x0
    li r8, 0x0
    bl CallReqCallback
    subi r15, r15, 0x1
lbl_8027534C:
    cmpwi r15, 0x0
    bge lbl_802751D8
    lwz r3, lbl_8049DC48
    bl fn_802535C4
    li r0, 0x0
    stw r0, lbl_8049DC48
lbl_80275364:
    lwz r3, lbl_8049DC30
    cmpwi r3, 0x0
    beq lbl_80275384
    bl fn_80256C70
    li r0, 0x0
    stw r0, lbl_8049DC30
    stw r0, lbl_8049DC34
    stw r0, lbl_8049DC38
lbl_80275384:
    li r3, 0x7
    b lbl_80276428
lbl_8027538C:
    li r3, 0x6
    b lbl_80276428
lbl_80275394:
    li r0, 0x3
    stw r0, lbl_8049DC3C
lbl_8027539C:
    lwz r3, lbl_8049CD80
    bl fn_80255E4C
    cmpwi r3, 0x0
    bne lbl_802755D8
    bl fn_802565F0
    lwz r4, lbl_8049DC44
    lwz r0, lbl_8049CD88
    subf r3, r4, r3
    cmplw r3, r0
    ble lbl_802755D0
    lwz r3, lbl_8049CD80
    li r0, 0x1
    stw r0, lbl_8049DC3C
    cmpwi r3, -0x1
    beq lbl_802753E8
    li r4, 0x2
    bl shutdown
    lwz r3, lbl_8049CD80
    bl closesocket
lbl_802753E8:
    lwz r3, lbl_8049DC48
    li r0, -0x1
    stw r0, lbl_8049CD80
    cmpwi r3, 0x0
    beq lbl_802755A8
    bl fn_80253658
    lis r16, lbl_8036B240@ha
    lis r14, lbl_8036B478@ha
    addi r16, r16, lbl_8036B240@l
    subi r15, r3, 0x1
    addi r14, r14, lbl_8036B478@l
    li r17, 0x3
    b lbl_80275590
lbl_8027541C:
    lbz r25, 0x0(r14)
    mr r3, r16
    lbz r24, 0x1(r14)
    addi r5, r1, 0x50
    lbz r23, 0x2(r14)
    li r4, 0x0
    lbz r22, 0x3(r14)
    lbz r21, 0x4(r14)
    lbz r20, 0x5(r14)
    lbz r19, 0x6(r14)
    lbz r18, 0x7(r14)
    lbz r12, 0x8(r14)
    lbz r11, 0x9(r14)
    lbz r10, 0xa(r14)
    lbz r9, 0xb(r14)
    lbz r8, 0xc(r14)
    lbz r7, 0xd(r14)
    lbz r6, 0xe(r14)
    lbz r0, 0xf(r14)
    stb r25, 0x50(r1)
    stb r24, 0x51(r1)
    stb r23, 0x52(r1)
    stb r22, 0x53(r1)
    stb r21, 0x54(r1)
    stb r20, 0x55(r1)
    stb r19, 0x56(r1)
    stb r18, 0x57(r1)
    stb r12, 0x58(r1)
    stb r11, 0x59(r1)
    stb r10, 0x5a(r1)
    stb r9, 0x5b(r1)
    stb r8, 0x5c(r1)
    stb r7, 0x5d(r1)
    stb r6, 0x5e(r1)
    stb r0, 0x5f(r1)
    stw r16, lbl_8049CD84
    mtctr r17
lbl_802754B0:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x0(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x0(r5)
    bne lbl_802754D4
    mr r3, r16
lbl_802754D4:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x1(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x1(r5)
    bne lbl_802754F8
    mr r3, r16
lbl_802754F8:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x2(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x2(r5)
    bne lbl_8027551C
    mr r3, r16
lbl_8027551C:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x3(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x3(r5)
    bne lbl_80275540
    mr r3, r16
lbl_80275540:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x4(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x4(r5)
    bne lbl_80275564
    mr r3, r16
lbl_80275564:
    addi r5, r5, 0x5
    addi r4, r4, 0x4
    bdnz lbl_802754B0
    mr r3, r15
    addi r7, r1, 0x50
    li r4, 0x0
    li r6, 0x0
    li r5, 0x0
    li r8, 0x0
    bl CallReqCallback
    subi r15, r15, 0x1
lbl_80275590:
    cmpwi r15, 0x0
    bge lbl_8027541C
    lwz r3, lbl_8049DC48
    bl fn_802535C4
    li r0, 0x0
    stw r0, lbl_8049DC48
lbl_802755A8:
    lwz r3, lbl_8049DC30
    cmpwi r3, 0x0
    beq lbl_802755C8
    bl fn_80256C70
    li r0, 0x0
    stw r0, lbl_8049DC30
    stw r0, lbl_8049DC34
    stw r0, lbl_8049DC38
lbl_802755C8:
    li r3, 0x7
    b lbl_80276428
lbl_802755D0:
    li r3, 0x6
    b lbl_80276428
lbl_802755D8:
    lwz r5, lbl_8049DC38
    li r6, 0x0
    lwz r4, lbl_8049DC30
    lwz r0, lbl_8049DC34
    add r4, r4, r5
    lwz r3, lbl_8049CD80
    subf r5, r5, r0
    bl recv
    cmpwi r3, -0x1
    bne lbl_8027580C
    lwz r3, lbl_8049CD80
    li r0, 0x1
    stw r0, lbl_8049DC3C
    cmpwi r3, -0x1
    beq lbl_80275624
    li r4, 0x2
    bl shutdown
    lwz r3, lbl_8049CD80
    bl closesocket
lbl_80275624:
    lwz r3, lbl_8049DC48
    li r0, -0x1
    stw r0, lbl_8049CD80
    cmpwi r3, 0x0
    beq lbl_802757E4
    bl fn_80253658
    lis r16, lbl_8036B240@ha
    lis r14, lbl_8036B478@ha
    addi r16, r16, lbl_8036B240@l
    subi r15, r3, 0x1
    addi r14, r14, lbl_8036B478@l
    li r17, 0x3
    b lbl_802757CC
lbl_80275658:
    lbz r25, 0x0(r14)
    mr r3, r16
    lbz r24, 0x1(r14)
    addi r5, r1, 0x40
    lbz r23, 0x2(r14)
    li r4, 0x0
    lbz r22, 0x3(r14)
    lbz r21, 0x4(r14)
    lbz r20, 0x5(r14)
    lbz r19, 0x6(r14)
    lbz r18, 0x7(r14)
    lbz r12, 0x8(r14)
    lbz r11, 0x9(r14)
    lbz r10, 0xa(r14)
    lbz r9, 0xb(r14)
    lbz r8, 0xc(r14)
    lbz r7, 0xd(r14)
    lbz r6, 0xe(r14)
    lbz r0, 0xf(r14)
    stb r25, 0x40(r1)
    stb r24, 0x41(r1)
    stb r23, 0x42(r1)
    stb r22, 0x43(r1)
    stb r21, 0x44(r1)
    stb r20, 0x45(r1)
    stb r19, 0x46(r1)
    stb r18, 0x47(r1)
    stb r12, 0x48(r1)
    stb r11, 0x49(r1)
    stb r10, 0x4a(r1)
    stb r9, 0x4b(r1)
    stb r8, 0x4c(r1)
    stb r7, 0x4d(r1)
    stb r6, 0x4e(r1)
    stb r0, 0x4f(r1)
    stw r16, lbl_8049CD84
    mtctr r17
lbl_802756EC:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x0(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x0(r5)
    bne lbl_80275710
    mr r3, r16
lbl_80275710:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x1(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x1(r5)
    bne lbl_80275734
    mr r3, r16
lbl_80275734:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x2(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x2(r5)
    bne lbl_80275758
    mr r3, r16
lbl_80275758:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x3(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x3(r5)
    bne lbl_8027577C
    mr r3, r16
lbl_8027577C:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x4(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x4(r5)
    bne lbl_802757A0
    mr r3, r16
lbl_802757A0:
    addi r5, r5, 0x5
    addi r4, r4, 0x4
    bdnz lbl_802756EC
    mr r3, r15
    addi r7, r1, 0x40
    li r4, 0x0
    li r6, 0x0
    li r5, 0x0
    li r8, 0x0
    bl CallReqCallback
    subi r15, r15, 0x1
lbl_802757CC:
    cmpwi r15, 0x0
    bge lbl_80275658
    lwz r3, lbl_8049DC48
    bl fn_802535C4
    li r0, 0x0
    stw r0, lbl_8049DC48
lbl_802757E4:
    lwz r3, lbl_8049DC30
    cmpwi r3, 0x0
    beq lbl_80275804
    bl fn_80256C70
    li r0, 0x0
    stw r0, lbl_8049DC30
    stw r0, lbl_8049DC34
    stw r0, lbl_8049DC38
lbl_80275804:
    li r3, 0x3
    b lbl_80276428
lbl_8027580C:
    lwz r4, lbl_8049DC38
    lwz r0, lbl_8049DC34
    add r5, r4, r3
    subf r0, r3, r0
    stw r5, lbl_8049DC38
    cmpwi r5, 0x26
    stw r0, lbl_8049DC34
    bge lbl_80275834
    li r3, 0x6
    b lbl_80276428
lbl_80275834:
    lwz r3, lbl_8049DC30
    li r4, 0x0
    lis r6, lbl_8036B230@ha
    li r0, 0x4
    stbx r4, r3, r5
    addi r6, r6, lbl_8036B230@l
    lwz r4, lbl_8049DC38
    lwz r3, lbl_8049DC30
    stw r0, lbl_8049DC3C
    stw r6, lbl_8049CD84
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_80275890
lbl_80275868:
    lbz r4, 0x0(r3)
    lbz r0, 0x0(r6)
    xor r0, r4, r0
    stb r0, 0x0(r3)
    lbzu r0, 0x1(r6)
    extsb. r0, r0
    bne lbl_80275888
    lwz r6, lbl_8049CD84
lbl_80275888:
    addi r3, r3, 0x1
    bdnz lbl_80275868
lbl_80275890:
    lis r16, lbl_8036B30C@ha
    lbzu r17, lbl_8036B30C@l(r16)
    lis r3, lbl_8036B338@ha
    addi r4, r1, 0x14f
    lbz r15, 0x19(r16)
    addi r3, r3, lbl_8036B338@l
    lbz r0, 0x17(r16)
    subi r3, r3, 0x1
    stw r15, 0x298(r1)
    lbz r15, 0x1a(r16)
    stb r0, 0xbb(r1)
    lwz r0, 0x298(r1)
    stw r15, 0x254(r1)
    lbz r15, 0x1b(r16)
    stb r0, 0xbd(r1)
    lwz r0, 0x254(r1)
    stw r15, 0x258(r1)
    lbz r15, 0x1c(r16)
    stb r0, 0xbe(r1)
    lwz r0, 0x258(r1)
    stw r15, 0x25c(r1)
    lbz r15, 0x1d(r16)
    stb r0, 0xbf(r1)
    lwz r0, 0x25c(r1)
    stw r15, 0x260(r1)
    lbz r15, 0x1e(r16)
    stb r0, 0xc0(r1)
    lwz r0, 0x260(r1)
    stw r15, 0x264(r1)
    lbz r15, 0x1f(r16)
    stb r0, 0xc1(r1)
    lwz r0, 0x264(r1)
    stw r15, 0x268(r1)
    lbz r15, 0x20(r16)
    stb r0, 0xc2(r1)
    lwz r0, 0x268(r1)
    stw r15, 0x26c(r1)
    lbz r15, 0x21(r16)
    stb r0, 0xc3(r1)
    lwz r0, 0x26c(r1)
    stw r15, 0x270(r1)
    lbz r15, 0x22(r16)
    stb r0, 0xc4(r1)
    lwz r0, 0x270(r1)
    stw r15, 0x274(r1)
    lbz r15, 0x23(r16)
    stb r0, 0xc5(r1)
    lwz r0, 0x274(r1)
    stw r15, 0x278(r1)
    lbz r15, 0x24(r16)
    stb r0, 0xc6(r1)
    lwz r0, 0x278(r1)
    stw r15, 0x27c(r1)
    lbz r15, 0x25(r16)
    stb r0, 0xc7(r1)
    lwz r0, 0x27c(r1)
    stw r15, 0x280(r1)
    lbz r15, 0x26(r16)
    stb r0, 0xc8(r1)
    lwz r0, 0x280(r1)
    stw r15, 0x284(r1)
    lbz r15, 0x27(r16)
    stb r0, 0xc9(r1)
    lwz r0, 0x284(r1)
    stw r15, 0x288(r1)
    lbz r15, 0x28(r16)
    stb r0, 0xca(r1)
    lwz r0, 0x288(r1)
    stw r15, 0x28c(r1)
    lbz r15, 0x29(r16)
    stb r0, 0xcb(r1)
    lwz r0, 0x28c(r1)
    stw r15, 0x290(r1)
    lbz r15, 0x2a(r16)
    stb r0, 0xcc(r1)
    lwz r0, 0x290(r1)
    stw r15, 0x294(r1)
    lbz r5, 0x16(r16)
    stb r0, 0xcd(r1)
    lwz r0, 0x294(r1)
    lbz r31, 0x1(r16)
    lbz r18, 0x2(r16)
    lbz r19, 0x3(r16)
    lbz r20, 0x4(r16)
    lbz r21, 0x5(r16)
    lbz r22, 0x6(r16)
    lbz r23, 0x7(r16)
    lbz r24, 0x8(r16)
    lbz r25, 0x9(r16)
    lbz r26, 0xa(r16)
    lbz r27, 0xb(r16)
    lbz r28, 0xc(r16)
    lbz r29, 0xd(r16)
    lbz r30, 0xe(r16)
    lbz r12, 0xf(r16)
    lbz r11, 0x10(r16)
    lbz r10, 0x11(r16)
    lbz r9, 0x12(r16)
    lbz r8, 0x13(r16)
    lbz r7, 0x14(r16)
    lbz r6, 0x15(r16)
    lbz r14, 0x18(r16)
    lbz r15, 0x2b(r16)
    lwz r16, lbl_8049DC40
    stb r5, 0xba(r1)
    lis r5, lbl_8036B300@ha
    stb r0, 0xce(r1)
    li r0, 0x63
    stb r0, lbl_8036B300@l(r5)
    li r0, 0x80
    stb r31, 0xa5(r1)
    lwz r31, lbl_8049DC30
    stb r17, 0xa4(r1)
    stw r16, 0x250(r1)
    stb r18, 0xa6(r1)
    stb r19, 0xa7(r1)
    stb r20, 0xa8(r1)
    stb r21, 0xa9(r1)
    stb r22, 0xaa(r1)
    stb r23, 0xab(r1)
    stb r24, 0xac(r1)
    stb r25, 0xad(r1)
    stb r26, 0xae(r1)
    stb r27, 0xaf(r1)
    stb r28, 0xb0(r1)
    stb r29, 0xb1(r1)
    stb r30, 0xb2(r1)
    stb r12, 0xb3(r1)
    stb r11, 0xb4(r1)
    stb r10, 0xb5(r1)
    stb r9, 0xb6(r1)
    stb r8, 0xb7(r1)
    stb r7, 0xb8(r1)
    stb r6, 0xb9(r1)
    stb r14, 0xbc(r1)
    stb r15, 0xcf(r1)
    mtctr r0
lbl_80275AB4:
    lbz r5, 0x1(r3)
    lbzu r0, 0x2(r3)
    stb r5, 0x1(r4)
    stbu r0, 0x2(r4)
    bdnz lbl_80275AB4
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8036B300@ha
    addi r3, r1, 0x150
    xori r0, r0, 0x1
    addi r4, r4, lbl_8036B300@l
    stw r0, lbl_8049DC4C
    bl strcat
    addi r3, r1, 0x150
    la r4, lbl_8049CD98
    bl strcat
    mr r3, r31
    addi r4, r1, 0x150
    bl strstr
    cmpwi r3, 0x0
    mr r14, r3
    bne lbl_80275B10
    li r14, 0x0
    b lbl_80275B64
lbl_80275B10:
    addi r3, r1, 0x150
    bl strlen
    lwz r0, lbl_8049DC4C
    lis r4, lbl_8040B630@ha
    addi r4, r4, lbl_8040B630@l
    add r3, r14, r3
    slwi r0, r0, 8
    add r14, r4, r0
    mr r4, r14
    b lbl_80275B48
lbl_80275B38:
    lbz r0, 0x0(r3)
    addi r3, r3, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
lbl_80275B48:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_80275B5C
    cmpwi r0, 0x5c
    bne lbl_80275B38
lbl_80275B5C:
    li r0, 0x0
    stb r0, 0x0(r4)
lbl_80275B64:
    cmpwi r14, 0x0
    bne lbl_80275B7C
    lwz r3, lbl_8049CD80
    bl closesocket
    li r15, 0x5
    b lbl_80275D58
lbl_80275B7C:
    mr r3, r14
    bl strlen
    cmpwi cr6, r3, 0x0
    li r5, 0x0
    li r4, 0x0
    ble cr6, lbl_80275CA0
    cmpwi r3, 0x8
    subi r8, r3, 0x8
    ble lbl_80275C6C
    li r7, 0x0
    blt cr6, lbl_80275BBC
    lis r6, 0x8000
    subi r0, r6, 0x2
    cmpw r3, r0
    bgt lbl_80275BBC
    li r7, 0x1
lbl_80275BBC:
    cmpwi r7, 0x0
    beq lbl_80275C6C
    addi r6, r8, 0x7
    lis r7, 0x9cd0
    srwi r6, r6, 3
    subi r0, r7, 0x6ce7
    mtctr r6
    cmpwi r8, 0x0
    ble lbl_80275C6C
lbl_80275BE0:
    mullw r7, r5, r0
    add r12, r14, r4
    lbzx r5, r14, r4
    addi r4, r4, 0x8
    lbz r6, 0x1(r12)
    extsb r5, r5
    add r7, r7, r5
    lbz r5, 0x2(r12)
    mullw r11, r7, r0
    lbz r9, 0x3(r12)
    lbz r8, 0x4(r12)
    extsb r6, r6
    extsb r10, r5
    lbz r7, 0x5(r12)
    add r5, r11, r6
    lbz r6, 0x6(r12)
    mullw r11, r5, r0
    lbz r5, 0x7(r12)
    extsb r9, r9
    extsb r8, r8
    extsb r7, r7
    extsb r6, r6
    add r10, r11, r10
    extsb r5, r5
    mullw r10, r10, r0
    add r9, r10, r9
    mullw r9, r9, r0
    add r8, r9, r8
    mullw r8, r8, r0
    add r7, r8, r7
    mullw r7, r7, r0
    add r6, r7, r6
    mullw r6, r6, r0
    add r5, r6, r5
    bdnz lbl_80275BE0
lbl_80275C6C:
    lis r6, 0x9cd0
    subf r0, r4, r3
    subi r7, r6, 0x6ce7
    add r6, r14, r4
    mtctr r0
    cmpw r4, r3
    bge lbl_80275CA0
lbl_80275C88:
    mullw r3, r5, r7
    lbz r0, 0x0(r6)
    addi r6, r6, 0x1
    extsb r0, r0
    add r5, r3, r0
    bdnz lbl_80275C88
lbl_80275CA0:
    lis r6, lbl_8040B520@ha
    addi r3, r1, 0xd0
    la r4, lbl_8049CD9C
    addi r6, r6, lbl_8040B520@l
    opword 0x4CC63182
    bl sprintf
    mr r4, r3
    addi r3, r1, 0xd0
    addi r5, r1, 0x80
    bl MD5Digest
    lis r7, lbl_8036B240@ha
    li r0, 0x2b
    addi r7, r7, lbl_8036B240@l
    addi r6, r1, 0xa4
    stw r7, lbl_8049CD84
    mr r5, r7
    mtctr r0
lbl_80275CE4:
    lbz r0, 0x1(r5)
    lbz r3, 0x0(r5)
    addi r5, r5, 0x1
    lbz r4, 0x0(r6)
    extsb. r0, r0
    xor r0, r4, r3
    stb r0, 0x0(r6)
    bne lbl_80275D08
    mr r5, r7
lbl_80275D08:
    addi r6, r6, 0x1
    bdnz lbl_80275CE4
    lis r5, lbl_8040B420@ha
    lwz r7, 0x250(r1)
    addi r3, r1, 0xd0
    addi r4, r1, 0xa4
    addi r5, r5, lbl_8040B420@l
    addi r6, r1, 0x80
    opword 0x4CC63182
    bl sprintf
    mr r4, r3
    addi r3, r1, 0xd0
    bl fn_80277C68
    cmpwi r3, 0x0
    bgt lbl_80275D54
    lwz r3, lbl_8049CD80
    bl closesocket
    li r15, 0x3
    b lbl_80275D58
lbl_80275D54:
    li r15, 0x0
lbl_80275D58:
    cmpwi r15, 0x0
    beq lbl_80275F6C
    lwz r3, lbl_8049CD80
    li r0, 0x1
    stw r0, lbl_8049DC3C
    cmpwi r3, -0x1
    beq lbl_80275D84
    li r4, 0x2
    bl shutdown
    lwz r3, lbl_8049CD80
    bl closesocket
lbl_80275D84:
    lwz r3, lbl_8049DC48
    li r0, -0x1
    stw r0, lbl_8049CD80
    cmpwi r3, 0x0
    beq lbl_80275F44
    bl fn_80253658
    lis r17, lbl_8036B240@ha
    lis r14, lbl_8036B478@ha
    addi r17, r17, lbl_8036B240@l
    subi r16, r3, 0x1
    addi r14, r14, lbl_8036B478@l
    li r18, 0x3
    b lbl_80275F2C
lbl_80275DB8:
    lbz r26, 0x0(r14)
    mr r3, r17
    lbz r25, 0x1(r14)
    addi r5, r1, 0x30
    lbz r24, 0x2(r14)
    li r4, 0x0
    lbz r23, 0x3(r14)
    lbz r22, 0x4(r14)
    lbz r21, 0x5(r14)
    lbz r20, 0x6(r14)
    lbz r19, 0x7(r14)
    lbz r12, 0x8(r14)
    lbz r11, 0x9(r14)
    lbz r10, 0xa(r14)
    lbz r9, 0xb(r14)
    lbz r8, 0xc(r14)
    lbz r7, 0xd(r14)
    lbz r6, 0xe(r14)
    lbz r0, 0xf(r14)
    stb r26, 0x30(r1)
    stb r25, 0x31(r1)
    stb r24, 0x32(r1)
    stb r23, 0x33(r1)
    stb r22, 0x34(r1)
    stb r21, 0x35(r1)
    stb r20, 0x36(r1)
    stb r19, 0x37(r1)
    stb r12, 0x38(r1)
    stb r11, 0x39(r1)
    stb r10, 0x3a(r1)
    stb r9, 0x3b(r1)
    stb r8, 0x3c(r1)
    stb r7, 0x3d(r1)
    stb r6, 0x3e(r1)
    stb r0, 0x3f(r1)
    stw r17, lbl_8049CD84
    mtctr r18
lbl_80275E4C:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x0(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x0(r5)
    bne lbl_80275E70
    mr r3, r17
lbl_80275E70:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x1(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x1(r5)
    bne lbl_80275E94
    mr r3, r17
lbl_80275E94:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x2(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x2(r5)
    bne lbl_80275EB8
    mr r3, r17
lbl_80275EB8:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x3(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x3(r5)
    bne lbl_80275EDC
    mr r3, r17
lbl_80275EDC:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x4(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x4(r5)
    bne lbl_80275F00
    mr r3, r17
lbl_80275F00:
    addi r5, r5, 0x5
    addi r4, r4, 0x4
    bdnz lbl_80275E4C
    mr r3, r16
    addi r7, r1, 0x30
    li r4, 0x0
    li r6, 0x0
    li r5, 0x0
    li r8, 0x0
    bl CallReqCallback
    subi r16, r16, 0x1
lbl_80275F2C:
    cmpwi r16, 0x0
    bge lbl_80275DB8
    lwz r3, lbl_8049DC48
    bl fn_802535C4
    li r0, 0x0
    stw r0, lbl_8049DC48
lbl_80275F44:
    lwz r3, lbl_8049DC30
    cmpwi r3, 0x0
    beq lbl_80275F64
    bl fn_80256C70
    li r0, 0x0
    stw r0, lbl_8049DC30
    stw r0, lbl_8049DC34
    stw r0, lbl_8049DC38
lbl_80275F64:
    mr r3, r15
    b lbl_80276428
lbl_80275F6C:
    lwz r5, lbl_8049DC34
    li r4, 0x4
    lwz r3, lbl_8049DC38
    li r0, 0x0
    stw r4, lbl_8049DC3C
    li r4, 0x0
    add r5, r5, r3
    lwz r3, lbl_8049DC30
    stw r5, lbl_8049DC34
    stw r0, lbl_8049DC38
    bl memset
lbl_80275F98:
    lwz r3, lbl_8049CD80
    bl fn_80255E4C
    cmpwi r3, 0x0
    bne lbl_802761D4
    bl fn_802565F0
    lwz r4, lbl_8049DC44
    lwz r0, lbl_8049CD88
    subf r3, r4, r3
    cmplw r3, r0
    ble lbl_802761CC
    lwz r3, lbl_8049CD80
    li r0, 0x1
    stw r0, lbl_8049DC3C
    cmpwi r3, -0x1
    beq lbl_80275FE4
    li r4, 0x2
    bl shutdown
    lwz r3, lbl_8049CD80
    bl closesocket
lbl_80275FE4:
    lwz r3, lbl_8049DC48
    li r0, -0x1
    stw r0, lbl_8049CD80
    cmpwi r3, 0x0
    beq lbl_802761A4
    bl fn_80253658
    lis r16, lbl_8036B240@ha
    lis r14, lbl_8036B478@ha
    addi r16, r16, lbl_8036B240@l
    subi r15, r3, 0x1
    addi r14, r14, lbl_8036B478@l
    li r17, 0x3
    b lbl_8027618C
lbl_80276018:
    lbz r25, 0x0(r14)
    mr r3, r16
    lbz r24, 0x1(r14)
    addi r5, r1, 0x20
    lbz r23, 0x2(r14)
    li r4, 0x0
    lbz r22, 0x3(r14)
    lbz r21, 0x4(r14)
    lbz r20, 0x5(r14)
    lbz r19, 0x6(r14)
    lbz r18, 0x7(r14)
    lbz r12, 0x8(r14)
    lbz r11, 0x9(r14)
    lbz r10, 0xa(r14)
    lbz r9, 0xb(r14)
    lbz r8, 0xc(r14)
    lbz r7, 0xd(r14)
    lbz r6, 0xe(r14)
    lbz r0, 0xf(r14)
    stb r25, 0x20(r1)
    stb r24, 0x21(r1)
    stb r23, 0x22(r1)
    stb r22, 0x23(r1)
    stb r21, 0x24(r1)
    stb r20, 0x25(r1)
    stb r19, 0x26(r1)
    stb r18, 0x27(r1)
    stb r12, 0x28(r1)
    stb r11, 0x29(r1)
    stb r10, 0x2a(r1)
    stb r9, 0x2b(r1)
    stb r8, 0x2c(r1)
    stb r7, 0x2d(r1)
    stb r6, 0x2e(r1)
    stb r0, 0x2f(r1)
    stw r16, lbl_8049CD84
    mtctr r17
lbl_802760AC:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x0(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x0(r5)
    bne lbl_802760D0
    mr r3, r16
lbl_802760D0:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x1(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x1(r5)
    bne lbl_802760F4
    mr r3, r16
lbl_802760F4:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x2(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x2(r5)
    bne lbl_80276118
    mr r3, r16
lbl_80276118:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x3(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x3(r5)
    bne lbl_8027613C
    mr r3, r16
lbl_8027613C:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x4(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x4(r5)
    bne lbl_80276160
    mr r3, r16
lbl_80276160:
    addi r5, r5, 0x5
    addi r4, r4, 0x4
    bdnz lbl_802760AC
    mr r3, r15
    addi r7, r1, 0x20
    li r4, 0x0
    li r6, 0x0
    li r5, 0x0
    li r8, 0x0
    bl CallReqCallback
    subi r15, r15, 0x1
lbl_8027618C:
    cmpwi r15, 0x0
    bge lbl_80276018
    lwz r3, lbl_8049DC48
    bl fn_802535C4
    li r0, 0x0
    stw r0, lbl_8049DC48
lbl_802761A4:
    lwz r3, lbl_8049DC30
    cmpwi r3, 0x0
    beq lbl_802761C4
    bl fn_80256C70
    li r0, 0x0
    stw r0, lbl_8049DC30
    stw r0, lbl_8049DC34
    stw r0, lbl_8049DC38
lbl_802761C4:
    li r3, 0x7
    b lbl_80276428
lbl_802761CC:
    li r3, 0x6
    b lbl_80276428
lbl_802761D4:
    bl fn_80277AA8
    cmpwi r3, 0x0
    mr r17, r3
    beq lbl_802763F0
    lwz r3, lbl_8049CD80
    li r0, 0x1
    stw r0, lbl_8049DC3C
    cmpwi r3, -0x1
    beq lbl_80276208
    li r4, 0x2
    bl shutdown
    lwz r3, lbl_8049CD80
    bl closesocket
lbl_80276208:
    lwz r3, lbl_8049DC48
    li r0, -0x1
    stw r0, lbl_8049CD80
    cmpwi r3, 0x0
    beq lbl_802763C8
    bl fn_80253658
    lis r16, lbl_8036B240@ha
    lis r14, lbl_8036B478@ha
    addi r16, r16, lbl_8036B240@l
    subi r15, r3, 0x1
    addi r14, r14, lbl_8036B478@l
    li r18, 0x3
    b lbl_802763B0
lbl_8027623C:
    lbz r26, 0x0(r14)
    mr r3, r16
    lbz r25, 0x1(r14)
    addi r5, r1, 0x10
    lbz r24, 0x2(r14)
    li r4, 0x0
    lbz r23, 0x3(r14)
    lbz r22, 0x4(r14)
    lbz r21, 0x5(r14)
    lbz r20, 0x6(r14)
    lbz r19, 0x7(r14)
    lbz r12, 0x8(r14)
    lbz r11, 0x9(r14)
    lbz r10, 0xa(r14)
    lbz r9, 0xb(r14)
    lbz r8, 0xc(r14)
    lbz r7, 0xd(r14)
    lbz r6, 0xe(r14)
    lbz r0, 0xf(r14)
    stb r26, 0x10(r1)
    stb r25, 0x11(r1)
    stb r24, 0x12(r1)
    stb r23, 0x13(r1)
    stb r22, 0x14(r1)
    stb r21, 0x15(r1)
    stb r20, 0x16(r1)
    stb r19, 0x17(r1)
    stb r12, 0x18(r1)
    stb r11, 0x19(r1)
    stb r10, 0x1a(r1)
    stb r9, 0x1b(r1)
    stb r8, 0x1c(r1)
    stb r7, 0x1d(r1)
    stb r6, 0x1e(r1)
    stb r0, 0x1f(r1)
    stw r16, lbl_8049CD84
    mtctr r18
lbl_802762D0:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x0(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x0(r5)
    bne lbl_802762F4
    mr r3, r16
lbl_802762F4:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x1(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x1(r5)
    bne lbl_80276318
    mr r3, r16
lbl_80276318:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x2(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x2(r5)
    bne lbl_8027633C
    mr r3, r16
lbl_8027633C:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x3(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x3(r5)
    bne lbl_80276360
    mr r3, r16
lbl_80276360:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x4(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x4(r5)
    bne lbl_80276384
    mr r3, r16
lbl_80276384:
    addi r5, r5, 0x5
    addi r4, r4, 0x4
    bdnz lbl_802762D0
    mr r3, r15
    addi r7, r1, 0x10
    li r4, 0x0
    li r6, 0x0
    li r5, 0x0
    li r8, 0x0
    bl CallReqCallback
    subi r15, r15, 0x1
lbl_802763B0:
    cmpwi r15, 0x0
    bge lbl_8027623C
    lwz r3, lbl_8049DC48
    bl fn_802535C4
    li r0, 0x0
    stw r0, lbl_8049DC48
lbl_802763C8:
    lwz r3, lbl_8049DC30
    cmpwi r3, 0x0
    beq lbl_802763E8
    bl fn_80256C70
    li r0, 0x0
    stw r0, lbl_8049DC30
    stw r0, lbl_8049DC34
    stw r0, lbl_8049DC38
lbl_802763E8:
    mr r3, r17
    b lbl_80276428
lbl_802763F0:
    lwz r6, lbl_8049DC34
    li r0, 0x0
    lwz r5, lbl_8049DC38
    li r4, 0x0
    lwz r3, lbl_8049DC30
    add r5, r6, r5
    stw r0, lbl_8049DC38
    stw r5, lbl_8049DC34
    bl memset
    li r0, 0x5
    stw r0, lbl_8049DC3C
lbl_8027641C:
    li r3, 0x0
    b lbl_80276428
lbl_80276424:
    li r3, 0x3
lbl_80276428:
    addi r11, r1, 0x2f0
    bl _restgpr_14
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

// ----------------------------------------------------------------------------
// fn_80276440
// ----------------------------------------------------------------------------
asm void fn_80276440() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_80274B0C
    mr r31, r3
    b lbl_80276470
lbl_80276460:
    bl fn_80274ECC
    mr r31, r3
    li r3, 0x5
    bl fn_80256638
lbl_80276470:
    cmpwi r31, 0x6
    beq lbl_80276460
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80276490
// ----------------------------------------------------------------------------
asm void fn_80276490() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_20
    lwz r3, lbl_8049CD80
    cmpwi r3, -0x1
    beq lbl_802764C0
    li r4, 0x2
    bl shutdown
    lwz r3, lbl_8049CD80
    bl closesocket
lbl_802764C0:
    lwz r3, lbl_8049DC48
    li r0, -0x1
    stw r0, lbl_8049CD80
    cmpwi r3, 0x0
    beq lbl_80276680
    bl fn_80253658
    lis r29, lbl_8036B240@ha
    lis r31, lbl_8036B478@ha
    addi r29, r29, lbl_8036B240@l
    subi r30, r3, 0x1
    addi r31, r31, lbl_8036B478@l
    li r28, 0x3
    b lbl_80276668
lbl_802764F4:
    lbz r20, 0x0(r31)
    mr r4, r29
    lbz r21, 0x1(r31)
    addi r5, r1, 0x8
    lbz r22, 0x2(r31)
    li r3, 0x0
    lbz r23, 0x3(r31)
    lbz r24, 0x4(r31)
    lbz r25, 0x5(r31)
    lbz r26, 0x6(r31)
    lbz r27, 0x7(r31)
    lbz r12, 0x8(r31)
    lbz r11, 0x9(r31)
    lbz r10, 0xa(r31)
    lbz r9, 0xb(r31)
    lbz r8, 0xc(r31)
    lbz r7, 0xd(r31)
    lbz r6, 0xe(r31)
    lbz r0, 0xf(r31)
    stb r20, 0x8(r1)
    stb r21, 0x9(r1)
    stb r22, 0xa(r1)
    stb r23, 0xb(r1)
    stb r24, 0xc(r1)
    stb r25, 0xd(r1)
    stb r26, 0xe(r1)
    stb r27, 0xf(r1)
    stb r12, 0x10(r1)
    stb r11, 0x11(r1)
    stb r10, 0x12(r1)
    stb r9, 0x13(r1)
    stb r8, 0x14(r1)
    stb r7, 0x15(r1)
    stb r6, 0x16(r1)
    stb r0, 0x17(r1)
    stw r29, lbl_8049CD84
    mtctr r28
lbl_80276588:
    lbz r0, 0x1(r4)
    lbz r6, 0x0(r4)
    addi r4, r4, 0x1
    lbz r7, 0x0(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x0(r5)
    bne lbl_802765AC
    mr r4, r29
lbl_802765AC:
    lbz r0, 0x1(r4)
    lbz r6, 0x0(r4)
    addi r4, r4, 0x1
    lbz r7, 0x1(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x1(r5)
    bne lbl_802765D0
    mr r4, r29
lbl_802765D0:
    lbz r0, 0x1(r4)
    lbz r6, 0x0(r4)
    addi r4, r4, 0x1
    lbz r7, 0x2(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x2(r5)
    bne lbl_802765F4
    mr r4, r29
lbl_802765F4:
    lbz r0, 0x1(r4)
    lbz r6, 0x0(r4)
    addi r4, r4, 0x1
    lbz r7, 0x3(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x3(r5)
    bne lbl_80276618
    mr r4, r29
lbl_80276618:
    lbz r0, 0x1(r4)
    lbz r6, 0x0(r4)
    addi r4, r4, 0x1
    lbz r7, 0x4(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x4(r5)
    bne lbl_8027663C
    mr r4, r29
lbl_8027663C:
    addi r5, r5, 0x5
    addi r3, r3, 0x4
    bdnz lbl_80276588
    mr r3, r30
    addi r7, r1, 0x8
    li r4, 0x0
    li r6, 0x0
    li r5, 0x0
    li r8, 0x0
    bl CallReqCallback
    subi r30, r30, 0x1
lbl_80276668:
    cmpwi r30, 0x0
    bge lbl_802764F4
    lwz r3, lbl_8049DC48
    bl fn_802535C4
    li r0, 0x0
    stw r0, lbl_8049DC48
lbl_80276680:
    lwz r3, lbl_8049DC30
    cmpwi r3, 0x0
    beq lbl_802766A0
    bl fn_80256C70
    li r0, 0x0
    stw r0, lbl_8049DC30
    stw r0, lbl_8049DC34
    stw r0, lbl_8049DC38
lbl_802766A0:
    addi r11, r1, 0x50
    bl _restgpr_20
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// fn_802766B8
// ----------------------------------------------------------------------------
asm void fn_802766B8() {
    nofralloc
    lwz r4, lbl_8049CD80
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// fn_802766D0
// ----------------------------------------------------------------------------
asm void fn_802766D0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bne lbl_802766EC
    lwz r3, lbl_8049DC20
lbl_802766EC:
    cmpwi r3, 0x0
    bne lbl_80276750
    lwz r0, lbl_8049DC24
    lis r3, lbl_8040B620@ha
    addi r31, r3, lbl_8040B620@l
    la r4, lbl_8049CDA4
    xoris r5, r0, 0x38f3
    mr r3, r31
    xori r5, r5, 0x71e6
    opword 0x4CC63182
    bl sprintf
    mr r4, r31
    b lbl_80276738
lbl_80276720:
    extsb r3, r3
    subf r0, r4, r31
    add r3, r3, r0
    addi r0, r3, 0x11
    stb r0, 0x0(r31)
    addi r31, r31, 0x1
lbl_80276738:
    lbz r3, 0x0(r31)
    extsb. r0, r3
    bne lbl_80276720
    lis r3, lbl_8040B620@ha
    addi r3, r3, lbl_8040B620@l
    b lbl_80276754
lbl_80276750:
    addi r3, r3, 0x10
lbl_80276754:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80276768
// ----------------------------------------------------------------------------
asm void fn_80276768() {
    nofralloc
    stwu r1, -0x200(r1)
    mflr r0
    stw r0, 0x204(r1)
    addi r11, r1, 0x200
    bl _savegpr_14
    lis r8, lbl_80341430@ha
    lbzu r0, lbl_80341430@l(r8)
    mr r29, r3
    stw r5, 0x8(r1)
    lbz r3, 0x17(r8)
    mr r30, r6
    stw r0, 0x170(r1)
    mr r31, r7
    lbz r0, 0x1(r8)
    lis r9, lbl_8036B240@ha
    addi r9, r9, lbl_8036B240@l
    lbz r18, 0x6(r8)
    stw r0, 0x174(r1)
    mr r15, r9
    lbz r0, 0x2(r8)
    addi r16, r1, 0x4c
    lbz r19, 0x7(r8)
    li r17, 0x0
    stw r0, 0x178(r1)
    lbz r0, 0x3(r8)
    lbz r20, 0x8(r8)
    stw r0, 0x17c(r1)
    lbz r0, 0x4(r8)
    lbz r21, 0x9(r8)
    stw r0, 0x180(r1)
    lbz r0, 0x5(r8)
    lbz r22, 0xa(r8)
    stw r0, 0x184(r1)
    lbz r0, 0x19(r8)
    lbz r23, 0xb(r8)
    stw r0, 0x1ac(r1)
    lbz r0, 0x1a(r8)
    stb r3, 0x63(r1)
    lwz r3, 0x1ac(r1)
    stw r0, 0x188(r1)
    lbz r0, 0x1b(r8)
    stb r3, 0x65(r1)
    lwz r3, 0x188(r1)
    stw r0, 0x18c(r1)
    lbz r0, 0x1c(r8)
    stb r3, 0x66(r1)
    lwz r3, 0x18c(r1)
    stw r0, 0x190(r1)
    lbz r0, 0x1d(r8)
    stb r3, 0x67(r1)
    lwz r3, 0x190(r1)
    stw r0, 0x194(r1)
    lbz r0, 0x1e(r8)
    lbz r24, 0xc(r8)
    stw r0, 0x198(r1)
    lbz r0, 0x1f(r8)
    lbz r25, 0xd(r8)
    stw r0, 0x19c(r1)
    lbz r0, 0x20(r8)
    lbz r26, 0xe(r8)
    stw r0, 0x1a0(r1)
    lbz r0, 0x21(r8)
    lbz r27, 0xf(r8)
    stw r0, 0x1a4(r1)
    lbz r0, 0x22(r8)
    lbz r28, 0x10(r8)
    lbz r12, 0x11(r8)
    lbz r11, 0x12(r8)
    lbz r10, 0x13(r8)
    lbz r7, 0x14(r8)
    lbz r6, 0x15(r8)
    lbz r5, 0x16(r8)
    lbz r14, 0x18(r8)
    stw r0, 0x1a8(r1)
    lbz r0, 0x23(r8)
    lwz r8, 0x170(r1)
    stb r3, 0x68(r1)
    lwz r3, 0x194(r1)
    stb r8, 0x4c(r1)
    lwz r8, 0x174(r1)
    stb r3, 0x69(r1)
    lwz r3, 0x198(r1)
    stb r8, 0x4d(r1)
    lwz r8, 0x178(r1)
    stb r3, 0x6a(r1)
    lwz r3, 0x19c(r1)
    stb r8, 0x4e(r1)
    lwz r8, 0x17c(r1)
    stb r3, 0x6b(r1)
    lwz r3, 0x1a0(r1)
    stb r8, 0x4f(r1)
    lwz r8, 0x180(r1)
    stb r3, 0x6c(r1)
    lwz r3, 0x1a4(r1)
    stb r8, 0x50(r1)
    lwz r8, 0x184(r1)
    stb r3, 0x6d(r1)
    lwz r3, 0x1a8(r1)
    stb r0, 0x6f(r1)
    li r0, 0x7
    stb r8, 0x51(r1)
    stb r18, 0x52(r1)
    stb r19, 0x53(r1)
    stb r20, 0x54(r1)
    stb r21, 0x55(r1)
    stb r22, 0x56(r1)
    stb r23, 0x57(r1)
    stb r24, 0x58(r1)
    stb r25, 0x59(r1)
    stb r26, 0x5a(r1)
    stb r27, 0x5b(r1)
    stb r28, 0x5c(r1)
    stb r12, 0x5d(r1)
    stb r11, 0x5e(r1)
    stb r10, 0x5f(r1)
    stb r7, 0x60(r1)
    stb r6, 0x61(r1)
    stb r5, 0x62(r1)
    stb r14, 0x64(r1)
    stb r3, 0x6e(r1)
    stw r9, lbl_8049CD84
    mtctr r0
lbl_80276950:
    lbz r0, 0x1(r9)
    lbz r3, 0x0(r9)
    addi r9, r9, 0x1
    lbz r5, 0x0(r16)
    extsb. r0, r0
    xor r0, r5, r3
    stb r0, 0x0(r16)
    bne lbl_80276974
    mr r9, r15
lbl_80276974:
    lbz r0, 0x1(r9)
    lbz r3, 0x0(r9)
    addi r9, r9, 0x1
    lbz r5, 0x1(r16)
    extsb. r0, r0
    xor r0, r5, r3
    stb r0, 0x1(r16)
    bne lbl_80276998
    mr r9, r15
lbl_80276998:
    lbz r0, 0x1(r9)
    lbz r3, 0x0(r9)
    addi r9, r9, 0x1
    lbz r5, 0x2(r16)
    extsb. r0, r0
    xor r0, r5, r3
    stb r0, 0x2(r16)
    bne lbl_802769BC
    mr r9, r15
lbl_802769BC:
    lbz r0, 0x1(r9)
    lbz r3, 0x0(r9)
    addi r9, r9, 0x1
    lbz r5, 0x3(r16)
    extsb. r0, r0
    xor r0, r5, r3
    stb r0, 0x3(r16)
    bne lbl_802769E0
    mr r9, r15
lbl_802769E0:
    lbz r0, 0x1(r9)
    lbz r3, 0x0(r9)
    addi r9, r9, 0x1
    lbz r5, 0x4(r16)
    extsb. r0, r0
    xor r0, r5, r3
    stb r0, 0x4(r16)
    bne lbl_80276A04
    mr r9, r15
lbl_80276A04:
    addi r16, r16, 0x5
    addi r17, r17, 0x4
    bdnz lbl_80276950
    lwz r6, 0x8(r1)
    mr r5, r4
    mr r7, r29
    addi r3, r1, 0x70
    addi r4, r1, 0x4c
    opword 0x4CC63182
    bl sprintf
    lis r20, lbl_8036B438@ha
    lbzu r19, lbl_8036B438@l(r20)
    lwz r0, lbl_8049CD80
    li r21, 0x0
    lbz r18, 0x1(r20)
    cmpwi r0, -0x1
    lbz r17, 0x2(r20)
    lbz r16, 0x3(r20)
    lbz r15, 0x4(r20)
    lbz r14, 0x5(r20)
    lbz r12, 0x6(r20)
    lbz r11, 0x7(r20)
    lbz r10, 0x8(r20)
    lbz r9, 0x9(r20)
    lbz r8, 0xa(r20)
    lbz r7, 0xb(r20)
    lbz r6, 0xc(r20)
    lbz r5, 0xd(r20)
    lbz r4, 0xe(r20)
    lbz r0, 0xf(r20)
    stb r19, 0x10(r1)
    stb r18, 0x11(r1)
    stb r17, 0x12(r1)
    stb r16, 0x13(r1)
    stb r15, 0x14(r1)
    stb r14, 0x15(r1)
    stb r12, 0x16(r1)
    stb r11, 0x17(r1)
    stb r10, 0x18(r1)
    stb r9, 0x19(r1)
    stb r8, 0x1a(r1)
    stb r7, 0x1b(r1)
    stb r6, 0x1c(r1)
    stb r5, 0x1d(r1)
    stb r4, 0x1e(r1)
    stb r0, 0x1f(r1)
    beq lbl_80276AD0
    mr r4, r3
    addi r3, r1, 0x70
    bl fn_80277C68
    mr r21, r3
lbl_80276AD0:
    cmpwi r21, 0x0
    bgt lbl_80276DE0
    lwz r3, lbl_8049CD80
    cmpwi r3, -0x1
    beq lbl_80276AF4
    li r4, 0x2
    bl shutdown
    lwz r3, lbl_8049CD80
    bl closesocket
lbl_80276AF4:
    lwz r3, lbl_8049DC48
    li r0, -0x1
    stw r0, lbl_8049CD80
    cmpwi r3, 0x0
    beq lbl_80276CB4
    bl fn_80253658
    lis r16, lbl_8036B240@ha
    lis r14, lbl_8036B478@ha
    addi r16, r16, lbl_8036B240@l
    subi r15, r3, 0x1
    addi r14, r14, lbl_8036B478@l
    li r17, 0x3
    b lbl_80276C9C
lbl_80276B28:
    lbz r25, 0x0(r14)
    mr r4, r16
    lbz r24, 0x1(r14)
    addi r5, r1, 0x20
    lbz r23, 0x2(r14)
    li r3, 0x0
    lbz r22, 0x3(r14)
    lbz r21, 0x4(r14)
    lbz r20, 0x5(r14)
    lbz r19, 0x6(r14)
    lbz r18, 0x7(r14)
    lbz r12, 0x8(r14)
    lbz r11, 0x9(r14)
    lbz r10, 0xa(r14)
    lbz r9, 0xb(r14)
    lbz r8, 0xc(r14)
    lbz r7, 0xd(r14)
    lbz r6, 0xe(r14)
    lbz r0, 0xf(r14)
    stb r25, 0x20(r1)
    stb r24, 0x21(r1)
    stb r23, 0x22(r1)
    stb r22, 0x23(r1)
    stb r21, 0x24(r1)
    stb r20, 0x25(r1)
    stb r19, 0x26(r1)
    stb r18, 0x27(r1)
    stb r12, 0x28(r1)
    stb r11, 0x29(r1)
    stb r10, 0x2a(r1)
    stb r9, 0x2b(r1)
    stb r8, 0x2c(r1)
    stb r7, 0x2d(r1)
    stb r6, 0x2e(r1)
    stb r0, 0x2f(r1)
    stw r16, lbl_8049CD84
    mtctr r17
lbl_80276BBC:
    lbz r0, 0x1(r4)
    lbz r6, 0x0(r4)
    addi r4, r4, 0x1
    lbz r7, 0x0(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x0(r5)
    bne lbl_80276BE0
    mr r4, r16
lbl_80276BE0:
    lbz r0, 0x1(r4)
    lbz r6, 0x0(r4)
    addi r4, r4, 0x1
    lbz r7, 0x1(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x1(r5)
    bne lbl_80276C04
    mr r4, r16
lbl_80276C04:
    lbz r0, 0x1(r4)
    lbz r6, 0x0(r4)
    addi r4, r4, 0x1
    lbz r7, 0x2(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x2(r5)
    bne lbl_80276C28
    mr r4, r16
lbl_80276C28:
    lbz r0, 0x1(r4)
    lbz r6, 0x0(r4)
    addi r4, r4, 0x1
    lbz r7, 0x3(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x3(r5)
    bne lbl_80276C4C
    mr r4, r16
lbl_80276C4C:
    lbz r0, 0x1(r4)
    lbz r6, 0x0(r4)
    addi r4, r4, 0x1
    lbz r7, 0x4(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x4(r5)
    bne lbl_80276C70
    mr r4, r16
lbl_80276C70:
    addi r5, r5, 0x5
    addi r3, r3, 0x4
    bdnz lbl_80276BBC
    mr r3, r15
    addi r7, r1, 0x20
    li r4, 0x0
    li r6, 0x0
    li r5, 0x0
    li r8, 0x0
    bl CallReqCallback
    subi r15, r15, 0x1
lbl_80276C9C:
    cmpwi r15, 0x0
    bge lbl_80276B28
    lwz r3, lbl_8049DC48
    bl fn_802535C4
    li r0, 0x0
    stw r0, lbl_8049DC48
lbl_80276CB4:
    lwz r3, lbl_8049DC30
    cmpwi r3, 0x0
    beq lbl_80276CD4
    bl fn_80256C70
    li r0, 0x0
    stw r0, lbl_8049DC30
    stw r0, lbl_8049DC34
    stw r0, lbl_8049DC38
lbl_80276CD4:
    lis r6, lbl_8036B240@ha
    li r0, 0x3
    addi r6, r6, lbl_8036B240@l
    addi r7, r1, 0x10
    stw r6, lbl_8049CD84
    mr r8, r6
    li r5, 0x0
    mtctr r0
lbl_80276CF4:
    lbz r0, 0x1(r6)
    lbz r3, 0x0(r6)
    addi r6, r6, 0x1
    lbz r4, 0x0(r7)
    extsb. r0, r0
    xor r0, r4, r3
    stb r0, 0x0(r7)
    bne lbl_80276D18
    mr r6, r8
lbl_80276D18:
    lbz r0, 0x1(r6)
    lbz r3, 0x0(r6)
    addi r6, r6, 0x1
    lbz r4, 0x1(r7)
    extsb. r0, r0
    xor r0, r4, r3
    stb r0, 0x1(r7)
    bne lbl_80276D3C
    mr r6, r8
lbl_80276D3C:
    lbz r0, 0x1(r6)
    lbz r3, 0x0(r6)
    addi r6, r6, 0x1
    lbz r4, 0x2(r7)
    extsb. r0, r0
    xor r0, r4, r3
    stb r0, 0x2(r7)
    bne lbl_80276D60
    mr r6, r8
lbl_80276D60:
    lbz r0, 0x1(r6)
    lbz r3, 0x0(r6)
    addi r6, r6, 0x1
    lbz r4, 0x3(r7)
    extsb. r0, r0
    xor r0, r4, r3
    stb r0, 0x3(r7)
    bne lbl_80276D84
    mr r6, r8
lbl_80276D84:
    lbz r0, 0x1(r6)
    lbz r3, 0x0(r6)
    addi r6, r6, 0x1
    lbz r4, 0x4(r7)
    extsb. r0, r0
    xor r0, r4, r3
    stb r0, 0x4(r7)
    bne lbl_80276DA8
    mr r6, r8
lbl_80276DA8:
    addi r7, r7, 0x5
    addi r5, r5, 0x4
    bdnz lbl_80276CF4
    cmpwi r30, 0x0
    beq lbl_80276E2C
    mr r12, r30
    mr r3, r29
    mr r7, r31
    addi r6, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    b lbl_80276E2C
lbl_80276DE0:
    lwz r0, lbl_8049DC48
    li r3, 0x0
    stw r30, 0x48(r1)
    cmpwi r0, 0x0
    stw r31, 0x44(r1)
    stw r29, 0x34(r1)
    stw r3, 0x30(r1)
    stw r3, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r3, 0x40(r1)
    bne lbl_80276E20
    li r3, 0x1c
    li r4, 0x2
    li r5, 0x0
    bl fn_80253528
    stw r3, lbl_8049DC48
lbl_80276E20:
    lwz r3, lbl_8049DC48
    addi r4, r1, 0x30
    bl fn_80253690
lbl_80276E2C:
    addi r11, r1, 0x200
    bl _restgpr_14
    lwz r0, 0x204(r1)
    mtlr r0
    addi r1, r1, 0x200
    blr
}

// ----------------------------------------------------------------------------
// fn_80276E44
// ----------------------------------------------------------------------------
asm void fn_80276E44() {
    nofralloc
    stwu r1, -0x440(r1)
    mflr r0
    stw r0, 0x444(r1)
    addi r11, r1, 0x440
    bl _savegpr_14
    lis r11, lbl_80341454@ha
    lbzu r0, lbl_80341454@l(r11)
    mr r25, r3
    mr r26, r4
    stw r0, 0x380(r1)
    mr r27, r5
    lbz r0, 0x1(r11)
    mr r28, r6
    lbz r3, 0x18(r11)
    mr r30, r7
    stw r0, 0x384(r1)
    mr r29, r8
    lbz r0, 0x2(r11)
    mr r31, r10
    lbz r15, 0x7(r11)
    stw r0, 0x388(r1)
    lbz r0, 0x3(r11)
    lbz r16, 0x8(r11)
    stw r0, 0x38c(r1)
    lbz r0, 0x4(r11)
    lbz r17, 0x9(r11)
    stw r0, 0x390(r1)
    lbz r0, 0x5(r11)
    lbz r18, 0xa(r11)
    stw r0, 0x394(r1)
    lbz r0, 0x6(r11)
    lbz r19, 0xb(r11)
    stw r0, 0x398(r1)
    lbz r0, 0x1a(r11)
    lbz r20, 0xc(r11)
    stw r0, 0x3f0(r1)
    lbz r0, 0x1b(r11)
    stb r3, 0x64(r1)
    lwz r3, 0x3f0(r1)
    stw r0, 0x39c(r1)
    lbz r0, 0x1c(r11)
    stb r3, 0x66(r1)
    lwz r3, 0x39c(r1)
    stw r0, 0x3a0(r1)
    lbz r0, 0x1d(r11)
    stb r3, 0x67(r1)
    lwz r3, 0x3a0(r1)
    stw r0, 0x3a4(r1)
    lbz r0, 0x1e(r11)
    stb r3, 0x68(r1)
    lwz r3, 0x3a4(r1)
    stw r0, 0x3a8(r1)
    lbz r0, 0x1f(r11)
    stb r3, 0x69(r1)
    lwz r3, 0x3a8(r1)
    stw r0, 0x3ac(r1)
    lbz r0, 0x20(r11)
    stb r3, 0x6a(r1)
    lwz r3, 0x3ac(r1)
    stw r0, 0x3b0(r1)
    lbz r0, 0x21(r11)
    stb r3, 0x6b(r1)
    lwz r3, 0x3b0(r1)
    stw r0, 0x3b4(r1)
    lbz r0, 0x22(r11)
    stb r3, 0x6c(r1)
    lwz r3, 0x3b4(r1)
    stw r0, 0x3b8(r1)
    lbz r0, 0x23(r11)
    stb r3, 0x6d(r1)
    lwz r3, 0x3b8(r1)
    stw r0, 0x3bc(r1)
    lbz r0, 0x24(r11)
    stb r3, 0x6e(r1)
    lwz r3, 0x3bc(r1)
    stw r0, 0x3c0(r1)
    lbz r0, 0x25(r11)
    stb r3, 0x6f(r1)
    lwz r3, 0x3c0(r1)
    stw r0, 0x3c4(r1)
    lbz r0, 0x26(r11)
    stb r3, 0x70(r1)
    lwz r3, 0x3c4(r1)
    stw r0, 0x3c8(r1)
    lbz r0, 0x27(r11)
    stb r3, 0x71(r1)
    lwz r3, 0x3c8(r1)
    stw r0, 0x3cc(r1)
    lbz r0, 0x28(r11)
    stb r3, 0x72(r1)
    lwz r3, 0x3cc(r1)
    stw r0, 0x3d0(r1)
    lbz r0, 0x29(r11)
    stb r3, 0x73(r1)
    lwz r3, 0x3d0(r1)
    stw r0, 0x3d4(r1)
    lbz r0, 0x2a(r11)
    lbz r21, 0xd(r11)
    stw r0, 0x3d8(r1)
    lbz r0, 0x2b(r11)
    lbz r22, 0xe(r11)
    stw r0, 0x3dc(r1)
    lbz r0, 0x2c(r11)
    lbz r23, 0xf(r11)
    stw r0, 0x3e0(r1)
    lbz r0, 0x2d(r11)
    lbz r24, 0x10(r11)
    stw r0, 0x3e4(r1)
    lbz r0, 0x2e(r11)
    lbz r12, 0x11(r11)
    stw r0, 0x3e8(r1)
    lbz r0, 0x2f(r11)
    lbz r10, 0x12(r11)
    lbz r8, 0x13(r11)
    lbz r7, 0x14(r11)
    lbz r6, 0x15(r11)
    lbz r5, 0x16(r11)
    lbz r4, 0x17(r11)
    lbz r14, 0x19(r11)
    stw r0, 0x3ec(r1)
    lbz r0, 0x30(r11)
    lwz r11, 0x380(r1)
    stb r3, 0x74(r1)
    lwz r3, 0x3d4(r1)
    stb r11, 0x4c(r1)
    lwz r11, 0x384(r1)
    stb r3, 0x75(r1)
    lwz r3, 0x3d8(r1)
    stb r11, 0x4d(r1)
    lwz r11, 0x388(r1)
    stb r3, 0x76(r1)
    lwz r3, 0x3dc(r1)
    stb r11, 0x4e(r1)
    lwz r11, 0x38c(r1)
    stb r3, 0x77(r1)
    lwz r3, 0x3e0(r1)
    stb r11, 0x4f(r1)
    lwz r11, 0x390(r1)
    stb r3, 0x78(r1)
    lwz r3, 0x3e4(r1)
    stb r11, 0x50(r1)
    lwz r11, 0x394(r1)
    stb r3, 0x79(r1)
    lwz r3, 0x3e8(r1)
    stb r11, 0x51(r1)
    lwz r11, 0x398(r1)
    stb r3, 0x7a(r1)
    lwz r3, 0x3ec(r1)
    stb r11, 0x52(r1)
    stb r15, 0x53(r1)
    stb r16, 0x54(r1)
    stb r17, 0x55(r1)
    stb r18, 0x56(r1)
    stb r19, 0x57(r1)
    stb r20, 0x58(r1)
    stb r21, 0x59(r1)
    stb r22, 0x5a(r1)
    stb r23, 0x5b(r1)
    stb r24, 0x5c(r1)
    stb r12, 0x5d(r1)
    stb r10, 0x5e(r1)
    stb r8, 0x5f(r1)
    stb r7, 0x60(r1)
    stb r6, 0x61(r1)
    stb r5, 0x62(r1)
    stb r4, 0x63(r1)
    stb r14, 0x65(r1)
    stb r3, 0x7b(r1)
    stb r0, 0x7c(r1)
    lbz r11, lbl_804A2320
    lis r12, lbl_8036B240@ha
    addi r12, r12, lbl_8036B240@l
    lbz r10, lbl_804A2321
    lbz r8, lbl_804A2322
    li r0, 0xc
    lbz r7, lbl_804A2323
    mr r16, r12
    lbz r6, lbl_804A2324
    addi r15, r1, 0x4c
    lbz r5, lbl_804A2325
    li r14, 0x0
    lbz r4, lbl_804A2326
    lbz r3, lbl_804A2327
    stb r11, 0x18(r1)
    stb r10, 0x19(r1)
    stb r8, 0x1a(r1)
    stb r7, 0x1b(r1)
    stb r6, 0x1c(r1)
    stb r5, 0x1d(r1)
    stb r4, 0x1e(r1)
    stb r3, 0x1f(r1)
    stw r12, lbl_8049CD84
    mtctr r0
lbl_80277148:
    lbz r0, 0x1(r12)
    lbz r3, 0x0(r12)
    addi r12, r12, 0x1
    lbz r4, 0x0(r15)
    extsb. r0, r0
    xor r0, r4, r3
    stb r0, 0x0(r15)
    bne lbl_8027716C
    mr r12, r16
lbl_8027716C:
    lbz r0, 0x1(r12)
    lbz r3, 0x0(r12)
    addi r12, r12, 0x1
    lbz r4, 0x1(r15)
    extsb. r0, r0
    xor r0, r4, r3
    stb r0, 0x1(r15)
    bne lbl_80277190
    mr r12, r16
lbl_80277190:
    lbz r0, 0x1(r12)
    lbz r3, 0x0(r12)
    addi r12, r12, 0x1
    lbz r4, 0x2(r15)
    extsb. r0, r0
    xor r0, r4, r3
    stb r0, 0x2(r15)
    bne lbl_802771B4
    mr r12, r16
lbl_802771B4:
    lbz r0, 0x1(r12)
    lbz r3, 0x0(r12)
    addi r12, r12, 0x1
    lbz r4, 0x3(r15)
    extsb. r0, r0
    xor r0, r4, r3
    stb r0, 0x3(r15)
    bne lbl_802771D8
    mr r12, r16
lbl_802771D8:
    addi r15, r15, 0x4
    addi r14, r14, 0x3
    bdnz lbl_80277148
    mr r4, r9
    addi r3, r1, 0x80
    bl strcpy
    addi r5, r1, 0x80
    li r3, 0x1
    b lbl_80277210
lbl_802771FC:
    extsb r0, r4
    cmpwi r0, 0x5c
    bne lbl_8027720C
    stb r3, 0x0(r5)
lbl_8027720C:
    addi r5, r5, 0x1
lbl_80277210:
    lbz r4, 0x0(r5)
    extsb. r0, r4
    bne lbl_802771FC
    mr r5, r26
    mr r6, r27
    mr r7, r28
    mr r9, r25
    addi r3, r1, 0x180
    addi r4, r1, 0x4c
    addi r8, r1, 0x80
    opword 0x4CC63182
    bl sprintf
    or. r0, r29, r30
    mr r14, r3
    beq lbl_8027726C
    addi r3, r1, 0x180
    mr r6, r29
    mr r5, r30
    addi r4, r1, 0x18
    add r3, r3, r14
    opword 0x4CC63182
    bl sprintf
    add r14, r14, r3
lbl_8027726C:
    lwz r0, lbl_8049CD80
    cmpwi r0, -0x1
    beq lbl_80277288
    mr r4, r14
    addi r3, r1, 0x180
    bl fn_80277C68
    mr r14, r3
lbl_80277288:
    cmpwi r14, 0x0
    bgt lbl_802774D8
    lwz r3, lbl_8049CD80
    cmpwi r3, -0x1
    beq lbl_802772AC
    li r4, 0x2
    bl shutdown
    lwz r3, lbl_8049CD80
    bl closesocket
lbl_802772AC:
    lwz r3, lbl_8049DC48
    li r0, -0x1
    stw r0, lbl_8049CD80
    cmpwi r3, 0x0
    beq lbl_8027746C
    bl fn_80253658
    lis r16, lbl_8036B240@ha
    lis r14, lbl_8036B478@ha
    addi r16, r16, lbl_8036B240@l
    subi r15, r3, 0x1
    addi r14, r14, lbl_8036B478@l
    li r17, 0x3
    b lbl_80277454
lbl_802772E0:
    lbz r29, 0x0(r14)
    mr r3, r16
    lbz r24, 0x1(r14)
    addi r5, r1, 0x20
    lbz r23, 0x2(r14)
    li r4, 0x0
    lbz r22, 0x3(r14)
    lbz r21, 0x4(r14)
    lbz r20, 0x5(r14)
    lbz r19, 0x6(r14)
    lbz r18, 0x7(r14)
    lbz r12, 0x8(r14)
    lbz r11, 0x9(r14)
    lbz r10, 0xa(r14)
    lbz r9, 0xb(r14)
    lbz r8, 0xc(r14)
    lbz r7, 0xd(r14)
    lbz r6, 0xe(r14)
    lbz r0, 0xf(r14)
    stb r29, 0x20(r1)
    stb r24, 0x21(r1)
    stb r23, 0x22(r1)
    stb r22, 0x23(r1)
    stb r21, 0x24(r1)
    stb r20, 0x25(r1)
    stb r19, 0x26(r1)
    stb r18, 0x27(r1)
    stb r12, 0x28(r1)
    stb r11, 0x29(r1)
    stb r10, 0x2a(r1)
    stb r9, 0x2b(r1)
    stb r8, 0x2c(r1)
    stb r7, 0x2d(r1)
    stb r6, 0x2e(r1)
    stb r0, 0x2f(r1)
    stw r16, lbl_8049CD84
    mtctr r17
lbl_80277374:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x0(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x0(r5)
    bne lbl_80277398
    mr r3, r16
lbl_80277398:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x1(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x1(r5)
    bne lbl_802773BC
    mr r3, r16
lbl_802773BC:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x2(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x2(r5)
    bne lbl_802773E0
    mr r3, r16
lbl_802773E0:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x3(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x3(r5)
    bne lbl_80277404
    mr r3, r16
lbl_80277404:
    lbz r0, 0x1(r3)
    lbz r6, 0x0(r3)
    addi r3, r3, 0x1
    lbz r7, 0x4(r5)
    extsb. r0, r0
    xor r0, r7, r6
    stb r0, 0x4(r5)
    bne lbl_80277428
    mr r3, r16
lbl_80277428:
    addi r5, r5, 0x5
    addi r4, r4, 0x4
    bdnz lbl_80277374
    mr r3, r15
    addi r7, r1, 0x20
    li r4, 0x0
    li r6, 0x0
    li r5, 0x0
    li r8, 0x0
    bl CallReqCallback
    subi r15, r15, 0x1
lbl_80277454:
    cmpwi r15, 0x0
    bge lbl_802772E0
    lwz r3, lbl_8049DC48
    bl fn_802535C4
    li r0, 0x0
    stw r0, lbl_8049DC48
lbl_8027746C:
    lwz r3, lbl_8049DC30
    cmpwi r3, 0x0
    beq lbl_8027748C
    bl fn_80256C70
    li r0, 0x0
    stw r0, lbl_8049DC30
    stw r0, lbl_8049DC34
    stw r0, lbl_8049DC38
lbl_8027748C:
    cmpwi r31, 0x0
    beq lbl_80277528
    la r3, lbl_8049CDAC
    li r0, 0x0
    stw r3, 0x8(r1)
    mr r12, r31
    mr r3, r25
    mr r4, r26
    stw r0, 0xc(r1)
    mr r5, r27
    lwz r0, 0x448(r1)
    mr r6, r28
    li r7, 0x0
    li r10, 0x0
    stw r0, 0x10(r1)
    li r9, 0x0
    mtctr r12
    bctrl
    b lbl_80277528
lbl_802774D8:
    lwz r0, lbl_8049DC48
    li r3, 0x1
    stw r31, 0x48(r1)
    cmpwi r0, 0x0
    lwz r0, 0x448(r1)
    stw r25, 0x34(r1)
    stw r0, 0x44(r1)
    stw r3, 0x30(r1)
    stw r26, 0x38(r1)
    stw r27, 0x3c(r1)
    stw r28, 0x40(r1)
    bne lbl_8027751C
    li r3, 0x1c
    li r4, 0x2
    li r5, 0x0
    bl fn_80253528
    stw r3, lbl_8049DC48
lbl_8027751C:
    lwz r3, lbl_8049DC48
    addi r4, r1, 0x30
    bl fn_80253690
lbl_80277528:
    addi r11, r1, 0x440
    bl _restgpr_14
    lwz r0, 0x444(r1)
    mtlr r0
    addi r1, r1, 0x440
    blr
}

// ----------------------------------------------------------------------------
// fn_80277540
// ----------------------------------------------------------------------------
asm void fn_80277540() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r10, r8
    li r8, 0x0
    stw r0, 0x14(r1)
    stw r9, 0x8(r1)
    mr r9, r7
    li r7, 0x0
    bl fn_80276E44
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80277574
// ----------------------------------------------------------------------------
asm void fn_80277574() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r29, r7
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r30, r8
    mr r31, r9
    mr r3, r29
    bl strlen
    li r0, 0x1
    mr r8, r3
    stw r0, 0x8(r1)
    mr r3, r25
    mr r4, r26
    mr r5, r27
    mr r6, r28
    mr r7, r29
    mr r9, r30
    mr r10, r31
    addi r8, r8, 0x1
    bl fn_80277E34
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

