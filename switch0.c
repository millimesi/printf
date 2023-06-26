#include <stdarg.h>
#include "main.h"

/**
  *switch0 - checks for format specifiers
  *@format: array of chars
  *@i: used in the loop
  *@entry: is a macro required by va_arg
  */


void switch0(const char *format, int i, va_list entry)
{
	switch (format[i])
	{
		case 'c':
			{
				char_handler(entry);
				break;
			}
		case 's':
			{
				s_handler(entry);
				break;
			}
		case 'i':
			{
				intger_handler(entry);
				break;
			}
		case 'd':
			{
				intger_handler(entry);
				break;
			}
		case '%':
			{
				printf_37();
				break;
			}
		default:
			{
				defoult(format, i);
			}
	}
}
