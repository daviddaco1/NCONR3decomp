#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern M2C_UNK lbl_80373088;
extern M2C_UNK lbl_803730A0;
extern M2C_UNK lbl_80373138;
extern M2C_UNK lbl_80373154;
extern M2C_UNK lbl_80373174;
extern M2C_UNK lbl_804276C0;

void gki_init_free_queue();
void gki_buffer_init();
s32 GKI_init_q();
s8 * GKI_getbuf();
s8 * GKI_getpoolbuf();
void GKI_freebuf();
u16 GKI_get_buf_size();
void GKI_send_msg();
s8 * GKI_read_mbox();
void GKI_enqueue();
void GKI_enqueue_head();
s8 * GKI_dequeue();
s8 * GKI_remove_from_queue();
s32 GKI_getfirst();
s32 GKI_getnext();
u8 GKI_queue_is_empty();
u8 GKI_create_pool();


// gki_buffer_init: definicion C reemplazada por asm (ver abajo)


s32 GKI_init_q(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 8) = 0;
    return (s32) arg0;
}

// GKI_getbuf: definicion C reemplazada por asm (ver abajo)


// GKI_getpoolbuf: definicion C reemplazada por asm (ver abajo)


void GKI_freebuf(s32 arg0);

// GKI_get_buf_size: definicion C reemplazada por asm (ver abajo)



s8 *GKI_read_mbox(u32 arg0);

// GKI_enqueue: definicion C reemplazada por asm (ver abajo)


void GKI_enqueue_head(s8 *arg0, s32 arg1);

s8 *GKI_dequeue(s8 *arg0) {
    s32 temp_r3;
    s8 *temp_r31;

    GKI_disable();
    if ((arg0 == NULL) || ((s32) M2C_FIELD(arg0, u16 *, 8) == 0)) {
        GKI_enable();
        return NULL;
    }
    temp_r31 = M2C_FIELD(arg0, s8 **, 0);
    temp_r3 = M2C_FIELD(temp_r31, s32 *, -8);
    if (temp_r3 != 0) {
        M2C_FIELD(arg0, s8 **, 0) = (s8 *) (temp_r3 + 8);
    } else {
        M2C_FIELD(arg0, s8 **, 0) = NULL;
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) - 1);
    M2C_FIELD(temp_r31, s32 *, -8) = 0;
    M2C_FIELD(temp_r31, s8 *, -2) = 1;
    GKI_enable();
    return temp_r31;
}

s8 *GKI_remove_from_queue(s8 *arg0, s8 *arg1);

s32 GKI_getfirst(s32 *arg0) {
    return *arg0;
}

// GKI_getnext: definicion C reemplazada por asm (ver abajo)


u8 GKI_queue_is_empty(s8 *arg0) {
    return (u8) (M2C_FIELD(arg0, u16 *, 8) == 0);
}


// ---- Funciones aun sin C que matchee (asm generado) ----
u8 GKI_create_pool();
void GKI_enqueue(s8 *arg0, s8 *arg1);
void GKI_enqueue_head();
extern void GKI_exception();
void GKI_freebuf();
u16 GKI_get_buf_size(s32 arg0);
s8 *GKI_getbuf(s32 arg0);
s32 GKI_getnext(s8 *arg0);
s8 *GKI_getpoolbuf(u32 arg0);
s8 * GKI_read_mbox();
s8 * GKI_remove_from_queue();
void GKI_send_msg();
extern void _restgpr_18();
extern void _restgpr_27();
extern void _savegpr_18();
extern void _savegpr_27();
void gki_buffer_init(void);
void gki_init_free_queue();

// asm_to_cpp: gki_init_free_queue
asm void gki_init_free_queue() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_18
    addi r12, r4, 0x3
    lis r4, lbl_804276C0@ha
    clrrwi r9, r12, 2
    clrlslwi r11, r3, 24, 2
    addi r26, r9, 0xc
    addi r4, r4, lbl_804276C0@l
    clrlwi r8, r26, 16
    clrlslwi r0, r3, 24, 4
    mullw r7, r8, r5
    addi r10, r4, 0x54
    clrlslwi r4, r3, 24, 1
    addis r25, r10, 0x3
    rlwinm r12, r12, 0, 16, 29
    add r24, r25, r11
    add r11, r6, r7
    stw r6, -0x75e4(r24)
    add r7, r25, r4
    li r4, 0x0
    stw r11, -0x75c0(r24)
    add r11, r25, r0
    cmpwi r5, 0x0
    sth r26, -0x759c(r7)
    li r7, 0x0
    sth r12, -0x766c(r11)
    sth r5, -0x766a(r11)
    sth r4, -0x7668(r11)
    sth r4, -0x7666(r11)
    stw r6, -0x7674(r11)
    beq lbl_802A2520
    cmplwi r5, 0x8
    addis r11, r5, 0x1
    subi r11, r11, 0x8
    ble lbl_802A24D4
    clrlwi r12, r11, 16
    lis r27, 0xddbb
    addi r11, r12, 0x7
    li r24, 0xf0
    srwi r11, r11, 3
    subi r26, r27, 0x2246
    li r25, 0x0
    mtctr r11
    cmplwi r12, 0x0
    ble lbl_802A24D4
lbl_802A23EC:
    stb r24, 0x5(r6)
    add r18, r6, r8
    add r19, r18, r8
    add r4, r6, r9
    stb r3, 0x4(r6)
    add r20, r19, r8
    add r21, r20, r8
    add r27, r18, r9
    stb r25, 0x6(r6)
    add r22, r21, r8
    add r23, r22, r8
    add r28, r19, r9
    stw r26, 0x8(r4)
    add r4, r23, r8
    add r31, r20, r9
    add r30, r21, r9
    stw r18, 0x0(r6)
    add r29, r22, r9
    add r12, r23, r9
    add r11, r4, r9
    stb r24, 0x5(r18)
    add r6, r4, r8
    addi r7, r7, 0x8
    stb r3, 0x4(r18)
    stb r25, 0x6(r18)
    stw r26, 0x8(r27)
    stw r19, 0x0(r18)
    stb r24, 0x5(r19)
    stb r3, 0x4(r19)
    stb r25, 0x6(r19)
    stw r26, 0x8(r28)
    stwx r20, r18, r8
    stb r24, 0x5(r20)
    stb r3, 0x4(r20)
    stb r25, 0x6(r20)
    stw r26, 0x8(r31)
    stwx r21, r19, r8
    stb r24, 0x5(r21)
    stb r3, 0x4(r21)
    stb r25, 0x6(r21)
    stw r26, 0x8(r30)
    stwx r22, r20, r8
    stb r24, 0x5(r22)
    stb r3, 0x4(r22)
    stb r25, 0x6(r22)
    stw r26, 0x8(r29)
    stwx r23, r21, r8
    stb r24, 0x5(r23)
    stb r3, 0x4(r23)
    stb r25, 0x6(r23)
    stw r26, 0x8(r12)
    stwx r4, r22, r8
    stb r24, 0x5(r4)
    stb r3, 0x4(r4)
    stb r25, 0x6(r4)
    stw r26, 0x8(r11)
    stwx r6, r23, r8
    bdnz lbl_802A23EC
lbl_802A24D4:
    clrlwi r12, r7, 16
    lis r31, 0xddbb
    subf r11, r12, r5
    li r29, 0xf0
    subi r31, r31, 0x2246
    li r30, 0x0
    mtctr r11
    cmplw r12, r5
    bge lbl_802A2520
lbl_802A24F8:
    stb r29, 0x5(r6)
    add r5, r6, r9
    mr r4, r6
    addi r7, r7, 0x1
    stb r3, 0x4(r6)
    stb r30, 0x6(r6)
    add r6, r6, r8
    stw r31, 0x8(r5)
    stw r6, 0x0(r4)
    bdnz lbl_802A24F8
lbl_802A2520:
    li r5, 0x0
    addis r3, r10, 0x3
    stw r5, 0x0(r4)
    add r3, r3, r0
    addi r11, r1, 0x40
    stw r4, -0x7670(r3)
    bl _restgpr_18
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: gki_buffer_init
asm void gki_buffer_init(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_804276C0@ha
    li r6, 0x0
    stw r0, 0x14(r1)
    li r0, 0x2
    addi r3, r3, lbl_804276C0@l
    li r4, 0x0
    stw r31, 0xc(r1)
    addi r31, r3, 0x54
    mtctr r0
lbl_802A2578:
    clrlslwi r0, r6, 24, 4
    addi r6, r6, 0x1
    add r5, r31, r0
    addis r3, r5, 0x3
    clrlslwi r0, r6, 24, 4
    stw r4, -0x7774(r3)
    add r5, r31, r0
    addi r6, r6, 0x1
    stw r4, -0x76f4(r3)
    clrlslwi r0, r6, 24, 4
    addi r6, r6, 0x1
    stw r4, -0x7770(r3)
    stw r4, -0x76f0(r3)
    stw r4, -0x776c(r3)
    stw r4, -0x76ec(r3)
    stw r4, -0x7768(r3)
    stw r4, -0x76e8(r3)
    addis r3, r5, 0x3
    add r5, r31, r0
    clrlslwi r0, r6, 24, 4
    stw r4, -0x7774(r3)
    addi r6, r6, 0x1
    stw r4, -0x76f4(r3)
    stw r4, -0x7770(r3)
    stw r4, -0x76f0(r3)
    stw r4, -0x776c(r3)
    stw r4, -0x76ec(r3)
    stw r4, -0x7768(r3)
    stw r4, -0x76e8(r3)
    addis r3, r5, 0x3
    add r5, r31, r0
    stw r4, -0x7774(r3)
    stw r4, -0x76f4(r3)
    stw r4, -0x7770(r3)
    stw r4, -0x76f0(r3)
    stw r4, -0x776c(r3)
    stw r4, -0x76ec(r3)
    stw r4, -0x7768(r3)
    stw r4, -0x76e8(r3)
    addis r3, r5, 0x3
    stw r4, -0x7774(r3)
    stw r4, -0x76f4(r3)
    stw r4, -0x7770(r3)
    stw r4, -0x76f0(r3)
    stw r4, -0x776c(r3)
    stw r4, -0x76ec(r3)
    stw r4, -0x7768(r3)
    stw r4, -0x76e8(r3)
    bdnz lbl_802A2578
    li r0, 0x3
    li r10, 0x0
    li r7, 0x0
    mtctr r0
lbl_802A264C:
    clrlslwi r0, r10, 24, 2
    clrlslwi r4, r10, 24, 1
    add r8, r31, r0
    addis r6, r8, 0x3
    clrlslwi r0, r10, 24, 4
    stw r7, -0x75e4(r6)
    addis r4, r4, 0x3
    add r9, r31, r0
    addi r10, r10, 0x1
    stw r7, -0x75c0(r6)
    subi r5, r4, 0x759c
    clrlslwi r0, r10, 24, 2
    clrlslwi r4, r10, 24, 1
    sthx r7, r31, r5
    add r8, r31, r0
    addis r3, r9, 0x3
    clrlslwi r0, r10, 24, 4
    stw r7, -0x7674(r3)
    addis r4, r4, 0x3
    addis r6, r8, 0x3
    add r9, r31, r0
    stw r7, -0x7670(r3)
    addi r10, r10, 0x1
    subi r5, r4, 0x759c
    sth r7, -0x766c(r3)
    clrlslwi r0, r10, 24, 2
    add r8, r31, r0
    clrlslwi r4, r10, 24, 1
    sth r7, -0x766a(r3)
    clrlslwi r0, r10, 24, 4
    addis r4, r4, 0x3
    addi r10, r10, 0x1
    sth r7, -0x7668(r3)
    sth r7, -0x7666(r3)
    addis r3, r9, 0x3
    add r9, r31, r0
    stw r7, -0x75e4(r6)
    stw r7, -0x75c0(r6)
    addis r6, r8, 0x3
    sthx r7, r31, r5
    subi r5, r4, 0x759c
    stw r7, -0x7674(r3)
    stw r7, -0x7670(r3)
    sth r7, -0x766c(r3)
    sth r7, -0x766a(r3)
    sth r7, -0x7668(r3)
    sth r7, -0x7666(r3)
    addis r3, r9, 0x3
    stw r7, -0x75e4(r6)
    stw r7, -0x75c0(r6)
    sthx r7, r31, r5
    stw r7, -0x7674(r3)
    stw r7, -0x7670(r3)
    sth r7, -0x766c(r3)
    sth r7, -0x766a(r3)
    sth r7, -0x7668(r3)
    sth r7, -0x7666(r3)
    bdnz lbl_802A264C
    lis r4, 0x1
    addis r3, r31, 0x3
    subi r0, r4, 0x10
    mr r6, r31
    sth r0, -0x7584(r3)
    li r3, 0x0
    li r4, 0x40
    li r5, 0x30
    bl gki_init_free_queue
    addi r6, r31, 0xe40
    li r3, 0x1
    li r4, 0x80
    li r5, 0x1a
    bl gki_init_free_queue
    addi r6, r31, 0x1c78
    li r3, 0x2
    li r4, 0x294
    li r5, 0x2d
    bl gki_init_free_queue
    addis r6, r31, 0x1
    li r3, 0x3
    li r4, 0x708
    li r5, 0x1e
    subi r6, r6, 0x6d68
    bl gki_init_free_queue
    addis r6, r31, 0x1
    li r3, 0x4
    li r4, 0x2000
    li r5, 0x9
    addi r6, r6, 0x66f0
    bl gki_init_free_queue
    addis r6, r31, 0x3
    li r0, 0x0
    stb r0, -0x7582(r6)
    li r0, 0x1
    li r5, 0x2
    li r4, 0x3
    stb r0, -0x7581(r6)
    li r3, 0x4
    li r0, 0x5
    stb r5, -0x7580(r6)
    stb r4, -0x757f(r6)
    stb r3, -0x757e(r6)
    stb r0, -0x7579(r6)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: GKI_getbuf
asm s8 *GKI_getbuf(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_804276C0@ha
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    addi r4, r4, lbl_804276C0@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    addi r30, r4, 0x54
    bne lbl_802A2854
    lis r3, 0x1
    lis r4, lbl_80373088@ha
    subi r0, r3, 0xa
    clrlwi r3, r0, 16
    addi r4, r4, lbl_80373088@l
    bl GKI_exception
    li r3, 0x0
    b lbl_802A2994
lbl_802A2854:
    addis r4, r30, 0x3
    li r31, 0x0
    lbz r5, -0x7579(r4)
    b lbl_802A2890
lbl_802A2864:
    clrlwi r4, r31, 24
    addis r4, r4, 0x3
    subi r0, r4, 0x7582
    lbzx r0, r30, r0
    slwi r4, r0, 4
    addis r4, r4, 0x3
    subi r0, r4, 0x766c
    lhzx r0, r30, r0
    cmplw r3, r0
    ble lbl_802A289C
    addi r31, r31, 0x1
lbl_802A2890:
    clrlwi r0, r31, 24
    cmplw r0, r5
    blt lbl_802A2864
lbl_802A289C:
    clrlwi r0, r31, 24
    cmplw r0, r5
    bne lbl_802A28C8
    lis r3, 0x1
    lis r4, lbl_803730A0@ha
    subi r0, r3, 0x9
    clrlwi r3, r0, 16
    addi r4, r4, lbl_803730A0@l
    bl GKI_exception
    li r3, 0x0
    b lbl_802A2994
lbl_802A28C8:
    bl GKI_disable
    addis r6, r30, 0x3
    li r5, 0x1
    lbz r7, -0x7579(r6)
    b lbl_802A2980
lbl_802A28DC:
    clrlwi r4, r31, 24
    lhz r3, -0x7584(r6)
    addis r4, r4, 0x3
    subi r0, r4, 0x7582
    lbzx r4, r30, r0
    slw r0, r5, r4
    and. r0, r3, r0
    bne lbl_802A297C
    clrlslwi r0, r4, 24, 4
    add r4, r6, r0
    lhz r3, -0x7668(r4)
    lhz r0, -0x766a(r4)
    cmplw r3, r0
    bge lbl_802A297C
    lwz r30, -0x7674(r4)
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    stw r0, -0x7674(r4)
    bne lbl_802A2930
    li r0, 0x0
    stw r0, -0x7670(r4)
lbl_802A2930:
    lhz r3, -0x7668(r4)
    addi r0, r3, 0x1
    sth r0, -0x7668(r4)
    clrlwi r3, r0, 16
    lhz r0, -0x7666(r4)
    cmplw r3, r0
    ble lbl_802A2954
    lhz r0, -0x7668(r4)
    sth r0, -0x7666(r4)
lbl_802A2954:
    bl GKI_enable
    bl GKI_get_taskid
    stb r3, 0x5(r30)
    li r4, 0x1
    li r0, 0x0
    addi r3, r30, 0x8
    stb r4, 0x6(r30)
    stw r0, 0x0(r30)
    stb r0, 0x7(r30)
    b lbl_802A2994
lbl_802A297C:
    addi r31, r31, 0x1
lbl_802A2980:
    clrlwi r0, r31, 24
    cmplw r0, r7
    blt lbl_802A28DC
    bl GKI_enable
    li r3, 0x0
lbl_802A2994:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: GKI_getpoolbuf
asm s8 *GKI_getpoolbuf(u32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_804276C0@ha
    cmplwi r3, 0x9
    stw r0, 0x14(r1)
    addi r4, r4, lbl_804276C0@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    addi r30, r4, 0x54
    blt lbl_802A29E0
    li r3, 0x0
    b lbl_802A2A7C
lbl_802A29E0:
    bl GKI_disable
    clrlslwi r31, r31, 24, 4
    addis r0, r30, 0x3
    add r4, r0, r31
    lhz r3, -0x7668(r4)
    lhz r0, -0x766a(r4)
    cmplw r3, r0
    bge lbl_802A2A68
    lwz r31, -0x7674(r4)
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    stw r0, -0x7674(r4)
    bne lbl_802A2A1C
    li r0, 0x0
    stw r0, -0x7670(r4)
lbl_802A2A1C:
    lhz r3, -0x7668(r4)
    addi r0, r3, 0x1
    sth r0, -0x7668(r4)
    clrlwi r3, r0, 16
    lhz r0, -0x7666(r4)
    cmplw r3, r0
    ble lbl_802A2A40
    lhz r0, -0x7668(r4)
    sth r0, -0x7666(r4)
lbl_802A2A40:
    bl GKI_enable
    bl GKI_get_taskid
    stb r3, 0x5(r31)
    li r4, 0x1
    li r0, 0x0
    addi r3, r31, 0x8
    stb r4, 0x6(r31)
    stw r0, 0x0(r31)
    stb r0, 0x7(r31)
    b lbl_802A2A7C
lbl_802A2A68:
    bl GKI_enable
    addis r0, r30, 0x3
    add r3, r0, r31
    lhz r3, -0x766c(r3)
    bl GKI_getbuf
lbl_802A2A7C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: GKI_freebuf
asm void GKI_freebuf() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80373088@ha
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80373088@l
    stw r31, 0xc(r1)
    beq lbl_802A2B2C
    subi r31, r3, 0x8
    clrlwi. r0, r31, 31
    beq lbl_802A2AC8
    li r0, 0x0
    b lbl_802A2AF4
lbl_802A2AC8:
    lbz r0, 0x4(r31)
    cmplwi r0, 0x9
    bge lbl_802A2AF0
    lis r4, lbl_804276C0@ha
    clrlslwi r0, r0, 24, 4
    addi r4, r4, lbl_804276C0@l
    addis r4, r4, 0x3
    add r4, r4, r0
    lhz r0, -0x7618(r4)
    b lbl_802A2AF4
lbl_802A2AF0:
    li r0, 0x0
lbl_802A2AF4:
    add r4, r3, r0
    clrlwi. r0, r4, 31
    beq lbl_802A2B08
    li r0, 0x1
    b lbl_802A2B24
lbl_802A2B08:
    lis r3, 0xddbb
    lwz r4, 0x0(r4)
    subi r0, r3, 0x2246
    subf r3, r4, r0
    subf r0, r0, r4
    or r0, r3, r0
    srwi r0, r0, 31
lbl_802A2B24:
    clrlwi. r0, r0, 24
    beq lbl_802A2B44
lbl_802A2B2C:
    lis r3, 0x1
    addi r4, r5, 0x30
    subi r0, r3, 0x1
    clrlwi r3, r0, 16
    bl GKI_exception
    b lbl_802A2BF0
lbl_802A2B44:
    lbz r0, 0x6(r31)
    cmplwi r0, 0x1
    beq lbl_802A2B68
    lis r3, 0x1
    addi r4, r5, 0x48
    subi r0, r3, 0x4
    clrlwi r3, r0, 16
    bl GKI_exception
    b lbl_802A2BF0
lbl_802A2B68:
    lbz r0, 0x4(r31)
    cmplwi r0, 0x9
    blt lbl_802A2B8C
    lis r3, 0x1
    addi r4, r5, 0x5c
    subi r0, r3, 0x3
    clrlwi r3, r0, 16
    bl GKI_exception
    b lbl_802A2BF0
lbl_802A2B8C:
    bl GKI_disable
    lbz r0, 0x4(r31)
    lis r3, lbl_804276C0@ha
    addi r3, r3, lbl_804276C0@l
    addis r3, r3, 0x3
    slwi r0, r0, 4
    add r4, r3, r0
    lwz r3, -0x761c(r4)
    cmpwi r3, 0x0
    beq lbl_802A2BBC
    stw r31, 0x0(r3)
    b lbl_802A2BC0
lbl_802A2BBC:
    stw r31, -0x7620(r4)
lbl_802A2BC0:
    stw r31, -0x761c(r4)
    li r3, 0x0
    li r0, 0xf0
    stw r3, 0x0(r31)
    stb r3, 0x6(r31)
    stb r0, 0x5(r31)
    lhz r3, -0x7614(r4)
    cmpwi r3, 0x0
    beq lbl_802A2BEC
    subi r0, r3, 0x1
    sth r0, -0x7614(r4)
lbl_802A2BEC:
    bl GKI_enable
lbl_802A2BF0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: GKI_get_buf_size
asm u16 GKI_get_buf_size(s32 arg0) {
    nofralloc
    subi r3, r3, 0x8
    clrlwi. r0, r3, 31
    beq lbl_802A2C18
    li r3, 0x0
    blr
lbl_802A2C18:
    lbz r0, 0x4(r3)
    cmplwi r0, 0x9
    bge lbl_802A2C40
    lis r3, lbl_804276C0@ha
    clrlslwi r0, r0, 24, 4
    addi r3, r3, lbl_804276C0@l
    addis r3, r3, 0x3
    add r3, r3, r0
    lhz r3, -0x7618(r3)
    blr
lbl_802A2C40:
    li r3, 0x0
    blr
}

// asm_to_cpp: GKI_send_msg
asm void GKI_send_msg() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_804276C0@ha
    lis r6, lbl_80373088@ha
    stw r0, 0x24(r1)
    cmplwi r3, 0x8
    addi r7, r7, lbl_804276C0@l
    addi r6, r6, lbl_80373088@l
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    addi r30, r7, 0x54
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bge lbl_802A2CA8
    cmplwi r4, 0x4
    bge lbl_802A2CA8
    addis r0, r30, 0x3
    add r3, r0, r3
    lbz r0, -0x7854(r3)
    cmpwi r0, 0x0
    bne lbl_802A2CC8
lbl_802A2CA8:
    lis r3, 0x1
    addi r4, r6, 0x68
    subi r0, r3, 0x5
    clrlwi r3, r0, 16
    bl GKI_exception
    mr r3, r31
    bl GKI_freebuf
    b lbl_802A2DE4
lbl_802A2CC8:
    subi r31, r5, 0x8
    clrlwi. r0, r31, 31
    beq lbl_802A2CDC
    li r0, 0x0
    b lbl_802A2D00
lbl_802A2CDC:
    lbz r0, 0x4(r31)
    cmplwi r0, 0x9
    bge lbl_802A2CFC
    addis r3, r7, 0x3
    clrlslwi r0, r0, 24, 4
    add r3, r3, r0
    lhz r0, -0x7618(r3)
    b lbl_802A2D00
lbl_802A2CFC:
    li r0, 0x0
lbl_802A2D00:
    add r4, r5, r0
    clrlwi. r0, r4, 31
    beq lbl_802A2D14
    li r0, 0x1
    b lbl_802A2D30
lbl_802A2D14:
    lis r3, 0xddbb
    lwz r4, 0x0(r4)
    subi r0, r3, 0x2246
    subf r3, r4, r0
    subf r0, r0, r4
    or r0, r3, r0
    srwi r0, r0, 31
lbl_802A2D30:
    clrlwi. r0, r0, 24
    beq lbl_802A2D50
    lis r3, 0x1
    addi r4, r6, 0x80
    subi r0, r3, 0x1
    clrlwi r3, r0, 16
    bl GKI_exception
    b lbl_802A2DE4
lbl_802A2D50:
    lbz r0, 0x6(r31)
    cmplwi r0, 0x1
    beq lbl_802A2D74
    lis r3, 0x1
    addi r4, r6, 0x98
    subi r0, r3, 0x6
    clrlwi r3, r0, 16
    bl GKI_exception
    b lbl_802A2DE4
lbl_802A2D74:
    bl GKI_disable
    clrlslwi r4, r28, 24, 4
    addis r0, r30, 0x3
    clrlslwi r5, r29, 24, 2
    add r0, r0, r4
    add r3, r0, r5
    lwz r0, -0x7774(r3)
    cmpwi r0, 0x0
    beq lbl_802A2DA4
    lwz r3, -0x76f4(r3)
    stw r31, 0x0(r3)
    b lbl_802A2DA8
lbl_802A2DA4:
    stw r31, -0x7774(r3)
lbl_802A2DA8:
    addis r0, r30, 0x3
    li r3, 0x0
    add r4, r0, r4
    add r4, r4, r5
    li r0, 0x2
    stw r31, -0x76f4(r4)
    stw r3, 0x0(r31)
    stb r0, 0x6(r31)
    stb r28, 0x5(r31)
    bl GKI_enable
    li r0, 0x1
    mr r3, r28
    slw r0, r0, r29
    clrlwi r4, r0, 16
    bl GKI_send_event
lbl_802A2DE4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: GKI_read_mbox
asm s8 * GKI_read_mbox() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl GKI_get_taskid
    clrlwi r0, r3, 24
    mr r31, r3
    cmplwi r0, 0x8
    li r30, 0x0
    bge lbl_802A2E40
    cmplwi r29, 0x4
    blt lbl_802A2E48
lbl_802A2E40:
    li r3, 0x0
    b lbl_802A2E98
lbl_802A2E48:
    bl GKI_disable
    lis r3, lbl_804276C0@ha
    clrlslwi r4, r31, 24, 4
    addi r3, r3, lbl_804276C0@l
    clrlslwi r6, r29, 24, 2
    addis r0, r3, 0x3
    add r3, r0, r4
    subi r7, r3, 0x7720
    lwzx r5, r7, r6
    cmpwi r5, 0x0
    beq lbl_802A2E90
    lwz r4, 0x0(r5)
    li r3, 0x0
    li r0, 0x1
    addi r30, r5, 0x8
    stwx r4, r7, r6
    stw r3, 0x0(r5)
    stb r0, 0x6(r5)
lbl_802A2E90:
    bl GKI_enable
    mr r3, r30
lbl_802A2E98:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: GKI_enqueue
asm void GKI_enqueue(s8 *arg0, s8 *arg1) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    subi r31, r4, 0x8
    clrlwi. r0, r31, 31
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_802A2EE8
    li r0, 0x0
    b lbl_802A2F14
lbl_802A2EE8:
    lbz r0, 0x4(r31)
    cmplwi r0, 0x9
    bge lbl_802A2F10
    lis r3, lbl_804276C0@ha
    clrlslwi r0, r0, 24, 4
    addi r3, r3, lbl_804276C0@l
    addis r3, r3, 0x3
    add r3, r3, r0
    lhz r0, -0x7618(r3)
    b lbl_802A2F14
lbl_802A2F10:
    li r0, 0x0
lbl_802A2F14:
    add r4, r4, r0
    clrlwi. r0, r4, 31
    beq lbl_802A2F28
    li r0, 0x1
    b lbl_802A2F44
lbl_802A2F28:
    lis r3, 0xddbb
    lwz r4, 0x0(r4)
    subi r0, r3, 0x2246
    subf r3, r4, r0
    subf r0, r0, r4
    or r0, r3, r0
    srwi r0, r0, 31
lbl_802A2F44:
    clrlwi. r0, r0, 24
    beq lbl_802A2F68
    lis r3, 0x1
    lis r4, lbl_80373138@ha
    subi r0, r3, 0x1
    clrlwi r3, r0, 16
    addi r4, r4, lbl_80373138@l
    bl GKI_exception
    b lbl_802A2FD4
lbl_802A2F68:
    lbz r0, 0x6(r31)
    cmplwi r0, 0x1
    beq lbl_802A2F90
    lis r3, 0x1
    lis r4, lbl_80373154@ha
    subi r0, r3, 0x7
    clrlwi r3, r0, 16
    addi r4, r4, lbl_80373154@l
    bl GKI_exception
    b lbl_802A2FD4
lbl_802A2F90:
    bl GKI_disable
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_802A2FAC
    lwz r3, 0x4(r29)
    stw r31, -0x8(r3)
    b lbl_802A2FB0
lbl_802A2FAC:
    stw r30, 0x0(r29)
lbl_802A2FB0:
    lhz r4, 0x8(r29)
    li r3, 0x0
    stw r30, 0x4(r29)
    li r0, 0x2
    addi r4, r4, 0x1
    sth r4, 0x8(r29)
    stw r3, 0x0(r31)
    stb r0, 0x6(r31)
    bl GKI_enable
lbl_802A2FD4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: GKI_enqueue_head
asm void GKI_enqueue_head() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    subi r31, r4, 0x8
    clrlwi. r0, r31, 31
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_802A3024
    li r0, 0x0
    b lbl_802A3050
lbl_802A3024:
    lbz r0, 0x4(r31)
    cmplwi r0, 0x9
    bge lbl_802A304C
    lis r3, lbl_804276C0@ha
    clrlslwi r0, r0, 24, 4
    addi r3, r3, lbl_804276C0@l
    addis r3, r3, 0x3
    add r3, r3, r0
    lhz r0, -0x7618(r3)
    b lbl_802A3050
lbl_802A304C:
    li r0, 0x0
lbl_802A3050:
    add r4, r4, r0
    clrlwi. r0, r4, 31
    beq lbl_802A3064
    li r0, 0x1
    b lbl_802A3080
lbl_802A3064:
    lis r3, 0xddbb
    lwz r4, 0x0(r4)
    subi r0, r3, 0x2246
    subf r3, r4, r0
    subf r0, r0, r4
    or r0, r3, r0
    srwi r0, r0, 31
lbl_802A3080:
    clrlwi. r0, r0, 24
    beq lbl_802A30A4
    lis r3, 0x1
    lis r4, lbl_80373138@ha
    subi r0, r3, 0x1
    clrlwi r3, r0, 16
    addi r4, r4, lbl_80373138@l
    bl GKI_exception
    b lbl_802A3114
lbl_802A30A4:
    lbz r0, 0x6(r31)
    cmplwi r0, 0x1
    beq lbl_802A30CC
    lis r3, 0x1
    lis r4, lbl_80373174@ha
    subi r0, r3, 0x7
    clrlwi r3, r0, 16
    addi r4, r4, lbl_80373174@l
    bl GKI_exception
    b lbl_802A3114
lbl_802A30CC:
    bl GKI_disable
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_802A30EC
    subi r0, r3, 0x8
    stw r0, 0x0(r31)
    stw r30, 0x0(r29)
    b lbl_802A30FC
lbl_802A30EC:
    stw r30, 0x0(r29)
    li r0, 0x0
    stw r30, 0x4(r29)
    stw r0, 0x0(r31)
lbl_802A30FC:
    lhz r3, 0x8(r29)
    li r0, 0x2
    addi r3, r3, 0x1
    sth r3, 0x8(r29)
    stb r0, 0x6(r31)
    bl GKI_enable
lbl_802A3114:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: GKI_remove_from_queue
asm s8 * GKI_remove_from_queue() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl GKI_disable
    lwz r3, 0x0(r30)
    cmplw r31, r3
    bne lbl_802A320C
    bl GKI_enable
    mr r3, r30
    bl GKI_dequeue
    b lbl_802A327C
lbl_802A320C:
    subi r5, r31, 0x8
    subi r3, r3, 0x8
    b lbl_802A326C
lbl_802A3218:
    lwz r0, 0x0(r3)
    cmplw r0, r5
    bne lbl_802A3268
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r30)
    cmplw r31, r0
    bne lbl_802A3240
    addi r0, r3, 0x8
    stw r0, 0x4(r30)
lbl_802A3240:
    lhz r4, 0x8(r30)
    li r3, 0x0
    li r0, 0x1
    subi r4, r4, 0x1
    sth r4, 0x8(r30)
    stw r3, 0x0(r5)
    stb r0, 0x6(r5)
    bl GKI_enable
    mr r3, r31
    b lbl_802A327C
lbl_802A3268:
    mr r3, r0
lbl_802A326C:
    cmpwi r3, 0x0
    bne lbl_802A3218
    bl GKI_enable
    li r3, 0x0
lbl_802A327C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: GKI_getnext
asm s32 GKI_getnext(s8 *arg0) {
    nofralloc
    lwz r3, -0x8(r3)
    cmpwi r3, 0x0
    beq lbl_802A32B0
    addi r3, r3, 0x8
    blr
lbl_802A32B0:
    li r3, 0x0
    blr
}

// asm_to_cpp: GKI_create_pool
asm u8 GKI_create_pool() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r7, lbl_804276C0@ha
    cmplwi r3, 0xfff3
    addi r7, r7, lbl_804276C0@l
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r30, r7, 0x54
    ble lbl_802A3304
    li r3, 0xff
    b lbl_802A35F8
lbl_802A3304:
    li r0, 0x3
    li r31, 0x0
    mtctr r0
lbl_802A3310:
    clrlslwi r5, r31, 24, 2
    addis r5, r5, 0x3
    subi r0, r5, 0x75e4
    lwzx r0, r30, r0
    cmpwi r0, 0x0
    beq lbl_802A3368
    addi r31, r31, 0x1
    clrlslwi r5, r31, 24, 2
    addis r5, r5, 0x3
    subi r0, r5, 0x75e4
    lwzx r0, r30, r0
    cmpwi r0, 0x0
    beq lbl_802A3368
    addi r31, r31, 0x1
    clrlslwi r5, r31, 24, 2
    addis r5, r5, 0x3
    subi r0, r5, 0x75e4
    lwzx r0, r30, r0
    cmpwi r0, 0x0
    beq lbl_802A3368
    addi r31, r31, 0x1
    bdnz lbl_802A3310
lbl_802A3368:
    clrlwi r0, r31, 24
    cmplwi r0, 0x9
    bne lbl_802A337C
    li r3, 0xff
    b lbl_802A35F8
lbl_802A337C:
    addi r0, r3, 0x3
    cmpwi r6, 0x0
    clrrwi r3, r0, 2
    addi r0, r3, 0xc
    mullw r3, r0, r4
    bne lbl_802A339C
    bl GKI_os_malloc
    mr r6, r3
lbl_802A339C:
    cmpwi r6, 0x0
    beq lbl_802A35F4
    mr r4, r27
    mr r5, r28
    clrlwi r3, r31, 24
    bl gki_init_free_queue
    lis r3, lbl_804276C0@ha
    clrlslwi r5, r31, 24, 4
    addi r3, r3, lbl_804276C0@l
    li r4, 0x0
    addi r3, r3, 0x54
    addis r6, r5, 0x3
    addis r5, r3, 0x3
    lbz r5, -0x7579(r5)
    subi r0, r6, 0x766c
    lhzx r7, r3, r0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_802A3414
lbl_802A33E8:
    addis r6, r4, 0x3
    subi r0, r6, 0x7582
    lbzx r0, r3, r0
    slwi r6, r0, 4
    addis r6, r6, 0x3
    subi r0, r6, 0x766c
    lhzx r0, r3, r0
    cmplw r7, r0
    ble lbl_802A3414
    addi r4, r4, 0x1
    bdnz lbl_802A33E8
lbl_802A3414:
    cmpw r5, r4
    ble lbl_802A357C
    subf r0, r4, r5
    addi r8, r4, 0x8
    cmpwi r0, 0x8
    ble lbl_802A3554
    addis r6, r3, 0x3
    li r9, 0x0
    lbz r0, -0x7579(r6)
    li r10, 0x0
    li r11, 0x0
    li r7, 0x0
    cmpw r0, r4
    blt lbl_802A3460
    lis r6, 0x8000
    addi r0, r6, 0x1
    cmpw r4, r0
    blt lbl_802A3460
    li r7, 0x1
lbl_802A3460:
    cmpwi r7, 0x0
    beq lbl_802A3484
    addis r7, r3, 0x3
    lis r6, 0x8000
    lbz r7, -0x7579(r7)
    addi r0, r6, 0x1
    cmpw r7, r0
    blt lbl_802A3484
    li r11, 0x1
lbl_802A3484:
    cmpwi r11, 0x0
    beq lbl_802A349C
    addis r0, r4, 0x8000
    cmplwi r0, 0x0
    beq lbl_802A349C
    li r10, 0x1
lbl_802A349C:
    cmpwi r10, 0x0
    beq lbl_802A34E4
    addis r6, r3, 0x3
    neg r0, r4
    lbz r10, -0x7579(r6)
    clrrwi r0, r0, 31
    li r6, 0x1
    clrrwi r7, r10, 31
    cmpw r7, r0
    bne lbl_802A34D8
    subf r0, r4, r10
    clrrwi r0, r0, 31
    cmpw r7, r0
    beq lbl_802A34D8
    li r6, 0x0
lbl_802A34D8:
    cmpwi r6, 0x0
    beq lbl_802A34E4
    li r9, 0x1
lbl_802A34E4:
    cmpwi r9, 0x0
    beq lbl_802A3554
    addi r0, r5, 0x7
    subf r0, r8, r0
    srwi r0, r0, 3
    mtctr r0
    cmpw r5, r8
    ble lbl_802A3554
lbl_802A3504:
    add r6, r3, r5
    subi r5, r5, 0x8
    addis r6, r6, 0x3
    lbz r0, -0x7583(r6)
    stb r0, -0x7582(r6)
    lbz r0, -0x7584(r6)
    stb r0, -0x7583(r6)
    lbz r0, -0x7585(r6)
    stb r0, -0x7584(r6)
    lbz r0, -0x7586(r6)
    stb r0, -0x7585(r6)
    lbz r0, -0x7587(r6)
    stb r0, -0x7586(r6)
    lbz r0, -0x7588(r6)
    stb r0, -0x7587(r6)
    lbz r0, -0x7589(r6)
    stb r0, -0x7588(r6)
    lbz r0, -0x758a(r6)
    stb r0, -0x7589(r6)
    bdnz lbl_802A3504
lbl_802A3554:
    subf r0, r4, r5
    mtctr r0
    cmpw r5, r4
    ble lbl_802A357C
lbl_802A3564:
    add r6, r3, r5
    subi r5, r5, 0x1
    addis r6, r6, 0x3
    lbz r0, -0x7583(r6)
    stb r0, -0x7582(r6)
    bdnz lbl_802A3564
lbl_802A357C:
    addis r0, r3, 0x3
    clrlwi r5, r31, 24
    add r4, r0, r4
    lis r3, lbl_804276C0@ha
    addi r3, r3, lbl_804276C0@l
    cmplwi r5, 0x9
    stb r31, -0x7582(r4)
    addi r3, r3, 0x54
    bge lbl_802A35DC
    cmplwi r29, 0x1
    bne lbl_802A35C4
    addis r4, r3, 0x3
    li r0, 0x1
    lhz r3, -0x7584(r4)
    slw r0, r0, r5
    or r0, r3, r0
    sth r0, -0x7584(r4)
    b lbl_802A35DC
lbl_802A35C4:
    addis r4, r3, 0x3
    li r0, 0x1
    lhz r3, -0x7584(r4)
    slw r0, r0, r5
    andc r0, r3, r0
    sth r0, -0x7584(r4)
lbl_802A35DC:
    addis r5, r30, 0x3
    mr r3, r31
    lbz r4, -0x7579(r5)
    addi r0, r4, 0x1
    stb r0, -0x7579(r5)
    b lbl_802A35F8
lbl_802A35F4:
    li r3, 0xff
lbl_802A35F8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
