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
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
