#include "main.h"

/**
  * clear_bit - fct sets value bit to 0 at idx
  * @n: pointer int
  * @index: input int
  * Return: output int
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;

	return (1);
}
