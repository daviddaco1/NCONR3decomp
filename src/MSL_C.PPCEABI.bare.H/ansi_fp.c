#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_fp.h"
#include <float.h>

typedef unsigned long long d_int;

static inline int __count_trailing_zerol(u32 x){
    return 32 - __cntlzw(~x & (x - 1));
}

static int __count_trailing_zero(double n){
    u32* array = (u32*)&n;

    u32 hi = array[0] | 0x100000;
    u32 lo = array[1];
    int zeros = __count_trailing_zerol(lo);
    
    if (lo == 0) {
        return 32 + __count_trailing_zerol(hi);
    }
    return zeros;
}

static int __must_round(const decimal* d, int digits){
    u8 const* i = d->sig.text + digits;
            
    if (*i > 5) {
        return 1;
    }
    
    if (*i < 5) {
        return -1;
    }

    {
        u8 const* e = d->sig.text + d->sig.length;

        for(i++; i < e; i++){
            if (*i != 0) {
                return 1;
            }
        }
    }
                  
    if (d->sig.text[digits - 1] & 1) {
        return 1;
    }

    return -1;
}

static void __dorounddecup(decimal* d, int digits){
    u8* b = d->sig.text;
    u8* i = b + digits - 1;
                
    while(1){
        if (*i < 9) {
            *i += 1;
            break;
        }
        if (i == b) {
            *i = 1;
            d->exp++;
            break;
        }
        *i-- = 0;
    }
}

static void __rounddec(decimal* d, int digits){
    if (digits > 0 && digits < d->sig.length) {
        int unkBool = __must_round(d,digits);
        d->sig.length = digits;
            
        if (unkBool >= 0) {
            __dorounddecup(d, digits);
        }
    }
}

void __ull2dec(decimal* result, u64 val) {
    result->sign = 0;
    result->sig.length = 0;

    for(; val != 0; val /= 10) {
        result->sig.text[result->sig.length++] = (u8)(val % 10);
    }
    
    {
        u8* i = result->sig.text;
        u8* j = result->sig.text + result->sig.length;

        for (; i < --j; ++i) {
            u8 t = *i;
            *i = *j;
            *j = t;
        }
    }
    
    result->exp = result->sig.length - 1;
}

void __timesdec(decimal* result, const decimal* x, const decimal* y) {
    u32 accumulator = 0;
    u8 mantissa[SIGDIGLEN * 2];
    int i = x->sig.length + y->sig.length - 1;
    u8* pDigit;
    u8* ip = mantissa + i + 1;
    u8* ep = ip;

    result->sign = 0;
    
    for(; i > 0; i--) {
        int k = y->sig.length - 1;
        int j = i - k - 1;
        int l;
        int t;
        const u8* jp;
        const u8* kp;
        
        if (j < 0) {
            j = 0;
            k = i - 1;
        }
        
        jp = x->sig.text + j;
        kp = y->sig.text + k;
        l = k + 1;
        t = x->sig.length - j;
        
        if (l > t) l = t;
        
        for (; l > 0; l--, jp++, kp--) {
            accumulator += *jp * *kp;
        }
        
        *--ip = (u8)(accumulator % 10);
        accumulator /= 10;
    }
    
    result->exp = (short)(x->exp + y->exp);
    
    if (accumulator) {
        *--ip = (u8)(accumulator);
        result->exp++;
    }

    for (i = 0; i < SIGDIGLEN && ip < ep; i++, ip++) {
        result->sig.text[i] = *ip;
    }
    result->sig.length = (u8)(i);
    
    if (ip < ep && *ip >= 5){
        if (*ip == 5){
            u8* jp = ip + 1;
            for (; jp < ep; jp++) {
                if (*jp != 0) goto round;
            }
            if ((ip[-1] & 1) == 0) return;
        }
    round:
        __dorounddecup(result, result->sig.length);
    }
}



void __str2dec(decimal* d, const char* s, short exp) {
    int i;

    d->exp = exp;
    d->sign = 0;

    for (i = 0; i < SIGDIGLEN && *s; ) {
        d->sig.text[i++] = *s++ - '0';
    }
    d->sig.length = i;
    
    if (*s != 0){
        if (*s < 5) return;
        if (*s > 5) goto round;
        
        {
            const char* p = s + 1;

            for (; *p != 0; p++) {
                if (*p != '0') goto round;
            }

            if ((d->sig.text[i - 1] & 1) == 0) return;
        }
    round:
        __dorounddecup(d, d->sig.length);
    }
}


void __two_exp(decimal* result, long exp) {
    switch(exp){
        case -64:
            __str2dec(result,"542101086242752217003726400434970855712890625",-20);
            return;
        case -53:
             __str2dec(result,"11102230246251565404236316680908203125",-16);
             return;
        case -32:
            __str2dec(result,"23283064365386962890625",-10);
            return;
        case -16:
            __str2dec(result,"152587890625",-5);
            return;
        case -8:
            __str2dec(result,"390625",-3);
            return;
        case -7:
            __str2dec(result,"78125",-3);
            return;
        case -6:
            __str2dec(result,"15625",-2);
            return;
        case -5:
            __str2dec(result,"3125",-2);
            return;
        case -4:
            __str2dec(result,"625",-2);
            return;
        case -3:
            __str2dec(result,"125",-1);
            return;
        case -2:
            __str2dec(result,"25",-1);
            return;
        case -1:
            __str2dec(result,"5",-1);
            return;
        case 0:
            __str2dec(result,"1",0);
            return;
        case 1:
            __str2dec(result,"2",0);
            return;
        case 2:
            __str2dec(result,"4",0);
            return;
        case 3:
            __str2dec(result,"8",0);
            return;
        case 4:
            __str2dec(result,"16",1);
            return;
        case 5:
            __str2dec(result,"32",1);
            return;
        case 6:
            __str2dec(result,"64",1);
            return;
        case 7:
            __str2dec(result,"128",2);
            return;
        case 8:
            __str2dec(result,"256",2);
            return;
    }
    
    {
        decimal x2, temp;

        __two_exp(&x2,exp/2);
        __timesdec(result,&x2,&x2);
            
        if(exp & 1){
            temp = *result;
            if(exp > 0){
                __str2dec(&x2,"2",0);
            }else{
                __str2dec(&x2,"5",-1);
            }
            __timesdec(result,&temp,&x2);
        }
    }
}

BOOL __equals_dec(const decimal* x, const decimal* y) {
    if (x->sig.text[0] == 0) {
        return y->sig.text[0] == 0;
    }
    
    if (y->sig.text[0] == 0) {
        return x->sig.text[0] == 0;
    }
    
    if (x->exp == y->exp) {
        int i;
        int l = x->sig.length;
        
        if (l > y->sig.length) {
            l = y->sig.length;
        }
        
        for(i = 0; i < l; i++){
            if (x->sig.text[i] != y->sig.text[i]) {
                return FALSE;
            }
        }

        if (l == x->sig.length) {
            x = y;
        }
        
        for(; i < x->sig.length; i++){
            if (x->sig.text[i] != 0) {
                return FALSE;
            }
        }

        return TRUE;
    }
    return FALSE;
}


BOOL __less_dec(const decimal* x, const decimal* y) {
    if (x->sig.text[0] == 0) {
        u8 temp_r3 = y->sig.text[0];
        return ((u32) (-temp_r3 | temp_r3) >> 31);
    }
    
    if (y->sig.text[0] == 0) {
        return FALSE;
    }

    if (x->exp == y->exp) {
        int i;
        int l = x->sig.length;
        
        if (l > y->sig.length) {
            l = y->sig.length;
        }

        for(i = 0; i < l; i++){
            if (x->sig.text[i] < y->sig.text[i]) {
                return TRUE;
            }else if (y->sig.text[i] < x->sig.text[i]) {
                return FALSE;
            }
        }

        if (l == x->sig.length) {
            for(; i < y->sig.length; i++){
                if (y->sig.text[i] != 0) {
                    return TRUE;
                }
            }
        }
        return FALSE;
    }

    return x->exp < y->exp;
}

void __minus_dec(decimal *z, const decimal *x, const decimal *y)
{
    int zlen, dexp;
    u8 *ib, *i, *ie;
    u8 const *jb, *j, *jn;
    
    *z = *x;

    if (y->sig.text[0] == 0) return;
    
    zlen = z->sig.length;
    if (zlen < y->sig.length) zlen = y->sig.length;
    
    dexp = z->exp - y->exp;
    zlen += dexp;
    
    if (zlen > SIGDIGLEN) zlen = SIGDIGLEN;
    
    while (z->sig.length < zlen){
        z->sig.text[z->sig.length++] = 0;
    }
    
    ib = z->sig.text;
    i = ib + zlen;
    
    if (y->sig.length + dexp < zlen){
        i = ib + (y->sig.length + dexp);
    }
    
    jb = y->sig.text;
    j = jb + (i - ib - dexp);
    jn = j;
    
    while (i > ib && j > jb){
        i--;
        j--;
        if (*i < *j){
            u8 *k = i - 1;
            while (*k == 0) k--;
            while (k != i){
                --*k;
                *++k += 10;
            }
        }
        *i -= *j;
    }

    if (jn - jb < y->sig.length){
        BOOL round_down = FALSE;
        if (*jn < 5) round_down = TRUE;
        else if (*jn == 5) {
            u8 const *ibPtr = y->sig.text + y->sig.length;
            
            for (j = jn + 1; j < ibPtr; j++){
                if (*j != 0) goto done;
            }
            i = ib + (jn - jb) + dexp - 1;
            if (*i & 1) round_down = 1;
        }
        if (round_down){
            if (*i < 1){
                u8 *k = i - 1;
                while (*k == 0) k--;
                while (k != i)
                {
                    --*k;
                    *++k += 10;
                }
            }
            *i -= 1;
        }
    }
done:
    for (i = ib; *i == 0; ++i){}
    
    if (i > ib){
        u8 dl = (u8)(i - ib);
        z->exp -= dl;
        ie = ib + z->sig.length;
        for (; i < ie; ++i, ++ib)
            *ib = *i;
        z->sig.length -= dl;
    }

    ib = z->sig.text;
    for (i = ib + z->sig.length; i > ib;){
        i--;
        if (*i != 0) break;
    }
    z->sig.length = (u8)(i - ib + 1);
}

void __num2dec_internal(decimal* d, double x) {
    s8 sign = (s8)(signbit(x) != 0);
    
    
    if (x == 0) {
        d->sign = sign;
        d->exp = 0;
        d->sig.length = 1;
        d->sig.text[0] = 0;
        return;
    }
    
    if (!isfinite(x)) {
        d->sign = sign;
        d->exp = 0;
        d->sig.length = 1;
        d->sig.text[0] = fpclassify(x) == 1 ? 'N' : 'I';
        return;
    }
    
    if (sign != 0) {
        x = -x;
    }

    {
        int exp;
        double frac = frexp(x, &exp);
        int num_bits_extract = DBL_MANT_DIG - __count_trailing_zero(frac);
        decimal int_d, pow2_d;

        __two_exp(&pow2_d, exp - num_bits_extract);
        __ull2dec(&int_d, ldexp(frac, num_bits_extract));
        __timesdec(d, &int_d, &pow2_d);
        d->sign = sign;
    }
}

void __num2dec(const decform* form, double x, decimal* d) {
    short digits = form->digits;
    int i;
    __num2dec_internal(d, x);
    
    if (d->sig.text[0] > 9) {
        return;
    }
        
    if (digits > SIGDIGLEN) {
        digits = SIGDIGLEN;
    }
    
    __rounddec(d, digits);

    while(d->sig.length < digits){
        d->sig.text[d->sig.length++] = 0;
    }
    
    d->exp -= d->sig.length - 1;

    for(i = 0; i < d->sig.length; i++) {
        d->sig.text[i] += '0';
    }
}

double __dec2num(const decimal *d)
{
    if (d->sig.length <= 0){
        return copysign(0.0, d->sign == 0 ? 1.0 : -1.0);
    }

    switch (d->sig.text[0]){
    case '0':
        return copysign(0.0, d->sign == 0 ? 1.0 : -1.0);
    case 'I':
        return copysign((double)INFINITY, d->sign == 0 ? 1.0 : -1.0);
    case 'N':
        {
            double result;
            d_int* ll = (d_int*)&result;

            *ll = 0x7FF0000000000000;
            if (d->sign)
                *ll |= 0x8000000000000000;
            *ll |= 0x8000000000000;

            return result;
        }
    }
    
    {
        static double pow_10[8] = {1e1, 1e2, 1e3, 1e4, 1e5, 1e6, 1e7, 1e8};

        decimal dec = *d;
        u8 *i = dec.sig.text;
        u8 *e = i + dec.sig.length;
        double first_guess;
        int exponent;

        for (; i < e; ++i)
            *i -= '0';
        dec.exp += dec.sig.length - 1;
        exponent = dec.exp;

        {
            decimal max;

            __str2dec(&max, "179769313486231580793728714053034151", 308);
            if (__less_dec(&max, &dec)){
                return copysign((double)INFINITY, d->sign == 0 ? 1.0 : -1.0);
            }
        }

        i = dec.sig.text;
        first_guess = *i++;

        while (i < e){
            u32 ival = 0;
            int j;
            double temp1, temp2;
            int ndig = (int)(e - i) % 8;

            if (ndig == 0) ndig = 8;

            for (j = 0; j < ndig; ++j, ++i){
                ival = ival * 10 + *i;
            }

            temp1 = first_guess * pow_10[ndig - 1];
            temp2 = temp1 + ival;

            if (ival != 0 && temp1 == temp2) break;

            first_guess = temp2;
            exponent -= ndig;
        }

        if(exponent < 0){
            first_guess /= pow(5.0, -exponent);
        }else{
            first_guess *= pow(5.0, exponent);
        }

        first_guess = ldexp(first_guess, exponent);

        if (fpclassify(first_guess) == 2){
            first_guess = DBL_MAX;
        }
    
        {
            decimal feedback1, feedback2, difflow, diffhigh;
            double next_guess;
            d_int* ull = (d_int*)&next_guess;
            int guessed_low = 0;

            __num2dec_internal(&feedback1, first_guess);

            if (__equals_dec(&feedback1, &dec)){
                goto done;
            }
            if (__less_dec(&feedback1, &dec)){
                guessed_low = 1;
            }

            next_guess = first_guess;

            while (1){
                if (guessed_low){
                    ++*ull;
                    if (fpclassify(next_guess) == 2){
                        goto done;
                    }
                } else {
                    --*ull;
                }

                __num2dec_internal(&feedback2, next_guess);
                if (guessed_low && !__less_dec(&feedback2, &dec)){
                    break;
                }
                else if (!guessed_low && !__less_dec(&dec, &feedback2)){
                    difflow = feedback1;
                    feedback1 = feedback2;
                    feedback2 = difflow;
                    {
                        double temp = first_guess;
                        first_guess = next_guess;
                        next_guess = temp;
                    }
                    break;
                }
                feedback1 = feedback2;
                first_guess = next_guess;
            }

            __minus_dec(&difflow, &dec, &feedback1);
            __minus_dec(&diffhigh, &feedback2, &dec);

            if (__equals_dec(&difflow, &diffhigh)){
                if (*(u64*)&first_guess & 1){
                    first_guess = next_guess;
                }
            } else if (!__less_dec(&difflow, &diffhigh)){
                first_guess = next_guess;
            }
        }
    done:
        if (dec.sign){
            first_guess = -first_guess;
        }
        return first_guess;
    }
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_804A1158;
extern float lbl_804A1160;
extern float lbl_804A1168;
extern float lbl_804A1170;
extern float lbl_804A1178;
extern float lbl_804A1180;
extern float lbl_804A1188;
extern u8 lbl_8033B3B8[];
extern u8 lbl_8035F9E8[];
extern u8 lbl_8049C41C[];
extern void _restgpr_21();
extern void _savegpr_21();
extern void fn_80195C2C();
extern void fn_801972E0();
extern void fn_80197480();
extern void log10();

// asm_to_cpp: fn_801972E0
asm void fn_801972E0() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lha r31, 0x2(r3)
    stw r30, 0x8(r1)
    mr r30, r4
    mr r3, r30
    bl __num2dec_internal
    lbz r0, 0x5(r30)
    cmplwi r0, 0x9
    bgt lbl_80197468
    cmpwi r31, 0x24
    ble lbl_8019731C
    li r31, 0x24
lbl_8019731C:
    cmpwi r31, 0x0
    ble lbl_80197408
    lbz r0, 0x4(r30)
    cmpw r31, r0
    bge lbl_80197408
    addi r4, r30, 0x5
    lbzx r0, r4, r31
    add r3, r4, r31
    cmplwi r0, 0x5
    ble lbl_8019734C
    li r4, 0x1
    b lbl_801973A8
lbl_8019734C:
    bge lbl_80197358
    li r4, -0x1
    b lbl_801973A8
lbl_80197358:
    lbz r0, 0x4(r30)
    addi r3, r3, 0x1
    add r4, r4, r0
    subf r0, r3, r4
    mtctr r0
    cmplw r3, r4
    bge lbl_80197390
lbl_80197374:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_80197388
    li r4, 0x1
    b lbl_801973A8
lbl_80197388:
    addi r3, r3, 0x1
    bdnz lbl_80197374
lbl_80197390:
    add r3, r31, r30
    li r4, -0x1
    lbz r0, 0x4(r3)
    clrlwi. r0, r0, 31
    beq lbl_801973A8
    li r4, 0x1
lbl_801973A8:
    cmpwi r4, 0x0
    stb r31, 0x4(r30)
    blt lbl_80197408
    addi r4, r30, 0x5
    li r0, 0x0
    add r5, r4, r31
    subi r5, r5, 0x1
lbl_801973C4:
    lbz r3, 0x0(r5)
    cmplwi r3, 0x9
    bge lbl_801973DC
    addi r0, r3, 0x1
    stb r0, 0x0(r5)
    b lbl_80197408
lbl_801973DC:
    cmplw r5, r4
    bne lbl_801973FC
    li r0, 0x1
    stb r0, 0x0(r5)
    lha r3, 0x2(r30)
    addi r0, r3, 0x1
    sth r0, 0x2(r30)
    b lbl_80197408
lbl_801973FC:
    stb r0, 0x0(r5)
    subi r5, r5, 0x1
    b lbl_801973C4
lbl_80197408:
    li r5, 0x0
    b lbl_80197424
lbl_80197410:
    lbz r4, 0x4(r30)
    add r3, r30, r4
    addi r0, r4, 0x1
    stb r5, 0x5(r3)
    stb r0, 0x4(r30)
lbl_80197424:
    lbz r3, 0x4(r30)
    cmpw r3, r31
    blt lbl_80197410
    lha r0, 0x2(r30)
    subi r3, r3, 0x1
    li r5, 0x0
    subf r0, r3, r0
    sth r0, 0x2(r30)
    b lbl_8019745C
lbl_80197448:
    add r4, r30, r5
    addi r5, r5, 0x1
    lbz r3, 0x5(r4)
    addi r0, r3, 0x30
    stb r0, 0x5(r4)
lbl_8019745C:
    lbz r0, 0x4(r30)
    cmpw r5, r0
    blt lbl_80197448
lbl_80197468:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

// asm_to_cpp: fn_80197480
asm void fn_80197480() {
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x170
    stfd f31, 0x170(r1)
    opword 0xF3E10178
    bl _savegpr_21
    lbz r0, 0x4(r3)
    lis r4, 0x4330
    stw r4, 0x128(r1)
    mr r27, r3
    cmpwi r0, 0x0
    stw r4, 0x130(r1)
    bne lbl_801974DC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_801974CC
    lfd f2, lbl_804A1160
    b lbl_801974D0
lbl_801974CC:
    lfd f2, lbl_804A1168
lbl_801974D0:
    lfd f1, lbl_804A1158
    bl copysign
    b lbl_80197BA8
lbl_801974DC:
    lbz r0, 0x5(r3)
    cmpwi r0, 0x30
    beq lbl_801974FC
    cmpwi r0, 0x49
    beq lbl_80197520
    cmpwi r0, 0x4e
    beq lbl_80197548
    b lbl_80197588
lbl_801974FC:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_80197510
    lfd f2, lbl_804A1160
    b lbl_80197514
lbl_80197510:
    lfd f2, lbl_804A1168
lbl_80197514:
    lfd f1, lbl_804A1158
    bl copysign
    b lbl_80197BA8
lbl_80197520:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_80197534
    lfd f2, lbl_804A1160
    b lbl_80197538
lbl_80197534:
    lfd f2, lbl_804A1168
lbl_80197538:
    lis r3, lbl_8049C41C@ha
    lfs f1, lbl_8049C41C@l(r3)
    bl copysign
    b lbl_80197BA8
lbl_80197548:
    lbz r0, 0x0(r3)
    li r4, 0x0
    lis r3, 0x7ff0
    stw r4, 0x1c(r1)
    extsb. r0, r0
    stw r3, 0x18(r1)
    beq lbl_80197574
    lis r0, 0x8000
    stw r4, 0x1c(r1)
    oris r0, r0, 0x7ff0
    stw r0, 0x18(r1)
lbl_80197574:
    lwz r0, 0x18(r1)
    oris r0, r0, 0x8
    stw r0, 0x18(r1)
    lfd f1, 0x18(r1)
    b lbl_80197BA8
lbl_80197588:
    lwz r0, 0x4(r3)
    addi r4, r1, 0x101
    stw r0, 0x100(r1)
    lwz r21, 0x0(r3)
    lbz r0, 0x100(r1)
    lwz r12, 0x8(r3)
    add r28, r4, r0
    lwz r11, 0xc(r3)
    lwz r10, 0x10(r3)
    cmplw cr1, r4, r28
    lwz r9, 0x14(r3)
    lwz r8, 0x18(r3)
    lwz r7, 0x1c(r3)
    lwz r6, 0x20(r3)
    lwz r5, 0x24(r3)
    lhz r0, 0x28(r3)
    stw r21, 0xfc(r1)
    stw r12, 0x104(r1)
    stw r11, 0x108(r1)
    stw r10, 0x10c(r1)
    stw r9, 0x110(r1)
    stw r8, 0x114(r1)
    stw r7, 0x118(r1)
    stw r6, 0x11c(r1)
    stw r5, 0x120(r1)
    sth r0, 0x124(r1)
    bge cr1, lbl_801976AC
    subf r0, r4, r28
    subi r3, r28, 0x8
    cmpwi r0, 0x8
    ble lbl_80197688
    bgt cr1, lbl_80197688
    addi r0, r3, 0x7
    subf r0, r4, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r4, r3
    bge lbl_80197688
lbl_80197620:
    lbz r3, 0x0(r4)
    subi r0, r3, 0x30
    stb r0, 0x0(r4)
    lbz r3, 0x1(r4)
    subi r0, r3, 0x30
    stb r0, 0x1(r4)
    lbz r3, 0x2(r4)
    subi r0, r3, 0x30
    stb r0, 0x2(r4)
    lbz r3, 0x3(r4)
    subi r0, r3, 0x30
    stb r0, 0x3(r4)
    lbz r3, 0x4(r4)
    subi r0, r3, 0x30
    stb r0, 0x4(r4)
    lbz r3, 0x5(r4)
    subi r0, r3, 0x30
    stb r0, 0x5(r4)
    lbz r3, 0x6(r4)
    subi r0, r3, 0x30
    stb r0, 0x6(r4)
    lbz r3, 0x7(r4)
    subi r0, r3, 0x30
    stb r0, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_80197620
lbl_80197688:
    subf r0, r4, r28
    mtctr r0
    cmplw r4, r28
    bge lbl_801976AC
lbl_80197698:
    lbz r3, 0x0(r4)
    subi r0, r3, 0x30
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_80197698
lbl_801976AC:
    lha r6, 0xfe(r1)
    lis r4, lbl_8033B3B8@ha
    lbz r0, 0x100(r1)
    addi r4, r4, lbl_8033B3B8@l
    addi r3, r1, 0xd0
    li r5, 0x134
    add r6, r0, r6
    addi r4, r4, 0xb8
    subi r0, r6, 0x1
    sth r0, 0xfe(r1)
    extsh r29, r0
    bl __str2dec
    addi r3, r1, 0xd0
    addi r4, r1, 0xfc
    bl __less_dec
    cmpwi r3, 0x0
    beq lbl_80197718
    lbz r0, 0x0(r27)
    extsb. r0, r0
    bne lbl_80197704
    lfd f2, lbl_804A1160
    b lbl_80197708
lbl_80197704:
    lfd f2, lbl_804A1168
lbl_80197708:
    lis r3, lbl_8049C41C@ha
    lfs f1, lbl_8049C41C@l(r3)
    bl copysign
    b lbl_80197BA8
lbl_80197718:
    lbz r0, 0x101(r1)
    lis r7, lbl_8035F9E8@ha
    stw r0, 0x12c(r1)
    addi r4, r1, 0x102
    lfd f2, lbl_804A1180
    addi r7, r7, lbl_8035F9E8@l
    lfd f0, 0x128(r1)
    lis r3, 0x8000
    fsub f31, f0, f2
    b lbl_8019787C
lbl_80197740:
    subf r5, r4, r28
    li r10, 0x0
    slwi r0, r5, 29
    srwi r5, r5, 31
    subf r0, r5, r0
    rotlwi r0, r0, 3
    add. r6, r0, r5
    bne lbl_80197764
    li r6, 0x8
lbl_80197764:
    cmpwi cr1, r6, 0x0
    li r5, 0x0
    ble cr1, lbl_80197844
    cmpwi r6, 0x8
    subi r8, r6, 0x8
    ble lbl_8019781C
    li r9, 0x0
    blt cr1, lbl_80197794
    subi r0, r3, 0x2
    cmpw r6, r0
    bgt lbl_80197794
    li r9, 0x1
lbl_80197794:
    cmpwi r9, 0x0
    beq lbl_8019781C
    addi r0, r8, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r8, 0x0
    ble lbl_8019781C
lbl_801977B0:
    mulli r0, r10, 0xa
    lbz r9, 0x0(r4)
    lbz r8, 0x1(r4)
    addi r5, r5, 0x8
    lbz r21, 0x2(r4)
    add r0, r9, r0
    mulli r0, r0, 0xa
    lbz r12, 0x3(r4)
    lbz r11, 0x4(r4)
    lbz r10, 0x5(r4)
    add r0, r8, r0
    lbz r9, 0x6(r4)
    mulli r0, r0, 0xa
    lbz r8, 0x7(r4)
    addi r4, r4, 0x8
    add r0, r21, r0
    mulli r0, r0, 0xa
    add r0, r12, r0
    mulli r0, r0, 0xa
    add r0, r11, r0
    mulli r0, r0, 0xa
    add r0, r10, r0
    mulli r0, r0, 0xa
    add r0, r9, r0
    mulli r0, r0, 0xa
    add r10, r8, r0
    bdnz lbl_801977B0
lbl_8019781C:
    subf r0, r5, r6
    mtctr r0
    cmpw r5, r6
    bge lbl_80197844
lbl_8019782C:
    mulli r0, r10, 0xa
    lbz r8, 0x0(r4)
    addi r5, r5, 0x1
    addi r4, r4, 0x1
    add r10, r8, r0
    bdnz lbl_8019782C
lbl_80197844:
    slwi r0, r6, 3
    stw r10, 0x134(r1)
    add r5, r7, r0
    cmpwi r10, 0x0
    lfd f1, -0x8(r5)
    lfd f0, 0x130(r1)
    fmul f1, f31, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    beq lbl_80197874
    fcmpu cr0, f1, f0
    beq lbl_80197884
lbl_80197874:
    fmr f31, f0
    subf r29, r6, r29
lbl_8019787C:
    cmplw r4, r28
    blt lbl_80197740
lbl_80197884:
    cmpwi r29, 0x0
    bge lbl_801978B4
    neg r0, r29
    lfd f2, lbl_804A1188
    xoris r0, r0, 0x8000
    stw r0, 0x12c(r1)
    lfd f1, lbl_804A1170
    lfd f0, 0x128(r1)
    fsub f2, f0, f2
    bl log10
    fdiv f31, f31, f1
    b lbl_801978D4
lbl_801978B4:
    xoris r0, r29, 0x8000
    stw r0, 0x134(r1)
    lfd f2, lbl_804A1188
    lfd f0, 0x130(r1)
    lfd f1, lbl_804A1170
    fsub f2, f0, f2
    bl log10
    fmul f31, f31, f1
lbl_801978D4:
    fmr f1, f31
    mr r3, r29
    bl ldexp
    fmr f31, f1
    stfd f1, 0x10(r1)
    bl fn_80195C2C
    cmpwi r3, 0x2
    bne lbl_801978FC
    lfd f31, lbl_804A1178
    stfd f31, 0x10(r1)
lbl_801978FC:
    fmr f1, f31
    addi r3, r1, 0xa4
    li r27, 0x0
    bl __num2dec_internal
    addi r3, r1, 0xa4
    addi r4, r1, 0xfc
    bl __equals_dec
    cmpwi r3, 0x0
    bne lbl_80197B94
    addi r3, r1, 0xa4
    addi r4, r1, 0xfc
    bl __less_dec
    cmpwi r3, 0x0
    beq lbl_80197938
    li r27, 0x1
lbl_80197938:
    cntlzw r0, r27
    stfd f31, 0x8(r1)
    srwi r28, r0, 5
    li r29, 0x1
    li r30, 0x0
    li r31, -0x1
lbl_80197950:
    cmpwi r28, 0x0
    bne lbl_80197984
    lwz r0, 0xc(r1)
    lwz r3, 0x8(r1)
    addc r0, r0, r29
    stw r0, 0xc(r1)
    adde r0, r3, r30
    stw r0, 0x8(r1)
    lfd f1, 0x8(r1)
    bl fn_80195C2C
    cmpwi r3, 0x2
    beq lbl_80197B94
    b lbl_8019799C
lbl_80197984:
    lwz r0, 0xc(r1)
    lwz r3, 0x8(r1)
    addc r0, r0, r31
    stw r0, 0xc(r1)
    adde r0, r3, r31
    stw r0, 0x8(r1)
lbl_8019799C:
    lfd f1, 0x8(r1)
    addi r3, r1, 0x78
    bl __num2dec_internal
    cmpwi r27, 0x0
    beq lbl_801979C4
    addi r3, r1, 0x78
    addi r4, r1, 0xfc
    bl __less_dec
    cmpwi r3, 0x0
    beq lbl_80197B34
lbl_801979C4:
    cmpwi r27, 0x0
    bne lbl_80197AD0
    addi r3, r1, 0xfc
    addi r4, r1, 0x78
    bl __less_dec
    cmpwi r3, 0x0
    bne lbl_80197AD0
    fmr f0, f31
    lfd f31, 0x8(r1)
    lwz r21, 0xa4(r1)
    lwz r12, 0x78(r1)
    lwz r22, 0xa8(r1)
    lwz r11, 0x7c(r1)
    lwz r23, 0xac(r1)
    lwz r10, 0x80(r1)
    lwz r24, 0xb0(r1)
    lwz r9, 0x84(r1)
    lwz r25, 0xb4(r1)
    lwz r8, 0x88(r1)
    lwz r26, 0xb8(r1)
    lwz r7, 0x8c(r1)
    lwz r31, 0xbc(r1)
    lwz r6, 0x90(r1)
    lwz r30, 0xc0(r1)
    lwz r5, 0x94(r1)
    lwz r29, 0xc4(r1)
    lwz r4, 0x98(r1)
    lwz r28, 0xc8(r1)
    lwz r3, 0x9c(r1)
    lhz r27, 0xcc(r1)
    lhz r0, 0xa0(r1)
    stw r21, 0x4c(r1)
    stw r22, 0x50(r1)
    stw r23, 0x54(r1)
    stw r24, 0x58(r1)
    stw r25, 0x5c(r1)
    stw r26, 0x60(r1)
    stw r31, 0x64(r1)
    stw r30, 0x68(r1)
    stw r29, 0x6c(r1)
    stw r28, 0x70(r1)
    sth r27, 0x74(r1)
    stw r12, 0xa4(r1)
    stw r11, 0xa8(r1)
    stw r10, 0xac(r1)
    stw r9, 0xb0(r1)
    stw r8, 0xb4(r1)
    stw r7, 0xb8(r1)
    stw r6, 0xbc(r1)
    stw r5, 0xc0(r1)
    stw r4, 0xc4(r1)
    stw r3, 0xc8(r1)
    sth r0, 0xcc(r1)
    stw r21, 0x78(r1)
    stw r22, 0x7c(r1)
    stw r23, 0x80(r1)
    stw r24, 0x84(r1)
    stw r25, 0x88(r1)
    stw r26, 0x8c(r1)
    stw r31, 0x90(r1)
    stw r30, 0x94(r1)
    stw r29, 0x98(r1)
    stw r28, 0x9c(r1)
    sth r27, 0xa0(r1)
    stfd f31, 0x10(r1)
    stfd f0, 0x8(r1)
    b lbl_80197B34
lbl_80197AD0:
    lwz r12, 0x78(r1)
    lwz r11, 0x7c(r1)
    lwz r10, 0x80(r1)
    lwz r9, 0x84(r1)
    lwz r8, 0x88(r1)
    lwz r7, 0x8c(r1)
    lwz r6, 0x90(r1)
    lwz r5, 0x94(r1)
    lwz r4, 0x98(r1)
    lwz r3, 0x9c(r1)
    lhz r0, 0xa0(r1)
    lfd f31, 0x8(r1)
    stw r12, 0xa4(r1)
    stw r11, 0xa8(r1)
    stw r10, 0xac(r1)
    stw r9, 0xb0(r1)
    stw r8, 0xb4(r1)
    stw r7, 0xb8(r1)
    stw r6, 0xbc(r1)
    stw r5, 0xc0(r1)
    stw r4, 0xc4(r1)
    stw r3, 0xc8(r1)
    sth r0, 0xcc(r1)
    stfd f31, 0x10(r1)
    b lbl_80197950
lbl_80197B34:
    addi r3, r1, 0x4c
    addi r4, r1, 0xfc
    addi r5, r1, 0xa4
    bl __minus_dec
    addi r3, r1, 0x20
    addi r4, r1, 0x78
    addi r5, r1, 0xfc
    bl __minus_dec
    addi r3, r1, 0x4c
    addi r4, r1, 0x20
    bl __equals_dec
    cmpwi r3, 0x0
    beq lbl_80197B7C
    lwz r0, 0x14(r1)
    clrlwi. r0, r0, 31
    beq lbl_80197B94
    lfd f31, 0x8(r1)
    b lbl_80197B94
lbl_80197B7C:
    addi r3, r1, 0x4c
    addi r4, r1, 0x20
    bl __less_dec
    cmpwi r3, 0x0
    bne lbl_80197B94
    lfd f31, 0x8(r1)
lbl_80197B94:
    lbz r0, 0xfc(r1)
    extsb. r0, r0
    beq lbl_80197BA4
    fneg f31, f31
lbl_80197BA4:
    fmr f1, f31
lbl_80197BA8:
    addi r11, r1, 0x170
    opword 0xE3E10178
    lfd f31, 0x170(r1)
    bl _restgpr_21
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}
