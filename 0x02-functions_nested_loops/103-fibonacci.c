#include <stdio.h>

/**
  * main - function
  * Return: always 0
*/

int main(void)
{
	long int n_2, n_1, n, n1, sum;

	n_2 = 1;
	n_1 = 2;
	n1 = 0;
	sum = 2;

	while (n1 < 4000000)
	{
		n = n_1 + n_2;
		n1 = n + n_1;
		n_1 = n1;
		n_2 = n;

		if (n % 2 == 0)
			sum += n;
		if (n1 % 2 == 0)
			sum += n1;
	}
	printf("%ld\n", sum);
	return (0);
}
