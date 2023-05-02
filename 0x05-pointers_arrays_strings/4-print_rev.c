#include "main.h"

/**
  * print_rev - function reverses a string
  * _strlen - function lentgh
  * @s: char input
*/

void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
