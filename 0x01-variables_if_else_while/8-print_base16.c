#include <stdio.h>
/**
  * main - function
  * Return: zero
*/
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	ch = 'a';

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
