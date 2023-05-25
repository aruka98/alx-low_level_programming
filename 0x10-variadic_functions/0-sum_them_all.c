#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * sum_them_all - function somme tout
  * @n: nombre de input int
  * Return: retourn la somme
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list parametersInfos;

	va_start(parametersInfos, n);

	if (n == 0)
		return (0);

	for (i = 1; i <= n; i++)
	{
		sum += (int) va_arg(parametersInfos, int);
	}

	va_end(parametersInfos);

	return (sum);
}
