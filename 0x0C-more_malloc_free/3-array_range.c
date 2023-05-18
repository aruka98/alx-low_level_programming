#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - function
  * @min: input 1
  * @max: input 2
  * Return: output int
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
