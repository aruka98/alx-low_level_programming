#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * print_strings - function that print strings
  * @separator: input du separateur
  * @n: nombre de input
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char* stg;

	va_list parametersInfos;

	va_start(parametersInfos, n);

	for (i = 1; i <= n; i++)
	{
		stg = va_arg(parametersInfos, char*);

		if (stg == NULL)
			stg = "nil";

		if (i == 1)
			printf("%s", stg);
		else
		{
			if (separator)
				printf("%s", separator);
			printf("%s", stg);
		}
	}
	printf("\n");

	va_end(parametersInfos);
}
