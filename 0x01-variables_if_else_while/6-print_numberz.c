#include <stdio.h>
/**
  * main - function
  * Return: always zero
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
