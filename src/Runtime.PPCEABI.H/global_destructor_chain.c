#include "Runtime.PPCEABI.H/global_destructor_chain.h"

DestructorChain* __global_destructor_chain;

void* __register_global_object(void* object, void* destructor, void* regmem)
{
	((DestructorChain*)regmem)->next = __global_destructor_chain;
	((DestructorChain*)regmem)->destructor = destructor;
	((DestructorChain*)regmem)->object = object;
	__global_destructor_chain = (DestructorChain*)regmem;
	return object;
}

void __destroy_global_chain(void)
{
	DestructorChain* iter;
	while ((iter = __global_destructor_chain) != 0) {
		__global_destructor_chain = iter->next;
		DTORCALL_COMPLETE(iter->destructor, iter->object);
	}
}

// El ".dtors$10" (__destroy_global_chain_reference) que normalmente iria aca
// se movio al split de __init_cpp_exceptions.cpp: mwldeppc.exe requiere que
// .ctors$10/.dtors$10/.dtors$15 vivan en el MISMO objeto (ver TODO en
// configure.py junto a config.linker_version).
