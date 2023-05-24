#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
  * array_iterator - function make actions in a array
  * @array: input array pointer
  * @size: of the array
  * @action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
