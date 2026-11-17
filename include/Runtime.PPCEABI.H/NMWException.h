#ifndef _NMWEXCEPTION
#define _NMWEXCEPTION

#include "Runtime.PPCEABI.H/__ppc_eabi_linker.h"

#ifdef __cplusplus
extern "C" {
#endif

extern int __register_fragment(struct __eti_init_info* info, char* TOC);
extern void __unregister_fragment(int fragmentID);
extern void __destroy_global_chain(void);

#ifdef __cplusplus
}
#endif

#endif // _NMWEXCEPTION
