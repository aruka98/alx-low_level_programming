#include "main.h"
/**
  * print_last_digit - function
  * @n: input
  * Return: output
*/
int print_last_digit(int n)
{
	int a, rest;

	a = _abs(n);
	rest = a % 10;

	return (rest);
}
