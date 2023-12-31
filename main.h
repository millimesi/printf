#ifndef MAIN_H_
#define MAIN_H_


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>


/**
 * struct fmt - matcher
 * @specifier : type char pointer
 * @func: func pointer
 *
 */

typedef struct fmt
{
	char *specifier;
	int (*func)();
} matcher;

int _printf(const char *format, ...);
int _putchar(char c);
int slen(char *s);
int handele_percent(void);
int handle_char(va_list val);
int decimal_handler(va_list args);
int int_handler(va_list args);
int string_hadler(va_list val);
int error(const char *s);

#endif
