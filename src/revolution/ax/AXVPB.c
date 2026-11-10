#include <math.h>
#include <revolution/AX.h>
#include <revolution/OS.h>
#include <string.h>

DECOMP_FORCELITERAL(AXVPB_c, 2.0f);

/**
 * It's really even worse than this: what appears to be manually unrolled
 * copies.
 *
 * I hope that it's just some compiler pattern that I'm unaware of, but in the
 * meantime I've managed to make a macro that still works.
 *
 * (If you compile for -O0 this will totally break functions)
 */
#define FUNNY_COPY(dst, src, type, n)                                          \
    do {                                                                       \
                                                                               \
        type* __dst = (type*)dst;                                              \
        type* __src = (type*)src;                                              \
        u16 i;                                                                 \
                                                                               \
        for (i = 0; i < n / sizeof(type); i++) {                               \
            *__dst = *__src;                                                   \
            __dst++;                                                           \
            __src++;                                                           \
        }                                                                      \
                                                                               \
    } while (0)

#define ADDRHI(x) (((uintptr_t)x) >> 16 & 0xFFFF)
#define ADDRLO(x) (((uintptr_t)x) & 0xFFFF)

typedef struct _AXITD {
    u8 UNK_0x0[0x40];
} AXITD;

static AXPB* __AXPB = NULL;
static AXPB __s_AXPB[AX_VOICE_MAX] ALIGN(32);

static AXITD* __AXITD = NULL;
static AXITD __s_AXITD[AX_VOICE_MAX] ALIGN(32);

// Did they forget the alignment here?
static AXVPB* __AXVPB = NULL;
static AXVPB __s_AXVPB[AX_VOICE_MAX];

s32 __AXMaxVoices = 0;
static s32 __AXNumVoices = 0;

static u32 __AXRecDspCycles = 0;
static u32 __AXMaxDspCycles = 0;

static u32 __AXMixCycles[] = {2,   408,  408,  810,  1404, 1404, 1404, 1404,
                              408, 816,  816,  1218, 1812, 1812, 1812, 1812,
                              707, 1115, 1115, 1517, 2111, 2111, 2111, 2111,
                              707, 1115, 1115, 1517, 2111, 2111, 2111, 2111};

static u32 __AXRmtMixCycles[] = {4, 86, 151, 151};

static void __AXVPBInitCommon(void);
static u32 __AXGetSrcCycles(u16 select, const AXPBSRC* src);

s32 __AXGetNumVoices(void) {
    return __AXNumVoices;
}

void __AXServiceVPB(AXVPB* vpb) {
    AXPB* dst;
    AXPB* src;
    u32 sync;

    __AXNumVoices++;

    dst = &__AXPB[vpb->index];
    src = &vpb->pb;
    sync = vpb->sync;

    if (sync == 0) {
        src->state = dst->state;
        src->ve.currentVolume = dst->ve.currentVolume;
        src->addr.currentAddressHi = dst->addr.currentAddressHi;
        src->addr.currentAddressLo = dst->addr.currentAddressLo;
        return;
    }

    if (sync & AX_PBSYNC_ALL) {
        memcpy(dst, src, sizeof(AXPB));
        return;
    }

    if (sync & AX_PBSYNC_SELECT) {
        dst->srcSelect = src->srcSelect;
        dst->coefSelect = src->coefSelect;
    }

    if (sync & AX_PBSYNC_MIXER_CTRL) {
        dst->mixerCtrl = src->mixerCtrl;
    }

    if (sync & AX_PBSYNC_STATE) {
        dst->state = src->state;
    } else {
        src->state = dst->state;
    }

    if (sync & AX_PBSYNC_TYPE) {
        dst->type = src->type;
    }

    if (sync & AX_PBSYNC_MIX) {
        memcpy(&dst->mix, &src->mix, sizeof(AXPBMIX));
    }

    if (sync & AX_PBSYNC_ITD_SHIFT) {
        dst->itd.targetShiftL = src->itd.targetShiftL;
        dst->itd.targetShiftR = src->itd.targetShiftR;
    } else if (sync & AX_PBSYNC_ITD) {
        FUNNY_COPY(&dst->itd, &src->itd, u16, sizeof(AXPBITD));
        __memclr(vpb->itdBuffer, sizeof(AXITD));
    }

    if (sync & AX_PBSYNC_DPOP) {
        memcpy(&dst->dpop, &src->dpop, sizeof(AXPBDPOP));
    }

    if (sync & AX_PBSYNC_VE_DELTA) {
        src->ve.currentVolume = dst->ve.currentVolume;
        dst->ve.currentDelta = src->ve.currentDelta;
    } else if (sync & AX_PBSYNC_VE) {
        dst->ve.currentVolume = src->ve.currentVolume;
        dst->ve.currentDelta = src->ve.currentDelta;
    }

    if (sync & (AX_PBSYNC_LOOP_FLAG | AX_PBSYNC_LOOP_ADDR | AX_PBSYNC_END_ADDR |
                AX_PBSYNC_CURR_ADDR)) {
        if (sync & AX_PBSYNC_LOOP_FLAG) {
            dst->addr.loopFlag = src->addr.loopFlag;
        }

        if (sync & AX_PBSYNC_LOOP_ADDR) {
            *(u32*)&dst->addr.loopAddressHi = *(u32*)&src->addr.loopAddressHi;
        }

        if (sync & AX_PBSYNC_END_ADDR) {
            *(u32*)&dst->addr.endAddressHi = *(u32*)&src->addr.endAddressHi;
        }

        if (sync & AX_PBSYNC_CURR_ADDR) {
            *(u32*)&dst->addr.currentAddressHi =
                *(u32*)&src->addr.currentAddressHi;
        } else {
            *(u32*)&src->addr.currentAddressHi =
                *(u32*)&dst->addr.currentAddressHi;
        }
    } else if (sync & AX_PBSYNC_ADDR) {
        FUNNY_COPY(&dst->addr, &src->addr, u32, sizeof(AXPBADDR));
    } else {
        src->addr.currentAddressHi = dst->addr.currentAddressHi;
        src->addr.currentAddressLo = dst->addr.currentAddressLo;
    }

    if (sync & AX_PBSYNC_ADPCM) {
        FUNNY_COPY(&dst->adpcm, &src->adpcm, u32, sizeof(AXPBADPCM));
    }

    if (sync & AX_PBSYNC_SRC_RATIO) {
        dst->src.ratioHi = src->src.ratioHi;
        dst->src.ratioLo = src->src.ratioLo;
    } else if (sync & AX_PBSYNC_SRC) {
        FUNNY_COPY(&dst->src, &src->src, u16, sizeof(AXPBSRC));
    }

    if (sync & AX_PBSYNC_ADPCM_LOOP) {
        FUNNY_COPY(&dst->adpcmLoop, &src->adpcmLoop, u16,
                   sizeof(AXPBADPCMLOOP));
    }

    if (sync & AX_PBSYNC_LPF_COEFS) {
        dst->lpf.a0 = src->lpf.a0;
        dst->lpf.b0 = src->lpf.b0;
    } else if (sync & AX_PBSYNC_LPF) {
        FUNNY_COPY(&dst->lpf, &src->lpf, u16, sizeof(AXPBLPF));
    }

    if (sync & AX_PBSYNC_BIQUAD_COEFS) {
        dst->biquad.b0 = src->biquad.b0;
        dst->biquad.b1 = src->biquad.b1;
        dst->biquad.b2 = src->biquad.b2;
        dst->biquad.a1 = src->biquad.a1;
        dst->biquad.a2 = src->biquad.a2;
    } else if (sync & AX_PBSYNC_BIQUAD) {
        FUNNY_COPY(&dst->biquad, &src->biquad, u16, sizeof(AXPBBIQUAD));
    }

    if (sync & AX_PBSYNC_REMOTE) {
        dst->remote = src->remote;
    }

    if (sync & AX_PBSYNC_RMT_MIXER_CTRL) {
        dst->rmtMixerCtrl = src->rmtMixerCtrl;
    }

    if (sync & AX_PBSYNC_RMTMIX) {
        memcpy(&dst->rmtMix, &src->rmtMix, sizeof(AXPBRMTMIX));
    }

    if (sync & AX_PBSYNC_RMTDPOP) {
        memcpy(&dst->rmtDpop, &src->rmtDpop, sizeof(AXPBRMTDPOP));
    }

    if (sync & AX_PBSYNC_RMTSRC) {
        memcpy(&dst->rmtSrc, &src->rmtSrc, sizeof(AXPBRMTSRC));
    }

    if (sync & AX_PBSYNC_RMTIIR_LPF_COEFS) {
        dst->rmtIIR.lpf.a0 = src->rmtIIR.lpf.a0;
        dst->rmtIIR.lpf.b0 = src->rmtIIR.lpf.b0;
    } else if (sync & AX_PBSYNC_RMTIIR_BIQUAD_COEFS) {
        dst->rmtIIR.biquad.b0 = src->rmtIIR.biquad.b0;
        dst->rmtIIR.biquad.b1 = src->rmtIIR.biquad.b1;
        dst->rmtIIR.biquad.b2 = src->rmtIIR.biquad.b2;
        dst->rmtIIR.biquad.a1 = src->rmtIIR.biquad.a1;
        dst->rmtIIR.biquad.a2 = src->rmtIIR.biquad.a2;
    } else if (sync & AX_PBSYNC_RMTIIR) {
        FUNNY_COPY(&dst->rmtIIR, &src->rmtIIR, u16, sizeof(AXPBRMTIIR));
    }
}

void __AXDumpVPB(AXVPB* vpb) {
    AXPB* pb = &__AXPB[vpb->index];

    if (pb->state == AX_VOICE_RUN) {
        __AXDepopVoice(pb);
    }

    vpb->pb.state = AX_VOICE_STOP;
    pb->state = AX_VOICE_STOP;

    __AXPushCallbackStack(vpb);
}

void __AXSyncPBs(u32 baseCycles) {
    u32 cycles;
    u32 prio;
    AXVPB* head;

    __AXNumVoices = 0;

    DCInvalidateRange(__AXPB, __AXMaxVoices * sizeof(AXPB));
    DCInvalidateRange(__AXITD, __AXMaxVoices * sizeof(AXITD));

    cycles = 32 + __AXGetCommandListCycles() + __AXMaxVoices * 600 + baseCycles;

    for (prio = AX_PRIORITY_MAX; prio > AX_PRIORITY_FREE; prio--) {
        for (head = __AXGetStackHead(prio); head != NULL; head = head->next) {
            if (head->pb.itd.flag == 1) {
                cycles += 129;
            }

            if (head->depop) {
                __AXDepopVoice(&__AXPB[head->index]);
            }

            if (head->pb.state == AX_VOICE_RUN) {
                cycles += 387;

                if (head->pb.lpf.on) {
                    cycles += 309;
                }

                if (head->pb.biquad.on) {
                    cycles += 1024;
                }

                if (head->pb.itd.flag == 1) {
                    cycles += 27;
                }

                cycles += __AXGetSrcCycles(head->pb.srcSelect, &head->pb.src);
                cycles += __AXMixCycles[head->pb.mixerCtrl >> 0 & 31] +
                          __AXMixCycles[head->pb.mixerCtrl >> 16 & 31] +
                          __AXMixCycles[head->pb.mixerCtrl >> 21 & 31] +
                          __AXMixCycles[head->pb.mixerCtrl >> 26 & 31];

                if (head->pb.remote == TRUE) {
                    cycles += 613;

                    if (head->pb.rmtIIR.lpf.on == AX_PB_LPF_ON) {
                        cycles += 118;
                    } else if (head->pb.rmtIIR.biquad.on == AX_PB_BIQUAD_ON) {
                        cycles += 834;
                    }

                    cycles +=
                        __AXRmtMixCycles[head->pb.rmtMixerCtrl >> 0 & 3] +
                        __AXRmtMixCycles[head->pb.rmtMixerCtrl >> 2 & 3] +
                        __AXRmtMixCycles[head->pb.rmtMixerCtrl >> 4 & 3] +
                        __AXRmtMixCycles[head->pb.rmtMixerCtrl >> 6 & 3] +
                        __AXRmtMixCycles[head->pb.rmtMixerCtrl >> 8 & 3] +
                        __AXRmtMixCycles[head->pb.rmtMixerCtrl >> 10 & 3] +
                        __AXRmtMixCycles[head->pb.rmtMixerCtrl >> 12 & 3] +
                        __AXRmtMixCycles[head->pb.rmtMixerCtrl >> 14 & 3];
                }

                if (__AXMaxDspCycles > cycles) {
                    __AXServiceVPB(head);
                } else {
                    __AXDumpVPB(head);
                }

            } else {
                __AXServiceVPB(head);
            }

            head->sync = 0;
            head->depop = FALSE;
        }
    }

    __AXRecDspCycles = cycles;

    for (head = __AXGetStackHead(AX_PRIORITY_FREE); head != NULL;
         head = head->next) {
        if (head->depop) {
            __AXDepopVoice(&__AXPB[head->index]);
        }

        head->depop = FALSE;
        __AXPB[head->index].state = AX_VOICE_STOP;
    }

    DCFlushRange(__AXPB, __AXMaxVoices * sizeof(AXPB));
    DCFlushRange(__AXITD, __AXMaxVoices * sizeof(AXITD));
}

// __AXGetPBs: definicion C reemplazada por asm (ver abajo)
AXPB* __AXGetPBs(void);


void __AXSetPBDefault(AXVPB* vpb) {
    vpb->pb.state = AX_VOICE_STOP;
    vpb->pb.itd.flag = 0;
    vpb->sync = AX_PBSYNC_STATE | AX_PBSYNC_ITD | AX_PBSYNC_LPF |
                AX_PBSYNC_BIQUAD | AX_PBSYNC_REMOTE | AX_PBSYNC_RMTSRC |
                AX_PBSYNC_RMTIIR;
    vpb->pb.lpf.on = 0;
    vpb->pb.biquad.on = 0;
    vpb->pb.remote = 0;
    vpb->pb.rmtIIR.lpf.on = 0;
    vpb->pb.rmtSrc.currentAddressFrac = 0;
    vpb->pb.rmtSrc.last_samples[0] = 0;
    vpb->pb.rmtSrc.last_samples[1] = 0;
    vpb->pb.rmtSrc.last_samples[2] = 0;
    vpb->pb.rmtSrc.last_samples[3] = 0;
}

void __AXVPBInit(void) {
    __AXMaxVoices = AX_VOICE_MAX;

    __AXPB = __s_AXPB;
    __AXITD = __s_AXITD;
    __AXVPB = __s_AXVPB;

    __AXVPBInitCommon();
}

// __AXVPBInitCommon: definicion C reemplazada por asm (ver abajo)
void __AXVPBInitCommon(void);


void __AXVPBQuit(void) {
    __AXPB = NULL;
    __AXITD = NULL;
    __AXVPB = NULL;
    __AXMaxVoices = 0;
}

void AXSetVoiceSrcType(AXVPB* p, u32 type)
{
    BOOL old;
    AXPB* ppb;

    old = OSDisableInterrupts();
    ppb = &p->pb;

    switch (type) {
    case AX_SRC_TYPE_NONE:
        ppb->srcSelect = 2;
        break;
    case AX_SRC_TYPE_LINEAR:
        ppb->srcSelect = 1;
        break;
    case AX_SRC_TYPE_4TAP_8K:
        ppb->srcSelect = 0;
        ppb->coefSelect = 0;
        break;
    case AX_SRC_TYPE_4TAP_12K:
        ppb->srcSelect = 0;
        ppb->coefSelect = 1;
        break;
    case AX_SRC_TYPE_4TAP_16K:
        ppb->srcSelect = 0;
        ppb->coefSelect = 2;
        break;
    }

    p->sync |= AX_PBSYNC_SELECT;
    OSRestoreInterrupts(old);
}

void AXSetVoiceState(AXVPB* vpb, u16 state) {
    BOOL enabled = OSDisableInterrupts();

    if (vpb->pb.state == state) {
        OSRestoreInterrupts(enabled);
        return;
    }

    vpb->pb.state = state;
    vpb->sync |= AX_PBSYNC_STATE;

    if (state == AX_VOICE_STOP) {
        vpb->depop = TRUE;
    }

    OSRestoreInterrupts(enabled);
}

void AXSetVoiceAddr(AXVPB* vpb, AXPBADDR* addr) {
    BOOL enabled = OSDisableInterrupts();

    u32* dst = (u32*)&vpb->pb.addr;
    const u32* src = (u32*)addr;

    // :(
    *dst = *src;
    dst++;
    src++;

    *dst = *src;
    dst++;
    src++;

    *dst = *src;
    dst++;
    src++;

    *dst = *src;

    switch (addr->format) {
    case AX_SAMPLE_FORMAT_PCM_S16:
        dst++;
        *dst++ = 0;
        *dst++ = 0;
        *dst++ = 0;
        *dst++ = 0;
        *dst++ = 0;
        *dst++ = 0;
        *dst++ = 0;
        *dst++ = 0;
        *dst++ = 0x08000000;
        *dst = 0;
        break;
    case AX_SAMPLE_FORMAT_PCM_S8:
        dst++;
        *dst++ = 0;
        *dst++ = 0;
        *dst++ = 0;
        *dst++ = 0;
        *dst++ = 0;
        *dst++ = 0;
        *dst++ = 0;
        *dst++ = 0;
        *dst++ = 0x01000000;
        *dst = 0;
        break;
    case AX_SAMPLE_FORMAT_DSP_ADPCM:
    default:
        break;
    }

    vpb->sync &= ~(AX_PBSYNC_LOOP_FLAG | AX_PBSYNC_LOOP_ADDR |
                   AX_PBSYNC_END_ADDR | AX_PBSYNC_CURR_ADDR);
    vpb->sync |= AX_PBSYNC_ADDR | AX_PBSYNC_ADPCM;

    OSRestoreInterrupts(enabled);
}

void AXSetVoiceSrc(AXVPB* p, AXPBSRC* src_)
{
    BOOL old;
    u16* dst;
    u16* src;

    dst = (void*)&p->pb.src;
    src = (void*)src_;

    old = OSDisableInterrupts();
    {
        *(dst) = *(src);
        dst += 1;
        src += 1;
        *(dst) = *(src);
        dst += 1;
        src += 1;
        *(dst) = *(src);
        dst += 1;
        src += 1;
        *(dst) = *(src);
        dst += 1;
        src += 1;
        *(dst) = *(src);
        dst += 1;
        src += 1;
        *(dst) = *(src);
        dst += 1;
        src += 1;
        *(dst) = *(src);
        dst += 1;
        src += 1;
    }
    p->sync &= ~(AX_PBSYNC_SRC_RATIO);
    p->sync |= AX_PBSYNC_SRC;
    OSRestoreInterrupts(old);
}

void AXGetLpfCoefs(u16 freq, u16* a, u16* b) {
    f32 rf31 = 2.0f - cosf(2 * M_PI * freq / AX_SAMPLE_RATE);
    f32 rf30 = (float)sqrt(rf31 * rf31 - 1.0f) - rf31;

    *b = 32768 * -rf30;
    *a = 32767 - *b;
}

void AXSetMaxDspCycles(u32 num) {
    __AXMaxDspCycles = num;
}

static u32 __AXGetSrcCycles(u16 select, const AXPBSRC* src) {
    u32 ratio = src->ratioHi << 16 | src->ratioLo;

    if (select == 0) {
        return (ratio * 512 + 32768) / 65536 + 1561;
    }

    if (select == 1) {
        return (ratio * 512 + 32768) / 65536 + 1466;
    }

    return 605;
}

void AXSetVoiceRmtOn(AXVPB *vpb, u16 on) {
    BOOL old = OSDisableInterrupts();
    vpb->pb.remote = on;
    vpb->sync |= AX_PBSYNC_REMOTE; 
    OSRestoreInterrupts(old);
}

// AXGetMaxVoices: definicion C reemplazada por asm (ver abajo)
s32 AXGetMaxVoices(void);


// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049DFA0;
extern float lbl_8049DFA4;
extern float lbl_8049DFA8;
extern float lbl_8049DFAC;
extern float lbl_8049DFB4;
extern float lbl_8049DFB8;
s32 AXGetMaxVoices(void);
AXPB* __AXGetPBs(void);
extern void __AXPushFreeStack();
static void __AXVPBInitCommon(void);
extern void _restgpr_25();
extern void _savegpr_25();

// asm_to_cpp: AXGetMaxVoices
asm s32 AXGetMaxVoices(void) {
    nofralloc
    lwz r3, lbl_8049DFAC
    blr
}

// asm_to_cpp: __AXGetPBs
asm AXPB* __AXGetPBs(void) {
    nofralloc
    lwz r3, lbl_8049DFA0
    blr
}

// asm_to_cpp: __AXVPBInitCommon
asm static void __AXVPBInitCommon(void) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r4, 0x8000
    lis r3, 0x8905
    lwz r4, 0xf8(r4)
    subi r5, r3, 0x2af
    lwz r0, lbl_8049DFAC
    li r3, 0x0
    mulhwu r5, r5, r4
    stw r3, lbl_8049DFB4
    lwz r7, lbl_8049DFA0
    mulli r6, r0, 0x50
    subf r0, r5, r4
    srwi r0, r0, 1
    add r0, r0, r5
    cmpwi r6, 0x0
    srwi r0, r0, 9
    stw r0, lbl_8049DFB8
    beq lbl_8029EA00
    srwi. r0, r6, 3
    mtctr r0
    beq lbl_8029E9F0
lbl_8029E9C0:
    stw r3, 0x0(r7)
    stw r3, 0x4(r7)
    stw r3, 0x8(r7)
    stw r3, 0xc(r7)
    stw r3, 0x10(r7)
    stw r3, 0x14(r7)
    stw r3, 0x18(r7)
    stw r3, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_8029E9C0
    andi. r6, r6, 0x7
    beq lbl_8029EA00
lbl_8029E9F0:
    mtctr r6
lbl_8029E9F4:
    stw r3, 0x0(r7)
    addi r7, r7, 0x4
    bdnz lbl_8029E9F4
lbl_8029EA00:
    lwz r0, lbl_8049DFAC
    li r3, 0x0
    lwz r4, lbl_8049DFA4
    slwi. r5, r0, 4
    beq lbl_8029EA60
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_8029EA50
lbl_8029EA20:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    stw r3, 0x8(r4)
    stw r3, 0xc(r4)
    stw r3, 0x10(r4)
    stw r3, 0x14(r4)
    stw r3, 0x18(r4)
    stw r3, 0x1c(r4)
    addi r4, r4, 0x20
    bdnz lbl_8029EA20
    andi. r5, r5, 0x7
    beq lbl_8029EA60
lbl_8029EA50:
    mtctr r5
lbl_8029EA54:
    stw r3, 0x0(r4)
    addi r4, r4, 0x4
    bdnz lbl_8029EA54
lbl_8029EA60:
    lwz r0, lbl_8049DFAC
    li r3, 0x0
    lwz r4, lbl_8049DFA8
    mulli r5, r0, 0x5a
    cmpwi r5, 0x0
    beq lbl_8029EAC4
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_8029EAB4
lbl_8029EA84:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    stw r3, 0x8(r4)
    stw r3, 0xc(r4)
    stw r3, 0x10(r4)
    stw r3, 0x14(r4)
    stw r3, 0x18(r4)
    stw r3, 0x1c(r4)
    addi r4, r4, 0x20
    bdnz lbl_8029EA84
    andi. r5, r5, 0x7
    beq lbl_8029EAC4
lbl_8029EAB4:
    mtctr r5
lbl_8029EAB8:
    stw r3, 0x0(r4)
    addi r4, r4, 0x4
    bdnz lbl_8029EAB8
lbl_8029EAC4:
    lis r3, 0x18a8
    li r31, 0x0
    addi r29, r3, 0x24
    li r27, 0x0
    li r26, 0x0
    li r25, 0x0
    li r28, 0x0
    li r30, 0x1
    b lbl_8029EBB4
lbl_8029EAE8:
    lwz r0, lbl_8049DFA8
    lwz r5, lbl_8049DFA0
    lwz r4, lbl_8049DFA4
    add r3, r0, r25
    add r5, r5, r27
    stw r31, 0x18(r3)
    add r6, r4, r26
    stw r6, 0x24(r3)
    sth r28, 0x38(r3)
    sth r28, 0x6c(r3)
    stw r29, 0x1c(r3)
    sth r28, 0xe2(r3)
    sth r28, 0xea(r3)
    sth r28, 0xfe(r3)
    sth r28, 0x13c(r3)
    sth r28, 0x132(r3)
    sth r28, 0x134(r3)
    sth r28, 0x136(r3)
    sth r28, 0x138(r3)
    sth r28, 0x13a(r3)
    lwz r4, lbl_8049DFAC
    subi r0, r4, 0x1
    cmplw r31, r0
    bne lbl_8029EB5C
    sth r28, 0x2(r5)
    sth r28, 0x0(r5)
    sth r28, 0x2a(r3)
    sth r28, 0x28(r3)
    b lbl_8029EB74
lbl_8029EB5C:
    addi r0, r5, 0x140
    srwi r4, r0, 16
    sth r4, 0x28(r3)
    sth r0, 0x2a(r3)
    sth r4, 0x0(r5)
    sth r0, 0x2(r5)
lbl_8029EB74:
    srwi r0, r5, 16
    srwi r4, r6, 16
    sth r0, 0x2c(r3)
    sth r5, 0x2e(r3)
    sth r0, 0x4(r5)
    sth r5, 0x6(r5)
    sth r4, 0x6e(r3)
    sth r6, 0x70(r3)
    sth r4, 0x46(r5)
    sth r6, 0x48(r5)
    stw r30, 0xc(r3)
    bl __AXPushFreeStack
    addi r27, r27, 0x140
    addi r26, r26, 0x40
    addi r25, r25, 0x168
    addi r31, r31, 0x1
lbl_8029EBB4:
    lwz r0, lbl_8049DFAC
    cmplw r31, r0
    blt lbl_8029EAE8
    mulli r4, r0, 0x140
    lwz r3, lbl_8049DFA0
    bl DCFlushRange
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
