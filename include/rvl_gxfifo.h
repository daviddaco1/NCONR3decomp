#ifndef RVL_GXFIFO_H
#define RVL_GXFIFO_H

#include "types.h"

/* Write-gather pipe del GX (revolution/base/PPCWGPipe.h, revolution/gx/GXVert.h). */
typedef union PPCWGPipe {
    u8 u8;
    u16 u16;
    u32 u32;
    s8 s8;
    s16 s16;
    s32 s32;
    f32 f32;
} PPCWGPipe;

volatile PPCWGPipe GXWGFifo : 0xCC008000;

#endif
