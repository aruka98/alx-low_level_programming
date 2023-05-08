#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - function Entry point
 * @a: array
*/
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%s", a[i][j]);
		printf("\n");
	}
}
