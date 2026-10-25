#include <types.h>
#include <revolution/OS.h>

static void InitDefaultHeap(){
    void* arenaLo;
    void* arenaHi;

    OSReport("GCN_Mem_Alloc.c : InitDefaultHeap. No Heap Available\n");
    OSReport("Metrowerks CW runtime library initializing default heap\n");

    arenaLo = OSGetArenaLo();
    arenaHi = OSGetArenaHi();

    arenaLo = OSInitAlloc(arenaLo, arenaHi, 1);
    OSSetArenaLo(arenaLo);

    arenaLo = (void*)ROUND_UP_PTR(arenaLo, 32);
    arenaHi = (void*)ROUND_DOWN_PTR(arenaHi, 32);

    OSSetCurrentHeap(OSCreateHeap(arenaLo, arenaHi));
    OSSetArenaLo(arenaLo = arenaHi);
}

//unused
void __sys_alloc(){
}

__declspec(weak) extern void __sys_free(void* ptr){
    if (__OSCurrHeap == -1) {
        InitDefaultHeap();
    }
    OSFreeToHeap(__OSCurrHeap, ptr);
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049D8B0;
extern void exit();
extern void fn_80195B68();
extern void raise();

// asm_to_cpp: fn_80195B68
asm void fn_80195B68() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0x14(r1)
    bl raise
    li r0, 0x1
    stw r0, lbl_8049D8B0
    li r3, 0x1
    bl exit
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
