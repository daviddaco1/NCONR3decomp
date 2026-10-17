#ifndef _STDARG_H
#define _STDARG_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct __va_list_struct {
	char gpr;
	char fpr;
	char reserved[2];
	char* input_arg_area;
	char* reg_save_area;
} __va_list[1];

typedef __va_list va_list;

void __builtin_va_info(void*);

#define va_start(ap, fmt) __builtin_va_info(&ap)
#define va_end(ap) ((void)0)

#ifdef __cplusplus
}
#endif

#endif
