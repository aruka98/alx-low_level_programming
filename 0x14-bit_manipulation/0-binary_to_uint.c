#include "main.h"

/**
  * binary_to_uint - fct convert binary to a int
  * @b: pointer char
  * Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		ret = ret * 2 + (*b++ - '0');
	}
	return (ret);
}
