#include "types.h"

// Translation unit: src/revolution/os/unk_8031A368.cpp
// Total functions: 1

// Forward declarations
extern void __OSModuleInit();

// ----------------------------------------------------------------------------
// __OSModuleInit
// ----------------------------------------------------------------------------
asm void __OSModuleInit() {
    nofralloc
    li r0, 0x0
    lis r3, 0x8000
    stw r0, 0x30cc(r3)
    stw r0, 0x30c8(r3)
    stw r0, 0x30d0(r3)
    blr
}

