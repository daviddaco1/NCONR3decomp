#include <revolution/DSP.h>
#include <revolution/IPC.h>
#include <revolution/OS.h>

#include <string.h>

#define DSP_CODE_WORK_MEM ((void*)0x81000000)
#define DSP_CODE_WORK_MEM_BACKUP ((u8*)OSGetArenaHi() - sizeof(DSPInitCode))

static u8 DSPInitCode[128] = {
    0x02, 0x9F, 0x00, 0x10, 0x02, 0x9F, 0x00, 0x33, 0x02, 0x9F, 0x00, 0x34,
    0x02, 0x9F, 0x00, 0x35, 0x02, 0x9F, 0x00, 0x36, 0x02, 0x9F, 0x00, 0x37,
    0x02, 0x9F, 0x00, 0x38, 0x02, 0x9F, 0x00, 0x39, 0x12, 0x06, 0x12, 0x03,
    0x12, 0x04, 0x12, 0x05, 0x00, 0x80, 0x80, 0x00, 0x00, 0x88, 0xFF, 0xFF,
    0x00, 0x84, 0x10, 0x00, 0x00, 0x64, 0x00, 0x1D, 0x02, 0x18, 0x00, 0x00,
    0x81, 0x00, 0x1C, 0x1E, 0x00, 0x44, 0x1B, 0x1E, 0x00, 0x84, 0x08, 0x00,
    0x00, 0x64, 0x00, 0x27, 0x19, 0x1E, 0x00, 0x00, 0x00, 0xDE, 0xFF, 0xFC,
    0x02, 0xA0, 0x80, 0x00, 0x02, 0x9C, 0x00, 0x28, 0x16, 0xFC, 0x00, 0x54,
    0x16, 0xFD, 0x43, 0x48, 0x00, 0x21, 0x02, 0xFF, 0x02, 0xFF, 0x02, 0xFF,
    0x02, 0xFF, 0x02, 0xFF, 0x02, 0xFF, 0x02, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

static void waitMicroSec(u32 usec) {
    u32 start = OSGetTick();
    do {
        ;
    } while (OS_TICKS_TO_USEC(OS_TICKS_DELTA(OSGetTick(), start)) < usec);
}

static void __AIClockInit(BOOL arg0) {
    u32 tmp;

    tmp = IPC_HW_REGS[IPC_DIFLAGS];
    tmp &= ~0x100;
    tmp |= (arg0 << 8);
    tmp &= ~0x80;
    IPC_HW_REGS[IPC_DIFLAGS] = tmp;

    IPC_HW_REGS[IPC_GPIO2IN] &= ~0xC0000000;
    waitMicroSec(100);

    if (!arg0) {
        tmp = IPC_HW_REGS[IPC_GPIO2DIR];
        tmp &= ~0x3FFC0;
        tmp |= 0xFC0;
        tmp &= ~0x3F;
        tmp &= ~0x7FC0000;
        tmp |= 0x4640000;
        IPC_HW_REGS[IPC_GPIO2DIR] = tmp;
    } else {
        tmp = IPC_HW_REGS[IPC_GPIO2DIR];
        tmp &= ~0x3FFC0;
        tmp |= 0xFFC0;
        tmp &= ~0x3F;
        tmp |= 0xE;
        tmp &= ~0x7FC0000;
        tmp |= 0x4B00000;
        IPC_HW_REGS[IPC_GPIO2DIR] = tmp;
    }
    waitMicroSec(100);

    IPC_HW_REGS[IPC_GPIO2IN] &= ~0x10000000;
    waitMicroSec(1000);

    IPC_HW_REGS[IPC_GPIO2IN] =
        (IPC_HW_REGS[IPC_GPIO2IN] & ~0x40000000) | 0x40000000;
    waitMicroSec(1000);

    IPC_HW_REGS[IPC_GPIO2IN] =
        (IPC_HW_REGS[IPC_GPIO2IN] & ~0x80000000) | 0x80000000;
    waitMicroSec(1000);
}

// __OSInitAudioSystem: definicion C reemplazada por asm (ver abajo)


// __OSStopAudioSystem: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 DSPInitCode_8037FD40[];
extern void DCFlushRange();

// asm_to_cpp: __OSInitAudioSystem
asm void __OSInitAudioSystem(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    bne lbl_80314DE4
    li r3, 0x1
    bl __AIClockInit
lbl_80314DE4:
    bl OSGetArenaHi
    lis r4, 0x8100
    li r5, 0x80
    subi r3, r3, 0x80
    bl memcpy
    lis r4, DSPInitCode_8037FD40@ha
    lis r3, 0x8100
    addi r4, r4, DSPInitCode_8037FD40@l
    li r5, 0x80
    bl memcpy
    lis r3, 0x8100
    li r4, 0x80
    bl DCFlushRange
    lis r3, 0xcc00
    li r0, 0x43
    sth r0, 0x5012(r3)
    li r0, 0x8ac
    sth r0, 0x500a(r3)
    lhz r0, 0x500a(r3)
    ori r0, r0, 0x1
    sth r0, 0x500a(r3)
lbl_80314E38:
    lhz r0, 0x500a(r3)
    clrlwi. r0, r0, 31
    bne lbl_80314E38
    li r0, 0x0
    lis r4, 0xcc00
    sth r0, 0x5000(r4)
lbl_80314E50:
    lhz r3, 0x5004(r4)
    lhz r0, 0x5006(r4)
    rlwimi r0, r3, 16, 0, 15
    clrrwi. r0, r0, 31
    bne lbl_80314E50
    lis r4, 0xcc00
    lis r0, 0x100
    stw r0, 0x5020(r4)
    li r3, 0x0
    li r0, 0x20
    stw r3, 0x5024(r4)
    stw r0, 0x5028(r4)
    lhz r5, 0x500a(r4)
    b lbl_80314E8C
lbl_80314E88:
    lhz r5, 0x500a(r4)
lbl_80314E8C:
    rlwinm. r0, r5, 0, 26, 26
    beq lbl_80314E88
    lis r3, 0xcc00
    sth r5, 0x500a(r3)
    bl OSGetTick
    mr r31, r3
lbl_80314EA4:
    bl OSGetTick
    subf r0, r31, r3
    cmpwi r0, 0x892
    blt lbl_80314EA4
    lis r4, 0xcc00
    lis r0, 0x100
    stw r0, 0x5020(r4)
    li r3, 0x0
    li r0, 0x20
    stw r3, 0x5024(r4)
    stw r0, 0x5028(r4)
    lhz r5, 0x500a(r4)
    b lbl_80314EDC
lbl_80314ED8:
    lhz r5, 0x500a(r4)
lbl_80314EDC:
    rlwinm. r0, r5, 0, 26, 26
    beq lbl_80314ED8
    lis r3, 0xcc00
    sth r5, 0x500a(r3)
    lhz r0, 0x500a(r3)
    rlwinm r0, r0, 0, 21, 19
    sth r0, 0x500a(r3)
lbl_80314EF8:
    lhz r0, 0x500a(r3)
    rlwinm. r0, r0, 0, 21, 21
    bne lbl_80314EF8
    lis r3, 0xcc00
    lhz r0, 0x500a(r3)
    rlwinm r0, r0, 0, 30, 28
    sth r0, 0x500a(r3)
    lhz r0, 0x5004(r3)
    b lbl_80314F20
lbl_80314F1C:
    lhz r0, 0x5004(r3)
lbl_80314F20:
    rlwinm. r0, r0, 0, 16, 16
    beq lbl_80314F1C
    lis r4, 0xcc00
    li r0, 0x8ac
    lhz r3, 0x5006(r4)
    lhz r3, 0x500a(r4)
    ori r3, r3, 0x4
    sth r3, 0x500a(r4)
    sth r0, 0x500a(r4)
    lhz r0, 0x500a(r4)
    ori r0, r0, 0x1
    sth r0, 0x500a(r4)
lbl_80314F50:
    lhz r0, 0x500a(r4)
    clrlwi. r0, r0, 31
    bne lbl_80314F50
    bl OSGetArenaHi
    mr r4, r3
    lis r3, 0x8100
    subi r4, r4, 0x80
    li r5, 0x80
    bl memcpy
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __OSStopAudioSystem
asm void __OSStopAudioSystem(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, 0xcc00
    stw r0, 0x14(r1)
    li r0, 0x804
    stw r31, 0xc(r1)
    sth r0, 0x500a(r3)
    lhz r0, 0x5036(r3)
    clrlwi r0, r0, 17
    sth r0, 0x5036(r3)
    lhz r0, 0x500a(r3)
    b lbl_80314FBC
lbl_80314FB8:
    lhz r0, 0x500a(r3)
lbl_80314FBC:
    rlwinm. r0, r0, 0, 21, 21
    bne lbl_80314FB8
    lis r3, 0xcc00
    lhz r0, 0x500a(r3)
    b lbl_80314FD4
lbl_80314FD0:
    lhz r0, 0x500a(r3)
lbl_80314FD4:
    rlwinm. r0, r0, 0, 22, 22
    bne lbl_80314FD0
    lis r4, 0xcc00
    li r0, 0x8ac
    sth r0, 0x500a(r4)
    li r0, 0x0
    sth r0, 0x5000(r4)
lbl_80314FF0:
    lhz r3, 0x5004(r4)
    lhz r0, 0x5006(r4)
    rlwimi r0, r3, 16, 0, 15
    clrrwi. r0, r0, 31
    bne lbl_80314FF0
    bl OSGetTick
    mr r31, r3
lbl_8031500C:
    bl OSGetTick
    subf r0, r31, r3
    cmpwi r0, 0x2c
    blt lbl_8031500C
    lis r3, 0xcc00
    lhz r0, 0x500a(r3)
    ori r0, r0, 0x1
    sth r0, 0x500a(r3)
    lhz r0, 0x500a(r3)
    b lbl_80315038
lbl_80315034:
    lhz r0, 0x500a(r3)
lbl_80315038:
    clrlwi. r0, r0, 31
    bne lbl_80315034
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
