#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

M2C_UNK memset();             /* extern */
extern u8 lbl_804276C0;

void GKI_init();
void GKI_shutdown();
void GKI_run();
void GKI_sched_lock();
void GKI_sched_unlock();
void GKI_delay();
s32 GKI_send_event();
s32 GKI_get_taskid();
void GKI_enable();
void GKI_disable();
void GKI_exception();
s32 GKI_os_malloc();
void GKI_os_free();

// GKI_init: definicion C reemplazada por asm (ver abajo)


// GKI_shutdown: definicion C reemplazada por asm (ver abajo)


void GKI_run(s32 arg0) {

}

void GKI_sched_lock(void) {

}

void GKI_sched_unlock(void) {

}

void GKI_delay(s32 arg0) {

}

// GKI_send_event: definicion C reemplazada por asm (ver abajo)


s32 GKI_get_taskid(void) {
    return 2;
}

// GKI_enable: definicion C reemplazada por asm (ver abajo)


// GKI_disable: definicion C reemplazada por asm (ver abajo)


void GKI_exception(s32 arg0, s32 arg1) {

}

s32 GKI_os_malloc(s32 arg0) {
    s32 var_r3;

    var_r3 = fn_802943B8(arg0);
    if (var_r3 == 0) {
        var_r3 = 0;
    }
    return var_r3;
}

void GKI_os_free(s32 arg0) {
    fn_80294408(arg0);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
void GKI_disable(void);
void GKI_enable(void);
void GKI_init(void);
s32 GKI_send_event(u32 arg0, s32 arg1);
void GKI_shutdown(void);
extern void gki_buffer_init();
extern void gki_timers_init();

// asm_to_cpp: GKI_init
asm void GKI_init(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, 0x3
    li r4, 0x0
    stw r0, 0x14(r1)
    subi r5, r5, 0x7520
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_804276C0@ha
    addi r3, r30, lbl_804276C0@l
    bl memset
    bl gki_buffer_init
    bl gki_timers_init
    addi r31, r30, lbl_804276C0@l
    li r4, 0x1
    addis r3, r31, 0x3
    li r0, 0x0
    stb r4, -0x77fe(r3)
    stw r0, -0x7818(r3)
    stw r0, -0x77b8(r3)
    sth r0, -0x77f4(r3)
    stb r0, lbl_804276C0@l(r30)
    bl OSEnableInterrupts
    lbz r0, lbl_804276C0@l(r30)
    slwi r0, r0, 2
    add r4, r31, r0
    stw r3, 0x4(r4)
    lbz r3, lbl_804276C0@l(r30)
    addi r0, r3, 0x1
    stb r0, lbl_804276C0@l(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: GKI_shutdown
asm void GKI_shutdown(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl OSDisableInterrupts
    lis r30, lbl_804276C0@ha
    li r0, 0x0
    lbz r5, lbl_804276C0@l(r30)
    addi r31, r30, lbl_804276C0@l
    addis r4, r31, 0x3
    slwi r5, r5, 2
    add r5, r31, r5
    stw r3, 0x4(r5)
    lbz r3, lbl_804276C0@l(r30)
    addi r3, r3, 0x1
    stb r3, lbl_804276C0@l(r30)
    stb r0, -0x77fe(r4)
    lbz r3, lbl_804276C0@l(r30)
    subi r3, r3, 0x1
    clrlslwi r0, r3, 24, 2
    stb r3, lbl_804276C0@l(r30)
    add r3, r31, r0
    lwz r3, 0x4(r3)
    bl OSRestoreInterrupts
    b lbl_802A3DDC
lbl_802A3DC0:
    lbz r3, lbl_804276C0@l(r30)
    subi r3, r3, 0x1
    clrlslwi r0, r3, 24, 2
    stb r3, lbl_804276C0@l(r30)
    add r3, r31, r0
    lwz r3, 0x4(r3)
    bl OSRestoreInterrupts
lbl_802A3DDC:
    lbz r0, lbl_804276C0@l(r30)
    cmpwi r0, 0x0
    bne lbl_802A3DC0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: GKI_send_event
asm s32 GKI_send_event(u32 arg0, s32 arg1) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x8
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    blt lbl_802A3E3C
    li r3, 0x1
    b lbl_802A3E9C
lbl_802A3E3C:
    bl OSDisableInterrupts
    lis r7, lbl_804276C0@ha
    clrlslwi r0, r30, 24, 1
    lbz r5, lbl_804276C0@l(r7)
    addi r6, r7, lbl_804276C0@l
    addis r4, r6, 0x3
    slwi r5, r5, 2
    add r5, r6, r5
    add r4, r4, r0
    stw r3, 0x4(r5)
    lbz r3, lbl_804276C0@l(r7)
    addi r0, r3, 0x1
    stb r0, lbl_804276C0@l(r7)
    lhz r0, -0x77f8(r4)
    or r0, r0, r31
    sth r0, -0x77f8(r4)
    lbz r3, lbl_804276C0@l(r7)
    subi r3, r3, 0x1
    clrlslwi r0, r3, 24, 2
    stb r3, lbl_804276C0@l(r7)
    add r3, r6, r0
    lwz r3, 0x4(r3)
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_802A3E9C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: GKI_enable
asm void GKI_enable(void) {
    nofralloc
    lis r5, lbl_804276C0@ha
    lbz r4, lbl_804276C0@l(r5)
    addi r3, r5, lbl_804276C0@l
    subi r4, r4, 0x1
    clrlslwi r0, r4, 24, 2
    stb r4, lbl_804276C0@l(r5)
    add r3, r3, r0
    lwz r3, 0x4(r3)
    b OSRestoreInterrupts
}

// asm_to_cpp: GKI_disable
asm void GKI_disable(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl OSDisableInterrupts
    lis r5, lbl_804276C0@ha
    lbz r0, lbl_804276C0@l(r5)
    addi r4, r5, lbl_804276C0@l
    slwi r0, r0, 2
    add r4, r4, r0
    stw r3, 0x4(r4)
    lbz r3, lbl_804276C0@l(r5)
    addi r0, r3, 0x1
    stb r0, lbl_804276C0@l(r5)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
