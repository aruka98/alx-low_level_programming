#include "main.h"

/**
  * get_bit - fct returns value of a bit at an index
  * @n: input long int
  * @index: input int
  * Return: output int
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
