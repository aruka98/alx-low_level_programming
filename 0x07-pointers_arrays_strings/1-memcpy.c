#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* * _memcpy - function that copies memory area
* @dest: input 1
* @src: input 2
* @n: input 3
* Return: char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
