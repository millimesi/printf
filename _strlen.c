#include "main.h"

/**
  *slen -  function that returns the length of string
  *@s: the string in which its length will be determined
  *Return: the length of s
  *
  *
  */

int slen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
