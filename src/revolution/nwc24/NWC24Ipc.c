#include "types.h"

// Translation unit: src/revolution/nwc24/NWC24Ipc.cpp
// Total functions: 6

// Small Data symbols (@sda21)
extern float lbl_8049E598;

// Global data symbols (@ha/@l)

// Forward declarations
extern void CallbackAsyncIpc();
extern void IOS_Close();
extern void IOS_Ioctl();
extern void IOS_IoctlAsync();
extern void IOS_Open();
extern void NWC24iCloseResourceManager();
extern void NWC24iIoctlResourceManager();
extern void NWC24iIoctlResourceManagerAsync();
extern void NWC24iIsAsyncRequestPending();
extern void NWC24iOpenResourceManager();

// ----------------------------------------------------------------------------
// NWC24iOpenResourceManager
// ----------------------------------------------------------------------------
asm void NWC24iOpenResourceManager() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    bne lbl_80334D6C
    li r3, -0x3
    b lbl_80334DAC
lbl_80334D6C:
    mr r3, r4
    mr r4, r6
    bl IOS_Open
    cmpwi r3, 0x0
    stw r3, 0x0(r31)
    bge lbl_80334DA8
    cmpwi r3, -0x6
    bne lbl_80334D94
    li r3, -0x1d
    b lbl_80334DAC
lbl_80334D94:
    cmpwi r3, -0x8
    li r3, -0x2a
    bne lbl_80334DAC
    li r3, -0x1a
    b lbl_80334DAC
lbl_80334DA8:
    li r3, 0x0
lbl_80334DAC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// NWC24iCloseResourceManager
// ----------------------------------------------------------------------------
asm void NWC24iCloseResourceManager() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    stw r0, 0x14(r1)
    bl IOS_Close
    cmpwi r3, 0x0
    li r3, 0x0
    bge lbl_80334DE4
    li r3, -0x2a
lbl_80334DE4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// NWC24iIoctlResourceManager
// ----------------------------------------------------------------------------
asm void NWC24iIoctlResourceManager() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    mr r4, r5
    stw r0, 0x14(r1)
    mr r5, r6
    mr r6, r7
    mr r7, r8
    mr r8, r9
    bl IOS_Ioctl
    cmpwi r3, 0x0
    li r3, 0x0
    bge lbl_80334E2C
    li r3, -0x2a
lbl_80334E2C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// NWC24iIoctlResourceManagerAsync
// ----------------------------------------------------------------------------
asm void NWC24iIoctlResourceManagerAsync() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    mr r4, r5
    stw r0, 0x14(r1)
    lis r11, CallbackAsyncIpc@ha
    mr r5, r6
    mr r6, r7
    mr r7, r8
    mr r8, r9
    addi r9, r11, CallbackAsyncIpc@l
    bl IOS_IoctlAsync
    cmpwi r3, 0x0
    bge lbl_80334E7C
    li r3, -0x2a
    b lbl_80334E88
lbl_80334E7C:
    li r0, 0x1
    li r3, 0x0
    stw r0, lbl_8049E598
lbl_80334E88:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// NWC24iIsAsyncRequestPending
// ----------------------------------------------------------------------------
asm void NWC24iIsAsyncRequestPending() {
    nofralloc
    lwz r3, lbl_8049E598
    blr
}

// ----------------------------------------------------------------------------
// CallbackAsyncIpc
// ----------------------------------------------------------------------------
asm void CallbackAsyncIpc() {
    nofralloc
    cmpwi r4, 0x0
    beq lbl_80334EAC
    stw r3, 0x0(r4)
lbl_80334EAC:
    li r0, 0x0
    li r3, 0x0
    stw r0, lbl_8049E598
    blr
}

