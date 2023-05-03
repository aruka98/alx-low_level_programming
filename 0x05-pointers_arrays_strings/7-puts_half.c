#include "main.h"
#include <string.h>

/**
* puts_half - function that print the second half of a string
* @str: input pointer
*/

void puts_half(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = len / 2; i < len; i++)
		_putchar(*(s + i));
	_putchar('\n');
}
