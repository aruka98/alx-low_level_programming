#include "main.h"
#include <string.h>

/**
* puts2 - function
* @str: input
*/

void puts2(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
