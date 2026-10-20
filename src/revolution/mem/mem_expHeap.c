#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK memset();                   /* extern */

u32 AllocUsedBlockFromFreeBlock_();
u32 AllocFromHead_();
u32 AllocFromTail_();
s32 RecycleRegion_();
u32 MEMCreateExpHeapEx();
s32 MEMDestroyExpHeap();
u32 MEMAllocFromExpHeapEx();
void MEMFreeToExpHeap();
u16 fn_8030C61C();
u32 fn_8030C66C();
s32 fn_8030C6F0();
u32 fn_8030C720();
void fn_8030C840();
s32 fn_8030C8E0();
s32 fn_8030C9B4();
void fn_8030CA68();
void fn_8030CAD8();
void MEMGetSizeForMBlockExpHeap();

u32 AllocUsedBlockFromFreeBlock_(s8 *arg0, s8 *arg1, u32 arg2, s32 arg3, s32 arg4, M2C_UNK arg_sp0);

u32 AllocFromHead_(s8 *arg0, u32 arg1, s32 arg2);

u32 AllocFromTail_(s8 *arg0, u32 arg1, s32 arg2);

s32 RecycleRegion_(s8 **arg0, s8 *arg1);

u32 MEMCreateExpHeapEx(s32 arg0, s32 arg1, s32 arg2);

s32 MEMDestroyExpHeap(s32 arg0) {
    MEMiFinalizeHeap((s32 *) arg0);
    return arg0;
}

// MEMAllocFromExpHeapEx: definicion C reemplazada por asm (ver abajo)


void MEMFreeToExpHeap(s8 *arg0, s8 *arg1);


// fn_8030C66C: definicion C reemplazada por asm (ver abajo)


s32 fn_8030C6F0(s32 arg0) {
    MEMiFinalizeHeap((s32 *) arg0);
    return arg0;
}

// fn_8030C720: definicion C reemplazada por asm (ver abajo)


// fn_8030C840: definicion C reemplazada por asm (ver abajo)


s32 fn_8030C8E0(s8 *arg0, s32 arg1, M2C_UNK arg_sp0);

// fn_8030C9B4: definicion C reemplazada por asm (ver abajo)


void fn_8030CA68(s8 *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x38) & 4) {
            OSLockMutex(arg0 + 0x20);
        }
        *arg1 = M2C_FIELD(arg0, s32 *, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) arg1;
        if (M2C_FIELD(arg0, s32 *, 0x38) & 4) {
            OSUnlockMutex(arg0 + 0x20);
        }
    }
}

// fn_8030CAD8: definicion C reemplazada por asm (ver abajo)


void MEMGetSizeForMBlockExpHeap(s8 *arg0, s32 arg1);

// ---- Funciones aun sin C que matchee (asm generado) ----
u32 AllocFromHead_();
u32 AllocFromTail_();
u32 AllocUsedBlockFromFreeBlock_();
u32 MEMAllocFromExpHeapEx(s8 *arg0, s32 arg1, s32 arg2);
u32 MEMCreateExpHeapEx();
void MEMFreeToExpHeap();
void MEMGetSizeForMBlockExpHeap();
extern void MEMiInitHeapHead();
s32 RecycleRegion_();
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_26();
extern void _savegpr_27();
u16 fn_8030C61C();
u32 fn_8030C66C(s32 arg0, s32 arg1, s32 arg2);
u32 fn_8030C720(s8 *arg0, s32 arg1, s32 arg2);
void fn_8030C840(s8 *arg0, s32 arg1);
s32 fn_8030C8E0();
s32 fn_8030C9B4(s8 *arg0, s32 arg1);
void fn_8030CAD8(s8 *arg0, s32 arg1);

// asm_to_cpp: AllocUsedBlockFromFreeBlock_
asm u32 AllocUsedBlockFromFreeBlock_() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lwz r8, 0x8(r4)
    add r30, r6, r5
    lhz r6, 0x2(r4)
    subi r29, r5, 0x10
    lwz r0, 0x4(r4)
    cmpwi r8, 0x0
    extrwi r9, r6, 7, 17
    lwz r10, 0xc(r4)
    add r6, r4, r0
    mr r27, r5
    mr r26, r3
    mr r28, r7
    mr r31, r29
    subf r5, r9, r4
    addi r6, r6, 0x10
    beq lbl_8030BEEC
    stw r10, 0xc(r8)
    b lbl_8030BEF0
lbl_8030BEEC:
    stw r10, 0x0(r3)
lbl_8030BEF0:
    cmpwi r10, 0x0
    beq lbl_8030BF00
    stw r8, 0x8(r10)
    b lbl_8030BF04
lbl_8030BF00:
    stw r8, 0x4(r3)
lbl_8030BF04:
    subf r0, r5, r29
    cmplwi r0, 0x14
    blt lbl_8030BF24
    cmpwi r7, 0x0
    bne lbl_8030BF2C
    lhz r0, 0x12(r3)
    extrwi. r0, r0, 1, 30
    bne lbl_8030BF2C
lbl_8030BF24:
    mr r31, r5
    b lbl_8030BF88
lbl_8030BF2C:
    li r4, 0x4652
    addi r0, r5, 0x10
    sth r4, 0x0(r5)
    li r4, 0x0
    subf r0, r0, r29
    cmpwi r8, 0x0
    sth r4, 0x2(r5)
    stw r0, 0x4(r5)
    stw r4, 0xc(r5)
    stw r8, 0x8(r5)
    beq lbl_8030BF64
    lwz r4, 0xc(r8)
    stw r5, 0xc(r8)
    b lbl_8030BF6C
lbl_8030BF64:
    lwz r4, 0x0(r3)
    stw r5, 0x0(r3)
lbl_8030BF6C:
    cmpwi r4, 0x0
    stw r4, 0xc(r5)
    beq lbl_8030BF80
    stw r5, 0x8(r4)
    b lbl_8030BF84
lbl_8030BF80:
    stw r5, 0x4(r3)
lbl_8030BF84:
    mr r8, r5
lbl_8030BF88:
    subf r0, r30, r6
    cmplwi r0, 0x14
    blt lbl_8030BFA8
    cmplwi r7, 0x1
    bne lbl_8030BFB0
    lhz r0, 0x12(r3)
    extrwi. r0, r0, 1, 30
    bne lbl_8030BFB0
lbl_8030BFA8:
    mr r30, r6
    b lbl_8030C008
lbl_8030BFB0:
    li r4, 0x4652
    addi r0, r30, 0x10
    sth r4, 0x0(r30)
    li r4, 0x0
    subf r0, r0, r6
    cmpwi r8, 0x0
    sth r4, 0x2(r30)
    stw r0, 0x4(r30)
    stw r4, 0xc(r30)
    stw r8, 0x8(r30)
    beq lbl_8030BFE8
    lwz r4, 0xc(r8)
    stw r30, 0xc(r8)
    b lbl_8030BFF0
lbl_8030BFE8:
    lwz r4, 0x0(r3)
    stw r30, 0x0(r3)
lbl_8030BFF0:
    cmpwi r4, 0x0
    stw r4, 0xc(r30)
    beq lbl_8030C004
    stw r30, 0x8(r4)
    b lbl_8030C008
lbl_8030C004:
    stw r30, 0x4(r3)
lbl_8030C008:
    lwz r0, -0x4(r3)
    subf r5, r31, r30
    clrlwi. r0, r0, 31
    beq lbl_8030C024
    mr r3, r31
    li r4, 0x0
    bl memset
lbl_8030C024:
    li r5, 0x0
    addi r4, r29, 0x10
    mr r3, r5
    li r6, 0x5544
    subf r4, r4, r30
    subf r0, r31, r29
    rlwimi r3, r28, 15, 16, 16
    sth r6, 0x0(r29)
    rlwimi r3, r0, 8, 17, 23
    stw r4, 0x4(r29)
    stw r5, 0x8(r29)
    stw r5, 0xc(r29)
    sth r3, 0x2(r29)
    lhz r0, 0x10(r26)
    rlwimi r3, r0, 0, 24, 31
    sth r3, 0x2(r29)
    lwz r4, 0xc(r26)
    cmpwi r4, 0x0
    stw r4, 0x8(r29)
    beq lbl_8030C080
    lwz r3, 0xc(r4)
    stw r29, 0xc(r4)
    b lbl_8030C088
lbl_8030C080:
    lwz r3, 0x8(r26)
    stw r29, 0x8(r26)
lbl_8030C088:
    cmpwi r3, 0x0
    stw r3, 0xc(r29)
    beq lbl_8030C09C
    stw r29, 0x8(r3)
    b lbl_8030C0A0
lbl_8030C09C:
    stw r29, 0xc(r26)
lbl_8030C0A0:
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: AllocFromHead_
asm u32 AllocFromHead_() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    addi r3, r3, 0x3c
    mr r6, r4
    stw r0, 0x24(r1)
    subi r0, r5, 0x1
    nor r8, r0, r0
    li r12, 0x0
    stw r31, 0x1c(r1)
    li r31, -0x1
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    lhz r7, 0x12(r3)
    lwz r11, 0x0(r3)
    clrlwi r0, r7, 31
    cntlzw r0, r0
    srwi r10, r0, 5
    b lbl_8030C154
lbl_8030C108:
    addi r29, r11, 0x10
    lwz r9, 0x4(r11)
    add r7, r5, r29
    subi r0, r7, 0x1
    and r7, r8, r0
    subf r0, r29, r7
    add r0, r4, r0
    cmplw r9, r0
    blt lbl_8030C150
    cmplw r31, r9
    ble lbl_8030C150
    cmpwi r10, 0x0
    mr r12, r11
    mr r31, r9
    mr r30, r7
    bne lbl_8030C15C
    cmplw r9, r4
    beq lbl_8030C15C
lbl_8030C150:
    lwz r11, 0xc(r11)
lbl_8030C154:
    cmpwi r11, 0x0
    bne lbl_8030C108
lbl_8030C15C:
    cmpwi r12, 0x0
    beq lbl_8030C178
    mr r4, r12
    mr r5, r30
    li r7, 0x0
    bl AllocUsedBlockFromFreeBlock_
    b lbl_8030C17C
lbl_8030C178:
    li r3, 0x0
lbl_8030C17C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: AllocFromTail_
asm u32 AllocFromTail_() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x3c
    mr r6, r4
    stw r0, 0x14(r1)
    subi r0, r5, 0x1
    nor r7, r0, r0
    li r11, 0x0
    stw r31, 0xc(r1)
    li r12, -0x1
    stw r30, 0x8(r1)
    lhz r5, 0x12(r3)
    lwz r10, 0x4(r3)
    clrlwi r0, r5, 31
    li r5, 0x0
    cntlzw r0, r0
    srwi r9, r0, 5
    b lbl_8030C224
lbl_8030C1E0:
    lwz r8, 0x4(r10)
    addi r31, r10, 0x10
    add r0, r8, r31
    subf r0, r4, r0
    and r30, r7, r0
    subf. r0, r31, r30
    blt lbl_8030C220
    cmplw r12, r8
    ble lbl_8030C220
    cmpwi r9, 0x0
    mr r11, r10
    mr r12, r8
    mr r5, r30
    bne lbl_8030C22C
    cmplw r8, r4
    beq lbl_8030C22C
lbl_8030C220:
    lwz r10, 0x8(r10)
lbl_8030C224:
    cmpwi r10, 0x0
    bne lbl_8030C1E0
lbl_8030C22C:
    cmpwi r11, 0x0
    beq lbl_8030C244
    mr r4, r11
    li r7, 0x1
    bl AllocUsedBlockFromFreeBlock_
    b lbl_8030C248
lbl_8030C244:
    li r3, 0x0
lbl_8030C248:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: RecycleRegion_
asm s32 RecycleRegion_() {
    nofralloc
    stwu r1, -0x10(r1)
    li r8, 0x0
    lwz r5, 0x0(r4)
    lwz r0, 0x4(r4)
    stw r5, 0x8(r1)
    lwz r6, 0x0(r3)
    stw r0, 0xc(r1)
    b lbl_8030C2E8
lbl_8030C280:
    lwz r0, 0x0(r4)
    cmplw r6, r0
    bge lbl_8030C294
    mr r8, r6
    b lbl_8030C2E4
lbl_8030C294:
    lwz r0, 0x4(r4)
    cmplw r6, r0
    bne lbl_8030C2F0
    lwz r0, 0x4(r6)
    lwz r7, 0x8(r6)
    add r5, r6, r0
    lwz r6, 0xc(r6)
    addi r0, r5, 0x10
    cmpwi r7, 0x0
    stw r0, 0xc(r1)
    beq lbl_8030C2C8
    stw r6, 0xc(r7)
    b lbl_8030C2CC
lbl_8030C2C8:
    stw r6, 0x0(r3)
lbl_8030C2CC:
    cmpwi r6, 0x0
    beq lbl_8030C2DC
    stw r7, 0x8(r6)
    b lbl_8030C2F0
lbl_8030C2DC:
    stw r7, 0x4(r3)
    b lbl_8030C2F0
lbl_8030C2E4:
    lwz r6, 0xc(r6)
lbl_8030C2E8:
    cmpwi r6, 0x0
    bne lbl_8030C280
lbl_8030C2F0:
    cmpwi r8, 0x0
    beq lbl_8030C348
    lwz r5, 0x4(r8)
    lwz r0, 0x0(r4)
    add r4, r8, r5
    addi r4, r4, 0x10
    cmplw r4, r0
    bne lbl_8030C348
    lwz r5, 0x8(r8)
    stw r8, 0x8(r1)
    cmpwi r5, 0x0
    lwz r4, 0xc(r8)
    beq lbl_8030C32C
    stw r4, 0xc(r5)
    b lbl_8030C330
lbl_8030C32C:
    stw r4, 0x0(r3)
lbl_8030C330:
    cmpwi r4, 0x0
    beq lbl_8030C340
    stw r5, 0x8(r4)
    b lbl_8030C344
lbl_8030C340:
    stw r5, 0x4(r3)
lbl_8030C344:
    mr r8, r5
lbl_8030C348:
    lwz r6, 0xc(r1)
    lwz r5, 0x8(r1)
    subf r0, r5, r6
    cmplwi r0, 0x10
    bge lbl_8030C364
    li r3, 0x0
    b lbl_8030C3C0
lbl_8030C364:
    li r4, 0x4652
    addi r0, r5, 0x10
    sth r4, 0x0(r5)
    li r4, 0x0
    subf r0, r0, r6
    cmpwi r8, 0x0
    sth r4, 0x2(r5)
    stw r0, 0x4(r5)
    stw r4, 0xc(r5)
    stw r8, 0x8(r5)
    beq lbl_8030C39C
    lwz r4, 0xc(r8)
    stw r5, 0xc(r8)
    b lbl_8030C3A4
lbl_8030C39C:
    lwz r4, 0x0(r3)
    stw r5, 0x0(r3)
lbl_8030C3A4:
    cmpwi r4, 0x0
    stw r4, 0xc(r5)
    beq lbl_8030C3B8
    stw r5, 0x8(r4)
    b lbl_8030C3BC
lbl_8030C3B8:
    stw r5, 0x4(r3)
lbl_8030C3BC:
    li r3, 0x1
lbl_8030C3C0:
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: MEMCreateExpHeapEx
asm u32 MEMCreateExpHeapEx() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    add r4, r4, r3
    stw r0, 0x14(r1)
    addi r0, r3, 0x3
    clrrwi r6, r4, 2
    stw r31, 0xc(r1)
    clrrwi r31, r0, 2
    cmplw r31, r6
    bgt lbl_8030C3FC
    subf r0, r31, r6
    cmplwi r0, 0x64
    bge lbl_8030C404
lbl_8030C3FC:
    li r3, 0x0
    b lbl_8030C464
lbl_8030C404:
    lis r4, 0x4558
    mr r7, r5
    mr r3, r31
    addi r5, r31, 0x50
    addi r4, r4, 0x5048
    bl MEMiInitHeapHead
    li r5, 0x0
    li r4, 0x4652
    sth r5, 0x4c(r31)
    mr r3, r31
    sth r5, 0x4e(r31)
    lwz r6, 0x18(r31)
    lwz r7, 0x1c(r31)
    addi r0, r6, 0x10
    sth r4, 0x0(r6)
    subf r0, r0, r7
    sth r5, 0x2(r6)
    stw r0, 0x4(r6)
    stw r5, 0x8(r6)
    stw r5, 0xc(r6)
    stw r6, 0x3c(r31)
    stw r6, 0x40(r31)
    stw r5, 0x44(r31)
    stw r5, 0x48(r31)
lbl_8030C464:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: MEMAllocFromExpHeapEx
asm u32 MEMAllocFromExpHeapEx(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_8030C4D8
    li r30, 0x1
lbl_8030C4D8:
    lwz r0, 0x38(r3)
    addi r4, r30, 0x3
    clrrwi r30, r4, 2
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_8030C4F4
    addi r3, r3, 0x20
    bl OSLockMutex
lbl_8030C4F4:
    cmpwi r31, 0x0
    blt lbl_8030C510
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl AllocFromHead_
    b lbl_8030C520
lbl_8030C510:
    mr r3, r29
    mr r4, r30
    neg r5, r31
    bl AllocFromTail_
lbl_8030C520:
    lwz r0, 0x38(r29)
    mr r31, r3
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_8030C538
    addi r3, r29, 0x20
    bl OSUnlockMutex
lbl_8030C538:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: MEMFreeToExpHeap
asm void MEMFreeToExpHeap() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_8030C604
    lwz r0, 0x38(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_8030C590
    addi r3, r3, 0x20
    bl OSLockMutex
lbl_8030C590:
    lhz r0, -0xe(r31)
    subi r6, r31, 0x10
    addi r3, r30, 0x3c
    extrwi r0, r0, 7, 17
    subf r0, r0, r6
    stw r0, 0x8(r1)
    lwz r0, -0xc(r31)
    add r4, r6, r0
    addi r0, r4, 0x10
    stw r0, 0xc(r1)
    lwz r5, -0x8(r31)
    lwz r4, -0x4(r31)
    cmpwi r5, 0x0
    beq lbl_8030C5D0
    stw r4, 0xc(r5)
    b lbl_8030C5D4
lbl_8030C5D0:
    stw r4, 0x8(r3)
lbl_8030C5D4:
    cmpwi r4, 0x0
    beq lbl_8030C5E4
    stw r5, 0x8(r4)
    b lbl_8030C5E8
lbl_8030C5E4:
    stw r5, 0xc(r3)
lbl_8030C5E8:
    addi r4, r1, 0x8
    bl RecycleRegion_
    lwz r0, 0x38(r30)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_8030C604
    addi r3, r30, 0x20
    bl OSUnlockMutex
lbl_8030C604:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8030C61C
asm u16 fn_8030C61C() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lhz r31, 0x4c(r29)
    sth r30, 0x4c(r29)
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8030C66C
asm u32 fn_8030C66C(s32 arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    add r4, r4, r3
    stw r0, 0x14(r1)
    addi r0, r3, 0x3
    clrrwi r6, r4, 2
    stw r31, 0xc(r1)
    clrrwi r31, r0, 2
    cmplw r31, r6
    bgt lbl_8030C6A0
    subf r0, r31, r6
    cmplwi r0, 0x48
    bge lbl_8030C6A8
lbl_8030C6A0:
    li r3, 0x0
    b lbl_8030C6DC
lbl_8030C6A8:
    lis r4, 0x4652
    mr r7, r5
    mr r3, r31
    addi r5, r31, 0x48
    addi r4, r4, 0x4d48
    bl MEMiInitHeapHead
    lwz r4, 0x18(r31)
    li r0, 0x0
    mr r3, r31
    stw r4, 0x3c(r31)
    lwz r4, 0x1c(r31)
    stw r4, 0x40(r31)
    stw r0, 0x44(r31)
lbl_8030C6DC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8030C720
asm u32 fn_8030C720(s8 *arg0, s32 arg1, s32 arg2) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r5
    bne lbl_8030C750
    li r30, 0x1
lbl_8030C750:
    lwz r0, 0x38(r3)
    addi r4, r30, 0x3
    clrrwi r30, r4, 2
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_8030C76C
    addi r3, r3, 0x20
    bl OSLockMutex
lbl_8030C76C:
    cmpwi r29, 0x0
    blt lbl_8030C7C4
    lwz r3, 0x3c(r31)
    subi r0, r29, 0x1
    nor r5, r0, r0
    lwz r0, 0x40(r31)
    add r4, r29, r3
    subi r4, r4, 0x1
    and r29, r5, r4
    add r30, r30, r29
    cmplw r30, r0
    ble lbl_8030C7A4
    li r29, 0x0
    b lbl_8030C80C
lbl_8030C7A4:
    lwz r0, 0x38(r31)
    subf r5, r3, r30
    clrlwi. r0, r0, 31
    beq lbl_8030C7BC
    li r4, 0x0
    bl memset
lbl_8030C7BC:
    stw r30, 0x3c(r31)
    b lbl_8030C80C
lbl_8030C7C4:
    lwz r5, 0x40(r31)
    subfic r0, r29, -0x1
    nor r4, r0, r0
    lwz r0, 0x3c(r31)
    subf r3, r30, r5
    and r29, r4, r3
    cmplw r29, r0
    bge lbl_8030C7EC
    li r29, 0x0
    b lbl_8030C80C
lbl_8030C7EC:
    lwz r0, 0x38(r31)
    subf r5, r29, r5
    clrlwi. r0, r0, 31
    beq lbl_8030C808
    mr r3, r29
    li r4, 0x0
    bl memset
lbl_8030C808:
    stw r29, 0x40(r31)
lbl_8030C80C:
    lwz r0, 0x38(r31)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_8030C820
    addi r3, r31, 0x20
    bl OSUnlockMutex
lbl_8030C820:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8030C840
asm void fn_8030C840(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x38(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_8030C870
    addi r3, r3, 0x20
    bl OSLockMutex
lbl_8030C870:
    clrlwi. r0, r31, 31
    beq lbl_8030C888
    lwz r3, 0x18(r30)
    li r0, 0x0
    stw r0, 0x44(r30)
    stw r3, 0x3c(r30)
lbl_8030C888:
    rlwinm. r0, r31, 0, 30, 30
    beq lbl_8030C8B4
    lwz r3, 0x44(r30)
    b lbl_8030C8A4
lbl_8030C898:
    lwz r0, 0x1c(r30)
    stw r0, 0x8(r3)
    lwz r3, 0xc(r3)
lbl_8030C8A4:
    cmpwi r3, 0x0
    bne lbl_8030C898
    lwz r0, 0x1c(r30)
    stw r0, 0x40(r30)
lbl_8030C8B4:
    lwz r0, 0x38(r30)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_8030C8C8
    addi r3, r30, 0x20
    bl OSUnlockMutex
lbl_8030C8C8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8030C8E0
asm s32 fn_8030C8E0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x38(r3)
    mr r27, r3
    mr r28, r4
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_8030C910
    addi r3, r3, 0x20
    bl OSLockMutex
lbl_8030C910:
    lwz r29, 0x3c(r27)
    lwz r0, 0x40(r27)
    addi r3, r29, 0x3
    clrrwi r31, r3, 2
    addi r30, r31, 0x10
    cmplw r30, r0
    ble lbl_8030C934
    li r31, 0x0
    b lbl_8030C954
lbl_8030C934:
    lwz r0, 0x38(r27)
    subf r5, r29, r30
    clrlwi. r0, r0, 31
    beq lbl_8030C950
    mr r3, r29
    li r4, 0x0
    bl memset
lbl_8030C950:
    stw r30, 0x3c(r27)
lbl_8030C954:
    cmpwi r31, 0x0
    bne lbl_8030C964
    li r30, 0x0
    b lbl_8030C984
lbl_8030C964:
    stw r28, 0x0(r31)
    li r30, 0x1
    stw r29, 0x4(r31)
    lwz r0, 0x40(r27)
    stw r0, 0x8(r31)
    lwz r0, 0x44(r27)
    stw r0, 0xc(r31)
    stw r31, 0x44(r27)
lbl_8030C984:
    lwz r0, 0x38(r27)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_8030C998
    addi r3, r27, 0x20
    bl OSUnlockMutex
lbl_8030C998:
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_8030C9B4
asm s32 fn_8030C9B4(s8 *arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x38(r3)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_8030C9E4
    addi r3, r3, 0x20
    bl OSLockMutex
lbl_8030C9E4:
    cmpwi r31, 0x0
    lwz r3, 0x44(r30)
    beq lbl_8030CA0C
    b lbl_8030CA04
lbl_8030C9F4:
    lwz r0, 0x0(r3)
    cmplw r0, r31
    beq lbl_8030CA0C
    lwz r3, 0xc(r3)
lbl_8030CA04:
    cmpwi r3, 0x0
    bne lbl_8030C9F4
lbl_8030CA0C:
    cmpwi r3, 0x0
    bne lbl_8030CA1C
    li r31, 0x0
    b lbl_8030CA38
lbl_8030CA1C:
    lwz r0, 0x4(r3)
    li r31, 0x1
    stw r0, 0x3c(r30)
    lwz r0, 0x8(r3)
    stw r0, 0x40(r30)
    lwz r0, 0xc(r3)
    stw r0, 0x44(r30)
lbl_8030CA38:
    lwz r0, 0x38(r30)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_8030CA4C
    addi r3, r30, 0x20
    bl OSUnlockMutex
lbl_8030CA4C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8030CAD8
asm void fn_8030CAD8(s8 *arg0, s32 arg1) {
    nofralloc
    mr r5, r3
    lwz r3, 0x4(r3)
    lwz r5, 0x8(r5)
    b MEMAllocFromExpHeapEx
}

// asm_to_cpp: MEMGetSizeForMBlockExpHeap
asm void MEMGetSizeForMBlockExpHeap() {
    nofralloc
    lwz r3, 0x4(r3)
    b MEMFreeToExpHeap
}
