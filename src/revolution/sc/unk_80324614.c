#include <revolution/OS.h>
#include <revolution/SC.h>
#include <cstring>

#define XOR_KEY 0x73B5DBFA

typedef struct SCRegion {
    s8 area;      // at 0x0
    char name[4]; // at 0x1
} SCRegion;

static SCRegion ProductAreaAndStringTbl[] = {{SC_AREA_JPN, "JPN"},
                                             {SC_AREA_USA, "USA"},
                                             {SC_AREA_EUR, "EUR"},
                                             {SC_AREA_AUS, "AUS"},
                                             {SC_AREA_BRA, "BRA"},
                                             {SC_AREA_TWN, "TWN"},
                                             {SC_AREA_TWN, "ROC"},
                                             {SC_AREA_KOR, "KOR"},
                                             {SC_AREA_HKG, "HKG"},
                                             {SC_AREA_ASI, "ASI"},
                                             {SC_AREA_LTN, "LTN"},
                                             {SC_AREA_SAF, "SAF"},
                                             {-1, ""}};

typedef struct SCGameRegion {
    s8 region;    // at 0x0
    char name[3]; // at 0x1
} SCGameRegion;

static SCGameRegion ProductGameRegionAndStringTbl[] = {
    {SC_GAME_REGION_JP, "JP"},
    {SC_GAME_REGION_US, "US"},
    {SC_GAME_REGION_EU, "EU"},
    {-1, ""}};

BOOL __SCF1(const char* type, char* buf, u32 sz) {
    u8 ptext;
    BOOL found = FALSE;
    u32 i;
    const u8* settings = (const u8*)OSPhysicalToCached(OS_PHYS_SC_PRDINFO);
    u32 key = XOR_KEY;
    u32 typeOfs = 0;
    u32 bufOfs = 0;

    for (i = 0; i < SC_PRDINFO_SIZE; i++, key = key >> 31 | key << 1) {
        ptext = settings[i];

        if (ptext != 0x00) {
            ptext ^= key;
            if (type[typeOfs] == 0x00 && ptext == '=') {
                found = TRUE;
                break;
            }

            if (((ptext ^ type[typeOfs]) & 0xDF) == 0) {
                typeOfs++;
            } else {
                typeOfs = 0;
            }
        }
    }

    if (found) {
        for (i++; i < SC_PRDINFO_SIZE && bufOfs < sz; i++) {
            key = key >> 31 | key << 1;
            ptext = settings[i];

            if (ptext != 0x00) {
                ptext ^= key;
                if (ptext == '\r' || ptext == '\n') {
                    ptext = 0x00;
                }
            }

            buf[bufOfs++] = ptext;

            if (ptext == 0x00) {
                return TRUE;
            }
        }
    }

    return FALSE;
}

BOOL SCGetProductAreaString(char* buf, u32 sz) {
    return __SCF1("AREA", buf, sz);
}

s8 SCGetProductArea(void) {
    s8 area;
    char name[4];
    SCRegion* iter = ProductAreaAndStringTbl;

    if (SCGetProductAreaString(name, sizeof(name))) {
        while ((area = iter->area) != -1) {
            if (!strcmp(iter->name, name)) {
                return area;
            }
            iter++;
        }
    }

    return -1;
}

s8 SCGetProductGameRegion(void) {
    s8 region;
    char name[3];
    SCGameRegion* iter = ProductGameRegionAndStringTbl;

    if (__SCF1("GAME", name, sizeof(name))) {
        while ((region = iter->region) != -1) {
            if (!strcmp(iter->name, name)) {
                return region;
            }
            iter++;
        }
    }

    return -1;
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049D370;
extern float lbl_8049D378;
extern float lbl_8049D380;
extern float lbl_8049E400;
extern u8 Packet_8046EFC8[];
extern u8 Si_8038DB08[];
extern u8 lbl_8038DA30[];
extern u8 lbl_8046DFC0[];
extern int SIBusy();
extern int SIIsChanBusy();
extern int fn_80324614();
extern int fn_80324704();
extern int fn_80324944();
extern int fn_80324980();
extern void memset();
extern void sscanf();

// asm_to_cpp: SIBusy
asm int SIBusy() {
    nofralloc
    lis r3, Si_8038DB08@ha
    lwz r4, Si_8038DB08@l(r3)
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r3, r0, 31
    blr
}

// asm_to_cpp: SIIsChanBusy
asm int SIIsChanBusy() {
    nofralloc
    lis r4, Packet_8046EFC8@ha
    slwi r0, r3, 5
    addi r4, r4, Packet_8046EFC8@l
    li r5, 0x0
    lwzx r0, r4, r0
    cmpwi r0, -0x1
    bne lbl_80324AB4
    lis r4, Si_8038DB08@ha
    lwz r0, Si_8038DB08@l(r4)
    cmpw r0, r3
    bne lbl_80324AB8
lbl_80324AB4:
    li r5, 0x1
lbl_80324AB8:
    mr r3, r5
    blr
}

// asm_to_cpp: fn_80324614
asm int fn_80324614() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x1008
    li r5, 0x10
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_8046DFC0@ha
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    addi r3, r31, lbl_8046DFC0@l
    bl SCFindByteArrayItem
    cmpwi r3, 0x0
    beq lbl_803246BC
    lwz r4, lbl_8046DFC0@l(r31)
    addis r0, r4, 0x1
    cmplwi r0, 0xffff
    beq lbl_803246BC
    clrrwi. r3, r4, 24
    beq lbl_803246BC
    addis r0, r3, 0x100
    cmplwi r0, 0x0
    beq lbl_803246BC
    rlwinm r3, r4, 0, 8, 15
    subis r0, r3, 0xff
    cmplwi r0, 0x0
    beq lbl_803246BC
    bl OSDisableInterrupts
    lwz r29, lbl_8046DFC0@l(r31)
    mr r30, r3
    rlwinm. r0, r29, 0, 8, 15
    bne lbl_803246AC
    addi r3, r31, lbl_8046DFC0@l
    li r4, 0x0
    li r5, 0x1008
    bl memset
    stw r29, lbl_8046DFC0@l(r31)
lbl_803246AC:
    mr r3, r30
    bl OSRestoreInterrupts
    li r0, 0x1
    b lbl_803246C0
lbl_803246BC:
    li r0, 0x0
lbl_803246C0:
    cmpwi r0, 0x0
    beq lbl_803246E0
    lis r4, lbl_8046DFC0@ha
    li r3, 0x1
    lwz r0, lbl_8046DFC0@l(r4)
    srwi r0, r0, 24
    stb r0, 0x0(r28)
    b lbl_803246E4
lbl_803246E0:
    li r3, 0x0
lbl_803246E4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

// asm_to_cpp: fn_80324704
asm int fn_80324704() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_8038DA30@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_8038DA30@l
    opword 0x4CC63182
    bl OSReport
    addi r3, r1, 0x8
    li r4, 0x14
    bl SCFindU32Item
    cmpwi r3, 0x0
    bne lbl_8032473C
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_8032473C:
    lwz r0, 0x8(r1)
    extrwi r3, r0, 1, 30
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80324944
asm int fn_80324944() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_8049D370
    la r4, lbl_8049E400
    stw r0, 0x14(r1)
    li r5, 0x6
    bl __SCF1
    cmpwi r3, 0x0
    li r3, 0x0
    beq lbl_80324970
    la r3, lbl_8049E400
lbl_80324970:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80324980
asm int fn_80324980() {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r5, 0xb
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    stw r31, 0x1c(r1)
    mr r31, r3
    la r3, lbl_8049D378
    bl __SCF1
    cmpwi r3, 0x0
    beq lbl_803249D0
    mr r5, r31
    addi r3, r1, 0x8
    la r4, lbl_8049D380
    opword 0x4CC63182
    bl sscanf
    cmpwi r3, 0x1
    bne lbl_803249D0
    li r3, 0x1
    b lbl_803249D4
lbl_803249D0:
    li r3, 0x0
lbl_803249D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
