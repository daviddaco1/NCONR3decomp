#include "types.h"

// Translation unit: src/revolution/ax/unk_8029DF0C.cpp
// Total functions: 2

// Small Data symbols (@sda21)
extern float lbl_8049DF50;
extern float lbl_8049DF54;
extern float lbl_8049DF58;
extern float lbl_8049DF5C;
extern float lbl_8049DF60;
extern float lbl_8049DF64;
extern float lbl_8049DF68;
extern float lbl_8049DF6C;
extern float lbl_8049DF70;
extern float lbl_8049DF74;
extern float lbl_8049DF78;
extern float lbl_8049DF7C;
extern float lbl_8049DF80;
extern float lbl_8049DF84;
extern float lbl_8049DF88;
extern float lbl_8049DF8C;
extern float lbl_8049DF90;
extern float lbl_8049DF94;
extern float lbl_8049DF98;
extern float lbl_8049DF9C;

// Forward declarations
extern void __AXDepopVoice();
extern void __AXSPBQuit();
extern void _restgpr_27();
extern void _savegpr_27();

// ----------------------------------------------------------------------------
// __AXSPBQuit
// ----------------------------------------------------------------------------
asm void __AXSPBQuit() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// __AXDepopVoice
// ----------------------------------------------------------------------------
asm void __AXDepopVoice() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r5, lbl_8049DF9C
    lha r0, 0x52(r3)
    lwz r4, lbl_8049DF90
    add r0, r5, r0
    lwz r7, lbl_8049DF84
    stw r0, lbl_8049DF9C
    lwz r6, lbl_8049DF78
    lha r0, 0x54(r3)
    lwz r5, lbl_8049DF98
    add r0, r4, r0
    lwz r4, lbl_8049DF8C
    stw r0, lbl_8049DF90
    lwz r27, lbl_8049DF80
    lha r0, 0x56(r3)
    lwz r28, lbl_8049DF74
    add r0, r7, r0
    lwz r29, lbl_8049DF94
    stw r0, lbl_8049DF84
    lwz r30, lbl_8049DF88
    lha r0, 0x58(r3)
    lwz r31, lbl_8049DF7C
    add r0, r6, r0
    lwz r12, lbl_8049DF70
    stw r0, lbl_8049DF78
    lwz r11, lbl_8049DF6C
    lha r0, 0x5a(r3)
    lwz r10, lbl_8049DF68
    add r0, r5, r0
    lwz r9, lbl_8049DF64
    stw r0, lbl_8049DF98
    lwz r8, lbl_8049DF60
    lha r0, 0x5c(r3)
    lwz r7, lbl_8049DF5C
    add r0, r4, r0
    lwz r6, lbl_8049DF58
    stw r0, lbl_8049DF8C
    lwz r5, lbl_8049DF54
    lha r0, 0x5e(r3)
    lwz r4, lbl_8049DF50
    add r0, r27, r0
    stw r0, lbl_8049DF80
    lha r0, 0x60(r3)
    add r0, r28, r0
    stw r0, lbl_8049DF74
    lha r0, 0x62(r3)
    add r0, r29, r0
    stw r0, lbl_8049DF94
    lha r0, 0x64(r3)
    add r0, r30, r0
    stw r0, lbl_8049DF88
    lha r0, 0x66(r3)
    add r0, r31, r0
    stw r0, lbl_8049DF7C
    lha r0, 0x68(r3)
    add r0, r12, r0
    stw r0, lbl_8049DF70
    lha r0, 0xfa(r3)
    add r0, r11, r0
    addi r11, r1, 0x20
    stw r0, lbl_8049DF6C
    lha r0, 0xfc(r3)
    add r0, r10, r0
    stw r0, lbl_8049DF68
    lha r0, 0xfe(r3)
    add r0, r9, r0
    stw r0, lbl_8049DF64
    lha r0, 0x100(r3)
    add r0, r8, r0
    stw r0, lbl_8049DF60
    lha r0, 0x102(r3)
    add r0, r7, r0
    stw r0, lbl_8049DF5C
    lha r0, 0x104(r3)
    add r0, r6, r0
    stw r0, lbl_8049DF58
    lha r0, 0x106(r3)
    add r0, r5, r0
    stw r0, lbl_8049DF54
    lha r0, 0x108(r3)
    add r0, r4, r0
    stw r0, lbl_8049DF50
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

