#include "main.h"

/**
  * _sqrt_recursion - function
  * @n: input
  * Return: output int
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
  * _sqrt - function with second input
  * @n: first input calculate sqrt root
  * @i: second input iterator for
  * Return: output
*/

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt(n, i + 1));
}
