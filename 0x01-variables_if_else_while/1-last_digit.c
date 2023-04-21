#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - function
  * Return: always 0
*/

int main(void)
{
	int n;
	int rest;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rest = abs(n % 10);

	printf("Last digit of %d is %d and is ", n, rest);
	if (rest > 5)
		printf("greater than 5\n");
	if (rest == 0)
		printf("0\n");
	if (rest < 6 && rest != 0)
		printf("less than 6 and not 0\n");

	return (0);
}
