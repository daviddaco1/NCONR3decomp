#include "types.h"

// Translation unit: src/TRK_MINNOW_DOLPHIN/flush_cache.cpp
// Total functions: 1

// Forward declarations
void fn_801A39CC();

// ----------------------------------------------------------------------------
// fn_801A39CC
// ----------------------------------------------------------------------------
asm void fn_801A39CC() {
    nofralloc
    lis r5, 0xffff
    ori r5, r5, 0xfff1
    and r5, r5, r3
    subf r3, r5, r3
    add r4, r4, r3
lbl_801A39E0:
    dcbst r0, r5
    dcbf r0, r5
    sync
    icbi r0, r5
    addic r5, r5, 0x8
    subic. r4, r4, 0x8
    bge lbl_801A39E0
    isync
    blr
}

