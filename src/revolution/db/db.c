#include <revolution/BASE.h>
#include <revolution/DB.h>
#include <revolution/OS.h>

BOOL DBVerbose;
OSDebugInterface* __DBInterface;

// DBInit: definicion C reemplazada por asm (ver abajo)


//unused
void DBIsDebuggerPresent(){
}

void __DBExceptionDestinationAux(void) {
    const void* physCtx = (void*)OS_PHYS_CURRENT_CONTEXT_PHYS;
    OSContext* ctx = (OSContext*)OSPhysicalToCached(*(u32*)physCtx);
    OSReport("DBExceptionDestination\n");
    OSDumpContext(ctx);
    PPCHalt();
}

asm void __DBExceptionDestination(void){
    // clang-format off
    nofralloc
    
    // Set up MMU
    mfmsr r3
    ori r3, r3, (MSR_IR | MSR_DR)
    mtmsr r3

    b __DBExceptionDestinationAux
    // clang-format on
}

BOOL __DBIsExceptionMarked(u8 exc) {
    return __DBInterface->exceptionMask & (1 << exc);
}

//unused
void __DBMarkException(){
}

//unused
void __DBSetPresent(){
}

void DBPrintf(const char* msg, ...) {
#pragma unused(msg)
}

// ---- Funciones aun sin C que matchee (asm generado) ----


// asm_to_cpp: DBInit
asm void DBInit(void) {
    nofralloc
    lis r4, 0x8000
    lis r3, __DBExceptionDestination@ha
    addi r5, r4, 0x40
    li r0, 0x1
    addi r3, r3, __DBExceptionDestination@l
    stw r5, __DBInterface
    addis r3, r3, 0x8000
    stw r3, 0x48(r4)
    stw r0, DBVerbose
    blr
}
