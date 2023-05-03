#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* print_array - function that print array
* @a: pointer input
* @n: int input
*/

void print_array(int *a, int n)
{
	int i;

	printf("%d", *a);

	for (i = 1; i < n; i++)
	{
		printf(", %d", *(a + i));
	}
	printf("\n");
}
