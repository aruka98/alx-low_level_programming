#include "main.h"

/**
  * flip_bits - fct returns nbr bit u need to flip to
  * get from one nbr to another
  * @n: input long int
  * @m: input long int
  * Return: int
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = n ^ m;
	unsigned int nbr = 0;

	while (val)
	{
		if (val & 1ul)
			nbr++;
		val = val >> 1;
	}
	return (nbr);
}
