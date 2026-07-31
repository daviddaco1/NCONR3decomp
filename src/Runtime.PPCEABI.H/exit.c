#include "Runtime.PPCEABI.H/__ppc_eabi_linker.h"

extern void PPCHalt(void);

static void __init_cpp(void);
static void __fini_cpp(void);

/* written in assembly to generate the frame allocations */
asm void __init_user(void)
{
	fralloc
	bl __init_cpp
	frfree
	blr
}

static void __init_cpp(void)
{
	__eabi_func_ptr* ctor;

	for (ctor = _ctors; *ctor; ctor++) {
		(*ctor)();
	}
}

static void __fini_cpp(void)
{
	__eabi_func_ptr* dtor;

	for (dtor = _dtors; *dtor; dtor++) {
		(*dtor)();
	}
}

void exit(int status)
{
	__fini_cpp();
	PPCHalt();
}
