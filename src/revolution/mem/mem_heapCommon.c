#include <revolution/MEM.h>
#include <revolution/OS.h>

static BOOL sRootListInitialized;
static MEMList sRootList;
static OSMutex sRootMutex;

static MEMiHeapHead* FindContainHeap_(MEMList* list, const void* memBlock) {
    MEMiHeapHead* heap = NULL;

    while ((heap = (MEMiHeapHead*)MEMGetNextListObject(list, heap)) != NULL) {
        if (GetUIntPtr(heap->start) <= GetUIntPtr(memBlock) &&
            GetUIntPtr(memBlock) < GetUIntPtr(heap->end)) {
            MEMiHeapHead* recursive = FindContainHeap_(&heap->list, memBlock);
            if (recursive != NULL) {
                return recursive;
            }
            return heap;
        }
    }

    return NULL;
}

//unused
void FindParentHeap_(){
}

static MEMList* FindListContainHeap_(MEMiHeapHead* heap) {
    MEMList* list = &sRootList;
    MEMiHeapHead* result = FindContainHeap_(&sRootList, heap);
    if (result != NULL) {
        list = &result->list;
    }
    return list;
}

// MEMiInitHeapHead: definicion C reemplazada por asm (ver abajo)


// MEMiFinalizeHeap: definicion C reemplazada por asm (ver abajo)


//unused
void MEMiDumpHeapHead(){
}

//unused
MEMiHeapHead* MEMFindContainHeap(const void* memBlock) {
    return FindContainHeap_(&sRootList, memBlock);
}

//unused
void MEMFindParentHeap(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049E250;
extern u8 lbl_804648B0[];
extern u8 lbl_804648C0[];
extern void OSInitMutex();
extern void OSLockMutex();
extern void OSUnlockMutex();
extern void _restgpr_27();
extern void _savegpr_27();
extern void fn_8030CB2C();
extern void fn_8030CB44();
extern void fn_8030CBB4();
extern void fn_8030CC20();

// asm_to_cpp: MEMiInitHeapHead
asm void MEMiInitHeapHead(MEMiHeapHead* heap, u32 magic, void* start, void* end,
                      u16 opt) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    li r0, 0x0
    stw r4, 0x0(r3)
    rlwimi r0, r7, 0, 24, 31
    mr r27, r3
    stw r5, 0x18(r3)
    li r4, 0x4
    stw r6, 0x1c(r3)
    stw r0, 0x38(r3)
    addi r3, r3, 0xc
    bl fn_8030CB2C
    lwz r0, lbl_8049E250
    cmpwi r0, 0x0
    bne lbl_8030BBD0
    lis r3, lbl_804648B0@ha
    li r4, 0x4
    addi r3, r3, lbl_804648B0@l
    bl fn_8030CB2C
    lis r3, lbl_804648C0@ha
    addi r3, r3, lbl_804648C0@l
    bl OSInitMutex
    li r0, 0x1
    stw r0, lbl_8049E250
lbl_8030BBD0:
    addi r3, r27, 0x20
    bl OSInitMutex
    lis r3, lbl_804648C0@ha
    addi r3, r3, lbl_804648C0@l
    bl OSLockMutex
    lis r31, lbl_804648B0@ha
    li r30, 0x0
    addi r28, r31, lbl_804648B0@l
    b lbl_8030BCCC
lbl_8030BBF4:
    lwz r0, 0x18(r3)
    cmplw r0, r27
    bgt lbl_8030BCCC
    lwz r0, 0x1c(r3)
    cmplw r27, r0
    bge lbl_8030BCCC
    li r31, 0x0
    b lbl_8030BC9C
lbl_8030BC14:
    lwz r0, 0x18(r3)
    cmplw r0, r27
    bgt lbl_8030BC9C
    lwz r0, 0x1c(r3)
    cmplw r27, r0
    bge lbl_8030BC9C
    li r29, 0x0
    b lbl_8030BC6C
lbl_8030BC34:
    lwz r0, 0x18(r3)
    cmplw r0, r27
    bgt lbl_8030BC6C
    lwz r0, 0x1c(r3)
    cmplw r27, r0
    bge lbl_8030BC6C
    mr r4, r27
    addi r3, r3, 0xc
    bl FindContainHeap_
    cmpwi r3, 0x0
    beq lbl_8030BC64
    b lbl_8030BC88
lbl_8030BC64:
    mr r3, r29
    b lbl_8030BC88
lbl_8030BC6C:
    mr r4, r29
    addi r3, r31, 0xc
    bl fn_8030CC20
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_8030BC34
    li r3, 0x0
lbl_8030BC88:
    cmpwi r3, 0x0
    beq lbl_8030BC94
    b lbl_8030BCB8
lbl_8030BC94:
    mr r3, r31
    b lbl_8030BCB8
lbl_8030BC9C:
    mr r4, r31
    addi r3, r30, 0xc
    bl fn_8030CC20
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_8030BC14
    li r3, 0x0
lbl_8030BCB8:
    cmpwi r3, 0x0
    beq lbl_8030BCC4
    b lbl_8030BCE8
lbl_8030BCC4:
    mr r3, r30
    b lbl_8030BCE8
lbl_8030BCCC:
    mr r4, r30
    addi r3, r31, lbl_804648B0@l
    bl fn_8030CC20
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8030BBF4
    li r3, 0x0
lbl_8030BCE8:
    cmpwi r3, 0x0
    beq lbl_8030BCF4
    addi r28, r3, 0xc
lbl_8030BCF4:
    mr r3, r28
    mr r4, r27
    bl fn_8030CB44
    lis r3, lbl_804648C0@ha
    addi r3, r3, lbl_804648C0@l
    bl OSUnlockMutex
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: MEMiFinalizeHeap
asm void MEMiFinalizeHeap(MEMiHeapHead* heap) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r4, lbl_804648C0@ha
    mr r27, r3
    addi r3, r4, lbl_804648C0@l
    bl OSLockMutex
    lis r31, lbl_804648B0@ha
    li r30, 0x0
    addi r28, r31, lbl_804648B0@l
    b lbl_8030BE30
lbl_8030BD58:
    lwz r0, 0x18(r3)
    cmplw r0, r27
    bgt lbl_8030BE30
    lwz r0, 0x1c(r3)
    cmplw r27, r0
    bge lbl_8030BE30
    li r31, 0x0
    b lbl_8030BE00
lbl_8030BD78:
    lwz r0, 0x18(r3)
    cmplw r0, r27
    bgt lbl_8030BE00
    lwz r0, 0x1c(r3)
    cmplw r27, r0
    bge lbl_8030BE00
    li r29, 0x0
    b lbl_8030BDD0
lbl_8030BD98:
    lwz r0, 0x18(r3)
    cmplw r0, r27
    bgt lbl_8030BDD0
    lwz r0, 0x1c(r3)
    cmplw r27, r0
    bge lbl_8030BDD0
    mr r4, r27
    addi r3, r3, 0xc
    bl FindContainHeap_
    cmpwi r3, 0x0
    beq lbl_8030BDC8
    b lbl_8030BDEC
lbl_8030BDC8:
    mr r3, r29
    b lbl_8030BDEC
lbl_8030BDD0:
    mr r4, r29
    addi r3, r31, 0xc
    bl fn_8030CC20
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_8030BD98
    li r3, 0x0
lbl_8030BDEC:
    cmpwi r3, 0x0
    beq lbl_8030BDF8
    b lbl_8030BE1C
lbl_8030BDF8:
    mr r3, r31
    b lbl_8030BE1C
lbl_8030BE00:
    mr r4, r31
    addi r3, r30, 0xc
    bl fn_8030CC20
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_8030BD78
    li r3, 0x0
lbl_8030BE1C:
    cmpwi r3, 0x0
    beq lbl_8030BE28
    b lbl_8030BE4C
lbl_8030BE28:
    mr r3, r30
    b lbl_8030BE4C
lbl_8030BE30:
    mr r4, r30
    addi r3, r31, lbl_804648B0@l
    bl fn_8030CC20
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_8030BD58
    li r3, 0x0
lbl_8030BE4C:
    cmpwi r3, 0x0
    beq lbl_8030BE58
    addi r28, r3, 0xc
lbl_8030BE58:
    mr r3, r28
    mr r4, r27
    bl fn_8030CBB4
    lis r3, lbl_804648C0@ha
    addi r3, r3, lbl_804648C0@l
    bl OSUnlockMutex
    li r0, 0x0
    addi r11, r1, 0x20
    stw r0, 0x0(r27)
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
