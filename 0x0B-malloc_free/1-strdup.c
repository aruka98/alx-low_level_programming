#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - function
* @str: input pointer char
* Return: output char
*/

char *_strdup(char *str)
{
	char *ptr;
	int longt, i;

	longt = sizeof(str);

	ptr = malloc(longt * sizeof(char));

	if (str == NULL || ptr == NULL)
		return (NULL);
	for (i = 0; i < longt; i++)
		ptr[i] = str[i];

	return (ptr);
}
