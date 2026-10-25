#include <revolution/OS.h>

static BOOL OnShutdown(BOOL final, u32 event);
static OSShutdownFunctionInfo ShutdownFunctionInfo = {OnShutdown, 127};

//unused
u32 OSGetPhysicalMem1Size(void) {
    return OS_PHYSICAL_MEM1_SIZE;
}

u32 OSGetPhysicalMem2Size(void) {
    return OS_PHYSICAL_MEM2_SIZE;
}

u32 OSGetConsoleSimulatedMem1Size(void) {
    return OS_SIMULATED_MEM1_SIZE;
}

u32 OSGetConsoleSimulatedMem2Size(void) {
    return OS_SIMULATED_MEM2_SIZE;
}

static BOOL OnShutdown(BOOL final, u32 event) {
#pragma unused(event)

    if (final) {
        MI_HW_REGS[MI_PROT_MEM0] = 0xFF;
        __OSMaskInterrupts(
            OS_INTR_MASK(OS_INTR_MEM_0) | OS_INTR_MASK(OS_INTR_MEM_1) |
            OS_INTR_MASK(OS_INTR_MEM_2) | OS_INTR_MASK(OS_INTR_MEM_3));
    }

    return TRUE;
}

// @typo
static void MEMIntrruptHandler(s32 intr, OSContext* ctx) {
#pragma unused(intr)

    u32 dsisr = MI_HW_REGS[MI_INTSR];
    u32 dar = (MI_HW_REGS[MI_ADDRHI] & 0x3ff) << 0x10 | MI_HW_REGS[MI_ADDRLO];
    MI_HW_REGS[MI_REG_0x20] = 0;

    if (__OSErrorTable[OS_ERR_PROTECTION] != NULL) {
        __OSErrorTable[OS_ERR_PROTECTION](OS_ERR_PROTECTION, ctx, dsisr, dar);
    } else {
        __OSUnhandledException(OS_ERR_PROTECTION, ctx, dsisr, dar);
    }
}

//unused
void OSProtectRange(){
}

static asm void ConfigMEM1_24MB(void) {
    // clang-format off
    nofralloc

    li r7, 0
    lis r4, 0x00000002@ha
    addi r4, r4, 0x00000002@l
    lis r3, 0x800001FF@ha
    addi r3, r3, 0x800001FF@l
    lis r6, 0x01000002@ha
    addi r6, r6, 0x01000002@l
    lis r5, 0x810000FF@ha
    addi r5, r5, 0x810000FF@l
    isync
    mtdbatu 0, r7
    mtdbatl 0, r4
    mtdbatu 0, r3
    isync
    mtibatu 0, r7
    mtibatl 0, r4
    mtibatu 0, r3
    isync
    mtdbatu 2, r7
    mtdbatl 2, r6
    mtdbatu 2, r5
    isync
    mtibatu 2, r7
    mtibatl 2, r6
    mtibatu 2, r5
    isync
    mfmsr r3
    ori r3, r3, 0x30
    mtsrr1 r3
    mflr r3
    mtsrr0 r3
    rfi
    // clang-format on
}

static asm void ConfigMEM2_52MB(void) {
    // clang-format off
    nofralloc

    li r7, 0
    lis r4, 0x10000002@ha
    addi r4, r4, 0x10000002@l
    lis r3, 0x900003FF@ha
    addi r3, r3, 0x900003FF@l
    lis r6, 0x1000002A@ha
    addi r6, r6, 0x1000002A@l
    lis r5, 0xD00007FF@ha
    addi r5, r5, 0xD00007FF@l
    isync
    mtspr DBAT4U, r7
    mtspr DBAT4L, r4
    mtspr DBAT4U, r3
    isync
    mtspr IBAT4U, r7
    mtspr IBAT4L, r7
    isync
    mtspr DBAT5U, r7
    mtspr DBAT5L, r6
    mtspr DBAT5U, r5
    isync
    mtspr IBAT5U, r7
    mtspr IBAT5L, r7
    isync
    lis r4, 0x12000002@ha
    addi r4, r4, 0x12000002@l
    lis r3, 0x920001FF@ha
    addi r3, r3, 0x920001FF@l
    lis r6, 0x13000002@ha
    addi r6, r6, 0x13000002@l
    lis r5, 0x9300007F@ha
    addi r5, r5, 0x9300007F@l
    isync
    mtspr DBAT6U, r7
    mtspr DBAT6L, r4
    mtspr DBAT6U, r3
    isync
    mtspr IBAT6U, r7
    mtspr IBAT6L, r7
    isync
    mtspr DBAT7U, r7
    mtspr DBAT7L, r6
    mtspr DBAT7U, r5
    isync
    mtspr IBAT7U, r7
    mtspr IBAT7L, r7
    isync
    mfmsr r3
    ori r3, r3, 0x30
    mtsrr1 r3
    mflr r3
    mtsrr0 r3
    rfi
    // clang-format on
}

static asm void ConfigMEM2_56MB(void) {
    // clang-format off
    nofralloc

    li r7, 0
    lis r4, 0x10000002@ha
    addi r4, r4, 0x10000002@l
    lis r3, 0x900003FF@ha
    addi r3, r3, 0x900003FF@l
    lis r6, 0x1000002A@ha
    addi r6, r6, 0x1000002A@l
    lis r5, 0xD00007FF@ha
    addi r5, r5, 0xD00007FF@l
    isync
    mtspr DBAT4U, r7
    mtspr DBAT4L, r4
    mtspr DBAT4U, r3
    isync
    mtspr IBAT4U, r7
    mtspr IBAT4L, r7
    isync
    mtspr DBAT5U, r7
    mtspr DBAT5L, r6
    mtspr DBAT5U, r5
    isync
    mtspr IBAT5U, r7
    mtspr IBAT5L, r7
    isync
    lis r4, 0x12000002@ha
    addi r4, r4, 0x12000002@l
    lis r3, 0x920001FF@ha
    addi r3, r3, 0x920001FF@l
    lis r6, 0x13000002@ha
    addi r6, r6, 0x13000002@l
    lis r5, 0x930000FF@ha
    addi r5, r5, 0x930000FF@l
    isync
    mtspr DBAT6U, r7
    mtspr DBAT6L, r4
    mtspr DBAT6U, r3
    isync
    mtspr IBAT6U, r7
    mtspr IBAT6L, r7
    isync
    mtspr DBAT7U, r7
    mtspr DBAT7L, r6
    mtspr DBAT7U, r5
    isync
    mtspr IBAT7U, r7
    mtspr IBAT7L, r7
    isync
    mfmsr r3
    ori r3, r3, 0x30
    mtsrr1 r3
    mflr r3
    mtsrr0 r3
    rfi
    // clang-format on
}

static asm void ConfigMEM2_64MB(void) {
    // clang-format off
    nofralloc

    li r7, 0
    lis r4, 0x10000002@ha
    addi r4, r4, 0x10000002@l
    lis r3, 0x900007FF@ha
    addi r3, r3, 0x900007FF@l
    lis r6, 0x1000002A@ha
    addi r6, r6, 0x1000002A@l
    lis r5, 0xD00007FF@ha
    addi r5, r5, 0xD00007FF@l
    isync
    mtspr DBAT4U, r7
    mtspr DBAT4L, r4
    mtspr DBAT4U, r3
    isync
    mtspr IBAT4U, r7
    mtspr IBAT4L, r7
    isync
    mtspr DBAT5U, r7
    mtspr DBAT5L, r6
    mtspr DBAT5U, r5
    isync
    mtspr IBAT5U, r7
    mtspr IBAT5L, r7
    isync
    mtspr IBAT6U, r7
    mtspr IBAT6L, r7
    isync
    mtspr IBAT7U, r7
    mtspr IBAT7L, r7
    isync
    mtspr DBAT6U, r7
    mtspr DBAT6L, r7
    isync
    mtspr DBAT7U, r7
    mtspr DBAT7L, r7
    isync
    mfmsr r3
    ori r3, r3, 0x30
    mtsrr1 r3
    mflr r3
    mtsrr0 r3
    rfi
    // clang-format on
}

static asm void ConfigMEM2_112MB(void) {
    // clang-format off
    nofralloc

    li r7, 0
    lis r4, 0x10000002@ha
    addi r4, r4, 0x10000002@l
    lis r3, 0x900007FF@ha
    addi r3, r3, 0x900007FF@l
    lis r6, 0x1000002A@ha
    addi r6, r6, 0x1000002A@l
    lis r5, 0xD0000FFF@ha
    addi r5, r5, 0xD0000FFF@l
    isync
    mtspr DBAT4U, r7
    mtspr DBAT4L, r4
    mtspr DBAT4U, r3
    isync
    mtspr IBAT4U, r7
    mtspr IBAT4L, r7
    isync
    mtspr DBAT5U, r7
    mtspr DBAT5L, r6
    mtspr DBAT5U, r5
    isync
    mtspr IBAT5U, r7
    mtspr IBAT5L, r7
    isync
    lis r4, 0x14000002@ha
    addi r4, r4, 0x14000002@l
    lis r3, 0x940003FF@ha
    addi r3, r3, 0x940003FF@l
    lis r6, 0x16000002@ha
    addi r6, r6, 0x16000002@l
    lis r5, 0x960001FF@ha
    addi r5, r5, 0x960001FF@l
    isync
    mtspr DBAT6U, r7
    mtspr DBAT6L, r4
    mtspr DBAT6U, r3
    isync
    mtspr IBAT6U, r7
    mtspr IBAT6L, r7
    isync
    mtspr DBAT7U, r7
    mtspr DBAT7L, r6
    mtspr DBAT7U, r5
    isync
    mtspr IBAT7U, r7
    mtspr IBAT7L, r7
    isync
    mfmsr r3
    ori r3, r3, 0x30
    mtsrr1 r3
    mflr r3
    mtsrr0 r3
    rfi
    // clang-format on
}

static asm void ConfigMEM2_128MB(void) {
    // clang-format off
    nofralloc

    li r7, 0
    lis r4, 0x10000002@ha
    addi r4, r4, 0x10000002@l
    lis r3, 0x90000FFF@ha
    addi r3, r3, 0x90000FFF@l
    lis r6, 0x1000002A@ha
    addi r6, r6, 0x1000002A@l
    lis r5, 0xD0000FFF@ha
    addi r5, r5, 0xD0000FFF@l
    isync
    mtspr DBAT4U, r7
    mtspr DBAT4L, r4
    mtspr DBAT4U, r3
    isync
    mtspr IBAT4U, r7
    mtspr IBAT4L, r7
    isync
    mtspr DBAT5U, r7
    mtspr DBAT5L, r6
    mtspr DBAT5U, r5
    isync
    mtspr IBAT5U, r7
    mtspr IBAT5L, r7
    isync
    mtspr IBAT6U, r7
    mtspr IBAT6L, r7
    isync
    mtspr IBAT7U, r7
    mtspr IBAT7L, r7
    isync
    mtspr DBAT6U, r7
    mtspr DBAT6L, r7
    isync
    mtspr DBAT7U, r7
    mtspr DBAT7L, r7
    isync
    mfmsr r3
    ori r3, r3, 0x30
    mtsrr1 r3
    mflr r3
    mtsrr0 r3
    rfi
    // clang-format on
}

//unused
void DisableInstsOnMEM1Hi8MB(){
}

//unused
void DisableInstsOnMEM1Hi16MB(){
}

//unused
void EnableInstsOnMEM2Lo8MB(){
}

//unused
void EnableInstsOnMEM2Lo16MB(){
}

static asm void RealMode(register void* config) {
    // clang-format off
    nofralloc

    clrlwi config, config, 2
    mtsrr0 config
    mfmsr config
    rlwinm config, config, 0, 0x1c, 0x19
    mtsrr1 config
    rfi
    // clang-format on
}

//Does nothing. There might've been extra code while was commented out/removed.
static void WeirdAssInline(u32 size){
    //Loops forever unless the input value is 0xBA2CF
    do{
    }while(size != 0xBA2CF);
}

// BATConfig: definicion C reemplazada por asm (ver abajo)


//unused
void OSDisableCodeExecOnMEM1Hi8MB(){
}

//unused
void OSDisableCodeExecOnMEM1Hi16MB(){
}

void __OSRestoreCodeExecOnMEM1(u32 size){
    RealMode(ConfigMEM1_24MB);
    WeirdAssInline(size);
}

//unused
void OSEnableCodeExecOnMEM2Lo16MB(){
}

//unused
void OSEnableCodeExecOnMEM2Lo8MB(){
}

// __OSInitMemoryProtection: definicion C reemplazada por asm (ver abajo)


// ---- Funciones aun sin C que matchee (asm generado) ----
extern float initialized_696_8049E318;
extern u8 ShutdownFunctionInfo_803810A8[];
extern void DCInvalidateRange();
extern void OSRegisterShutdownFunction();
extern void fn_8031A5A8();
extern void fn_8031ABB0();

// asm_to_cpp: fn_8031A5A8
asm void fn_8031A5A8() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_8031A5D0
    li r0, 0xff
    lis r3, 0xcc00
    sth r0, 0x4010(r3)
    lis r3, 0xf000
    bl __OSMaskInterrupts
lbl_8031A5D0:
    lwz r0, 0x14(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: BATConfig
asm static void BATConfig(u32 size) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, 0x8000
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, 0x3104(r4)
    lwz r0, 0x3100(r4)
    cmplw r31, r0
    bge lbl_8031AAE0
    subis r0, r31, 0x180
    cmplwi r0, 0x0
    bne lbl_8031AAE0
    lis r3, 0x8180
    lis r4, 0x180
    bl DCInvalidateRange
    li r0, 0x2
    lis r3, 0xcc00
    sth r0, 0x4028(r3)
lbl_8031AAE0:
    lis r0, 0x180
    cmplw r31, r0
    bgt lbl_8031AAF8
    lis r3, ConfigMEM1_24MB@ha
    addi r3, r3, ConfigMEM1_24MB@l
    bl RealMode
lbl_8031AAF8:
    lis r3, 0x8000
    lis r0, 0x400
    lwz r4, 0x311c(r3)
    lwz r3, 0x3120(r3)
    cmplw r4, r0
    bgt lbl_8031AB58
    lis r0, 0x9340
    cmplw r3, r0
    bgt lbl_8031AB2C
    lis r3, ConfigMEM2_52MB@ha
    addi r3, r3, ConfigMEM2_52MB@l
    bl RealMode
    b lbl_8031AB8C
lbl_8031AB2C:
    lis r0, 0x9380
    cmplw r3, r0
    bgt lbl_8031AB48
    lis r3, ConfigMEM2_56MB@ha
    addi r3, r3, ConfigMEM2_56MB@l
    bl RealMode
    b lbl_8031AB8C
lbl_8031AB48:
    lis r3, ConfigMEM2_64MB@ha
    addi r3, r3, ConfigMEM2_64MB@l
    bl RealMode
    b lbl_8031AB8C
lbl_8031AB58:
    lis r0, 0x800
    cmplw r4, r0
    bgt lbl_8031AB8C
    lis r0, 0x9700
    cmplw r3, r0
    bgt lbl_8031AB80
    lis r3, ConfigMEM2_112MB@ha
    addi r3, r3, ConfigMEM2_112MB@l
    bl RealMode
    b lbl_8031AB8C
lbl_8031AB80:
    lis r3, ConfigMEM2_128MB@ha
    addi r3, r3, ConfigMEM2_128MB@l
    bl RealMode
lbl_8031AB8C:
    subis r0, r30, 0xb
lbl_8031AB90:
    cmplwi r0, 0xa2cf
    bne lbl_8031AB90
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_8031ABB0
asm void fn_8031ABB0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, ConfigMEM1_24MB@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r4, ConfigMEM1_24MB@l
    bl RealMode
    subis r0, r31, 0xb
lbl_8031ABD4:
    cmplwi r0, 0xa2cf
    bne lbl_8031ABD4
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: __OSInitMemoryProtection
asm void __OSInitMemoryProtection(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, initialized_696_8049E318
    stw r31, 0xc(r1)
    cmpwi r0, 0x0
    stw r30, 0x8(r1)
    bne lbl_8031ACA4
    bl OSDisableInterrupts
    lis r4, 0xcc00
    li r0, 0x0
    sth r0, 0x4020(r4)
    li r0, 0xff
    mr r30, r3
    lis r3, 0xf000
    sth r0, 0x4010(r4)
    bl __OSMaskInterrupts
    lis r31, MEMIntrruptHandler@ha
    li r3, 0x0
    addi r4, r31, MEMIntrruptHandler@l
    bl __OSSetInterruptHandler
    addi r4, r31, MEMIntrruptHandler@l
    li r3, 0x1
    bl __OSSetInterruptHandler
    addi r4, r31, MEMIntrruptHandler@l
    li r3, 0x2
    bl __OSSetInterruptHandler
    addi r4, r31, MEMIntrruptHandler@l
    li r3, 0x3
    bl __OSSetInterruptHandler
    addi r4, r31, MEMIntrruptHandler@l
    li r3, 0x4
    bl __OSSetInterruptHandler
    lis r3, ShutdownFunctionInfo_803810A8@ha
    addi r3, r3, ShutdownFunctionInfo_803810A8@l
    bl OSRegisterShutdownFunction
    lis r3, 0xc
    subi r3, r3, 0x5d31
    bl BATConfig
    lis r3, 0x800
    bl __OSUnmaskInterrupts
    li r0, 0x1
    mr r3, r30
    stw r0, initialized_696_8049E318
    bl OSRestoreInterrupts
lbl_8031ACA4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
