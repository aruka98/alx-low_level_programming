#include "main.h"
/**
  * print_last_digit - function
  * @n: input
  * Return: output
*/
int print_last_digit(int n)
{
	int r;

	r = _abs(n);

	int ret;

	ret = r % 10;

	return (ret);
}
