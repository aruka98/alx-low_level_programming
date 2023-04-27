#include "main.h"

/**
  * _isupper - function
  * @c: is the input
  * Return: 1 for upcase and 0 fot others
 */

int _isupper(int c)
{
	int ret;

	if (c <= 'Z' && c >= 'A')
		ret = 1;
	else
		ret = 0;

	return (ret);
}
