#include "PowerPC_EABI_Support/MSL_C/MSL_Common/strtoul.h"
#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>

enum scan_states
{
    start           = 0x01,
    check_for_zero  = 0x02,
    leading_zero    = 0x04,
    need_digit      = 0x08,
    digit_loop      = 0x10,
    finished        = 0x20,
    failure         = 0x40
};

#define final_state(scan_state) (scan_state & (finished | failure))
#define success(scan_state) (scan_state & (leading_zero | digit_loop | finished))
#define fetch() (count++, (*ReadProc)(ReadProcArg, 0, __GetAChar))
#define unfetch(c) (*ReadProc)(ReadProcArg, c, __UngetAChar)

unsigned long __strtoul(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int* chars_scanned, int* negative, int* overflow) {
    int scan_state = start;
    int count = 0;
    int spaces = 0;
    unsigned long value = 0;
    unsigned long value_max = 0;
    int c;

    *negative = *overflow = 0;

    if (base < 0 || base == 1 || base > 36 || max_width < 1) {
        scan_state = failure;
    }
    else {
        c = fetch();
    }

    if (base != 0) {
        value_max = ULONG_MAX / base;
    }

    while (count <= max_width && c != -1 && !final_state(scan_state)) {
        switch (scan_state) {
            case start:
                if (isspace(c)) {
                    c = fetch();
                    count--;
                    spaces++;
                    break;
                }

                if (c == '+') {
                    c = fetch();
                }
                else if (c == '-') {
                    c = fetch();
                    *negative = 1;
                }

                scan_state = check_for_zero;
                break;
            
            case check_for_zero:
                if (base == 0 || base == 16) {
                    if (c == '0') {
                        scan_state = leading_zero;
                        c = fetch();
                        break;
                    }
                }

                scan_state = need_digit;
                break;
            
            case 4:
                if (c == 'X' || c == 'x') {
                    base = 16;
                    scan_state = need_digit;
                    c = fetch();
                    break;
                }

                if (base == 0) {
                    base = 8;
                }

                scan_state = digit_loop;
                break;

            case need_digit:
            case digit_loop:
                if (base == 0) {
                    base = 10;
                }

                if (!value_max) {
                    value_max = ULONG_MAX / base;
                }

                if (isdigit(c)) {
                    if ((c -= '0') >= base) {
                        if (scan_state == digit_loop) {
                            scan_state = finished;
                        }
                        else {
                            scan_state = failure;
                        }

                        c += '0';
                        break;
                    }
                }
                else if (!isalpha(c) || (toupper(c) - 'A' + 10) >= base) {
                    if (scan_state == digit_loop) {
                        scan_state = finished;
                    }
                    else {
                        scan_state = failure;
                    }

                    break;
                }
                else {
                    c = toupper(c) - 'A' + 10;
                }

                if (value > value_max) {
                    *overflow = 1;
                }

                value *= base;

                if (c > (ULONG_MAX - value)) {
                    *overflow = 1;
                }

                value += c;
                scan_state = digit_loop;
                c = fetch();
                break;
        }
    }

    if (!success(scan_state)) {
        count = 0;
        value = 0;
        *chars_scanned = 0;
    }
    else {
        count--;
        *chars_scanned = count + spaces;
    }

    unfetch(c);
    return value;
}

unsigned long long __strtoull(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int* chars_scanned, int* negative, int* overflow) {
    int scan_state = start;
    int count = 0;
    int spaces = 0;
    unsigned long long value = 0;
    unsigned long long value_max = 0;
    unsigned long long ullmax = ULLONG_MAX;
    int c;

    *negative = *overflow = 0;

    if (base < 0 || base == 1 || base > 36 || max_width < 1) {
        scan_state = failure;
    }
    else {
        c = fetch();
    }

    if (base != 0) {
        value_max = ULLONG_MAX / base;
    }

    while (count <= max_width && c != -1 && !final_state(scan_state)) {
        switch (scan_state) {
            case start:
                if (isspace(c)) {
                    c = fetch();
                    count--;
                    spaces++;
                    break;
                }

                if (c == '+') {
                    c = fetch();
                }
                else if (c == '-') {
                    c = fetch();
                    *negative = 1;
                }

                scan_state = check_for_zero;
                break;
            
            case check_for_zero:
                if (base == 0 || base == 16) {
                    if (c == '0') {
                        scan_state = leading_zero;
                        c = fetch();
                        break;
                    }
                }

                scan_state = need_digit;
                break;

            case leading_zero:
                if (c == 'X' || c == 'x') {
                    base = 16;
                    scan_state = need_digit;
                    c = fetch();
                    break;
                }

                if (base == 0) {
                    base = 8;
                }

                scan_state = digit_loop;
                break;

            case need_digit:
            case digit_loop:
                if (base == 0) {
                    base = 10;
                }

                if (!value_max) {
                    value_max = ullmax / base;
                }

                if (isdigit(c)) {
                    if ((c -= '0') >= base) {
                        if (scan_state == digit_loop) {
                            scan_state = finished;
                        }
                        else {
                            scan_state = failure;
                        }

                        c += '0';
                        break;
                    }
                }
                else if (!isalpha(c) || (toupper(c) - 'A' + 10) >= base) {
                    if (scan_state == digit_loop) {
                        scan_state = finished;
                    }
                    else {
                        scan_state = failure;
                    }
                    
                    break;
                }
                else {
                    c = toupper(c) - 'A' + 10;
                }

                if (value > value_max) {
                    *overflow = 1;
                }

                value *= base;

                if (c > (ullmax - value)) {
                    *overflow = 1;
                }

                value += c;
                scan_state = digit_loop;
                c = fetch();
                break;
        }
    }

    if (!success(scan_state)) {
        count = 0;
        value = 0;
        *chars_scanned = 0;
    }
    else {
        count--;
        *chars_scanned = count + spaces;
    }

    unfetch(c);
    return value;
}


unsigned long strtoul(const char *str, char **end, int base) {
    unsigned long value;
    int count, negative, overflow;

    __InStrCtrl isc;
    isc.NextChar = (char*)str;
    isc.NullCharDetected = 0;

    value = __strtoul(base, 0x7FFFFFFF, &__StringRead, (void*)&isc, &count, &negative, &overflow);

    if (end) {
        *end = (char*)str + count;
    }

    if (overflow) {
        value = ULONG_MAX;
        errno = ERANGE;
    }
    else if (negative) {
        value = -value;
    }

    return value;
}

//unused
void strtoull(){
}

long strtol(const char *str, char **end, int base) {
    unsigned long uvalue;
    long svalue;
    int count, negative, overflow;

    __InStrCtrl isc;
    isc.NextChar = (char*)str;
    isc.NullCharDetected = 0;

    uvalue = __strtoul(base, 0x7FFFFFFF, &__StringRead, (void*)&isc, &count, &negative, &overflow);

    if (end) {
        *end = (char*)str + count;
    }

    if (overflow || (!negative && uvalue > LONG_MAX) || (negative && uvalue > -LONG_MIN)) {
        svalue = (negative ? -LONG_MIN : LONG_MAX);
        errno = ERANGE;
    }
    else {
        svalue = (negative ? (long)-uvalue : (long)uvalue);
    }

    return svalue;
}

//unused
void strtoll(){
}

int atoi(const char *str) {
    return (strtol(str, 0, 10));
}

//unused
void atol(){
}

//unused
void atoll(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float lbl_8049D8C8;
extern void fn_8019ED1C();

// asm_to_cpp: fn_8019ED1C
asm void fn_8019ED1C() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, 0x8000
    lis r6, __StringRead@ha
    stw r0, 0x34(r1)
    li r0, 0x0
    addi r8, r1, 0xc
    addi r9, r1, 0x8
    stw r31, 0x2c(r1)
    mr r31, r4
    subi r4, r7, 0x1
    addi r7, r1, 0x10
    stw r30, 0x28(r1)
    mr r30, r3
    mr r3, r5
    addi r5, r6, __StringRead@l
    stw r30, 0x18(r1)
    addi r6, r1, 0x18
    stw r0, 0x1c(r1)
    bl __strtoul
    cmpwi r31, 0x0
    beq lbl_8019ED80
    lwz r0, 0x10(r1)
    add r0, r30, r0
    stw r0, 0x0(r31)
lbl_8019ED80:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_8019EDBC
    lwz r5, 0xc(r1)
    cmpwi r5, 0x0
    bne lbl_8019EDA8
    lis r4, 0x8000
    subi r0, r4, 0x1
    cmplw r3, r0
    bgt lbl_8019EDBC
lbl_8019EDA8:
    cmpwi r5, 0x0
    beq lbl_8019EDE4
    lis r0, 0x8000
    cmplw r3, r0
    ble lbl_8019EDE4
lbl_8019EDBC:
    lwz r5, 0xc(r1)
    li r0, 0x22
    lis r3, 0x8000
    stw r0, lbl_8049D8C8
    neg r4, r5
    subi r0, r3, 0x1
    or r3, r4, r5
    srwi r3, r3, 31
    add r3, r3, r0
    b lbl_8019EDF0
lbl_8019EDE4:
    cmpwi r5, 0x0
    beq lbl_8019EDF0
    neg r3, r3
lbl_8019EDF0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
