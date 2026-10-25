#include "types.h"

// Translation unit: src/gamespy/GP/unk_80263228.cpp
// Total functions: 11

// Small Data symbols (@sda21)
extern float lbl_8049CAE0;
extern float lbl_8049CAE8;
extern float lbl_8049CAF0;
extern float lbl_8049CAF8;
extern float lbl_8049CAFC;
extern float lbl_8049CB08;
extern float lbl_8049CB10;
extern float lbl_8049CB18;
extern float lbl_8049CB20;
extern float lbl_8049CB28;
extern float lbl_8049CB30;
extern float lbl_8049CB38;
extern float lbl_8049CB40;
extern float lbl_8049CB48;
extern float lbl_8049CB50;
extern float lbl_8049CB58;
extern float lbl_8049CB60;
extern float lbl_8049CB64;
extern float lbl_8049CB68;
extern float lbl_8049CB70;
extern float lbl_8049CB78;
extern float lbl_8049CB7C;
extern float lbl_8049CB80;
extern float lbl_8049CB88;
extern float lbl_8049CB90;
extern float lbl_8049CB94;
extern float lbl_8049CB9C;
extern float lbl_8049CBA0;
extern float lbl_8049CBA8;
extern float lbl_8049CBAC;
extern float lbl_8049CBB4;
extern float lbl_8049CBBC;
extern float lbl_8049CBC0;
extern float lbl_8049CBC8;
extern float lbl_8049CBD0;
extern float lbl_8049CBD8;
extern float lbl_8049CBDC;
extern float lbl_8049CBE8;
extern float lbl_8049CBEC;
extern float lbl_8049CBF8;
extern float lbl_8049CC00;

// Global data symbols (@ha/@l)
extern u8 lbl_803695E4[];
extern u8 lbl_80369620[];
extern u8 lbl_803696C8[];
extern u8 lbl_80369708[];
extern u8 lbl_803697D0[];
extern u8 lbl_80369A10[];
extern u8 lbl_80369A28[];
extern u8 lbl_80369A38[];
extern u8 lbl_80369A68[];
extern u8 lbl_8040A168[];

// Forward declarations
extern void GOAGetLastError();
extern void _restgpr_15();
extern void _restgpr_21();
extern void _restgpr_23();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_15();
extern void _savegpr_21();
extern void _savegpr_23();
extern void _savegpr_26();
extern void _savegpr_27();
extern void atoi();
extern void connect();
extern void fn_802557FC();
extern void fn_80255D78();
extern void fn_8025658C();
extern void fn_802565F0();
extern void fn_80256638();
extern void fn_80256C4C();
extern void fn_80256C5C();
extern void fn_80256C70();
extern void fn_80259940();
extern void fn_80263228();
extern void fn_80263290();
extern void fn_80263498();
extern void fn_80263668();
extern void fn_80263754();
extern void fn_802639E4();
extern void fn_80263AE4();
extern void fn_80265904();
extern void fn_80265A54();
extern void fn_80265B3C();
extern void fn_80265C68();
extern void fn_80265ED0();
extern void fn_80336B2C();
extern void gpiAddCallback();
extern void gpiAddOperation();
extern void gpiAppendCharToBuffer();
extern void gpiAppendIntToBuffer();
extern void gpiAppendStringToBuffer();
extern void gpiCallErrorCallback();
extern void gpiCheckForError();
extern void gpiCheckSocketConnect();
extern void gpiEncodeString();
extern void gpiPeerFinishTransferMessage();
extern void gpiPeerStartTransferMessage();
extern void gpiProfileListAdd();
extern void gpiReadKeyAndValue();
extern void gpiRecvToBuffer();
extern void gpiRemoveOperation();
extern void gpiSendFromBuffer();
extern void gpiSendOrBufferString();
extern void gpiSetError();
extern void gpiSetErrorString();
extern void gpiValueForKey();
extern void memset();
extern void socket();
extern void sprintf();
extern void sscanf();
extern void strcmp();
extern void strcpy();
extern void strncmp();
extern void strstr();
extern void strzcpy();

// ----------------------------------------------------------------------------
// fn_80263228
// ----------------------------------------------------------------------------
asm void fn_80263228() {
    nofralloc
    cmpwi r3, 0x0
    li r4, 0x0
    beq lbl_80263280
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_80263280
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_80263280
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    bne lbl_80263280
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_80263280
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    bne lbl_80263280
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    bne lbl_80263280
    li r4, 0x1
lbl_80263280:
    neg r0, r4
    or r0, r0, r4
    srwi r3, r0, 31
    blr
}

// ----------------------------------------------------------------------------
// fn_80263290
// ----------------------------------------------------------------------------
asm void fn_80263290() {
    nofralloc
    stwu r1, -0x240(r1)
    mflr r0
    stw r0, 0x244(r1)
    addi r11, r1, 0x240
    bl _savegpr_23
    li r23, 0x0
    mr r28, r3
    stw r23, 0x8(r1)
    mr r29, r4
    li r5, 0x1
    lwz r30, 0x0(r3)
    bl gpiCheckForError
    cmpwi r3, 0x0
    beq lbl_802632D0
    li r3, 0x4
    b lbl_80263480
lbl_802632D0:
    mr r3, r29
    addi r5, r1, 0x8
    addi r6, r1, 0x10
    la r4, lbl_8049CAE0
    li r7, 0x200
    bl fn_80265ED0
    cmpwi r3, 0x0
    bne lbl_8026331C
    lis r5, lbl_803695E4@ha
    mr r3, r28
    addi r5, r5, lbl_803695E4@l
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_80263480
lbl_8026331C:
    addi r3, r1, 0x10
    bl atoi
    mr r24, r3
    mr r3, r29
    la r4, lbl_8049CAE8
    bl strstr
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_8026336C
    lis r5, lbl_803695E4@ha
    mr r3, r28
    addi r5, r5, lbl_803695E4@l
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_80263480
lbl_8026336C:
    lwz r3, 0x8(r1)
    addi r26, r1, 0x10
    li r31, 0x0
    li r27, 0x1
    addi r0, r3, 0x6
    stw r0, 0x8(r1)
    b lbl_80263474
lbl_80263388:
    cmpwi r31, 0x0
    bne lbl_802633DC
    addi r4, r1, 0x10
    li r5, 0x0
    b lbl_802633A8
lbl_8026339C:
    stb r3, 0x0(r4)
    addi r4, r4, 0x1
    addi r5, r5, 0x1
lbl_802633A8:
    cmplwi r5, 0x200
    bge lbl_802633C8
    add r3, r25, r5
    lbz r3, 0x6(r3)
    extsb. r0, r3
    beq lbl_802633C8
    cmpwi r0, 0x2c
    bne lbl_8026339C
lbl_802633C8:
    lwz r0, 0x8(r1)
    stbx r23, r26, r5
    add r0, r0, r5
    stw r0, 0x8(r1)
    b lbl_80263428
lbl_802633DC:
    mr r3, r29
    addi r5, r1, 0x8
    addi r6, r1, 0x10
    la r4, lbl_8049CAF0
    li r7, 0x200
    bl fn_80265ED0
    cmpwi r3, 0x0
    bne lbl_80263428
    lis r5, lbl_803695E4@ha
    mr r3, r28
    addi r5, r5, lbl_803695E4@l
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_80263480
lbl_80263428:
    addi r3, r1, 0x10
    bl atoi
    mr r4, r3
    mr r3, r28
    bl gpiProfileListAdd
    cmpwi r3, 0x0
    bne lbl_8026345C
    lis r4, lbl_80369620@ha
    mr r3, r28
    addi r4, r4, lbl_80369620@l
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_80263480
lbl_8026345C:
    stw r27, 0x20(r3)
    addi r31, r31, 0x1
    lwz r4, 0x5d4(r30)
    stw r4, 0x24(r3)
    addi r0, r4, 0x1
    stw r0, 0x5d4(r30)
lbl_80263474:
    cmpw r31, r24
    blt lbl_80263388
    li r3, 0x0
lbl_80263480:
    addi r11, r1, 0x240
    bl _restgpr_23
    lwz r0, 0x244(r1)
    mtlr r0
    addi r1, r1, 0x240
    blr
}

// ----------------------------------------------------------------------------
// fn_80263498
// ----------------------------------------------------------------------------
asm void fn_80263498() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lwz r29, 0x4(r4)
    li r0, 0x1000
    lis r30, lbl_803696C8@ha
    mr r27, r3
    stw r0, 0xc(r29)
    mr r28, r4
    addi r30, r30, lbl_803696C8@l
    li r3, 0x1001
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, 0x8(r29)
    bne lbl_802634F0
    mr r3, r27
    addi r4, r30, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_80263650
lbl_802634F0:
    li r3, 0x2
    li r4, 0x1
    li r5, 0x6
    bl socket
    cmpwi r3, -0x1
    stw r3, 0x4(r29)
    bne lbl_80263534
    mr r3, r27
    addi r5, r30, 0x50
    li r4, 0x5
    bl gpiSetError
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_80263650
lbl_80263534:
    li r4, 0x0
    bl fn_80255D78
    cmpwi r3, 0x0
    bne lbl_8026356C
    mr r3, r27
    addi r5, r30, 0x78
    li r4, 0x5
    bl gpiSetError
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_80263650
lbl_8026356C:
    addi r3, r30, 0x0
    bl fn_802557FC
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_802635A8
    mr r3, r27
    addi r5, r30, 0xac
    li r4, 0x5
    bl gpiSetError
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_80263650
lbl_802635A8:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x2
    li r3, 0x74cd
    stb r0, 0x9(r1)
    lwz r4, 0xc(r31)
    lwz r4, 0x0(r4)
    lwz r0, 0x0(r4)
    stw r0, 0xc(r1)
    bl fn_80336B2C
    sth r3, 0xa(r1)
    addi r4, r1, 0x8
    li r5, 0x8
    lwz r3, 0x4(r29)
    bl connect
    cmpwi r3, -0x1
    bne lbl_8026363C
    lwz r3, 0x4(r29)
    bl GOAGetLastError
    cmpwi r3, -0x6
    beq lbl_8026363C
    cmpwi r3, -0x1a
    beq lbl_8026363C
    cmpwi r3, -0x4c
    beq lbl_8026363C
    mr r3, r27
    addi r5, r30, 0xe0
    li r4, 0x5
    bl gpiSetError
    mr r3, r27
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_80263650
lbl_8026363C:
    li r0, 0x1
    stw r0, 0x14(r28)
    bl fn_802565F0
    stw r3, 0x18c(r29)
    li r3, 0x0
lbl_80263650:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80263668
// ----------------------------------------------------------------------------
asm void fn_80263668() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x198
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_802636BC
    lis r4, lbl_80369708@ha
    mr r3, r28
    addi r4, r4, lbl_80369708@l
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_80263734
lbl_802636BC:
    li r4, 0x0
    li r5, 0x198
    bl memset
    stw r31, 0x0(r30)
    li r3, -0x1
    li r31, 0x0
    li r0, 0x1000
    stw r3, 0x4(r30)
    li r3, 0x1001
    stw r31, 0x8(r30)
    stw r31, 0x10(r30)
    stw r31, 0x14(r30)
    stw r31, 0xc(r30)
    stw r31, 0x20(r30)
    stw r31, 0x24(r30)
    stw r0, 0x1c(r30)
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, 0x18(r30)
    bne lbl_80263724
    lis r4, lbl_80369708@ha
    mr r3, r28
    addi r4, r4, lbl_80369708@l
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_80263734
lbl_80263724:
    stw r31, 0x184(r30)
    li r3, 0x0
    stw r31, 0x188(r30)
    stw r30, 0x0(r29)
lbl_80263734:
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
// fn_80263754
// ----------------------------------------------------------------------------
asm void fn_80263754() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    cmpwi r4, 0x0
    lwz r29, 0x48(r1)
    lwz r30, 0x4c(r1)
    mr r21, r3
    lwz r31, 0x50(r1)
    mr r22, r4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    mr r26, r8
    mr r27, r9
    mr r28, r10
    beq lbl_802637A8
    lbz r0, 0x0(r4)
    extsb. r0, r0
    bne lbl_80263818
lbl_802637A8:
    cmpwi r6, 0x0
    beq lbl_802637BC
    lbz r0, 0x0(r6)
    extsb. r0, r0
    bne lbl_80263818
lbl_802637BC:
    cmpwi r7, 0x0
    beq lbl_802637D0
    lbz r0, 0x0(r7)
    extsb. r0, r0
    bne lbl_80263818
lbl_802637D0:
    cmpwi r8, 0x0
    beq lbl_802637E4
    lbz r0, 0x0(r8)
    extsb. r0, r0
    bne lbl_80263818
lbl_802637E4:
    cmpwi r9, 0x0
    bne lbl_80263818
    cmpwi r5, 0x0
    beq lbl_80263800
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_80263818
lbl_80263800:
    lis r4, lbl_803697D0@ha
    mr r3, r21
    addi r4, r4, lbl_803697D0@l
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_802639CC
lbl_80263818:
    mr r3, r21
    addi r4, r1, 0xc
    li r5, 0x1
    bl fn_80263668
    cmpwi r3, 0x0
    beq lbl_80263834
    b lbl_802639CC
lbl_80263834:
    cmpwi r22, 0x0
    bne lbl_8026384C
    lwz r3, 0xc(r1)
    li r0, 0x0
    stb r0, 0x28(r3)
    b lbl_80263860
lbl_8026384C:
    lwz r3, 0xc(r1)
    mr r4, r22
    li r5, 0x1f
    addi r3, r3, 0x28
    bl strzcpy
lbl_80263860:
    cmpwi r23, 0x0
    bne lbl_80263878
    lwz r3, 0xc(r1)
    li r0, 0x0
    stb r0, 0x47(r3)
    b lbl_8026388C
lbl_80263878:
    lwz r3, 0xc(r1)
    mr r4, r23
    li r5, 0x15
    addi r3, r3, 0x47
    bl strzcpy
lbl_8026388C:
    cmpwi r24, 0x0
    bne lbl_802638A4
    lwz r3, 0xc(r1)
    li r0, 0x0
    stb r0, 0xa0(r3)
    b lbl_802638B8
lbl_802638A4:
    lwz r3, 0xc(r1)
    mr r4, r24
    li r5, 0x33
    addi r3, r3, 0xa0
    bl strzcpy
lbl_802638B8:
    lwz r3, 0xc(r1)
    addi r3, r3, 0xa0
    bl fn_8025658C
    cmpwi r25, 0x0
    bne lbl_802638DC
    lwz r3, 0xc(r1)
    li r0, 0x0
    stb r0, 0xd3(r3)
    b lbl_802638F0
lbl_802638DC:
    lwz r3, 0xc(r1)
    mr r4, r25
    li r5, 0x1f
    addi r3, r3, 0xd3
    bl strzcpy
lbl_802638F0:
    cmpwi r26, 0x0
    bne lbl_80263908
    lwz r3, 0xc(r1)
    li r0, 0x0
    stb r0, 0xf2(r3)
    b lbl_8026391C
lbl_80263908:
    lwz r3, 0xc(r1)
    mr r4, r26
    li r5, 0x1f
    addi r3, r3, 0xf2
    bl strzcpy
lbl_8026391C:
    lwz r3, 0xc(r1)
    cmpwi r28, 0x0
    stw r27, 0x178(r3)
    bge lbl_80263930
    li r28, 0x0
lbl_80263930:
    lwz r4, 0xc(r1)
    mr r3, r21
    mr r7, r29
    mr r8, r30
    stw r28, 0x17c(r4)
    mr r9, r31
    addi r6, r1, 0x8
    li r4, 0x3
    lwz r11, 0x0(r21)
    lwz r5, 0xc(r1)
    lwz r10, 0x238(r11)
    addi r0, r10, 0x1
    stw r0, 0x238(r11)
    bl gpiAddOperation
    cmpwi r3, 0x0
    beq lbl_80263974
    b lbl_802639B8
lbl_80263974:
    lwz r4, 0x8(r1)
    mr r3, r21
    bl fn_80263498
    cmpwi r3, 0x0
    beq lbl_8026398C
    b lbl_802639B8
lbl_8026398C:
    lwz r3, 0x8(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_802639B4
    lwz r4, 0x18(r3)
    mr r3, r21
    bl fn_80259940
    cmpwi r3, 0x0
    beq lbl_802639B4
    b lbl_802639B8
lbl_802639B4:
    li r3, 0x0
lbl_802639B8:
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_802639C8
    mr r0, r3
lbl_802639C8:
    mr r3, r0
lbl_802639CC:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_802639E4
// ----------------------------------------------------------------------------
asm void fn_802639E4() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r27, r4
    mr r28, r5
    mr r26, r3
    mr r29, r6
    mr r30, r7
    mr r31, r8
    addi r4, r1, 0xc
    li r5, 0x9
    bl fn_80263668
    cmpwi r3, 0x0
    beq lbl_80263A28
    b lbl_80263ACC
lbl_80263A28:
    lwz r4, 0xc(r1)
    mr r3, r26
    mr r7, r29
    mr r8, r30
    stw r27, 0x190(r4)
    mr r9, r31
    addi r6, r1, 0x8
    li r4, 0x3
    lwz r5, 0xc(r1)
    stw r28, 0x194(r5)
    lwz r11, 0x0(r26)
    lwz r5, 0xc(r1)
    lwz r10, 0x238(r11)
    addi r0, r10, 0x1
    stw r0, 0x238(r11)
    bl gpiAddOperation
    cmpwi r3, 0x0
    beq lbl_80263A74
    b lbl_80263AB8
lbl_80263A74:
    lwz r4, 0x8(r1)
    mr r3, r26
    bl fn_80263498
    cmpwi r3, 0x0
    beq lbl_80263A8C
    b lbl_80263AB8
lbl_80263A8C:
    lwz r3, 0x8(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_80263AB4
    lwz r4, 0x18(r3)
    mr r3, r26
    bl fn_80259940
    cmpwi r3, 0x0
    beq lbl_80263AB4
    b lbl_80263AB8
lbl_80263AB4:
    li r3, 0x0
lbl_80263AB8:
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_80263AC8
    mr r0, r3
lbl_80263AC8:
    mr r3, r0
lbl_80263ACC:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80263AE4
// ----------------------------------------------------------------------------
asm void fn_80263AE4() {
    nofralloc
    stwu r1, -0x540(r1)
    mflr r0
    stw r0, 0x544(r1)
    addi r11, r1, 0x540
    bl _savegpr_15
    lwz r5, 0x8(r4)
    lis r20, lbl_803696C8@ha
    lwz r30, 0x0(r3)
    mr r28, r3
    neg r0, r5
    cmpwi r5, 0x0
    or r0, r0, r5
    lwz r31, 0x4(r4)
    mr r29, r4
    addi r20, r20, lbl_803696C8@l
    srwi r18, r0, 31
    bne lbl_80263B6C
    bl fn_802565F0
    lwz r0, 0x18c(r31)
    subf r0, r0, r3
    cmplwi r0, 0xea60
    ble lbl_80263B6C
    li r0, 0x1
    mr r3, r28
    stw r0, 0x188(r31)
    addi r5, r20, 0x144
    li r4, 0xd02
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x0
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80263B6C:
    li r26, 0x600
    li r27, 0x1
    lis r21, lbl_8040A168@ha
    li r24, 0x0
    li r25, 0x601
    li r23, 0x5
    li r22, 0x4
lbl_80263B88:
    lwz r4, 0x4(r31)
    mr r3, r28
    addi r5, r31, 0x18
    addi r6, r1, 0x18
    li r7, 0x1
    la r8, lbl_8049CAF8
    bl gpiSendFromBuffer
    cmpwi r3, 0x0
    beq lbl_80263BB0
    b lbl_802658EC
lbl_80263BB0:
    lwz r0, 0x14(r29)
    cmpwi r0, 0x1
    bne lbl_80264450
    lwz r4, 0x4(r31)
    mr r3, r28
    addi r5, r1, 0x24
    bl gpiCheckSocketConnect
    cmpwi r3, 0x0
    beq lbl_80263BD8
    b lbl_802658EC
lbl_80263BD8:
    lwz r0, 0x24(r1)
    cmpwi r0, 0x4
    bne lbl_80263C0C
    mr r3, r28
    addi r5, r20, 0x15c
    li r4, 0xd01
    bl gpiSetError
    mr r3, r28
    li r4, 0x4
    li r5, 0x0
    bl gpiCallErrorCallback
    li r3, 0x4
    b lbl_802658EC
lbl_80263C0C:
    cmpwi r0, 0x3
    bne lbl_802658D0
    lwz r0, 0x0(r31)
    cmpwi r0, 0x1
    bne lbl_80263DE8
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x188
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x194
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a0
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1ac
    bl gpiAppendStringToBuffer
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1bc
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    lbz r0, 0x28(r31)
    extsb. r0, r0
    beq lbl_80263CDC
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CAFC
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x28
    bl gpiAppendStringToBuffer
lbl_80263CDC:
    lbz r0, 0x47(r31)
    extsb. r0, r0
    beq lbl_80263D08
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1c8
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x47
    bl gpiAppendStringToBuffer
lbl_80263D08:
    lbz r0, 0xa0(r31)
    extsb. r0, r0
    beq lbl_80263D34
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB08
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl gpiAppendStringToBuffer
lbl_80263D34:
    lbz r0, 0xd3(r31)
    extsb. r0, r0
    beq lbl_80263D60
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1d8
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xd3
    bl gpiAppendStringToBuffer
lbl_80263D60:
    lbz r0, 0xf2(r31)
    extsb. r0, r0
    beq lbl_80263D8C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1e4
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xf2
    bl gpiAppendStringToBuffer
lbl_80263D8C:
    lwz r0, 0x178(r31)
    cmpwi r0, 0x0
    beq lbl_80263DB8
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1f0
    bl gpiAppendStringToBuffer
    lwz r5, 0x178(r31)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
lbl_80263DB8:
    lwz r0, 0x17c(r31)
    cmpwi r0, 0x0
    ble lbl_80264418
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB10
    bl gpiAppendStringToBuffer
    lwz r5, 0x17c(r31)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_80263DE8:
    cmpwi r0, 0xa
    bne lbl_80263EDC
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1fc
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x194
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a0
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1c8
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x47
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x20c
    bl gpiAppendStringToBuffer
    lwz r0, 0x9c(r31)
    cmpwi r0, 0x0
    ble lbl_80263EC8
    mr r16, r31
    li r15, 0x0
    b lbl_80263EB8
lbl_80263E88:
    cmpwi r15, 0x0
    ble lbl_80263EA0
    mr r3, r28
    addi r4, r31, 0x18
    li r5, 0x2c
    bl gpiAppendCharToBuffer
lbl_80263EA0:
    lwz r5, 0x5c(r16)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    addi r16, r16, 0x4
    addi r15, r15, 0x1
lbl_80263EB8:
    lwz r0, 0x9c(r31)
    cmpw r15, r0
    blt lbl_80263E88
    b lbl_80264418
lbl_80263EC8:
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_80263EDC:
    cmpwi r0, 0x2
    bne lbl_80263F38
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB18
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB08
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1bc
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_80263F38:
    cmpwi r0, 0x3
    bne lbl_80263FE0
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB20
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB08
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl gpiAppendStringToBuffer
    addi r3, r31, 0x111
    addi r4, r1, 0xc0
    bl gpiEncodeString
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x21c
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r1, 0xc0
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1ac
    bl gpiAppendStringToBuffer
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1bc
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_80263FE0:
    cmpwi r0, 0x4
    bne lbl_8026405C
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x228
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x194
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a0
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x234
    bl gpiAppendStringToBuffer
    lwz r5, 0x180(r31)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_8026405C:
    cmpwi r0, 0x5
    bne lbl_80264104
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB28
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CAFC
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x28
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB08
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1bc
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    addi r3, r31, 0x111
    addi r4, r1, 0xc0
    bl gpiEncodeString
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x21c
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r1, 0xc0
    bl gpiAppendStringToBuffer
    b lbl_80264418
lbl_80264104:
    cmpwi r0, 0x6
    bne lbl_80264238
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x240
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CAFC
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x28
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB08
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0xa0
    bl gpiAppendStringToBuffer
    addi r3, r31, 0x111
    addi r4, r1, 0xc0
    bl gpiEncodeString
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x21c
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r1, 0xc0
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x24c
    bl gpiAppendStringToBuffer
    lwz r5, 0x60c(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1ac
    bl gpiAppendStringToBuffer
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1c8
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x47
    bl gpiAppendStringToBuffer
    lbz r0, 0x130(r31)
    extsb. r0, r0
    beq lbl_80264214
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB30
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x130
    bl gpiAppendStringToBuffer
lbl_80264214:
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1bc
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a4(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_80264238:
    cmpwi r0, 0x7
    bne lbl_802642B4
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x258
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x194
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a0
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1ac
    bl gpiAppendStringToBuffer
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_802642B4:
    cmpwi r0, 0x9
    bne lbl_802643C0
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x264
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x194
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1a0
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a0(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x274
    bl gpiAppendStringToBuffer
    lwz r5, 0x194(r31)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB38
    bl gpiAppendStringToBuffer
    lwz r3, 0x190(r31)
    cmpwi r3, 0x0
    beq lbl_8026439C
    lwz r5, 0x0(r3)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    li r15, 0x1
    li r16, 0x4
    b lbl_80264390
lbl_80264364:
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB40
    bl gpiAppendStringToBuffer
    lwz r5, 0x190(r31)
    mr r3, r28
    addi r4, r31, 0x18
    lwzx r5, r5, r16
    bl gpiAppendIntToBuffer
    addi r16, r16, 0x4
    addi r15, r15, 0x1
lbl_80264390:
    lwz r0, 0x194(r31)
    cmpw r15, r0
    blt lbl_80264364
lbl_8026439C:
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1ac
    bl gpiAppendStringToBuffer
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
    b lbl_80264418
lbl_802643C0:
    cmpwi r0, 0x8
    bne lbl_80264418
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x280
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x290
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r31, 0x47
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x1ac
    bl gpiAppendStringToBuffer
    lwz r5, 0x610(r30)
    mr r3, r28
    addi r4, r31, 0x18
    bl gpiAppendIntToBuffer
lbl_80264418:
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r20, 0x2a0
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    addi r5, r21, lbl_8040A168@l
    bl gpiAppendStringToBuffer
    mr r3, r28
    addi r4, r31, 0x18
    la r5, lbl_8049CB48
    bl gpiAppendStringToBuffer
    stw r22, 0x14(r29)
    b lbl_802658D0
lbl_80264450:
    cmpwi r0, 0x4
    bne lbl_802658D0
    lwz r4, 0x4(r31)
    mr r3, r28
    addi r5, r31, 0x8
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    la r8, lbl_8049CAF8
    bl gpiRecvToBuffer
    cmpwi r3, 0x0
    beq lbl_802644B0
    cmpwi r3, 0x3
    bne lbl_802658EC
    mr r3, r28
    addi r5, r20, 0x2ac
    li r4, 0xd01
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x0
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
    b lbl_802658EC
lbl_802644B0:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_80264500
    bl fn_802565F0
    lwz r0, 0x18c(r31)
    subf r0, r0, r3
    cmplwi r0, 0xea60
    ble lbl_80264500
    li r0, 0x1
    mr r3, r28
    stw r0, 0x188(r31)
    addi r5, r20, 0x144
    li r4, 0xd02
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x0
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80264500:
    lwz r3, 0x8(r31)
    la r4, lbl_8049CB48
    bl strstr
    cmpwi r3, 0x0
    beq lbl_802658D0
    stw r24, 0x20(r1)
    mr r3, r28
    li r5, 0x1
    stw r23, 0x14(r29)
    lwz r4, 0x8(r31)
    bl gpiCheckForError
    cmpwi r3, 0x0
    beq lbl_80264544
    li r0, 0x1
    li r3, 0x4
    stw r0, 0x188(r31)
    b lbl_802658EC
lbl_80264544:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x1
    beq lbl_80264558
    cmpwi r0, 0xa
    bne lbl_80264898
lbl_80264558:
    stw r24, 0xb0(r1)
    li r18, 0x0
    stw r24, 0xb4(r1)
    stw r24, 0xbc(r1)
    stw r25, 0xb8(r1)
lbl_8026456C:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80264590
    b lbl_802658EC
lbl_80264590:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB50
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802645FC
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_802645C8
    b lbl_802658EC
lbl_802645C8:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB58
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802645F4
    addi r3, r1, 0xf0
    la r4, lbl_8049CB60
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_802645F4
    stw r26, 0xb8(r1)
lbl_802645F4:
    li r18, 0x1
    b lbl_802647F0
lbl_802645FC:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB64
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802647C8
    lwz r4, 0xb4(r1)
    lwz r3, 0xbc(r1)
    addi r0, r4, 0x1
    mulli r4, r0, 0xb0
    stw r0, 0xb4(r1)
    bl fn_80256C5C
    cmpwi r3, 0x0
    stw r3, 0xbc(r1)
    bne lbl_80264648
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264648:
    lwz r6, 0xb4(r1)
    li r4, 0x0
    li r5, 0xb0
    subi r0, r6, 0x1
    mulli r0, r0, 0xb0
    add r17, r3, r0
    mr r3, r17
    bl memset
    addi r3, r1, 0xf0
    bl atoi
    stw r3, 0x0(r17)
    li r16, 0x0
lbl_80264678:
    lwz r15, 0x20(r1)
    mr r3, r28
    lwz r4, 0x8(r31)
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_802646A0
    b lbl_802658EC
lbl_802646A0:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB68
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802646C8
    addi r3, r17, 0x4
    addi r4, r1, 0xf0
    li r5, 0x1f
    bl strzcpy
    b lbl_802647BC
lbl_802646C8:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x2d8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802646F0
    addi r3, r17, 0x23
    addi r4, r1, 0xf0
    li r5, 0x15
    bl strzcpy
    b lbl_802647BC
lbl_802646F0:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x2e4
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264714
    addi r3, r1, 0xf0
    bl atoi
    stw r3, 0x38(r17)
    b lbl_802647BC
lbl_80264714:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x2f0
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026473C
    addi r3, r17, 0x3c
    addi r4, r1, 0xf0
    li r5, 0x1f
    bl strzcpy
    b lbl_802647BC
lbl_8026473C:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x2fc
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264764
    addi r3, r17, 0x5b
    addi r4, r1, 0xf0
    li r5, 0x1f
    bl strzcpy
    b lbl_802647BC
lbl_80264764:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB70
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026478C
    addi r3, r17, 0x7a
    addi r4, r1, 0xf0
    li r5, 0x33
    bl strzcpy
    b lbl_802647BC
lbl_8026478C:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB64
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_802647B4
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB50
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802647BC
lbl_802647B4:
    li r16, 0x1
    stw r15, 0x20(r1)
lbl_802647BC:
    cmpwi r16, 0x0
    beq lbl_80264678
    b lbl_802647F0
lbl_802647C8:
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_802647F0:
    cmpwi r18, 0x0
    beq lbl_8026456C
    lwz r12, 0xc(r29)
    lwz r5, 0x10(r29)
    cmpwi r12, 0x0
    stw r12, 0xa8(r1)
    lwz r15, 0xb8(r1)
    stw r5, 0xac(r1)
    beq lbl_80264824
    mr r3, r28
    addi r4, r1, 0xb0
    mtctr r12
    bctrl
lbl_80264824:
    cmpwi r15, 0x600
    bne lbl_80264888
    lwz r0, 0xb8(r1)
    cmpwi r0, 0x600
    bne lbl_80264888
    lwz r0, 0x8(r29)
    mr r3, r28
    addi r4, r31, 0x28
    addi r5, r31, 0x47
    stw r0, 0x8(r1)
    addi r6, r31, 0xa0
    addi r7, r31, 0xd3
    addi r8, r31, 0xf2
    lwz r0, 0xc(r29)
    stw r0, 0xc(r1)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r1)
    lwz r10, 0xb4(r1)
    lwz r0, 0x17c(r31)
    lwz r9, 0x178(r31)
    add r10, r10, r0
    bl fn_80263754
    cmpwi r3, 0x0
    beq lbl_80264888
    b lbl_802658EC
lbl_80264888:
    lwz r3, 0xbc(r1)
    bl fn_80256C70
    stw r24, 0xbc(r1)
    b lbl_802658C8
lbl_80264898:
    cmpwi r0, 0x2
    bne lbl_802649A0
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x28(r1)
    stw r0, 0x2c(r1)
    beq lbl_802658C8
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_802648DC
    b lbl_802658EC
lbl_802648DC:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB78
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80264918
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80264918:
    li r3, 0x3c
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r15, r3
    bne lbl_80264940
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264940:
    stw r24, 0x0(r3)
    addi r4, r31, 0xa0
    li r5, 0x33
    addi r3, r3, 0x4
    bl strzcpy
    lbz r0, 0xf0(r1)
    cmpwi r0, 0x30
    bne lbl_80264968
    stw r24, 0x38(r15)
    b lbl_8026496C
lbl_80264968:
    stw r27, 0x38(r15)
lbl_8026496C:
    lwz r4, 0x28(r1)
    mr r3, r28
    lwz r0, 0x2c(r1)
    mr r5, r15
    stw r4, 0xa0(r1)
    mr r6, r29
    addi r4, r1, 0xa0
    li r7, 0x0
    stw r0, 0xa4(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_802649A0:
    cmpwi r0, 0x3
    bne lbl_80264C5C
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x30(r1)
    stw r0, 0x34(r1)
    beq lbl_802658C8
    li r3, 0x44
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_802649E8
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_802649E8:
    stw r24, 0x0(r3)
    addi r3, r3, 0x4
    addi r4, r31, 0xa0
    bl strcpy
    stw r24, 0x38(r19)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    stw r24, 0x3c(r19)
    addi r7, r1, 0xf0
    stw r24, 0x40(r19)
    lwz r4, 0x8(r31)
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80264A28
    b lbl_802658EC
lbl_80264A28:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB7C
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80264A64
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80264A64:
    li r18, 0x0
lbl_80264A68:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80264A8C
    b lbl_802658EC
lbl_80264A8C:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB68
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264B34
    lwz r4, 0x38(r19)
    lwz r3, 0x3c(r19)
    addi r0, r4, 0x1
    slwi r4, r0, 2
    bl fn_80256C5C
    cmpwi r3, 0x0
    bne lbl_80264AD0
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264AD0:
    stw r3, 0x3c(r19)
    li r3, 0x1f
    bl fn_80256C4C
    cmpwi r3, 0x0
    bne lbl_80264AF8
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264AF8:
    lwz r0, 0x38(r19)
    addi r4, r1, 0xf0
    lwz r6, 0x3c(r19)
    li r5, 0x1f
    slwi r0, r0, 2
    stwx r3, r6, r0
    lwz r0, 0x38(r19)
    lwz r3, 0x3c(r19)
    slwi r0, r0, 2
    lwzx r3, r3, r0
    bl strzcpy
    lwz r3, 0x38(r19)
    addi r0, r3, 0x1
    stw r0, 0x38(r19)
    b lbl_80264C20
lbl_80264B34:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x2d8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264BDC
    lwz r0, 0x38(r19)
    cmpwi r0, 0x0
    ble lbl_80264C20
    lwz r3, 0x40(r19)
    slwi r4, r0, 2
    bl fn_80256C5C
    cmpwi r3, 0x0
    bne lbl_80264B7C
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264B7C:
    stw r3, 0x40(r19)
    li r3, 0x15
    bl fn_80256C4C
    cmpwi r3, 0x0
    bne lbl_80264BA4
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264BA4:
    lwz r0, 0x38(r19)
    addi r4, r1, 0xf0
    lwz r6, 0x40(r19)
    li r5, 0x15
    slwi r0, r0, 2
    add r6, r6, r0
    stw r3, -0x4(r6)
    lwz r0, 0x38(r19)
    lwz r3, 0x40(r19)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r3, -0x4(r3)
    bl strzcpy
    b lbl_80264C20
lbl_80264BDC:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB80
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264BF8
    li r18, 0x1
    b lbl_80264C20
lbl_80264BF8:
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80264C20:
    cmpwi r18, 0x0
    beq lbl_80264A68
    lwz r4, 0x30(r1)
    mr r3, r28
    lwz r0, 0x34(r1)
    mr r5, r19
    stw r4, 0x98(r1)
    mr r6, r29
    addi r4, r1, 0x98
    li r7, 0x3
    stw r0, 0x9c(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_80264C5C:
    cmpwi r0, 0x4
    bne lbl_80264EB4
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x38(r1)
    stw r0, 0x3c(r1)
    beq lbl_802658C8
    li r3, 0x10
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_80264CA4
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264CA4:
    lwz r0, 0x180(r31)
    li r18, 0x0
    stw r0, 0x4(r3)
    stw r24, 0x0(r3)
    stw r24, 0x8(r3)
    stw r24, 0xc(r3)
lbl_80264CBC:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80264CE0
    b lbl_802658EC
lbl_80264CE0:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB88
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264CFC
    li r18, 0x1
    b lbl_80264E78
lbl_80264CFC:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB90
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264E50
    lwz r3, 0x8(r19)
    addi r0, r3, 0x1
    stw r0, 0x8(r19)
    mulli r4, r0, 0x128
    lwz r3, 0xc(r19)
    bl fn_80256C5C
    cmpwi r3, 0x0
    stw r3, 0xc(r19)
    bne lbl_80264D48
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264D48:
    lwz r6, 0x8(r19)
    li r4, 0x0
    li r5, 0x128
    subi r0, r6, 0x1
    mulli r0, r0, 0x128
    add r17, r3, r0
    mr r3, r17
    bl memset
    stw r27, 0x24(r17)
    addi r3, r1, 0xf0
    bl atoi
    stw r3, 0x0(r17)
    li r16, 0x0
lbl_80264D7C:
    lwz r15, 0x20(r1)
    mr r3, r28
    lwz r4, 0x8(r31)
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80264DA4
    b lbl_802658EC
lbl_80264DA4:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB94
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264DCC
    addi r3, r17, 0x28
    addi r4, r1, 0xf0
    li r5, 0x100
    bl strzcpy
    b lbl_80264DF0
lbl_80264DCC:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB68
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264DF0
    addi r3, r17, 0x4
    addi r4, r1, 0xf0
    li r5, 0x1f
    bl strzcpy
lbl_80264DF0:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x330
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264E14
    addi r3, r1, 0xf0
    bl atoi
    stw r3, 0x24(r17)
    b lbl_80264E44
lbl_80264E14:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB90
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80264E3C
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB88
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80264E44
lbl_80264E3C:
    li r16, 0x1
    stw r15, 0x20(r1)
lbl_80264E44:
    cmpwi r16, 0x0
    beq lbl_80264D7C
    b lbl_80264E78
lbl_80264E50:
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80264E78:
    cmpwi r18, 0x0
    beq lbl_80264CBC
    lwz r4, 0x38(r1)
    mr r3, r28
    lwz r0, 0x3c(r1)
    mr r5, r19
    stw r4, 0x90(r1)
    mr r6, r29
    addi r4, r1, 0x90
    li r7, 0x4
    stw r0, 0x94(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_80264EB4:
    cmpwi r0, 0x5
    bne lbl_80265004
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    beq lbl_802658C8
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80264EF8
    b lbl_802658EC
lbl_80264EF8:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB9C
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80264F34
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80264F34:
    addi r3, r1, 0xf0
    bl atoi
    cmpwi r3, 0x0
    mr r16, r3
    beq lbl_80264F54
    stw r3, 0x5b8(r30)
    li r15, 0x0
    b lbl_80264FA4
lbl_80264F54:
    lwz r3, 0x8(r31)
    addi r5, r1, 0xf0
    la r4, lbl_8049CBA0
    li r6, 0x200
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_80264F98
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80264F98:
    addi r3, r1, 0xf0
    bl atoi
    mr r15, r3
lbl_80264FA4:
    li r3, 0x8
    bl fn_80256C4C
    cmpwi r3, 0x0
    bne lbl_80264FC8
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80264FC8:
    stw r16, 0x0(r3)
    mr r5, r3
    lwz r7, 0x40(r1)
    mr r6, r29
    stw r15, 0x4(r3)
    mr r3, r28
    lwz r0, 0x44(r1)
    addi r4, r1, 0x88
    stw r7, 0x88(r1)
    li r7, 0x0
    stw r0, 0x8c(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_80265004:
    cmpwi r0, 0x6
    bne lbl_8026515C
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    beq lbl_802658C8
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80265048
    b lbl_802658EC
lbl_80265048:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBA8
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80265084
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80265084:
    addi r3, r1, 0xf0
    bl atoi
    cmpwi r3, 0x0
    mr r16, r3
    beq lbl_8026509C
    stw r3, 0x5b8(r30)
lbl_8026509C:
    lwz r3, 0x8(r31)
    addi r5, r1, 0xf0
    la r4, lbl_8049CBA0
    li r6, 0x200
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_802650F0
    cmpwi r16, 0x0
    bne lbl_802650E8
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_802650E8:
    li r15, 0x0
    b lbl_802650FC
lbl_802650F0:
    addi r3, r1, 0xf0
    bl atoi
    mr r15, r3
lbl_802650FC:
    li r3, 0x8
    bl fn_80256C4C
    cmpwi r3, 0x0
    bne lbl_80265120
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80265120:
    stw r16, 0x0(r3)
    mr r5, r3
    lwz r7, 0x48(r1)
    mr r6, r29
    stw r15, 0x4(r3)
    mr r3, r28
    lwz r0, 0x4c(r1)
    addi r4, r1, 0x80
    stw r7, 0x80(r1)
    li r7, 0x0
    stw r0, 0x84(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_8026515C:
    cmpwi r0, 0x7
    bne lbl_80265464
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x50(r1)
    stw r0, 0x54(r1)
    beq lbl_802658C8
    li r3, 0xc
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_802651A4
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_802651A4:
    stw r24, 0x0(r3)
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    stw r24, 0x4(r3)
    stw r24, 0x8(r3)
    mr r3, r28
    lwz r4, 0x8(r31)
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_802651D4
    b lbl_802658EC
lbl_802651D4:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBAC
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80265210
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80265210:
    li r18, 0x0
lbl_80265214:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80265238
    b lbl_802658EC
lbl_80265238:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBB4
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80265254
    li r18, 0x1
    b lbl_80265428
lbl_80265254:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBBC
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80265400
    lwz r4, 0x4(r19)
    lwz r3, 0x8(r19)
    addi r0, r4, 0x1
    mulli r4, r0, 0xb0
    bl fn_80256C5C
    cmpwi r3, 0x0
    bne lbl_80265298
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80265298:
    stw r3, 0x8(r19)
    li r4, 0x0
    li r5, 0xb0
    lwz r0, 0x4(r19)
    mulli r0, r0, 0xb0
    add r16, r3, r0
    mr r3, r16
    bl memset
    lwz r4, 0x4(r19)
    addi r3, r1, 0xf0
    addi r0, r4, 0x1
    stw r0, 0x4(r19)
    bl atoi
    stw r3, 0x0(r16)
    li r17, 0x0
lbl_802652D4:
    lwz r15, 0x20(r1)
    mr r3, r28
    lwz r4, 0x8(r31)
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_802652FC
    b lbl_802658EC
lbl_802652FC:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB68
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80265324
    addi r3, r16, 0x4
    addi r4, r1, 0xf0
    li r5, 0x1f
    bl strzcpy
    b lbl_802653F4
lbl_80265324:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x2d8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026534C
    addi r3, r16, 0x23
    addi r4, r1, 0xf0
    li r5, 0x15
    bl strzcpy
    b lbl_802653F4
lbl_8026534C:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBC0
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80265374
    addi r3, r16, 0x3c
    addi r4, r1, 0xf0
    li r5, 0x1f
    bl strzcpy
    b lbl_802653F4
lbl_80265374:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBC8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026539C
    addi r3, r16, 0x5b
    addi r4, r1, 0xf0
    li r5, 0x1f
    bl strzcpy
    b lbl_802653F4
lbl_8026539C:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB70
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802653C4
    addi r3, r16, 0x7a
    addi r4, r1, 0xf0
    li r5, 0x33
    bl strzcpy
    b lbl_802653F4
lbl_802653C4:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBBC
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_802653EC
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBB4
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_802653F4
lbl_802653EC:
    li r17, 0x1
    stw r15, 0x20(r1)
lbl_802653F4:
    cmpwi r17, 0x0
    beq lbl_802652D4
    b lbl_80265428
lbl_80265400:
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80265428:
    cmpwi r18, 0x0
    beq lbl_80265214
    lwz r4, 0x50(r1)
    mr r3, r28
    lwz r0, 0x54(r1)
    mr r5, r19
    stw r4, 0x78(r1)
    mr r6, r29
    addi r4, r1, 0x78
    li r7, 0x8
    stw r0, 0x7c(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_80265464:
    cmpwi r0, 0x9
    bne lbl_802656CC
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x58(r1)
    stw r0, 0x5c(r1)
    beq lbl_802658C8
    li r3, 0xc
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_802654AC
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_802654AC:
    stw r24, 0x0(r3)
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    stw r24, 0x4(r3)
    stw r24, 0x8(r3)
    mr r3, r28
    lwz r4, 0x8(r31)
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_802654DC
    b lbl_802658EC
lbl_802654DC:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x33c
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80265518
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80265518:
    li r18, 0x0
lbl_8026551C:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80265540
    b lbl_802658EC
lbl_80265540:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBD0
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026555C
    li r18, 0x1
    b lbl_80265690
lbl_8026555C:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBBC
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80265668
    lwz r4, 0x4(r17)
    lwz r3, 0x8(r17)
    addi r0, r4, 0x1
    mulli r4, r0, 0x1c
    bl fn_80256C5C
    cmpwi r3, 0x0
    bne lbl_802655A0
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_802655A0:
    stw r3, 0x8(r17)
    li r4, 0x0
    li r5, 0x1c
    lwz r0, 0x4(r17)
    mulli r0, r0, 0x1c
    add r19, r3, r0
    mr r3, r19
    bl memset
    lwz r4, 0x4(r17)
    addi r3, r1, 0xf0
    addi r0, r4, 0x1
    stw r0, 0x4(r17)
    bl atoi
    stw r3, 0x0(r19)
    li r16, 0x0
lbl_802655DC:
    lwz r15, 0x20(r1)
    mr r3, r28
    lwz r4, 0x8(r31)
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80265604
    b lbl_802658EC
lbl_80265604:
    addi r3, r1, 0x2f0
    addi r4, r20, 0x2d8
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026562C
    addi r3, r19, 0x4
    addi r4, r1, 0xf0
    li r5, 0x15
    bl strzcpy
    b lbl_8026565C
lbl_8026562C:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBBC
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80265654
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBD0
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_8026565C
lbl_80265654:
    li r16, 0x1
    stw r15, 0x20(r1)
lbl_8026565C:
    cmpwi r16, 0x0
    beq lbl_802655DC
    b lbl_80265690
lbl_80265668:
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80265690:
    cmpwi r18, 0x0
    beq lbl_8026551C
    lwz r4, 0x58(r1)
    mr r3, r28
    lwz r0, 0x5c(r1)
    mr r5, r17
    stw r4, 0x70(r1)
    mr r6, r29
    addi r4, r1, 0x70
    li r7, 0xd
    stw r0, 0x74(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_802656CC:
    cmpwi r0, 0x8
    bne lbl_802658C8
    lwz r3, 0xc(r29)
    lwz r0, 0x10(r29)
    cmpwi r3, 0x0
    stw r3, 0x60(r1)
    stw r0, 0x64(r1)
    beq lbl_802658C8
    li r17, 0x0
    li r3, 0xc
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_80265718
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_80265718:
    stw r24, 0x0(r3)
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    stw r24, 0x4(r3)
    stw r24, 0x8(r3)
    mr r3, r28
    lwz r4, 0x8(r31)
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_80265748
    b lbl_802658EC
lbl_80265748:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBD8
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_80265784
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_80265784:
    addi r3, r1, 0xf0
    bl atoi
    stw r3, 0x4(r16)
    slwi r3, r3, 2
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, 0x8(r16)
    bne lbl_802657B8
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_802657B8:
    li r18, 0x0
    li r19, 0x0
lbl_802657C0:
    lwz r4, 0x8(r31)
    mr r3, r28
    addi r5, r1, 0x20
    addi r6, r1, 0x2f0
    addi r7, r1, 0xf0
    bl gpiReadKeyAndValue
    cmpwi r3, 0x0
    beq lbl_802657E4
    b lbl_802658EC
lbl_802657E4:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CB68
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80265844
    li r3, 0x15
    bl fn_80256C4C
    lwz r4, 0x8(r16)
    stwx r3, r4, r19
    lwz r3, 0x8(r16)
    lwzx r3, r3, r19
    cmpwi r3, 0x0
    bne lbl_8026582C
    mr r3, r28
    addi r4, r20, 0x40
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_802658EC
lbl_8026582C:
    addi r4, r1, 0xf0
    li r5, 0x15
    bl strzcpy
    addi r19, r19, 0x4
    addi r17, r17, 0x1
    b lbl_8026588C
lbl_80265844:
    addi r3, r1, 0x2f0
    la r4, lbl_8049CBDC
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80265864
    stw r17, 0x4(r16)
    li r18, 0x1
    b lbl_8026588C
lbl_80265864:
    mr r3, r28
    addi r5, r20, 0x308
    li r4, 0x1
    bl gpiSetError
    mr r3, r28
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_802658EC
lbl_8026588C:
    cmpwi r18, 0x0
    beq lbl_802657C0
    lwz r4, 0x60(r1)
    mr r3, r28
    lwz r0, 0x64(r1)
    mr r5, r16
    stw r4, 0x68(r1)
    mr r6, r29
    addi r4, r1, 0x68
    li r7, 0x9
    stw r0, 0x6c(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_802658C8
    b lbl_802658EC
lbl_802658C8:
    stw r27, 0x188(r31)
    li r18, 0x0
lbl_802658D0:
    cmpwi r18, 0x0
    beq lbl_802658E0
    li r3, 0xa
    bl fn_80256638
lbl_802658E0:
    cmpwi r18, 0x0
    bne lbl_80263B88
    li r3, 0x0
lbl_802658EC:
    addi r11, r1, 0x540
    bl _restgpr_15
    lwz r0, 0x544(r1)
    mtlr r0
    addi r1, r1, 0x540
    blr
}

// ----------------------------------------------------------------------------
// fn_80265904
// ----------------------------------------------------------------------------
asm void fn_80265904() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r26, 0x0(r3)
    mr r29, r3
    li r30, 0x0
    li r28, 0x0
    lwz r0, 0x238(r26)
    cmpwi r0, 0x0
    ble lbl_80265A38
    slwi r3, r0, 2
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_80265960
    lis r4, lbl_80369708@ha
    mr r3, r29
    addi r4, r4, lbl_80369708@l
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_80265A3C
lbl_80265960:
    lwz r5, 0x5c4(r26)
    li r0, 0x1
    b lbl_802659AC
lbl_8026596C:
    lwz r4, 0x0(r5)
    cmpwi r4, 0x3
    bne lbl_802659A8
    lwz r4, 0x14(r5)
    cmpwi r4, 0x5
    beq lbl_802659A8
    lwz r4, 0x4(r5)
    lwz r4, 0x184(r4)
    cmpwi r4, 0x0
    bne lbl_802659A8
    stwx r5, r3, r28
    addi r30, r30, 0x1
    addi r28, r28, 0x4
    lwz r4, 0x4(r5)
    stw r0, 0x184(r4)
lbl_802659A8:
    lwz r5, 0x20(r5)
lbl_802659AC:
    cmpwi r5, 0x0
    bne lbl_8026596C
    mr r27, r31
    li r26, 0x0
    b lbl_802659E4
lbl_802659C0:
    lwz r4, 0x0(r27)
    mr r3, r29
    bl fn_80263AE4
    cmpwi r3, 0x0
    beq lbl_802659DC
    lwz r4, 0x0(r27)
    stw r3, 0x1c(r4)
lbl_802659DC:
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_802659E4:
    cmpw r26, r30
    blt lbl_802659C0
    mr r27, r31
    li r26, 0x0
    li r28, 0x0
    b lbl_80265A28
lbl_802659FC:
    lwz r3, 0x0(r27)
    lwz r3, 0x4(r3)
    stw r28, 0x184(r3)
    lwz r0, 0x188(r3)
    cmpwi r0, 0x0
    beq lbl_80265A20
    lwz r4, 0x0(r27)
    mr r3, r29
    bl gpiRemoveOperation
lbl_80265A20:
    addi r27, r27, 0x4
    addi r26, r26, 0x1
lbl_80265A28:
    cmpw r26, r30
    blt lbl_802659FC
    mr r3, r31
    bl fn_80256C70
lbl_80265A38:
    li r3, 0x0
lbl_80265A3C:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80265A54
// ----------------------------------------------------------------------------
asm void fn_80265A54() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r5, r1, 0x38
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r4
    la r4, lbl_8049CBEC
    stw r29, 0x84(r1)
    mr r29, r3
    mr r3, r6
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    beq lbl_80265B20
    lis r4, lbl_80369A28@ha
    addi r3, r1, 0x38
    addi r4, r4, lbl_80369A28@l
    addi r5, r1, 0x8
    addi r6, r1, 0xc
    addi r7, r1, 0x10
    opword 0x4CC63182
    bl sscanf
    cmpwi r3, 0x3
    bne lbl_80265B20
    mr r3, r29
    mr r4, r30
    addi r6, r1, 0x8
    la r31, lbl_8049CBE8
    li r5, 0xc9
    bl gpiPeerStartTransferMessage
    cmpwi r3, 0x0
    bne lbl_80265B20
    lis r4, lbl_80369A10@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_80369A10@l
    li r5, 0x1
    li r6, 0x2
    opword 0x4CC63182
    bl sprintf
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x18
    bl gpiSendOrBufferString
    cmpwi r3, 0x0
    bne lbl_80265B20
    mr r3, r29
    mr r4, r30
    mr r5, r31
    li r6, -0x1
    bl gpiPeerFinishTransferMessage
lbl_80265B20:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_80265B3C
// ----------------------------------------------------------------------------
asm void fn_80265B3C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    li r5, 0x1
    stw r30, 0x28(r1)
    mr r30, r4
    mr r4, r31
    stw r29, 0x24(r1)
    mr r29, r3
    bl gpiCheckForError
    cmpwi r3, 0x0
    beq lbl_80265B7C
    li r3, 0x4
    b lbl_80265C4C
lbl_80265B7C:
    mr r3, r31
    la r4, lbl_8049CBF8
    li r5, 0x4
    bl strncmp
    cmpwi r3, 0x0
    beq lbl_80265BC0
    lis r5, lbl_80369A38@ha
    mr r3, r29
    addi r5, r5, lbl_80369A38@l
    li r4, 0x1
    bl gpiSetError
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_80265C4C
lbl_80265BC0:
    lwz r3, 0xc(r30)
    lwz r0, 0x10(r30)
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_80265C3C
    li r3, 0x4
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_80265C04
    lis r4, lbl_80369A68@ha
    mr r3, r29
    addi r4, r4, lbl_80369A68@l
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_80265C4C
lbl_80265C04:
    li r0, 0x0
    lwz r4, 0x10(r1)
    stw r0, 0x0(r3)
    mr r3, r29
    lwz r0, 0x14(r1)
    mr r6, r30
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    li r7, 0x0
    stw r0, 0xc(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_80265C3C
    b lbl_80265C4C
lbl_80265C3C:
    mr r3, r29
    mr r4, r30
    bl gpiRemoveOperation
    li r3, 0x0
lbl_80265C4C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80265C68
// ----------------------------------------------------------------------------
asm void fn_80265C68() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r5
    li r5, 0x1
    stw r30, 0x28(r1)
    mr r30, r4
    mr r4, r31
    stw r29, 0x24(r1)
    mr r29, r3
    bl gpiCheckForError
    cmpwi r3, 0x0
    beq lbl_80265CA8
    li r3, 0x4
    b lbl_80265D78
lbl_80265CA8:
    mr r3, r31
    la r4, lbl_8049CC00
    li r5, 0x4
    bl strncmp
    cmpwi r3, 0x0
    beq lbl_80265CEC
    lis r5, lbl_80369A38@ha
    mr r3, r29
    addi r5, r5, lbl_80369A38@l
    li r4, 0x1
    bl gpiSetError
    mr r3, r29
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_80265D78
lbl_80265CEC:
    lwz r3, 0xc(r30)
    lwz r0, 0x10(r30)
    cmpwi r3, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    beq lbl_80265D68
    li r3, 0x4
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_80265D30
    lis r4, lbl_80369A68@ha
    mr r3, r29
    addi r4, r4, lbl_80369A68@l
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_80265D78
lbl_80265D30:
    li r0, 0x0
    lwz r4, 0x10(r1)
    stw r0, 0x0(r3)
    mr r3, r29
    lwz r0, 0x14(r1)
    mr r6, r30
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    li r7, 0x0
    stw r0, 0xc(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_80265D68
    b lbl_80265D78
lbl_80265D68:
    mr r3, r29
    mr r4, r30
    bl gpiRemoveOperation
    li r3, 0x0
lbl_80265D78:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

