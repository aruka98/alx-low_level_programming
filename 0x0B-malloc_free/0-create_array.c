#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - function creates array
  * @size: input
  * @c: input char
  * Return: char pointer
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
	{
		return (ptr);
	}
	else
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;

		return (ptr);
	}
}
