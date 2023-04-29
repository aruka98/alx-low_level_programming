#include "main.h"

/**
  * print_triangle - function print
  * @size: input
*/

void print_triangle(int size)
{
	int i, j, k, x;

	x = size;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j < x; j++)
				_putchar(' ');
			for (k = 1; k <= i; k++)
				_putchar('#');
			_putchar('\n');
			x--;
		}
	}
	else
		_putchar('\n');
}
