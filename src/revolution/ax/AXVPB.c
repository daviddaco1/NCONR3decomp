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

// __AXServiceVPB: definicion C reemplazada por asm (ver abajo)


void __AXDumpVPB(AXVPB* vpb) {
    AXPB* pb = &__AXPB[vpb->index];

    if (pb->state == AX_VOICE_RUN) {
        __AXDepopVoice(pb);
    }

    vpb->pb.state = AX_VOICE_STOP;
    pb->state = AX_VOICE_STOP;

    __AXPushCallbackStack(vpb);
}

// __AXSyncPBs: definicion C reemplazada por asm (ver abajo)


AXPB* __AXGetPBs(void) {
    return __AXPB;
}

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

// AXSetVoiceAddr: definicion C reemplazada por asm (ver abajo)


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

// AXGetLpfCoefs: definicion C reemplazada por asm (ver abajo)


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

s32 AXGetMaxVoices(void) {
    return __AXMaxVoices;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049DFA0;
extern float lbl_8049DFA4;
extern float lbl_8049DFA8;
extern float lbl_8049DFAC;
extern float lbl_8049DFB0;
extern float lbl_8049DFB4;
extern float lbl_8049DFB8;
extern float lbl_804A2418;
extern float lbl_804A241C;
extern float lbl_804A2420;
extern float lbl_804A2424;
extern float lbl_804A2428;
extern float lbl_804A2430;
extern u8 lbl_8036F3C0[];
extern u8 lbl_8036F440[];
extern void DCFlushRange();
extern void DCInvalidateRange();
extern void __AXPushFreeStack();
extern void _restgpr_25();
extern void _savegpr_25();
extern void fn_8029C958();

// asm_to_cpp: __AXServiceVPB
asm void __AXServiceVPB(AXVPB* vpb) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x28
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r5, lbl_8049DFB0
    lwz r4, lbl_8049DFA0
    addi r0, r5, 0x1
    stw r0, lbl_8049DFB0
    lwz r0, 0x18(r3)
    lwz r29, 0x1c(r3)
    mulli r0, r0, 0x140
    cmpwi r29, 0x0
    add r31, r4, r0
    bne lbl_8029E0F4
    lhz r0, 0x10(r31)
    sth r0, 0x10(r30)
    lhz r0, 0x6a(r31)
    sth r0, 0x6a(r30)
    lhz r0, 0x7a(r31)
    sth r0, 0x7a(r30)
    lhz r0, 0x7c(r31)
    sth r0, 0x7c(r30)
    b lbl_8029E5B4
lbl_8029E0F4:
    clrrwi. r0, r29, 31
    beq lbl_8029E110
    mr r3, r31
    mr r4, r30
    li r5, 0x140
    bl memcpy
    b lbl_8029E5B4
lbl_8029E110:
    clrlwi. r0, r29, 31
    beq lbl_8029E128
    lhz r0, 0x8(r30)
    sth r0, 0x8(r31)
    lhz r0, 0xa(r30)
    sth r0, 0xa(r31)
lbl_8029E128:
    rlwinm. r0, r29, 0, 30, 30
    beq lbl_8029E138
    lwz r0, 0xc(r30)
    stw r0, 0xc(r31)
lbl_8029E138:
    rlwinm. r0, r29, 0, 29, 29
    beq lbl_8029E14C
    lhz r0, 0x10(r30)
    sth r0, 0x10(r31)
    b lbl_8029E154
lbl_8029E14C:
    lhz r0, 0x10(r31)
    sth r0, 0x10(r30)
lbl_8029E154:
    rlwinm. r0, r29, 0, 28, 28
    beq lbl_8029E164
    lhz r0, 0x12(r30)
    sth r0, 0x12(r31)
lbl_8029E164:
    rlwinm. r0, r29, 0, 27, 27
    beq lbl_8029E17C
    addi r3, r31, 0x14
    addi r4, r30, 0x14
    li r5, 0x30
    bl memcpy
lbl_8029E17C:
    rlwinm. r0, r29, 0, 25, 25
    beq lbl_8029E198
    lhz r0, 0x4e(r30)
    sth r0, 0x4e(r31)
    lhz r0, 0x50(r30)
    sth r0, 0x50(r31)
    b lbl_8029E220
lbl_8029E198:
    rlwinm. r0, r29, 0, 26, 26
    beq lbl_8029E220
    lhz r3, 0x44(r30)
    li r0, 0x0
    sth r3, 0x44(r31)
    lhz r3, 0x46(r30)
    sth r3, 0x46(r31)
    lhz r3, 0x48(r30)
    sth r3, 0x48(r31)
    lhz r3, 0x4a(r30)
    sth r3, 0x4a(r31)
    lhz r3, 0x4c(r30)
    sth r3, 0x4c(r31)
    lhz r3, 0x4e(r30)
    sth r3, 0x4e(r31)
    lhz r3, 0x50(r30)
    sth r3, 0x50(r31)
    lwz r3, 0x24(r28)
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
lbl_8029E220:
    rlwinm. r0, r29, 0, 24, 24
    beq lbl_8029E238
    addi r3, r31, 0x52
    addi r4, r30, 0x52
    li r5, 0x18
    bl memcpy
lbl_8029E238:
    rlwinm. r0, r29, 0, 22, 22
    beq lbl_8029E254
    lhz r3, 0x6a(r31)
    lha r0, 0x6c(r30)
    sth r3, 0x6a(r30)
    sth r0, 0x6c(r31)
    b lbl_8029E26C
lbl_8029E254:
    rlwinm. r0, r29, 0, 23, 23
    beq lbl_8029E26C
    lhz r0, 0x6a(r30)
    sth r0, 0x6a(r31)
    lha r0, 0x6c(r30)
    sth r0, 0x6c(r31)
lbl_8029E26C:
    rlwinm. r0, r29, 0, 17, 20
    beq lbl_8029E2C4
    rlwinm. r0, r29, 0, 20, 20
    beq lbl_8029E284
    lhz r0, 0x6e(r30)
    sth r0, 0x6e(r31)
lbl_8029E284:
    rlwinm. r0, r29, 0, 19, 19
    beq lbl_8029E294
    lwz r0, 0x72(r30)
    stw r0, 0x72(r31)
lbl_8029E294:
    rlwinm. r0, r29, 0, 18, 18
    beq lbl_8029E2A4
    lwz r0, 0x76(r30)
    stw r0, 0x76(r31)
lbl_8029E2A4:
    rlwinm. r0, r29, 0, 17, 17
    beq lbl_8029E2B8
    lwz r0, 0x7a(r30)
    stw r0, 0x7a(r31)
    b lbl_8029E300
lbl_8029E2B8:
    lwz r0, 0x7a(r31)
    stw r0, 0x7a(r30)
    b lbl_8029E300
lbl_8029E2C4:
    rlwinm. r0, r29, 0, 21, 21
    beq lbl_8029E2F0
    lwz r0, 0x6e(r30)
    stw r0, 0x6e(r31)
    lwz r0, 0x72(r30)
    stw r0, 0x72(r31)
    lwz r0, 0x76(r30)
    stw r0, 0x76(r31)
    lwz r0, 0x7a(r30)
    stw r0, 0x7a(r31)
    b lbl_8029E300
lbl_8029E2F0:
    lhz r0, 0x7a(r31)
    sth r0, 0x7a(r30)
    lhz r0, 0x7c(r31)
    sth r0, 0x7c(r30)
lbl_8029E300:
    rlwinm. r0, r29, 0, 16, 16
    beq lbl_8029E358
    lwz r0, 0x7e(r30)
    stw r0, 0x7e(r31)
    lwz r0, 0x82(r30)
    stw r0, 0x82(r31)
    lwz r0, 0x86(r30)
    stw r0, 0x86(r31)
    lwz r0, 0x8a(r30)
    stw r0, 0x8a(r31)
    lwz r0, 0x8e(r30)
    stw r0, 0x8e(r31)
    lwz r0, 0x92(r30)
    stw r0, 0x92(r31)
    lwz r0, 0x96(r30)
    stw r0, 0x96(r31)
    lwz r0, 0x9a(r30)
    stw r0, 0x9a(r31)
    lwz r0, 0x9e(r30)
    stw r0, 0x9e(r31)
    lwz r0, 0xa2(r30)
    stw r0, 0xa2(r31)
lbl_8029E358:
    rlwinm. r0, r29, 0, 14, 14
    beq lbl_8029E374
    lhz r0, 0xa6(r30)
    sth r0, 0xa6(r31)
    lhz r0, 0xa8(r30)
    sth r0, 0xa8(r31)
    b lbl_8029E3B4
lbl_8029E374:
    rlwinm. r0, r29, 0, 15, 15
    beq lbl_8029E3B4
    lhz r0, 0xa6(r30)
    sth r0, 0xa6(r31)
    lhz r0, 0xa8(r30)
    sth r0, 0xa8(r31)
    lhz r0, 0xaa(r30)
    sth r0, 0xaa(r31)
    lhz r0, 0xac(r30)
    sth r0, 0xac(r31)
    lhz r0, 0xae(r30)
    sth r0, 0xae(r31)
    lhz r0, 0xb0(r30)
    sth r0, 0xb0(r31)
    lhz r0, 0xb2(r30)
    sth r0, 0xb2(r31)
lbl_8029E3B4:
    rlwinm. r0, r29, 0, 13, 13
    beq lbl_8029E3D4
    lhz r0, 0xb4(r30)
    sth r0, 0xb4(r31)
    lhz r0, 0xb6(r30)
    sth r0, 0xb6(r31)
    lhz r0, 0xb8(r30)
    sth r0, 0xb8(r31)
lbl_8029E3D4:
    rlwinm. r0, r29, 0, 11, 11
    beq lbl_8029E3F0
    lhz r0, 0xbe(r30)
    sth r0, 0xbe(r31)
    lhz r0, 0xc0(r30)
    sth r0, 0xc0(r31)
    b lbl_8029E418
lbl_8029E3F0:
    rlwinm. r0, r29, 0, 12, 12
    beq lbl_8029E418
    lhz r0, 0xba(r30)
    sth r0, 0xba(r31)
    lhz r0, 0xbc(r30)
    sth r0, 0xbc(r31)
    lhz r0, 0xbe(r30)
    sth r0, 0xbe(r31)
    lhz r0, 0xc0(r30)
    sth r0, 0xc0(r31)
lbl_8029E418:
    rlwinm. r0, r29, 0, 9, 9
    beq lbl_8029E44C
    lhz r0, 0xcc(r30)
    sth r0, 0xcc(r31)
    lhz r0, 0xce(r30)
    sth r0, 0xce(r31)
    lhz r0, 0xd0(r30)
    sth r0, 0xd0(r31)
    lhz r0, 0xd2(r30)
    sth r0, 0xd2(r31)
    lhz r0, 0xd4(r30)
    sth r0, 0xd4(r31)
    b lbl_8029E4A4
lbl_8029E44C:
    rlwinm. r0, r29, 0, 10, 10
    beq lbl_8029E4A4
    lhz r0, 0xc2(r30)
    sth r0, 0xc2(r31)
    lhz r0, 0xc4(r30)
    sth r0, 0xc4(r31)
    lhz r0, 0xc6(r30)
    sth r0, 0xc6(r31)
    lhz r0, 0xc8(r30)
    sth r0, 0xc8(r31)
    lhz r0, 0xca(r30)
    sth r0, 0xca(r31)
    lhz r0, 0xcc(r30)
    sth r0, 0xcc(r31)
    lhz r0, 0xce(r30)
    sth r0, 0xce(r31)
    lhz r0, 0xd0(r30)
    sth r0, 0xd0(r31)
    lhz r0, 0xd2(r30)
    sth r0, 0xd2(r31)
    lhz r0, 0xd4(r30)
    sth r0, 0xd4(r31)
lbl_8029E4A4:
    rlwinm. r0, r29, 0, 8, 8
    beq lbl_8029E4B4
    lhz r0, 0xd6(r30)
    sth r0, 0xd6(r31)
lbl_8029E4B4:
    rlwinm. r0, r29, 0, 7, 7
    beq lbl_8029E4C4
    lhz r0, 0xd8(r30)
    sth r0, 0xd8(r31)
lbl_8029E4C4:
    rlwinm. r0, r29, 0, 6, 6
    beq lbl_8029E4DC
    addi r3, r31, 0xda
    addi r4, r30, 0xda
    li r5, 0x20
    bl memcpy
lbl_8029E4DC:
    rlwinm. r0, r29, 0, 5, 5
    beq lbl_8029E4F4
    addi r3, r31, 0xfa
    addi r4, r30, 0xfa
    li r5, 0x10
    bl memcpy
lbl_8029E4F4:
    rlwinm. r0, r29, 0, 4, 4
    beq lbl_8029E50C
    addi r3, r31, 0x10a
    addi r4, r30, 0x10a
    li r5, 0xa
    bl memcpy
lbl_8029E50C:
    rlwinm. r0, r29, 0, 2, 2
    beq lbl_8029E528
    lhz r0, 0x118(r30)
    sth r0, 0x118(r31)
    lhz r0, 0x11a(r30)
    sth r0, 0x11a(r31)
    b lbl_8029E5B4
lbl_8029E528:
    rlwinm. r0, r29, 0, 1, 1
    beq lbl_8029E55C
    lhz r0, 0x11e(r30)
    sth r0, 0x11e(r31)
    lhz r0, 0x120(r30)
    sth r0, 0x120(r31)
    lhz r0, 0x122(r30)
    sth r0, 0x122(r31)
    lhz r0, 0x124(r30)
    sth r0, 0x124(r31)
    lhz r0, 0x126(r30)
    sth r0, 0x126(r31)
    b lbl_8029E5B4
lbl_8029E55C:
    rlwinm. r0, r29, 0, 3, 3
    beq lbl_8029E5B4
    lhz r0, 0x114(r30)
    sth r0, 0x114(r31)
    lhz r0, 0x116(r30)
    sth r0, 0x116(r31)
    lhz r0, 0x118(r30)
    sth r0, 0x118(r31)
    lhz r0, 0x11a(r30)
    sth r0, 0x11a(r31)
    lhz r0, 0x11c(r30)
    sth r0, 0x11c(r31)
    lhz r0, 0x11e(r30)
    sth r0, 0x11e(r31)
    lhz r0, 0x120(r30)
    sth r0, 0x120(r31)
    lhz r0, 0x122(r30)
    sth r0, 0x122(r31)
    lhz r0, 0x124(r30)
    sth r0, 0x124(r31)
    lhz r0, 0x126(r30)
    sth r0, 0x126(r31)
lbl_8029E5B4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: __AXSyncPBs
asm void __AXSyncPBs(u32 baseCycles) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r0, lbl_8049DFAC
    li r29, 0x0
    mr r25, r3
    stw r29, lbl_8049DFB0
    mulli r4, r0, 0x140
    lwz r3, lbl_8049DFA0
    bl DCInvalidateRange
    lwz r0, lbl_8049DFAC
    lwz r3, lbl_8049DFA4
    slwi r4, r0, 6
    bl DCInvalidateRange
    bl fn_8029C958
    lwz r0, lbl_8049DFAC
    lis r31, lbl_8036F440@ha
    lis r30, lbl_8036F3C0@ha
    li r27, 0x1f
    mulli r0, r0, 0x258
    addi r31, r31, lbl_8036F440@l
    addi r30, r30, lbl_8036F3C0@l
    add r0, r3, r0
    add r3, r0, r25
    addi r28, r3, 0x20
lbl_8029E640:
    mr r3, r27
    bl __AXGetStackHead
    mr r26, r3
    b lbl_8029E840
lbl_8029E650:
    lhz r0, 0x6c(r26)
    cmplwi r0, 0x1
    bne lbl_8029E660
    addi r28, r28, 0x81
lbl_8029E660:
    lwz r0, 0x20(r26)
    cmpwi r0, 0x0
    beq lbl_8029E680
    lwz r0, 0x18(r26)
    lwz r3, lbl_8049DFA0
    mulli r0, r0, 0x140
    add r3, r3, r0
    bl __AXDepopVoice
lbl_8029E680:
    lhz r0, 0x38(r26)
    cmplwi r0, 0x1
    bne lbl_8029E82C
    lhz r0, 0xe2(r26)
    addi r28, r28, 0x183
    cmpwi r0, 0x0
    beq lbl_8029E6A0
    addi r28, r28, 0x135
lbl_8029E6A0:
    lhz r0, 0xea(r26)
    cmpwi r0, 0x0
    beq lbl_8029E6B0
    addi r28, r28, 0x400
lbl_8029E6B0:
    lhz r0, 0x6c(r26)
    cmplwi r0, 0x1
    bne lbl_8029E6C0
    addi r28, r28, 0x1b
lbl_8029E6C0:
    lhz r3, 0x30(r26)
    lhz r0, 0xce(r26)
    cmpwi r3, 0x0
    lhz r4, 0xd0(r26)
    rlwimi r4, r0, 16, 0, 15
    bne lbl_8029E6F0
    slwi r3, r4, 9
    addis r3, r3, 0x1
    addi r0, r3, -0x8000
    srwi r3, r0, 16
    addi r0, r3, 0x619
    b lbl_8029E710
lbl_8029E6F0:
    cmplwi r3, 0x1
    li r0, 0x25d
    bne lbl_8029E710
    slwi r3, r4, 9
    addis r3, r3, 0x1
    addi r0, r3, -0x8000
    srwi r3, r0, 16
    addi r0, r3, 0x5ba
lbl_8029E710:
    lwz r4, 0x34(r26)
    add r28, r28, r0
    lhz r0, 0xfe(r26)
    rlwinm r5, r4, 13, 25, 29
    clrlslwi r3, r4, 27, 2
    rlwinm r6, r4, 8, 25, 29
    rlwinm r4, r4, 18, 25, 29
    cmplwi r0, 0x1
    lwzx r5, r30, r5
    lwzx r0, r30, r3
    lwzx r6, r30, r6
    lwzx r4, r30, r4
    add r0, r5, r0
    add r3, r28, r6
    add r0, r4, r0
    add r28, r3, r0
    bne lbl_8029E7DC
    lhz r0, 0x13c(r26)
    addi r28, r28, 0x265
    cmplwi r0, 0x1
    bne lbl_8029E76C
    addi r28, r28, 0x76
    b lbl_8029E778
lbl_8029E76C:
    cmplwi r0, 0x2
    bne lbl_8029E778
    addi r28, r28, 0x342
lbl_8029E778:
    lhz r3, 0x100(r26)
    rlwinm r4, r3, 30, 28, 29
    clrlslwi r0, r3, 30, 2
    lwzx r4, r31, r4
    rlwinm r9, r3, 20, 28, 29
    lwzx r0, r31, r0
    rlwinm r8, r3, 22, 28, 29
    rlwinm r7, r3, 24, 28, 29
    rlwinm r6, r3, 26, 28, 29
    rlwinm r5, r3, 28, 28, 29
    rlwinm r3, r3, 0, 28, 29
    lwzx r7, r31, r7
    add r0, r4, r0
    lwzx r3, r31, r3
    lwzx r9, r31, r9
    add r7, r28, r7
    lwzx r8, r31, r8
    add r0, r3, r0
    lwzx r6, r31, r6
    lwzx r4, r31, r5
    add r8, r9, r8
    add r3, r8, r7
    add r4, r6, r4
    add r0, r4, r0
    add r28, r3, r0
lbl_8029E7DC:
    lwz r0, lbl_8049DFB8
    cmplw r0, r28
    ble lbl_8029E7F4
    mr r3, r26
    bl __AXServiceVPB
    b lbl_8029E834
lbl_8029E7F4:
    lwz r0, 0x18(r26)
    lwz r3, lbl_8049DFA0
    mulli r0, r0, 0x140
    add r25, r3, r0
    lhz r0, 0x10(r25)
    cmplwi r0, 0x1
    bne lbl_8029E818
    mr r3, r25
    bl __AXDepopVoice
lbl_8029E818:
    sth r29, 0x38(r26)
    mr r3, r26
    sth r29, 0x10(r25)
    bl __AXPushCallbackStack
    b lbl_8029E834
lbl_8029E82C:
    mr r3, r26
    bl __AXServiceVPB
lbl_8029E834:
    stw r29, 0x1c(r26)
    stw r29, 0x20(r26)
    lwz r26, 0x0(r26)
lbl_8029E840:
    cmpwi r26, 0x0
    bne lbl_8029E650
    subic. r27, r27, 0x1
    bne lbl_8029E640
    stw r28, lbl_8049DFB4
    li r3, 0x0
    bl __AXGetStackHead
    mr r25, r3
    li r26, 0x0
    b lbl_8029E8A4
lbl_8029E868:
    lwz r0, 0x20(r25)
    cmpwi r0, 0x0
    beq lbl_8029E888
    lwz r0, 0x18(r25)
    lwz r3, lbl_8049DFA0
    mulli r0, r0, 0x140
    add r3, r3, r0
    bl __AXDepopVoice
lbl_8029E888:
    stw r26, 0x20(r25)
    lwz r0, 0x18(r25)
    lwz r3, lbl_8049DFA0
    mulli r0, r0, 0x140
    add r3, r3, r0
    sth r26, 0x10(r3)
    lwz r25, 0x0(r25)
lbl_8029E8A4:
    cmpwi r25, 0x0
    bne lbl_8029E868
    lwz r0, lbl_8049DFAC
    lwz r3, lbl_8049DFA0
    mulli r4, r0, 0x140
    bl DCFlushRange
    lwz r0, lbl_8049DFAC
    lwz r3, lbl_8049DFA4
    slwi r4, r0, 6
    bl DCFlushRange
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
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

// asm_to_cpp: AXSetVoiceAddr
asm void AXSetVoiceAddr(AXVPB* vpb, AXPBADDR* addr) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, 0x0(r31)
    stw r0, 0x96(r30)
    lwz r0, 0x4(r31)
    stw r0, 0x9a(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x9e(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xa2(r30)
    lhz r0, 0x2(r31)
    cmpwi r0, 0xa
    beq lbl_8029ECD4
    bge lbl_8029ECC8
    cmpwi r0, 0x0
    beq lbl_8029ED38
    b lbl_8029ED38
lbl_8029ECC8:
    cmpwi r0, 0x19
    beq lbl_8029ED08
    b lbl_8029ED38
lbl_8029ECD4:
    li r4, 0x0
    lis r0, 0x800
    stw r4, 0xa6(r30)
    stw r4, 0xaa(r30)
    stw r4, 0xae(r30)
    stw r4, 0xb2(r30)
    stw r4, 0xb6(r30)
    stw r4, 0xba(r30)
    stw r4, 0xbe(r30)
    stw r4, 0xc2(r30)
    stw r0, 0xc6(r30)
    stw r4, 0xca(r30)
    b lbl_8029ED38
lbl_8029ED08:
    li r4, 0x0
    lis r0, 0x100
    stw r4, 0xa6(r30)
    stw r4, 0xaa(r30)
    stw r4, 0xae(r30)
    stw r4, 0xb2(r30)
    stw r4, 0xb6(r30)
    stw r4, 0xba(r30)
    stw r4, 0xbe(r30)
    stw r4, 0xc2(r30)
    stw r0, 0xc6(r30)
    stw r4, 0xca(r30)
lbl_8029ED38:
    lwz r0, 0x1c(r30)
    rlwinm r0, r0, 0, 21, 16
    ori r0, r0, 0x8400
    stw r0, 0x1c(r30)
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: AXGetLpfCoefs
asm void AXGetLpfCoefs(u16 freq, u16* a, u16* b) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    opword 0xF3E10028
    lis r0, 0x4330
    lfd f3, lbl_804A2430
    stw r3, 0xc(r1)
    lfs f1, lbl_804A241C
    stw r0, 0x8(r1)
    lfs f0, lbl_804A2420
    lfd f2, 0x8(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    fsubs f2, f2, f3
    stw r30, 0x18(r1)
    mr r30, r4
    fmuls f1, f1, f2
    fdivs f1, f1, f0
    bl cos
    frsp f2, f1
    lfs f1, lbl_804A2418
    lfs f0, lbl_804A2424
    fsubs f31, f1, f2
    fmuls f1, f31, f31
    fsubs f1, f1, f0
    bl sqrt
    frsp f1, f1
    lfs f0, lbl_804A2428
    fsubs f1, f1, f31
    fneg f1, f1
    fmuls f0, f0, f1
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r3, 0x14(r1)
    clrlwi r0, r3, 16
    sth r3, 0x0(r31)
    subfic r0, r0, 0x7fff
    sth r0, 0x0(r30)
    opword 0xE3E10028
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
