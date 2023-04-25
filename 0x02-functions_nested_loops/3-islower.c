#include "main.h"

/**
  * _islower - function
  * @c: is the input
  * Return: 1 for lowercase and 0 fot others
*/

int _islower(int c)
{
	int ret;

	if (c <= 122 && c >= 97)
		ret = 1;
	else
		ret = 0;

	return (ret);
}
