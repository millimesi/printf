#ifndef MAIN_H_
#define MAIN_H_
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int slen(char *s);
int dlen(int d);
char *itoa(int a);
int _abs(int n);


/*helper functions*/
void char_handler(va_list entry);
void s_handler(va_list entry);
void defoult(const char *format, int i);
int error_handler(const char *format, int i);
void intger_handler(va_list entry);
void switch0(const char *format, int i, va_list entry);

#endif
