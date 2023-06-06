#include "lists.h"

/**
  * listint_len - function that returns number
  * @h: input listint struct
  * Return: output size_t
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
