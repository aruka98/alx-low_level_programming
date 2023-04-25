#include "main.h"

/**
  * _islower - function
*/

int _islower(int c);
{
	int ret;

	if (c <= 122 && c >= 97)
		ret = 1;
	else
		ret = 0;

	return (ret);
}
