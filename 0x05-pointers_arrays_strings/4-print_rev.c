#include "main.h"
#include <string.h>

/**
  * print_rev - function reverses a string
  * @s: char input
*/

void print_rev(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
