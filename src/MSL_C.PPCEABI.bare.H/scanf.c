#include <math.h>
#include <stdarg.h>
#include <ctype.h>
#include <stdio.h>

typedef long long intmax_t;

enum argument_options {
    normal_argument,
    char_argument,
    short_argument,
    long_argument,
    intmax_argument,
    size_t_argument,
    ptrdiff_argument,
    long_long_argument,
    double_argument,
    long_double_argument,
    wchar_argument
};

typedef unsigned char char_map[32];

typedef struct {
    unsigned char suppress_assignment;
    unsigned char field_width_specified;
    unsigned char argument_options;
    unsigned char conversion_char;
    int           field_width;
    char_map char_set;
} scan_format;

#define set_char_map(map, ch) map[(unsigned char)ch >> 3] |= (1 << (ch & 7))
#define tst_char_map(map, ch) (map[(unsigned char)ch >> 3] &  (1 << (ch & 7)))

static const char* parse_format(const char* format_string, scan_format *format) {
    const char* s = format_string;
    int c;
    int flag_found, invert;
    scan_format f = { 0, 0, normal_argument, 0, 2147483647, { 0 } };

    if (((c = *++s) == '%')) {
        f.conversion_char = c;
        *format = f;
        return ((const char*)s + 1);
    }

    if (c == '*') {
        f.suppress_assignment = 1;
        c = *++s;
    }

    if (isdigit(c)) {
        f.field_width = 0;

        do {
            f.field_width = (f.field_width * 10) + (c - '0');
            c = *++s;
        } while (isdigit(c));

        if (f.field_width == 0) {
            f.conversion_char = 0xFF;
            *format = f;
            return ((const char*)s + 1);
        }

        f.field_width_specified = 1;
    }

    flag_found = 1;

    switch (c) {
        case 'h':
            f.argument_options = short_argument;

            if (s[1] == 'h') {
                f.argument_options = char_argument;
                c = *++s;
            }

            break;
        case 'l':
            f.argument_options = long_argument;

            if (s[1] == 'l') {
                f.argument_options = long_long_argument;
                c = *++s;
            }

            break;
        case 'L':
            f.argument_options = long_double_argument;
            break;

        case 'j':
            f.argument_options = intmax_argument;
            break;
        case 'z':
            f.argument_options = size_t_argument;
            break;
        case 't':
            f.argument_options = ptrdiff_argument;
            break;
        default:
            flag_found = 0;
    }

    if (flag_found) {
        c = *++s;
    }

    f.conversion_char = c;
    
    switch (c) {
        case 'd':
        case 'i':
        case 'u':
        case 'o':
        case 'x':
        case 'X':
            if (f.argument_options == long_double_argument) {
                f.conversion_char = 0xFF;
                break;
            }

            break;

        case 'a':
        case 'A':
        case 'f':
        case 'F':
        case 'e':
        case 'E':
        case 'g':
        case 'G':
            if (f.argument_options == char_argument || f.argument_options == short_argument || f.argument_options == intmax_argument || f.argument_options == size_t_argument || f.argument_options == ptrdiff_argument || f.argument_options == long_long_argument) {
                f.conversion_char = 0xFF;
                break;
            }

            if (f.argument_options == long_argument) {
                f.argument_options = double_argument;
            }

            break;

        case 'p':
            f.argument_options = long_argument;
            f.conversion_char = 'x';
            break;

        case 'c':
            if (f.argument_options == long_argument) {
                f.argument_options = wchar_argument;
            }
            else {
                if (f.argument_options != normal_argument) {
                    f.conversion_char = 0xFF;
                }
            }

            break;

        case 's':
            if (f.argument_options == long_argument) {
                f.argument_options = wchar_argument;
            }
            else {
                if (f.argument_options != normal_argument) {
                    f.conversion_char = 0xFF;
                }
            }

            {
                int i;
                unsigned char* p;

                for (i = sizeof(f.char_set), p = f.char_set; i; --i) {
                    *p++ = 0xFF;
                }

                f.char_set[1] = 0xC1;
                f.char_set[4] = 0xFE;
            }

            break;

        case 'n':
            break;

        case '[':
            if (f.argument_options == long_argument) {
                f.argument_options = wchar_argument;
            }
            else {
                if (f.argument_options != normal_argument) {
                    f.conversion_char = 0xFF;
                }
            }

            c = *++s;
            invert = 0;

            if (c == '^') {
                invert = 1;
                c = *++s;
            }

            if (c == ']') {
                set_char_map(f.char_set, ']');
                c = *++s;
            }

            while (c && c != ']') {
                int d;
                set_char_map(f.char_set, c);

                if (*(s + 1) == '-' && (d = *(s + 2)) != 0 && d != ']') {
                    while (++c <= d) {
                        set_char_map(f.char_set, c);
                    }

                    c = *(s += 3);
                }
                else {
                    c = *++s;
                }
            }

            if (!c) {
                f.conversion_char = 0xFF;
                break;
            }

            if (invert) {
                int i;
                unsigned char* p;

                for (i = sizeof(f.char_set), p = f.char_set; i; --i, ++p) {
                    *p = ~*p;
                }

                break;
            }

            break;
        default:
            f.conversion_char = 0xFF;
            break;
    }

    *format = f;
    return ((const char*)s + 1);
}


static int __sformatter(int (*ReadProc)(void *, int, int), void * ReadProcArg, const char * format_str, va_list arg, int is_secure)
{
    int num_chars, chars_read, items_assigned, conversions;
    int base, negative, overflow;
    int rval;
    const char* format_ptr;
    char format_char;
    char c;
    scan_format format;
    long long_num;
    unsigned long u_long_num;
    long long long_long_num = 0;
    unsigned long long u_long_long_num;
    long double long_double_num;
    char * arg_ptr;
    int elem_valid;
    size_t elem_maxsize;
    int match_failure = 0;
    int terminate = 0;

    format_ptr = format_str;
    chars_read = 0;
    items_assigned = 0;
    conversions = 0;
    
    while (!terminate && (format_char = *format_ptr) != 0)
    {
        if (isspace(format_char))
        {
            do{
                format_char = *++format_ptr;
            } while (isspace(format_char));
            
            if (!match_failure)
            {
                while (isspace(c = (*ReadProc)(ReadProcArg, 0, __GetAChar)))
                    ++chars_read;
                
                (*ReadProc)(ReadProcArg, c, __UngetAChar);
            }
            continue;
        }
        
        if ((format_char != '%') && (!match_failure))
        {
            if ((c = (*ReadProc)(ReadProcArg, 0, __GetAChar)) != (unsigned char)format_char)
            {
                (*ReadProc)(ReadProcArg, c, __UngetAChar);
                if (!is_secure)
                    goto exit;
                else
                {
                    match_failure = 1;
                    ++format_ptr;
                    continue;
                }
            }
            
            chars_read++;
            format_ptr++;
            
            continue;
        }

        format_ptr = parse_format(format_ptr, &format);

        if (!format.suppress_assignment && format.conversion_char != '%')
        {
            arg_ptr = va_arg(arg, char *);
        }
        else
        {
            arg_ptr = 0;
        }
            
        if ((format.conversion_char != 'n') && (!match_failure) && (*ReadProc)(ReadProcArg, 0, __TestForError))
        {
            if (!is_secure)
                goto exit;
            else
                match_failure = 1;
        }
        
        switch (format.conversion_char)
        {
            case 'd':
                base = 10;
                goto signed_int;
            case 'i':
                base = 0;
            signed_int:
                
                if (match_failure)
                {
                    long_num = 0;
                    long_long_num = 0;
                }
                else
                {
                    if ((format.argument_options == long_long_argument) || (format.argument_options == intmax_argument))
                        u_long_long_num = __strtoull(base, format.field_width, ReadProc, ReadProcArg, &num_chars, &negative, &overflow);
                    else
                        u_long_num = __strtoul(base, format.field_width, ReadProc, ReadProcArg, &num_chars, &negative, &overflow);
                    
                    if (!num_chars)
                    {
                        if (!is_secure)
                            goto exit;
                        else
                        {
                            match_failure = 1;
                            long_num = 0;
                            long_long_num = 0;
                            goto signed_int_assign;
                        }
                    }
                    
                    chars_read += num_chars;
                    
                    if ((format.argument_options == long_long_argument) || (format.argument_options == intmax_argument))
                        long_long_num = (negative ? -u_long_long_num : u_long_long_num);
                    else
                        long_num = (negative ? -u_long_num : u_long_num);
                }
                
            signed_int_assign:

                if (arg_ptr)
                {
                    switch (format.argument_options)
                    {
                        case normal_argument:  * (int *)         arg_ptr = long_num; break;
                        case char_argument:    * (signed char *) arg_ptr = long_num; break;
                        case short_argument:   * (short *)       arg_ptr = long_num; break;
                        case long_argument:    * (long *)        arg_ptr = long_num; break;
                        case intmax_argument:  * (intmax_t *)    arg_ptr = long_long_num; break;
                        case size_t_argument:  * (size_t *)      arg_ptr = long_num; break;
                        case ptrdiff_argument: * (ptrdiff_t *)   arg_ptr = long_num; break;
                        case long_long_argument: * (long long *) arg_ptr = long_long_num; break;
                    }
                    if (!match_failure) items_assigned++;
                }

                conversions++;
                break;
            case 'o':
                base = 8;
                goto unsigned_int;
            case 'u':
                base = 10;
                goto unsigned_int;
            case 'x':
            case 'X':
                base = 16;
            unsigned_int:
                
                if (match_failure)
                {
                    u_long_num = 0;
                    u_long_long_num = 0;
                }
                else
                {
                    if ((format.argument_options == long_long_argument) || (format.argument_options == intmax_argument))
                       u_long_long_num = __strtoull(base, format.field_width, ReadProc, ReadProcArg, &num_chars, &negative, &overflow);
                    else
                        u_long_num = __strtoul(base, format.field_width, ReadProc, ReadProcArg, &num_chars, &negative, &overflow);
                    
                    if (!num_chars)
                    {
                        if (!is_secure)
                            goto exit;
                        else
                        {
                            match_failure = 1;
                            u_long_num = 0;
                            u_long_long_num = 0;
                            goto unsigned_int_assign;
                        }
                    }
                    
                    chars_read += num_chars;
                    
                    if (negative)
                    if (format.argument_options == long_long_argument)
                        u_long_long_num = -u_long_long_num;
                    else
                        u_long_num = -u_long_num;
                }
                
            unsigned_int_assign:

                if (arg_ptr)
                {
                    switch (format.argument_options)
                    {
                        case normal_argument:  * (unsigned int *)arg_ptr = u_long_num; break;
                        case char_argument:    * (unsigned char *)arg_ptr = u_long_num; break;
                        case short_argument:   * (unsigned short *)arg_ptr = u_long_num; break;
                        case long_argument:    * (unsigned long *)arg_ptr = u_long_num; break;
                        case intmax_argument:  * (intmax_t *)    arg_ptr = u_long_long_num; break;
                        case size_t_argument:  * (size_t *)      arg_ptr = u_long_num; break;
                        case ptrdiff_argument: * (ptrdiff_t *)   arg_ptr = u_long_num; break;
                        case long_long_argument: * (unsigned long long *) arg_ptr = u_long_long_num; break;


                    }
                    
                    if (!match_failure) items_assigned++;
                }
                
                conversions++;
                break;
            case 'a':
            case 'A':
            case 'f':
            case 'F':
            case 'e':
            case 'E':
            case 'g':
            case 'G':
            flt:
                if (match_failure) long_double_num = NAN;
                else
                {
                    long_double_num = __strtold(format.field_width, ReadProc, ReadProcArg, &num_chars, &overflow);
                    
                    if (!num_chars)
                    {
                        if (!is_secure)
                            goto exit;
                        else
                        {
                            match_failure = 1;
                            long_double_num = NAN;
                            goto assign_float;
                        }
                    }
                    
                    chars_read += num_chars;
                }
                
            assign_float:

                if (arg_ptr)
                {
                    switch (format.argument_options)
                    {
                        case normal_argument:      * (float *)       arg_ptr = long_double_num; break;
                        case double_argument:      * (double *)      arg_ptr = long_double_num; break;
                        case long_double_argument: * (long double *) arg_ptr = long_double_num; break;
                    }
                    
                    if (!match_failure) items_assigned++;
                }

                conversions++;
                break;

            case 'c':
                
                if (!format.field_width_specified) format.field_width = 1;

                if (arg_ptr)
                {
                    if (is_secure)
                    {
                        elem_valid = 1;
                        elem_maxsize = va_arg(arg, size_t);
                    }
                    
                    num_chars = 0;
                    
                    if (match_failure)
                    {
                        if (elem_maxsize > 0)
                            *arg_ptr = 0;
                        continue;
                    }
                    else
                    {
                        char * arg_start = arg_ptr;
                        
                        while (format.field_width-- && (!is_secure || ((elem_valid = (elem_maxsize > num_chars)) != 0)) && ((rval = ((*ReadProc)(ReadProcArg, 0, __GetAChar))) != -1))
                        {
                            c = rval;
                            
                            if (format.argument_options == wchar_argument)
                            {
                                mbtowc(((wchar_t*)arg_ptr), (char*)(&c), 1);
                                arg_ptr += sizeof(wchar_t);
                            }
                            else
                                *arg_ptr++ = c;
                            num_chars++;
                        }
                        
                        c = rval;
                        if (!num_chars || (is_secure && !elem_valid))
                        {
                            if (!is_secure)
                                goto exit;
                            else
                            {
                                match_failure = 1;
                                if (elem_maxsize > 0)
                                    *arg_start = 0;
                                continue;
                            }
                        }
                        
                        chars_read += num_chars;
                        
                        items_assigned++;
                    }
                }
                else
                {
                    num_chars = 0;
                    
                    while (format.field_width-- && ((rval = ((*ReadProc)(ReadProcArg, 0, __GetAChar))) != -1))
                    {
                        c = rval;
                        num_chars++;
                    }
                    c = rval;
                    if (!num_chars) goto exit;
                }
                
                conversions++;
                break;
            
            case '%':
                if (match_failure)
                    continue;
                else
                {
                    while (isspace(c = (*ReadProc)(ReadProcArg, 0, __GetAChar)))
                        chars_read++;
                    
                    if (c != '%')
                    {
                        (*ReadProc)(ReadProcArg, c, __UngetAChar);
                        if (!is_secure)
                            goto exit;
                        else
                        {
                            match_failure = 1;
                            continue;
                        }
                    }
                    
                    chars_read++;
                }
                break;
            
            case 's':
                if (!match_failure)
                {
                    c = (*ReadProc)(ReadProcArg, 0, __GetAChar);
                    while(isspace(c))
                    {
                        chars_read++;
                        c = (*ReadProc)(ReadProcArg, 0, __GetAChar);
                    }
                    
                    (*ReadProc)(ReadProcArg, c, __UngetAChar);
                }
            case '[':
                if (arg_ptr)
                {
                    if (is_secure)
                    {
                        elem_valid = 1;
                        elem_maxsize = va_arg(arg, size_t) - 1;
                    }
                    
                    num_chars = 0;
                    
                    if (match_failure)
                    {
                        if (elem_maxsize > 0)
                            *arg_ptr = 0;
                        continue;
                    }
                    else
                    {
                        char * arg_start = arg_ptr;
                        
                        while (format.field_width-- &&
                            (!is_secure || ((elem_valid = (elem_maxsize >= num_chars)) != 0)) &&
                                    ((rval = ((*ReadProc)(ReadProcArg, 0, __GetAChar))) != -1))
                        {
                            c = rval;
                            
                            if (!tst_char_map(format.char_set, c))
                                break;

                            if (format.argument_options == wchar_argument)
                            {
                                mbtowc(((wchar_t*)arg_ptr), (char*)&c, 1);
                                arg_ptr = (char*)((wchar_t*)arg_ptr + 1);
                            }
                            else
                                *arg_ptr++ = c;
                            num_chars++;
                        }
                        c = rval;
                        
                        if (!num_chars || (is_secure && !elem_valid))
                        {
                            (*ReadProc)(ReadProcArg, c, __UngetAChar);
                            if (!is_secure)
                                goto exit;
                            else
                            {
                                match_failure = 1;
                                if (elem_maxsize > 0)
                                    *arg_start = 0;
                                continue;
                            }
                        }
                        
                        chars_read += num_chars;
                        
                        if (format.argument_options == wchar_argument)
                            *(wchar_t*)arg_ptr = L'\0';
                        else
                            *arg_ptr = 0;
                        
                        items_assigned++;
                    }
                }
                else
                {
                    num_chars = 0;
                    
                    while (format.field_width-- &&
                        ((rval = ((*ReadProc)(ReadProcArg, 0, __GetAChar))) != -1))
                    {
                        c = rval;
                        if (!tst_char_map(format.char_set, c))
                            break;
                        
                        num_chars++;
                    }
                    c = rval;
                    
                    if (!num_chars)
                    {
                        (*ReadProc)(ReadProcArg, c, __UngetAChar);
                        break;
                    }
                    chars_read += num_chars;
                }
                
                if (format.field_width >= 0)
                    (*ReadProc)(ReadProcArg, c, __UngetAChar);
                
                conversions++;
                break;
            case 'n':
                if (arg_ptr)
                    switch (format.argument_options)
                    {
                        case normal_argument: * (int *)   arg_ptr = chars_read; break;
                        case short_argument:  * (short *) arg_ptr = chars_read; break;
                        case long_argument:   * (long *)  arg_ptr = chars_read; break;
                        case char_argument:   * (char *)  arg_ptr = chars_read; break;
                        case long_long_argument: * (long long *) arg_ptr = chars_read; break;
                    }
                continue;
            case 0xFF:
            default:
                goto exit;
        }
    }
    
exit:
    
    if ((*ReadProc)(ReadProcArg, 0, __TestForError) && conversions == 0)
        return -1;
    
    return items_assigned;
}

//unused
void __FileRead(){
}


int __StringRead(void *pPtr, int ch, int act) {
    char ret;
    __InStrCtrl* Iscp = (__InStrCtrl*)pPtr;

    switch (act) {
        case __GetAChar:
            ret = *(Iscp->NextChar);
            
            if (ret == '\0') {
                Iscp->NullCharDetected = 1;
                return -1;
            }
            else {
                Iscp->NextChar++;
                return (unsigned char)ret;
            }

        case __UngetAChar:
            if (Iscp->NullCharDetected == 0) {
                Iscp->NextChar--;
            }
            else {
                Iscp->NullCharDetected = 0;
            }

            return ch;

        case __TestForError:
            return Iscp->NullCharDetected;
    }

    return 0;
}

//unsued
void fscanf(){
}

//unused
void fscanf_s(){
}

//unused
void vscanf(){
}

//unused
void scanf(){
}

//unused
void scanf_s(){
}

//unused
void vfscanf(){
}

//unused
void vfscanf_s(){
}

int isspace_string(const char *s) {
    int i = 0;

    while(s[i] != '\0'){
       if(!isspace(s[i++])) return 0;
    }

    return 1;
}

int vsscanf(const char *s, const char *format, va_list arg) {
    __InStrCtrl isc;
    isc.NextChar = (char*)s;

    if ((s == 0) || (*isc.NextChar == '\0') || isspace_string(s)) {
        return -1;
    }

    isc.NullCharDetected = 0;
    return __sformatter(&__StringRead, (void*)&isc, format, arg, 0);
}

//unused
void vsscanf_s(){
}

int sscanf(const char *s, const char *pFormat, ...) {
    int ret;
    va_list args;
    va_start(args, pFormat);
    return vsscanf(s, pFormat, args);
}

//unused
void sscanf_s(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern u8 jumptable_8035FE50[];
extern u8 lbl_8033B9C8[];
extern u8 lbl_8035FBD8[];
extern u8 lbl_803D7848[];
extern void exit();
extern void fn_8019B580();
extern void raise();

// asm_to_cpp: fn_8019B580
asm void fn_8019B580() {
    nofralloc
    stwu r1, -0x40(r1)
    lis r6, lbl_8033B9C8@ha
    lwzu r0, lbl_8033B9C8@l(r6)
    stw r31, 0x3c(r1)
    lbzu r5, 0x1(r3)
    stw r30, 0x38(r1)
    extsb r5, r5
    lwz r30, 0x4(r6)
    lwz r31, 0x8(r6)
    cmpwi r5, 0x25
    lwz r12, 0xc(r6)
    lwz r11, 0x10(r6)
    lwz r10, 0x14(r6)
    lwz r9, 0x18(r6)
    lwz r8, 0x1c(r6)
    lwz r7, 0x20(r6)
    lwz r6, 0x24(r6)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    stw r31, 0x10(r1)
    stw r12, 0x14(r1)
    stw r11, 0x18(r1)
    stw r10, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    bne lbl_8019B628
    stb r5, 0xb(r1)
    addi r3, r3, 0x1
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    stw r30, 0x4(r4)
    stw r31, 0x8(r4)
    stw r12, 0xc(r4)
    stw r11, 0x10(r4)
    stw r10, 0x14(r4)
    stw r9, 0x18(r4)
    stw r8, 0x1c(r4)
    stw r7, 0x20(r4)
    stw r6, 0x24(r4)
    b lbl_8019BBF8
lbl_8019B628:
    cmpwi r5, 0x2a
    bne lbl_8019B640
    lbzu r5, 0x1(r3)
    li r0, 0x1
    stb r0, 0x8(r1)
    extsb r5, r5
lbl_8019B640:
    cmplwi r5, 0xff
    li r0, 0x1
    bgt lbl_8019B650
    li r0, 0x0
lbl_8019B650:
    cmpwi r0, 0x0
    beq lbl_8019B660
    li r0, 0x0
    b lbl_8019B67C
lbl_8019B660:
    lis r6, lbl_8035FBD8@ha
    slwi r0, r5, 1
    addi r6, r6, lbl_8035FBD8@l
    lwz r6, 0x38(r6)
    lwz r6, 0x8(r6)
    lhzx r0, r6, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019B67C:
    cmpwi r0, 0x0
    beq lbl_8019B75C
    lis r6, lbl_8035FBD8@ha
    li r0, 0x0
    addi r6, r6, lbl_8035FBD8@l
    stw r0, 0xc(r1)
    lwz r7, 0x38(r6)
lbl_8019B698:
    lwz r0, 0xc(r1)
    li r8, 0x1
    mulli r0, r0, 0xa
    add r6, r5, r0
    lbzu r5, 0x1(r3)
    subi r0, r6, 0x30
    stw r0, 0xc(r1)
    extsb r5, r5
    cmplwi r5, 0xff
    bgt lbl_8019B6C4
    li r8, 0x0
lbl_8019B6C4:
    cmpwi r8, 0x0
    beq lbl_8019B6D4
    li r0, 0x0
    b lbl_8019B6E4
lbl_8019B6D4:
    lwz r6, 0x8(r7)
    slwi r0, r5, 1
    lhzx r0, r6, r0
    rlwinm r0, r0, 0, 28, 28
lbl_8019B6E4:
    cmpwi r0, 0x0
    bne lbl_8019B698
    lwz r6, 0xc(r1)
    cmpwi r6, 0x0
    bne lbl_8019B754
    li r0, 0xff
    stb r0, 0xb(r1)
    addi r3, r3, 0x1
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    stw r6, 0x4(r4)
    lwz r5, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r4)
    stw r5, 0x8(r4)
    lwz r5, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x14(r4)
    stw r5, 0x10(r4)
    lwz r5, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x1c(r4)
    stw r5, 0x18(r4)
    lwz r5, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r0, 0x24(r4)
    stw r5, 0x20(r4)
    b lbl_8019BBF8
lbl_8019B754:
    li r0, 0x1
    stb r0, 0x9(r1)
lbl_8019B75C:
    cmpwi r5, 0x68
    li r7, 0x1
    beq lbl_8019B794
    cmpwi r5, 0x6c
    beq lbl_8019B7C0
    cmpwi r5, 0x4c
    beq lbl_8019B7EC
    cmpwi r5, 0x6a
    beq lbl_8019B7F8
    cmpwi r5, 0x7a
    beq lbl_8019B804
    cmpwi r5, 0x74
    beq lbl_8019B810
    b lbl_8019B81C
lbl_8019B794:
    lbz r0, 0x1(r3)
    li r6, 0x2
    stb r6, 0xa(r1)
    extsb r6, r0
    cmpwi r6, 0x68
    bne lbl_8019B820
    li r0, 0x1
    stb r0, 0xa(r1)
    mr r5, r6
    addi r3, r3, 0x1
    b lbl_8019B820
lbl_8019B7C0:
    lbz r0, 0x1(r3)
    li r6, 0x3
    stb r6, 0xa(r1)
    extsb r6, r0
    cmpwi r6, 0x6c
    bne lbl_8019B820
    li r0, 0x7
    stb r0, 0xa(r1)
    mr r5, r6
    addi r3, r3, 0x1
    b lbl_8019B820
lbl_8019B7EC:
    li r0, 0x9
    stb r0, 0xa(r1)
    b lbl_8019B820
lbl_8019B7F8:
    li r0, 0x4
    stb r0, 0xa(r1)
    b lbl_8019B820
lbl_8019B804:
    li r0, 0x5
    stb r0, 0xa(r1)
    b lbl_8019B820
lbl_8019B810:
    li r0, 0x6
    stb r0, 0xa(r1)
    b lbl_8019B820
lbl_8019B81C:
    li r7, 0x0
lbl_8019B820:
    cmpwi r7, 0x0
    beq lbl_8019B830
    lbzu r5, 0x1(r3)
    extsb r5, r5
lbl_8019B830:
    subi r0, r5, 0x41
    stb r5, 0xb(r1)
    cmplwi r0, 0x37
    bgt lbl_8019BB9C
    lis r5, jumptable_8035FE50@ha
    slwi r0, r0, 2
    addi r5, r5, jumptable_8035FE50@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lbz r0, 0xa(r1)
    cmplwi r0, 0x9
    bne lbl_8019BBA4
    li r0, 0xff
    stb r0, 0xb(r1)
    b lbl_8019BBA4
    lbz r5, 0xa(r1)
    addi r0, r5, 0xfc
    clrlwi r0, r0, 24
    cmplwi r0, 0x3
    ble lbl_8019B8A0
    addi r0, r5, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    ble lbl_8019B8A0
    cmplwi r5, 0x3
    beq lbl_8019B8AC
    b lbl_8019BBA4
lbl_8019B8A0:
    li r0, 0xff
    stb r0, 0xb(r1)
    b lbl_8019BBA4
lbl_8019B8AC:
    li r0, 0x8
    stb r0, 0xa(r1)
    b lbl_8019BBA4
    li r5, 0x3
    li r0, 0x78
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    b lbl_8019BBA4
    lbz r0, 0xa(r1)
    cmplwi r0, 0x3
    bne lbl_8019B8E4
    li r0, 0xa
    stb r0, 0xa(r1)
    b lbl_8019BBA4
lbl_8019B8E4:
    cmpwi r0, 0x0
    beq lbl_8019BBA4
    li r0, 0xff
    stb r0, 0xb(r1)
    b lbl_8019BBA4
    lbz r0, 0xa(r1)
    cmplwi r0, 0x3
    bne lbl_8019B910
    li r0, 0xa
    stb r0, 0xa(r1)
    b lbl_8019B920
lbl_8019B910:
    cmpwi r0, 0x0
    beq lbl_8019B920
    li r0, 0xff
    stb r0, 0xb(r1)
lbl_8019B920:
    li r6, 0xff
    li r5, 0xc1
    li r0, 0xfe
    stb r6, 0x10(r1)
    stb r6, 0x12(r1)
    stb r6, 0x13(r1)
    stb r6, 0x15(r1)
    stb r6, 0x16(r1)
    stb r6, 0x17(r1)
    stb r6, 0x18(r1)
    stb r6, 0x19(r1)
    stb r6, 0x1a(r1)
    stb r6, 0x1b(r1)
    stb r6, 0x1c(r1)
    stb r6, 0x1d(r1)
    stb r6, 0x1e(r1)
    stb r6, 0x1f(r1)
    stb r6, 0x20(r1)
    stb r6, 0x21(r1)
    stb r6, 0x22(r1)
    stb r6, 0x23(r1)
    stb r6, 0x24(r1)
    stb r6, 0x25(r1)
    stb r6, 0x26(r1)
    stb r6, 0x27(r1)
    stb r6, 0x28(r1)
    stb r6, 0x29(r1)
    stb r6, 0x2a(r1)
    stb r6, 0x2b(r1)
    stb r6, 0x2c(r1)
    stb r6, 0x2d(r1)
    stb r6, 0x2e(r1)
    stb r6, 0x2f(r1)
    stb r5, 0x11(r1)
    stb r0, 0x14(r1)
    b lbl_8019BBA4
    lbz r0, 0xa(r1)
    cmplwi r0, 0x3
    bne lbl_8019B9C8
    li r0, 0xa
    stb r0, 0xa(r1)
    b lbl_8019B9D8
lbl_8019B9C8:
    cmpwi r0, 0x0
    beq lbl_8019B9D8
    li r0, 0xff
    stb r0, 0xb(r1)
lbl_8019B9D8:
    lbzu r10, 0x1(r3)
    li r11, 0x0
    extsb r10, r10
    cmpwi r10, 0x5e
    bne lbl_8019B9F8
    lbzu r10, 0x1(r3)
    li r11, 0x1
    extsb r10, r10
lbl_8019B9F8:
    cmpwi r10, 0x5d
    bne lbl_8019BA14
    lbz r0, 0x1b(r1)
    lbzu r10, 0x1(r3)
    ori r0, r0, 0x20
    stb r0, 0x1b(r1)
    extsb r10, r10
lbl_8019BA14:
    addi r8, r1, 0x8
    li r5, 0x1
    b lbl_8019BA9C
lbl_8019BA20:
    extrwi r6, r10, 5, 24
    lbz r0, 0x1(r3)
    add r9, r8, r6
    clrlwi r6, r10, 29
    lbz r7, 0x8(r9)
    slw r6, r5, r6
    cmpwi r0, 0x2d
    or r6, r7, r6
    stb r6, 0x8(r9)
    bne lbl_8019BA94
    lbz r9, 0x2(r3)
    extsb. r9, r9
    beq lbl_8019BA94
    cmpwi r9, 0x5d
    beq lbl_8019BA94
    b lbl_8019BA7C
lbl_8019BA60:
    extrwi r6, r10, 5, 24
    clrlwi r0, r10, 29
    add r7, r8, r6
    lbz r6, 0x8(r7)
    slw r0, r5, r0
    or r0, r6, r0
    stb r0, 0x8(r7)
lbl_8019BA7C:
    addi r10, r10, 0x1
    cmpw r10, r9
    ble lbl_8019BA60
    lbzu r10, 0x3(r3)
    extsb r10, r10
    b lbl_8019BA9C
lbl_8019BA94:
    lbzu r10, 0x1(r3)
    extsb r10, r10
lbl_8019BA9C:
    cmpwi r10, 0x0
    beq lbl_8019BAB0
    cmpwi r10, 0x5d
    beq lbl_8019BABC
    b lbl_8019BA20
lbl_8019BAB0:
    li r0, 0xff
    stb r0, 0xb(r1)
    b lbl_8019BBA4
lbl_8019BABC:
    cmpwi r11, 0x0
    beq lbl_8019BBA4
    li r0, 0x2
    addi r5, r1, 0x10
    mtctr r0
lbl_8019BAD0:
    lbz r0, 0x0(r5)
    nor r0, r0, r0
    stb r0, 0x0(r5)
    lbz r0, 0x1(r5)
    nor r0, r0, r0
    stb r0, 0x1(r5)
    lbz r0, 0x2(r5)
    nor r0, r0, r0
    stb r0, 0x2(r5)
    lbz r0, 0x3(r5)
    nor r0, r0, r0
    stb r0, 0x3(r5)
    lbz r0, 0x4(r5)
    nor r0, r0, r0
    stb r0, 0x4(r5)
    lbz r0, 0x5(r5)
    nor r0, r0, r0
    stb r0, 0x5(r5)
    lbz r0, 0x6(r5)
    nor r0, r0, r0
    stb r0, 0x6(r5)
    lbz r0, 0x7(r5)
    nor r0, r0, r0
    stb r0, 0x7(r5)
    lbz r0, 0x8(r5)
    nor r0, r0, r0
    stb r0, 0x8(r5)
    lbz r0, 0x9(r5)
    nor r0, r0, r0
    stb r0, 0x9(r5)
    lbz r0, 0xa(r5)
    nor r0, r0, r0
    stb r0, 0xa(r5)
    lbz r0, 0xb(r5)
    nor r0, r0, r0
    stb r0, 0xb(r5)
    lbz r0, 0xc(r5)
    nor r0, r0, r0
    stb r0, 0xc(r5)
    lbz r0, 0xd(r5)
    nor r0, r0, r0
    stb r0, 0xd(r5)
    lbz r0, 0xe(r5)
    nor r0, r0, r0
    stb r0, 0xe(r5)
    lbz r0, 0xf(r5)
    nor r0, r0, r0
    stb r0, 0xf(r5)
    addi r5, r5, 0x10
    bdnz lbl_8019BAD0
    b lbl_8019BBA4
lbl_8019BB9C:
    li r0, 0xff
    stb r0, 0xb(r1)
lbl_8019BBA4:
    lwz r5, 0x8(r1)
    addi r3, r3, 0x1
    lwz r0, 0xc(r1)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r5, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r4)
    stw r5, 0x8(r4)
    lwz r5, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x14(r4)
    stw r5, 0x10(r4)
    lwz r5, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x1c(r4)
    stw r5, 0x18(r4)
    lwz r5, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r0, 0x24(r4)
    stw r5, 0x20(r4)
lbl_8019BBF8:
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: raise
asm void raise() {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r3, 0x1
    cmplwi r0, 0x6
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    ble lbl_8019CA84
    li r3, -0x1
    b lbl_8019CAE8
lbl_8019CA84:
    lis r4, lbl_803D7848@ha
    slwi r5, r0, 2
    addi r4, r4, lbl_803D7848@l
    lwzx r31, r4, r5
    cmplwi r31, 0x1
    beq lbl_8019CAA4
    li r0, 0x0
    stwx r0, r4, r5
lbl_8019CAA4:
    cmplwi r31, 0x1
    beq lbl_8019CABC
    cmpwi r31, 0x0
    bne lbl_8019CAC4
    cmpwi r3, 0x1
    bne lbl_8019CAC4
lbl_8019CABC:
    li r3, 0x0
    b lbl_8019CAE8
lbl_8019CAC4:
    cmpwi r31, 0x0
    bne lbl_8019CAD4
    li r3, 0x0
    bl exit
lbl_8019CAD4:
    mr r12, r31
    mr r3, r30
    mtctr r12
    bctrl
    li r3, 0x0
lbl_8019CAE8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
