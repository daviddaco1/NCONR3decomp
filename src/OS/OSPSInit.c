#include "types.h"

extern u32 PPCMfhid2(void);
extern void PPCMthid2(u32 val);
extern void ICFlashInvalidate(void);

void __OSPSInit(void)
{
	PPCMthid2(PPCMfhid2() | 0xA0000000);
	ICFlashInvalidate();
	__sync();

	asm
	{
		li r3, 0
		mtspr 0x390, r3
		mtspr 0x391, r3
		mtspr 0x392, r3
		mtspr 0x393, r3
		mtspr 0x394, r3
		mtspr 0x395, r3
		mtspr 0x396, r3
		mtspr 0x397, r3
	}
}
