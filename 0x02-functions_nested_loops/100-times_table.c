#include <stdio.h>

/**
  * print_times_table - function
  * @n: input
*/

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j != 0)
				{
					if (k < 10)
						printf("   ");
					else if (k < 100)
						printf("  ");
					else
						printf(" ");
				}
				if (j != n)
					printf("%d,", k);
				else
					printf("%d", k);
			}
			printf("\n");
		}
	}
}
