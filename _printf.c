#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
  *_printf - prints everthing
  *@format: array of chars
  *Return: number of bytes to write
  *
  *
  */


int _printf(const char *format, ...)
{
	char *error = "error - too few arguments to function ‘_printf’\n";

	if (format)
	{
		int i = 0;
		int len = 0;
		va_list entry;

		va_start(entry, format);
		while (format[i])
		{
			if (format[i] == '%')
			{
				i++;
				switch0(format, i, entry);
			}
			else
			{
				error_handler(format, i);
			}
			i++;
			len++;
		}
		return (len);
		va_end(entry);
	}
	return (write(2, error, 52));
}
