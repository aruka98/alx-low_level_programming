#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add -function addition
 * @a: input 1
 * @b: input 2
 * Return: output
*/

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function sub
 * @a: input 1
 * @b: input 2
 * Return: output
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function product
 * @a: input 1
 * @b: input 2
 * Return: output
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function division
 * @a: input 1
 * @b: input 2
 * Return: output
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function modulo
 * @a: input 1
 * @b: input 2
 * Return: output
*/

int op_mod(int a, int b)
{
	return (a % b);
}
