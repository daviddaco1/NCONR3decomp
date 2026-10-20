#include "types.h"
#include "m2c_macros.h"


extern "C" {

extern u8 jumptable_8034C028[];
extern u8 jumptable_8034C0F4[];
extern u8 jumptable_8034C240[];
extern u8 jumptable_8034C30C[];
extern u8 lbl_8034C3F8[];
extern u8 lbl_8034C420[];
extern u8 lbl_8034C448[];
extern u8 lbl_8034C470[];
extern u8 lbl_8034C588[];
extern u8 lbl_8034C5B0[];
extern u8 lbl_80390580[];
extern u8 lbl_80395728[];
extern u8 lbl_8039A000[];
extern u8 lbl_8039A0D0[];
extern float lbl_8049C300;
extern float lbl_8049D5B0;
extern float lbl_8049F4C8;
extern float lbl_8049F4D0;

s32 _restgpr_14();
s32 _restgpr_24();
s32 _restgpr_27();
s32 _restgpr_29();
s32 _savegpr_14();
s32 _savegpr_24();
s32 _savegpr_27();
s32 _savegpr_29();
void fn_8009161C(u8 *arg0, s32 arg1);
void fn_80091698(void);
void fn_80091708(void);
void fn_80091778(void);
void fn_8009177C(void);
s32 fn_800917B4(s32 arg0);
void fn_800917D8(s32 arg0);
s32 fn_8009185C(u32 arg0, u32 *arg1, s32 *arg2);
s32 fn_80091884(void);
void fn_800918E4(s32 arg0);
void fn_80091940(s32 arg0);
s32 fn_8009199C(s32 arg0);
void fn_800919FC(s32 arg0);
void fn_80091A58(s32 arg0);
s32 fn_80091AC8(u32 arg0, u32 *arg1, s32 *arg2);
s32 fn_80091AF0(s32 arg0);
void fn_80091B50(s32 arg0);
void fn_80091BAC(s32 arg0);
s32 fn_80091C08(u32 arg0, u32 *arg1, s32 *arg2);
s32 fn_80091C30(s32 arg0);
void fn_80091C90(s32 arg0);
void fn_80091CEC(s32 arg0);
s32 fn_80091D48(u32 arg0, u32 *arg1, s32 *arg2);
s32 fn_80091D70(s32 arg0);
void fn_80091DD0(s32 arg0);
void fn_80091E2C(s32 arg0);
f32 fn_80091E88(void);
f32 fn_80091F14(void);
f32 fn_80091FAC(s32 arg0);
s32 fn_80092080();
s32 fn_80092378();
void fn_80092618(void);
f32 fn_80092724(void);
void fn_800927DC(s32 arg0);
void fn_80092FFC(void);
s32 fn_80094228();
M2C_UNK fn_80094700(s32 arg0);
s32 fn_800961EC(void);
s32 fn_80096228(s32 arg0_pad);
void fn_80096328(s32 arg0);
s32 * fn_800A0BF0(void);
M2C_UNK memcpy(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

void fn_8009161C(u8 *arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = (s32) (fn_800961EC());
    fn_80096228((s32) (arg0));
    memset((s32) ((s32) (arg0 + 0x350)), (s32) (0), (s32) (0x1DE0));
    memset((s32) ((s32) arg0), (s32) (0x20), (s32) (0xF));
    M2C_FIELD(arg0, s32 *, 0x21B8) = (s32) (-1);
    fn_80096328((s32) (arg1));
    fn_80096228((s32) ((u8 *) temp_r31));
}

// asm_to_cpp: fn_80091698
asm void fn_80091698(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r3, lbl_8039A0D0@ha
    addi r30, r3, lbl_8039A0D0@l
    addi r3, r30, 0x4c
    lis r4, lbl_80395728@ha
    addi r31, r4, lbl_80395728@l
    addi r4, r31, 0xc98
    li r5, 0x340
    bl memcpy
    addi r3, r30, 0x38c
    addi r4, r31, 0xfd8
    li r5, 0x173c
    bl memcpy
    addi r3, r30, 0x1ad0
    lwz r4, lbl_8049C300
    addi r4, r4, 0x2718
    li r5, 0x21bc
    bl memcpy
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80091708
asm void fn_80091708(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r3, lbl_80395728@ha
    addi r30, r3, lbl_80395728@l
    addi r3, r30, 0xc98
    lis r4, lbl_8039A0D0@ha
    addi r31, r4, lbl_8039A0D0@l
    addi r4, r31, 0x4c
    li r5, 0x340
    bl memcpy
    addi r3, r30, 0xfd8
    addi r4, r31, 0x38c
    li r5, 0x173c
    bl memcpy
    lwz r3, lbl_8049C300
    addi r3, r3, 0x2718
    addi r4, r31, 0x1ad0
    li r5, 0x21bc
    bl memcpy
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

void fn_80091778(void) {
}

// asm_to_cpp: fn_8009177C
asm void fn_8009177C(void) {
    nofralloc
    li r3, 0x0
    li r4, 0x0
    lis r5, lbl_80395728@ha
    addi r6, r5, lbl_80395728@l
    li r0, 0x19
    mtctr r0
lbl_80091794:
    add r5, r6, r4
    lwz r0, 0x28(r5)
    cmpwi r0, 0x0
    beq lbl_800917A8
    addi r3, r3, 0x1
lbl_800917A8:
    addi r4, r4, 0x78
    bdnz lbl_80091794
    blr
}

// asm_to_cpp: fn_800917B4
asm s32 fn_800917B4(s32 arg0) {
    nofralloc
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    mulli r0, r3, 0x78
    add r3, r4, r0
    lwz r3, 0x28(r3)
    subfic r0, r3, 0x0
    subfe r0, r0, r0
    and r3, r3, r0
    blr
}

// asm_to_cpp: fn_800917D8
asm void fn_800917D8(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    stw r31, 0xc(r1)
    li r3, 0x0
    lis r4, lbl_80395728@ha
    addi r12, r4, lbl_80395728@l
    mr r11, r3
    mr r10, r3
    mr r9, r3
    li r8, 0x64
    mr r7, r3
    mr r6, r3
    mr r5, r3
    mr r4, r3
    li r0, 0x19
    mtctr r0
lbl_80091814:
    add r31, r12, r3
    stw r11, 0x28(r31)
    stw r10, 0x28(r31)
    stw r9, 0x2c(r31)
    stw r8, 0x30(r31)
    stw r7, 0x18(r31)
    stw r6, 0x34(r31)
    stw r5, 0x38(r31)
    stw r8, 0x40(r31)
    stw r8, 0x44(r31)
    stw r8, 0x48(r31)
    stw r8, 0x4c(r31)
    stw r4, 0x80(r31)
    addi r3, r3, 0x78
    bdnz lbl_80091814
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

s32 fn_8009185C(u32 arg0, u32 *arg1, s32 *arg2) {
    if (arg0 > 0xD0U) {
        return (s32) (1);
    }
    *arg1 = arg0 >> 3U;
    *arg2 = arg0 & 7;
    return (s32) (0);
}

// asm_to_cpp: fn_80091884
asm s32 fn_80091884(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_8009185C
    cmpwi r3, 0x0
    beq lbl_800918AC
    li r3, 0x0
    b lbl_800918D4
lbl_800918AC:
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r4, r3, r0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r3, r3, r0
    lbz r0, 0xdc8(r3)
    extsb r0, r0
    and r3, r4, r0
lbl_800918D4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800918E4
asm void fn_800918E4(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_8009185C
    cmpwi r3, 0x0
    bne lbl_80091930
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xdc8(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    or r0, r4, r0
    extsb r0, r0
    stb r0, 0xdc8(r5)
lbl_80091930:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80091940
asm void fn_80091940(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_8009185C
    cmpwi r3, 0x0
    bne lbl_8009198C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xdc8(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    andc r0, r4, r0
    extsb r0, r0
    stb r0, 0xdc8(r5)
lbl_8009198C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8009199C
asm s32 fn_8009199C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_8009185C
    cmpwi r3, 0x0
    beq lbl_800919C4
    li r3, 0x0
    b lbl_800919EC
lbl_800919C4:
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r4, r3, r0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r3, r3, r0
    lbz r0, 0xcf8(r3)
    extsb r0, r0
    and r3, r4, r0
lbl_800919EC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_800919FC
asm void fn_800919FC(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_8009185C
    cmpwi r3, 0x0
    bne lbl_80091A48
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xcf8(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    or r0, r4, r0
    extsb r0, r0
    stb r0, 0xcf8(r5)
lbl_80091A48:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80091A58
asm void fn_80091A58(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_8009185C
    cmpwi r3, 0x0
    bne lbl_80091AB4
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xcf8(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    andc r0, r4, r0
    extsb r0, r0
    stb r0, 0xcf8(r5)
    mr r3, r31
    bl fn_80091940
lbl_80091AB4:
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

s32 fn_80091AC8(u32 arg0, u32 *arg1, s32 *arg2) {
    if (arg0 > 0x90U) {
        return (s32) (1);
    }
    *arg1 = arg0 >> 3U;
    *arg2 = arg0 & 7;
    return (s32) (0);
}

// asm_to_cpp: fn_80091AF0
asm s32 fn_80091AF0(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091AC8
    cmpwi r3, 0x0
    beq lbl_80091B18
    li r3, 0x0
    b lbl_80091B40
lbl_80091B18:
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r4, r3, r0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r3, r3, r0
    lbz r0, 0xe98(r3)
    extsb r0, r0
    and r3, r4, r0
lbl_80091B40:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80091B50
asm void fn_80091B50(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091AC8
    cmpwi r3, 0x0
    bne lbl_80091B9C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xe98(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    or r0, r4, r0
    extsb r0, r0
    stb r0, 0xe98(r5)
lbl_80091B9C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80091BAC
asm void fn_80091BAC(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091AC8
    cmpwi r3, 0x0
    bne lbl_80091BF8
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xe98(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    andc r0, r4, r0
    extsb r0, r0
    stb r0, 0xe98(r5)
lbl_80091BF8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_80091C08(u32 arg0, u32 *arg1, s32 *arg2) {
    if (arg0 > 0x57U) {
        return (s32) (1);
    }
    *arg1 = arg0 >> 3U;
    *arg2 = arg0 & 7;
    return (s32) (0);
}

// asm_to_cpp: fn_80091C30
asm s32 fn_80091C30(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091C08
    cmpwi r3, 0x0
    beq lbl_80091C58
    li r3, 0x0
    b lbl_80091C80
lbl_80091C58:
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r4, r3, r0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r3, r3, r0
    lbz r0, 0xf28(r3)
    extsb r0, r0
    and r3, r4, r0
lbl_80091C80:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80091C90
asm void fn_80091C90(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091C08
    cmpwi r3, 0x0
    bne lbl_80091CDC
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xf28(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    or r0, r4, r0
    extsb r0, r0
    stb r0, 0xf28(r5)
lbl_80091CDC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80091CEC
asm void fn_80091CEC(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091C08
    cmpwi r3, 0x0
    bne lbl_80091D38
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xf28(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    andc r0, r4, r0
    extsb r0, r0
    stb r0, 0xf28(r5)
lbl_80091D38:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

s32 fn_80091D48(u32 arg0, u32 *arg1, s32 *arg2) {
    if (arg0 > 0x57U) {
        return (s32) (1);
    }
    *arg1 = arg0 >> 3U;
    *arg2 = arg0 & 7;
    return (s32) (0);
}

// asm_to_cpp: fn_80091D70
asm s32 fn_80091D70(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091D48
    cmpwi r3, 0x0
    beq lbl_80091D98
    li r3, 0x0
    b lbl_80091DC0
lbl_80091D98:
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r4, r3, r0
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r3, r3, r0
    lbz r0, 0xf80(r3)
    extsb r0, r0
    and r3, r4, r0
lbl_80091DC0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80091DD0
asm void fn_80091DD0(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091D48
    cmpwi r3, 0x0
    bne lbl_80091E1C
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xf80(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    or r0, r4, r0
    extsb r0, r0
    stb r0, 0xf80(r5)
lbl_80091E1C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80091E2C
asm void fn_80091E2C(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80091D48
    cmpwi r3, 0x0
    bne lbl_80091E78
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc(r1)
    add r5, r3, r0
    lbz r4, 0xf80(r5)
    li r3, 0x1
    lwz r0, 0x8(r1)
    slw r0, r3, r0
    andc r0, r4, r0
    extsb r0, r0
    stb r0, 0xf80(r5)
lbl_80091E78:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80091E88
asm f32 fn_80091E88(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    li r31, 0x0
lbl_80091EA4:
    mr r3, r31
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80091EB8
    addi r30, r30, 0x1
lbl_80091EB8:
    addi r31, r31, 0x1
    cmpwi r31, 0xd0
    blt lbl_80091EA4
    cmpwi r30, 0x0
    beq lbl_80091EF4
    lfd f1, lbl_8049F4C8
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, lbl_8049F4D0
    fdivs f1, f1, f0
    b lbl_80091EFC
lbl_80091EF4:
    la r3, lbl_8049F4D0
    lfs f1, 0x4(r3)
lbl_80091EFC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80091F14
asm f32 fn_80091F14(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    li r31, 0x0
lbl_80091F30:
    mr r3, r31
    bl fn_80091AF0
    cmpwi r3, 0x0
    beq lbl_80091F44
    addi r30, r30, 0x1
lbl_80091F44:
    addi r31, r31, 0x1
    cmpwi r31, 0x4c
    blt lbl_80091F30
    cmpwi r30, 0x0
    beq lbl_80091F8C
    lfd f1, lbl_8049F4C8
    xoris r0, r30, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    la r3, lbl_8049F4D0
    lfs f0, 0x8(r3)
    fsubs f1, f1, f0
    lfs f0, 0xc(r3)
    fdivs f1, f1, f0
    b lbl_80091F94
lbl_80091F8C:
    la r3, lbl_8049F4D0
    lfs f1, 0x4(r3)
lbl_80091F94:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80091FAC
asm f32 fn_80091FAC(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    li r6, 0x0
    li r4, 0x0
    slwi r5, r3, 6
    lis r3, lbl_80395728@ha
    addi r0, r3, lbl_80395728@l
    add r5, r0, r5
    li r0, 0xa
    mtctr r0
lbl_80091FD0:
    add r3, r5, r4
    lwz r0, 0x11c8(r3)
    cmpwi r0, 0x6
    bne lbl_80091FE4
    addi r6, r6, 0x1
lbl_80091FE4:
    cmpwi r0, 0x5
    bne lbl_80091FF0
    addi r6, r6, 0x2
lbl_80091FF0:
    cmpwi r0, 0x4
    bne lbl_80091FFC
    addi r6, r6, 0x3
lbl_80091FFC:
    cmpwi r0, 0x3
    bne lbl_80092008
    addi r6, r6, 0x4
lbl_80092008:
    cmpwi r0, 0x2
    bne lbl_80092014
    addi r6, r6, 0x5
lbl_80092014:
    cmpwi r0, 0x1
    bne lbl_80092020
    addi r6, r6, 0x6
lbl_80092020:
    cmpwi r0, 0x0
    bne lbl_8009202C
    addi r6, r6, 0x7
lbl_8009202C:
    addi r4, r4, 0x4
    bdnz lbl_80091FD0
    cmpwi r6, 0x0
    beq lbl_80092070
    la r3, lbl_8049F4D0
    lfd f1, lbl_8049F4C8
    xoris r0, r6, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f1
    lfs f0, 0x14(r3)
    fdivs f1, f1, f0
    lfs f0, 0x10(r3)
    fmuls f1, f0, f1
    b lbl_80092078
lbl_80092070:
    la r3, lbl_8049F4D0
    lfs f1, 0x4(r3)
lbl_80092078:
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80092080
asm s32 fn_80092080() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    li r25, 0x0
    li r24, 0x0
    li r26, 0x1
    li r30, 0x40
    li r29, 0x4
    lis r27, jumptable_8034C028@ha
    lis r3, lbl_80395728@ha
    addi r28, r3, lbl_80395728@l
    li r31, 0xa
lbl_800920B8:
    li r3, -0x1
    cmplwi r26, 0x32
    bgt lbl_80092260
    addi r4, r27, jumptable_8034C028@l
    lwzx r4, r4, r29
    mtctr r4
    bctr
    li r3, 0x37
    b lbl_80092260
    li r3, 0x38
    b lbl_80092260
    li r3, 0x39
    b lbl_80092260
    li r3, 0x3a
    b lbl_80092260
    li r3, 0x3b
    b lbl_80092260
    li r3, 0x3c
    b lbl_80092260
    li r3, 0x3d
    b lbl_80092260
    li r3, 0x3e
    b lbl_80092260
    li r3, 0x3f
    b lbl_80092260
    li r3, 0x40
    b lbl_80092260
    li r3, 0x41
    b lbl_80092260
    li r3, 0x42
    b lbl_80092260
    li r3, 0x43
    b lbl_80092260
    li r3, 0x44
    b lbl_80092260
    li r3, 0x45
    b lbl_80092260
    li r3, 0x46
    b lbl_80092260
    li r3, 0x47
    b lbl_80092260
    li r3, 0x48
    b lbl_80092260
    li r3, 0x49
    b lbl_80092260
    li r3, 0x4a
    b lbl_80092260
    li r3, 0x4b
    b lbl_80092260
    li r3, 0x4c
    b lbl_80092260
    li r3, 0x4d
    b lbl_80092260
    li r3, 0x4e
    b lbl_80092260
    li r3, 0x4f
    b lbl_80092260
    li r3, 0x50
    b lbl_80092260
    li r3, 0x51
    b lbl_80092260
    li r3, 0x52
    b lbl_80092260
    li r3, 0x53
    b lbl_80092260
    li r3, 0x54
    b lbl_80092260
    li r3, 0x55
    b lbl_80092260
    li r3, 0x56
    b lbl_80092260
    li r3, 0x57
    b lbl_80092260
    li r3, 0x58
    b lbl_80092260
    li r3, 0x59
    b lbl_80092260
    li r3, 0x5a
    b lbl_80092260
    li r3, 0x5b
    b lbl_80092260
    li r3, 0x5c
    b lbl_80092260
    li r3, 0x5d
    b lbl_80092260
    li r3, 0x5e
    b lbl_80092260
    li r3, 0x5f
    b lbl_80092260
    li r3, 0x60
    b lbl_80092260
    li r3, 0x61
    b lbl_80092260
    li r3, 0x62
    b lbl_80092260
    li r3, 0x63
    b lbl_80092260
    li r3, 0x64
    b lbl_80092260
    li r3, 0x65
    b lbl_80092260
    li r3, 0x66
    b lbl_80092260
    li r3, 0x67
    b lbl_80092260
    li r3, 0x68
lbl_80092260:
    cmpwi r3, -0x1
    beq lbl_80092274
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800922F0
lbl_80092274:
    addi r25, r25, 0x1
    li r5, 0x0
    li r3, 0x0
    add r0, r28, r30
    mtctr r31
lbl_80092288:
    add r4, r0, r3
    lwz r4, 0x11c8(r4)
    cmpwi r4, 0x0
    bne lbl_8009229C
    addi r5, r5, 0x7
lbl_8009229C:
    cmpwi r4, 0x1
    bne lbl_800922A8
    addi r5, r5, 0x6
lbl_800922A8:
    cmpwi r4, 0x2
    bne lbl_800922B4
    addi r5, r5, 0x5
lbl_800922B4:
    cmpwi r4, 0x3
    bne lbl_800922C0
    addi r5, r5, 0x4
lbl_800922C0:
    cmpwi r4, 0x4
    bne lbl_800922CC
    addi r5, r5, 0x3
lbl_800922CC:
    cmpwi r4, 0x5
    bne lbl_800922D8
    addi r5, r5, 0x2
lbl_800922D8:
    cmpwi r4, 0x6
    bne lbl_800922E4
    addi r5, r5, 0x1
lbl_800922E4:
    addi r3, r3, 0x4
    bdnz lbl_80092288
    add r24, r24, r5
lbl_800922F0:
    addi r26, r26, 0x1
    addi r30, r30, 0x40
    addi r29, r29, 0x4
    cmpwi r26, 0x33
    blt lbl_800920B8
    cmpwi r24, 0x0
    bne lbl_80092318
    la r3, lbl_8049F4D0
    lfs f1, 0x4(r3)
    b lbl_80092360
lbl_80092318:
    la r4, lbl_8049F4D0
    lfd f1, lbl_8049F4C8
    xoris r0, r24, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f2, f0, f1
    xoris r0, r25, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f0, f1
    lfs f0, 0x14(r4)
    fmuls f0, f0, f1
    fdivs f1, f2, f0
    lfs f0, 0x10(r4)
    fmuls f1, f0, f1
lbl_80092360:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: fn_80092378
asm s32 fn_80092378() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r28, 0x0
    li r27, 0x0
    li r29, 0x0
    li r31, 0x0
    lis r30, jumptable_8034C0F4@ha
lbl_800923A0:
    li r3, -0x1
    cmplwi r29, 0x52
    bgt lbl_80092580
    addi r4, r30, jumptable_8034C0F4@l
    lwzx r4, r4, r31
    mtctr r4
    bctr
    li r3, 0x4
    b lbl_80092580
    li r3, 0x5
    b lbl_80092580
    li r3, 0x6
    b lbl_80092580
    li r3, 0x7
    b lbl_80092580
    li r3, 0xb
    b lbl_80092580
    li r3, 0xc
    b lbl_80092580
    li r3, 0x3f
    b lbl_80092580
    li r3, 0x41
    b lbl_80092580
    li r3, 0x44
    b lbl_80092580
    li r3, 0x45
    b lbl_80092580
    li r3, 0x47
    b lbl_80092580
    li r3, 0x48
    b lbl_80092580
    li r3, 0x49
    b lbl_80092580
    li r3, 0x4b
    b lbl_80092580
    li r3, 0x4c
    b lbl_80092580
    li r3, 0x4d
    b lbl_80092580
    li r3, 0x4e
    b lbl_80092580
    li r3, 0x4f
    b lbl_80092580
    li r3, 0x50
    b lbl_80092580
    li r3, 0x51
    b lbl_80092580
    li r3, 0x52
    b lbl_80092580
    li r3, 0x53
    b lbl_80092580
    li r3, 0x55
    b lbl_80092580
    li r3, 0x56
    b lbl_80092580
    li r3, 0x57
    b lbl_80092580
    li r3, 0x58
    b lbl_80092580
    li r3, 0x59
    b lbl_80092580
    li r3, 0x5a
    b lbl_80092580
    li r3, 0x5b
    b lbl_80092580
    li r3, 0x5c
    b lbl_80092580
    li r3, 0x5d
    b lbl_80092580
    li r3, 0x5e
    b lbl_80092580
    li r3, 0x5f
    b lbl_80092580
    li r3, 0x60
    b lbl_80092580
    li r3, 0x62
    b lbl_80092580
    li r3, 0x65
    b lbl_80092580
    li r3, 0x66
    b lbl_80092580
    li r3, 0x67
    b lbl_80092580
    li r3, 0x6c
    b lbl_80092580
    li r3, 0x6d
    b lbl_80092580
    li r3, 0x6e
    b lbl_80092580
    li r3, 0x70
    b lbl_80092580
    li r3, 0x72
    b lbl_80092580
    li r3, 0x73
    b lbl_80092580
    li r3, 0x74
    b lbl_80092580
    li r3, 0x75
    b lbl_80092580
    li r3, 0x76
    b lbl_80092580
    li r3, 0x77
    b lbl_80092580
    li r3, 0x78
    b lbl_80092580
    li r3, 0x79
    b lbl_80092580
    li r3, 0x7a
    b lbl_80092580
    li r3, 0x7c
    b lbl_80092580
    li r3, 0x7d
    b lbl_80092580
    li r3, 0x7e
    b lbl_80092580
    li r3, 0x7f
    b lbl_80092580
    li r3, 0x81
    b lbl_80092580
    li r3, 0x82
lbl_80092580:
    cmpwi r3, -0x1
    beq lbl_8009259C
    addi r27, r27, 0x1
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009259C
    addi r28, r28, 0x1
lbl_8009259C:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
    cmpwi r29, 0x57
    blt lbl_800923A0
    cmpwi r28, 0x0
    bne lbl_800925C0
    la r3, lbl_8049F4D0
    lfs f1, 0x4(r3)
    b lbl_80092600
lbl_800925C0:
    la r4, lbl_8049F4D0
    lfd f2, lbl_8049F4C8
    xoris r0, r28, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r27, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    lfs f0, 0x10(r4)
    fmuls f1, f0, f1
lbl_80092600:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80092618
asm void fn_80092618(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r0, 0x0
    stw r0, lbl_8049D5B0
    lis r31, lbl_8039A000@ha
    addi r3, r31, lbl_8039A000@l
    li r4, 0x0
    li r5, 0xd0
    bl memset
    li r0, 0x1
    addi r3, r31, lbl_8039A000@l
    stb r0, 0x5(r3)
    stb r0, 0xc(r3)
    stb r0, 0x10(r3)
    stb r0, 0x93(r3)
    stb r0, 0xc9(r3)
    stb r0, 0xc8(r3)
    stb r0, 0x96(r3)
    stb r0, 0xac(r3)
    stb r0, 0x97(r3)
    stb r0, 0x99(r3)
    stb r0, 0xa8(r3)
    stb r0, 0x9d(r3)
    stb r0, 0x9e(r3)
    stb r0, 0xa0(r3)
    stb r0, 0x98(r3)
    stb r0, 0x9c(r3)
    stb r0, 0xb2(r3)
    stb r0, 0xb4(r3)
    stb r0, 0xb5(r3)
    stb r0, 0xad(r3)
    stb r0, 0x9a(r3)
    stb r0, 0x9b(r3)
    stb r0, 0xa6(r3)
    stb r0, 0xa9(r3)
    stb r0, 0xae(r3)
    stb r0, 0xa3(r3)
    stb r0, 0xce(r3)
    stb r0, 0xcf(r3)
    stb r0, 0x82(r3)
    stb r0, 0x81(r3)
    stb r0, 0x6c(r3)
    stb r0, 0x6f(r3)
    stb r0, 0x70(r3)
    stb r0, 0x3c(r3)
    stb r0, 0x3d(r3)
    stb r0, 0x47(r3)
    stb r0, 0x44(r3)
    stb r0, 0x4a(r3)
    stb r0, 0x3e(r3)
    stb r0, 0x41(r3)
    stb r0, 0x3f(r3)
    stb r0, 0x56(r3)
    stb r0, 0x55(r3)
    stb r0, 0x4e(r3)
    stb r0, 0x4f(r3)
    stb r0, 0x14(r3)
    lwz r3, lbl_8049D5B0
    addi r0, r3, 0x2e
    stw r0, lbl_8049D5B0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80092724
asm f32 fn_80092724(void) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_29
    li r29, 0x0
    li r30, 0x0
    lis r3, lbl_8039A000@ha
    addi r31, r3, lbl_8039A000@l
lbl_80092748:
    mr r3, r30
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80092768
    lbz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_80092768
    addi r29, r29, 0x1
lbl_80092768:
    addi r30, r30, 0x1
    addi r31, r31, 0x1
    cmpwi r30, 0xd0
    blt lbl_80092748
    cmpwi r29, 0x0
    beq lbl_800927BC
    lfd f2, lbl_8049F4C8
    xoris r0, r29, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lwz r0, lbl_8049D5B0
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
    b lbl_800927C4
lbl_800927BC:
    la r3, lbl_8049F4D0
    lfs f1, 0x4(r3)
lbl_800927C4:
    addi r11, r1, 0x30
    bl _restgpr_29
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

void fn_800927DC(s32 arg0) {
    fn_800919FC((s32) (0));
    fn_800918E4((s32) (0));
    fn_800919FC((s32) (1));
    fn_800918E4((s32) (1));
    fn_800919FC((s32) (2));
    fn_800918E4((s32) (2));
    fn_800919FC((s32) (3));
    fn_800918E4((s32) (3));
    fn_800919FC((s32) (8));
    fn_800918E4((s32) (8));
    fn_800919FC((s32) (9));
    fn_800918E4((s32) (9));
    fn_800919FC((s32) (0xA));
    fn_800918E4((s32) (0xA));
    fn_800919FC((s32) (0xD));
    fn_800918E4((s32) (0xD));
    fn_800919FC((s32) (0xF));
    fn_800918E4((s32) (0xF));
    fn_800919FC((s32) (0x10));
    fn_800918E4((s32) (0x10));
    fn_800919FC((s32) (0x11));
    fn_800918E4((s32) (0x11));
    fn_800919FC((s32) (0x12));
    fn_800918E4((s32) (0x12));
    fn_800919FC((s32) (0x37));
    fn_800918E4((s32) (0x37));
    fn_800919FC((s32) (0x38));
    fn_800918E4((s32) (0x38));
    fn_800919FC((s32) (0x39));
    fn_800918E4((s32) (0x39));
    fn_800919FC((s32) (0x3A));
    fn_800918E4((s32) (0x3A));
    fn_800919FC((s32) (0x3B));
    fn_800918E4((s32) (0x3B));
    fn_800919FC((s32) (0x3C));
    fn_800918E4((s32) (0x3C));
    fn_800919FC((s32) (0x3D));
    fn_800918E4((s32) (0x3D));
    fn_800919FC((s32) (0x3E));
    fn_800918E4((s32) (0x3E));
    fn_800919FC((s32) (0x71));
    fn_800918E4((s32) (0x71));
    fn_800919FC((s32) (0x7B));
    fn_800918E4((s32) (0x7B));
    fn_800919FC((s32) (0x80));
    fn_800918E4((s32) (0x80));
    fn_800919FC((s32) (0x85));
    fn_800918E4((s32) (0x85));
    fn_800919FC((s32) (0x86));
    fn_800918E4((s32) (0x86));
    fn_800919FC((s32) (0x87));
    fn_800918E4((s32) (0x87));
    fn_800919FC((s32) (0x88));
    fn_800918E4((s32) (0x88));
    fn_800919FC((s32) (0x89));
    fn_800918E4((s32) (0x89));
    fn_800919FC((s32) (0x8A));
    fn_800918E4((s32) (0x8A));
    fn_800919FC((s32) (0x8B));
    fn_800918E4((s32) (0x8B));
    fn_800919FC((s32) (0x8C));
    fn_800918E4((s32) (0x8C));
    fn_800919FC((s32) (0x8D));
    fn_800918E4((s32) (0x8D));
    fn_800919FC((s32) (0x8E));
    fn_800918E4((s32) (0x8E));
    fn_800919FC((s32) (0x8F));
    fn_800918E4((s32) (0x8F));
    fn_800919FC((s32) (0x90));
    fn_800918E4((s32) (0x90));
    fn_800919FC((s32) (0x91));
    fn_800918E4((s32) (0x91));
    fn_800919FC((s32) (0x92));
    fn_800918E4((s32) (0x92));
    fn_800919FC((s32) (0x93));
    fn_800918E4((s32) (0x93));
    fn_800919FC((s32) (0x95));
    fn_800918E4((s32) (0x95));
    fn_800919FC((s32) (0xC8));
    fn_800918E4((s32) (0xC8));
    fn_800919FC((s32) (0xCC));
    fn_800918E4((s32) (0xCC));
    fn_800919FC((s32) (0xCD));
    fn_800918E4((s32) (0xCD));
    fn_800919FC((s32) (0xCE));
    fn_800918E4((s32) (0xCE));
    fn_80091B50((s32) (0));
    fn_80091B50((s32) (1));
    fn_80091B50((s32) (2));
    fn_80091B50((s32) (3));
    fn_80091C90((s32) (0));
    fn_80091C90((s32) (1));
    fn_80091C90((s32) (2));
    fn_80091C90((s32) (4));
    fn_80091C90((s32) (5));
    fn_80091C90((s32) (7));
    fn_80091C90((s32) (8));
    fn_80091C90((s32) (9));
    fn_80091C90((s32) (0xA));
    fn_80091C90((s32) (0xB));
    fn_80091C90((s32) (0xC));
    fn_80091C90((s32) (0xD));
    fn_80091C90((s32) (0xE));
    fn_80091C90((s32) (0xF));
    fn_80091C90((s32) (0x11));
    fn_80091C90((s32) (0x1E));
    fn_80091C90((s32) (0x1F));
    fn_80091C90((s32) (0x23));
    fn_80091C90((s32) (0x25));
    fn_80091C90((s32) (0x28));
    fn_80091C90((s32) (0x29));
    fn_80091C90((s32) (0x2A));
    fn_80091C90((s32) (0x2B));
    fn_80091C90((s32) (0x2C));
    fn_80091C90((s32) (0x3C));
    fn_80091C90((s32) (0x3D));
    fn_80091C90((s32) (0x3E));
    fn_80091C90((s32) (0x40));
    fn_80091C90((s32) (0x41));
    fn_80091C90((s32) (0x42));
    fn_80091C90((s32) (0x43));
    fn_80091C90((s32) (0x4B));
    fn_80091C90((s32) (0x50));
    fn_80091C90((s32) (0x51));
    fn_80091C90((s32) (0x52));
    fn_80091DD0((s32) (0));
    fn_80091DD0((s32) (1));
    fn_80091DD0((s32) (2));
    fn_80091DD0((s32) (3));
    fn_80091DD0((s32) (4));
    fn_80091DD0((s32) (5));
    fn_80091DD0((s32) (7));
    fn_80091DD0((s32) (8));
    fn_80091DD0((s32) (9));
    fn_80091DD0((s32) (0xA));
    fn_80091DD0((s32) (0xB));
    fn_80091DD0((s32) (0xC));
    fn_80091DD0((s32) (0xD));
    fn_80091DD0((s32) (0xE));
    fn_80091DD0((s32) (0xF));
    fn_80091DD0((s32) (0x11));
    fn_80091DD0((s32) (0x14));
    fn_80091DD0((s32) (0x15));
    fn_80091DD0((s32) (0x17));
    fn_80091DD0((s32) (0x18));
    fn_80091DD0((s32) (0x19));
    fn_80091DD0((s32) (0x1E));
    fn_80091DD0((s32) (0x1F));
    fn_80091DD0((s32) (0x20));
    fn_80091DD0((s32) (0x21));
    fn_80091DD0((s32) (0x22));
    fn_80091DD0((s32) (0x23));
    fn_80091DD0((s32) (0x25));
    fn_80091DD0((s32) (0x28));
    fn_80091DD0((s32) (0x29));
    fn_80091DD0((s32) (0x2A));
    fn_80091DD0((s32) (0x2B));
    fn_80091DD0((s32) (0x2C));
    fn_80091DD0((s32) (0x2D));
    fn_80091DD0((s32) (0x2E));
    fn_80091DD0((s32) (0x2F));
    fn_80091DD0((s32) (0x30));
    fn_80091DD0((s32) (0x32));
    fn_80091DD0((s32) (0x37));
    fn_80091DD0((s32) (0x3C));
    fn_80091DD0((s32) (0x3D));
    fn_80091DD0((s32) (0x3E));
    fn_80091DD0((s32) (0x40));
    fn_80091DD0((s32) (0x41));
    fn_80091DD0((s32) (0x42));
    fn_80091DD0((s32) (0x43));
    fn_80091DD0((s32) (0x44));
    fn_80091DD0((s32) (0x45));
    fn_80091DD0((s32) (0x46));
    fn_80091DD0((s32) (0x47));
    fn_80091DD0((s32) (0x4B));
    fn_80091DD0((s32) (0x4C));
    fn_80091DD0((s32) (0x4D));
    fn_80091DD0((s32) (0x4F));
    fn_80091DD0((s32) (0x50));
    fn_80091DD0((s32) (0x51));
    fn_80091DD0((s32) (0x52));
    fn_80091A58((s32) (0x40));
    fn_80091940((s32) (0x40));
    fn_80091A58((s32) (0x42));
    fn_80091940((s32) (0x42));
    fn_80091A58((s32) (0x43));
    fn_80091940((s32) (0x43));
    fn_80091A58((s32) (0x54));
    fn_80091940((s32) (0x54));
    fn_80091A58((s32) (0x61));
    fn_80091940((s32) (0x61));
    fn_80091A58((s32) (0x46));
    fn_80091940((s32) (0x46));
    fn_80091A58((s32) (0x4A));
    fn_80091940((s32) (0x4A));
    fn_80091A58((s32) (0x63));
    fn_80091940((s32) (0x63));
    fn_80091A58((s32) (0x64));
    fn_80091940((s32) (0x64));
    fn_80091A58((s32) (0x68));
    fn_80091940((s32) (0x68));
    fn_80091A58((s32) (0x69));
    fn_80091940((s32) (0x69));
    fn_80091A58((s32) (0x6A));
    fn_80091940((s32) (0x6A));
    fn_80091A58((s32) (0x6B));
    fn_80091940((s32) (0x6B));
    fn_80091A58((s32) (0x6F));
    fn_80091940((s32) (0x6F));
    fn_80091A58((s32) (0x9F));
    fn_80091940((s32) (0x9F));
    fn_80091A58((s32) (0xA1));
    fn_80091940((s32) (0xA1));
    fn_80091A58((s32) (0xA2));
    fn_80091940((s32) (0xA2));
    fn_80091A58((s32) (0xB3));
    fn_80091940((s32) (0xB3));
    fn_80091A58((s32) (0xC0));
    fn_80091940((s32) (0xC0));
    fn_80091A58((s32) (0xA5));
    fn_80091940((s32) (0xA5));
    fn_80091A58((s32) (0xA9));
    fn_80091940((s32) (0xA9));
    fn_80091A58((s32) (0xC1));
    fn_80091940((s32) (0xC1));
    fn_80091A58((s32) (0xC2));
    fn_80091940((s32) (0xC2));
    fn_80091A58((s32) (0xC3));
    fn_80091940((s32) (0xC3));
    fn_80091A58((s32) (0xC4));
    fn_80091940((s32) (0xC4));
    fn_80091A58((s32) (0xC5));
    fn_80091940((s32) (0xC5));
    fn_80091A58((s32) (0xC6));
    fn_80091940((s32) (0xC6));
    fn_80091A58((s32) (0xC7));
    fn_80091940((s32) (0xC7));
    fn_80091BAC((s32) (0x59));
    fn_80091BAC((s32) (0x5B));
    fn_80091BAC((s32) (0x5C));
    fn_80091BAC((s32) (0x6D));
    fn_80091BAC((s32) (0x7A));
    fn_80091BAC((s32) (0x5F));
    fn_80091BAC((s32) (0x63));
    fn_80091BAC((s32) (0x7B));
    fn_80091BAC((s32) (0x7C));
    fn_80091BAC((s32) (0x7D));
    fn_80091BAC((s32) (0x7E));
    fn_80091BAC((s32) (0x7F));
    fn_80091BAC((s32) (0x80));
    fn_80091BAC((s32) (0x81));
    fn_80091CEC((s32) (0x53));
    fn_80091CEC((s32) (0x54));
    fn_80091E2C((s32) (0x53));
    fn_80091E2C((s32) (0x54));
    fn_80092618();
}

// asm_to_cpp: fn_80092FFC
asm void fn_80092FFC(void) {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    stfd f30, 0x70(r1)
    opword 0xF3C10078
    stfd f29, 0x60(r1)
    opword 0xF3A10068
    stfd f28, 0x50(r1)
    opword 0xF3810058
    addi r11, r1, 0x50
    bl _savegpr_14
    li r28, 0x0
    la r4, lbl_8049F4D0
    lfs f30, 0x10(r4)
    lfs f28, 0x18(r4)
    lis r3, lbl_80395728@ha
    addi r14, r3, lbl_80395728@l
    lfs f31, 0x1c(r4)
lbl_8009304C:
    li r3, 0x48
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_8009308C
    li r3, 0x49
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_8009308C
    li r3, 0x4a
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_8009308C
    li r3, 0x4b
    bl fn_80091AF0
    cmpwi r3, 0x0
    beq lbl_80093090
lbl_8009308C:
    li r28, 0x1
lbl_80093090:
    li r22, 0x0
    li r23, 0x0
    li r24, 0x0
    li r25, 0x0
    li r26, 0x0
    li r27, 0x0
    li r17, 0x0
    li r18, 0x0
    li r19, 0x0
    li r20, 0x0
    li r21, 0x0
    li r3, 0x58
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x5a
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x59
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x5b
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x53
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x55
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x3f
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x41
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x5c
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x4e
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r3, 0x4f
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093170
    li r27, 0x1
lbl_80093170:
    li r3, 0x5e
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800931A4
    li r3, 0x60
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800931A4
    li r3, 0x5f
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800931A4
    li r26, 0x1
lbl_800931A4:
    li r3, 0x49
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x48
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x47
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x45
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x44
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x51
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x52
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x50
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r3, 0x62
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093238
    li r25, 0x1
lbl_80093238:
    li r3, 0x4b
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009328C
    li r3, 0x4c
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009328C
    li r3, 0x4d
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009328C
    li r3, 0x56
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009328C
    li r3, 0x57
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009328C
    li r24, 0x1
lbl_8009328C:
    li r3, 0x66
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800932B0
    li r3, 0x65
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800932B0
    li r23, 0x1
lbl_800932B0:
    li r3, 0x5d
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800932C4
    li r22, 0x1
lbl_800932C4:
    li r3, 0x6c
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093328
    li r3, 0x6d
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093328
    li r3, 0x6e
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093328
    li r3, 0x70
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093328
    li r3, 0x72
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093328
    li r3, 0x73
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093328
    li r21, 0x1
lbl_80093328:
    li r3, 0x74
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009336C
    li r3, 0x75
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009336C
    li r3, 0x76
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009336C
    li r3, 0x77
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009336C
    li r20, 0x1
lbl_8009336C:
    li r3, 0x7c
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800933A0
    li r3, 0x7d
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800933A0
    li r3, 0x7f
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800933A0
    li r19, 0x1
lbl_800933A0:
    li r3, 0x78
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800933D4
    li r3, 0x79
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800933D4
    li r3, 0x7a
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800933D4
    li r18, 0x1
lbl_800933D4:
    li r3, 0x7e
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800933E8
    li r17, 0x1
lbl_800933E8:
    li r30, 0x0
    li r3, 0x3
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80093420
    cmpwi r28, 0x0
    beq lbl_80093420
    li r3, 0x3
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80093420:
    li r3, 0x14
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8009347C
    li r3, 0x0
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_80093470
    li r3, 0x1
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_80093470
    li r3, 0x2
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_80093470
    li r3, 0x3
    bl fn_80091AF0
    cmpwi r3, 0x0
    beq lbl_8009347C
lbl_80093470:
    li r3, 0x14
    bl fn_800919FC
    li r30, 0x1
lbl_8009347C:
    li r16, 0x0
lbl_80093480:
    li r29, 0x0
    li r15, 0x0
    li r31, 0x0
lbl_8009348C:
    add r3, r16, r31
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_800934A0
    li r29, 0x1
lbl_800934A0:
    addi r15, r15, 0x1
    addi r31, r31, 0x4
    cmpwi r15, 0x12
    blt lbl_8009348C
    cmpwi r29, 0x0
    bne lbl_800934D4
    addi r3, r16, 0x48
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_800934D4
    addi r3, r16, 0x48
    bl fn_80091B50
    li r30, 0x1
lbl_800934D4:
    addi r16, r16, 0x1
    cmpwi r16, 0x4
    blt lbl_80093480
    li r16, 0x0
    li r15, 0x0
lbl_800934E8:
    addi r3, r16, 0x15
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_800935C4
    mr r3, r15
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_80093538
    addi r3, r15, 0x1
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_80093538
    addi r3, r15, 0x2
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_80093538
    addi r3, r15, 0x3
    bl fn_80091AF0
    cmpwi r3, 0x0
    beq lbl_800935C4
lbl_80093538:
    addi r3, r16, 0x15
    bl fn_800919FC
    li r30, 0x1
    li r3, 0x15
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093570
    li r3, 0x34
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_80093570
    li r3, 0x34
    bl fn_800919FC
    b lbl_800935C4
lbl_80093570:
    li r3, 0x1a
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_8009359C
    li r3, 0x35
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_8009359C
    li r3, 0x35
    bl fn_800919FC
    b lbl_800935C4
lbl_8009359C:
    li r3, 0x1f
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800935C4
    li r3, 0x36
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_800935C4
    li r3, 0x36
    bl fn_800919FC
lbl_800935C4:
    addi r16, r16, 0x1
    addi r15, r15, 0x4
    cmpwi r16, 0x13
    blt lbl_800934E8
    li r3, 0x94
    bl fn_8009199C
    cmpwi r3, 0x0
    bne lbl_800935F8
    cmpwi r28, 0x0
    beq lbl_800935F8
    li r3, 0x94
    bl fn_800919FC
    li r30, 0x1
lbl_800935F8:
    li r3, 0x2e
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80093628
    li r3, 0x30
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80093628
    li r3, 0x2f
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_8009365C
lbl_80093628:
    cmpwi r27, 0x0
    beq lbl_8009365C
    li r3, 0x2e
    bl fn_80091C90
    li r3, 0x30
    bl fn_80091C90
    li r3, 0x2f
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_8009365C:
    li r3, 0x19
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x18
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x17
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x15
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x14
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x21
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x22
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x20
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800936EC
    li r3, 0x32
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_8009377C
lbl_800936EC:
    li r0, 0x0
    cmpwi r27, 0x0
    beq lbl_8009370C
    cmpwi r26, 0x0
    beq lbl_8009370C
    cmpwi r21, 0x0
    beq lbl_8009370C
    li r0, 0x1
lbl_8009370C:
    cmpwi r28, 0x0
    beq lbl_80093718
    li r0, 0x1
lbl_80093718:
    cmpwi r0, 0x0
    beq lbl_8009377C
    li r3, 0x19
    bl fn_80091C90
    li r3, 0x18
    bl fn_80091C90
    li r3, 0x17
    bl fn_80091C90
    li r3, 0x15
    bl fn_80091C90
    li r3, 0x14
    bl fn_80091C90
    li r3, 0x21
    bl fn_80091C90
    li r3, 0x22
    bl fn_80091C90
    li r3, 0x20
    bl fn_80091C90
    li r3, 0x32
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_8009377C:
    li r3, 0x1b
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800937CC
    li r3, 0x1c
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800937CC
    li r3, 0x1d
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800937CC
    li r3, 0x26
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800937CC
    li r3, 0x27
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80093820
lbl_800937CC:
    cmpwi r27, 0x0
    beq lbl_80093820
    cmpwi r26, 0x0
    beq lbl_80093820
    cmpwi r25, 0x0
    beq lbl_80093820
    li r3, 0x1b
    bl fn_80091C90
    li r3, 0x1c
    bl fn_80091C90
    li r3, 0x1d
    bl fn_80091C90
    li r3, 0x26
    bl fn_80091C90
    li r3, 0x27
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80093820:
    li r3, 0x36
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80093840
    li r3, 0x35
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80093A14
lbl_80093840:
    li r15, 0x0
    li r3, 0x4e
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093944
    li r3, 0x4f
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093944
    li r3, 0x51
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093944
    li r3, 0x52
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093944
    li r3, 0x50
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093944
    li r3, 0x18
    bl fn_80091FAC
    fcmpo cr0, f1, f28
    opword 0x4C411382
    bne lbl_80093944
    li r3, 0x19
    bl fn_80091FAC
    fcmpo cr0, f1, f28
    opword 0x4C411382
    bne lbl_80093944
    li r3, 0x1b
    bl fn_80091FAC
    fcmpo cr0, f1, f28
    opword 0x4C411382
    bne lbl_80093944
    li r3, 0x1c
    bl fn_80091FAC
    fcmpo cr0, f1, f28
    opword 0x4C411382
    bne lbl_80093944
    li r3, 0x1a
    bl fn_80091FAC
    fcmpo cr0, f1, f28
    opword 0x4C411382
    bne lbl_80093944
    li r3, 0x19
    bl fn_80091FAC
    fmr f29, f1
    li r3, 0x18
    bl fn_80091FAC
    fadds f29, f1, f29
    li r3, 0x1b
    bl fn_80091FAC
    fadds f29, f1, f29
    li r3, 0x1c
    bl fn_80091FAC
    fadds f29, f1, f29
    li r3, 0x1a
    bl fn_80091FAC
    fadds f0, f1, f29
    fcmpo cr0, f0, f30
    opword 0x4C411382
    bne lbl_80093944
    li r15, 0x1
lbl_80093944:
    cmpwi r27, 0x0
    beq lbl_800939E8
    cmpwi r26, 0x0
    beq lbl_800939E8
    cmpwi r25, 0x0
    beq lbl_800939E8
    cmpwi r24, 0x0
    beq lbl_800939E8
    cmpwi r18, 0x0
    beq lbl_800939E8
    cmpwi r17, 0x0
    beq lbl_800939E8
    li r3, 0x4
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800939E8
    li r3, 0x5
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800939E8
    li r3, 0x6
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800939E8
    li r3, 0xb
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800939E8
    li r3, 0xc
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800939E8
    li r3, 0x81
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800939E8
    li r3, 0x82
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_800939E8
    li r15, 0x1
lbl_800939E8:
    cmpwi r15, 0x0
    beq lbl_80093A14
    li r3, 0x36
    bl fn_80091C90
    li r3, 0x35
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80093A14:
    li r3, 0x2d
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80093AEC
    cmpwi r24, 0x0
    beq lbl_80093AEC
    cmpwi r23, 0x0
    beq lbl_80093AEC
    cmpwi r17, 0x0
    beq lbl_80093AEC
    li r3, 0x4
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    li r3, 0x5
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    li r3, 0x6
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    li r3, 0xb
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    li r3, 0xc
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    li r3, 0x81
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    li r3, 0x82
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    li r3, 0x7
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093AEC
    lwz r4, 0x1ec8(r14)
    lis r3, 0x1
    addi r0, r3, 0x1170
    cmpw r4, r0
    blt lbl_80093AEC
    li r3, 0x2d
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80093AEC:
    li r3, 0x8b
    bl fn_80091AF0
    cmpwi r3, 0x0
    bne lbl_80093E28
    cmpwi r22, 0x0
    beq lbl_80093E28
    li r3, 0x1
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x2
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x3
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x4
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x5
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x6
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x7
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x8
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x9
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0xb
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0xe
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0xf
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x11
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x12
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x13
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x15
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x16
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x17
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x18
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x19
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x1a
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x1b
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x1c
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x1d
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x1f
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x20
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x21
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x22
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x23
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x24
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x25
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x26
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x27
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x28
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x29
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x2a
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x2c
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x2f
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    li r3, 0x30
    bl fn_80091FAC
    fcmpo cr0, f1, f31
    opword 0x4C411382
    bne lbl_80093E28
    lwz r0, 0x12ac(r14)
    cmplwi r0, 0x5
    bgt lbl_80093E28
    li r3, 0x8b
    bl fn_80091B50
    li r30, 0x1
lbl_80093E28:
    li r3, 0x37
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80093E64
    li r3, 0x8c
    bl fn_80091AF0
    cmpwi r3, 0x0
    beq lbl_80093E64
    li r3, 0x37
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80093E64:
    li r3, 0x1b
    bl fn_80091D70
    cmpwi r3, 0x0
    beq lbl_80093EB4
    li r3, 0x1c
    bl fn_80091D70
    cmpwi r3, 0x0
    beq lbl_80093EB4
    li r3, 0x1d
    bl fn_80091D70
    cmpwi r3, 0x0
    beq lbl_80093EB4
    li r3, 0x26
    bl fn_80091D70
    cmpwi r3, 0x0
    beq lbl_80093EB4
    li r3, 0x27
    bl fn_80091D70
    cmpwi r3, 0x0
    bne lbl_80093EF8
lbl_80093EB4:
    cmpwi r27, 0x0
    bne lbl_80093ECC
    cmpwi r26, 0x0
    bne lbl_80093ECC
    cmpwi r25, 0x0
    beq lbl_80093EF8
lbl_80093ECC:
    li r3, 0x1b
    bl fn_80091DD0
    li r3, 0x1c
    bl fn_80091DD0
    li r3, 0x1d
    bl fn_80091DD0
    li r3, 0x26
    bl fn_80091DD0
    li r3, 0x27
    bl fn_80091DD0
    li r30, 0x1
lbl_80093EF8:
    li r3, 0x36
    bl fn_80091D70
    cmpwi r3, 0x0
    beq lbl_80093F18
    li r3, 0x35
    bl fn_80091D70
    cmpwi r3, 0x0
    bne lbl_80093F7C
lbl_80093F18:
    li r3, 0x4e
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093F7C
    li r3, 0x4f
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093F7C
    li r3, 0x51
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093F7C
    li r3, 0x52
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093F7C
    li r3, 0x50
    bl fn_8009199C
    cmpwi r3, 0x0
    beq lbl_80093F7C
    li r3, 0x36
    bl fn_80091DD0
    li r3, 0x35
    bl fn_80091DD0
    li r30, 0x1
lbl_80093F7C:
    li r3, 0x44
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80093FBC
    li r3, 0x45
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80093FBC
    li r3, 0x46
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80093FBC
    li r3, 0x47
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80093FF8
lbl_80093FBC:
    cmpwi r21, 0x0
    beq lbl_80093FF8
    li r3, 0x44
    bl fn_80091C90
    li r3, 0x45
    bl fn_80091C90
    li r3, 0x46
    bl fn_80091C90
    li r3, 0x47
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80093FF8:
    li r3, 0x4c
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80094028
    li r3, 0x4d
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_80094028
    li r3, 0x4f
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80094080
lbl_80094028:
    li r0, 0x0
    cmpwi r21, 0x0
    beq lbl_80094040
    cmpwi r20, 0x0
    beq lbl_80094040
    li r0, 0x1
lbl_80094040:
    cmpwi r28, 0x0
    beq lbl_8009404C
    li r0, 0x1
lbl_8009404C:
    cmpwi r0, 0x0
    beq lbl_80094080
    li r3, 0x4c
    bl fn_80091C90
    li r3, 0x4d
    bl fn_80091C90
    li r3, 0x4f
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80094080:
    li r3, 0x48
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800940B0
    li r3, 0x49
    bl fn_80091C30
    cmpwi r3, 0x0
    beq lbl_800940B0
    li r3, 0x4a
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_800940F4
lbl_800940B0:
    cmpwi r21, 0x0
    beq lbl_800940F4
    cmpwi r20, 0x0
    beq lbl_800940F4
    cmpwi r19, 0x0
    beq lbl_800940F4
    li r3, 0x48
    bl fn_80091C90
    li r3, 0x49
    bl fn_80091C90
    li r3, 0x4a
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_800940F4:
    li r3, 0x4e
    bl fn_80091C30
    cmpwi r3, 0x0
    bne lbl_80094140
    cmpwi r21, 0x0
    beq lbl_80094140
    cmpwi r20, 0x0
    beq lbl_80094140
    cmpwi r19, 0x0
    beq lbl_80094140
    cmpwi r18, 0x0
    beq lbl_80094140
    li r3, 0x4e
    bl fn_80091C90
    li r3, 0x53
    bl fn_80091C90
    li r3, 0x54
    bl fn_80091C90
    li r30, 0x1
lbl_80094140:
    li r3, 0x48
    bl fn_80091D70
    cmpwi r3, 0x0
    beq lbl_80094170
    li r3, 0x49
    bl fn_80091D70
    cmpwi r3, 0x0
    beq lbl_80094170
    li r3, 0x4a
    bl fn_80091D70
    cmpwi r3, 0x0
    bne lbl_800941A4
lbl_80094170:
    cmpwi r21, 0x0
    bne lbl_80094188
    cmpwi r20, 0x0
    bne lbl_80094188
    cmpwi r19, 0x0
    beq lbl_800941A4
lbl_80094188:
    li r3, 0x48
    bl fn_80091DD0
    li r3, 0x49
    bl fn_80091DD0
    li r3, 0x4a
    bl fn_80091DD0
    li r30, 0x1
lbl_800941A4:
    li r3, 0x4e
    bl fn_80091D70
    cmpwi r3, 0x0
    bne lbl_800941D8
    cmpwi r21, 0x0
    beq lbl_800941D8
    cmpwi r20, 0x0
    beq lbl_800941D8
    cmpwi r19, 0x0
    beq lbl_800941D8
    li r3, 0x4e
    bl fn_80091DD0
    li r30, 0x1
lbl_800941D8:
    cmpwi r30, 0x0
    bne lbl_8009304C
    li r0, 0x88
    opword 0x13E1000C
    lfd f31, 0x80(r1)
    li r0, 0x78
    opword 0x13C1000C
    lfd f30, 0x70(r1)
    li r0, 0x68
    opword 0x13A1000C
    lfd f29, 0x60(r1)
    li r0, 0x58
    opword 0x1381000C
    lfd f28, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_14
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// asm_to_cpp: fn_80094228
asm s32 fn_80094228() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    subi r0, r3, 0x3
    cmplwi r0, 0xf
    bgt lbl_800946EC
    lis r3, jumptable_8034C30C@ha
    addi r3, r3, jumptable_8034C30C@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    lwz r0, 0xc18(r31)
    cmpwi r0, 0xa
    blt lbl_800946EC
    li r3, 0x4c
    bl fn_80091B50
    lwz r4, 0xc10(r31)
    lis r3, lbl_8034C3F8@ha
    lwz r0, lbl_8034C3F8@l(r3)
    cmpw r4, r0
    ble lbl_80094294
    li r3, 0x4d
    bl fn_80091B50
lbl_80094294:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0x28(r3)
    slwi r0, r0, 2
    add r4, r3, r0
    lwz r3, 0x10c4(r4)
    addi r0, r3, 0x1
    stw r0, 0x10c4(r4)
    b lbl_800946EC
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    lwz r0, 0xc18(r31)
    cmpwi r0, 0xa
    blt lbl_800946EC
    li r3, 0x4e
    bl fn_80091B50
    lwz r4, 0xc14(r31)
    lis r3, lbl_8034C420@ha
    lwz r0, lbl_8034C420@l(r3)
    cmpw r4, r0
    bge lbl_800942F0
    li r3, 0x82
    bl fn_80091B50
lbl_800942F0:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r4, 0xc14(r3)
    lis r3, 0x1
    subi r0, r3, 0x7360
    cmpw r4, r0
    bgt lbl_80094314
    li r3, 0x4f
    bl fn_80091B50
lbl_80094314:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc14(r3)
    cmpwi r0, 0x7080
    bgt lbl_800946EC
    lwz r0, 0x28(r3)
    cmplwi r0, 0x32
    bgt lbl_800946EC
    lis r3, jumptable_8034C240@ha
    addi r3, r3, jumptable_8034C240@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0x50
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x51
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x52
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x53
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x54
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x55
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x56
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x57
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x58
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x59
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x5a
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x5b
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x5c
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x5d
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x5e
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x5f
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x60
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x61
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x62
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x63
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x64
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x65
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x66
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x67
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x68
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x69
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x6a
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x6b
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x6c
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x6d
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x6e
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x6f
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x70
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x71
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x72
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x73
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x74
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x75
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x76
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x77
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x78
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x79
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x7a
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x7b
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x7c
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x7d
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x7e
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x7f
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x80
    bl fn_80091B50
    b lbl_800946EC
    li r3, 0x81
    bl fn_80091B50
    b lbl_800946EC
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r4, 0xc18(r3)
    lis r3, lbl_8034C448@ha
    lwz r0, lbl_8034C448@l(r3)
    cmpw r4, r0
    ble lbl_800945C8
    li r3, 0x83
    bl fn_80091B50
lbl_800945C8:
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xcb0(r3)
    cmpwi r0, 0x2
    bne lbl_800946EC
    lwz r0, 0xc18(r3)
    cmpwi r0, 0x1e
    blt lbl_800946EC
    li r3, 0x84
    bl fn_80091B50
    b lbl_800946EC
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc18(r3)
    cmpwi r0, 0xa
    blt lbl_800946EC
    lwz r4, 0xc10(r3)
    lis r3, lbl_8034C588@ha
    lwz r0, lbl_8034C588@l(r3)
    cmpw r4, r0
    ble lbl_800946EC
    li r3, 0x86
    bl fn_80091B50
    b lbl_800946EC
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r0, 0xc18(r3)
    cmpwi r0, 0xa
    blt lbl_800946EC
    lwz r4, 0xc14(r3)
    lis r3, lbl_8034C5B0@ha
    lwz r0, lbl_8034C5B0@l(r3)
    cmpw r4, r0
    bge lbl_800946EC
    li r3, 0x87
    bl fn_80091B50
    b lbl_800946EC
    bl fn_800A0BF0
    lwz r4, 0x24(r3)
    lis r3, lbl_8034C470@ha
    lwz r0, lbl_8034C470@l(r3)
    cmpw r4, r0
    ble lbl_800946EC
    li r3, 0x85
    bl fn_80091B50
    b lbl_800946EC
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r4, 0x2c(r3)
    cmpwi r4, 0x0
    beq lbl_800946EC
    lwz r3, 0x30(r3)
    cmpwi r3, 0x0
    bne lbl_800946A4
    li r3, 0x1
lbl_800946A4:
    subi r0, r4, 0x1
    mulli r0, r0, 0x3
    add r3, r3, r0
    subi r3, r3, 0x1
    bl fn_80091B50
    b lbl_800946EC
    lis r3, lbl_80390580@ha
    addi r3, r3, lbl_80390580@l
    lwz r4, 0x2c(r3)
    cmpwi r4, 0x0
    beq lbl_800946EC
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r3, 0xcac(r3)
    subi r0, r4, 0x1
    slwi r0, r0, 2
    add r3, r3, r0
    bl fn_80091B50
lbl_800946EC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80094700
asm M2C_UNK fn_80094700(s32 arg0) {
    nofralloc
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    addi r6, r3, 0xfd8
    li r3, 0x0
    li r4, 0x0
    li r0, 0x33
    mtctr r0
lbl_8009471C:
    add r5, r6, r4
    lwz r0, 0x20(r5)
    add r3, r3, r0
    addi r4, r4, 0x4
    bdnz lbl_8009471C
    blr
}

} // extern "C"
