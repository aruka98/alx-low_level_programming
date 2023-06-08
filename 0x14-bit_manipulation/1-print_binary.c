#include "main.h"

/**
  * print_binary - fuct printd binary of a number
  * @n: input long int
*/

void print_binary(unsigned long int n)
{
	int ciel, prt;

	ciel = sizeof(n) * 8;
	prt = 0;

	while (ciel)
	{
		if (n & 1L << --ciel)
		{
			_putchar('1');
			prt++;
		}
		else if (prt)
			_putchar('0');
	}
	if (!prt)
		_putchar('0');
}
