#include "Runtime.PPCEABI.H/NMWException.h"
#include "Runtime.PPCEABI.H/__ppc_eabi_linker.h"

static int fragmentID = -2;

// Confirmado con decomp-permuter (tools/decomp-permuter/scratch/__init_cpp_exceptions):
// el R2 no viene de una funcion GetR2() separada, ni inlineada ni real -- se
// lee via un asm embebido directo en el call site (register qualifier
// requerido por mwcc para asm inline: error 34001 sin el).
extern "C" void __init_cpp_exceptions()
{
	if (fragmentID == -2) {
		register char* R2;
		asm { mr R2, r2 }
		fragmentID = __register_fragment(_eti_init_info, R2);
	}
}

extern "C" void __fini_cpp_exceptions()
{
	if (fragmentID != -2) {
		__unregister_fragment(fragmentID);
		fragmentID = -2;
	}
}

#pragma section ".ctors$10"
__declspec(section ".ctors$10") extern void* const __init_cpp_exceptions_reference = (void*)__init_cpp_exceptions;

#pragma section ".dtors$15"
__declspec(section ".dtors$15") extern void* const __fini_cpp_exceptions_reference = (void*)__fini_cpp_exceptions;
