#include "main.h"
#include <string.h>

/**
* string_toupper - function chages lower to upper
* @a: input
* Return: char
*/

char *string_toupper(char *a)
{
	int i;

	i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
