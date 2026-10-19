#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/strtold.cpp
// Total functions: 2

// Small Data symbols (@sda21)
float lbl_8049D8C8;
float lbl_804A11B8;
float lbl_804A11BC;
float lbl_804A11C0;
float lbl_804A11C8;
float lbl_804A11D0;

// Global data symbols (@ha/@l)
u8 lbl_8033B9F0[];
u8 lbl_8035FA28[];
u8 lbl_8035FBD8[];
u8 lbl_8049C41C[];
u8 lbl_8049C420[];

// Forward declarations
void _restgpr_14();
void _savegpr_14();
void fn_80197480();
void __StringRead();
void fn_8019D03C();
void strtod();
void pow();
void memset();

// ----------------------------------------------------------------------------
// fn_8019D03C
// ----------------------------------------------------------------------------
asm void fn_8019D03C() {
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xf0
    bl _savegpr_14
    lis r8, lbl_8035FA28@ha
    li r31, 0x0
    stw r31, 0x68(r1)
    mr r17, r4
    lwz r8, lbl_8035FA28@l(r8)
    mr r18, r5
    stw r31, 0x6c(r1)
    li r0, 0x0
    mr r12, r17
    mr r19, r7
    stw r3, 0x8(r1)
    mr r3, r18
    li r16, 0x1
    li r29, 0x0
    stw r0, 0x9c(r1)
    li r0, 0x0
    li r14, 0x0
    li r28, 0x0
    stw r0, 0x98(r1)
    li r0, 0x0
    li r27, 0x0
    li r24, 0x0
    stw r31, 0x70(r1)
    li r22, 0x0
    li r30, 0x1
    li r4, 0x0
    stw r31, 0x74(r1)
    li r5, 0x0
    stw r31, 0x78(r1)
    stw r31, 0x7c(r1)
    stw r31, 0x80(r1)
    stw r31, 0x84(r1)
    stw r31, 0x88(r1)
    stw r31, 0x8c(r1)
    sth r31, 0x90(r1)
    lbz r26, 0x0(r8)
    stw r6, 0xc(r1)
    stw r0, 0x94(r1)
    stw r31, 0x0(r7)
    mtctr r12
    bctrl
    lis r8, lbl_8033B9F0@ha
    lwzu r7, lbl_8033B9F0@l(r8)
    lwz r5, lbl_804A11B8
    mr r4, r3
    lwz r6, 0x4(r8)
    lis r15, lbl_8035FBD8@ha
    lbz r3, 0x8(r8)
    addi r15, r15, lbl_8035FBD8@l
    lbz r0, lbl_804A11BC
    stw r7, 0x30(r1)
    stw r6, 0x34(r1)
    stb r3, 0x38(r1)
    stw r5, 0x10(r1)
    stb r0, 0x14(r1)
    b lbl_8019DFE4
lbl_8019D130:
    cmpwi r16, 0x80
    beq lbl_8019D904
    bge lbl_8019D194
    cmpwi r16, 0x8
    beq lbl_8019D6F4
    bge lbl_8019D170
    cmpwi r16, 0x3
    beq lbl_8019DFE4
    bge lbl_8019D164
    cmpwi r16, 0x1
    beq lbl_8019D1E4
    bge lbl_8019D5D4
    b lbl_8019DFE4
lbl_8019D164:
    cmpwi r16, 0x5
    bge lbl_8019DFE4
    b lbl_8019D6C0
lbl_8019D170:
    cmpwi r16, 0x20
    beq lbl_8019D800
    bge lbl_8019D188
    cmpwi r16, 0x10
    beq lbl_8019D7B4
    b lbl_8019DFE4
lbl_8019D188:
    cmpwi r16, 0x40
    beq lbl_8019D8A0
    b lbl_8019DFE4
lbl_8019D194:
    cmpwi r16, 0x2000
    beq lbl_8019D3FC
    bge lbl_8019D1C4
    cmpwi r16, 0x200
    beq lbl_8019D9E4
    bge lbl_8019D1B8
    cmpwi r16, 0x100
    beq lbl_8019D968
    b lbl_8019DFE4
lbl_8019D1B8:
    cmpwi r16, 0x400
    beq lbl_8019DA18
    b lbl_8019DFE4
lbl_8019D1C4:
    lis r3, 0x1
    addi r0, r3, -0x8000
    cmpw r16, r0
    beq lbl_8019DA9C
    bge lbl_8019DFE4
    cmpwi r16, 0x4000
    beq lbl_8019D31C
    b lbl_8019DFE4
lbl_8019D1E4:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019D1F4
    li r0, 0x0
lbl_8019D1F4:
    cmpwi r0, 0x0
    beq lbl_8019D204
    li r0, 0x0
    b lbl_8019D218
lbl_8019D204:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_8019D218:
    cmpwi r0, 0x0
    beq lbl_8019D244
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    mr r4, r3
    addi r29, r29, 0x1
    b lbl_8019DFE4
lbl_8019D244:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019D254
    li r0, 0x0
lbl_8019D254:
    cmpwi r0, 0x0
    beq lbl_8019D264
    mr r0, r4
    b lbl_8019D270
lbl_8019D264:
    lwz r3, 0x38(r15)
    lwz r3, 0xc(r3)
    lbzx r0, r3, r4
lbl_8019D270:
    cmpwi r0, 0x2d
    beq lbl_8019D294
    cmpwi r0, 0x2b
    beq lbl_8019D298
    cmpwi r0, 0x49
    beq lbl_8019D2C4
    cmpwi r0, 0x4e
    beq lbl_8019D2EC
    b lbl_8019D314
lbl_8019D294:
    li r14, 0x1
lbl_8019D298:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    li r0, 0x1
    stw r0, 0x98(r1)
    mr r4, r3
    b lbl_8019DFE4
lbl_8019D2C4:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    li r16, 0x4000
    b lbl_8019DFE4
lbl_8019D2EC:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    li r16, 0x2000
    b lbl_8019DFE4
lbl_8019D314:
    li r16, 0x2
    b lbl_8019DFE4
lbl_8019D31C:
    lwz r5, 0x30(r1)
    addi r16, r1, 0x3d
    lwz r3, 0x34(r1)
    li r20, 0x1
    lbz r0, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r3, 0x40(r1)
    stb r0, 0x44(r1)
    b lbl_8019D368
lbl_8019D340:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r16, r16, 0x1
    addi r20, r20, 0x1
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
lbl_8019D368:
    cmpwi r20, 0x8
    bge lbl_8019D3AC
    cmplwi r4, 0xff
    li r3, 0x1
    bgt lbl_8019D380
    li r3, 0x0
lbl_8019D380:
    lbz r0, 0x0(r16)
    cmpwi r3, 0x0
    extsb r5, r0
    beq lbl_8019D398
    mr r0, r4
    b lbl_8019D3A4
lbl_8019D398:
    lwz r3, 0x38(r15)
    lwz r3, 0xc(r3)
    lbzx r0, r3, r4
lbl_8019D3A4:
    cmpw r5, r0
    beq lbl_8019D340
lbl_8019D3AC:
    cmpwi r20, 0x3
    beq lbl_8019D3BC
    cmpwi r20, 0x8
    bne lbl_8019D3F4
lbl_8019D3BC:
    cmpwi r14, 0x0
    beq lbl_8019D3D4
    lis r3, lbl_8049C41C@ha
    lfs f0, lbl_8049C41C@l(r3)
    fneg f1, f0
    b lbl_8019D3DC
lbl_8019D3D4:
    lis r3, lbl_8049C41C@ha
    lfs f1, lbl_8049C41C@l(r3)
lbl_8019D3DC:
    lwz r0, 0x98(r1)
    lwz r3, 0xc(r1)
    add r0, r0, r29
    add r0, r20, r0
    stw r0, 0x0(r3)
    b lbl_8019E344
lbl_8019D3F4:
    li r16, 0x1000
    b lbl_8019DFE4
lbl_8019D3FC:
    lwz r3, 0x10(r1)
    li r20, 0x0
    lbz r0, 0x14(r1)
    addi r16, r1, 0x21
    stw r3, 0x20(r1)
    li r21, 0x1
    stb r0, 0x24(r1)
    stw r20, 0x48(r1)
    stw r20, 0x4c(r1)
    stw r20, 0x50(r1)
    stw r20, 0x54(r1)
    stw r20, 0x58(r1)
    stw r20, 0x5c(r1)
    stw r20, 0x60(r1)
    stw r20, 0x64(r1)
    b lbl_8019D464
lbl_8019D43C:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r16, r16, 0x1
    addi r21, r21, 0x1
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
lbl_8019D464:
    cmpwi r21, 0x4
    bge lbl_8019D4A8
    cmplwi r4, 0xff
    li r3, 0x1
    bgt lbl_8019D47C
    li r3, 0x0
lbl_8019D47C:
    lbz r0, 0x0(r16)
    cmpwi r3, 0x0
    extsb r5, r0
    beq lbl_8019D494
    mr r0, r4
    b lbl_8019D4A0
lbl_8019D494:
    lwz r3, 0x38(r15)
    lwz r3, 0xc(r3)
    lbzx r0, r3, r4
lbl_8019D4A0:
    cmpw r5, r0
    beq lbl_8019D43C
lbl_8019D4A8:
    subi r0, r21, 0x3
    cmplwi r0, 0x1
    bgt lbl_8019D5CC
    cmpwi r21, 0x4
    bne lbl_8019D58C
    addi r16, r1, 0x48
    b lbl_8019D4F0
lbl_8019D4C4:
    mr r12, r17
    stb r4, 0x0(r16)
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r20, r20, 0x1
    addi r16, r16, 0x1
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
lbl_8019D4F0:
    cmpwi r20, 0x20
    bge lbl_8019D578
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019D508
    li r0, 0x0
lbl_8019D508:
    cmpwi r0, 0x0
    beq lbl_8019D518
    li r0, 0x0
    b lbl_8019D52C
lbl_8019D518:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019D52C:
    cmpwi r0, 0x0
    bne lbl_8019D4C4
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019D544
    li r0, 0x0
lbl_8019D544:
    cmpwi r0, 0x0
    beq lbl_8019D554
    li r0, 0x0
    b lbl_8019D568
lbl_8019D554:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    clrlwi r0, r0, 31
lbl_8019D568:
    cmpwi r0, 0x0
    bne lbl_8019D4C4
    cmpw r4, r26
    beq lbl_8019D4C4
lbl_8019D578:
    cmpwi r4, 0x29
    beq lbl_8019D588
    li r16, 0x1000
    b lbl_8019DFE4
lbl_8019D588:
    addi r20, r20, 0x1
lbl_8019D58C:
    cmpwi r14, 0x0
    addi r3, r1, 0x48
    li r0, 0x0
    stbx r0, r3, r20
    beq lbl_8019D5AC
    bl pow
    fneg f1, f1
    b lbl_8019D5B0
lbl_8019D5AC:
    bl pow
lbl_8019D5B0:
    lwz r0, 0x98(r1)
    add r3, r0, r21
    add r0, r20, r29
    add r0, r3, r0
    lwz r3, 0xc(r1)
    stw r0, 0x0(r3)
    b lbl_8019E344
lbl_8019D5CC:
    li r16, 0x1000
    b lbl_8019DFE4
lbl_8019D5D4:
    cmpw r4, r26
    bne lbl_8019D604
    mr r12, r17
    mr r3, r18
    li r16, 0x10
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019D604:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019D614
    li r0, 0x0
lbl_8019D614:
    cmpwi r0, 0x0
    beq lbl_8019D624
    li r0, 0x0
    b lbl_8019D638
lbl_8019D624:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019D638:
    cmpwi r0, 0x0
    bne lbl_8019D648
    li r16, 0x1000
    b lbl_8019DFE4
lbl_8019D648:
    cmpwi r4, 0x30
    bne lbl_8019D6B8
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    cmplwi r3, 0xff
    mr r4, r3
    li r0, 0x1
    bgt lbl_8019D680
    li r0, 0x0
lbl_8019D680:
    cmpwi r0, 0x0
    beq lbl_8019D68C
    b lbl_8019D698
lbl_8019D68C:
    lwz r5, 0x38(r15)
    lwz r5, 0xc(r5)
    lbzx r3, r5, r3
lbl_8019D698:
    cmpwi r3, 0x58
    bne lbl_8019D6B0
    lis r3, 0x1
    li r31, 0x1
    addi r16, r3, -0x8000
    b lbl_8019DFE4
lbl_8019D6B0:
    li r16, 0x4
    b lbl_8019DFE4
lbl_8019D6B8:
    li r16, 0x8
    b lbl_8019DFE4
lbl_8019D6C0:
    cmpwi r4, 0x30
    bne lbl_8019D6EC
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019D6EC:
    li r16, 0x8
    b lbl_8019DFE4
lbl_8019D6F4:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019D704
    li r0, 0x0
lbl_8019D704:
    cmpwi r0, 0x0
    beq lbl_8019D714
    li r0, 0x0
    b lbl_8019D728
lbl_8019D714:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019D728:
    cmpwi r0, 0x0
    bne lbl_8019D768
    cmpw r4, r26
    bne lbl_8019D760
    mr r12, r17
    mr r3, r18
    li r16, 0x20
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019D760:
    li r16, 0x40
    b lbl_8019DFE4
lbl_8019D768:
    lbz r5, 0x6c(r1)
    cmplwi r5, 0x14
    bge lbl_8019D78C
    addi r0, r1, 0x68
    add r3, r0, r5
    stb r4, 0x5(r3)
    addi r0, r5, 0x1
    stb r0, 0x6c(r1)
    b lbl_8019D790
lbl_8019D78C:
    addi r27, r27, 0x1
lbl_8019D790:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019D7B4:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019D7C4
    li r0, 0x0
lbl_8019D7C4:
    cmpwi r0, 0x0
    beq lbl_8019D7D4
    li r0, 0x0
    b lbl_8019D7E8
lbl_8019D7D4:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019D7E8:
    cmpwi r0, 0x0
    bne lbl_8019D7F8
    li r16, 0x1000
    b lbl_8019DFE4
lbl_8019D7F8:
    li r16, 0x20
    b lbl_8019DFE4
lbl_8019D800:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019D810
    li r0, 0x0
lbl_8019D810:
    cmpwi r0, 0x0
    beq lbl_8019D820
    li r0, 0x0
    b lbl_8019D834
lbl_8019D820:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019D834:
    cmpwi r0, 0x0
    bne lbl_8019D844
    li r16, 0x40
    b lbl_8019DFE4
lbl_8019D844:
    lbz r0, 0x6c(r1)
    cmplwi r0, 0x14
    bge lbl_8019D87C
    cmpwi r4, 0x30
    bne lbl_8019D860
    cmpwi r0, 0x0
    beq lbl_8019D878
lbl_8019D860:
    lbz r5, 0x6c(r1)
    addi r0, r1, 0x68
    add r3, r0, r5
    addi r0, r5, 0x1
    stb r4, 0x5(r3)
    stb r0, 0x6c(r1)
lbl_8019D878:
    subi r27, r27, 0x1
lbl_8019D87C:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019D8A0:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019D8B0
    li r0, 0x0
lbl_8019D8B0:
    cmpwi r0, 0x0
    beq lbl_8019D8C0
    mr r0, r4
    b lbl_8019D8CC
lbl_8019D8C0:
    lwz r3, 0x38(r15)
    lwz r3, 0xc(r3)
    lbzx r0, r3, r4
lbl_8019D8CC:
    cmpwi r0, 0x45
    bne lbl_8019D8FC
    mr r12, r17
    mr r3, r18
    li r16, 0x80
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019D8FC:
    li r16, 0x800
    b lbl_8019DFE4
lbl_8019D904:
    cmpwi r4, 0x2b
    bne lbl_8019D930
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019D960
lbl_8019D930:
    cmpwi r4, 0x2d
    bne lbl_8019D960
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    li r0, 0x1
    stw r0, 0x9c(r1)
    mr r4, r3
lbl_8019D960:
    li r16, 0x100
    b lbl_8019DFE4
lbl_8019D968:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019D978
    li r0, 0x0
lbl_8019D978:
    cmpwi r0, 0x0
    beq lbl_8019D988
    li r0, 0x0
    b lbl_8019D99C
lbl_8019D988:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019D99C:
    cmpwi r0, 0x0
    bne lbl_8019D9AC
    li r16, 0x1000
    b lbl_8019DFE4
lbl_8019D9AC:
    cmpwi r4, 0x30
    bne lbl_8019D9DC
    mr r12, r17
    mr r3, r18
    li r16, 0x200
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019D9DC:
    li r16, 0x400
    b lbl_8019DFE4
lbl_8019D9E4:
    cmpwi r4, 0x30
    bne lbl_8019DA10
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019DA10:
    li r16, 0x400
    b lbl_8019DFE4
lbl_8019DA18:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019DA28
    li r0, 0x0
lbl_8019DA28:
    cmpwi r0, 0x0
    beq lbl_8019DA38
    li r0, 0x0
    b lbl_8019DA4C
lbl_8019DA38:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019DA4C:
    cmpwi r0, 0x0
    bne lbl_8019DA5C
    li r16, 0x800
    b lbl_8019DFE4
lbl_8019DA5C:
    mulli r0, r28, 0xa
    add r3, r4, r0
    subi r28, r3, 0x30
    cmpwi r28, 0x134
    ble lbl_8019DA78
    li r0, 0x1
    stw r0, 0x0(r19)
lbl_8019DA78:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019DA9C:
    cmpwi r31, 0x10
    beq lbl_8019DDF4
    bge lbl_8019DAD8
    cmpwi r31, 0x4
    beq lbl_8019DB80
    bge lbl_8019DACC
    cmpwi r31, 0x2
    beq lbl_8019DB4C
    bge lbl_8019DFE4
    cmpwi r31, 0x1
    bge lbl_8019DB08
    b lbl_8019DFE4
lbl_8019DACC:
    cmpwi r31, 0x8
    beq lbl_8019DCD4
    b lbl_8019DFE4
lbl_8019DAD8:
    cmpwi r31, 0x80
    beq lbl_8019DF30
    bge lbl_8019DAFC
    cmpwi r31, 0x40
    beq lbl_8019DEB4
    bge lbl_8019DFE4
    cmpwi r31, 0x20
    beq lbl_8019DE58
    b lbl_8019DFE4
lbl_8019DAFC:
    cmpwi r31, 0x100
    beq lbl_8019DF64
    b lbl_8019DFE4
lbl_8019DB08:
    addi r3, r1, 0x28
    li r4, 0x0
    li r5, 0x8
    bl memset
    mr r12, r17
    mr r3, r18
    addi r25, r1, 0x28
    li r22, 0x0
    li r23, 0x0
    li r31, 0x2
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019DB4C:
    cmpwi r4, 0x30
    bne lbl_8019DB78
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019DB78:
    li r31, 0x4
    b lbl_8019DFE4
lbl_8019DB80:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019DB90
    li r0, 0x0
lbl_8019DB90:
    cmpwi r0, 0x0
    beq lbl_8019DBA0
    li r0, 0x0
    b lbl_8019DBB4
lbl_8019DBA0:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 21, 21
lbl_8019DBB4:
    cmpwi r0, 0x0
    bne lbl_8019DBF4
    cmpw r4, r26
    bne lbl_8019DBEC
    mr r12, r17
    mr r3, r18
    li r31, 0x8
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019DBEC:
    li r31, 0x10
    b lbl_8019DFE4
lbl_8019DBF4:
    li r0, 0xe
    cmplw r22, r0
    bge lbl_8019DCB0
    srwi r0, r23, 31
    cmplwi r4, 0xff
    add r0, r0, r23
    li r3, 0x1
    srawi r0, r0, 1
    addi r22, r22, 0x1
    lbzx r0, r25, r0
    bgt lbl_8019DC24
    li r3, 0x0
lbl_8019DC24:
    cmpwi r3, 0x0
    beq lbl_8019DC30
    b lbl_8019DC3C
lbl_8019DC30:
    lwz r3, 0x38(r15)
    lwz r3, 0xc(r3)
    lbzx r4, r3, r4
lbl_8019DC3C:
    cmpwi r4, 0x41
    subi r6, r4, 0x30
    blt lbl_8019DC4C
    subi r6, r4, 0x37
lbl_8019DC4C:
    srwi r5, r23, 31
    clrlwi r3, r23, 31
    xor r4, r3, r5
    clrlslwi r3, r6, 28, 4
    subf. r4, r5, r4
    or r3, r0, r3
    clrlwi r4, r6, 24
    clrlwi r5, r3, 24
    beq lbl_8019DC78
    or r0, r0, r4
    clrlwi r5, r0, 24
lbl_8019DC78:
    srwi r0, r23, 31
    mr r12, r17
    add r0, r0, r23
    mr r3, r18
    srawi r0, r0, 1
    li r4, 0x0
    stbx r5, r25, r0
    li r5, 0x0
    mtctr r12
    addi r23, r23, 0x1
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019DCB0:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019DCD4:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019DCE4
    li r0, 0x0
lbl_8019DCE4:
    cmpwi r0, 0x0
    beq lbl_8019DCF4
    li r0, 0x0
    b lbl_8019DD08
lbl_8019DCF4:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 21, 21
lbl_8019DD08:
    cmpwi r0, 0x0
    bne lbl_8019DD18
    li r31, 0x10
    b lbl_8019DFE4
lbl_8019DD18:
    li r0, 0xe
    cmplw r22, r0
    bge lbl_8019DDD0
    srwi r0, r23, 31
    cmplwi r4, 0xff
    add r0, r0, r23
    li r3, 0x1
    srawi r0, r0, 1
    lbzx r0, r25, r0
    bgt lbl_8019DD44
    li r3, 0x0
lbl_8019DD44:
    cmpwi r3, 0x0
    beq lbl_8019DD50
    b lbl_8019DD5C
lbl_8019DD50:
    lwz r3, 0x38(r15)
    lwz r3, 0xc(r3)
    lbzx r4, r3, r4
lbl_8019DD5C:
    cmpwi r4, 0x41
    subi r6, r4, 0x30
    blt lbl_8019DD6C
    subi r6, r4, 0x37
lbl_8019DD6C:
    srwi r5, r23, 31
    clrlwi r3, r23, 31
    xor r4, r3, r5
    clrlslwi r3, r6, 28, 4
    subf. r4, r5, r4
    or r3, r0, r3
    clrlwi r4, r6, 24
    clrlwi r5, r3, 24
    beq lbl_8019DD98
    or r0, r0, r4
    clrlwi r5, r0, 24
lbl_8019DD98:
    srwi r0, r23, 31
    mr r12, r17
    add r0, r0, r23
    mr r3, r18
    srawi r0, r0, 1
    li r4, 0x0
    stbx r5, r25, r0
    li r5, 0x0
    mtctr r12
    addi r23, r23, 0x1
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019DDD0:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019DDF4:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019DE04
    li r0, 0x0
lbl_8019DE04:
    cmpwi r0, 0x0
    beq lbl_8019DE14
    mr r0, r4
    b lbl_8019DE20
lbl_8019DE14:
    lwz r3, 0x38(r15)
    lwz r3, 0xc(r3)
    lbzx r0, r3, r4
lbl_8019DE20:
    cmpwi r0, 0x50
    bne lbl_8019DE50
    mr r12, r17
    mr r3, r18
    li r31, 0x20
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019DE50:
    li r16, 0x800
    b lbl_8019DFE4
lbl_8019DE58:
    cmpwi r4, 0x2d
    bne lbl_8019DE6C
    li r0, 0x1
    stw r0, 0x94(r1)
    b lbl_8019DE8C
lbl_8019DE6C:
    cmpwi r4, 0x2b
    beq lbl_8019DE8C
    mr r12, r17
    mr r3, r18
    li r5, 0x1
    mtctr r12
    bctrl
    subi r30, r30, 0x1
lbl_8019DE8C:
    mr r12, r17
    mr r3, r18
    li r31, 0x40
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019DEB4:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019DEC4
    li r0, 0x0
lbl_8019DEC4:
    cmpwi r0, 0x0
    beq lbl_8019DED4
    li r0, 0x0
    b lbl_8019DEE8
lbl_8019DED4:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019DEE8:
    cmpwi r0, 0x0
    bne lbl_8019DEF8
    li r16, 0x1000
    b lbl_8019DFE4
lbl_8019DEF8:
    cmpwi r4, 0x30
    bne lbl_8019DF28
    mr r12, r17
    mr r3, r18
    li r31, 0x80
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019DF28:
    li r31, 0x100
    b lbl_8019DFE4
lbl_8019DF30:
    cmpwi r4, 0x30
    bne lbl_8019DF5C
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_8019DFE4
lbl_8019DF5C:
    li r31, 0x100
    b lbl_8019DFE4
lbl_8019DF64:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_8019DF74
    li r0, 0x0
lbl_8019DF74:
    cmpwi r0, 0x0
    beq lbl_8019DF84
    li r0, 0x0
    b lbl_8019DF98
lbl_8019DF84:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019DF98:
    cmpwi r0, 0x0
    bne lbl_8019DFA8
    li r16, 0x800
    b lbl_8019DFE4
lbl_8019DFA8:
    mulli r0, r24, 0xa
    cmpwi r28, 0x7fff
    add r3, r4, r0
    subi r24, r3, 0x30
    ble lbl_8019DFC4
    li r0, 0x1
    stw r0, 0x0(r19)
lbl_8019DFC4:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
lbl_8019DFE4:
    lwz r0, 0x8(r1)
    cmpw r30, r0
    bgt lbl_8019E000
    cmpwi r4, -0x1
    beq lbl_8019E000
    rlwinm. r0, r16, 0, 19, 20
    beq lbl_8019D130
lbl_8019E000:
    addis r0, r16, 0x0
    cmplwi r0, 0x8000
    beq lbl_8019E01C
    andi. r0, r16, 0xe2c
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_8019E038
lbl_8019E01C:
    subi r0, r30, 0x1
    li r3, 0x0
    cmpwi r0, 0x2
    ble lbl_8019E034
    andi. r0, r31, 0x18e
    bne lbl_8019E038
lbl_8019E034:
    li r3, 0x1
lbl_8019E038:
    cmpwi r3, 0x0
    beq lbl_8019E050
    lwz r3, 0xc(r1)
    li r0, 0x0
    stw r0, 0x0(r3)
    b lbl_8019E060
lbl_8019E050:
    add r3, r30, r29
    subi r0, r3, 0x1
    lwz r3, 0xc(r1)
    stw r0, 0x0(r3)
lbl_8019E060:
    mr r12, r17
    mr r3, r18
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    bne lbl_8019E1C8
    lwz r0, 0x9c(r1)
    cmpwi r0, 0x0
    beq lbl_8019E08C
    neg r28, r28
lbl_8019E08C:
    lbz r3, 0x6c(r1)
    addi r4, r1, 0x6d
    add r4, r4, r3
    b lbl_8019E0A0
lbl_8019E09C:
    addi r27, r27, 0x1
lbl_8019E0A0:
    cmpwi r3, 0x0
    subi r3, r3, 0x1
    beq lbl_8019E0B8
    lbzu r0, -0x1(r4)
    cmplwi r0, 0x30
    beq lbl_8019E09C
lbl_8019E0B8:
    addi r0, r3, 0x1
    stb r0, 0x6c(r1)
    clrlwi. r4, r0, 24
    bne lbl_8019E0DC
    addi r3, r1, 0x6d
    li r0, 0x30
    stbx r0, r3, r4
    addi r0, r4, 0x1
    stb r0, 0x6c(r1)
lbl_8019E0DC:
    addi r0, r28, 0x134
    cmplwi r0, 0x268
    ble lbl_8019E11C
    lwz r0, 0x0(r19)
    cmpwi r0, 0x0
    bne lbl_8019E114
    lbz r0, 0x6d(r1)
    cmplwi r0, 0x30
    bne lbl_8019E114
    lbz r0, 0x6e(r1)
    cmpwi r0, 0x0
    bne lbl_8019E114
    lfd f1, lbl_804A11C0
    b lbl_8019E344
lbl_8019E114:
    li r0, 0x1
    stw r0, 0x0(r19)
lbl_8019E11C:
    lwz r0, 0x0(r19)
    add r28, r28, r27
    cmpwi r0, 0x0
    beq lbl_8019E164
    lwz r0, 0x9c(r1)
    cmpwi r0, 0x0
    beq lbl_8019E140
    lfd f1, lbl_804A11C0
    b lbl_8019E344
lbl_8019E140:
    cmpwi r14, 0x0
    beq lbl_8019E158
    lis r3, lbl_8049C420@ha
    lfd f0, lbl_8049C420@l(r3)
    fneg f1, f0
    b lbl_8019E344
lbl_8019E158:
    lis r3, lbl_8049C420@ha
    lfd f1, lbl_8049C420@l(r3)
    b lbl_8019E344
lbl_8019E164:
    sth r28, 0x6a(r1)
    addi r3, r1, 0x68
    bl fn_80197480
    lfd f0, lbl_804A11C0
    fcmpu cr0, f0, f1
    beq lbl_8019E194
    lfd f0, lbl_804A11C8
    fcmpo cr0, f1, f0
    bge lbl_8019E194
    li r0, 0x1
    stw r0, 0x0(r19)
    b lbl_8019E1B0
lbl_8019E194:
    lfd f0, lbl_804A11D0
    fcmpo cr0, f1, f0
    ble lbl_8019E1B0
    li r0, 0x1
    stw r0, 0x0(r19)
    lis r3, lbl_8049C420@ha
    lfd f1, lbl_8049C420@l(r3)
lbl_8019E1B0:
    cmpwi r14, 0x0
    beq lbl_8019E344
    andi. r0, r16, 0xe2c
    beq lbl_8019E344
    fneg f1, f1
    b lbl_8019E344
lbl_8019E1C8:
    lwz r0, 0x94(r1)
    addi r3, r1, 0x18
    cmpwi r0, 0x0
    beq lbl_8019E1DC
    neg r24, r24
lbl_8019E1DC:
    slwi r0, r22, 2
    lbz r5, 0x28(r1)
    add r24, r24, r0
    li r6, 0x0
    li r4, 0x80
    b lbl_8019E1FC
lbl_8019E1F4:
    addi r6, r6, 0x1
    subi r24, r24, 0x1
lbl_8019E1FC:
    cmplwi r6, 0x4
    bge lbl_8019E210
    sraw r0, r4, r6
    and. r0, r5, r0
    beq lbl_8019E1F4
lbl_8019E210:
    addic. r5, r6, 0x1
    subi r24, r24, 0x1
    beq lbl_8019E264
    addi r25, r1, 0x2f
    addi r4, r1, 0x28
    cmplw r25, r4
    li r7, 0x0
    blt lbl_8019E264
    addi r0, r25, 0x1
    subfic r6, r5, 0x8
    subf r0, r4, r0
    mtctr r0
    blt lbl_8019E264
lbl_8019E244:
    lbz r0, 0x0(r25)
    slw r4, r0, r5
    sraw r0, r0, r6
    or r4, r7, r4
    stb r4, 0x0(r25)
    clrlwi r7, r0, 24
    subi r25, r25, 0x1
    bdnz lbl_8019E244
lbl_8019E264:
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x7
    addi r4, r1, 0x28
    addi r3, r1, 0x19
    li r8, 0x0
    li r7, 0xff
    mtctr r0
lbl_8019E288:
    addi r0, r8, 0x8
    lbz r9, 0x0(r4)
    cmplwi r0, 0x34
    addi r5, r8, 0xc
    ble lbl_8019E2AC
    subfic r0, r8, 0x34
    slw r0, r7, r0
    and r0, r9, r0
    clrlwi r9, r0, 24
lbl_8019E2AC:
    clrlwi r10, r5, 29
    lbz r6, 0x0(r3)
    sraw r0, r9, r10
    addi r4, r4, 0x1
    clrlwi r5, r0, 24
    addi r8, r8, 0x8
    or r5, r6, r5
    stb r5, 0x0(r3)
    subfic r0, r10, 0x8
    slw r0, r9, r0
    lbzu r5, 0x1(r3)
    clrlwi r0, r0, 24
    or r0, r5, r0
    stb r0, 0x0(r3)
    bdnz lbl_8019E288
    add r3, r28, r24
    addi r24, r3, 0x3ff
    clrrwi. r0, r24, 11
    beq lbl_8019E308
    li r0, 0x1
    stw r0, 0x0(r19)
    lfd f1, lbl_804A11C0
    b lbl_8019E344
lbl_8019E308:
    slwi r24, r24, 21
    lbz r5, 0x18(r1)
    srwi r4, r24, 25
    lbz r3, 0x19(r1)
    srwi r0, r24, 17
    cmpwi r14, 0x0
    or r4, r5, r4
    stb r4, 0x18(r1)
    or r0, r3, r0
    stb r0, 0x19(r1)
    beq lbl_8019E340
    clrlwi r0, r4, 24
    ori r0, r0, 0x80
    stb r0, 0x18(r1)
lbl_8019E340:
    lfd f1, 0x18(r1)
lbl_8019E344:
    addi r11, r1, 0xf0
    bl _restgpr_14
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

// ----------------------------------------------------------------------------
// strtod
// ----------------------------------------------------------------------------
asm void strtod() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, __StringRead@ha
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r4, r4, __StringRead@l
    addi r5, r1, 0x10
    stw r3, 0x10(r1)
    lis r3, 0x8000
    subi r3, r3, 0x1
    addi r6, r1, 0x8
    stw r0, 0x14(r1)
    addi r7, r1, 0xc
    bl fn_8019D03C
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_8019E3A8
    li r0, 0x22
    stw r0, lbl_8049D8C8
lbl_8019E3A8:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

