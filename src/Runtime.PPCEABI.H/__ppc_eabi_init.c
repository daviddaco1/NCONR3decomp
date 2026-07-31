#include "Runtime.PPCEABI.H/__ppc_eabi_init.h"

#pragma section code_type ".init"

extern void __OSPSInit(void);
extern void __OSFPRInit(void);
extern void __OSCacheInit(void);

asm void __init_hardware(void)
{
	nofralloc
	mfmsr r0
	ori r0, r0, 0x2000
	mtmsr r0
	mflr r31
	bl __OSPSInit
	bl __OSFPRInit
	bl __OSCacheInit
	mtlr r31
	blr
}

asm void __flush_cache(void* addr, unsigned int nBytes)
{
	nofralloc

	lis     r5, 0xFFFF
	ori     r5, r5, 0xFFF1
	and     r5, r5, r3
	subf    r3, r5, r3
	add     r4, r4, r3

loop:
	dcbst   0, r5
	sync
	icbi    0, r5
	addic   r5, r5, 0x8
	subic.  r4, r4, 0x8
	bge     loop
	isync

	blr
}
