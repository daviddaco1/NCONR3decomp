#include "types.h"

// Translation unit: src/nw4r/snd/snd_TaskThread.cpp
// Total functions: 4

// Global data symbols (@ha/@l)

// Forward declarations
extern "C" void CancelWaitTask__Q44nw4r3snd6detail11TaskManagerFv();
extern "C" void Create__Q44nw4r3snd6detail10TaskThreadFlPvUl();
extern "C" void Destroy__Q44nw4r3snd6detail10TaskThreadFv();
extern "C" void ExecuteTask__Q44nw4r3snd6detail11TaskManagerFv();
extern "C" void GetInstance__Q44nw4r3snd6detail11TaskManagerFv();
extern "C" void WaitTask__Q44nw4r3snd6detail11TaskManagerFv();
extern "C" void __ct__Q44nw4r3snd6detail10TaskThreadFv();
extern "C" void __dt__Q44nw4r3snd6detail10TaskThreadFv();
extern "C" void dtor_80136CFC();
extern "C" void fn_8031CDF0();
extern "C" void fn_8031D320();
extern "C" void fn_8031D460();

// ----------------------------------------------------------------------------
// __ct__Q44nw4r3snd6detail10TaskThreadFv
// ----------------------------------------------------------------------------
extern "C" asm void __ct__Q44nw4r3snd6detail10TaskThreadFv() {
    nofralloc
    li r0, 0x0
    stw r0, 0x318(r3)
    stb r0, 0x31c(r3)
    stb r0, 0x31d(r3)
    blr
}

// ----------------------------------------------------------------------------
// __dt__Q44nw4r3snd6detail10TaskThreadFv
// ----------------------------------------------------------------------------
extern "C" asm void __dt__Q44nw4r3snd6detail10TaskThreadFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_8021D880
    lbz r0, 0x31d(r3)
    cmpwi r0, 0x0
    beq lbl_8021D870
    beq lbl_8021D870
    li r0, 0x1
    stb r0, 0x31c(r3)
    bl GetInstance__Q44nw4r3snd6detail11TaskManagerFv
    bl CancelWaitTask__Q44nw4r3snd6detail11TaskManagerFv
    mr r3, r30
    li r4, 0x0
    bl fn_8031D320
    li r0, 0x0
    stb r0, 0x31d(r30)
lbl_8021D870:
    cmpwi r31, 0x0
    ble lbl_8021D880
    mr r3, r30
    bl dtor_80136CFC
lbl_8021D880:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// Create__Q44nw4r3snd6detail10TaskThreadFlPvUl
// ----------------------------------------------------------------------------
extern "C" asm void Create__Q44nw4r3snd6detail10TaskThreadFlPvUl() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r0, 0x31d(r3)
    cmpwi r0, 0x0
    beq lbl_8021D8FC
    beq lbl_8021D8FC
    li r0, 0x1
    stb r0, 0x31c(r3)
    bl GetInstance__Q44nw4r3snd6detail11TaskManagerFv
    bl CancelWaitTask__Q44nw4r3snd6detail11TaskManagerFv
    mr r3, r28
    li r4, 0x0
    bl fn_8031D320
    li r0, 0x0
    stb r0, 0x31d(r28)
lbl_8021D8FC:
    lis r4, Destroy__Q44nw4r3snd6detail10TaskThreadFv@ha
    mr r3, r28
    mr r5, r28
    mr r7, r31
    mr r8, r29
    addi r4, r4, Destroy__Q44nw4r3snd6detail10TaskThreadFv@l
    add r6, r30, r31
    li r9, 0x0
    bl fn_8031CDF0
    cmpwi r3, 0x0
    bne lbl_8021D930
    li r3, 0x0
    b lbl_8021D950
lbl_8021D930:
    li r4, 0x0
    li r0, 0x1
    stw r30, 0x318(r28)
    mr r3, r28
    stb r4, 0x31c(r28)
    stb r0, 0x31d(r28)
    bl fn_8031D460
    li r3, 0x1
lbl_8021D950:
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
// Destroy__Q44nw4r3snd6detail10TaskThreadFv
// ----------------------------------------------------------------------------
extern "C" asm void Destroy__Q44nw4r3snd6detail10TaskThreadFv() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    b lbl_8021D9A4
lbl_8021D988:
    bl GetInstance__Q44nw4r3snd6detail11TaskManagerFv
    bl WaitTask__Q44nw4r3snd6detail11TaskManagerFv
    lbz r0, 0x31c(r31)
    cmpwi r0, 0x0
    bne lbl_8021D9B0
    bl GetInstance__Q44nw4r3snd6detail11TaskManagerFv
    bl ExecuteTask__Q44nw4r3snd6detail11TaskManagerFv
lbl_8021D9A4:
    lbz r0, 0x31c(r31)
    cmpwi r0, 0x0
    beq lbl_8021D988
lbl_8021D9B0:
    lwz r31, 0xc(r1)
    li r3, 0x0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

