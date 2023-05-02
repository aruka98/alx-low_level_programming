#include "main.h"

/**
  * swap_int - function
  * @a: first input
  * @b: second input
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
