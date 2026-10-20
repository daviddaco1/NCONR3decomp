#include "types.h"
#include "m2c_macros.h"

extern "C" {

extern u8 lbl_8034C384[];
extern u8 lbl_8034C3A0[];
extern u8 lbl_8034C3BC[];
extern u8 lbl_8034C3D8[];
extern u8 lbl_80395728[];
extern float lbl_8049F4F0;
extern float lbl_8049F4F8;

M2C_UNK fn_80094700(s32 arg0);
s32 fn_80094734(u32 arg0);
s32 fn_80094790(u32 arg0, s32 arg1);
void fn_800947C0(u32 arg0);
f32 fn_800947FC(s32 arg0);
f32 fn_8009488C(void);
f32 fn_800948EC(void);
s32 fn_8009494C(s32 arg0);
s32 fn_8009498C(s32 arg0);
s32 fn_800949CC(s32 arg0);
s32 fn_80094A0C(s32 arg0);
void fn_80094A4C(void);
M2C_UNK memset(s32 arg0, s32 arg1, s32 arg2);

// asm_to_cpp: fn_80094734
asm s32 fn_80094734(u32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    lis r4, lbl_80395728@ha
    addi r4, r4, lbl_80395728@l
    addi r4, r4, 0xfd8
    cmplwi r3, 0x32
    bgt lbl_80094784
    slwi r0, r3, 2
    add r3, r4, r0
    lwz r0, 0x20(r3)
    lfd f1, lbl_8049F4F0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    b lbl_80094788
lbl_80094784:
    li r3, 0x0
lbl_80094788:
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80094790
asm s32 fn_80094790(u32 arg0, s32 arg1) {
    nofralloc
    lis r5, lbl_80395728@ha
    addi r5, r5, lbl_80395728@l
    addi r5, r5, 0xfd8
    cmplwi r3, 0x32
    ble lbl_800947AC
    li r3, 0x0
    blr
lbl_800947AC:
    slwi r0, r3, 2
    add r3, r5, r0
    stw r4, 0x20(r3)
    li r3, 0x1
    blr
}

void fn_800947C0(u32 arg0) {
    fn_80094790((u32) (arg0), (s32) (fn_80094734((u32) (arg0)) + 1));
}

// asm_to_cpp: fn_800947FC
asm f32 fn_800947FC(s32 arg0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    addi r31, r3, 0xfd8
    bl fn_80094700
    cmpwi r3, 0x0
    bgt lbl_80094834
    lfs f1, lbl_8049F4F8
    b lbl_80094874
lbl_80094834:
    slwi r0, r30, 2
    add r4, r31, r0
    lwz r0, 0x20(r4)
    lfd f2, lbl_8049F4F0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r4, 0x4330
    stw r4, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r3, 0x8000
    stw r0, 0x14(r1)
    stw r4, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
lbl_80094874:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009488C
asm f32 fn_8009488C(void) {
    nofralloc
    stwu r1, -0x20(r1)
    lis r3, lbl_80395728@ha
    addi r3, r3, lbl_80395728@l
    lwz r4, 0x11a4(r3)
    cmpwi r4, 0x0
    bgt lbl_800948AC
    lfs f1, lbl_8049F4F8
    b lbl_800948E4
lbl_800948AC:
    lwz r0, 0x11a8(r3)
    lfd f2, lbl_8049F4F0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
lbl_800948E4:
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_800948EC
asm f32 fn_800948EC(void) {
    nofralloc
    stwu r1, -0x20(r1)
    lis r3, lbl_80395728@ha
    addi r4, r3, lbl_80395728@l
    lwz r0, 0x11b4(r4)
    cmpwi r0, 0x0
    bgt lbl_8009490C
    lfs f1, lbl_8049F4F8
    b lbl_80094944
lbl_8009490C:
    lfd f2, lbl_8049F4F0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f1, f0, f2
    lwz r0, 0x11b8(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f2
    fdivs f1, f1, f0
lbl_80094944:
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8009494C
asm s32 fn_8009494C(s32 arg0) {
    nofralloc
    li r6, 0x0
    li r4, 0x0
    lis r5, lbl_8034C384@ha
    addi r5, r5, lbl_8034C384@l
    li r0, 0x7
    mtctr r0
lbl_80094964:
    lwzx r0, r5, r4
    cmpw r3, r0
    blt lbl_80094978
    mr r3, r6
    blr
lbl_80094978:
    addi r6, r6, 0x1
    addi r4, r4, 0x4
    bdnz lbl_80094964
    li r3, 0x6
    blr
}

// asm_to_cpp: fn_8009498C
asm s32 fn_8009498C(s32 arg0) {
    nofralloc
    li r6, 0x0
    li r4, 0x0
    lis r5, lbl_8034C3A0@ha
    addi r5, r5, lbl_8034C3A0@l
    li r0, 0x7
    mtctr r0
lbl_800949A4:
    lwzx r0, r5, r4
    cmpw r3, r0
    bge lbl_800949B8
    mr r3, r6
    blr
lbl_800949B8:
    addi r6, r6, 0x1
    addi r4, r4, 0x4
    bdnz lbl_800949A4
    li r3, 0x6
    blr
}

// asm_to_cpp: fn_800949CC
asm s32 fn_800949CC(s32 arg0) {
    nofralloc
    li r6, 0x0
    li r4, 0x0
    lis r5, lbl_8034C3BC@ha
    addi r5, r5, lbl_8034C3BC@l
    li r0, 0x7
    mtctr r0
lbl_800949E4:
    lwzx r0, r5, r4
    cmpw r3, r0
    blt lbl_800949F8
    mr r3, r6
    blr
lbl_800949F8:
    addi r6, r6, 0x1
    addi r4, r4, 0x4
    bdnz lbl_800949E4
    li r3, 0x6
    blr
}

// asm_to_cpp: fn_80094A0C
asm s32 fn_80094A0C(s32 arg0) {
    nofralloc
    li r6, 0x0
    li r4, 0x0
    lis r5, lbl_8034C3D8@ha
    addi r5, r5, lbl_8034C3D8@l
    li r0, 0x7
    mtctr r0
lbl_80094A24:
    lwzx r0, r5, r4
    cmpw r3, r0
    blt lbl_80094A38
    mr r3, r6
    blr
lbl_80094A38:
    addi r6, r6, 0x1
    addi r4, r4, 0x4
    bdnz lbl_80094A24
    li r3, 0x6
    blr
}

// asm_to_cpp: fn_80094A4C
asm void fn_80094A4C(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r3, lbl_80395728@ha
    addi r31, r3, lbl_80395728@l
    addi r3, r31, 0xc0c
    li r4, 0x0
    li r5, 0x8c
    bl memset
    li r3, 0x0
    la r4, lbl_8049F4F8
    lfs f1, 0x4(r4)
    lfs f0, 0x8(r4)
    li r0, 0x4
    mtctr r0
lbl_80094A8C:
    add r4, r31, r3
    stfs f1, 0xc2c(r4)
    stfs f0, 0xc3c(r4)
    addi r3, r3, 0x4
    bdnz lbl_80094A8C
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

} // extern "C"
