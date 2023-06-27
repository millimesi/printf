#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints c
 * @c: The character to print
 * Return: number of bytes written
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
