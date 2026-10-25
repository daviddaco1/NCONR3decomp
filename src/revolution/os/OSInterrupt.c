#include <revolution/AI.h>
#include <revolution/BASE.h>
#include <revolution/DSP.h>
#include <revolution/EXI.h>
#include <revolution/IPC.h>
#include <revolution/OS.h>

#include <string.h>

static OSInterruptHandler* InterruptHandlerTable;
s64 __OSLastInterruptTime;
s16 __OSLastInterrupt;
u32 __OSLastInterruptSrr0;

static u32 InterruptPrioTable[] = {
    0x00000100, 0x00000040, 0xF8000000, 0x00000200, 0x00000080, 0x00000010,
    0x00003000, 0x00000020, 0x03FF8C00, 0x04000000, 0x00004000, 0xFFFFFFFF};

static void ExternalInterruptHandler(u8 type, OSContext* ctx);

asm BOOL OSDisableInterrupts(void) {
    // clang-format off
    nofralloc

    entry __RAS_OSDisableInterrupts_begin

    mfmsr r3
    // Clear external interrupts bit
    rlwinm r4, r3, 0, 17, 15
    mtmsr r4

    entry __RAS_OSDisableInterrupts_end

    // Return old interrupt status
    rlwinm r3, r3, 17, 31, 31
    blr
    // clang-format on
}

asm BOOL OSEnableInterrupts(void) {
    // clang-format off
    nofralloc

    mfmsr r3
    // Set external interrupts bit
    ori r4, r3, MSR_EE
    mtmsr r4

    // Return old interrupt status
    rlwinm r3, r3, 17, 31, 31
    blr
    // clang-format on
}

asm BOOL OSRestoreInterrupts(register BOOL status){
    // clang-format off
    nofralloc

    cmpwi status, 0
    mfmsr r4
    beq disable

    // Set external interrupts bit
    ori r5, r4, MSR_EE
    b set_msr

disable:
    // Clear external interrupts bit
    rlwinm r5, r4, 0, 17, 15

set_msr:
    mtmsr r5
    // Return old interrupt status
    rlwinm r3, r4, 17, 31, 31
    blr
    // clang-format on
}

OSInterruptHandler
    __OSSetInterruptHandler(OSInterruptType type, OSInterruptHandler handler) {
    OSInterruptHandler old = InterruptHandlerTable[type];
    InterruptHandlerTable[type] = handler;
    return old;
}

OSInterruptHandler __OSGetInterruptHandler(OSInterruptType type) {
    return InterruptHandlerTable[type];
}

// __OSInterruptInit: definicion C reemplazada por asm (ver abajo)


static u32 SetInterruptMask(u32 type, u32 mask) {
    u32 miMask;
    u32 dspMask;
    u32 aiMask;
    u32 exi0Mask, exi1Mask, exi2Mask;
    u32 piMask;

    switch (__cntlzw(type)) {
    /**
     * MEM interrupts
     */
    case OS_INTR_MEM_0:
    case OS_INTR_MEM_1:
    case OS_INTR_MEM_2:
    case OS_INTR_MEM_3:
    case OS_INTR_MEM_ADDRESS:
        miMask = 0;

        if (!(mask & OS_INTR_MASK(OS_INTR_MEM_0))) {
            miMask |= MI_INTMR_MEM0;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_MEM_1))) {
            miMask |= MI_INTMR_MEM1;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_MEM_2))) {
            miMask |= MI_INTMR_MEM2;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_MEM_3))) {
            miMask |= MI_INTMR_MEM3;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_MEM_ADDRESS))) {
            miMask |= MI_INTMR_ADDR;
        }

        MI_HW_REGS[MI_INTMR] = miMask;
        return type &
               ~(OS_INTR_MASK(OS_INTR_MEM_0) | OS_INTR_MASK(OS_INTR_MEM_1) |
                 OS_INTR_MASK(OS_INTR_MEM_2) | OS_INTR_MASK(OS_INTR_MEM_3) |
                 OS_INTR_MASK(OS_INTR_MEM_ADDRESS));
    /**
     * DSP interrupts
     */
    case OS_INTR_DSP_AI:
    case OS_INTR_DSP_ARAM:
    case OS_INTR_DSP_DSP:
        dspMask = DSP_HW_REGS[DSP_CSR];
        dspMask &= ~(DSP_CSR_AIDINT | DSP_CSR_AIDINTMSK | DSP_CSR_ARINT |
                     DSP_CSR_ARINTMSK | DSP_CSR_DSPINT | DSP_CSR_DSPINTMSK);

        if (!(mask & OS_INTR_MASK(OS_INTR_DSP_AI))) {
            dspMask |= DSP_CSR_AIDINTMSK;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_DSP_ARAM))) {
            dspMask |= DSP_CSR_ARINTMSK;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_DSP_DSP))) {
            dspMask |= DSP_CSR_DSPINTMSK;
        }

        DSP_HW_REGS[DSP_CSR] = dspMask;
        return type &
               ~(OS_INTR_MASK(OS_INTR_DSP_AI) | OS_INTR_MASK(OS_INTR_DSP_ARAM) |
                 OS_INTR_MASK(OS_INTR_DSP_DSP));
    /**
     * AI interrupts
     */
    case OS_INTR_AI_AI:
        aiMask = AI_HW_REGS[AI_AICR];
        aiMask &= ~(AI_AICR_AIINTMSK | AI_AICR_AIINT | AI_AICR_SCRESET);

        if (!(mask & OS_INTR_MASK(OS_INTR_AI_AI))) {
            aiMask |= AI_AICR_AIINTMSK;
        }

        AI_HW_REGS[AI_AICR] = aiMask;
        return type & ~OS_INTR_MASK(OS_INTR_AI_AI);
    /**
     * EXI interrupts (Channel 0)
     */
    case OS_INTR_EXI_0_EXI:
    case OS_INTR_EXI_0_TC:
    case OS_INTR_EXI_0_EXT:
        exi0Mask = EXI_CHAN_PARAMS[EXI_CHAN_0].cpr;
        exi0Mask &= ~(EXI_CPR_EXIINTMASK | EXI_CPR_EXIINT | EXI_CPR_TCINTMASK |
                      EXI_CPR_TCINT | EXI_CPR_EXTINTMASK | EXI_CPR_EXTINT |
                      EXI_CPR_ROMDIS);

        if (!(mask & OS_INTR_MASK(OS_INTR_EXI_0_EXI))) {
            exi0Mask |= EXI_CPR_EXIINTMASK;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_EXI_0_TC))) {
            exi0Mask |= EXI_CPR_TCINTMASK;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_EXI_0_EXT))) {
            exi0Mask |= EXI_CPR_EXTINTMASK;
        }

        EXI_CHAN_PARAMS[EXI_CHAN_0].cpr = exi0Mask;
        return type & ~(OS_INTR_MASK(OS_INTR_EXI_0_EXI) |
                        OS_INTR_MASK(OS_INTR_EXI_0_TC) |
                        OS_INTR_MASK(OS_INTR_EXI_0_EXT));
    /**
     * EXI interrupts (Channel 1)
     */
    case OS_INTR_EXI_1_EXI:
    case OS_INTR_EXI_1_TC:
    case OS_INTR_EXI_1_EXT:
        exi1Mask = EXI_CHAN_PARAMS[EXI_CHAN_1].cpr;
        exi1Mask &= ~(EXI_CPR_EXIINTMASK | EXI_CPR_EXIINT | EXI_CPR_TCINTMASK |
                      EXI_CPR_TCINT | EXI_CPR_EXTINTMASK | EXI_CPR_EXTINT);

        if (!(mask & OS_INTR_MASK(OS_INTR_EXI_1_EXI))) {
            exi1Mask |= EXI_CPR_EXIINTMASK;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_EXI_1_TC))) {
            exi1Mask |= EXI_CPR_TCINTMASK;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_EXI_1_EXT))) {
            exi1Mask |= EXI_CPR_EXTINTMASK;
        }

        EXI_CHAN_PARAMS[EXI_CHAN_1].cpr = exi1Mask;
        return type & ~(OS_INTR_MASK(OS_INTR_EXI_1_EXI) |
                        OS_INTR_MASK(OS_INTR_EXI_1_TC) |
                        OS_INTR_MASK(OS_INTR_EXI_1_EXT));
    /**
     * EXI interrupts (Channel 2)
     */
    case OS_INTR_EXI_2_EXI:
    case OS_INTR_EXI_2_TC:
        exi2Mask = EXI_CHAN_PARAMS[EXI_CHAN_2].cpr;
        exi2Mask &= ~(EXI_CPR_EXIINTMASK | EXI_CPR_EXIINT | EXI_CPR_TCINTMASK |
                      EXI_CPR_TCINT);

        if (!(mask & OS_INTR_MASK(OS_INTR_EXI_2_EXI))) {
            exi2Mask |= EXI_CPR_EXIINTMASK;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_EXI_2_TC))) {
            exi2Mask |= EXI_CPR_TCINTMASK;
        }

        EXI_CHAN_PARAMS[EXI_CHAN_2].cpr = exi2Mask;
        return type & ~(OS_INTR_MASK(OS_INTR_EXI_2_EXI) |
                        OS_INTR_MASK(OS_INTR_EXI_2_TC));
    /**
     * PI interrupts
     */
    case OS_INTR_PI_CP:
    case OS_INTR_PI_PE_TOKEN:
    case OS_INTR_PI_PE_FINISH:
    case OS_INTR_PI_SI:
    case OS_INTR_PI_DI:
    case OS_INTR_PI_RSW:
    case OS_INTR_PI_ERROR:
    case OS_INTR_PI_VI:
    case OS_INTR_PI_DEBUG:
    case OS_INTR_PI_HSP:
    case OS_INTR_PI_ACR:
        piMask = PI_INTMR_EXI | PI_INTMR_AI | PI_INTMR_DSP | PI_INTMR_MEM;

        if (!(mask & OS_INTR_MASK(OS_INTR_PI_CP))) {
            piMask |= PI_INTMR_CP;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_PI_SI))) {
            piMask |= PI_INTMR_SI;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_PI_DI))) {
            piMask |= PI_INTMR_DI;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_PI_RSW))) {
            piMask |= PI_INTMR_RSW;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_PI_ERROR))) {
            piMask |= PI_INTMR_ERROR;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_PI_VI))) {
            piMask |= PI_INTMR_VI;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_PI_DEBUG))) {
            piMask |= PI_INTMR_DEBUG;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_PI_PE_TOKEN))) {
            piMask |= PI_INTMR_PE_TOKEN;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_PI_PE_FINISH))) {
            piMask |= PI_INTMR_PE_FINISH;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_PI_HSP))) {
            piMask |= PI_INTMR_HSP;
        }
        if (!(mask & OS_INTR_MASK(OS_INTR_PI_ACR))) {
            piMask |= PI_INTMR_ACR;
        }

        PI_HW_REGS[PI_INTMR] = piMask;
        return type &
               ~(OS_INTR_MASK(OS_INTR_PI_CP) |
                 OS_INTR_MASK(OS_INTR_PI_PE_TOKEN) |
                 OS_INTR_MASK(OS_INTR_PI_PE_FINISH) |
                 OS_INTR_MASK(OS_INTR_PI_SI) | OS_INTR_MASK(OS_INTR_PI_DI) |
                 OS_INTR_MASK(OS_INTR_PI_RSW) | OS_INTR_MASK(OS_INTR_PI_ERROR) |
                 OS_INTR_MASK(OS_INTR_PI_VI) | OS_INTR_MASK(OS_INTR_PI_DEBUG) |
                 OS_INTR_MASK(OS_INTR_PI_HSP) | OS_INTR_MASK(OS_INTR_PI_ACR));
    default:
        return type;
    }
}

//unused
void OSGetInterruptMask(){
}

//unused
void OSSetInterruptMask(){
}

u32 __OSMaskInterrupts(u32 userMask) {
    BOOL enabled = OSDisableInterrupts();
    u32 prevMask = *(u32*)OSPhysicalToCached(OS_PHYS_PREV_INTR_MASK);
    u32 currMask = *(u32*)OSPhysicalToCached(OS_PHYS_CURRENT_INTR_MASK);

    u32 workMask = userMask & ~(prevMask | currMask);
    userMask = prevMask | userMask;
    *(u32*)OSPhysicalToCached(OS_PHYS_PREV_INTR_MASK) = userMask;

    while (workMask != 0) {
        workMask = SetInterruptMask(workMask, userMask | currMask);
    }

    OSRestoreInterrupts(enabled);
    return prevMask;
}

u32 __OSUnmaskInterrupts(u32 userMask) {
    BOOL enabled = OSDisableInterrupts();
    u32 prevMask = *(u32*)OSPhysicalToCached(OS_PHYS_PREV_INTR_MASK);
    u32 currMask = *(u32*)OSPhysicalToCached(OS_PHYS_CURRENT_INTR_MASK);

    u32 workMask = userMask & (prevMask | currMask);
    userMask = prevMask & ~userMask;
    *(u32*)OSPhysicalToCached(OS_PHYS_PREV_INTR_MASK) = userMask;

    while (workMask != 0) {
        workMask = SetInterruptMask(workMask, userMask | currMask);
    }

    OSRestoreInterrupts(enabled);
    return prevMask;
}

// __OSDispatchInterrupt: definicion C reemplazada por asm (ver abajo)


static asm void ExternalInterruptHandler(register u8 type,
                                         register OSContext* ctx) {
    // clang-format off
    nofralloc

    stw r0, ctx->gprs[0]
    stw r1, ctx->gprs[1]
    stw r2, ctx->gprs[2]
    stmw r6, ctx->gprs[6]

    mfspr r0, GQR1
    stw r0, ctx->gqrs[1]
    mfspr r0, GQR2
    stw r0, ctx->gqrs[2]
    mfspr r0, GQR3
    stw r0, ctx->gqrs[3]
    mfspr r0, GQR4
    stw r0, ctx->gqrs[4]
    mfspr r0, GQR5
    stw r0, ctx->gqrs[5]
    mfspr r0, GQR6
    stw r0, ctx->gqrs[6]
    mfspr r0, GQR7
    stw r0, ctx->gqrs[7]

    stwu r1, -8(r1)
    b __OSDispatchInterrupt
    // clang-format on
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float InterruptHandlerTable_8049E310;
extern u8 lbl_80381078[];
extern void OSLoadContext();
extern void __OSReschedule();

// asm_to_cpp: __OSInterruptInit
asm void __OSInterruptInit(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x80
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, 0x8000
    addi r3, r31, 0x3040
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r3, InterruptHandlerTable_8049E310
    bl memset
    li r6, 0x0
    li r5, 0xf0
    stw r6, 0xc4(r31)
    lis r4, 0xcc00
    lis r0, 0x4000
    lis r3, 0xcd00
    stw r6, 0xc8(r31)
    li r30, -0x10
    stw r5, 0x3004(r4)
    stw r0, 0x34(r3)
    bl OSDisableInterrupts
    lwz r0, 0xc4(r31)
    mr r29, r3
    lwz r4, 0xc8(r31)
    or r30, r30, r0
    nor r0, r0, r4
    stw r30, 0xc4(r31)
    clrrwi r3, r0, 4
    or r30, r30, r4
    b lbl_80319CDC
lbl_80319CD4:
    mr r4, r30
    bl SetInterruptMask
lbl_80319CDC:
    cmpwi r3, 0x0
    bne lbl_80319CD4
    mr r3, r29
    bl OSRestoreInterrupts
    lis r4, ExternalInterruptHandler@ha
    li r3, 0x4
    addi r4, r4, ExternalInterruptHandler@l
    bl __OSSetExceptionHandler
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __OSDispatchInterrupt
asm void __OSDispatchInterrupt(u8 intr, OSContext* ctx) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, 0xcc00
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    lwz r31, 0x3000(r3)
    lwz r0, 0x3004(r3)
    rlwinm. r31, r31, 0, 16, 14
    beq lbl_8031A0AC
    and. r0, r31, r0
    bne lbl_8031A0B4
lbl_8031A0AC:
    mr r3, r30
    bl OSLoadContext
lbl_8031A0B4:
    rlwinm. r0, r31, 0, 24, 24
    li r0, 0x0
    beq lbl_8031A104
    lis r3, 0xcc00
    lhz r4, 0x401e(r3)
    clrlwi. r3, r4, 31
    beq lbl_8031A0D4
    oris r0, r0, 0x8000
lbl_8031A0D4:
    rlwinm. r3, r4, 0, 30, 30
    beq lbl_8031A0E0
    oris r0, r0, 0x4000
lbl_8031A0E0:
    rlwinm. r3, r4, 0, 29, 29
    beq lbl_8031A0EC
    oris r0, r0, 0x2000
lbl_8031A0EC:
    rlwinm. r3, r4, 0, 28, 28
    beq lbl_8031A0F8
    oris r0, r0, 0x1000
lbl_8031A0F8:
    rlwinm. r3, r4, 0, 27, 27
    beq lbl_8031A104
    oris r0, r0, 0x800
lbl_8031A104:
    rlwinm. r3, r31, 0, 25, 25
    beq lbl_8031A138
    lis r3, 0xcc00
    lhz r4, 0x500a(r3)
    rlwinm. r3, r4, 0, 28, 28
    beq lbl_8031A120
    oris r0, r0, 0x400
lbl_8031A120:
    rlwinm. r3, r4, 0, 26, 26
    beq lbl_8031A12C
    oris r0, r0, 0x200
lbl_8031A12C:
    rlwinm. r3, r4, 0, 24, 24
    beq lbl_8031A138
    oris r0, r0, 0x100
lbl_8031A138:
    rlwinm. r3, r31, 0, 26, 26
    beq lbl_8031A154
    lis r3, 0xcd00
    lwz r3, 0x6c00(r3)
    rlwinm. r3, r3, 0, 28, 28
    beq lbl_8031A154
    oris r0, r0, 0x80
lbl_8031A154:
    rlwinm. r3, r31, 0, 27, 27
    beq lbl_8031A1D4
    lis r3, 0xcd00
    lwz r4, 0x6800(r3)
    rlwinm. r3, r4, 0, 30, 30
    beq lbl_8031A170
    oris r0, r0, 0x40
lbl_8031A170:
    rlwinm. r3, r4, 0, 28, 28
    beq lbl_8031A17C
    oris r0, r0, 0x20
lbl_8031A17C:
    rlwinm. r3, r4, 0, 20, 20
    beq lbl_8031A188
    oris r0, r0, 0x10
lbl_8031A188:
    lis r3, 0xcd00
    lwz r4, 0x6814(r3)
    rlwinm. r3, r4, 0, 30, 30
    beq lbl_8031A19C
    oris r0, r0, 0x8
lbl_8031A19C:
    rlwinm. r3, r4, 0, 28, 28
    beq lbl_8031A1A8
    oris r0, r0, 0x4
lbl_8031A1A8:
    rlwinm. r3, r4, 0, 20, 20
    beq lbl_8031A1B4
    oris r0, r0, 0x2
lbl_8031A1B4:
    lis r3, 0xcd00
    lwz r4, 0x6828(r3)
    rlwinm. r3, r4, 0, 30, 30
    beq lbl_8031A1C8
    oris r0, r0, 0x1
lbl_8031A1C8:
    rlwinm. r3, r4, 0, 28, 28
    beq lbl_8031A1D4
    ori r0, r0, 0x8000
lbl_8031A1D4:
    rlwinm. r3, r31, 0, 18, 18
    beq lbl_8031A1E0
    ori r0, r0, 0x20
lbl_8031A1E0:
    rlwinm. r3, r31, 0, 19, 19
    beq lbl_8031A1EC
    ori r0, r0, 0x40
lbl_8031A1EC:
    rlwinm. r3, r31, 0, 21, 21
    beq lbl_8031A1F8
    ori r0, r0, 0x1000
lbl_8031A1F8:
    rlwinm. r3, r31, 0, 22, 22
    beq lbl_8031A204
    ori r0, r0, 0x2000
lbl_8031A204:
    rlwinm. r3, r31, 0, 23, 23
    beq lbl_8031A210
    ori r0, r0, 0x80
lbl_8031A210:
    rlwinm. r3, r31, 0, 28, 28
    beq lbl_8031A21C
    ori r0, r0, 0x800
lbl_8031A21C:
    rlwinm. r3, r31, 0, 29, 29
    beq lbl_8031A228
    ori r0, r0, 0x400
lbl_8031A228:
    rlwinm. r3, r31, 0, 30, 30
    beq lbl_8031A234
    ori r0, r0, 0x200
lbl_8031A234:
    rlwinm. r3, r31, 0, 20, 20
    beq lbl_8031A240
    ori r0, r0, 0x4000
lbl_8031A240:
    clrlwi. r3, r31, 31
    beq lbl_8031A24C
    ori r0, r0, 0x100
lbl_8031A24C:
    rlwinm. r3, r31, 0, 17, 17
    beq lbl_8031A258
    ori r0, r0, 0x10
lbl_8031A258:
    lis r3, 0x8000
    lwz r4, 0xc4(r3)
    lwz r3, 0xc8(r3)
    or r3, r4, r3
    andc. r3, r0, r3
    beq lbl_8031A2F4
    lis r4, lbl_80381078@ha
    addi r4, r4, lbl_80381078@l
lbl_8031A278:
    lwz r0, 0x0(r4)
    and. r0, r3, r0
    beq lbl_8031A290
    cntlzw r0, r0
    extsh r29, r0
    b lbl_8031A298
lbl_8031A290:
    addi r4, r4, 0x4
    b lbl_8031A278
lbl_8031A298:
    lwz r3, InterruptHandlerTable_8049E310
    slwi r0, r29, 2
    lwzx r31, r3, r0
    cmpwi r31, 0x0
    beq lbl_8031A2F4
    cmpwi r29, 0x4
    ble lbl_8031A2CC
    sth r29, __OSLastInterrupt
    bl OSGetTime
    stw r4, __OSLastInterruptTime+0x4
    stw r3, __OSLastInterruptTime
    lwz r0, 0x198(r30)
    stw r0, __OSLastInterruptSrr0
lbl_8031A2CC:
    bl OSDisableScheduler
    mr r12, r31
    mr r3, r29
    mr r4, r30
    mtctr r12
    bctrl
    bl OSEnableScheduler
    bl __OSReschedule
    mr r3, r30
    bl OSLoadContext
lbl_8031A2F4:
    mr r3, r30
    bl OSLoadContext
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
