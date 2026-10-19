#include <revolution/BASE.h>
#include <revolution/DB.h>
#include <revolution/OS.h>

static asm void __OSLoadFPUContext(UNKWORD unused, register OSContext* ctx) {
    // clang-format off
    nofralloc

    lhz r5, ctx->state
    clrlwi. r5, r5, 31
    beq _exit
    
    lfd f0, ctx->fpscr_pad
    mtfs f0
    mfspr r5, 0x398
    rlwinm. r5, r5, 3, 31, 31
    beq _load_fprs
    
    psq_l f0, OSContext.psfs[0](ctx), 0, 0
    psq_l f1, OSContext.psfs[1](ctx), 0, 0
    psq_l f2, OSContext.psfs[2](ctx), 0, 0
    psq_l f3, OSContext.psfs[3](ctx), 0, 0
    psq_l f4, OSContext.psfs[4](ctx), 0, 0
    psq_l f5, OSContext.psfs[5](ctx), 0, 0
    psq_l f6, OSContext.psfs[6](ctx), 0, 0
    psq_l f7, OSContext.psfs[7](ctx), 0, 0
    psq_l f8, OSContext.psfs[8](ctx), 0, 0
    psq_l f9, OSContext.psfs[9](ctx), 0, 0
    psq_l f10, OSContext.psfs[10](ctx), 0, 0
    psq_l f11, OSContext.psfs[11](ctx), 0, 0
    psq_l f12, OSContext.psfs[12](ctx), 0, 0
    psq_l f13, OSContext.psfs[13](ctx), 0, 0
    psq_l f14, OSContext.psfs[14](ctx), 0, 0
    psq_l f15, OSContext.psfs[15](ctx), 0, 0
    psq_l f16, OSContext.psfs[16](ctx), 0, 0
    psq_l f17, OSContext.psfs[17](ctx), 0, 0
    psq_l f18, OSContext.psfs[18](ctx), 0, 0
    psq_l f19, OSContext.psfs[19](ctx), 0, 0
    psq_l f20, OSContext.psfs[20](ctx), 0, 0
    psq_l f21, OSContext.psfs[21](ctx), 0, 0
    psq_l f22, OSContext.psfs[22](ctx), 0, 0
    psq_l f23, OSContext.psfs[23](ctx), 0, 0
    psq_l f24, OSContext.psfs[24](ctx), 0, 0
    psq_l f25, OSContext.psfs[25](ctx), 0, 0
    psq_l f26, OSContext.psfs[26](ctx), 0, 0
    psq_l f27, OSContext.psfs[27](ctx), 0, 0
    psq_l f28, OSContext.psfs[28](ctx), 0, 0
    psq_l f29, OSContext.psfs[29](ctx), 0, 0
    psq_l f30, OSContext.psfs[30](ctx), 0, 0
    psq_l f31, OSContext.psfs[31](ctx), 0, 0

_load_fprs:
    lfd f0, ctx->fprs[0]
    lfd f1, ctx->fprs[1]
    lfd f2, ctx->fprs[2]
    lfd f3, ctx->fprs[3]
    lfd f4, ctx->fprs[4]
    lfd f5, ctx->fprs[5]
    lfd f6, ctx->fprs[6]
    lfd f7, ctx->fprs[7]
    lfd f8, ctx->fprs[8]
    lfd f9, ctx->fprs[9]
    lfd f10, ctx->fprs[10]
    lfd f11, ctx->fprs[11]
    lfd f12, ctx->fprs[12]
    lfd f13, ctx->fprs[13]
    lfd f14, ctx->fprs[14]
    lfd f15, ctx->fprs[15]
    lfd f16, ctx->fprs[16]
    lfd f17, ctx->fprs[17]
    lfd f18, ctx->fprs[18]
    lfd f19, ctx->fprs[19]
    lfd f20, ctx->fprs[20]
    lfd f21, ctx->fprs[21]
    lfd f22, ctx->fprs[22]
    lfd f23, ctx->fprs[23]
    lfd f24, ctx->fprs[24]
    lfd f25, ctx->fprs[25]
    lfd f26, ctx->fprs[26]
    lfd f27, ctx->fprs[27]
    lfd f28, ctx->fprs[28]
    lfd f29, ctx->fprs[29]
    lfd f30, ctx->fprs[30]
    lfd f31, ctx->fprs[31]

_exit:
    blr
    // clang-format on
}

static asm void __OSSaveFPUContext(UNKWORD unused, UNKWORD unused1,
                                   register OSContext* ctx) {
    // clang-format off
    nofralloc
    
    lhz r3, ctx->state
    ori r3, r3, OS_CONTEXT_STATE_FP_SAVED
    sth r3, ctx->state

    stfd f0, ctx->fprs[0]
    stfd f1, ctx->fprs[1]
    stfd f2, ctx->fprs[2]
    stfd f3, ctx->fprs[3]
    stfd f4, ctx->fprs[4]
    stfd f5, ctx->fprs[5]
    stfd f6, ctx->fprs[6]
    stfd f7, ctx->fprs[7]
    stfd f8, ctx->fprs[8]
    stfd f9, ctx->fprs[9]
    stfd f10, ctx->fprs[10]
    stfd f11, ctx->fprs[11]
    stfd f12, ctx->fprs[12]
    stfd f13, ctx->fprs[13]
    stfd f14, ctx->fprs[14]
    stfd f15, ctx->fprs[15]
    stfd f16, ctx->fprs[16]
    stfd f17, ctx->fprs[17]
    stfd f18, ctx->fprs[18]
    stfd f19, ctx->fprs[19]
    stfd f20, ctx->fprs[20]
    stfd f21, ctx->fprs[21]
    stfd f22, ctx->fprs[22]
    stfd f23, ctx->fprs[23]
    stfd f24, ctx->fprs[24]
    stfd f25, ctx->fprs[25]
    stfd f26, ctx->fprs[26]
    stfd f27, ctx->fprs[27]
    stfd f28, ctx->fprs[28]
    stfd f29, ctx->fprs[29]
    stfd f30, ctx->fprs[30]
    stfd f31, ctx->fprs[31]

    mffs f0
    stfd f0, ctx->fpscr_pad
    lfd f0, ctx->fprs[0]
    mfspr r3, 0x398
    rlwinm. r3, r3, 3, 31, 31
    beq _exit

    psq_st f0, OSContext.psfs[0](ctx), 0, 0
    psq_st f1, OSContext.psfs[1](ctx), 0, 0
    psq_st f2, OSContext.psfs[2](ctx), 0, 0
    psq_st f3, OSContext.psfs[3](ctx), 0, 0
    psq_st f4, OSContext.psfs[4](ctx), 0, 0
    psq_st f5, OSContext.psfs[5](ctx), 0, 0
    psq_st f6, OSContext.psfs[6](ctx), 0, 0
    psq_st f7, OSContext.psfs[7](ctx), 0, 0
    psq_st f8, OSContext.psfs[8](ctx), 0, 0
    psq_st f9, OSContext.psfs[9](ctx), 0, 0
    psq_st f10, OSContext.psfs[10](ctx), 0, 0
    psq_st f11, OSContext.psfs[11](ctx), 0, 0
    psq_st f12, OSContext.psfs[12](ctx), 0, 0
    psq_st f13, OSContext.psfs[13](ctx), 0, 0
    psq_st f14, OSContext.psfs[14](ctx), 0, 0
    psq_st f15, OSContext.psfs[15](ctx), 0, 0
    psq_st f16, OSContext.psfs[16](ctx), 0, 0
    psq_st f17, OSContext.psfs[17](ctx), 0, 0
    psq_st f18, OSContext.psfs[18](ctx), 0, 0
    psq_st f19, OSContext.psfs[19](ctx), 0, 0
    psq_st f20, OSContext.psfs[20](ctx), 0, 0
    psq_st f21, OSContext.psfs[21](ctx), 0, 0
    psq_st f22, OSContext.psfs[22](ctx), 0, 0
    psq_st f23, OSContext.psfs[23](ctx), 0, 0
    psq_st f24, OSContext.psfs[24](ctx), 0, 0
    psq_st f25, OSContext.psfs[25](ctx), 0, 0
    psq_st f26, OSContext.psfs[26](ctx), 0, 0
    psq_st f27, OSContext.psfs[27](ctx), 0, 0
    psq_st f28, OSContext.psfs[28](ctx), 0, 0
    psq_st f29, OSContext.psfs[29](ctx), 0, 0
    psq_st f30, OSContext.psfs[30](ctx), 0, 0
    psq_st f31, OSContext.psfs[31](ctx), 0, 0

_exit:
    blr
    // clang-format on
}

//unused
asm void OSLoadFPUContext(){
}

asm void OSSaveFPUContext(register OSContext* ctx) {
    // clang-format off
    nofralloc

    addi r5, ctx, 0
    b __OSSaveFPUContext
    // clang-format on
}

asm void OSSetCurrentContext(register OSContext* ctx) {
    // clang-format off
    nofralloc

    lis r4, 0x80000000@ha
    stw ctx, OS_CURRENT_CONTEXT@l(r4)

    clrlwi r5, ctx, 2
    stw r5, OS_CURRENT_CONTEXT_PHYS@l(r4)

    lwz r5, OS_CURRENT_FPU_CONTEXT@l(r4)
    cmpw r5, ctx
    bne _not_current_fpu_ctx

    lwz r6, ctx->srr1
    ori r6, r6, 0x2000
    stw r6, ctx->srr1
    mfmsr r6
    ori r6, r6, 2
    mtmsr r6
    blr

_not_current_fpu_ctx:
    lwz r6, ctx->srr1
    rlwinm r6, r6, 0, 19, 17
    stw r6, ctx->srr1
    mfmsr r6
    rlwinm r6, r6, 0, 19, 17
    ori r6, r6, 2
    mtmsr r6

    isync
    blr
    // clang-format on
}

OSContext* OSGetCurrentContext(void) {
    return OS_CURRENT_CONTEXT;
}

asm BOOL OSSaveContext(register OSContext* ctx) {
    // clang-format off
    nofralloc

    stmw r13, ctx->gprs[13]

    mfgqr1 r0
    stw r0, ctx->gqrs[1]
    mfgqr2 r0
    stw r0, ctx->gqrs[2]
    mfgqr3 r0
    stw r0, ctx->gqrs[3]
    mfgqr4 r0
    stw r0, ctx->gqrs[4]
    mfgqr5 r0
    stw r0, ctx->gqrs[5]
    mfgqr6 r0
    stw r0, ctx->gqrs[6]
    mfgqr7 r0
    stw r0, ctx->gqrs[7]

    mfcr r0
    stw r0, ctx->cr

    mflr r0
    stw r0, ctx->lr
    stw r0, ctx->srr0

    mfmsr r0
    stw r0, ctx->srr1

    mfctr r0
    stw r0, ctx->ctr

    mfxer r0
    stw r0, ctx->xer

    stw r1, ctx->gprs[1]
    stw r2, ctx->gprs[2]

    li r0, 1
    stw r0, ctx->gprs[3]

    li r3, 0
    blr
    // clang-format on
}

asm void OSLoadContext(register OSContext* ctx) {
    // clang-format off
    nofralloc

    // If the context was in OSDisableInterrupts,
    // jump back to the beginning of the function
    lis r4, __RAS_OSDisableInterrupts_begin@ha
    lwz r6, ctx->srr0
    addi r5, r4, __RAS_OSDisableInterrupts_begin@l
    cmplw r6, r5
    ble _srr0_not_in_disableintr
    lis r4, __RAS_OSDisableInterrupts_end@ha
    addi r0, r4, __RAS_OSDisableInterrupts_end@l
    cmplw r6, r0
    bge _srr0_not_in_disableintr
    stw r5, ctx->srr0
        
_srr0_not_in_disableintr:
    lwz r0, ctx->gprs[0]
    lwz r1, ctx->gprs[1]
    lwz r2, ctx->gprs[2]
    lhz r4, ctx->state
    rlwinm. r5, r4, 0, 30, 30
    beq _load_saved_gprs

    rlwinm r4, r4, 0, 31, 29
    sth r4, ctx->state
    lmw r5, ctx->gprs[5]
    b _load_special_regs
    
_load_saved_gprs:
    lmw r13, ctx->gprs[13]
    
_load_special_regs:
    lwz r4, ctx->gqrs[1]
    mtgqr1 r4
    lwz r4, ctx->gqrs[2]
    mtgqr2 r4
    lwz r4, ctx->gqrs[3]
    mtgqr3 r4
    lwz r4, ctx->gqrs[4]
    mtgqr4 r4
    lwz r4, ctx->gqrs[5]
    mtgqr5 r4
    lwz r4, ctx->gqrs[6]
    mtgqr6 r4
    lwz r4, ctx->gqrs[7]
    mtgqr7 r4

    lwz r4, ctx->cr
    mtcr r4
    lwz r4, ctx->lr
    mtlr r4
    lwz r4, ctx->ctr
    mtctr r4
    lwz r4, ctx->xer
    mtxer r4

    mfmsr r4
    rlwinm r4, r4, 0, 17, 15
    rlwinm r4, r4, 0, 31, 29
    mtmsr r4

    lwz r4, ctx->srr0
    mtsrr0 r4

    lwz r4, ctx->srr1
    mtsrr1 r4

    lwz r4, ctx->gprs[4]
    lwz r3, ctx->gprs[3]

    rfi
    // clang-format on
}

asm void* OSGetStackPointer(void) {
    // clang-format off
    nofralloc

    mr r3, r1
    blr
    // clang-format on
}

//unused
asm void OSSwitchStack(){
}

asm void OSSwitchFiber(register void* func, register void* stack) {
    // clang-format off
    nofralloc

    mflr r0
    // Back chain
    mr r5, r1
    stwu r5, -8(stack)
    // LR save
    mr r1, stack
    stw r0, 4(r5)
    // Call function
    mtlr func
    blrl

    // Switch back
    lwz r5, 0(r1)
    lwz r0, 4(r5)
    mtlr r0
    mr r1, r5
    blr
    // clang-format on
}

asm void OSSwitchFiberEx(u32 r3, u32 r4, u32 r5, u32 r6, register void* func,
                         register void* stack) {
    // clang-format off
    nofralloc

    mflr r0
    // Back chain
    mr r9, r1
    stwu r9, -8(stack)
    // LR save
    mr r1, stack
    stw r0, 4(r9)
    // Call function (args in r3-r6)
    mtlr func
    blrl

    // Switch back
    lwz r5, 0(r1)
    lwz r0, 4(r5)
    mtlr r0
    mr r1, r5
    blr
    // clang-format on
}

// OSClearContext: definicion C reemplazada por asm (ver abajo)


asm void OSInitContext(register OSContext* ctx, register void* _srr0,
                       register void* stack) {
    // clang-format off
    nofralloc
    
    stw _srr0, ctx->srr0
    stw stack, ctx->gprs[1]

    li r11, 0
    ori r11, r11, 0x9032
    stw r11, ctx->srr1

    li r0, 0
    stw r0, ctx->cr
    stw r0, ctx->xer

    stw r2, ctx->gprs[2]
    stw r13, ctx->gprs[13]

    stw r0, ctx->gprs[3]
    stw r0, ctx->gprs[4]
    stw r0, ctx->gprs[5]
    stw r0, ctx->gprs[6]
    stw r0, ctx->gprs[7]
    stw r0, ctx->gprs[8]
    stw r0, ctx->gprs[9]
    stw r0, ctx->gprs[10]
    stw r0, ctx->gprs[11]
    stw r0, ctx->gprs[12]
    stw r0, ctx->gprs[14]
    stw r0, ctx->gprs[15]
    stw r0, ctx->gprs[16]
    stw r0, ctx->gprs[17]
    stw r0, ctx->gprs[18]
    stw r0, ctx->gprs[19]
    stw r0, ctx->gprs[20]
    stw r0, ctx->gprs[21]
    stw r0, ctx->gprs[22]
    stw r0, ctx->gprs[23]
    stw r0, ctx->gprs[24]
    stw r0, ctx->gprs[25]
    stw r0, ctx->gprs[26]
    stw r0, ctx->gprs[27]
    stw r0, ctx->gprs[28]
    stw r0, ctx->gprs[29]
    stw r0, ctx->gprs[30]
    stw r0, ctx->gprs[31]

    stw r0, ctx->gqrs[0]
    stw r0, ctx->gqrs[1]
    stw r0, ctx->gqrs[2]
    stw r0, ctx->gqrs[3]
    stw r0, ctx->gqrs[4]
    stw r0, ctx->gqrs[5]
    stw r0, ctx->gqrs[6]
    stw r0, ctx->gqrs[7]

    b OSClearContext
    // clang-format on
}

// OSDumpContext: definicion C reemplazada por asm (ver abajo)


static asm void OSSwitchFPUContext(register u8 err, register OSContext* ctx) {
    // clang-format off
    nofralloc

    mfmsr r5
    ori r5, r5, MSR_FP
    mtmsr r5
    
    isync
    
    lwz r5, ctx->srr1
    ori r5, r5, 0x2000
    mtsrr1 r5

    lis r3, OS_CURRENT_FPU_CONTEXT@ha
    lwz r5, OS_CURRENT_FPU_CONTEXT@l(r3)
    stw ctx, OS_CURRENT_FPU_CONTEXT@l(r3)
    cmpw r5, ctx
    beq _ctx_is_curr_fpu_ctx
    cmpwi r5, 0
    beq _ctx_is_null
    bl __OSSaveFPUContext

_ctx_is_null:
    bl __OSLoadFPUContext

_ctx_is_curr_fpu_ctx:
    lwz r3, ctx->cr
    mtcr r3
    lwz r3, ctx->lr
    mtlr r3
    lwz r3, ctx->srr0
    mtsrr0 r3
    lwz r3, ctx->ctr
    mtctr r3
    lwz r3, ctx->xer
    mtxer r3

    lhz r3, ctx->state
    rlwinm r3, r3, 0, 31, 29
    sth r3, ctx->state

    lwz r5, ctx->gprs[5]
    lwz r3, ctx->gprs[3]
    lwz r4, ctx->gprs[4]

    rfi
    // clang-format on
}

// __OSContextInit: definicion C reemplazada por asm (ver abajo)


//unused
void OSFillFPUContext(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 at_721_803801B0[];
extern u8 lbl_8037FFF8[];
extern void __cvt_fp2unsigned();
extern void _restgpr_25();
extern void _savegpr_25();

// asm_to_cpp: OSClearContext
asm void OSClearContext(OSContext* ctx) {
    nofralloc
    li r5, 0x0
    lis r4, 0x8000
    sth r5, 0x1a0(r3)
    sth r5, 0x1a2(r3)
    lwz r0, 0xd8(r4)
    cmplw r3, r0
    bnelr
    stw r5, 0xd8(r4)
    blr
}

// asm_to_cpp: OSDumpContext
asm void OSDumpContext(const OSContext* ctx) {
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    addi r11, r1, 0x2f0
    bl _savegpr_25
    lis r28, lbl_8037FFF8@ha
    mr r30, r3
    addi r28, r28, lbl_8037FFF8@l
    mr r4, r30
    addi r3, r28, 0x0
    opword 0x4CC63182
    bl OSReport
    mr r26, r30
    li r25, 0x0
lbl_80315C18:
    lwz r8, 0x40(r26)
    mr r4, r25
    lwz r5, 0x0(r26)
    addi r3, r28, 0x48
    mr r9, r8
    addi r7, r25, 0x10
    mr r6, r5
    opword 0x4CC63182
    bl OSReport
    addi r25, r25, 0x1
    addi r26, r26, 0x4
    cmplwi r25, 0x10
    blt lbl_80315C18
    lwz r4, 0x84(r30)
    addi r3, r28, 0x78
    lwz r5, 0x80(r30)
    opword 0x4CC63182
    bl OSReport
    lwz r4, 0x198(r30)
    addi r3, r28, 0xa8
    lwz r5, 0x19c(r30)
    opword 0x4CC63182
    bl OSReport
    addi r3, r28, 0xd8
    opword 0x4CC63182
    bl OSReport
    mr r26, r30
    li r25, 0x0
lbl_80315C88:
    lwz r5, 0x1a4(r26)
    mr r4, r25
    lwz r7, 0x1b4(r26)
    addi r3, r28, 0xec
    addi r6, r25, 0x4
    opword 0x4CC63182
    bl OSReport
    addi r25, r25, 0x1
    addi r26, r26, 0x4
    cmplwi r25, 0x4
    blt lbl_80315C88
    lhz r0, 0x1a2(r30)
    clrlwi. r0, r0, 31
    beq lbl_80315DD4
    bl OSDisableInterrupts
    lis r6, 0x8000
    li r5, 0x0
    lwz r27, 0xd4(r6)
    addi r4, r1, 0x8
    mr r31, r3
    sth r5, 0x1a8(r1)
    sth r5, 0x1aa(r1)
    lwz r0, 0xd8(r6)
    cmplw r4, r0
    bne lbl_80315CF0
    stw r5, 0xd8(r6)
lbl_80315CF0:
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    addi r3, r28, 0x110
    opword 0x4CC63182
    bl OSReport
    mr r26, r30
    li r25, 0x0
lbl_80315D0C:
    lfd f1, 0x98(r26)
    bl __cvt_fp2unsigned
    lfd f1, 0x90(r26)
    mr r29, r3
    bl __cvt_fp2unsigned
    mr r5, r3
    mr r4, r25
    mr r7, r29
    addi r3, r28, 0x124
    addi r6, r25, 0x1
    opword 0x4CC63182
    bl OSReport
    addi r25, r25, 0x2
    addi r26, r26, 0x10
    cmplwi r25, 0x20
    blt lbl_80315D0C
    addi r3, r28, 0x140
    opword 0x4CC63182
    bl OSReport
    mr r26, r30
    li r25, 0x0
lbl_80315D60:
    lfd f1, 0x1d0(r26)
    bl __cvt_fp2unsigned
    lfd f1, 0x1c8(r26)
    mr r29, r3
    bl __cvt_fp2unsigned
    mr r5, r3
    mr r4, r25
    mr r7, r29
    addi r3, r28, 0x154
    addi r6, r25, 0x1
    opword 0x4CC63182
    bl OSReport
    addi r25, r25, 0x2
    addi r26, r26, 0x10
    cmplwi r25, 0x20
    blt lbl_80315D60
    li r5, 0x0
    lis r3, 0x8000
    sth r5, 0x1a8(r1)
    addi r4, r1, 0x8
    sth r5, 0x1aa(r1)
    lwz r0, 0xd8(r3)
    cmplw r4, r0
    bne lbl_80315DC4
    stw r5, 0xd8(r3)
lbl_80315DC4:
    mr r3, r27
    bl OSSetCurrentContext
    mr r3, r31
    bl OSRestoreInterrupts
lbl_80315DD4:
    addi r3, r28, 0x174
    opword 0x4CC63182
    bl OSReport
    lwz r25, 0x4(r30)
    li r26, 0x0
    b lbl_80315E08
lbl_80315DEC:
    lwz r5, 0x0(r25)
    mr r4, r25
    lwz r6, 0x4(r25)
    addi r3, r28, 0x19c
    opword 0x4CC63182
    bl OSReport
    lwz r25, 0x0(r25)
lbl_80315E08:
    cmpwi r25, 0x0
    beq lbl_80315E28
    addis r0, r25, 0x1
    cmplwi r0, 0xffff
    beq lbl_80315E28
    cmplwi r26, 0x10
    addi r26, r26, 0x1
    blt lbl_80315DEC
lbl_80315E28:
    addi r11, r1, 0x2f0
    bl _restgpr_25
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

// asm_to_cpp: __OSContextInit
asm void __OSContextInit(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, OSSwitchFPUContext@ha
    li r3, 0x7
    stw r0, 0x14(r1)
    addi r4, r4, OSSwitchFPUContext@l
    bl __OSSetExceptionHandler
    li r0, 0x0
    lis r4, 0x8000
    lis r3, at_721_803801B0@ha
    stw r0, 0xd8(r4)
    addi r3, r3, at_721_803801B0@l
    opword 0x4CC63182
    bl DBPrintf
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
