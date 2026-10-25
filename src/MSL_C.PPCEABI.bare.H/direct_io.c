#include <types.h>

#ifndef _MSL_WIDE_CHAR
#define _MSL_WIDE_CHAR
#endif

#include <wchar.h>
#include <stdio.h>
#include <string.h>
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/buffer_io.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/misc_io.h"


//unused
void fread(){
}

//unused
void __fread(){
}

//unused
void fwrite(){
}

// __fwrite: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern void __prep_buffer();
extern void __stdio_atexit();
extern void fn_80196260();
extern void fn_80197C00();
extern void fn_80197DE8();

// asm_to_cpp: fn_80197DE8
asm void fn_80197DE8() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r27, r4
    mr r28, r6
    mr r26, r3
    mr r25, r5
    li r4, 0x0
    mr r3, r28
    bl fwide
    cmpwi r3, 0x0
    bne lbl_80197E28
    mr r3, r28
    li r4, -0x1
    bl fwide
lbl_80197E28:
    mullw. r30, r27, r25
    beq lbl_80197E48
    lbz r0, 0xa(r28)
    cmpwi r0, 0x0
    bne lbl_80197E48
    lwz r3, 0x4(r28)
    extrwi. r0, r3, 3, 7
    bne lbl_80197E50
lbl_80197E48:
    li r3, 0x0
    b lbl_80198114
lbl_80197E50:
    extrwi. r0, r3, 1, 12
    li r31, 0x1
    beq lbl_80197E6C
    extrwi r0, r3, 2, 5
    cmplwi r0, 0x2
    beq lbl_80197E6C
    li r31, 0x0
lbl_80197E6C:
    lwz r3, 0x8(r28)
    srwi. r0, r3, 29
    bne lbl_80197E98
    lwz r0, 0x4(r28)
    extrwi. r0, r0, 1, 4
    beq lbl_80197E98
    li r0, 0x2
    rlwimi r3, r0, 29, 0, 2
    stw r3, 0x8(r28)
    li r0, 0x0
    stw r0, 0x28(r28)
lbl_80197E98:
    lwz r0, 0x8(r28)
    srwi r0, r0, 29
    cmplwi r0, 0x2
    bge lbl_80197EC0
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r28)
    li r3, 0x0
    stw r0, 0x28(r28)
    b lbl_80198114
lbl_80197EC0:
    lwz r0, 0x4(r28)
    extrwi. r0, r0, 1, 6
    beq lbl_80197EF0
    bl fn_80196260
    cmpwi r3, 0x0
    beq lbl_80197EF0
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r28)
    li r3, 0x0
    stw r0, 0x28(r28)
    b lbl_80198114
lbl_80197EF0:
    cmpwi r30, 0x0
    li r29, 0x0
    beq lbl_80197FA4
    lwz r0, 0x8(r28)
    srwi r0, r0, 29
    cmplwi r0, 0x3
    blt lbl_80197FA4
lbl_80197F0C:
    mr r3, r28
    li r4, 0x0
    bl fwide
    cmpwi r3, 0x1
    bne lbl_80197F44
    lwz r0, 0x8(r28)
    addi r29, r29, 0x2
    subi r30, r30, 0x2
    rlwinm r0, r0, 4, 28, 30
    add r3, r28, r0
    lhz r0, 0xc(r3)
    sth r0, 0x0(r26)
    addi r26, r26, 0x2
    b lbl_80197F64
lbl_80197F44:
    lwz r0, 0x8(r28)
    addi r29, r29, 0x1
    subi r30, r30, 0x1
    srwi r0, r0, 29
    add r3, r28, r0
    lbz r0, 0xc(r3)
    stb r0, 0x0(r26)
    addi r26, r26, 0x1
lbl_80197F64:
    lwz r4, 0x8(r28)
    cmpwi r30, 0x0
    srwi r3, r4, 29
    subi r0, r3, 0x1
    rlwimi r4, r0, 29, 0, 2
    stw r4, 0x8(r28)
    beq lbl_80197F8C
    srwi r0, r4, 29
    cmplwi r0, 0x3
    bge lbl_80197F0C
lbl_80197F8C:
    lwz r0, 0x8(r28)
    srwi r0, r0, 29
    cmplwi r0, 0x2
    bne lbl_80197FA4
    lwz r0, 0x30(r28)
    stw r0, 0x28(r28)
lbl_80197FA4:
    cmpwi r30, 0x0
    beq lbl_80198080
    lwz r0, 0x28(r28)
    cmpwi r0, 0x0
    bne lbl_80197FC0
    cmpwi r31, 0x0
    beq lbl_80198080
lbl_80197FC0:
    lwz r0, 0x28(r28)
    cmpwi r0, 0x0
    bne lbl_80198024
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    bl fn_80197C00
    cmpwi r3, 0x0
    beq lbl_80198024
    cmpwi r3, 0x1
    bne lbl_80198000
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r28)
    stw r0, 0x28(r28)
    b lbl_8019801C
lbl_80198000:
    lwz r3, 0x8(r28)
    li r0, 0x0
    stw r0, 0x28(r28)
    li r0, 0x1
    clrlwi r3, r3, 3
    stw r3, 0x8(r28)
    stb r0, 0x9(r28)
lbl_8019801C:
    li r30, 0x0
    b lbl_80198080
lbl_80198024:
    lwz r5, 0x28(r28)
    stw r5, 0x8(r1)
    cmplw r5, r30
    ble lbl_8019803C
    mr r5, r30
    stw r30, 0x8(r1)
lbl_8019803C:
    lwz r4, 0x24(r28)
    mr r3, r26
    bl memcpy
    lwz r4, 0x8(r1)
    lwz r3, 0x24(r28)
    lwz r0, 0x28(r28)
    subf. r30, r4, r30
    add r3, r3, r4
    stw r3, 0x24(r28)
    add r26, r26, r4
    add r29, r29, r4
    lwz r3, 0x8(r1)
    subf r0, r3, r0
    stw r0, 0x28(r28)
    beq lbl_80198080
    cmpwi r31, 0x0
    bne lbl_80197FC0
lbl_80198080:
    cmpwi r30, 0x0
    beq lbl_80198110
    cmpwi r31, 0x0
    bne lbl_80198110
    lwz r31, 0x1c(r28)
    mr r3, r28
    lwz r25, 0x20(r28)
    addi r4, r1, 0x8
    stw r26, 0x1c(r28)
    li r5, 0x1
    stw r30, 0x20(r28)
    bl fn_80197C00
    cmpwi r3, 0x0
    beq lbl_801980F0
    cmpwi r3, 0x1
    bne lbl_801980D4
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r28)
    stw r0, 0x28(r28)
    b lbl_801980F0
lbl_801980D4:
    lwz r3, 0x8(r28)
    li r0, 0x0
    stw r0, 0x28(r28)
    li r0, 0x1
    clrlwi r3, r3, 3
    stw r3, 0x8(r28)
    stb r0, 0x9(r28)
lbl_801980F0:
    lwz r0, 0x8(r1)
    mr r3, r28
    stw r31, 0x1c(r28)
    add r29, r29, r0
    stw r25, 0x20(r28)
    bl __prep_buffer
    li r0, 0x0
    stw r0, 0x28(r28)
lbl_80198110:
    divwu r3, r29, r27
lbl_80198114:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: __fwrite
asm size_t __fwrite(const void* pPtr, size_t memb_size, size_t num_memb, FILE* file) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r27, r4
    mr r28, r6
    mr r26, r3
    mr r25, r5
    li r4, 0x0
    mr r3, r28
    bl fwide
    cmpwi r3, 0x0
    bne lbl_80198168
    mr r3, r28
    li r4, -0x1
    bl fwide
lbl_80198168:
    mullw. r30, r27, r25
    beq lbl_80198188
    lbz r0, 0xa(r28)
    cmpwi r0, 0x0
    bne lbl_80198188
    lwz r0, 0x4(r28)
    extrwi. r0, r0, 3, 7
    bne lbl_80198190
lbl_80198188:
    li r3, 0x0
    b lbl_80198420
lbl_80198190:
    cmplwi r0, 0x2
    bne lbl_8019819C
    bl __stdio_atexit
lbl_8019819C:
    lwz r3, 0x4(r28)
    li r31, 0x1
    li r4, 0x0
    extrwi. r0, r3, 1, 12
    beq lbl_801981BC
    extrwi r0, r3, 2, 5
    cmplwi r0, 0x2
    bne lbl_801981C0
lbl_801981BC:
    li r4, 0x1
lbl_801981C0:
    cmpwi r4, 0x0
    bne lbl_801981DC
    lwz r0, 0x4(r28)
    extrwi r0, r0, 2, 5
    cmplwi r0, 0x1
    beq lbl_801981DC
    li r31, 0x0
lbl_801981DC:
    lwz r0, 0x8(r28)
    srwi. r0, r0, 29
    bne lbl_80198238
    lwz r3, 0x4(r28)
    rlwinm. r0, r3, 5, 30, 30
    extrwi r0, r3, 3, 2
    beq lbl_80198238
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_80198220
    mr r3, r28
    li r4, 0x0
    li r5, 0x2
    bl _fseek
    cmpwi r3, 0x0
    beq lbl_80198220
    li r3, 0x0
    b lbl_80198420
lbl_80198220:
    lwz r0, 0x8(r28)
    li r3, 0x1
    rlwimi r0, r3, 29, 0, 2
    stw r0, 0x8(r28)
    mr r3, r28
    bl __prep_buffer
lbl_80198238:
    lwz r0, 0x8(r28)
    srwi r0, r0, 29
    cmplwi r0, 0x1
    beq lbl_80198260
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r28)
    li r3, 0x0
    stw r0, 0x28(r28)
    b lbl_80198420
lbl_80198260:
    cmpwi r30, 0x0
    li r29, 0x0
    beq lbl_80198394
    lwz r3, 0x1c(r28)
    lwz r4, 0x24(r28)
    cmplw r4, r3
    bne lbl_80198284
    cmpwi r31, 0x0
    beq lbl_80198394
lbl_80198284:
    lwz r0, 0x20(r28)
    subf r3, r3, r4
    subf r0, r3, r0
    stw r0, 0x28(r28)
lbl_80198294:
    lwz r5, 0x28(r28)
    li r25, 0x0
    stw r5, 0x8(r1)
    cmplw r5, r30
    ble lbl_801982B0
    mr r5, r30
    stw r30, 0x8(r1)
lbl_801982B0:
    lwz r0, 0x4(r28)
    extrwi r0, r0, 2, 5
    cmplwi r0, 0x1
    bne lbl_801982EC
    cmpwi r5, 0x0
    beq lbl_801982EC
    mr r3, r26
    li r4, 0xa
    bl __memrchr
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_801982EC
    addi r0, r3, 0x1
    subf r5, r26, r0
    stw r5, 0x8(r1)
lbl_801982EC:
    lwz r5, 0x8(r1)
    cmpwi r5, 0x0
    beq lbl_8019832C
    lwz r3, 0x24(r28)
    mr r4, r26
    bl memcpy
    lwz r4, 0x8(r1)
    lwz r3, 0x24(r28)
    lwz r0, 0x28(r28)
    add r26, r26, r4
    add r3, r3, r4
    stw r3, 0x24(r28)
    subf r30, r4, r30
    lwz r3, 0x8(r1)
    subf r0, r3, r0
    stw r0, 0x28(r28)
lbl_8019832C:
    lwz r0, 0x28(r28)
    cmpwi r0, 0x0
    beq lbl_80198350
    cmpwi cr1, r25, 0x0
    bne cr1, lbl_80198350
    lwz r0, 0x4(r28)
    extrwi. r0, r0, 2, 5
    beq lbl_80198350
    bne cr1, lbl_8019837C
lbl_80198350:
    mr r3, r28
    li r4, 0x0
    bl __flush_buffer
    cmpwi r3, 0x0
    beq lbl_8019837C
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r28)
    li r30, 0x0
    stw r0, 0x28(r28)
    b lbl_80198394
lbl_8019837C:
    lwz r0, 0x8(r1)
    cmpwi r30, 0x0
    add r29, r29, r0
    beq lbl_80198394
    cmpwi r31, 0x0
    bne lbl_80198294
lbl_80198394:
    cmpwi r30, 0x0
    beq lbl_80198404
    cmpwi r31, 0x0
    bne lbl_80198404
    lwz r25, 0x1c(r28)
    add r0, r26, r30
    lwz r31, 0x20(r28)
    mr r3, r28
    stw r26, 0x1c(r28)
    addi r4, r1, 0x8
    stw r30, 0x20(r28)
    stw r0, 0x24(r28)
    bl __flush_buffer
    cmpwi r3, 0x0
    beq lbl_801983E4
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r28)
    stw r0, 0x28(r28)
    b lbl_801983EC
lbl_801983E4:
    lwz r0, 0x8(r1)
    add r29, r29, r0
lbl_801983EC:
    stw r25, 0x1c(r28)
    mr r3, r28
    stw r31, 0x20(r28)
    bl __prep_buffer
    li r0, 0x0
    stw r0, 0x28(r28)
lbl_80198404:
    lwz r0, 0x4(r28)
    extrwi r0, r0, 2, 5
    cmplwi r0, 0x2
    beq lbl_8019841C
    li r0, 0x0
    stw r0, 0x28(r28)
lbl_8019841C:
    divwu r3, r29, r27
lbl_80198420:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
