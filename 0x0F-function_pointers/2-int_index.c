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
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
