#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * string_nconcat - function
  * @s1: input 1
  * @s2: input 2
  * @n: input 3
  * Return: output char pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, longt1, longt2;

	i = 0;
	j = 0;
	longt1 = 0;
	longt2 = 0;

	while (s1 && s1[longt1])
		longt1++;

	while (s2 && s2[longt2])
		longt2++;

	if (n < longt2)
		s = malloc(sizeof(char) * (longt1 + n + 1));
	else
		s = malloc(sizeof(char) * (longt1 + longt2 + 1));

	if (!s)
		return (NULL);

	while (i < longt1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < longt2 && i < (longt1 + n))
		s[i++] = s2[j++];

	while (n >= longt2 && i < (longt1 + longt2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
