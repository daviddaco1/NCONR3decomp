#include <revolution/GX.h>
#include <revolution/OS.h>
#include <string.h>

static GXFifoObj DisplayListFifo;
static GXData __savedGXdata;
static GXFifoObj OldCPUFifo;

//unused
// GXBeginDisplayList: definicion C reemplazada por asm (ver abajo)


//unused
u32 GXEndDisplayList(void) {
    u8 wrap;
    BOOL enabled;
    u32 ctrl;

    GXGetCPUFifo(&DisplayListFifo);
    wrap = GXGetFifoWrap(&DisplayListFifo);
    GXSetCPUFifo(&OldCPUFifo);

    if (gxdt->dlistSave) {
        enabled = OSDisableInterrupts();

        ctrl = gxdt->cpCtrlReg;
        memcpy(gxdt, &__savedGXdata, sizeof(GXData));
        gxdt->cpCtrlReg = ctrl;

        OSRestoreInterrupts(enabled);
    }

    gxdt->dlistActive = FALSE;

    if (!wrap) {
        return GXGetFifoCount(&DisplayListFifo);
    }

    return 0;
}

void GXCallDisplayList(void* list, u32 size) {
    if (gxdt->gxDirtyFlags != 0) {
        __GXSetDirtyState();
    }

    if (gxdt->WORD_0x0 == 0) {
        __GXSendFlushPrim();
    }

    WGPIPE.c = GX_FIFO_CMD_CALL_DL;
    WGPIPE.p = list;
    WGPIPE.i = size;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 lbl_80461B28[];
extern void _restgpr_26();
extern void _restgpr_27();
extern void _savegpr_26();
extern void _savegpr_27();
extern void fn_802E10A8();
extern void fn_802E1104();
extern void fn_802E1844();
extern void fn_802E51B0();

// asm_to_cpp: fn_802E51B0
asm void fn_802E51B0() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r30, __GXData
    lis r31, lbl_80461B28@ha
    addi r31, r31, lbl_80461B28@l
    mr r27, r3
    lwz r0, 0x5fc(r30)
    mr r28, r4
    addi r29, r31, 0x0
    cmpwi r0, 0x0
    beq lbl_802E51EC
    bl fn_802E1844
lbl_802E51EC:
    lbz r0, 0x5f9(r30)
    cmpwi r0, 0x0
    beq lbl_802E5208
    mr r4, r30
    addi r3, r31, 0x80
    li r5, 0x600
    bl memcpy
lbl_802E5208:
    add r4, r27, r28
    li r3, 0x0
    subi r4, r4, 0x4
    stw r27, 0x0(r29)
    li r0, 0x1
    stw r4, 0x4(r29)
    stw r28, 0x8(r29)
    stw r3, 0x1c(r29)
    stw r27, 0x14(r29)
    stw r27, 0x18(r29)
    stb r0, 0x5f8(r30)
    bl fn_802E10A8
    addi r3, r31, 0x680
    bl GXGetCPUFifo
    addi r3, r31, 0x0
    bl GXSetCPUFifo
    bl fn_802E1104
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: GXBeginDisplayList
asm void GXBeginDisplayList(void* list, u32 size) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    lis r30, lbl_80461B28@ha
    addi r30, r30, lbl_80461B28@l
    bl fn_802E10A8
    addi r3, r30, 0x0
    bl GXGetCPUFifo
    addi r3, r30, 0x0
    bl GXGetFifoWrap
    mr r31, r3
    addi r3, r30, 0x680
    bl GXSetCPUFifo
    lwz r29, __GXData
    lbz r0, 0x5f9(r29)
    cmpwi r0, 0x0
    beq lbl_802E52DC
    bl OSDisableInterrupts
    lwz r28, __GXData
    mr r27, r3
    addi r4, r30, 0x80
    li r5, 0x600
    lwz r26, 0x8(r28)
    mr r3, r28
    bl memcpy
    stw r26, 0x8(r28)
    mr r3, r27
    bl OSRestoreInterrupts
lbl_802E52DC:
    clrlwi. r0, r31, 24
    li r0, 0x0
    stb r0, 0x5f8(r29)
    bne lbl_802E52F8
    addi r3, r30, 0x0
    bl GXGetFifoCount
    b lbl_802E52FC
lbl_802E52F8:
    li r3, 0x0
lbl_802E52FC:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
