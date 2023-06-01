#include "lists.h"

/**
  * print_list - function that print all the elements of a list_t
  * @h: input list_t
  *
  * Return: output size_t
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

/**
* _strlen - function returns length of string
* @s: input string pointer
*
* Return: output int
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
