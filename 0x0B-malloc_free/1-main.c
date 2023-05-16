#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	char *s;
	int size;

	s = _strdup("Best School!");

	size = sizeof(s);

	printf("%d\n", size);

	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}

	printf("%s\n", s);
	free(s);
	return (0);
}
