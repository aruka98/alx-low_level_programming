#include "lists.h"

/**
  * _strlen - function returns length of string
  * @s: input string pointer
  *
  * Return: output int
*/

int _strlen(char *s)
{
	int i = 0;

	if(!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
