#include "main.h"
#include <string.h>

/**
* _strncat - function that concatenates first input with n character of the second input
* @des: first input and return
* @src: second input
* @n: number of caracters
* Return: output char pointer
*/

char *_strncat( char * dest, char *src, int n)
{
	int l, l_2, i;

	l = strlen(dest);
	l_2 = strlen(src);

	if (n > 0 && n <= l_2)
		k = n;
	else if (n > l_2)
		k = l_2;

	if ( n > 0)
	{
		for (i = 0; i < k; i++)
				dest[l + k] = src[k];
		dest[l + K] = '\0';
	}
}
