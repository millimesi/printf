#include "main.h"
/**
  *dlen - calculates the length of integer
  *@d: the integer to be calculated
  *Return: the length of integer
  *
  */
int dlen(int d)
{
	int i = 1;

	while ((d / 10) != 0)
	{
		d = d / 10;
		i++;
	}
	return (i);
}
