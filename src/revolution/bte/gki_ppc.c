#include "types.h"

// Translation unit: src/revolution/bte/gki_ppc.cpp
// Total functions: 13

// Global data symbols (@ha/@l)
extern u8 lbl_804276C0[];

// Forward declarations
extern void GKI_delay();
extern void GKI_disable();
extern void GKI_enable();
extern void GKI_exception();
extern void GKI_get_taskid();
extern void GKI_init();
extern void GKI_os_free();
extern void GKI_os_malloc();
extern void GKI_run();
extern void GKI_sched_lock();
extern void GKI_sched_unlock();
extern void GKI_send_event();
extern void GKI_shutdown();
extern void OSDisableInterrupts();
extern void OSEnableInterrupts();
extern void OSRestoreInterrupts();
extern void fn_802943B8();
extern void fn_80294408();
extern void gki_buffer_init();
extern void gki_timers_init();
extern void memset();

// ----------------------------------------------------------------------------
// GKI_init
// ----------------------------------------------------------------------------
asm void GKI_init() {
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

// ----------------------------------------------------------------------------
// GKI_shutdown
// ----------------------------------------------------------------------------
asm void GKI_shutdown() {
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

// ----------------------------------------------------------------------------
// GKI_run
// ----------------------------------------------------------------------------
asm void GKI_run() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// GKI_sched_lock
// ----------------------------------------------------------------------------
asm void GKI_sched_lock() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// GKI_sched_unlock
// ----------------------------------------------------------------------------
asm void GKI_sched_unlock() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// GKI_delay
// ----------------------------------------------------------------------------
asm void GKI_delay() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// GKI_send_event
// ----------------------------------------------------------------------------
asm void GKI_send_event() {
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

// ----------------------------------------------------------------------------
// GKI_get_taskid
// ----------------------------------------------------------------------------
asm void GKI_get_taskid() {
    nofralloc
    li r3, 0x2
    blr
}

// ----------------------------------------------------------------------------
// GKI_enable
// ----------------------------------------------------------------------------
asm void GKI_enable() {
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

// ----------------------------------------------------------------------------
// GKI_disable
// ----------------------------------------------------------------------------
asm void GKI_disable() {
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

// ----------------------------------------------------------------------------
// GKI_exception
// ----------------------------------------------------------------------------
asm void GKI_exception() {
    nofralloc
    blr
}

// ----------------------------------------------------------------------------
// GKI_os_malloc
// ----------------------------------------------------------------------------
asm void GKI_os_malloc() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_802943B8
    cmpwi r3, 0x0
    bne lbl_802A3F44
    li r3, 0x0
lbl_802A3F44:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// ----------------------------------------------------------------------------
// GKI_os_free
// ----------------------------------------------------------------------------
asm void GKI_os_free() {
    nofralloc
    b fn_80294408
}

