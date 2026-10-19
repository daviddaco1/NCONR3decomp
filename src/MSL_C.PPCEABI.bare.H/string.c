#include <types.h>


#define K1 0x80808080
#define K2 0xFEFEFEFF


//thanks metrowerks very cool
char* strcpy(char* dst, const char* src)
{
    register u8 *destb, *fromb;
    register u32 w, t, align;

    fromb = (u8*)src;
    destb = (u8*)dst;

    if ((align = ((int)fromb & 3)) != ((int)destb & 3)) {
        goto bytecopy;
    }

    if (align) {
        if ((*destb = *fromb) == 0)
            return (dst);
        for (align = 3 - align; align; align--) {
            if ((*(++destb) = *(++fromb)) == 0)
                return (dst);
        }
        ++destb;
        ++fromb;
    }

    w = *((int*)(fromb));

    t = w + K2;
    t &= ~w;
    t &= K1;
    if (t)
        goto bytecopy;
    --((int*)(destb));

    do {
        *(++((int*)(destb))) = w;
        w = *(++((int*)(fromb)));

        t = w + K2;
        t &= ~w;
        t &= K1;
        if (t)
            goto adjust;
    } while (1);

adjust:
    ++((int*)(destb));
bytecopy:
    if ((*destb = *fromb) == 0)
        return dst;
    do {
        if ((*(++destb) = *(++fromb)) == 0)
            return dst;
    } while (1);

    return dst;
}

char* strncpy(char* dst, const char* src, size_t n)
{
    const unsigned char* p = (const unsigned char*)src - 1;
    unsigned char* q = (unsigned char*)dst - 1;
    unsigned char zero = 0;

    n++;

    while (--n)
        if (!(*++q = *++p)) {
            while (--n)
                *++q = 0;
            break;
        }
    return (dst);
}

char* strcat(char* dst, const char* src)
{
    const u8* p = (u8*)src - 1;
    u8* q = (u8*)dst - 1;

    while (*++q)
        ;

    q--;

    while (*++q = *++p)
        ;

    return (dst);
}



char* strncat(char* dst, const char* src, size_t n)
{
    const u8* p = (u8*)src - 1;
    u8* q = (u8*)dst - 1;
            
    while (*++q);
            
    q--; n++;
            
    while (--n)
        if (!(*++q = *++p))
        {
            q--;
            break;
        }
            
    *++q = 0;
        
    return dst;
}



int strcmp(const char* str1, const char* str2)
{
    // bless metrowerks for this implementation
    register u8* left = (u8*)str1;
    register u8* right = (u8*)str2;
    u32 align, l1, r1, x;

    l1 = *left;
    r1 = *right;
    if (l1 - r1) {
        return (l1 - r1);
    }

    if ((align = ((int)left & 3)) != ((int)right & 3)) {
        goto bytecopy;
    }
    if (align) {
        if (l1 == 0) {
            return 0;
        }
        for (align = 3 - align; align; align--) {
            l1 = *(++left);
            r1 = *(++right);
            if (l1 - r1) {
                return (l1 - r1);
            }
            if (l1 == 0) {
                return 0;
            }
        }
        left++;
        right++;
    }

    l1 = *(int*)left;
    r1 = *(int*)right;
    x = l1 + K2;
    x &= ~l1;
    if (x & K1) {
        goto adjust;
    }
    while (l1 == r1) {
        l1 = *(++((int*)(left)));
        r1 = *(++((int*)(right)));
        x = l1 + K2;
        if (x & K1) {
            goto adjust;
        }
    }

adjust:
    l1 = *left;
    r1 = *right;
    if (l1 - r1) {
        return (l1 - r1);
    }
bytecopy:
    if (l1 == 0) {
        return 0;
    }
    do {
        l1 = *(++left);
        r1 = *(++right);
        if (l1 - r1) {
            return (l1 - r1);
        }
        if (l1 == 0) {
            return 0;
        }
    } while (1);
}

int strncmp(const char* str1, const char* str2, size_t n)
{
    const u8* p1 = (u8*)str1 - 1;
    const u8* p2 = (u8*)str2 - 1;
    u32 c1, c2;

    n++;

    while (--n)
        if ((c1 = *++p1) != (c2 = *++p2))
            return (c1 - c2);
        else if (!c1)
            break;
    return 0;
}

char* strchr(const char* str, int chr)
{
    const u8* p = (u8*)str - 1;
    u32 c = (chr & 0xFF);
    u32 ch;

    while (ch = *++p)
        if (ch == c)
            return ((char*)p);

    return (c ? 0 : (char*)p);
}

//unused
void strcoll(){
}

//unused
void strxfrm(){
}

//unused
void strrchr(){
}

//unused
void strpbrk(){
}

//unused
void strspn(){
}

//unused
void strcspn(){
}

//unused
void strtok(){
}

//unused
void strtok_s(){
}

char* strstr(const char* str, const char* pat)
{
    u8* s1 = (u8*)str-1;
    u8* p1 = (u8*)pat-1;
    u32 firstc, c1, c2;
        
    if (pat == NULL || !(firstc = *++p1)) return (char*)str;

    while ((c1 = *++s1)) {
        if (c1 == firstc) {
            const u8* s2 = s1-1;
            const u8* p2 = p1-1;
                
            while ((c1 = *(++s2)) == (c2 = *(++p2)) && c1);
                
            if (!c2) return (char*)s1;
        }
    }
        
    return NULL;
}

//unused
void strnlen_s(){
}

//unused
void strcpy_s(){
}

//unused
void strncpy_s(){
}

//unused
void strcat_s(){
}

//unused
void strncat_s(){
}

//unused
void strerror(){
}

//unused
void strerror_s(){
}

//unused
void __strerror(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049C410;
extern float lbl_8049C414;
extern void fn_8019CE08();
extern void fn_8019CEAC();

// asm_to_cpp: fn_8019CE08
asm void fn_8019CE08() {
    nofralloc
    stwu r1, -0x30(r1)
    li r0, 0x0
    subi r8, r4, 0x1
    li r4, 0x1
    stw r0, 0x8(r1)
    addi r6, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    b lbl_8019CE5C
lbl_8019CE40:
    extrwi r7, r0, 5, 24
    clrlwi r0, r0, 29
    slw r0, r4, r0
    lbzx r5, r6, r7
    clrlwi r0, r0, 24
    or r0, r5, r0
    stbx r0, r6, r7
lbl_8019CE5C:
    lbzu r0, 0x1(r8)
    cmpwi r0, 0x0
    bne lbl_8019CE40
    subi r7, r3, 0x1
    addi r6, r1, 0x8
    li r4, 0x1
    b lbl_8019CE94
lbl_8019CE78:
    extrwi r5, r0, 5, 24
    clrlwi r0, r0, 29
    slw r0, r4, r0
    lbzx r5, r6, r5
    clrlwi r0, r0, 24
    and. r0, r5, r0
    bne lbl_8019CEA0
lbl_8019CE94:
    lbzu r0, 0x1(r7)
    cmpwi r0, 0x0
    bne lbl_8019CE78
lbl_8019CEA0:
    subf r3, r3, r7
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: fn_8019CEAC
asm void fn_8019CEAC() {
    nofralloc
    stwu r1, -0x30(r1)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    beq lbl_8019CEE0
    stw r3, lbl_8049C414
lbl_8019CEE0:
    subi r7, r4, 0x1
    addi r5, r1, 0x8
    li r3, 0x1
    b lbl_8019CF0C
lbl_8019CEF0:
    extrwi r6, r0, 5, 24
    clrlwi r0, r0, 29
    slw r0, r3, r0
    lbzx r4, r5, r6
    clrlwi r0, r0, 24
    or r0, r4, r0
    stbx r0, r5, r6
lbl_8019CF0C:
    lbzu r0, 0x1(r7)
    cmpwi r0, 0x0
    bne lbl_8019CEF0
    lwz r4, lbl_8049C414
    addi r5, r1, 0x8
    li r3, 0x1
    subi r7, r4, 0x1
    b lbl_8019CF48
lbl_8019CF2C:
    extrwi r4, r6, 5, 24
    clrlwi r0, r6, 29
    slw r0, r3, r0
    lbzx r4, r5, r4
    clrlwi r0, r0, 24
    and. r0, r4, r0
    beq lbl_8019CF54
lbl_8019CF48:
    lbzu r6, 0x1(r7)
    cmpwi r6, 0x0
    bne lbl_8019CF2C
lbl_8019CF54:
    cmpwi r6, 0x0
    bne lbl_8019CF6C
    lwz r0, lbl_8049C410
    li r3, 0x0
    stw r0, lbl_8049C414
    b lbl_8019CFC8
lbl_8019CF6C:
    mr r3, r7
    addi r6, r1, 0x8
    li r4, 0x1
    b lbl_8019CF98
lbl_8019CF7C:
    extrwi r5, r8, 5, 24
    clrlwi r0, r8, 29
    slw r0, r4, r0
    lbzx r5, r6, r5
    clrlwi r0, r0, 24
    and. r0, r5, r0
    bne lbl_8019CFA4
lbl_8019CF98:
    lbzu r8, 0x1(r7)
    cmpwi r8, 0x0
    bne lbl_8019CF7C
lbl_8019CFA4:
    cmpwi r8, 0x0
    bne lbl_8019CFB8
    lwz r0, lbl_8049C410
    stw r0, lbl_8049C414
    b lbl_8019CFC8
lbl_8019CFB8:
    addi r4, r7, 0x1
    li r0, 0x0
    stw r4, lbl_8049C414
    stb r0, 0x0(r7)
lbl_8019CFC8:
    addi r1, r1, 0x30
    blr
}
