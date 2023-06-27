#include "main.h"

/**
 * handele_percent - prints empty space if it finds %
 * Return: 1.
 */
int handele_percent(void)
{
	_putchar(37);

	return (1);
}

/**
 * handle_char - prints char argument if %c is found
 * @val: macro needed by va_arg
 * Return: 1
 */
int handle_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}

/**
 * string_hadler - print a string argument if %c is found
 * @val: macro needed va_arg
 * Return: len of s
 */

int string_hadler(va_list val)
{
	char *str;
	int i, len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = slen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = slen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}


