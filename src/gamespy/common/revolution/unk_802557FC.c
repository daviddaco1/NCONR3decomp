#include "types.h"

// Translation unit: src/gamespy/common/revolution/unk_802557FC.cpp
// Total functions: 28

// Small Data symbols (@sda21)
extern float lbl_8049C7E0;
extern float lbl_8049C7E8;
extern float lbl_8049C7F0;
extern float lbl_8049DBA8;
extern float lbl_8049DBAC;
extern float lbl_8049DBB0;
extern float lbl_8049DBB4;
extern float lbl_8049DBB8;
extern float lbl_804A22F0;
extern float lbl_804A22F4;
extern float lbl_804A22F8;

// Global data symbols (@ha/@l)
extern u8 lbl_8035FBD8[];
extern u8 lbl_803687B8[];
extern u8 lbl_803687C8[];
extern u8 lbl_80409F98[];
extern u8 lbl_8040A110[];
extern u8 lbl_8040A168[];
extern u8 lbl_8040A1E8[];

// Forward declarations
extern void GSISocketSelect();
extern void OSCancelThread();
extern void OSGetTime();
extern void OSInitMutex();
extern void OSLockMutex();
extern void OSUnlockMutex();
extern void __div2i();
extern void _restgpr_23();
extern void _restgpr_27();
extern void _savegpr_23();
extern void _savegpr_27();
extern void closesocket();
extern void fn_802557FC();
extern void fn_80255D78();
extern void fn_80255DF0();
extern void fn_80255E4C();
extern void fn_80255E94();
extern void fn_80255EDC();
extern void fn_802560A8();
extern void fn_80256120();
extern void fn_80256170();
extern void fn_8025622C();
extern void fn_80256360();
extern void fn_80256428();
extern void fn_8025651C();
extern void fn_8025658C();
extern void fn_802565E8();
extern void fn_802565EC();
extern void fn_802565F0();
extern void fn_80256638();
extern void fn_80256674();
extern void fn_8025668C();
extern void fn_80256700();
extern void fn_80256A24();
extern void fn_80256C30();
extern void fn_80256C4C();
extern void fn_80256C5C();
extern void fn_80256C70();
extern void fn_80256C90();
extern void fn_80256E0C();
extern void fn_8031C828();
extern void fn_8031CDF0();
extern void fn_8031D460();
extern void fn_8031DAEC();
extern void fn_8033667C();
extern void fn_803369BC();
extern void fn_80336AC8();
extern void fn_80336B1C();
extern void fn_80336B2C();
extern void fn_80337090();
extern void fn_80337518();
extern void fn_8033761C();
extern void inet_addr();
extern void memcmp();
extern void memcpy();
extern void memset();
extern void recvfrom();
extern void sendto();
extern void socket();
extern void sprintf();
extern void strcmp();
extern void strcpy();
extern void strlen();
extern void strncmp();

// ----------------------------------------------------------------------------
// fn_802557FC
// ----------------------------------------------------------------------------
asm void fn_802557FC() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    mr r27, r3
    la r3, lbl_8049C7E0
    bl strlen
    mr r5, r3
    mr r4, r27
    la r3, lbl_8049C7E0
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_80255958
    lwz r0, lbl_8049DBA8
    cmpwi r0, 0x0
    beq lbl_80255950
    lis r3, lbl_80409F98@ha
    li r23, 0x0
    li r25, 0x0
    addi r24, r3, lbl_80409F98@l
lbl_80255850:
    lwz r3, lbl_8049DBA8
    lwzx r0, r3, r25
    cmpwi r0, 0x0
    beq lbl_802558FC
    li r27, 0x0
    li r26, 0x0
    b lbl_80255888
lbl_8025586C:
    cmpwi r3, 0x0
    beq lbl_80255880
    lwz r12, 0x4(r24)
    mtctr r12
    bctrl
lbl_80255880:
    addi r26, r26, 0x4
    addi r27, r27, 0x1
lbl_80255888:
    lwz r0, lbl_8049DBA8
    lwzx r3, r25, r0
    lwz r4, 0xc(r3)
    lwzx r3, r4, r26
    cmpwi r3, 0x0
    bne lbl_8025586C
    slwi r0, r27, 2
    lwzx r3, r4, r0
    cmpwi r3, 0x0
    beq lbl_802558BC
    lwz r12, 0x4(r24)
    mtctr r12
    bctrl
lbl_802558BC:
    lwz r3, lbl_8049DBA8
    lwzx r3, r3, r25
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_802558DC
    lwz r12, 0x4(r24)
    mtctr r12
    bctrl
lbl_802558DC:
    lwz r3, lbl_8049DBA8
    lwzx r3, r3, r25
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_802558FC
    lwz r12, 0x4(r24)
    mtctr r12
    bctrl
lbl_802558FC:
    lwz r3, lbl_8049DBA8
    lwzx r3, r3, r25
    cmpwi r3, 0x0
    beq lbl_80255918
    lwz r12, 0x4(r24)
    mtctr r12
    bctrl
lbl_80255918:
    addi r23, r23, 0x1
    addi r25, r25, 0x4
    cmplwi r23, 0x1f
    blt lbl_80255850
    lwz r3, lbl_8049DBA8
    cmpwi r3, 0x0
    beq lbl_80255948
    lis r4, lbl_80409F98@ha
    addi r4, r4, lbl_80409F98@l
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
lbl_80255948:
    li r0, 0x0
    stw r0, lbl_8049DBA8
lbl_80255950:
    li r3, 0x0
    b lbl_80255D60
lbl_80255958:
    lwz r0, lbl_8049DBA8
    cmpwi r0, 0x0
    bne lbl_80255988
    lis r4, lbl_80409F98@ha
    li r3, 0x7c
    lwz r12, lbl_80409F98@l(r4)
    mtctr r12
    bctrl
    stw r3, lbl_8049DBA8
    li r4, 0x0
    li r5, 0x7c
    bl memset
lbl_80255988:
    mr r3, r27
    bl strlen
    cmpwi r3, 0x0
    li r28, 0x0
    li r4, 0x0
    beq lbl_80255ABC
    cmplwi r3, 0x8
    subi r5, r3, 0x8
    ble lbl_80255A88
    addi r0, r5, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_80255A88
lbl_802559C0:
    add r23, r27, r4
    lbzx r0, r27, r4
    lbz r25, 0x1(r23)
    addi r26, r4, 0x1
    lbz r31, 0x2(r23)
    extsb r5, r0
    clrlslwi r0, r4, 29, 2
    addi r30, r4, 0x2
    slw r24, r5, r0
    lbz r29, 0x3(r23)
    addi r12, r4, 0x3
    lbz r11, 0x4(r23)
    addi r10, r4, 0x4
    lbz r9, 0x5(r23)
    addi r8, r4, 0x5
    lbz r7, 0x6(r23)
    addi r6, r4, 0x6
    addi r0, r4, 0x7
    lbz r5, 0x7(r23)
    extsb r25, r25
    clrlslwi r26, r26, 29, 2
    add r28, r28, r24
    slw r26, r25, r26
    extsb r31, r31
    clrlslwi r30, r30, 29, 2
    extsb r29, r29
    clrlslwi r12, r12, 29, 2
    add r28, r28, r26
    slw r30, r31, r30
    extsb r11, r11
    clrlslwi r10, r10, 29, 2
    slw r12, r29, r12
    add r28, r28, r30
    extsb r9, r9
    clrlslwi r8, r8, 29, 2
    slw r10, r11, r10
    add r28, r28, r12
    extsb r7, r7
    clrlslwi r6, r6, 29, 2
    slw r8, r9, r8
    add r28, r28, r10
    extsb r5, r5
    clrlslwi r0, r0, 29, 2
    slw r6, r7, r6
    add r28, r28, r8
    addi r4, r4, 0x8
    add r28, r28, r6
    slw r0, r5, r0
    add r28, r28, r0
    bdnz lbl_802559C0
lbl_80255A88:
    subf r0, r4, r3
    add r5, r27, r4
    mtctr r0
    cmplw r4, r3
    bge lbl_80255ABC
lbl_80255A9C:
    lbz r3, 0x0(r5)
    clrlslwi r0, r4, 29, 2
    addi r4, r4, 0x1
    addi r5, r5, 0x1
    extsb r3, r3
    slw r0, r3, r0
    add r28, r28, r0
    bdnz lbl_80255A9C
lbl_80255ABC:
    lis r3, 0x842
    lwz r30, lbl_8049DBA8
    addi r31, r3, 0x1085
    li r29, 0x0
    mulhwu r3, r31, r28
    subf r0, r3, r28
    srwi r0, r0, 1
    add r0, r0, r3
    srwi r0, r0, 4
    mulli r0, r0, 0x1f
    subf r28, r0, r28
lbl_80255AE8:
    mullw r0, r29, r29
    add r4, r28, r0
    mulhwu r3, r31, r4
    subf r0, r3, r4
    srwi r0, r0, 1
    add r0, r0, r3
    srwi r0, r0, 4
    mulli r0, r0, 0x1f
    subf r0, r0, r4
    slwi r0, r0, 2
    lwzx r23, r30, r0
    cmpwi r23, 0x0
    beq lbl_80255B38
    lwz r3, 0x10(r23)
    mr r4, r27
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_80255B38
    mr r3, r23
    b lbl_80255D60
lbl_80255B38:
    addi r29, r29, 0x1
    cmplwi r29, 0xf
    blt lbl_80255AE8
    slwi r0, r28, 2
    lwzx r0, r30, r0
    cmpwi r0, 0x0
    beq lbl_80255C00
    lis r3, 0x842
    li r0, 0x7
    addi r3, r3, 0x1085
    li r6, 0x1
    mtctr r0
lbl_80255B68:
    mullw r0, r6, r6
    add r5, r28, r0
    mulhwu r4, r3, r5
    subf r0, r4, r5
    srwi r0, r0, 1
    add r0, r0, r4
    srwi r0, r0, 4
    mulli r0, r0, 0x1f
    subf r4, r0, r5
    slwi r0, r4, 2
    lwzx r0, r30, r0
    cmpwi r0, 0x0
    bne lbl_80255BA4
    mr r28, r4
    b lbl_80255BEC
lbl_80255BA4:
    addi r6, r6, 0x1
    mullw r0, r6, r6
    add r5, r28, r0
    mulhwu r4, r3, r5
    subf r0, r4, r5
    srwi r0, r0, 1
    add r0, r0, r4
    srwi r0, r0, 4
    mulli r0, r0, 0x1f
    subf r4, r0, r5
    slwi r0, r4, 2
    lwzx r0, r30, r0
    cmpwi r0, 0x0
    bne lbl_80255BE4
    mr r28, r4
    b lbl_80255BEC
lbl_80255BE4:
    addi r6, r6, 0x1
    bdnz lbl_80255B68
lbl_80255BEC:
    cmplwi r6, 0xf
    bne lbl_80255C00
    mr r3, r27
    bl fn_80337090
    b lbl_80255D60
lbl_80255C00:
    mr r3, r27
    bl fn_80337090
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_80255C1C
    li r3, 0x0
    b lbl_80255D60
lbl_80255C1C:
    lis r4, lbl_80409F98@ha
    li r3, 0x14
    lwz r12, lbl_80409F98@l(r4)
    mtctr r12
    bctrl
    lwz r6, lbl_8049DBA8
    slwi r30, r28, 2
    li r5, 0x0
    stwx r3, r6, r30
    lwz r3, 0xc(r29)
    b lbl_80255C50
lbl_80255C48:
    addi r3, r3, 0x4
    addi r5, r5, 0x1
lbl_80255C50:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_80255C48
    lwzx r3, r6, r30
    li r4, 0x2
    addi r0, r5, 0x1
    li r5, 0x0
    sth r4, 0x8(r3)
    slwi r3, r0, 2
    lis r28, lbl_80409F98@ha
    lha r0, 0xa(r29)
    lwzx r4, r6, r30
    sth r0, 0xa(r4)
    lwzx r4, r6, r30
    stw r5, 0x0(r4)
    lwzx r4, r6, r30
    stw r5, 0x4(r4)
    lwz r12, lbl_80409F98@l(r28)
    mtctr r12
    bctrl
    lwz r4, lbl_8049DBA8
    li r23, 0x0
    li r24, 0x0
    lwzx r4, r4, r30
    stw r3, 0xc(r4)
    b lbl_80255CFC
lbl_80255CB8:
    lwz r12, lbl_80409F98@l(r28)
    lha r3, 0xa(r29)
    mtctr r12
    bctrl
    lwz r0, lbl_8049DBA8
    lwzx r4, r30, r0
    lwz r4, 0xc(r4)
    stwx r3, r4, r24
    lwzx r4, r30, r0
    lwz r3, 0xc(r29)
    lwz r5, 0xc(r4)
    lwzx r4, r3, r24
    lwzx r3, r5, r24
    lha r5, 0xa(r29)
    bl memcpy
    addi r24, r24, 0x4
    addi r23, r23, 0x1
lbl_80255CFC:
    lwz r3, 0xc(r29)
    lwzx r0, r3, r24
    cmpwi r0, 0x0
    bne lbl_80255CB8
    lwz r4, lbl_8049DBA8
    slwi r0, r23, 2
    li r5, 0x0
    mr r3, r27
    lwzx r4, r4, r30
    lwz r4, 0xc(r4)
    stwx r5, r4, r0
    bl strlen
    lis r4, lbl_80409F98@ha
    lwz r12, lbl_80409F98@l(r4)
    mtctr r12
    addi r3, r3, 0x1
    bctrl
    lwz r6, lbl_8049DBA8
    mr r4, r27
    lwzx r5, r6, r30
    stw r3, 0x10(r5)
    lwzx r3, r6, r30
    lwz r3, 0x10(r3)
    bl strcpy
    mr r3, r29
lbl_80255D60:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80255D78
// ----------------------------------------------------------------------------
asm void fn_80255D78() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x3
    stw r30, 0x8(r1)
    mr r30, r3
    opword 0x4CC63182
    bl fn_8033667C
    cmpwi r31, 0x0
    ori r5, r3, 0x4
    beq lbl_80255DB4
    rlwinm r5, r3, 0, 30, 28
lbl_80255DB4:
    mr r3, r30
    li r4, 0x4
    opword 0x4CC63182
    bl fn_8033667C
    cmpwi r3, 0x0
    bne lbl_80255DD4
    li r3, 0x1
    b lbl_80255DD8
lbl_80255DD4:
    li r3, 0x0
lbl_80255DD8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80255DF0
// ----------------------------------------------------------------------------
asm void fn_80255DF0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x1002
    li r7, 0x4
    stw r0, 0x14(r1)
    addi r6, r1, 0x8
    stw r4, 0x8(r1)
    lis r4, 0x1
    subi r4, r4, 0x1
    bl fn_80337518
    cmpwi r3, 0x0
    blt lbl_80255E24
    b lbl_80255E2C
lbl_80255E24:
    stw r3, lbl_8049DBB4
    li r3, -0x1
lbl_80255E2C:
    subfic r4, r3, -0x1
    addi r0, r3, 0x1
    or r0, r4, r0
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80255E4C
// ----------------------------------------------------------------------------
asm void fn_80255E4C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    li r6, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r4, r1, 0x8
    stw r0, 0x8(r1)
    bl GSISocketSelect
    cmpwi r3, 0x1
    bne lbl_80255E80
    lwz r3, 0x8(r1)
    b lbl_80255E84
lbl_80255E80:
    li r3, 0x0
lbl_80255E84:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80255E94
// ----------------------------------------------------------------------------
asm void fn_80255E94() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r6, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r5, r1, 0x8
    stw r0, 0x8(r1)
    bl GSISocketSelect
    cmpwi r3, 0x1
    bne lbl_80255EC8
    lwz r3, 0x8(r1)
    b lbl_80255ECC
lbl_80255EC8:
    li r3, 0x0
lbl_80255ECC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80255EDC
// ----------------------------------------------------------------------------
asm void fn_80255EDC() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r3, 0x0
    li r5, 0x4002
    stw r0, 0x24(r1)
    li r0, 0x4
    addi r6, r1, 0x10
    addi r7, r1, 0xc
    stw r31, 0x1c(r1)
    lis r31, lbl_80409F98@ha
    addi r31, r31, lbl_80409F98@l
    stw r30, 0x18(r1)
    lis r30, 0x1
    subi r4, r30, 0x2
    stw r0, 0xc(r1)
    bl fn_8033761C
    lwz r0, 0x10(r1)
    cmpwi r0, 0x1
    blt lbl_80255F30
    cmpwi r0, 0x10
    ble lbl_80255F38
lbl_80255F30:
    li r3, 0x0
    b lbl_80256090
lbl_80255F38:
    mulli r5, r0, 0xc
    addi r3, r31, 0x60
    li r4, 0xbe
    bl memset
    lwz r0, 0x10(r1)
    subi r4, r30, 0x2
    addi r6, r31, 0x60
    addi r7, r1, 0x8
    mulli r0, r0, 0xc
    li r3, 0x0
    li r5, 0x4003
    stw r0, 0x8(r1)
    bl fn_8033761C
    lwz r7, 0x10(r1)
    lis r4, lbl_803687B8@ha
    addi r4, r4, lbl_803687B8@l
    addi r3, r31, 0x10
    la r5, lbl_8049DBAC
    li r0, 0x2
    stw r4, 0x10(r31)
    cmpwi cr1, r7, 0x0
    li r4, 0x0
    stw r5, 0x4(r3)
    sth r0, 0x8(r3)
    sth r7, 0xa(r3)
    ble cr1, lbl_80256078
    cmpwi r7, 0x8
    subi r5, r7, 0x8
    ble lbl_80256038
    li r6, 0x0
    blt cr1, lbl_80255FC8
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r7, r0
    bgt lbl_80255FC8
    li r6, 0x1
lbl_80255FC8:
    cmpwi r6, 0x0
    beq lbl_80256038
    addi r0, r5, 0x7
    addi r8, r31, 0x60
    srwi r0, r0, 3
    addi r9, r31, 0x20
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_80256038
lbl_80255FEC:
    stw r8, 0x0(r9)
    addi r3, r8, 0xc
    addi r0, r8, 0x18
    addi r7, r8, 0x24
    stw r3, 0x4(r9)
    addi r6, r8, 0x30
    addi r5, r8, 0x3c
    addi r3, r8, 0x48
    stw r0, 0x8(r9)
    addi r0, r8, 0x54
    addi r8, r8, 0x60
    addi r4, r4, 0x8
    stw r7, 0xc(r9)
    stw r6, 0x10(r9)
    stw r5, 0x14(r9)
    stw r3, 0x18(r9)
    stw r0, 0x1c(r9)
    addi r9, r9, 0x20
    bdnz lbl_80255FEC
lbl_80256038:
    lwz r8, 0x10(r1)
    mulli r7, r4, 0xc
    addi r6, r31, 0x60
    slwi r5, r4, 2
    addi r3, r31, 0x20
    subf r0, r4, r8
    add r6, r6, r7
    add r3, r3, r5
    mtctr r0
    cmpw r4, r8
    bge lbl_80256078
lbl_80256064:
    stw r6, 0x0(r3)
    addi r6, r6, 0xc
    addi r3, r3, 0x4
    addi r4, r4, 0x1
    bdnz lbl_80256064
lbl_80256078:
    slwi r0, r4, 2
    addi r3, r31, 0x10
    addi r5, r31, 0x20
    li r4, 0x0
    stwx r4, r5, r0
    stw r5, 0xc(r3)
lbl_80256090:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_802560A8
// ----------------------------------------------------------------------------
asm void fn_802560A8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0x0(r3)
    bl fn_80336B1C
    srwi r0, r3, 24
    extrwi r3, r3, 8, 8
    cmpwi r0, 0xa
    bne lbl_802560D4
    li r3, 0x1
    b lbl_80256110
lbl_802560D4:
    cmpwi r0, 0xac
    bne lbl_802560F4
    cmpwi r3, 0x10
    blt lbl_802560F4
    cmpwi r3, 0x1f
    bgt lbl_802560F4
    li r3, 0x1
    b lbl_80256110
lbl_802560F4:
    cmpwi r0, 0xc0
    bne lbl_8025610C
    cmpwi r3, 0xa8
    bne lbl_8025610C
    li r3, 0x1
    b lbl_80256110
lbl_8025610C:
    li r3, 0x0
lbl_80256110:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80256120
// ----------------------------------------------------------------------------
asm void fn_80256120() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSGetTime
    lis r6, 0x8000
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r6, r0, 2
    bl __div2i
    cmpwi r31, 0x0
    beq lbl_8025615C
    stw r4, 0x4(r31)
    stw r3, 0x0(r31)
lbl_8025615C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80256170
// ----------------------------------------------------------------------------
asm void fn_80256170() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, lbl_8049DBB0
    stw r31, 0x1c(r1)
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_802561A4
    lis r3, lbl_8040A110@ha
    addi r3, r3, lbl_8040A110@l
    bl OSInitMutex
    li r0, 0x1
    stw r0, lbl_8049DBB0
lbl_802561A4:
    lis r3, lbl_8040A110@ha
    addi r3, r3, lbl_8040A110@l
    bl OSLockMutex
    lwz r3, 0x0(r31)
    bl fn_802557FC
    cmpwi r3, 0x0
    beq lbl_802561FC
    lwz r4, 0xc(r3)
    addi r3, r1, 0xc
    lwz r4, 0x0(r4)
    lwz r0, 0x0(r4)
    stw r0, 0xc(r1)
    bl fn_80336AC8
    addi r4, r1, 0x8
    bl fn_803369BC
    cmpwi r3, 0x0
    bne lbl_802561F0
    li r0, -0x1
    b lbl_802561F4
lbl_802561F0:
    lwz r0, 0x8(r1)
lbl_802561F4:
    stw r0, 0x4(r31)
    b lbl_80256204
lbl_802561FC:
    li r0, -0x1
    stw r0, 0x4(r31)
lbl_80256204:
    li r0, 0x1
    lis r3, lbl_8040A110@ha
    stw r0, 0x8(r31)
    addi r3, r3, lbl_8040A110@l
    bl OSUnlockMutex
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_8025622C
// ----------------------------------------------------------------------------
asm void fn_8025622C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80409F98@ha
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x330
    lwz r12, lbl_80409F98@l(r31)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_80256278
    li r3, -0x1
    b lbl_80256340
lbl_80256278:
    cmpwi r28, 0x0
    bne lbl_80256288
    li r31, 0x0
    b lbl_802562B4
lbl_80256288:
    mr r3, r28
    bl strlen
    lwz r12, lbl_80409F98@l(r31)
    mtctr r12
    addi r3, r3, 0x1
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_802562B4
    mr r4, r28
    bl strcpy
lbl_802562B4:
    cmpwi r31, 0x0
    stw r31, 0x0(r30)
    bne lbl_802562E8
    cmpwi r30, 0x0
    beq lbl_802562E0
    lis r4, lbl_80409F98@ha
    mr r3, r30
    addi r4, r4, lbl_80409F98@l
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
lbl_802562E0:
    li r3, -0x1
    b lbl_80256340
lbl_802562E8:
    li r0, 0x0
    lis r4, lbl_80409F98@ha
    stw r0, 0x8(r30)
    li r3, 0x1000
    lwz r12, lbl_80409F98@l(r4)
    mtctr r12
    bctrl
    mr r6, r3
    stw r3, 0x328(r30)
    lis r4, fn_80256170@ha
    mr r5, r30
    addi r3, r30, 0x10
    addi r6, r6, 0x1000
    addi r4, r4, fn_80256170@l
    li r7, 0x1000
    li r8, 0x10
    li r9, 0x1
    bl fn_8031CDF0
    addi r3, r30, 0x10
    bl fn_8031D460
    stw r30, 0x0(r29)
    li r3, 0x0
lbl_80256340:
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
// fn_80256360
// ----------------------------------------------------------------------------
asm void fn_80256360() {
    nofralloc
    stwu r1, -0x330(r1)
    mflr r0
    addi r4, r3, 0xc
    stw r0, 0x334(r1)
    li r0, 0x64
    addi r5, r1, 0x4
    stw r31, 0x32c(r1)
    mr r31, r3
    mtctr r0
lbl_80256384:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_80256384
    addi r3, r1, 0x8
    bl OSCancelThread
    lwz r3, 0x320(r1)
    cmpwi r3, 0x0
    beq lbl_802563CC
    beq lbl_802563C4
    lis r4, lbl_80409F98@ha
    addi r4, r4, lbl_80409F98@l
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
lbl_802563C4:
    li r0, 0x0
    stw r0, 0x320(r1)
lbl_802563CC:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_802563EC
    lis r4, lbl_80409F98@ha
    addi r4, r4, lbl_80409F98@l
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
lbl_802563EC:
    li r0, 0x0
    cmpwi r31, 0x0
    stw r0, 0x0(r31)
    beq lbl_80256414
    lis r4, lbl_80409F98@ha
    mr r3, r31
    addi r4, r4, lbl_80409F98@l
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
lbl_80256414:
    lwz r0, 0x334(r1)
    lwz r31, 0x32c(r1)
    mtlr r0
    addi r1, r1, 0x330
    blr
}

// ----------------------------------------------------------------------------
// fn_80256428
// ----------------------------------------------------------------------------
asm void fn_80256428() {
    nofralloc
    stwu r1, -0x330(r1)
    mflr r0
    stw r0, 0x334(r1)
    stw r31, 0x32c(r1)
    stw r30, 0x328(r1)
    mr r30, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_80256454
    li r3, 0x0
    b lbl_80256504
lbl_80256454:
    li r0, 0x64
    addi r5, r1, 0x4
    addi r4, r3, 0xc
    lwz r31, 0x4(r3)
    mtctr r0
lbl_80256468:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_80256468
    addi r3, r1, 0x8
    bl fn_8031C828
    cmpwi r3, 0x0
    bne lbl_80256494
    addi r3, r1, 0x8
    bl OSCancelThread
lbl_80256494:
    lwz r3, 0x320(r1)
    cmpwi r3, 0x0
    beq lbl_802564C0
    beq lbl_802564B8
    lis r4, lbl_80409F98@ha
    addi r4, r4, lbl_80409F98@l
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
lbl_802564B8:
    li r0, 0x0
    stw r0, 0x320(r1)
lbl_802564C0:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_802564E0
    lis r4, lbl_80409F98@ha
    addi r4, r4, lbl_80409F98@l
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
lbl_802564E0:
    cmpwi r30, 0x0
    beq lbl_80256500
    lis r4, lbl_80409F98@ha
    mr r3, r30
    addi r4, r4, lbl_80409F98@l
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
lbl_80256500:
    mr r3, r31
lbl_80256504:
    lwz r0, 0x334(r1)
    lwz r31, 0x32c(r1)
    lwz r30, 0x328(r1)
    mtlr r0
    addi r1, r1, 0x330
    blr
}

// ----------------------------------------------------------------------------
// fn_8025651C
// ----------------------------------------------------------------------------
asm void fn_8025651C() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_80256544
    li r3, 0x0
    b lbl_80256574
lbl_80256544:
    bl strlen
    lis r4, lbl_80409F98@ha
    lwz r12, lbl_80409F98@l(r4)
    mtctr r12
    addi r3, r3, 0x1
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_80256570
    mr r4, r30
    bl strcpy
lbl_80256570:
    mr r3, r31
lbl_80256574:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8025658C
// ----------------------------------------------------------------------------
asm void fn_8025658C() {
    nofralloc
    lis r5, lbl_8035FBD8@ha
    mr r7, r3
    addi r5, r5, lbl_8035FBD8@l
    b lbl_802565D4
lbl_8025659C:
    extsb. r6, r4
    li r0, 0x0
    blt lbl_802565B0
    cmpwi r6, 0x100
    blt lbl_802565B4
lbl_802565B0:
    li r0, 0x1
lbl_802565B4:
    cmpwi r0, 0x0
    beq lbl_802565C0
    b lbl_802565CC
lbl_802565C0:
    lwz r4, 0x38(r5)
    lwz r4, 0x10(r4)
    lbzx r6, r4, r6
lbl_802565CC:
    stb r6, 0x0(r3)
    addi r3, r3, 0x1
lbl_802565D4:
    lbz r4, 0x0(r3)
    extsb. r0, r4
    bne lbl_8025659C
    mr r3, r7
    blr
}

// ----------------------------------------------------------------------------
// fn_802565E8
// ----------------------------------------------------------------------------
asm void fn_802565E8() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_802565EC
// ----------------------------------------------------------------------------
asm void fn_802565EC() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// fn_802565F0
// ----------------------------------------------------------------------------
asm void fn_802565F0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSGetTime
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r0, 0xf8(r6)
    addi r6, r5, 0x4dd3
    li r5, 0x0
    srwi r0, r0, 2
    mulhwu r0, r6, r0
    srwi r6, r0, 6
    bl __div2i
    lwz r0, 0x14(r1)
    mr r3, r4
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_80256638
// ----------------------------------------------------------------------------
asm void fn_80256638() {
    nofralloc
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    addi r4, r4, 0x4dd3
    li r6, 0x0
    srwi r0, r0, 2
    mulhwu r4, r4, r0
    mullw r0, r3, r6
    srwi r4, r4, 6
    mulhwu r5, r3, r4
    mullw r6, r6, r4
    mullw r4, r3, r4
    add r3, r5, r6
    add r3, r3, r0
    b fn_8031DAEC
}

// ----------------------------------------------------------------------------
// fn_80256674
// ----------------------------------------------------------------------------
asm void fn_80256674() {
    nofralloc
    cmpwi r3, 0x0
    li r0, 0x1
    beq lbl_80256684
    clrlwi r0, r3, 1
lbl_80256684:
    stw r0, lbl_8049C7E8
    blr
}

// ----------------------------------------------------------------------------
// fn_8025668C
// ----------------------------------------------------------------------------
asm void fn_8025668C() {
    nofralloc
    subf. r7, r3, r4
    beqlr
    lwz r5, lbl_8049C7E8
    lis r4, 0x8000
    subi r0, r4, 0x1
    srwi r4, r5, 16
    clrlwi r5, r5, 16
    mulli r6, r4, 0x41a7
    mulli r5, r5, 0x41a7
    clrlslwi r4, r6, 17, 16
    add r5, r5, r4
    cmplw r5, r0
    ble lbl_802566C8
    clrlwi r5, r5, 1
    addi r5, r5, 0x1
lbl_802566C8:
    srwi r0, r6, 15
    lis r4, 0x8000
    add r5, r5, r0
    subi r0, r4, 0x1
    cmplw r5, r0
    ble lbl_802566E8
    clrlwi r5, r5, 1
    addi r5, r5, 0x1
lbl_802566E8:
    divwu r0, r5, r7
    stw r5, lbl_8049C7E8
    mullw r0, r0, r7
    subf r0, r0, r5
    add r3, r0, r3
    blr
}

// ----------------------------------------------------------------------------
// fn_80256700
// ----------------------------------------------------------------------------
asm void fn_80256700() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r7, 0x2
    mr r28, r4
    mr r29, r6
    li r11, 0x0
    li r30, 0x0
    beq lbl_80256744
    bge lbl_8025674C
    cmpwi r7, 0x1
    bge lbl_8025673C
    b lbl_8025674C
lbl_8025673C:
    la r10, lbl_804A22F4
    b lbl_80256750
lbl_80256744:
    la r10, lbl_804A22F8
    b lbl_80256750
lbl_8025674C:
    la r10, lbl_804A22F0
lbl_80256750:
    cmpwi r5, 0x0
    bgt lbl_80256774
    cmpwi r6, 0x0
    beq lbl_80256768
    li r0, 0x0
    stw r0, 0x0(r6)
lbl_80256768:
    li r0, 0x0
    stb r0, 0x0(r4)
    b lbl_80256A0C
lbl_80256774:
    mr r12, r3
    addi r7, r1, 0x8
    li r0, 0x3f
    li r8, 0x3e
    b lbl_80256924
lbl_80256788:
    extsb r27, r9
    cmpwi r27, 0x30
    blt lbl_802567BC
    cmpwi r27, 0x39
    bgt lbl_802567BC
    slwi r27, r11, 30
    srwi r31, r11, 31
    subf r27, r31, r27
    addi r9, r9, 0x4
    rotlwi r27, r27, 2
    add r27, r27, r31
    stbx r9, r7, r27
    b lbl_802568BC
lbl_802567BC:
    extsb r27, r9
    cmpwi r27, 0x61
    blt lbl_802567F0
    cmpwi r27, 0x7a
    bgt lbl_802567F0
    slwi r27, r11, 30
    srwi r31, r11, 31
    subf r27, r31, r27
    subi r9, r9, 0x47
    rotlwi r27, r27, 2
    add r27, r27, r31
    stbx r9, r7, r27
    b lbl_802568BC
lbl_802567F0:
    extsb r27, r9
    cmpwi r27, 0x41
    blt lbl_80256824
    cmpwi r27, 0x5a
    bgt lbl_80256824
    slwi r27, r11, 30
    srwi r31, r11, 31
    subf r27, r31, r27
    subi r9, r9, 0x41
    rotlwi r27, r27, 2
    add r27, r27, r31
    stbx r9, r7, r27
    b lbl_802568BC
lbl_80256824:
    lbz r31, 0x0(r10)
    extsb r27, r9
    extsb r9, r31
    cmpw r9, r27
    bne lbl_80256854
    slwi r9, r11, 30
    srwi r27, r11, 31
    subf r9, r27, r9
    rotlwi r9, r9, 2
    add r27, r9, r27
    stbx r8, r7, r27
    b lbl_802568BC
lbl_80256854:
    lbz r9, 0x1(r10)
    extsb r9, r9
    cmpw r9, r27
    bne lbl_80256880
    slwi r9, r11, 30
    srwi r27, r11, 31
    subf r9, r27, r9
    rotlwi r9, r9, 2
    add r27, r9, r27
    stbx r0, r7, r27
    b lbl_802568BC
lbl_80256880:
    lbzx r0, r3, r11
    lbz r3, 0x2(r10)
    extsb r0, r0
    extsb r3, r3
    cmpw r3, r0
    beq lbl_80256944
    cmpwi r0, 0x0
    beq lbl_80256944
    cmpwi r6, 0x0
    beq lbl_802568B0
    li r0, 0x0
    stw r0, 0x0(r6)
lbl_802568B0:
    li r0, 0x0
    stb r0, 0x0(r4)
    b lbl_80256A0C
lbl_802568BC:
    cmpwi r27, 0x3
    bne lbl_8025691C
    lbz r31, 0x8(r1)
    add r9, r4, r30
    lbz r27, 0x9(r1)
    extsb r31, r31
    extsb r27, r27
    slwi r31, r31, 2
    srawi r27, r27, 4
    or r27, r31, r27
    stbx r27, r4, r30
    addi r30, r30, 0x3
    lbz r27, 0xa(r1)
    lbz r31, 0x9(r1)
    extsb r27, r27
    clrlslwi r31, r31, 28, 4
    srawi r27, r27, 2
    or r27, r31, r27
    stb r27, 0x1(r9)
    lbz r31, 0xa(r1)
    lbz r27, 0xb(r1)
    clrlslwi r31, r31, 30, 6
    or r27, r31, r27
    stb r27, 0x2(r9)
lbl_8025691C:
    addi r11, r11, 0x1
    addi r12, r12, 0x1
lbl_80256924:
    cmpw r11, r5
    bge lbl_80256944
    lbz r9, 0x0(r12)
    lbz r27, 0x2(r10)
    extsb r31, r9
    extsb r27, r27
    cmpw r27, r31
    bne lbl_80256788
lbl_80256944:
    cmpwi r11, 0x0
    beq lbl_80256A00
    slwi r0, r11, 30
    srwi r3, r11, 31
    subf r0, r3, r0
    rotlwi r0, r0, 2
    add. r31, r0, r3
    beq lbl_80256A00
    lbz r4, 0x2(r10)
    addi r3, r1, 0x8
    add r3, r3, r31
    subfic r5, r31, 0x4
    extsb r4, r4
    bl memset
    cmpwi r31, 0x2
    blt lbl_802569A4
    lbz r3, 0x8(r1)
    lbz r0, 0x9(r1)
    extsb r3, r3
    extsb r0, r0
    slwi r3, r3, 2
    srawi r0, r0, 4
    or r0, r3, r0
    stbx r0, r28, r30
lbl_802569A4:
    cmpwi r31, 0x3
    blt lbl_802569CC
    lbz r0, 0xa(r1)
    add r3, r28, r30
    lbz r4, 0x9(r1)
    extsb r0, r0
    clrlslwi r4, r4, 28, 4
    srawi r0, r0, 2
    or r0, r4, r0
    stb r0, 0x1(r3)
lbl_802569CC:
    cmpwi r31, 0x4
    blt lbl_802569EC
    lbz r4, 0xa(r1)
    add r3, r28, r30
    lbz r0, 0xb(r1)
    clrlslwi r4, r4, 30, 6
    or r0, r4, r0
    stb r0, 0x2(r3)
lbl_802569EC:
    cmpwi r31, 0x3
    addi r0, r30, 0x1
    bne lbl_802569FC
    addi r0, r30, 0x2
lbl_802569FC:
    mr r30, r0
lbl_80256A00:
    cmpwi r29, 0x0
    beq lbl_80256A0C
    stw r30, 0x0(r29)
lbl_80256A0C:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_80256A24
// ----------------------------------------------------------------------------
asm void fn_80256A24() {
    nofralloc
    stwu r1, -0x20(r1)
    cmpwi r6, 0x2
    mr r0, r4
    stw r31, 0x1c(r1)
    mr r31, r5
    beq lbl_80256A54
    bge lbl_80256A5C
    cmpwi r6, 0x1
    bge lbl_80256A4C
    b lbl_80256A5C
lbl_80256A4C:
    la r6, lbl_804A22F4
    b lbl_80256A60
lbl_80256A54:
    la r6, lbl_804A22F8
    b lbl_80256A60
lbl_80256A5C:
    la r6, lbl_804A22F0
lbl_80256A60:
    li r12, 0x0
    b lbl_80256B44
lbl_80256A68:
    mr r7, r3
    addi r10, r1, 0x8
    li r9, 0x0
    b lbl_80256A8C
lbl_80256A78:
    lbz r8, 0x0(r7)
    addi r9, r9, 0x1
    addi r7, r7, 0x1
    stb r8, 0x0(r10)
    addi r10, r10, 0x1
lbl_80256A8C:
    cmpwi r31, 0x3
    li r8, 0x3
    bge lbl_80256A9C
    mr r8, r31
lbl_80256A9C:
    cmpw r9, r8
    blt lbl_80256A78
    cmpwi r9, 0x3
    addi r10, r1, 0x8
    add r10, r10, r9
    subfic r8, r9, 0x3
    bge lbl_80256B04
    srwi. r7, r8, 3
    mtctr r7
    beq lbl_80256AF4
lbl_80256AC4:
    stb r12, 0x0(r10)
    stb r12, 0x1(r10)
    stb r12, 0x2(r10)
    stb r12, 0x3(r10)
    stb r12, 0x4(r10)
    stb r12, 0x5(r10)
    stb r12, 0x6(r10)
    stb r12, 0x7(r10)
    addi r10, r10, 0x8
    bdnz lbl_80256AC4
    andi. r8, r8, 0x7
    beq lbl_80256B04
lbl_80256AF4:
    mtctr r8
lbl_80256AF8:
    stb r12, 0x0(r10)
    addi r10, r10, 0x1
    bdnz lbl_80256AF8
lbl_80256B04:
    lbz r11, 0x8(r1)
    addi r3, r3, 0x3
    lbz r10, 0x9(r1)
    subi r31, r31, 0x3
    srawi r7, r11, 2
    lbz r8, 0xa(r1)
    stb r7, 0x0(r4)
    srawi r9, r10, 4
    rlwimi r9, r11, 4, 26, 27
    clrlwi r7, r8, 26
    stb r9, 0x1(r4)
    srawi r8, r8, 6
    rlwimi r8, r10, 2, 26, 29
    stb r8, 0x2(r4)
    stb r7, 0x3(r4)
    addi r4, r4, 0x4
lbl_80256B44:
    cmpwi r31, 0x0
    bgt lbl_80256A68
    lis r3, 0x5555
    mr r8, r4
    addi r3, r3, 0x5556
    mulhw r7, r3, r5
    srwi r3, r7, 31
    add r3, r7, r3
    mulli r3, r3, 0x3
    subf r3, r3, r5
    cmpwi r3, 0x1
    bne lbl_80256B7C
    subi r8, r4, 0x2
    b lbl_80256B88
lbl_80256B7C:
    cmpwi r3, 0x2
    bne lbl_80256B88
    subi r8, r4, 0x1
lbl_80256B88:
    li r5, 0x0
    subf r3, r0, r4
    stb r5, 0x0(r4)
    mtctr r3
    cmplw r4, r0
    ble lbl_80256C24
lbl_80256BA0:
    subi r4, r4, 0x1
    cmplw r4, r8
    blt lbl_80256BB8
    lbz r0, 0x2(r6)
    stb r0, 0x0(r4)
    b lbl_80256C20
lbl_80256BB8:
    lbz r3, 0x0(r4)
    extsb r0, r3
    cmpwi r0, 0x19
    bgt lbl_80256BD4
    addi r0, r3, 0x41
    stb r0, 0x0(r4)
    b lbl_80256C20
lbl_80256BD4:
    cmpwi r0, 0x33
    bgt lbl_80256BE8
    addi r0, r3, 0x47
    stb r0, 0x0(r4)
    b lbl_80256C20
lbl_80256BE8:
    cmpwi r0, 0x3d
    bgt lbl_80256BFC
    subi r0, r3, 0x4
    stb r0, 0x0(r4)
    b lbl_80256C20
lbl_80256BFC:
    cmpwi r0, 0x3e
    bne lbl_80256C10
    lbz r0, 0x0(r6)
    stb r0, 0x0(r4)
    b lbl_80256C20
lbl_80256C10:
    cmpwi r0, 0x3f
    bne lbl_80256C20
    lbz r0, 0x1(r6)
    stb r0, 0x0(r4)
lbl_80256C20:
    bdnz lbl_80256BA0
lbl_80256C24:
    lwz r31, 0x1c(r1)
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// fn_80256C30
// ----------------------------------------------------------------------------
asm void fn_80256C30() {
    nofralloc
    lis r8, lbl_80409F98@ha
    addi r7, r8, lbl_80409F98@l
    stw r3, lbl_80409F98@l(r8)
    stw r4, 0x4(r7)
    stw r5, 0x8(r7)
    stw r6, 0xc(r7)
    blr
}

// ----------------------------------------------------------------------------
// fn_80256C4C
// ----------------------------------------------------------------------------
asm void fn_80256C4C() {
    nofralloc
    lis r4, lbl_80409F98@ha
    lwz r12, lbl_80409F98@l(r4)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_80256C5C
// ----------------------------------------------------------------------------
asm void fn_80256C5C() {
    nofralloc
    lis r5, lbl_80409F98@ha
    addi r5, r5, lbl_80409F98@l
    lwz r12, 0x8(r5)
    mtctr r12
    bctr
}

// ----------------------------------------------------------------------------
// fn_80256C70
// ----------------------------------------------------------------------------
asm void fn_80256C70() {
    nofralloc
    cmpwi r3, 0x0
    beqlr
    lis r4, lbl_80409F98@ha
    addi r4, r4, lbl_80409F98@l
    lwz r12, 0x4(r4)
    mtctr r12
    bctr
    blr
}

// ----------------------------------------------------------------------------
// fn_80256C90
// ----------------------------------------------------------------------------
asm void fn_80256C90() {
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lis r29, lbl_8040A168@ha
    addi r29, r29, lbl_8040A168@l
    stw r28, 0x50(r1)
    mr r28, r3
    mr r4, r28
    addi r3, r29, 0x0
    bl strcpy
    li r0, -0x1
    stw r0, 0x80(r29)
    bl fn_802565E8
    lbz r31, 0x40(r29)
    extsb. r31, r31
    bne lbl_80256CF4
    lis r4, lbl_803687C8@ha
    mr r5, r28
    addi r3, r1, 0x8
    addi r4, r4, lbl_803687C8@l
    opword 0x4CC63182
    bl sprintf
lbl_80256CF4:
    addi r30, r29, 0x80
    li r0, 0x2
    stb r0, 0x5(r30)
    li r3, 0x6cfc
    bl fn_80336B2C
    cmpwi r31, 0x0
    sth r3, 0x6(r30)
    addi r3, r1, 0x8
    beq lbl_80256D1C
    addi r3, r29, 0x40
lbl_80256D1C:
    bl inet_addr
    addis r0, r3, 0x1
    addi r4, r29, 0x80
    cmplwi r0, 0xffff
    stw r3, 0x8(r4)
    bne lbl_80256D6C
    cmpwi r31, 0x0
    addi r3, r1, 0x8
    beq lbl_80256D44
    addi r3, r29, 0x40
lbl_80256D44:
    bl fn_802557FC
    cmpwi r3, 0x0
    bne lbl_80256D58
    li r0, 0x0
    b lbl_80256D70
lbl_80256D58:
    lwz r4, 0xc(r3)
    addi r3, r29, 0x80
    lwz r4, 0x0(r4)
    lwz r0, 0x0(r4)
    stw r0, 0x8(r3)
lbl_80256D6C:
    li r0, 0x1
lbl_80256D70:
    cmpwi r0, 0x0
    beq lbl_80256DEC
    li r3, 0x2
    li r4, 0x2
    li r5, 0x11
    bl socket
    cmpwi r3, -0x1
    stw r3, 0x80(r29)
    beq lbl_80256DEC
    addi r30, r29, 0x80
    li r0, 0x9
    stb r0, 0xc(r30)
    mr r3, r28
    bl strlen
    mr r31, r3
    mr r4, r28
    addi r3, r30, 0x11
    addi r5, r31, 0x1
    bl memcpy
    addi r5, r31, 0x6
    lwz r3, 0x80(r29)
    stw r5, 0x4c(r30)
    addi r4, r30, 0xc
    addi r7, r30, 0x4
    li r6, 0x0
    li r8, 0x8
    bl sendto
    bl fn_802565F0
    li r0, 0x0
    stw r3, 0x50(r30)
    stw r0, 0x54(r30)
lbl_80256DEC:
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
// fn_80256E0C
// ----------------------------------------------------------------------------
asm void fn_80256E0C() {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xa0
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    li r0, 0x8
    stw r31, -0x4(r12)
    lis r31, lbl_8040A1E8@ha
    lwz r3, lbl_8040A1E8@l(r31)
    stw r0, 0x20(r1)
    cmpwi r3, -0x1
    bne lbl_80256E50
    li r0, 0x1
    li r3, 0x1
    stw r0, lbl_8049DBB8
    b lbl_80256FCC
lbl_80256E50:
    bl fn_80255E4C
    cmpwi r3, 0x0
    beq lbl_80256F58
    lwz r3, lbl_8040A1E8@l(r31)
    addi r4, r1, 0x40
    addi r7, r1, 0x28
    addi r8, r1, 0x20
    li r5, 0x40
    li r6, 0x0
    bl recvfrom
    cmpwi r3, 0x7
    bge lbl_80256E88
    li r5, 0x1
    b lbl_80256F0C
lbl_80256E88:
    addi r31, r31, lbl_8040A1E8@l
    addi r3, r1, 0x2c
    addi r4, r31, 0x8
    li r5, 0x4
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80256EAC
    li r5, 0x1
    b lbl_80256F0C
lbl_80256EAC:
    lhz r3, 0x2a(r1)
    lhz r0, 0x6(r31)
    cmplw r3, r0
    beq lbl_80256EC4
    li r5, 0x1
    b lbl_80256F0C
lbl_80256EC4:
    addi r3, r1, 0x40
    la r4, lbl_8049C7F0
    li r5, 0x3
    bl memcmp
    cmpwi r3, 0x0
    beq lbl_80256EE4
    li r5, 0x1
    b lbl_80256F0C
lbl_80256EE4:
    lbz r0, 0x44(r1)
    li r5, 0x0
    lbz r3, 0x45(r1)
    clrlslwi r6, r0, 24, 16
    lbz r4, 0x43(r1)
    lbz r0, 0x46(r1)
    clrlslwi r3, r3, 24, 8
    rlwimi r6, r4, 24, 0, 7
    or r6, r6, r3
    or r31, r6, r0
lbl_80256F0C:
    cmpwi r5, 0x0
    bne lbl_80256F58
    lis r3, lbl_8040A1E8@ha
    lwz r3, lbl_8040A1E8@l(r3)
    bl closesocket
    clrlwi. r0, r31, 31
    beq lbl_80256F34
    li r0, 0x2
    stw r0, lbl_8049DBB8
    b lbl_80256F50
lbl_80256F34:
    rlwinm. r0, r31, 0, 30, 30
    beq lbl_80256F48
    li r0, 0x3
    stw r0, lbl_8049DBB8
    b lbl_80256F50
lbl_80256F48:
    li r0, 0x1
    stw r0, lbl_8049DBB8
lbl_80256F50:
    mr r3, r0
    b lbl_80256FCC
lbl_80256F58:
    bl fn_802565F0
    lis r5, lbl_8040A1E8@ha
    addi r31, r5, lbl_8040A1E8@l
    lwz r4, 0x50(r31)
    addi r0, r4, 0x7d0
    cmplw r3, r0
    ble lbl_80256FC8
    lwz r0, 0x54(r31)
    cmpwi r0, 0x1
    bne lbl_80256F98
    lwz r3, lbl_8040A1E8@l(r5)
    bl closesocket
    li r0, 0x1
    li r3, 0x1
    stw r0, lbl_8049DBB8
    b lbl_80256FCC
lbl_80256F98:
    lwz r3, lbl_8040A1E8@l(r5)
    addi r4, r31, 0xc
    lwz r5, 0x4c(r31)
    addi r7, r31, 0x4
    li r6, 0x0
    li r8, 0x8
    bl sendto
    bl fn_802565F0
    lwz r4, 0x54(r31)
    stw r3, 0x50(r31)
    addi r0, r4, 0x1
    stw r0, 0x54(r31)
lbl_80256FC8:
    li r3, 0x0
lbl_80256FCC:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

