#include "types.h"

// Translation unit: src/MSL_C.PPCEABI.bare.H/misc_io.cpp
// Total functions: 1

// Small Data symbols (@sda21)
float __stdio_exit;

// Global data symbols (@ha/@l)
u8 __close_all[];

// Forward declarations
void __stdio_atexit();

// ----------------------------------------------------------------------------
// __stdio_atexit
// ----------------------------------------------------------------------------
asm void __stdio_atexit() {
    nofralloc
    lis r3, __close_all@ha
    addi r3, r3, __close_all@l
    stw r3, __stdio_exit
    blr
}

