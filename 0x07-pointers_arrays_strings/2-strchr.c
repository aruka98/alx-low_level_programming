#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strchr - function that locates a character in a string
* @s: input 1
* @c: input 2
* Return: char
*/

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	p = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
		}
	}
	return (p);
}
