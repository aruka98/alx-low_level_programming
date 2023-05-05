#include "main.h"
#include <string.h>

/**
* reverse_array - function
* @a: array input
* @n: size of array
*/

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n--; i++)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}
