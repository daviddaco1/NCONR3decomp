#include <revolution/OS.h>

typedef struct OSHeapDescriptor {
    s32 size;                    // at 0x0
    struct OSHeapCell* freeList; // at 0x4
    struct OSHeapCell* usedList; // at 0x8
} OSHeapDescriptor;

typedef struct OSHeapCell {
    struct OSHeapCell* prev;     // at 0x0
    struct OSHeapCell* next;     // at 0x4
    s32 size;                    // at 0x8
    struct OSHeapDescriptor* hd; // at 0xC
    s32 usedSize;                // at 0x10
    char UNK_0x14[0x20 - 0x14];
} OSHeapCell;

volatile s32 __OSCurrHeap = -1;

static void* ArenaEnd = NULL;
static void* ArenaStart = NULL;
static s32 NumHeaps = 0;
static OSHeapDescriptor* HeapArray = NULL;

static OSHeapCell* DLAddFront(OSHeapCell* list, OSHeapCell* child) {
    child->next = list;
    child->prev = NULL;

    if (list != NULL) {
        list->prev = child;
    }

    return child;
}

static OSHeapCell* DLExtract(OSHeapCell* list, OSHeapCell* child) {
    if (child->next != NULL) {
        child->next->prev = child->prev;
    }

    if (child->prev == NULL) {
        return child->next;
    }

    child->prev->next = child->next;
    return list;
}

static OSHeapCell* DLInsert(OSHeapCell* list, OSHeapCell* child) {
    OSHeapCell* prev = NULL;
    OSHeapCell* next = list;

    for (; next != NULL; prev = next, next = next->next) {
        if (child <= next) {
            break;
        }
    }

    child->next = next;
    child->prev = prev;

    if (next != NULL) {
        next->prev = child;

        if ((u8*)child + child->size == (u8*)next) {
            child->size += next->size;
            next = next->next;
            child->next = next;
            if (next != NULL) {
                next->prev = child;
            }
        }
    }

    if (prev != NULL) {
        prev->next = child;

        if ((u8*)prev + prev->size == (u8*)child) {
            prev->size += child->size;
            prev->next = next;
            if (next != NULL) {
                next->prev = prev;
            }
        }

        return list;
    } else {
        return child;
    }
}

// OSAllocFromHeap: definicion C reemplazada por asm (ver abajo)


//unused
void OSAllocFixed(){
}

void OSFreeToHeap(s32 handle, void* p) {
    OSHeapDescriptor* hd = &HeapArray[handle];
    OSHeapCell* cell = (OSHeapCell*)((u8*)p - sizeof(OSHeapCell));
    hd->usedList = DLExtract(hd->usedList, cell);
    hd->freeList = DLInsert(hd->freeList, cell);
}

s32 OSSetCurrentHeap(s32 handle) {
    s32 old = __OSCurrHeap;
    __OSCurrHeap = handle;
    return old;
}

// OSInitAlloc: definicion C reemplazada por asm (ver abajo)


s32 OSCreateHeap(void* start, void* end) {
    s32 handle;

    start = ROUND_UP_PTR(start, 32);
    end = ROUND_DOWN_PTR(end, 32);

    for (handle = 0; handle < NumHeaps; handle++) {
        OSHeapCell* cell = (OSHeapCell*)start;
        OSHeapDescriptor* hd = &HeapArray[handle];
        if (hd->size < 0) {
            hd->size = (uintptr_t)end - (uintptr_t)start;

            cell->prev = NULL;
            cell->next = NULL;
            cell->size = hd->size;

            hd->freeList = cell;
            hd->usedList = NULL;
            return handle;
        }
    }

    return -1;
}

//unused
void OSDestroyHeap(){
}

//unused
void OSAddToHeap(){
}

//unused
void OSCheckHeap(){
}

//unused
void OSReferentSize(){
}

//unused
void OSDumpHeap(){
}

//unused
void OSVisitAllocated(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049D1D8;
extern float lbl_8049E2C0;
extern float lbl_8049E2C4;
extern float lbl_8049E2C8;
extern float lbl_8049E2CC;

// asm_to_cpp: OSAllocFromHeap
asm void* OSAllocFromHeap(s32 handle, s32 size) {
    nofralloc
    mulli r3, r3, 0xc
    lwz r5, lbl_8049E2CC
    addi r0, r4, 0x3f
    add r5, r5, r3
    clrrwi r4, r0, 5
    lwz r3, 0x4(r5)
    mr r6, r3
    b lbl_803148E0
lbl_803148D0:
    lwz r0, 0x8(r6)
    cmpw r4, r0
    ble lbl_803148E8
    lwz r6, 0x4(r6)
lbl_803148E0:
    cmpwi r6, 0x0
    bne lbl_803148D0
lbl_803148E8:
    cmpwi r6, 0x0
    bne lbl_803148F8
    li r3, 0x0
    blr
lbl_803148F8:
    lwz r0, 0x8(r6)
    subf r0, r4, r0
    cmplwi r0, 0x40
    bge lbl_80314940
    lwz r4, 0x4(r6)
    cmpwi r4, 0x0
    beq lbl_8031491C
    lwz r0, 0x0(r6)
    stw r0, 0x0(r4)
lbl_8031491C:
    lwz r4, 0x0(r6)
    cmpwi r4, 0x0
    bne lbl_80314930
    lwz r3, 0x4(r6)
    b lbl_80314938
lbl_80314930:
    lwz r0, 0x4(r6)
    stw r0, 0x4(r4)
lbl_80314938:
    stw r3, 0x4(r5)
    b lbl_80314980
lbl_80314940:
    stw r4, 0x8(r6)
    add r4, r6, r4
    stw r0, 0x8(r4)
    lwz r0, 0x0(r6)
    stw r0, 0x0(r4)
    lwz r3, 0x4(r6)
    cmpwi r3, 0x0
    stw r3, 0x4(r4)
    beq lbl_80314968
    stw r4, 0x0(r3)
lbl_80314968:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_8031497C
    stw r4, 0x4(r3)
    b lbl_80314980
lbl_8031497C:
    stw r4, 0x4(r5)
lbl_80314980:
    lwz r3, 0x8(r5)
    li r0, 0x0
    stw r3, 0x4(r6)
    cmpwi r3, 0x0
    stw r0, 0x0(r6)
    beq lbl_8031499C
    stw r6, 0x0(r3)
lbl_8031499C:
    stw r6, 0x8(r5)
    addi r3, r6, 0x20
    blr
}

// asm_to_cpp: OSInitAlloc
asm void* OSInitAlloc(void* start, void* end, s32 numHeaps) {
    nofralloc
    mulli r7, r5, 0xc
    stw r3, lbl_8049E2CC
    li r8, 0x0
    stw r5, lbl_8049E2C8
    li r6, 0x0
    li r5, -0x1
    li r3, 0x0
    b lbl_80314A6C
lbl_80314A50:
    lwz r0, lbl_8049E2CC
    addi r8, r8, 0x1
    stwx r5, r6, r0
    add r9, r0, r6
    addi r6, r6, 0xc
    stw r3, 0x8(r9)
    stw r3, 0x4(r9)
lbl_80314A6C:
    lwz r0, lbl_8049E2C8
    cmpw r8, r0
    blt lbl_80314A50
    lwz r3, lbl_8049E2CC
    clrrwi r0, r4, 5
    li r4, -0x1
    stw r0, lbl_8049E2C0
    add r3, r3, r7
    addi r0, r3, 0x1f
    stw r4, lbl_8049D1D8
    clrrwi r3, r0, 5
    stw r3, lbl_8049E2C4
    blr
}
