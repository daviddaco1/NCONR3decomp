#include "types.h"

// Translation unit: src/gamespy/gstats/unk_80279FD0.cpp
// Total functions: 18

// Small Data symbols (@sda21)
extern float lbl_8049CE10;
extern float lbl_8049CE18;
extern float lbl_8049CE1C;
extern float lbl_8049CE20;
extern float lbl_8049CE28;
extern float lbl_8049CE2C;
extern float lbl_8049CE30;
extern float lbl_8049CE34;
extern float lbl_8049DBB8;
extern float lbl_8049DC50;
extern float lbl_8049DC54;
extern float lbl_8049DC58;
extern float lbl_8049DC5C;
extern float lbl_8049DC60;
extern float lbl_8049DC64;
extern float lbl_8049DC68;
extern float lbl_8049DC6C;
extern float lbl_8049DC70;
extern float lbl_8049DC74;
extern float lbl_8049DC78;
extern float lbl_8049DC7C;
extern float lbl_8049DC80;
extern float lbl_8049DC84;
extern float lbl_8049DC88;
extern float lbl_8049DC8C;
extern float lbl_8049DC90;
extern float lbl_8049DC94;
extern float lbl_8049DC98;

// Global data symbols (@ha/@l)
extern u8 lbl_8036B488[];
extern u8 lbl_8040A168[];
extern u8 lbl_8040B840[];
extern u8 lbl_8040B880[];
extern u8 lbl_8040BA80[];
extern u8 lbl_8040BB60[];

// Forward declarations
extern void GOAGetLastError();
extern void _restgpr_23();
extern void _restgpr_24();
extern void _restgpr_26();
extern void _savegpr_23();
extern void _savegpr_24();
extern void _savegpr_26();
extern void closesocket();
extern void detail_StartSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo();
extern void fn_80253528();
extern void fn_802535C4();
extern void fn_80253658();
extern void fn_80253660();
extern void fn_80253690();
extern void fn_802557FC();
extern void fn_80255E4C();
extern void fn_80255EDC();
extern void fn_802560A8();
extern void fn_802565F0();
extern void fn_80279FD0();
extern void fn_8027A0B4();
extern void fn_8027A150();
extern void fn_8027A47C();
extern void fn_8027A480();
extern void fn_8027A740();
extern void fn_8027A774();
extern void fn_8027A810();
extern void fn_8027AA04();
extern void fn_8027ACB4();
extern void fn_8027ADB8();
extern void fn_8027B0D4();
extern void fn_8027B180();
extern void fn_8027B694();
extern void fn_8027B708();
extern void fn_8027B954();
extern void fn_8027BCCC();
extern void fn_8027BED0();
extern void fn_80336AC8();
extern void fn_80336B1C();
extern void fn_80336B20();
extern void fn_80336B28();
extern void fn_80336B2C();
extern void getsockname();
extern void inet_addr();
extern void memcmp();
extern void memcpy();
extern void memset();
extern void recvfrom();
extern void sendto();
extern void snprintf();
extern void socket();
extern void sprintf();
extern void strcpy();
extern void strlen();

// ----------------------------------------------------------------------------
// fn_80279FD0
// ----------------------------------------------------------------------------
asm void fn_80279FD0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    beq lbl_80279FF8
    mr r31, r5
    b lbl_8027A014
lbl_80279FF8:
    lwz r0, lbl_8049DC50
    lis r5, lbl_8040B840@ha
    addi r5, r5, lbl_8040B840@l
    xori r6, r0, 0x1
    mulli r0, r6, 0x16
    stw r6, lbl_8049DC50
    add r31, r5, r0
lbl_8027A014:
    cmpwi r3, 0x0
    beq lbl_8027A070
    cmpwi r4, 0x0
    beq lbl_8027A04C
    stw r3, 0xc(r1)
    addi r3, r1, 0xc
    bl fn_80336AC8
    mr r5, r3
    mr r3, r31
    mr r6, r30
    la r4, lbl_8049CE10
    opword 0x4CC63182
    bl sprintf
    b lbl_8027A098
lbl_8027A04C:
    stw r3, 0x8(r1)
    addi r3, r1, 0x8
    bl fn_80336AC8
    mr r5, r3
    mr r3, r31
    la r4, lbl_8049CE18
    opword 0x4CC63182
    bl sprintf
    b lbl_8027A098
lbl_8027A070:
    cmpwi r4, 0x0
    beq lbl_8027A090
    mr r3, r31
    mr r5, r30
    la r4, lbl_8049CE1C
    opword 0x4CC63182
    bl sprintf
    b lbl_8027A098
lbl_8027A090:
    li r0, 0x0
    stb r0, 0x0(r31)
lbl_8027A098:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8027A0B4
// ----------------------------------------------------------------------------
asm void fn_8027A0B4() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    li r26, 0x0
    bl fn_80255EDC
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8027A0E4
    li r3, 0x0
    b lbl_8027A138
lbl_8027A0E4:
    li r29, 0x0
    lis r31, 0x7f00
lbl_8027A0EC:
    lwz r3, 0xc(r30)
    lwzx r27, r3, r29
    cmpwi r27, 0x0
    beq lbl_8027A134
    lwz r28, 0x0(r27)
    addi r3, r31, 0x1
    bl fn_80336B28
    cmplw r28, r3
    beq lbl_8027A12C
    mr r26, r28
    mr r3, r27
    bl fn_802560A8
    cmpwi r3, 0x0
    beq lbl_8027A12C
    mr r3, r28
    b lbl_8027A138
lbl_8027A12C:
    addi r29, r29, 0x4
    b lbl_8027A0EC
lbl_8027A134:
    mr r3, r26
lbl_8027A138:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8027A150
// ----------------------------------------------------------------------------
asm void fn_8027A150() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_23
    lwz r0, lbl_8049DC6C
    li r5, 0x8
    stw r5, 0xc(r1)
    mr r24, r3
    cmpwi r0, 0x0
    mr r25, r4
    beq lbl_8027A1D0
    lwz r0, lbl_8049DC68
    cmpwi r0, 0x0
    beq lbl_8027A1D0
    lwz r0, lbl_8049DC64
    cmpwi r0, 0x0
    beq lbl_8027A1D0
    lwz r0, lbl_8049DC60
    cmpwi r0, 0x0
    beq lbl_8027A1D0
    lwz r0, lbl_8049DC5C
    cmpwi r0, 0x0
    beq lbl_8027A1D0
    lwz r0, lbl_8049DC58
    cmpwi r0, 0x0
    beq lbl_8027A1D0
    lwz r0, lbl_8049DC54
    cmpwi r0, 0x0
    beq lbl_8027A1D0
    li r3, 0x0
    b lbl_8027A464
lbl_8027A1D0:
    cmpwi r3, -0x1
    beq lbl_8027A460
    lis r26, lbl_8040B880@ha
    li r29, 0x1
    addi r28, r26, lbl_8040B880@l
    li r30, 0x0
    lis r27, lbl_8049CE20@ha
    li r31, 0x8
    b lbl_8027A450
lbl_8027A1F4:
    mr r3, r24
    addi r4, r26, lbl_8040B880@l
    addi r7, r1, 0x18
    addi r8, r1, 0xc
    li r5, 0x200
    li r6, 0x0
    bl recvfrom
    cmpwi r3, -0x1
    mr r23, r3
    bne lbl_8027A228
    mr r3, r24
    bl GOAGetLastError
    b lbl_8027A460
lbl_8027A228:
    addi r3, r26, lbl_8040B880@l
    addi r4, r27, lbl_8049CE20@l
    li r5, 0x6
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_8027A248
    li r3, 0x1
    b lbl_8027A464
lbl_8027A248:
    cmpwi r23, 0x15
    lbz r0, 0x7(r28)
    bge lbl_8027A25C
    li r3, 0x1
    b lbl_8027A464
lbl_8027A25C:
    cmplwi r0, 0x2
    bne lbl_8027A310
    mr r4, r28
    addi r3, r1, 0x20
    li r5, 0x15
    bl memcpy
    lbz r0, 0x2c(r1)
    cmpwi r0, 0x2
    beq lbl_8027A2C0
    bge lbl_8027A290
    cmpwi r0, 0x1
    bge lbl_8027A29C
    b lbl_8027A448
lbl_8027A290:
    cmpwi r0, 0x4
    bge lbl_8027A448
    b lbl_8027A2E8
lbl_8027A29C:
    stw r29, lbl_8049DC6C
    lhz r3, 0x1a(r1)
    bl fn_80336B20
    mr r0, r3
    lwz r3, 0x1c(r1)
    clrlwi r4, r0, 16
    li r5, 0x0
    bl fn_80279FD0
    b lbl_8027A448
lbl_8027A2C0:
    stw r30, 0x80(r25)
    stw r29, lbl_8049DC68
    lhz r3, 0x1a(r1)
    bl fn_80336B20
    mr r0, r3
    lwz r3, 0x1c(r1)
    clrlwi r4, r0, 16
    li r5, 0x0
    bl fn_80279FD0
    b lbl_8027A448
lbl_8027A2E8:
    stw r30, 0x84(r25)
    stw r29, lbl_8049DC64
    lhz r3, 0x1a(r1)
    bl fn_80336B20
    mr r0, r3
    lwz r3, 0x1c(r1)
    clrlwi r4, r0, 16
    li r5, 0x0
    bl fn_80279FD0
    b lbl_8027A448
lbl_8027A310:
    cmplwi r0, 0xb
    bne lbl_8027A448
    mr r4, r28
    addi r3, r1, 0x20
    li r5, 0x15
    bl memcpy
    lwz r3, 0x28(r1)
    bl fn_80336B1C
    cmpwi r3, 0x2
    stw r3, 0x28(r1)
    beq lbl_8027A374
    bge lbl_8027A350
    cmpwi r3, 0x0
    beq lbl_8027A35C
    bge lbl_8027A36C
    b lbl_8027A378
lbl_8027A350:
    cmpwi r3, 0x4
    bge lbl_8027A378
    b lbl_8027A364
lbl_8027A35C:
    stw r29, lbl_8049DC60
    b lbl_8027A378
lbl_8027A364:
    stw r29, lbl_8049DC5C
    b lbl_8027A378
lbl_8027A36C:
    stw r29, lbl_8049DC58
    b lbl_8027A378
lbl_8027A374:
    stw r29, lbl_8049DC54
lbl_8027A378:
    bl fn_8027A0B4
    lwz r0, 0x28(r1)
    addi r4, r1, 0x10
    addi r5, r1, 0x8
    slwi r0, r0, 4
    add r6, r25, r0
    stw r3, 0x94(r6)
    mr r3, r24
    stw r31, 0x8(r1)
    bl getsockname
    cmpwi r3, -0x1
    bne lbl_8027A3B0
    li r3, 0x0
    b lbl_8027A3B4
lbl_8027A3B0:
    lhz r3, 0x12(r1)
lbl_8027A3B4:
    bl fn_80336B20
    lwz r0, 0x28(r1)
    slwi r0, r0, 4
    add r4, r25, r0
    sth r3, 0x98(r4)
    lwz r0, 0x28(r1)
    lwz r4, 0x2f(r1)
    slwi r0, r0, 4
    add r3, r25, r0
    stw r4, 0x9c(r3)
    lhz r3, 0x33(r1)
    bl fn_80336B20
    lwz r0, 0x28(r1)
    slwi r0, r0, 4
    add r4, r25, r0
    sth r3, 0xa0(r4)
    lhz r3, 0x1a(r1)
    bl fn_80336B20
    mr r0, r3
    lwz r3, 0x1c(r1)
    clrlwi r4, r0, 16
    li r5, 0x0
    bl fn_80279FD0
    lwz r0, 0x28(r1)
    slwi r0, r0, 4
    add r0, r25, r0
    addic. r23, r0, 0x94
    bne lbl_8027A428
    b lbl_8027A448
lbl_8027A428:
    lwz r3, 0x0(r23)
    li r5, 0x0
    lhz r4, 0x4(r23)
    bl fn_80279FD0
    lwz r3, 0x8(r23)
    li r5, 0x0
    lhz r4, 0xc(r23)
    bl fn_80279FD0
lbl_8027A448:
    cmpwi r24, -0x1
    beq lbl_8027A460
lbl_8027A450:
    mr r3, r24
    bl fn_80255E4C
    cmpwi r3, 0x0
    bne lbl_8027A1F4
lbl_8027A460:
    li r3, 0x1
lbl_8027A464:
    addi r11, r1, 0xa0
    bl _restgpr_23
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// fn_8027A47C
// ----------------------------------------------------------------------------
asm void fn_8027A47C() {
    nofralloc
    b fn_8027A150
}

// ----------------------------------------------------------------------------
// fn_8027A480
// ----------------------------------------------------------------------------
asm void fn_8027A480() {
    nofralloc
    lwz r6, 0x9c(r3)
    li r5, 0x6
    li r4, 0x4
    li r0, 0x1
    cmpwi r6, 0x0
    stw r5, 0x8c(r3)
    stw r4, 0x88(r3)
    stw r0, 0xd4(r3)
    beq lbl_8027A4BC
    lwz r0, 0xac(r3)
    cmpwi r0, 0x0
    beq lbl_8027A4BC
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x0
    bne lbl_8027A4C4
lbl_8027A4BC:
    li r3, 0x0
    blr
lbl_8027A4C4:
    lwz r5, 0x84(r3)
    cmpwi r5, 0x0
    bne lbl_8027A4F4
    lwz r0, 0x80(r3)
    cmpwi r0, 0x0
    bne lbl_8027A4F4
    lwz r0, 0x94(r3)
    cmplw r6, r0
    bne lbl_8027A4F4
    li r0, 0x0
    stw r0, 0x8c(r3)
    b lbl_8027A670
lbl_8027A4F4:
    lwz r0, 0x94(r3)
    cmplw r6, r0
    bne lbl_8027A50C
    li r0, 0x1
    stw r0, 0x8c(r3)
    b lbl_8027A670
lbl_8027A50C:
    lwz r6, 0x80(r3)
    cmpwi r6, 0x0
    bne lbl_8027A554
    cmpwi r5, 0x0
    bne lbl_8027A554
    lhz r4, 0xb0(r3)
    lhz r0, 0xc0(r3)
    subf r0, r4, r0
    srawi r4, r0, 31
    xor r0, r4, r0
    subf r0, r4, r0
    cmpwi r0, 0x1
    blt lbl_8027A554
    li r4, 0x5
    li r0, 0x0
    stw r4, 0x8c(r3)
    stw r0, 0x88(r3)
    b lbl_8027A670
lbl_8027A554:
    cmpwi r6, 0x0
    beq lbl_8027A598
    cmpwi r5, 0x0
    bne lbl_8027A598
    lhz r4, 0xb0(r3)
    lhz r0, 0xc0(r3)
    subf r0, r4, r0
    srawi r4, r0, 31
    xor r0, r4, r0
    subf r0, r4, r0
    cmpwi r0, 0x1
    blt lbl_8027A598
    li r4, 0x5
    li r0, 0x2
    stw r4, 0x8c(r3)
    stw r0, 0x88(r3)
    b lbl_8027A670
lbl_8027A598:
    cmpwi r6, 0x0
    bne lbl_8027A5DC
    cmpwi r5, 0x0
    beq lbl_8027A5DC
    lhz r4, 0xb0(r3)
    lhz r0, 0xc0(r3)
    subf r0, r4, r0
    srawi r4, r0, 31
    xor r0, r4, r0
    subf r0, r4, r0
    cmpwi r0, 0x1
    blt lbl_8027A5DC
    li r4, 0x5
    li r0, 0x3
    stw r4, 0x8c(r3)
    stw r0, 0x88(r3)
    b lbl_8027A670
lbl_8027A5DC:
    cmpwi r6, 0x0
    beq lbl_8027A620
    cmpwi r5, 0x0
    beq lbl_8027A620
    lhz r4, 0xb0(r3)
    lhz r0, 0xc0(r3)
    subf r0, r4, r0
    srawi r4, r0, 31
    xor r0, r4, r0
    subf r0, r4, r0
    cmpwi r0, 0x1
    blt lbl_8027A620
    li r4, 0x5
    li r0, 0x1
    stw r4, 0x8c(r3)
    stw r0, 0x88(r3)
    b lbl_8027A670
lbl_8027A620:
    cmpwi cr1, r5, 0x0
    beq cr1, lbl_8027A634
    li r0, 0x4
    stw r0, 0x8c(r3)
    b lbl_8027A670
lbl_8027A634:
    cmpwi r6, 0x0
    beq lbl_8027A64C
    bne cr1, lbl_8027A64C
    li r0, 0x3
    stw r0, 0x8c(r3)
    b lbl_8027A670
lbl_8027A64C:
    cmpwi r6, 0x0
    bne lbl_8027A668
    cmpwi r5, 0x0
    bne lbl_8027A668
    li r0, 0x2
    stw r0, 0x8c(r3)
    b lbl_8027A670
lbl_8027A668:
    li r0, 0x6
    stw r0, 0x8c(r3)
lbl_8027A670:
    lhz r6, 0x98(r3)
    lhz r5, 0xa0(r3)
    cmplw r5, r6
    bne lbl_8027A6AC
    lhz r4, 0xb0(r3)
    lhz r0, 0xa8(r3)
    cmplw r4, r0
    bne lbl_8027A6AC
    lhz r4, 0xc0(r3)
    lhz r0, 0xb8(r3)
    cmplw r4, r0
    bne lbl_8027A6AC
    li r0, 0x1
    stw r0, 0x90(r3)
    b lbl_8027A718
lbl_8027A6AC:
    lhz r4, 0xb0(r3)
    cmplw r5, r4
    bne lbl_8027A6D0
    lhz r0, 0xc0(r3)
    cmplw r4, r0
    bne lbl_8027A6D0
    li r0, 0x2
    stw r0, 0x90(r3)
    b lbl_8027A718
lbl_8027A6D0:
    cmplw r5, r6
    bne lbl_8027A6F4
    lhz r0, 0xc0(r3)
    subf r0, r4, r0
    cmpwi r0, 0x1
    bne lbl_8027A6F4
    li r0, 0x4
    stw r0, 0x90(r3)
    b lbl_8027A718
lbl_8027A6F4:
    lhz r0, 0xc0(r3)
    subf r0, r4, r0
    cmpwi r0, 0x1
    bne lbl_8027A710
    li r0, 0x3
    stw r0, 0x90(r3)
    b lbl_8027A718
lbl_8027A710:
    li r0, 0x0
    stw r0, 0x90(r3)
lbl_8027A718:
    lhz r4, 0xd0(r3)
    cmpwi r4, 0x0
    beq lbl_8027A738
    lhz r0, 0xa0(r3)
    cmplw r0, r4
    beq lbl_8027A738
    li r0, 0x0
    stw r0, 0xd4(r3)
lbl_8027A738:
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// fn_8027A740
// ----------------------------------------------------------------------------
asm void fn_8027A740() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8049DC70
    cmpwi r3, 0x0
    beq lbl_8027A764
    bl fn_802535C4
    li r0, 0x0
    stw r0, lbl_8049DC70
lbl_8027A764:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8027A774
// ----------------------------------------------------------------------------
asm void fn_8027A774() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    li r26, 0x0
    bl fn_80255EDC
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8027A7A4
    li r3, 0x0
    b lbl_8027A7F8
lbl_8027A7A4:
    li r29, 0x0
    lis r31, 0x7f00
lbl_8027A7AC:
    lwz r3, 0xc(r30)
    lwzx r27, r3, r29
    cmpwi r27, 0x0
    beq lbl_8027A7F4
    lwz r28, 0x0(r27)
    addi r3, r31, 0x1
    bl fn_80336B28
    cmplw r28, r3
    beq lbl_8027A7EC
    mr r26, r28
    mr r3, r27
    bl fn_802560A8
    cmpwi r3, 0x0
    beq lbl_8027A7EC
    mr r3, r28
    b lbl_8027A7F8
lbl_8027A7EC:
    addi r29, r29, 0x4
    b lbl_8027A7AC
lbl_8027A7F4:
    mr r3, r26
lbl_8027A7F8:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8027A810
// ----------------------------------------------------------------------------
asm void fn_8027A810() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    cmpwi r6, 0x0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    stw r29, 0x74(r1)
    mr r29, r4
    stw r4, 0x44(r3)
    stw r5, 0x48(r3)
    beq lbl_8027A850
    mr r4, r6
    li r5, 0x8
    addi r3, r3, 0x4c
    bl memcpy
lbl_8027A850:
    subi r0, r29, 0x1
    cmplwi r0, 0x1
    bgt lbl_8027A904
    lwz r12, 0x3c(r31)
    li r0, 0x3
    stw r0, 0x10(r31)
    addi r5, r31, 0x4c
    lwz r3, 0x44(r31)
    lwz r4, 0x48(r31)
    lwz r6, 0x40(r31)
    mtctr r12
    bctrl
    lwz r0, lbl_8049DC70
    lwz r30, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_8027A898
    li r30, 0x0
    b lbl_8027A8D8
lbl_8027A898:
    li r31, 0x0
    b lbl_8027A8C4
lbl_8027A8A0:
    lwz r3, lbl_8049DC70
    mr r4, r31
    bl fn_80253660
    lwz r0, 0x8(r3)
    cmpw r0, r30
    bne lbl_8027A8C0
    mr r30, r3
    b lbl_8027A8D8
lbl_8027A8C0:
    addi r31, r31, 0x1
lbl_8027A8C4:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    cmpw r31, r3
    blt lbl_8027A8A0
    li r30, 0x0
lbl_8027A8D8:
    cmpwi r30, 0x0
    beq lbl_8027A9E8
    lwz r3, 0x0(r30)
    cmpwi r3, -0x1
    beq lbl_8027A8F0
    bl closesocket
lbl_8027A8F0:
    li r3, -0x1
    li r0, 0x4
    stw r3, 0x0(r30)
    stw r0, 0x10(r30)
    b lbl_8027A9E8
lbl_8027A904:
    addi r3, r1, 0x18
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0xd
    stb r3, 0x1e(r1)
    stb r0, 0x1f(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0x20(r1)
    lis r30, lbl_8040A168@ha
    lwz r4, lbl_8049CE30
    addi r3, r30, lbl_8040A168@l
    lwz r5, 0xc(r31)
    lwz r0, lbl_8049DC84
    stb r5, 0x25(r1)
    lwz r5, 0x44(r31)
    cntlzw r5, r5
    stw r4, 0x27(r1)
    extrwi r4, r5, 8, 19
    stb r4, 0x26(r1)
    stw r0, 0x2b(r1)
    bl strlen
    cmpwi r3, 0x0
    beq lbl_8027A97C
    addi r3, r1, 0x2f
    addi r4, r30, lbl_8040A168@l
    li r5, 0x32
    bl memcpy
lbl_8027A97C:
    lwz r0, lbl_8049DC74
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_80336AC8
    lwz r29, 0x0(r31)
    li r0, 0x2
    lwz r30, lbl_8049DC74
    li r3, 0x6cfd
    stb r0, 0x11(r1)
    bl fn_80336B2C
    sth r3, 0x12(r1)
    mr r3, r29
    addi r4, r1, 0x18
    addi r7, r1, 0x10
    stw r30, 0x14(r1)
    li r5, 0x49
    li r6, 0x0
    li r8, 0x8
    bl sendto
    li r30, 0x5
    stw r30, 0x10(r31)
    bl fn_802565F0
    addi r3, r3, 0x3e8
    li r0, 0x0
    stw r3, 0x2c(r31)
    stw r0, 0x24(r31)
    stw r30, 0x28(r31)
lbl_8027A9E8:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// fn_8027AA04
// ----------------------------------------------------------------------------
asm void fn_8027AA04() {
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xc0
    bl _savegpr_26
    addi r31, r1, 0x48
    mr r29, r3
    mr r3, r31
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r0, 0x3
    li r27, 0x0
    stb r0, 0x4e(r1)
    stb r27, 0x4f(r1)
    lwz r3, 0x8(r29)
    bl fn_80336B28
    stw r3, 0x50(r1)
    lwz r0, 0xc(r29)
    stb r0, 0x55(r1)
    lwz r4, 0x4(r29)
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r0, r0, 31
    stb r0, 0x56(r1)
    bl fn_8027A774
    bl fn_80336B1C
    srwi r4, r3, 24
    extrwi r5, r3, 8, 8
    extrwi r0, r3, 8, 16
    stb r3, 0x5a(r1)
    lis r28, lbl_8040A168@ha
    addi r3, r1, 0x5d
    stb r4, 0x57(r1)
    addi r4, r28, lbl_8040A168@l
    stb r5, 0x58(r1)
    stb r0, 0x59(r1)
    stb r27, 0x5b(r1)
    stb r27, 0x5c(r1)
    bl strcpy
    addi r3, r28, lbl_8040A168@l
    bl strlen
    lbz r0, 0x56(r1)
    addi r30, r3, 0x16
    cmpwi r0, 0x0
    beq lbl_8027AB1C
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    bne lbl_8027AB1C
    lwz r0, lbl_8049DC74
    addi r3, r1, 0x18
    stb r27, 0x54(r1)
    stw r0, 0x18(r1)
    bl fn_80336AC8
    lwz r27, 0x4(r29)
    li r0, 0x2
    lwz r28, lbl_8049DC74
    li r3, 0x6cfd
    stb r0, 0x41(r1)
    bl fn_80336B2C
    sth r3, 0x42(r1)
    mr r3, r27
    mr r4, r31
    mr r5, r30
    stw r28, 0x44(r1)
    addi r7, r1, 0x40
    li r6, 0x0
    li r8, 0x8
    bl sendto
lbl_8027AB1C:
    lwz r0, 0x18(r29)
    cmpwi r0, 0x0
    bne lbl_8027AB7C
    lwz r0, lbl_8049DC74
    li r3, 0x1
    stb r3, 0x54(r1)
    addi r3, r1, 0x14
    stw r0, 0x14(r1)
    bl fn_80336AC8
    lwz r27, 0x0(r29)
    li r0, 0x2
    lwz r28, lbl_8049DC74
    li r3, 0x6cfd
    stb r0, 0x39(r1)
    bl fn_80336B2C
    sth r3, 0x3a(r1)
    mr r3, r27
    mr r4, r31
    mr r5, r30
    stw r28, 0x3c(r1)
    addi r7, r1, 0x38
    li r6, 0x0
    li r8, 0x8
    bl sendto
lbl_8027AB7C:
    lbz r0, 0x56(r1)
    cmpwi r0, 0x0
    beq lbl_8027AB90
    lwz r3, 0x4(r29)
    b lbl_8027AB94
lbl_8027AB90:
    lwz r3, 0x0(r29)
lbl_8027AB94:
    li r0, 0x8
    addi r4, r1, 0x30
    stw r0, 0x8(r1)
    addi r5, r1, 0x8
    bl getsockname
    cmpwi r3, -0x1
    bne lbl_8027ABB8
    li r3, 0x0
    b lbl_8027ABBC
lbl_8027ABB8:
    lhz r3, 0x32(r1)
lbl_8027ABBC:
    bl fn_80336B20
    extrwi r0, r3, 8, 16
    stb r3, 0x5c(r1)
    stb r0, 0x5b(r1)
    lwz r0, 0x1c(r29)
    cmpwi r0, 0x0
    bne lbl_8027AC28
    lwz r0, lbl_8049DC78
    li r28, 0x2
    stb r28, 0x54(r1)
    addi r3, r1, 0x10
    stw r0, 0x10(r1)
    bl fn_80336AC8
    lwz r27, 0x0(r29)
    li r3, 0x6cfd
    lwz r26, lbl_8049DC78
    stb r28, 0x29(r1)
    bl fn_80336B2C
    sth r3, 0x2a(r1)
    mr r3, r27
    mr r4, r31
    mr r5, r30
    stw r26, 0x2c(r1)
    addi r7, r1, 0x28
    li r6, 0x0
    li r8, 0x8
    bl sendto
lbl_8027AC28:
    lwz r0, 0x20(r29)
    cmpwi r0, 0x0
    bne lbl_8027AC88
    lwz r0, lbl_8049DC7C
    li r3, 0x3
    stb r3, 0x54(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bl fn_80336AC8
    lwz r26, 0x0(r29)
    li r0, 0x2
    lwz r27, lbl_8049DC7C
    li r3, 0x6cfd
    stb r0, 0x21(r1)
    bl fn_80336B2C
    sth r3, 0x22(r1)
    mr r3, r26
    mr r4, r31
    mr r5, r30
    stw r27, 0x24(r1)
    addi r7, r1, 0x20
    li r6, 0x0
    li r8, 0x8
    bl sendto
lbl_8027AC88:
    bl fn_802565F0
    addi r3, r3, 0x1f4
    li r0, 0xa
    stw r3, 0x2c(r29)
    addi r11, r1, 0xc0
    stw r0, 0x28(r29)
    bl _restgpr_26
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

// ----------------------------------------------------------------------------
// fn_8027ACB4
// ----------------------------------------------------------------------------
asm void fn_8027ACB4() {
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    cmpwi r3, -0x1
    stw r0, 0xf4(r1)
    stw r31, 0xec(r1)
    mr r31, r3
    stw r30, 0xe8(r1)
    li r30, 0x1
    beq lbl_8027AD9C
    bl fn_802565F0
    lwz r0, lbl_8049DC88
    subf r0, r0, r3
    cmplwi r0, 0x2710
    bge lbl_8027AD00
    lis r4, lbl_8040BA80@ha
    mr r3, r31
    addi r4, r4, lbl_8040BA80@l
    bl fn_8027A47C
    b lbl_8027AD04
lbl_8027AD00:
    li r3, 0x0
lbl_8027AD04:
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8027AD9C
    lis r31, lbl_8040BA80@ha
    addi r3, r31, lbl_8040BA80@l
    bl fn_8027A480
    addi r4, r31, lbl_8040BA80@l
    li r0, 0x1b
    addi r6, r1, 0x4
    subi r5, r4, 0x4
    mtctr r0
lbl_8027AD30:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_8027AD30
    lwz r12, lbl_8049DC8C
    addi r4, r1, 0x8
    mtctr r12
    bctrl
    lis r5, lbl_8040BA80@ha
    lwz r3, lbl_8049CE28
    addi r5, r5, lbl_8040BA80@l
    lwz r4, 0x8c(r5)
    cmpwi r3, -0x1
    lwz r0, 0x90(r5)
    stw r4, lbl_8049CE30
    stw r0, lbl_8049DC84
    beq lbl_8027AD7C
    bl closesocket
lbl_8027AD7C:
    lwz r3, lbl_8049CE2C
    li r0, -0x1
    stw r0, lbl_8049CE28
    cmpwi r3, -0x1
    beq lbl_8027AD94
    bl closesocket
lbl_8027AD94:
    li r0, -0x1
    stw r0, lbl_8049CE2C
lbl_8027AD9C:
    mr r3, r30
    lwz r31, 0xec(r1)
    lwz r30, 0xe8(r1)
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

// ----------------------------------------------------------------------------
// fn_8027ADB8
// ----------------------------------------------------------------------------
asm void fn_8027ADB8() {
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0x140
    bl _savegpr_24
    lwz r0, lbl_8049DBB8
    lis r25, lbl_8036B488@ha
    mr r26, r3
    mr r27, r4
    cmpwi r0, 0x1
    mr r28, r5
    mr r29, r6
    mr r30, r7
    mr r31, r8
    addi r25, r25, lbl_8036B488@l
    beq lbl_8027AE00
    li r3, 0x2
    b lbl_8027B0BC
lbl_8027AE00:
    lwz r0, lbl_8049DC74
    cmpwi r0, 0x0
    bne lbl_8027AE78
    lwz r24, lbl_8049DC98
    addi r7, r25, 0x0
    cmpwi r24, 0x0
    bne lbl_8027AE3C
    lis r6, lbl_8040A168@ha
    addi r3, r1, 0x8
    li r4, 0x40
    la r5, lbl_8049CE34
    addi r6, r6, lbl_8040A168@l
    opword 0x4CC63182
    bl snprintf
    addi r24, r1, 0x8
lbl_8027AE3C:
    mr r3, r24
    bl inet_addr
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_8027AE74
    mr r3, r24
    bl fn_802557FC
    cmpwi r3, 0x0
    bne lbl_8027AE68
    li r3, 0x0
    b lbl_8027AE74
lbl_8027AE68:
    lwz r3, 0xc(r3)
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
lbl_8027AE74:
    stw r3, lbl_8049DC74
lbl_8027AE78:
    lwz r0, lbl_8049DC78
    cmpwi r0, 0x0
    bne lbl_8027AEF0
    lwz r24, lbl_8049DC94
    addi r7, r25, 0x1c
    cmpwi r24, 0x0
    bne lbl_8027AEB4
    lis r6, lbl_8040A168@ha
    addi r3, r1, 0x48
    li r4, 0x40
    la r5, lbl_8049CE34
    addi r6, r6, lbl_8040A168@l
    opword 0x4CC63182
    bl snprintf
    addi r24, r1, 0x48
lbl_8027AEB4:
    mr r3, r24
    bl inet_addr
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_8027AEEC
    mr r3, r24
    bl fn_802557FC
    cmpwi r3, 0x0
    bne lbl_8027AEE0
    li r3, 0x0
    b lbl_8027AEEC
lbl_8027AEE0:
    lwz r3, 0xc(r3)
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
lbl_8027AEEC:
    stw r3, lbl_8049DC78
lbl_8027AEF0:
    lwz r0, lbl_8049DC7C
    cmpwi r0, 0x0
    bne lbl_8027AF68
    lwz r24, lbl_8049DC90
    addi r7, r25, 0x38
    cmpwi r24, 0x0
    bne lbl_8027AF2C
    lis r6, lbl_8040A168@ha
    addi r3, r1, 0x88
    li r4, 0x40
    la r5, lbl_8049CE34
    addi r6, r6, lbl_8040A168@l
    opword 0x4CC63182
    bl snprintf
    addi r24, r1, 0x88
lbl_8027AF2C:
    mr r3, r24
    bl inet_addr
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_8027AF64
    mr r3, r24
    bl fn_802557FC
    cmpwi r3, 0x0
    bne lbl_8027AF58
    li r3, 0x0
    b lbl_8027AF64
lbl_8027AF58:
    lwz r3, 0xc(r3)
    lwz r3, 0x0(r3)
    lwz r3, 0x0(r3)
lbl_8027AF64:
    stw r3, lbl_8049DC7C
lbl_8027AF68:
    lwz r0, lbl_8049DC74
    cmpwi r0, 0x0
    beq lbl_8027AF8C
    lwz r0, lbl_8049DC78
    cmpwi r0, 0x0
    beq lbl_8027AF8C
    lwz r0, lbl_8049DC7C
    cmpwi r0, 0x0
    bne lbl_8027AF94
lbl_8027AF8C:
    li r0, 0x0
    b lbl_8027AF98
lbl_8027AF94:
    li r0, 0x1
lbl_8027AF98:
    cmpwi r0, 0x0
    bne lbl_8027AFA8
    li r3, 0x3
    b lbl_8027B0BC
lbl_8027AFA8:
    addi r3, r1, 0xc8
    li r4, 0x0
    li r5, 0x54
    bl memset
    lwz r0, lbl_8049DC70
    cmpwi r0, 0x0
    bne lbl_8027AFD8
    li r3, 0x54
    li r4, 0x4
    li r5, 0x0
    bl fn_80253528
    stw r3, lbl_8049DC70
lbl_8027AFD8:
    lwz r3, lbl_8049DC70
    addi r4, r1, 0xc8
    bl fn_80253690
    lwz r3, lbl_8049DC70
    bl fn_80253658
    mr r4, r3
    lwz r3, lbl_8049DC70
    subi r4, r4, 0x1
    bl fn_80253660
    cmpwi r3, 0x0
    mr r24, r3
    bne lbl_8027B010
    li r3, 0x1
    b lbl_8027B0BC
lbl_8027B010:
    stw r26, 0x4(r3)
    li r4, 0x2
    li r5, 0x11
    stw r28, 0xc(r3)
    stw r27, 0x8(r3)
    stw r29, 0x38(r3)
    stw r30, 0x3c(r3)
    stw r31, 0x40(r3)
    li r3, 0x2
    bl socket
    stw r3, 0x0(r24)
    li r4, 0x0
    cmpwi r3, -0x1
    li r0, 0x5
    stw r4, 0x24(r24)
    stb r4, 0x36(r24)
    stb r4, 0x37(r24)
    stw r4, 0x30(r24)
    sth r4, 0x34(r24)
    stw r4, 0x28(r24)
    stw r0, 0x44(r24)
    bne lbl_8027B0B0
    li r25, 0x0
    b lbl_8027B098
lbl_8027B070:
    lwz r3, lbl_8049DC70
    mr r4, r25
    bl fn_80253660
    cmplw r24, r3
    bne lbl_8027B094
    lwz r3, lbl_8049DC70
    mr r4, r25
    bl detail_StartSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo
    b lbl_8027B0A8
lbl_8027B094:
    addi r25, r25, 0x1
lbl_8027B098:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    cmpw r25, r3
    blt lbl_8027B070
lbl_8027B0A8:
    li r3, 0x2
    b lbl_8027B0BC
lbl_8027B0B0:
    mr r3, r24
    bl fn_8027AA04
    li r3, 0x0
lbl_8027B0BC:
    addi r11, r1, 0x140
    bl _restgpr_24
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

// ----------------------------------------------------------------------------
// fn_8027B0D4
// ----------------------------------------------------------------------------
asm void fn_8027B0D4() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, lbl_8049DC70
    cmpwi r0, 0x0
    bne lbl_8027B100
    li r31, 0x0
    b lbl_8027B140
lbl_8027B100:
    li r31, 0x0
    b lbl_8027B12C
lbl_8027B108:
    lwz r3, lbl_8049DC70
    mr r4, r31
    bl fn_80253660
    lwz r0, 0x8(r3)
    cmpw r0, r30
    bne lbl_8027B128
    mr r31, r3
    b lbl_8027B140
lbl_8027B128:
    addi r31, r31, 0x1
lbl_8027B12C:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    cmpw r31, r3
    blt lbl_8027B108
    li r31, 0x0
lbl_8027B140:
    cmpwi r31, 0x0
    beq lbl_8027B168
    lwz r3, 0x0(r31)
    cmpwi r3, -0x1
    beq lbl_8027B158
    bl closesocket
lbl_8027B158:
    li r3, -0x1
    li r0, 0x4
    stw r3, 0x0(r31)
    stw r0, 0x10(r31)
lbl_8027B168:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8027B180
// ----------------------------------------------------------------------------
asm void fn_8027B180() {
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    li r4, 0x8
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    stw r29, 0xd4(r1)
    lwz r0, lbl_8049DC80
    stw r4, 0x10(r1)
    cmpwi r0, 0x0
    beq lbl_8027B1C8
    lwz r3, lbl_8049CE28
    bl fn_8027ACB4
    stw r3, lbl_8049DC80
    lwz r3, lbl_8049CE2C
    bl fn_8027ACB4
    stw r3, lbl_8049DC80
lbl_8027B1C8:
    cmpwi r31, 0x0
    beq lbl_8027B678
    lwz r0, 0x10(r31)
    cmpwi r0, 0x4
    bne lbl_8027B220
    li r30, 0x0
    b lbl_8027B20C
lbl_8027B1E4:
    lwz r3, lbl_8049DC70
    mr r4, r30
    bl fn_80253660
    cmplw r31, r3
    bne lbl_8027B208
    lwz r3, lbl_8049DC70
    mr r4, r30
    bl detail_StartSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandlePCcPCQ44nw4r3snd14SoundStartable9StartInfo
    b lbl_8027B678
lbl_8027B208:
    addi r30, r30, 0x1
lbl_8027B20C:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    cmpw r30, r3
    blt lbl_8027B1E4
    b lbl_8027B678
lbl_8027B220:
    lwz r0, 0x0(r31)
    cmpwi r0, -0x1
    beq lbl_8027B29C
    lis r30, lbl_8040BB60@ha
    b lbl_8027B28C
lbl_8027B234:
    lwz r3, 0x0(r31)
    addi r4, r30, lbl_8040BB60@l
    addi r7, r1, 0x30
    addi r8, r1, 0x10
    li r5, 0x200
    li r6, 0x0
    bl recvfrom
    cmpwi r3, -0x1
    bne lbl_8027B264
    lwz r3, 0x0(r31)
    bl GOAGetLastError
    b lbl_8027B29C
lbl_8027B264:
    mr r4, r3
    addi r3, r30, lbl_8040BB60@l
    addi r5, r1, 0x30
    bl fn_8027BED0
    lwz r0, 0x10(r31)
    cmpwi r0, 0x4
    beq lbl_8027B29C
    lwz r0, 0x0(r31)
    cmpwi r0, -0x1
    beq lbl_8027B29C
lbl_8027B28C:
    lwz r3, 0x0(r31)
    bl fn_80255E4C
    cmpwi r3, 0x0
    bne lbl_8027B234
lbl_8027B29C:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    beq lbl_8027B2B0
    cmpwi r0, 0x2
    bne lbl_8027B414
lbl_8027B2B0:
    bl fn_802565F0
    lwz r0, 0x2c(r31)
    cmplw r3, r0
    ble lbl_8027B414
    lwz r3, 0x24(r31)
    lwz r0, 0x28(r31)
    cmpw r3, r0
    ble lbl_8027B30C
    lwz r0, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_8027B2F4
    mr r3, r31
    li r4, 0x2
    li r5, -0x1
    li r6, 0x0
    bl fn_8027A810
    b lbl_8027B414
lbl_8027B2F4:
    mr r3, r31
    li r4, 0x3
    li r5, -0x1
    li r6, 0x0
    bl fn_8027A810
    b lbl_8027B414
lbl_8027B30C:
    lwz r0, 0x10(r31)
    addi r3, r3, 0x1
    stw r3, 0x24(r31)
    cmpwi r0, 0x0
    bne lbl_8027B32C
    mr r3, r31
    bl fn_8027AA04
    b lbl_8027B414
lbl_8027B32C:
    addi r3, r1, 0x84
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0x7
    stb r3, 0x8a(r1)
    stb r0, 0x8b(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0x8c(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x90(r1)
    lhz r3, 0x34(r31)
    bl fn_80336B2C
    sth r3, 0x94(r1)
    lbz r0, 0x36(r31)
    stb r0, 0x96(r1)
    lwz r0, 0x10(r31)
    cmpwi r0, 0x2
    bne lbl_8027B388
    li r0, 0x0
    b lbl_8027B38C
lbl_8027B388:
    li r0, 0x1
lbl_8027B38C:
    stb r0, 0x97(r1)
    addi r3, r1, 0xc
    lwz r0, 0x30(r31)
    stw r0, 0xc(r1)
    bl fn_80336AC8
    lwz r29, 0x4(r31)
    lhz r3, 0x34(r31)
    cmpwi r29, -0x1
    lwz r30, 0x30(r31)
    beq lbl_8027B3B8
    b lbl_8027B3BC
lbl_8027B3B8:
    lwz r29, 0x0(r31)
lbl_8027B3BC:
    li r0, 0x2
    stb r0, 0x21(r1)
    bl fn_80336B2C
    sth r3, 0x22(r1)
    mr r3, r29
    addi r4, r1, 0x84
    addi r7, r1, 0x20
    stw r30, 0x24(r1)
    li r5, 0x14
    li r6, 0x0
    li r8, 0x8
    bl sendto
    bl fn_802565F0
    lbz r0, 0x36(r31)
    addi r4, r3, 0x2bc
    li r3, 0x7
    stw r4, 0x2c(r31)
    cmpwi r0, 0x0
    stw r3, 0x28(r31)
    beq lbl_8027B414
    li r0, 0x1
    stb r0, 0x37(r31)
lbl_8027B414:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x3
    bne lbl_8027B480
    bl fn_802565F0
    lwz r0, 0x2c(r31)
    cmplw r3, r0
    ble lbl_8027B480
    li r0, 0x2
    stb r0, 0x29(r1)
    lhz r3, 0x34(r31)
    bl fn_80336B2C
    sth r3, 0x2a(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x2c(r1)
    lwz r5, 0x4(r31)
    cmpwi r5, -0x1
    bne lbl_8027B470
    lwz r5, 0x0(r31)
    mr r3, r31
    addi r6, r1, 0x28
    li r4, 0x0
    bl fn_8027A810
    b lbl_8027B480
lbl_8027B470:
    mr r3, r31
    addi r6, r1, 0x28
    li r4, 0x0
    bl fn_8027A810
lbl_8027B480:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x1
    bne lbl_8027B4B0
    bl fn_802565F0
    lwz r0, 0x2c(r31)
    cmplw r3, r0
    ble lbl_8027B4B0
    mr r3, r31
    li r4, 0x1
    li r5, -0x1
    li r6, 0x0
    bl fn_8027A810
lbl_8027B4B0:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x5
    bne lbl_8027B678
    bl fn_802565F0
    lwz r0, 0x2c(r31)
    cmplw r3, r0
    ble lbl_8027B678
    lwz r3, 0x24(r31)
    lwz r0, 0x28(r31)
    cmpw r3, r0
    ble lbl_8027B590
    lwz r12, 0x3c(r31)
    addi r5, r31, 0x4c
    lwz r3, 0x44(r31)
    lwz r4, 0x48(r31)
    lwz r6, 0x40(r31)
    mtctr r12
    bctrl
    lwz r0, 0x4(r31)
    cmpwi r0, -0x1
    bne lbl_8027B50C
    li r0, -0x1
    stw r0, 0x0(r31)
lbl_8027B50C:
    lwz r0, lbl_8049DC70
    lwz r30, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_8027B524
    li r30, 0x0
    b lbl_8027B564
lbl_8027B524:
    li r31, 0x0
    b lbl_8027B550
lbl_8027B52C:
    lwz r3, lbl_8049DC70
    mr r4, r31
    bl fn_80253660
    lwz r0, 0x8(r3)
    cmpw r0, r30
    bne lbl_8027B54C
    mr r30, r3
    b lbl_8027B564
lbl_8027B54C:
    addi r31, r31, 0x1
lbl_8027B550:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    cmpw r31, r3
    blt lbl_8027B52C
    li r30, 0x0
lbl_8027B564:
    cmpwi r30, 0x0
    beq lbl_8027B678
    lwz r3, 0x0(r30)
    cmpwi r3, -0x1
    beq lbl_8027B57C
    bl closesocket
lbl_8027B57C:
    li r3, -0x1
    li r0, 0x4
    stw r3, 0x0(r30)
    stw r0, 0x10(r30)
    b lbl_8027B678
lbl_8027B590:
    addi r3, r1, 0x38
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0xd
    stb r3, 0x3e(r1)
    stb r0, 0x3f(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0x40(r1)
    lwz r0, 0xc(r31)
    stb r0, 0x45(r1)
    lwz r0, 0x44(r31)
    cmpwi r0, 0x0
    bne lbl_8027B5D8
    li r5, 0x1
    b lbl_8027B5DC
lbl_8027B5D8:
    li r5, 0x0
lbl_8027B5DC:
    lwz r4, lbl_8049CE30
    lis r30, lbl_8040A168@ha
    lwz r0, lbl_8049DC84
    addi r3, r30, lbl_8040A168@l
    stb r5, 0x46(r1)
    stw r4, 0x47(r1)
    stw r0, 0x4b(r1)
    bl strlen
    cmpwi r3, 0x0
    beq lbl_8027B614
    addi r3, r1, 0x4f
    addi r4, r30, lbl_8040A168@l
    li r5, 0x32
    bl memcpy
lbl_8027B614:
    lwz r0, lbl_8049DC74
    addi r3, r1, 0x8
    stw r0, 0x8(r1)
    bl fn_80336AC8
    lwz r29, 0x0(r31)
    li r0, 0x2
    lwz r30, lbl_8049DC74
    li r3, 0x6cfd
    stb r0, 0x19(r1)
    bl fn_80336B2C
    sth r3, 0x1a(r1)
    mr r3, r29
    addi r4, r1, 0x38
    addi r7, r1, 0x18
    stw r30, 0x1c(r1)
    li r5, 0x49
    li r6, 0x0
    li r8, 0x8
    bl sendto
    lwz r3, 0x24(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    bl fn_802565F0
    addi r0, r3, 0x3e8
    stw r0, 0x2c(r31)
lbl_8027B678:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

// ----------------------------------------------------------------------------
// fn_8027B694
// ----------------------------------------------------------------------------
asm void fn_8027B694() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8049DC70
    cmpwi r3, 0x0
    beq lbl_8027B6BC
    bl fn_80253658
    cmpwi r3, 0x0
    bne lbl_8027B6C8
lbl_8027B6BC:
    li r3, 0x0
    bl fn_8027B180
    b lbl_8027B6F4
lbl_8027B6C8:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    subi r31, r3, 0x1
    b lbl_8027B6EC
lbl_8027B6D8:
    lwz r3, lbl_8049DC70
    mr r4, r31
    bl fn_80253660
    bl fn_8027B180
    subi r31, r31, 0x1
lbl_8027B6EC:
    cmpwi r31, 0x0
    bge lbl_8027B6D8
lbl_8027B6F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8027B708
// ----------------------------------------------------------------------------
asm void fn_8027B708() {
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stw r31, 0xcc(r1)
    mr r31, r3
    addi r3, r1, 0xc
    stw r30, 0xc8(r1)
    stw r29, 0xc4(r1)
    mr r29, r5
    stw r28, 0xc0(r1)
    mr r28, r4
    lwz r0, 0xc(r4)
    stw r0, 0xc(r1)
    bl fn_80336AC8
    lhz r3, 0x10(r28)
    bl fn_80336B20
    lbz r0, 0x13(r28)
    cmpwi r0, 0x0
    bne lbl_8027B7CC
    addi r3, r1, 0x6c
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0x6
    stb r3, 0x72(r1)
    stb r0, 0x73(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0x74(r1)
    lwz r0, 0xc(r31)
    stb r0, 0x79(r1)
    lhz r3, 0x2(r29)
    bl fn_80336B20
    lwz r30, 0x4(r29)
    li r0, 0x2
    lwz r29, 0x0(r31)
    clrlwi r3, r3, 16
    stb r0, 0x19(r1)
    bl fn_80336B2C
    sth r3, 0x1a(r1)
    mr r3, r29
    addi r4, r1, 0x6c
    addi r7, r1, 0x18
    stw r30, 0x1c(r1)
    li r5, 0x15
    li r6, 0x0
    li r8, 0x8
    bl sendto
lbl_8027B7CC:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x2
    bge lbl_8027B934
    lbz r0, 0x13(r28)
    cmpwi r0, 0x0
    beq lbl_8027B818
    cmplwi r0, 0x1
    li r4, 0x4
    bne lbl_8027B7F8
    li r4, 0x1
    b lbl_8027B804
lbl_8027B7F8:
    cmplwi r0, 0x2
    bne lbl_8027B804
    li r4, 0x2
lbl_8027B804:
    mr r3, r31
    li r5, -0x1
    li r6, 0x0
    bl fn_8027A810
    b lbl_8027B934
lbl_8027B818:
    lwz r0, 0xc(r28)
    stw r0, 0x30(r31)
    lhz r3, 0x10(r28)
    bl fn_80336B20
    lwz r12, 0x38(r31)
    li r5, 0x0
    li r0, 0x2
    sth r3, 0x34(r31)
    lwz r4, 0x40(r31)
    li r3, 0x2
    stw r5, 0x24(r31)
    stw r0, 0x10(r31)
    mtctr r12
    bctrl
    addi r3, r1, 0x20
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0x7
    stb r3, 0x26(r1)
    stb r0, 0x27(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0x28(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x2c(r1)
    lhz r3, 0x34(r31)
    bl fn_80336B2C
    sth r3, 0x30(r1)
    addi r3, r1, 0x8
    lbz r0, 0x36(r31)
    stb r0, 0x32(r1)
    lwz r5, 0x10(r31)
    subfic r4, r5, 0x2
    subi r0, r5, 0x2
    or r0, r4, r0
    srwi r0, r0, 31
    stb r0, 0x33(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x8(r1)
    bl fn_80336AC8
    lwz r30, 0x4(r31)
    lhz r3, 0x34(r31)
    cmpwi r30, -0x1
    lwz r29, 0x30(r31)
    beq lbl_8027B8D8
    b lbl_8027B8DC
lbl_8027B8D8:
    lwz r30, 0x0(r31)
lbl_8027B8DC:
    li r0, 0x2
    stb r0, 0x11(r1)
    bl fn_80336B2C
    sth r3, 0x12(r1)
    mr r3, r30
    addi r4, r1, 0x20
    addi r7, r1, 0x10
    stw r29, 0x14(r1)
    li r5, 0x14
    li r6, 0x0
    li r8, 0x8
    bl sendto
    bl fn_802565F0
    lbz r0, 0x36(r31)
    addi r4, r3, 0x2bc
    li r3, 0x7
    stw r4, 0x2c(r31)
    cmpwi r0, 0x0
    stw r3, 0x28(r31)
    beq lbl_8027B934
    li r0, 0x1
    stb r0, 0x37(r31)
lbl_8027B934:
    lwz r0, 0xd4(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    lwz r28, 0xc0(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

// ----------------------------------------------------------------------------
// fn_8027B954
// ----------------------------------------------------------------------------
asm void fn_8027B954() {
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stw r31, 0x12c(r1)
    mr r31, r3
    stw r30, 0x128(r1)
    mr r30, r4
    stw r29, 0x124(r1)
    mr r29, r5
    lwz r0, 0x10(r3)
    cmpwi r0, 0x2
    blt lbl_8027BCB0
    lwz r0, 0x4(r5)
    addi r3, r1, 0x14
    stw r0, 0x14(r1)
    bl fn_80336AC8
    lhz r3, 0x2(r29)
    bl fn_80336B20
    lwz r0, 0x4(r29)
    stw r0, 0x30(r31)
    lhz r3, 0x2(r29)
    bl fn_80336B20
    li r0, 0x1
    sth r3, 0x34(r31)
    stb r0, 0x36(r31)
    lbz r0, 0x12(r30)
    cmpwi r0, 0x0
    bne lbl_8027BAAC
    addi r3, r1, 0xc8
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0x7
    stb r3, 0xce(r1)
    stb r0, 0xcf(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0xd0(r1)
    lwz r0, 0x30(r31)
    stw r0, 0xd4(r1)
    lhz r3, 0x34(r31)
    bl fn_80336B2C
    sth r3, 0xd8(r1)
    addi r3, r1, 0x10
    lbz r0, 0x36(r31)
    stb r0, 0xda(r1)
    lwz r5, 0x10(r31)
    subfic r4, r5, 0x2
    subi r0, r5, 0x2
    or r0, r4, r0
    srwi r0, r0, 31
    stb r0, 0xdb(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x10(r1)
    bl fn_80336AC8
    lwz r29, 0x4(r31)
    lhz r3, 0x34(r31)
    cmpwi r29, -0x1
    lwz r30, 0x30(r31)
    beq lbl_8027BA4C
    b lbl_8027BA50
lbl_8027BA4C:
    lwz r29, 0x0(r31)
lbl_8027BA50:
    li r0, 0x2
    stb r0, 0x29(r1)
    bl fn_80336B2C
    sth r3, 0x2a(r1)
    mr r3, r29
    addi r4, r1, 0xc8
    addi r7, r1, 0x28
    stw r30, 0x2c(r1)
    li r5, 0x14
    li r6, 0x0
    li r8, 0x8
    bl sendto
    bl fn_802565F0
    lbz r0, 0x36(r31)
    addi r4, r3, 0x2bc
    li r3, 0x7
    stw r4, 0x2c(r31)
    cmpwi r0, 0x0
    stw r3, 0x28(r31)
    beq lbl_8027BCB0
    li r0, 0x1
    stb r0, 0x37(r31)
    b lbl_8027BCB0
lbl_8027BAAC:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x2
    bne lbl_8027BBC0
    lbz r0, 0x37(r31)
    cmpwi r0, 0x0
    bne lbl_8027BBA8
    addi r3, r1, 0x7c
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0x7
    stb r3, 0x82(r1)
    stb r0, 0x83(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0x84(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x88(r1)
    lhz r3, 0x34(r31)
    bl fn_80336B2C
    sth r3, 0x8c(r1)
    addi r3, r1, 0xc
    lbz r0, 0x36(r31)
    stb r0, 0x8e(r1)
    lwz r5, 0x10(r31)
    subfic r4, r5, 0x2
    subi r0, r5, 0x2
    or r0, r4, r0
    srwi r0, r0, 31
    stb r0, 0x8f(r1)
    lwz r0, 0x30(r31)
    stw r0, 0xc(r1)
    bl fn_80336AC8
    lwz r29, 0x4(r31)
    lhz r3, 0x34(r31)
    cmpwi r29, -0x1
    lwz r30, 0x30(r31)
    beq lbl_8027BB4C
    b lbl_8027BB50
lbl_8027BB4C:
    lwz r29, 0x0(r31)
lbl_8027BB50:
    li r0, 0x2
    stb r0, 0x21(r1)
    bl fn_80336B2C
    sth r3, 0x22(r1)
    mr r3, r29
    addi r4, r1, 0x7c
    addi r7, r1, 0x20
    stw r30, 0x24(r1)
    li r5, 0x14
    li r6, 0x0
    li r8, 0x8
    bl sendto
    bl fn_802565F0
    lbz r0, 0x36(r31)
    addi r4, r3, 0x2bc
    li r3, 0x7
    stw r4, 0x2c(r31)
    cmpwi r0, 0x0
    stw r3, 0x28(r31)
    beq lbl_8027BBA8
    li r0, 0x1
    stb r0, 0x37(r31)
lbl_8027BBA8:
    li r0, 0x3
    stw r0, 0x10(r31)
    bl fn_802565F0
    addi r0, r3, 0x1388
    stw r0, 0x2c(r31)
    b lbl_8027BCB0
lbl_8027BBC0:
    lbz r0, 0x13(r30)
    cmpwi r0, 0x0
    bne lbl_8027BCB0
    addi r3, r1, 0x30
    la r4, lbl_8049CE20
    li r5, 0x6
    bl memcpy
    li r3, 0x3
    li r0, 0x7
    stb r3, 0x36(r1)
    stb r0, 0x37(r1)
    lwz r3, 0x8(r31)
    bl fn_80336B28
    stw r3, 0x38(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x3c(r1)
    lhz r3, 0x34(r31)
    bl fn_80336B2C
    sth r3, 0x40(r1)
    addi r3, r1, 0x8
    lbz r0, 0x36(r31)
    stb r0, 0x42(r1)
    lwz r5, 0x10(r31)
    subfic r4, r5, 0x2
    subi r0, r5, 0x2
    or r0, r4, r0
    srwi r0, r0, 31
    stb r0, 0x43(r1)
    lwz r0, 0x30(r31)
    stw r0, 0x8(r1)
    bl fn_80336AC8
    lwz r29, 0x4(r31)
    lhz r3, 0x34(r31)
    cmpwi r29, -0x1
    lwz r30, 0x30(r31)
    beq lbl_8027BC54
    b lbl_8027BC58
lbl_8027BC54:
    lwz r29, 0x0(r31)
lbl_8027BC58:
    li r0, 0x2
    stb r0, 0x19(r1)
    bl fn_80336B2C
    sth r3, 0x1a(r1)
    mr r3, r29
    addi r4, r1, 0x30
    addi r7, r1, 0x18
    stw r30, 0x1c(r1)
    li r5, 0x14
    li r6, 0x0
    li r8, 0x8
    bl sendto
    bl fn_802565F0
    lbz r0, 0x36(r31)
    addi r4, r3, 0x2bc
    li r3, 0x7
    stw r4, 0x2c(r31)
    cmpwi r0, 0x0
    stw r3, 0x28(r31)
    beq lbl_8027BCB0
    li r0, 0x1
    stb r0, 0x37(r31)
lbl_8027BCB0:
    lwz r0, 0x134(r1)
    lwz r31, 0x12c(r1)
    lwz r30, 0x128(r1)
    lwz r29, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

// ----------------------------------------------------------------------------
// fn_8027BCCC
// ----------------------------------------------------------------------------
asm void fn_8027BCCC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    lbz r0, 0x7(r4)
    cmpwi r0, 0x2
    beq lbl_8027BDAC
    bge lbl_8027BD0C
    cmpwi r0, 0x1
    bge lbl_8027BD18
    b lbl_8027BEB4
lbl_8027BD0C:
    cmpwi r0, 0xe
    beq lbl_8027BDFC
    b lbl_8027BEB4
lbl_8027BD18:
    lbz r0, 0xc(r4)
    cmplwi r0, 0x3
    bgt lbl_8027BEB4
    clrlslwi r0, r0, 24, 2
    li r5, 0x1
    add r4, r3, r0
    stw r5, 0x14(r4)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_8027BEB4
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_8027BEB4
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_8027BEB4
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_8027BEB4
    lwz r0, 0x4(r3)
    cmpwi r0, -0x1
    beq lbl_8027BD7C
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_8027BEB4
lbl_8027BD7C:
    li r0, 0x1
    stw r0, 0x10(r3)
    bl fn_802565F0
    addis r3, r3, 0x1
    lwz r12, 0x38(r31)
    subi r0, r3, 0x15a0
    lwz r3, 0x10(r31)
    stw r0, 0x2c(r31)
    lwz r4, 0x40(r31)
    mtctr r12
    bctrl
    b lbl_8027BEB4
lbl_8027BDAC:
    li r0, 0x3
    stb r0, 0x7(r4)
    lhz r3, 0x2(r5)
    bl fn_80336B20
    lwz r30, 0x4(r30)
    li r0, 0x2
    lwz r31, 0x0(r31)
    clrlwi r3, r3, 16
    stb r0, 0x9(r1)
    bl fn_80336B2C
    sth r3, 0xa(r1)
    mr r3, r31
    mr r4, r29
    addi r7, r1, 0x8
    stw r30, 0xc(r1)
    li r5, 0x15
    li r6, 0x0
    li r8, 0x8
    bl sendto
    b lbl_8027BEB4
lbl_8027BDFC:
    lwz r12, 0x3c(r31)
    li r0, 0x6
    stw r0, 0x10(r3)
    addi r5, r31, 0x4c
    lwz r3, 0x44(r3)
    lwz r4, 0x48(r31)
    lwz r6, 0x40(r31)
    mtctr r12
    bctrl
    lwz r0, 0x4(r31)
    cmpwi r0, -0x1
    bne lbl_8027BE34
    li r0, -0x1
    stw r0, 0x0(r31)
lbl_8027BE34:
    lwz r0, lbl_8049DC70
    lwz r30, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_8027BE4C
    li r30, 0x0
    b lbl_8027BE8C
lbl_8027BE4C:
    li r31, 0x0
    b lbl_8027BE78
lbl_8027BE54:
    lwz r3, lbl_8049DC70
    mr r4, r31
    bl fn_80253660
    lwz r0, 0x8(r3)
    cmpw r0, r30
    bne lbl_8027BE74
    mr r30, r3
    b lbl_8027BE8C
lbl_8027BE74:
    addi r31, r31, 0x1
lbl_8027BE78:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    cmpw r31, r3
    blt lbl_8027BE54
    li r30, 0x0
lbl_8027BE8C:
    cmpwi r30, 0x0
    beq lbl_8027BEB4
    lwz r3, 0x0(r30)
    cmpwi r3, -0x1
    beq lbl_8027BEA4
    bl closesocket
lbl_8027BEA4:
    li r3, -0x1
    li r0, 0x4
    stw r3, 0x0(r30)
    stw r0, 0x10(r30)
lbl_8027BEB4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8027BED0
// ----------------------------------------------------------------------------
asm void fn_8027BED0() {
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    mr r30, r4
    la r4, lbl_8049CE20
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    mr r28, r5
    li r5, 0x6
    bl memcmp
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_8027C068
    lbz r29, 0x7(r31)
    addi r3, r1, 0x8
    lwz r0, 0x4(r28)
    stw r0, 0x8(r1)
    bl fn_80336AC8
    lhz r3, 0x2(r28)
    bl fn_80336B20
    cmplwi r29, 0x5
    beq lbl_8027BF3C
    cmplwi r29, 0x7
    bne lbl_8027BFE0
lbl_8027BF3C:
    cmpwi r30, 0x14
    blt lbl_8027C068
    mr r4, r31
    addi r3, r1, 0xc
    li r5, 0x14
    bl memcpy
    lwz r3, 0x14(r1)
    bl fn_80336B1C
    lwz r0, lbl_8049DC70
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_8027BF74
    li r3, 0x0
    b lbl_8027BFB0
lbl_8027BF74:
    li r30, 0x0
    b lbl_8027BF9C
lbl_8027BF7C:
    lwz r3, lbl_8049DC70
    mr r4, r30
    bl fn_80253660
    lwz r0, 0x8(r3)
    cmpw r0, r31
    bne lbl_8027BF98
    b lbl_8027BFB0
lbl_8027BF98:
    addi r30, r30, 0x1
lbl_8027BF9C:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    cmpw r30, r3
    blt lbl_8027BF7C
    li r3, 0x0
lbl_8027BFB0:
    cmpwi r3, 0x0
    beq lbl_8027C068
    cmplwi r29, 0x5
    bne lbl_8027BFD0
    mr r5, r28
    addi r4, r1, 0xc
    bl fn_8027B708
    b lbl_8027C068
lbl_8027BFD0:
    mr r5, r28
    addi r4, r1, 0xc
    bl fn_8027B954
    b lbl_8027C068
lbl_8027BFE0:
    cmpwi r30, 0x15
    blt lbl_8027C068
    mr r4, r31
    addi r3, r1, 0xc
    li r5, 0x15
    bl memcpy
    lwz r3, 0x14(r1)
    bl fn_80336B1C
    lwz r0, lbl_8049DC70
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_8027C018
    li r3, 0x0
    b lbl_8027C054
lbl_8027C018:
    li r30, 0x0
    b lbl_8027C040
lbl_8027C020:
    lwz r3, lbl_8049DC70
    mr r4, r30
    bl fn_80253660
    lwz r0, 0x8(r3)
    cmpw r0, r31
    bne lbl_8027C03C
    b lbl_8027C054
lbl_8027C03C:
    addi r30, r30, 0x1
lbl_8027C040:
    lwz r3, lbl_8049DC70
    bl fn_80253658
    cmpw r30, r3
    blt lbl_8027C020
    li r3, 0x0
lbl_8027C054:
    cmpwi r3, 0x0
    beq lbl_8027C068
    mr r5, r28
    addi r4, r1, 0xc
    bl fn_8027BCCC
lbl_8027C068:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

