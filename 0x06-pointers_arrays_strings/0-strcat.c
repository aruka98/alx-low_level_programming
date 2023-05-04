#include "main.h"
#include <string.h>

/**
* _strcat - function that concatenates 2 string
* @dest: first input string
* @ src: second input string
*/

char *_strcat(char *dest, char *src)
{
	int i, j, l;

	l = strlen(dest);
	i = 0;
	j = 0;

	while (src[j] != '\0')
	{
		dest[l + i] = src[j];
		i++;
		j++;
	}
	dest[l + j] = '\0';
	return (dest);
}
