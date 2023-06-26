#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
  *itoa - converts integer to string
  *@a: the intger to be converted
  *Return: a string
  *
  */

char *itoa(int a)
{
	int i;
	int len = dlen(a);
	int temp = a;
	char *arr = malloc((len + 1) * (sizeof(char)));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = len - 1; i >= 0; i--)
	{
		int digit = temp % 10;

		arr[i] = '0' + digit;
		temp = temp / 10;
	}
	return (arr);
}
