#ifndef _GLOBALDESTRUCTORCHAIN
#define _GLOBALDESTRUCTORCHAIN

#ifdef __cplusplus
extern "C" {
#endif

#define DTORARG_TYPE int
#define DTORCALL_COMPLETE(dtor, objptr) (((void (*)(void*, DTORARG_TYPE))dtor)(objptr, -1))

typedef struct DestructorChain {
	struct DestructorChain* next;
	void* destructor;
	void* object;
} DestructorChain;

void* __register_global_object(void* object, void* destructor, void* registration);
void __destroy_global_chain(void);

#ifdef __cplusplus
}
#endif

#endif
