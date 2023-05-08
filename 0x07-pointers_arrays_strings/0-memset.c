#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _memset - function that fills memory with a constant byte
* @s: input 1
* @b: inout 2
* @n: input 3
* Return: output pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
