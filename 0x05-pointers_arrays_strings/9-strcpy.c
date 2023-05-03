#include "main.h"

/**
 * char *_strcpy - a function
 * @dest: first input
 * @src: second input
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (i = 0 ; i < l ; i++)
	{
		dest[i] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}
