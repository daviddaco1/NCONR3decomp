#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern M2C_UNK lbl_804276C0;

void gki_timers_init();
s32 GKI_get_tick_count();
void fn_802A3840();
void GKI_stop_timer();
void fn_802A3A18();
s32 fn_802A3A2C();
void fn_802A3AB8();
void GKI_remove_from_timer_list();

// gki_timers_init: definicion C reemplazada por asm (ver abajo)


// GKI_get_tick_count: definicion C reemplazada por asm (ver abajo)


// fn_802A3840: definicion C reemplazada por asm (ver abajo)


// GKI_stop_timer: definicion C reemplazada por asm (ver abajo)


void fn_802A3A18(s8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

// fn_802A3A2C: definicion C reemplazada por asm (ver abajo)


void fn_802A3AB8(s8 *arg0, s32 *arg1);

// GKI_remove_from_timer_list: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern void GKI_disable();
extern void GKI_enable();
s32 GKI_get_tick_count(void);
void GKI_remove_from_timer_list(s8 *arg0, s8 *arg1);
void GKI_stop_timer(s32 arg0);
extern void _restgpr_27();
extern void _savegpr_27();
void fn_802A3840(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0);
s32 fn_802A3A2C(s8 *arg0, s32 arg1);
void fn_802A3AB8();
void gki_timers_init(void);

// asm_to_cpp: gki_timers_init
asm void gki_timers_init(void) {
    nofralloc
    lis r3, lbl_804276C0@ha
    li r0, 0x0
    addi r3, r3, lbl_804276C0@l
    addis r3, r3, 0x3
    stw r0, -0x77c8(r3)
    stw r0, -0x77c4(r3)
    stw r0, -0x77c0(r3)
    stw r0, -0x77a0(r3)
    stw r0, -0x7780(r3)
    stw r0, -0x7760(r3)
    stw r0, -0x7740(r3)
    stw r0, -0x77bc(r3)
    stw r0, -0x779c(r3)
    stw r0, -0x777c(r3)
    stw r0, -0x775c(r3)
    stw r0, -0x773c(r3)
    stw r0, -0x77b8(r3)
    stw r0, -0x7798(r3)
    stw r0, -0x7778(r3)
    stw r0, -0x7758(r3)
    stw r0, -0x7738(r3)
    stw r0, -0x77b4(r3)
    stw r0, -0x7794(r3)
    stw r0, -0x7774(r3)
    stw r0, -0x7754(r3)
    stw r0, -0x7734(r3)
    stw r0, -0x77b0(r3)
    stw r0, -0x7790(r3)
    stw r0, -0x7770(r3)
    stw r0, -0x7750(r3)
    stw r0, -0x7730(r3)
    stw r0, -0x77ac(r3)
    stw r0, -0x778c(r3)
    stw r0, -0x776c(r3)
    stw r0, -0x774c(r3)
    stw r0, -0x772c(r3)
    stw r0, -0x77a8(r3)
    stw r0, -0x7788(r3)
    stw r0, -0x7768(r3)
    stw r0, -0x7748(r3)
    stw r0, -0x7728(r3)
    stw r0, -0x77a4(r3)
    stw r0, -0x7784(r3)
    stw r0, -0x7764(r3)
    stw r0, -0x7744(r3)
    stw r0, -0x7724(r3)
    blr
}

// asm_to_cpp: GKI_get_tick_count
asm s32 GKI_get_tick_count(void) {
    nofralloc
    lis r3, lbl_804276C0@ha
    addi r3, r3, lbl_804276C0@l
    addis r3, r3, 0x3
    lwz r3, -0x77d8(r3)
    blr
}

// asm_to_cpp: fn_802A3840
asm void fn_802A3840(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg_sp0) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r29, r4
    mr r31, r5
    bl GKI_get_taskid
    cmpwi r29, 0x0
    mr r28, r3
    li r30, 0x0
    bgt lbl_802A3878
    li r29, 0x1
lbl_802A3878:
    neg r0, r31
    or r0, r0, r31
    srawi r0, r0, 31
    and r31, r29, r0
    bl GKI_disable
    lis r4, lbl_804276C0@ha
    lis r3, 0x8000
    addi r4, r4, lbl_804276C0@l
    addis r5, r4, 0x3
    subi r4, r3, 0x1
    lwz r3, -0x77c8(r5)
    lwz r0, -0x77c4(r5)
    subf r3, r3, r0
    subf r0, r3, r4
    cmpw r0, r29
    ble lbl_802A38BC
    add r4, r29, r3
lbl_802A38BC:
    cmpwi r27, 0x1
    beq lbl_802A38F4
    bge lbl_802A3914
    cmpwi r27, 0x0
    bge lbl_802A38D4
    b lbl_802A3914
lbl_802A38D4:
    lis r3, lbl_804276C0@ha
    clrlslwi r5, r28, 24, 2
    addi r3, r3, lbl_804276C0@l
    addis r0, r3, 0x3
    add r3, r0, r5
    stw r31, -0x7780(r3)
    stw r4, -0x77a0(r3)
    b lbl_802A3918
lbl_802A38F4:
    lis r3, lbl_804276C0@ha
    clrlslwi r5, r28, 24, 2
    addi r3, r3, lbl_804276C0@l
    addis r0, r3, 0x3
    add r3, r0, r5
    stw r31, -0x7740(r3)
    stw r4, -0x7760(r3)
    b lbl_802A3918
lbl_802A3914:
    li r30, 0x1
lbl_802A3918:
    cmpwi r30, 0x0
    bne lbl_802A3974
    cmpwi r29, 0x0
    ble lbl_802A3974
    lis r3, lbl_804276C0@ha
    addi r3, r3, lbl_804276C0@l
    addis r3, r3, 0x3
    lwz r4, -0x77c4(r3)
    cmpwi r4, 0x0
    beq lbl_802A3954
    lwz r0, -0x77c8(r3)
    cmpw r29, r0
    bge lbl_802A3974
    cmpwi r0, 0x0
    ble lbl_802A3974
lbl_802A3954:
    lis r3, lbl_804276C0@ha
    addi r3, r3, lbl_804276C0@l
    addis r3, r3, 0x3
    lwz r0, -0x77c8(r3)
    subf r0, r0, r4
    add r0, r29, r0
    stw r0, -0x77c4(r3)
    stw r29, -0x77c8(r3)
lbl_802A3974:
    bl GKI_enable
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: GKI_stop_timer
asm void GKI_stop_timer(s32 arg0) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl GKI_get_taskid
    cmpwi r31, 0x1
    beq lbl_802A39E4
    bge lbl_802A3A04
    cmpwi r31, 0x0
    bge lbl_802A39C0
    b lbl_802A3A04
lbl_802A39C0:
    lis r4, lbl_804276C0@ha
    clrlslwi r3, r3, 24, 2
    addi r4, r4, lbl_804276C0@l
    li r5, 0x0
    addis r0, r4, 0x3
    add r3, r0, r3
    stw r5, -0x7780(r3)
    stw r5, -0x77a0(r3)
    b lbl_802A3A04
lbl_802A39E4:
    lis r4, lbl_804276C0@ha
    clrlslwi r3, r3, 24, 2
    addi r4, r4, lbl_804276C0@l
    li r5, 0x0
    addis r0, r4, 0x3
    add r3, r0, r3
    stw r5, -0x7740(r3)
    stw r5, -0x7760(r3)
lbl_802A3A04:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_802A3A2C
asm s32 fn_802A3A2C(s8 *arg0, s32 arg1) {
    nofralloc
    lwz r6, 0x0(r3)
    li r7, 0x0
    b lbl_802A3A40
lbl_802A3A38:
    lwz r6, 0x0(r6)
    addi r7, r7, 0x1
lbl_802A3A40:
    cmpwi r6, 0x0
    beq lbl_802A3A54
    lwz r0, 0xc(r6)
    cmpwi r0, 0x0
    ble lbl_802A3A38
lbl_802A3A54:
    mr r8, r4
    li r0, 0x0
    b lbl_802A3A80
lbl_802A3A60:
    lwz r9, 0xc(r6)
    subf. r5, r8, r9
    stw r5, 0xc(r6)
    bgt lbl_802A3A78
    stw r0, 0xc(r6)
    addi r7, r7, 0x1
lbl_802A3A78:
    subf r8, r9, r8
    lwz r6, 0x0(r6)
lbl_802A3A80:
    cmpwi r6, 0x0
    beq lbl_802A3A90
    cmpwi r8, 0x0
    bgt lbl_802A3A60
lbl_802A3A90:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    ble lbl_802A3AB0
    subf. r0, r4, r0
    stw r0, 0x8(r3)
    bge lbl_802A3AB0
    li r0, 0x0
    stw r0, 0x8(r3)
lbl_802A3AB0:
    mr r3, r7
    blr
}

// asm_to_cpp: fn_802A3AB8
asm void fn_802A3AB8() {
    nofralloc
    lwz r5, 0xc(r4)
    cmpwi r5, 0x0
    bltlr
    lwz r0, 0x8(r3)
    cmpw r5, r0
    blt lbl_802A3B20
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_802A3AE4
    stw r4, 0x0(r3)
    b lbl_802A3AFC
lbl_802A3AE4:
    lwz r5, 0x4(r3)
    cmpwi r5, 0x0
    beq lbl_802A3AF4
    stw r4, 0x0(r5)
lbl_802A3AF4:
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
lbl_802A3AFC:
    li r0, 0x0
    stw r0, 0x0(r4)
    stw r4, 0x4(r3)
    lwz r0, 0x8(r3)
    lwz r5, 0xc(r4)
    subf r0, r0, r5
    stw r0, 0xc(r4)
    stw r5, 0x8(r3)
    b lbl_802A3B98
lbl_802A3B20:
    lwz r6, 0x0(r3)
    b lbl_802A3B40
lbl_802A3B28:
    cmpwi r5, 0x0
    ble lbl_802A3B3C
    lwz r0, 0xc(r4)
    subf r0, r5, r0
    stw r0, 0xc(r4)
lbl_802A3B3C:
    lwz r6, 0x0(r6)
lbl_802A3B40:
    lwz r5, 0xc(r6)
    lwz r0, 0xc(r4)
    cmpw r0, r5
    bgt lbl_802A3B28
    lwz r0, 0x0(r3)
    cmplw r6, r0
    bne lbl_802A3B70
    stw r0, 0x0(r4)
    lwz r5, 0x0(r3)
    stw r4, 0x4(r5)
    stw r4, 0x0(r3)
    b lbl_802A3B88
lbl_802A3B70:
    lwz r3, 0x4(r6)
    stw r4, 0x0(r3)
    lwz r0, 0x4(r6)
    stw r0, 0x4(r4)
    stw r4, 0x4(r6)
    stw r6, 0x0(r4)
lbl_802A3B88:
    lwz r3, 0xc(r4)
    lwz r0, 0xc(r6)
    subf r0, r3, r0
    stw r0, 0xc(r6)
lbl_802A3B98:
    li r0, 0x1
    stb r0, 0x16(r4)
    blr
}

// asm_to_cpp: GKI_remove_from_timer_list
asm void GKI_remove_from_timer_list(s8 *arg0, s8 *arg1) {
    nofralloc
    cmpwi r4, 0x0
    beqlr
    lbz r0, 0x16(r4)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_802A3BC8
    blr
lbl_802A3BC8:
    lwz r6, 0x0(r4)
    cmpwi r6, 0x0
    beq lbl_802A3BE8
    lwz r5, 0xc(r6)
    lwz r0, 0xc(r4)
    add r0, r5, r0
    stw r0, 0xc(r6)
    b lbl_802A3BF8
lbl_802A3BE8:
    lwz r5, 0xc(r4)
    lwz r0, 0x8(r3)
    subf r0, r5, r0
    stw r0, 0x8(r3)
lbl_802A3BF8:
    lwz r0, 0x0(r3)
    cmplw r0, r4
    bne lbl_802A3C34
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    stw r5, 0x0(r3)
    beq lbl_802A3C1C
    li r0, 0x0
    stw r0, 0x4(r5)
lbl_802A3C1C:
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bne lbl_802A3CAC
    li r0, 0x0
    stw r0, 0x4(r3)
    b lbl_802A3CAC
lbl_802A3C34:
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bne lbl_802A3C5C
    lwz r5, 0x4(r4)
    cmpwi r5, 0x0
    stw r5, 0x4(r3)
    beq lbl_802A3CAC
    li r0, 0x0
    stw r0, 0x0(r5)
    b lbl_802A3CAC
lbl_802A3C5C:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x4(r3)
    cmplw r0, r4
    bnelr
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    b lbl_802A3C84
    blr
lbl_802A3C84:
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x0(r3)
    cmplw r0, r4
    bnelr
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    b lbl_802A3CAC
    blr
lbl_802A3CAC:
    li r3, 0x0
    lis r0, 0x8000
    stw r3, 0x4(r4)
    stw r3, 0x0(r4)
    stw r0, 0xc(r4)
    stb r3, 0x16(r4)
    blr
}
