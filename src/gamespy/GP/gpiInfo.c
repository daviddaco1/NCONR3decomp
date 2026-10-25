#include "types.h"

// Translation unit: src/gamespy/GP/gpiInfo.cpp
// Total functions: 9

// Small Data symbols (@sda21)
extern float lbl_8049C9B0;
extern float lbl_8049C9B8;
extern float lbl_8049C9C0;
extern float lbl_8049C9C8;
extern float lbl_8049C9D0;
extern float lbl_8049C9D8;
extern float lbl_8049C9E0;
extern float lbl_8049C9E8;
extern float lbl_8049C9F0;
extern float lbl_8049C9F8;
extern float lbl_8049CA00;
extern float lbl_8049CA08;
extern float lbl_8049CA10;
extern float lbl_8049CA18;
extern float lbl_8049CA20;
extern float lbl_8049CA28;
extern float lbl_8049CA30;
extern float lbl_8049CA38;
extern float lbl_8049CA40;
extern float lbl_8049CA48;
extern float lbl_8049CA50;
extern float lbl_8049CA54;
extern float lbl_8049CA58;
extern float lbl_8049CA5C;
extern float lbl_8049CA60;
extern float lbl_804A2300;

// Global data symbols (@ha/@l)
extern u8 jumptable_80369028[];
extern u8 jumptable_8036920C[];
extern u8 jumptable_803692DC[];
extern u8 lbl_8035FBD8[];
extern u8 lbl_8036908C[];
extern u8 lbl_80369368[];

// Forward declarations
extern void _restgpr_23();
extern void _restgpr_25();
extern void _savegpr_23();
extern void _savegpr_25();
extern void atoi();
extern void fn_8025651C();
extern void fn_8025658C();
extern void fn_80256C4C();
extern void fn_80256C70();
extern void fn_80259940();
extern void fn_8025E3F4();
extern void gpiAddCallback();
extern void gpiAddLocalInfo();
extern void gpiAddOperation();
extern void gpiAppendIntToBuffer();
extern void gpiAppendStringToBuffer();
extern void gpiCallErrorCallback();
extern void gpiCheckForError();
extern void gpiEncodeString();
extern void gpiFreeInfoCache();
extern void gpiGetInfo();
extern void gpiGetProfile();
extern void gpiInfoCacheToArg();
extern void gpiIsValidDate();
extern void gpiProfileListAdd();
extern void gpiRemoveOperation();
extern void gpiSendGetInfo();
extern void gpiSetError();
extern void gpiSetErrorString();
extern void gpiSetInfoi();
extern void gpiSetInfos();
extern void gpiValueForKey();
extern void memset();
extern void sprintf();
extern void strcpy();
extern void strlen();
extern void strncmp();
extern void strtod();
extern void strzcpy();

// ----------------------------------------------------------------------------
// gpiIsValidDate
// ----------------------------------------------------------------------------
asm void gpiIsValidDate() {
    nofralloc
    cmpwi r3, 0x0
    bne lbl_8025E074
    cmpwi r4, 0x0
    bne lbl_8025E074
    cmpwi r5, 0x0
    bne lbl_8025E074
    li r3, 0x1
    blr
lbl_8025E074:
    cmpwi cr1, r3, 0x0
    blt cr1, lbl_8025E08C
    cmpwi r4, 0x0
    blt lbl_8025E08C
    cmpwi r5, 0x0
    bge lbl_8025E094
lbl_8025E08C:
    li r3, 0x0
    blr
lbl_8025E094:
    cmplwi r4, 0xc
    bgt lbl_8025E160
    lis r6, jumptable_80369028@ha
    slwi r0, r4, 2
    addi r6, r6, jumptable_80369028@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    beq cr1, lbl_8025E168
    li r3, 0x0
    blr
    cmpwi r3, 0x1f
    ble lbl_8025E168
    li r3, 0x0
    blr
    cmpwi r3, 0x1e
    ble lbl_8025E168
    li r3, 0x0
    blr
    slwi r0, r5, 30
    srwi r6, r5, 31
    subf r0, r6, r0
    rotlwi r0, r0, 2
    add. r0, r0, r6
    bne lbl_8025E11C
    lis r6, 0x51ec
    subi r0, r6, 0x7ae1
    mulhw r0, r0, r5
    srawi r0, r0, 5
    srwi r6, r0, 31
    add r0, r0, r6
    mulli r0, r0, 0x64
    subf. r0, r0, r5
    bne lbl_8025E140
lbl_8025E11C:
    lis r6, 0x51ec
    subi r0, r6, 0x7ae1
    mulhw r0, r0, r5
    srawi r0, r0, 7
    srwi r6, r0, 31
    add r0, r0, r6
    mulli r0, r0, 0x190
    subf. r0, r0, r5
    bne lbl_8025E150
lbl_8025E140:
    cmpwi r3, 0x1d
    ble lbl_8025E168
    li r3, 0x0
    blr
lbl_8025E150:
    cmpwi r3, 0x1c
    ble lbl_8025E168
    li r3, 0x0
    blr
lbl_8025E160:
    li r3, 0x0
    blr
lbl_8025E168:
    cmpwi r5, 0x76c
    bge lbl_8025E178
    li r3, 0x0
    blr
lbl_8025E178:
    cmpwi r5, 0x81f
    ble lbl_8025E188
    li r3, 0x0
    blr
lbl_8025E188:
    bne lbl_8025E1B0
    cmpwi r4, 0x6
    ble lbl_8025E19C
    li r3, 0x0
    blr
lbl_8025E19C:
    bne lbl_8025E1B0
    cmpwi r3, 0x6
    ble lbl_8025E1B0
    li r3, 0x0
    blr
lbl_8025E1B0:
    li r3, 0x1
    blr
}

// ----------------------------------------------------------------------------
// gpiInfoCacheToArg
// ----------------------------------------------------------------------------
asm void gpiInfoCacheToArg() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_8025E1F4
    addi r3, r4, 0x8
    mr r4, r0
    li r5, 0x1f
    bl strzcpy
    b lbl_8025E1FC
lbl_8025E1F4:
    li r0, 0x0
    stb r0, 0x8(r4)
lbl_8025E1FC:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_8025E218
    addi r3, r31, 0x27
    li r5, 0x15
    bl strzcpy
    b lbl_8025E220
lbl_8025E218:
    li r0, 0x0
    stb r0, 0x27(r31)
lbl_8025E220:
    lwz r4, 0x8(r30)
    cmpwi r4, 0x0
    beq lbl_8025E23C
    addi r3, r31, 0x3c
    li r5, 0x33
    bl strzcpy
    b lbl_8025E244
lbl_8025E23C:
    li r0, 0x0
    stb r0, 0x3c(r31)
lbl_8025E244:
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    beq lbl_8025E260
    addi r3, r31, 0x6f
    li r5, 0x1f
    bl strzcpy
    b lbl_8025E268
lbl_8025E260:
    li r0, 0x0
    stb r0, 0x6f(r31)
lbl_8025E268:
    lwz r4, 0x10(r30)
    cmpwi r4, 0x0
    beq lbl_8025E284
    addi r3, r31, 0x8e
    li r5, 0x1f
    bl strzcpy
    b lbl_8025E28C
lbl_8025E284:
    li r0, 0x0
    stb r0, 0x8e(r31)
lbl_8025E28C:
    lwz r4, 0x14(r30)
    cmpwi r4, 0x0
    beq lbl_8025E2A8
    addi r3, r31, 0xad
    li r5, 0x4c
    bl strzcpy
    b lbl_8025E2B0
lbl_8025E2A8:
    li r0, 0x0
    stb r0, 0xad(r31)
lbl_8025E2B0:
    lwz r0, 0x18(r30)
    addi r3, r31, 0x100
    addi r4, r30, 0x1c
    li r5, 0xb
    stw r0, 0xfc(r31)
    bl strzcpy
    addi r3, r31, 0x10b
    addi r4, r30, 0x27
    li r5, 0x3
    bl strzcpy
    lfs f0, 0x2c(r30)
    addic. r4, r30, 0x34
    stfs f0, 0x110(r31)
    lfs f0, 0x30(r30)
    stfs f0, 0x114(r31)
    beq lbl_8025E300
    addi r3, r31, 0x118
    li r5, 0x80
    bl strzcpy
    b lbl_8025E308
lbl_8025E300:
    li r0, 0x0
    stb r0, 0x118(r31)
lbl_8025E308:
    lwz r0, 0xb4(r30)
    stw r0, 0x198(r31)
    lwz r0, 0xb8(r30)
    stw r0, 0x19c(r31)
    lwz r0, 0xbc(r30)
    stw r0, 0x1a0(r31)
    lwz r0, 0xc0(r30)
    stw r0, 0x1a4(r31)
    lwz r0, 0xc4(r30)
    stw r0, 0x1a8(r31)
    lwz r4, 0xc8(r30)
    cmpwi r4, 0x0
    beq lbl_8025E34C
    addi r3, r31, 0x1ac
    li r5, 0x33
    bl strzcpy
    b lbl_8025E354
lbl_8025E34C:
    li r0, 0x0
    stb r0, 0x1ac(r31)
lbl_8025E354:
    lwz r0, 0x18(r30)
    stw r0, 0xfc(r31)
    lfs f0, 0x2c(r30)
    stfs f0, 0x110(r31)
    lfs f0, 0x30(r30)
    stfs f0, 0x114(r31)
    lwz r0, 0xb4(r30)
    stw r0, 0x198(r31)
    lwz r0, 0xb8(r30)
    stw r0, 0x19c(r31)
    lwz r0, 0xbc(r30)
    stw r0, 0x1a0(r31)
    lwz r0, 0xc0(r30)
    stw r0, 0x1a4(r31)
    lwz r0, 0xc4(r30)
    stw r0, 0x1a8(r31)
    lwz r0, 0xcc(r30)
    stw r0, 0x1e0(r31)
    lwz r0, 0xd0(r30)
    stw r0, 0x1e4(r31)
    lwz r0, 0xd4(r30)
    stw r0, 0x1e8(r31)
    lwz r0, 0xd8(r30)
    stw r0, 0x1ec(r31)
    lwz r0, 0xdc(r30)
    stw r0, 0x1f0(r31)
    lwz r0, 0xe0(r30)
    stw r0, 0x1f4(r31)
    lwz r0, 0xe4(r30)
    stw r0, 0x1f8(r31)
    lwz r0, 0xe8(r30)
    stw r0, 0x1fc(r31)
    lwz r0, 0xec(r30)
    stw r0, 0x200(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8025E3F4
// ----------------------------------------------------------------------------
asm void fn_8025E3F4() {
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    stw r0, 0x2b4(r1)
    addi r11, r1, 0x2b0
    bl _savegpr_23
    mr r28, r5
    lis r31, jumptable_80369028@ha
    mr r27, r4
    lwz r30, 0x0(r3)
    mr r26, r3
    mr r4, r28
    addi r31, r31, jumptable_80369028@l
    li r5, 0x1
    bl gpiCheckForError
    cmpwi r3, 0x0
    beq lbl_8025E43C
    li r3, 0x4
    b lbl_8025EC9C
lbl_8025E43C:
    mr r3, r28
    la r4, lbl_8049C9B0
    li r5, 0x4
    bl strncmp
    cmpwi r3, 0x0
    beq lbl_8025E47C
    mr r3, r26
    addi r5, r31, 0x34
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025EC9C
lbl_8025E47C:
    mr r3, r28
    addi r4, r31, 0x64
    addi r5, r1, 0x100
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E4C0
    mr r3, r26
    addi r5, r31, 0x34
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025EC9C
lbl_8025E4C0:
    addi r3, r1, 0x100
    bl atoi
    mr r29, r3
    mr r3, r26
    mr r4, r29
    addi r5, r1, 0x8
    bl gpiGetProfile
    addi r3, r1, 0x190
    li r4, 0x0
    li r5, 0xf0
    bl memset
    addi r5, r1, 0x78
    addi r4, r1, 0x60
    addi r10, r1, 0xcc
    addi r9, r1, 0x40
    addi r8, r1, 0x20
    addi r7, r1, 0x140
    addi r0, r1, 0x98
    stw r4, 0x194(r1)
    mr r3, r28
    la r4, lbl_8049C9B8
    stw r5, 0x190(r1)
    li r6, 0x1f
    stw r10, 0x198(r1)
    stw r9, 0x19c(r1)
    stw r8, 0x1a0(r1)
    stw r7, 0x1a4(r1)
    stw r0, 0x258(r1)
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E548
    lwz r3, 0x190(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_8025E548:
    lwz r5, 0x194(r1)
    mr r3, r28
    addi r4, r31, 0x70
    li r6, 0x15
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E570
    lwz r3, 0x194(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_8025E570:
    lwz r5, 0x198(r1)
    mr r3, r28
    la r4, lbl_8049C9C0
    li r6, 0x33
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E598
    lwz r3, 0x198(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_8025E598:
    lwz r5, 0x19c(r1)
    mr r3, r28
    addi r4, r31, 0x80
    li r6, 0x1f
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E5C0
    lwz r3, 0x19c(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_8025E5C0:
    lwz r5, 0x1a0(r1)
    mr r3, r28
    addi r4, r31, 0x8c
    li r6, 0x1f
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E5E8
    lwz r3, 0x1a0(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_8025E5E8:
    mr r3, r28
    addi r4, r31, 0x98
    addi r5, r1, 0x100
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E610
    li r0, -0x1
    stw r0, 0x1a8(r1)
    b lbl_8025E61C
lbl_8025E610:
    addi r3, r1, 0x100
    bl atoi
    stw r3, 0x1a8(r1)
lbl_8025E61C:
    lwz r5, 0x1a4(r1)
    mr r3, r28
    addi r4, r31, 0xa4
    li r6, 0x4c
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E644
    lwz r3, 0x1a4(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_8025E644:
    mr r3, r28
    addi r4, r31, 0xb0
    addi r5, r1, 0x1ac
    li r6, 0xb
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E668
    li r0, 0x0
    stb r0, 0x1ac(r1)
lbl_8025E668:
    mr r3, r28
    addi r4, r31, 0xbc
    addi r5, r1, 0x1b7
    li r6, 0x3
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E68C
    li r0, 0x0
    stb r0, 0x1b7(r1)
lbl_8025E68C:
    mr r3, r28
    addi r5, r1, 0x100
    la r4, lbl_8049C9C8
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E6B4
    lfs f0, lbl_804A2300
    stfs f0, 0x1bc(r1)
    b lbl_8025E6C4
lbl_8025E6B4:
    addi r3, r1, 0x100
    bl strtod
    frsp f0, f1
    stfs f0, 0x1bc(r1)
lbl_8025E6C4:
    mr r3, r28
    addi r5, r1, 0x100
    la r4, lbl_8049C9D0
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E6EC
    lfs f0, lbl_804A2300
    stfs f0, 0x1c0(r1)
    b lbl_8025E6FC
lbl_8025E6EC:
    addi r3, r1, 0x100
    bl strtod
    frsp f0, f1
    stfs f0, 0x1c0(r1)
lbl_8025E6FC:
    mr r3, r28
    addi r5, r1, 0x1c4
    la r4, lbl_8049C9D8
    li r6, 0x80
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E720
    li r0, 0x0
    stb r0, 0x1c4(r1)
lbl_8025E720:
    mr r3, r28
    addi r4, r31, 0xcc
    addi r5, r1, 0x100
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E750
    li r0, 0x0
    stw r0, 0x244(r1)
    stw r0, 0x248(r1)
    stw r0, 0x24c(r1)
    b lbl_8025E7AC
lbl_8025E750:
    addi r3, r1, 0x100
    bl atoi
    extrwi r24, r3, 8, 8
    clrlwi r25, r3, 16
    srwi r23, r3, 24
    mr r3, r23
    mr r4, r24
    mr r5, r25
    bl gpiIsValidDate
    cmpwi r3, 0x0
    bne lbl_8025E790
    mr r3, r26
    addi r4, r31, 0xd8
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_8025E7A0
lbl_8025E790:
    stw r23, 0x244(r1)
    li r3, 0x0
    stw r24, 0x248(r1)
    stw r25, 0x24c(r1)
lbl_8025E7A0:
    cmpwi r3, 0x0
    beq lbl_8025E7AC
    b lbl_8025EC9C
lbl_8025E7AC:
    mr r3, r28
    addi r5, r1, 0x100
    la r4, lbl_8049C9E0
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E7D4
    li r0, 0x502
    stw r0, 0x250(r1)
    b lbl_8025E80C
lbl_8025E7D4:
    lbz r0, 0x100(r1)
    extsb r0, r0
    cmpwi r0, 0x30
    bne lbl_8025E7F0
    li r0, 0x500
    stw r0, 0x250(r1)
    b lbl_8025E80C
lbl_8025E7F0:
    cmpwi r0, 0x31
    bne lbl_8025E804
    li r0, 0x501
    stw r0, 0x250(r1)
    b lbl_8025E80C
lbl_8025E804:
    li r0, 0x502
    stw r0, 0x250(r1)
lbl_8025E80C:
    mr r3, r28
    addi r5, r1, 0x100
    la r4, lbl_8049C9E8
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E834
    li r0, -0x1
    stw r0, 0x254(r1)
    b lbl_8025E840
lbl_8025E834:
    addi r3, r1, 0x100
    bl atoi
    stw r3, 0x254(r1)
lbl_8025E840:
    lwz r5, 0x258(r1)
    mr r3, r28
    la r4, lbl_8049C9F0
    li r6, 0x33
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E868
    lwz r3, 0x258(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_8025E868:
    mr r3, r28
    addi r5, r1, 0x100
    la r4, lbl_8049C9F8
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E890
    li r0, 0x0
    stw r0, 0x25c(r1)
    b lbl_8025E89C
lbl_8025E890:
    addi r3, r1, 0x100
    bl atoi
    stw r3, 0x25c(r1)
lbl_8025E89C:
    mr r3, r28
    addi r5, r1, 0x100
    la r4, lbl_8049CA00
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E8C4
    li r0, 0x0
    stw r0, 0x260(r1)
    b lbl_8025E8D0
lbl_8025E8C4:
    addi r3, r1, 0x100
    bl atoi
    stw r3, 0x260(r1)
lbl_8025E8D0:
    mr r3, r28
    addi r5, r1, 0x100
    la r4, lbl_8049CA08
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E8F8
    li r0, 0x0
    stw r0, 0x264(r1)
    b lbl_8025E904
lbl_8025E8F8:
    addi r3, r1, 0x100
    bl atoi
    stw r3, 0x264(r1)
lbl_8025E904:
    mr r3, r28
    addi r5, r1, 0x100
    la r4, lbl_8049CA10
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E92C
    li r0, 0x0
    stw r0, 0x268(r1)
    b lbl_8025E938
lbl_8025E92C:
    addi r3, r1, 0x100
    bl atoi
    stw r3, 0x268(r1)
lbl_8025E938:
    mr r3, r28
    addi r5, r1, 0x100
    la r4, lbl_8049CA18
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E960
    li r0, 0x0
    stw r0, 0x26c(r1)
    b lbl_8025E96C
lbl_8025E960:
    addi r3, r1, 0x100
    bl atoi
    stw r3, 0x26c(r1)
lbl_8025E96C:
    mr r3, r28
    addi r5, r1, 0x100
    la r4, lbl_8049CA20
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E994
    li r0, 0x0
    stw r0, 0x270(r1)
    b lbl_8025E9A0
lbl_8025E994:
    addi r3, r1, 0x100
    bl atoi
    stw r3, 0x270(r1)
lbl_8025E9A0:
    mr r3, r28
    addi r5, r1, 0x100
    la r4, lbl_8049CA28
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E9C8
    li r0, 0x0
    stw r0, 0x274(r1)
    b lbl_8025E9D4
lbl_8025E9C8:
    addi r3, r1, 0x100
    bl atoi
    stw r3, 0x274(r1)
lbl_8025E9D4:
    mr r3, r28
    addi r5, r1, 0x100
    la r4, lbl_8049CA30
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025E9FC
    li r0, 0x0
    stw r0, 0x278(r1)
    b lbl_8025EA08
lbl_8025E9FC:
    addi r3, r1, 0x100
    bl atoi
    stw r3, 0x278(r1)
lbl_8025EA08:
    mr r3, r28
    addi r5, r1, 0x100
    la r4, lbl_8049CA38
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025EA30
    li r0, 0x0
    stw r0, 0x27c(r1)
    b lbl_8025EA3C
lbl_8025EA30:
    addi r3, r1, 0x100
    bl atoi
    stw r3, 0x27c(r1)
lbl_8025EA3C:
    mr r3, r28
    addi r5, r1, 0x100
    la r4, lbl_8049CA40
    li r6, 0x40
    bl gpiValueForKey
    cmpwi r3, 0x0
    bne lbl_8025EA80
    mr r3, r26
    addi r5, r31, 0x34
    li r4, 0x1
    bl gpiSetError
    mr r3, r26
    li r4, 0x3
    li r5, 0x1
    bl gpiCallErrorCallback
    li r3, 0x3
    b lbl_8025EC9C
lbl_8025EA80:
    lwz r24, 0x100(r30)
    li r28, 0x66
    lwz r23, 0x5d8(r30)
    b lbl_8025EAD0
lbl_8025EA90:
    lwz r0, 0x10(r23)
    cmpw r0, r29
    bne lbl_8025EACC
    lwz r0, 0x0(r23)
    cmpwi r0, 0x65
    bne lbl_8025EACC
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_8025EAC4
    mr r3, r26
    mr r4, r29
    bl gpiProfileListAdd
    stw r3, 0x8(r1)
lbl_8025EAC4:
    stw r28, 0x0(r23)
    li r24, 0x1
lbl_8025EACC:
    lwz r23, 0x54(r23)
lbl_8025EAD0:
    cmpwi r23, 0x0
    bne lbl_8025EA90
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_8025EB00
    lwz r0, 0x100(r30)
    cmpwi r0, 0x0
    beq lbl_8025EB00
    mr r3, r26
    mr r4, r29
    bl gpiProfileListAdd
    stw r3, 0x8(r1)
lbl_8025EB00:
    cmpwi r24, 0x0
    beq lbl_8025EB30
    lwz r3, 0x8(r1)
    lwz r3, 0x1c(r3)
    bl fn_80256C70
    lwz r4, 0x8(r1)
    li r0, 0x0
    addi r3, r1, 0x100
    stw r0, 0x1c(r4)
    bl fn_8025651C
    lwz r4, 0x8(r1)
    stw r3, 0x1c(r4)
lbl_8025EB30:
    lwz r0, 0x100(r30)
    cmpwi r0, 0x0
    beq lbl_8025EC00
    lwz r3, 0x0(r26)
    lwz r30, 0x8(r1)
    lwz r0, 0x100(r3)
    cmpwi r0, 0x0
    beq lbl_8025EC00
    mr r3, r30
    bl gpiFreeInfoCache
    li r3, 0xf0
    bl fn_80256C4C
    cmpwi r3, 0x0
    stw r3, 0x10(r30)
    beq lbl_8025EC00
    li r0, 0x1e
    subi r5, r3, 0x4
    addi r4, r1, 0x18c
    mtctr r0
lbl_8025EB7C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_8025EB7C
    lwz r3, 0x190(r1)
    bl fn_8025651C
    lwz r4, 0x10(r30)
    stw r3, 0x0(r4)
    lwz r3, 0x194(r1)
    bl fn_8025651C
    lwz r4, 0x10(r30)
    stw r3, 0x4(r4)
    lwz r3, 0x198(r1)
    bl fn_8025651C
    lwz r4, 0x10(r30)
    stw r3, 0x8(r4)
    lwz r3, 0x19c(r1)
    bl fn_8025651C
    lwz r4, 0x10(r30)
    stw r3, 0xc(r4)
    lwz r3, 0x1a0(r1)
    bl fn_8025651C
    lwz r4, 0x10(r30)
    stw r3, 0x10(r4)
    lwz r3, 0x1a4(r1)
    bl fn_8025651C
    lwz r4, 0x10(r30)
    stw r3, 0x14(r4)
    lwz r3, 0x258(r1)
    bl fn_8025651C
    lwz r4, 0x10(r30)
    stw r3, 0xc8(r4)
lbl_8025EC00:
    lwz r3, 0xc(r27)
    lwz r0, 0x10(r27)
    cmpwi r3, 0x0
    stw r3, 0x18(r1)
    stw r0, 0x1c(r1)
    beq lbl_8025EC8C
    li r3, 0x204
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_8025EC40
    mr r3, r26
    addi r4, r31, 0xe8
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_8025EC9C
lbl_8025EC40:
    mr r4, r23
    addi r3, r1, 0x190
    bl gpiInfoCacheToArg
    li r0, 0x0
    lwz r8, 0x18(r1)
    stw r0, 0x0(r23)
    mr r3, r26
    lwz r0, 0x1c(r1)
    mr r5, r23
    stw r29, 0x4(r23)
    mr r6, r27
    addi r4, r1, 0x10
    li r7, 0x0
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_8025EC8C
    b lbl_8025EC9C
lbl_8025EC8C:
    mr r3, r26
    mr r4, r27
    bl gpiRemoveOperation
    li r3, 0x0
lbl_8025EC9C:
    addi r11, r1, 0x2b0
    bl _restgpr_23
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}

// ----------------------------------------------------------------------------
// gpiAddLocalInfo
// ----------------------------------------------------------------------------
asm void gpiAddLocalInfo() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, jumptable_80369028@ha
    addi r31, r31, jumptable_80369028@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r30, 0x0(r3)
    lwz r0, 0x5ec(r30)
    cmpwi r0, 0x0
    ble lbl_8025ED50
    addi r5, r31, 0xf8
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r30)
    mr r3, r28
    mr r4, r29
    bl gpiAppendIntToBuffer
    lwz r5, 0x5e4(r30)
    mr r3, r28
    mr r4, r29
    bl gpiAppendStringToBuffer
    mr r3, r28
    mr r4, r29
    addi r5, r31, 0x110
    bl gpiAppendStringToBuffer
    lwz r5, 0x1a4(r30)
    mr r3, r28
    mr r4, r29
    bl gpiAppendIntToBuffer
    mr r3, r28
    mr r4, r29
    la r5, lbl_8049CA48
    bl gpiAppendStringToBuffer
    li r0, 0x0
    stw r0, 0x5ec(r30)
lbl_8025ED50:
    lwz r0, 0x5fc(r30)
    cmpwi r0, 0x0
    ble lbl_8025EDA4
    mr r3, r28
    mr r4, r29
    addi r5, r31, 0x11c
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r30)
    mr r3, r28
    mr r4, r29
    bl gpiAppendIntToBuffer
    lwz r5, 0x5f4(r30)
    mr r3, r28
    mr r4, r29
    bl gpiAppendStringToBuffer
    mr r3, r28
    mr r4, r29
    la r5, lbl_8049CA48
    bl gpiAppendStringToBuffer
    li r0, 0x0
    stw r0, 0x5fc(r30)
lbl_8025EDA4:
    lwz r31, 0x1c(r1)
    li r3, 0x0
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// gpiSetInfoi
// ----------------------------------------------------------------------------
asm void gpiSetInfoi() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    subi r0, r4, 0x706
    cmplwi r0, 0x18
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lis r30, jumptable_80369028@ha
    addi r30, r30, jumptable_80369028@l
    stw r29, 0x24(r1)
    bgt lbl_8025F5D4
    lis r4, jumptable_8036920C@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_8036920C@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    cmpwi r5, 0x0
    bge lbl_8025EE28
    addi r4, r30, 0x130
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_8025F5EC
lbl_8025EE28:
    addi r3, r1, 0x8
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0xb0
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025EE58
    b lbl_8025EE7C
lbl_8025EE58:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025EE78
    mr r0, r3
lbl_8025EE78:
    mr r3, r0
lbl_8025EE7C:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    cmpwi r5, 0x501
    beq lbl_8025EEFC
    bge lbl_8025EEA0
    cmpwi r5, 0x500
    bge lbl_8025EEAC
    b lbl_8025EF9C
lbl_8025EEA0:
    cmpwi r5, 0x503
    bge lbl_8025EF9C
    b lbl_8025EF4C
lbl_8025EEAC:
    lwz r30, 0x0(r3)
    la r29, lbl_8049CA54
    la r5, lbl_8049C9E0
    addi r4, r30, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025EECC
    b lbl_8025EEF0
lbl_8025EECC:
    mr r3, r31
    mr r5, r29
    addi r4, r30, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025EEEC
    mr r0, r3
lbl_8025EEEC:
    mr r3, r0
lbl_8025EEF0:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
lbl_8025EEFC:
    lwz r30, 0x0(r3)
    la r29, lbl_8049CA58
    la r5, lbl_8049C9E0
    addi r4, r30, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025EF1C
    b lbl_8025EF40
lbl_8025EF1C:
    mr r3, r31
    mr r5, r29
    addi r4, r30, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025EF3C
    mr r0, r3
lbl_8025EF3C:
    mr r3, r0
lbl_8025EF40:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
lbl_8025EF4C:
    lwz r30, 0x0(r3)
    la r29, lbl_8049CA5C
    la r5, lbl_8049C9E0
    addi r4, r30, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025EF6C
    b lbl_8025EF90
lbl_8025EF6C:
    mr r3, r31
    mr r5, r29
    addi r4, r30, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025EF8C
    mr r0, r3
lbl_8025EF8C:
    mr r3, r0
lbl_8025EF90:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
lbl_8025EF9C:
    mr r3, r31
    addi r4, r30, 0x144
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_8025F5EC
    addi r3, r1, 0x8
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x98
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025EFE0
    b lbl_8025F004
lbl_8025EFE0:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F000
    mr r0, r3
lbl_8025F000:
    mr r3, r0
lbl_8025F004:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    addi r3, r1, 0x8
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x154
    addi r4, r29, 0x5f4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F040
    b lbl_8025F064
lbl_8025F040:
    mr r3, r31
    addi r4, r29, 0x5f4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F060
    mr r0, r3
lbl_8025F060:
    mr r3, r0
lbl_8025F064:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    addi r3, r1, 0x8
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x164
    addi r4, r29, 0x5f4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F0A0
    b lbl_8025F0C4
lbl_8025F0A0:
    mr r3, r31
    addi r4, r29, 0x5f4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F0C0
    mr r0, r3
lbl_8025F0C0:
    mr r3, r0
lbl_8025F0C4:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    srawi r0, r5, 4
    addi r3, r1, 0x8
    addze r5, r0
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x170
    addi r4, r29, 0x5f4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F108
    b lbl_8025F12C
lbl_8025F108:
    mr r3, r31
    addi r4, r29, 0x5f4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F128
    mr r0, r3
lbl_8025F128:
    mr r3, r0
lbl_8025F12C:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    srawi r0, r5, 2
    addi r3, r1, 0x8
    addze r5, r0
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x180
    addi r4, r29, 0x5f4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F170
    b lbl_8025F194
lbl_8025F170:
    mr r3, r31
    addi r4, r29, 0x5f4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F190
    mr r0, r3
lbl_8025F190:
    mr r3, r0
lbl_8025F194:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    srawi r0, r5, 2
    addi r3, r1, 0x8
    addze r5, r0
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x190
    addi r4, r29, 0x5f4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F1D8
    b lbl_8025F1FC
lbl_8025F1D8:
    mr r3, r31
    addi r4, r29, 0x5f4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F1F8
    mr r0, r3
lbl_8025F1F8:
    mr r3, r0
lbl_8025F1FC:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    addi r3, r1, 0x8
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x1a0
    addi r4, r29, 0x5f4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F238
    b lbl_8025F25C
lbl_8025F238:
    mr r3, r31
    addi r4, r29, 0x5f4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F258
    mr r0, r3
lbl_8025F258:
    mr r3, r0
lbl_8025F25C:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    addi r3, r1, 0x8
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x1b0
    addi r4, r29, 0x5f4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F298
    b lbl_8025F2BC
lbl_8025F298:
    mr r3, r31
    addi r4, r29, 0x5f4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F2B8
    mr r0, r3
lbl_8025F2B8:
    mr r3, r0
lbl_8025F2BC:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    cmpwi r5, 0x0
    beq lbl_8025F2D4
    li r5, 0x1
lbl_8025F2D4:
    addi r3, r1, 0x8
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x1c4
    addi r4, r29, 0x5f4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F304
    b lbl_8025F328
lbl_8025F304:
    mr r3, r31
    addi r4, r29, 0x5f4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F324
    mr r0, r3
lbl_8025F324:
    mr r3, r0
lbl_8025F328:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    addi r3, r1, 0x8
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049C9F8
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F364
    b lbl_8025F388
lbl_8025F364:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F384
    mr r0, r3
lbl_8025F384:
    mr r3, r0
lbl_8025F388:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    addi r3, r1, 0x8
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049CA00
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F3C4
    b lbl_8025F3E8
lbl_8025F3C4:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F3E4
    mr r0, r3
lbl_8025F3E4:
    mr r3, r0
lbl_8025F3E8:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    addi r3, r1, 0x8
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049CA08
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F424
    b lbl_8025F448
lbl_8025F424:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F444
    mr r0, r3
lbl_8025F444:
    mr r3, r0
lbl_8025F448:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    addi r3, r1, 0x8
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049CA10
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F484
    b lbl_8025F4A8
lbl_8025F484:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F4A4
    mr r0, r3
lbl_8025F4A4:
    mr r3, r0
lbl_8025F4A8:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    addi r3, r1, 0x8
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049CA18
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F4E4
    b lbl_8025F508
lbl_8025F4E4:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F504
    mr r0, r3
lbl_8025F504:
    mr r3, r0
lbl_8025F508:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    addi r3, r1, 0x8
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049CA20
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F544
    b lbl_8025F568
lbl_8025F544:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F564
    mr r0, r3
lbl_8025F564:
    mr r3, r0
lbl_8025F568:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
    addi r3, r1, 0x8
    la r4, lbl_8049CA50
    opword 0x4CC63182
    bl sprintf
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049CA28
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F5A4
    b lbl_8025F5C8
lbl_8025F5A4:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F5C4
    mr r0, r3
lbl_8025F5C4:
    mr r3, r0
lbl_8025F5C8:
    cmpwi r3, 0x0
    beq lbl_8025F5E8
    b lbl_8025F5EC
lbl_8025F5D4:
    mr r3, r31
    addi r4, r30, 0x1d4
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_8025F5EC
lbl_8025F5E8:
    li r3, 0x0
lbl_8025F5EC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// gpiSetInfos
// ----------------------------------------------------------------------------
asm void gpiSetInfos() {
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x154(r1)
    stw r31, 0x14c(r1)
    mr r31, r3
    stw r30, 0x148(r1)
    lis r30, jumptable_80369028@ha
    addi r30, r30, jumptable_80369028@l
    stw r29, 0x144(r1)
    stw r28, 0x140(r1)
    mr r28, r5
    lwz r29, 0x0(r3)
    bne lbl_8025F650
    addi r4, r30, 0x248
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_802600F8
lbl_8025F650:
    subi r0, r4, 0x700
    cmplwi r0, 0x1e
    bgt lbl_802600E0
    lis r4, jumptable_803692DC@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_803692DC@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_8025F690
    addi r4, r30, 0x248
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_802600F8
lbl_8025F690:
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x1f
    bl strzcpy
    addi r3, r29, 0x110
    addi r4, r1, 0x38
    li r5, 0x1f
    bl strzcpy
    lwz r30, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049C9B8
    addi r4, r30, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F6D0
    b lbl_8025F6F4
lbl_8025F6D0:
    mr r3, r31
    addi r4, r30, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F6F0
    mr r0, r3
lbl_8025F6F0:
    mr r3, r0
lbl_8025F6F4:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_8025F71C
    addi r4, r30, 0x248
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_802600F8
lbl_8025F71C:
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x15
    bl strzcpy
    addi r3, r29, 0x12f
    addi r4, r1, 0x38
    li r5, 0x15
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x70
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F75C
    b lbl_8025F780
lbl_8025F75C:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F77C
    mr r0, r3
lbl_8025F77C:
    mr r3, r0
lbl_8025F780:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_8025F7A8
    addi r4, r30, 0x248
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_802600F8
lbl_8025F7A8:
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x33
    bl strzcpy
    addi r3, r1, 0x38
    bl fn_8025658C
    addi r3, r29, 0x144
    addi r4, r1, 0x38
    li r5, 0x33
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049C9C0
    addi r4, r29, 0x5f4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F7F0
    b lbl_8025F814
lbl_8025F7F0:
    mr r3, r31
    addi r4, r29, 0x5f4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F810
    mr r0, r3
lbl_8025F810:
    mr r3, r0
lbl_8025F814:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    lbz r0, 0x0(r5)
    extsb. r0, r0
    bne lbl_8025F83C
    addi r4, r30, 0x248
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_802600F8
lbl_8025F83C:
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x1f
    bl strzcpy
    addi r3, r29, 0x177
    addi r4, r1, 0x38
    li r5, 0x1f
    bl strzcpy
    addi r3, r29, 0x177
    addi r4, r1, 0x8
    bl gpiEncodeString
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x258
    addi r4, r29, 0x5f4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F888
    b lbl_8025F8AC
lbl_8025F888:
    mr r3, r31
    addi r4, r29, 0x5f4
    addi r5, r1, 0x8
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F8A8
    mr r0, r3
lbl_8025F8A8:
    mr r3, r0
lbl_8025F8AC:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x1f
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x80
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F8E8
    b lbl_8025F90C
lbl_8025F8E8:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F908
    mr r0, r3
lbl_8025F908:
    mr r3, r0
lbl_8025F90C:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x1f
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x8c
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F948
    b lbl_8025F96C
lbl_8025F948:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F968
    mr r0, r3
lbl_8025F968:
    mr r3, r0
lbl_8025F96C:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x4c
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0xa4
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025F9A8
    b lbl_8025F9CC
lbl_8025F9A8:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025F9C8
    mr r0, r3
lbl_8025F9C8:
    mr r3, r0
lbl_8025F9CC:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0xb
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0xb0
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025FA08
    b lbl_8025FA2C
lbl_8025FA08:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025FA28
    mr r0, r3
lbl_8025FA28:
    mr r3, r0
lbl_8025FA2C:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r3, r28
    bl strlen
    cmplwi r3, 0x2
    beq lbl_8025FA5C
    mr r3, r31
    addi r4, r30, 0x268
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_802600F8
lbl_8025FA5C:
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x3
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0xbc
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025FA8C
    b lbl_8025FAB0
lbl_8025FA8C:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025FAAC
    mr r0, r3
lbl_8025FAAC:
    mr r3, r0
lbl_8025FAB0:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    lbz r4, 0x0(r5)
    li r0, 0x0
    extsb. r4, r4
    blt lbl_8025FAD4
    cmpwi r4, 0x100
    blt lbl_8025FAD8
lbl_8025FAD4:
    li r0, 0x1
lbl_8025FAD8:
    cmpwi r0, 0x0
    beq lbl_8025FAE4
    b lbl_8025FAF8
lbl_8025FAE4:
    lis r3, lbl_8035FBD8@ha
    addi r3, r3, lbl_8035FBD8@l
    lwz r3, 0x38(r3)
    lwz r3, 0xc(r3)
    lbzx r4, r3, r4
lbl_8025FAF8:
    extsb r0, r4
    cmpwi r0, 0x4d
    bne lbl_8025FB14
    addi r3, r1, 0x38
    la r4, lbl_8049CA54
    bl strcpy
    b lbl_8025FB38
lbl_8025FB14:
    cmpwi r0, 0x46
    bne lbl_8025FB2C
    addi r3, r1, 0x38
    la r4, lbl_8049CA58
    bl strcpy
    b lbl_8025FB38
lbl_8025FB2C:
    addi r3, r1, 0x38
    la r4, lbl_8049CA5C
    bl strcpy
lbl_8025FB38:
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049C9E0
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025FB58
    b lbl_8025FB7C
lbl_8025FB58:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025FB78
    mr r0, r3
lbl_8025FB78:
    mr r3, r0
lbl_8025FB7C:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x98
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025FBB8
    b lbl_8025FBDC
lbl_8025FBB8:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025FBD8
    mr r0, r3
lbl_8025FBD8:
    mr r3, r0
lbl_8025FBDC:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r3, r28
    bl atoi
    mr r5, r3
    mr r3, r31
    li r4, 0x70d
    bl gpiSetInfoi
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r3, r28
    bl atoi
    mr r5, r3
    mr r3, r31
    li r4, 0x70e
    bl gpiSetInfoi
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x280
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025FC60
    b lbl_8025FC84
lbl_8025FC60:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025FC80
    mr r0, r3
lbl_8025FC80:
    mr r3, r0
lbl_8025FC84:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r3, r28
    bl atoi
    mr r5, r3
    mr r3, r31
    li r4, 0x710
    bl gpiSetInfoi
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x294
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025FCE4
    b lbl_8025FD08
lbl_8025FCE4:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025FD04
    mr r0, r3
lbl_8025FD04:
    mr r3, r0
lbl_8025FD08:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r3, r28
    bl atoi
    mr r5, r3
    mr r3, r31
    li r4, 0x712
    bl gpiSetInfoi
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r3, r28
    bl atoi
    mr r5, r3
    mr r3, r31
    li r4, 0x714
    bl gpiSetInfoi
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r3, r28
    bl atoi
    mr r5, r3
    mr r3, r31
    li r4, 0x715
    bl gpiSetInfoi
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    addi r5, r30, 0x2a8
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025FDB0
    b lbl_8025FDD4
lbl_8025FDB0:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025FDD0
    mr r0, r3
lbl_8025FDD0:
    mr r3, r0
lbl_8025FDD4:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x33
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049C9F0
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025FE10
    b lbl_8025FE34
lbl_8025FE10:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025FE30
    mr r0, r3
lbl_8025FE30:
    mr r3, r0
lbl_8025FE34:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049C9F8
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025FE70
    b lbl_8025FE94
lbl_8025FE70:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025FE90
    mr r0, r3
lbl_8025FE90:
    mr r3, r0
lbl_8025FE94:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049CA00
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025FED0
    b lbl_8025FEF4
lbl_8025FED0:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025FEF0
    mr r0, r3
lbl_8025FEF0:
    mr r3, r0
lbl_8025FEF4:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049CA08
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025FF30
    b lbl_8025FF54
lbl_8025FF30:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025FF50
    mr r0, r3
lbl_8025FF50:
    mr r3, r0
lbl_8025FF54:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049CA10
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025FF90
    b lbl_8025FFB4
lbl_8025FF90:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_8025FFB0
    mr r0, r3
lbl_8025FFB0:
    mr r3, r0
lbl_8025FFB4:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049CA18
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_8025FFF0
    b lbl_80260014
lbl_8025FFF0:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_80260010
    mr r0, r3
lbl_80260010:
    mr r3, r0
lbl_80260014:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049CA20
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_80260050
    b lbl_80260074
lbl_80260050:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_80260070
    mr r0, r3
lbl_80260070:
    mr r3, r0
lbl_80260074:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
    mr r4, r28
    addi r3, r1, 0x38
    li r5, 0x100
    bl strzcpy
    lwz r29, 0x0(r31)
    mr r3, r31
    la r5, lbl_8049CA28
    addi r4, r29, 0x5e4
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    beq lbl_802600B0
    b lbl_802600D4
lbl_802600B0:
    mr r3, r31
    addi r4, r29, 0x5e4
    addi r5, r1, 0x38
    bl gpiAppendStringToBuffer
    cmpwi r3, 0x0
    li r0, 0x0
    beq lbl_802600D0
    mr r0, r3
lbl_802600D0:
    mr r3, r0
lbl_802600D4:
    cmpwi r3, 0x0
    beq lbl_802600F4
    b lbl_802600F8
lbl_802600E0:
    mr r3, r31
    addi r4, r30, 0x1d4
    bl gpiSetErrorString
    li r3, 0x2
    b lbl_802600F8
lbl_802600F4:
    li r3, 0x0
lbl_802600F8:
    lwz r0, 0x154(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    lwz r28, 0x140(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

// ----------------------------------------------------------------------------
// gpiSendGetInfo
// ----------------------------------------------------------------------------
asm void gpiSendGetInfo() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_80369368@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    addi r5, r6, lbl_80369368@l
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r31, 0x0(r3)
    addi r4, r31, 0x210
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r31)
    mr r3, r28
    addi r4, r31, 0x210
    bl gpiAppendIntToBuffer
    lis r5, lbl_8036908C@ha
    mr r3, r28
    addi r4, r31, 0x210
    addi r5, r5, lbl_8036908C@l
    bl gpiAppendStringToBuffer
    mr r3, r28
    mr r5, r29
    addi r4, r31, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x210
    la r5, lbl_8049CA60
    bl gpiAppendStringToBuffer
    mr r3, r28
    mr r5, r30
    addi r4, r31, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r28
    addi r4, r31, 0x210
    la r5, lbl_8049CA48
    bl gpiAppendStringToBuffer
    lwz r31, 0x1c(r1)
    li r3, 0x0
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// gpiGetInfo
// ----------------------------------------------------------------------------
asm void gpiGetInfo() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lwz r10, 0x0(r3)
    li r9, 0x0
    subi r0, r5, 0x1
    lis r28, jumptable_80369028@ha
    stw r9, 0x8(r1)
    cntlzw r5, r0
    mr r29, r3
    mr r30, r4
    lwz r0, 0x100(r10)
    mr r31, r6
    mr r25, r7
    mr r27, r8
    cmpwi r0, 0x0
    addi r28, r28, jumptable_80369028@l
    srwi r0, r5, 5
    bne lbl_80260234
    li r0, 0x0
lbl_80260234:
    cmpwi r7, 0x0
    beq lbl_8026032C
    cmpwi r0, 0x0
    beq lbl_8026032C
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0xc
    bl gpiGetProfile
    cmpwi r3, 0x0
    beq lbl_8026032C
    lwz r3, 0xc(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_8026032C
    li r3, 0x204
    bl fn_80256C4C
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_80260294
    mr r3, r29
    addi r4, r28, 0xe8
    bl gpiSetErrorString
    li r3, 0x1
    b lbl_80260400
lbl_80260294:
    lwz r3, 0xc(r1)
    mr r4, r26
    lwz r3, 0x10(r3)
    bl gpiInfoCacheToArg
    li r0, 0x0
    stw r25, 0x18(r1)
    mr r3, r29
    mr r8, r25
    stw r0, 0x0(r26)
    mr r9, r27
    addi r6, r1, 0x8
    li r4, 0x2
    stw r30, 0x4(r26)
    li r5, 0x0
    li r7, 0x1
    stw r27, 0x1c(r1)
    bl gpiAddOperation
    cmpwi r3, 0x0
    beq lbl_802602E4
    b lbl_80260400
lbl_802602E4:
    lwz r6, 0x8(r1)
    mr r5, r26
    mr r7, r25
    mr r0, r27
    lwz r26, 0x18(r6)
    mr r3, r29
    addi r4, r1, 0x10
    stw r7, 0x10(r1)
    li r7, 0x0
    stw r0, 0x14(r1)
    bl gpiAddCallback
    cmpwi r3, 0x0
    beq lbl_8026031C
    b lbl_80260400
lbl_8026031C:
    lwz r4, 0x8(r1)
    mr r3, r29
    bl gpiRemoveOperation
    b lbl_802603DC
lbl_8026032C:
    mr r3, r29
    mr r7, r31
    mr r8, r25
    mr r9, r27
    addi r6, r1, 0x8
    li r4, 0x2
    li r5, 0x0
    bl gpiAddOperation
    cmpwi r3, 0x0
    beq lbl_80260358
    b lbl_80260400
lbl_80260358:
    lwz r4, 0x8(r1)
    mr r3, r29
    lwz r27, 0x0(r29)
    addi r5, r28, 0x340
    lwz r26, 0x18(r4)
    addi r4, r27, 0x210
    bl gpiAppendStringToBuffer
    lwz r5, 0x198(r27)
    mr r3, r29
    addi r4, r27, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r29
    addi r4, r27, 0x210
    addi r5, r28, 0x64
    bl gpiAppendStringToBuffer
    mr r3, r29
    mr r5, r30
    addi r4, r27, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r29
    addi r4, r27, 0x210
    la r5, lbl_8049CA60
    bl gpiAppendStringToBuffer
    mr r3, r29
    mr r5, r26
    addi r4, r27, 0x210
    bl gpiAppendIntToBuffer
    mr r3, r29
    addi r4, r27, 0x210
    la r5, lbl_8049CA48
    bl gpiAppendStringToBuffer
    b lbl_802603DC
    b lbl_80260400
lbl_802603DC:
    cmpwi r31, 0x0
    beq lbl_802603FC
    mr r3, r29
    mr r4, r26
    bl fn_80259940
    cmpwi r3, 0x0
    beq lbl_802603FC
    b lbl_80260400
lbl_802603FC:
    li r3, 0x0
lbl_80260400:
    addi r11, r1, 0x40
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// gpiFreeInfoCache
// ----------------------------------------------------------------------------
asm void gpiFreeInfoCache() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r4, 0x10(r3)
    cmpwi r4, 0x0
    beq lbl_802604D4
    lwz r3, 0x0(r4)
    bl fn_80256C70
    lwz r3, 0x10(r30)
    li r31, 0x0
    stw r31, 0x0(r3)
    lwz r3, 0x10(r30)
    lwz r3, 0x4(r3)
    bl fn_80256C70
    lwz r3, 0x10(r30)
    stw r31, 0x4(r3)
    lwz r3, 0x10(r30)
    lwz r3, 0x8(r3)
    bl fn_80256C70
    lwz r3, 0x10(r30)
    stw r31, 0x8(r3)
    lwz r3, 0x10(r30)
    lwz r3, 0xc(r3)
    bl fn_80256C70
    lwz r3, 0x10(r30)
    stw r31, 0xc(r3)
    lwz r3, 0x10(r30)
    lwz r3, 0x10(r3)
    bl fn_80256C70
    lwz r3, 0x10(r30)
    stw r31, 0x10(r3)
    lwz r3, 0x10(r30)
    lwz r3, 0x14(r3)
    bl fn_80256C70
    lwz r3, 0x10(r30)
    stw r31, 0x14(r3)
    lwz r3, 0x10(r30)
    lwz r3, 0xc8(r3)
    bl fn_80256C70
    lwz r3, 0x10(r30)
    stw r31, 0xc8(r3)
    lwz r3, 0x10(r30)
    bl fn_80256C70
    stw r31, 0x10(r30)
lbl_802604D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

