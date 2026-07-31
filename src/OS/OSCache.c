#include "types.h"

asm void DCZeroRange(register void* pAddr, register u32 num)
{
	nofralloc
	cmplwi num, 0
	blelr-
	clrlwi r5, pAddr, 27
	add num, num, r5
	addi num, num, 0x1F
	srwi num, num, 5
	mtctr num

loop:
	dcbz 0, pAddr
	addi pAddr, pAddr, 32
	bdnz loop

	blr
}

asm void ICInvalidateRange(register void* pAddr, register u32 num)
{
	nofralloc
	cmplwi num, 0
	blelr-
	clrlwi r5, pAddr, 27
	add num, num, r5
	addi num, num, 0x1F
	srwi num, num, 5
	mtctr num

loop:
	icbi 0, pAddr
	addi pAddr, pAddr, 32
	bdnz loop

	sync
	isync
	blr
}

asm void ICFlashInvalidate(void)
{
	nofralloc
	mfspr r3, 0x3F0
	ori r3, r3, 0x800
	mtspr 0x3F0, r3
	blr
}

asm void ICEnable(void)
{
	nofralloc
	isync
	mfspr r3, 0x3F0
	ori r3, r3, 0x8000
	mtspr 0x3F0, r3
	blr
}
