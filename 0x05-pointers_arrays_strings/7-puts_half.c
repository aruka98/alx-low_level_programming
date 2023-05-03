#include "main.h"
#include <string.h>

/**
* puts_half - function that print the second half of a string
* @str: input pointer
*/

void puts_half(char *str)
{
	int len, i, n;

	len = strlen(str);

	if (len % 2 != 0)
		n = (len + 1) / 2;
	else
		n = len / 2;

	for (i = n; i < len; i++)
		_putchar(*(s + i));
	_putchar('\n');
}
