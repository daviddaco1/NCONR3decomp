#include "types.h"
#include "m2c_macros.h"
#include "m2c_protos.h"

extern M2C_UNK lbl_804A26F8;

typedef struct MEMAllocator MEMAllocator;

typedef void* (*MEMAllocFunc)(MEMAllocator* allocator, u32 size);
typedef void (*MEMFreeFunc)(MEMAllocator* allocator, void* mem);

typedef struct MEMAllocatorFuncs {
    MEMAllocFunc alloc;
    MEMFreeFunc free;
} MEMAllocatorFuncs;

struct MEMAllocator {
    const MEMAllocatorFuncs* funcs;
    void* heap;
    u32 heapParam1;
    u32 heapParam2;
};

typedef struct MEMLink {
    void* prev;
    void* next;
} MEMLink;

typedef struct MEMList {
    void* head;
    void* tail;
    u16 numObjects;
    u16 offset;
} MEMList;

#define MEM_GET_LINK(list, obj) ((MEMLink*)((char*)(obj) + (list)->offset))

void* fn_8030CAF0(MEMAllocator* allocator, u32 size) {
    return allocator->funcs->alloc(allocator, size);
}

void fn_8030CB00(MEMAllocator* allocator, void* mem) {
    allocator->funcs->free(allocator, mem);
}

void fn_8030CB10(s8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 **, 0) = &lbl_804A26F8;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

void fn_8030CB2C(s8 *arg0, u16 arg1) {
    MEMList* list = (MEMList*)arg0;
    list->offset = arg1;
    list->head = NULL;
    list->tail = NULL;
    list->numObjects = 0;
}

void fn_8030CB44(s8 *arg0, void *object) {
    MEMList* list = (MEMList*)arg0;
    if (list->head == NULL) {
        MEMLink* link = MEM_GET_LINK(list, object);
        link->next = NULL;
        link->prev = NULL;
        list->head = object;
        list->tail = object;
        list->numObjects++;
    } else {
        MEMLink* link = MEM_GET_LINK(list, object);
        link->prev = list->tail;
        link->next = NULL;
        MEM_GET_LINK(list, list->tail)->next = object;
        list->tail = object;
        list->numObjects++;
    }
}

// asm_to_cpp: fn_8030CBB4
asm void fn_8030CBB4() {
    nofralloc
    lhz r5, 0xa(r3)
    add r6, r4, r5
    lwzx r4, r4, r5
    cmpwi r4, 0x0
    bne lbl_8030CBD4
    lwz r0, 0x4(r6)
    stw r0, 0x0(r3)
    b lbl_8030CBE0
lbl_8030CBD4:
    lwz r0, 0x4(r6)
    add r4, r4, r5
    stw r0, 0x4(r4)
lbl_8030CBE0:
    lwz r5, 0x4(r6)
    cmpwi r5, 0x0
    bne lbl_8030CBF8
    lwz r0, 0x0(r6)
    stw r0, 0x4(r3)
    b lbl_8030CC04
lbl_8030CBF8:
    lwz r4, 0x0(r6)
    lhz r0, 0xa(r3)
    stwx r4, r5, r0
lbl_8030CC04:
    li r0, 0x0
    stw r0, 0x0(r6)
    stw r0, 0x4(r6)
    lhz r4, 0x8(r3)
    subi r0, r4, 0x1
    sth r0, 0x8(r3)
    blr
}

s32 fn_8030CC20(s8 *arg0, s32 arg1) {
    if (arg1 == 0) {
        return M2C_FIELD(arg0, s32 *, 0);
    }
    return M2C_FIELD((arg1 + M2C_FIELD(arg0, u16 *, 0xA)), s32 *, 4);
}
