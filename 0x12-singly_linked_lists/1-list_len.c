#include "lists.h"

/**
  * list_len - function that returns the num of elm in a linked list
  * @h: input list_t
  *
  * Return: output size_t
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
