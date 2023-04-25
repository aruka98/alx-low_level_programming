#include "main.h"
/**
  * _isalpha - function
  * @c: input
  * Return: 1 or 0
*/
int _isalpha(int c)
{
	int ret;

	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		ret = 1;
	else
		ret = 0;
	return (ret);
}
