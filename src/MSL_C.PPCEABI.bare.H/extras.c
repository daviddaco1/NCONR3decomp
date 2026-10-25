#include <types.h>
#include <ctype.h>

//unused
void strdup(){
}

//unused
void strlwr(){
}

//unused
void ultoa(){
}

//unused
void gcvt(){
}

//unused
void heapmin(){
}

int stricmp(char* param_1, char* param_2)
{
    s8 a_var;
    s8 b_var;

    do {
        b_var = tolower(*param_1++);
        a_var = tolower(*param_2++);

        if (b_var < a_var) {
            return -1;
        }
        if (b_var > a_var) {
            return 1;
        }
    } while (b_var != 0);
    return 0;
}


//unused
void strnicmp(){
}

//unused
void strupr(){
}

//unused
void strdate(){
}

//unused
void strset(){
}

//unused
void strnset(){
}

//unused
void strspnp(){
}

//unused
void strncasecmp(){
}

//unused
void strcmpi(){
}

//unused
void strncmpi(){
}

//unused
void strcasecmp(){
}

//unused
void stricoll(){
}

//unused
void strncoll(){
}

//unused
void strnicoll(){
}

//unused
void itoa(){
}

//unused
void strrev(){
}

//unused
void filelength(){
}

//unused
void wtoi(){
}

//unused
void wcslwr(){
}

//unused
void wcsupr(){
}

//unused
void wcsicmp(){
}

//unused
void wcsnicmp(){
}

//unused
void wcsrev(){
}

//unused
void wcsset(){
}

//unused
void wcsnset(){
}

//unused
void wcsspnp(){
}

//unused
void wcsdup(){
}

//unused
void wstrrev(){
}

//unused
void wcsicoll(){
}

//unused
void wcsncoll(){
}

//unused
void wcsnicoll(){
}

//unused
void itow(){
}

//unused
void watof(){
}

//unused
void asctime_r(){
}

//unused
void ctime_r(){
}

//unused
void localtime_r(){
}

//unused
void gmtime_r(){
}

//unused
void rand_r(){
}

//unused
void strerror_r(){
}

//unused
void strtok_r(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 lbl_8035FBD8[];
extern s32 fn_80198624();
extern void fn_801A341C();

s32 fn_801A3418(void) {
    return fn_80198624();
}

// asm_to_cpp: fn_801A341C
asm void fn_801A341C() {
    nofralloc
    lis r5, lbl_8035FBD8@ha
    addi r5, r5, lbl_8035FBD8@l
    lwz r6, 0x38(r5)
lbl_801A3428:
    lbz r0, 0x0(r3)
    li r5, 0x1
    addi r3, r3, 0x1
    extsb r7, r0
    cmplwi r7, 0xff
    bgt lbl_801A3444
    li r5, 0x0
lbl_801A3444:
    cmpwi r5, 0x0
    beq lbl_801A3450
    b lbl_801A3458
lbl_801A3450:
    lwz r5, 0x10(r6)
    lbzx r7, r5, r7
lbl_801A3458:
    lbz r0, 0x0(r4)
    extsb r7, r7
    li r5, 0x1
    addi r4, r4, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_801A3478
    li r5, 0x0
lbl_801A3478:
    cmpwi r5, 0x0
    beq lbl_801A3484
    b lbl_801A348C
lbl_801A3484:
    lwz r5, 0x10(r6)
    lbzx r0, r5, r0
lbl_801A348C:
    extsb r0, r0
    cmpw r7, r0
    bge lbl_801A34A0
    li r3, -0x1
    blr
lbl_801A34A0:
    ble lbl_801A34AC
    li r3, 0x1
    blr
lbl_801A34AC:
    cmpwi r7, 0x0
    bne lbl_801A3428
    li r3, 0x0
    blr
}
