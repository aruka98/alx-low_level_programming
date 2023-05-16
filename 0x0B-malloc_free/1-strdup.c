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

	longt = 0;

	if (str == NULL)
		return (NULL);

	while (str[longt] != '\0')
		longt++;

	ptr = malloc((longt + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < longt; i++)
		ptr[i] = str[i];

	return (ptr);
}
