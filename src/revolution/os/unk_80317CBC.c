#include <revolution/BASE.h>
#include <revolution/EXI.h>
#include <revolution/GX.h>
#include <revolution/OS.h>
#include <revolution/VI.h>

#include <cstring>

/**
 * Framebuffer formatted as 32-bits per two pixels
 * Pixels are written as brightness/chroma pairs
 */
#define FATAL_FB_W 640
#define FATAL_FB_H 480
#define FATAL_FB_SIZE (FATAL_FB_W * FATAL_FB_H * 2)

typedef struct OSFatalParam {
    GXColor textColor; // at 0x0
    GXColor bgColor;   // at 0x4
    const char* msg;   // at 0x8
} OSFatalParam;

static OSContext FatalContext;
static OSFatalParam FatalParam;

static void Halt(void);

static void ScreenClear(u8* fb, u16 width, u16 height, GXColor yuv) {
    int x, y;

    for (y = 0; y < height; y += 1) {
        for (x = 0; x < width; x += 2) {
            fb[0] = yuv.r;
            fb[1] = yuv.g;

            fb[2] = yuv.r;
            fb[3] = yuv.b;

            fb += sizeof(u32);
        }
    }
}

static void ScreenReport(void* fb, u16 width, u16 height, GXColor msgYUV, s32 x,
                         s32 y, u32 lf, const char* msg) {
    u32 texel[70];
    u32 charWidth;
    u8* tmp;
    u8 bright;
    s32 xPos;
    u32 idx;
    u32 idx2;
    u32 idx3;
    u32 i;
    u32 j;

new_line:
    if (height - 24 < y) {
        return;
    }

    tmp = (u8*)fb + ((x + (y * width)) * 2);
    xPos = x;

    while (*msg != '\0') {
        if (*msg == '\n') {
            msg++;
            y += lf;
            goto new_line;
        } else if (width - 48 < xPos) {
            y += lf;
            goto new_line;
        }

        for (i = 0; i < 24; i++) {
            idx = (i & 7) + ((i / 8) * 24);
            texel[idx] = 0;
            texel[idx + 8] = 0;
            texel[idx + 16] = 0;
        }

        msg = OSGetFontTexel(msg, texel, 0, 6, &charWidth);

        for (i = 0; i < 24; i++) {
            idx = (i & 7) + ((i / 8) * 24);

            for (j = 0; j < 24; j++) {
                idx2 = idx + ((j / 8) * 8);
                bright = (texel[idx2] >> ((7 - (j & 7)) * 4)) & 0x0F;

                if (bright != 0) {
                    // Y component/brightness
                    bright = (((msgYUV.r * (bright * 0xEF)) / 255) / 15) + 16;
                    idx3 = (j + (width * i));
                    tmp[idx3 * 2] = bright;

                    // Order chroma depending on pixel pair
                    if ((xPos + j) % 2 != 0) {
                        tmp[(idx3 * 2) - 1] = msgYUV.g;
                        tmp[(idx3 * 2) + 1] = msgYUV.b;
                    } else {
                        tmp[(idx3 * 2) - 1] = msgYUV.b;
                        tmp[(idx3 * 2) + 1] = msgYUV.g;
                    }
                }
            }
        }

        tmp += charWidth * 2;
        xPos += charWidth;
    }
}

static void ConfigureVideo(u16 width, u16 height) {
    GXRenderModeObj rmode;

    rmode.fbWidth = width;
    rmode.efbHeight = FATAL_FB_H;
    rmode.xfbHeight = height;

    rmode.viXOrigin = 40;
    rmode.viWidth = FATAL_FB_W;
    rmode.viHeight = height;

    switch (VIGetTvFormat()) {
    case VI_TVFORMAT_NTSC:
    case VI_TVFORMAT_MPAL: {
        if (VI_HW_REGS[VI_VICLK] & VI_VICLK_SPEED /* == VI_VICLK_54MHZ */) {
            // Progressive mode
            rmode.tvInfo = VI_TVMODE(VI_TVFORMAT_NTSC, VI_SCANMODE_PROG);
            rmode.viYOrigin = 0;
            rmode.xfbMode = VI_XFBMODE_SF;
        } else {
            // Non-progressive mode
            rmode.tvInfo = VI_TVMODE(VI_TVFORMAT_NTSC, VI_SCANMODE_INT);
            rmode.viYOrigin = 0;
            rmode.xfbMode = VI_XFBMODE_DF;
        }
        break;
    }

    case VI_TVFORMAT_EURGB60: {
        rmode.tvInfo = VI_TVMODE(VI_TVFORMAT_EURGB60, VI_SCANMODE_INT);
        rmode.viYOrigin = 0;
        rmode.xfbMode = VI_XFBMODE_DF;
        break;
    }

    case VI_TVFORMAT_PAL: {
        rmode.tvInfo = VI_TVMODE(VI_TVFORMAT_PAL, VI_SCANMODE_INT);
        rmode.viYOrigin = 47;
        rmode.xfbMode = VI_XFBMODE_DF;
        break;
    }

    default: {
        break;
    }
    }

    VIConfigure(&rmode);
    VIConfigurePan(0, 0, FATAL_FB_W, FATAL_FB_H);
}

// Intel IPP RGBToYCbCr algorithm (+0.5f?)
static GXColor RGB2YUV(GXColor rgb) {
    GXColor yuv;

    // clang-format off
    f32 y =  ( 0.257f * rgb.r + 0.504f * rgb.g + 0.098f * rgb.b + 16.0f)  + 0.5f;
    f32 cb = (-0.148f * rgb.r - 0.291f * rgb.g + 0.439f * rgb.b + 128.0f) + 0.5f;
    f32 cr = ( 0.439f * rgb.r - 0.368f * rgb.g - 0.071f * rgb.b + 128.0f) + 0.5f;
    // clang-format on

    yuv.r = CLAMP(16.0f, 235.0f, y);
    yuv.g = CLAMP(16.0f, 240.0f, cb);
    yuv.b = CLAMP(16.0f, 240.0f, cr);
    yuv.a = 0;

    return yuv;
}

// OSFatal: definicion C reemplazada por asm (ver abajo)
void OSFatal(GXColor textColor, GXColor bgColor, const char* msg);


static void Halt(void) {
    OSFontHeader* msgFont;
    const char* msg;
    s32 retraceCount;
    size_t msgLen;
    void* msgBuf;
    void* fb;
    OSFatalParam* params;

    OSEnableInterrupts();

    params = &FatalParam;
    msg = params->msg;

    msgLen = strlen(msg) + 1;
    msgBuf = OSAllocFromMEM1ArenaLo(msgLen, 32);
    params->msg = memmove(msgBuf, msg, msgLen);

    msgFont = (OSFontHeader*)OSAllocFromMEM1ArenaLo(0xA1004, 32);
    OSLoadFont(msgFont, OSGetArenaLo());

    fb = OSAllocFromMEM1ArenaLo(FATAL_FB_SIZE, 32);
    ScreenClear(fb, FATAL_FB_W, FATAL_FB_H, RGB2YUV(params->bgColor));
    VISetNextFrameBuffer(fb);
    ConfigureVideo(FATAL_FB_W, FATAL_FB_H);
    VIFlush();

    retraceCount = VIGetRetraceCount();
    while (VIGetRetraceCount() - retraceCount < 2) {
        ;
    }

    ScreenReport(fb, FATAL_FB_W, FATAL_FB_H, RGB2YUV(params->textColor), 48,
                 100, msgFont->leading, params->msg);
    DCFlushRange(fb, FATAL_FB_SIZE);
    VISetBlack(FALSE);
    VIFlush();

    retraceCount = VIGetRetraceCount();
    while (VIGetRetraceCount() - retraceCount < 1) {
        ;
    }

    OSDisableInterrupts();
    OSReport("%s\n", params->msg);
    PPCHalt();
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 lbl_80464D20[];
extern u8 lbl_80464FE8[];
extern void OSClearContext();
void OSFatal(GXColor textColor, GXColor bgColor, const char* msg);
extern void OSSetArenaHi();
extern void OSSetArenaLo();
extern void OSSetCurrentContext();
extern void OSSwitchFiber();
extern void VIInit();
extern void __OSStopAudioSystem();
extern void _restgpr_24();
extern void _savegpr_24();
extern void fn_802836CC();
extern void fn_802E129C();
extern int fn_80317FE0();
extern void fn_8031B0D0();

// asm_to_cpp: OSFatal
asm void OSFatal(GXColor textColor, GXColor bgColor, const char* msg) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_24
    mr r27, r3
    mr r28, r4
    mr r29, r5
    bl OSDisableInterrupts
    bl OSDisableScheduler
    lis r24, lbl_80464D20@ha
    addi r3, r24, lbl_80464D20@l
    bl OSClearContext
    addi r3, r24, lbl_80464D20@l
    bl OSSetCurrentContext
    bl __OSStopAudioSystem
    bl VIInit
    li r3, 0x80
    bl __OSUnmaskInterrupts
    li r3, 0x1
    bl VISetBlack
    bl VIFlush
    li r3, 0x0
    bl VISetPreRetraceCallback
    li r3, 0x0
    bl VISetPostRetraceCallback
    bl OSEnableInterrupts
    bl VIGetRetraceCount
    mr r24, r3
lbl_80318178:
    bl VIGetRetraceCount
    subf r0, r24, r3
    cmpwi r0, 0x1
    blt lbl_80318178
    bl OSGetTime
    lis r5, 0x1062
    mr r30, r4
    mr r31, r3
    lis r25, 0x8000
    addi r24, r5, 0x4dd3
    li r26, 0x0
lbl_803181A4:
    li r3, 0x0
    li r4, 0x0
    bl fn_8031B0D0
    cmpwi r3, 0x0
    bne lbl_803181F4
    bl OSGetTime
    lwz r0, 0xf8(r25)
    subfc r6, r30, r4
    subfe r5, r31, r3
    xoris r4, r26, 0x8000
    srwi r0, r0, 2
    mulhwu r3, r24, r0
    xoris r0, r5, 0x8000
    srwi r3, r3, 6
    mulli r3, r3, 0x3e8
    subfc r3, r3, r6
    subfe r4, r4, r0
    subfe r4, r0, r0
    neg. r4, r4
    bne lbl_803181A4
lbl_803181F4:
    bl OSDisableInterrupts
    li r3, 0x1
    li r4, 0x0
    bl fn_8031B0D0
    li r3, 0x0
    li r4, 0x0
    bl EXISetExiCallback
    li r3, 0x2
    li r4, 0x0
    bl EXISetExiCallback
    b lbl_80318238
lbl_80318220:
    li r3, 0x0
    bl EXISync
    li r3, 0x0
    bl EXIDeselect
    li r3, 0x0
    bl EXIUnlock
lbl_80318238:
    li r3, 0x0
    li r4, 0x1
    li r5, 0x0
    bl EXILock
    cmpwi r3, 0x0
    beq lbl_80318220
    li r3, 0x0
    bl EXIUnlock
    lis r3, 0xcd00
lbl_8031825C:
    lwz r0, 0x680c(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_8031825C
    lis r4, OSDefaultExceptionHandler@ha
    li r3, 0x8
    addi r4, r4, OSDefaultExceptionHandler@l
    bl __OSSetExceptionHandler
    bl fn_802E129C
    lis r3, 0x8140
    bl OSSetArenaLo
    lis r4, 0x8000
    lwz r3, 0x38(r4)
    cmpwi r3, 0x0
    bne lbl_803182A4
    lwz r3, 0x3110(r4)
    bl OSSetArenaHi
    b lbl_803182A8
lbl_803182A4:
    bl OSSetArenaHi
lbl_803182A8:
    lbz r9, 0x0(r27)
    lis r10, lbl_80464FE8@ha
    lbz r8, 0x1(r27)
    stbu r9, lbl_80464FE8@l(r10)
    lbz r7, 0x2(r27)
    lbz r6, 0x3(r27)
    lbz r5, 0x0(r28)
    lbz r4, 0x1(r28)
    lbz r3, 0x2(r28)
    lbz r0, 0x3(r28)
    stb r8, 0x1(r10)
    stb r7, 0x2(r10)
    stb r6, 0x3(r10)
    stb r5, 0x4(r10)
    stb r4, 0x5(r10)
    stb r3, 0x6(r10)
    stb r0, 0x7(r10)
    stw r29, 0x8(r10)
    bl OSGetArenaHi
    lis r5, Halt@ha
    mr r4, r3
    addi r3, r5, Halt@l
    bl OSSwitchFiber
    addi r11, r1, 0x30
    bl _restgpr_24
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_80317FE0
asm int fn_80317FE0() {
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r6, 0x1e0
    li r5, 0x28
    stw r0, 0x54(r1)
    li r0, 0x280
    sth r3, 0xc(r1)
    sth r6, 0xe(r1)
    sth r4, 0x10(r1)
    sth r5, 0x12(r1)
    sth r0, 0x16(r1)
    sth r4, 0x18(r1)
    bl VIGetTvFormat
    cmpwi r3, 0x2
    beq lbl_8031803C
    bge lbl_80318030
    cmpwi r3, 0x0
    beq lbl_8031803C
    bge lbl_803180C0
    b lbl_803180D8
lbl_80318030:
    cmpwi r3, 0x5
    beq lbl_8031807C
    b lbl_803180D8
lbl_8031803C:
    lis r3, 0xcc00
    lhz r0, 0x206c(r3)
    clrlwi. r0, r0, 31
    beq lbl_80318064
    li r0, 0x0
    li r3, 0x2
    stw r3, 0x8(r1)
    sth r0, 0x14(r1)
    stw r0, 0x1c(r1)
    b lbl_803180D8
lbl_80318064:
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x8(r1)
    sth r3, 0x14(r1)
    stw r0, 0x1c(r1)
    b lbl_803180D8
lbl_8031807C:
    lis r3, 0xcc00
    lhz r0, 0x206c(r3)
    clrlwi. r0, r0, 31
    beq lbl_803180A4
    li r0, 0x0
    li r3, 0x16
    stw r3, 0x8(r1)
    sth r0, 0x14(r1)
    stw r0, 0x1c(r1)
    b lbl_803180D8
lbl_803180A4:
    li r4, 0x14
    li r3, 0x0
    li r0, 0x1
    stw r4, 0x8(r1)
    sth r3, 0x14(r1)
    stw r0, 0x1c(r1)
    b lbl_803180D8
lbl_803180C0:
    li r4, 0x4
    li r3, 0x2f
    li r0, 0x1
    stw r4, 0x8(r1)
    sth r3, 0x14(r1)
    stw r0, 0x1c(r1)
lbl_803180D8:
    addi r3, r1, 0x8
    bl fn_802836CC
    li r3, 0x0
    li r4, 0x0
    li r5, 0x280
    li r6, 0x1e0
    bl VIConfigurePan
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
