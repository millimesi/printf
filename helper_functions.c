#include <unistd.h>
#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
  *char_handler - handles char chracters
  *@entry: is a macro required by va_arg
  *
  */

void char_handler(va_list entry)
{
	char c = va_arg(entry, int);

	write(1, &c, 1);
}

/**
  *s_handler - handles string
  *@entry: is a macro required by va_arg
  *
  */

void s_handler(va_list entry)
{
	 char *str = va_arg(entry, char *);

	 write(1, str, slen(str));
}
/**
  *defoult - its invoked when there is nothing to handle
  *@format: is a array of chars
  *@i: used in the loop
  *
  */

void defoult(const char *format, int i)
{
	write(1, &format[i - 1], 1);
	write(1, &format[i], 1);
}

/**
  *error_handler - checks for error
  *@format: array of chars
  *@i: used in the loop
  *Return: -1
  *
  */
int error_handler(const char *format, int i)
{
	if ((write(1, &format[i], 1)) == -1)
		return (-1);
	return (0);
}


/**
  *intger_handler - handles integer
  *@entry: is a macro required by va_arg
  *
  */

void intger_handler(va_list entry)
{
	char *digit, c;
	int n, ch;
	int deci = va_arg(entry, int);

	ch = 0;
	c = '-';
	if (deci < 0)
	{
		n = _abs(deci);
		digit = itoa(n);
		ch = 1;
	}
	else
		digit = itoa(deci);
	if (ch == 1)
	{
		write(1, &c, 1);
	}
	/*printf("%d\n", n);*/
	write(1, digit, dlen(deci));
	free(digit);
}
