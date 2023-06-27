#include "main.h"
/**
 * _printf - is a function that works like printf
 * @format: array of chars
 * Return: the number of bytes is written
 *
 *
 */
int _printf(const char * const format, ...)
{
	matcher marr[] = {
		{"%s", string_hadler}, {"%c", handle_char},
		{"%%", handele_percent},
		{"%i", int_handler}, {"%d", decimal_handler}
	};

	va_list ap;
	int i = 0, size, len = 0;

	va_start(ap, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
label:
	while (format[i] != '\0')
	{
		size = 4;
		while (size >= 0)
		{
			if (marr[size].specifier[0] == format[i]
					&& marr[size].specifier[1] == format[i + 1])
			{
				len += marr[size].func(ap);
				i = i + 2;
				goto label;
			}
			size--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(ap);
	return (len);
}
