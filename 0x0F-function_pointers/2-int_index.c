#include "function_pointers.h"
#include <stdio.h>

/**
  * int_index - function search for an integer
  * @array: input array
  * @size: size of array
  * @cmp: function pointer
  * Return: output int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0)
				return (i);
	}
	return (-1);
}
