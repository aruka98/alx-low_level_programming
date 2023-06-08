#include "main.h"

/**
  * set_bit - fct sets the value of a bit to 1 at a given idx
  * @n: pointer long int
  * @index: input int
  * Return: output int
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
