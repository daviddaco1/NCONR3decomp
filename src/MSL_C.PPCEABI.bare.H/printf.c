#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_fp.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/secure_error.h"
#include <ctype.h>
#include <math.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define TARGET_FLOAT_BITS 64
#define TARGET_FLOAT_BYTES (TARGET_FLOAT_BITS/8)
#define TARGET_FLOAT_MAX_EXP LDBL_MAX_EXP
#define TARGET_FLOAT_MANT_DIG LDBL_MANT_DIG
#define TARGET_FLOAT_IMPLICIT_J_BIT 1
#define TARGET_FLOAT_MANT_BITS (TARGET_FLOAT_MANT_DIG - TARGET_FLOAT_IMPLICIT_J_BIT)
#define TARGET_FLOAT_EXP_BITS (TARGET_FLOAT_BITS - TARGET_FLOAT_MANT_BITS - 1)

typedef long long intmax_t;

enum justification_options {
    left_justification,
    right_justification,
    zero_fill
};

enum sign_options {
    only_minus,
    sign_always,
    space_holder
};

enum argument_options {
    normal_argument,
    char_argument,
    short_argument,
    long_argument,
    long_long_argument,
    wchar_argument,
    intmax_argument,
    size_t_argument,
    ptrdiff_argument,
    long_double_argument
};

typedef struct {
    unsigned char justification_options; // _0
    unsigned char sign_options;          // _1
    unsigned char precision_specified;   // _2
    unsigned char alternate_form;        // _3
    unsigned char argument_options;      // _4
    unsigned char conversion_char;       // _5
    int           field_width;           // _8
    int           precision;             // _C
} print_format;

static const char* parse_format(const char *format_string, va_list *arg, print_format *format) {
    print_format f;
    const char* s = format_string;
    int c;
    int flag_found;
    f.justification_options = right_justification;
    f.sign_options = only_minus;
    f.precision_specified = 0;
    f.alternate_form = 0;
    f.argument_options = normal_argument;
    f.field_width = 0;
    f.precision = 0;
    
    if ((c = *++s) == '%') {
        f.conversion_char = c;
        *format = f;
        return ((const char*)s + 1);
    }

    for (;;) {
        flag_found = 1;

        switch (c) {
            case '-':
                f.justification_options = left_justification;
                break;
            case '+':
                f.sign_options = sign_always;
                break;
            case ' ':
                if (f.sign_options != sign_always) {
                    f.sign_options = space_holder;
                }
                break;
            case '#':
                f.alternate_form = 1;
                break;
            case '0':
                if (f.justification_options != left_justification) {
                    f.justification_options = zero_fill;
                }
                break;
            default:
                flag_found = 0;
                break;
        }

        if (flag_found) {
            c = *++s;
        }
        else {
            break;
        }
    }

    if (c == '*') {
        if ((f.field_width = va_arg(*arg, int)) < 0) {
            f.justification_options = left_justification;
            f.field_width = -f.field_width;
        }

        c = *++s;
    }
    else {
        while (isdigit(c)) {
            f.field_width = (f.field_width * 10) + (c - '0');
            c = *++s;
        }
    }

    if (f.field_width > 509) {
        f.conversion_char = 0xFF;
        *format = f;
        return ((const char*)s + 1);
    }

    if (c == '.') {
        f.precision_specified = 1;

        if ((c = *++s) == '*') {
            if ((f.precision = va_arg(*arg, int)) < 0) {
                f.precision_specified = 0;
            }

            c = *++s;
        }
        else {
            while (isdigit(c)) {
                f.precision = (f.precision * 10) + (c - '0');
                c = *++s;
            }
        }
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
        case 't':
            f.argument_options = ptrdiff_argument;
            break;
        case 'z':
            f.argument_options = size_t_argument;
            break;
        default:
            flag_found = 0;
            break;
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

            if (!f.precision_specified) {
                f.precision = 1;
            }
            else if (f.justification_options == zero_fill) {
                f.justification_options = right_justification;
            }
            break;

        case 'f':
        case 'F':
            if (f.argument_options == short_argument || f.argument_options == intmax_argument || f.argument_options == size_t_argument || f.argument_options == ptrdiff_argument || f.argument_options == long_long_argument) {
                f.conversion_char = 0xFF;
                break;
            }

            if (!f.precision_specified) {
                f.precision = 6;
            }
            break;

        case 'a':
        case 'A':
            if (!f.precision_specified) {
                f.precision = 0xD;
            }

            if (f.argument_options == short_argument || f.argument_options == intmax_argument ||
                f.argument_options == size_t_argument || f.argument_options == ptrdiff_argument ||
                f.argument_options == long_long_argument || f.argument_options == char_argument) {
                f.conversion_char = 0xFF;
            }

            break;

        case 'g':
        case 'G':
            if (!f.precision) {
                f.precision = 1;
            }

        case 'e':
        case 'E':
            if (f.argument_options == short_argument || f.argument_options == intmax_argument || f.argument_options == size_t_argument || f.argument_options == ptrdiff_argument || f.argument_options == long_long_argument || f.argument_options == char_argument) {
                f.conversion_char = 0xFF;
                break;
            }

            if (!f.precision_specified) {
                f.precision = 6;
            }
            break;

        case 'p':
            f.conversion_char = 'x';
            f.alternate_form = 1;
            f.argument_options = long_argument;
            f.precision = 8;
            break;

        case 'c':
            if (f.argument_options == long_argument) {
                f.argument_options = wchar_argument;
            }
            else {
                if (f.precision_specified || f.argument_options != normal_argument) {
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

            break;

        case 'n':
            if (f.argument_options == long_double_argument) {
                f.conversion_char = 0xFF;
            }
            
            break;

        default:
            f.conversion_char = 0xFF;
            break;
    }

    *format = f;
    return ((const char*)s + 1);
}

static char * long2str(long num, char * buff, print_format format) {
    unsigned long unsigned_num, base;
    char* p;
    int n, digits;
    int minus = 0;
    unsigned_num = num;
    minus = 0;
    
    p = buff;
    *--p = 0;
    digits = 0;
    
    if (!num && !format.precision && !(format.alternate_form && format.conversion_char == 'o')) {
        return p;
    }
    
    switch (format.conversion_char) {
        case 'd':
        case 'i':
            base = 10;
            
            if (num < 0) {
                if(num != 0x8000000000000000L){
                    unsigned_num = -num;
                }

                minus = 1;
            }
            break;
        
        case 'o':
            base = 8;
            format.sign_options = only_minus;
            break;
        
        case 'u':
            base = 10;
            format.sign_options = only_minus;
            break;
        
        case 'x':
        case 'X':
            base = 16;
            format.sign_options = only_minus;
            break;
    }
    
    do {
        n = unsigned_num % base;
        unsigned_num /= base;
        
        if (n < 10) {
            n += '0';
        }
        else {
            n -= 10;
            
            if (format.conversion_char == 'x') {
                n += 'a';
            }
            else {
                n += 'A';
            }
        }
        
        *--p = n;
        ++digits;
    }
    while (unsigned_num != 0);
    
    if (base == 8 && format.alternate_form && *p != '0') {
        *--p = '0';
        ++digits;
    }
    
    if (format.justification_options == zero_fill) {
        format.precision = format.field_width;
        
        if (minus || format.sign_options != only_minus)
            --format.precision;
        
        if (base == 16 && format.alternate_form)
            format.precision -= 2;
    }
    
    if (buff - p + format.precision > 509)
        return (0);
    
    while (digits < format.precision) {
        *--p = '0';
        ++digits;
    }
    
    if (base == 16 && format.alternate_form) {
        *--p = format.conversion_char;
        *--p = '0';
    }
    
    if (minus) {
        *--p = '-';
    }
    else if (format.sign_options == sign_always) {
        *--p = '+';
    }
    else if (format.sign_options == space_holder) {
        *--p = ' ';
    }
    
    return p;
}

static char* longlong2str(long long num, char *pBuf, print_format fmt) {
    unsigned long long unsigned_num, base;
    char* p;
    int n, digits;
    int minus = 0;
    unsigned_num = num;
    minus = 0;
    p = pBuf;
    *--p = 0;
    digits = 0;

    if (!num && !fmt.precision && !(fmt.alternate_form && fmt.conversion_char == 'o')) {
        return p;
    }

    switch (fmt.conversion_char) {
        case 'd':
        case 'i':
            base = 10;

            if (num < 0) {
                if (num != 0x8000000000000000) {
                    unsigned_num = -num;
                }

                minus = 1;
            }
            break;
        case 'o':
            base = 8;
            fmt.sign_options = only_minus;
            break;
        case 'u':
            base = 10;
            fmt.sign_options = only_minus;
            break;
        case 'x':
        case 'X':
            base = 16;
            fmt.sign_options = only_minus;
            break;
    }

    do {
        n = unsigned_num % base;
        unsigned_num /= base;

        if (n < 10) {
            n += '0';
        }
        else {
            n -= 10;
            if (fmt.conversion_char == 'x') {
                n += 'a';
            }
            else {
                n += 'A';
            }
        }

        *--p = n;
        ++digits;
    } while (unsigned_num != 0);

    if (base == 8 && fmt.alternate_form && *p != '0') {
        *--p = '0';
        ++digits;
    }

    if (fmt.justification_options == zero_fill) {
        fmt.precision = fmt.field_width;

        if (minus || fmt.sign_options != only_minus) {
            --fmt.precision;
        }

        if (base == 16 && fmt.alternate_form) {
            fmt.precision -= 2;
        }
    }

    if (pBuf - p + fmt.precision > 509) {
        return 0;
    }

    while (digits < fmt.precision) {
        *--p = '0';
        ++digits;
    }

    if (base == 16 && fmt.alternate_form) {
        *--p = fmt.conversion_char;
        *--p = '0';
    }

    if (minus) {
        *--p = '-';
    }
    else if (fmt.sign_options == sign_always) {
        *--p = '+';
    }
    else if (fmt.sign_options == space_holder) {
        *--p = ' ';
    }

    return p;
}

static char * double2hex(long double num, char * buff, print_format format)  {
    char *p;
    unsigned char *q;
    unsigned char working_byte;
    long double ld;
    int expbits, expmask;
    unsigned snum;
    long exp;
    print_format exp_format;
    int hex_precision;
    int mantissa_bit;
    decform form;
    decimal dec;
    int radix_marker;
    
    radix_marker = *(unsigned char *)(__lconv).decimal_point;
    p = buff;
    ld = num;
    
    if (format.precision > 509) {
        return 0;
    }

    form.style = (char)0;
    form.digits = 0x20;
    __num2dec(&form, num, &dec);

    switch(*dec.sig.text){
        case '0':
            dec.exp = 0;
            break;
        case 'I':
            if (dec.sign) {
                p = buff - 5;
                if (format.conversion_char == 'A') strcpy(p, "-INF");
                else strcpy(p, "-inf");
            }
            else {
                p = buff - 4;
                if (format.conversion_char == 'A') strcpy(p, "INF");
                else strcpy(p, "inf");
            }
        
            return p;
        case 'N':
            if (dec.sign) {
                p = buff - 5;
                if (format.conversion_char == 'A') strcpy(p, "-NAN");
                else strcpy(p, "-nan");
            }
            else {
                p = buff - 4;
                if (format.conversion_char == 'A') strcpy(p, "NAN");
                else strcpy(p, "nan");
            }
            
            return p;
    }

    exp_format.justification_options = right_justification;
    exp_format.sign_options = sign_always;
    exp_format.precision_specified = 0;
    exp_format.alternate_form = 0;
    exp_format.argument_options = normal_argument;
    exp_format.field_width = 0;
    exp_format.precision = 1;
    exp_format.conversion_char = 'd';

    expbits = 11;
    expmask = 0x7FF;

    snum = ((unsigned char *)&num)[0] << 25;
    if (TARGET_FLOAT_EXP_BITS > 7)
        snum |= ((unsigned char *)&num)[1] << 17;
    if (TARGET_FLOAT_EXP_BITS > 15)
        snum |= ((unsigned char *)&num)[2] << 9;
    if (TARGET_FLOAT_EXP_BITS > 23)
        snum |= ((unsigned char *)&num)[3] << 1;

    snum = (snum >> (32 - expbits)) & expmask;

    if(snum != 0)
        exp = snum - 0x3FF;
    else
        exp = 0;

    p = long2str(exp, buff, exp_format);
    if (format.conversion_char == 'a')
        *--p = 'p';
    else
        *--p = 'P';
    q = (unsigned char *)&num;

    if (TARGET_FLOAT_IMPLICIT_J_BIT) {
        mantissa_bit = (1 + expbits + format.precision * 4) - 1;
    }
    else {
        mantissa_bit = (1 + expbits + format.precision * 4) - 4;
    }
    
    for (hex_precision = format.precision; hex_precision >= 1; hex_precision--) {
        if (mantissa_bit < 64) {
            int mantissa_byte;
            
            mantissa_byte = mantissa_bit >> 3;
            working_byte = (*(q + mantissa_byte)) >> (7 - (mantissa_bit & 7));

            if ((mantissa_bit & ~7) != ((mantissa_bit - 4) & ~7)) {
                working_byte |= ((*(q + (mantissa_byte - 1))) << 8) >> (7 - ((mantissa_bit) & 7));
            }

            if (!TARGET_FLOAT_IMPLICIT_J_BIT) {
                if (mantissa_bit == 1 + expbits) {
                    *--p = radix_marker;
                    working_byte &= 0x1;
                }
            }
            
            if ((working_byte &= 0xF) < 10) {
                working_byte += '0';
            }
            else
                if (format.conversion_char == 'a') {
                    working_byte += 'a' - 10;
                }
                else {
                    working_byte += 'A' - 10;
                }
        }
        else {
            working_byte = '0';
        }

        *--p = working_byte;
        mantissa_bit -= 4;
    }
    
    if (TARGET_FLOAT_IMPLICIT_J_BIT){
        if (format.precision || format.alternate_form) {
            *--p = radix_marker;
        }

        if(fabsl(ld) != 0.0)
            *--p = '1';
        else
            *--p = '0';
    }

    if (format.conversion_char == 'a') {
        *--p = 'x';
    }
    else {
        *--p = 'X';
    }

    *--p = '0';

    if (dec.sign) {
        *--p = '-';
    }
    else if (format.sign_options == sign_always) {
        *--p = '+';
    }
    else if (format.sign_options == space_holder) {
        *--p = ' ';
    }

    return p;
}

static void round_decimal(decimal *dec, int new_length) {
    char c;
    char* p;
    int carry;

    if (new_length < 0) {
return_zero:
        dec->exp = 0;
        dec->sig.length = 1;
        *dec->sig.text = '0';
        return;
    }

    if (new_length >= dec->sig.length) {
        return;
    }

    p = (char*)dec->sig.text + new_length + 1;
    c = *--p - '0';

    if (c == 5) {
        char* q = &((char*)dec->sig.text)[dec->sig.length];

        while (--q > p && *q == '0');
        carry = (q == p) ? p[-1] & 1 : 1;
    }
    else {
        carry = (c > 5);
    }

    while (new_length != 0) {
        c = *--p - '0' + carry;

        if ((carry = (c > 9)) != 0 || c == 0) {
            --new_length;
        }
        else {
            *p = c + '0';
            break;
        }
    }

    if (carry != 0) {
        dec->exp += 1;
        dec->sig.length = 1;
        *dec->sig.text = '1';
        return;
    }
    else if (new_length == 0) {
        goto return_zero;
    }

    dec->sig.length = new_length;
}

static char* float2str(long double num, char *buff, print_format format) {
    decimal dec;
    decform form;
    char* p;
    char* q;
    int n, digits, sign;
    int int_digits, frac_digits;
    int radix_marker;

    radix_marker = *(unsigned char*)__lconv.decimal_point;

    if (format.precision > 509) {
        return 0;
    }

    form.style = 0;
    form.digits = 0x20;
    __num2dec(&form, num, &dec);
    p = (char*)dec.sig.text + dec.sig.length;

    while (dec.sig.length > 1 && *--p == '0') {
        --dec.sig.length;
        ++dec.exp;
    }

    switch (*dec.sig.text) {
        case '0':
            dec.exp = 0;
            break;
        case 'I':
            if (num < 0) {
                p = buff - 5;

                if (isupper(format.conversion_char)) {
                    strcpy(p, "-INF");
                }
                else {
                    strcpy(p, "-inf");
                }
            }
            else {
                p = buff - 4;
                if (isupper(format.conversion_char)) {
                    strcpy(p, "INF");
                }
                else {
                    strcpy(p, "inf");
                }
            }

            return p;

        case 'N':
            if (dec.sign) {
                p = buff - 5;

                if (isupper(format.conversion_char)) {
                    strcpy(p, "-NAN");
                }
                else {
                    strcpy(p, "-nan");
                }
            }
            else {
                p = buff - 4;
                if (isupper(format.conversion_char)) {
                    strcpy(p, "NAN");
                }
                else {
                    strcpy(p, "nan");
                }
            }

            return p;
    }

    dec.exp += dec.sig.length - 1;
    p = buff;
    *--p = 0;

    switch (format.conversion_char)
    {
        case 'g':
        case 'G':
            
            if (dec.sig.length > format.precision) {
                round_decimal(&dec, format.precision);
            }
            
            if (dec.exp < -4 || dec.exp >= format.precision)
            {
                if (format.alternate_form) {
                    --format.precision;
                }
                else {
                    format.precision = dec.sig.length - 1;
                }
                
                if (format.conversion_char == 'g') {
                    format.conversion_char = 'e';
                }
                else {
                    format.conversion_char = 'E';
                }
                
                goto e_format;
            }
            
            if (format.alternate_form) {
                format.precision -= dec.exp + 1;
            }
            else {
                if ((format.precision = dec.sig.length - (dec.exp + 1)) < 0) {
                    format.precision = 0;
                }
            }
            
            goto f_format;
        
        case 'e':
        case 'E':
        e_format:
            
            if (dec.sig.length > format.precision + 1) {
                round_decimal(&dec, format.precision + 1);
            }
            
            n = dec.exp;
            sign = '+';
            
            if (n < 0) {
                n = -n;
                sign = '-';
            }
            
            for (digits = 0; n || digits < 2; ++digits) {
                *--p = n % 10 + '0';
                n /= 10;
            }
            
            *--p = sign;
            *--p = format.conversion_char;
            
            if (buff - p + format.precision > 509) {
                return 0;
            }
            
            if (dec.sig.length < format.precision + 1) {
                for (n = format.precision + 1 - dec.sig.length + 1; --n;) {
                    *--p = '0';
                }
            }
            
            for (n = dec.sig.length, q = (char*)dec.sig.text + dec.sig.length; --n;) {
                *--p = *--q;
            }
            
            if (format.precision || format.alternate_form) {
                *--p = radix_marker;
            }
            
            *--p = *dec.sig.text;
            
            if (dec.sign)
                *--p = '-';
            else if (format.sign_options == sign_always)
                *--p = '+';
            else if (format.sign_options == space_holder)
                *--p = ' ';
            
            break;

        case 'f':
        case 'F':
        f_format:
            
            if ((frac_digits = -dec.exp + dec.sig.length - 1) < 0)
                frac_digits = 0;
            
            if (frac_digits > format.precision) {
                round_decimal(&dec, dec.sig.length - (frac_digits - format.precision));
                
                if ((frac_digits = -dec.exp + dec.sig.length - 1) < 0)
                    frac_digits = 0;
            }
            
            if ((int_digits = dec.exp + 1) < 0)
                int_digits = 0;
            
            if (int_digits + frac_digits > 509)
                return 0;
            
            q = (char *) dec.sig.text + dec.sig.length;
            
            for (digits = 0; digits < (format.precision - frac_digits); ++digits)
                *--p = '0';
            
            for (digits = 0; digits < frac_digits && digits < dec.sig.length; ++digits)
                *--p = *--q;
            
            for (; digits < frac_digits; ++digits)
                *--p = '0';
            
            if (format.precision || format.alternate_form)
                *--p = radix_marker;
            
            if (int_digits) {
                for (digits = 0; digits < int_digits - dec.sig.length; ++digits) {
                    *--p = '0';
                }

                for (; digits < int_digits; ++digits) {
                    *--p = *--q;
                }
            }
            else {
                *--p = '0';
            }
            
            if (dec.sign) {
                *--p = '-';
            }
            else if (format.sign_options == sign_always) {
                *--p = '+';
            }
            else if (format.sign_options == space_holder) {
                *--p = ' ';
            }
            
            break;
    }

    return p;
}

static int __pformatter(void *(*WriteProc)(void *, const char *, size_t), void *WriteProcArg, const char * format_str, va_list arg, int is_secure) {
    int num_chars, chars_written, field_width;
    const char* format_ptr;
    const char* curr_format;
    print_format format;
    long long_num;
    long long long_long_num;
    long double long_double_num;
    char buff[512];
    char* buff_ptr;
    char* string_end;
    char fill_char = ' ';

    format_ptr = format_str;
    chars_written = 0;

    while (*format_ptr) {
        if (!(curr_format = strchr(format_ptr, '%'))) {
            num_chars = strlen(format_ptr);
            chars_written += num_chars;

            if (num_chars && !(*WriteProc)(WriteProcArg, format_ptr, num_chars)) {
                return -1;
            }

            break;
        }

        num_chars = curr_format - format_ptr;
        chars_written += num_chars;

        if (num_chars && !(*WriteProc)(WriteProcArg, format_ptr, num_chars)) {
            return -1;
        }

        format_ptr = curr_format;
        format_ptr = parse_format(format_ptr, (va_list*)arg, &format);

        switch (format.conversion_char) {
            case 'd':
            case 'i':
                if (format.argument_options == long_argument) {
                    long_num = va_arg(arg, long);
                }
                else if (format.argument_options == long_long_argument) {
                    long_long_num = va_arg(arg, long long);
                }
                else if (format.argument_options == intmax_argument) {
                    long_long_num = va_arg(arg, intmax_t);
                }
                else if (format.argument_options == size_t_argument) {
                    long_num = va_arg(arg, size_t);
                }
                else if (format.argument_options == ptrdiff_argument) {
                    long_num = va_arg(arg, ptrdiff_t);
                }
                else {
                    long_num = va_arg(arg, int);
                }

                if (format.argument_options == short_argument) {
                    long_num = (short)long_num;
                }

                if (format.argument_options == char_argument) {
                    long_num = (signed char)long_num;
                }

                if ((format.argument_options == long_long_argument) || (format.argument_options == intmax_argument)) {
                    if (!(buff_ptr = longlong2str(long_long_num, buff + 512, format))) {
                        goto conversion_error;
                    }
                }
                else {
                    if (!(buff_ptr = long2str(long_num, buff + 512, format))) {
                        goto conversion_error;
                    }
                }

                num_chars = buff + 512 - 1 - buff_ptr;
                break;

            case 'o':
            case 'u':
            case 'x':
            case 'X':
                if (format.argument_options == long_argument) {
                    long_num = va_arg(arg, unsigned long);
                }
                else if (format.argument_options == long_long_argument) {
                    long_long_num = va_arg(arg, long long);
                }
                else if (format.argument_options == intmax_argument) {
                    long_long_num = va_arg(arg, intmax_t);
                }
                else if (format.argument_options == size_t_argument) {
                    long_num = va_arg(arg, size_t);
                }
                else if (format.argument_options == ptrdiff_argument) {
                    long_num = va_arg(arg, ptrdiff_t);
                }
                else {
                    long_num = va_arg(arg, unsigned int);
                }

                if (format.argument_options == short_argument) {
                    long_num = (unsigned short)long_num;
                }

                if (format.argument_options == char_argument) {
                    long_num = (unsigned char)long_num;
                }

                if ((format.argument_options == long_long_argument) || (format.argument_options == intmax_argument)) {
                    if (!(buff_ptr = longlong2str(long_long_num, buff + 512, format))) {
                        goto conversion_error;
                    }
                }
                else {
                    if (!(buff_ptr = long2str(long_num, buff + 512, format))) {
                        goto conversion_error;
                    }
                }

                num_chars = buff + 512 - 1 - buff_ptr;
                break;

            case 'f':
            case 'F':
            case 'e':
            case 'E':
            case 'g':
            case 'G':
                if (format.argument_options == long_double_argument) {
                    long_double_num = va_arg(arg, long double);
                }
                else {
                    long_double_num = va_arg(arg, double);
                }

                if (!(buff_ptr = float2str(long_double_num, buff + 512, format))) {
                    goto conversion_error;
                }

                num_chars = buff + 512 - 1 - buff_ptr;
                break;

            case 'a':
            case 'A':
                if (format.argument_options == long_double_argument) {
                    long_double_num = va_arg(arg, long double);
                }
                else {
                    long_double_num = va_arg(arg, double);
                }

                if (!(buff_ptr = double2hex(long_double_num, buff + 512, format))) {
                    goto conversion_error;
                }

                num_chars = buff + 512 - 1 - buff_ptr;
                break;

            case 's':
                if (format.argument_options == wchar_argument) {
                    wchar_t* wcs_ptr = va_arg(arg, wchar_t*);

                    if(is_secure && wcs_ptr == NULL){
                        __msl_runtime_constraint_violation_s(0,0,-1);
                        return -1;
                    }

                    if(wcs_ptr == NULL){
                        wcs_ptr = L"";
                    }

                    if ((num_chars = wcstombs(buff, wcs_ptr, sizeof(buff))) < 0) {
                        goto conversion_error;
                    }

                    buff_ptr = &buff[0];
                }
                else {
                    buff_ptr = va_arg(arg, char *);
                }

                if(is_secure && buff_ptr == NULL){
                    __msl_runtime_constraint_violation_s(0,0,-1);
                    return -1;
                }

                if (buff_ptr == NULL) {
                    buff_ptr = "";
                }

                if (format.alternate_form) {
                    num_chars = (unsigned char)*buff_ptr++;

                    if (format.precision_specified && num_chars > format.precision) {
                        num_chars = format.precision;
                    }
                }
                else if (format.precision_specified) {
                    num_chars = format.precision;

                    if ((string_end = (char*)memchr((unsigned char*)buff_ptr, 0, num_chars)) != 0) {
                        num_chars = string_end - buff_ptr;
                    }
                }
                else {
                    num_chars = strlen(buff_ptr);
                }

                break;

            case 'n':
                buff_ptr = va_arg(arg, char *);

                if(is_secure){
                    __msl_runtime_constraint_violation_s(0,0,-1);
                    return -1;
                }

                switch (format.argument_options) {
                    case normal_argument:
                        *(int*)buff_ptr = chars_written;
                        break;
                    case short_argument:
                        *(short*)buff_ptr = chars_written;
                        break;
                    case long_argument:
                        *(long*)buff_ptr = chars_written;
                        break;
                    case intmax_argument:
                        *(intmax_t*)buff_ptr = chars_written;
                        break;
                    case size_t_argument:
                        *(size_t*)buff_ptr = chars_written;
                        break;
                    case ptrdiff_argument:
                        *(ptrdiff_t*)buff_ptr = chars_written;
                        break;
                    case long_long_argument:
                        *(long long*)buff_ptr = chars_written;
                        break;
                }

                continue;

            case 'c':
                buff_ptr = buff;
                *buff_ptr = va_arg(arg, int);
                num_chars = 1;
                break;

            case '%':
                buff_ptr = buff;
                *buff_ptr = '%';
                num_chars = 1;
                break;
            
            case 0xFF:
            default:
                conversion_error:
                    num_chars = strlen(curr_format);
                    chars_written += num_chars;

                    if (num_chars && !(*WriteProc)(WriteProcArg, curr_format, num_chars)) {
                        return -1;
                    }

                    return chars_written;
                    break;
        }

        field_width = num_chars;

        if (format.justification_options != left_justification) {
            fill_char = (format.justification_options == zero_fill) ? '0' : ' ';

            if (((*buff_ptr == '+') || (*buff_ptr == '-') || (*buff_ptr == ' ')) && (fill_char == '0')) {
                if ((*WriteProc)(WriteProcArg, buff_ptr, 1) == 0) {
                    return -1;
                }

                ++buff_ptr;
                num_chars--;
            }

            if ((format.justification_options == zero_fill) && ((format.conversion_char == 'a') || (format.conversion_char == 'A')))
            {
                if (num_chars < 2)
                    return(-1);
                if ((*WriteProc)(WriteProcArg, buff_ptr, 2) == 0)
                    return(-1);
                num_chars -= 2;
                buff_ptr += 2;
            }
            

            while (field_width < format.field_width) {
                if ((*WriteProc)(WriteProcArg, &fill_char, 1) == 0) {
                    return -1;
                }

                ++field_width;
            }
        }

        if (num_chars && !(*WriteProc)(WriteProcArg, buff_ptr, num_chars)) {
            return -1;
        }

        if (format.justification_options == left_justification) {
            while (field_width < format.field_width) {
                char blank = ' ';

                if ((*WriteProc)(WriteProcArg, &blank, 1) == 0) {
                    return -1;
                }

                ++field_width;
            }
        }

        chars_written += field_width;
    }

    return chars_written;
}

static void* __FileWrite(void *file, const char *pBuffer, size_t char_num) {
    return (__fwrite(pBuffer, 1, char_num, (FILE*)file) == char_num ? file : 0);
}

static void* __StringWrite(void *pCtrl, const char *pBuffer, size_t char_num) {
    size_t chars;
    __OutStrCtrl* ctrl = (__OutStrCtrl*)pCtrl;
    void* res;

    chars = ((ctrl->CharsWritten + char_num) <= ctrl->MaxCharCount) ? char_num : ctrl->MaxCharCount - ctrl->CharsWritten;
    res = memcpy(ctrl->CharStr + ctrl->CharsWritten, pBuffer, chars);
    ctrl->CharsWritten += chars;
    return (void*)1;
}

//unused
void printf(){
}

//unused
void printf_s(){
}

int fprintf(FILE *file, const char *format, ...) {
    int res;

    if (fwide(file, -1) >= 0) {
        return -1;
    }

    {
        va_list args;
        va_start(args, format);
        res = __pformatter(&__FileWrite, (void*)file, format, args, FALSE);
        return res;
    }
}

//unused
void fprintf_s(){
}

int vprintf(const char *pFormat, va_list arg) {
    int ret;

    if (fwide(stdout, -1) >= 0) {
        return -1;
    }

    ret = __pformatter(&__FileWrite, (void*)stdout, pFormat, arg, FALSE);
    return ret;
}

//unused
void vprintf_s(){
}

//unused
void vfprintf(){
}

//unused
void vfprintf_s(){
}

int vsnprintf(char *s, size_t n, const char *format, va_list arg) {
    int end;
    __OutStrCtrl osc;
    osc.CharStr = s;
    osc.MaxCharCount = n;
    osc.CharsWritten = 0;

    end = __pformatter(&__StringWrite, &osc, format, arg, FALSE);

    if (s) {
        if (end < n) {
            s[end] = '\0';
        }
        else {
            if (n > 0) {
                s[n - 1] = '\0';
            }
        }
    }

    return end;
}

//unused
void vsnprintf_s(){
}

int vsprintf(char *s, const char *format, va_list arg) {
    return vsnprintf(s, 0xFFFFFFFF, format, arg);
}

//unused
void vsprintf_s(){
}

int snprintf(char *s, size_t n, const char *format, ...) {
    va_list args;
    va_start(args, format);
    return vsnprintf(s, n, format, args);
}

//unused
void snprintf_s(){
}

int sprintf(char *s, const char *format, ...) {
    va_list args;
    va_start(args, format);
    return vsnprintf(s, 0xFFFFFFFF, format, args);
}

//unused
void sprintf_s(){
}

// ---- Funciones aun sin C que matchee (asm generado) ----
extern float at_wstringBase0_8049C400;
extern float lbl_8049C408;
extern u8 at_2934_8035FD00[];
extern u8 at_stringBase0_8033B9A0[];
extern u8 jumptable_8035FC20[];
extern u8 lbl_8035FBD8[];
extern void __pformatter_8019A65C();
extern void fn_8019AFCC();
extern void fn_8019B3E8();
extern void fn_8019B578();
extern void parse_format_80198F20();

// asm_to_cpp: parse_format_80198F20
asm void parse_format_80198F20() {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r7, 0x0
    lbz r6, 0x1(r3)
    stw r0, 0x34(r1)
    li r8, 0x1
    extsb r6, r6
    stw r31, 0x2c(r1)
    cmpwi r6, 0x25
    addi r31, r3, 0x1
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stb r8, 0x8(r1)
    stb r7, 0x9(r1)
    stb r7, 0xa(r1)
    stb r7, 0xb(r1)
    stb r7, 0xc(r1)
    stw r7, 0x10(r1)
    stw r7, 0x14(r1)
    bne lbl_80198F9C
    stb r6, 0xd(r1)
    addi r3, r31, 0x1
    lwz r4, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r4, 0x0(r5)
    stw r0, 0x4(r5)
    stw r7, 0x8(r5)
    stw r7, 0xc(r5)
    b lbl_801994C0
lbl_80198F9C:
    li r0, 0x2
lbl_80198FA0:
    cmpwi r6, 0x2d
    li r4, 0x1
    beq lbl_80198FD0
    cmpwi r6, 0x2b
    beq lbl_80198FD8
    cmpwi r6, 0x20
    beq lbl_80198FE0
    cmpwi r6, 0x23
    beq lbl_80198FF4
    cmpwi r6, 0x30
    beq lbl_80198FFC
    b lbl_80199010
lbl_80198FD0:
    stb r7, 0x8(r1)
    b lbl_80199014
lbl_80198FD8:
    stb r8, 0x9(r1)
    b lbl_80199014
lbl_80198FE0:
    lbz r3, 0x9(r1)
    cmplwi r3, 0x1
    beq lbl_80199014
    stb r0, 0x9(r1)
    b lbl_80199014
lbl_80198FF4:
    stb r8, 0xb(r1)
    b lbl_80199014
lbl_80198FFC:
    lbz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_80199014
    stb r0, 0x8(r1)
    b lbl_80199014
lbl_80199010:
    li r4, 0x0
lbl_80199014:
    cmpwi r4, 0x0
    beq lbl_80199028
    lbzu r6, 0x1(r31)
    extsb r6, r6
    b lbl_80198FA0
lbl_80199028:
    cmpwi r6, 0x2a
    bne lbl_80199068
    mr r3, r29
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    stw r0, 0x10(r1)
    cmpwi r0, 0x0
    bge lbl_8019905C
    neg r0, r0
    li r3, 0x0
    stb r3, 0x8(r1)
    stw r0, 0x10(r1)
lbl_8019905C:
    lbzu r6, 0x1(r31)
    extsb r6, r6
    b lbl_801990CC
lbl_80199068:
    lis r3, lbl_8035FBD8@ha
    addi r3, r3, lbl_8035FBD8@l
    lwz r4, 0x38(r3)
    b lbl_80199094
lbl_80199078:
    lwz r0, 0x10(r1)
    mulli r0, r0, 0xa
    add r3, r6, r0
    lbzu r6, 0x1(r31)
    subi r0, r3, 0x30
    stw r0, 0x10(r1)
    extsb r6, r6
lbl_80199094:
    cmplwi r6, 0xff
    li r0, 0x1
    bgt lbl_801990A4
    li r0, 0x0
lbl_801990A4:
    cmpwi r0, 0x0
    beq lbl_801990B4
    li r0, 0x0
    b lbl_801990C4
lbl_801990B4:
    lwz r3, 0x8(r4)
    slwi r0, r6, 1
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_801990C4:
    cmpwi r0, 0x0
    bne lbl_80199078
lbl_801990CC:
    lwz r7, 0x10(r1)
    cmpwi r7, 0x1fd
    ble lbl_80199104
    li r0, 0xff
    stb r0, 0xd(r1)
    lwz r5, 0x8(r1)
    addi r3, r31, 0x1
    lwz r4, 0xc(r1)
    lwz r0, 0x14(r1)
    stw r5, 0x0(r30)
    stw r4, 0x4(r30)
    stw r7, 0x8(r30)
    stw r0, 0xc(r30)
    b lbl_801994C0
lbl_80199104:
    cmpwi r6, 0x2e
    bne lbl_801991B8
    lbzu r6, 0x1(r31)
    li r0, 0x1
    stb r0, 0xa(r1)
    extsb r6, r6
    cmpwi r6, 0x2a
    bne lbl_80199154
    mr r3, r29
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    stw r0, 0x14(r1)
    cmpwi r0, 0x0
    bge lbl_80199148
    li r0, 0x0
    stb r0, 0xa(r1)
lbl_80199148:
    lbzu r6, 0x1(r31)
    extsb r6, r6
    b lbl_801991B8
lbl_80199154:
    lis r3, lbl_8035FBD8@ha
    addi r3, r3, lbl_8035FBD8@l
    lwz r4, 0x38(r3)
    b lbl_80199180
lbl_80199164:
    lwz r0, 0x14(r1)
    mulli r0, r0, 0xa
    add r3, r6, r0
    lbzu r6, 0x1(r31)
    subi r0, r3, 0x30
    stw r0, 0x14(r1)
    extsb r6, r6
lbl_80199180:
    cmplwi r6, 0xff
    li r0, 0x1
    bgt lbl_80199190
    li r0, 0x0
lbl_80199190:
    cmpwi r0, 0x0
    beq lbl_801991A0
    li r0, 0x0
    b lbl_801991B0
lbl_801991A0:
    lwz r3, 0x8(r4)
    slwi r0, r6, 1
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_801991B0:
    cmpwi r0, 0x0
    bne lbl_80199164
lbl_801991B8:
    cmpwi r6, 0x68
    li r4, 0x1
    beq lbl_801991F0
    cmpwi r6, 0x6c
    beq lbl_8019921C
    cmpwi r6, 0x4c
    beq lbl_80199248
    cmpwi r6, 0x6a
    beq lbl_80199254
    cmpwi r6, 0x74
    beq lbl_80199260
    cmpwi r6, 0x7a
    beq lbl_8019926C
    b lbl_80199278
lbl_801991F0:
    lbz r0, 0x1(r31)
    li r3, 0x2
    stb r3, 0xc(r1)
    extsb r3, r0
    cmpwi r3, 0x68
    bne lbl_8019927C
    li r0, 0x1
    stb r0, 0xc(r1)
    mr r6, r3
    addi r31, r31, 0x1
    b lbl_8019927C
lbl_8019921C:
    lbz r0, 0x1(r31)
    li r3, 0x3
    stb r3, 0xc(r1)
    extsb r3, r0
    cmpwi r3, 0x6c
    bne lbl_8019927C
    li r0, 0x4
    stb r0, 0xc(r1)
    mr r6, r3
    addi r31, r31, 0x1
    b lbl_8019927C
lbl_80199248:
    li r0, 0x9
    stb r0, 0xc(r1)
    b lbl_8019927C
lbl_80199254:
    li r0, 0x6
    stb r0, 0xc(r1)
    b lbl_8019927C
lbl_80199260:
    li r0, 0x8
    stb r0, 0xc(r1)
    b lbl_8019927C
lbl_8019926C:
    li r0, 0x7
    stb r0, 0xc(r1)
    b lbl_8019927C
lbl_80199278:
    li r4, 0x0
lbl_8019927C:
    cmpwi r4, 0x0
    beq lbl_8019928C
    lbzu r6, 0x1(r31)
    extsb r6, r6
lbl_8019928C:
    subi r0, r6, 0x41
    stb r6, 0xd(r1)
    cmplwi r0, 0x37
    bgt lbl_80199494
    lis r3, jumptable_8035FC20@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8035FC20@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lbz r0, 0xc(r1)
    cmplwi r0, 0x9
    bne lbl_801992CC
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_8019949C
lbl_801992CC:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_801992E4
    li r0, 0x1
    stw r0, 0x14(r1)
    b lbl_8019949C
lbl_801992E4:
    lbz r0, 0x8(r1)
    cmplwi r0, 0x2
    bne lbl_8019949C
    li r0, 0x1
    stb r0, 0x8(r1)
    b lbl_8019949C
    lbz r3, 0xc(r1)
    addi r0, r3, 0xfa
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_80199320
    cmplwi r3, 0x2
    beq lbl_80199320
    cmplwi r3, 0x4
    bne lbl_8019932C
lbl_80199320:
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_8019949C
lbl_8019932C:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_8019949C
    li r0, 0x6
    stw r0, 0x14(r1)
    b lbl_8019949C
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_80199358
    li r0, 0xd
    stw r0, 0x14(r1)
lbl_80199358:
    lbz r3, 0xc(r1)
    addi r0, r3, 0xfa
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_80199384
    addi r0, r3, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    ble lbl_80199384
    cmplwi r3, 0x4
    bne lbl_8019949C
lbl_80199384:
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_8019949C
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    bne lbl_801993A4
    li r0, 0x1
    stw r0, 0x14(r1)
lbl_801993A4:
    lbz r3, 0xc(r1)
    addi r0, r3, 0xfa
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_801993D0
    addi r0, r3, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    ble lbl_801993D0
    cmplwi r3, 0x4
    bne lbl_801993DC
lbl_801993D0:
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_8019949C
lbl_801993DC:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_8019949C
    li r0, 0x6
    stw r0, 0x14(r1)
    b lbl_8019949C
    li r5, 0x78
    li r4, 0x1
    li r3, 0x3
    li r0, 0x8
    stb r5, 0xd(r1)
    stb r4, 0xb(r1)
    stb r3, 0xc(r1)
    stw r0, 0x14(r1)
    b lbl_8019949C
    lbz r3, 0xc(r1)
    cmplwi r3, 0x3
    bne lbl_80199430
    li r0, 0x5
    stb r0, 0xc(r1)
    b lbl_8019949C
lbl_80199430:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_80199444
    cmpwi r3, 0x0
    beq lbl_8019949C
lbl_80199444:
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_8019949C
    lbz r0, 0xc(r1)
    cmplwi r0, 0x3
    bne lbl_80199468
    li r0, 0x5
    stb r0, 0xc(r1)
    b lbl_8019949C
lbl_80199468:
    cmpwi r0, 0x0
    beq lbl_8019949C
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_8019949C
    lbz r0, 0xc(r1)
    cmplwi r0, 0x9
    bne lbl_8019949C
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_8019949C
lbl_80199494:
    li r0, 0xff
    stb r0, 0xd(r1)
lbl_8019949C:
    lwz r6, 0x8(r1)
    addi r3, r31, 0x1
    lwz r5, 0xc(r1)
    lwz r4, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r6, 0x0(r30)
    stw r5, 0x4(r30)
    stw r4, 0x8(r30)
    stw r0, 0xc(r30)
lbl_801994C0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

// asm_to_cpp: __pformatter_8019A65C
asm void __pformatter_8019A65C() {
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    stmw r15, 0x28c(r1)
    li r24, 0x20
    lis r22, at_stringBase0_8033B9A0@ha
    mr r25, r3
    mr r26, r4
    mr r15, r5
    mr r27, r6
    mr r28, r7
    addi r22, r22, at_stringBase0_8033B9A0@l
    addi r21, r1, 0x27f
    li r17, 0x0
    lis r20, at_2934_8035FD00@ha
    li r23, 0x25
    stb r24, 0x9(r1)
    b lbl_8019AEE4
lbl_8019A6A4:
    mr r3, r15
    li r4, 0x25
    bl strchr
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl_8019A6F8
    mr r3, r15
    bl strlen
    cmpwi r3, 0x0
    mr r5, r3
    add r17, r17, r3
    beq lbl_8019AEF0
    mr r12, r25
    mr r3, r26
    mr r4, r15
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019AEF0
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019A6F8:
    subf. r5, r15, r3
    add r17, r17, r5
    beq lbl_8019A728
    mr r12, r25
    mr r3, r26
    mr r4, r15
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019A728
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019A728:
    mr r3, r16
    mr r4, r27
    addi r5, r1, 0x70
    bl parse_format_80198F20
    lbz r4, 0x75(r1)
    mr r15, r3
    subi r0, r4, 0x25
    cmplwi r0, 0x53
    bgt lbl_8019AD04
    addi r3, r20, at_2934_8035FD00@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lbz r0, 0x74(r1)
    cmplwi r0, 0x3
    bne lbl_8019A780
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl_8019A808
lbl_8019A780:
    cmplwi r0, 0x4
    bne lbl_8019A7A0
    mr r3, r27
    li r4, 0x2
    bl __va_arg
    lwz r30, 0x0(r3)
    lwz r29, 0x4(r3)
    b lbl_8019A808
lbl_8019A7A0:
    cmplwi r0, 0x6
    bne lbl_8019A7C0
    mr r3, r27
    li r4, 0x2
    bl __va_arg
    lwz r30, 0x0(r3)
    lwz r29, 0x4(r3)
    b lbl_8019A808
lbl_8019A7C0:
    cmplwi r0, 0x7
    bne lbl_8019A7DC
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl_8019A808
lbl_8019A7DC:
    cmplwi r0, 0x8
    bne lbl_8019A7F8
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl_8019A808
lbl_8019A7F8:
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
lbl_8019A808:
    lbz r0, 0x74(r1)
    cmplwi r0, 0x2
    bne lbl_8019A818
    extsh r31, r31
lbl_8019A818:
    cmplwi r0, 0x1
    bne lbl_8019A824
    extsb r31, r31
lbl_8019A824:
    cmplwi r0, 0x4
    beq lbl_8019A834
    cmplwi r0, 0x6
    bne lbl_8019A878
lbl_8019A834:
    lwz r9, 0x70(r1)
    mr r4, r29
    lwz r8, 0x74(r1)
    mr r3, r30
    lwz r7, 0x78(r1)
    addi r5, r1, 0x280
    lwz r0, 0x7c(r1)
    addi r6, r1, 0x60
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r7, 0x68(r1)
    stw r0, 0x6c(r1)
    bl longlong2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_8019AD04
    b lbl_8019A8B4
lbl_8019A878:
    lwz r8, 0x70(r1)
    mr r3, r31
    lwz r7, 0x74(r1)
    addi r4, r1, 0x280
    lwz r6, 0x78(r1)
    addi r5, r1, 0x50
    lwz r0, 0x7c(r1)
    stw r8, 0x50(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r0, 0x5c(r1)
    bl long2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_8019AD04
lbl_8019A8B4:
    subf r19, r18, r21
    b lbl_8019AD48
    lbz r0, 0x74(r1)
    cmplwi r0, 0x3
    bne lbl_8019A8DC
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl_8019A964
lbl_8019A8DC:
    cmplwi r0, 0x4
    bne lbl_8019A8FC
    mr r3, r27
    li r4, 0x2
    bl __va_arg
    lwz r30, 0x0(r3)
    lwz r29, 0x4(r3)
    b lbl_8019A964
lbl_8019A8FC:
    cmplwi r0, 0x6
    bne lbl_8019A91C
    mr r3, r27
    li r4, 0x2
    bl __va_arg
    lwz r30, 0x0(r3)
    lwz r29, 0x4(r3)
    b lbl_8019A964
lbl_8019A91C:
    cmplwi r0, 0x7
    bne lbl_8019A938
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl_8019A964
lbl_8019A938:
    cmplwi r0, 0x8
    bne lbl_8019A954
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl_8019A964
lbl_8019A954:
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
lbl_8019A964:
    lbz r0, 0x74(r1)
    cmplwi r0, 0x2
    bne lbl_8019A974
    clrlwi r31, r31, 16
lbl_8019A974:
    cmplwi r0, 0x1
    bne lbl_8019A980
    clrlwi r31, r31, 24
lbl_8019A980:
    cmplwi r0, 0x4
    beq lbl_8019A990
    cmplwi r0, 0x6
    bne lbl_8019A9D4
lbl_8019A990:
    lwz r9, 0x70(r1)
    mr r4, r29
    lwz r8, 0x74(r1)
    mr r3, r30
    lwz r7, 0x78(r1)
    addi r5, r1, 0x280
    lwz r0, 0x7c(r1)
    addi r6, r1, 0x40
    stw r9, 0x40(r1)
    stw r8, 0x44(r1)
    stw r7, 0x48(r1)
    stw r0, 0x4c(r1)
    bl longlong2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_8019AD04
    b lbl_8019AA10
lbl_8019A9D4:
    lwz r8, 0x70(r1)
    mr r3, r31
    lwz r7, 0x74(r1)
    addi r4, r1, 0x280
    lwz r6, 0x78(r1)
    addi r5, r1, 0x30
    lwz r0, 0x7c(r1)
    stw r8, 0x30(r1)
    stw r7, 0x34(r1)
    stw r6, 0x38(r1)
    stw r0, 0x3c(r1)
    bl long2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_8019AD04
lbl_8019AA10:
    subf r19, r18, r21
    b lbl_8019AD48
    lbz r0, 0x74(r1)
    cmplwi r0, 0x9
    bne lbl_8019AA38
    mr r3, r27
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
    b lbl_8019AA48
lbl_8019AA38:
    mr r3, r27
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
lbl_8019AA48:
    lwz r7, 0x70(r1)
    addi r3, r1, 0x280
    lwz r6, 0x74(r1)
    addi r4, r1, 0x20
    lwz r5, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r7, 0x20(r1)
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r0, 0x2c(r1)
    bl float2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_8019AD04
    subf r19, r3, r21
    b lbl_8019AD48
    lbz r0, 0x74(r1)
    cmplwi r0, 0x9
    bne lbl_8019AAA8
    mr r3, r27
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
    b lbl_8019AAB8
lbl_8019AAA8:
    mr r3, r27
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
lbl_8019AAB8:
    lwz r7, 0x70(r1)
    addi r3, r1, 0x280
    lwz r6, 0x74(r1)
    addi r4, r1, 0x10
    lwz r5, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r7, 0x10(r1)
    stw r6, 0x14(r1)
    stw r5, 0x18(r1)
    stw r0, 0x1c(r1)
    bl double2hex
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_8019AD04
    subf r19, r3, r21
    b lbl_8019AD48
    lbz r0, 0x74(r1)
    cmplwi r0, 0x5
    bne lbl_8019AB64
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    cmpwi r28, 0x0
    lwz r4, 0x0(r3)
    beq lbl_8019AB3C
    cmpwi r4, 0x0
    bne lbl_8019AB3C
    li r3, 0x0
    li r4, 0x0
    li r5, -0x1
    bl __msl_runtime_constraint_violation_s
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AB3C:
    cmpwi r4, 0x0
    bne lbl_8019AB48
    la r4, at_wstringBase0_8049C400
lbl_8019AB48:
    addi r3, r1, 0x80
    li r5, 0x200
    bl wcstombs
    cmpwi r3, 0x0
    blt lbl_8019AD04
    addi r18, r1, 0x80
    b lbl_8019AB74
lbl_8019AB64:
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r18, 0x0(r3)
lbl_8019AB74:
    cmpwi r28, 0x0
    beq lbl_8019AB9C
    cmpwi r18, 0x0
    bne lbl_8019AB9C
    li r3, 0x0
    li r4, 0x0
    li r5, -0x1
    bl __msl_runtime_constraint_violation_s
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AB9C:
    cmpwi r18, 0x0
    bne lbl_8019ABA8
    addi r18, r22, 0x24
lbl_8019ABA8:
    lbz r0, 0x73(r1)
    cmpwi r0, 0x0
    beq lbl_8019ABDC
    lbz r0, 0x72(r1)
    lbz r19, 0x0(r18)
    addi r18, r18, 0x1
    cmpwi r0, 0x0
    beq lbl_8019AD48
    lwz r0, 0x7c(r1)
    cmpw r19, r0
    ble lbl_8019AD48
    mr r19, r0
    b lbl_8019AD48
lbl_8019ABDC:
    lbz r0, 0x72(r1)
    cmpwi r0, 0x0
    beq lbl_8019AC0C
    lwz r19, 0x7c(r1)
    mr r3, r18
    li r4, 0x0
    mr r5, r19
    bl memchr
    cmpwi r3, 0x0
    beq lbl_8019AD48
    subf r19, r18, r3
    b lbl_8019AD48
lbl_8019AC0C:
    mr r3, r18
    bl strlen
    mr r19, r3
    b lbl_8019AD48
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    cmpwi r28, 0x0
    lwz r3, 0x0(r3)
    beq lbl_8019AC4C
    li r3, 0x0
    li r4, 0x0
    li r5, -0x1
    bl __msl_runtime_constraint_violation_s
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AC4C:
    lbz r0, 0x74(r1)
    cmpwi r0, 0x0
    beq lbl_8019AC8C
    cmpwi r0, 0x2
    beq lbl_8019AC94
    cmpwi r0, 0x3
    beq lbl_8019AC9C
    cmpwi r0, 0x6
    beq lbl_8019ACA4
    cmpwi r0, 0x7
    beq lbl_8019ACB4
    cmpwi r0, 0x8
    beq lbl_8019ACBC
    cmpwi r0, 0x4
    beq lbl_8019ACC4
    b lbl_8019AEE4
lbl_8019AC8C:
    stw r17, 0x0(r3)
    b lbl_8019AEE4
lbl_8019AC94:
    sth r17, 0x0(r3)
    b lbl_8019AEE4
lbl_8019AC9C:
    stw r17, 0x0(r3)
    b lbl_8019AEE4
lbl_8019ACA4:
    stw r17, 0x4(r3)
    srawi r0, r17, 31
    stw r0, 0x0(r3)
    b lbl_8019AEE4
lbl_8019ACB4:
    stw r17, 0x0(r3)
    b lbl_8019AEE4
lbl_8019ACBC:
    stw r17, 0x0(r3)
    b lbl_8019AEE4
lbl_8019ACC4:
    stw r17, 0x4(r3)
    srawi r0, r17, 31
    stw r0, 0x0(r3)
    b lbl_8019AEE4
    mr r3, r27
    addi r18, r1, 0x80
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    li r19, 0x1
    stb r0, 0x80(r1)
    b lbl_8019AD48
    stb r23, 0x80(r1)
    addi r18, r1, 0x80
    li r19, 0x1
    b lbl_8019AD48
lbl_8019AD04:
    mr r3, r16
    bl strlen
    cmpwi r3, 0x0
    mr r5, r3
    add r17, r17, r3
    beq lbl_8019AD40
    mr r12, r25
    mr r3, r26
    mr r4, r16
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019AD40
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AD40:
    mr r3, r17
    b lbl_8019AEF4
lbl_8019AD48:
    lbz r0, 0x70(r1)
    mr r16, r19
    cmpwi r0, 0x0
    beq lbl_8019AE64
    cmplwi r0, 0x2
    li r3, 0x20
    bne lbl_8019AD68
    li r3, 0x30
lbl_8019AD68:
    stb r3, 0x9(r1)
    lbz r0, 0x0(r18)
    extsb r0, r0
    cmpwi r0, 0x2b
    beq lbl_8019AD8C
    cmpwi r0, 0x2d
    beq lbl_8019AD8C
    cmpwi r0, 0x20
    bne lbl_8019ADC8
lbl_8019AD8C:
    extsb r0, r3
    cmpwi r0, 0x30
    bne lbl_8019ADC8
    mr r12, r25
    mr r3, r26
    mr r4, r18
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019ADC0
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019ADC0:
    addi r18, r18, 0x1
    subi r19, r19, 0x1
lbl_8019ADC8:
    lbz r0, 0x70(r1)
    cmplwi r0, 0x2
    bne lbl_8019AE58
    lbz r0, 0x75(r1)
    cmplwi r0, 0x61
    beq lbl_8019ADE8
    cmplwi r0, 0x41
    bne lbl_8019AE58
lbl_8019ADE8:
    cmpwi r19, 0x2
    bge lbl_8019ADF8
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019ADF8:
    mr r12, r25
    mr r3, r26
    mr r4, r18
    li r5, 0x2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019AE20
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AE20:
    subi r19, r19, 0x2
    addi r18, r18, 0x2
    b lbl_8019AE58
lbl_8019AE2C:
    mr r12, r25
    mr r3, r26
    addi r4, r1, 0x9
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019AE54
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AE54:
    addi r16, r16, 0x1
lbl_8019AE58:
    lwz r0, 0x78(r1)
    cmpw r16, r0
    blt lbl_8019AE2C
lbl_8019AE64:
    cmpwi r19, 0x0
    beq lbl_8019AE94
    mr r12, r25
    mr r3, r26
    mr r4, r18
    mr r5, r19
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019AE94
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AE94:
    lbz r0, 0x70(r1)
    cmpwi r0, 0x0
    bne lbl_8019AEE0
    b lbl_8019AED4
lbl_8019AEA4:
    mr r12, r25
    mr r3, r26
    stb r24, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_8019AED0
    li r3, -0x1
    b lbl_8019AEF4
lbl_8019AED0:
    addi r16, r16, 0x1
lbl_8019AED4:
    lwz r0, 0x78(r1)
    cmpw r16, r0
    blt lbl_8019AEA4
lbl_8019AEE0:
    add r17, r17, r16
lbl_8019AEE4:
    lbz r0, 0x0(r15)
    extsb. r0, r0
    bne lbl_8019A6A4
lbl_8019AEF0:
    mr r3, r17
lbl_8019AEF4:
    lmw r15, 0x28c(r1)
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

// asm_to_cpp: fn_8019AFCC
asm void fn_8019AFCC() {
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    bne cr1, lbl_8019B008
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_8019B008:
    lis r31, __files@ha
    stw r4, 0xc(r1)
    addi r31, r31, __files@l
    li r4, -0x1
    stw r3, 0x8(r1)
    addi r3, r31, 0x50
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    bl fwide
    cmpwi r3, 0x0
    blt lbl_8019B04C
    li r3, -0x1
    b lbl_8019B080
lbl_8019B04C:
    addi r4, r1, 0x88
    addi r0, r1, 0x8
    lis r5, 0x100
    lis r3, __FileWrite@ha
    stw r5, 0x68(r1)
    addi r6, r1, 0x68
    mr r5, r30
    addi r3, r3, __FileWrite@l
    stw r4, 0x6c(r1)
    addi r4, r31, 0x50
    li r7, 0x0
    stw r0, 0x70(r1)
    bl __pformatter_8019A65C
lbl_8019B080:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

// asm_to_cpp: fn_8019B3E8
asm void fn_8019B3E8() {
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmplwi r4, 0x2
    stw r0, 0x44(r1)
    stmw r19, 0xc(r1)
    mr r27, r3
    mr r28, r5
    mr r29, r6
    blt lbl_8019B544
    srwi r7, r4, 1
    slwi r0, r5, 1
    addi r31, r7, 0x1
    subi r6, r4, 0x1
    subi r7, r31, 0x1
    mr r30, r4
    mullw r4, r5, r7
    subf r25, r0, r5
    mullw r0, r5, r6
    add r23, r3, r4
    mullw r26, r31, r5
    add r22, r3, r0
lbl_8019B43C:
    cmplwi r31, 0x1
    ble lbl_8019B454
    subf r26, r28, r26
    subf r23, r28, r23
    subi r31, r31, 0x1
    b lbl_8019B490
lbl_8019B454:
    subi r3, r22, 0x1
    subi r4, r23, 0x1
    addi r5, r28, 0x1
    b lbl_8019B478
lbl_8019B464:
    lbz r6, 0x1(r4)
    lbz r0, 0x1(r3)
    stbu r0, 0x1(r4)
    extsb r6, r6
    stbu r6, 0x1(r3)
lbl_8019B478:
    subic. r5, r5, 0x1
    bne lbl_8019B464
    subi r30, r30, 0x1
    cmplwi r30, 0x1
    beq lbl_8019B544
    subf r22, r28, r22
lbl_8019B490:
    add r0, r26, r25
    mr r24, r31
    add r20, r27, r0
    b lbl_8019B534
lbl_8019B4A0:
    slwi r24, r24, 1
    mr r21, r20
    subi r0, r24, 0x1
    mullw r0, r28, r0
    cmplw r24, r30
    add r20, r27, r0
    bge lbl_8019B4E4
    add r19, r20, r28
    mr r12, r29
    mr r3, r20
    mr r4, r19
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_8019B4E4
    mr r20, r19
    addi r24, r24, 0x1
lbl_8019B4E4:
    mr r12, r29
    mr r3, r21
    mr r4, r20
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_8019B43C
    subi r3, r20, 0x1
    subi r4, r21, 0x1
    addi r5, r28, 0x1
    b lbl_8019B52C
lbl_8019B510:
    lbz r6, 0x1(r4)
    lbz r0, 0x1(r3)
    stb r0, 0x1(r4)
    extsb r6, r6
    addi r4, r4, 0x1
    stb r6, 0x1(r3)
    addi r3, r3, 0x1
lbl_8019B52C:
    subic. r5, r5, 0x1
    bne lbl_8019B510
lbl_8019B534:
    slwi r0, r24, 1
    cmplw r0, r30
    ble lbl_8019B4A0
    b lbl_8019B43C
lbl_8019B544:
    lmw r19, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

// asm_to_cpp: rand
asm int rand() {
    nofralloc
    lis r3, 0x41c6
    lwz r4, lbl_8049C408
    addi r0, r3, 0x4e6d
    mullw r3, r4, r0
    addi r0, r3, 0x3039
    stw r0, lbl_8049C408
    extrwi r3, r0, 15, 1
    blr
}

// asm_to_cpp: fn_8019B578
asm void fn_8019B578() {
    nofralloc
    stw r3, lbl_8049C408
    blr
}
