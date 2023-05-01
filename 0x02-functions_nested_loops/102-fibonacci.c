#include <stdio.h>

/**
  * main - function
  * Return: always 0
*/

int main(void)
{
	long int n_2, n_1, n, n1;
	int i;

	n_2 = 1;
	n_1 = 2;

	printf("%ld, %ld", n_2, n_1);

	for (i = 0; i <= 24; i++)
	{
		n = n_1 + n_2;

		printf(", %ld", n);

		n1 = n + n_1;

		printf(", %ld", n1);

		n_1 = n1;
		n_2 = n;
	}
	printf("\n");
	return (0);
}
