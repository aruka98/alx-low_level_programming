#include "main.h"
#include <string.h>

/**
* rev_string - function
* @s: input
*/
void rev_string(char *s)
{
	int i, len, a;

	len = strlen(s);

	for (i = 0; i < (len / 2); i++)
	{
		a = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = a;
	}
}
