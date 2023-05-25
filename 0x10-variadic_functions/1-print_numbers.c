#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * print_numbers - function printd numbers
  * @separator: input du motif
  * @n: nombre de input
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int nb;

	va_list parametersInfos;

	va_start(parametersInfos, n);

	for (i = 1; i <= n; i++)
	{
		nb = (int) va_arg(parametersInfos, int);
		if (i == 1)
			printf("%d", nb);
		else
		{
			if (separator)
				printf("%s", separator);
			printf("%d", nb);
		}
	}
	printf("\n");

	va_end(parametersInfos);
}
