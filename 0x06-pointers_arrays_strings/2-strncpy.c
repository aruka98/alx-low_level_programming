#include "main.h"
#include <string.h>

/**
* _strncpy - function that copy a string to another
* @dest: first string input
* @src: second input
* @n: number input
* Return: pointer char with the copy 
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, l1, l2;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	return (dest);
}
