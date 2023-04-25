#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * print_last_digit - function
  * @n: input
  * Return: output
*/
int print_last_digit(int n)
{
	int a, rest;

	a = abs(n);
	rest = a % 10;

	return (rest);
}
