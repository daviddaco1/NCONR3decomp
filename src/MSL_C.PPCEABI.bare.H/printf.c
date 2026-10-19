#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/printf.cpp
// Total functions: 18

// Small Data symbols (@sda21)
float at_wstringBase0_8049C400;
float lbl_8049C408;
float lbl_804A11A8;

// Global data symbols (@ha/@l)
u8 __files[];
u8 at_2934_8035FD00[];
u8 at_stringBase0_8033B9A0[];
u8 jumptable_8035FC20[];
u8 lbl_8035FA28[];
u8 lbl_8035FBD8[];

// Forward declarations
void __FileWrite();
void __StringWrite();
void __div2u();
void __fwrite();
void __mod2u();
void __msl_runtime_constraint_violation_s();
void __pformatter_8019A65C();
void __va_arg();
void double2hex();
void float2str();
void fn_801972E0();
void fn_80199D9C();
void fn_8019AFCC();
void fn_8019B19C();
void fn_8019B220();
void fn_8019B3E8();
void fn_8019B558();
void fn_8019B578();
void fwide();
void long2str();
void longlong2str();
void memchr();
void memcpy();
void parse_format_80198F20();
void sprintf();
void strchr();
void strcpy();
void strlen();
void vprintf();
void vsnprintf();
void wcstombs();

// ----------------------------------------------------------------------------
// parse_format_80198F20
// ----------------------------------------------------------------------------
asm void parse_format_80198F20() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r7, 0x0
    lbz r6, 0x1(r3)
    stw r0, 0x34(r1)
    li r8, 0x1
    extsb r6, r6
    stw r31, 0x2c(r1)
    cmpwi r6, 0x25
    addi r31, r3, 0x1
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stb r8, 0x8(r1)
    stb r7, 0x9(r1)
    stb r7, 0xa(r1)
    stb r7, 0xb(r1)
    stb r7, 0xc(r1)
    stw r7, 0x10(r1)
    stw r7, 0x14(r1)
    bne lbl_80198F9C
    stb r6, 0xd(r1)
    addi r3, r31, 0x1
    lwz r4, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r4, 0x0(r5)
    stw r0, 0x4(r5)
    stw r7, 0x8(r5)
    stw r7, 0xc(r5)
    b lbl_801994C0
lbl_80198F9C:
    li r0, 0x2
lbl_80198FA0:
    cmpwi r6, 0x2d
    li r4, 0x1
    beq lbl_80198FD0
    cmpwi r6, 0x2b
    beq lbl_80198FD8
    cmpwi r6, 0x20
    beq lbl_80198FE0
    cmpwi r6, 0x23
    beq lbl_80198FF4
    cmpwi r6, 0x30
    beq lbl_80198FFC
    b lbl_80199010
lbl_80198FD0:
    stb r7, 0x8(r1)
    b lbl_80199014
lbl_80198FD8:
    stb r8, 0x9(r1)
    b lbl_80199014
lbl_80198FE0:
    lbz r3, 0x9(r1)
    cmplwi r3, 0x1
    beq lbl_80199014
    stb r0, 0x9(r1)
    b lbl_80199014
lbl_80198FF4:
    stb r8, 0xb(r1)
    b lbl_80199014
lbl_80198FFC:
    lbz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_80199014
    stb r0, 0x8(r1)
    b lbl_80199014
lbl_80199010:
    li r4, 0x0
lbl_80199014:
    cmpwi r4, 0x0
    beq lbl_80199028
    lbzu r6, 0x1(r31)
    extsb r6, r6
    b lbl_80198FA0
lbl_80199028:
    cmpwi r6, 0x2a
    bne lbl_80199068
    mr r3, r29
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    stw r0, 0x10(r1)
    cmpwi r0, 0x0
    bge lbl_8019905C
    neg r0, r0
    li r3, 0x0
    stb r3, 0x8(r1)
    stw r0, 0x10(r1)
lbl_8019905C:
    lbzu r6, 0x1(r31)
    extsb r6, r6
    b lbl_801990CC
lbl_80199068:
    lis r3, lbl_8035FBD8@ha
    addi r3, r3, lbl_8035FBD8@l
    lwz r4, 0x38(r3)
    b lbl_80199094
lbl_80199078:
    lwz r0, 0x10(r1)
    mulli r0, r0, 0xa
    add r3, r6, r0
    lbzu r6, 0x1(r31)
    subi r0, r3, 0x30
    stw r0, 0x10(r1)
    extsb r6, r6
lbl_80199094:
    cmplwi r6, 0xff
    li r0, 0x1
    bgt lbl_801990A4
    li r0, 0x0
lbl_801990A4:
    cmpwi r0, 0x0
    beq lbl_801990B4
    li r0, 0x0
    b lbl_801990C4
lbl_801990B4:
    lwz r3, 0x8(r4)
    slwi r0, r6, 1
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_801990C4:
    cmpwi r0, 0x0
    bne lbl_80199078
lbl_801990CC:
    lwz r7, 0x10(r1)
    cmpwi r7, 0x1fd
    ble lbl_80199104
    li r0, 0xff
    stb r0, 0xd(r1)
    lwz r5, 0x8(r1)
    addi r3, r31, 0x1
    lwz r4, 0xc(r1)
    lwz r0, 0x14(r1)
    stw r5, 0x0(r30)
    stw r4, 0x4(r30)
    stw r7, 0x8(r30)
    stw r0, 0xc(r30)
    b lbl_801994C0
lbl_80199104:
    cmpwi r6, 0x2e
    bne lbl_801991B8
    lbzu r6, 0x1(r31)
    li r0, 0x1
    stb r0, 0xa(r1)
    extsb r6, r6
    cmpwi r6, 0x2a
    bne lbl_80199154
    mr r3, r29
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    stw r0, 0x14(r1)
    cmpwi r0, 0x0
    bge lbl_80199148
    li r0, 0x0
    stb r0, 0xa(r1)
lbl_80199148:
    lbzu r6, 0x1(r31)
    extsb r6, r6
    b lbl_801991B8
lbl_80199154:
    lis r3, lbl_8035FBD8@ha
    addi r3, r3, lbl_8035FBD8@l
    lwz r4, 0x38(r3)
    b lbl_80199180
lbl_80199164:
    lwz r0, 0x14(r1)
    mulli r0, r0, 0xa
    add r3, r6, r0
    lbzu r6, 0x1(r31)
    subi r0, r3, 0x30
    stw r0, 0x14(r1)
    extsb r6, r6
lbl_80199180:
    cmplwi r6, 0xff
    li r0, 0x1
    bgt lbl_80199190
    li r0, 0x0
lbl_80199190:
    cmpwi r0, 0x0
    beq lbl_801991A0
    li r0, 0x0
    b lbl_801991B0
lbl_801991A0:
    lwz r3, 0x8(r4)
    slwi r0, r6, 1
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_801991B0:
    cmpwi r0, 0x0
    bne lbl_80199164
lbl_801991B8:
    cmpwi r6, 0x68
    li r4, 0x1
    beq lbl_801991F0
    cmpwi r6, 0x6c
    beq lbl_8019921C
    cmpwi r6, 0x4c
    beq lbl_80199248
    cmpwi r6, 0x6a
    beq lbl_80199254
    cmpwi r6, 0x74
    beq lbl_80199260
    cmpwi r6, 0x7a
    beq lbl_8019926C
    b lbl_80199278
lbl_801991F0:
    lbz r0, 0x1(r31)
    li r3, 0x2
    stb r3, 0xc(r1)
    extsb r3, r0
    cmpwi r3, 0x68
    bne lbl_8019927C
    li r0, 0x1
    stb r0, 0xc(r1)
    mr r6, r3
    addi r31, r31, 0x1
    b lbl_8019927C
lbl_8019921C:
    lbz r0, 0x1(r31)
    li r3, 0x3
    stb r3, 0xc(r1)
    extsb r3, r0
    cmpwi r3, 0x6c
    bne lbl_8019927C
    li r0, 0x4
    stb r0, 0xc(r1)
    mr r6, r3
    addi r31, r31, 0x1
    b lbl_8019927C
lbl_80199248:
    li r0, 0x9
    stb r0, 0xc(r1)
    b lbl_8019927C
lbl_80199254:
    li r0, 0x6
    stb r0, 0xc(r1)
    b lbl_8019927C
lbl_80199260:
    li r0, 0x8
    stb r0, 0xc(r1)
    b lbl_8019927C
lbl_8019926C:
    li r0, 0x7
    stb r0, 0xc(r1)
    b lbl_8019927C
lbl_80199278:
    li r4, 0x0
lbl_8019927C:
    cmpwi r4, 0x0
    beq lbl_8019928C
    lbzu r6, 0x1(r31)
    extsb r6, r6
lbl_8019928C:
    subi r0, r6, 0x41
    stb r6, 0xd(r1)
    cmplwi r0, 0x37
    bgt lbl_80199494
    lis r3, jumptable_8035FC20@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8035FC20@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lbz r0, 0xc(r1)
    cmplwi r0, 0x9
    bne lbl_801992CC
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_8019949C
lbl_801992CC:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_801992E4
    li r0, 0x1
    stw r0, 0x14(r1)
    b lbl_8019949C
lbl_801992E4:
    lbz r0, 0x8(r1)
    cmplwi r0, 0x2
    bne lbl_8019949C
    li r0, 0x1
    stb r0, 0x8(r1)
    b lbl_8019949C
    lbz r3, 0xc(r1)
    addi r0, r3, 0xfa
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_80199320
    cmplwi r3, 0x2
    beq lbl_80199320
    cmplwi r3, 0x4
    bne lbl_8019932C
lbl_80199320:
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_8019949C
lbl_8019932C:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_8019949C
    li r0, 0x6
    stw r0, 0x14(r1)
    b lbl_8019949C
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_80199358
    li r0, 0xd
    stw r0, 0x14(r1)
lbl_80199358:
    lbz r3, 0xc(r1)
    addi r0, r3, 0xfa
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_80199384
    addi r0, r3, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    ble lbl_80199384
    cmplwi r3, 0x4
    bne lbl_8019949C
lbl_80199384:
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_8019949C
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    bne lbl_801993A4
    li r0, 0x1
    stw r0, 0x14(r1)
lbl_801993A4:
    lbz r3, 0xc(r1)
    addi r0, r3, 0xfa
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_801993D0
    addi r0, r3, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    ble lbl_801993D0
    cmplwi r3, 0x4
    bne lbl_801993DC
lbl_801993D0:
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_8019949C
lbl_801993DC:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_8019949C
    li r0, 0x6
    stw r0, 0x14(r1)
    b lbl_8019949C
    li r5, 0x78
    li r4, 0x1
    li r3, 0x3
    li r0, 0x8
    stb r5, 0xd(r1)
    stb r4, 0xb(r1)
    stb r3, 0xc(r1)
    stw r0, 0x14(r1)
    b lbl_8019949C
    lbz r3, 0xc(r1)
    cmplwi r3, 0x3
    bne lbl_80199430
    li r0, 0x5
    stb r0, 0xc(r1)
    b lbl_8019949C
lbl_80199430:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_80199444
    cmpwi r3, 0x0
    beq lbl_8019949C
lbl_80199444:
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_8019949C
    lbz r0, 0xc(r1)
    cmplwi r0, 0x3
    bne lbl_80199468
    li r0, 0x5
    stb r0, 0xc(r1)
    b lbl_8019949C
lbl_80199468:
    cmpwi r0, 0x0
    beq lbl_8019949C
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_8019949C
    lbz r0, 0xc(r1)
    cmplwi r0, 0x9
    bne lbl_8019949C
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_8019949C
lbl_80199494:
    li r0, 0xff
    stb r0, 0xd(r1)
lbl_8019949C:
    lwz r6, 0x8(r1)
    addi r3, r31, 0x1
    lwz r5, 0xc(r1)
    lwz r4, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r6, 0x0(r30)
    stw r5, 0x4(r30)
    stw r4, 0x8(r30)
    stw r0, 0xc(r30)
lbl_801994C0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// long2str
// ----------------------------------------------------------------------------
asm void long2str() {
    nofralloc
    cmpwi r3, 0x0
    li r8, 0x0
    stb r8, -0x1(r4)
    subi r6, r4, 0x1
    li r7, 0x0
    bne lbl_80199520
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    bne lbl_80199520
    lbz r0, 0x3(r5)
    cmpwi r0, 0x0
    beq lbl_80199518
    lbz r0, 0x5(r5)
    cmplwi r0, 0x6f
    beq lbl_80199520
lbl_80199518:
    mr r3, r6
    blr
lbl_80199520:
    lbz r9, 0x5(r5)
    cmpwi r9, 0x64
    beq lbl_80199558
    cmpwi r9, 0x69
    beq lbl_80199558
    cmpwi r9, 0x6f
    beq lbl_80199584
    cmpwi r9, 0x75
    beq lbl_80199594
    cmpwi r9, 0x78
    beq lbl_801995A4
    cmpwi r9, 0x58
    beq lbl_801995A4
    b lbl_801995B0
lbl_80199558:
    cmpwi r3, 0x0
    li r0, 0xa
    bge lbl_801995B0
    srawi r9, r3, 31
    lis r8, 0x8000
    xor r8, r9, r8
    or. r8, r3, r8
    beq lbl_8019957C
    neg r3, r3
lbl_8019957C:
    li r8, 0x1
    b lbl_801995B0
lbl_80199584:
    li r0, 0x0
    stb r0, 0x1(r5)
    li r0, 0x8
    b lbl_801995B0
lbl_80199594:
    li r0, 0x0
    stb r0, 0x1(r5)
    li r0, 0xa
    b lbl_801995B0
lbl_801995A4:
    li r0, 0x0
    stb r0, 0x1(r5)
    li r0, 0x10
lbl_801995B0:
    divwu r9, r3, r0
    mullw r9, r9, r0
    subf r11, r9, r3
    divwu r3, r3, r0
    cmpwi r11, 0xa
    bge lbl_801995D0
    addi r11, r11, 0x30
    b lbl_801995E8
lbl_801995D0:
    lbz r9, 0x5(r5)
    addi r10, r11, 0x37
    cmplwi r9, 0x78
    bne lbl_801995E4
    addi r10, r11, 0x57
lbl_801995E4:
    mr r11, r10
lbl_801995E8:
    cmpwi r3, 0x0
    stb r11, -0x1(r6)
    subi r6, r6, 0x1
    addi r7, r7, 0x1
    bne lbl_801995B0
    cmplwi r0, 0x8
    bne lbl_80199628
    lbz r3, 0x3(r5)
    cmpwi r3, 0x0
    beq lbl_80199628
    lbz r3, 0x0(r6)
    cmpwi r3, 0x30
    beq lbl_80199628
    li r3, 0x30
    stbu r3, -0x1(r6)
    addi r7, r7, 0x1
lbl_80199628:
    lbz r3, 0x0(r5)
    cmplwi r3, 0x2
    bne lbl_8019967C
    lwz r3, 0x8(r5)
    cmpwi r8, 0x0
    stw r3, 0xc(r5)
    bne lbl_80199650
    lbz r3, 0x1(r5)
    cmpwi r3, 0x0
    beq lbl_8019965C
lbl_80199650:
    lwz r3, 0xc(r5)
    subi r3, r3, 0x1
    stw r3, 0xc(r5)
lbl_8019965C:
    cmplwi r0, 0x10
    bne lbl_8019967C
    lbz r3, 0x3(r5)
    cmpwi r3, 0x0
    beq lbl_8019967C
    lwz r3, 0xc(r5)
    subi r3, r3, 0x2
    stw r3, 0xc(r5)
lbl_8019967C:
    lwz r9, 0xc(r5)
    subf r3, r6, r4
    add r3, r9, r3
    cmpwi r3, 0x1fd
    ble lbl_80199698
    li r3, 0x0
    blr
lbl_80199698:
    li r4, 0x30
    b lbl_801996A8
lbl_801996A0:
    stbu r4, -0x1(r6)
    addi r7, r7, 0x1
lbl_801996A8:
    lwz r3, 0xc(r5)
    cmpw r7, r3
    blt lbl_801996A0
    cmplwi r0, 0x10
    bne lbl_801996D8
    lbz r0, 0x3(r5)
    cmpwi r0, 0x0
    beq lbl_801996D8
    lbz r3, 0x5(r5)
    li r0, 0x30
    stb r3, -0x1(r6)
    stbu r0, -0x2(r6)
lbl_801996D8:
    cmpwi r8, 0x0
    beq lbl_801996EC
    li r0, 0x2d
    stbu r0, -0x1(r6)
    b lbl_80199714
lbl_801996EC:
    lbz r0, 0x1(r5)
    cmplwi r0, 0x1
    bne lbl_80199704
    li r0, 0x2b
    stbu r0, -0x1(r6)
    b lbl_80199714
lbl_80199704:
    cmplwi r0, 0x2
    bne lbl_80199714
    li r0, 0x20
    stbu r0, -0x1(r6)
lbl_80199714:
    mr r3, r6
    blr
}

// ----------------------------------------------------------------------------
// longlong2str
// ----------------------------------------------------------------------------
asm void longlong2str() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    or. r0, r4, r3
    stmw r22, 0x8(r1)
    li r25, 0x0
    mr r31, r3
    mr r30, r4
    mr r23, r5
    mr r24, r6
    subi r27, r5, 0x1
    li r26, 0x0
    stb r25, -0x1(r5)
    bne lbl_80199780
    lwz r0, 0xc(r6)
    cmpwi r0, 0x0
    bne lbl_80199780
    lbz r0, 0x3(r6)
    cmpwi r0, 0x0
    beq lbl_80199778
    lbz r0, 0x5(r6)
    cmplwi r0, 0x6f
    beq lbl_80199780
lbl_80199778:
    mr r3, r27
    b lbl_801999B8
lbl_80199780:
    lbz r0, 0x5(r6)
    cmpwi r0, 0x64
    beq lbl_801997B8
    cmpwi r0, 0x69
    beq lbl_801997B8
    cmpwi r0, 0x6f
    beq lbl_801997FC
    cmpwi r0, 0x75
    beq lbl_8019980C
    cmpwi r0, 0x78
    beq lbl_8019981C
    cmpwi r0, 0x58
    beq lbl_8019981C
    b lbl_80199828
lbl_801997B8:
    li r29, 0x0
    xoris r0, r3, 0x8000
    xoris r6, r29, 0x8000
    li r28, 0xa
    subfc r5, r29, r4
    subfe r6, r6, r0
    subfe r6, r0, r0
    neg. r6, r6
    beq lbl_80199828
    lis r0, 0x8000
    xor r0, r3, r0
    or. r0, r4, r0
    beq lbl_801997F4
    subfic r30, r4, 0x0
    subfze r31, r3
lbl_801997F4:
    li r25, 0x1
    b lbl_80199828
lbl_801997FC:
    li r29, 0x0
    stb r29, 0x1(r6)
    li r28, 0x8
    b lbl_80199828
lbl_8019980C:
    li r29, 0x0
    stb r29, 0x1(r6)
    li r28, 0xa
    b lbl_80199828
lbl_8019981C:
    li r29, 0x0
    stb r29, 0x1(r6)
    li r28, 0x10
lbl_80199828:
    mr r3, r31
    mr r4, r30
    mr r5, r29
    mr r6, r28
    bl __mod2u
    mr r22, r4
    mr r3, r31
    mr r4, r30
    mr r5, r29
    mr r6, r28
    bl __div2u
    cmpwi r22, 0xa
    mr r30, r4
    mr r31, r3
    bge lbl_8019986C
    addi r5, r22, 0x30
    b lbl_80199880
lbl_8019986C:
    lbz r0, 0x5(r24)
    addi r5, r22, 0x37
    cmplwi r0, 0x78
    bne lbl_80199880
    addi r5, r22, 0x57
lbl_80199880:
    or. r0, r4, r3
    stbu r5, -0x1(r27)
    addi r26, r26, 0x1
    bne lbl_80199828
    xori r0, r28, 0x8
    or. r0, r0, r29
    bne lbl_801998C0
    lbz r0, 0x3(r24)
    cmpwi r0, 0x0
    beq lbl_801998C0
    lbz r0, 0x0(r27)
    cmpwi r0, 0x30
    beq lbl_801998C0
    li r0, 0x30
    stbu r0, -0x1(r27)
    addi r26, r26, 0x1
lbl_801998C0:
    lbz r0, 0x0(r24)
    cmplwi r0, 0x2
    bne lbl_80199918
    lwz r0, 0x8(r24)
    cmpwi r25, 0x0
    stw r0, 0xc(r24)
    bne lbl_801998E8
    lbz r0, 0x1(r24)
    cmpwi r0, 0x0
    beq lbl_801998F4
lbl_801998E8:
    lwz r3, 0xc(r24)
    subi r0, r3, 0x1
    stw r0, 0xc(r24)
lbl_801998F4:
    xori r0, r28, 0x10
    or. r0, r0, r29
    bne lbl_80199918
    lbz r0, 0x3(r24)
    cmpwi r0, 0x0
    beq lbl_80199918
    lwz r3, 0xc(r24)
    subi r0, r3, 0x2
    stw r0, 0xc(r24)
lbl_80199918:
    lwz r3, 0xc(r24)
    subf r0, r27, r23
    add r0, r3, r0
    cmpwi r0, 0x1fd
    ble lbl_80199934
    li r3, 0x0
    b lbl_801999B8
lbl_80199934:
    li r3, 0x30
    b lbl_80199944
lbl_8019993C:
    stbu r3, -0x1(r27)
    addi r26, r26, 0x1
lbl_80199944:
    lwz r0, 0xc(r24)
    cmpw r26, r0
    blt lbl_8019993C
    xori r0, r28, 0x10
    or. r0, r0, r29
    bne lbl_80199978
    lbz r0, 0x3(r24)
    cmpwi r0, 0x0
    beq lbl_80199978
    lbz r3, 0x5(r24)
    li r0, 0x30
    stb r3, -0x1(r27)
    stbu r0, -0x2(r27)
lbl_80199978:
    cmpwi r25, 0x0
    beq lbl_8019998C
    li r0, 0x2d
    stbu r0, -0x1(r27)
    b lbl_801999B4
lbl_8019998C:
    lbz r0, 0x1(r24)
    cmplwi r0, 0x1
    bne lbl_801999A4
    li r0, 0x2b
    stbu r0, -0x1(r27)
    b lbl_801999B4
lbl_801999A4:
    cmplwi r0, 0x2
    bne lbl_801999B4
    li r0, 0x20
    stbu r0, -0x1(r27)
lbl_801999B4:
    mr r3, r27
lbl_801999B8:
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// double2hex
// ----------------------------------------------------------------------------
asm void double2hex() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r5, lbl_8035FA28@ha
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    opword 0xF3E10088
    fmr f31, f1
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r4
    stw r29, 0x74(r1)
    mr r29, r3
    stw r28, 0x70(r1)
    lwz r0, 0xc(r4)
    lwz r5, lbl_8035FA28@l(r5)
    cmpwi r0, 0x1fd
    stfd f1, 0x8(r1)
    lbz r31, 0x0(r5)
    ble lbl_80199A20
    li r3, 0x0
    b lbl_80199D74
lbl_80199A20:
    li r28, 0x0
    li r0, 0x20
    stb r28, 0x10(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x38
    sth r0, 0x12(r1)
    bl fn_801972E0
    lbz r0, 0x3d(r1)
    cmpwi r0, 0x30
    beq lbl_80199A5C
    cmpwi r0, 0x49
    beq lbl_80199A64
    cmpwi r0, 0x4e
    beq lbl_80199AF0
    b lbl_80199B80
lbl_80199A5C:
    sth r28, 0x3a(r1)
    b lbl_80199B80
lbl_80199A64:
    lbz r0, 0x38(r1)
    extsb. r0, r0
    beq lbl_80199AAC
    lbz r0, 0x5(r30)
    subi r28, r29, 0x5
    cmplwi r0, 0x41
    bne lbl_80199A94
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r28
    addi r4, r4, at_stringBase0_8033B9A0@l
    bl strcpy
    b lbl_80199AE8
lbl_80199A94:
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r28
    addi r4, r4, at_stringBase0_8033B9A0@l
    addi r4, r4, 0x5
    bl strcpy
    b lbl_80199AE8
lbl_80199AAC:
    lbz r0, 0x5(r30)
    subi r28, r29, 0x4
    cmplwi r0, 0x41
    bne lbl_80199AD4
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r28
    addi r4, r4, at_stringBase0_8033B9A0@l
    addi r4, r4, 0xa
    bl strcpy
    b lbl_80199AE8
lbl_80199AD4:
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r28
    addi r4, r4, at_stringBase0_8033B9A0@l
    addi r4, r4, 0xe
    bl strcpy
lbl_80199AE8:
    mr r3, r28
    b lbl_80199D74
lbl_80199AF0:
    lbz r0, 0x38(r1)
    extsb. r0, r0
    beq lbl_80199B3C
    lbz r0, 0x5(r30)
    subi r28, r29, 0x5
    cmplwi r0, 0x41
    bne lbl_80199B24
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r28
    addi r4, r4, at_stringBase0_8033B9A0@l
    addi r4, r4, 0x12
    bl strcpy
    b lbl_80199B78
lbl_80199B24:
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r28
    addi r4, r4, at_stringBase0_8033B9A0@l
    addi r4, r4, 0x17
    bl strcpy
    b lbl_80199B78
lbl_80199B3C:
    lbz r0, 0x5(r30)
    subi r28, r29, 0x4
    cmplwi r0, 0x41
    bne lbl_80199B64
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r28
    addi r4, r4, at_stringBase0_8033B9A0@l
    addi r4, r4, 0x1c
    bl strcpy
    b lbl_80199B78
lbl_80199B64:
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r28
    addi r4, r4, at_stringBase0_8033B9A0@l
    addi r4, r4, 0x20
    bl strcpy
lbl_80199B78:
    mr r3, r28
    b lbl_80199D74
lbl_80199B80:
    lbz r0, 0x9(r1)
    li r8, 0x0
    lbz r3, 0x8(r1)
    li r9, 0x1
    slwi r0, r0, 17
    li r7, 0x64
    rlwimi r0, r3, 25, 0, 6
    stb r9, 0x28(r1)
    srwi r5, r0, 21
    mr r4, r29
    neg r0, r5
    stb r9, 0x29(r1)
    or r3, r0, r5
    subi r0, r5, 0x3ff
    stb r8, 0x2a(r1)
    srawi r3, r3, 31
    addi r5, r1, 0x18
    stb r8, 0x2b(r1)
    and r3, r0, r3
    lwz r6, 0x28(r1)
    stb r8, 0x2c(r1)
    stb r7, 0x2d(r1)
    lwz r0, 0x2c(r1)
    stw r8, 0x30(r1)
    stw r9, 0x34(r1)
    stw r6, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r8, 0x20(r1)
    stw r9, 0x24(r1)
    bl long2str
    lbz r0, 0x5(r30)
    cmplwi r0, 0x61
    bne lbl_80199C10
    li r0, 0x70
    stbu r0, -0x1(r3)
    b lbl_80199C18
lbl_80199C10:
    li r0, 0x50
    stbu r0, -0x1(r3)
lbl_80199C18:
    lwz r0, 0xc(r30)
    addi r8, r1, 0x8
    slwi r4, r0, 2
    addi r9, r4, 0xb
    mtctr r0
    cmpwi r0, 0x1
    blt lbl_80199CCC
lbl_80199C34:
    cmpwi r9, 0x40
    bge lbl_80199CBC
    srawi r4, r9, 3
    subi r0, r9, 0x4
    add r7, r8, r4
    clrlwi r6, r9, 29
    clrrwi r4, r9, 3
    clrrwi r0, r0, 3
    lbz r5, 0x0(r7)
    subfic r6, r6, 0x7
    cmpw r4, r0
    sraw r0, r5, r6
    clrlwi r4, r0, 24
    beq lbl_80199C80
    lbz r0, -0x1(r7)
    slwi r0, r0, 8
    sraw r0, r0, r6
    or r0, r4, r0
    clrlwi r4, r0, 24
lbl_80199C80:
    clrlwi r4, r4, 28
    cmplwi r4, 0xa
    bge lbl_80199C98
    addi r0, r4, 0x30
    clrlwi r4, r0, 24
    b lbl_80199CC0
lbl_80199C98:
    lbz r0, 0x5(r30)
    cmplwi r0, 0x61
    bne lbl_80199CB0
    addi r0, r4, 0x57
    clrlwi r4, r0, 24
    b lbl_80199CC0
lbl_80199CB0:
    addi r0, r4, 0x37
    clrlwi r4, r0, 24
    b lbl_80199CC0
lbl_80199CBC:
    li r4, 0x30
lbl_80199CC0:
    stbu r4, -0x1(r3)
    subi r9, r9, 0x4
    bdnz lbl_80199C34
lbl_80199CCC:
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    bne lbl_80199CE4
    lbz r0, 0x3(r30)
    cmpwi r0, 0x0
    beq lbl_80199CE8
lbl_80199CE4:
    stbu r31, -0x1(r3)
lbl_80199CE8:
    fabs f1, f31
    lfd f0, lbl_804A11A8
    fcmpu cr0, f0, f1
    beq lbl_80199D04
    li r0, 0x31
    stbu r0, -0x1(r3)
    b lbl_80199D0C
lbl_80199D04:
    li r0, 0x30
    stbu r0, -0x1(r3)
lbl_80199D0C:
    lbz r0, 0x5(r30)
    cmplwi r0, 0x61
    bne lbl_80199D24
    li r0, 0x78
    stbu r0, -0x1(r3)
    b lbl_80199D2C
lbl_80199D24:
    li r0, 0x58
    stbu r0, -0x1(r3)
lbl_80199D2C:
    li r0, 0x30
    stbu r0, -0x1(r3)
    lbz r0, 0x38(r1)
    extsb. r0, r0
    beq lbl_80199D4C
    li r0, 0x2d
    stbu r0, -0x1(r3)
    b lbl_80199D74
lbl_80199D4C:
    lbz r0, 0x1(r30)
    cmplwi r0, 0x1
    bne lbl_80199D64
    li r0, 0x2b
    stbu r0, -0x1(r3)
    b lbl_80199D74
lbl_80199D64:
    cmplwi r0, 0x2
    bne lbl_80199D74
    li r0, 0x20
    stbu r0, -0x1(r3)
lbl_80199D74:
    lwz r0, 0x94(r1)
    opword 0xE3E10088
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// fn_80199D9C
// ----------------------------------------------------------------------------
asm void fn_80199D9C() {
    nofralloc
    cmpwi r4, 0x0
    bge lbl_80199DC0
lbl_80199DA4:
    li r5, 0x0
    li r4, 0x1
    li r0, 0x30
    sth r5, 0x2(r3)
    stb r4, 0x4(r3)
    stb r0, 0x5(r3)
    blr
lbl_80199DC0:
    lbz r7, 0x4(r3)
    cmpw r4, r7
    bgelr
    add r6, r3, r4
    lbz r5, 0x5(r6)
    addi r8, r6, 0x5
    subi r0, r5, 0x30
    extsb r6, r0
    cmpwi r6, 0x5
    bne lbl_80199E24
    add r5, r3, r7
    addi r5, r5, 0x5
lbl_80199DF0:
    subi r5, r5, 0x1
    cmplw r5, r8
    ble lbl_80199E08
    lbz r0, 0x0(r5)
    cmpwi r0, 0x30
    beq lbl_80199DF0
lbl_80199E08:
    cmplw r5, r8
    bne lbl_80199E1C
    lbz r0, -0x1(r8)
    clrlwi r5, r0, 31
    b lbl_80199E38
lbl_80199E1C:
    li r5, 0x1
    b lbl_80199E38
lbl_80199E24:
    xori r0, r6, 0x5
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r5, r0, 31
lbl_80199E38:
    mtctr r4
    cmpwi r4, 0x0
    beq lbl_80199E8C
lbl_80199E44:
    lbzu r0, -0x1(r8)
    add r5, r0, r5
    subi r0, r5, 0x30
    extsb r6, r0
    xori r0, r6, 0x9
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi. r5, r0, 31
    bne lbl_80199E74
    cmpwi r6, 0x0
    bne lbl_80199E7C
lbl_80199E74:
    subi r4, r4, 0x1
    b lbl_80199E88
lbl_80199E7C:
    addi r0, r6, 0x30
    stb r0, 0x0(r8)
    b lbl_80199E8C
lbl_80199E88:
    bdnz lbl_80199E44
lbl_80199E8C:
    cmpwi r5, 0x0
    beq lbl_80199EB4
    lha r5, 0x2(r3)
    li r4, 0x1
    li r0, 0x31
    stb r4, 0x4(r3)
    addi r4, r5, 0x1
    sth r4, 0x2(r3)
    stb r0, 0x5(r3)
    blr
lbl_80199EB4:
    cmpwi r4, 0x0
    beq lbl_80199DA4
    stb r4, 0x4(r3)
    blr
}

// ----------------------------------------------------------------------------
// float2str
// ----------------------------------------------------------------------------
asm void float2str() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r5, lbl_8035FA28@ha
    stw r0, 0x54(r1)
    stfd f31, 0x48(r1)
    fmr f31, f1
    stw r31, 0x44(r1)
    stw r30, 0x40(r1)
    stw r29, 0x3c(r1)
    mr r29, r4
    stw r28, 0x38(r1)
    mr r28, r3
    lwz r0, 0xc(r4)
    lwz r5, lbl_8035FA28@l(r5)
    cmpwi r0, 0x1fd
    lbz r30, 0x0(r5)
    ble lbl_80199F10
    li r3, 0x0
    b lbl_8019A638
lbl_80199F10:
    li r3, 0x0
    li r0, 0x20
    stb r3, 0x8(r1)
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    sth r0, 0xa(r1)
    bl fn_801972E0
    lbz r0, 0x10(r1)
    addi r5, r1, 0x11
    add r5, r5, r0
    b lbl_80199F54
lbl_80199F3C:
    lbz r4, 0x10(r1)
    lha r3, 0xe(r1)
    subi r0, r4, 0x1
    stb r0, 0x10(r1)
    addi r0, r3, 0x1
    sth r0, 0xe(r1)
lbl_80199F54:
    lbz r0, 0x10(r1)
    cmplwi r0, 0x1
    ble lbl_80199F6C
    lbzu r0, -0x1(r5)
    cmpwi r0, 0x30
    beq lbl_80199F3C
lbl_80199F6C:
    lbz r0, 0x11(r1)
    cmpwi r0, 0x30
    beq lbl_80199F8C
    cmpwi r0, 0x49
    beq lbl_80199F98
    cmpwi r0, 0x4e
    beq lbl_8019A09C
    b lbl_8019A1A4
lbl_80199F8C:
    li r0, 0x0
    sth r0, 0xe(r1)
    b lbl_8019A1A4
lbl_80199F98:
    lfd f0, lbl_804A11A8
    fcmpo cr0, f31, f0
    bge lbl_8019A01C
    lbz r0, 0x5(r29)
    subi r31, r28, 0x5
    li r3, 0x1
    cmplwi r0, 0xff
    bgt lbl_80199FBC
    li r3, 0x0
lbl_80199FBC:
    cmpwi r3, 0x0
    beq lbl_80199FCC
    li r0, 0x0
    b lbl_80199FE8
lbl_80199FCC:
    lis r3, lbl_8035FBD8@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8035FBD8@l
    lwz r3, 0x38(r3)
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 22, 22
lbl_80199FE8:
    cmpwi r0, 0x0
    beq lbl_8019A004
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r31
    addi r4, r4, at_stringBase0_8033B9A0@l
    bl strcpy
    b lbl_8019A094
lbl_8019A004:
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r31
    addi r4, r4, at_stringBase0_8033B9A0@l
    addi r4, r4, 0x5
    bl strcpy
    b lbl_8019A094
lbl_8019A01C:
    lbz r0, 0x5(r29)
    subi r31, r28, 0x4
    li r3, 0x1
    cmplwi r0, 0xff
    bgt lbl_8019A034
    li r3, 0x0
lbl_8019A034:
    cmpwi r3, 0x0
    beq lbl_8019A044
    li r0, 0x0
    b lbl_8019A060
lbl_8019A044:
    lis r3, lbl_8035FBD8@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8035FBD8@l
    lwz r3, 0x38(r3)
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 22, 22
lbl_8019A060:
    cmpwi r0, 0x0
    beq lbl_8019A080
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r31
    addi r4, r4, at_stringBase0_8033B9A0@l
    addi r4, r4, 0xa
    bl strcpy
    b lbl_8019A094
lbl_8019A080:
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r31
    addi r4, r4, at_stringBase0_8033B9A0@l
    addi r4, r4, 0xe
    bl strcpy
lbl_8019A094:
    mr r3, r31
    b lbl_8019A638
lbl_8019A09C:
    lbz r0, 0xc(r1)
    extsb. r0, r0
    beq lbl_8019A124
    lbz r0, 0x5(r29)
    subi r31, r28, 0x5
    li r3, 0x1
    cmplwi r0, 0xff
    bgt lbl_8019A0C0
    li r3, 0x0
lbl_8019A0C0:
    cmpwi r3, 0x0
    beq lbl_8019A0D0
    li r0, 0x0
    b lbl_8019A0EC
lbl_8019A0D0:
    lis r3, lbl_8035FBD8@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8035FBD8@l
    lwz r3, 0x38(r3)
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 22, 22
lbl_8019A0EC:
    cmpwi r0, 0x0
    beq lbl_8019A10C
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r31
    addi r4, r4, at_stringBase0_8033B9A0@l
    addi r4, r4, 0x12
    bl strcpy
    b lbl_8019A19C
lbl_8019A10C:
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r31
    addi r4, r4, at_stringBase0_8033B9A0@l
    addi r4, r4, 0x17
    bl strcpy
    b lbl_8019A19C
lbl_8019A124:
    lbz r0, 0x5(r29)
    subi r31, r28, 0x4
    li r3, 0x1
    cmplwi r0, 0xff
    bgt lbl_8019A13C
    li r3, 0x0
lbl_8019A13C:
    cmpwi r3, 0x0
    beq lbl_8019A14C
    li r0, 0x0
    b lbl_8019A168
lbl_8019A14C:
    lis r3, lbl_8035FBD8@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_8035FBD8@l
    lwz r3, 0x38(r3)
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 22, 22
lbl_8019A168:
    cmpwi r0, 0x0
    beq lbl_8019A188
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r31
    addi r4, r4, at_stringBase0_8033B9A0@l
    addi r4, r4, 0x1c
    bl strcpy
    b lbl_8019A19C
lbl_8019A188:
    lis r4, at_stringBase0_8033B9A0@ha
    mr r3, r31
    addi r4, r4, at_stringBase0_8033B9A0@l
    addi r4, r4, 0x20
    bl strcpy
lbl_8019A19C:
    mr r3, r31
    b lbl_8019A638
lbl_8019A1A4:
    lha r4, 0xe(r1)
    li r0, 0x0
    lbz r3, 0x10(r1)
    subi r31, r28, 0x1
    add r3, r3, r4
    subi r3, r3, 0x1
    sth r3, 0xe(r1)
    stb r0, -0x1(r28)
    lbz r0, 0x5(r29)
    cmpwi r0, 0x67
    beq lbl_8019A1FC
    cmpwi r0, 0x47
    beq lbl_8019A1FC
    cmpwi r0, 0x65
    beq lbl_8019A2B4
    cmpwi r0, 0x45
    beq lbl_8019A2B4
    cmpwi r0, 0x66
    beq lbl_8019A418
    cmpwi r0, 0x46
    beq lbl_8019A418
    b lbl_8019A634
lbl_8019A1FC:
    lwz r4, 0xc(r29)
    lbz r0, 0x10(r1)
    cmpw r0, r4
    ble lbl_8019A214
    addi r3, r1, 0xc
    bl fn_80199D9C
lbl_8019A214:
    lha r4, 0xe(r1)
    cmpwi r4, -0x4
    blt lbl_8019A22C
    lwz r3, 0xc(r29)
    cmpw r4, r3
    blt lbl_8019A278
lbl_8019A22C:
    lbz r0, 0x3(r29)
    cmpwi r0, 0x0
    beq lbl_8019A248
    lwz r3, 0xc(r29)
    subi r0, r3, 0x1
    stw r0, 0xc(r29)
    b lbl_8019A254
lbl_8019A248:
    lbz r3, 0x10(r1)
    subi r0, r3, 0x1
    stw r0, 0xc(r29)
lbl_8019A254:
    lbz r0, 0x5(r29)
    cmplwi r0, 0x67
    bne lbl_8019A26C
    li r0, 0x65
    stb r0, 0x5(r29)
    b lbl_8019A2B4
lbl_8019A26C:
    li r0, 0x45
    stb r0, 0x5(r29)
    b lbl_8019A2B4
lbl_8019A278:
    lbz r0, 0x3(r29)
    cmpwi r0, 0x0
    beq lbl_8019A294
    addi r0, r4, 0x1
    subf r0, r0, r3
    stw r0, 0xc(r29)
    b lbl_8019A418
lbl_8019A294:
    lbz r0, 0x10(r1)
    addi r3, r4, 0x1
    subf. r0, r3, r0
    stw r0, 0xc(r29)
    bge lbl_8019A418
    li r0, 0x0
    stw r0, 0xc(r29)
    b lbl_8019A418
lbl_8019A2B4:
    lwz r3, 0xc(r29)
    lbz r0, 0x10(r1)
    addi r4, r3, 0x1
    cmpw r0, r4
    ble lbl_8019A2D0
    addi r3, r1, 0xc
    bl fn_80199D9C
lbl_8019A2D0:
    lha r6, 0xe(r1)
    li r8, 0x2b
    cmpwi r6, 0x0
    bge lbl_8019A2E8
    neg r6, r6
    li r8, 0x2d
lbl_8019A2E8:
    lis r3, 0x6666
    li r7, 0x0
    addi r5, r3, 0x6667
    b lbl_8019A32C
lbl_8019A2F8:
    mulhw r0, r5, r6
    addi r7, r7, 0x1
    srawi r3, r0, 2
    srwi r4, r3, 31
    srawi r0, r0, 2
    add r3, r3, r4
    mulli r4, r3, 0xa
    srwi r3, r0, 31
    subf r4, r4, r6
    add r6, r0, r3
    addi r0, r4, 0x30
    stb r0, -0x1(r31)
    subi r31, r31, 0x1
lbl_8019A32C:
    cmpwi r6, 0x0
    bne lbl_8019A2F8
    cmpwi r7, 0x2
    blt lbl_8019A2F8
    stb r8, -0x1(r31)
    lbz r0, 0x5(r29)
    stbu r0, -0x2(r31)
    lwz r3, 0xc(r29)
    subf r0, r31, r28
    add r0, r3, r0
    cmpwi r0, 0x1fd
    ble lbl_8019A364
    li r3, 0x0
    b lbl_8019A638
lbl_8019A364:
    lbz r4, 0x10(r1)
    addi r0, r3, 0x1
    cmpw r4, r0
    bge lbl_8019A390
    addi r3, r3, 0x2
    li r0, 0x30
    subf r3, r4, r3
    b lbl_8019A388
lbl_8019A384:
    stbu r0, -0x1(r31)
lbl_8019A388:
    subic. r3, r3, 0x1
    bne lbl_8019A384
lbl_8019A390:
    lbz r3, 0x10(r1)
    addi r4, r1, 0x11
    add r4, r4, r3
    b lbl_8019A3A8
lbl_8019A3A0:
    lbzu r0, -0x1(r4)
    stbu r0, -0x1(r31)
lbl_8019A3A8:
    subic. r3, r3, 0x1
    bne lbl_8019A3A0
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_8019A3C8
    lbz r0, 0x3(r29)
    cmpwi r0, 0x0
    beq lbl_8019A3CC
lbl_8019A3C8:
    stbu r30, -0x1(r31)
lbl_8019A3CC:
    lbz r0, 0x11(r1)
    stbu r0, -0x1(r31)
    lbz r0, 0xc(r1)
    extsb. r0, r0
    beq lbl_8019A3EC
    li r0, 0x2d
    stbu r0, -0x1(r31)
    b lbl_8019A634
lbl_8019A3EC:
    lbz r0, 0x1(r29)
    cmplwi r0, 0x1
    bne lbl_8019A404
    li r0, 0x2b
    stbu r0, -0x1(r31)
    b lbl_8019A634
lbl_8019A404:
    cmplwi r0, 0x2
    bne lbl_8019A634
    li r0, 0x20
    stbu r0, -0x1(r31)
    b lbl_8019A634
lbl_8019A418:
    lbz r4, 0x10(r1)
    lha r5, 0xe(r1)
    subf r3, r5, r4
    subic. r8, r3, 0x1
    bge lbl_8019A430
    li r8, 0x0
lbl_8019A430:
    lwz r0, 0xc(r29)
    cmpw r8, r0
    ble lbl_8019A464
    subf r0, r0, r8
    addi r3, r1, 0xc
    subf r4, r0, r4
    bl fn_80199D9C
    lbz r4, 0x10(r1)
    lha r5, 0xe(r1)
    subf r3, r5, r4
    subic. r8, r3, 0x1
    bge lbl_8019A464
    li r8, 0x0
lbl_8019A464:
    addic. r7, r5, 0x1
    bge lbl_8019A470
    li r7, 0x0
lbl_8019A470:
    add r0, r7, r8
    cmpwi r0, 0x1fd
    ble lbl_8019A484
    li r3, 0x0
    b lbl_8019A638
lbl_8019A484:
    addi r6, r1, 0x11
    li r5, 0x0
    add r6, r6, r4
    li r3, 0x30
    b lbl_8019A4A0
lbl_8019A498:
    stbu r3, -0x1(r31)
    addi r5, r5, 0x1
lbl_8019A4A0:
    lwz r0, 0xc(r29)
    subf r0, r8, r0
    cmpw r5, r0
    blt lbl_8019A498
    li r3, 0x0
    b lbl_8019A4C4
lbl_8019A4B8:
    lbzu r0, -0x1(r6)
    addi r3, r3, 0x1
    stbu r0, -0x1(r31)
lbl_8019A4C4:
    cmpw r3, r8
    bge lbl_8019A4D8
    lbz r0, 0x10(r1)
    cmpw r3, r0
    blt lbl_8019A4B8
lbl_8019A4D8:
    cmpw r3, r8
    subf r3, r3, r8
    li r4, 0x30
    bge lbl_8019A52C
    srwi. r0, r3, 3
    mtctr r0
    beq lbl_8019A520
lbl_8019A4F4:
    stb r4, -0x1(r31)
    stb r4, -0x2(r31)
    stb r4, -0x3(r31)
    stb r4, -0x4(r31)
    stb r4, -0x5(r31)
    stb r4, -0x6(r31)
    stb r4, -0x7(r31)
    stbu r4, -0x8(r31)
    bdnz lbl_8019A4F4
    andi. r3, r3, 0x7
    beq lbl_8019A52C
lbl_8019A520:
    mtctr r3
lbl_8019A524:
    stbu r4, -0x1(r31)
    bdnz lbl_8019A524
lbl_8019A52C:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_8019A544
    lbz r0, 0x3(r29)
    cmpwi r0, 0x0
    beq lbl_8019A548
lbl_8019A544:
    stbu r30, -0x1(r31)
lbl_8019A548:
    cmpwi r7, 0x0
    beq lbl_8019A5EC
    li r4, 0x0
    li r3, 0x30
    b lbl_8019A564
lbl_8019A55C:
    stbu r3, -0x1(r31)
    addi r4, r4, 0x1
lbl_8019A564:
    lbz r0, 0x10(r1)
    subf r0, r0, r7
    cmpw r4, r0
    blt lbl_8019A55C
    cmpw r4, r7
    subf r3, r4, r7
    bge lbl_8019A5F4
    srwi. r0, r3, 3
    mtctr r0
    beq lbl_8019A5D8
lbl_8019A58C:
    lbz r0, -0x1(r6)
    stb r0, -0x1(r31)
    lbz r0, -0x2(r6)
    stb r0, -0x2(r31)
    lbz r0, -0x3(r6)
    stb r0, -0x3(r31)
    lbz r0, -0x4(r6)
    stb r0, -0x4(r31)
    lbz r0, -0x5(r6)
    stb r0, -0x5(r31)
    lbz r0, -0x6(r6)
    stb r0, -0x6(r31)
    lbz r0, -0x7(r6)
    stb r0, -0x7(r31)
    lbzu r0, -0x8(r6)
    stbu r0, -0x8(r31)
    bdnz lbl_8019A58C
    andi. r3, r3, 0x7
    beq lbl_8019A5F4
lbl_8019A5D8:
    mtctr r3
lbl_8019A5DC:
    lbzu r0, -0x1(r6)
    stbu r0, -0x1(r31)
    bdnz lbl_8019A5DC
    b lbl_8019A5F4
lbl_8019A5EC:
    li r0, 0x30
    stbu r0, -0x1(r31)
lbl_8019A5F4:
    lbz r0, 0xc(r1)
    extsb. r0, r0
    beq lbl_8019A60C
    li r0, 0x2d
    stbu r0, -0x1(r31)
    b lbl_8019A634
lbl_8019A60C:
    lbz r0, 0x1(r29)
    cmplwi r0, 0x1
    bne lbl_8019A624
    li r0, 0x2b
    stbu r0, -0x1(r31)
    b lbl_8019A634
lbl_8019A624:
    cmplwi r0, 0x2
    bne lbl_8019A634
    li r0, 0x20
    stbu r0, -0x1(r31)
lbl_8019A634:
    mr r3, r31
lbl_8019A638:
    lwz r0, 0x54(r1)
    lfd f31, 0x48(r1)
    lwz r31, 0x44(r1)
    lwz r30, 0x40(r1)
    lwz r29, 0x3c(r1)
    lwz r28, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

// ----------------------------------------------------------------------------
// __pformatter_8019A65C
// ----------------------------------------------------------------------------
asm void __pformatter_8019A65C() {
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    stmw r15, 0x28c(r1)
    li r24, 0x20
    lis r22, at_stringBase0_8033B9A0@ha
    mr r25, r3
    mr r26, r4
    mr r15, r5
    mr r27, r6
    mr r28, r7
    addi r22, r22, at_stringBase0_8033B9A0@l
    addi r21, r1, 0x27f
    li r17, 0x0
    lis r20, at_2934_8035FD00@ha
    li r23, 0x25
    stb r24, 0x9(r1)
    b lbl_8019AEE4
lbl_8019A6A4:
    mr r3, r15
    li r4, 0x25
    bl strchr
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_8019A6F8
    mr r3, r15
    bl strlen
    cmpwi r3, 0x0
    mr r5, r3
    add r17, r17, r3
    beq lbl_8019AEF0
    mr r12, r25
    mr r3, r26
    mr r4, r15
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019AEF0
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019A6F8:
    subf. r5, r15, r3
    add r17, r17, r5
    beq lbl_8019A728
    mr r12, r25
    mr r3, r26
    mr r4, r15
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019A728
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019A728:
    mr r3, r16
    mr r4, r27
    addi r5, r1, 0x70
    bl parse_format_80198F20
    lbz r4, 0x75(r1)
    mr r15, r3
    subi r0, r4, 0x25
    cmplwi r0, 0x53
    bgt lbl_8019AD04
    addi r3, r20, at_2934_8035FD00@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lbz r0, 0x74(r1)
    cmplwi r0, 0x3
    bne lbl_8019A780
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl_8019A808
lbl_8019A780:
    cmplwi r0, 0x4
    bne lbl_8019A7A0
    mr r3, r27
    li r4, 0x2
    bl __va_arg
    lwz r30, 0x0(r3)
    lwz r29, 0x4(r3)
    b lbl_8019A808
lbl_8019A7A0:
    cmplwi r0, 0x6
    bne lbl_8019A7C0
    mr r3, r27
    li r4, 0x2
    bl __va_arg
    lwz r30, 0x0(r3)
    lwz r29, 0x4(r3)
    b lbl_8019A808
lbl_8019A7C0:
    cmplwi r0, 0x7
    bne lbl_8019A7DC
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl_8019A808
lbl_8019A7DC:
    cmplwi r0, 0x8
    bne lbl_8019A7F8
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl_8019A808
lbl_8019A7F8:
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
lbl_8019A808:
    lbz r0, 0x74(r1)
    cmplwi r0, 0x2
    bne lbl_8019A818
    extsh r31, r31
lbl_8019A818:
    cmplwi r0, 0x1
    bne lbl_8019A824
    extsb r31, r31
lbl_8019A824:
    cmplwi r0, 0x4
    beq lbl_8019A834
    cmplwi r0, 0x6
    bne lbl_8019A878
lbl_8019A834:
    lwz r9, 0x70(r1)
    mr r4, r29
    lwz r8, 0x74(r1)
    mr r3, r30
    lwz r7, 0x78(r1)
    addi r5, r1, 0x280
    lwz r0, 0x7c(r1)
    addi r6, r1, 0x60
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r7, 0x68(r1)
    stw r0, 0x6c(r1)
    bl longlong2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_8019AD04
    b lbl_8019A8B4
lbl_8019A878:
    lwz r8, 0x70(r1)
    mr r3, r31
    lwz r7, 0x74(r1)
    addi r4, r1, 0x280
    lwz r6, 0x78(r1)
    addi r5, r1, 0x50
    lwz r0, 0x7c(r1)
    stw r8, 0x50(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r0, 0x5c(r1)
    bl long2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_8019AD04
lbl_8019A8B4:
    subf r19, r18, r21
    b lbl_8019AD48
    lbz r0, 0x74(r1)
    cmplwi r0, 0x3
    bne lbl_8019A8DC
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl_8019A964
lbl_8019A8DC:
    cmplwi r0, 0x4
    bne lbl_8019A8FC
    mr r3, r27
    li r4, 0x2
    bl __va_arg
    lwz r30, 0x0(r3)
    lwz r29, 0x4(r3)
    b lbl_8019A964
lbl_8019A8FC:
    cmplwi r0, 0x6
    bne lbl_8019A91C
    mr r3, r27
    li r4, 0x2
    bl __va_arg
    lwz r30, 0x0(r3)
    lwz r29, 0x4(r3)
    b lbl_8019A964
lbl_8019A91C:
    cmplwi r0, 0x7
    bne lbl_8019A938
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl_8019A964
lbl_8019A938:
    cmplwi r0, 0x8
    bne lbl_8019A954
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl_8019A964
lbl_8019A954:
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
lbl_8019A964:
    lbz r0, 0x74(r1)
    cmplwi r0, 0x2
    bne lbl_8019A974
    clrlwi r31, r31, 16
lbl_8019A974:
    cmplwi r0, 0x1
    bne lbl_8019A980
    clrlwi r31, r31, 24
lbl_8019A980:
    cmplwi r0, 0x4
    beq lbl_8019A990
    cmplwi r0, 0x6
    bne lbl_8019A9D4
lbl_8019A990:
    lwz r9, 0x70(r1)
    mr r4, r29
    lwz r8, 0x74(r1)
    mr r3, r30
    lwz r7, 0x78(r1)
    addi r5, r1, 0x280
    lwz r0, 0x7c(r1)
    addi r6, r1, 0x40
    stw r9, 0x40(r1)
    stw r8, 0x44(r1)
    stw r7, 0x48(r1)
    stw r0, 0x4c(r1)
    bl longlong2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_8019AD04
    b lbl_8019AA10
lbl_8019A9D4:
    lwz r8, 0x70(r1)
    mr r3, r31
    lwz r7, 0x74(r1)
    addi r4, r1, 0x280
    lwz r6, 0x78(r1)
    addi r5, r1, 0x30
    lwz r0, 0x7c(r1)
    stw r8, 0x30(r1)
    stw r7, 0x34(r1)
    stw r6, 0x38(r1)
    stw r0, 0x3c(r1)
    bl long2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_8019AD04
lbl_8019AA10:
    subf r19, r18, r21
    b lbl_8019AD48
    lbz r0, 0x74(r1)
    cmplwi r0, 0x9
    bne lbl_8019AA38
    mr r3, r27
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
    b lbl_8019AA48
lbl_8019AA38:
    mr r3, r27
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
lbl_8019AA48:
    lwz r7, 0x70(r1)
    addi r3, r1, 0x280
    lwz r6, 0x74(r1)
    addi r4, r1, 0x20
    lwz r5, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r7, 0x20(r1)
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r0, 0x2c(r1)
    bl float2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_8019AD04
    subf r19, r3, r21
    b lbl_8019AD48
    lbz r0, 0x74(r1)
    cmplwi r0, 0x9
    bne lbl_8019AAA8
    mr r3, r27
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
    b lbl_8019AAB8
lbl_8019AAA8:
    mr r3, r27
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
lbl_8019AAB8:
    lwz r7, 0x70(r1)
    addi r3, r1, 0x280
    lwz r6, 0x74(r1)
    addi r4, r1, 0x10
    lwz r5, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r7, 0x10(r1)
    stw r6, 0x14(r1)
    stw r5, 0x18(r1)
    stw r0, 0x1c(r1)
    bl double2hex
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_8019AD04
    subf r19, r3, r21
    b lbl_8019AD48
    lbz r0, 0x74(r1)
    cmplwi r0, 0x5
    bne lbl_8019AB64
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    cmpwi r28, 0x0
    lwz r4, 0x0(r3)
    beq lbl_8019AB3C
    cmpwi r4, 0x0
    bne lbl_8019AB3C
    li r3, 0x0
    li r4, 0x0
    li r5, -0x1
    bl __msl_runtime_constraint_violation_s
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AB3C:
    cmpwi r4, 0x0
    bne lbl_8019AB48
    la r4, at_wstringBase0_8049C400
lbl_8019AB48:
    addi r3, r1, 0x80
    li r5, 0x200
    bl wcstombs
    cmpwi r3, 0x0
    blt lbl_8019AD04
    addi r18, r1, 0x80
    b lbl_8019AB74
lbl_8019AB64:
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r18, 0x0(r3)
lbl_8019AB74:
    cmpwi r28, 0x0
    beq lbl_8019AB9C
    cmpwi r18, 0x0
    bne lbl_8019AB9C
    li r3, 0x0
    li r4, 0x0
    li r5, -0x1
    bl __msl_runtime_constraint_violation_s
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AB9C:
    cmpwi r18, 0x0
    bne lbl_8019ABA8
    addi r18, r22, 0x24
lbl_8019ABA8:
    lbz r0, 0x73(r1)
    cmpwi r0, 0x0
    beq lbl_8019ABDC
    lbz r0, 0x72(r1)
    lbz r19, 0x0(r18)
    addi r18, r18, 0x1
    cmpwi r0, 0x0
    beq lbl_8019AD48
    lwz r0, 0x7c(r1)
    cmpw r19, r0
    ble lbl_8019AD48
    mr r19, r0
    b lbl_8019AD48
lbl_8019ABDC:
    lbz r0, 0x72(r1)
    cmpwi r0, 0x0
    beq lbl_8019AC0C
    lwz r19, 0x7c(r1)
    mr r3, r18
    li r4, 0x0
    mr r5, r19
    bl memchr
    cmpwi r3, 0x0
    beq lbl_8019AD48
    subf r19, r18, r3
    b lbl_8019AD48
lbl_8019AC0C:
    mr r3, r18
    bl strlen
    mr r19, r3
    b lbl_8019AD48
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    cmpwi r28, 0x0
    lwz r3, 0x0(r3)
    beq lbl_8019AC4C
    li r3, 0x0
    li r4, 0x0
    li r5, -0x1
    bl __msl_runtime_constraint_violation_s
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AC4C:
    lbz r0, 0x74(r1)
    cmpwi r0, 0x0
    beq lbl_8019AC8C
    cmpwi r0, 0x2
    beq lbl_8019AC94
    cmpwi r0, 0x3
    beq lbl_8019AC9C
    cmpwi r0, 0x6
    beq lbl_8019ACA4
    cmpwi r0, 0x7
    beq lbl_8019ACB4
    cmpwi r0, 0x8
    beq lbl_8019ACBC
    cmpwi r0, 0x4
    beq lbl_8019ACC4
    b lbl_8019AEE4
lbl_8019AC8C:
    stw r17, 0x0(r3)
    b lbl_8019AEE4
lbl_8019AC94:
    sth r17, 0x0(r3)
    b lbl_8019AEE4
lbl_8019AC9C:
    stw r17, 0x0(r3)
    b lbl_8019AEE4
lbl_8019ACA4:
    stw r17, 0x4(r3)
    srawi r0, r17, 31
    stw r0, 0x0(r3)
    b lbl_8019AEE4
lbl_8019ACB4:
    stw r17, 0x0(r3)
    b lbl_8019AEE4
lbl_8019ACBC:
    stw r17, 0x0(r3)
    b lbl_8019AEE4
lbl_8019ACC4:
    stw r17, 0x4(r3)
    srawi r0, r17, 31
    stw r0, 0x0(r3)
    b lbl_8019AEE4
    mr r3, r27
    addi r18, r1, 0x80
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    li r19, 0x1
    stb r0, 0x80(r1)
    b lbl_8019AD48
    stb r23, 0x80(r1)
    addi r18, r1, 0x80
    li r19, 0x1
    b lbl_8019AD48
lbl_8019AD04:
    mr r3, r16
    bl strlen
    cmpwi r3, 0x0
    mr r5, r3
    add r17, r17, r3
    beq lbl_8019AD40
    mr r12, r25
    mr r3, r26
    mr r4, r16
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019AD40
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AD40:
    mr r3, r17
    b lbl_8019AEF4
lbl_8019AD48:
    lbz r0, 0x70(r1)
    mr r16, r19
    cmpwi r0, 0x0
    beq lbl_8019AE64
    cmplwi r0, 0x2
    li r3, 0x20
    bne lbl_8019AD68
    li r3, 0x30
lbl_8019AD68:
    stb r3, 0x9(r1)
    lbz r0, 0x0(r18)
    extsb r0, r0
    cmpwi r0, 0x2b
    beq lbl_8019AD8C
    cmpwi r0, 0x2d
    beq lbl_8019AD8C
    cmpwi r0, 0x20
    bne lbl_8019ADC8
lbl_8019AD8C:
    extsb r0, r3
    cmpwi r0, 0x30
    bne lbl_8019ADC8
    mr r12, r25
    mr r3, r26
    mr r4, r18
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019ADC0
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019ADC0:
    addi r18, r18, 0x1
    subi r19, r19, 0x1
lbl_8019ADC8:
    lbz r0, 0x70(r1)
    cmplwi r0, 0x2
    bne lbl_8019AE58
    lbz r0, 0x75(r1)
    cmplwi r0, 0x61
    beq lbl_8019ADE8
    cmplwi r0, 0x41
    bne lbl_8019AE58
lbl_8019ADE8:
    cmpwi r19, 0x2
    bge lbl_8019ADF8
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019ADF8:
    mr r12, r25
    mr r3, r26
    mr r4, r18
    li r5, 0x2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019AE20
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AE20:
    subi r19, r19, 0x2
    addi r18, r18, 0x2
    b lbl_8019AE58
lbl_8019AE2C:
    mr r12, r25
    mr r3, r26
    addi r4, r1, 0x9
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019AE54
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AE54:
    addi r16, r16, 0x1
lbl_8019AE58:
    lwz r0, 0x78(r1)
    cmpw r16, r0
    blt lbl_8019AE2C
lbl_8019AE64:
    cmpwi r19, 0x0
    beq lbl_8019AE94
    mr r12, r25
    mr r3, r26
    mr r4, r18
    mr r5, r19
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019AE94
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AE94:
    lbz r0, 0x70(r1)
    cmpwi r0, 0x0
    bne lbl_8019AEE0
    b lbl_8019AED4
lbl_8019AEA4:
    mr r12, r25
    mr r3, r26
    stb r24, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019AED0
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AED0:
    addi r16, r16, 0x1
lbl_8019AED4:
    lwz r0, 0x78(r1)
    cmpw r16, r0
    blt lbl_8019AEA4
lbl_8019AEE0:
    add r17, r17, r16
lbl_8019AEE4:
    lbz r0, 0x0(r15)
    extsb. r0, r0
    bne lbl_8019A6A4
lbl_8019AEF0:
    mr r3, r17
lbl_8019AEF4:
    lmw r15, 0x28c(r1)
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

// ----------------------------------------------------------------------------
// __FileWrite
// ----------------------------------------------------------------------------
asm void __FileWrite() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x1
    mr r6, r30
    bl __fwrite
    cmplw r31, r3
    bne lbl_8019AF40
    b lbl_8019AF44
lbl_8019AF40:
    li r30, 0x0
lbl_8019AF44:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// __StringWrite
// ----------------------------------------------------------------------------
asm void __StringWrite() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x8(r3)
    lwz r7, 0x4(r3)
    add r0, r6, r5
    cmplw r0, r7
    subf r31, r6, r7
    bgt lbl_8019AF94
    mr r31, r5
lbl_8019AF94:
    lwz r0, 0x0(r3)
    mr r5, r31
    add r3, r0, r6
    bl memcpy
    lwz r0, 0x8(r30)
    li r3, 0x1
    add r0, r0, r31
    stw r0, 0x8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// fn_8019AFCC
// ----------------------------------------------------------------------------
asm void fn_8019AFCC() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    bne cr1, lbl_8019B008
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_8019B008:
    lis r31, __files@ha
    stw r4, 0xc(r1)
    addi r31, r31, __files@l
    li r4, -0x1
    stw r3, 0x8(r1)
    addi r3, r31, 0x50
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    bl fwide
    cmpwi r3, 0x0
    blt lbl_8019B04C
    li r3, -0x1
    b lbl_8019B080
lbl_8019B04C:
    addi r4, r1, 0x88
    addi r0, r1, 0x8
    lis r5, 0x100
    lis r3, __FileWrite@ha
    stw r5, 0x68(r1)
    addi r6, r1, 0x68
    mr r5, r30
    addi r3, r3, __FileWrite@l
    stw r4, 0x6c(r1)
    addi r4, r31, 0x50
    li r7, 0x0
    stw r0, 0x70(r1)
    bl __pformatter_8019A65C
lbl_8019B080:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// ----------------------------------------------------------------------------
// vprintf
// ----------------------------------------------------------------------------
asm void vprintf() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, __files@ha
    addi r31, r31, __files@l
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, -0x1
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r31, 0x50
    bl fwide
    cmpwi r3, 0x0
    blt lbl_8019B0DC
    li r3, -0x1
    b lbl_8019B0F8
lbl_8019B0DC:
    lis r3, __FileWrite@ha
    mr r5, r29
    mr r6, r30
    addi r4, r31, 0x50
    addi r3, r3, __FileWrite@l
    li r7, 0x0
    bl __pformatter_8019A65C
lbl_8019B0F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// ----------------------------------------------------------------------------
// vsnprintf
// ----------------------------------------------------------------------------
asm void vsnprintf() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, __StringWrite@ha
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    stw r3, 0x8(r1)
    addi r3, r7, __StringWrite@l
    li r7, 0x0
    stw r4, 0xc(r1)
    addi r4, r1, 0x8
    stw r31, 0x10(r1)
    bl __pformatter_8019A65C
    cmpwi r29, 0x0
    beq lbl_8019B180
    cmplw r3, r30
    bge lbl_8019B170
    stbx r31, r29, r3
    b lbl_8019B180
lbl_8019B170:
    cmpwi r30, 0x0
    beq lbl_8019B180
    add r4, r29, r30
    stb r31, -0x1(r4)
lbl_8019B180:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8019B19C
// ----------------------------------------------------------------------------
asm void fn_8019B19C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    mr r6, r5
    mr r5, r4
    stw r0, 0x34(r1)
    lis r7, __StringWrite@ha
    addi r4, r1, 0x8
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    li r30, -0x1
    stw r29, 0x24(r1)
    mr r29, r3
    stw r3, 0x8(r1)
    addi r3, r7, __StringWrite@l
    li r7, 0x0
    stw r30, 0xc(r1)
    stw r31, 0x10(r1)
    bl __pformatter_8019A65C
    cmpwi r29, 0x0
    beq lbl_8019B204
    cmplw r3, r30
    bge lbl_8019B200
    stbx r31, r29, r3
    b lbl_8019B204
lbl_8019B200:
    stb r31, -0x2(r29)
lbl_8019B204:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// ----------------------------------------------------------------------------
// fn_8019B220
// ----------------------------------------------------------------------------
asm void fn_8019B220() {
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    mr r29, r4
    stw r28, 0x80(r1)
    mr r28, r3
    bne cr1, lbl_8019B268
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_8019B268:
    addi r12, r1, 0x98
    addi r0, r1, 0x8
    lis r30, 0x300
    stw r7, 0x18(r1)
    li r31, 0x0
    addi r7, r1, 0x74
    stw r6, 0x14(r1)
    mr r6, r7
    lis r11, __StringWrite@ha
    li r7, 0x0
    stw r5, 0x10(r1)
    stw r3, 0x8(r1)
    stw r3, 0x68(r1)
    addi r3, r11, __StringWrite@l
    stw r4, 0xc(r1)
    stw r4, 0x6c(r1)
    addi r4, r1, 0x68
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r30, 0x74(r1)
    stw r12, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r31, 0x70(r1)
    bl __pformatter_8019A65C
    cmpwi r28, 0x0
    beq lbl_8019B2F4
    cmplw r3, r29
    bge lbl_8019B2E4
    stbx r31, r28, r3
    b lbl_8019B2F4
lbl_8019B2E4:
    cmpwi r29, 0x0
    beq lbl_8019B2F4
    add r4, r28, r29
    stb r31, -0x1(r4)
lbl_8019B2F4:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

// ----------------------------------------------------------------------------
// sprintf
// ----------------------------------------------------------------------------
asm void sprintf() {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stmw r27, 0x8c(r1)
    mr r27, r3
    bne cr1, lbl_8019B34C
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_8019B34C:
    addi r12, r1, 0xa8
    addi r0, r1, 0x8
    lis r29, 0x200
    stw r5, 0x10(r1)
    li r30, -0x1
    li r31, 0x0
    stw r7, 0x18(r1)
    addi r28, r1, 0x74
    lis r11, __StringWrite@ha
    mr r5, r4
    stw r4, 0xc(r1)
    addi r4, r1, 0x68
    li r7, 0x0
    stw r6, 0x14(r1)
    mr r6, r28
    stw r3, 0x8(r1)
    stw r3, 0x68(r1)
    addi r3, r11, __StringWrite@l
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r29, 0x74(r1)
    stw r12, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r30, 0x6c(r1)
    stw r31, 0x70(r1)
    bl __pformatter_8019A65C
    cmpwi r27, 0x0
    beq lbl_8019B3D4
    cmplw r3, r30
    bge lbl_8019B3D0
    stbx r31, r27, r3
    b lbl_8019B3D4
lbl_8019B3D0:
    stb r31, -0x2(r27)
lbl_8019B3D4:
    lmw r27, 0x8c(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

// ----------------------------------------------------------------------------
// fn_8019B3E8
// ----------------------------------------------------------------------------
asm void fn_8019B3E8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmplwi r4, 0x2
    stw r0, 0x44(r1)
    stmw r19, 0xc(r1)
    mr r27, r3
    mr r28, r5
    mr r29, r6
    blt lbl_8019B544
    srwi r7, r4, 1
    slwi r0, r5, 1
    addi r31, r7, 0x1
    subi r6, r4, 0x1
    subi r7, r31, 0x1
    mr r30, r4
    mullw r4, r5, r7
    subf r25, r0, r5
    mullw r0, r5, r6
    add r23, r3, r4
    mullw r26, r31, r5
    add r22, r3, r0
lbl_8019B43C:
    cmplwi r31, 0x1
    ble lbl_8019B454
    subf r26, r28, r26
    subf r23, r28, r23
    subi r31, r31, 0x1
    b lbl_8019B490
lbl_8019B454:
    subi r3, r22, 0x1
    subi r4, r23, 0x1
    addi r5, r28, 0x1
    b lbl_8019B478
lbl_8019B464:
    lbz r6, 0x1(r4)
    lbz r0, 0x1(r3)
    stbu r0, 0x1(r4)
    extsb r6, r6
    stbu r6, 0x1(r3)
lbl_8019B478:
    subic. r5, r5, 0x1
    bne lbl_8019B464
    subi r30, r30, 0x1
    cmplwi r30, 0x1
    beq lbl_8019B544
    subf r22, r28, r22
lbl_8019B490:
    add r0, r26, r25
    mr r24, r31
    add r20, r27, r0
    b lbl_8019B534
lbl_8019B4A0:
    slwi r24, r24, 1
    mr r21, r20
    subi r0, r24, 0x1
    mullw r0, r28, r0
    cmplw r24, r30
    add r20, r27, r0
    bge lbl_8019B4E4
    add r19, r20, r28
    mr r12, r29
    mr r3, r20
    mr r4, r19
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_8019B4E4
    mr r20, r19
    addi r24, r24, 0x1
lbl_8019B4E4:
    mr r12, r29
    mr r3, r21
    mr r4, r20
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_8019B43C
    subi r3, r20, 0x1
    subi r4, r21, 0x1
    addi r5, r28, 0x1
    b lbl_8019B52C
lbl_8019B510:
    lbz r6, 0x1(r4)
    lbz r0, 0x1(r3)
    stb r0, 0x1(r4)
    extsb r6, r6
    addi r4, r4, 0x1
    stb r6, 0x1(r3)
    addi r3, r3, 0x1
lbl_8019B52C:
    subic. r5, r5, 0x1
    bne lbl_8019B510
lbl_8019B534:
    slwi r0, r24, 1
    cmplw r0, r30
    ble lbl_8019B4A0
    b lbl_8019B43C
lbl_8019B544:
    lmw r19, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// ----------------------------------------------------------------------------
// fn_8019B558
// ----------------------------------------------------------------------------
asm void fn_8019B558() {
    nofralloc
    lis r3, 0x41c6
    lwz r4, lbl_8049C408
    addi r0, r3, 0x4e6d
    mullw r3, r4, r0
    addi r0, r3, 0x3039
    stw r0, lbl_8049C408
    extrwi r3, r0, 15, 1
    blr
}

// ----------------------------------------------------------------------------
// fn_8019B578
// ----------------------------------------------------------------------------
asm void fn_8019B578() {
    nofralloc
    stw r3, lbl_8049C408
    blr
}

