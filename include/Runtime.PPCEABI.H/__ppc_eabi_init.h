#ifndef __PPC_EABI_INIT
#define __PPC_EABI_INIT

#ifdef __cplusplus
extern "C" {
#endif

__declspec(section ".init") extern void __init_hardware(void);
extern void __init_user(void);
__declspec(section ".init") extern void __flush_cache(void*, unsigned int);

#ifdef __cplusplus
}
#endif

#endif // __PPC_EABI_INIT
