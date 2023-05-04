#include "main.h"
#include <string.h>

/**
* _strncat - function that concatenates 2 inputs
* @dest: first input and return
* @src: second input
* @n: number of caracters
* Return: output char pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

